unit blenderSkeleton;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateblenderSkeleton: TX3DRootNode;

implementation

uses CastleVectors;

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

procedure InitblenderSkeletonPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 3;
{ METHOD .Component }
X3D0.Meta['title'] := 'blenderSkeleton.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['copyright'] := '2023';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://www.web3D.org';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Blender 4.0.1';
{ METHOD .Meta }
{ METHOD .Head }
Group8 := TGroupNode.Create;
NavigationInfo9 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(NavigationInfo9);
Background10 := TBackgroundNode.Create;
Background10.SetGroundColor([Vector3(0.05087608844041824,0.05087608844041824,0.05087608844041824)]);
Background10.SetSkyColor([Vector3(0.05087608844041824,0.05087608844041824,0.05087608844041824)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(Background10);
Transform11 := TTransformNode.Create;
Shape12 := TShapeNode.Create;
Box13 := TBoxNode.Create;
Box13.Size := Vector3(0.05,0.05,0.05);
{ METHOD .Geometry }
Shape12.Geometry := Box13;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance14.Material := Material15;
{ METHOD .Appearance }
Shape12.Appearance := Appearance14;
{ METHOD .FdChildren.Add }
Transform11.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(Transform11);
Transform16 := TTransformNode.Create;
Shape17 := TShapeNode.Create;
Sphere18 := TSphereNode.Create;
Sphere18.Radius := 0.06;
{ METHOD .Geometry }
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1,0.5,0);
Material20.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance19.Material := Material20;
{ METHOD .Appearance }
Shape17.Appearance := Appearance19;
end;

procedure InitblenderSkeletonPart1;
begin

{ METHOD .FdChildren.Add }
Transform16.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(Transform16);
Transform21 := TTransformNode.Create;
Transform21.Rotation := Vector4(0.20594,0.33152,0.9207,1.92627);
Transform21.Translation := Vector3(4.07625,1.00545,5.90386);
PointLight22 := TPointLightNode.Create;
PointLight22.Location := Vector3(-8.940696716308594e-8,-3.5762786865234375e-7,4.6193599700927734e-7);
PointLight22.Radius := 40;
{ METHOD .FdChildren.Add }
Transform21.FdChildren.Add(PointLight22);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(Transform21);
Transform23 := TTransformNode.Create;
Transform23.Rotation := Vector4(0.77344,0.33383,0.53884,1.35072);
Transform23.Translation := Vector3(7.35889,-6.92579,4.95831);
Viewpoint24 := TViewpointNode.Create;
Viewpoint24.FieldOfView := 0.6911112070083618;
Viewpoint24.Orientation := Vector4(-3.627339850709177e-8,-0.4730778932571411,-0.8810206651687622,0);
Viewpoint24.Position := Vector3(-3.927080456378462e-7,-2.123415470123291e-7,2.384185791015625e-7);
{ METHOD .FdChildren.Add }
Transform23.FdChildren.Add(Viewpoint24);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(Transform23);
Transform25 := TTransformNode.Create;
HAnimHumanoid26 := THAnimHumanoidNode.Create;
HAnimHumanoid26.Version := '2.0';
HAnimJoint27 := THAnimJointNode.Create;
HAnimSegment28 := THAnimSegmentNode.Create;
TouchSensor29 := TTouchSensorNode.Create;
TouchSensor29.Description := 'joint Armature segment SEGMENT_FOR_Armature';
{ METHOD .FdChildren.Add }
HAnimSegment28.FdChildren.Add(TouchSensor29);
Transform30 := TTransformNode.Create;
{ METHOD .FdChildren.Add }
Transform30.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment28.FdChildren.Add(Transform30);
HAnimSite32 := THAnimSiteNode.Create;
Transform33 := TTransformNode.Create;
{ METHOD .FdChildren.Add }
Transform33.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite32.FdChildren.Add(Transform33);
{ METHOD .FdChildren.Add }
HAnimSegment28.FdChildren.Add(HAnimSite32);
{ METHOD .FdChildren.Add }
HAnimJoint27.FdChildren.Add(HAnimSegment28);
HAnimJoint35 := THAnimJointNode.Create;
HAnimJoint35.Center := Vector3(-0.0002,-0.1178,0.8174);
HAnimSegment36 := THAnimSegmentNode.Create;
TouchSensor37 := TTouchSensorNode.Create;
end;

procedure InitblenderSkeletonPart2;
begin

TouchSensor37.Description := 'joint sacrum segment SEGMENT_FOR_sacrum';
{ METHOD .FdChildren.Add }
HAnimSegment36.FdChildren.Add(TouchSensor37);
Transform38 := TTransformNode.Create;
Transform38.Translation := Vector3(-0.0002,-0.1178,0.8174);
{ METHOD .FdChildren.Add }
Transform38.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment36.FdChildren.Add(Transform38);
HAnimSite40 := THAnimSiteNode.Create;
Transform41 := TTransformNode.Create;
Transform41.Translation := Vector3(-0.0002,-0.1178,0.8174);
{ METHOD .FdChildren.Add }
Transform41.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite40.FdChildren.Add(Transform41);
{ METHOD .FdChildren.Add }
HAnimSegment36.FdChildren.Add(HAnimSite40);
{ METHOD .FdChildren.Add }
HAnimJoint35.FdChildren.Add(HAnimSegment36);
HAnimJoint43 := THAnimJointNode.Create;
HAnimJoint43.Center := Vector3(-0.0002,-0.1178,0.6986);
HAnimSegment44 := THAnimSegmentNode.Create;
TouchSensor45 := TTouchSensorNode.Create;
TouchSensor45.Description := 'joint pelvis segment SEGMENT_FOR_pelvis';
{ METHOD .FdChildren.Add }
HAnimSegment44.FdChildren.Add(TouchSensor45);
Transform46 := TTransformNode.Create;
Transform46.Translation := Vector3(-0.0002,-0.1178,0.6986);
{ METHOD .FdChildren.Add }
Transform46.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment44.FdChildren.Add(Transform46);
HAnimSite48 := THAnimSiteNode.Create;
Transform49 := TTransformNode.Create;
Transform49.Translation := Vector3(-0.0002,-0.1178,0.6986);
{ METHOD .FdChildren.Add }
Transform49.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite48.FdChildren.Add(Transform49);
{ METHOD .FdChildren.Add }
HAnimSegment44.FdChildren.Add(HAnimSite48);
{ METHOD .FdChildren.Add }
HAnimJoint43.FdChildren.Add(HAnimSegment44);
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.Center := Vector3(0.0945,-0.1202,0.8181);
HAnimSegment52 := THAnimSegmentNode.Create;
TouchSensor53 := TTouchSensorNode.Create;
TouchSensor53.Description := 'joint l_thigh segment SEGMENT_FOR_l_thigh';
{ METHOD .FdChildren.Add }
HAnimSegment52.FdChildren.Add(TouchSensor53);
Transform54 := TTransformNode.Create;
Transform54.Translation := Vector3(0.0945,-0.1202,0.8181);
{ METHOD .FdChildren.Add }
Transform54.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment52.FdChildren.Add(Transform54);
end;

procedure InitblenderSkeletonPart3;
begin

HAnimSite56 := THAnimSiteNode.Create;
Transform57 := TTransformNode.Create;
Transform57.Translation := Vector3(0.0945,-0.1202,0.8181);
{ METHOD .FdChildren.Add }
Transform57.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite56.FdChildren.Add(Transform57);
{ METHOD .FdChildren.Add }
HAnimSegment52.FdChildren.Add(HAnimSite56);
{ METHOD .FdChildren.Add }
HAnimJoint51.FdChildren.Add(HAnimSegment52);
HAnimJoint59 := THAnimJointNode.Create;
HAnimJoint59.Center := Vector3(0.0924,-0.1213,0.4003);
HAnimSegment60 := THAnimSegmentNode.Create;
TouchSensor61 := TTouchSensorNode.Create;
TouchSensor61.Description := 'joint l_calf segment SEGMENT_FOR_l_calf';
{ METHOD .FdChildren.Add }
HAnimSegment60.FdChildren.Add(TouchSensor61);
Transform62 := TTransformNode.Create;
Transform62.Translation := Vector3(0.0924,-0.1213,0.4003);
{ METHOD .FdChildren.Add }
Transform62.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment60.FdChildren.Add(Transform62);
HAnimSite64 := THAnimSiteNode.Create;
Transform65 := TTransformNode.Create;
Transform65.Translation := Vector3(0.0924,-0.1213,0.4003);
{ METHOD .FdChildren.Add }
Transform65.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite64.FdChildren.Add(Transform65);
{ METHOD .FdChildren.Add }
HAnimSegment60.FdChildren.Add(HAnimSite64);
{ METHOD .FdChildren.Add }
HAnimJoint59.FdChildren.Add(HAnimSegment60);
HAnimJoint67 := THAnimJointNode.Create;
HAnimJoint67.Center := Vector3(0.0886,-0.1123,0.0869);
HAnimSegment68 := THAnimSegmentNode.Create;
TouchSensor69 := TTouchSensorNode.Create;
TouchSensor69.Description := 'joint l_talus segment SEGMENT_FOR_l_talus';
{ METHOD .FdChildren.Add }
HAnimSegment68.FdChildren.Add(TouchSensor69);
Transform70 := TTransformNode.Create;
Transform70.Translation := Vector3(0.0886,-0.1123,0.0869);
{ METHOD .FdChildren.Add }
Transform70.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment68.FdChildren.Add(Transform70);
HAnimSite72 := THAnimSiteNode.Create;
Transform73 := TTransformNode.Create;
Transform73.Translation := Vector3(0.0886,-0.1123,0.0869);
{ METHOD .FdChildren.Add }
Transform73.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite72.FdChildren.Add(Transform73);
{ METHOD .FdChildren.Add }
HAnimSegment68.FdChildren.Add(HAnimSite72);
end;

procedure InitblenderSkeletonPart4;
begin

{ METHOD .FdChildren.Add }
HAnimJoint67.FdChildren.Add(HAnimSegment68);
HAnimJoint75 := THAnimJointNode.Create;
HAnimJoint75.Center := Vector3(0.0781,-0.097,0.0283);
HAnimSegment76 := THAnimSegmentNode.Create;
TouchSensor77 := TTouchSensorNode.Create;
TouchSensor77.Description := 'joint l_navicular segment SEGMENT_FOR_l_navicular';
{ METHOD .FdChildren.Add }
HAnimSegment76.FdChildren.Add(TouchSensor77);
Transform78 := TTransformNode.Create;
Transform78.Translation := Vector3(0.0781,-0.097,0.0283);
{ METHOD .FdChildren.Add }
Transform78.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment76.FdChildren.Add(Transform78);
HAnimSite80 := THAnimSiteNode.Create;
Transform81 := TTransformNode.Create;
Transform81.Translation := Vector3(0.0781,-0.097,0.0283);
{ METHOD .FdChildren.Add }
Transform81.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite80.FdChildren.Add(Transform81);
{ METHOD .FdChildren.Add }
HAnimSegment76.FdChildren.Add(HAnimSite80);
{ METHOD .FdChildren.Add }
HAnimJoint75.FdChildren.Add(HAnimSegment76);
HAnimJoint83 := THAnimJointNode.Create;
HAnimJoint83.Center := Vector3(0.0672,-0.0835,0.0235);
HAnimSegment84 := THAnimSegmentNode.Create;
TouchSensor85 := TTouchSensorNode.Create;
TouchSensor85.Description := 'joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1';
{ METHOD .FdChildren.Add }
HAnimSegment84.FdChildren.Add(TouchSensor85);
Transform86 := TTransformNode.Create;
Transform86.Translation := Vector3(0.0672,-0.0835,0.0235);
{ METHOD .FdChildren.Add }
Transform86.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment84.FdChildren.Add(Transform86);
HAnimSite88 := THAnimSiteNode.Create;
Transform89 := TTransformNode.Create;
Transform89.Translation := Vector3(0.0672,-0.0835,0.0235);
{ METHOD .FdChildren.Add }
Transform89.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite88.FdChildren.Add(Transform89);
{ METHOD .FdChildren.Add }
HAnimSegment84.FdChildren.Add(HAnimSite88);
{ METHOD .FdChildren.Add }
HAnimJoint83.FdChildren.Add(HAnimSegment84);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.Center := Vector3(0.0644,-0.0577,0.0147);
HAnimSegment92 := THAnimSegmentNode.Create;
TouchSensor93 := TTouchSensorNode.Create;
TouchSensor93.Description := 'joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1';
end;

procedure InitblenderSkeletonPart5;
begin

{ METHOD .FdChildren.Add }
HAnimSegment92.FdChildren.Add(TouchSensor93);
Transform94 := TTransformNode.Create;
Transform94.Translation := Vector3(0.0644,-0.0577,0.0147);
{ METHOD .FdChildren.Add }
Transform94.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment92.FdChildren.Add(Transform94);
HAnimSite96 := THAnimSiteNode.Create;
Transform97 := TTransformNode.Create;
Transform97.Translation := Vector3(0.0644,-0.0577,0.0147);
{ METHOD .FdChildren.Add }
Transform97.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite96.FdChildren.Add(Transform97);
{ METHOD .FdChildren.Add }
HAnimSegment92.FdChildren.Add(HAnimSite96);
{ METHOD .FdChildren.Add }
HAnimJoint91.FdChildren.Add(HAnimSegment92);
HAnimJoint99 := THAnimJointNode.Create;
HAnimJoint99.Center := Vector3(0.0619,-0.0083,0.0059);
HAnimSegment100 := THAnimSegmentNode.Create;
TouchSensor101 := TTouchSensorNode.Create;
TouchSensor101.Description := 'joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1';
{ METHOD .FdChildren.Add }
HAnimSegment100.FdChildren.Add(TouchSensor101);
Transform102 := TTransformNode.Create;
Transform102.Translation := Vector3(0.0619,-0.0083,0.0059);
{ METHOD .FdChildren.Add }
Transform102.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment100.FdChildren.Add(Transform102);
HAnimSite104 := THAnimSiteNode.Create;
Transform105 := TTransformNode.Create;
Transform105.Translation := Vector3(0.0619,-0.0083,0.0059);
{ METHOD .FdChildren.Add }
Transform105.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite104.FdChildren.Add(Transform105);
{ METHOD .FdChildren.Add }
HAnimSegment100.FdChildren.Add(HAnimSite104);
{ METHOD .FdChildren.Add }
HAnimJoint99.FdChildren.Add(HAnimSegment100);
HAnimJoint107 := THAnimJointNode.Create;
HAnimSegment108 := THAnimSegmentNode.Create;
TouchSensor109 := TTouchSensorNode.Create;
TouchSensor109.Description := 'joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1';
{ METHOD .FdChildren.Add }
HAnimSegment108.FdChildren.Add(TouchSensor109);
Transform110 := TTransformNode.Create;
{ METHOD .FdChildren.Add }
Transform110.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment108.FdChildren.Add(Transform110);
HAnimSite112 := THAnimSiteNode.Create;
Transform113 := TTransformNode.Create;
{ METHOD .FdChildren.Add }
Transform113.FdChildren.Add(Shape12);
end;

procedure InitblenderSkeletonPart6;
begin

{ METHOD .FdChildren.Add }
HAnimSite112.FdChildren.Add(Transform113);
{ METHOD .FdChildren.Add }
HAnimSegment108.FdChildren.Add(HAnimSite112);
{ METHOD .FdChildren.Add }
HAnimJoint107.FdChildren.Add(HAnimSegment108);
{ METHOD .FdChildren.Add }
HAnimJoint99.FdChildren.Add(HAnimJoint107);
{ METHOD .FdChildren.Add }
HAnimJoint91.FdChildren.Add(HAnimJoint99);
{ METHOD .FdChildren.Add }
HAnimJoint83.FdChildren.Add(HAnimJoint91);
{ METHOD .FdChildren.Add }
HAnimJoint75.FdChildren.Add(HAnimJoint83);
HAnimJoint115 := THAnimJointNode.Create;
HAnimJoint115.Center := Vector3(0.0812,-0.0805,0.025);
HAnimSegment116 := THAnimSegmentNode.Create;
TouchSensor117 := TTouchSensorNode.Create;
TouchSensor117.Description := 'joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2';
{ METHOD .FdChildren.Add }
HAnimSegment116.FdChildren.Add(TouchSensor117);
Transform118 := TTransformNode.Create;
Transform118.Translation := Vector3(0.0812,-0.0805,0.025);
{ METHOD .FdChildren.Add }
Transform118.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment116.FdChildren.Add(Transform118);
HAnimSite120 := THAnimSiteNode.Create;
Transform121 := TTransformNode.Create;
Transform121.Translation := Vector3(0.0812,-0.0805,0.025);
{ METHOD .FdChildren.Add }
Transform121.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite120.FdChildren.Add(Transform121);
{ METHOD .FdChildren.Add }
HAnimSegment116.FdChildren.Add(HAnimSite120);
{ METHOD .FdChildren.Add }
HAnimJoint115.FdChildren.Add(HAnimSegment116);
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.Center := Vector3(0.08,-0.0608,0.0175);
HAnimSegment124 := THAnimSegmentNode.Create;
TouchSensor125 := TTouchSensorNode.Create;
TouchSensor125.Description := 'joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2';
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(TouchSensor125);
Transform126 := TTransformNode.Create;
Transform126.Translation := Vector3(0.08,-0.0608,0.0175);
{ METHOD .FdChildren.Add }
Transform126.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(Transform126);
HAnimSite128 := THAnimSiteNode.Create;
Transform129 := TTransformNode.Create;
Transform129.Translation := Vector3(0.08,-0.0608,0.0175);
{ METHOD .FdChildren.Add }
Transform129.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite128.FdChildren.Add(Transform129);
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(HAnimSite128);
end;

procedure InitblenderSkeletonPart7;
begin

{ METHOD .FdChildren.Add }
HAnimJoint123.FdChildren.Add(HAnimSegment124);
HAnimJoint131 := THAnimJointNode.Create;
HAnimJoint131.Center := Vector3(0.0824,-0.004,0.0064);
HAnimSegment132 := THAnimSegmentNode.Create;
TouchSensor133 := TTouchSensorNode.Create;
TouchSensor133.Description := 'joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2';
{ METHOD .FdChildren.Add }
HAnimSegment132.FdChildren.Add(TouchSensor133);
Transform134 := TTransformNode.Create;
Transform134.Translation := Vector3(0.0824,-0.004,0.0064);
{ METHOD .FdChildren.Add }
Transform134.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment132.FdChildren.Add(Transform134);
HAnimSite136 := THAnimSiteNode.Create;
Transform137 := TTransformNode.Create;
Transform137.Translation := Vector3(0.0824,-0.004,0.0064);
{ METHOD .FdChildren.Add }
Transform137.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite136.FdChildren.Add(Transform137);
{ METHOD .FdChildren.Add }
HAnimSegment132.FdChildren.Add(HAnimSite136);
{ METHOD .FdChildren.Add }
HAnimJoint131.FdChildren.Add(HAnimSegment132);
HAnimJoint139 := THAnimJointNode.Create;
HAnimJoint139.Center := Vector3(0.0841,0.0121,0.0041);
HAnimSegment140 := THAnimSegmentNode.Create;
TouchSensor141 := TTouchSensorNode.Create;
TouchSensor141.Description := 'joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2';
{ METHOD .FdChildren.Add }
HAnimSegment140.FdChildren.Add(TouchSensor141);
Transform142 := TTransformNode.Create;
Transform142.Translation := Vector3(0.0841,0.0121,0.0041);
{ METHOD .FdChildren.Add }
Transform142.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment140.FdChildren.Add(Transform142);
HAnimSite144 := THAnimSiteNode.Create;
Transform145 := TTransformNode.Create;
Transform145.Translation := Vector3(0.0841,0.0121,0.0041);
{ METHOD .FdChildren.Add }
Transform145.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite144.FdChildren.Add(Transform145);
{ METHOD .FdChildren.Add }
HAnimSegment140.FdChildren.Add(HAnimSite144);
{ METHOD .FdChildren.Add }
HAnimJoint139.FdChildren.Add(HAnimSegment140);
HAnimJoint147 := THAnimJointNode.Create;
HAnimJoint147.Center := Vector3(0.0841,0.0216,0.0013);
HAnimSegment148 := THAnimSegmentNode.Create;
TouchSensor149 := TTouchSensorNode.Create;
TouchSensor149.Description := 'joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2';
end;

procedure InitblenderSkeletonPart8;
begin

{ METHOD .FdChildren.Add }
HAnimSegment148.FdChildren.Add(TouchSensor149);
Transform150 := TTransformNode.Create;
Transform150.Translation := Vector3(0.0841,0.0216,0.0013);
{ METHOD .FdChildren.Add }
Transform150.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment148.FdChildren.Add(Transform150);
HAnimSite152 := THAnimSiteNode.Create;
Transform153 := TTransformNode.Create;
Transform153.Translation := Vector3(0.0841,0.0216,0.0013);
{ METHOD .FdChildren.Add }
Transform153.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite152.FdChildren.Add(Transform153);
{ METHOD .FdChildren.Add }
HAnimSegment148.FdChildren.Add(HAnimSite152);
{ METHOD .FdChildren.Add }
HAnimJoint147.FdChildren.Add(HAnimSegment148);
{ METHOD .FdChildren.Add }
HAnimJoint139.FdChildren.Add(HAnimJoint147);
{ METHOD .FdChildren.Add }
HAnimJoint131.FdChildren.Add(HAnimJoint139);
{ METHOD .FdChildren.Add }
HAnimJoint123.FdChildren.Add(HAnimJoint131);
{ METHOD .FdChildren.Add }
HAnimJoint115.FdChildren.Add(HAnimJoint123);
{ METHOD .FdChildren.Add }
HAnimJoint75.FdChildren.Add(HAnimJoint115);
HAnimJoint155 := THAnimJointNode.Create;
HAnimJoint155.Center := Vector3(0.0928,-0.0821,0.0248);
HAnimSegment156 := THAnimSegmentNode.Create;
TouchSensor157 := TTouchSensorNode.Create;
TouchSensor157.Description := 'joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3';
{ METHOD .FdChildren.Add }
HAnimSegment156.FdChildren.Add(TouchSensor157);
Transform158 := TTransformNode.Create;
Transform158.Translation := Vector3(0.0928,-0.0821,0.0248);
{ METHOD .FdChildren.Add }
Transform158.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment156.FdChildren.Add(Transform158);
HAnimSite160 := THAnimSiteNode.Create;
Transform161 := TTransformNode.Create;
Transform161.Translation := Vector3(0.0928,-0.0821,0.0248);
{ METHOD .FdChildren.Add }
Transform161.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite160.FdChildren.Add(Transform161);
{ METHOD .FdChildren.Add }
HAnimSegment156.FdChildren.Add(HAnimSite160);
{ METHOD .FdChildren.Add }
HAnimJoint155.FdChildren.Add(HAnimSegment156);
HAnimJoint163 := THAnimJointNode.Create;
HAnimJoint163.Center := Vector3(0.0944,-0.0625,0.0175);
HAnimSegment164 := THAnimSegmentNode.Create;
TouchSensor165 := TTouchSensorNode.Create;
TouchSensor165.Description := 'joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3';
{ METHOD .FdChildren.Add }
HAnimSegment164.FdChildren.Add(TouchSensor165);
end;

procedure InitblenderSkeletonPart9;
begin

Transform166 := TTransformNode.Create;
Transform166.Translation := Vector3(0.0944,-0.0625,0.0175);
{ METHOD .FdChildren.Add }
Transform166.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment164.FdChildren.Add(Transform166);
HAnimSite168 := THAnimSiteNode.Create;
Transform169 := TTransformNode.Create;
Transform169.Translation := Vector3(0.0944,-0.0625,0.0175);
{ METHOD .FdChildren.Add }
Transform169.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite168.FdChildren.Add(Transform169);
{ METHOD .FdChildren.Add }
HAnimSegment164.FdChildren.Add(HAnimSite168);
{ METHOD .FdChildren.Add }
HAnimJoint163.FdChildren.Add(HAnimSegment164);
HAnimJoint171 := THAnimJointNode.Create;
HAnimJoint171.Center := Vector3(0.0963,-0.0065,0.0065);
HAnimSegment172 := THAnimSegmentNode.Create;
TouchSensor173 := TTouchSensorNode.Create;
TouchSensor173.Description := 'joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSegment172.FdChildren.Add(TouchSensor173);
Transform174 := TTransformNode.Create;
Transform174.Translation := Vector3(0.0963,-0.0065,0.0065);
{ METHOD .FdChildren.Add }
Transform174.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment172.FdChildren.Add(Transform174);
HAnimSite176 := THAnimSiteNode.Create;
Transform177 := TTransformNode.Create;
Transform177.Translation := Vector3(0.0963,-0.0065,0.0065);
{ METHOD .FdChildren.Add }
Transform177.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite176.FdChildren.Add(Transform177);
{ METHOD .FdChildren.Add }
HAnimSegment172.FdChildren.Add(HAnimSite176);
{ METHOD .FdChildren.Add }
HAnimJoint171.FdChildren.Add(HAnimSegment172);
HAnimJoint179 := THAnimJointNode.Create;
HAnimJoint179.Center := Vector3(0.0987,0.0086,0.0034);
HAnimSegment180 := THAnimSegmentNode.Create;
TouchSensor181 := TTouchSensorNode.Create;
TouchSensor181.Description := 'joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSegment180.FdChildren.Add(TouchSensor181);
Transform182 := TTransformNode.Create;
Transform182.Translation := Vector3(0.0987,0.0086,0.0034);
{ METHOD .FdChildren.Add }
Transform182.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment180.FdChildren.Add(Transform182);
HAnimSite184 := THAnimSiteNode.Create;
Transform185 := TTransformNode.Create;
end;

procedure InitblenderSkeletonPart10;
begin

Transform185.Translation := Vector3(0.0987,0.0086,0.0034);
{ METHOD .FdChildren.Add }
Transform185.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite184.FdChildren.Add(Transform185);
{ METHOD .FdChildren.Add }
HAnimSegment180.FdChildren.Add(HAnimSite184);
{ METHOD .FdChildren.Add }
HAnimJoint179.FdChildren.Add(HAnimSegment180);
HAnimJoint187 := THAnimJointNode.Create;
HAnimJoint187.Center := Vector3(0.1002,0.0178,0.0013);
HAnimSegment188 := THAnimSegmentNode.Create;
TouchSensor189 := TTouchSensorNode.Create;
TouchSensor189.Description := 'joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSegment188.FdChildren.Add(TouchSensor189);
Transform190 := TTransformNode.Create;
Transform190.Translation := Vector3(0.1002,0.0178,0.0013);
{ METHOD .FdChildren.Add }
Transform190.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment188.FdChildren.Add(Transform190);
HAnimSite192 := THAnimSiteNode.Create;
Transform193 := TTransformNode.Create;
Transform193.Translation := Vector3(0.1002,0.0178,0.0013);
{ METHOD .FdChildren.Add }
Transform193.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite192.FdChildren.Add(Transform193);
{ METHOD .FdChildren.Add }
HAnimSegment188.FdChildren.Add(HAnimSite192);
{ METHOD .FdChildren.Add }
HAnimJoint187.FdChildren.Add(HAnimSegment188);
{ METHOD .FdChildren.Add }
HAnimJoint179.FdChildren.Add(HAnimJoint187);
{ METHOD .FdChildren.Add }
HAnimJoint171.FdChildren.Add(HAnimJoint179);
{ METHOD .FdChildren.Add }
HAnimJoint163.FdChildren.Add(HAnimJoint171);
{ METHOD .FdChildren.Add }
HAnimJoint155.FdChildren.Add(HAnimJoint163);
{ METHOD .FdChildren.Add }
HAnimJoint75.FdChildren.Add(HAnimJoint155);
{ METHOD .FdChildren.Add }
HAnimJoint67.FdChildren.Add(HAnimJoint75);
HAnimJoint195 := THAnimJointNode.Create;
HAnimJoint195.Center := Vector3(0.0889,-0.1278,0.0494);
HAnimSegment196 := THAnimSegmentNode.Create;
TouchSensor197 := TTouchSensorNode.Create;
TouchSensor197.Description := 'joint l_calcaneus segment SEGMENT_FOR_l_calcaneus';
{ METHOD .FdChildren.Add }
HAnimSegment196.FdChildren.Add(TouchSensor197);
Transform198 := TTransformNode.Create;
Transform198.Translation := Vector3(0.0889,-0.1278,0.0494);
{ METHOD .FdChildren.Add }
Transform198.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment196.FdChildren.Add(Transform198);
HAnimSite200 := THAnimSiteNode.Create;
Transform201 := TTransformNode.Create;
end;

procedure InitblenderSkeletonPart11;
begin

Transform201.Translation := Vector3(0.0889,-0.1278,0.0494);
{ METHOD .FdChildren.Add }
Transform201.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite200.FdChildren.Add(Transform201);
{ METHOD .FdChildren.Add }
HAnimSegment196.FdChildren.Add(HAnimSite200);
{ METHOD .FdChildren.Add }
HAnimJoint195.FdChildren.Add(HAnimSegment196);
HAnimJoint203 := THAnimJointNode.Create;
HAnimJoint203.Center := Vector3(0.1105,-0.0998,0.0267);
HAnimSegment204 := THAnimSegmentNode.Create;
TouchSensor205 := TTouchSensorNode.Create;
TouchSensor205.Description := 'joint l_cuboid segment SEGMENT_FOR_l_cuboid';
{ METHOD .FdChildren.Add }
HAnimSegment204.FdChildren.Add(TouchSensor205);
Transform206 := TTransformNode.Create;
Transform206.Translation := Vector3(0.1105,-0.0998,0.0267);
{ METHOD .FdChildren.Add }
Transform206.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment204.FdChildren.Add(Transform206);
HAnimSite208 := THAnimSiteNode.Create;
Transform209 := TTransformNode.Create;
Transform209.Translation := Vector3(0.1105,-0.0998,0.0267);
{ METHOD .FdChildren.Add }
Transform209.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite208.FdChildren.Add(Transform209);
{ METHOD .FdChildren.Add }
HAnimSegment204.FdChildren.Add(HAnimSite208);
{ METHOD .FdChildren.Add }
HAnimJoint203.FdChildren.Add(HAnimSegment204);
HAnimJoint211 := THAnimJointNode.Create;
HAnimJoint211.Center := Vector3(0.1063,-0.0634,0.016);
HAnimSegment212 := THAnimSegmentNode.Create;
TouchSensor213 := TTouchSensorNode.Create;
TouchSensor213.Description := 'joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4';
{ METHOD .FdChildren.Add }
HAnimSegment212.FdChildren.Add(TouchSensor213);
Transform214 := TTransformNode.Create;
Transform214.Translation := Vector3(0.1063,-0.0634,0.016);
{ METHOD .FdChildren.Add }
Transform214.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment212.FdChildren.Add(Transform214);
HAnimSite216 := THAnimSiteNode.Create;
Transform217 := TTransformNode.Create;
Transform217.Translation := Vector3(0.1063,-0.0634,0.016);
{ METHOD .FdChildren.Add }
Transform217.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite216.FdChildren.Add(Transform217);
{ METHOD .FdChildren.Add }
HAnimSegment212.FdChildren.Add(HAnimSite216);
{ METHOD .FdChildren.Add }
HAnimJoint211.FdChildren.Add(HAnimSegment212);
HAnimJoint219 := THAnimJointNode.Create;
end;

procedure InitblenderSkeletonPart12;
begin

HAnimJoint219.Center := Vector3(0.1097,-0.0107,0.0058);
HAnimSegment220 := THAnimSegmentNode.Create;
TouchSensor221 := TTouchSensorNode.Create;
TouchSensor221.Description := 'joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4';
{ METHOD .FdChildren.Add }
HAnimSegment220.FdChildren.Add(TouchSensor221);
Transform222 := TTransformNode.Create;
Transform222.Translation := Vector3(0.1097,-0.0107,0.0058);
{ METHOD .FdChildren.Add }
Transform222.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment220.FdChildren.Add(Transform222);
HAnimSite224 := THAnimSiteNode.Create;
Transform225 := TTransformNode.Create;
Transform225.Translation := Vector3(0.1097,-0.0107,0.0058);
{ METHOD .FdChildren.Add }
Transform225.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite224.FdChildren.Add(Transform225);
{ METHOD .FdChildren.Add }
HAnimSegment220.FdChildren.Add(HAnimSite224);
{ METHOD .FdChildren.Add }
HAnimJoint219.FdChildren.Add(HAnimSegment220);
HAnimJoint227 := THAnimJointNode.Create;
HAnimJoint227.Center := Vector3(0.114,0.0044,0.0037);
HAnimSegment228 := THAnimSegmentNode.Create;
TouchSensor229 := TTouchSensorNode.Create;
TouchSensor229.Description := 'joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4';
{ METHOD .FdChildren.Add }
HAnimSegment228.FdChildren.Add(TouchSensor229);
Transform230 := TTransformNode.Create;
Transform230.Translation := Vector3(0.114,0.0044,0.0037);
{ METHOD .FdChildren.Add }
Transform230.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment228.FdChildren.Add(Transform230);
HAnimSite232 := THAnimSiteNode.Create;
Transform233 := TTransformNode.Create;
Transform233.Translation := Vector3(0.114,0.0044,0.0037);
{ METHOD .FdChildren.Add }
Transform233.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite232.FdChildren.Add(Transform233);
{ METHOD .FdChildren.Add }
HAnimSegment228.FdChildren.Add(HAnimSite232);
{ METHOD .FdChildren.Add }
HAnimJoint227.FdChildren.Add(HAnimSegment228);
HAnimJoint235 := THAnimJointNode.Create;
HAnimJoint235.Center := Vector3(0.1155,0.0118,0.0008);
HAnimSegment236 := THAnimSegmentNode.Create;
TouchSensor237 := TTouchSensorNode.Create;
TouchSensor237.Description := 'joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4';
{ METHOD .FdChildren.Add }
HAnimSegment236.FdChildren.Add(TouchSensor237);
Transform238 := TTransformNode.Create;
end;

procedure InitblenderSkeletonPart13;
begin

Transform238.Translation := Vector3(0.1155,0.0118,0.0008);
{ METHOD .FdChildren.Add }
Transform238.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment236.FdChildren.Add(Transform238);
HAnimSite240 := THAnimSiteNode.Create;
Transform241 := TTransformNode.Create;
Transform241.Translation := Vector3(0.1155,0.0118,0.0008);
{ METHOD .FdChildren.Add }
Transform241.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite240.FdChildren.Add(Transform241);
{ METHOD .FdChildren.Add }
HAnimSegment236.FdChildren.Add(HAnimSite240);
{ METHOD .FdChildren.Add }
HAnimJoint235.FdChildren.Add(HAnimSegment236);
{ METHOD .FdChildren.Add }
HAnimJoint227.FdChildren.Add(HAnimJoint235);
{ METHOD .FdChildren.Add }
HAnimJoint219.FdChildren.Add(HAnimJoint227);
{ METHOD .FdChildren.Add }
HAnimJoint211.FdChildren.Add(HAnimJoint219);
{ METHOD .FdChildren.Add }
HAnimJoint203.FdChildren.Add(HAnimJoint211);
HAnimJoint243 := THAnimJointNode.Create;
HAnimJoint243.Center := Vector3(0.1206,-0.0671,0.0124);
HAnimSegment244 := THAnimSegmentNode.Create;
TouchSensor245 := TTouchSensorNode.Create;
TouchSensor245.Description := 'joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5';
{ METHOD .FdChildren.Add }
HAnimSegment244.FdChildren.Add(TouchSensor245);
Transform246 := TTransformNode.Create;
Transform246.Translation := Vector3(0.1206,-0.0671,0.0124);
{ METHOD .FdChildren.Add }
Transform246.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment244.FdChildren.Add(Transform246);
HAnimSite248 := THAnimSiteNode.Create;
Transform249 := TTransformNode.Create;
Transform249.Translation := Vector3(0.1206,-0.0671,0.0124);
{ METHOD .FdChildren.Add }
Transform249.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite248.FdChildren.Add(Transform249);
{ METHOD .FdChildren.Add }
HAnimSegment244.FdChildren.Add(HAnimSite248);
{ METHOD .FdChildren.Add }
HAnimJoint243.FdChildren.Add(HAnimSegment244);
HAnimJoint251 := THAnimJointNode.Create;
HAnimJoint251.Center := Vector3(0.1239,-0.0153,0.0051);
HAnimSegment252 := THAnimSegmentNode.Create;
TouchSensor253 := TTouchSensorNode.Create;
TouchSensor253.Description := 'joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSegment252.FdChildren.Add(TouchSensor253);
Transform254 := TTransformNode.Create;
Transform254.Translation := Vector3(0.1239,-0.0153,0.0051);
{ METHOD .FdChildren.Add }
Transform254.FdChildren.Add(Shape17);
end;

procedure InitblenderSkeletonPart14;
begin

{ METHOD .FdChildren.Add }
HAnimSegment252.FdChildren.Add(Transform254);
HAnimSite256 := THAnimSiteNode.Create;
Transform257 := TTransformNode.Create;
Transform257.Translation := Vector3(0.1239,-0.0153,0.0051);
{ METHOD .FdChildren.Add }
Transform257.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite256.FdChildren.Add(Transform257);
{ METHOD .FdChildren.Add }
HAnimSegment252.FdChildren.Add(HAnimSite256);
{ METHOD .FdChildren.Add }
HAnimJoint251.FdChildren.Add(HAnimSegment252);
HAnimJoint259 := THAnimJointNode.Create;
HAnimJoint259.Center := Vector3(0.1262,-0.0077,0.0023);
HAnimSegment260 := THAnimSegmentNode.Create;
TouchSensor261 := TTouchSensorNode.Create;
TouchSensor261.Description := 'joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSegment260.FdChildren.Add(TouchSensor261);
Transform262 := TTransformNode.Create;
Transform262.Translation := Vector3(0.1262,-0.0077,0.0023);
{ METHOD .FdChildren.Add }
Transform262.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment260.FdChildren.Add(Transform262);
HAnimSite264 := THAnimSiteNode.Create;
Transform265 := TTransformNode.Create;
Transform265.Translation := Vector3(0.1262,-0.0077,0.0023);
{ METHOD .FdChildren.Add }
Transform265.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite264.FdChildren.Add(Transform265);
{ METHOD .FdChildren.Add }
HAnimSegment260.FdChildren.Add(HAnimSite264);
{ METHOD .FdChildren.Add }
HAnimJoint259.FdChildren.Add(HAnimSegment260);
HAnimJoint267 := THAnimJointNode.Create;
HAnimJoint267.Center := Vector3(0.1271,0,0);
HAnimSegment268 := THAnimSegmentNode.Create;
TouchSensor269 := TTouchSensorNode.Create;
TouchSensor269.Description := 'joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSegment268.FdChildren.Add(TouchSensor269);
Transform270 := TTransformNode.Create;
Transform270.Translation := Vector3(0.1271,0,0);
{ METHOD .FdChildren.Add }
Transform270.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment268.FdChildren.Add(Transform270);
HAnimSite272 := THAnimSiteNode.Create;
Transform273 := TTransformNode.Create;
Transform273.Translation := Vector3(0.1271,0,0);
{ METHOD .FdChildren.Add }
Transform273.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite272.FdChildren.Add(Transform273);
end;

procedure InitblenderSkeletonPart15;
begin

{ METHOD .FdChildren.Add }
HAnimSegment268.FdChildren.Add(HAnimSite272);
{ METHOD .FdChildren.Add }
HAnimJoint267.FdChildren.Add(HAnimSegment268);
{ METHOD .FdChildren.Add }
HAnimJoint259.FdChildren.Add(HAnimJoint267);
{ METHOD .FdChildren.Add }
HAnimJoint251.FdChildren.Add(HAnimJoint259);
{ METHOD .FdChildren.Add }
HAnimJoint243.FdChildren.Add(HAnimJoint251);
{ METHOD .FdChildren.Add }
HAnimJoint203.FdChildren.Add(HAnimJoint243);
{ METHOD .FdChildren.Add }
HAnimJoint195.FdChildren.Add(HAnimJoint203);
{ METHOD .FdChildren.Add }
HAnimJoint67.FdChildren.Add(HAnimJoint195);
{ METHOD .FdChildren.Add }
HAnimJoint59.FdChildren.Add(HAnimJoint67);
{ METHOD .FdChildren.Add }
HAnimJoint51.FdChildren.Add(HAnimJoint59);
{ METHOD .FdChildren.Add }
HAnimJoint43.FdChildren.Add(HAnimJoint51);
HAnimJoint275 := THAnimJointNode.Create;
HAnimJoint275.Center := Vector3(-0.0948,-0.1202,0.8181);
HAnimSegment276 := THAnimSegmentNode.Create;
TouchSensor277 := TTouchSensorNode.Create;
TouchSensor277.Description := 'joint r_thigh segment SEGMENT_FOR_r_thigh';
{ METHOD .FdChildren.Add }
HAnimSegment276.FdChildren.Add(TouchSensor277);
Transform278 := TTransformNode.Create;
Transform278.Translation := Vector3(-0.0948,-0.1202,0.8181);
{ METHOD .FdChildren.Add }
Transform278.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment276.FdChildren.Add(Transform278);
HAnimSite280 := THAnimSiteNode.Create;
Transform281 := TTransformNode.Create;
Transform281.Translation := Vector3(-0.0948,-0.1202,0.8181);
{ METHOD .FdChildren.Add }
Transform281.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite280.FdChildren.Add(Transform281);
{ METHOD .FdChildren.Add }
HAnimSegment276.FdChildren.Add(HAnimSite280);
{ METHOD .FdChildren.Add }
HAnimJoint275.FdChildren.Add(HAnimSegment276);
HAnimJoint283 := THAnimJointNode.Create;
HAnimJoint283.Center := Vector3(-0.0928,-0.1213,0.4003);
HAnimSegment284 := THAnimSegmentNode.Create;
TouchSensor285 := TTouchSensorNode.Create;
TouchSensor285.Description := 'joint r_calf segment SEGMENT_FOR_r_calf';
{ METHOD .FdChildren.Add }
HAnimSegment284.FdChildren.Add(TouchSensor285);
Transform286 := TTransformNode.Create;
Transform286.Translation := Vector3(-0.0928,-0.1213,0.4003);
{ METHOD .FdChildren.Add }
Transform286.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment284.FdChildren.Add(Transform286);
HAnimSite288 := THAnimSiteNode.Create;
Transform289 := TTransformNode.Create;
end;

procedure InitblenderSkeletonPart16;
begin

Transform289.Translation := Vector3(-0.0928,-0.1213,0.4003);
{ METHOD .FdChildren.Add }
Transform289.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite288.FdChildren.Add(Transform289);
{ METHOD .FdChildren.Add }
HAnimSegment284.FdChildren.Add(HAnimSite288);
{ METHOD .FdChildren.Add }
HAnimJoint283.FdChildren.Add(HAnimSegment284);
HAnimJoint291 := THAnimJointNode.Create;
HAnimJoint291.Center := Vector3(-0.0886,-0.1123,0.0869);
HAnimSegment292 := THAnimSegmentNode.Create;
TouchSensor293 := TTouchSensorNode.Create;
TouchSensor293.Description := 'joint r_talus segment SEGMENT_FOR_r_talus';
{ METHOD .FdChildren.Add }
HAnimSegment292.FdChildren.Add(TouchSensor293);
Transform294 := TTransformNode.Create;
Transform294.Translation := Vector3(-0.0886,-0.1123,0.0869);
{ METHOD .FdChildren.Add }
Transform294.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment292.FdChildren.Add(Transform294);
HAnimSite296 := THAnimSiteNode.Create;
Transform297 := TTransformNode.Create;
Transform297.Translation := Vector3(-0.0886,-0.1123,0.0869);
{ METHOD .FdChildren.Add }
Transform297.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite296.FdChildren.Add(Transform297);
{ METHOD .FdChildren.Add }
HAnimSegment292.FdChildren.Add(HAnimSite296);
{ METHOD .FdChildren.Add }
HAnimJoint291.FdChildren.Add(HAnimSegment292);
HAnimJoint299 := THAnimJointNode.Create;
HAnimJoint299.Center := Vector3(-0.0781,-0.097,0.0283);
HAnimSegment300 := THAnimSegmentNode.Create;
TouchSensor301 := TTouchSensorNode.Create;
TouchSensor301.Description := 'joint r_navicular segment SEGMENT_FOR_r_navicular';
{ METHOD .FdChildren.Add }
HAnimSegment300.FdChildren.Add(TouchSensor301);
Transform302 := TTransformNode.Create;
Transform302.Translation := Vector3(-0.0781,-0.097,0.0283);
{ METHOD .FdChildren.Add }
Transform302.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment300.FdChildren.Add(Transform302);
HAnimSite304 := THAnimSiteNode.Create;
Transform305 := TTransformNode.Create;
Transform305.Translation := Vector3(-0.0781,-0.097,0.0283);
{ METHOD .FdChildren.Add }
Transform305.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite304.FdChildren.Add(Transform305);
{ METHOD .FdChildren.Add }
HAnimSegment300.FdChildren.Add(HAnimSite304);
{ METHOD .FdChildren.Add }
HAnimJoint299.FdChildren.Add(HAnimSegment300);
HAnimJoint307 := THAnimJointNode.Create;
end;

procedure InitblenderSkeletonPart17;
begin

HAnimJoint307.Center := Vector3(-0.0672,-0.0835,0.0235);
HAnimSegment308 := THAnimSegmentNode.Create;
TouchSensor309 := TTouchSensorNode.Create;
TouchSensor309.Description := 'joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1';
{ METHOD .FdChildren.Add }
HAnimSegment308.FdChildren.Add(TouchSensor309);
Transform310 := TTransformNode.Create;
Transform310.Translation := Vector3(-0.0672,-0.0835,0.0235);
{ METHOD .FdChildren.Add }
Transform310.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment308.FdChildren.Add(Transform310);
HAnimSite312 := THAnimSiteNode.Create;
Transform313 := TTransformNode.Create;
Transform313.Translation := Vector3(-0.0672,-0.0835,0.0235);
{ METHOD .FdChildren.Add }
Transform313.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite312.FdChildren.Add(Transform313);
{ METHOD .FdChildren.Add }
HAnimSegment308.FdChildren.Add(HAnimSite312);
{ METHOD .FdChildren.Add }
HAnimJoint307.FdChildren.Add(HAnimSegment308);
HAnimJoint315 := THAnimJointNode.Create;
HAnimJoint315.Center := Vector3(-0.0644,-0.0577,0.0147);
HAnimSegment316 := THAnimSegmentNode.Create;
TouchSensor317 := TTouchSensorNode.Create;
TouchSensor317.Description := 'joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1';
{ METHOD .FdChildren.Add }
HAnimSegment316.FdChildren.Add(TouchSensor317);
Transform318 := TTransformNode.Create;
Transform318.Translation := Vector3(-0.0644,-0.0577,0.0147);
{ METHOD .FdChildren.Add }
Transform318.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment316.FdChildren.Add(Transform318);
HAnimSite320 := THAnimSiteNode.Create;
Transform321 := TTransformNode.Create;
Transform321.Translation := Vector3(-0.0644,-0.0577,0.0147);
{ METHOD .FdChildren.Add }
Transform321.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite320.FdChildren.Add(Transform321);
{ METHOD .FdChildren.Add }
HAnimSegment316.FdChildren.Add(HAnimSite320);
{ METHOD .FdChildren.Add }
HAnimJoint315.FdChildren.Add(HAnimSegment316);
HAnimJoint323 := THAnimJointNode.Create;
HAnimJoint323.Center := Vector3(-0.0619,-0.0083,0.0059);
HAnimSegment324 := THAnimSegmentNode.Create;
TouchSensor325 := TTouchSensorNode.Create;
TouchSensor325.Description := 'joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1';
{ METHOD .FdChildren.Add }
HAnimSegment324.FdChildren.Add(TouchSensor325);
Transform326 := TTransformNode.Create;
end;

procedure InitblenderSkeletonPart18;
begin

Transform326.Translation := Vector3(-0.0619,-0.0083,0.0059);
{ METHOD .FdChildren.Add }
Transform326.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment324.FdChildren.Add(Transform326);
HAnimSite328 := THAnimSiteNode.Create;
Transform329 := TTransformNode.Create;
Transform329.Translation := Vector3(-0.0619,-0.0083,0.0059);
{ METHOD .FdChildren.Add }
Transform329.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite328.FdChildren.Add(Transform329);
{ METHOD .FdChildren.Add }
HAnimSegment324.FdChildren.Add(HAnimSite328);
{ METHOD .FdChildren.Add }
HAnimJoint323.FdChildren.Add(HAnimSegment324);
HAnimJoint331 := THAnimJointNode.Create;
HAnimSegment332 := THAnimSegmentNode.Create;
TouchSensor333 := TTouchSensorNode.Create;
TouchSensor333.Description := 'joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1';
{ METHOD .FdChildren.Add }
HAnimSegment332.FdChildren.Add(TouchSensor333);
Transform334 := TTransformNode.Create;
{ METHOD .FdChildren.Add }
Transform334.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment332.FdChildren.Add(Transform334);
HAnimSite336 := THAnimSiteNode.Create;
Transform337 := TTransformNode.Create;
{ METHOD .FdChildren.Add }
Transform337.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite336.FdChildren.Add(Transform337);
{ METHOD .FdChildren.Add }
HAnimSegment332.FdChildren.Add(HAnimSite336);
{ METHOD .FdChildren.Add }
HAnimJoint331.FdChildren.Add(HAnimSegment332);
{ METHOD .FdChildren.Add }
HAnimJoint323.FdChildren.Add(HAnimJoint331);
{ METHOD .FdChildren.Add }
HAnimJoint315.FdChildren.Add(HAnimJoint323);
{ METHOD .FdChildren.Add }
HAnimJoint307.FdChildren.Add(HAnimJoint315);
{ METHOD .FdChildren.Add }
HAnimJoint299.FdChildren.Add(HAnimJoint307);
HAnimJoint339 := THAnimJointNode.Create;
HAnimJoint339.Center := Vector3(-0.0812,-0.0805,0.025);
HAnimSegment340 := THAnimSegmentNode.Create;
TouchSensor341 := TTouchSensorNode.Create;
TouchSensor341.Description := 'joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2';
{ METHOD .FdChildren.Add }
HAnimSegment340.FdChildren.Add(TouchSensor341);
Transform342 := TTransformNode.Create;
Transform342.Translation := Vector3(-0.0812,-0.0805,0.025);
{ METHOD .FdChildren.Add }
Transform342.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment340.FdChildren.Add(Transform342);
HAnimSite344 := THAnimSiteNode.Create;
Transform345 := TTransformNode.Create;
end;

procedure InitblenderSkeletonPart19;
begin

Transform345.Translation := Vector3(-0.0812,-0.0805,0.025);
{ METHOD .FdChildren.Add }
Transform345.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite344.FdChildren.Add(Transform345);
{ METHOD .FdChildren.Add }
HAnimSegment340.FdChildren.Add(HAnimSite344);
{ METHOD .FdChildren.Add }
HAnimJoint339.FdChildren.Add(HAnimSegment340);
HAnimJoint347 := THAnimJointNode.Create;
HAnimJoint347.Center := Vector3(-0.08,-0.0608,0.0175);
HAnimSegment348 := THAnimSegmentNode.Create;
TouchSensor349 := TTouchSensorNode.Create;
TouchSensor349.Description := 'joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2';
{ METHOD .FdChildren.Add }
HAnimSegment348.FdChildren.Add(TouchSensor349);
Transform350 := TTransformNode.Create;
Transform350.Translation := Vector3(-0.08,-0.0608,0.0175);
{ METHOD .FdChildren.Add }
Transform350.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment348.FdChildren.Add(Transform350);
HAnimSite352 := THAnimSiteNode.Create;
Transform353 := TTransformNode.Create;
Transform353.Translation := Vector3(-0.08,-0.0608,0.0175);
{ METHOD .FdChildren.Add }
Transform353.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite352.FdChildren.Add(Transform353);
{ METHOD .FdChildren.Add }
HAnimSegment348.FdChildren.Add(HAnimSite352);
{ METHOD .FdChildren.Add }
HAnimJoint347.FdChildren.Add(HAnimSegment348);
HAnimJoint355 := THAnimJointNode.Create;
HAnimJoint355.Center := Vector3(-0.0823,-0.004,0.0064);
HAnimSegment356 := THAnimSegmentNode.Create;
TouchSensor357 := TTouchSensorNode.Create;
TouchSensor357.Description := 'joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2';
{ METHOD .FdChildren.Add }
HAnimSegment356.FdChildren.Add(TouchSensor357);
Transform358 := TTransformNode.Create;
Transform358.Translation := Vector3(-0.0823,-0.004,0.0064);
{ METHOD .FdChildren.Add }
Transform358.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment356.FdChildren.Add(Transform358);
HAnimSite360 := THAnimSiteNode.Create;
Transform361 := TTransformNode.Create;
Transform361.Translation := Vector3(-0.0823,-0.004,0.0064);
{ METHOD .FdChildren.Add }
Transform361.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite360.FdChildren.Add(Transform361);
{ METHOD .FdChildren.Add }
HAnimSegment356.FdChildren.Add(HAnimSite360);
{ METHOD .FdChildren.Add }
HAnimJoint355.FdChildren.Add(HAnimSegment356);
HAnimJoint363 := THAnimJointNode.Create;
end;

procedure InitblenderSkeletonPart20;
begin

HAnimJoint363.Center := Vector3(-0.0841,0.0121,0.0041);
HAnimSegment364 := THAnimSegmentNode.Create;
TouchSensor365 := TTouchSensorNode.Create;
TouchSensor365.Description := 'joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2';
{ METHOD .FdChildren.Add }
HAnimSegment364.FdChildren.Add(TouchSensor365);
Transform366 := TTransformNode.Create;
Transform366.Translation := Vector3(-0.0841,0.0121,0.0041);
{ METHOD .FdChildren.Add }
Transform366.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment364.FdChildren.Add(Transform366);
HAnimSite368 := THAnimSiteNode.Create;
Transform369 := TTransformNode.Create;
Transform369.Translation := Vector3(-0.0841,0.0121,0.0041);
{ METHOD .FdChildren.Add }
Transform369.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite368.FdChildren.Add(Transform369);
{ METHOD .FdChildren.Add }
HAnimSegment364.FdChildren.Add(HAnimSite368);
{ METHOD .FdChildren.Add }
HAnimJoint363.FdChildren.Add(HAnimSegment364);
HAnimJoint371 := THAnimJointNode.Create;
HAnimJoint371.Center := Vector3(-0.0841,0.0216,0.0013);
HAnimSegment372 := THAnimSegmentNode.Create;
TouchSensor373 := TTouchSensorNode.Create;
TouchSensor373.Description := 'joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2';
{ METHOD .FdChildren.Add }
HAnimSegment372.FdChildren.Add(TouchSensor373);
Transform374 := TTransformNode.Create;
Transform374.Translation := Vector3(-0.0841,0.0216,0.0013);
{ METHOD .FdChildren.Add }
Transform374.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment372.FdChildren.Add(Transform374);
HAnimSite376 := THAnimSiteNode.Create;
Transform377 := TTransformNode.Create;
Transform377.Translation := Vector3(-0.0841,0.0216,0.0013);
{ METHOD .FdChildren.Add }
Transform377.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite376.FdChildren.Add(Transform377);
{ METHOD .FdChildren.Add }
HAnimSegment372.FdChildren.Add(HAnimSite376);
{ METHOD .FdChildren.Add }
HAnimJoint371.FdChildren.Add(HAnimSegment372);
{ METHOD .FdChildren.Add }
HAnimJoint363.FdChildren.Add(HAnimJoint371);
{ METHOD .FdChildren.Add }
HAnimJoint355.FdChildren.Add(HAnimJoint363);
{ METHOD .FdChildren.Add }
HAnimJoint347.FdChildren.Add(HAnimJoint355);
{ METHOD .FdChildren.Add }
HAnimJoint339.FdChildren.Add(HAnimJoint347);
{ METHOD .FdChildren.Add }
HAnimJoint299.FdChildren.Add(HAnimJoint339);
HAnimJoint379 := THAnimJointNode.Create;
HAnimJoint379.Center := Vector3(-0.0928,-0.0821,0.0248);
end;

procedure InitblenderSkeletonPart21;
begin

HAnimSegment380 := THAnimSegmentNode.Create;
TouchSensor381 := TTouchSensorNode.Create;
TouchSensor381.Description := 'joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3';
{ METHOD .FdChildren.Add }
HAnimSegment380.FdChildren.Add(TouchSensor381);
Transform382 := TTransformNode.Create;
Transform382.Translation := Vector3(-0.0928,-0.0821,0.0248);
{ METHOD .FdChildren.Add }
Transform382.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment380.FdChildren.Add(Transform382);
HAnimSite384 := THAnimSiteNode.Create;
Transform385 := TTransformNode.Create;
Transform385.Translation := Vector3(-0.0928,-0.0821,0.0248);
{ METHOD .FdChildren.Add }
Transform385.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite384.FdChildren.Add(Transform385);
{ METHOD .FdChildren.Add }
HAnimSegment380.FdChildren.Add(HAnimSite384);
{ METHOD .FdChildren.Add }
HAnimJoint379.FdChildren.Add(HAnimSegment380);
HAnimJoint387 := THAnimJointNode.Create;
HAnimJoint387.Center := Vector3(-0.0944,-0.0625,0.0175);
HAnimSegment388 := THAnimSegmentNode.Create;
TouchSensor389 := TTouchSensorNode.Create;
TouchSensor389.Description := 'joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3';
{ METHOD .FdChildren.Add }
HAnimSegment388.FdChildren.Add(TouchSensor389);
Transform390 := TTransformNode.Create;
Transform390.Translation := Vector3(-0.0944,-0.0625,0.0175);
{ METHOD .FdChildren.Add }
Transform390.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment388.FdChildren.Add(Transform390);
HAnimSite392 := THAnimSiteNode.Create;
Transform393 := TTransformNode.Create;
Transform393.Translation := Vector3(-0.0944,-0.0625,0.0175);
{ METHOD .FdChildren.Add }
Transform393.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite392.FdChildren.Add(Transform393);
{ METHOD .FdChildren.Add }
HAnimSegment388.FdChildren.Add(HAnimSite392);
{ METHOD .FdChildren.Add }
HAnimJoint387.FdChildren.Add(HAnimSegment388);
HAnimJoint395 := THAnimJointNode.Create;
HAnimJoint395.Center := Vector3(-0.0963,-0.0065,0.0065);
HAnimSegment396 := THAnimSegmentNode.Create;
TouchSensor397 := TTouchSensorNode.Create;
TouchSensor397.Description := 'joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSegment396.FdChildren.Add(TouchSensor397);
Transform398 := TTransformNode.Create;
Transform398.Translation := Vector3(-0.0963,-0.0065,0.0065);
end;

procedure InitblenderSkeletonPart22;
begin

{ METHOD .FdChildren.Add }
Transform398.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment396.FdChildren.Add(Transform398);
HAnimSite400 := THAnimSiteNode.Create;
Transform401 := TTransformNode.Create;
Transform401.Translation := Vector3(-0.0963,-0.0065,0.0065);
{ METHOD .FdChildren.Add }
Transform401.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite400.FdChildren.Add(Transform401);
{ METHOD .FdChildren.Add }
HAnimSegment396.FdChildren.Add(HAnimSite400);
{ METHOD .FdChildren.Add }
HAnimJoint395.FdChildren.Add(HAnimSegment396);
HAnimJoint403 := THAnimJointNode.Create;
HAnimJoint403.Center := Vector3(-0.0987,0.0086,0.0034);
HAnimSegment404 := THAnimSegmentNode.Create;
TouchSensor405 := TTouchSensorNode.Create;
TouchSensor405.Description := 'joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSegment404.FdChildren.Add(TouchSensor405);
Transform406 := TTransformNode.Create;
Transform406.Translation := Vector3(-0.0987,0.0086,0.0034);
{ METHOD .FdChildren.Add }
Transform406.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment404.FdChildren.Add(Transform406);
HAnimSite408 := THAnimSiteNode.Create;
Transform409 := TTransformNode.Create;
Transform409.Translation := Vector3(-0.0987,0.0086,0.0034);
{ METHOD .FdChildren.Add }
Transform409.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite408.FdChildren.Add(Transform409);
{ METHOD .FdChildren.Add }
HAnimSegment404.FdChildren.Add(HAnimSite408);
{ METHOD .FdChildren.Add }
HAnimJoint403.FdChildren.Add(HAnimSegment404);
HAnimJoint411 := THAnimJointNode.Create;
HAnimJoint411.Center := Vector3(-0.1002,0.0178,0.0013);
HAnimSegment412 := THAnimSegmentNode.Create;
TouchSensor413 := TTouchSensorNode.Create;
TouchSensor413.Description := 'joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSegment412.FdChildren.Add(TouchSensor413);
Transform414 := TTransformNode.Create;
Transform414.Translation := Vector3(-0.1002,0.0178,0.0013);
{ METHOD .FdChildren.Add }
Transform414.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment412.FdChildren.Add(Transform414);
HAnimSite416 := THAnimSiteNode.Create;
Transform417 := TTransformNode.Create;
Transform417.Translation := Vector3(-0.1002,0.0178,0.0013);
{ METHOD .FdChildren.Add }
Transform417.FdChildren.Add(Shape12);
end;

procedure InitblenderSkeletonPart23;
begin

{ METHOD .FdChildren.Add }
HAnimSite416.FdChildren.Add(Transform417);
{ METHOD .FdChildren.Add }
HAnimSegment412.FdChildren.Add(HAnimSite416);
{ METHOD .FdChildren.Add }
HAnimJoint411.FdChildren.Add(HAnimSegment412);
{ METHOD .FdChildren.Add }
HAnimJoint403.FdChildren.Add(HAnimJoint411);
{ METHOD .FdChildren.Add }
HAnimJoint395.FdChildren.Add(HAnimJoint403);
{ METHOD .FdChildren.Add }
HAnimJoint387.FdChildren.Add(HAnimJoint395);
{ METHOD .FdChildren.Add }
HAnimJoint379.FdChildren.Add(HAnimJoint387);
{ METHOD .FdChildren.Add }
HAnimJoint299.FdChildren.Add(HAnimJoint379);
{ METHOD .FdChildren.Add }
HAnimJoint291.FdChildren.Add(HAnimJoint299);
HAnimJoint419 := THAnimJointNode.Create;
HAnimJoint419.Center := Vector3(-0.0889,-0.1278,0.0494);
HAnimSegment420 := THAnimSegmentNode.Create;
TouchSensor421 := TTouchSensorNode.Create;
TouchSensor421.Description := 'joint r_calcaneus segment SEGMENT_FOR_r_calcaneus';
{ METHOD .FdChildren.Add }
HAnimSegment420.FdChildren.Add(TouchSensor421);
Transform422 := TTransformNode.Create;
Transform422.Translation := Vector3(-0.0889,-0.1278,0.0494);
{ METHOD .FdChildren.Add }
Transform422.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment420.FdChildren.Add(Transform422);
HAnimSite424 := THAnimSiteNode.Create;
Transform425 := TTransformNode.Create;
Transform425.Translation := Vector3(-0.0889,-0.1278,0.0494);
{ METHOD .FdChildren.Add }
Transform425.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite424.FdChildren.Add(Transform425);
{ METHOD .FdChildren.Add }
HAnimSegment420.FdChildren.Add(HAnimSite424);
{ METHOD .FdChildren.Add }
HAnimJoint419.FdChildren.Add(HAnimSegment420);
HAnimJoint427 := THAnimJointNode.Create;
HAnimJoint427.Center := Vector3(-0.1105,-0.0998,0.0267);
HAnimSegment428 := THAnimSegmentNode.Create;
TouchSensor429 := TTouchSensorNode.Create;
TouchSensor429.Description := 'joint r_cuboid segment SEGMENT_FOR_r_cuboid';
{ METHOD .FdChildren.Add }
HAnimSegment428.FdChildren.Add(TouchSensor429);
Transform430 := TTransformNode.Create;
Transform430.Translation := Vector3(-0.1105,-0.0998,0.0267);
{ METHOD .FdChildren.Add }
Transform430.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment428.FdChildren.Add(Transform430);
HAnimSite432 := THAnimSiteNode.Create;
Transform433 := TTransformNode.Create;
Transform433.Translation := Vector3(-0.1105,-0.0998,0.0267);
{ METHOD .FdChildren.Add }
Transform433.FdChildren.Add(Shape12);
end;

procedure InitblenderSkeletonPart24;
begin

{ METHOD .FdChildren.Add }
HAnimSite432.FdChildren.Add(Transform433);
{ METHOD .FdChildren.Add }
HAnimSegment428.FdChildren.Add(HAnimSite432);
{ METHOD .FdChildren.Add }
HAnimJoint427.FdChildren.Add(HAnimSegment428);
HAnimJoint435 := THAnimJointNode.Create;
HAnimJoint435.Center := Vector3(-0.1063,-0.0634,0.016);
HAnimSegment436 := THAnimSegmentNode.Create;
TouchSensor437 := TTouchSensorNode.Create;
TouchSensor437.Description := 'joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4';
{ METHOD .FdChildren.Add }
HAnimSegment436.FdChildren.Add(TouchSensor437);
Transform438 := TTransformNode.Create;
Transform438.Translation := Vector3(-0.1063,-0.0634,0.016);
{ METHOD .FdChildren.Add }
Transform438.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment436.FdChildren.Add(Transform438);
HAnimSite440 := THAnimSiteNode.Create;
Transform441 := TTransformNode.Create;
Transform441.Translation := Vector3(-0.1063,-0.0634,0.016);
{ METHOD .FdChildren.Add }
Transform441.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite440.FdChildren.Add(Transform441);
{ METHOD .FdChildren.Add }
HAnimSegment436.FdChildren.Add(HAnimSite440);
{ METHOD .FdChildren.Add }
HAnimJoint435.FdChildren.Add(HAnimSegment436);
HAnimJoint443 := THAnimJointNode.Create;
HAnimJoint443.Center := Vector3(-0.1097,-0.0107,0.0058);
HAnimSegment444 := THAnimSegmentNode.Create;
TouchSensor445 := TTouchSensorNode.Create;
TouchSensor445.Description := 'joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4';
{ METHOD .FdChildren.Add }
HAnimSegment444.FdChildren.Add(TouchSensor445);
Transform446 := TTransformNode.Create;
Transform446.Translation := Vector3(-0.1097,-0.0107,0.0058);
{ METHOD .FdChildren.Add }
Transform446.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment444.FdChildren.Add(Transform446);
HAnimSite448 := THAnimSiteNode.Create;
Transform449 := TTransformNode.Create;
Transform449.Translation := Vector3(-0.1097,-0.0107,0.0058);
{ METHOD .FdChildren.Add }
Transform449.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite448.FdChildren.Add(Transform449);
{ METHOD .FdChildren.Add }
HAnimSegment444.FdChildren.Add(HAnimSite448);
{ METHOD .FdChildren.Add }
HAnimJoint443.FdChildren.Add(HAnimSegment444);
HAnimJoint451 := THAnimJointNode.Create;
HAnimJoint451.Center := Vector3(-0.114,0.0044,0.0037);
HAnimSegment452 := THAnimSegmentNode.Create;
end;

procedure InitblenderSkeletonPart25;
begin

TouchSensor453 := TTouchSensorNode.Create;
TouchSensor453.Description := 'joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4';
{ METHOD .FdChildren.Add }
HAnimSegment452.FdChildren.Add(TouchSensor453);
Transform454 := TTransformNode.Create;
Transform454.Translation := Vector3(-0.114,0.0044,0.0037);
{ METHOD .FdChildren.Add }
Transform454.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment452.FdChildren.Add(Transform454);
HAnimSite456 := THAnimSiteNode.Create;
Transform457 := TTransformNode.Create;
Transform457.Translation := Vector3(-0.114,0.0044,0.0037);
{ METHOD .FdChildren.Add }
Transform457.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite456.FdChildren.Add(Transform457);
{ METHOD .FdChildren.Add }
HAnimSegment452.FdChildren.Add(HAnimSite456);
{ METHOD .FdChildren.Add }
HAnimJoint451.FdChildren.Add(HAnimSegment452);
HAnimJoint459 := THAnimJointNode.Create;
HAnimJoint459.Center := Vector3(-0.1155,0.0118,0.0008);
HAnimSegment460 := THAnimSegmentNode.Create;
TouchSensor461 := TTouchSensorNode.Create;
TouchSensor461.Description := 'joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4';
{ METHOD .FdChildren.Add }
HAnimSegment460.FdChildren.Add(TouchSensor461);
Transform462 := TTransformNode.Create;
Transform462.Translation := Vector3(-0.1155,0.0118,0.0008);
{ METHOD .FdChildren.Add }
Transform462.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment460.FdChildren.Add(Transform462);
HAnimSite464 := THAnimSiteNode.Create;
Transform465 := TTransformNode.Create;
Transform465.Translation := Vector3(-0.1155,0.0118,0.0008);
{ METHOD .FdChildren.Add }
Transform465.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite464.FdChildren.Add(Transform465);
{ METHOD .FdChildren.Add }
HAnimSegment460.FdChildren.Add(HAnimSite464);
{ METHOD .FdChildren.Add }
HAnimJoint459.FdChildren.Add(HAnimSegment460);
{ METHOD .FdChildren.Add }
HAnimJoint451.FdChildren.Add(HAnimJoint459);
{ METHOD .FdChildren.Add }
HAnimJoint443.FdChildren.Add(HAnimJoint451);
{ METHOD .FdChildren.Add }
HAnimJoint435.FdChildren.Add(HAnimJoint443);
{ METHOD .FdChildren.Add }
HAnimJoint427.FdChildren.Add(HAnimJoint435);
HAnimJoint467 := THAnimJointNode.Create;
HAnimJoint467.Center := Vector3(-0.1206,-0.0671,0.0124);
HAnimSegment468 := THAnimSegmentNode.Create;
TouchSensor469 := TTouchSensorNode.Create;
TouchSensor469.Description := 'joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5';
end;

procedure InitblenderSkeletonPart26;
begin

{ METHOD .FdChildren.Add }
HAnimSegment468.FdChildren.Add(TouchSensor469);
Transform470 := TTransformNode.Create;
Transform470.Translation := Vector3(-0.1206,-0.0671,0.0124);
{ METHOD .FdChildren.Add }
Transform470.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment468.FdChildren.Add(Transform470);
HAnimSite472 := THAnimSiteNode.Create;
Transform473 := TTransformNode.Create;
Transform473.Translation := Vector3(-0.1206,-0.0671,0.0124);
{ METHOD .FdChildren.Add }
Transform473.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite472.FdChildren.Add(Transform473);
{ METHOD .FdChildren.Add }
HAnimSegment468.FdChildren.Add(HAnimSite472);
{ METHOD .FdChildren.Add }
HAnimJoint467.FdChildren.Add(HAnimSegment468);
HAnimJoint475 := THAnimJointNode.Create;
HAnimJoint475.Center := Vector3(-0.1239,-0.0153,0.0051);
HAnimSegment476 := THAnimSegmentNode.Create;
TouchSensor477 := TTouchSensorNode.Create;
TouchSensor477.Description := 'joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSegment476.FdChildren.Add(TouchSensor477);
Transform478 := TTransformNode.Create;
Transform478.Translation := Vector3(-0.1239,-0.0153,0.0051);
{ METHOD .FdChildren.Add }
Transform478.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment476.FdChildren.Add(Transform478);
HAnimSite480 := THAnimSiteNode.Create;
Transform481 := TTransformNode.Create;
Transform481.Translation := Vector3(-0.1239,-0.0153,0.0051);
{ METHOD .FdChildren.Add }
Transform481.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite480.FdChildren.Add(Transform481);
{ METHOD .FdChildren.Add }
HAnimSegment476.FdChildren.Add(HAnimSite480);
{ METHOD .FdChildren.Add }
HAnimJoint475.FdChildren.Add(HAnimSegment476);
HAnimJoint483 := THAnimJointNode.Create;
HAnimJoint483.Center := Vector3(-0.1262,-0.0077,0.0023);
HAnimSegment484 := THAnimSegmentNode.Create;
TouchSensor485 := TTouchSensorNode.Create;
TouchSensor485.Description := 'joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSegment484.FdChildren.Add(TouchSensor485);
Transform486 := TTransformNode.Create;
Transform486.Translation := Vector3(-0.1262,-0.0077,0.0023);
{ METHOD .FdChildren.Add }
Transform486.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment484.FdChildren.Add(Transform486);
HAnimSite488 := THAnimSiteNode.Create;
end;

procedure InitblenderSkeletonPart27;
begin

Transform489 := TTransformNode.Create;
Transform489.Translation := Vector3(-0.1262,-0.0077,0.0023);
{ METHOD .FdChildren.Add }
Transform489.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite488.FdChildren.Add(Transform489);
{ METHOD .FdChildren.Add }
HAnimSegment484.FdChildren.Add(HAnimSite488);
{ METHOD .FdChildren.Add }
HAnimJoint483.FdChildren.Add(HAnimSegment484);
HAnimJoint491 := THAnimJointNode.Create;
HAnimJoint491.Center := Vector3(-0.1271,0,0);
HAnimSegment492 := THAnimSegmentNode.Create;
TouchSensor493 := TTouchSensorNode.Create;
TouchSensor493.Description := 'joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSegment492.FdChildren.Add(TouchSensor493);
Transform494 := TTransformNode.Create;
Transform494.Translation := Vector3(-0.1271,0,0);
{ METHOD .FdChildren.Add }
Transform494.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment492.FdChildren.Add(Transform494);
HAnimSite496 := THAnimSiteNode.Create;
Transform497 := TTransformNode.Create;
Transform497.Translation := Vector3(-0.1271,0,0);
{ METHOD .FdChildren.Add }
Transform497.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite496.FdChildren.Add(Transform497);
{ METHOD .FdChildren.Add }
HAnimSegment492.FdChildren.Add(HAnimSite496);
{ METHOD .FdChildren.Add }
HAnimJoint491.FdChildren.Add(HAnimSegment492);
{ METHOD .FdChildren.Add }
HAnimJoint483.FdChildren.Add(HAnimJoint491);
{ METHOD .FdChildren.Add }
HAnimJoint475.FdChildren.Add(HAnimJoint483);
{ METHOD .FdChildren.Add }
HAnimJoint467.FdChildren.Add(HAnimJoint475);
{ METHOD .FdChildren.Add }
HAnimJoint427.FdChildren.Add(HAnimJoint467);
{ METHOD .FdChildren.Add }
HAnimJoint419.FdChildren.Add(HAnimJoint427);
{ METHOD .FdChildren.Add }
HAnimJoint291.FdChildren.Add(HAnimJoint419);
{ METHOD .FdChildren.Add }
HAnimJoint283.FdChildren.Add(HAnimJoint291);
{ METHOD .FdChildren.Add }
HAnimJoint275.FdChildren.Add(HAnimJoint283);
{ METHOD .FdChildren.Add }
HAnimJoint43.FdChildren.Add(HAnimJoint275);
{ METHOD .FdChildren.Add }
HAnimJoint35.FdChildren.Add(HAnimJoint43);
HAnimJoint499 := THAnimJointNode.Create;
HAnimJoint499.Center := Vector3(-0.0002,-0.1156,0.9169);
HAnimSegment500 := THAnimSegmentNode.Create;
TouchSensor501 := TTouchSensorNode.Create;
TouchSensor501.Description := 'joint l5 segment SEGMENT_FOR_l5';
{ METHOD .FdChildren.Add }
HAnimSegment500.FdChildren.Add(TouchSensor501);
Transform502 := TTransformNode.Create;
end;

procedure InitblenderSkeletonPart28;
begin

Transform502.Translation := Vector3(-0.0002,-0.1156,0.9169);
{ METHOD .FdChildren.Add }
Transform502.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment500.FdChildren.Add(Transform502);
HAnimSite504 := THAnimSiteNode.Create;
Transform505 := TTransformNode.Create;
Transform505.Translation := Vector3(-0.0002,-0.1156,0.9169);
{ METHOD .FdChildren.Add }
Transform505.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite504.FdChildren.Add(Transform505);
{ METHOD .FdChildren.Add }
HAnimSegment500.FdChildren.Add(HAnimSite504);
{ METHOD .FdChildren.Add }
HAnimJoint499.FdChildren.Add(HAnimSegment500);
HAnimJoint507 := THAnimJointNode.Create;
HAnimJoint507.Center := Vector3(-0.0002,-0.1156,0.9412);
HAnimSegment508 := THAnimSegmentNode.Create;
TouchSensor509 := TTouchSensorNode.Create;
TouchSensor509.Description := 'joint l4 segment SEGMENT_FOR_l4';
{ METHOD .FdChildren.Add }
HAnimSegment508.FdChildren.Add(TouchSensor509);
Transform510 := TTransformNode.Create;
Transform510.Translation := Vector3(-0.0002,-0.1156,0.9412);
{ METHOD .FdChildren.Add }
Transform510.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment508.FdChildren.Add(Transform510);
HAnimSite512 := THAnimSiteNode.Create;
Transform513 := TTransformNode.Create;
Transform513.Translation := Vector3(-0.0002,-0.1156,0.9412);
{ METHOD .FdChildren.Add }
Transform513.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite512.FdChildren.Add(Transform513);
{ METHOD .FdChildren.Add }
HAnimSegment508.FdChildren.Add(HAnimSite512);
{ METHOD .FdChildren.Add }
HAnimJoint507.FdChildren.Add(HAnimSegment508);
HAnimJoint515 := THAnimJointNode.Create;
HAnimJoint515.Center := Vector3(-0.0002,-0.1156,0.9574);
HAnimSegment516 := THAnimSegmentNode.Create;
TouchSensor517 := TTouchSensorNode.Create;
TouchSensor517.Description := 'joint l3 segment SEGMENT_FOR_l3';
{ METHOD .FdChildren.Add }
HAnimSegment516.FdChildren.Add(TouchSensor517);
Transform518 := TTransformNode.Create;
Transform518.Translation := Vector3(-0.0002,-0.1156,0.9574);
{ METHOD .FdChildren.Add }
Transform518.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment516.FdChildren.Add(Transform518);
HAnimSite520 := THAnimSiteNode.Create;
Transform521 := TTransformNode.Create;
Transform521.Translation := Vector3(-0.0002,-0.1156,0.9574);
end;

procedure InitblenderSkeletonPart29;
begin

{ METHOD .FdChildren.Add }
Transform521.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite520.FdChildren.Add(Transform521);
{ METHOD .FdChildren.Add }
HAnimSegment516.FdChildren.Add(HAnimSite520);
{ METHOD .FdChildren.Add }
HAnimJoint515.FdChildren.Add(HAnimSegment516);
HAnimJoint523 := THAnimJointNode.Create;
HAnimJoint523.Center := Vector3(-0.0002,-0.1156,0.9738);
HAnimSegment524 := THAnimSegmentNode.Create;
TouchSensor525 := TTouchSensorNode.Create;
TouchSensor525.Description := 'joint l2 segment SEGMENT_FOR_l2';
{ METHOD .FdChildren.Add }
HAnimSegment524.FdChildren.Add(TouchSensor525);
Transform526 := TTransformNode.Create;
Transform526.Translation := Vector3(-0.0002,-0.1156,0.9738);
{ METHOD .FdChildren.Add }
Transform526.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment524.FdChildren.Add(Transform526);
HAnimSite528 := THAnimSiteNode.Create;
Transform529 := TTransformNode.Create;
Transform529.Translation := Vector3(-0.0002,-0.1156,0.9738);
{ METHOD .FdChildren.Add }
Transform529.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite528.FdChildren.Add(Transform529);
{ METHOD .FdChildren.Add }
HAnimSegment524.FdChildren.Add(HAnimSite528);
{ METHOD .FdChildren.Add }
HAnimJoint523.FdChildren.Add(HAnimSegment524);
HAnimJoint531 := THAnimJointNode.Create;
HAnimJoint531.Center := Vector3(-0.0002,-0.1156,0.9911);
HAnimSegment532 := THAnimSegmentNode.Create;
TouchSensor533 := TTouchSensorNode.Create;
TouchSensor533.Description := 'joint l1 segment SEGMENT_FOR_l1';
{ METHOD .FdChildren.Add }
HAnimSegment532.FdChildren.Add(TouchSensor533);
Transform534 := TTransformNode.Create;
Transform534.Translation := Vector3(-0.0002,-0.1156,0.9911);
{ METHOD .FdChildren.Add }
Transform534.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment532.FdChildren.Add(Transform534);
HAnimSite536 := THAnimSiteNode.Create;
Transform537 := TTransformNode.Create;
Transform537.Translation := Vector3(-0.0002,-0.1156,0.9911);
{ METHOD .FdChildren.Add }
Transform537.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite536.FdChildren.Add(Transform537);
{ METHOD .FdChildren.Add }
HAnimSegment532.FdChildren.Add(HAnimSite536);
{ METHOD .FdChildren.Add }
HAnimJoint531.FdChildren.Add(HAnimSegment532);
HAnimJoint539 := THAnimJointNode.Create;
HAnimJoint539.Center := Vector3(-0.0002,-0.1156,1.0145);
end;

procedure InitblenderSkeletonPart30;
begin

HAnimSegment540 := THAnimSegmentNode.Create;
TouchSensor541 := TTouchSensorNode.Create;
TouchSensor541.Description := 'joint t12 segment SEGMENT_FOR_t12';
{ METHOD .FdChildren.Add }
HAnimSegment540.FdChildren.Add(TouchSensor541);
Transform542 := TTransformNode.Create;
Transform542.Translation := Vector3(-0.0002,-0.1156,1.0145);
{ METHOD .FdChildren.Add }
Transform542.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment540.FdChildren.Add(Transform542);
HAnimSite544 := THAnimSiteNode.Create;
Transform545 := TTransformNode.Create;
Transform545.Translation := Vector3(-0.0002,-0.1156,1.0145);
{ METHOD .FdChildren.Add }
Transform545.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite544.FdChildren.Add(Transform545);
{ METHOD .FdChildren.Add }
HAnimSegment540.FdChildren.Add(HAnimSite544);
{ METHOD .FdChildren.Add }
HAnimJoint539.FdChildren.Add(HAnimSegment540);
HAnimJoint547 := THAnimJointNode.Create;
HAnimJoint547.Center := Vector3(-0.0002,-0.1156,1.0381);
HAnimSegment548 := THAnimSegmentNode.Create;
TouchSensor549 := TTouchSensorNode.Create;
TouchSensor549.Description := 'joint t11 segment SEGMENT_FOR_t11';
{ METHOD .FdChildren.Add }
HAnimSegment548.FdChildren.Add(TouchSensor549);
Transform550 := TTransformNode.Create;
Transform550.Translation := Vector3(-0.0002,-0.1156,1.0381);
{ METHOD .FdChildren.Add }
Transform550.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment548.FdChildren.Add(Transform550);
HAnimSite552 := THAnimSiteNode.Create;
Transform553 := TTransformNode.Create;
Transform553.Translation := Vector3(-0.0002,-0.1156,1.0381);
{ METHOD .FdChildren.Add }
Transform553.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite552.FdChildren.Add(Transform553);
{ METHOD .FdChildren.Add }
HAnimSegment548.FdChildren.Add(HAnimSite552);
{ METHOD .FdChildren.Add }
HAnimJoint547.FdChildren.Add(HAnimSegment548);
HAnimJoint555 := THAnimJointNode.Create;
HAnimJoint555.Center := Vector3(-0.0002,-0.1157,1.0552);
HAnimSegment556 := THAnimSegmentNode.Create;
TouchSensor557 := TTouchSensorNode.Create;
TouchSensor557.Description := 'joint t10 segment SEGMENT_FOR_t10';
{ METHOD .FdChildren.Add }
HAnimSegment556.FdChildren.Add(TouchSensor557);
Transform558 := TTransformNode.Create;
Transform558.Translation := Vector3(-0.0002,-0.1157,1.0552);
end;

procedure InitblenderSkeletonPart31;
begin

{ METHOD .FdChildren.Add }
Transform558.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment556.FdChildren.Add(Transform558);
HAnimSite560 := THAnimSiteNode.Create;
Transform561 := TTransformNode.Create;
Transform561.Translation := Vector3(-0.0002,-0.1157,1.0552);
{ METHOD .FdChildren.Add }
Transform561.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite560.FdChildren.Add(Transform561);
{ METHOD .FdChildren.Add }
HAnimSegment556.FdChildren.Add(HAnimSite560);
{ METHOD .FdChildren.Add }
HAnimJoint555.FdChildren.Add(HAnimSegment556);
HAnimJoint563 := THAnimJointNode.Create;
HAnimJoint563.Center := Vector3(-0.0002,-0.1156,1.0699);
HAnimSegment564 := THAnimSegmentNode.Create;
TouchSensor565 := TTouchSensorNode.Create;
TouchSensor565.Description := 'joint t9 segment SEGMENT_FOR_t9';
{ METHOD .FdChildren.Add }
HAnimSegment564.FdChildren.Add(TouchSensor565);
Transform566 := TTransformNode.Create;
Transform566.Translation := Vector3(-0.0002,-0.1156,1.0699);
{ METHOD .FdChildren.Add }
Transform566.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment564.FdChildren.Add(Transform566);
HAnimSite568 := THAnimSiteNode.Create;
Transform569 := TTransformNode.Create;
Transform569.Translation := Vector3(-0.0002,-0.1156,1.0699);
{ METHOD .FdChildren.Add }
Transform569.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite568.FdChildren.Add(Transform569);
{ METHOD .FdChildren.Add }
HAnimSegment564.FdChildren.Add(HAnimSite568);
{ METHOD .FdChildren.Add }
HAnimJoint563.FdChildren.Add(HAnimSegment564);
HAnimJoint571 := THAnimJointNode.Create;
HAnimJoint571.Center := Vector3(-0.0002,-0.1156,1.0845);
HAnimSegment572 := THAnimSegmentNode.Create;
TouchSensor573 := TTouchSensorNode.Create;
TouchSensor573.Description := 'joint t8 segment SEGMENT_FOR_t8';
{ METHOD .FdChildren.Add }
HAnimSegment572.FdChildren.Add(TouchSensor573);
Transform574 := TTransformNode.Create;
Transform574.Translation := Vector3(-0.0002,-0.1156,1.0845);
{ METHOD .FdChildren.Add }
Transform574.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment572.FdChildren.Add(Transform574);
HAnimSite576 := THAnimSiteNode.Create;
Transform577 := TTransformNode.Create;
Transform577.Translation := Vector3(-0.0002,-0.1156,1.0845);
{ METHOD .FdChildren.Add }
Transform577.FdChildren.Add(Shape12);
end;

procedure InitblenderSkeletonPart32;
begin

{ METHOD .FdChildren.Add }
HAnimSite576.FdChildren.Add(Transform577);
{ METHOD .FdChildren.Add }
HAnimSegment572.FdChildren.Add(HAnimSite576);
{ METHOD .FdChildren.Add }
HAnimJoint571.FdChildren.Add(HAnimSegment572);
HAnimJoint579 := THAnimJointNode.Create;
HAnimJoint579.Center := Vector3(-0.0002,-0.1156,1.1002);
HAnimSegment580 := THAnimSegmentNode.Create;
TouchSensor581 := TTouchSensorNode.Create;
TouchSensor581.Description := 'joint t7 segment SEGMENT_FOR_t7';
{ METHOD .FdChildren.Add }
HAnimSegment580.FdChildren.Add(TouchSensor581);
Transform582 := TTransformNode.Create;
Transform582.Translation := Vector3(-0.0002,-0.1156,1.1002);
{ METHOD .FdChildren.Add }
Transform582.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment580.FdChildren.Add(Transform582);
HAnimSite584 := THAnimSiteNode.Create;
Transform585 := TTransformNode.Create;
Transform585.Translation := Vector3(-0.0002,-0.1156,1.1002);
{ METHOD .FdChildren.Add }
Transform585.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite584.FdChildren.Add(Transform585);
{ METHOD .FdChildren.Add }
HAnimSegment580.FdChildren.Add(HAnimSite584);
{ METHOD .FdChildren.Add }
HAnimJoint579.FdChildren.Add(HAnimSegment580);
HAnimJoint587 := THAnimJointNode.Create;
HAnimJoint587.Center := Vector3(-0.0002,-0.1156,1.1131);
HAnimSegment588 := THAnimSegmentNode.Create;
TouchSensor589 := TTouchSensorNode.Create;
TouchSensor589.Description := 'joint t6 segment SEGMENT_FOR_t6';
{ METHOD .FdChildren.Add }
HAnimSegment588.FdChildren.Add(TouchSensor589);
Transform590 := TTransformNode.Create;
Transform590.Translation := Vector3(-0.0002,-0.1156,1.1131);
{ METHOD .FdChildren.Add }
Transform590.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment588.FdChildren.Add(Transform590);
HAnimSite592 := THAnimSiteNode.Create;
Transform593 := TTransformNode.Create;
Transform593.Translation := Vector3(-0.0002,-0.1156,1.1131);
{ METHOD .FdChildren.Add }
Transform593.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite592.FdChildren.Add(Transform593);
{ METHOD .FdChildren.Add }
HAnimSegment588.FdChildren.Add(HAnimSite592);
{ METHOD .FdChildren.Add }
HAnimJoint587.FdChildren.Add(HAnimSegment588);
HAnimJoint595 := THAnimJointNode.Create;
HAnimJoint595.Center := Vector3(-0.0002,-0.1156,1.1286);
HAnimSegment596 := THAnimSegmentNode.Create;
end;

procedure InitblenderSkeletonPart33;
begin

TouchSensor597 := TTouchSensorNode.Create;
TouchSensor597.Description := 'joint t5 segment SEGMENT_FOR_t5';
{ METHOD .FdChildren.Add }
HAnimSegment596.FdChildren.Add(TouchSensor597);
Transform598 := TTransformNode.Create;
Transform598.Translation := Vector3(-0.0002,-0.1156,1.1286);
{ METHOD .FdChildren.Add }
Transform598.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment596.FdChildren.Add(Transform598);
HAnimSite600 := THAnimSiteNode.Create;
Transform601 := TTransformNode.Create;
Transform601.Translation := Vector3(-0.0002,-0.1156,1.1286);
{ METHOD .FdChildren.Add }
Transform601.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite600.FdChildren.Add(Transform601);
{ METHOD .FdChildren.Add }
HAnimSegment596.FdChildren.Add(HAnimSite600);
{ METHOD .FdChildren.Add }
HAnimJoint595.FdChildren.Add(HAnimSegment596);
HAnimJoint603 := THAnimJointNode.Create;
HAnimJoint603.Center := Vector3(-0.0002,-0.1156,1.1439);
HAnimSegment604 := THAnimSegmentNode.Create;
TouchSensor605 := TTouchSensorNode.Create;
TouchSensor605.Description := 'joint t4 segment SEGMENT_FOR_t4';
{ METHOD .FdChildren.Add }
HAnimSegment604.FdChildren.Add(TouchSensor605);
Transform606 := TTransformNode.Create;
Transform606.Translation := Vector3(-0.0002,-0.1156,1.1439);
{ METHOD .FdChildren.Add }
Transform606.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment604.FdChildren.Add(Transform606);
HAnimSite608 := THAnimSiteNode.Create;
Transform609 := TTransformNode.Create;
Transform609.Translation := Vector3(-0.0002,-0.1156,1.1439);
{ METHOD .FdChildren.Add }
Transform609.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite608.FdChildren.Add(Transform609);
{ METHOD .FdChildren.Add }
HAnimSegment604.FdChildren.Add(HAnimSite608);
{ METHOD .FdChildren.Add }
HAnimJoint603.FdChildren.Add(HAnimSegment604);
HAnimJoint611 := THAnimJointNode.Create;
HAnimJoint611.Center := Vector3(-0.0002,-0.1156,1.1623);
HAnimSegment612 := THAnimSegmentNode.Create;
TouchSensor613 := TTouchSensorNode.Create;
TouchSensor613.Description := 'joint t3 segment SEGMENT_FOR_t3';
{ METHOD .FdChildren.Add }
HAnimSegment612.FdChildren.Add(TouchSensor613);
Transform614 := TTransformNode.Create;
Transform614.Translation := Vector3(-0.0002,-0.1156,1.1623);
{ METHOD .FdChildren.Add }
Transform614.FdChildren.Add(Shape17);
end;

procedure InitblenderSkeletonPart34;
begin

{ METHOD .FdChildren.Add }
HAnimSegment612.FdChildren.Add(Transform614);
HAnimSite616 := THAnimSiteNode.Create;
Transform617 := TTransformNode.Create;
Transform617.Translation := Vector3(-0.0002,-0.1156,1.1623);
{ METHOD .FdChildren.Add }
Transform617.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite616.FdChildren.Add(Transform617);
{ METHOD .FdChildren.Add }
HAnimSegment612.FdChildren.Add(HAnimSite616);
{ METHOD .FdChildren.Add }
HAnimJoint611.FdChildren.Add(HAnimSegment612);
HAnimJoint619 := THAnimJointNode.Create;
HAnimJoint619.Center := Vector3(-0.0002,-0.1157,1.1871);
HAnimSegment620 := THAnimSegmentNode.Create;
TouchSensor621 := TTouchSensorNode.Create;
TouchSensor621.Description := 'joint t2 segment SEGMENT_FOR_t2';
{ METHOD .FdChildren.Add }
HAnimSegment620.FdChildren.Add(TouchSensor621);
Transform622 := TTransformNode.Create;
Transform622.Translation := Vector3(-0.0002,-0.1157,1.1871);
{ METHOD .FdChildren.Add }
Transform622.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment620.FdChildren.Add(Transform622);
HAnimSite624 := THAnimSiteNode.Create;
Transform625 := TTransformNode.Create;
Transform625.Translation := Vector3(-0.0002,-0.1157,1.1871);
{ METHOD .FdChildren.Add }
Transform625.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite624.FdChildren.Add(Transform625);
{ METHOD .FdChildren.Add }
HAnimSegment620.FdChildren.Add(HAnimSite624);
{ METHOD .FdChildren.Add }
HAnimJoint619.FdChildren.Add(HAnimSegment620);
HAnimJoint627 := THAnimJointNode.Create;
HAnimJoint627.Center := Vector3(-0.0002,-0.1156,1.2109);
HAnimSegment628 := THAnimSegmentNode.Create;
TouchSensor629 := TTouchSensorNode.Create;
TouchSensor629.Description := 'joint t1 segment SEGMENT_FOR_t1';
{ METHOD .FdChildren.Add }
HAnimSegment628.FdChildren.Add(TouchSensor629);
Transform630 := TTransformNode.Create;
Transform630.Translation := Vector3(-0.0002,-0.1156,1.2109);
{ METHOD .FdChildren.Add }
Transform630.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment628.FdChildren.Add(Transform630);
HAnimSite632 := THAnimSiteNode.Create;
Transform633 := TTransformNode.Create;
Transform633.Translation := Vector3(-0.0002,-0.1156,1.2109);
{ METHOD .FdChildren.Add }
Transform633.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite632.FdChildren.Add(Transform633);
end;

procedure InitblenderSkeletonPart35;
begin

{ METHOD .FdChildren.Add }
HAnimSegment628.FdChildren.Add(HAnimSite632);
{ METHOD .FdChildren.Add }
HAnimJoint627.FdChildren.Add(HAnimSegment628);
HAnimJoint635 := THAnimJointNode.Create;
HAnimJoint635.Center := Vector3(-0.0002,-0.1169,1.2368);
HAnimSegment636 := THAnimSegmentNode.Create;
TouchSensor637 := TTouchSensorNode.Create;
TouchSensor637.Description := 'joint c7 segment SEGMENT_FOR_c7';
{ METHOD .FdChildren.Add }
HAnimSegment636.FdChildren.Add(TouchSensor637);
Transform638 := TTransformNode.Create;
Transform638.Translation := Vector3(-0.0002,-0.1169,1.2368);
{ METHOD .FdChildren.Add }
Transform638.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment636.FdChildren.Add(Transform638);
HAnimSite640 := THAnimSiteNode.Create;
Transform641 := TTransformNode.Create;
Transform641.Translation := Vector3(-0.0002,-0.1169,1.2368);
{ METHOD .FdChildren.Add }
Transform641.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite640.FdChildren.Add(Transform641);
{ METHOD .FdChildren.Add }
HAnimSegment636.FdChildren.Add(HAnimSite640);
{ METHOD .FdChildren.Add }
HAnimJoint635.FdChildren.Add(HAnimSegment636);
HAnimJoint643 := THAnimJointNode.Create;
HAnimJoint643.Center := Vector3(-0.0002,-0.1169,1.249);
HAnimSegment644 := THAnimSegmentNode.Create;
TouchSensor645 := TTouchSensorNode.Create;
TouchSensor645.Description := 'joint c6 segment SEGMENT_FOR_c6';
{ METHOD .FdChildren.Add }
HAnimSegment644.FdChildren.Add(TouchSensor645);
Transform646 := TTransformNode.Create;
Transform646.Translation := Vector3(-0.0002,-0.1169,1.249);
{ METHOD .FdChildren.Add }
Transform646.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment644.FdChildren.Add(Transform646);
HAnimSite648 := THAnimSiteNode.Create;
Transform649 := TTransformNode.Create;
Transform649.Translation := Vector3(-0.0002,-0.1169,1.249);
{ METHOD .FdChildren.Add }
Transform649.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite648.FdChildren.Add(Transform649);
{ METHOD .FdChildren.Add }
HAnimSegment644.FdChildren.Add(HAnimSite648);
{ METHOD .FdChildren.Add }
HAnimJoint643.FdChildren.Add(HAnimSegment644);
HAnimJoint651 := THAnimJointNode.Create;
HAnimJoint651.Center := Vector3(-0.0002,-0.1169,1.2613);
HAnimSegment652 := THAnimSegmentNode.Create;
TouchSensor653 := TTouchSensorNode.Create;
end;

procedure InitblenderSkeletonPart36;
begin

TouchSensor653.Description := 'joint c5 segment SEGMENT_FOR_c5';
{ METHOD .FdChildren.Add }
HAnimSegment652.FdChildren.Add(TouchSensor653);
Transform654 := TTransformNode.Create;
Transform654.Translation := Vector3(-0.0002,-0.1169,1.2613);
{ METHOD .FdChildren.Add }
Transform654.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment652.FdChildren.Add(Transform654);
HAnimSite656 := THAnimSiteNode.Create;
Transform657 := TTransformNode.Create;
Transform657.Translation := Vector3(-0.0002,-0.1169,1.2613);
{ METHOD .FdChildren.Add }
Transform657.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite656.FdChildren.Add(Transform657);
{ METHOD .FdChildren.Add }
HAnimSegment652.FdChildren.Add(HAnimSite656);
{ METHOD .FdChildren.Add }
HAnimJoint651.FdChildren.Add(HAnimSegment652);
HAnimJoint659 := THAnimJointNode.Create;
HAnimJoint659.Center := Vector3(-0.0002,-0.1169,1.2737);
HAnimSegment660 := THAnimSegmentNode.Create;
TouchSensor661 := TTouchSensorNode.Create;
TouchSensor661.Description := 'joint c4 segment SEGMENT_FOR_c4';
{ METHOD .FdChildren.Add }
HAnimSegment660.FdChildren.Add(TouchSensor661);
Transform662 := TTransformNode.Create;
Transform662.Translation := Vector3(-0.0002,-0.1169,1.2737);
{ METHOD .FdChildren.Add }
Transform662.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment660.FdChildren.Add(Transform662);
HAnimSite664 := THAnimSiteNode.Create;
Transform665 := TTransformNode.Create;
Transform665.Translation := Vector3(-0.0002,-0.1169,1.2737);
{ METHOD .FdChildren.Add }
Transform665.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite664.FdChildren.Add(Transform665);
{ METHOD .FdChildren.Add }
HAnimSegment660.FdChildren.Add(HAnimSite664);
{ METHOD .FdChildren.Add }
HAnimJoint659.FdChildren.Add(HAnimSegment660);
HAnimJoint667 := THAnimJointNode.Create;
HAnimJoint667.Center := Vector3(-0.0002,-0.1169,1.2865);
HAnimSegment668 := THAnimSegmentNode.Create;
TouchSensor669 := TTouchSensorNode.Create;
TouchSensor669.Description := 'joint c3 segment SEGMENT_FOR_c3';
{ METHOD .FdChildren.Add }
HAnimSegment668.FdChildren.Add(TouchSensor669);
Transform670 := TTransformNode.Create;
Transform670.Translation := Vector3(-0.0002,-0.1169,1.2865);
{ METHOD .FdChildren.Add }
Transform670.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment668.FdChildren.Add(Transform670);
end;

procedure InitblenderSkeletonPart37;
begin

HAnimSite672 := THAnimSiteNode.Create;
Transform673 := TTransformNode.Create;
Transform673.Translation := Vector3(-0.0002,-0.1169,1.2865);
{ METHOD .FdChildren.Add }
Transform673.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite672.FdChildren.Add(Transform673);
{ METHOD .FdChildren.Add }
HAnimSegment668.FdChildren.Add(HAnimSite672);
{ METHOD .FdChildren.Add }
HAnimJoint667.FdChildren.Add(HAnimSegment668);
HAnimJoint675 := THAnimJointNode.Create;
HAnimJoint675.Center := Vector3(-0.0002,-0.1169,1.2982);
HAnimSegment676 := THAnimSegmentNode.Create;
TouchSensor677 := TTouchSensorNode.Create;
TouchSensor677.Description := 'joint c2 segment SEGMENT_FOR_c2';
{ METHOD .FdChildren.Add }
HAnimSegment676.FdChildren.Add(TouchSensor677);
Transform678 := TTransformNode.Create;
Transform678.Translation := Vector3(-0.0002,-0.1169,1.2982);
{ METHOD .FdChildren.Add }
Transform678.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment676.FdChildren.Add(Transform678);
HAnimSite680 := THAnimSiteNode.Create;
Transform681 := TTransformNode.Create;
Transform681.Translation := Vector3(-0.0002,-0.1169,1.2982);
{ METHOD .FdChildren.Add }
Transform681.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite680.FdChildren.Add(Transform681);
{ METHOD .FdChildren.Add }
HAnimSegment676.FdChildren.Add(HAnimSite680);
{ METHOD .FdChildren.Add }
HAnimJoint675.FdChildren.Add(HAnimSegment676);
HAnimJoint683 := THAnimJointNode.Create;
HAnimJoint683.Center := Vector3(-0.0002,-0.1169,1.3099);
HAnimSegment684 := THAnimSegmentNode.Create;
TouchSensor685 := TTouchSensorNode.Create;
TouchSensor685.Description := 'joint c1 segment SEGMENT_FOR_c1';
{ METHOD .FdChildren.Add }
HAnimSegment684.FdChildren.Add(TouchSensor685);
Transform686 := TTransformNode.Create;
Transform686.Translation := Vector3(-0.0002,-0.1169,1.3099);
{ METHOD .FdChildren.Add }
Transform686.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment684.FdChildren.Add(Transform686);
HAnimSite688 := THAnimSiteNode.Create;
Transform689 := TTransformNode.Create;
Transform689.Translation := Vector3(-0.0002,-0.1169,1.3099);
{ METHOD .FdChildren.Add }
Transform689.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite688.FdChildren.Add(Transform689);
{ METHOD .FdChildren.Add }
HAnimSegment684.FdChildren.Add(HAnimSite688);
end;

procedure InitblenderSkeletonPart38;
begin

{ METHOD .FdChildren.Add }
HAnimJoint683.FdChildren.Add(HAnimSegment684);
HAnimJoint691 := THAnimJointNode.Create;
HAnimJoint691.Center := Vector3(-0.0002,-0.1173,1.3041);
HAnimSegment692 := THAnimSegmentNode.Create;
TouchSensor693 := TTouchSensorNode.Create;
TouchSensor693.Description := 'joint skull segment SEGMENT_FOR_skull';
{ METHOD .FdChildren.Add }
HAnimSegment692.FdChildren.Add(TouchSensor693);
Transform694 := TTransformNode.Create;
Transform694.Translation := Vector3(-0.0002,-0.1173,1.3041);
{ METHOD .FdChildren.Add }
Transform694.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment692.FdChildren.Add(Transform694);
HAnimSite696 := THAnimSiteNode.Create;
Transform697 := TTransformNode.Create;
Transform697.Translation := Vector3(-0.0002,-0.1173,1.3041);
{ METHOD .FdChildren.Add }
Transform697.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite696.FdChildren.Add(Transform697);
{ METHOD .FdChildren.Add }
HAnimSegment692.FdChildren.Add(HAnimSite696);
{ METHOD .FdChildren.Add }
HAnimJoint691.FdChildren.Add(HAnimSegment692);
HAnimJoint699 := THAnimJointNode.Create;
HAnimJoint699.Center := Vector3(0.0503,-0.0689,1.4157);
HAnimSegment700 := THAnimSegmentNode.Create;
TouchSensor701 := TTouchSensorNode.Create;
TouchSensor701.Description := 'joint l_eyelid segment SEGMENT_FOR_l_eyelid';
{ METHOD .FdChildren.Add }
HAnimSegment700.FdChildren.Add(TouchSensor701);
Transform702 := TTransformNode.Create;
Transform702.Translation := Vector3(0.0503,-0.0689,1.4157);
{ METHOD .FdChildren.Add }
Transform702.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment700.FdChildren.Add(Transform702);
HAnimSite704 := THAnimSiteNode.Create;
Transform705 := TTransformNode.Create;
Transform705.Translation := Vector3(0.0503,-0.0689,1.4157);
{ METHOD .FdChildren.Add }
Transform705.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite704.FdChildren.Add(Transform705);
{ METHOD .FdChildren.Add }
HAnimSegment700.FdChildren.Add(HAnimSite704);
{ METHOD .FdChildren.Add }
HAnimJoint699.FdChildren.Add(HAnimSegment700);
{ METHOD .FdChildren.Add }
HAnimJoint691.FdChildren.Add(HAnimJoint699);
HAnimJoint707 := THAnimJointNode.Create;
HAnimJoint707.Center := Vector3(-0.0507,-0.0689,1.4157);
HAnimSegment708 := THAnimSegmentNode.Create;
TouchSensor709 := TTouchSensorNode.Create;
end;

procedure InitblenderSkeletonPart39;
begin

TouchSensor709.Description := 'joint r_eyelid segment SEGMENT_FOR_r_eyelid';
{ METHOD .FdChildren.Add }
HAnimSegment708.FdChildren.Add(TouchSensor709);
Transform710 := TTransformNode.Create;
Transform710.Translation := Vector3(-0.0507,-0.0689,1.4157);
{ METHOD .FdChildren.Add }
Transform710.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment708.FdChildren.Add(Transform710);
HAnimSite712 := THAnimSiteNode.Create;
Transform713 := TTransformNode.Create;
Transform713.Translation := Vector3(-0.0507,-0.0689,1.4157);
{ METHOD .FdChildren.Add }
Transform713.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite712.FdChildren.Add(Transform713);
{ METHOD .FdChildren.Add }
HAnimSegment708.FdChildren.Add(HAnimSite712);
{ METHOD .FdChildren.Add }
HAnimJoint707.FdChildren.Add(HAnimSegment708);
{ METHOD .FdChildren.Add }
HAnimJoint691.FdChildren.Add(HAnimJoint707);
HAnimJoint715 := THAnimJointNode.Create;
HAnimJoint715.Center := Vector3(0.0479,-0.0188,1.3963);
HAnimSegment716 := THAnimSegmentNode.Create;
TouchSensor717 := TTouchSensorNode.Create;
TouchSensor717.Description := 'joint l_eyeball segment SEGMENT_FOR_l_eyeball';
{ METHOD .FdChildren.Add }
HAnimSegment716.FdChildren.Add(TouchSensor717);
Transform718 := TTransformNode.Create;
Transform718.Translation := Vector3(0.0479,-0.0188,1.3963);
{ METHOD .FdChildren.Add }
Transform718.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment716.FdChildren.Add(Transform718);
HAnimSite720 := THAnimSiteNode.Create;
Transform721 := TTransformNode.Create;
Transform721.Translation := Vector3(0.0479,-0.0188,1.3963);
{ METHOD .FdChildren.Add }
Transform721.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite720.FdChildren.Add(Transform721);
{ METHOD .FdChildren.Add }
HAnimSegment716.FdChildren.Add(HAnimSite720);
{ METHOD .FdChildren.Add }
HAnimJoint715.FdChildren.Add(HAnimSegment716);
{ METHOD .FdChildren.Add }
HAnimJoint691.FdChildren.Add(HAnimJoint715);
HAnimJoint723 := THAnimJointNode.Create;
HAnimJoint723.Center := Vector3(-0.0483,-0.0188,1.3963);
HAnimSegment724 := THAnimSegmentNode.Create;
TouchSensor725 := TTouchSensorNode.Create;
TouchSensor725.Description := 'joint r_eyeball segment SEGMENT_FOR_r_eyeball';
{ METHOD .FdChildren.Add }
HAnimSegment724.FdChildren.Add(TouchSensor725);
Transform726 := TTransformNode.Create;
Transform726.Translation := Vector3(-0.0483,-0.0188,1.3963);
end;

procedure InitblenderSkeletonPart40;
begin

{ METHOD .FdChildren.Add }
Transform726.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment724.FdChildren.Add(Transform726);
HAnimSite728 := THAnimSiteNode.Create;
Transform729 := TTransformNode.Create;
Transform729.Translation := Vector3(-0.0483,-0.0188,1.3963);
{ METHOD .FdChildren.Add }
Transform729.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite728.FdChildren.Add(Transform729);
{ METHOD .FdChildren.Add }
HAnimSegment724.FdChildren.Add(HAnimSite728);
{ METHOD .FdChildren.Add }
HAnimJoint723.FdChildren.Add(HAnimSegment724);
{ METHOD .FdChildren.Add }
HAnimJoint691.FdChildren.Add(HAnimJoint723);
HAnimJoint731 := THAnimJointNode.Create;
HAnimJoint731.Center := Vector3(0.0216,0.0051,1.4053);
HAnimSegment732 := THAnimSegmentNode.Create;
TouchSensor733 := TTouchSensorNode.Create;
TouchSensor733.Description := 'joint l_eyebrow segment SEGMENT_FOR_l_eyebrow';
{ METHOD .FdChildren.Add }
HAnimSegment732.FdChildren.Add(TouchSensor733);
Transform734 := TTransformNode.Create;
Transform734.Translation := Vector3(0.0216,0.0051,1.4053);
{ METHOD .FdChildren.Add }
Transform734.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment732.FdChildren.Add(Transform734);
HAnimSite736 := THAnimSiteNode.Create;
Transform737 := TTransformNode.Create;
Transform737.Translation := Vector3(0.0216,0.0051,1.4053);
{ METHOD .FdChildren.Add }
Transform737.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite736.FdChildren.Add(Transform737);
{ METHOD .FdChildren.Add }
HAnimSegment732.FdChildren.Add(HAnimSite736);
{ METHOD .FdChildren.Add }
HAnimJoint731.FdChildren.Add(HAnimSegment732);
{ METHOD .FdChildren.Add }
HAnimJoint691.FdChildren.Add(HAnimJoint731);
HAnimJoint739 := THAnimJointNode.Create;
HAnimJoint739.Center := Vector3(-0.0219,0.0051,1.4053);
HAnimSegment740 := THAnimSegmentNode.Create;
TouchSensor741 := TTouchSensorNode.Create;
TouchSensor741.Description := 'joint r_eyebrow segment SEGMENT_FOR_r_eyebrow';
{ METHOD .FdChildren.Add }
HAnimSegment740.FdChildren.Add(TouchSensor741);
Transform742 := TTransformNode.Create;
Transform742.Translation := Vector3(-0.0219,0.0051,1.4053);
{ METHOD .FdChildren.Add }
Transform742.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment740.FdChildren.Add(Transform742);
HAnimSite744 := THAnimSiteNode.Create;
Transform745 := TTransformNode.Create;
end;

procedure InitblenderSkeletonPart41;
begin

Transform745.Translation := Vector3(-0.0219,0.0051,1.4053);
{ METHOD .FdChildren.Add }
Transform745.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite744.FdChildren.Add(Transform745);
{ METHOD .FdChildren.Add }
HAnimSegment740.FdChildren.Add(HAnimSite744);
{ METHOD .FdChildren.Add }
HAnimJoint739.FdChildren.Add(HAnimSegment740);
{ METHOD .FdChildren.Add }
HAnimJoint691.FdChildren.Add(HAnimJoint739);
HAnimJoint747 := THAnimJointNode.Create;
HAnimJoint747.Center := Vector3(-0.0002,-0.0865,1.3043);
HAnimSegment748 := THAnimSegmentNode.Create;
TouchSensor749 := TTouchSensorNode.Create;
TouchSensor749.Description := 'joint jaw segment SEGMENT_FOR_jaw';
{ METHOD .FdChildren.Add }
HAnimSegment748.FdChildren.Add(TouchSensor749);
Transform750 := TTransformNode.Create;
Transform750.Translation := Vector3(-0.0002,-0.0865,1.3043);
{ METHOD .FdChildren.Add }
Transform750.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment748.FdChildren.Add(Transform750);
HAnimSite752 := THAnimSiteNode.Create;
Transform753 := TTransformNode.Create;
Transform753.Translation := Vector3(-0.0002,-0.0865,1.3043);
{ METHOD .FdChildren.Add }
Transform753.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite752.FdChildren.Add(Transform753);
{ METHOD .FdChildren.Add }
HAnimSegment748.FdChildren.Add(HAnimSite752);
{ METHOD .FdChildren.Add }
HAnimJoint747.FdChildren.Add(HAnimSegment748);
{ METHOD .FdChildren.Add }
HAnimJoint691.FdChildren.Add(HAnimJoint747);
{ METHOD .FdChildren.Add }
HAnimJoint683.FdChildren.Add(HAnimJoint691);
{ METHOD .FdChildren.Add }
HAnimJoint675.FdChildren.Add(HAnimJoint683);
{ METHOD .FdChildren.Add }
HAnimJoint667.FdChildren.Add(HAnimJoint675);
{ METHOD .FdChildren.Add }
HAnimJoint659.FdChildren.Add(HAnimJoint667);
{ METHOD .FdChildren.Add }
HAnimJoint651.FdChildren.Add(HAnimJoint659);
{ METHOD .FdChildren.Add }
HAnimJoint643.FdChildren.Add(HAnimJoint651);
{ METHOD .FdChildren.Add }
HAnimJoint635.FdChildren.Add(HAnimJoint643);
{ METHOD .FdChildren.Add }
HAnimJoint627.FdChildren.Add(HAnimJoint635);
HAnimJoint755 := THAnimJointNode.Create;
HAnimJoint755.Center := Vector3(0.1228,-0.1148,1.1833);
HAnimSegment756 := THAnimSegmentNode.Create;
TouchSensor757 := TTouchSensorNode.Create;
TouchSensor757.Description := 'joint l_clavicle segment SEGMENT_FOR_l_clavicle';
{ METHOD .FdChildren.Add }
HAnimSegment756.FdChildren.Add(TouchSensor757);
Transform758 := TTransformNode.Create;
Transform758.Translation := Vector3(0.1228,-0.1148,1.1833);
end;

procedure InitblenderSkeletonPart42;
begin

{ METHOD .FdChildren.Add }
Transform758.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment756.FdChildren.Add(Transform758);
HAnimSite760 := THAnimSiteNode.Create;
Transform761 := TTransformNode.Create;
Transform761.Translation := Vector3(0.1228,-0.1148,1.1833);
{ METHOD .FdChildren.Add }
Transform761.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite760.FdChildren.Add(Transform761);
{ METHOD .FdChildren.Add }
HAnimSegment756.FdChildren.Add(HAnimSite760);
{ METHOD .FdChildren.Add }
HAnimJoint755.FdChildren.Add(HAnimSegment756);
HAnimJoint763 := THAnimJointNode.Create;
HAnimJoint763.Center := Vector3(0.0383,-0.1157,1.2001);
HAnimSegment764 := THAnimSegmentNode.Create;
TouchSensor765 := TTouchSensorNode.Create;
TouchSensor765.Description := 'joint l_scapula segment SEGMENT_FOR_l_scapula';
{ METHOD .FdChildren.Add }
HAnimSegment764.FdChildren.Add(TouchSensor765);
Transform766 := TTransformNode.Create;
Transform766.Translation := Vector3(0.0383,-0.1157,1.2001);
{ METHOD .FdChildren.Add }
Transform766.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment764.FdChildren.Add(Transform766);
HAnimSite768 := THAnimSiteNode.Create;
Transform769 := TTransformNode.Create;
Transform769.Translation := Vector3(0.0383,-0.1157,1.2001);
{ METHOD .FdChildren.Add }
Transform769.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite768.FdChildren.Add(Transform769);
{ METHOD .FdChildren.Add }
HAnimSegment764.FdChildren.Add(HAnimSite768);
{ METHOD .FdChildren.Add }
HAnimJoint763.FdChildren.Add(HAnimSegment764);
HAnimJoint771 := THAnimJointNode.Create;
HAnimJoint771.Center := Vector3(0.1649,-0.1051,1.17);
HAnimSegment772 := THAnimSegmentNode.Create;
TouchSensor773 := TTouchSensorNode.Create;
TouchSensor773.Description := 'joint l_upperarm segment SEGMENT_FOR_l_upperarm';
{ METHOD .FdChildren.Add }
HAnimSegment772.FdChildren.Add(TouchSensor773);
Transform774 := TTransformNode.Create;
Transform774.Translation := Vector3(0.1649,-0.1051,1.17);
{ METHOD .FdChildren.Add }
Transform774.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment772.FdChildren.Add(Transform774);
HAnimSite776 := THAnimSiteNode.Create;
Transform777 := TTransformNode.Create;
Transform777.Translation := Vector3(0.1649,-0.1051,1.17);
{ METHOD .FdChildren.Add }
Transform777.FdChildren.Add(Shape12);
end;

procedure InitblenderSkeletonPart43;
begin

{ METHOD .FdChildren.Add }
HAnimSite776.FdChildren.Add(Transform777);
{ METHOD .FdChildren.Add }
HAnimSegment772.FdChildren.Add(HAnimSite776);
{ METHOD .FdChildren.Add }
HAnimJoint771.FdChildren.Add(HAnimSegment772);
HAnimJoint779 := THAnimJointNode.Create;
HAnimJoint779.Center := Vector3(0.1819,-0.1075,0.9202);
HAnimSegment780 := THAnimSegmentNode.Create;
TouchSensor781 := TTouchSensorNode.Create;
TouchSensor781.Description := 'joint l_forearm segment SEGMENT_FOR_l_forearm';
{ METHOD .FdChildren.Add }
HAnimSegment780.FdChildren.Add(TouchSensor781);
Transform782 := TTransformNode.Create;
Transform782.Translation := Vector3(0.1819,-0.1075,0.9202);
{ METHOD .FdChildren.Add }
Transform782.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment780.FdChildren.Add(Transform782);
HAnimSite784 := THAnimSiteNode.Create;
Transform785 := TTransformNode.Create;
Transform785.Translation := Vector3(0.1819,-0.1075,0.9202);
{ METHOD .FdChildren.Add }
Transform785.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite784.FdChildren.Add(Transform785);
{ METHOD .FdChildren.Add }
HAnimSegment780.FdChildren.Add(HAnimSite784);
{ METHOD .FdChildren.Add }
HAnimJoint779.FdChildren.Add(HAnimSegment780);
HAnimJoint787 := THAnimJointNode.Create;
HAnimJoint787.Center := Vector3(0.1818,-0.1069,0.7157);
HAnimSegment788 := THAnimSegmentNode.Create;
TouchSensor789 := TTouchSensorNode.Create;
TouchSensor789.Description := 'joint l_carpal segment SEGMENT_FOR_l_carpal';
{ METHOD .FdChildren.Add }
HAnimSegment788.FdChildren.Add(TouchSensor789);
Transform790 := TTransformNode.Create;
Transform790.Translation := Vector3(0.1818,-0.1069,0.7157);
{ METHOD .FdChildren.Add }
Transform790.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment788.FdChildren.Add(Transform790);
HAnimSite792 := THAnimSiteNode.Create;
Transform793 := TTransformNode.Create;
Transform793.Translation := Vector3(0.1818,-0.1069,0.7157);
{ METHOD .FdChildren.Add }
Transform793.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite792.FdChildren.Add(Transform793);
{ METHOD .FdChildren.Add }
HAnimSegment788.FdChildren.Add(HAnimSite792);
{ METHOD .FdChildren.Add }
HAnimJoint787.FdChildren.Add(HAnimSegment788);
HAnimJoint795 := THAnimJointNode.Create;
HAnimJoint795.Center := Vector3(0.1811,-0.0826,0.6975);
HAnimSegment796 := THAnimSegmentNode.Create;
end;

procedure InitblenderSkeletonPart44;
begin

TouchSensor797 := TTouchSensorNode.Create;
TouchSensor797.Description := 'joint l_trapezium segment SEGMENT_FOR_l_trapezium';
{ METHOD .FdChildren.Add }
HAnimSegment796.FdChildren.Add(TouchSensor797);
Transform798 := TTransformNode.Create;
Transform798.Translation := Vector3(0.1811,-0.0826,0.6975);
{ METHOD .FdChildren.Add }
Transform798.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment796.FdChildren.Add(Transform798);
HAnimSite800 := THAnimSiteNode.Create;
Transform801 := TTransformNode.Create;
Transform801.Translation := Vector3(0.1811,-0.0826,0.6975);
{ METHOD .FdChildren.Add }
Transform801.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite800.FdChildren.Add(Transform801);
{ METHOD .FdChildren.Add }
HAnimSegment796.FdChildren.Add(HAnimSite800);
{ METHOD .FdChildren.Add }
HAnimJoint795.FdChildren.Add(HAnimSegment796);
HAnimJoint803 := THAnimJointNode.Create;
HAnimJoint803.Center := Vector3(0.1803,-0.0759,0.684);
HAnimSegment804 := THAnimSegmentNode.Create;
TouchSensor805 := TTouchSensorNode.Create;
TouchSensor805.Description := 'joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1';
{ METHOD .FdChildren.Add }
HAnimSegment804.FdChildren.Add(TouchSensor805);
Transform806 := TTransformNode.Create;
Transform806.Translation := Vector3(0.1803,-0.0759,0.684);
{ METHOD .FdChildren.Add }
Transform806.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment804.FdChildren.Add(Transform806);
HAnimSite808 := THAnimSiteNode.Create;
Transform809 := TTransformNode.Create;
Transform809.Translation := Vector3(0.1803,-0.0759,0.684);
{ METHOD .FdChildren.Add }
Transform809.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite808.FdChildren.Add(Transform809);
{ METHOD .FdChildren.Add }
HAnimSegment804.FdChildren.Add(HAnimSite808);
{ METHOD .FdChildren.Add }
HAnimJoint803.FdChildren.Add(HAnimSegment804);
HAnimJoint811 := THAnimJointNode.Create;
HAnimJoint811.Center := Vector3(0.1809,-0.0661,0.6642);
HAnimSegment812 := THAnimSegmentNode.Create;
TouchSensor813 := TTouchSensorNode.Create;
TouchSensor813.Description := 'joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1';
{ METHOD .FdChildren.Add }
HAnimSegment812.FdChildren.Add(TouchSensor813);
Transform814 := TTransformNode.Create;
Transform814.Translation := Vector3(0.1809,-0.0661,0.6642);
{ METHOD .FdChildren.Add }
Transform814.FdChildren.Add(Shape17);
end;

procedure InitblenderSkeletonPart45;
begin

{ METHOD .FdChildren.Add }
HAnimSegment812.FdChildren.Add(Transform814);
HAnimSite816 := THAnimSiteNode.Create;
Transform817 := TTransformNode.Create;
Transform817.Translation := Vector3(0.1809,-0.0661,0.6642);
{ METHOD .FdChildren.Add }
Transform817.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite816.FdChildren.Add(Transform817);
{ METHOD .FdChildren.Add }
HAnimSegment812.FdChildren.Add(HAnimSite816);
{ METHOD .FdChildren.Add }
HAnimJoint811.FdChildren.Add(HAnimSegment812);
HAnimJoint819 := THAnimJointNode.Create;
HAnimJoint819.Center := Vector3(0.1825,-0.0522,0.6455);
HAnimSegment820 := THAnimSegmentNode.Create;
TouchSensor821 := TTouchSensorNode.Create;
TouchSensor821.Description := 'joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1';
{ METHOD .FdChildren.Add }
HAnimSegment820.FdChildren.Add(TouchSensor821);
Transform822 := TTransformNode.Create;
Transform822.Translation := Vector3(0.1825,-0.0522,0.6455);
{ METHOD .FdChildren.Add }
Transform822.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment820.FdChildren.Add(Transform822);
HAnimSite824 := THAnimSiteNode.Create;
Transform825 := TTransformNode.Create;
Transform825.Translation := Vector3(0.1825,-0.0522,0.6455);
{ METHOD .FdChildren.Add }
Transform825.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite824.FdChildren.Add(Transform825);
{ METHOD .FdChildren.Add }
HAnimSegment820.FdChildren.Add(HAnimSite824);
{ METHOD .FdChildren.Add }
HAnimJoint819.FdChildren.Add(HAnimSegment820);
{ METHOD .FdChildren.Add }
HAnimJoint811.FdChildren.Add(HAnimJoint819);
{ METHOD .FdChildren.Add }
HAnimJoint803.FdChildren.Add(HAnimJoint811);
{ METHOD .FdChildren.Add }
HAnimJoint795.FdChildren.Add(HAnimJoint803);
{ METHOD .FdChildren.Add }
HAnimJoint787.FdChildren.Add(HAnimJoint795);
HAnimJoint827 := THAnimJointNode.Create;
HAnimJoint827.Center := Vector3(0.1811,-0.0935,0.6984);
HAnimSegment828 := THAnimSegmentNode.Create;
TouchSensor829 := TTouchSensorNode.Create;
TouchSensor829.Description := 'joint l_trapezoid segment SEGMENT_FOR_l_trapezoid';
{ METHOD .FdChildren.Add }
HAnimSegment828.FdChildren.Add(TouchSensor829);
Transform830 := TTransformNode.Create;
Transform830.Translation := Vector3(0.1811,-0.0935,0.6984);
{ METHOD .FdChildren.Add }
Transform830.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment828.FdChildren.Add(Transform830);
HAnimSite832 := THAnimSiteNode.Create;
end;

procedure InitblenderSkeletonPart46;
begin

Transform833 := TTransformNode.Create;
Transform833.Translation := Vector3(0.1811,-0.0935,0.6984);
{ METHOD .FdChildren.Add }
Transform833.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite832.FdChildren.Add(Transform833);
{ METHOD .FdChildren.Add }
HAnimSegment828.FdChildren.Add(HAnimSite832);
{ METHOD .FdChildren.Add }
HAnimJoint827.FdChildren.Add(HAnimSegment828);
HAnimJoint835 := THAnimJointNode.Create;
HAnimJoint835.Center := Vector3(0.1811,-0.0922,0.679);
HAnimSegment836 := THAnimSegmentNode.Create;
TouchSensor837 := TTouchSensorNode.Create;
TouchSensor837.Description := 'joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2';
{ METHOD .FdChildren.Add }
HAnimSegment836.FdChildren.Add(TouchSensor837);
Transform838 := TTransformNode.Create;
Transform838.Translation := Vector3(0.1811,-0.0922,0.679);
{ METHOD .FdChildren.Add }
Transform838.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment836.FdChildren.Add(Transform838);
HAnimSite840 := THAnimSiteNode.Create;
Transform841 := TTransformNode.Create;
Transform841.Translation := Vector3(0.1811,-0.0922,0.679);
{ METHOD .FdChildren.Add }
Transform841.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite840.FdChildren.Add(Transform841);
{ METHOD .FdChildren.Add }
HAnimSegment836.FdChildren.Add(HAnimSite840);
{ METHOD .FdChildren.Add }
HAnimJoint835.FdChildren.Add(HAnimSegment836);
HAnimJoint843 := THAnimJointNode.Create;
HAnimJoint843.Center := Vector3(0.1836,-0.0868,0.6286);
HAnimSegment844 := THAnimSegmentNode.Create;
TouchSensor845 := TTouchSensorNode.Create;
TouchSensor845.Description := 'joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2';
{ METHOD .FdChildren.Add }
HAnimSegment844.FdChildren.Add(TouchSensor845);
Transform846 := TTransformNode.Create;
Transform846.Translation := Vector3(0.1836,-0.0868,0.6286);
{ METHOD .FdChildren.Add }
Transform846.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment844.FdChildren.Add(Transform846);
HAnimSite848 := THAnimSiteNode.Create;
Transform849 := TTransformNode.Create;
Transform849.Translation := Vector3(0.1836,-0.0868,0.6286);
{ METHOD .FdChildren.Add }
Transform849.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite848.FdChildren.Add(Transform849);
{ METHOD .FdChildren.Add }
HAnimSegment844.FdChildren.Add(HAnimSite848);
{ METHOD .FdChildren.Add }
HAnimJoint843.FdChildren.Add(HAnimSegment844);
end;

procedure InitblenderSkeletonPart47;
begin

HAnimJoint851 := THAnimJointNode.Create;
HAnimJoint851.Center := Vector3(0.1815,-0.0877,0.5983);
HAnimSegment852 := THAnimSegmentNode.Create;
TouchSensor853 := TTouchSensorNode.Create;
TouchSensor853.Description := 'joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2';
{ METHOD .FdChildren.Add }
HAnimSegment852.FdChildren.Add(TouchSensor853);
Transform854 := TTransformNode.Create;
Transform854.Translation := Vector3(0.1815,-0.0877,0.5983);
{ METHOD .FdChildren.Add }
Transform854.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment852.FdChildren.Add(Transform854);
HAnimSite856 := THAnimSiteNode.Create;
Transform857 := TTransformNode.Create;
Transform857.Translation := Vector3(0.1815,-0.0877,0.5983);
{ METHOD .FdChildren.Add }
Transform857.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite856.FdChildren.Add(Transform857);
{ METHOD .FdChildren.Add }
HAnimSegment852.FdChildren.Add(HAnimSite856);
{ METHOD .FdChildren.Add }
HAnimJoint851.FdChildren.Add(HAnimSegment852);
HAnimJoint859 := THAnimJointNode.Create;
HAnimJoint859.Center := Vector3(0.1805,-0.0885,0.5731);
HAnimSegment860 := THAnimSegmentNode.Create;
TouchSensor861 := TTouchSensorNode.Create;
TouchSensor861.Description := 'joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2';
{ METHOD .FdChildren.Add }
HAnimSegment860.FdChildren.Add(TouchSensor861);
Transform862 := TTransformNode.Create;
Transform862.Translation := Vector3(0.1805,-0.0885,0.5731);
{ METHOD .FdChildren.Add }
Transform862.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment860.FdChildren.Add(Transform862);
HAnimSite864 := THAnimSiteNode.Create;
Transform865 := TTransformNode.Create;
Transform865.Translation := Vector3(0.1805,-0.0885,0.5731);
{ METHOD .FdChildren.Add }
Transform865.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite864.FdChildren.Add(Transform865);
{ METHOD .FdChildren.Add }
HAnimSegment860.FdChildren.Add(HAnimSite864);
{ METHOD .FdChildren.Add }
HAnimJoint859.FdChildren.Add(HAnimSegment860);
{ METHOD .FdChildren.Add }
HAnimJoint851.FdChildren.Add(HAnimJoint859);
{ METHOD .FdChildren.Add }
HAnimJoint843.FdChildren.Add(HAnimJoint851);
{ METHOD .FdChildren.Add }
HAnimJoint835.FdChildren.Add(HAnimJoint843);
{ METHOD .FdChildren.Add }
HAnimJoint827.FdChildren.Add(HAnimJoint835);
{ METHOD .FdChildren.Add }
HAnimJoint787.FdChildren.Add(HAnimJoint827);
HAnimJoint867 := THAnimJointNode.Create;
end;

procedure InitblenderSkeletonPart48;
begin

HAnimJoint867.Center := Vector3(0.1809,-0.1067,0.7);
HAnimSegment868 := THAnimSegmentNode.Create;
TouchSensor869 := TTouchSensorNode.Create;
TouchSensor869.Description := 'joint l_capitate segment SEGMENT_FOR_l_capitate';
{ METHOD .FdChildren.Add }
HAnimSegment868.FdChildren.Add(TouchSensor869);
Transform870 := TTransformNode.Create;
Transform870.Translation := Vector3(0.1809,-0.1067,0.7);
{ METHOD .FdChildren.Add }
Transform870.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment868.FdChildren.Add(Transform870);
HAnimSite872 := THAnimSiteNode.Create;
Transform873 := TTransformNode.Create;
Transform873.Translation := Vector3(0.1809,-0.1067,0.7);
{ METHOD .FdChildren.Add }
Transform873.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite872.FdChildren.Add(Transform873);
{ METHOD .FdChildren.Add }
HAnimSegment868.FdChildren.Add(HAnimSite872);
{ METHOD .FdChildren.Add }
HAnimJoint867.FdChildren.Add(HAnimSegment868);
HAnimJoint875 := THAnimJointNode.Create;
HAnimJoint875.Center := Vector3(0.1809,-0.1081,0.6772);
HAnimSegment876 := THAnimSegmentNode.Create;
TouchSensor877 := TTouchSensorNode.Create;
TouchSensor877.Description := 'joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3';
{ METHOD .FdChildren.Add }
HAnimSegment876.FdChildren.Add(TouchSensor877);
Transform878 := TTransformNode.Create;
Transform878.Translation := Vector3(0.1809,-0.1081,0.6772);
{ METHOD .FdChildren.Add }
Transform878.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment876.FdChildren.Add(Transform878);
HAnimSite880 := THAnimSiteNode.Create;
Transform881 := TTransformNode.Create;
Transform881.Translation := Vector3(0.1809,-0.1081,0.6772);
{ METHOD .FdChildren.Add }
Transform881.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite880.FdChildren.Add(Transform881);
{ METHOD .FdChildren.Add }
HAnimSegment876.FdChildren.Add(HAnimSite880);
{ METHOD .FdChildren.Add }
HAnimJoint875.FdChildren.Add(HAnimSegment876);
HAnimJoint883 := THAnimJointNode.Create;
HAnimJoint883.Center := Vector3(0.1835,-0.1058,0.6264);
HAnimSegment884 := THAnimSegmentNode.Create;
TouchSensor885 := TTouchSensorNode.Create;
TouchSensor885.Description := 'joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSegment884.FdChildren.Add(TouchSensor885);
Transform886 := TTransformNode.Create;
end;

procedure InitblenderSkeletonPart49;
begin

Transform886.Translation := Vector3(0.1835,-0.1058,0.6264);
{ METHOD .FdChildren.Add }
Transform886.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment884.FdChildren.Add(Transform886);
HAnimSite888 := THAnimSiteNode.Create;
Transform889 := TTransformNode.Create;
Transform889.Translation := Vector3(0.1835,-0.1058,0.6264);
{ METHOD .FdChildren.Add }
Transform889.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite888.FdChildren.Add(Transform889);
{ METHOD .FdChildren.Add }
HAnimSegment884.FdChildren.Add(HAnimSite888);
{ METHOD .FdChildren.Add }
HAnimJoint883.FdChildren.Add(HAnimSegment884);
HAnimJoint891 := THAnimJointNode.Create;
HAnimJoint891.Center := Vector3(0.1815,-0.1054,0.5947);
HAnimSegment892 := THAnimSegmentNode.Create;
TouchSensor893 := TTouchSensorNode.Create;
TouchSensor893.Description := 'joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSegment892.FdChildren.Add(TouchSensor893);
Transform894 := TTransformNode.Create;
Transform894.Translation := Vector3(0.1815,-0.1054,0.5947);
{ METHOD .FdChildren.Add }
Transform894.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment892.FdChildren.Add(Transform894);
HAnimSite896 := THAnimSiteNode.Create;
Transform897 := TTransformNode.Create;
Transform897.Translation := Vector3(0.1815,-0.1054,0.5947);
{ METHOD .FdChildren.Add }
Transform897.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite896.FdChildren.Add(Transform897);
{ METHOD .FdChildren.Add }
HAnimSegment892.FdChildren.Add(HAnimSite896);
{ METHOD .FdChildren.Add }
HAnimJoint891.FdChildren.Add(HAnimSegment892);
HAnimJoint899 := THAnimJointNode.Create;
HAnimJoint899.Center := Vector3(0.1805,-0.1056,0.5668);
HAnimSegment900 := THAnimSegmentNode.Create;
TouchSensor901 := TTouchSensorNode.Create;
TouchSensor901.Description := 'joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSegment900.FdChildren.Add(TouchSensor901);
Transform902 := TTransformNode.Create;
Transform902.Translation := Vector3(0.1805,-0.1056,0.5668);
{ METHOD .FdChildren.Add }
Transform902.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment900.FdChildren.Add(Transform902);
HAnimSite904 := THAnimSiteNode.Create;
Transform905 := TTransformNode.Create;
Transform905.Translation := Vector3(0.1805,-0.1056,0.5668);
end;

procedure InitblenderSkeletonPart50;
begin

{ METHOD .FdChildren.Add }
Transform905.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite904.FdChildren.Add(Transform905);
{ METHOD .FdChildren.Add }
HAnimSegment900.FdChildren.Add(HAnimSite904);
{ METHOD .FdChildren.Add }
HAnimJoint899.FdChildren.Add(HAnimSegment900);
{ METHOD .FdChildren.Add }
HAnimJoint891.FdChildren.Add(HAnimJoint899);
{ METHOD .FdChildren.Add }
HAnimJoint883.FdChildren.Add(HAnimJoint891);
{ METHOD .FdChildren.Add }
HAnimJoint875.FdChildren.Add(HAnimJoint883);
{ METHOD .FdChildren.Add }
HAnimJoint867.FdChildren.Add(HAnimJoint875);
{ METHOD .FdChildren.Add }
HAnimJoint787.FdChildren.Add(HAnimJoint867);
HAnimJoint907 := THAnimJointNode.Create;
HAnimJoint907.Center := Vector3(0.1809,-0.1276,0.6973);
HAnimSegment908 := THAnimSegmentNode.Create;
TouchSensor909 := TTouchSensorNode.Create;
TouchSensor909.Description := 'joint l_hamate segment SEGMENT_FOR_l_hamate';
{ METHOD .FdChildren.Add }
HAnimSegment908.FdChildren.Add(TouchSensor909);
Transform910 := TTransformNode.Create;
Transform910.Translation := Vector3(0.1809,-0.1276,0.6973);
{ METHOD .FdChildren.Add }
Transform910.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment908.FdChildren.Add(Transform910);
HAnimSite912 := THAnimSiteNode.Create;
Transform913 := TTransformNode.Create;
Transform913.Translation := Vector3(0.1809,-0.1276,0.6973);
{ METHOD .FdChildren.Add }
Transform913.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite912.FdChildren.Add(Transform913);
{ METHOD .FdChildren.Add }
HAnimSegment908.FdChildren.Add(HAnimSite912);
{ METHOD .FdChildren.Add }
HAnimJoint907.FdChildren.Add(HAnimSegment908);
HAnimJoint915 := THAnimJointNode.Create;
HAnimJoint915.Center := Vector3(0.1809,-0.1218,0.6777);
HAnimSegment916 := THAnimSegmentNode.Create;
TouchSensor917 := TTouchSensorNode.Create;
TouchSensor917.Description := 'joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4';
{ METHOD .FdChildren.Add }
HAnimSegment916.FdChildren.Add(TouchSensor917);
Transform918 := TTransformNode.Create;
Transform918.Translation := Vector3(0.1809,-0.1218,0.6777);
{ METHOD .FdChildren.Add }
Transform918.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment916.FdChildren.Add(Transform918);
HAnimSite920 := THAnimSiteNode.Create;
Transform921 := TTransformNode.Create;
Transform921.Translation := Vector3(0.1809,-0.1218,0.6777);
{ METHOD .FdChildren.Add }
Transform921.FdChildren.Add(Shape12);
end;

procedure InitblenderSkeletonPart51;
begin

{ METHOD .FdChildren.Add }
HAnimSite920.FdChildren.Add(Transform921);
{ METHOD .FdChildren.Add }
HAnimSegment916.FdChildren.Add(HAnimSite920);
{ METHOD .FdChildren.Add }
HAnimJoint915.FdChildren.Add(HAnimSegment916);
HAnimJoint923 := THAnimJointNode.Create;
HAnimJoint923.Center := Vector3(0.1835,-0.1233,0.6255);
HAnimSegment924 := THAnimSegmentNode.Create;
TouchSensor925 := TTouchSensorNode.Create;
TouchSensor925.Description := 'joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4';
{ METHOD .FdChildren.Add }
HAnimSegment924.FdChildren.Add(TouchSensor925);
Transform926 := TTransformNode.Create;
Transform926.Translation := Vector3(0.1835,-0.1233,0.6255);
{ METHOD .FdChildren.Add }
Transform926.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment924.FdChildren.Add(Transform926);
HAnimSite928 := THAnimSiteNode.Create;
Transform929 := TTransformNode.Create;
Transform929.Translation := Vector3(0.1835,-0.1233,0.6255);
{ METHOD .FdChildren.Add }
Transform929.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite928.FdChildren.Add(Transform929);
{ METHOD .FdChildren.Add }
HAnimSegment924.FdChildren.Add(HAnimSite928);
{ METHOD .FdChildren.Add }
HAnimJoint923.FdChildren.Add(HAnimSegment924);
HAnimJoint931 := THAnimJointNode.Create;
HAnimJoint931.Center := Vector3(0.1815,-0.1225,0.598);
HAnimSegment932 := THAnimSegmentNode.Create;
TouchSensor933 := TTouchSensorNode.Create;
TouchSensor933.Description := 'joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4';
{ METHOD .FdChildren.Add }
HAnimSegment932.FdChildren.Add(TouchSensor933);
Transform934 := TTransformNode.Create;
Transform934.Translation := Vector3(0.1815,-0.1225,0.598);
{ METHOD .FdChildren.Add }
Transform934.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment932.FdChildren.Add(Transform934);
HAnimSite936 := THAnimSiteNode.Create;
Transform937 := TTransformNode.Create;
Transform937.Translation := Vector3(0.1815,-0.1225,0.598);
{ METHOD .FdChildren.Add }
Transform937.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite936.FdChildren.Add(Transform937);
{ METHOD .FdChildren.Add }
HAnimSegment932.FdChildren.Add(HAnimSite936);
{ METHOD .FdChildren.Add }
HAnimJoint931.FdChildren.Add(HAnimSegment932);
HAnimJoint939 := THAnimJointNode.Create;
HAnimJoint939.Center := Vector3(0.1805,-0.1217,0.5722);
HAnimSegment940 := THAnimSegmentNode.Create;
end;

procedure InitblenderSkeletonPart52;
begin

TouchSensor941 := TTouchSensorNode.Create;
TouchSensor941.Description := 'joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4';
{ METHOD .FdChildren.Add }
HAnimSegment940.FdChildren.Add(TouchSensor941);
Transform942 := TTransformNode.Create;
Transform942.Translation := Vector3(0.1805,-0.1217,0.5722);
{ METHOD .FdChildren.Add }
Transform942.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment940.FdChildren.Add(Transform942);
HAnimSite944 := THAnimSiteNode.Create;
Transform945 := TTransformNode.Create;
Transform945.Translation := Vector3(0.1805,-0.1217,0.5722);
{ METHOD .FdChildren.Add }
Transform945.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite944.FdChildren.Add(Transform945);
{ METHOD .FdChildren.Add }
HAnimSegment940.FdChildren.Add(HAnimSite944);
{ METHOD .FdChildren.Add }
HAnimJoint939.FdChildren.Add(HAnimSegment940);
{ METHOD .FdChildren.Add }
HAnimJoint931.FdChildren.Add(HAnimJoint939);
{ METHOD .FdChildren.Add }
HAnimJoint923.FdChildren.Add(HAnimJoint931);
{ METHOD .FdChildren.Add }
HAnimJoint915.FdChildren.Add(HAnimJoint923);
{ METHOD .FdChildren.Add }
HAnimJoint907.FdChildren.Add(HAnimJoint915);
HAnimJoint947 := THAnimJointNode.Create;
HAnimJoint947.Center := Vector3(0.1815,-0.1347,0.6797);
HAnimSegment948 := THAnimSegmentNode.Create;
TouchSensor949 := TTouchSensorNode.Create;
TouchSensor949.Description := 'joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5';
{ METHOD .FdChildren.Add }
HAnimSegment948.FdChildren.Add(TouchSensor949);
Transform950 := TTransformNode.Create;
Transform950.Translation := Vector3(0.1815,-0.1347,0.6797);
{ METHOD .FdChildren.Add }
Transform950.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment948.FdChildren.Add(Transform950);
HAnimSite952 := THAnimSiteNode.Create;
Transform953 := TTransformNode.Create;
Transform953.Translation := Vector3(0.1815,-0.1347,0.6797);
{ METHOD .FdChildren.Add }
Transform953.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite952.FdChildren.Add(Transform953);
{ METHOD .FdChildren.Add }
HAnimSegment948.FdChildren.Add(HAnimSite952);
{ METHOD .FdChildren.Add }
HAnimJoint947.FdChildren.Add(HAnimSegment948);
HAnimJoint955 := THAnimJointNode.Create;
HAnimJoint955.Center := Vector3(0.1832,-0.1389,0.6295);
HAnimSegment956 := THAnimSegmentNode.Create;
TouchSensor957 := TTouchSensorNode.Create;
TouchSensor957.Description := 'joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5';
end;

procedure InitblenderSkeletonPart53;
begin

{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(TouchSensor957);
Transform958 := TTransformNode.Create;
Transform958.Translation := Vector3(0.1832,-0.1389,0.6295);
{ METHOD .FdChildren.Add }
Transform958.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(Transform958);
HAnimSite960 := THAnimSiteNode.Create;
Transform961 := TTransformNode.Create;
Transform961.Translation := Vector3(0.1832,-0.1389,0.6295);
{ METHOD .FdChildren.Add }
Transform961.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite960.FdChildren.Add(Transform961);
{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(HAnimSite960);
{ METHOD .FdChildren.Add }
HAnimJoint955.FdChildren.Add(HAnimSegment956);
HAnimJoint963 := THAnimJointNode.Create;
HAnimJoint963.Center := Vector3(0.1815,-0.139,0.6124);
HAnimSegment964 := THAnimSegmentNode.Create;
TouchSensor965 := TTouchSensorNode.Create;
TouchSensor965.Description := 'joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSegment964.FdChildren.Add(TouchSensor965);
Transform966 := TTransformNode.Create;
Transform966.Translation := Vector3(0.1815,-0.139,0.6124);
{ METHOD .FdChildren.Add }
Transform966.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment964.FdChildren.Add(Transform966);
HAnimSite968 := THAnimSiteNode.Create;
Transform969 := TTransformNode.Create;
Transform969.Translation := Vector3(0.1815,-0.139,0.6124);
{ METHOD .FdChildren.Add }
Transform969.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite968.FdChildren.Add(Transform969);
{ METHOD .FdChildren.Add }
HAnimSegment964.FdChildren.Add(HAnimSite968);
{ METHOD .FdChildren.Add }
HAnimJoint963.FdChildren.Add(HAnimSegment964);
HAnimJoint971 := THAnimJointNode.Create;
HAnimJoint971.Center := Vector3(0.1806,-0.1388,0.5938);
HAnimSegment972 := THAnimSegmentNode.Create;
TouchSensor973 := TTouchSensorNode.Create;
TouchSensor973.Description := 'joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSegment972.FdChildren.Add(TouchSensor973);
Transform974 := TTransformNode.Create;
Transform974.Translation := Vector3(0.1806,-0.1388,0.5938);
{ METHOD .FdChildren.Add }
Transform974.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment972.FdChildren.Add(Transform974);
HAnimSite976 := THAnimSiteNode.Create;
end;

procedure InitblenderSkeletonPart54;
begin

Transform977 := TTransformNode.Create;
Transform977.Translation := Vector3(0.1806,-0.1388,0.5938);
{ METHOD .FdChildren.Add }
Transform977.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite976.FdChildren.Add(Transform977);
{ METHOD .FdChildren.Add }
HAnimSegment972.FdChildren.Add(HAnimSite976);
{ METHOD .FdChildren.Add }
HAnimJoint971.FdChildren.Add(HAnimSegment972);
{ METHOD .FdChildren.Add }
HAnimJoint963.FdChildren.Add(HAnimJoint971);
{ METHOD .FdChildren.Add }
HAnimJoint955.FdChildren.Add(HAnimJoint963);
{ METHOD .FdChildren.Add }
HAnimJoint947.FdChildren.Add(HAnimJoint955);
{ METHOD .FdChildren.Add }
HAnimJoint907.FdChildren.Add(HAnimJoint947);
{ METHOD .FdChildren.Add }
HAnimJoint787.FdChildren.Add(HAnimJoint907);
{ METHOD .FdChildren.Add }
HAnimJoint779.FdChildren.Add(HAnimJoint787);
{ METHOD .FdChildren.Add }
HAnimJoint771.FdChildren.Add(HAnimJoint779);
{ METHOD .FdChildren.Add }
HAnimJoint763.FdChildren.Add(HAnimJoint771);
{ METHOD .FdChildren.Add }
HAnimJoint755.FdChildren.Add(HAnimJoint763);
{ METHOD .FdChildren.Add }
HAnimJoint627.FdChildren.Add(HAnimJoint755);
HAnimJoint979 := THAnimJointNode.Create;
HAnimJoint979.Center := Vector3(-0.1231,-0.1148,1.1833);
HAnimSegment980 := THAnimSegmentNode.Create;
TouchSensor981 := TTouchSensorNode.Create;
TouchSensor981.Description := 'joint r_clavicle segment SEGMENT_FOR_r_clavicle';
{ METHOD .FdChildren.Add }
HAnimSegment980.FdChildren.Add(TouchSensor981);
Transform982 := TTransformNode.Create;
Transform982.Translation := Vector3(-0.1231,-0.1148,1.1833);
{ METHOD .FdChildren.Add }
Transform982.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment980.FdChildren.Add(Transform982);
HAnimSite984 := THAnimSiteNode.Create;
Transform985 := TTransformNode.Create;
Transform985.Translation := Vector3(-0.1231,-0.1148,1.1833);
{ METHOD .FdChildren.Add }
Transform985.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite984.FdChildren.Add(Transform985);
{ METHOD .FdChildren.Add }
HAnimSegment980.FdChildren.Add(HAnimSite984);
{ METHOD .FdChildren.Add }
HAnimJoint979.FdChildren.Add(HAnimSegment980);
HAnimJoint987 := THAnimJointNode.Create;
HAnimJoint987.Center := Vector3(-0.0387,-0.1157,1.2001);
HAnimSegment988 := THAnimSegmentNode.Create;
TouchSensor989 := TTouchSensorNode.Create;
TouchSensor989.Description := 'joint r_scapula segment SEGMENT_FOR_r_scapula';
{ METHOD .FdChildren.Add }
HAnimSegment988.FdChildren.Add(TouchSensor989);
Transform990 := TTransformNode.Create;
end;

procedure InitblenderSkeletonPart55;
begin

Transform990.Translation := Vector3(-0.0387,-0.1157,1.2001);
{ METHOD .FdChildren.Add }
Transform990.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment988.FdChildren.Add(Transform990);
HAnimSite992 := THAnimSiteNode.Create;
Transform993 := TTransformNode.Create;
Transform993.Translation := Vector3(-0.0387,-0.1157,1.2001);
{ METHOD .FdChildren.Add }
Transform993.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite992.FdChildren.Add(Transform993);
{ METHOD .FdChildren.Add }
HAnimSegment988.FdChildren.Add(HAnimSite992);
{ METHOD .FdChildren.Add }
HAnimJoint987.FdChildren.Add(HAnimSegment988);
HAnimJoint995 := THAnimJointNode.Create;
HAnimJoint995.Center := Vector3(-0.1649,-0.1051,1.17);
HAnimSegment996 := THAnimSegmentNode.Create;
TouchSensor997 := TTouchSensorNode.Create;
TouchSensor997.Description := 'joint r_upperarm segment SEGMENT_FOR_r_upperarm';
{ METHOD .FdChildren.Add }
HAnimSegment996.FdChildren.Add(TouchSensor997);
Transform998 := TTransformNode.Create;
Transform998.Translation := Vector3(-0.1649,-0.1051,1.17);
{ METHOD .FdChildren.Add }
Transform998.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment996.FdChildren.Add(Transform998);
HAnimSite1000 := THAnimSiteNode.Create;
Transform1001 := TTransformNode.Create;
Transform1001.Translation := Vector3(-0.1649,-0.1051,1.17);
{ METHOD .FdChildren.Add }
Transform1001.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1000.FdChildren.Add(Transform1001);
{ METHOD .FdChildren.Add }
HAnimSegment996.FdChildren.Add(HAnimSite1000);
{ METHOD .FdChildren.Add }
HAnimJoint995.FdChildren.Add(HAnimSegment996);
HAnimJoint1003 := THAnimJointNode.Create;
HAnimJoint1003.Center := Vector3(-0.1819,-0.1075,0.9202);
HAnimSegment1004 := THAnimSegmentNode.Create;
TouchSensor1005 := TTouchSensorNode.Create;
TouchSensor1005.Description := 'joint r_forearm segment SEGMENT_FOR_r_forearm';
{ METHOD .FdChildren.Add }
HAnimSegment1004.FdChildren.Add(TouchSensor1005);
Transform1006 := TTransformNode.Create;
Transform1006.Translation := Vector3(-0.1819,-0.1075,0.9202);
{ METHOD .FdChildren.Add }
Transform1006.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1004.FdChildren.Add(Transform1006);
HAnimSite1008 := THAnimSiteNode.Create;
Transform1009 := TTransformNode.Create;
Transform1009.Translation := Vector3(-0.1819,-0.1075,0.9202);
end;

procedure InitblenderSkeletonPart56;
begin

{ METHOD .FdChildren.Add }
Transform1009.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1008.FdChildren.Add(Transform1009);
{ METHOD .FdChildren.Add }
HAnimSegment1004.FdChildren.Add(HAnimSite1008);
{ METHOD .FdChildren.Add }
HAnimJoint1003.FdChildren.Add(HAnimSegment1004);
HAnimJoint1011 := THAnimJointNode.Create;
HAnimJoint1011.Center := Vector3(-0.1818,-0.1069,0.7157);
HAnimSegment1012 := THAnimSegmentNode.Create;
TouchSensor1013 := TTouchSensorNode.Create;
TouchSensor1013.Description := 'joint r_carpal segment SEGMENT_FOR_r_carpal';
{ METHOD .FdChildren.Add }
HAnimSegment1012.FdChildren.Add(TouchSensor1013);
Transform1014 := TTransformNode.Create;
Transform1014.Translation := Vector3(-0.1818,-0.1069,0.7157);
{ METHOD .FdChildren.Add }
Transform1014.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1012.FdChildren.Add(Transform1014);
HAnimSite1016 := THAnimSiteNode.Create;
Transform1017 := TTransformNode.Create;
Transform1017.Translation := Vector3(-0.1818,-0.1069,0.7157);
{ METHOD .FdChildren.Add }
Transform1017.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1016.FdChildren.Add(Transform1017);
{ METHOD .FdChildren.Add }
HAnimSegment1012.FdChildren.Add(HAnimSite1016);
{ METHOD .FdChildren.Add }
HAnimJoint1011.FdChildren.Add(HAnimSegment1012);
HAnimJoint1019 := THAnimJointNode.Create;
HAnimJoint1019.Center := Vector3(-0.1811,-0.0826,0.6975);
HAnimSegment1020 := THAnimSegmentNode.Create;
TouchSensor1021 := TTouchSensorNode.Create;
TouchSensor1021.Description := 'joint r_trapezium segment SEGMENT_FOR_r_trapezium';
{ METHOD .FdChildren.Add }
HAnimSegment1020.FdChildren.Add(TouchSensor1021);
Transform1022 := TTransformNode.Create;
Transform1022.Translation := Vector3(-0.1811,-0.0826,0.6975);
{ METHOD .FdChildren.Add }
Transform1022.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1020.FdChildren.Add(Transform1022);
HAnimSite1024 := THAnimSiteNode.Create;
Transform1025 := TTransformNode.Create;
Transform1025.Translation := Vector3(-0.1811,-0.0826,0.6975);
{ METHOD .FdChildren.Add }
Transform1025.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1024.FdChildren.Add(Transform1025);
{ METHOD .FdChildren.Add }
HAnimSegment1020.FdChildren.Add(HAnimSite1024);
{ METHOD .FdChildren.Add }
HAnimJoint1019.FdChildren.Add(HAnimSegment1020);
HAnimJoint1027 := THAnimJointNode.Create;
HAnimJoint1027.Center := Vector3(-0.1803,-0.0759,0.684);
end;

procedure InitblenderSkeletonPart57;
begin

HAnimSegment1028 := THAnimSegmentNode.Create;
TouchSensor1029 := TTouchSensorNode.Create;
TouchSensor1029.Description := 'joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1';
{ METHOD .FdChildren.Add }
HAnimSegment1028.FdChildren.Add(TouchSensor1029);
Transform1030 := TTransformNode.Create;
Transform1030.Translation := Vector3(-0.1803,-0.0759,0.684);
{ METHOD .FdChildren.Add }
Transform1030.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1028.FdChildren.Add(Transform1030);
HAnimSite1032 := THAnimSiteNode.Create;
Transform1033 := TTransformNode.Create;
Transform1033.Translation := Vector3(-0.1803,-0.0759,0.684);
{ METHOD .FdChildren.Add }
Transform1033.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1032.FdChildren.Add(Transform1033);
{ METHOD .FdChildren.Add }
HAnimSegment1028.FdChildren.Add(HAnimSite1032);
{ METHOD .FdChildren.Add }
HAnimJoint1027.FdChildren.Add(HAnimSegment1028);
HAnimJoint1035 := THAnimJointNode.Create;
HAnimJoint1035.Center := Vector3(-0.1808,-0.0661,0.6642);
HAnimSegment1036 := THAnimSegmentNode.Create;
TouchSensor1037 := TTouchSensorNode.Create;
TouchSensor1037.Description := 'joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1';
{ METHOD .FdChildren.Add }
HAnimSegment1036.FdChildren.Add(TouchSensor1037);
Transform1038 := TTransformNode.Create;
Transform1038.Translation := Vector3(-0.1808,-0.0661,0.6642);
{ METHOD .FdChildren.Add }
Transform1038.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1036.FdChildren.Add(Transform1038);
HAnimSite1040 := THAnimSiteNode.Create;
Transform1041 := TTransformNode.Create;
Transform1041.Translation := Vector3(-0.1808,-0.0661,0.6642);
{ METHOD .FdChildren.Add }
Transform1041.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1040.FdChildren.Add(Transform1041);
{ METHOD .FdChildren.Add }
HAnimSegment1036.FdChildren.Add(HAnimSite1040);
{ METHOD .FdChildren.Add }
HAnimJoint1035.FdChildren.Add(HAnimSegment1036);
HAnimJoint1043 := THAnimJointNode.Create;
HAnimJoint1043.Center := Vector3(-0.1825,-0.0522,0.6455);
HAnimSegment1044 := THAnimSegmentNode.Create;
TouchSensor1045 := TTouchSensorNode.Create;
TouchSensor1045.Description := 'joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1';
{ METHOD .FdChildren.Add }
HAnimSegment1044.FdChildren.Add(TouchSensor1045);
Transform1046 := TTransformNode.Create;
Transform1046.Translation := Vector3(-0.1825,-0.0522,0.6455);
end;

procedure InitblenderSkeletonPart58;
begin

{ METHOD .FdChildren.Add }
Transform1046.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1044.FdChildren.Add(Transform1046);
HAnimSite1048 := THAnimSiteNode.Create;
Transform1049 := TTransformNode.Create;
Transform1049.Translation := Vector3(-0.1825,-0.0522,0.6455);
{ METHOD .FdChildren.Add }
Transform1049.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1048.FdChildren.Add(Transform1049);
{ METHOD .FdChildren.Add }
HAnimSegment1044.FdChildren.Add(HAnimSite1048);
{ METHOD .FdChildren.Add }
HAnimJoint1043.FdChildren.Add(HAnimSegment1044);
{ METHOD .FdChildren.Add }
HAnimJoint1035.FdChildren.Add(HAnimJoint1043);
{ METHOD .FdChildren.Add }
HAnimJoint1027.FdChildren.Add(HAnimJoint1035);
{ METHOD .FdChildren.Add }
HAnimJoint1019.FdChildren.Add(HAnimJoint1027);
{ METHOD .FdChildren.Add }
HAnimJoint1011.FdChildren.Add(HAnimJoint1019);
HAnimJoint1051 := THAnimJointNode.Create;
HAnimJoint1051.Center := Vector3(-0.1811,-0.0935,0.6984);
HAnimSegment1052 := THAnimSegmentNode.Create;
TouchSensor1053 := TTouchSensorNode.Create;
TouchSensor1053.Description := 'joint r_trapezoid segment SEGMENT_FOR_r_trapezoid';
{ METHOD .FdChildren.Add }
HAnimSegment1052.FdChildren.Add(TouchSensor1053);
Transform1054 := TTransformNode.Create;
Transform1054.Translation := Vector3(-0.1811,-0.0935,0.6984);
{ METHOD .FdChildren.Add }
Transform1054.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1052.FdChildren.Add(Transform1054);
HAnimSite1056 := THAnimSiteNode.Create;
Transform1057 := TTransformNode.Create;
Transform1057.Translation := Vector3(-0.1811,-0.0935,0.6984);
{ METHOD .FdChildren.Add }
Transform1057.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1056.FdChildren.Add(Transform1057);
{ METHOD .FdChildren.Add }
HAnimSegment1052.FdChildren.Add(HAnimSite1056);
{ METHOD .FdChildren.Add }
HAnimJoint1051.FdChildren.Add(HAnimSegment1052);
HAnimJoint1059 := THAnimJointNode.Create;
HAnimJoint1059.Center := Vector3(-0.1811,-0.0922,0.679);
HAnimSegment1060 := THAnimSegmentNode.Create;
TouchSensor1061 := TTouchSensorNode.Create;
TouchSensor1061.Description := 'joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2';
{ METHOD .FdChildren.Add }
HAnimSegment1060.FdChildren.Add(TouchSensor1061);
Transform1062 := TTransformNode.Create;
Transform1062.Translation := Vector3(-0.1811,-0.0922,0.679);
{ METHOD .FdChildren.Add }
Transform1062.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1060.FdChildren.Add(Transform1062);
end;

procedure InitblenderSkeletonPart59;
begin

HAnimSite1064 := THAnimSiteNode.Create;
Transform1065 := TTransformNode.Create;
Transform1065.Translation := Vector3(-0.1811,-0.0922,0.679);
{ METHOD .FdChildren.Add }
Transform1065.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1064.FdChildren.Add(Transform1065);
{ METHOD .FdChildren.Add }
HAnimSegment1060.FdChildren.Add(HAnimSite1064);
{ METHOD .FdChildren.Add }
HAnimJoint1059.FdChildren.Add(HAnimSegment1060);
HAnimJoint1067 := THAnimJointNode.Create;
HAnimJoint1067.Center := Vector3(-0.1835,-0.0868,0.6286);
HAnimSegment1068 := THAnimSegmentNode.Create;
TouchSensor1069 := TTouchSensorNode.Create;
TouchSensor1069.Description := 'joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2';
{ METHOD .FdChildren.Add }
HAnimSegment1068.FdChildren.Add(TouchSensor1069);
Transform1070 := TTransformNode.Create;
Transform1070.Translation := Vector3(-0.1835,-0.0868,0.6286);
{ METHOD .FdChildren.Add }
Transform1070.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1068.FdChildren.Add(Transform1070);
HAnimSite1072 := THAnimSiteNode.Create;
Transform1073 := TTransformNode.Create;
Transform1073.Translation := Vector3(-0.1835,-0.0868,0.6286);
{ METHOD .FdChildren.Add }
Transform1073.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1072.FdChildren.Add(Transform1073);
{ METHOD .FdChildren.Add }
HAnimSegment1068.FdChildren.Add(HAnimSite1072);
{ METHOD .FdChildren.Add }
HAnimJoint1067.FdChildren.Add(HAnimSegment1068);
HAnimJoint1075 := THAnimJointNode.Create;
HAnimJoint1075.Center := Vector3(-0.1815,-0.0877,0.5983);
HAnimSegment1076 := THAnimSegmentNode.Create;
TouchSensor1077 := TTouchSensorNode.Create;
TouchSensor1077.Description := 'joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2';
{ METHOD .FdChildren.Add }
HAnimSegment1076.FdChildren.Add(TouchSensor1077);
Transform1078 := TTransformNode.Create;
Transform1078.Translation := Vector3(-0.1815,-0.0877,0.5983);
{ METHOD .FdChildren.Add }
Transform1078.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1076.FdChildren.Add(Transform1078);
HAnimSite1080 := THAnimSiteNode.Create;
Transform1081 := TTransformNode.Create;
Transform1081.Translation := Vector3(-0.1815,-0.0877,0.5983);
{ METHOD .FdChildren.Add }
Transform1081.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1080.FdChildren.Add(Transform1081);
{ METHOD .FdChildren.Add }
HAnimSegment1076.FdChildren.Add(HAnimSite1080);
end;

procedure InitblenderSkeletonPart60;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1075.FdChildren.Add(HAnimSegment1076);
HAnimJoint1083 := THAnimJointNode.Create;
HAnimJoint1083.Center := Vector3(-0.1805,-0.0885,0.5731);
HAnimSegment1084 := THAnimSegmentNode.Create;
TouchSensor1085 := TTouchSensorNode.Create;
TouchSensor1085.Description := 'joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2';
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(TouchSensor1085);
Transform1086 := TTransformNode.Create;
Transform1086.Translation := Vector3(-0.1805,-0.0885,0.5731);
{ METHOD .FdChildren.Add }
Transform1086.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(Transform1086);
HAnimSite1088 := THAnimSiteNode.Create;
Transform1089 := TTransformNode.Create;
Transform1089.Translation := Vector3(-0.1805,-0.0885,0.5731);
{ METHOD .FdChildren.Add }
Transform1089.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1088.FdChildren.Add(Transform1089);
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(HAnimSite1088);
{ METHOD .FdChildren.Add }
HAnimJoint1083.FdChildren.Add(HAnimSegment1084);
{ METHOD .FdChildren.Add }
HAnimJoint1075.FdChildren.Add(HAnimJoint1083);
{ METHOD .FdChildren.Add }
HAnimJoint1067.FdChildren.Add(HAnimJoint1075);
{ METHOD .FdChildren.Add }
HAnimJoint1059.FdChildren.Add(HAnimJoint1067);
{ METHOD .FdChildren.Add }
HAnimJoint1051.FdChildren.Add(HAnimJoint1059);
{ METHOD .FdChildren.Add }
HAnimJoint1011.FdChildren.Add(HAnimJoint1051);
HAnimJoint1091 := THAnimJointNode.Create;
HAnimJoint1091.Center := Vector3(-0.1809,-0.1067,0.7);
HAnimSegment1092 := THAnimSegmentNode.Create;
TouchSensor1093 := TTouchSensorNode.Create;
TouchSensor1093.Description := 'joint r_capitate segment SEGMENT_FOR_r_capitate';
{ METHOD .FdChildren.Add }
HAnimSegment1092.FdChildren.Add(TouchSensor1093);
Transform1094 := TTransformNode.Create;
Transform1094.Translation := Vector3(-0.1809,-0.1067,0.7);
{ METHOD .FdChildren.Add }
Transform1094.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1092.FdChildren.Add(Transform1094);
HAnimSite1096 := THAnimSiteNode.Create;
Transform1097 := TTransformNode.Create;
Transform1097.Translation := Vector3(-0.1809,-0.1067,0.7);
{ METHOD .FdChildren.Add }
Transform1097.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1096.FdChildren.Add(Transform1097);
{ METHOD .FdChildren.Add }
HAnimSegment1092.FdChildren.Add(HAnimSite1096);
{ METHOD .FdChildren.Add }
HAnimJoint1091.FdChildren.Add(HAnimSegment1092);
end;

procedure InitblenderSkeletonPart61;
begin

HAnimJoint1099 := THAnimJointNode.Create;
HAnimJoint1099.Center := Vector3(-0.1809,-0.1081,0.6772);
HAnimSegment1100 := THAnimSegmentNode.Create;
TouchSensor1101 := TTouchSensorNode.Create;
TouchSensor1101.Description := 'joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3';
{ METHOD .FdChildren.Add }
HAnimSegment1100.FdChildren.Add(TouchSensor1101);
Transform1102 := TTransformNode.Create;
Transform1102.Translation := Vector3(-0.1809,-0.1081,0.6772);
{ METHOD .FdChildren.Add }
Transform1102.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1100.FdChildren.Add(Transform1102);
HAnimSite1104 := THAnimSiteNode.Create;
Transform1105 := TTransformNode.Create;
Transform1105.Translation := Vector3(-0.1809,-0.1081,0.6772);
{ METHOD .FdChildren.Add }
Transform1105.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1104.FdChildren.Add(Transform1105);
{ METHOD .FdChildren.Add }
HAnimSegment1100.FdChildren.Add(HAnimSite1104);
{ METHOD .FdChildren.Add }
HAnimJoint1099.FdChildren.Add(HAnimSegment1100);
HAnimJoint1107 := THAnimJointNode.Create;
HAnimJoint1107.Center := Vector3(-0.1835,-0.1058,0.6264);
HAnimSegment1108 := THAnimSegmentNode.Create;
TouchSensor1109 := TTouchSensorNode.Create;
TouchSensor1109.Description := 'joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSegment1108.FdChildren.Add(TouchSensor1109);
Transform1110 := TTransformNode.Create;
Transform1110.Translation := Vector3(-0.1835,-0.1058,0.6264);
{ METHOD .FdChildren.Add }
Transform1110.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1108.FdChildren.Add(Transform1110);
HAnimSite1112 := THAnimSiteNode.Create;
Transform1113 := TTransformNode.Create;
Transform1113.Translation := Vector3(-0.1835,-0.1058,0.6264);
{ METHOD .FdChildren.Add }
Transform1113.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1112.FdChildren.Add(Transform1113);
{ METHOD .FdChildren.Add }
HAnimSegment1108.FdChildren.Add(HAnimSite1112);
{ METHOD .FdChildren.Add }
HAnimJoint1107.FdChildren.Add(HAnimSegment1108);
HAnimJoint1115 := THAnimJointNode.Create;
HAnimJoint1115.Center := Vector3(-0.1815,-0.1054,0.5947);
HAnimSegment1116 := THAnimSegmentNode.Create;
TouchSensor1117 := TTouchSensorNode.Create;
TouchSensor1117.Description := 'joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSegment1116.FdChildren.Add(TouchSensor1117);
end;

procedure InitblenderSkeletonPart62;
begin

Transform1118 := TTransformNode.Create;
Transform1118.Translation := Vector3(-0.1815,-0.1054,0.5947);
{ METHOD .FdChildren.Add }
Transform1118.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1116.FdChildren.Add(Transform1118);
HAnimSite1120 := THAnimSiteNode.Create;
Transform1121 := TTransformNode.Create;
Transform1121.Translation := Vector3(-0.1815,-0.1054,0.5947);
{ METHOD .FdChildren.Add }
Transform1121.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1120.FdChildren.Add(Transform1121);
{ METHOD .FdChildren.Add }
HAnimSegment1116.FdChildren.Add(HAnimSite1120);
{ METHOD .FdChildren.Add }
HAnimJoint1115.FdChildren.Add(HAnimSegment1116);
HAnimJoint1123 := THAnimJointNode.Create;
HAnimJoint1123.Center := Vector3(-0.1805,-0.1056,0.5668);
HAnimSegment1124 := THAnimSegmentNode.Create;
TouchSensor1125 := TTouchSensorNode.Create;
TouchSensor1125.Description := 'joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSegment1124.FdChildren.Add(TouchSensor1125);
Transform1126 := TTransformNode.Create;
Transform1126.Translation := Vector3(-0.1805,-0.1056,0.5668);
{ METHOD .FdChildren.Add }
Transform1126.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1124.FdChildren.Add(Transform1126);
HAnimSite1128 := THAnimSiteNode.Create;
Transform1129 := TTransformNode.Create;
Transform1129.Translation := Vector3(-0.1805,-0.1056,0.5668);
{ METHOD .FdChildren.Add }
Transform1129.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1128.FdChildren.Add(Transform1129);
{ METHOD .FdChildren.Add }
HAnimSegment1124.FdChildren.Add(HAnimSite1128);
{ METHOD .FdChildren.Add }
HAnimJoint1123.FdChildren.Add(HAnimSegment1124);
{ METHOD .FdChildren.Add }
HAnimJoint1115.FdChildren.Add(HAnimJoint1123);
{ METHOD .FdChildren.Add }
HAnimJoint1107.FdChildren.Add(HAnimJoint1115);
{ METHOD .FdChildren.Add }
HAnimJoint1099.FdChildren.Add(HAnimJoint1107);
{ METHOD .FdChildren.Add }
HAnimJoint1091.FdChildren.Add(HAnimJoint1099);
{ METHOD .FdChildren.Add }
HAnimJoint1011.FdChildren.Add(HAnimJoint1091);
HAnimJoint1131 := THAnimJointNode.Create;
HAnimJoint1131.Center := Vector3(-0.1809,-0.1276,0.6973);
HAnimSegment1132 := THAnimSegmentNode.Create;
TouchSensor1133 := TTouchSensorNode.Create;
TouchSensor1133.Description := 'joint r_hamate segment SEGMENT_FOR_r_hamate';
{ METHOD .FdChildren.Add }
HAnimSegment1132.FdChildren.Add(TouchSensor1133);
Transform1134 := TTransformNode.Create;
end;

procedure InitblenderSkeletonPart63;
begin

Transform1134.Translation := Vector3(-0.1809,-0.1276,0.6973);
{ METHOD .FdChildren.Add }
Transform1134.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1132.FdChildren.Add(Transform1134);
HAnimSite1136 := THAnimSiteNode.Create;
Transform1137 := TTransformNode.Create;
Transform1137.Translation := Vector3(-0.1809,-0.1276,0.6973);
{ METHOD .FdChildren.Add }
Transform1137.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1136.FdChildren.Add(Transform1137);
{ METHOD .FdChildren.Add }
HAnimSegment1132.FdChildren.Add(HAnimSite1136);
{ METHOD .FdChildren.Add }
HAnimJoint1131.FdChildren.Add(HAnimSegment1132);
HAnimJoint1139 := THAnimJointNode.Create;
HAnimJoint1139.Center := Vector3(-0.1809,-0.1218,0.6777);
HAnimSegment1140 := THAnimSegmentNode.Create;
TouchSensor1141 := TTouchSensorNode.Create;
TouchSensor1141.Description := 'joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4';
{ METHOD .FdChildren.Add }
HAnimSegment1140.FdChildren.Add(TouchSensor1141);
Transform1142 := TTransformNode.Create;
Transform1142.Translation := Vector3(-0.1809,-0.1218,0.6777);
{ METHOD .FdChildren.Add }
Transform1142.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1140.FdChildren.Add(Transform1142);
HAnimSite1144 := THAnimSiteNode.Create;
Transform1145 := TTransformNode.Create;
Transform1145.Translation := Vector3(-0.1809,-0.1218,0.6777);
{ METHOD .FdChildren.Add }
Transform1145.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1144.FdChildren.Add(Transform1145);
{ METHOD .FdChildren.Add }
HAnimSegment1140.FdChildren.Add(HAnimSite1144);
{ METHOD .FdChildren.Add }
HAnimJoint1139.FdChildren.Add(HAnimSegment1140);
HAnimJoint1147 := THAnimJointNode.Create;
HAnimJoint1147.Center := Vector3(-0.1835,-0.1233,0.6255);
HAnimSegment1148 := THAnimSegmentNode.Create;
TouchSensor1149 := TTouchSensorNode.Create;
TouchSensor1149.Description := 'joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4';
{ METHOD .FdChildren.Add }
HAnimSegment1148.FdChildren.Add(TouchSensor1149);
Transform1150 := TTransformNode.Create;
Transform1150.Translation := Vector3(-0.1835,-0.1233,0.6255);
{ METHOD .FdChildren.Add }
Transform1150.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1148.FdChildren.Add(Transform1150);
HAnimSite1152 := THAnimSiteNode.Create;
Transform1153 := TTransformNode.Create;
Transform1153.Translation := Vector3(-0.1835,-0.1233,0.6255);
end;

procedure InitblenderSkeletonPart64;
begin

{ METHOD .FdChildren.Add }
Transform1153.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1152.FdChildren.Add(Transform1153);
{ METHOD .FdChildren.Add }
HAnimSegment1148.FdChildren.Add(HAnimSite1152);
{ METHOD .FdChildren.Add }
HAnimJoint1147.FdChildren.Add(HAnimSegment1148);
HAnimJoint1155 := THAnimJointNode.Create;
HAnimJoint1155.Center := Vector3(-0.1815,-0.1225,0.598);
HAnimSegment1156 := THAnimSegmentNode.Create;
TouchSensor1157 := TTouchSensorNode.Create;
TouchSensor1157.Description := 'joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4';
{ METHOD .FdChildren.Add }
HAnimSegment1156.FdChildren.Add(TouchSensor1157);
Transform1158 := TTransformNode.Create;
Transform1158.Translation := Vector3(-0.1815,-0.1225,0.598);
{ METHOD .FdChildren.Add }
Transform1158.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1156.FdChildren.Add(Transform1158);
HAnimSite1160 := THAnimSiteNode.Create;
Transform1161 := TTransformNode.Create;
Transform1161.Translation := Vector3(-0.1815,-0.1225,0.598);
{ METHOD .FdChildren.Add }
Transform1161.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1160.FdChildren.Add(Transform1161);
{ METHOD .FdChildren.Add }
HAnimSegment1156.FdChildren.Add(HAnimSite1160);
{ METHOD .FdChildren.Add }
HAnimJoint1155.FdChildren.Add(HAnimSegment1156);
HAnimJoint1163 := THAnimJointNode.Create;
HAnimJoint1163.Center := Vector3(-0.1805,-0.1217,0.5722);
HAnimSegment1164 := THAnimSegmentNode.Create;
TouchSensor1165 := TTouchSensorNode.Create;
TouchSensor1165.Description := 'joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4';
{ METHOD .FdChildren.Add }
HAnimSegment1164.FdChildren.Add(TouchSensor1165);
Transform1166 := TTransformNode.Create;
Transform1166.Translation := Vector3(-0.1805,-0.1217,0.5722);
{ METHOD .FdChildren.Add }
Transform1166.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1164.FdChildren.Add(Transform1166);
HAnimSite1168 := THAnimSiteNode.Create;
Transform1169 := TTransformNode.Create;
Transform1169.Translation := Vector3(-0.1805,-0.1217,0.5722);
{ METHOD .FdChildren.Add }
Transform1169.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1168.FdChildren.Add(Transform1169);
{ METHOD .FdChildren.Add }
HAnimSegment1164.FdChildren.Add(HAnimSite1168);
{ METHOD .FdChildren.Add }
HAnimJoint1163.FdChildren.Add(HAnimSegment1164);
{ METHOD .FdChildren.Add }
HAnimJoint1155.FdChildren.Add(HAnimJoint1163);
{ METHOD .FdChildren.Add }
HAnimJoint1147.FdChildren.Add(HAnimJoint1155);
end;

procedure InitblenderSkeletonPart65;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1139.FdChildren.Add(HAnimJoint1147);
{ METHOD .FdChildren.Add }
HAnimJoint1131.FdChildren.Add(HAnimJoint1139);
HAnimJoint1171 := THAnimJointNode.Create;
HAnimJoint1171.Center := Vector3(-0.1814,-0.1347,0.6797);
HAnimSegment1172 := THAnimSegmentNode.Create;
TouchSensor1173 := TTouchSensorNode.Create;
TouchSensor1173.Description := 'joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5';
{ METHOD .FdChildren.Add }
HAnimSegment1172.FdChildren.Add(TouchSensor1173);
Transform1174 := TTransformNode.Create;
Transform1174.Translation := Vector3(-0.1814,-0.1347,0.6797);
{ METHOD .FdChildren.Add }
Transform1174.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1172.FdChildren.Add(Transform1174);
HAnimSite1176 := THAnimSiteNode.Create;
Transform1177 := TTransformNode.Create;
Transform1177.Translation := Vector3(-0.1814,-0.1347,0.6797);
{ METHOD .FdChildren.Add }
Transform1177.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1176.FdChildren.Add(Transform1177);
{ METHOD .FdChildren.Add }
HAnimSegment1172.FdChildren.Add(HAnimSite1176);
{ METHOD .FdChildren.Add }
HAnimJoint1171.FdChildren.Add(HAnimSegment1172);
HAnimJoint1179 := THAnimJointNode.Create;
HAnimJoint1179.Center := Vector3(-0.1832,-0.1389,0.6295);
HAnimSegment1180 := THAnimSegmentNode.Create;
TouchSensor1181 := TTouchSensorNode.Create;
TouchSensor1181.Description := 'joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSegment1180.FdChildren.Add(TouchSensor1181);
Transform1182 := TTransformNode.Create;
Transform1182.Translation := Vector3(-0.1832,-0.1389,0.6295);
{ METHOD .FdChildren.Add }
Transform1182.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1180.FdChildren.Add(Transform1182);
HAnimSite1184 := THAnimSiteNode.Create;
Transform1185 := TTransformNode.Create;
Transform1185.Translation := Vector3(-0.1832,-0.1389,0.6295);
{ METHOD .FdChildren.Add }
Transform1185.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1184.FdChildren.Add(Transform1185);
{ METHOD .FdChildren.Add }
HAnimSegment1180.FdChildren.Add(HAnimSite1184);
{ METHOD .FdChildren.Add }
HAnimJoint1179.FdChildren.Add(HAnimSegment1180);
HAnimJoint1187 := THAnimJointNode.Create;
HAnimJoint1187.Center := Vector3(-0.1815,-0.139,0.6124);
HAnimSegment1188 := THAnimSegmentNode.Create;
TouchSensor1189 := TTouchSensorNode.Create;
end;

procedure InitblenderSkeletonPart66;
begin

TouchSensor1189.Description := 'joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSegment1188.FdChildren.Add(TouchSensor1189);
Transform1190 := TTransformNode.Create;
Transform1190.Translation := Vector3(-0.1815,-0.139,0.6124);
{ METHOD .FdChildren.Add }
Transform1190.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1188.FdChildren.Add(Transform1190);
HAnimSite1192 := THAnimSiteNode.Create;
Transform1193 := TTransformNode.Create;
Transform1193.Translation := Vector3(-0.1815,-0.139,0.6124);
{ METHOD .FdChildren.Add }
Transform1193.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1192.FdChildren.Add(Transform1193);
{ METHOD .FdChildren.Add }
HAnimSegment1188.FdChildren.Add(HAnimSite1192);
{ METHOD .FdChildren.Add }
HAnimJoint1187.FdChildren.Add(HAnimSegment1188);
HAnimJoint1195 := THAnimJointNode.Create;
HAnimJoint1195.Center := Vector3(-0.1806,-0.1388,0.5938);
HAnimSegment1196 := THAnimSegmentNode.Create;
TouchSensor1197 := TTouchSensorNode.Create;
TouchSensor1197.Description := 'joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSegment1196.FdChildren.Add(TouchSensor1197);
Transform1198 := TTransformNode.Create;
Transform1198.Translation := Vector3(-0.1806,-0.1388,0.5938);
{ METHOD .FdChildren.Add }
Transform1198.FdChildren.Add(Shape17);
{ METHOD .FdChildren.Add }
HAnimSegment1196.FdChildren.Add(Transform1198);
HAnimSite1200 := THAnimSiteNode.Create;
Transform1201 := TTransformNode.Create;
Transform1201.Translation := Vector3(-0.1806,-0.1388,0.5938);
{ METHOD .FdChildren.Add }
Transform1201.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
HAnimSite1200.FdChildren.Add(Transform1201);
{ METHOD .FdChildren.Add }
HAnimSegment1196.FdChildren.Add(HAnimSite1200);
{ METHOD .FdChildren.Add }
HAnimJoint1195.FdChildren.Add(HAnimSegment1196);
{ METHOD .FdChildren.Add }
HAnimJoint1187.FdChildren.Add(HAnimJoint1195);
{ METHOD .FdChildren.Add }
HAnimJoint1179.FdChildren.Add(HAnimJoint1187);
{ METHOD .FdChildren.Add }
HAnimJoint1171.FdChildren.Add(HAnimJoint1179);
{ METHOD .FdChildren.Add }
HAnimJoint1131.FdChildren.Add(HAnimJoint1171);
{ METHOD .FdChildren.Add }
HAnimJoint1011.FdChildren.Add(HAnimJoint1131);
{ METHOD .FdChildren.Add }
HAnimJoint1003.FdChildren.Add(HAnimJoint1011);
{ METHOD .FdChildren.Add }
HAnimJoint995.FdChildren.Add(HAnimJoint1003);
{ METHOD .FdChildren.Add }
HAnimJoint987.FdChildren.Add(HAnimJoint995);
{ METHOD .FdChildren.Add }
HAnimJoint979.FdChildren.Add(HAnimJoint987);
{ METHOD .FdChildren.Add }
HAnimJoint627.FdChildren.Add(HAnimJoint979);
end;

procedure InitblenderSkeletonPart67;
begin

{ METHOD .FdChildren.Add }
HAnimJoint619.FdChildren.Add(HAnimJoint627);
{ METHOD .FdChildren.Add }
HAnimJoint611.FdChildren.Add(HAnimJoint619);
{ METHOD .FdChildren.Add }
HAnimJoint603.FdChildren.Add(HAnimJoint611);
{ METHOD .FdChildren.Add }
HAnimJoint595.FdChildren.Add(HAnimJoint603);
{ METHOD .FdChildren.Add }
HAnimJoint587.FdChildren.Add(HAnimJoint595);
{ METHOD .FdChildren.Add }
HAnimJoint579.FdChildren.Add(HAnimJoint587);
{ METHOD .FdChildren.Add }
HAnimJoint571.FdChildren.Add(HAnimJoint579);
{ METHOD .FdChildren.Add }
HAnimJoint563.FdChildren.Add(HAnimJoint571);
{ METHOD .FdChildren.Add }
HAnimJoint555.FdChildren.Add(HAnimJoint563);
{ METHOD .FdChildren.Add }
HAnimJoint547.FdChildren.Add(HAnimJoint555);
{ METHOD .FdChildren.Add }
HAnimJoint539.FdChildren.Add(HAnimJoint547);
{ METHOD .FdChildren.Add }
HAnimJoint531.FdChildren.Add(HAnimJoint539);
{ METHOD .FdChildren.Add }
HAnimJoint523.FdChildren.Add(HAnimJoint531);
{ METHOD .FdChildren.Add }
HAnimJoint515.FdChildren.Add(HAnimJoint523);
{ METHOD .FdChildren.Add }
HAnimJoint507.FdChildren.Add(HAnimJoint515);
{ METHOD .FdChildren.Add }
HAnimJoint499.FdChildren.Add(HAnimJoint507);
{ METHOD .FdChildren.Add }
HAnimJoint35.FdChildren.Add(HAnimJoint499);
{ METHOD .FdChildren.Add }
HAnimJoint27.FdChildren.Add(HAnimJoint35);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid26.FdSkeleton.Add(HAnimJoint27);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint35);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint43);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint51);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint59);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint67);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint75);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint83);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint91);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint99);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint107);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint115);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint123);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint131);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint139);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint147);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint155);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint163);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint171);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint179);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint187);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint195);
end;

