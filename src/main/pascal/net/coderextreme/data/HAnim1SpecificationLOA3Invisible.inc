function HAnim1SpecificationLOA3Invisible: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group28: TGroupNode;
Background29: TBackgroundNode;
NavigationInfo30: TNavigationInfoNode;
Group31: TGroupNode;
WorldInfo32: TWorldInfoNode;
Viewpoint33: TViewpointNode;
Viewpoint34: TViewpointNode;
Viewpoint35: TViewpointNode;
Viewpoint36: TViewpointNode;
Viewpoint37: TViewpointNode;
Viewpoint38: TViewpointNode;
Viewpoint39: TViewpointNode;
Viewpoint40: TViewpointNode;
Viewpoint41: TViewpointNode;
HAnimHumanoid42: THAnimHumanoidNode;
HAnimJoint43: THAnimJointNode;
HAnimSegment44: THAnimSegmentNode;
HAnimJoint45: THAnimJointNode;
HAnimSegment46: THAnimSegmentNode;
HAnimSite47: THAnimSiteNode;
HAnimSite48: THAnimSiteNode;
HAnimSite49: THAnimSiteNode;
HAnimSite50: THAnimSiteNode;
HAnimSite51: THAnimSiteNode;
HAnimSite52: THAnimSiteNode;
HAnimSite53: THAnimSiteNode;
HAnimSite54: THAnimSiteNode;
HAnimSite55: THAnimSiteNode;
HAnimJoint56: THAnimJointNode;
HAnimSegment57: THAnimSegmentNode;
HAnimSite58: THAnimSiteNode;
HAnimSite59: THAnimSiteNode;
HAnimSite60: THAnimSiteNode;
HAnimJoint61: THAnimJointNode;
HAnimSegment62: THAnimSegmentNode;
HAnimJoint63: THAnimJointNode;
HAnimSegment64: THAnimSegmentNode;
HAnimSite65: THAnimSiteNode;
HAnimSite66: THAnimSiteNode;
HAnimSite67: THAnimSiteNode;
HAnimSite68: THAnimSiteNode;
HAnimJoint69: THAnimJointNode;
HAnimSegment70: THAnimSegmentNode;
HAnimJoint71: THAnimJointNode;
HAnimSegment72: THAnimSegmentNode;
HAnimSite73: THAnimSiteNode;
HAnimJoint74: THAnimJointNode;
HAnimSegment75: THAnimSegmentNode;
HAnimSite76: THAnimSiteNode;
HAnimSite77: THAnimSiteNode;
HAnimSite78: THAnimSiteNode;
HAnimJoint79: THAnimJointNode;
HAnimSegment80: THAnimSegmentNode;
HAnimSite81: THAnimSiteNode;
HAnimSite82: THAnimSiteNode;
HAnimSite83: THAnimSiteNode;
HAnimJoint84: THAnimJointNode;
HAnimSegment85: THAnimSegmentNode;
HAnimJoint86: THAnimJointNode;
HAnimSegment87: THAnimSegmentNode;
HAnimSite88: THAnimSiteNode;
HAnimSite89: THAnimSiteNode;
HAnimSite90: THAnimSiteNode;
HAnimSite91: THAnimSiteNode;
HAnimJoint92: THAnimJointNode;
HAnimSegment93: THAnimSegmentNode;
HAnimJoint94: THAnimJointNode;
HAnimSegment95: THAnimSegmentNode;
HAnimSite96: THAnimSiteNode;
HAnimJoint97: THAnimJointNode;
HAnimSegment98: THAnimSegmentNode;
HAnimSite99: THAnimSiteNode;
HAnimSite100: THAnimSiteNode;
HAnimSite101: THAnimSiteNode;
HAnimJoint102: THAnimJointNode;
HAnimSegment103: THAnimSegmentNode;
HAnimSite104: THAnimSiteNode;
HAnimSite105: THAnimSiteNode;
HAnimJoint106: THAnimJointNode;
HAnimSegment107: THAnimSegmentNode;
HAnimJoint108: THAnimJointNode;
HAnimSegment109: THAnimSegmentNode;
HAnimJoint110: THAnimJointNode;
HAnimSegment111: THAnimSegmentNode;
HAnimSite112: THAnimSiteNode;
HAnimSite113: THAnimSiteNode;
HAnimSite114: THAnimSiteNode;
HAnimJoint115: THAnimJointNode;
HAnimSegment116: THAnimSegmentNode;
HAnimJoint117: THAnimJointNode;
HAnimSegment118: THAnimSegmentNode;
HAnimJoint119: THAnimJointNode;
HAnimSegment120: THAnimSegmentNode;
HAnimJoint121: THAnimJointNode;
HAnimSegment122: THAnimSegmentNode;
HAnimSite123: THAnimSiteNode;
HAnimJoint124: THAnimJointNode;
HAnimSegment125: THAnimSegmentNode;
HAnimSite126: THAnimSiteNode;
HAnimSite127: THAnimSiteNode;
HAnimJoint128: THAnimJointNode;
HAnimSegment129: THAnimSegmentNode;
HAnimJoint130: THAnimJointNode;
HAnimSegment131: THAnimSegmentNode;
HAnimJoint132: THAnimJointNode;
HAnimSegment133: THAnimSegmentNode;
HAnimJoint134: THAnimJointNode;
HAnimSegment135: THAnimSegmentNode;
HAnimJoint136: THAnimJointNode;
HAnimSegment137: THAnimSegmentNode;
HAnimJoint138: THAnimJointNode;
HAnimSegment139: THAnimSegmentNode;
HAnimJoint140: THAnimJointNode;
HAnimSegment141: THAnimSegmentNode;
HAnimJoint142: THAnimJointNode;
HAnimSegment143: THAnimSegmentNode;
HAnimSite144: THAnimSiteNode;
HAnimSite145: THAnimSiteNode;
HAnimJoint146: THAnimJointNode;
HAnimSegment147: THAnimSegmentNode;
HAnimSite148: THAnimSiteNode;
HAnimSite149: THAnimSiteNode;
HAnimJoint150: THAnimJointNode;
HAnimSegment151: THAnimSegmentNode;
HAnimJoint152: THAnimJointNode;
HAnimSegment153: THAnimSegmentNode;
HAnimJoint154: THAnimJointNode;
HAnimSegment155: THAnimSegmentNode;
HAnimJoint156: THAnimJointNode;
HAnimSegment157: THAnimSegmentNode;
HAnimJoint158: THAnimJointNode;
HAnimSegment159: THAnimSegmentNode;
HAnimJoint160: THAnimJointNode;
HAnimSegment161: THAnimSegmentNode;
HAnimJoint162: THAnimJointNode;
HAnimSegment163: THAnimSegmentNode;
HAnimSite164: THAnimSiteNode;
HAnimSite165: THAnimSiteNode;
HAnimSite166: THAnimSiteNode;
HAnimSite167: THAnimSiteNode;
HAnimSite168: THAnimSiteNode;
HAnimSite169: THAnimSiteNode;
HAnimSite170: THAnimSiteNode;
HAnimSite171: THAnimSiteNode;
HAnimSite172: THAnimSiteNode;
HAnimSite173: THAnimSiteNode;
HAnimJoint174: THAnimJointNode;
HAnimSegment175: THAnimSegmentNode;
HAnimSite176: THAnimSiteNode;
Viewpoint177: TViewpointNode;
HAnimJoint178: THAnimJointNode;
HAnimSegment179: THAnimSegmentNode;
HAnimJoint180: THAnimJointNode;
HAnimSegment181: THAnimSegmentNode;
HAnimJoint182: THAnimJointNode;
HAnimSegment183: THAnimSegmentNode;
HAnimSite184: THAnimSiteNode;
Viewpoint185: TViewpointNode;
HAnimJoint186: THAnimJointNode;
HAnimSegment187: THAnimSegmentNode;
HAnimJoint188: THAnimJointNode;
HAnimSegment189: THAnimSegmentNode;
HAnimJoint190: THAnimJointNode;
HAnimSegment191: THAnimSegmentNode;
HAnimSite192: THAnimSiteNode;
HAnimSite193: THAnimSiteNode;
HAnimJoint194: THAnimJointNode;
HAnimSegment195: THAnimSegmentNode;
HAnimSite196: THAnimSiteNode;
HAnimSite197: THAnimSiteNode;
HAnimSite198: THAnimSiteNode;
HAnimSite199: THAnimSiteNode;
HAnimJoint200: THAnimJointNode;
HAnimSegment201: THAnimSegmentNode;
HAnimJoint202: THAnimJointNode;
HAnimSegment203: THAnimSegmentNode;
HAnimSite204: THAnimSiteNode;
HAnimJoint205: THAnimJointNode;
HAnimSegment206: THAnimSegmentNode;
HAnimSite207: THAnimSiteNode;
HAnimSite208: THAnimSiteNode;
HAnimSite209: THAnimSiteNode;
HAnimSite210: THAnimSiteNode;
HAnimJoint211: THAnimJointNode;
HAnimSegment212: THAnimSegmentNode;
HAnimSite213: THAnimSiteNode;
HAnimSite214: THAnimSiteNode;
HAnimSite215: THAnimSiteNode;
HAnimSite216: THAnimSiteNode;
Viewpoint217: TViewpointNode;
HAnimJoint218: THAnimJointNode;
HAnimSegment219: THAnimSegmentNode;
HAnimJoint220: THAnimJointNode;
HAnimSegment221: THAnimSegmentNode;
HAnimJoint222: THAnimJointNode;
HAnimSegment223: THAnimSegmentNode;
HAnimSite224: THAnimSiteNode;
HAnimJoint225: THAnimJointNode;
HAnimSegment226: THAnimSegmentNode;
HAnimJoint227: THAnimJointNode;
HAnimSegment228: THAnimSegmentNode;
HAnimJoint229: THAnimJointNode;
HAnimSegment230: THAnimSegmentNode;
HAnimJoint231: THAnimJointNode;
HAnimSegment232: THAnimSegmentNode;
HAnimSite233: THAnimSiteNode;
HAnimSite234: THAnimSiteNode;
HAnimJoint235: THAnimJointNode;
HAnimSegment236: THAnimSegmentNode;
HAnimJoint237: THAnimJointNode;
HAnimSegment238: THAnimSegmentNode;
HAnimJoint239: THAnimJointNode;
HAnimSegment240: THAnimSegmentNode;
HAnimJoint241: THAnimJointNode;
HAnimSegment242: THAnimSegmentNode;
HAnimSite243: THAnimSiteNode;
HAnimJoint244: THAnimJointNode;
HAnimSegment245: THAnimSegmentNode;
HAnimJoint246: THAnimJointNode;
HAnimSegment247: THAnimSegmentNode;
HAnimJoint248: THAnimJointNode;
HAnimSegment249: THAnimSegmentNode;
HAnimJoint250: THAnimJointNode;
HAnimSegment251: THAnimSegmentNode;
HAnimSite252: THAnimSiteNode;
HAnimJoint253: THAnimJointNode;
HAnimSegment254: THAnimSegmentNode;
HAnimJoint255: THAnimJointNode;
HAnimSegment256: THAnimSegmentNode;
HAnimJoint257: THAnimJointNode;
HAnimSegment258: THAnimSegmentNode;
HAnimJoint259: THAnimJointNode;
HAnimSegment260: THAnimSegmentNode;
HAnimSite261: THAnimSiteNode;
HAnimJoint262: THAnimJointNode;
HAnimSegment263: THAnimSegmentNode;
HAnimSite264: THAnimSiteNode;
HAnimSite265: THAnimSiteNode;
HAnimSite266: THAnimSiteNode;
HAnimSite267: THAnimSiteNode;
HAnimJoint268: THAnimJointNode;
HAnimSegment269: THAnimSegmentNode;
HAnimJoint270: THAnimJointNode;
HAnimSegment271: THAnimSegmentNode;
HAnimSite272: THAnimSiteNode;
HAnimJoint273: THAnimJointNode;
HAnimSegment274: THAnimSegmentNode;
HAnimSite275: THAnimSiteNode;
HAnimSite276: THAnimSiteNode;
HAnimSite277: THAnimSiteNode;
HAnimSite278: THAnimSiteNode;
HAnimJoint279: THAnimJointNode;
HAnimSegment280: THAnimSegmentNode;
HAnimSite281: THAnimSiteNode;
HAnimSite282: THAnimSiteNode;
HAnimSite283: THAnimSiteNode;
HAnimSite284: THAnimSiteNode;
Viewpoint285: TViewpointNode;
HAnimJoint286: THAnimJointNode;
HAnimSegment287: THAnimSegmentNode;
HAnimJoint288: THAnimJointNode;
HAnimSegment289: THAnimSegmentNode;
HAnimJoint290: THAnimJointNode;
HAnimSegment291: THAnimSegmentNode;
HAnimSite292: THAnimSiteNode;
HAnimJoint293: THAnimJointNode;
HAnimSegment294: THAnimSegmentNode;
HAnimJoint295: THAnimJointNode;
HAnimSegment296: THAnimSegmentNode;
HAnimJoint297: THAnimJointNode;
HAnimSegment298: THAnimSegmentNode;
HAnimJoint299: THAnimJointNode;
HAnimSegment300: THAnimSegmentNode;
HAnimSite301: THAnimSiteNode;
HAnimSite302: THAnimSiteNode;
HAnimJoint303: THAnimJointNode;
HAnimSegment304: THAnimSegmentNode;
HAnimJoint305: THAnimJointNode;
HAnimSegment306: THAnimSegmentNode;
HAnimJoint307: THAnimJointNode;
HAnimSegment308: THAnimSegmentNode;
HAnimJoint309: THAnimJointNode;
HAnimSegment310: THAnimSegmentNode;
HAnimSite311: THAnimSiteNode;
HAnimJoint312: THAnimJointNode;
HAnimSegment313: THAnimSegmentNode;
HAnimJoint314: THAnimJointNode;
HAnimSegment315: THAnimSegmentNode;
HAnimJoint316: THAnimJointNode;
HAnimSegment317: THAnimSegmentNode;
HAnimJoint318: THAnimJointNode;
HAnimSegment319: THAnimSegmentNode;
HAnimSite320: THAnimSiteNode;
HAnimJoint321: THAnimJointNode;
HAnimSegment322: THAnimSegmentNode;
HAnimJoint323: THAnimJointNode;
HAnimSegment324: THAnimSegmentNode;
HAnimJoint325: THAnimJointNode;
HAnimSegment326: THAnimSegmentNode;
HAnimJoint327: THAnimJointNode;
HAnimSegment328: THAnimSegmentNode;
HAnimSite329: THAnimSiteNode;
HAnimJoint330: THAnimJointNode;
HAnimJoint331: THAnimJointNode;
HAnimJoint332: THAnimJointNode;
HAnimJoint333: THAnimJointNode;
HAnimJoint334: THAnimJointNode;
HAnimJoint335: THAnimJointNode;
HAnimJoint336: THAnimJointNode;
HAnimJoint337: THAnimJointNode;
HAnimJoint338: THAnimJointNode;
HAnimJoint339: THAnimJointNode;
HAnimJoint340: THAnimJointNode;
HAnimJoint341: THAnimJointNode;
HAnimJoint342: THAnimJointNode;
HAnimJoint343: THAnimJointNode;
HAnimJoint344: THAnimJointNode;
HAnimJoint345: THAnimJointNode;
HAnimJoint346: THAnimJointNode;
HAnimJoint347: THAnimJointNode;
HAnimJoint348: THAnimJointNode;
HAnimJoint349: THAnimJointNode;
HAnimJoint350: THAnimJointNode;
HAnimJoint351: THAnimJointNode;
HAnimJoint352: THAnimJointNode;
HAnimJoint353: THAnimJointNode;
HAnimJoint354: THAnimJointNode;
HAnimJoint355: THAnimJointNode;
HAnimJoint356: THAnimJointNode;
HAnimJoint357: THAnimJointNode;
HAnimJoint358: THAnimJointNode;
HAnimJoint359: THAnimJointNode;
HAnimJoint360: THAnimJointNode;
HAnimJoint361: THAnimJointNode;
HAnimJoint362: THAnimJointNode;
HAnimJoint363: THAnimJointNode;
HAnimJoint364: THAnimJointNode;
HAnimJoint365: THAnimJointNode;
HAnimJoint366: THAnimJointNode;
HAnimJoint367: THAnimJointNode;
HAnimJoint368: THAnimJointNode;
HAnimJoint369: THAnimJointNode;
HAnimJoint370: THAnimJointNode;
HAnimJoint371: THAnimJointNode;
HAnimJoint372: THAnimJointNode;
HAnimJoint373: THAnimJointNode;
HAnimJoint374: THAnimJointNode;
HAnimJoint375: THAnimJointNode;
HAnimJoint376: THAnimJointNode;
HAnimJoint377: THAnimJointNode;
HAnimJoint378: THAnimJointNode;
HAnimJoint379: THAnimJointNode;
HAnimJoint380: THAnimJointNode;
HAnimJoint381: THAnimJointNode;
HAnimJoint382: THAnimJointNode;
HAnimJoint383: THAnimJointNode;
HAnimJoint384: THAnimJointNode;
HAnimJoint385: THAnimJointNode;
HAnimJoint386: THAnimJointNode;
HAnimJoint387: THAnimJointNode;
HAnimJoint388: THAnimJointNode;
HAnimJoint389: THAnimJointNode;
HAnimJoint390: THAnimJointNode;
HAnimJoint391: THAnimJointNode;
HAnimJoint392: THAnimJointNode;
HAnimJoint393: THAnimJointNode;
HAnimJoint394: THAnimJointNode;
HAnimJoint395: THAnimJointNode;
HAnimJoint396: THAnimJointNode;
HAnimJoint397: THAnimJointNode;
HAnimJoint398: THAnimJointNode;
HAnimJoint399: THAnimJointNode;
HAnimJoint400: THAnimJointNode;
HAnimJoint401: THAnimJointNode;
HAnimJoint402: THAnimJointNode;
HAnimJoint403: THAnimJointNode;
HAnimJoint404: THAnimJointNode;
HAnimJoint405: THAnimJointNode;
HAnimJoint406: THAnimJointNode;
HAnimJoint407: THAnimJointNode;
HAnimJoint408: THAnimJointNode;
HAnimJoint409: THAnimJointNode;
HAnimJoint410: THAnimJointNode;
HAnimJoint411: THAnimJointNode;
HAnimJoint412: THAnimJointNode;
HAnimJoint413: THAnimJointNode;
HAnimJoint414: THAnimJointNode;
HAnimJoint415: THAnimJointNode;
HAnimJoint416: THAnimJointNode;
HAnimJoint417: THAnimJointNode;
HAnimJoint418: THAnimJointNode;
HAnimJoint419: THAnimJointNode;
HAnimJoint420: THAnimJointNode;
HAnimJoint421: THAnimJointNode;
HAnimJoint422: THAnimJointNode;
HAnimJoint423: THAnimJointNode;
HAnimSegment424: THAnimSegmentNode;
HAnimSegment425: THAnimSegmentNode;
HAnimSegment426: THAnimSegmentNode;
HAnimSegment427: THAnimSegmentNode;
HAnimSegment428: THAnimSegmentNode;
HAnimSegment429: THAnimSegmentNode;
HAnimSegment430: THAnimSegmentNode;
HAnimSegment431: THAnimSegmentNode;
HAnimSegment432: THAnimSegmentNode;
HAnimSegment433: THAnimSegmentNode;
HAnimSegment434: THAnimSegmentNode;
HAnimSegment435: THAnimSegmentNode;
HAnimSegment436: THAnimSegmentNode;
HAnimSegment437: THAnimSegmentNode;
HAnimSegment438: THAnimSegmentNode;
HAnimSegment439: THAnimSegmentNode;
HAnimSegment440: THAnimSegmentNode;
HAnimSegment441: THAnimSegmentNode;
HAnimSegment442: THAnimSegmentNode;
HAnimSegment443: THAnimSegmentNode;
HAnimSegment444: THAnimSegmentNode;
HAnimSegment445: THAnimSegmentNode;
HAnimSegment446: THAnimSegmentNode;
HAnimSegment447: THAnimSegmentNode;
HAnimSegment448: THAnimSegmentNode;
HAnimSegment449: THAnimSegmentNode;
HAnimSegment450: THAnimSegmentNode;
HAnimSegment451: THAnimSegmentNode;
HAnimSegment452: THAnimSegmentNode;
HAnimSegment453: THAnimSegmentNode;
HAnimSegment454: THAnimSegmentNode;
HAnimSegment455: THAnimSegmentNode;
HAnimSegment456: THAnimSegmentNode;
HAnimSegment457: THAnimSegmentNode;
HAnimSegment458: THAnimSegmentNode;
HAnimSegment459: THAnimSegmentNode;
HAnimSegment460: THAnimSegmentNode;
HAnimSegment461: THAnimSegmentNode;
HAnimSegment462: THAnimSegmentNode;
HAnimSegment463: THAnimSegmentNode;
HAnimSegment464: THAnimSegmentNode;
HAnimSegment465: THAnimSegmentNode;
HAnimSegment466: THAnimSegmentNode;
HAnimSegment467: THAnimSegmentNode;
HAnimSegment468: THAnimSegmentNode;
HAnimSegment469: THAnimSegmentNode;
HAnimSegment470: THAnimSegmentNode;
HAnimSegment471: THAnimSegmentNode;
HAnimSegment472: THAnimSegmentNode;
HAnimSegment473: THAnimSegmentNode;
HAnimSegment474: THAnimSegmentNode;
HAnimSegment475: THAnimSegmentNode;
HAnimSegment476: THAnimSegmentNode;
HAnimSegment477: THAnimSegmentNode;
HAnimSegment478: THAnimSegmentNode;
HAnimSegment479: THAnimSegmentNode;
HAnimSegment480: THAnimSegmentNode;
HAnimSegment481: THAnimSegmentNode;
HAnimSegment482: THAnimSegmentNode;
HAnimSegment483: THAnimSegmentNode;
HAnimSegment484: THAnimSegmentNode;
HAnimSegment485: THAnimSegmentNode;
HAnimSegment486: THAnimSegmentNode;
HAnimSegment487: THAnimSegmentNode;
HAnimSegment488: THAnimSegmentNode;
HAnimSegment489: THAnimSegmentNode;
HAnimSegment490: THAnimSegmentNode;
HAnimSegment491: THAnimSegmentNode;
HAnimSegment492: THAnimSegmentNode;
HAnimSegment493: THAnimSegmentNode;
HAnimSegment494: THAnimSegmentNode;
HAnimSegment495: THAnimSegmentNode;
HAnimSegment496: THAnimSegmentNode;
HAnimSegment497: THAnimSegmentNode;
HAnimSegment498: THAnimSegmentNode;
HAnimSegment499: THAnimSegmentNode;
HAnimSegment500: THAnimSegmentNode;
HAnimSegment501: THAnimSegmentNode;
HAnimSegment502: THAnimSegmentNode;
HAnimSegment503: THAnimSegmentNode;
HAnimSegment504: THAnimSegmentNode;
HAnimSegment505: THAnimSegmentNode;
HAnimSegment506: THAnimSegmentNode;
HAnimSegment507: THAnimSegmentNode;
HAnimSegment508: THAnimSegmentNode;
HAnimSegment509: THAnimSegmentNode;
HAnimSegment510: THAnimSegmentNode;
HAnimSegment511: THAnimSegmentNode;
HAnimSegment512: THAnimSegmentNode;
HAnimSegment513: THAnimSegmentNode;
HAnimSegment514: THAnimSegmentNode;
HAnimSegment515: THAnimSegmentNode;
HAnimSegment516: THAnimSegmentNode;
HAnimSegment517: THAnimSegmentNode;
HAnimSite518: THAnimSiteNode;
HAnimSite519: THAnimSiteNode;
HAnimSite520: THAnimSiteNode;
HAnimSite521: THAnimSiteNode;
HAnimSite522: THAnimSiteNode;
HAnimSite523: THAnimSiteNode;
HAnimSite524: THAnimSiteNode;
HAnimSite525: THAnimSiteNode;
HAnimSite526: THAnimSiteNode;
HAnimSite527: THAnimSiteNode;
HAnimSite528: THAnimSiteNode;
HAnimSite529: THAnimSiteNode;
HAnimSite530: THAnimSiteNode;
HAnimSite531: THAnimSiteNode;
HAnimSite532: THAnimSiteNode;
HAnimSite533: THAnimSiteNode;
HAnimSite534: THAnimSiteNode;
HAnimSite535: THAnimSiteNode;
HAnimSite536: THAnimSiteNode;
HAnimSite537: THAnimSiteNode;
HAnimSite538: THAnimSiteNode;
HAnimSite539: THAnimSiteNode;
HAnimSite540: THAnimSiteNode;
HAnimSite541: THAnimSiteNode;
HAnimSite542: THAnimSiteNode;
HAnimSite543: THAnimSiteNode;
HAnimSite544: THAnimSiteNode;
HAnimSite545: THAnimSiteNode;
HAnimSite546: THAnimSiteNode;
HAnimSite547: THAnimSiteNode;
HAnimSite548: THAnimSiteNode;
HAnimSite549: THAnimSiteNode;
HAnimSite550: THAnimSiteNode;
HAnimSite551: THAnimSiteNode;
HAnimSite552: THAnimSiteNode;
HAnimSite553: THAnimSiteNode;
HAnimSite554: THAnimSiteNode;
HAnimSite555: THAnimSiteNode;
HAnimSite556: THAnimSiteNode;
HAnimSite557: THAnimSiteNode;
HAnimSite558: THAnimSiteNode;
HAnimSite559: THAnimSiteNode;
HAnimSite560: THAnimSiteNode;
HAnimSite561: THAnimSiteNode;
HAnimSite562: THAnimSiteNode;
HAnimSite563: THAnimSiteNode;
HAnimSite564: THAnimSiteNode;
HAnimSite565: THAnimSiteNode;
HAnimSite566: THAnimSiteNode;
HAnimSite567: THAnimSiteNode;
HAnimSite568: THAnimSiteNode;
HAnimSite569: THAnimSiteNode;
HAnimSite570: THAnimSiteNode;
HAnimSite571: THAnimSiteNode;
HAnimSite572: THAnimSiteNode;
HAnimSite573: THAnimSiteNode;
HAnimSite574: THAnimSiteNode;
HAnimSite575: THAnimSiteNode;
HAnimSite576: THAnimSiteNode;
HAnimSite577: THAnimSiteNode;
HAnimSite578: THAnimSiteNode;
HAnimSite579: THAnimSiteNode;
HAnimSite580: THAnimSiteNode;
HAnimSite581: THAnimSiteNode;
HAnimSite582: THAnimSiteNode;
HAnimSite583: THAnimSiteNode;
HAnimSite584: THAnimSiteNode;
HAnimSite585: THAnimSiteNode;
HAnimSite586: THAnimSiteNode;
HAnimSite587: THAnimSiteNode;
HAnimSite588: THAnimSiteNode;
HAnimSite589: THAnimSiteNode;
HAnimSite590: THAnimSiteNode;
HAnimSite591: THAnimSiteNode;
HAnimSite592: THAnimSiteNode;
HAnimSite593: THAnimSiteNode;
HAnimSite594: THAnimSiteNode;
HAnimSite595: THAnimSiteNode;
HAnimSite596: THAnimSiteNode;
HAnimSite597: THAnimSiteNode;
HAnimSite598: THAnimSiteNode;
HAnimSite599: THAnimSiteNode;
HAnimSite600: THAnimSiteNode;
HAnimSite601: THAnimSiteNode;
HAnimSite602: THAnimSiteNode;
HAnimSite603: THAnimSiteNode;
HAnimSite604: THAnimSiteNode;
HAnimSite605: THAnimSiteNode;
HAnimSite606: THAnimSiteNode;
HAnimSite607: THAnimSiteNode;
HAnimSite608: THAnimSiteNode;
HAnimSite609: THAnimSiteNode;
Viewpoint610: TViewpointNode;
HAnimSite611: THAnimSiteNode;
Viewpoint612: TViewpointNode;
HAnimSite613: THAnimSiteNode;
Viewpoint614: TViewpointNode;
HAnimSite615: THAnimSiteNode;
Viewpoint616: TViewpointNode;
HAnimSite617: THAnimSiteNode;
Viewpoint618: TViewpointNode;
HAnimSite619: THAnimSiteNode;
Viewpoint620: TViewpointNode;
HAnimSite621: THAnimSiteNode;
Viewpoint622: TViewpointNode;
HAnimSite623: THAnimSiteNode;
Viewpoint624: TViewpointNode;
HAnimSite625: THAnimSiteNode;
Viewpoint626: TViewpointNode;
HAnimSite627: THAnimSiteNode;
Viewpoint628: TViewpointNode;
HAnimSite629: THAnimSiteNode;
Viewpoint630: TViewpointNode;
HAnimSite631: THAnimSiteNode;
Viewpoint632: TViewpointNode;
HAnimSite633: THAnimSiteNode;
Viewpoint634: TViewpointNode;
HAnimSite635: THAnimSiteNode;
Viewpoint636: TViewpointNode;
HAnimSite637: THAnimSiteNode;
HAnimSite638: THAnimSiteNode;
HAnimSite639: THAnimSiteNode;
HAnimSite640: THAnimSiteNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'HAnimSpecificationLOA3Invisible.x3d';
X3D0.Meta['description'] := 'HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.';
X3D0.Meta['reference'] := 'https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds';
X3D0.Meta['reference'] := 'HAnimSpecificationLOA3Illustrated.x3d';
X3D0.Meta['reference'] := 'HAnimSpecificationLOA3Animation.x3d';
X3D0.Meta['reference'] := 'HAnimSpecificationExampleChangeLog.txt';
X3D0.Meta['reference'] := 'Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.';
X3D0.Meta['reference'] := 'http://www.cis.upenn.edu/~badler/anthro/89-71.ps';
X3D0.Meta['reference'] := 'tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf';
X3D0.Meta['reference'] := 'originals/LOA3ExampleSourceWithDiamondsOriginal.wrl';
X3D0.Meta['reference'] := 'originals/LOA3ExampleSourceWithDiamondsOriginal.x3d';
X3D0.Meta['reference'] := 'originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d';
X3D0.Meta['reference'] := 'HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames';
X3D0.Meta['created'] := '24 April 2013';
X3D0.Meta['modified'] := 'Tue, 09 Sep 2025 19:39:08 GMT';
X3D0.Meta['error'] := 'Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported';
X3D0.Meta['creator'] := 'Matthew T. Beitler, Joe D. Williams, Don Brutzman';
X3D0.Meta['Image'] := 'images/BonesAllSkeletonFrontViewLOA1.png';
X3D0.Meta['Image'] := 'images/BonesAllSkeletonFrontViewLOA2.png';
X3D0.Meta['Image'] := 'images/BonesAllSkeletonFrontViewLOA3.png';
X3D0.Meta['TODO'] := 'move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations';
X3D0.Meta['TODO'] := 'insert MetadataInteger nodes indicating LOA for each Joint and Segment';
X3D0.Meta['translator'] := 'Don Brutzman and Joe Williams';
X3D0.Meta['generator'] := 'BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit';
Group28 := TGroupNode.Create;
Background29 := TBackgroundNode.Create;
Background29.SetSkyColor([Vector3(0.3,0.3,0.3)]);
{ .AddChildren }
Group28.AddChildren([Background29]);
NavigationInfo30 := TNavigationInfoNode.Create;
{ .AddChildren }
Group28.AddChildren([NavigationInfo30]);
Group31 := TGroupNode.Create;
WorldInfo32 := TWorldInfoNode.Create;
WorldInfo32.Title := 'HANIM 200x Default Joint Centers, LOA3';
WorldInfo32.SetInfo([' HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ']);
{ .AddChildren }
Group31.AddChildren([WorldInfo32]);
{ .AddChildren }
Group28.AddChildren([Group31]);
Viewpoint33 := TViewpointNode.Create;
Viewpoint33.Description := 'Humanoid LOA 3 Front';
Viewpoint33.Position := Vector3(0,0.4,4);
Viewpoint33.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group28.AddChildren([Viewpoint33]);
Viewpoint34 := TViewpointNode.Create;
Viewpoint34.Description := 'Humanoid LOA 3 Front Close';
Viewpoint34.Position := Vector3(0,0.8,2);
Viewpoint34.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group28.AddChildren([Viewpoint34]);
Viewpoint35 := TViewpointNode.Create;
Viewpoint35.Description := 'Humanoid LOA 3 Front Closer';
Viewpoint35.Position := Vector3(0,1.2,1);
Viewpoint35.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group28.AddChildren([Viewpoint35]);
Viewpoint36 := TViewpointNode.Create;
Viewpoint36.Description := 'Humanoid LOA 3 Front Face';
Viewpoint36.Position := Vector3(0,1.63,1);
Viewpoint36.CenterOfRotation := Vector3(0,1.5,0.0016);
{ .AddChildren }
Group28.AddChildren([Viewpoint36]);
Viewpoint37 := TViewpointNode.Create;
Viewpoint37.Description := 'Humanoid LOA 3 Right Side';
Viewpoint37.Position := Vector3(2.6,0.8,0);
Viewpoint37.Orientation := Vector4(0,1,0,1.5708);
Viewpoint37.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group28.AddChildren([Viewpoint37]);
Viewpoint38 := TViewpointNode.Create;
Viewpoint38.Description := 'Humanoid LOA 3 Right Side Close';
Viewpoint38.Position := Vector3(1,0.8,0.5);
Viewpoint38.Orientation := Vector4(0,1,0,1.2);
Viewpoint38.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group28.AddChildren([Viewpoint38]);
Viewpoint39 := TViewpointNode.Create;
Viewpoint39.Description := 'Humanoid LOA 3 Left Side Close';
Viewpoint39.Position := Vector3(-1,0.8,0.5);
Viewpoint39.Orientation := Vector4(0,1,0,-1.2);
Viewpoint39.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group28.AddChildren([Viewpoint39]);
Viewpoint40 := TViewpointNode.Create;
Viewpoint40.Description := 'Humanoid LOA 3 Left Side';
Viewpoint40.Position := Vector3(-2.6,0.8,0);
Viewpoint40.Orientation := Vector4(0,1,0,-1.5708);
Viewpoint40.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group28.AddChildren([Viewpoint40]);
Viewpoint41 := TViewpointNode.Create;
Viewpoint41.Description := 'Humanoid LOA 3 Top';
Viewpoint41.Position := Vector3(0,3.5,0);
Viewpoint41.Orientation := Vector4(1,0,0,-1.5708);
Viewpoint41.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group28.AddChildren([Viewpoint41]);
HAnimHumanoid42 := THAnimHumanoidNode.Create;
HAnimHumanoid42.NameField := 'humanoid';
HAnimHumanoid42.SetInfo(['authorName=Matthew T. Beitler Joe D. Williams Don Brutzman','authorEmail=HAnim@web3D.org','copyright=none','creationDate=12 May 1999','usageRestrictions=none','humanoidVersion=2.0','height=1.7504']);
HAnimHumanoid42.Version := '1.0';
HAnimJoint43 := THAnimJointNode.Create;
HAnimJoint43.NameField := 'humanoid_root';
HAnimJoint43.Center := Vector3(0,0.824,0.0277);
HAnimSegment44 := THAnimSegmentNode.Create;
HAnimSegment44.NameField := 'sacrum';
{ .AddChildren }
HAnimJoint43.AddChildren([HAnimSegment44]);
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45.NameField := 'sacroiliac';
HAnimJoint45.Center := Vector3(0,0.9149,0.0016);
HAnimSegment46 := THAnimSegmentNode.Create;
HAnimSegment46.NameField := 'pelvis';
HAnimSite47 := THAnimSiteNode.Create;
HAnimSite47.NameField := 'r_iliocristale_pt';
HAnimSite47.Translation := Vector3(-0.1525,1.0628,0.0035);
{ .AddChildren }
HAnimSegment46.AddChildren([HAnimSite47]);
HAnimSite48 := THAnimSiteNode.Create;
HAnimSite48.NameField := 'r_trochanterion_pt';
HAnimSite48.Translation := Vector3(-0.1689,0.8419,0.0352);
{ .AddChildren }
HAnimSegment46.AddChildren([HAnimSite48]);
HAnimSite49 := THAnimSiteNode.Create;
HAnimSite49.NameField := 'l_iliocristale_pt';
HAnimSite49.Translation := Vector3(0.1612,1.0537,0.0008);
{ .AddChildren }
HAnimSegment46.AddChildren([HAnimSite49]);
HAnimSite50 := THAnimSiteNode.Create;
HAnimSite50.NameField := 'l_trochanterion_pt';
HAnimSite50.Translation := Vector3(0.1677,0.8336,0.0303);
{ .AddChildren }
HAnimSegment46.AddChildren([HAnimSite50]);
HAnimSite51 := THAnimSiteNode.Create;
HAnimSite51.NameField := 'r_asis_pt';
HAnimSite51.Translation := Vector3(-0.0887,1.0021,0.1112);
{ .AddChildren }
HAnimSegment46.AddChildren([HAnimSite51]);
HAnimSite52 := THAnimSiteNode.Create;
HAnimSite52.NameField := 'l_asis_pt';
HAnimSite52.Translation := Vector3(0.0925,0.9983,0.1052);
{ .AddChildren }
HAnimSegment46.AddChildren([HAnimSite52]);
HAnimSite53 := THAnimSiteNode.Create;
HAnimSite53.NameField := 'r_psis_pt';
HAnimSite53.Translation := Vector3(-0.0716,1.019,-0.1138);
{ .AddChildren }
HAnimSegment46.AddChildren([HAnimSite53]);
HAnimSite54 := THAnimSiteNode.Create;
HAnimSite54.NameField := 'l_psis_pt';
HAnimSite54.Translation := Vector3(0.0774,1.019,-0.1151);
{ .AddChildren }
HAnimSegment46.AddChildren([HAnimSite54]);
HAnimSite55 := THAnimSiteNode.Create;
HAnimSite55.NameField := 'crotch_pt';
HAnimSite55.Translation := Vector3(0.0034,0.8266,0.0257);
{ .AddChildren }
HAnimSegment46.AddChildren([HAnimSite55]);
{ .AddChildren }
HAnimJoint45.AddChildren([HAnimSegment46]);
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.NameField := 'l_hip';
HAnimJoint56.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimSegment57 := THAnimSegmentNode.Create;
HAnimSegment57.NameField := 'l_thigh';
HAnimSite58 := THAnimSiteNode.Create;
HAnimSite58.NameField := 'l_knee_crease_pt';
HAnimSite58.Translation := Vector3(0.0993,0.4881,-0.0309);
{ .AddChildren }
HAnimSegment57.AddChildren([HAnimSite58]);
HAnimSite59 := THAnimSiteNode.Create;
HAnimSite59.NameField := 'l_femoral_lateral_epicn_pt';
HAnimSite59.Translation := Vector3(0.1598,0.4967,0.0297);
{ .AddChildren }
HAnimSegment57.AddChildren([HAnimSite59]);
HAnimSite60 := THAnimSiteNode.Create;
HAnimSite60.NameField := 'l_femoral_medial_epicn_pt';
HAnimSite60.Translation := Vector3(0.0398,0.4946,0.0303);
{ .AddChildren }
HAnimSegment57.AddChildren([HAnimSite60]);
{ .AddChildren }
HAnimJoint56.AddChildren([HAnimSegment57]);
HAnimJoint61 := THAnimJointNode.Create;
HAnimJoint61.NameField := 'l_knee';
HAnimJoint61.Center := Vector3(0.104,0.4867,0.0308);
HAnimSegment62 := THAnimSegmentNode.Create;
HAnimSegment62.NameField := 'l_calf';
{ .AddChildren }
HAnimJoint61.AddChildren([HAnimSegment62]);
HAnimJoint63 := THAnimJointNode.Create;
HAnimJoint63.NameField := 'l_ankle';
HAnimJoint63.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimSegment64 := THAnimSegmentNode.Create;
HAnimSegment64.NameField := 'l_hindfoot';
HAnimSite65 := THAnimSiteNode.Create;
HAnimSite65.NameField := 'l_lateral_malleolus_pt';
HAnimSite65.Translation := Vector3(0.1308,0.0597,-0.1032);
{ .AddChildren }
HAnimSegment64.AddChildren([HAnimSite65]);
HAnimSite66 := THAnimSiteNode.Create;
HAnimSite66.NameField := 'l_medial_malleolus_pt';
HAnimSite66.Translation := Vector3(0.089,0.0716,-0.0881);
{ .AddChildren }
HAnimSegment64.AddChildren([HAnimSite66]);
HAnimSite67 := THAnimSiteNode.Create;
HAnimSite67.NameField := 'l_sphyrion_pt';
HAnimSite67.Translation := Vector3(0.089,0.0575,-0.0943);
{ .AddChildren }
HAnimSegment64.AddChildren([HAnimSite67]);
HAnimSite68 := THAnimSiteNode.Create;
HAnimSite68.NameField := 'l_calcaneous_post_pt';
HAnimSite68.Translation := Vector3(0.0974,0.0259,-0.1171);
{ .AddChildren }
HAnimSegment64.AddChildren([HAnimSite68]);
{ .AddChildren }
HAnimJoint63.AddChildren([HAnimSegment64]);
HAnimJoint69 := THAnimJointNode.Create;
HAnimJoint69.NameField := 'l_subtalar';
HAnimJoint69.Center := Vector3(0.1086,0.0001,-0.0368);
HAnimSegment70 := THAnimSegmentNode.Create;
HAnimSegment70.NameField := 'l_midproximal';
{ .AddChildren }
HAnimJoint69.AddChildren([HAnimSegment70]);
HAnimJoint71 := THAnimJointNode.Create;
HAnimJoint71.NameField := 'l_midtarsal';
HAnimJoint71.Center := Vector3(0.1086,0.0001,0.0368);
HAnimSegment72 := THAnimSegmentNode.Create;
HAnimSegment72.NameField := 'l_middistal';
HAnimSite73 := THAnimSiteNode.Create;
HAnimSite73.NameField := 'l_metatarsal_pha1_pt';
HAnimSite73.Translation := Vector3(0.0816,0.0232,0.0106);
{ .AddChildren }
HAnimSegment72.AddChildren([HAnimSite73]);
{ .AddChildren }
HAnimJoint71.AddChildren([HAnimSegment72]);
HAnimJoint74 := THAnimJointNode.Create;
HAnimJoint74.NameField := 'l_metatarsal';
HAnimJoint74.Center := Vector3(0.1086,0,0.0762);
HAnimSegment75 := THAnimSegmentNode.Create;
HAnimSegment75.NameField := 'l_forefoot';
HAnimSite76 := THAnimSiteNode.Create;
HAnimSite76.NameField := 'l_forefoot_tip';
HAnimSite76.Translation := Vector3(0.1354,0.0016,0.1476);
{ .AddChildren }
HAnimSegment75.AddChildren([HAnimSite76]);
HAnimSite77 := THAnimSiteNode.Create;
HAnimSite77.NameField := 'l_metatarsal_pha5_pt';
HAnimSite77.Translation := Vector3(0.1825,0.007,0.0928);
{ .AddChildren }
HAnimSegment75.AddChildren([HAnimSite77]);
HAnimSite78 := THAnimSiteNode.Create;
HAnimSite78.NameField := 'l_digit2_pt';
HAnimSite78.Translation := Vector3(0.1195,0.0079,0.1433);
{ .AddChildren }
HAnimSegment75.AddChildren([HAnimSite78]);
{ .AddChildren }
HAnimJoint74.AddChildren([HAnimSegment75]);
{ .AddChildren }
HAnimJoint71.AddChildren([HAnimJoint74]);
{ .AddChildren }
HAnimJoint69.AddChildren([HAnimJoint71]);
{ .AddChildren }
HAnimJoint63.AddChildren([HAnimJoint69]);
{ .AddChildren }
HAnimJoint61.AddChildren([HAnimJoint63]);
{ .AddChildren }
HAnimJoint56.AddChildren([HAnimJoint61]);
{ .AddChildren }
HAnimJoint45.AddChildren([HAnimJoint56]);
HAnimJoint79 := THAnimJointNode.Create;
HAnimJoint79.NameField := 'r_hip';
HAnimJoint79.Center := Vector3(-0.0961,0.9124,-0.0001);
HAnimSegment80 := THAnimSegmentNode.Create;
HAnimSegment80.NameField := 'r_thigh';
HAnimSite81 := THAnimSiteNode.Create;
HAnimSite81.NameField := 'r_knee_crease_pt';
HAnimSite81.Translation := Vector3(-0.0825,0.4932,-0.0326);
{ .AddChildren }
HAnimSegment80.AddChildren([HAnimSite81]);
HAnimSite82 := THAnimSiteNode.Create;
HAnimSite82.NameField := 'r_femoral_lateral_epicn_pt';
HAnimSite82.Translation := Vector3(-0.1421,0.4992,0.031);
{ .AddChildren }
HAnimSegment80.AddChildren([HAnimSite82]);
HAnimSite83 := THAnimSiteNode.Create;
HAnimSite83.NameField := 'r_femoral_medial_epicn_pt';
HAnimSite83.Translation := Vector3(-0.0221,0.5014,0.0289);
{ .AddChildren }
HAnimSegment80.AddChildren([HAnimSite83]);
{ .AddChildren }
HAnimJoint79.AddChildren([HAnimSegment80]);
HAnimJoint84 := THAnimJointNode.Create;
HAnimJoint84.NameField := 'r_knee';
HAnimJoint84.Center := Vector3(-0.104,0.4867,0.0308);
HAnimSegment85 := THAnimSegmentNode.Create;
HAnimSegment85.NameField := 'r_calf';
{ .AddChildren }
HAnimJoint84.AddChildren([HAnimSegment85]);
HAnimJoint86 := THAnimJointNode.Create;
HAnimJoint86.NameField := 'r_ankle';
HAnimJoint86.Center := Vector3(-0.1101,0.0656,-0.0736);
HAnimSegment87 := THAnimSegmentNode.Create;
HAnimSegment87.NameField := 'r_hindfoot';
HAnimSite88 := THAnimSiteNode.Create;
HAnimSite88.NameField := 'r_lateral_malleolus_pt';
HAnimSite88.Translation := Vector3(-0.1006,0.0658,-0.1075);
{ .AddChildren }
HAnimSegment87.AddChildren([HAnimSite88]);
HAnimSite89 := THAnimSiteNode.Create;
HAnimSite89.NameField := 'r_medial_malleolus_pt';
HAnimSite89.Translation := Vector3(-0.0591,0.076,-0.0928);
{ .AddChildren }
HAnimSegment87.AddChildren([HAnimSite89]);
HAnimSite90 := THAnimSiteNode.Create;
HAnimSite90.NameField := 'r_sphyrion_pt';
HAnimSite90.Translation := Vector3(-0.0603,0.061,-0.1002);
{ .AddChildren }
HAnimSegment87.AddChildren([HAnimSite90]);
HAnimSite91 := THAnimSiteNode.Create;
HAnimSite91.NameField := 'r_calcaneous_post_pt';
HAnimSite91.Translation := Vector3(-0.0692,0.0297,-0.1221);
{ .AddChildren }
HAnimSegment87.AddChildren([HAnimSite91]);
{ .AddChildren }
HAnimJoint86.AddChildren([HAnimSegment87]);
HAnimJoint92 := THAnimJointNode.Create;
HAnimJoint92.NameField := 'r_subtalar';
HAnimJoint92.Center := Vector3(-0.1086,0.0001,-0.0368);
HAnimSegment93 := THAnimSegmentNode.Create;
HAnimSegment93.NameField := 'r_midproximal';
{ .AddChildren }
HAnimJoint92.AddChildren([HAnimSegment93]);
HAnimJoint94 := THAnimJointNode.Create;
HAnimJoint94.NameField := 'r_midtarsal';
HAnimJoint94.Center := Vector3(-0.1086,0.0001,0.0368);
HAnimSegment95 := THAnimSegmentNode.Create;
HAnimSegment95.NameField := 'r_middistal';
HAnimSite96 := THAnimSiteNode.Create;
HAnimSite96.NameField := 'r_metatarsal_pha1_pt';
HAnimSite96.Translation := Vector3(-0.0521,0.026,0.0127);
{ .AddChildren }
HAnimSegment95.AddChildren([HAnimSite96]);
{ .AddChildren }
HAnimJoint94.AddChildren([HAnimSegment95]);
HAnimJoint97 := THAnimJointNode.Create;
HAnimJoint97.NameField := 'r_metatarsal';
HAnimJoint97.Center := Vector3(-0.1086,0,0.0762);
HAnimSegment98 := THAnimSegmentNode.Create;
HAnimSegment98.NameField := 'r_forefoot';
HAnimSite99 := THAnimSiteNode.Create;
HAnimSite99.NameField := 'r_forefoot_tip';
HAnimSite99.Translation := Vector3(-0.1043,0.0227,0.145);
{ .AddChildren }
HAnimSegment98.AddChildren([HAnimSite99]);
HAnimSite100 := THAnimSiteNode.Create;
HAnimSite100.NameField := 'r_metatarsal_pha5_pt';
HAnimSite100.Translation := Vector3(-0.1523,0.0166,0.0895);
{ .AddChildren }
HAnimSegment98.AddChildren([HAnimSite100]);
HAnimSite101 := THAnimSiteNode.Create;
HAnimSite101.NameField := 'r_digit2_pt';
HAnimSite101.Translation := Vector3(-0.0883,0.0134,0.1383);
{ .AddChildren }
HAnimSegment98.AddChildren([HAnimSite101]);
{ .AddChildren }
HAnimJoint97.AddChildren([HAnimSegment98]);
{ .AddChildren }
HAnimJoint94.AddChildren([HAnimJoint97]);
{ .AddChildren }
HAnimJoint92.AddChildren([HAnimJoint94]);
{ .AddChildren }
HAnimJoint86.AddChildren([HAnimJoint92]);
{ .AddChildren }
HAnimJoint84.AddChildren([HAnimJoint86]);
{ .AddChildren }
HAnimJoint79.AddChildren([HAnimJoint84]);
{ .AddChildren }
HAnimJoint45.AddChildren([HAnimJoint79]);
{ .AddChildren }
HAnimJoint43.AddChildren([HAnimJoint45]);
HAnimJoint102 := THAnimJointNode.Create;
HAnimJoint102.NameField := 'vl5';
HAnimJoint102.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimSegment103 := THAnimSegmentNode.Create;
HAnimSegment103.NameField := 'l5';
HAnimSite104 := THAnimSiteNode.Create;
HAnimSite104.NameField := 'waist_preferred_post_pt';
HAnimSite104.Translation := Vector3(0,1.0915,-0.1091);
{ .AddChildren }
HAnimSegment103.AddChildren([HAnimSite104]);
HAnimSite105 := THAnimSiteNode.Create;
HAnimSite105.NameField := 'navel_pt';
HAnimSite105.Translation := Vector3(0.0069,1.0966,0.1017);
{ .AddChildren }
HAnimSegment103.AddChildren([HAnimSite105]);
{ .AddChildren }
HAnimJoint102.AddChildren([HAnimSegment103]);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.NameField := 'vl4';
HAnimJoint106.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimSegment107 := THAnimSegmentNode.Create;
HAnimSegment107.NameField := 'l4';
{ .AddChildren }
HAnimJoint106.AddChildren([HAnimSegment107]);
HAnimJoint108 := THAnimJointNode.Create;
HAnimJoint108.NameField := 'vl3';
HAnimJoint108.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimSegment109 := THAnimSegmentNode.Create;
HAnimSegment109.NameField := 'l3';
{ .AddChildren }
HAnimJoint108.AddChildren([HAnimSegment109]);
HAnimJoint110 := THAnimJointNode.Create;
HAnimJoint110.NameField := 'vl2';
HAnimJoint110.Center := Vector3(0.0045,1.1546,-0.08);
HAnimSegment111 := THAnimSegmentNode.Create;
HAnimSegment111.NameField := 'l2';
HAnimSite112 := THAnimSiteNode.Create;
HAnimSite112.NameField := 'r_rib10_pt';
HAnimSite112.Translation := Vector3(-0.0711,1.1941,0.1016);
{ .AddChildren }
HAnimSegment111.AddChildren([HAnimSite112]);
HAnimSite113 := THAnimSiteNode.Create;
HAnimSite113.NameField := 'l_rib10_pt';
HAnimSite113.Translation := Vector3(0.0871,1.1925,0.0992);
{ .AddChildren }
HAnimSegment111.AddChildren([HAnimSite113]);
HAnimSite114 := THAnimSiteNode.Create;
HAnimSite114.NameField := 'rib10_midspine_pt';
HAnimSite114.Translation := Vector3(0.0049,1.1908,-0.1113);
{ .AddChildren }
HAnimSegment111.AddChildren([HAnimSite114]);
{ .AddChildren }
HAnimJoint110.AddChildren([HAnimSegment111]);
HAnimJoint115 := THAnimJointNode.Create;
HAnimJoint115.NameField := 'vl1';
HAnimJoint115.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimSegment116 := THAnimSegmentNode.Create;
HAnimSegment116.NameField := 'l1';
{ .AddChildren }
HAnimJoint115.AddChildren([HAnimSegment116]);
HAnimJoint117 := THAnimJointNode.Create;
HAnimJoint117.NameField := 'vt12';
HAnimJoint117.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimSegment118 := THAnimSegmentNode.Create;
HAnimSegment118.NameField := 't12';
{ .AddChildren }
HAnimJoint117.AddChildren([HAnimSegment118]);
HAnimJoint119 := THAnimJointNode.Create;
HAnimJoint119.NameField := 'vt11';
HAnimJoint119.Center := Vector3(0.0053,1.2679,-0.081);
HAnimSegment120 := THAnimSegmentNode.Create;
HAnimSegment120.NameField := 't11';
{ .AddChildren }
HAnimJoint119.AddChildren([HAnimSegment120]);
HAnimJoint121 := THAnimJointNode.Create;
HAnimJoint121.NameField := 'vt10';
HAnimJoint121.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimSegment122 := THAnimSegmentNode.Create;
HAnimSegment122.NameField := 't10';
HAnimSite123 := THAnimSiteNode.Create;
HAnimSite123.NameField := 'substernale_pt';
HAnimSite123.Translation := Vector3(0.0085,1.2995,0.1147);
{ .AddChildren }
HAnimSegment122.AddChildren([HAnimSite123]);
{ .AddChildren }
HAnimJoint121.AddChildren([HAnimSegment122]);
HAnimJoint124 := THAnimJointNode.Create;
HAnimJoint124.NameField := 'vt9';
HAnimJoint124.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimSegment125 := THAnimSegmentNode.Create;
HAnimSegment125.NameField := 't9';
HAnimSite126 := THAnimSiteNode.Create;
HAnimSite126.NameField := 'r_thelion_pt';
HAnimSite126.Translation := Vector3(-0.0736,1.3385,0.1217);
{ .AddChildren }
HAnimSegment125.AddChildren([HAnimSite126]);
HAnimSite127 := THAnimSiteNode.Create;
HAnimSite127.NameField := 'l_thelion_pt';
HAnimSite127.Translation := Vector3(0.0918,1.3382,0.1192);
{ .AddChildren }
HAnimSegment125.AddChildren([HAnimSite127]);
{ .AddChildren }
HAnimJoint124.AddChildren([HAnimSegment125]);
HAnimJoint128 := THAnimJointNode.Create;
HAnimJoint128.NameField := 'vt8';
HAnimJoint128.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimSegment129 := THAnimSegmentNode.Create;
HAnimSegment129.NameField := 't8';
{ .AddChildren }
HAnimJoint128.AddChildren([HAnimSegment129]);
HAnimJoint130 := THAnimJointNode.Create;
HAnimJoint130.NameField := 'vt7';
HAnimJoint130.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimSegment131 := THAnimSegmentNode.Create;
HAnimSegment131.NameField := 't7';
{ .AddChildren }
HAnimJoint130.AddChildren([HAnimSegment131]);
HAnimJoint132 := THAnimJointNode.Create;
HAnimJoint132.NameField := 'vt6';
HAnimJoint132.Center := Vector3(0.0059,1.3866,-0.08);
HAnimSegment133 := THAnimSegmentNode.Create;
HAnimSegment133.NameField := 't6';
{ .AddChildren }
HAnimJoint132.AddChildren([HAnimSegment133]);
HAnimJoint134 := THAnimJointNode.Create;
HAnimJoint134.NameField := 'vt5';
HAnimJoint134.Center := Vector3(0.006,1.4102,-0.0745);
HAnimSegment135 := THAnimSegmentNode.Create;
HAnimSegment135.NameField := 't5';
{ .AddChildren }
HAnimJoint134.AddChildren([HAnimSegment135]);
HAnimJoint136 := THAnimJointNode.Create;
HAnimJoint136.NameField := 'vt4';
HAnimJoint136.Center := Vector3(0.0061,1.432,-0.0675);
HAnimSegment137 := THAnimSegmentNode.Create;
HAnimSegment137.NameField := 't4';
{ .AddChildren }
HAnimJoint136.AddChildren([HAnimSegment137]);
HAnimJoint138 := THAnimJointNode.Create;
HAnimJoint138.NameField := 'vt3';
HAnimJoint138.Center := Vector3(0.0062,1.4583,-0.057);
HAnimSegment139 := THAnimSegmentNode.Create;
HAnimSegment139.NameField := 't3';
{ .AddChildren }
HAnimJoint138.AddChildren([HAnimSegment139]);
HAnimJoint140 := THAnimJointNode.Create;
HAnimJoint140.NameField := 'vt2';
HAnimJoint140.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimSegment141 := THAnimSegmentNode.Create;
HAnimSegment141.NameField := 't2';
{ .AddChildren }
HAnimJoint140.AddChildren([HAnimSegment141]);
HAnimJoint142 := THAnimJointNode.Create;
HAnimJoint142.NameField := 'vt1';
HAnimJoint142.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimSegment143 := THAnimSegmentNode.Create;
HAnimSegment143.NameField := 't1';
HAnimSite144 := THAnimSiteNode.Create;
HAnimSite144.NameField := 'suprasternale_pt';
HAnimSite144.Translation := Vector3(0.0084,1.4714,0.0551);
{ .AddChildren }
HAnimSegment143.AddChildren([HAnimSite144]);
HAnimSite145 := THAnimSiteNode.Create;
HAnimSite145.NameField := 'cervicale_pt';
HAnimSite145.Translation := Vector3(0.0064,1.52,-0.0815);
{ .AddChildren }
HAnimSegment143.AddChildren([HAnimSite145]);
{ .AddChildren }
HAnimJoint142.AddChildren([HAnimSegment143]);
HAnimJoint146 := THAnimJointNode.Create;
HAnimJoint146.NameField := 'vc7';
HAnimJoint146.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimSegment147 := THAnimSegmentNode.Create;
HAnimSegment147.NameField := 'c7';
HAnimSite148 := THAnimSiteNode.Create;
HAnimSite148.NameField := 'r_neck_base_pt';
HAnimSite148.Translation := Vector3(-0.0419,1.5149,-0.022);
{ .AddChildren }
HAnimSegment147.AddChildren([HAnimSite148]);
HAnimSite149 := THAnimSiteNode.Create;
HAnimSite149.NameField := 'l_neck_base_pt';
HAnimSite149.Translation := Vector3(0.0646,1.5141,-0.038);
{ .AddChildren }
HAnimSegment147.AddChildren([HAnimSite149]);
{ .AddChildren }
HAnimJoint146.AddChildren([HAnimSegment147]);
HAnimJoint150 := THAnimJointNode.Create;
HAnimJoint150.NameField := 'vc6';
HAnimJoint150.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimSegment151 := THAnimSegmentNode.Create;
HAnimSegment151.NameField := 'c6';
{ .AddChildren }
HAnimJoint150.AddChildren([HAnimSegment151]);
HAnimJoint152 := THAnimJointNode.Create;
HAnimJoint152.NameField := 'vc5';
HAnimJoint152.Center := Vector3(0.0066,1.552,-0.0082);
HAnimSegment153 := THAnimSegmentNode.Create;
HAnimSegment153.NameField := 'c5';
{ .AddChildren }
HAnimJoint152.AddChildren([HAnimSegment153]);
HAnimJoint154 := THAnimJointNode.Create;
HAnimJoint154.NameField := 'vc4';
HAnimJoint154.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimSegment155 := THAnimSegmentNode.Create;
HAnimSegment155.NameField := 'c4';
{ .AddChildren }
HAnimJoint154.AddChildren([HAnimSegment155]);
HAnimJoint156 := THAnimJointNode.Create;
HAnimJoint156.NameField := 'vc3';
HAnimJoint156.Center := Vector3(0.0066,1.58,-0.0103);
HAnimSegment157 := THAnimSegmentNode.Create;
HAnimSegment157.NameField := 'c3';
{ .AddChildren }
HAnimJoint156.AddChildren([HAnimSegment157]);
HAnimJoint158 := THAnimJointNode.Create;
HAnimJoint158.NameField := 'vc2';
HAnimJoint158.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimSegment159 := THAnimSegmentNode.Create;
HAnimSegment159.NameField := 'c2';
{ .AddChildren }
HAnimJoint158.AddChildren([HAnimSegment159]);
HAnimJoint160 := THAnimJointNode.Create;
HAnimJoint160.NameField := 'vc1';
HAnimJoint160.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimSegment161 := THAnimSegmentNode.Create;
HAnimSegment161.NameField := 'c1';
{ .AddChildren }
HAnimJoint160.AddChildren([HAnimSegment161]);
HAnimJoint162 := THAnimJointNode.Create;
HAnimJoint162.NameField := 'skullbase';
HAnimJoint162.Center := Vector3(0.0044,1.6209,0.0236);
HAnimSegment163 := THAnimSegmentNode.Create;
HAnimSegment163.NameField := 'skull';
HAnimSite164 := THAnimSiteNode.Create;
HAnimSite164.NameField := 'skull_tip';
HAnimSite164.Translation := Vector3(0.005,1.7504,0.0055);
{ .AddChildren }
HAnimSegment163.AddChildren([HAnimSite164]);
HAnimSite165 := THAnimSiteNode.Create;
HAnimSite165.NameField := 'sellion_pt';
HAnimSite165.Translation := Vector3(0.0058,1.6316,0.0852);
{ .AddChildren }
HAnimSegment163.AddChildren([HAnimSite165]);
HAnimSite166 := THAnimSiteNode.Create;
HAnimSite166.NameField := 'r_infraorbitale_pt';
HAnimSite166.Translation := Vector3(-0.0237,1.6171,0.0752);
{ .AddChildren }
HAnimSegment163.AddChildren([HAnimSite166]);
HAnimSite167 := THAnimSiteNode.Create;
HAnimSite167.NameField := 'l_infraorbitale_pt';
HAnimSite167.Translation := Vector3(0.0341,1.6171,0.0752);
{ .AddChildren }
HAnimSegment163.AddChildren([HAnimSite167]);
HAnimSite168 := THAnimSiteNode.Create;
HAnimSite168.NameField := 'supramenton_pt';
HAnimSite168.Translation := Vector3(0.0061,1.541,0.0805);
{ .AddChildren }
HAnimSegment163.AddChildren([HAnimSite168]);
HAnimSite169 := THAnimSiteNode.Create;
HAnimSite169.NameField := 'r_tragion_pt';
HAnimSite169.Translation := Vector3(-0.0646,1.6347,0.0302);
{ .AddChildren }
HAnimSegment163.AddChildren([HAnimSite169]);
HAnimSite170 := THAnimSiteNode.Create;
HAnimSite170.NameField := 'r_gonion_pt';
HAnimSite170.Translation := Vector3(-0.052,1.5529,0.0347);
{ .AddChildren }
HAnimSegment163.AddChildren([HAnimSite170]);
HAnimSite171 := THAnimSiteNode.Create;
HAnimSite171.NameField := 'l_tragion_pt';
HAnimSite171.Translation := Vector3(0.0739,1.6348,0.0282);
{ .AddChildren }
HAnimSegment163.AddChildren([HAnimSite171]);
HAnimSite172 := THAnimSiteNode.Create;
HAnimSite172.NameField := 'l_gonion_pt';
HAnimSite172.Translation := Vector3(0.0631,1.553,0.033);
{ .AddChildren }
HAnimSegment163.AddChildren([HAnimSite172]);
HAnimSite173 := THAnimSiteNode.Create;
HAnimSite173.NameField := 'nuchale_pt';
HAnimSite173.Translation := Vector3(0.0039,1.5972,-0.0796);
{ .AddChildren }
HAnimSegment163.AddChildren([HAnimSite173]);
{ .AddChildren }
HAnimJoint162.AddChildren([HAnimSegment163]);
HAnimJoint174 := THAnimJointNode.Create;
HAnimJoint174.NameField := 'l_eyeball_joint';
HAnimJoint174.Center := Vector3(0.0336,1.6332,0.0502);
HAnimSegment175 := THAnimSegmentNode.Create;
HAnimSegment175.NameField := 'l_eyeball';
HAnimSite176 := THAnimSiteNode.Create;
HAnimSite176.NameField := 'l_eyeball_site_view';
HAnimSite176.Translation := Vector3(0.034,1.64,0.05);
Viewpoint177 := TViewpointNode.Create;
Viewpoint177.Description := 'l_eyeball_site_viewpoint looking forward';
Viewpoint177.Position := Vector3(0,0,0);
Viewpoint177.Orientation := Vector4(0,1,0,3.141593);
{ .AddChildren }
HAnimSite176.AddChildren([Viewpoint177]);
{ .AddChildren }
HAnimSegment175.AddChildren([HAnimSite176]);
{ .AddChildren }
HAnimJoint174.AddChildren([HAnimSegment175]);
{ .AddChildren }
HAnimJoint162.AddChildren([HAnimJoint174]);
HAnimJoint178 := THAnimJointNode.Create;
HAnimJoint178.NameField := 'l_eyelid_joint';
HAnimJoint178.Center := Vector3(0.0336,1.6332,0.0502);
HAnimSegment179 := THAnimSegmentNode.Create;
HAnimSegment179.NameField := 'l_eyelid';
{ .AddChildren }
HAnimJoint178.AddChildren([HAnimSegment179]);
{ .AddChildren }
HAnimJoint162.AddChildren([HAnimJoint178]);
HAnimJoint180 := THAnimJointNode.Create;
HAnimJoint180.NameField := 'l_eyebrow_joint';
HAnimJoint180.Center := Vector3(0.0336,1.635,0.0506);
HAnimSegment181 := THAnimSegmentNode.Create;
HAnimSegment181.NameField := 'l_eyebrow';
{ .AddChildren }
HAnimJoint180.AddChildren([HAnimSegment181]);
{ .AddChildren }
HAnimJoint162.AddChildren([HAnimJoint180]);
HAnimJoint182 := THAnimJointNode.Create;
HAnimJoint182.NameField := 'r_eyeball_joint';
HAnimJoint182.Center := Vector3(-0.0336,1.6332,0.0502);
HAnimSegment183 := THAnimSegmentNode.Create;
HAnimSegment183.NameField := 'r_eyeball';
HAnimSite184 := THAnimSiteNode.Create;
HAnimSite184.NameField := 'r_eyeball_site_view';
HAnimSite184.Translation := Vector3(-0.034,1.64,0.05);
Viewpoint185 := TViewpointNode.Create;
Viewpoint185.Description := 'r_eyeball_site_viewpoint looking forward';
Viewpoint185.Position := Vector3(0,0,0);
Viewpoint185.Orientation := Vector4(0,1,0,3.141593);
{ .AddChildren }
HAnimSite184.AddChildren([Viewpoint185]);
{ .AddChildren }
HAnimSegment183.AddChildren([HAnimSite184]);
{ .AddChildren }
HAnimJoint182.AddChildren([HAnimSegment183]);
{ .AddChildren }
HAnimJoint162.AddChildren([HAnimJoint182]);
HAnimJoint186 := THAnimJointNode.Create;
HAnimJoint186.NameField := 'r_eyelid_joint';
HAnimJoint186.Center := Vector3(-0.0336,1.6332,0.0502);
HAnimSegment187 := THAnimSegmentNode.Create;
HAnimSegment187.NameField := 'r_eyelid';
{ .AddChildren }
HAnimJoint186.AddChildren([HAnimSegment187]);
{ .AddChildren }
HAnimJoint162.AddChildren([HAnimJoint186]);
HAnimJoint188 := THAnimJointNode.Create;
HAnimJoint188.NameField := 'r_eyebrow_joint';
HAnimJoint188.Center := Vector3(-0.0336,1.635,0.0506);
HAnimSegment189 := THAnimSegmentNode.Create;
HAnimSegment189.NameField := 'r_eyebrow';
{ .AddChildren }
HAnimJoint188.AddChildren([HAnimSegment189]);
{ .AddChildren }
HAnimJoint162.AddChildren([HAnimJoint188]);
HAnimJoint190 := THAnimJointNode.Create;
HAnimJoint190.NameField := 'temporomandibular';
HAnimJoint190.Center := Vector3(0,1.63,0.015);
HAnimSegment191 := THAnimSegmentNode.Create;
HAnimSegment191.NameField := 'jaw';
HAnimSite192 := THAnimSiteNode.Create;
HAnimSite192.NameField := 'temporomandibular_l_site_pt';
HAnimSite192.Translation := Vector3(0.045,1.63,0);
{ .AddChildren }
HAnimSegment191.AddChildren([HAnimSite192]);
HAnimSite193 := THAnimSiteNode.Create;
HAnimSite193.NameField := 'temporomandibular_r_site_pt';
HAnimSite193.Translation := Vector3(-0.045,1.63,0);
{ .AddChildren }
HAnimSegment191.AddChildren([HAnimSite193]);
{ .AddChildren }
HAnimJoint190.AddChildren([HAnimSegment191]);
{ .AddChildren }
HAnimJoint162.AddChildren([HAnimJoint190]);
{ .AddChildren }
HAnimJoint160.AddChildren([HAnimJoint162]);
{ .AddChildren }
HAnimJoint158.AddChildren([HAnimJoint160]);
{ .AddChildren }
HAnimJoint156.AddChildren([HAnimJoint158]);
{ .AddChildren }
HAnimJoint154.AddChildren([HAnimJoint156]);
{ .AddChildren }
HAnimJoint152.AddChildren([HAnimJoint154]);
{ .AddChildren }
HAnimJoint150.AddChildren([HAnimJoint152]);
{ .AddChildren }
HAnimJoint146.AddChildren([HAnimJoint150]);
{ .AddChildren }
HAnimJoint142.AddChildren([HAnimJoint146]);
HAnimJoint194 := THAnimJointNode.Create;
HAnimJoint194.NameField := 'l_sternoclavicular';
HAnimJoint194.Center := Vector3(0.082,1.4488,-0.0353);
HAnimSegment195 := THAnimSegmentNode.Create;
HAnimSegment195.NameField := 'l_clavicle';
HAnimSite196 := THAnimSiteNode.Create;
HAnimSite196.NameField := 'l_clavicale_pt';
HAnimSite196.Translation := Vector3(0.0271,1.4943,0.0394);
{ .AddChildren }
HAnimSegment195.AddChildren([HAnimSite196]);
HAnimSite197 := THAnimSiteNode.Create;
HAnimSite197.NameField := 'l_acromion_pt';
HAnimSite197.Translation := Vector3(0.2032,1.476,-0.049);
{ .AddChildren }
HAnimSegment195.AddChildren([HAnimSite197]);
HAnimSite198 := THAnimSiteNode.Create;
HAnimSite198.NameField := 'l_axilla_ant_pt';
HAnimSite198.Translation := Vector3(0.1777,1.4065,-0.0075);
{ .AddChildren }
HAnimSegment195.AddChildren([HAnimSite198]);
HAnimSite199 := THAnimSiteNode.Create;
HAnimSite199.NameField := 'l_axilla_post_pt';
HAnimSite199.Translation := Vector3(0.1706,1.4072,-0.0875);
{ .AddChildren }
HAnimSegment195.AddChildren([HAnimSite199]);
{ .AddChildren }
HAnimJoint194.AddChildren([HAnimSegment195]);
HAnimJoint200 := THAnimJointNode.Create;
HAnimJoint200.NameField := 'l_acromioclavicular';
HAnimJoint200.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimSegment201 := THAnimSegmentNode.Create;
HAnimSegment201.NameField := 'l_scapula';
{ .AddChildren }
HAnimJoint200.AddChildren([HAnimSegment201]);
HAnimJoint202 := THAnimJointNode.Create;
HAnimJoint202.NameField := 'l_shoulder';
HAnimJoint202.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimSegment203 := THAnimSegmentNode.Create;
HAnimSegment203.NameField := 'l_upperarm';
HAnimSite204 := THAnimSiteNode.Create;
HAnimSite204.NameField := 'l_humeral_lateral_epicn_pt';
HAnimSite204.Translation := Vector3(0.228,1.1482,-0.11);
{ .AddChildren }
HAnimSegment203.AddChildren([HAnimSite204]);
{ .AddChildren }
HAnimJoint202.AddChildren([HAnimSegment203]);
HAnimJoint205 := THAnimJointNode.Create;
HAnimJoint205.NameField := 'l_elbow';
HAnimJoint205.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimSegment206 := THAnimSegmentNode.Create;
HAnimSegment206.NameField := 'l_forearm';
HAnimSite207 := THAnimSiteNode.Create;
HAnimSite207.NameField := 'l_radial_styloid_pt';
HAnimSite207.Translation := Vector3(0.1901,0.8645,-0.0415);
{ .AddChildren }
HAnimSegment206.AddChildren([HAnimSite207]);
HAnimSite208 := THAnimSiteNode.Create;
HAnimSite208.NameField := 'l_olecranon_pt';
HAnimSite208.Translation := Vector3(0.1962,1.1375,-0.1123);
{ .AddChildren }
HAnimSegment206.AddChildren([HAnimSite208]);
HAnimSite209 := THAnimSiteNode.Create;
HAnimSite209.NameField := 'l_humeral_medial_epicn_pt';
HAnimSite209.Translation := Vector3(0.1735,1.1272,-0.1113);
{ .AddChildren }
HAnimSegment206.AddChildren([HAnimSite209]);
HAnimSite210 := THAnimSiteNode.Create;
HAnimSite210.NameField := 'l_radiale_pt';
HAnimSite210.Translation := Vector3(0.2182,1.1212,-0.1167);
{ .AddChildren }
HAnimSegment206.AddChildren([HAnimSite210]);
{ .AddChildren }
HAnimJoint205.AddChildren([HAnimSegment206]);
HAnimJoint211 := THAnimJointNode.Create;
HAnimJoint211.NameField := 'l_wrist';
HAnimJoint211.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimSegment212 := THAnimSegmentNode.Create;
HAnimSegment212.NameField := 'l_hand';
HAnimSite213 := THAnimSiteNode.Create;
HAnimSite213.NameField := 'l_metacarpal_pha2_pt';
HAnimSite213.Translation := Vector3(0.2009,0.8139,-0.0237);
{ .AddChildren }
HAnimSegment212.AddChildren([HAnimSite213]);
HAnimSite214 := THAnimSiteNode.Create;
HAnimSite214.NameField := 'l_ulnar_styloid_pt';
HAnimSite214.Translation := Vector3(0.2142,0.8529,-0.0648);
{ .AddChildren }
HAnimSegment212.AddChildren([HAnimSite214]);
HAnimSite215 := THAnimSiteNode.Create;
HAnimSite215.NameField := 'l_metacarpal_pha5_pt';
HAnimSite215.Translation := Vector3(0.1929,0.786,-0.1122);
{ .AddChildren }
HAnimSegment212.AddChildren([HAnimSite215]);
HAnimSite216 := THAnimSiteNode.Create;
HAnimSite216.NameField := 'l_hand_front_view';
HAnimSite216.Translation := Vector3(0.3,0.75,0.45);
Viewpoint217 := TViewpointNode.Create;
Viewpoint217.Description := 'left hand front';
Viewpoint217.Position := Vector3(0,0,0);
Viewpoint217.CenterOfRotation := Vector3(0,0.7,0);
{ .AddChildren }
HAnimSite216.AddChildren([Viewpoint217]);
{ .AddChildren }
HAnimSegment212.AddChildren([HAnimSite216]);
{ .AddChildren }
HAnimJoint211.AddChildren([HAnimSegment212]);
HAnimJoint218 := THAnimJointNode.Create;
HAnimJoint218.NameField := 'l_thumb1';
HAnimJoint218.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimSegment219 := THAnimSegmentNode.Create;
HAnimSegment219.NameField := 'l_thumb_metacarpal';
{ .AddChildren }
HAnimJoint218.AddChildren([HAnimSegment219]);
HAnimJoint220 := THAnimJointNode.Create;
HAnimJoint220.NameField := 'l_thumb2';
HAnimJoint220.Center := Vector3(0.1951,0.8226,0.0246);
HAnimSegment221 := THAnimSegmentNode.Create;
HAnimSegment221.NameField := 'l_thumb_proximal';
{ .AddChildren }
HAnimJoint220.AddChildren([HAnimSegment221]);
HAnimJoint222 := THAnimJointNode.Create;
HAnimJoint222.NameField := 'l_thumb3';
HAnimJoint222.Center := Vector3(0.1955,0.8159,0.0464);
HAnimSegment223 := THAnimSegmentNode.Create;
HAnimSegment223.NameField := 'l_thumb_distal';
HAnimSite224 := THAnimSiteNode.Create;
HAnimSite224.NameField := 'l_thumb_distal_tip';
HAnimSite224.Translation := Vector3(0.1982,0.8061,0.0759);
{ .AddChildren }
HAnimSegment223.AddChildren([HAnimSite224]);
{ .AddChildren }
HAnimJoint222.AddChildren([HAnimSegment223]);
{ .AddChildren }
HAnimJoint220.AddChildren([HAnimJoint222]);
{ .AddChildren }
HAnimJoint218.AddChildren([HAnimJoint220]);
{ .AddChildren }
HAnimJoint211.AddChildren([HAnimJoint218]);
HAnimJoint225 := THAnimJointNode.Create;
HAnimJoint225.NameField := 'l_index0';
HAnimJoint225.Center := Vector3(0.1983,0.8024,-0.028);
HAnimSegment226 := THAnimSegmentNode.Create;
HAnimSegment226.NameField := 'l_index_metacarpal';
{ .AddChildren }
HAnimJoint225.AddChildren([HAnimSegment226]);
HAnimJoint227 := THAnimJointNode.Create;
HAnimJoint227.NameField := 'l_index1';
HAnimJoint227.Center := Vector3(0.1983,0.7815,-0.028);
HAnimSegment228 := THAnimSegmentNode.Create;
HAnimSegment228.NameField := 'l_index_proximal';
{ .AddChildren }
HAnimJoint227.AddChildren([HAnimSegment228]);
HAnimJoint229 := THAnimJointNode.Create;
HAnimJoint229.NameField := 'l_index2';
HAnimJoint229.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimSegment230 := THAnimSegmentNode.Create;
HAnimSegment230.NameField := 'l_index_middle';
{ .AddChildren }
HAnimJoint229.AddChildren([HAnimSegment230]);
HAnimJoint231 := THAnimJointNode.Create;
HAnimJoint231.NameField := 'l_index3';
HAnimJoint231.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimSegment232 := THAnimSegmentNode.Create;
HAnimSegment232.NameField := 'l_index_distal';
HAnimSite233 := THAnimSiteNode.Create;
HAnimSite233.NameField := 'l_index_distal_tip';
HAnimSite233.Translation := Vector3(0.2089,0.6858,-0.0245);
{ .AddChildren }
HAnimSegment232.AddChildren([HAnimSite233]);
HAnimSite234 := THAnimSiteNode.Create;
HAnimSite234.NameField := 'l_dactylion_pt';
HAnimSite234.Translation := Vector3(0.2056,0.6743,-0.0482);
{ .AddChildren }
HAnimSegment232.AddChildren([HAnimSite234]);
{ .AddChildren }
HAnimJoint231.AddChildren([HAnimSegment232]);
{ .AddChildren }
HAnimJoint229.AddChildren([HAnimJoint231]);
{ .AddChildren }
HAnimJoint227.AddChildren([HAnimJoint229]);
{ .AddChildren }
HAnimJoint225.AddChildren([HAnimJoint227]);
{ .AddChildren }
HAnimJoint211.AddChildren([HAnimJoint225]);
HAnimJoint235 := THAnimJointNode.Create;
HAnimJoint235.NameField := 'l_middle0';
HAnimJoint235.Center := Vector3(0.1987,0.8029,-0.053);
HAnimSegment236 := THAnimSegmentNode.Create;
HAnimSegment236.NameField := 'l_middle_metacarpal';
{ .AddChildren }
HAnimJoint235.AddChildren([HAnimSegment236]);
HAnimJoint237 := THAnimJointNode.Create;
HAnimJoint237.NameField := 'l_middle1';
HAnimJoint237.Center := Vector3(0.1987,0.7818,-0.053);
HAnimSegment238 := THAnimSegmentNode.Create;
HAnimSegment238.NameField := 'l_middle_proximal';
{ .AddChildren }
HAnimJoint237.AddChildren([HAnimSegment238]);
HAnimJoint239 := THAnimJointNode.Create;
HAnimJoint239.NameField := 'l_middle2';
HAnimJoint239.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimSegment240 := THAnimSegmentNode.Create;
HAnimSegment240.NameField := 'l_middle_middle';
{ .AddChildren }
HAnimJoint239.AddChildren([HAnimSegment240]);
HAnimJoint241 := THAnimJointNode.Create;
HAnimJoint241.NameField := 'l_middle3';
HAnimJoint241.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimSegment242 := THAnimSegmentNode.Create;
HAnimSegment242.NameField := 'l_middle_distal';
HAnimSite243 := THAnimSiteNode.Create;
HAnimSite243.NameField := 'l_middle_distal_tip';
HAnimSite243.Translation := Vector3(0.208,0.6731,-0.0491);
{ .AddChildren }
HAnimSegment242.AddChildren([HAnimSite243]);
{ .AddChildren }
HAnimJoint241.AddChildren([HAnimSegment242]);
{ .AddChildren }
HAnimJoint239.AddChildren([HAnimJoint241]);
{ .AddChildren }
HAnimJoint237.AddChildren([HAnimJoint239]);
{ .AddChildren }
HAnimJoint235.AddChildren([HAnimJoint237]);
{ .AddChildren }
HAnimJoint211.AddChildren([HAnimJoint235]);
HAnimJoint244 := THAnimJointNode.Create;
HAnimJoint244.NameField := 'l_ring0';
HAnimJoint244.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimSegment245 := THAnimSegmentNode.Create;
HAnimSegment245.NameField := 'l_ring_metacarpal';
{ .AddChildren }
HAnimJoint244.AddChildren([HAnimSegment245]);
HAnimJoint246 := THAnimJointNode.Create;
HAnimJoint246.NameField := 'l_ring1';
HAnimJoint246.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimSegment247 := THAnimSegmentNode.Create;
HAnimSegment247.NameField := 'l_ring_proximal';
{ .AddChildren }
HAnimJoint246.AddChildren([HAnimSegment247]);
HAnimJoint248 := THAnimJointNode.Create;
HAnimJoint248.NameField := 'l_ring2';
HAnimJoint248.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimSegment249 := THAnimSegmentNode.Create;
HAnimSegment249.NameField := 'l_ring_middle';
{ .AddChildren }
HAnimJoint248.AddChildren([HAnimSegment249]);
HAnimJoint250 := THAnimJointNode.Create;
HAnimJoint250.NameField := 'l_ring3';
HAnimJoint250.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimSegment251 := THAnimSegmentNode.Create;
HAnimSegment251.NameField := 'l_ring_distal';
HAnimSite252 := THAnimSiteNode.Create;
HAnimSite252.NameField := 'l_ring_distal_tip';
HAnimSite252.Translation := Vector3(0.2035,0.675,-0.0756);
{ .AddChildren }
HAnimSegment251.AddChildren([HAnimSite252]);
{ .AddChildren }
HAnimJoint250.AddChildren([HAnimSegment251]);
{ .AddChildren }
HAnimJoint248.AddChildren([HAnimJoint250]);
{ .AddChildren }
HAnimJoint246.AddChildren([HAnimJoint248]);
{ .AddChildren }
HAnimJoint244.AddChildren([HAnimJoint246]);
{ .AddChildren }
HAnimJoint211.AddChildren([HAnimJoint244]);
HAnimJoint253 := THAnimJointNode.Create;
HAnimJoint253.NameField := 'l_pinky0';
HAnimJoint253.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimSegment254 := THAnimSegmentNode.Create;
HAnimSegment254.NameField := 'l_pinky_metacarpal';
{ .AddChildren }
HAnimJoint253.AddChildren([HAnimSegment254]);
HAnimJoint255 := THAnimJointNode.Create;
HAnimJoint255.NameField := 'l_pinky1';
HAnimJoint255.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimSegment256 := THAnimSegmentNode.Create;
HAnimSegment256.NameField := 'l_pinky_proximal';
{ .AddChildren }
HAnimJoint255.AddChildren([HAnimSegment256]);
HAnimJoint257 := THAnimJointNode.Create;
HAnimJoint257.NameField := 'l_pinky2';
HAnimJoint257.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimSegment258 := THAnimSegmentNode.Create;
HAnimSegment258.NameField := 'l_pinky_middle';
{ .AddChildren }
HAnimJoint257.AddChildren([HAnimSegment258]);
HAnimJoint259 := THAnimJointNode.Create;
HAnimJoint259.NameField := 'l_pinky3';
HAnimJoint259.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimSegment260 := THAnimSegmentNode.Create;
HAnimSegment260.NameField := 'l_pinky_distal';
HAnimSite261 := THAnimSiteNode.Create;
HAnimSite261.NameField := 'l_pinky_distal_tip';
HAnimSite261.Translation := Vector3(0.2014,0.7009,-0.1012);
{ .AddChildren }
HAnimSegment260.AddChildren([HAnimSite261]);
{ .AddChildren }
HAnimJoint259.AddChildren([HAnimSegment260]);
{ .AddChildren }
HAnimJoint257.AddChildren([HAnimJoint259]);
{ .AddChildren }
HAnimJoint255.AddChildren([HAnimJoint257]);
{ .AddChildren }
HAnimJoint253.AddChildren([HAnimJoint255]);
{ .AddChildren }
HAnimJoint211.AddChildren([HAnimJoint253]);
{ .AddChildren }
HAnimJoint205.AddChildren([HAnimJoint211]);
{ .AddChildren }
HAnimJoint202.AddChildren([HAnimJoint205]);
{ .AddChildren }
HAnimJoint200.AddChildren([HAnimJoint202]);
{ .AddChildren }
HAnimJoint194.AddChildren([HAnimJoint200]);
{ .AddChildren }
HAnimJoint142.AddChildren([HAnimJoint194]);
HAnimJoint262 := THAnimJointNode.Create;
HAnimJoint262.NameField := 'r_sternoclavicular';
HAnimJoint262.Center := Vector3(-0.082,1.4488,-0.0353);
HAnimSegment263 := THAnimSegmentNode.Create;
HAnimSegment263.NameField := 'r_clavicle';
HAnimSite264 := THAnimSiteNode.Create;
HAnimSite264.NameField := 'r_clavicale_pt';
HAnimSite264.Translation := Vector3(-0.0115,1.4943,0.04);
{ .AddChildren }
HAnimSegment263.AddChildren([HAnimSite264]);
HAnimSite265 := THAnimSiteNode.Create;
HAnimSite265.NameField := 'r_acromion_pt';
HAnimSite265.Translation := Vector3(-0.1905,1.4791,-0.0431);
{ .AddChildren }
HAnimSegment263.AddChildren([HAnimSite265]);
HAnimSite266 := THAnimSiteNode.Create;
HAnimSite266.NameField := 'r_axilla_ant_pt';
HAnimSite266.Translation := Vector3(-0.1626,1.4072,-0.0031);
{ .AddChildren }
HAnimSegment263.AddChildren([HAnimSite266]);
HAnimSite267 := THAnimSiteNode.Create;
HAnimSite267.NameField := 'r_axilla_post_pt';
HAnimSite267.Translation := Vector3(-0.1603,1.4098,-0.0826);
{ .AddChildren }
HAnimSegment263.AddChildren([HAnimSite267]);
{ .AddChildren }
HAnimJoint262.AddChildren([HAnimSegment263]);
HAnimJoint268 := THAnimJointNode.Create;
HAnimJoint268.NameField := 'r_acromioclavicular';
HAnimJoint268.Center := Vector3(-0.0962,1.4269,-0.0424);
HAnimSegment269 := THAnimSegmentNode.Create;
HAnimSegment269.NameField := 'r_scapula';
{ .AddChildren }
HAnimJoint268.AddChildren([HAnimSegment269]);
HAnimJoint270 := THAnimJointNode.Create;
HAnimJoint270.NameField := 'r_shoulder';
HAnimJoint270.Center := Vector3(-0.2029,1.4376,-0.0387);
HAnimSegment271 := THAnimSegmentNode.Create;
HAnimSegment271.NameField := 'r_upperarm';
HAnimSite272 := THAnimSiteNode.Create;
HAnimSite272.NameField := 'r_humeral_lateral_epicn_pt';
HAnimSite272.Translation := Vector3(-0.2224,1.1517,-0.1033);
{ .AddChildren }
HAnimSegment271.AddChildren([HAnimSite272]);
{ .AddChildren }
HAnimJoint270.AddChildren([HAnimSegment271]);
HAnimJoint273 := THAnimJointNode.Create;
HAnimJoint273.NameField := 'r_elbow';
HAnimJoint273.Center := Vector3(-0.2014,1.1357,-0.0682);
HAnimSegment274 := THAnimSegmentNode.Create;
HAnimSegment274.NameField := 'r_forearm';
HAnimSite275 := THAnimSiteNode.Create;
HAnimSite275.NameField := 'r_radial_styloid_pt';
HAnimSite275.Translation := Vector3(-0.1884,0.8676,-0.036);
{ .AddChildren }
HAnimSegment274.AddChildren([HAnimSite275]);
HAnimSite276 := THAnimSiteNode.Create;
HAnimSite276.NameField := 'r_olecranon_pt';
HAnimSite276.Translation := Vector3(-0.1907,1.1405,-0.1065);
{ .AddChildren }
HAnimSegment274.AddChildren([HAnimSite276]);
HAnimSite277 := THAnimSiteNode.Create;
HAnimSite277.NameField := 'r_humeral_medial_epicn_pt';
HAnimSite277.Translation := Vector3(-0.168,1.1298,-0.1062);
{ .AddChildren }
HAnimSegment274.AddChildren([HAnimSite277]);
HAnimSite278 := THAnimSiteNode.Create;
HAnimSite278.NameField := 'r_radiale_pt';
HAnimSite278.Translation := Vector3(-0.213,1.1305,-0.1091);
{ .AddChildren }
HAnimSegment274.AddChildren([HAnimSite278]);
{ .AddChildren }
HAnimJoint273.AddChildren([HAnimSegment274]);
HAnimJoint279 := THAnimJointNode.Create;
HAnimJoint279.NameField := 'r_wrist';
HAnimJoint279.Center := Vector3(-0.1984,0.8663,-0.0583);
HAnimSegment280 := THAnimSegmentNode.Create;
HAnimSegment280.NameField := 'r_hand';
HAnimSite281 := THAnimSiteNode.Create;
HAnimSite281.NameField := 'r_metacarpal_pha2_pt';
HAnimSite281.Translation := Vector3(-0.1977,0.8169,-0.0177);
{ .AddChildren }
HAnimSegment280.AddChildren([HAnimSite281]);
HAnimSite282 := THAnimSiteNode.Create;
HAnimSite282.NameField := 'r_ulnar_styloid_pt';
HAnimSite282.Translation := Vector3(-0.2117,0.8562,-0.0584);
{ .AddChildren }
HAnimSegment280.AddChildren([HAnimSite282]);
HAnimSite283 := THAnimSiteNode.Create;
HAnimSite283.NameField := 'r_metacarpal_pha5_pt';
HAnimSite283.Translation := Vector3(-0.1929,0.789,-0.1064);
{ .AddChildren }
HAnimSegment280.AddChildren([HAnimSite283]);
HAnimSite284 := THAnimSiteNode.Create;
HAnimSite284.NameField := 'r_hand_front_view';
HAnimSite284.Translation := Vector3(-0.3,0.75,0.45);
Viewpoint285 := TViewpointNode.Create;
Viewpoint285.Description := 'right hand front';
Viewpoint285.Position := Vector3(0,0,0);
Viewpoint285.CenterOfRotation := Vector3(0,0.7,0);
{ .AddChildren }
HAnimSite284.AddChildren([Viewpoint285]);
{ .AddChildren }
HAnimSegment280.AddChildren([HAnimSite284]);
{ .AddChildren }
HAnimJoint279.AddChildren([HAnimSegment280]);
HAnimJoint286 := THAnimJointNode.Create;
HAnimJoint286.NameField := 'r_thumb1';
HAnimJoint286.Center := Vector3(-0.1924,0.8472,-0.0534);
HAnimSegment287 := THAnimSegmentNode.Create;
HAnimSegment287.NameField := 'r_thumb_metacarpal';
{ .AddChildren }
HAnimJoint286.AddChildren([HAnimSegment287]);
HAnimJoint288 := THAnimJointNode.Create;
HAnimJoint288.NameField := 'r_thumb2';
HAnimJoint288.Center := Vector3(-0.1951,0.8226,0.0246);
HAnimSegment289 := THAnimSegmentNode.Create;
HAnimSegment289.NameField := 'r_thumb_proximal';
{ .AddChildren }
HAnimJoint288.AddChildren([HAnimSegment289]);
HAnimJoint290 := THAnimJointNode.Create;
HAnimJoint290.NameField := 'r_thumb3';
HAnimJoint290.Center := Vector3(-0.1955,0.8159,0.0464);
HAnimSegment291 := THAnimSegmentNode.Create;
HAnimSegment291.NameField := 'r_thumb_distal';
HAnimSite292 := THAnimSiteNode.Create;
HAnimSite292.NameField := 'r_thumb_distal_tip';
HAnimSite292.Translation := Vector3(-0.1869,0.809,0.082);
{ .AddChildren }
HAnimSegment291.AddChildren([HAnimSite292]);
{ .AddChildren }
HAnimJoint290.AddChildren([HAnimSegment291]);
{ .AddChildren }
HAnimJoint288.AddChildren([HAnimJoint290]);
{ .AddChildren }
HAnimJoint286.AddChildren([HAnimJoint288]);
{ .AddChildren }
HAnimJoint279.AddChildren([HAnimJoint286]);
HAnimJoint293 := THAnimJointNode.Create;
HAnimJoint293.NameField := 'r_index0';
HAnimJoint293.Center := Vector3(-0.1983,0.8024,-0.028);
HAnimSegment294 := THAnimSegmentNode.Create;
HAnimSegment294.NameField := 'r_index_metacarpal';
{ .AddChildren }
HAnimJoint293.AddChildren([HAnimSegment294]);
HAnimJoint295 := THAnimJointNode.Create;
HAnimJoint295.NameField := 'r_index1';
HAnimJoint295.Center := Vector3(-0.1983,0.7815,-0.028);
HAnimSegment296 := THAnimSegmentNode.Create;
HAnimSegment296.NameField := 'r_index_proximal';
{ .AddChildren }
HAnimJoint295.AddChildren([HAnimSegment296]);
HAnimJoint297 := THAnimJointNode.Create;
HAnimJoint297.NameField := 'r_index2';
HAnimJoint297.Center := Vector3(-0.2017,0.7363,-0.0248);
HAnimSegment298 := THAnimSegmentNode.Create;
HAnimSegment298.NameField := 'r_index_middle';
{ .AddChildren }
HAnimJoint297.AddChildren([HAnimSegment298]);
HAnimJoint299 := THAnimJointNode.Create;
HAnimJoint299.NameField := 'r_index3';
HAnimJoint299.Center := Vector3(-0.2028,0.7139,-0.0236);
HAnimSegment300 := THAnimSegmentNode.Create;
HAnimSegment300.NameField := 'r_index_distal';
HAnimSite301 := THAnimSiteNode.Create;
HAnimSite301.NameField := 'r_index_distal_tip';
HAnimSite301.Translation := Vector3(-0.198,0.6883,-0.018);
{ .AddChildren }
HAnimSegment300.AddChildren([HAnimSite301]);
HAnimSite302 := THAnimSiteNode.Create;
HAnimSite302.NameField := 'r_dactylion_pt';
HAnimSite302.Translation := Vector3(-0.1941,0.6772,-0.0423);
{ .AddChildren }
HAnimSegment300.AddChildren([HAnimSite302]);
{ .AddChildren }
HAnimJoint299.AddChildren([HAnimSegment300]);
{ .AddChildren }
HAnimJoint297.AddChildren([HAnimJoint299]);
{ .AddChildren }
HAnimJoint295.AddChildren([HAnimJoint297]);
{ .AddChildren }
HAnimJoint293.AddChildren([HAnimJoint295]);
{ .AddChildren }
HAnimJoint279.AddChildren([HAnimJoint293]);
HAnimJoint303 := THAnimJointNode.Create;
HAnimJoint303.NameField := 'r_middle0';
HAnimJoint303.Center := Vector3(-0.1987,0.8029,-0.053);
HAnimSegment304 := THAnimSegmentNode.Create;
HAnimSegment304.NameField := 'r_middle_metacarpal';
{ .AddChildren }
HAnimJoint303.AddChildren([HAnimSegment304]);
HAnimJoint305 := THAnimJointNode.Create;
HAnimJoint305.NameField := 'r_middle1';
HAnimJoint305.Center := Vector3(-0.1987,0.7818,-0.053);
HAnimSegment306 := THAnimSegmentNode.Create;
HAnimSegment306.NameField := 'r_middle_proximal';
{ .AddChildren }
HAnimJoint305.AddChildren([HAnimSegment306]);
HAnimJoint307 := THAnimJointNode.Create;
HAnimJoint307.NameField := 'r_middle2';
HAnimJoint307.Center := Vector3(-0.2013,0.7273,-0.0503);
HAnimSegment308 := THAnimSegmentNode.Create;
HAnimSegment308.NameField := 'r_middle_middle';
{ .AddChildren }
HAnimJoint307.AddChildren([HAnimSegment308]);
HAnimJoint309 := THAnimJointNode.Create;
HAnimJoint309.NameField := 'r_middle3';
HAnimJoint309.Center := Vector3(-0.2026,0.7011,-0.0494);
HAnimSegment310 := THAnimSegmentNode.Create;
HAnimSegment310.NameField := 'r_middle_distal';
HAnimSite311 := THAnimSiteNode.Create;
HAnimSite311.NameField := 'r_middle_distal_tip';
HAnimSite311.Translation := Vector3(-0.1969,0.6758,-0.0427);
{ .AddChildren }
HAnimSegment310.AddChildren([HAnimSite311]);
{ .AddChildren }
HAnimJoint309.AddChildren([HAnimSegment310]);
{ .AddChildren }
HAnimJoint307.AddChildren([HAnimJoint309]);
{ .AddChildren }
HAnimJoint305.AddChildren([HAnimJoint307]);
{ .AddChildren }
HAnimJoint303.AddChildren([HAnimJoint305]);
{ .AddChildren }
HAnimJoint279.AddChildren([HAnimJoint303]);
HAnimJoint312 := THAnimJointNode.Create;
HAnimJoint312.NameField := 'r_ring0';
HAnimJoint312.Center := Vector3(-0.1956,0.8019,-0.0794);
HAnimSegment313 := THAnimSegmentNode.Create;
HAnimSegment313.NameField := 'r_ring_metacarpal';
{ .AddChildren }
HAnimJoint312.AddChildren([HAnimSegment313]);
HAnimJoint314 := THAnimJointNode.Create;
HAnimJoint314.NameField := 'r_ring1';
HAnimJoint314.Center := Vector3(-0.1956,0.7815,-0.0794);
HAnimSegment315 := THAnimSegmentNode.Create;
HAnimSegment315.NameField := 'r_ring_proximal';
{ .AddChildren }
HAnimJoint314.AddChildren([HAnimSegment315]);
HAnimJoint316 := THAnimJointNode.Create;
HAnimJoint316.NameField := 'r_ring2';
HAnimJoint316.Center := Vector3(-0.1973,0.7287,-0.0777);
HAnimSegment317 := THAnimSegmentNode.Create;
HAnimSegment317.NameField := 'r_ring_middle';
{ .AddChildren }
HAnimJoint316.AddChildren([HAnimSegment317]);
HAnimJoint318 := THAnimJointNode.Create;
HAnimJoint318.NameField := 'r_ring3';
HAnimJoint318.Center := Vector3(-0.1983,0.7045,-0.0767);
HAnimSegment319 := THAnimSegmentNode.Create;
HAnimSegment319.NameField := 'r_ring_distal';
HAnimSite320 := THAnimSiteNode.Create;
HAnimSite320.NameField := 'r_ring_distal_tip';
HAnimSite320.Translation := Vector3(-0.1934,0.6778,-0.0693);
{ .AddChildren }
HAnimSegment319.AddChildren([HAnimSite320]);
{ .AddChildren }
HAnimJoint318.AddChildren([HAnimSegment319]);
{ .AddChildren }
HAnimJoint316.AddChildren([HAnimJoint318]);
{ .AddChildren }
HAnimJoint314.AddChildren([HAnimJoint316]);
{ .AddChildren }
HAnimJoint312.AddChildren([HAnimJoint314]);
{ .AddChildren }
HAnimJoint279.AddChildren([HAnimJoint312]);
HAnimJoint321 := THAnimJointNode.Create;
HAnimJoint321.NameField := 'r_pinky0';
HAnimJoint321.Center := Vector3(-0.1925,0.8066,-0.1036);
HAnimSegment322 := THAnimSegmentNode.Create;
HAnimSegment322.NameField := 'r_pinky_metacarpal';
{ .AddChildren }
HAnimJoint321.AddChildren([HAnimSegment322]);
HAnimJoint323 := THAnimJointNode.Create;
HAnimJoint323.NameField := 'r_pinky1';
HAnimJoint323.Center := Vector3(-0.1925,0.7866,-0.1036);
HAnimSegment324 := THAnimSegmentNode.Create;
HAnimSegment324.NameField := 'r_pinky_proximal';
{ .AddChildren }
HAnimJoint323.AddChildren([HAnimSegment324]);
HAnimJoint325 := THAnimJointNode.Create;
HAnimJoint325.NameField := 'r_pinky2';
HAnimJoint325.Center := Vector3(-0.1938,0.7452,-0.1024);
HAnimSegment326 := THAnimSegmentNode.Create;
HAnimSegment326.NameField := 'r_pinky_middle';
{ .AddChildren }
HAnimJoint325.AddChildren([HAnimSegment326]);
HAnimJoint327 := THAnimJointNode.Create;
HAnimJoint327.NameField := 'r_pinky3';
HAnimJoint327.Center := Vector3(-0.1948,0.7277,-0.1017);
HAnimSegment328 := THAnimSegmentNode.Create;
HAnimSegment328.NameField := 'r_pinky_distal';
HAnimSite329 := THAnimSiteNode.Create;
HAnimSite329.NameField := 'r_pinky_distal_tip';
HAnimSite329.Translation := Vector3(-0.1938,0.7035,-0.0949);
{ .AddChildren }
HAnimSegment328.AddChildren([HAnimSite329]);
{ .AddChildren }
HAnimJoint327.AddChildren([HAnimSegment328]);
{ .AddChildren }
HAnimJoint325.AddChildren([HAnimJoint327]);
{ .AddChildren }
HAnimJoint323.AddChildren([HAnimJoint325]);
{ .AddChildren }
HAnimJoint321.AddChildren([HAnimJoint323]);
{ .AddChildren }
HAnimJoint279.AddChildren([HAnimJoint321]);
{ .AddChildren }
HAnimJoint273.AddChildren([HAnimJoint279]);
{ .AddChildren }
HAnimJoint270.AddChildren([HAnimJoint273]);
{ .AddChildren }
HAnimJoint268.AddChildren([HAnimJoint270]);
{ .AddChildren }
HAnimJoint262.AddChildren([HAnimJoint268]);
{ .AddChildren }
HAnimJoint142.AddChildren([HAnimJoint262]);
{ .AddChildren }
HAnimJoint140.AddChildren([HAnimJoint142]);
{ .AddChildren }
HAnimJoint138.AddChildren([HAnimJoint140]);
{ .AddChildren }
HAnimJoint136.AddChildren([HAnimJoint138]);
{ .AddChildren }
HAnimJoint134.AddChildren([HAnimJoint136]);
{ .AddChildren }
HAnimJoint132.AddChildren([HAnimJoint134]);
{ .AddChildren }
HAnimJoint130.AddChildren([HAnimJoint132]);
{ .AddChildren }
HAnimJoint128.AddChildren([HAnimJoint130]);
{ .AddChildren }
HAnimJoint124.AddChildren([HAnimJoint128]);
{ .AddChildren }
HAnimJoint121.AddChildren([HAnimJoint124]);
{ .AddChildren }
HAnimJoint119.AddChildren([HAnimJoint121]);
{ .AddChildren }
HAnimJoint117.AddChildren([HAnimJoint119]);
{ .AddChildren }
HAnimJoint115.AddChildren([HAnimJoint117]);
{ .AddChildren }
HAnimJoint110.AddChildren([HAnimJoint115]);
{ .AddChildren }
HAnimJoint108.AddChildren([HAnimJoint110]);
{ .AddChildren }
HAnimJoint106.AddChildren([HAnimJoint108]);
{ .AddChildren }
HAnimJoint102.AddChildren([HAnimJoint106]);
{ .AddChildren }
HAnimJoint43.AddChildren([HAnimJoint102]);
{ .AddSkeleton }
HAnimHumanoid42.SetSkeleton([HAnimJoint43]);
HAnimJoint330 := THAnimJointNode.Create;
HAnimJoint330 := HAnimJoint43;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint330;
HAnimJoint331 := THAnimJointNode.Create;
HAnimJoint331 := HAnimJoint45;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint331;
HAnimJoint332 := THAnimJointNode.Create;
HAnimJoint332 := HAnimJoint102;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint332;
HAnimJoint333 := THAnimJointNode.Create;
HAnimJoint333 := HAnimJoint106;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint333;
HAnimJoint334 := THAnimJointNode.Create;
HAnimJoint334 := HAnimJoint108;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint334;
HAnimJoint335 := THAnimJointNode.Create;
HAnimJoint335 := HAnimJoint110;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint335;
HAnimJoint336 := THAnimJointNode.Create;
HAnimJoint336 := HAnimJoint115;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint336;
HAnimJoint337 := THAnimJointNode.Create;
HAnimJoint337 := HAnimJoint117;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint337;
HAnimJoint338 := THAnimJointNode.Create;
HAnimJoint338 := HAnimJoint119;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint338;
HAnimJoint339 := THAnimJointNode.Create;
HAnimJoint339 := HAnimJoint121;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint339;
HAnimJoint340 := THAnimJointNode.Create;
HAnimJoint340 := HAnimJoint124;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint340;
HAnimJoint341 := THAnimJointNode.Create;
HAnimJoint341 := HAnimJoint128;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint341;
HAnimJoint342 := THAnimJointNode.Create;
HAnimJoint342 := HAnimJoint130;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint342;
HAnimJoint343 := THAnimJointNode.Create;
HAnimJoint343 := HAnimJoint132;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint343;
HAnimJoint344 := THAnimJointNode.Create;
HAnimJoint344 := HAnimJoint134;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint344;
HAnimJoint345 := THAnimJointNode.Create;
HAnimJoint345 := HAnimJoint136;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint345;
HAnimJoint346 := THAnimJointNode.Create;
HAnimJoint346 := HAnimJoint138;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint346;
HAnimJoint347 := THAnimJointNode.Create;
HAnimJoint347 := HAnimJoint140;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint347;
HAnimJoint348 := THAnimJointNode.Create;
HAnimJoint348 := HAnimJoint142;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint348;
HAnimJoint349 := THAnimJointNode.Create;
HAnimJoint349 := HAnimJoint146;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint349;
HAnimJoint350 := THAnimJointNode.Create;
HAnimJoint350 := HAnimJoint150;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint350;
HAnimJoint351 := THAnimJointNode.Create;
HAnimJoint351 := HAnimJoint152;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint351;
HAnimJoint352 := THAnimJointNode.Create;
HAnimJoint352 := HAnimJoint154;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint352;
HAnimJoint353 := THAnimJointNode.Create;
HAnimJoint353 := HAnimJoint156;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint353;
HAnimJoint354 := THAnimJointNode.Create;
HAnimJoint354 := HAnimJoint158;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint354;
HAnimJoint355 := THAnimJointNode.Create;
HAnimJoint355 := HAnimJoint160;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint355;
HAnimJoint356 := THAnimJointNode.Create;
HAnimJoint356 := HAnimJoint162;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint356;
HAnimJoint357 := THAnimJointNode.Create;
HAnimJoint357 := HAnimJoint190;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint357;
HAnimJoint358 := THAnimJointNode.Create;
HAnimJoint358 := HAnimJoint200;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint358;
HAnimJoint359 := THAnimJointNode.Create;
HAnimJoint359 := HAnimJoint268;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint359;
HAnimJoint360 := THAnimJointNode.Create;
HAnimJoint360 := HAnimJoint63;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint360;
HAnimJoint361 := THAnimJointNode.Create;
HAnimJoint361 := HAnimJoint86;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint361;
HAnimJoint362 := THAnimJointNode.Create;
HAnimJoint362 := HAnimJoint205;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint362;
HAnimJoint363 := THAnimJointNode.Create;
HAnimJoint363 := HAnimJoint273;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint363;
HAnimJoint364 := THAnimJointNode.Create;
HAnimJoint364 := HAnimJoint174;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint364;
HAnimJoint365 := THAnimJointNode.Create;
HAnimJoint365 := HAnimJoint182;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint365;
HAnimJoint366 := THAnimJointNode.Create;
HAnimJoint366 := HAnimJoint180;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint366;
HAnimJoint367 := THAnimJointNode.Create;
HAnimJoint367 := HAnimJoint188;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint367;
HAnimJoint368 := THAnimJointNode.Create;
HAnimJoint368 := HAnimJoint178;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint368;
HAnimJoint369 := THAnimJointNode.Create;
HAnimJoint369 := HAnimJoint186;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint369;
HAnimJoint370 := THAnimJointNode.Create;
HAnimJoint370 := HAnimJoint56;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint370;
HAnimJoint371 := THAnimJointNode.Create;
HAnimJoint371 := HAnimJoint79;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint371;
HAnimJoint372 := THAnimJointNode.Create;
HAnimJoint372 := HAnimJoint225;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint372;
HAnimJoint373 := THAnimJointNode.Create;
HAnimJoint373 := HAnimJoint293;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint373;
HAnimJoint374 := THAnimJointNode.Create;
HAnimJoint374 := HAnimJoint227;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint374;
HAnimJoint375 := THAnimJointNode.Create;
HAnimJoint375 := HAnimJoint295;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint375;
HAnimJoint376 := THAnimJointNode.Create;
HAnimJoint376 := HAnimJoint229;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint376;
HAnimJoint377 := THAnimJointNode.Create;
HAnimJoint377 := HAnimJoint297;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint377;
HAnimJoint378 := THAnimJointNode.Create;
HAnimJoint378 := HAnimJoint231;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint378;
HAnimJoint379 := THAnimJointNode.Create;
HAnimJoint379 := HAnimJoint299;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint379;
HAnimJoint380 := THAnimJointNode.Create;
HAnimJoint380 := HAnimJoint61;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint380;
HAnimJoint381 := THAnimJointNode.Create;
HAnimJoint381 := HAnimJoint84;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint381;
HAnimJoint382 := THAnimJointNode.Create;
HAnimJoint382 := HAnimJoint74;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint382;
HAnimJoint383 := THAnimJointNode.Create;
HAnimJoint383 := HAnimJoint97;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint383;
HAnimJoint384 := THAnimJointNode.Create;
HAnimJoint384 := HAnimJoint235;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint384;
HAnimJoint385 := THAnimJointNode.Create;
HAnimJoint385 := HAnimJoint303;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint385;
HAnimJoint386 := THAnimJointNode.Create;
HAnimJoint386 := HAnimJoint237;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint386;
HAnimJoint387 := THAnimJointNode.Create;
HAnimJoint387 := HAnimJoint305;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint387;
HAnimJoint388 := THAnimJointNode.Create;
HAnimJoint388 := HAnimJoint239;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint388;
HAnimJoint389 := THAnimJointNode.Create;
HAnimJoint389 := HAnimJoint307;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint389;
HAnimJoint390 := THAnimJointNode.Create;
HAnimJoint390 := HAnimJoint241;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint390;
HAnimJoint391 := THAnimJointNode.Create;
HAnimJoint391 := HAnimJoint309;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint391;
HAnimJoint392 := THAnimJointNode.Create;
HAnimJoint392 := HAnimJoint71;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint392;
HAnimJoint393 := THAnimJointNode.Create;
HAnimJoint393 := HAnimJoint94;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint393;
HAnimJoint394 := THAnimJointNode.Create;
HAnimJoint394 := HAnimJoint253;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint394;
HAnimJoint395 := THAnimJointNode.Create;
HAnimJoint395 := HAnimJoint321;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint395;
HAnimJoint396 := THAnimJointNode.Create;
HAnimJoint396 := HAnimJoint255;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint396;
HAnimJoint397 := THAnimJointNode.Create;
HAnimJoint397 := HAnimJoint323;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint397;
HAnimJoint398 := THAnimJointNode.Create;
HAnimJoint398 := HAnimJoint257;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint398;
HAnimJoint399 := THAnimJointNode.Create;
HAnimJoint399 := HAnimJoint325;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint399;
HAnimJoint400 := THAnimJointNode.Create;
HAnimJoint400 := HAnimJoint259;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint400;
HAnimJoint401 := THAnimJointNode.Create;
HAnimJoint401 := HAnimJoint327;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint401;
HAnimJoint402 := THAnimJointNode.Create;
HAnimJoint402 := HAnimJoint244;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint402;
HAnimJoint403 := THAnimJointNode.Create;
HAnimJoint403 := HAnimJoint312;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint403;
HAnimJoint404 := THAnimJointNode.Create;
HAnimJoint404 := HAnimJoint246;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint404;
HAnimJoint405 := THAnimJointNode.Create;
HAnimJoint405 := HAnimJoint314;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint405;
HAnimJoint406 := THAnimJointNode.Create;
HAnimJoint406 := HAnimJoint248;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint406;
HAnimJoint407 := THAnimJointNode.Create;
HAnimJoint407 := HAnimJoint316;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint407;
HAnimJoint408 := THAnimJointNode.Create;
HAnimJoint408 := HAnimJoint250;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint408;
HAnimJoint409 := THAnimJointNode.Create;
HAnimJoint409 := HAnimJoint318;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint409;
HAnimJoint410 := THAnimJointNode.Create;
HAnimJoint410 := HAnimJoint202;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint410;
HAnimJoint411 := THAnimJointNode.Create;
HAnimJoint411 := HAnimJoint270;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint411;
HAnimJoint412 := THAnimJointNode.Create;
HAnimJoint412 := HAnimJoint194;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint412;
HAnimJoint413 := THAnimJointNode.Create;
HAnimJoint413 := HAnimJoint262;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint413;
HAnimJoint414 := THAnimJointNode.Create;
HAnimJoint414 := HAnimJoint69;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint414;
HAnimJoint415 := THAnimJointNode.Create;
HAnimJoint415 := HAnimJoint92;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint415;
HAnimJoint416 := THAnimJointNode.Create;
HAnimJoint416 := HAnimJoint218;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint416;
HAnimJoint417 := THAnimJointNode.Create;
HAnimJoint417 := HAnimJoint286;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint417;
HAnimJoint418 := THAnimJointNode.Create;
HAnimJoint418 := HAnimJoint220;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint418;
HAnimJoint419 := THAnimJointNode.Create;
HAnimJoint419 := HAnimJoint288;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint419;
HAnimJoint420 := THAnimJointNode.Create;
HAnimJoint420 := HAnimJoint222;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint420;
HAnimJoint421 := THAnimJointNode.Create;
HAnimJoint421 := HAnimJoint290;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint421;
HAnimJoint422 := THAnimJointNode.Create;
HAnimJoint422 := HAnimJoint211;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint422;
HAnimJoint423 := THAnimJointNode.Create;
HAnimJoint423 := HAnimJoint279;
{ .AddJoints }
HAnimHumanoid42.Joints := HAnimJoint423;
HAnimSegment424 := THAnimSegmentNode.Create;
HAnimSegment424 := HAnimSegment46;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment424;
HAnimSegment425 := THAnimSegmentNode.Create;
HAnimSegment425 := HAnimSegment163;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment425;
HAnimSegment426 := THAnimSegmentNode.Create;
HAnimSegment426 := HAnimSegment191;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment426;
HAnimSegment427 := THAnimSegmentNode.Create;
HAnimSegment427 := HAnimSegment161;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment427;
HAnimSegment428 := THAnimSegmentNode.Create;
HAnimSegment428 := HAnimSegment159;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment428;
HAnimSegment429 := THAnimSegmentNode.Create;
HAnimSegment429 := HAnimSegment157;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment429;
HAnimSegment430 := THAnimSegmentNode.Create;
HAnimSegment430 := HAnimSegment155;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment430;
HAnimSegment431 := THAnimSegmentNode.Create;
HAnimSegment431 := HAnimSegment153;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment431;
HAnimSegment432 := THAnimSegmentNode.Create;
HAnimSegment432 := HAnimSegment151;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment432;
HAnimSegment433 := THAnimSegmentNode.Create;
HAnimSegment433 := HAnimSegment147;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment433;
HAnimSegment434 := THAnimSegmentNode.Create;
HAnimSegment434 := HAnimSegment143;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment434;
HAnimSegment435 := THAnimSegmentNode.Create;
HAnimSegment435 := HAnimSegment141;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment435;
HAnimSegment436 := THAnimSegmentNode.Create;
HAnimSegment436 := HAnimSegment139;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment436;
HAnimSegment437 := THAnimSegmentNode.Create;
HAnimSegment437 := HAnimSegment137;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment437;
HAnimSegment438 := THAnimSegmentNode.Create;
HAnimSegment438 := HAnimSegment135;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment438;
HAnimSegment439 := THAnimSegmentNode.Create;
HAnimSegment439 := HAnimSegment133;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment439;
HAnimSegment440 := THAnimSegmentNode.Create;
HAnimSegment440 := HAnimSegment131;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment440;
HAnimSegment441 := THAnimSegmentNode.Create;
HAnimSegment441 := HAnimSegment129;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment441;
HAnimSegment442 := THAnimSegmentNode.Create;
HAnimSegment442 := HAnimSegment125;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment442;
HAnimSegment443 := THAnimSegmentNode.Create;
HAnimSegment443 := HAnimSegment122;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment443;
HAnimSegment444 := THAnimSegmentNode.Create;
HAnimSegment444 := HAnimSegment120;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment444;
HAnimSegment445 := THAnimSegmentNode.Create;
HAnimSegment445 := HAnimSegment118;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment445;
HAnimSegment446 := THAnimSegmentNode.Create;
HAnimSegment446 := HAnimSegment116;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment446;
HAnimSegment447 := THAnimSegmentNode.Create;
HAnimSegment447 := HAnimSegment111;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment447;
HAnimSegment448 := THAnimSegmentNode.Create;
HAnimSegment448 := HAnimSegment109;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment448;
HAnimSegment449 := THAnimSegmentNode.Create;
HAnimSegment449 := HAnimSegment107;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment449;
HAnimSegment450 := THAnimSegmentNode.Create;
HAnimSegment450 := HAnimSegment103;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment450;
HAnimSegment451 := THAnimSegmentNode.Create;
HAnimSegment451 := HAnimSegment44;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment451;
HAnimSegment452 := THAnimSegmentNode.Create;
HAnimSegment452 := HAnimSegment62;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment452;
HAnimSegment453 := THAnimSegmentNode.Create;
HAnimSegment453 := HAnimSegment85;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment453;
HAnimSegment454 := THAnimSegmentNode.Create;
HAnimSegment454 := HAnimSegment195;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment454;
HAnimSegment455 := THAnimSegmentNode.Create;
HAnimSegment455 := HAnimSegment263;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment455;
HAnimSegment456 := THAnimSegmentNode.Create;
HAnimSegment456 := HAnimSegment175;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment456;
HAnimSegment457 := THAnimSegmentNode.Create;
HAnimSegment457 := HAnimSegment183;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment457;
HAnimSegment458 := THAnimSegmentNode.Create;
HAnimSegment458 := HAnimSegment181;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment458;
HAnimSegment459 := THAnimSegmentNode.Create;
HAnimSegment459 := HAnimSegment189;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment459;
HAnimSegment460 := THAnimSegmentNode.Create;
HAnimSegment460 := HAnimSegment179;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment460;
HAnimSegment461 := THAnimSegmentNode.Create;
HAnimSegment461 := HAnimSegment187;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment461;
HAnimSegment462 := THAnimSegmentNode.Create;
HAnimSegment462 := HAnimSegment206;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment462;
HAnimSegment463 := THAnimSegmentNode.Create;
HAnimSegment463 := HAnimSegment274;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment463;
HAnimSegment464 := THAnimSegmentNode.Create;
HAnimSegment464 := HAnimSegment75;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment464;
HAnimSegment465 := THAnimSegmentNode.Create;
HAnimSegment465 := HAnimSegment98;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment465;
HAnimSegment466 := THAnimSegmentNode.Create;
HAnimSegment466 := HAnimSegment212;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment466;
HAnimSegment467 := THAnimSegmentNode.Create;
HAnimSegment467 := HAnimSegment280;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment467;
HAnimSegment468 := THAnimSegmentNode.Create;
HAnimSegment468 := HAnimSegment64;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment468;
HAnimSegment469 := THAnimSegmentNode.Create;
HAnimSegment469 := HAnimSegment87;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment469;
HAnimSegment470 := THAnimSegmentNode.Create;
HAnimSegment470 := HAnimSegment232;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment470;
HAnimSegment471 := THAnimSegmentNode.Create;
HAnimSegment471 := HAnimSegment300;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment471;
HAnimSegment472 := THAnimSegmentNode.Create;
HAnimSegment472 := HAnimSegment226;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment472;
HAnimSegment473 := THAnimSegmentNode.Create;
HAnimSegment473 := HAnimSegment294;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment473;
HAnimSegment474 := THAnimSegmentNode.Create;
HAnimSegment474 := HAnimSegment230;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment474;
HAnimSegment475 := THAnimSegmentNode.Create;
HAnimSegment475 := HAnimSegment298;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment475;
HAnimSegment476 := THAnimSegmentNode.Create;
HAnimSegment476 := HAnimSegment228;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment476;
HAnimSegment477 := THAnimSegmentNode.Create;
HAnimSegment477 := HAnimSegment296;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment477;
HAnimSegment478 := THAnimSegmentNode.Create;
HAnimSegment478 := HAnimSegment72;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment478;
HAnimSegment479 := THAnimSegmentNode.Create;
HAnimSegment479 := HAnimSegment95;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment479;
HAnimSegment480 := THAnimSegmentNode.Create;
HAnimSegment480 := HAnimSegment242;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment480;
HAnimSegment481 := THAnimSegmentNode.Create;
HAnimSegment481 := HAnimSegment310;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment481;
HAnimSegment482 := THAnimSegmentNode.Create;
HAnimSegment482 := HAnimSegment236;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment482;
HAnimSegment483 := THAnimSegmentNode.Create;
HAnimSegment483 := HAnimSegment304;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment483;
HAnimSegment484 := THAnimSegmentNode.Create;
HAnimSegment484 := HAnimSegment240;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment484;
HAnimSegment485 := THAnimSegmentNode.Create;
HAnimSegment485 := HAnimSegment308;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment485;
HAnimSegment486 := THAnimSegmentNode.Create;
HAnimSegment486 := HAnimSegment238;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment486;
HAnimSegment487 := THAnimSegmentNode.Create;
HAnimSegment487 := HAnimSegment306;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment487;
HAnimSegment488 := THAnimSegmentNode.Create;
HAnimSegment488 := HAnimSegment70;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment488;
HAnimSegment489 := THAnimSegmentNode.Create;
HAnimSegment489 := HAnimSegment93;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment489;
HAnimSegment490 := THAnimSegmentNode.Create;
HAnimSegment490 := HAnimSegment260;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment490;
HAnimSegment491 := THAnimSegmentNode.Create;
HAnimSegment491 := HAnimSegment328;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment491;
HAnimSegment492 := THAnimSegmentNode.Create;
HAnimSegment492 := HAnimSegment254;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment492;
HAnimSegment493 := THAnimSegmentNode.Create;
HAnimSegment493 := HAnimSegment322;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment493;
HAnimSegment494 := THAnimSegmentNode.Create;
HAnimSegment494 := HAnimSegment258;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment494;
HAnimSegment495 := THAnimSegmentNode.Create;
HAnimSegment495 := HAnimSegment326;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment495;
HAnimSegment496 := THAnimSegmentNode.Create;
HAnimSegment496 := HAnimSegment256;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment496;
HAnimSegment497 := THAnimSegmentNode.Create;
HAnimSegment497 := HAnimSegment324;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment497;
HAnimSegment498 := THAnimSegmentNode.Create;
HAnimSegment498 := HAnimSegment251;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment498;
HAnimSegment499 := THAnimSegmentNode.Create;
HAnimSegment499 := HAnimSegment319;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment499;
HAnimSegment500 := THAnimSegmentNode.Create;
HAnimSegment500 := HAnimSegment245;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment500;
HAnimSegment501 := THAnimSegmentNode.Create;
HAnimSegment501 := HAnimSegment313;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment501;
HAnimSegment502 := THAnimSegmentNode.Create;
HAnimSegment502 := HAnimSegment249;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment502;
HAnimSegment503 := THAnimSegmentNode.Create;
HAnimSegment503 := HAnimSegment317;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment503;
HAnimSegment504 := THAnimSegmentNode.Create;
HAnimSegment504 := HAnimSegment247;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment504;
HAnimSegment505 := THAnimSegmentNode.Create;
HAnimSegment505 := HAnimSegment315;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment505;
HAnimSegment506 := THAnimSegmentNode.Create;
HAnimSegment506 := HAnimSegment201;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment506;
HAnimSegment507 := THAnimSegmentNode.Create;
HAnimSegment507 := HAnimSegment269;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment507;
HAnimSegment508 := THAnimSegmentNode.Create;
HAnimSegment508 := HAnimSegment57;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment508;
HAnimSegment509 := THAnimSegmentNode.Create;
HAnimSegment509 := HAnimSegment80;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment509;
HAnimSegment510 := THAnimSegmentNode.Create;
HAnimSegment510 := HAnimSegment223;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment510;
HAnimSegment511 := THAnimSegmentNode.Create;
HAnimSegment511 := HAnimSegment291;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment511;
HAnimSegment512 := THAnimSegmentNode.Create;
HAnimSegment512 := HAnimSegment219;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment512;
HAnimSegment513 := THAnimSegmentNode.Create;
HAnimSegment513 := HAnimSegment287;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment513;
HAnimSegment514 := THAnimSegmentNode.Create;
HAnimSegment514 := HAnimSegment221;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment514;
HAnimSegment515 := THAnimSegmentNode.Create;
HAnimSegment515 := HAnimSegment289;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment515;
HAnimSegment516 := THAnimSegmentNode.Create;
HAnimSegment516 := HAnimSegment203;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment516;
HAnimSegment517 := THAnimSegmentNode.Create;
HAnimSegment517 := HAnimSegment271;
{ .AddSegments }
HAnimHumanoid42.Segments := HAnimSegment517;
HAnimSite518 := THAnimSiteNode.Create;
HAnimSite518 := HAnimSite55;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite518;
HAnimSite519 := THAnimSiteNode.Create;
HAnimSite519 := HAnimSite164;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite519;
HAnimSite520 := THAnimSiteNode.Create;
HAnimSite520 := HAnimSite165;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite520;
HAnimSite521 := THAnimSiteNode.Create;
HAnimSite521 := HAnimSite168;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite521;
HAnimSite522 := THAnimSiteNode.Create;
HAnimSite522 := HAnimSite173;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite522;
HAnimSite523 := THAnimSiteNode.Create;
HAnimSite523 := HAnimSite144;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite523;
HAnimSite524 := THAnimSiteNode.Create;
HAnimSite524 := HAnimSite145;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite524;
HAnimSite525 := THAnimSiteNode.Create;
HAnimSite525 := HAnimSite123;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite525;
HAnimSite526 := THAnimSiteNode.Create;
HAnimSite526 := HAnimSite114;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite526;
HAnimSite527 := THAnimSiteNode.Create;
HAnimSite527 := HAnimSite104;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite527;
HAnimSite528 := THAnimSiteNode.Create;
HAnimSite528 := HAnimSite105;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite528;
HAnimSite529 := THAnimSiteNode.Create;
HAnimSite529 := HAnimSite197;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite529;
HAnimSite530 := THAnimSiteNode.Create;
HAnimSite530 := HAnimSite265;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite530;
HAnimSite531 := THAnimSiteNode.Create;
HAnimSite531 := HAnimSite51;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite531;
HAnimSite532 := THAnimSiteNode.Create;
HAnimSite532 := HAnimSite52;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite532;
HAnimSite533 := THAnimSiteNode.Create;
HAnimSite533 := HAnimSite198;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite533;
HAnimSite534 := THAnimSiteNode.Create;
HAnimSite534 := HAnimSite266;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite534;
HAnimSite535 := THAnimSiteNode.Create;
HAnimSite535 := HAnimSite199;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite535;
HAnimSite536 := THAnimSiteNode.Create;
HAnimSite536 := HAnimSite267;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite536;
HAnimSite537 := THAnimSiteNode.Create;
HAnimSite537 := HAnimSite68;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite537;
HAnimSite538 := THAnimSiteNode.Create;
HAnimSite538 := HAnimSite91;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite538;
HAnimSite539 := THAnimSiteNode.Create;
HAnimSite539 := HAnimSite196;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite539;
HAnimSite540 := THAnimSiteNode.Create;
HAnimSite540 := HAnimSite264;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite540;
HAnimSite541 := THAnimSiteNode.Create;
HAnimSite541 := HAnimSite234;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite541;
HAnimSite542 := THAnimSiteNode.Create;
HAnimSite542 := HAnimSite302;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite542;
HAnimSite543 := THAnimSiteNode.Create;
HAnimSite543 := HAnimSite78;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite543;
HAnimSite544 := THAnimSiteNode.Create;
HAnimSite544 := HAnimSite101;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite544;
HAnimSite545 := THAnimSiteNode.Create;
HAnimSite545 := HAnimSite59;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite545;
HAnimSite546 := THAnimSiteNode.Create;
HAnimSite546 := HAnimSite82;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite546;
HAnimSite547 := THAnimSiteNode.Create;
HAnimSite547 := HAnimSite60;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite547;
HAnimSite548 := THAnimSiteNode.Create;
HAnimSite548 := HAnimSite83;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite548;
HAnimSite549 := THAnimSiteNode.Create;
HAnimSite549 := HAnimSite76;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite549;
HAnimSite550 := THAnimSiteNode.Create;
HAnimSite550 := HAnimSite99;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite550;
HAnimSite551 := THAnimSiteNode.Create;
HAnimSite551 := HAnimSite170;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite551;
HAnimSite552 := THAnimSiteNode.Create;
HAnimSite552 := HAnimSite172;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite552;
HAnimSite553 := THAnimSiteNode.Create;
HAnimSite553 := HAnimSite204;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite553;
HAnimSite554 := THAnimSiteNode.Create;
HAnimSite554 := HAnimSite272;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite554;
HAnimSite555 := THAnimSiteNode.Create;
HAnimSite555 := HAnimSite209;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite555;
HAnimSite556 := THAnimSiteNode.Create;
HAnimSite556 := HAnimSite277;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite556;
HAnimSite557 := THAnimSiteNode.Create;
HAnimSite557 := HAnimSite47;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite557;
HAnimSite558 := THAnimSiteNode.Create;
HAnimSite558 := HAnimSite49;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite558;
HAnimSite559 := THAnimSiteNode.Create;
HAnimSite559 := HAnimSite233;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite559;
HAnimSite560 := THAnimSiteNode.Create;
HAnimSite560 := HAnimSite301;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite560;
HAnimSite561 := THAnimSiteNode.Create;
HAnimSite561 := HAnimSite166;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite561;
HAnimSite562 := THAnimSiteNode.Create;
HAnimSite562 := HAnimSite167;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite562;
HAnimSite563 := THAnimSiteNode.Create;
HAnimSite563 := HAnimSite58;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite563;
HAnimSite564 := THAnimSiteNode.Create;
HAnimSite564 := HAnimSite81;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite564;
HAnimSite565 := THAnimSiteNode.Create;
HAnimSite565 := HAnimSite65;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite565;
HAnimSite566 := THAnimSiteNode.Create;
HAnimSite566 := HAnimSite88;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite566;
HAnimSite567 := THAnimSiteNode.Create;
HAnimSite567 := HAnimSite66;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite567;
HAnimSite568 := THAnimSiteNode.Create;
HAnimSite568 := HAnimSite89;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite568;
HAnimSite569 := THAnimSiteNode.Create;
HAnimSite569 := HAnimSite213;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite569;
HAnimSite570 := THAnimSiteNode.Create;
HAnimSite570 := HAnimSite281;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite570;
HAnimSite571 := THAnimSiteNode.Create;
HAnimSite571 := HAnimSite215;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite571;
HAnimSite572 := THAnimSiteNode.Create;
HAnimSite572 := HAnimSite283;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite572;
HAnimSite573 := THAnimSiteNode.Create;
HAnimSite573 := HAnimSite73;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite573;
HAnimSite574 := THAnimSiteNode.Create;
HAnimSite574 := HAnimSite96;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite574;
HAnimSite575 := THAnimSiteNode.Create;
HAnimSite575 := HAnimSite77;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite575;
HAnimSite576 := THAnimSiteNode.Create;
HAnimSite576 := HAnimSite100;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite576;
HAnimSite577 := THAnimSiteNode.Create;
HAnimSite577 := HAnimSite243;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite577;
HAnimSite578 := THAnimSiteNode.Create;
HAnimSite578 := HAnimSite311;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite578;
HAnimSite579 := THAnimSiteNode.Create;
HAnimSite579 := HAnimSite148;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite579;
HAnimSite580 := THAnimSiteNode.Create;
HAnimSite580 := HAnimSite149;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite580;
HAnimSite581 := THAnimSiteNode.Create;
HAnimSite581 := HAnimSite208;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite581;
HAnimSite582 := THAnimSiteNode.Create;
HAnimSite582 := HAnimSite276;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite582;
HAnimSite583 := THAnimSiteNode.Create;
HAnimSite583 := HAnimSite261;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite583;
HAnimSite584 := THAnimSiteNode.Create;
HAnimSite584 := HAnimSite329;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite584;
HAnimSite585 := THAnimSiteNode.Create;
HAnimSite585 := HAnimSite53;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite585;
HAnimSite586 := THAnimSiteNode.Create;
HAnimSite586 := HAnimSite54;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite586;
HAnimSite587 := THAnimSiteNode.Create;
HAnimSite587 := HAnimSite207;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite587;
HAnimSite588 := THAnimSiteNode.Create;
HAnimSite588 := HAnimSite275;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite588;
HAnimSite589 := THAnimSiteNode.Create;
HAnimSite589 := HAnimSite210;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite589;
HAnimSite590 := THAnimSiteNode.Create;
HAnimSite590 := HAnimSite278;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite590;
HAnimSite591 := THAnimSiteNode.Create;
HAnimSite591 := HAnimSite112;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite591;
HAnimSite592 := THAnimSiteNode.Create;
HAnimSite592 := HAnimSite113;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite592;
HAnimSite593 := THAnimSiteNode.Create;
HAnimSite593 := HAnimSite252;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite593;
HAnimSite594 := THAnimSiteNode.Create;
HAnimSite594 := HAnimSite320;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite594;
HAnimSite595 := THAnimSiteNode.Create;
HAnimSite595 := HAnimSite192;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite595;
HAnimSite596 := THAnimSiteNode.Create;
HAnimSite596 := HAnimSite193;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite596;
HAnimSite597 := THAnimSiteNode.Create;
HAnimSite597 := HAnimSite67;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite597;
HAnimSite598 := THAnimSiteNode.Create;
HAnimSite598 := HAnimSite90;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite598;
HAnimSite599 := THAnimSiteNode.Create;
HAnimSite599 := HAnimSite126;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite599;
HAnimSite600 := THAnimSiteNode.Create;
HAnimSite600 := HAnimSite127;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite600;
HAnimSite601 := THAnimSiteNode.Create;
HAnimSite601 := HAnimSite224;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite601;
HAnimSite602 := THAnimSiteNode.Create;
HAnimSite602 := HAnimSite292;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite602;
HAnimSite603 := THAnimSiteNode.Create;
HAnimSite603 := HAnimSite169;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite603;
HAnimSite604 := THAnimSiteNode.Create;
HAnimSite604 := HAnimSite171;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite604;
HAnimSite605 := THAnimSiteNode.Create;
HAnimSite605 := HAnimSite48;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite605;
HAnimSite606 := THAnimSiteNode.Create;
HAnimSite606 := HAnimSite50;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite606;
HAnimSite607 := THAnimSiteNode.Create;
HAnimSite607 := HAnimSite214;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite607;
HAnimSite608 := THAnimSiteNode.Create;
HAnimSite608 := HAnimSite282;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite608;
HAnimSite609 := THAnimSiteNode.Create;
HAnimSite609.NameField := 'l_inclined_view';
HAnimSite609.Translation := Vector3(1.62,1.05,2.06);
HAnimSite609.Rotation := Vector4(-0.113,0.993,0.0347,0.671);
Viewpoint610 := TViewpointNode.Create;
Viewpoint610.Description := 'left inclined';
Viewpoint610.Position := Vector3(0,0,0);
{ .AddChildren }
HAnimSite609.AddChildren([Viewpoint610]);
{ .SetViewpoints }
HAnimHumanoid42.Viewpoints := HAnimSite609;
HAnimSite611 := THAnimSiteNode.Create;
HAnimSite611.NameField := 'r_inclined_view';
HAnimSite611.Translation := Vector3(-1.62,1.05,2.06);
HAnimSite611.Rotation := Vector4(-0.113,-0.993,0.0347,0.671);
Viewpoint612 := TViewpointNode.Create;
Viewpoint612.Description := 'right inclined';
Viewpoint612.Position := Vector3(0,0,0);
Viewpoint612.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite611.AddChildren([Viewpoint612]);
{ .SetViewpoints }
HAnimHumanoid42.Viewpoints := HAnimSite611;
HAnimSite613 := THAnimSiteNode.Create;
HAnimSite613.NameField := 'front_view';
HAnimSite613.Translation := Vector3(0,0.85,2.58);
Viewpoint614 := TViewpointNode.Create;
Viewpoint614.Description := 'front';
Viewpoint614.Position := Vector3(0,0,0);
Viewpoint614.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite613.AddChildren([Viewpoint614]);
{ .SetViewpoints }
HAnimHumanoid42.Viewpoints := HAnimSite613;
HAnimSite615 := THAnimSiteNode.Create;
HAnimSite615.NameField := 'back_view';
HAnimSite615.Translation := Vector3(0,0.85,-2.58);
HAnimSite615.Rotation := Vector4(0,1,0,3.14);
Viewpoint616 := TViewpointNode.Create;
Viewpoint616.Description := 'back';
Viewpoint616.Position := Vector3(0,0,0);
Viewpoint616.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite615.AddChildren([Viewpoint616]);
{ .SetViewpoints }
HAnimHumanoid42.Viewpoints := HAnimSite615;
HAnimSite617 := THAnimSiteNode.Create;
HAnimSite617.NameField := 'l_side_view';
HAnimSite617.Translation := Vector3(2.6,0.854,0);
HAnimSite617.Rotation := Vector4(0,1,0,1.5708);
Viewpoint618 := TViewpointNode.Create;
Viewpoint618.Description := 'left side';
Viewpoint618.Position := Vector3(0,0,0);
Viewpoint618.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite617.AddChildren([Viewpoint618]);
{ .SetViewpoints }
HAnimHumanoid42.Viewpoints := HAnimSite617;
HAnimSite619 := THAnimSiteNode.Create;
HAnimSite619.NameField := 'Top_view';
HAnimSite619.Translation := Vector3(0,3.5,0);
HAnimSite619.Rotation := Vector4(1,0,0,-1.57);
Viewpoint620 := TViewpointNode.Create;
Viewpoint620.Description := 'Top';
Viewpoint620.Position := Vector3(0,0,0);
Viewpoint620.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite619.AddChildren([Viewpoint620]);
{ .SetViewpoints }
HAnimHumanoid42.Viewpoints := HAnimSite619;
HAnimSite621 := THAnimSiteNode.Create;
HAnimSite621.NameField := 'front_close_view';
HAnimSite621.Translation := Vector3(0,0.854,1.575);
Viewpoint622 := TViewpointNode.Create;
Viewpoint622.Description := 'front close';
Viewpoint622.Position := Vector3(0,0,0);
Viewpoint622.CenterOfRotation := Vector3(0,0,1.575);
{ .AddChildren }
HAnimSite621.AddChildren([Viewpoint622]);
{ .SetViewpoints }
HAnimHumanoid42.Viewpoints := HAnimSite621;
HAnimSite623 := THAnimSiteNode.Create;
HAnimSite623.NameField := 'side_close_view';
HAnimSite623.Translation := Vector3(1.56,0.854,0);
HAnimSite623.Rotation := Vector4(0,1,0,1.5708);
Viewpoint624 := TViewpointNode.Create;
Viewpoint624.Description := 'side close';
Viewpoint624.Position := Vector3(0,0,0);
Viewpoint624.CenterOfRotation := Vector3(1.6,0,0);
{ .AddChildren }
HAnimSite623.AddChildren([Viewpoint624]);
{ .SetViewpoints }
HAnimHumanoid42.Viewpoints := HAnimSite623;
HAnimSite625 := THAnimSiteNode.Create;
HAnimSite625.NameField := 'head_front_close_view';
HAnimSite625.Translation := Vector3(0,1.5,1);
Viewpoint626 := TViewpointNode.Create;
Viewpoint626.Description := 'head front close';
Viewpoint626.Position := Vector3(0,0,0);
Viewpoint626.CenterOfRotation := Vector3(0,0,1);
{ .AddChildren }
HAnimSite625.AddChildren([Viewpoint626]);
{ .SetViewpoints }
HAnimHumanoid42.Viewpoints := HAnimSite625;
HAnimSite627 := THAnimSiteNode.Create;
HAnimSite627.NameField := 'chest_front_close_view';
HAnimSite627.Translation := Vector3(0,1.2,1);
Viewpoint628 := TViewpointNode.Create;
Viewpoint628.Description := 'chest front close';
Viewpoint628.Position := Vector3(0,0,0);
Viewpoint628.CenterOfRotation := Vector3(0,0,1);
{ .AddChildren }
HAnimSite627.AddChildren([Viewpoint628]);
{ .SetViewpoints }
HAnimHumanoid42.Viewpoints := HAnimSite627;
HAnimSite629 := THAnimSiteNode.Create;
HAnimSite629.NameField := 'pelvis_front_close_view';
HAnimSite629.Translation := Vector3(0,0.8,1);
Viewpoint630 := TViewpointNode.Create;
Viewpoint630.Description := 'pelvis front close';
Viewpoint630.Position := Vector3(0,0,0);
Viewpoint630.CenterOfRotation := Vector3(0,0,1);
{ .AddChildren }
HAnimSite629.AddChildren([Viewpoint630]);
{ .SetViewpoints }
HAnimHumanoid42.Viewpoints := HAnimSite629;
HAnimSite631 := THAnimSiteNode.Create;
HAnimSite631.NameField := 'knees_front_close_view';
HAnimSite631.Translation := Vector3(0,0.4,1);
Viewpoint632 := TViewpointNode.Create;
Viewpoint632.Description := 'knees front close';
Viewpoint632.Position := Vector3(0,0,0);
Viewpoint632.CenterOfRotation := Vector3(0,0.4,0);
{ .AddChildren }
HAnimSite631.AddChildren([Viewpoint632]);
{ .SetViewpoints }
HAnimHumanoid42.Viewpoints := HAnimSite631;
HAnimSite633 := THAnimSiteNode.Create;
HAnimSite633.NameField := 'feet_front_close_view';
HAnimSite633.Translation := Vector3(0,0,1);
Viewpoint634 := TViewpointNode.Create;
Viewpoint634.Description := 'feet front close';
Viewpoint634.Position := Vector3(0,0,0);
{ .AddChildren }
HAnimSite633.AddChildren([Viewpoint634]);
{ .SetViewpoints }
HAnimHumanoid42.Viewpoints := HAnimSite633;
HAnimSite635 := THAnimSiteNode.Create;
HAnimSite635.NameField := 'eye_level_view';
HAnimSite635.Translation := Vector3(0,1.6332,0.0502);
Viewpoint636 := TViewpointNode.Create;
Viewpoint636.Description := 'eye level looking forward';
Viewpoint636.Position := Vector3(0,0,0);
Viewpoint636.Orientation := Vector4(0,1,0,3.141593);
{ .AddChildren }
HAnimSite635.AddChildren([Viewpoint636]);
{ .SetViewpoints }
HAnimHumanoid42.Viewpoints := HAnimSite635;
HAnimSite637 := THAnimSiteNode.Create;
HAnimSite637 := HAnimSite176;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite637;
HAnimSite638 := THAnimSiteNode.Create;
HAnimSite638 := HAnimSite184;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite638;
HAnimSite639 := THAnimSiteNode.Create;
HAnimSite639 := HAnimSite216;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite639;
HAnimSite640 := THAnimSiteNode.Create;
HAnimSite640 := HAnimSite284;
{ .AddSites }
HAnimHumanoid42.Sites := HAnimSite640;
{ .AddChildren }
Group28.AddChildren([HAnimHumanoid42]);
{ .AddGroup }
X3D0.AddChildren([Group28]);
Result := X3D0;
end;