procedure InitblenderSkeletonPart68;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint203);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint211);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint219);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint227);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint235);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint243);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint251);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint259);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint267);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint275);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint283);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint291);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint299);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint307);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint315);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint323);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint331);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint339);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint347);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint355);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint363);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint371);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint379);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint387);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint395);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint403);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint411);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint419);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint427);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint435);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint443);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint451);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint459);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint467);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint475);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint483);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint491);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint499);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint507);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint515);
end;

procedure InitblenderSkeletonPart69;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint523);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint531);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint539);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint547);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint555);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint563);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint571);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint579);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint587);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint595);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint603);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint611);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint619);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint627);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint635);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint643);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint651);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint659);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint667);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint675);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint683);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint691);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint699);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint707);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint715);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint723);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint731);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint739);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint747);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint755);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint763);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint771);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint779);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint787);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint795);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint803);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint811);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint819);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint827);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint835);
end;

procedure InitblenderSkeletonPart70;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint843);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint851);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint859);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint867);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint875);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint883);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint891);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint899);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint907);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint915);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint923);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint931);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint939);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint947);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint955);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint963);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint971);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint979);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint987);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint995);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1003);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1011);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1019);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1027);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1035);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1043);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1051);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1059);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1067);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1075);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1083);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1091);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1099);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1107);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1115);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1123);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1131);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1139);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1147);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1155);
end;

procedure InitblenderSkeletonPart71;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1163);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1171);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1179);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1187);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1195);
{ METHOD .FdChildren.Add }
Transform25.FdChildren.Add(HAnimHumanoid26);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(Transform25);
TimeSensor1349 := TTimeSensorNode.Create;
TimeSensor1349.CycleInterval := 10.416666666666666;
TimeSensor1349.Loop := True;
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(TimeSensor1349);
ProximitySensor1350 := TProximitySensorNode.Create;
ProximitySensor1350.Size := Vector3(1000000,1000000,1000000);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(ProximitySensor1350);
{ Original "Armature_Close.EventEnterTime TO Armature_Clock.startTime }
{ Sample Armature_Close.EventEnterTime TO Armature_Clock.startTime}
Group8.AddRoute(ProximitySensor1350.EventEnterTime, TimeSensor1349.startTime);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1352 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1352.SetKey([0,1]);
OrientationInterpolator1352.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1352);
OrientationInterpolator1353 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1353.SetKey([0,1]);
OrientationInterpolator1353.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1353);
OrientationInterpolator1354 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1354.SetKey([0,1]);
OrientationInterpolator1354.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1354);
OrientationInterpolator1355 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1355.SetKey([0,1]);
OrientationInterpolator1355.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1355);
OrientationInterpolator1356 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1356.SetKey([0,1]);
OrientationInterpolator1356.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1356);
OrientationInterpolator1357 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1357.SetKey([0,1]);
OrientationInterpolator1357.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1357);
OrientationInterpolator1358 := TOrientationInterpolatorNode.Create;
end;

procedure InitblenderSkeletonPart72;
begin

OrientationInterpolator1358.SetKey([0,1]);
OrientationInterpolator1358.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1358);
OrientationInterpolator1359 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1359.SetKey([0,1]);
OrientationInterpolator1359.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1359);
OrientationInterpolator1360 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1360.SetKey([0,1]);
OrientationInterpolator1360.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1360);
OrientationInterpolator1361 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1361.SetKey([0,1]);
OrientationInterpolator1361.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1361);
OrientationInterpolator1362 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1362.SetKey([0,1]);
OrientationInterpolator1362.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1362);
OrientationInterpolator1363 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1363.SetKey([0,1]);
OrientationInterpolator1363.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1363);
OrientationInterpolator1364 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1364.SetKey([0,1]);
OrientationInterpolator1364.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1364);
OrientationInterpolator1365 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1365.SetKey([0,1]);
OrientationInterpolator1365.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1365);
OrientationInterpolator1366 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1366.SetKey([0,1]);
OrientationInterpolator1366.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1366);
OrientationInterpolator1367 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1367.SetKey([0,1]);
OrientationInterpolator1367.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1367);
OrientationInterpolator1368 := TOrientationInterpolatorNode.Create;
end;

procedure InitblenderSkeletonPart73;
begin

OrientationInterpolator1368.SetKey([0,1]);
OrientationInterpolator1368.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1368);
OrientationInterpolator1369 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1369.SetKey([0,1]);
OrientationInterpolator1369.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1369);
OrientationInterpolator1370 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1370.SetKey([0,1]);
OrientationInterpolator1370.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1370);
OrientationInterpolator1371 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1371.SetKey([0,1]);
OrientationInterpolator1371.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1371);
OrientationInterpolator1372 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1372.SetKey([0,1]);
OrientationInterpolator1372.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1372);
OrientationInterpolator1373 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1373.SetKey([0,1]);
OrientationInterpolator1373.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1373);
OrientationInterpolator1374 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1374.SetKey([0,1]);
OrientationInterpolator1374.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1374);
OrientationInterpolator1375 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1375.SetKey([0,1]);
OrientationInterpolator1375.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1375);
OrientationInterpolator1376 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1376.SetKey([0,1]);
OrientationInterpolator1376.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1376);
OrientationInterpolator1377 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1377.SetKey([0,1]);
OrientationInterpolator1377.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1377);
OrientationInterpolator1378 := TOrientationInterpolatorNode.Create;
end;

procedure InitblenderSkeletonPart74;
begin

OrientationInterpolator1378.SetKey([0,1]);
OrientationInterpolator1378.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1378);
OrientationInterpolator1379 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1379.SetKey([0,1]);
OrientationInterpolator1379.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1379);
OrientationInterpolator1380 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1380.SetKey([0,1]);
OrientationInterpolator1380.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1380);
OrientationInterpolator1381 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1381.SetKey([0,1]);
OrientationInterpolator1381.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1381);
OrientationInterpolator1382 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1382.SetKey([0,1]);
OrientationInterpolator1382.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1382);
OrientationInterpolator1383 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1383.SetKey([0,1]);
OrientationInterpolator1383.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1383);
OrientationInterpolator1384 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1384.SetKey([0,1]);
OrientationInterpolator1384.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1384);
OrientationInterpolator1385 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1385.SetKey([0,1]);
OrientationInterpolator1385.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1385);
OrientationInterpolator1386 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1386.SetKey([0,1]);
OrientationInterpolator1386.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1386);
OrientationInterpolator1387 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1387.SetKey([0,1]);
OrientationInterpolator1387.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1387);
OrientationInterpolator1388 := TOrientationInterpolatorNode.Create;
end;

procedure InitblenderSkeletonPart75;
begin

OrientationInterpolator1388.SetKey([0,1]);
OrientationInterpolator1388.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1388);
OrientationInterpolator1389 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1389.SetKey([0,1]);
OrientationInterpolator1389.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1389);
OrientationInterpolator1390 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1390.SetKey([0,1]);
OrientationInterpolator1390.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1390);
OrientationInterpolator1391 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1391.SetKey([0,1]);
OrientationInterpolator1391.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1391);
OrientationInterpolator1392 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1392.SetKey([0,1]);
OrientationInterpolator1392.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1392);
OrientationInterpolator1393 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1393.SetKey([0,1]);
OrientationInterpolator1393.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1393);
OrientationInterpolator1394 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1394.SetKey([0,1]);
OrientationInterpolator1394.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1394);
OrientationInterpolator1395 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1395.SetKey([0,1]);
OrientationInterpolator1395.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1395);
OrientationInterpolator1396 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1396.SetKey([0,1]);
OrientationInterpolator1396.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1396);
OrientationInterpolator1397 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1397.SetKey([0,1]);
OrientationInterpolator1397.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1397);
OrientationInterpolator1398 := TOrientationInterpolatorNode.Create;
end;

procedure InitblenderSkeletonPart76;
begin

OrientationInterpolator1398.SetKey([0,1]);
OrientationInterpolator1398.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1398);
OrientationInterpolator1399 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1399.SetKey([0,1]);
OrientationInterpolator1399.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1399);
OrientationInterpolator1400 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1400.SetKey([0,1]);
OrientationInterpolator1400.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1400);
OrientationInterpolator1401 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1401.SetKey([0,1]);
OrientationInterpolator1401.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1401);
OrientationInterpolator1402 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1402.SetKey([0,1]);
OrientationInterpolator1402.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1402);
OrientationInterpolator1403 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1403.SetKey([0,1]);
OrientationInterpolator1403.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1403);
OrientationInterpolator1404 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1404.SetKey([0,1]);
OrientationInterpolator1404.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1404);
OrientationInterpolator1405 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1405.SetKey([0,1]);
OrientationInterpolator1405.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1405);
OrientationInterpolator1406 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1406.SetKey([0,1]);
OrientationInterpolator1406.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1406);
OrientationInterpolator1407 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1407.SetKey([0,1]);
OrientationInterpolator1407.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1407);
OrientationInterpolator1408 := TOrientationInterpolatorNode.Create;
end;

procedure InitblenderSkeletonPart77;
begin

OrientationInterpolator1408.SetKey([0,1]);
OrientationInterpolator1408.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1408);
OrientationInterpolator1409 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1409.SetKey([0,1]);
OrientationInterpolator1409.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1409);
OrientationInterpolator1410 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1410.SetKey([0,1]);
OrientationInterpolator1410.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1410);
OrientationInterpolator1411 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1411.SetKey([0,1]);
OrientationInterpolator1411.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1411);
OrientationInterpolator1412 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1412.SetKey([0,1]);
OrientationInterpolator1412.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1412);
OrientationInterpolator1413 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1413.SetKey([0,1]);
OrientationInterpolator1413.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1413);
OrientationInterpolator1414 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1414.SetKey([0,1]);
OrientationInterpolator1414.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1414);
OrientationInterpolator1415 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1415.SetKey([0,1]);
OrientationInterpolator1415.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1415);
OrientationInterpolator1416 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1416.SetKey([0,1]);
OrientationInterpolator1416.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1416);
OrientationInterpolator1417 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1417.SetKey([0,1]);
OrientationInterpolator1417.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1417);
OrientationInterpolator1418 := TOrientationInterpolatorNode.Create;
end;

procedure InitblenderSkeletonPart78;
begin

OrientationInterpolator1418.SetKey([0,1]);
OrientationInterpolator1418.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1418);
OrientationInterpolator1419 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1419.SetKey([0,1]);
OrientationInterpolator1419.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1419);
OrientationInterpolator1420 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1420.SetKey([0,1]);
OrientationInterpolator1420.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1420);
OrientationInterpolator1421 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1421.SetKey([0,1]);
OrientationInterpolator1421.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1421);
OrientationInterpolator1422 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1422.SetKey([0,1]);
OrientationInterpolator1422.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1422);
OrientationInterpolator1423 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1423.SetKey([0,1]);
OrientationInterpolator1423.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1423);
OrientationInterpolator1424 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1424.SetKey([0,1]);
OrientationInterpolator1424.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1424);
OrientationInterpolator1425 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1425.SetKey([0,1]);
OrientationInterpolator1425.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1425);
OrientationInterpolator1426 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1426.SetKey([0,1]);
OrientationInterpolator1426.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1426);
OrientationInterpolator1427 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1427.SetKey([0,1]);
OrientationInterpolator1427.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1427);
OrientationInterpolator1428 := TOrientationInterpolatorNode.Create;
end;

procedure InitblenderSkeletonPart79;
begin

OrientationInterpolator1428.SetKey([0,1]);
OrientationInterpolator1428.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1428);
OrientationInterpolator1429 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1429.SetKey([0,1]);
OrientationInterpolator1429.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1429);
OrientationInterpolator1430 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1430.SetKey([0,1]);
OrientationInterpolator1430.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1430);
OrientationInterpolator1431 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1431.SetKey([0,1]);
OrientationInterpolator1431.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1431);
OrientationInterpolator1432 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1432.SetKey([0,1]);
OrientationInterpolator1432.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1432);
OrientationInterpolator1433 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1433.SetKey([0,1]);
OrientationInterpolator1433.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1433);
OrientationInterpolator1434 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1434.SetKey([0,1]);
OrientationInterpolator1434.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1434);
OrientationInterpolator1435 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1435.SetKey([0,1]);
OrientationInterpolator1435.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1435);
OrientationInterpolator1436 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1436.SetKey([0,1]);
OrientationInterpolator1436.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1436);
OrientationInterpolator1437 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1437.SetKey([0,1]);
OrientationInterpolator1437.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1437);
OrientationInterpolator1438 := TOrientationInterpolatorNode.Create;
end;

procedure InitblenderSkeletonPart80;
begin

OrientationInterpolator1438.SetKey([0,1]);
OrientationInterpolator1438.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1438);
OrientationInterpolator1439 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1439.SetKey([0,1]);
OrientationInterpolator1439.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1439);
OrientationInterpolator1440 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1440.SetKey([0,1]);
OrientationInterpolator1440.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1440);
OrientationInterpolator1441 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1441.SetKey([0,1]);
OrientationInterpolator1441.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1441);
OrientationInterpolator1442 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1442.SetKey([0,1]);
OrientationInterpolator1442.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1442);
OrientationInterpolator1443 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1443.SetKey([0,1]);
OrientationInterpolator1443.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1443);
OrientationInterpolator1444 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1444.SetKey([0,1]);
OrientationInterpolator1444.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1444);
OrientationInterpolator1445 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1445.SetKey([0,1]);
OrientationInterpolator1445.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1445);
OrientationInterpolator1446 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1446.SetKey([0,1]);
OrientationInterpolator1446.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1446);
OrientationInterpolator1447 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1447.SetKey([0,1]);
OrientationInterpolator1447.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1447);
OrientationInterpolator1448 := TOrientationInterpolatorNode.Create;
end;

procedure InitblenderSkeletonPart81;
begin

OrientationInterpolator1448.SetKey([0,1]);
OrientationInterpolator1448.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1448);
OrientationInterpolator1449 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1449.SetKey([0,1]);
OrientationInterpolator1449.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1449);
OrientationInterpolator1450 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1450.SetKey([0,1]);
OrientationInterpolator1450.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1450);
OrientationInterpolator1451 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1451.SetKey([0,1]);
OrientationInterpolator1451.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1451);
OrientationInterpolator1452 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1452.SetKey([0,1]);
OrientationInterpolator1452.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1452);
OrientationInterpolator1453 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1453.SetKey([0,1]);
OrientationInterpolator1453.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1453);
OrientationInterpolator1454 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1454.SetKey([0,1]);
OrientationInterpolator1454.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1454);
OrientationInterpolator1455 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1455.SetKey([0,1]);
OrientationInterpolator1455.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1455);
OrientationInterpolator1456 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1456.SetKey([0,1]);
OrientationInterpolator1456.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1456);
OrientationInterpolator1457 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1457.SetKey([0,1]);
OrientationInterpolator1457.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1457);
OrientationInterpolator1458 := TOrientationInterpolatorNode.Create;
end;

procedure InitblenderSkeletonPart82;
begin

OrientationInterpolator1458.SetKey([0,1]);
OrientationInterpolator1458.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1458);
OrientationInterpolator1459 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1459.SetKey([0,1]);
OrientationInterpolator1459.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1459);
OrientationInterpolator1460 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1460.SetKey([0,1]);
OrientationInterpolator1460.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1460);
OrientationInterpolator1461 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1461.SetKey([0,1]);
OrientationInterpolator1461.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1461);
OrientationInterpolator1462 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1462.SetKey([0,1]);
OrientationInterpolator1462.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1462);
OrientationInterpolator1463 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1463.SetKey([0,1]);
OrientationInterpolator1463.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1463);
OrientationInterpolator1464 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1464.SetKey([0,1]);
OrientationInterpolator1464.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1464);
OrientationInterpolator1465 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1465.SetKey([0,1]);
OrientationInterpolator1465.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1465);
OrientationInterpolator1466 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1466.SetKey([0,1]);
OrientationInterpolator1466.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1466);
OrientationInterpolator1467 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1467.SetKey([0,1]);
OrientationInterpolator1467.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1467);
OrientationInterpolator1468 := TOrientationInterpolatorNode.Create;
end;

procedure InitblenderSkeletonPart83;
begin

OrientationInterpolator1468.SetKey([0,1]);
OrientationInterpolator1468.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1468);
OrientationInterpolator1469 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1469.SetKey([0,1]);
OrientationInterpolator1469.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1469);
OrientationInterpolator1470 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1470.SetKey([0,1]);
OrientationInterpolator1470.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1470);
OrientationInterpolator1471 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1471.SetKey([0,1]);
OrientationInterpolator1471.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1471);
OrientationInterpolator1472 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1472.SetKey([0,1]);
OrientationInterpolator1472.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1472);
OrientationInterpolator1473 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1473.SetKey([0,1]);
OrientationInterpolator1473.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1473);
OrientationInterpolator1474 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1474.SetKey([0,1]);
OrientationInterpolator1474.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1474);
OrientationInterpolator1475 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1475.SetKey([0,1]);
OrientationInterpolator1475.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1475);
OrientationInterpolator1476 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1476.SetKey([0,1]);
OrientationInterpolator1476.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1476);
OrientationInterpolator1477 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1477.SetKey([0,1]);
OrientationInterpolator1477.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1477);
OrientationInterpolator1478 := TOrientationInterpolatorNode.Create;
end;

procedure InitblenderSkeletonPart84;
begin

OrientationInterpolator1478.SetKey([0,1]);
OrientationInterpolator1478.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1478);
OrientationInterpolator1479 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1479.SetKey([0,1]);
OrientationInterpolator1479.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1479);
OrientationInterpolator1480 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1480.SetKey([0,1]);
OrientationInterpolator1480.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1480);
OrientationInterpolator1481 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1481.SetKey([0,1]);
OrientationInterpolator1481.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1481);
OrientationInterpolator1482 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1482.SetKey([0,1]);
OrientationInterpolator1482.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1482);
OrientationInterpolator1483 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1483.SetKey([0,1]);
OrientationInterpolator1483.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1483);
OrientationInterpolator1484 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1484.SetKey([0,1]);
OrientationInterpolator1484.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1484);
OrientationInterpolator1485 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1485.SetKey([0,1]);
OrientationInterpolator1485.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1485);
OrientationInterpolator1486 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1486.SetKey([0,1]);
OrientationInterpolator1486.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1486);
OrientationInterpolator1487 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1487.SetKey([0,1]);
OrientationInterpolator1487.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1487);
OrientationInterpolator1488 := TOrientationInterpolatorNode.Create;
end;

procedure InitblenderSkeletonPart85;
begin

OrientationInterpolator1488.SetKey([0,1]);
OrientationInterpolator1488.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1488);
OrientationInterpolator1489 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1489.SetKey([0,1]);
OrientationInterpolator1489.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1489);
OrientationInterpolator1490 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1490.SetKey([0,1]);
OrientationInterpolator1490.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1490);
OrientationInterpolator1491 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1491.SetKey([0,1]);
OrientationInterpolator1491.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1491);
OrientationInterpolator1492 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1492.SetKey([0,1]);
OrientationInterpolator1492.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1492);
OrientationInterpolator1493 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1493.SetKey([0,1]);
OrientationInterpolator1493.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1493);
OrientationInterpolator1494 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1494.SetKey([0,1]);
OrientationInterpolator1494.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1494);
OrientationInterpolator1495 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1495.SetKey([0,1]);
OrientationInterpolator1495.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1495);
OrientationInterpolator1496 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1496.SetKey([0,1]);
OrientationInterpolator1496.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1496);
OrientationInterpolator1497 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1497.SetKey([0,1]);
OrientationInterpolator1497.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(OrientationInterpolator1497);
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_sacrum.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_sacrum.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1352.EventSet_fraction);
end;

procedure InitblenderSkeletonPart86;
begin

{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_sacrum.EventValue_changed TO hanim_sacrum.rotation }
{ Sample Armature_OI_sacrum.EventValue_changed TO hanim_sacrum.rotation}
Group8.AddRoute(OrientationInterpolator1352.EventValue_changed, HAnimJoint35.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_pelvis.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_pelvis.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1353.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_pelvis.EventValue_changed TO hanim_pelvis.rotation }
{ Sample Armature_OI_pelvis.EventValue_changed TO hanim_pelvis.rotation}
Group8.AddRoute(OrientationInterpolator1353.EventValue_changed, HAnimJoint43.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_thigh.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_thigh.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1354.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_thigh.EventValue_changed TO hanim_l_thigh.rotation }
{ Sample Armature_OI_l_thigh.EventValue_changed TO hanim_l_thigh.rotation}
Group8.AddRoute(OrientationInterpolator1354.EventValue_changed, HAnimJoint51.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_calf.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_calf.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1355.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_calf.EventValue_changed TO hanim_l_calf.rotation }
{ Sample Armature_OI_l_calf.EventValue_changed TO hanim_l_calf.rotation}
Group8.AddRoute(OrientationInterpolator1355.EventValue_changed, HAnimJoint59.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_talus.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_talus.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1356.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_talus.EventValue_changed TO hanim_l_talus.rotation }
{ Sample Armature_OI_l_talus.EventValue_changed TO hanim_l_talus.rotation}
Group8.AddRoute(OrientationInterpolator1356.EventValue_changed, HAnimJoint67.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_navicular.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_navicular.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1357.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_navicular.EventValue_changed TO hanim_l_navicular.rotation }
{ Sample Armature_OI_l_navicular.EventValue_changed TO hanim_l_navicular.rotation}
Group8.AddRoute(OrientationInterpolator1357.EventValue_changed, HAnimJoint75.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_cuneiform_1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_cuneiform_1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1358.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_cuneiform_1.EventValue_changed TO hanim_l_cuneiform_1.rotation }
{ Sample Armature_OI_l_cuneiform_1.EventValue_changed TO hanim_l_cuneiform_1.rotation}
Group8.AddRoute(OrientationInterpolator1358.EventValue_changed, HAnimJoint83.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_metatarsal_1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_metatarsal_1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1359.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_metatarsal_1.EventValue_changed TO hanim_l_metatarsal_1.rotation }
{ Sample Armature_OI_l_metatarsal_1.EventValue_changed TO hanim_l_metatarsal_1.rotation}
Group8.AddRoute(OrientationInterpolator1359.EventValue_changed, HAnimJoint91.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_proximal_phalanx_1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_proximal_phalanx_1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1360.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_tarsal_proximal_phalanx_1.EventValue_changed TO hanim_l_tarsal_proximal_phalanx_1.rotation }
{ Sample Armature_OI_l_tarsal_proximal_phalanx_1.EventValue_changed TO hanim_l_tarsal_proximal_phalanx_1.rotation}
Group8.AddRoute(OrientationInterpolator1360.EventValue_changed, HAnimJoint99.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_distal_phalanx_1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_distal_phalanx_1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1361.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_tarsal_distal_phalanx_1.EventValue_changed TO hanim_l_tarsal_distal_phalanx_1.rotation }
{ Sample Armature_OI_l_tarsal_distal_phalanx_1.EventValue_changed TO hanim_l_tarsal_distal_phalanx_1.rotation}
Group8.AddRoute(OrientationInterpolator1361.EventValue_changed, HAnimJoint107.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_cuneiform_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_cuneiform_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1362.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_cuneiform_2.EventValue_changed TO hanim_l_cuneiform_2.rotation }
{ Sample Armature_OI_l_cuneiform_2.EventValue_changed TO hanim_l_cuneiform_2.rotation}
Group8.AddRoute(OrientationInterpolator1362.EventValue_changed, HAnimJoint115.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_metatarsal_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_metatarsal_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1363.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_metatarsal_2.EventValue_changed TO hanim_l_metatarsal_2.rotation }
{ Sample Armature_OI_l_metatarsal_2.EventValue_changed TO hanim_l_metatarsal_2.rotation}
Group8.AddRoute(OrientationInterpolator1363.EventValue_changed, HAnimJoint123.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_proximal_phalanx_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_proximal_phalanx_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1364.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_tarsal_proximal_phalanx_2.EventValue_changed TO hanim_l_tarsal_proximal_phalanx_2.rotation }
{ Sample Armature_OI_l_tarsal_proximal_phalanx_2.EventValue_changed TO hanim_l_tarsal_proximal_phalanx_2.rotation}
Group8.AddRoute(OrientationInterpolator1364.EventValue_changed, HAnimJoint131.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_middle_phalanx_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_middle_phalanx_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1365.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_tarsal_middle_phalanx_2.EventValue_changed TO hanim_l_tarsal_middle_phalanx_2.rotation }
{ Sample Armature_OI_l_tarsal_middle_phalanx_2.EventValue_changed TO hanim_l_tarsal_middle_phalanx_2.rotation}
Group8.AddRoute(OrientationInterpolator1365.EventValue_changed, HAnimJoint139.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_distal_phalanx_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_distal_phalanx_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1366.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_tarsal_distal_phalanx_2.EventValue_changed TO hanim_l_tarsal_distal_phalanx_2.rotation }
{ Sample Armature_OI_l_tarsal_distal_phalanx_2.EventValue_changed TO hanim_l_tarsal_distal_phalanx_2.rotation}
Group8.AddRoute(OrientationInterpolator1366.EventValue_changed, HAnimJoint147.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_cuneiform_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_cuneiform_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1367.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_cuneiform_3.EventValue_changed TO hanim_l_cuneiform_3.rotation }
{ Sample Armature_OI_l_cuneiform_3.EventValue_changed TO hanim_l_cuneiform_3.rotation}
Group8.AddRoute(OrientationInterpolator1367.EventValue_changed, HAnimJoint155.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_metatarsal_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_metatarsal_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1368.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_metatarsal_3.EventValue_changed TO hanim_l_metatarsal_3.rotation }
{ Sample Armature_OI_l_metatarsal_3.EventValue_changed TO hanim_l_metatarsal_3.rotation}
Group8.AddRoute(OrientationInterpolator1368.EventValue_changed, HAnimJoint163.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_proximal_phalanx_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_proximal_phalanx_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1369.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_tarsal_proximal_phalanx_3.EventValue_changed TO hanim_l_tarsal_proximal_phalanx_3.rotation }
{ Sample Armature_OI_l_tarsal_proximal_phalanx_3.EventValue_changed TO hanim_l_tarsal_proximal_phalanx_3.rotation}
Group8.AddRoute(OrientationInterpolator1369.EventValue_changed, HAnimJoint171.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_middle_phalanx_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_middle_phalanx_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1370.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_tarsal_middle_phalanx_3.EventValue_changed TO hanim_l_tarsal_middle_phalanx_3.rotation }
{ Sample Armature_OI_l_tarsal_middle_phalanx_3.EventValue_changed TO hanim_l_tarsal_middle_phalanx_3.rotation}
Group8.AddRoute(OrientationInterpolator1370.EventValue_changed, HAnimJoint179.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_distal_phalanx_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_distal_phalanx_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1371.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_tarsal_distal_phalanx_3.EventValue_changed TO hanim_l_tarsal_distal_phalanx_3.rotation }
{ Sample Armature_OI_l_tarsal_distal_phalanx_3.EventValue_changed TO hanim_l_tarsal_distal_phalanx_3.rotation}
Group8.AddRoute(OrientationInterpolator1371.EventValue_changed, HAnimJoint187.rotation);
end;

procedure InitblenderSkeletonPart87;
begin

{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_calcaneus.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_calcaneus.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1372.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_calcaneus.EventValue_changed TO hanim_l_calcaneus.rotation }
{ Sample Armature_OI_l_calcaneus.EventValue_changed TO hanim_l_calcaneus.rotation}
Group8.AddRoute(OrientationInterpolator1372.EventValue_changed, HAnimJoint195.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_cuboid.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_cuboid.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1373.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_cuboid.EventValue_changed TO hanim_l_cuboid.rotation }
{ Sample Armature_OI_l_cuboid.EventValue_changed TO hanim_l_cuboid.rotation}
Group8.AddRoute(OrientationInterpolator1373.EventValue_changed, HAnimJoint203.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_metatarsal_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_metatarsal_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1374.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_metatarsal_4.EventValue_changed TO hanim_l_metatarsal_4.rotation }
{ Sample Armature_OI_l_metatarsal_4.EventValue_changed TO hanim_l_metatarsal_4.rotation}
Group8.AddRoute(OrientationInterpolator1374.EventValue_changed, HAnimJoint211.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_proximal_phalanx_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_proximal_phalanx_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1375.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_tarsal_proximal_phalanx_4.EventValue_changed TO hanim_l_tarsal_proximal_phalanx_4.rotation }
{ Sample Armature_OI_l_tarsal_proximal_phalanx_4.EventValue_changed TO hanim_l_tarsal_proximal_phalanx_4.rotation}
Group8.AddRoute(OrientationInterpolator1375.EventValue_changed, HAnimJoint219.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_middle_phalanx_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_middle_phalanx_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1376.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_tarsal_middle_phalanx_4.EventValue_changed TO hanim_l_tarsal_middle_phalanx_4.rotation }
{ Sample Armature_OI_l_tarsal_middle_phalanx_4.EventValue_changed TO hanim_l_tarsal_middle_phalanx_4.rotation}
Group8.AddRoute(OrientationInterpolator1376.EventValue_changed, HAnimJoint227.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_distal_phalanx_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_distal_phalanx_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1377.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_tarsal_distal_phalanx_4.EventValue_changed TO hanim_l_tarsal_distal_phalanx_4.rotation }
{ Sample Armature_OI_l_tarsal_distal_phalanx_4.EventValue_changed TO hanim_l_tarsal_distal_phalanx_4.rotation}
Group8.AddRoute(OrientationInterpolator1377.EventValue_changed, HAnimJoint235.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_metatarsal_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_metatarsal_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1378.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_metatarsal_5.EventValue_changed TO hanim_l_metatarsal_5.rotation }
{ Sample Armature_OI_l_metatarsal_5.EventValue_changed TO hanim_l_metatarsal_5.rotation}
Group8.AddRoute(OrientationInterpolator1378.EventValue_changed, HAnimJoint243.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_proximal_phalanx_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_proximal_phalanx_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1379.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_tarsal_proximal_phalanx_5.EventValue_changed TO hanim_l_tarsal_proximal_phalanx_5.rotation }
{ Sample Armature_OI_l_tarsal_proximal_phalanx_5.EventValue_changed TO hanim_l_tarsal_proximal_phalanx_5.rotation}
Group8.AddRoute(OrientationInterpolator1379.EventValue_changed, HAnimJoint251.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_middle_phalanx_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_middle_phalanx_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1380.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_tarsal_middle_phalanx_5.EventValue_changed TO hanim_l_tarsal_middle_phalanx_5.rotation }
{ Sample Armature_OI_l_tarsal_middle_phalanx_5.EventValue_changed TO hanim_l_tarsal_middle_phalanx_5.rotation}
Group8.AddRoute(OrientationInterpolator1380.EventValue_changed, HAnimJoint259.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_distal_phalanx_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_tarsal_distal_phalanx_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1381.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_tarsal_distal_phalanx_5.EventValue_changed TO hanim_l_tarsal_distal_phalanx_5.rotation }
{ Sample Armature_OI_l_tarsal_distal_phalanx_5.EventValue_changed TO hanim_l_tarsal_distal_phalanx_5.rotation}
Group8.AddRoute(OrientationInterpolator1381.EventValue_changed, HAnimJoint267.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_thigh.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_thigh.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1382.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_thigh.EventValue_changed TO hanim_r_thigh.rotation }
{ Sample Armature_OI_r_thigh.EventValue_changed TO hanim_r_thigh.rotation}
Group8.AddRoute(OrientationInterpolator1382.EventValue_changed, HAnimJoint275.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_calf.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_calf.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1383.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_calf.EventValue_changed TO hanim_r_calf.rotation }
{ Sample Armature_OI_r_calf.EventValue_changed TO hanim_r_calf.rotation}
Group8.AddRoute(OrientationInterpolator1383.EventValue_changed, HAnimJoint283.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_talus.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_talus.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1384.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_talus.EventValue_changed TO hanim_r_talus.rotation }
{ Sample Armature_OI_r_talus.EventValue_changed TO hanim_r_talus.rotation}
Group8.AddRoute(OrientationInterpolator1384.EventValue_changed, HAnimJoint291.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_navicular.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_navicular.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1385.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_navicular.EventValue_changed TO hanim_r_navicular.rotation }
{ Sample Armature_OI_r_navicular.EventValue_changed TO hanim_r_navicular.rotation}
Group8.AddRoute(OrientationInterpolator1385.EventValue_changed, HAnimJoint299.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_cuneiform_1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_cuneiform_1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1386.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_cuneiform_1.EventValue_changed TO hanim_r_cuneiform_1.rotation }
{ Sample Armature_OI_r_cuneiform_1.EventValue_changed TO hanim_r_cuneiform_1.rotation}
Group8.AddRoute(OrientationInterpolator1386.EventValue_changed, HAnimJoint307.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_metatarsal_1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_metatarsal_1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1387.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_metatarsal_1.EventValue_changed TO hanim_r_metatarsal_1.rotation }
{ Sample Armature_OI_r_metatarsal_1.EventValue_changed TO hanim_r_metatarsal_1.rotation}
Group8.AddRoute(OrientationInterpolator1387.EventValue_changed, HAnimJoint315.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_proximal_phalanx_1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_proximal_phalanx_1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1388.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_tarsal_proximal_phalanx_1.EventValue_changed TO hanim_r_tarsal_proximal_phalanx_1.rotation }
{ Sample Armature_OI_r_tarsal_proximal_phalanx_1.EventValue_changed TO hanim_r_tarsal_proximal_phalanx_1.rotation}
Group8.AddRoute(OrientationInterpolator1388.EventValue_changed, HAnimJoint323.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_distal_phalanx_1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_distal_phalanx_1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1389.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_tarsal_distal_phalanx_1.EventValue_changed TO hanim_r_tarsal_distal_phalanx_1.rotation }
{ Sample Armature_OI_r_tarsal_distal_phalanx_1.EventValue_changed TO hanim_r_tarsal_distal_phalanx_1.rotation}
Group8.AddRoute(OrientationInterpolator1389.EventValue_changed, HAnimJoint331.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_cuneiform_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_cuneiform_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1390.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_cuneiform_2.EventValue_changed TO hanim_r_cuneiform_2.rotation }
{ Sample Armature_OI_r_cuneiform_2.EventValue_changed TO hanim_r_cuneiform_2.rotation}
Group8.AddRoute(OrientationInterpolator1390.EventValue_changed, HAnimJoint339.rotation);
end;

procedure InitblenderSkeletonPart88;
begin

{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_metatarsal_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_metatarsal_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1391.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_metatarsal_2.EventValue_changed TO hanim_r_metatarsal_2.rotation }
{ Sample Armature_OI_r_metatarsal_2.EventValue_changed TO hanim_r_metatarsal_2.rotation}
Group8.AddRoute(OrientationInterpolator1391.EventValue_changed, HAnimJoint347.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_proximal_phalanx_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_proximal_phalanx_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1392.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_tarsal_proximal_phalanx_2.EventValue_changed TO hanim_r_tarsal_proximal_phalanx_2.rotation }
{ Sample Armature_OI_r_tarsal_proximal_phalanx_2.EventValue_changed TO hanim_r_tarsal_proximal_phalanx_2.rotation}
Group8.AddRoute(OrientationInterpolator1392.EventValue_changed, HAnimJoint355.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_middle_phalanx_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_middle_phalanx_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1393.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_tarsal_middle_phalanx_2.EventValue_changed TO hanim_r_tarsal_middle_phalanx_2.rotation }
{ Sample Armature_OI_r_tarsal_middle_phalanx_2.EventValue_changed TO hanim_r_tarsal_middle_phalanx_2.rotation}
Group8.AddRoute(OrientationInterpolator1393.EventValue_changed, HAnimJoint363.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_distal_phalanx_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_distal_phalanx_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1394.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_tarsal_distal_phalanx_2.EventValue_changed TO hanim_r_tarsal_distal_phalanx_2.rotation }
{ Sample Armature_OI_r_tarsal_distal_phalanx_2.EventValue_changed TO hanim_r_tarsal_distal_phalanx_2.rotation}
Group8.AddRoute(OrientationInterpolator1394.EventValue_changed, HAnimJoint371.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_cuneiform_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_cuneiform_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1395.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_cuneiform_3.EventValue_changed TO hanim_r_cuneiform_3.rotation }
{ Sample Armature_OI_r_cuneiform_3.EventValue_changed TO hanim_r_cuneiform_3.rotation}
Group8.AddRoute(OrientationInterpolator1395.EventValue_changed, HAnimJoint379.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_metatarsal_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_metatarsal_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1396.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_metatarsal_3.EventValue_changed TO hanim_r_metatarsal_3.rotation }
{ Sample Armature_OI_r_metatarsal_3.EventValue_changed TO hanim_r_metatarsal_3.rotation}
Group8.AddRoute(OrientationInterpolator1396.EventValue_changed, HAnimJoint387.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_proximal_phalanx_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_proximal_phalanx_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1397.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_tarsal_proximal_phalanx_3.EventValue_changed TO hanim_r_tarsal_proximal_phalanx_3.rotation }
{ Sample Armature_OI_r_tarsal_proximal_phalanx_3.EventValue_changed TO hanim_r_tarsal_proximal_phalanx_3.rotation}
Group8.AddRoute(OrientationInterpolator1397.EventValue_changed, HAnimJoint395.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_middle_phalanx_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_middle_phalanx_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1398.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_tarsal_middle_phalanx_3.EventValue_changed TO hanim_r_tarsal_middle_phalanx_3.rotation }
{ Sample Armature_OI_r_tarsal_middle_phalanx_3.EventValue_changed TO hanim_r_tarsal_middle_phalanx_3.rotation}
Group8.AddRoute(OrientationInterpolator1398.EventValue_changed, HAnimJoint403.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_distal_phalanx_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_distal_phalanx_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1399.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_tarsal_distal_phalanx_3.EventValue_changed TO hanim_r_tarsal_distal_phalanx_3.rotation }
{ Sample Armature_OI_r_tarsal_distal_phalanx_3.EventValue_changed TO hanim_r_tarsal_distal_phalanx_3.rotation}
Group8.AddRoute(OrientationInterpolator1399.EventValue_changed, HAnimJoint411.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_calcaneus.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_calcaneus.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1400.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_calcaneus.EventValue_changed TO hanim_r_calcaneus.rotation }
{ Sample Armature_OI_r_calcaneus.EventValue_changed TO hanim_r_calcaneus.rotation}
Group8.AddRoute(OrientationInterpolator1400.EventValue_changed, HAnimJoint419.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_cuboid.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_cuboid.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1401.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_cuboid.EventValue_changed TO hanim_r_cuboid.rotation }
{ Sample Armature_OI_r_cuboid.EventValue_changed TO hanim_r_cuboid.rotation}
Group8.AddRoute(OrientationInterpolator1401.EventValue_changed, HAnimJoint427.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_metatarsal_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_metatarsal_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1402.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_metatarsal_4.EventValue_changed TO hanim_r_metatarsal_4.rotation }
{ Sample Armature_OI_r_metatarsal_4.EventValue_changed TO hanim_r_metatarsal_4.rotation}
Group8.AddRoute(OrientationInterpolator1402.EventValue_changed, HAnimJoint435.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_proximal_phalanx_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_proximal_phalanx_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1403.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_tarsal_proximal_phalanx_4.EventValue_changed TO hanim_r_tarsal_proximal_phalanx_4.rotation }
{ Sample Armature_OI_r_tarsal_proximal_phalanx_4.EventValue_changed TO hanim_r_tarsal_proximal_phalanx_4.rotation}
Group8.AddRoute(OrientationInterpolator1403.EventValue_changed, HAnimJoint443.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_middle_phalanx_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_middle_phalanx_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1404.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_tarsal_middle_phalanx_4.EventValue_changed TO hanim_r_tarsal_middle_phalanx_4.rotation }
{ Sample Armature_OI_r_tarsal_middle_phalanx_4.EventValue_changed TO hanim_r_tarsal_middle_phalanx_4.rotation}
Group8.AddRoute(OrientationInterpolator1404.EventValue_changed, HAnimJoint451.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_distal_phalanx_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_distal_phalanx_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1405.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_tarsal_distal_phalanx_4.EventValue_changed TO hanim_r_tarsal_distal_phalanx_4.rotation }
{ Sample Armature_OI_r_tarsal_distal_phalanx_4.EventValue_changed TO hanim_r_tarsal_distal_phalanx_4.rotation}
Group8.AddRoute(OrientationInterpolator1405.EventValue_changed, HAnimJoint459.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_metatarsal_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_metatarsal_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1406.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_metatarsal_5.EventValue_changed TO hanim_r_metatarsal_5.rotation }
{ Sample Armature_OI_r_metatarsal_5.EventValue_changed TO hanim_r_metatarsal_5.rotation}
Group8.AddRoute(OrientationInterpolator1406.EventValue_changed, HAnimJoint467.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_proximal_phalanx_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_proximal_phalanx_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1407.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_tarsal_proximal_phalanx_5.EventValue_changed TO hanim_r_tarsal_proximal_phalanx_5.rotation }
{ Sample Armature_OI_r_tarsal_proximal_phalanx_5.EventValue_changed TO hanim_r_tarsal_proximal_phalanx_5.rotation}
Group8.AddRoute(OrientationInterpolator1407.EventValue_changed, HAnimJoint475.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_middle_phalanx_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_middle_phalanx_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1408.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_tarsal_middle_phalanx_5.EventValue_changed TO hanim_r_tarsal_middle_phalanx_5.rotation }
{ Sample Armature_OI_r_tarsal_middle_phalanx_5.EventValue_changed TO hanim_r_tarsal_middle_phalanx_5.rotation}
Group8.AddRoute(OrientationInterpolator1408.EventValue_changed, HAnimJoint483.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_distal_phalanx_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_tarsal_distal_phalanx_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1409.EventSet_fraction);
end;

procedure InitblenderSkeletonPart89;
begin

{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_tarsal_distal_phalanx_5.EventValue_changed TO hanim_r_tarsal_distal_phalanx_5.rotation }
{ Sample Armature_OI_r_tarsal_distal_phalanx_5.EventValue_changed TO hanim_r_tarsal_distal_phalanx_5.rotation}
Group8.AddRoute(OrientationInterpolator1409.EventValue_changed, HAnimJoint491.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1410.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l5.EventValue_changed TO hanim_l5.rotation }
{ Sample Armature_OI_l5.EventValue_changed TO hanim_l5.rotation}
Group8.AddRoute(OrientationInterpolator1410.EventValue_changed, HAnimJoint499.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1411.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l4.EventValue_changed TO hanim_l4.rotation }
{ Sample Armature_OI_l4.EventValue_changed TO hanim_l4.rotation}
Group8.AddRoute(OrientationInterpolator1411.EventValue_changed, HAnimJoint507.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1412.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l3.EventValue_changed TO hanim_l3.rotation }
{ Sample Armature_OI_l3.EventValue_changed TO hanim_l3.rotation}
Group8.AddRoute(OrientationInterpolator1412.EventValue_changed, HAnimJoint515.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1413.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l2.EventValue_changed TO hanim_l2.rotation }
{ Sample Armature_OI_l2.EventValue_changed TO hanim_l2.rotation}
Group8.AddRoute(OrientationInterpolator1413.EventValue_changed, HAnimJoint523.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1414.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l1.EventValue_changed TO hanim_l1.rotation }
{ Sample Armature_OI_l1.EventValue_changed TO hanim_l1.rotation}
Group8.AddRoute(OrientationInterpolator1414.EventValue_changed, HAnimJoint531.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_t12.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_t12.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1415.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_t12.EventValue_changed TO hanim_t12.rotation }
{ Sample Armature_OI_t12.EventValue_changed TO hanim_t12.rotation}
Group8.AddRoute(OrientationInterpolator1415.EventValue_changed, HAnimJoint539.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_t11.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_t11.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1416.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_t11.EventValue_changed TO hanim_t11.rotation }
{ Sample Armature_OI_t11.EventValue_changed TO hanim_t11.rotation}
Group8.AddRoute(OrientationInterpolator1416.EventValue_changed, HAnimJoint547.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_t10.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_t10.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1417.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_t10.EventValue_changed TO hanim_t10.rotation }
{ Sample Armature_OI_t10.EventValue_changed TO hanim_t10.rotation}
Group8.AddRoute(OrientationInterpolator1417.EventValue_changed, HAnimJoint555.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_t9.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_t9.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1418.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_t9.EventValue_changed TO hanim_t9.rotation }
{ Sample Armature_OI_t9.EventValue_changed TO hanim_t9.rotation}
Group8.AddRoute(OrientationInterpolator1418.EventValue_changed, HAnimJoint563.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_t8.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_t8.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1419.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_t8.EventValue_changed TO hanim_t8.rotation }
{ Sample Armature_OI_t8.EventValue_changed TO hanim_t8.rotation}
Group8.AddRoute(OrientationInterpolator1419.EventValue_changed, HAnimJoint571.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_t7.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_t7.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1420.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_t7.EventValue_changed TO hanim_t7.rotation }
{ Sample Armature_OI_t7.EventValue_changed TO hanim_t7.rotation}
Group8.AddRoute(OrientationInterpolator1420.EventValue_changed, HAnimJoint579.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_t6.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_t6.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1421.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_t6.EventValue_changed TO hanim_t6.rotation }
{ Sample Armature_OI_t6.EventValue_changed TO hanim_t6.rotation}
Group8.AddRoute(OrientationInterpolator1421.EventValue_changed, HAnimJoint587.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_t5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_t5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1422.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_t5.EventValue_changed TO hanim_t5.rotation }
{ Sample Armature_OI_t5.EventValue_changed TO hanim_t5.rotation}
Group8.AddRoute(OrientationInterpolator1422.EventValue_changed, HAnimJoint595.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_t4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_t4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1423.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_t4.EventValue_changed TO hanim_t4.rotation }
{ Sample Armature_OI_t4.EventValue_changed TO hanim_t4.rotation}
Group8.AddRoute(OrientationInterpolator1423.EventValue_changed, HAnimJoint603.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_t3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_t3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1424.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_t3.EventValue_changed TO hanim_t3.rotation }
{ Sample Armature_OI_t3.EventValue_changed TO hanim_t3.rotation}
Group8.AddRoute(OrientationInterpolator1424.EventValue_changed, HAnimJoint611.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_t2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_t2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1425.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_t2.EventValue_changed TO hanim_t2.rotation }
{ Sample Armature_OI_t2.EventValue_changed TO hanim_t2.rotation}
Group8.AddRoute(OrientationInterpolator1425.EventValue_changed, HAnimJoint619.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_t1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_t1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1426.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_t1.EventValue_changed TO hanim_t1.rotation }
{ Sample Armature_OI_t1.EventValue_changed TO hanim_t1.rotation}
Group8.AddRoute(OrientationInterpolator1426.EventValue_changed, HAnimJoint627.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_c7.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_c7.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1427.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_c7.EventValue_changed TO hanim_c7.rotation }
{ Sample Armature_OI_c7.EventValue_changed TO hanim_c7.rotation}
Group8.AddRoute(OrientationInterpolator1427.EventValue_changed, HAnimJoint635.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_c6.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_c6.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1428.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_c6.EventValue_changed TO hanim_c6.rotation }
{ Sample Armature_OI_c6.EventValue_changed TO hanim_c6.rotation}
Group8.AddRoute(OrientationInterpolator1428.EventValue_changed, HAnimJoint643.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_c5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_c5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1429.EventSet_fraction);
end;

procedure InitblenderSkeletonPart90;
begin

{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_c5.EventValue_changed TO hanim_c5.rotation }
{ Sample Armature_OI_c5.EventValue_changed TO hanim_c5.rotation}
Group8.AddRoute(OrientationInterpolator1429.EventValue_changed, HAnimJoint651.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_c4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_c4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1430.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_c4.EventValue_changed TO hanim_c4.rotation }
{ Sample Armature_OI_c4.EventValue_changed TO hanim_c4.rotation}
Group8.AddRoute(OrientationInterpolator1430.EventValue_changed, HAnimJoint659.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_c3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_c3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1431.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_c3.EventValue_changed TO hanim_c3.rotation }
{ Sample Armature_OI_c3.EventValue_changed TO hanim_c3.rotation}
Group8.AddRoute(OrientationInterpolator1431.EventValue_changed, HAnimJoint667.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_c2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_c2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1432.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_c2.EventValue_changed TO hanim_c2.rotation }
{ Sample Armature_OI_c2.EventValue_changed TO hanim_c2.rotation}
Group8.AddRoute(OrientationInterpolator1432.EventValue_changed, HAnimJoint675.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_c1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_c1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1433.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_c1.EventValue_changed TO hanim_c1.rotation }
{ Sample Armature_OI_c1.EventValue_changed TO hanim_c1.rotation}
Group8.AddRoute(OrientationInterpolator1433.EventValue_changed, HAnimJoint683.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_skull.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_skull.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1434.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_skull.EventValue_changed TO hanim_skull.rotation }
{ Sample Armature_OI_skull.EventValue_changed TO hanim_skull.rotation}
Group8.AddRoute(OrientationInterpolator1434.EventValue_changed, HAnimJoint691.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_eyelid.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_eyelid.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1435.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_eyelid.EventValue_changed TO hanim_l_eyelid.rotation }
{ Sample Armature_OI_l_eyelid.EventValue_changed TO hanim_l_eyelid.rotation}
Group8.AddRoute(OrientationInterpolator1435.EventValue_changed, HAnimJoint699.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_eyelid.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_eyelid.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1436.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_eyelid.EventValue_changed TO hanim_r_eyelid.rotation }
{ Sample Armature_OI_r_eyelid.EventValue_changed TO hanim_r_eyelid.rotation}
Group8.AddRoute(OrientationInterpolator1436.EventValue_changed, HAnimJoint707.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_eyeball.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_eyeball.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1437.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_eyeball.EventValue_changed TO hanim_l_eyeball.rotation }
{ Sample Armature_OI_l_eyeball.EventValue_changed TO hanim_l_eyeball.rotation}
Group8.AddRoute(OrientationInterpolator1437.EventValue_changed, HAnimJoint715.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_eyeball.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_eyeball.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1438.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_eyeball.EventValue_changed TO hanim_r_eyeball.rotation }
{ Sample Armature_OI_r_eyeball.EventValue_changed TO hanim_r_eyeball.rotation}
Group8.AddRoute(OrientationInterpolator1438.EventValue_changed, HAnimJoint723.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_eyebrow.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_eyebrow.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1439.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_eyebrow.EventValue_changed TO hanim_l_eyebrow.rotation }
{ Sample Armature_OI_l_eyebrow.EventValue_changed TO hanim_l_eyebrow.rotation}
Group8.AddRoute(OrientationInterpolator1439.EventValue_changed, HAnimJoint731.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_eyebrow.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_eyebrow.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1440.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_eyebrow.EventValue_changed TO hanim_r_eyebrow.rotation }
{ Sample Armature_OI_r_eyebrow.EventValue_changed TO hanim_r_eyebrow.rotation}
Group8.AddRoute(OrientationInterpolator1440.EventValue_changed, HAnimJoint739.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_jaw.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_jaw.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1441.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_jaw.EventValue_changed TO hanim_jaw.rotation }
{ Sample Armature_OI_jaw.EventValue_changed TO hanim_jaw.rotation}
Group8.AddRoute(OrientationInterpolator1441.EventValue_changed, HAnimJoint747.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_clavicle.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_clavicle.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1442.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_clavicle.EventValue_changed TO hanim_l_clavicle.rotation }
{ Sample Armature_OI_l_clavicle.EventValue_changed TO hanim_l_clavicle.rotation}
Group8.AddRoute(OrientationInterpolator1442.EventValue_changed, HAnimJoint755.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_scapula.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_scapula.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1443.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_scapula.EventValue_changed TO hanim_l_scapula.rotation }
{ Sample Armature_OI_l_scapula.EventValue_changed TO hanim_l_scapula.rotation}
Group8.AddRoute(OrientationInterpolator1443.EventValue_changed, HAnimJoint763.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_upperarm.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_upperarm.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1444.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_upperarm.EventValue_changed TO hanim_l_upperarm.rotation }
{ Sample Armature_OI_l_upperarm.EventValue_changed TO hanim_l_upperarm.rotation}
Group8.AddRoute(OrientationInterpolator1444.EventValue_changed, HAnimJoint771.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_forearm.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_forearm.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1445.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_forearm.EventValue_changed TO hanim_l_forearm.rotation }
{ Sample Armature_OI_l_forearm.EventValue_changed TO hanim_l_forearm.rotation}
Group8.AddRoute(OrientationInterpolator1445.EventValue_changed, HAnimJoint779.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1446.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_carpal.EventValue_changed TO hanim_l_carpal.rotation }
{ Sample Armature_OI_l_carpal.EventValue_changed TO hanim_l_carpal.rotation}
Group8.AddRoute(OrientationInterpolator1446.EventValue_changed, HAnimJoint787.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_trapezium.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_trapezium.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1447.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_trapezium.EventValue_changed TO hanim_l_trapezium.rotation }
{ Sample Armature_OI_l_trapezium.EventValue_changed TO hanim_l_trapezium.rotation}
Group8.AddRoute(OrientationInterpolator1447.EventValue_changed, HAnimJoint795.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_metacarpal_1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_metacarpal_1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1448.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_metacarpal_1.EventValue_changed TO hanim_l_metacarpal_1.rotation }
{ Sample Armature_OI_l_metacarpal_1.EventValue_changed TO hanim_l_metacarpal_1.rotation}
Group8.AddRoute(OrientationInterpolator1448.EventValue_changed, HAnimJoint803.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_proximal_phalanx_1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_proximal_phalanx_1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1449.EventSet_fraction);
end;

procedure InitblenderSkeletonPart91;
begin

{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_carpal_proximal_phalanx_1.EventValue_changed TO hanim_l_carpal_proximal_phalanx_1.rotation }
{ Sample Armature_OI_l_carpal_proximal_phalanx_1.EventValue_changed TO hanim_l_carpal_proximal_phalanx_1.rotation}
Group8.AddRoute(OrientationInterpolator1449.EventValue_changed, HAnimJoint811.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_distal_phalanx_1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_distal_phalanx_1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1450.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_carpal_distal_phalanx_1.EventValue_changed TO hanim_l_carpal_distal_phalanx_1.rotation }
{ Sample Armature_OI_l_carpal_distal_phalanx_1.EventValue_changed TO hanim_l_carpal_distal_phalanx_1.rotation}
Group8.AddRoute(OrientationInterpolator1450.EventValue_changed, HAnimJoint819.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_trapezoid.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_trapezoid.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1451.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_trapezoid.EventValue_changed TO hanim_l_trapezoid.rotation }
{ Sample Armature_OI_l_trapezoid.EventValue_changed TO hanim_l_trapezoid.rotation}
Group8.AddRoute(OrientationInterpolator1451.EventValue_changed, HAnimJoint827.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_metacarpal_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_metacarpal_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1452.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_metacarpal_2.EventValue_changed TO hanim_l_metacarpal_2.rotation }
{ Sample Armature_OI_l_metacarpal_2.EventValue_changed TO hanim_l_metacarpal_2.rotation}
Group8.AddRoute(OrientationInterpolator1452.EventValue_changed, HAnimJoint835.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_proximal_phalanx_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_proximal_phalanx_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1453.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_carpal_proximal_phalanx_2.EventValue_changed TO hanim_l_carpal_proximal_phalanx_2.rotation }
{ Sample Armature_OI_l_carpal_proximal_phalanx_2.EventValue_changed TO hanim_l_carpal_proximal_phalanx_2.rotation}
Group8.AddRoute(OrientationInterpolator1453.EventValue_changed, HAnimJoint843.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_middle_phalanx_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_middle_phalanx_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1454.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_carpal_middle_phalanx_2.EventValue_changed TO hanim_l_carpal_middle_phalanx_2.rotation }
{ Sample Armature_OI_l_carpal_middle_phalanx_2.EventValue_changed TO hanim_l_carpal_middle_phalanx_2.rotation}
Group8.AddRoute(OrientationInterpolator1454.EventValue_changed, HAnimJoint851.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_distal_phalanx_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_distal_phalanx_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1455.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_carpal_distal_phalanx_2.EventValue_changed TO hanim_l_carpal_distal_phalanx_2.rotation }
{ Sample Armature_OI_l_carpal_distal_phalanx_2.EventValue_changed TO hanim_l_carpal_distal_phalanx_2.rotation}
Group8.AddRoute(OrientationInterpolator1455.EventValue_changed, HAnimJoint859.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_capitate.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_capitate.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1456.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_capitate.EventValue_changed TO hanim_l_capitate.rotation }
{ Sample Armature_OI_l_capitate.EventValue_changed TO hanim_l_capitate.rotation}
Group8.AddRoute(OrientationInterpolator1456.EventValue_changed, HAnimJoint867.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_metacarpal_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_metacarpal_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1457.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_metacarpal_3.EventValue_changed TO hanim_l_metacarpal_3.rotation }
{ Sample Armature_OI_l_metacarpal_3.EventValue_changed TO hanim_l_metacarpal_3.rotation}
Group8.AddRoute(OrientationInterpolator1457.EventValue_changed, HAnimJoint875.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_proximal_phalanx_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_proximal_phalanx_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1458.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_carpal_proximal_phalanx_3.EventValue_changed TO hanim_l_carpal_proximal_phalanx_3.rotation }
{ Sample Armature_OI_l_carpal_proximal_phalanx_3.EventValue_changed TO hanim_l_carpal_proximal_phalanx_3.rotation}
Group8.AddRoute(OrientationInterpolator1458.EventValue_changed, HAnimJoint883.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_middle_phalanx_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_middle_phalanx_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1459.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_carpal_middle_phalanx_3.EventValue_changed TO hanim_l_carpal_middle_phalanx_3.rotation }
{ Sample Armature_OI_l_carpal_middle_phalanx_3.EventValue_changed TO hanim_l_carpal_middle_phalanx_3.rotation}
Group8.AddRoute(OrientationInterpolator1459.EventValue_changed, HAnimJoint891.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_distal_phalanx_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_distal_phalanx_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1460.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_carpal_distal_phalanx_3.EventValue_changed TO hanim_l_carpal_distal_phalanx_3.rotation }
{ Sample Armature_OI_l_carpal_distal_phalanx_3.EventValue_changed TO hanim_l_carpal_distal_phalanx_3.rotation}
Group8.AddRoute(OrientationInterpolator1460.EventValue_changed, HAnimJoint899.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_hamate.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_hamate.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1461.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_hamate.EventValue_changed TO hanim_l_hamate.rotation }
{ Sample Armature_OI_l_hamate.EventValue_changed TO hanim_l_hamate.rotation}
Group8.AddRoute(OrientationInterpolator1461.EventValue_changed, HAnimJoint907.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_metacarpal_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_metacarpal_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1462.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_metacarpal_4.EventValue_changed TO hanim_l_metacarpal_4.rotation }
{ Sample Armature_OI_l_metacarpal_4.EventValue_changed TO hanim_l_metacarpal_4.rotation}
Group8.AddRoute(OrientationInterpolator1462.EventValue_changed, HAnimJoint915.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_proximal_phalanx_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_proximal_phalanx_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1463.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_carpal_proximal_phalanx_4.EventValue_changed TO hanim_l_carpal_proximal_phalanx_4.rotation }
{ Sample Armature_OI_l_carpal_proximal_phalanx_4.EventValue_changed TO hanim_l_carpal_proximal_phalanx_4.rotation}
Group8.AddRoute(OrientationInterpolator1463.EventValue_changed, HAnimJoint923.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_middle_phalanx_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_middle_phalanx_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1464.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_carpal_middle_phalanx_4.EventValue_changed TO hanim_l_carpal_middle_phalanx_4.rotation }
{ Sample Armature_OI_l_carpal_middle_phalanx_4.EventValue_changed TO hanim_l_carpal_middle_phalanx_4.rotation}
Group8.AddRoute(OrientationInterpolator1464.EventValue_changed, HAnimJoint931.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_distal_phalanx_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_distal_phalanx_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1465.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_carpal_distal_phalanx_4.EventValue_changed TO hanim_l_carpal_distal_phalanx_4.rotation }
{ Sample Armature_OI_l_carpal_distal_phalanx_4.EventValue_changed TO hanim_l_carpal_distal_phalanx_4.rotation}
Group8.AddRoute(OrientationInterpolator1465.EventValue_changed, HAnimJoint939.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_metacarpal_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_metacarpal_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1466.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_metacarpal_5.EventValue_changed TO hanim_l_metacarpal_5.rotation }
{ Sample Armature_OI_l_metacarpal_5.EventValue_changed TO hanim_l_metacarpal_5.rotation}
Group8.AddRoute(OrientationInterpolator1466.EventValue_changed, HAnimJoint947.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_proximal_phalanx_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_proximal_phalanx_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1467.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_carpal_proximal_phalanx_5.EventValue_changed TO hanim_l_carpal_proximal_phalanx_5.rotation }
{ Sample Armature_OI_l_carpal_proximal_phalanx_5.EventValue_changed TO hanim_l_carpal_proximal_phalanx_5.rotation}
Group8.AddRoute(OrientationInterpolator1467.EventValue_changed, HAnimJoint955.rotation);
end;

procedure InitblenderSkeletonPart92;
begin

{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_middle_phalanx_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_middle_phalanx_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1468.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_carpal_middle_phalanx_5.EventValue_changed TO hanim_l_carpal_middle_phalanx_5.rotation }
{ Sample Armature_OI_l_carpal_middle_phalanx_5.EventValue_changed TO hanim_l_carpal_middle_phalanx_5.rotation}
Group8.AddRoute(OrientationInterpolator1468.EventValue_changed, HAnimJoint963.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_distal_phalanx_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_l_carpal_distal_phalanx_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1469.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_l_carpal_distal_phalanx_5.EventValue_changed TO hanim_l_carpal_distal_phalanx_5.rotation }
{ Sample Armature_OI_l_carpal_distal_phalanx_5.EventValue_changed TO hanim_l_carpal_distal_phalanx_5.rotation}
Group8.AddRoute(OrientationInterpolator1469.EventValue_changed, HAnimJoint971.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_clavicle.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_clavicle.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1470.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_clavicle.EventValue_changed TO hanim_r_clavicle.rotation }
{ Sample Armature_OI_r_clavicle.EventValue_changed TO hanim_r_clavicle.rotation}
Group8.AddRoute(OrientationInterpolator1470.EventValue_changed, HAnimJoint979.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_scapula.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_scapula.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1471.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_scapula.EventValue_changed TO hanim_r_scapula.rotation }
{ Sample Armature_OI_r_scapula.EventValue_changed TO hanim_r_scapula.rotation}
Group8.AddRoute(OrientationInterpolator1471.EventValue_changed, HAnimJoint987.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_upperarm.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_upperarm.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1472.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_upperarm.EventValue_changed TO hanim_r_upperarm.rotation }
{ Sample Armature_OI_r_upperarm.EventValue_changed TO hanim_r_upperarm.rotation}
Group8.AddRoute(OrientationInterpolator1472.EventValue_changed, HAnimJoint995.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_forearm.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_forearm.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1473.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_forearm.EventValue_changed TO hanim_r_forearm.rotation }
{ Sample Armature_OI_r_forearm.EventValue_changed TO hanim_r_forearm.rotation}
Group8.AddRoute(OrientationInterpolator1473.EventValue_changed, HAnimJoint1003.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1474.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_carpal.EventValue_changed TO hanim_r_carpal.rotation }
{ Sample Armature_OI_r_carpal.EventValue_changed TO hanim_r_carpal.rotation}
Group8.AddRoute(OrientationInterpolator1474.EventValue_changed, HAnimJoint1011.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_trapezium.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_trapezium.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1475.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_trapezium.EventValue_changed TO hanim_r_trapezium.rotation }
{ Sample Armature_OI_r_trapezium.EventValue_changed TO hanim_r_trapezium.rotation}
Group8.AddRoute(OrientationInterpolator1475.EventValue_changed, HAnimJoint1019.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_metacarpal_1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_metacarpal_1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1476.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_metacarpal_1.EventValue_changed TO hanim_r_metacarpal_1.rotation }
{ Sample Armature_OI_r_metacarpal_1.EventValue_changed TO hanim_r_metacarpal_1.rotation}
Group8.AddRoute(OrientationInterpolator1476.EventValue_changed, HAnimJoint1027.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_proximal_phalanx_1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_proximal_phalanx_1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1477.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_carpal_proximal_phalanx_1.EventValue_changed TO hanim_r_carpal_proximal_phalanx_1.rotation }
{ Sample Armature_OI_r_carpal_proximal_phalanx_1.EventValue_changed TO hanim_r_carpal_proximal_phalanx_1.rotation}
Group8.AddRoute(OrientationInterpolator1477.EventValue_changed, HAnimJoint1035.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_distal_phalanx_1.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_distal_phalanx_1.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1478.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_carpal_distal_phalanx_1.EventValue_changed TO hanim_r_carpal_distal_phalanx_1.rotation }
{ Sample Armature_OI_r_carpal_distal_phalanx_1.EventValue_changed TO hanim_r_carpal_distal_phalanx_1.rotation}
Group8.AddRoute(OrientationInterpolator1478.EventValue_changed, HAnimJoint1043.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_trapezoid.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_trapezoid.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1479.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_trapezoid.EventValue_changed TO hanim_r_trapezoid.rotation }
{ Sample Armature_OI_r_trapezoid.EventValue_changed TO hanim_r_trapezoid.rotation}
Group8.AddRoute(OrientationInterpolator1479.EventValue_changed, HAnimJoint1051.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_metacarpal_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_metacarpal_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1480.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_metacarpal_2.EventValue_changed TO hanim_r_metacarpal_2.rotation }
{ Sample Armature_OI_r_metacarpal_2.EventValue_changed TO hanim_r_metacarpal_2.rotation}
Group8.AddRoute(OrientationInterpolator1480.EventValue_changed, HAnimJoint1059.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_proximal_phalanx_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_proximal_phalanx_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1481.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_carpal_proximal_phalanx_2.EventValue_changed TO hanim_r_carpal_proximal_phalanx_2.rotation }
{ Sample Armature_OI_r_carpal_proximal_phalanx_2.EventValue_changed TO hanim_r_carpal_proximal_phalanx_2.rotation}
Group8.AddRoute(OrientationInterpolator1481.EventValue_changed, HAnimJoint1067.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_middle_phalanx_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_middle_phalanx_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1482.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_carpal_middle_phalanx_2.EventValue_changed TO hanim_r_carpal_middle_phalanx_2.rotation }
{ Sample Armature_OI_r_carpal_middle_phalanx_2.EventValue_changed TO hanim_r_carpal_middle_phalanx_2.rotation}
Group8.AddRoute(OrientationInterpolator1482.EventValue_changed, HAnimJoint1075.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_distal_phalanx_2.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_distal_phalanx_2.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1483.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_carpal_distal_phalanx_2.EventValue_changed TO hanim_r_carpal_distal_phalanx_2.rotation }
{ Sample Armature_OI_r_carpal_distal_phalanx_2.EventValue_changed TO hanim_r_carpal_distal_phalanx_2.rotation}
Group8.AddRoute(OrientationInterpolator1483.EventValue_changed, HAnimJoint1083.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_capitate.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_capitate.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1484.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_capitate.EventValue_changed TO hanim_r_capitate.rotation }
{ Sample Armature_OI_r_capitate.EventValue_changed TO hanim_r_capitate.rotation}
Group8.AddRoute(OrientationInterpolator1484.EventValue_changed, HAnimJoint1091.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_metacarpal_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_metacarpal_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1485.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_metacarpal_3.EventValue_changed TO hanim_r_metacarpal_3.rotation }
{ Sample Armature_OI_r_metacarpal_3.EventValue_changed TO hanim_r_metacarpal_3.rotation}
Group8.AddRoute(OrientationInterpolator1485.EventValue_changed, HAnimJoint1099.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_proximal_phalanx_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_proximal_phalanx_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1486.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_carpal_proximal_phalanx_3.EventValue_changed TO hanim_r_carpal_proximal_phalanx_3.rotation }
{ Sample Armature_OI_r_carpal_proximal_phalanx_3.EventValue_changed TO hanim_r_carpal_proximal_phalanx_3.rotation}
Group8.AddRoute(OrientationInterpolator1486.EventValue_changed, HAnimJoint1107.rotation);
end;

procedure InitblenderSkeletonPart93;
begin

{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_middle_phalanx_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_middle_phalanx_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1487.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_carpal_middle_phalanx_3.EventValue_changed TO hanim_r_carpal_middle_phalanx_3.rotation }
{ Sample Armature_OI_r_carpal_middle_phalanx_3.EventValue_changed TO hanim_r_carpal_middle_phalanx_3.rotation}
Group8.AddRoute(OrientationInterpolator1487.EventValue_changed, HAnimJoint1115.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_distal_phalanx_3.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_distal_phalanx_3.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1488.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_carpal_distal_phalanx_3.EventValue_changed TO hanim_r_carpal_distal_phalanx_3.rotation }
{ Sample Armature_OI_r_carpal_distal_phalanx_3.EventValue_changed TO hanim_r_carpal_distal_phalanx_3.rotation}
Group8.AddRoute(OrientationInterpolator1488.EventValue_changed, HAnimJoint1123.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_hamate.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_hamate.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1489.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_hamate.EventValue_changed TO hanim_r_hamate.rotation }
{ Sample Armature_OI_r_hamate.EventValue_changed TO hanim_r_hamate.rotation}
Group8.AddRoute(OrientationInterpolator1489.EventValue_changed, HAnimJoint1131.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_metacarpal_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_metacarpal_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1490.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_metacarpal_4.EventValue_changed TO hanim_r_metacarpal_4.rotation }
{ Sample Armature_OI_r_metacarpal_4.EventValue_changed TO hanim_r_metacarpal_4.rotation}
Group8.AddRoute(OrientationInterpolator1490.EventValue_changed, HAnimJoint1139.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_proximal_phalanx_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_proximal_phalanx_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1491.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_carpal_proximal_phalanx_4.EventValue_changed TO hanim_r_carpal_proximal_phalanx_4.rotation }
{ Sample Armature_OI_r_carpal_proximal_phalanx_4.EventValue_changed TO hanim_r_carpal_proximal_phalanx_4.rotation}
Group8.AddRoute(OrientationInterpolator1491.EventValue_changed, HAnimJoint1147.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_middle_phalanx_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_middle_phalanx_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1492.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_carpal_middle_phalanx_4.EventValue_changed TO hanim_r_carpal_middle_phalanx_4.rotation }
{ Sample Armature_OI_r_carpal_middle_phalanx_4.EventValue_changed TO hanim_r_carpal_middle_phalanx_4.rotation}
Group8.AddRoute(OrientationInterpolator1492.EventValue_changed, HAnimJoint1155.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_distal_phalanx_4.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_distal_phalanx_4.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1493.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_carpal_distal_phalanx_4.EventValue_changed TO hanim_r_carpal_distal_phalanx_4.rotation }
{ Sample Armature_OI_r_carpal_distal_phalanx_4.EventValue_changed TO hanim_r_carpal_distal_phalanx_4.rotation}
Group8.AddRoute(OrientationInterpolator1493.EventValue_changed, HAnimJoint1163.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_metacarpal_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_metacarpal_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1494.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_metacarpal_5.EventValue_changed TO hanim_r_metacarpal_5.rotation }
{ Sample Armature_OI_r_metacarpal_5.EventValue_changed TO hanim_r_metacarpal_5.rotation}
Group8.AddRoute(OrientationInterpolator1494.EventValue_changed, HAnimJoint1171.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_proximal_phalanx_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_proximal_phalanx_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1495.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_carpal_proximal_phalanx_5.EventValue_changed TO hanim_r_carpal_proximal_phalanx_5.rotation }
{ Sample Armature_OI_r_carpal_proximal_phalanx_5.EventValue_changed TO hanim_r_carpal_proximal_phalanx_5.rotation}
Group8.AddRoute(OrientationInterpolator1495.EventValue_changed, HAnimJoint1179.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_middle_phalanx_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_middle_phalanx_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1496.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_carpal_middle_phalanx_5.EventValue_changed TO hanim_r_carpal_middle_phalanx_5.rotation }
{ Sample Armature_OI_r_carpal_middle_phalanx_5.EventValue_changed TO hanim_r_carpal_middle_phalanx_5.rotation}
Group8.AddRoute(OrientationInterpolator1496.EventValue_changed, HAnimJoint1187.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_distal_phalanx_5.EventSet_fraction }
{ Sample Armature_Clock.EventFraction_changed TO Armature_OI_r_carpal_distal_phalanx_5.EventSet_fraction}
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1497.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Armature_OI_r_carpal_distal_phalanx_5.EventValue_changed TO hanim_r_carpal_distal_phalanx_5.rotation }
{ Sample Armature_OI_r_carpal_distal_phalanx_5.EventValue_changed TO hanim_r_carpal_distal_phalanx_5.rotation}
Group8.AddRoute(OrientationInterpolator1497.EventValue_changed, HAnimJoint1195.rotation);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group8]);
end;

function CreateblenderSkeleton: TX3DRootNode;
begin
InitblenderSkeletonPart0;
InitblenderSkeletonPart1;
InitblenderSkeletonPart2;
InitblenderSkeletonPart3;
InitblenderSkeletonPart4;
InitblenderSkeletonPart5;
InitblenderSkeletonPart6;
InitblenderSkeletonPart7;
InitblenderSkeletonPart8;
InitblenderSkeletonPart9;
InitblenderSkeletonPart10;
InitblenderSkeletonPart11;
InitblenderSkeletonPart12;
InitblenderSkeletonPart13;
InitblenderSkeletonPart14;
InitblenderSkeletonPart15;
InitblenderSkeletonPart16;
InitblenderSkeletonPart17;
InitblenderSkeletonPart18;
InitblenderSkeletonPart19;
InitblenderSkeletonPart20;
InitblenderSkeletonPart21;
InitblenderSkeletonPart22;
InitblenderSkeletonPart23;
InitblenderSkeletonPart24;
InitblenderSkeletonPart25;
InitblenderSkeletonPart26;
InitblenderSkeletonPart27;
InitblenderSkeletonPart28;
InitblenderSkeletonPart29;
InitblenderSkeletonPart30;
InitblenderSkeletonPart31;
InitblenderSkeletonPart32;
InitblenderSkeletonPart33;
InitblenderSkeletonPart34;
InitblenderSkeletonPart35;
InitblenderSkeletonPart36;
InitblenderSkeletonPart37;
InitblenderSkeletonPart38;
InitblenderSkeletonPart39;
InitblenderSkeletonPart40;
InitblenderSkeletonPart41;
InitblenderSkeletonPart42;
InitblenderSkeletonPart43;
InitblenderSkeletonPart44;
InitblenderSkeletonPart45;
InitblenderSkeletonPart46;
InitblenderSkeletonPart47;
InitblenderSkeletonPart48;
InitblenderSkeletonPart49;
InitblenderSkeletonPart50;
InitblenderSkeletonPart51;
InitblenderSkeletonPart52;
InitblenderSkeletonPart53;
InitblenderSkeletonPart54;
InitblenderSkeletonPart55;
InitblenderSkeletonPart56;
InitblenderSkeletonPart57;
InitblenderSkeletonPart58;
InitblenderSkeletonPart59;
InitblenderSkeletonPart60;
InitblenderSkeletonPart61;
InitblenderSkeletonPart62;
InitblenderSkeletonPart63;
InitblenderSkeletonPart64;
InitblenderSkeletonPart65;
InitblenderSkeletonPart66;
InitblenderSkeletonPart67;
InitblenderSkeletonPart68;
InitblenderSkeletonPart69;
InitblenderSkeletonPart70;
InitblenderSkeletonPart71;
InitblenderSkeletonPart72;
InitblenderSkeletonPart73;
InitblenderSkeletonPart74;
InitblenderSkeletonPart75;
InitblenderSkeletonPart76;
InitblenderSkeletonPart77;
InitblenderSkeletonPart78;
InitblenderSkeletonPart79;
InitblenderSkeletonPart80;
InitblenderSkeletonPart81;
InitblenderSkeletonPart82;
InitblenderSkeletonPart83;
InitblenderSkeletonPart84;
InitblenderSkeletonPart85;
InitblenderSkeletonPart86;
InitblenderSkeletonPart87;
InitblenderSkeletonPart88;
InitblenderSkeletonPart89;
InitblenderSkeletonPart90;
InitblenderSkeletonPart91;
InitblenderSkeletonPart92;
InitblenderSkeletonPart93;
Result := X3D0;
end;

begin
end.
