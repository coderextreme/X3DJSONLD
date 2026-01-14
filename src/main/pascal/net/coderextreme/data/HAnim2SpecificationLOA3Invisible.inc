function HAnim2SpecificationLOA3Invisible: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group27: TGroupNode;
Background28: TBackgroundNode;
NavigationInfo29: TNavigationInfoNode;
Group30: TGroupNode;
WorldInfo31: TWorldInfoNode;
Viewpoint32: TViewpointNode;
Viewpoint33: TViewpointNode;
Viewpoint34: TViewpointNode;
Viewpoint35: TViewpointNode;
Viewpoint36: TViewpointNode;
Viewpoint37: TViewpointNode;
Viewpoint38: TViewpointNode;
Viewpoint39: TViewpointNode;
Viewpoint40: TViewpointNode;
HAnimHumanoid41: THAnimHumanoidNode;
MetadataSet42: TMetadataSetNode;
MetadataString43: TMetadataStringNode;
MetadataString44: TMetadataStringNode;
MetadataString45: TMetadataStringNode;
MetadataString46: TMetadataStringNode;
MetadataFloat47: TMetadataFloatNode;
MetadataString48: TMetadataStringNode;
MetadataString49: TMetadataStringNode;
HAnimJoint50: THAnimJointNode;
HAnimSegment51: THAnimSegmentNode;
HAnimJoint52: THAnimJointNode;
HAnimSegment53: THAnimSegmentNode;
HAnimSite54: THAnimSiteNode;
HAnimSite55: THAnimSiteNode;
HAnimSite56: THAnimSiteNode;
HAnimSite57: THAnimSiteNode;
HAnimSite58: THAnimSiteNode;
HAnimSite59: THAnimSiteNode;
HAnimSite60: THAnimSiteNode;
HAnimSite61: THAnimSiteNode;
HAnimSite62: THAnimSiteNode;
HAnimJoint63: THAnimJointNode;
HAnimSegment64: THAnimSegmentNode;
HAnimSite65: THAnimSiteNode;
HAnimSite66: THAnimSiteNode;
HAnimSite67: THAnimSiteNode;
HAnimJoint68: THAnimJointNode;
HAnimSegment69: THAnimSegmentNode;
HAnimJoint70: THAnimJointNode;
HAnimSegment71: THAnimSegmentNode;
HAnimSite72: THAnimSiteNode;
HAnimSite73: THAnimSiteNode;
HAnimSite74: THAnimSiteNode;
HAnimSite75: THAnimSiteNode;
HAnimJoint76: THAnimJointNode;
HAnimSegment77: THAnimSegmentNode;
HAnimJoint78: THAnimJointNode;
HAnimSegment79: THAnimSegmentNode;
HAnimSite80: THAnimSiteNode;
HAnimJoint81: THAnimJointNode;
HAnimSegment82: THAnimSegmentNode;
HAnimSite83: THAnimSiteNode;
HAnimSite84: THAnimSiteNode;
HAnimSite85: THAnimSiteNode;
HAnimJoint86: THAnimJointNode;
HAnimSegment87: THAnimSegmentNode;
HAnimSite88: THAnimSiteNode;
HAnimSite89: THAnimSiteNode;
HAnimSite90: THAnimSiteNode;
HAnimJoint91: THAnimJointNode;
HAnimSegment92: THAnimSegmentNode;
HAnimJoint93: THAnimJointNode;
HAnimSegment94: THAnimSegmentNode;
HAnimSite95: THAnimSiteNode;
HAnimSite96: THAnimSiteNode;
HAnimSite97: THAnimSiteNode;
HAnimSite98: THAnimSiteNode;
HAnimJoint99: THAnimJointNode;
HAnimSegment100: THAnimSegmentNode;
HAnimJoint101: THAnimJointNode;
HAnimSegment102: THAnimSegmentNode;
HAnimSite103: THAnimSiteNode;
HAnimJoint104: THAnimJointNode;
HAnimSegment105: THAnimSegmentNode;
HAnimSite106: THAnimSiteNode;
HAnimSite107: THAnimSiteNode;
HAnimSite108: THAnimSiteNode;
HAnimJoint109: THAnimJointNode;
HAnimSegment110: THAnimSegmentNode;
HAnimSite111: THAnimSiteNode;
HAnimSite112: THAnimSiteNode;
HAnimJoint113: THAnimJointNode;
HAnimSegment114: THAnimSegmentNode;
HAnimJoint115: THAnimJointNode;
HAnimSegment116: THAnimSegmentNode;
HAnimJoint117: THAnimJointNode;
HAnimSegment118: THAnimSegmentNode;
HAnimSite119: THAnimSiteNode;
HAnimSite120: THAnimSiteNode;
HAnimSite121: THAnimSiteNode;
HAnimJoint122: THAnimJointNode;
HAnimSegment123: THAnimSegmentNode;
HAnimJoint124: THAnimJointNode;
HAnimSegment125: THAnimSegmentNode;
HAnimJoint126: THAnimJointNode;
HAnimSegment127: THAnimSegmentNode;
HAnimJoint128: THAnimJointNode;
HAnimSegment129: THAnimSegmentNode;
HAnimSite130: THAnimSiteNode;
HAnimJoint131: THAnimJointNode;
HAnimSegment132: THAnimSegmentNode;
HAnimSite133: THAnimSiteNode;
HAnimSite134: THAnimSiteNode;
HAnimJoint135: THAnimJointNode;
HAnimSegment136: THAnimSegmentNode;
HAnimJoint137: THAnimJointNode;
HAnimSegment138: THAnimSegmentNode;
HAnimJoint139: THAnimJointNode;
HAnimSegment140: THAnimSegmentNode;
HAnimJoint141: THAnimJointNode;
HAnimSegment142: THAnimSegmentNode;
HAnimJoint143: THAnimJointNode;
HAnimSegment144: THAnimSegmentNode;
HAnimJoint145: THAnimJointNode;
HAnimSegment146: THAnimSegmentNode;
HAnimJoint147: THAnimJointNode;
HAnimSegment148: THAnimSegmentNode;
HAnimJoint149: THAnimJointNode;
HAnimSegment150: THAnimSegmentNode;
HAnimSite151: THAnimSiteNode;
HAnimSite152: THAnimSiteNode;
HAnimJoint153: THAnimJointNode;
HAnimSegment154: THAnimSegmentNode;
HAnimSite155: THAnimSiteNode;
HAnimSite156: THAnimSiteNode;
HAnimJoint157: THAnimJointNode;
HAnimSegment158: THAnimSegmentNode;
HAnimJoint159: THAnimJointNode;
HAnimSegment160: THAnimSegmentNode;
HAnimJoint161: THAnimJointNode;
HAnimSegment162: THAnimSegmentNode;
HAnimJoint163: THAnimJointNode;
HAnimSegment164: THAnimSegmentNode;
HAnimJoint165: THAnimJointNode;
HAnimSegment166: THAnimSegmentNode;
HAnimJoint167: THAnimJointNode;
HAnimSegment168: THAnimSegmentNode;
HAnimJoint169: THAnimJointNode;
HAnimSegment170: THAnimSegmentNode;
HAnimSite171: THAnimSiteNode;
HAnimSite172: THAnimSiteNode;
HAnimSite173: THAnimSiteNode;
HAnimSite174: THAnimSiteNode;
HAnimSite175: THAnimSiteNode;
HAnimSite176: THAnimSiteNode;
HAnimSite177: THAnimSiteNode;
HAnimSite178: THAnimSiteNode;
HAnimSite179: THAnimSiteNode;
HAnimSite180: THAnimSiteNode;
HAnimJoint181: THAnimJointNode;
HAnimSegment182: THAnimSegmentNode;
HAnimSite183: THAnimSiteNode;
Viewpoint184: TViewpointNode;
HAnimJoint185: THAnimJointNode;
HAnimSegment186: THAnimSegmentNode;
HAnimJoint187: THAnimJointNode;
HAnimSegment188: THAnimSegmentNode;
HAnimJoint189: THAnimJointNode;
HAnimSegment190: THAnimSegmentNode;
HAnimSite191: THAnimSiteNode;
Viewpoint192: TViewpointNode;
HAnimJoint193: THAnimJointNode;
HAnimSegment194: THAnimSegmentNode;
HAnimJoint195: THAnimJointNode;
HAnimSegment196: THAnimSegmentNode;
HAnimJoint197: THAnimJointNode;
HAnimSegment198: THAnimSegmentNode;
HAnimSite199: THAnimSiteNode;
HAnimSite200: THAnimSiteNode;
HAnimJoint201: THAnimJointNode;
HAnimSegment202: THAnimSegmentNode;
HAnimSite203: THAnimSiteNode;
HAnimSite204: THAnimSiteNode;
HAnimSite205: THAnimSiteNode;
HAnimSite206: THAnimSiteNode;
HAnimJoint207: THAnimJointNode;
HAnimSegment208: THAnimSegmentNode;
HAnimJoint209: THAnimJointNode;
HAnimSegment210: THAnimSegmentNode;
HAnimSite211: THAnimSiteNode;
HAnimJoint212: THAnimJointNode;
HAnimSegment213: THAnimSegmentNode;
HAnimSite214: THAnimSiteNode;
HAnimSite215: THAnimSiteNode;
HAnimSite216: THAnimSiteNode;
HAnimSite217: THAnimSiteNode;
HAnimJoint218: THAnimJointNode;
HAnimSegment219: THAnimSegmentNode;
HAnimSite220: THAnimSiteNode;
HAnimSite221: THAnimSiteNode;
HAnimSite222: THAnimSiteNode;
HAnimSite223: THAnimSiteNode;
Viewpoint224: TViewpointNode;
HAnimJoint225: THAnimJointNode;
HAnimSegment226: THAnimSegmentNode;
HAnimJoint227: THAnimJointNode;
HAnimSegment228: THAnimSegmentNode;
HAnimJoint229: THAnimJointNode;
HAnimSegment230: THAnimSegmentNode;
HAnimSite231: THAnimSiteNode;
HAnimJoint232: THAnimJointNode;
HAnimSegment233: THAnimSegmentNode;
HAnimJoint234: THAnimJointNode;
HAnimSegment235: THAnimSegmentNode;
HAnimJoint236: THAnimJointNode;
HAnimSegment237: THAnimSegmentNode;
HAnimJoint238: THAnimJointNode;
HAnimSegment239: THAnimSegmentNode;
HAnimSite240: THAnimSiteNode;
HAnimSite241: THAnimSiteNode;
HAnimJoint242: THAnimJointNode;
HAnimSegment243: THAnimSegmentNode;
HAnimJoint244: THAnimJointNode;
HAnimSegment245: THAnimSegmentNode;
HAnimJoint246: THAnimJointNode;
HAnimSegment247: THAnimSegmentNode;
HAnimJoint248: THAnimJointNode;
HAnimSegment249: THAnimSegmentNode;
HAnimSite250: THAnimSiteNode;
HAnimJoint251: THAnimJointNode;
HAnimSegment252: THAnimSegmentNode;
HAnimJoint253: THAnimJointNode;
HAnimSegment254: THAnimSegmentNode;
HAnimJoint255: THAnimJointNode;
HAnimSegment256: THAnimSegmentNode;
HAnimJoint257: THAnimJointNode;
HAnimSegment258: THAnimSegmentNode;
HAnimSite259: THAnimSiteNode;
HAnimJoint260: THAnimJointNode;
HAnimSegment261: THAnimSegmentNode;
HAnimJoint262: THAnimJointNode;
HAnimSegment263: THAnimSegmentNode;
HAnimJoint264: THAnimJointNode;
HAnimSegment265: THAnimSegmentNode;
HAnimJoint266: THAnimJointNode;
HAnimSegment267: THAnimSegmentNode;
HAnimSite268: THAnimSiteNode;
HAnimJoint269: THAnimJointNode;
HAnimSegment270: THAnimSegmentNode;
HAnimSite271: THAnimSiteNode;
HAnimSite272: THAnimSiteNode;
HAnimSite273: THAnimSiteNode;
HAnimSite274: THAnimSiteNode;
HAnimJoint275: THAnimJointNode;
HAnimSegment276: THAnimSegmentNode;
HAnimJoint277: THAnimJointNode;
HAnimSegment278: THAnimSegmentNode;
HAnimSite279: THAnimSiteNode;
HAnimJoint280: THAnimJointNode;
HAnimSegment281: THAnimSegmentNode;
HAnimSite282: THAnimSiteNode;
HAnimSite283: THAnimSiteNode;
HAnimSite284: THAnimSiteNode;
HAnimSite285: THAnimSiteNode;
HAnimJoint286: THAnimJointNode;
HAnimSegment287: THAnimSegmentNode;
HAnimSite288: THAnimSiteNode;
HAnimSite289: THAnimSiteNode;
HAnimSite290: THAnimSiteNode;
HAnimSite291: THAnimSiteNode;
Viewpoint292: TViewpointNode;
HAnimJoint293: THAnimJointNode;
HAnimSegment294: THAnimSegmentNode;
HAnimJoint295: THAnimJointNode;
HAnimSegment296: THAnimSegmentNode;
HAnimJoint297: THAnimJointNode;
HAnimSegment298: THAnimSegmentNode;
HAnimSite299: THAnimSiteNode;
HAnimJoint300: THAnimJointNode;
HAnimSegment301: THAnimSegmentNode;
HAnimJoint302: THAnimJointNode;
HAnimSegment303: THAnimSegmentNode;
HAnimJoint304: THAnimJointNode;
HAnimSegment305: THAnimSegmentNode;
HAnimJoint306: THAnimJointNode;
HAnimSegment307: THAnimSegmentNode;
HAnimSite308: THAnimSiteNode;
HAnimSite309: THAnimSiteNode;
HAnimJoint310: THAnimJointNode;
HAnimSegment311: THAnimSegmentNode;
HAnimJoint312: THAnimJointNode;
HAnimSegment313: THAnimSegmentNode;
HAnimJoint314: THAnimJointNode;
HAnimSegment315: THAnimSegmentNode;
HAnimJoint316: THAnimJointNode;
HAnimSegment317: THAnimSegmentNode;
HAnimSite318: THAnimSiteNode;
HAnimJoint319: THAnimJointNode;
HAnimSegment320: THAnimSegmentNode;
HAnimJoint321: THAnimJointNode;
HAnimSegment322: THAnimSegmentNode;
HAnimJoint323: THAnimJointNode;
HAnimSegment324: THAnimSegmentNode;
HAnimJoint325: THAnimJointNode;
HAnimSegment326: THAnimSegmentNode;
HAnimSite327: THAnimSiteNode;
HAnimJoint328: THAnimJointNode;
HAnimSegment329: THAnimSegmentNode;
HAnimJoint330: THAnimJointNode;
HAnimSegment331: THAnimSegmentNode;
HAnimJoint332: THAnimJointNode;
HAnimSegment333: THAnimSegmentNode;
HAnimJoint334: THAnimJointNode;
HAnimSegment335: THAnimSegmentNode;
HAnimSite336: THAnimSiteNode;
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
HAnimJoint424: THAnimJointNode;
HAnimJoint425: THAnimJointNode;
HAnimJoint426: THAnimJointNode;
HAnimJoint427: THAnimJointNode;
HAnimJoint428: THAnimJointNode;
HAnimJoint429: THAnimJointNode;
HAnimJoint430: THAnimJointNode;
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
HAnimSegment518: THAnimSegmentNode;
HAnimSegment519: THAnimSegmentNode;
HAnimSegment520: THAnimSegmentNode;
HAnimSegment521: THAnimSegmentNode;
HAnimSegment522: THAnimSegmentNode;
HAnimSegment523: THAnimSegmentNode;
HAnimSegment524: THAnimSegmentNode;
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
HAnimSite610: THAnimSiteNode;
HAnimSite611: THAnimSiteNode;
HAnimSite612: THAnimSiteNode;
HAnimSite613: THAnimSiteNode;
HAnimSite614: THAnimSiteNode;
HAnimSite615: THAnimSiteNode;
HAnimSite616: THAnimSiteNode;
Viewpoint617: TViewpointNode;
HAnimSite618: THAnimSiteNode;
Viewpoint619: TViewpointNode;
HAnimSite620: THAnimSiteNode;
Viewpoint621: TViewpointNode;
HAnimSite622: THAnimSiteNode;
Viewpoint623: TViewpointNode;
HAnimSite624: THAnimSiteNode;
Viewpoint625: TViewpointNode;
HAnimSite626: THAnimSiteNode;
Viewpoint627: TViewpointNode;
HAnimSite628: THAnimSiteNode;
Viewpoint629: TViewpointNode;
HAnimSite630: THAnimSiteNode;
Viewpoint631: TViewpointNode;
HAnimSite632: THAnimSiteNode;
Viewpoint633: TViewpointNode;
HAnimSite634: THAnimSiteNode;
Viewpoint635: TViewpointNode;
HAnimSite636: THAnimSiteNode;
Viewpoint637: TViewpointNode;
HAnimSite638: THAnimSiteNode;
Viewpoint639: TViewpointNode;
HAnimSite640: THAnimSiteNode;
Viewpoint641: TViewpointNode;
HAnimSite642: THAnimSiteNode;
Viewpoint643: TViewpointNode;
HAnimSite644: THAnimSiteNode;
HAnimSite645: THAnimSiteNode;
HAnimSite646: THAnimSiteNode;
HAnimSite647: THAnimSiteNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'HAnim2SpecificationLOA3Invisible.x3d';
X3D0.Meta['description'] := 'HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.';
X3D0.Meta['reference'] := 'https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds';
X3D0.Meta['reference'] := 'HAnim2SpecificationLOA3Illustrated.x3d';
X3D0.Meta['reference'] := 'HAnim2SpecificationLOA3Animation.x3d';
X3D0.Meta['reference'] := 'HAnimSpecificationExampleChangeLog.txt';
X3D0.Meta['reference'] := 'Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.';
X3D0.Meta['reference'] := 'http://www.cis.upenn.edu/~badler/anthro/89-71.ps';
X3D0.Meta['reference'] := 'tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf';
X3D0.Meta['reference'] := 'originals/LOA3ExampleSourceWithDiamondsOriginal.wrl';
X3D0.Meta['reference'] := 'originals/LOA3ExampleSourceWithDiamondsOriginal.x3d';
X3D0.Meta['reference'] := 'originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d';
X3D0.Meta['reference'] := 'HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames';
X3D0.Meta['created'] := '24 April 2013';
X3D0.Meta['modified'] := 'Mon, 15 Sep 2025 05:20:09 GMT';
X3D0.Meta['creator'] := 'Matthew T. Beitler, Joe D. Williams, Don Brutzman';
X3D0.Meta['Image'] := 'images/BonesAllSkeletonFrontViewLOA1.png';
X3D0.Meta['Image'] := 'images/BonesAllSkeletonFrontViewLOA2.png';
X3D0.Meta['Image'] := 'images/BonesAllSkeletonFrontViewLOA3.png';
X3D0.Meta['TODO'] := 'move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations';
X3D0.Meta['TODO'] := 'insert MetadataInteger nodes indicating LOA for each Joint and Segment';
X3D0.Meta['translator'] := 'Don Brutzman and Joe Williams';
X3D0.Meta['generator'] := 'BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit';
Group27 := TGroupNode.Create;
Background28 := TBackgroundNode.Create;
Background28.SetSkyColor([Vector3(0.3,0.3,0.3)]);
{ .AddChildren }
Group27.AddChildren([Background28]);
NavigationInfo29 := TNavigationInfoNode.Create;
{ .AddChildren }
Group27.AddChildren([NavigationInfo29]);
Group30 := TGroupNode.Create;
WorldInfo31 := TWorldInfoNode.Create;
WorldInfo31.Title := 'HANIM 200x Default Joint Centers, LOA3';
WorldInfo31.SetInfo([' HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ']);
{ .AddChildren }
Group30.AddChildren([WorldInfo31]);
{ .AddChildren }
Group27.AddChildren([Group30]);
Viewpoint32 := TViewpointNode.Create;
Viewpoint32.Description := 'Humanoid LOA 3 Front';
Viewpoint32.Position := Vector3(0,0.4,4);
Viewpoint32.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group27.AddChildren([Viewpoint32]);
Viewpoint33 := TViewpointNode.Create;
Viewpoint33.Description := 'Humanoid LOA 3 Front Close';
Viewpoint33.Position := Vector3(0,0.8,2);
Viewpoint33.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group27.AddChildren([Viewpoint33]);
Viewpoint34 := TViewpointNode.Create;
Viewpoint34.Description := 'Humanoid LOA 3 Front Closer';
Viewpoint34.Position := Vector3(0,1.2,1);
Viewpoint34.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group27.AddChildren([Viewpoint34]);
Viewpoint35 := TViewpointNode.Create;
Viewpoint35.Description := 'Humanoid LOA 3 Front Face';
Viewpoint35.Position := Vector3(0,1.63,1);
Viewpoint35.CenterOfRotation := Vector3(0,1.5,0.0016);
{ .AddChildren }
Group27.AddChildren([Viewpoint35]);
Viewpoint36 := TViewpointNode.Create;
Viewpoint36.Description := 'Humanoid LOA 3 Right Side';
Viewpoint36.Position := Vector3(2.6,0.8,0);
Viewpoint36.Orientation := Vector4(0,1,0,1.5708);
Viewpoint36.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group27.AddChildren([Viewpoint36]);
Viewpoint37 := TViewpointNode.Create;
Viewpoint37.Description := 'Humanoid LOA 3 Right Side Close';
Viewpoint37.Position := Vector3(1,0.8,0.5);
Viewpoint37.Orientation := Vector4(0,1,0,1.2);
Viewpoint37.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group27.AddChildren([Viewpoint37]);
Viewpoint38 := TViewpointNode.Create;
Viewpoint38.Description := 'Humanoid LOA 3 Left Side Close';
Viewpoint38.Position := Vector3(-1,0.8,0.5);
Viewpoint38.Orientation := Vector4(0,1,0,-1.2);
Viewpoint38.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group27.AddChildren([Viewpoint38]);
Viewpoint39 := TViewpointNode.Create;
Viewpoint39.Description := 'Humanoid LOA 3 Left Side';
Viewpoint39.Position := Vector3(-2.6,0.8,0);
Viewpoint39.Orientation := Vector4(0,1,0,-1.5708);
Viewpoint39.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group27.AddChildren([Viewpoint39]);
Viewpoint40 := TViewpointNode.Create;
Viewpoint40.Description := 'Humanoid LOA 3 Top';
Viewpoint40.Position := Vector3(0,3.5,0);
Viewpoint40.Orientation := Vector4(1,0,0,-1.5708);
Viewpoint40.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group27.AddChildren([Viewpoint40]);
HAnimHumanoid41 := THAnimHumanoidNode.Create;
HAnimHumanoid41.NameField := 'humanoid';
HAnimHumanoid41.Loa := 3;
MetadataSet42 := TMetadataSetNode.Create;
MetadataSet42.NameField := 'HAnimHumanoid.info';
MetadataSet42.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid';
MetadataString43 := TMetadataStringNode.Create;
MetadataString43.NameField := 'authorName';
{ .SetValue }
MetadataSet42.Value := MetadataString43;
MetadataString44 := TMetadataStringNode.Create;
MetadataString44.NameField := 'authorEmail';
{ .SetValue }
MetadataSet42.Value := MetadataString44;
MetadataString45 := TMetadataStringNode.Create;
MetadataString45.NameField := 'copyright';
{ .SetValue }
MetadataSet42.Value := MetadataString45;
MetadataString46 := TMetadataStringNode.Create;
MetadataString46.NameField := 'creationDate';
{ .SetValue }
MetadataSet42.Value := MetadataString46;
MetadataFloat47 := TMetadataFloatNode.Create;
MetadataFloat47.NameField := 'height';
MetadataFloat47.SetValue([1.7504]);
{ .SetValue }
MetadataSet42.Value := MetadataFloat47;
MetadataString48 := TMetadataStringNode.Create;
MetadataString48.NameField := 'humanoidVersion';
{ .SetValue }
MetadataSet42.Value := MetadataString48;
MetadataString49 := TMetadataStringNode.Create;
MetadataString49.NameField := 'usageRestrictions';
{ .SetValue }
MetadataSet42.Value := MetadataString49;
{ .SetMetadata }
HAnimHumanoid41.Metadata := MetadataSet42;
HAnimJoint50 := THAnimJointNode.Create;
HAnimJoint50.NameField := 'humanoid_root';
HAnimJoint50.Center := Vector3(0,0.824,0.0277);
HAnimSegment51 := THAnimSegmentNode.Create;
HAnimSegment51.NameField := 'sacrum';
{ .AddChildren }
HAnimJoint50.AddChildren([HAnimSegment51]);
HAnimJoint52 := THAnimJointNode.Create;
HAnimJoint52.NameField := 'sacroiliac';
HAnimJoint52.Center := Vector3(0,0.9149,0.0016);
HAnimSegment53 := THAnimSegmentNode.Create;
HAnimSegment53.NameField := 'pelvis';
HAnimSite54 := THAnimSiteNode.Create;
HAnimSite54.NameField := 'r_iliocristale_pt';
HAnimSite54.Translation := Vector3(-0.1525,1.0628,0.0035);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite54]);
HAnimSite55 := THAnimSiteNode.Create;
HAnimSite55.NameField := 'r_trochanterion_pt';
HAnimSite55.Translation := Vector3(-0.1689,0.8419,0.0352);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite55]);
HAnimSite56 := THAnimSiteNode.Create;
HAnimSite56.NameField := 'l_iliocristale_pt';
HAnimSite56.Translation := Vector3(0.1612,1.0537,0.0008);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite56]);
HAnimSite57 := THAnimSiteNode.Create;
HAnimSite57.NameField := 'l_trochanterion_pt';
HAnimSite57.Translation := Vector3(0.1677,0.8336,0.0303);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite57]);
HAnimSite58 := THAnimSiteNode.Create;
HAnimSite58.NameField := 'r_asis_pt';
HAnimSite58.Translation := Vector3(-0.0887,1.0021,0.1112);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite58]);
HAnimSite59 := THAnimSiteNode.Create;
HAnimSite59.NameField := 'l_asis_pt';
HAnimSite59.Translation := Vector3(0.0925,0.9983,0.1052);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite59]);
HAnimSite60 := THAnimSiteNode.Create;
HAnimSite60.NameField := 'r_psis_pt';
HAnimSite60.Translation := Vector3(-0.0716,1.019,-0.1138);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite60]);
HAnimSite61 := THAnimSiteNode.Create;
HAnimSite61.NameField := 'l_psis_pt';
HAnimSite61.Translation := Vector3(0.0774,1.019,-0.1151);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite61]);
HAnimSite62 := THAnimSiteNode.Create;
HAnimSite62.NameField := 'crotch_pt';
HAnimSite62.Translation := Vector3(0.0034,0.8266,0.0257);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite62]);
{ .AddChildren }
HAnimJoint52.AddChildren([HAnimSegment53]);
HAnimJoint63 := THAnimJointNode.Create;
HAnimJoint63.NameField := 'l_hip';
HAnimJoint63.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimSegment64 := THAnimSegmentNode.Create;
HAnimSegment64.NameField := 'l_thigh';
HAnimSite65 := THAnimSiteNode.Create;
HAnimSite65.NameField := 'l_knee_crease_pt';
HAnimSite65.Translation := Vector3(0.0993,0.4881,-0.0309);
{ .AddChildren }
HAnimSegment64.AddChildren([HAnimSite65]);
HAnimSite66 := THAnimSiteNode.Create;
HAnimSite66.NameField := 'l_femoral_lateral_epicondyle_pt';
HAnimSite66.Translation := Vector3(0.1598,0.4967,0.0297);
{ .AddChildren }
HAnimSegment64.AddChildren([HAnimSite66]);
HAnimSite67 := THAnimSiteNode.Create;
HAnimSite67.NameField := 'l_femoral_medial_epicondyle_pt';
HAnimSite67.Translation := Vector3(0.0398,0.4946,0.0303);
{ .AddChildren }
HAnimSegment64.AddChildren([HAnimSite67]);
{ .AddChildren }
HAnimJoint63.AddChildren([HAnimSegment64]);
HAnimJoint68 := THAnimJointNode.Create;
HAnimJoint68.NameField := 'l_knee';
HAnimJoint68.Center := Vector3(0.104,0.4867,0.0308);
HAnimSegment69 := THAnimSegmentNode.Create;
HAnimSegment69.NameField := 'l_calf';
{ .AddChildren }
HAnimJoint68.AddChildren([HAnimSegment69]);
HAnimJoint70 := THAnimJointNode.Create;
HAnimJoint70.NameField := 'l_talocrural';
HAnimJoint70.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimSegment71 := THAnimSegmentNode.Create;
HAnimSegment71.NameField := 'l_talus';
HAnimSite72 := THAnimSiteNode.Create;
HAnimSite72.NameField := 'l_lateral_malleolus_pt';
HAnimSite72.Translation := Vector3(0.1308,0.0597,-0.1032);
{ .AddChildren }
HAnimSegment71.AddChildren([HAnimSite72]);
HAnimSite73 := THAnimSiteNode.Create;
HAnimSite73.NameField := 'l_medial_malleolus_pt';
HAnimSite73.Translation := Vector3(0.089,0.0716,-0.0881);
{ .AddChildren }
HAnimSegment71.AddChildren([HAnimSite73]);
HAnimSite74 := THAnimSiteNode.Create;
HAnimSite74.NameField := 'l_sphyrion_pt';
HAnimSite74.Translation := Vector3(0.089,0.0575,-0.0943);
{ .AddChildren }
HAnimSegment71.AddChildren([HAnimSite74]);
HAnimSite75 := THAnimSiteNode.Create;
HAnimSite75.NameField := 'l_calcaneus_posterior_pt';
HAnimSite75.Translation := Vector3(0.0974,0.0259,-0.1171);
{ .AddChildren }
HAnimSegment71.AddChildren([HAnimSite75]);
{ .AddChildren }
HAnimJoint70.AddChildren([HAnimSegment71]);
HAnimJoint76 := THAnimJointNode.Create;
HAnimJoint76.NameField := 'l_tarsometatarsal_2';
HAnimJoint76.Center := Vector3(0.1086,0.0001,-0.0368);
HAnimSegment77 := THAnimSegmentNode.Create;
HAnimSegment77.NameField := 'l_metatarsal_2';
{ .AddChildren }
HAnimJoint76.AddChildren([HAnimSegment77]);
HAnimJoint78 := THAnimJointNode.Create;
HAnimJoint78.NameField := 'l_metatarsophalangeal_2';
HAnimJoint78.Center := Vector3(0.1086,0.0001,0.0368);
HAnimSegment79 := THAnimSegmentNode.Create;
HAnimSegment79.NameField := 'l_tarsal_proximal_phalanx_2';
HAnimSite80 := THAnimSiteNode.Create;
HAnimSite80.NameField := 'l_metatarsal_phalanx_1_pt';
HAnimSite80.Translation := Vector3(0.0816,0.0232,0.0106);
{ .AddChildren }
HAnimSegment79.AddChildren([HAnimSite80]);
{ .AddChildren }
HAnimJoint78.AddChildren([HAnimSegment79]);
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.NameField := 'l_tarsal_distal_interphalangeal_2';
HAnimJoint81.Center := Vector3(0.1086,0,0.0762);
HAnimSegment82 := THAnimSegmentNode.Create;
HAnimSegment82.NameField := 'l_tarsal_distal_phalanx_2';
HAnimSite83 := THAnimSiteNode.Create;
HAnimSite83.NameField := 'l_forefoot_tip';
HAnimSite83.Translation := Vector3(0.1354,0.0016,0.1476);
{ .AddChildren }
HAnimSegment82.AddChildren([HAnimSite83]);
HAnimSite84 := THAnimSiteNode.Create;
HAnimSite84.NameField := 'l_metatarsal_phalanx_5_pt';
HAnimSite84.Translation := Vector3(0.1825,0.007,0.0928);
{ .AddChildren }
HAnimSegment82.AddChildren([HAnimSite84]);
HAnimSite85 := THAnimSiteNode.Create;
HAnimSite85.NameField := 'l_tarsal_distal_phalanx_2_pt';
HAnimSite85.Translation := Vector3(0.1195,0.0079,0.1433);
{ .AddChildren }
HAnimSegment82.AddChildren([HAnimSite85]);
{ .AddChildren }
HAnimJoint81.AddChildren([HAnimSegment82]);
{ .AddChildren }
HAnimJoint78.AddChildren([HAnimJoint81]);
{ .AddChildren }
HAnimJoint76.AddChildren([HAnimJoint78]);
{ .AddChildren }
HAnimJoint70.AddChildren([HAnimJoint76]);
{ .AddChildren }
HAnimJoint68.AddChildren([HAnimJoint70]);
{ .AddChildren }
HAnimJoint63.AddChildren([HAnimJoint68]);
{ .AddChildren }
HAnimJoint52.AddChildren([HAnimJoint63]);
HAnimJoint86 := THAnimJointNode.Create;
HAnimJoint86.NameField := 'r_hip';
HAnimJoint86.Center := Vector3(-0.0961,0.9124,-0.0001);
HAnimSegment87 := THAnimSegmentNode.Create;
HAnimSegment87.NameField := 'r_thigh';
HAnimSite88 := THAnimSiteNode.Create;
HAnimSite88.NameField := 'r_knee_crease_pt';
HAnimSite88.Translation := Vector3(-0.0825,0.4932,-0.0326);
{ .AddChildren }
HAnimSegment87.AddChildren([HAnimSite88]);
HAnimSite89 := THAnimSiteNode.Create;
HAnimSite89.NameField := 'r_femoral_lateral_epicondyle_pt';
HAnimSite89.Translation := Vector3(-0.1421,0.4992,0.031);
{ .AddChildren }
HAnimSegment87.AddChildren([HAnimSite89]);
HAnimSite90 := THAnimSiteNode.Create;
HAnimSite90.NameField := 'r_femoral_medial_epicondyle_pt';
HAnimSite90.Translation := Vector3(-0.0221,0.5014,0.0289);
{ .AddChildren }
HAnimSegment87.AddChildren([HAnimSite90]);
{ .AddChildren }
HAnimJoint86.AddChildren([HAnimSegment87]);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.NameField := 'r_knee';
HAnimJoint91.Center := Vector3(-0.104,0.4867,0.0308);
HAnimSegment92 := THAnimSegmentNode.Create;
HAnimSegment92.NameField := 'r_calf';
{ .AddChildren }
HAnimJoint91.AddChildren([HAnimSegment92]);
HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.NameField := 'r_talocrural';
HAnimJoint93.Center := Vector3(-0.1101,0.0656,-0.0736);
HAnimSegment94 := THAnimSegmentNode.Create;
HAnimSegment94.NameField := 'r_talus';
HAnimSite95 := THAnimSiteNode.Create;
HAnimSite95.NameField := 'r_lateral_malleolus_pt';
HAnimSite95.Translation := Vector3(-0.1006,0.0658,-0.1075);
{ .AddChildren }
HAnimSegment94.AddChildren([HAnimSite95]);
HAnimSite96 := THAnimSiteNode.Create;
HAnimSite96.NameField := 'r_medial_malleolus_pt';
HAnimSite96.Translation := Vector3(-0.0591,0.076,-0.0928);
{ .AddChildren }
HAnimSegment94.AddChildren([HAnimSite96]);
HAnimSite97 := THAnimSiteNode.Create;
HAnimSite97.NameField := 'r_sphyrion_pt';
HAnimSite97.Translation := Vector3(-0.0603,0.061,-0.1002);
{ .AddChildren }
HAnimSegment94.AddChildren([HAnimSite97]);
HAnimSite98 := THAnimSiteNode.Create;
HAnimSite98.NameField := 'r_calcaneus_posterior_pt';
HAnimSite98.Translation := Vector3(-0.0692,0.0297,-0.1221);
{ .AddChildren }
HAnimSegment94.AddChildren([HAnimSite98]);
{ .AddChildren }
HAnimJoint93.AddChildren([HAnimSegment94]);
HAnimJoint99 := THAnimJointNode.Create;
HAnimJoint99.NameField := 'r_tarsometatarsal_2';
HAnimJoint99.Center := Vector3(-0.1086,0.0001,-0.0368);
HAnimSegment100 := THAnimSegmentNode.Create;
HAnimSegment100.NameField := 'r_metatarsal_2';
{ .AddChildren }
HAnimJoint99.AddChildren([HAnimSegment100]);
HAnimJoint101 := THAnimJointNode.Create;
HAnimJoint101.NameField := 'r_metatarsophalangeal_2';
HAnimJoint101.Center := Vector3(-0.1086,0.0001,0.0368);
HAnimSegment102 := THAnimSegmentNode.Create;
HAnimSegment102.NameField := 'r_tarsal_proximal_phalanx_2';
HAnimSite103 := THAnimSiteNode.Create;
HAnimSite103.NameField := 'r_metatarsal_phalanx_1_pt';
HAnimSite103.Translation := Vector3(-0.0521,0.026,0.0127);
{ .AddChildren }
HAnimSegment102.AddChildren([HAnimSite103]);
{ .AddChildren }
HAnimJoint101.AddChildren([HAnimSegment102]);
HAnimJoint104 := THAnimJointNode.Create;
HAnimJoint104.NameField := 'r_tarsal_distal_interphalangeal_2';
HAnimJoint104.Center := Vector3(-0.1086,0,0.0762);
HAnimSegment105 := THAnimSegmentNode.Create;
HAnimSegment105.NameField := 'r_tarsal_distal_phalanx_2';
HAnimSite106 := THAnimSiteNode.Create;
HAnimSite106.NameField := 'r_forefoot_tip';
HAnimSite106.Translation := Vector3(-0.1043,0.0227,0.145);
{ .AddChildren }
HAnimSegment105.AddChildren([HAnimSite106]);
HAnimSite107 := THAnimSiteNode.Create;
HAnimSite107.NameField := 'r_metatarsal_phalanx_5_pt';
HAnimSite107.Translation := Vector3(-0.1523,0.0166,0.0895);
{ .AddChildren }
HAnimSegment105.AddChildren([HAnimSite107]);
HAnimSite108 := THAnimSiteNode.Create;
HAnimSite108.NameField := 'r_tarsal_distal_phalanx_2_pt';
HAnimSite108.Translation := Vector3(-0.0883,0.0134,0.1383);
{ .AddChildren }
HAnimSegment105.AddChildren([HAnimSite108]);
{ .AddChildren }
HAnimJoint104.AddChildren([HAnimSegment105]);
{ .AddChildren }
HAnimJoint101.AddChildren([HAnimJoint104]);
{ .AddChildren }
HAnimJoint99.AddChildren([HAnimJoint101]);
{ .AddChildren }
HAnimJoint93.AddChildren([HAnimJoint99]);
{ .AddChildren }
HAnimJoint91.AddChildren([HAnimJoint93]);
{ .AddChildren }
HAnimJoint86.AddChildren([HAnimJoint91]);
{ .AddChildren }
HAnimJoint52.AddChildren([HAnimJoint86]);
{ .AddChildren }
HAnimJoint50.AddChildren([HAnimJoint52]);
HAnimJoint109 := THAnimJointNode.Create;
HAnimJoint109.NameField := 'vl5';
HAnimJoint109.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimSegment110 := THAnimSegmentNode.Create;
HAnimSegment110.NameField := 'l5';
HAnimSite111 := THAnimSiteNode.Create;
HAnimSite111.NameField := 'waist_preferred_posterior_pt';
HAnimSite111.Translation := Vector3(0,1.0915,-0.1091);
{ .AddChildren }
HAnimSegment110.AddChildren([HAnimSite111]);
HAnimSite112 := THAnimSiteNode.Create;
HAnimSite112.NameField := 'navel_pt';
HAnimSite112.Translation := Vector3(0.0069,1.0966,0.1017);
{ .AddChildren }
HAnimSegment110.AddChildren([HAnimSite112]);
{ .AddChildren }
HAnimJoint109.AddChildren([HAnimSegment110]);
HAnimJoint113 := THAnimJointNode.Create;
HAnimJoint113.NameField := 'vl4';
HAnimJoint113.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimSegment114 := THAnimSegmentNode.Create;
HAnimSegment114.NameField := 'l4';
{ .AddChildren }
HAnimJoint113.AddChildren([HAnimSegment114]);
HAnimJoint115 := THAnimJointNode.Create;
HAnimJoint115.NameField := 'vl3';
HAnimJoint115.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimSegment116 := THAnimSegmentNode.Create;
HAnimSegment116.NameField := 'l3';
{ .AddChildren }
HAnimJoint115.AddChildren([HAnimSegment116]);
HAnimJoint117 := THAnimJointNode.Create;
HAnimJoint117.NameField := 'vl2';
HAnimJoint117.Center := Vector3(0.0045,1.1546,-0.08);
HAnimSegment118 := THAnimSegmentNode.Create;
HAnimSegment118.NameField := 'l2';
HAnimSite119 := THAnimSiteNode.Create;
HAnimSite119.NameField := 'r_rib10_pt';
HAnimSite119.Translation := Vector3(-0.0711,1.1941,0.1016);
{ .AddChildren }
HAnimSegment118.AddChildren([HAnimSite119]);
HAnimSite120 := THAnimSiteNode.Create;
HAnimSite120.NameField := 'l_rib10_pt';
HAnimSite120.Translation := Vector3(0.0871,1.1925,0.0992);
{ .AddChildren }
HAnimSegment118.AddChildren([HAnimSite120]);
HAnimSite121 := THAnimSiteNode.Create;
HAnimSite121.NameField := 'rib10_midspine_pt';
HAnimSite121.Translation := Vector3(0.0049,1.1908,-0.1113);
{ .AddChildren }
HAnimSegment118.AddChildren([HAnimSite121]);
{ .AddChildren }
HAnimJoint117.AddChildren([HAnimSegment118]);
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122.NameField := 'vl1';
HAnimJoint122.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimSegment123 := THAnimSegmentNode.Create;
HAnimSegment123.NameField := 'l1';
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimSegment123]);
HAnimJoint124 := THAnimJointNode.Create;
HAnimJoint124.NameField := 'vt12';
HAnimJoint124.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimSegment125 := THAnimSegmentNode.Create;
HAnimSegment125.NameField := 't12';
{ .AddChildren }
HAnimJoint124.AddChildren([HAnimSegment125]);
HAnimJoint126 := THAnimJointNode.Create;
HAnimJoint126.NameField := 'vt11';
HAnimJoint126.Center := Vector3(0.0053,1.2679,-0.081);
HAnimSegment127 := THAnimSegmentNode.Create;
HAnimSegment127.NameField := 't11';
{ .AddChildren }
HAnimJoint126.AddChildren([HAnimSegment127]);
HAnimJoint128 := THAnimJointNode.Create;
HAnimJoint128.NameField := 'vt10';
HAnimJoint128.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimSegment129 := THAnimSegmentNode.Create;
HAnimSegment129.NameField := 't10';
HAnimSite130 := THAnimSiteNode.Create;
HAnimSite130.NameField := 'substernale_pt';
HAnimSite130.Translation := Vector3(0.0085,1.2995,0.1147);
{ .AddChildren }
HAnimSegment129.AddChildren([HAnimSite130]);
{ .AddChildren }
HAnimJoint128.AddChildren([HAnimSegment129]);
HAnimJoint131 := THAnimJointNode.Create;
HAnimJoint131.NameField := 'vt9';
HAnimJoint131.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimSegment132 := THAnimSegmentNode.Create;
HAnimSegment132.NameField := 't9';
HAnimSite133 := THAnimSiteNode.Create;
HAnimSite133.NameField := 'r_thelion_pt';
HAnimSite133.Translation := Vector3(-0.0736,1.3385,0.1217);
{ .AddChildren }
HAnimSegment132.AddChildren([HAnimSite133]);
HAnimSite134 := THAnimSiteNode.Create;
HAnimSite134.NameField := 'l_thelion_pt';
HAnimSite134.Translation := Vector3(0.0918,1.3382,0.1192);
{ .AddChildren }
HAnimSegment132.AddChildren([HAnimSite134]);
{ .AddChildren }
HAnimJoint131.AddChildren([HAnimSegment132]);
HAnimJoint135 := THAnimJointNode.Create;
HAnimJoint135.NameField := 'vt8';
HAnimJoint135.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimSegment136 := THAnimSegmentNode.Create;
HAnimSegment136.NameField := 't8';
{ .AddChildren }
HAnimJoint135.AddChildren([HAnimSegment136]);
HAnimJoint137 := THAnimJointNode.Create;
HAnimJoint137.NameField := 'vt7';
HAnimJoint137.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimSegment138 := THAnimSegmentNode.Create;
HAnimSegment138.NameField := 't7';
{ .AddChildren }
HAnimJoint137.AddChildren([HAnimSegment138]);
HAnimJoint139 := THAnimJointNode.Create;
HAnimJoint139.NameField := 'vt6';
HAnimJoint139.Center := Vector3(0.0059,1.3866,-0.08);
HAnimSegment140 := THAnimSegmentNode.Create;
HAnimSegment140.NameField := 't6';
{ .AddChildren }
HAnimJoint139.AddChildren([HAnimSegment140]);
HAnimJoint141 := THAnimJointNode.Create;
HAnimJoint141.NameField := 'vt5';
HAnimJoint141.Center := Vector3(0.006,1.4102,-0.0745);
HAnimSegment142 := THAnimSegmentNode.Create;
HAnimSegment142.NameField := 't5';
{ .AddChildren }
HAnimJoint141.AddChildren([HAnimSegment142]);
HAnimJoint143 := THAnimJointNode.Create;
HAnimJoint143.NameField := 'vt4';
HAnimJoint143.Center := Vector3(0.0061,1.432,-0.0675);
HAnimSegment144 := THAnimSegmentNode.Create;
HAnimSegment144.NameField := 't4';
{ .AddChildren }
HAnimJoint143.AddChildren([HAnimSegment144]);
HAnimJoint145 := THAnimJointNode.Create;
HAnimJoint145.NameField := 'vt3';
HAnimJoint145.Center := Vector3(0.0062,1.4583,-0.057);
HAnimSegment146 := THAnimSegmentNode.Create;
HAnimSegment146.NameField := 't3';
{ .AddChildren }
HAnimJoint145.AddChildren([HAnimSegment146]);
HAnimJoint147 := THAnimJointNode.Create;
HAnimJoint147.NameField := 'vt2';
HAnimJoint147.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimSegment148 := THAnimSegmentNode.Create;
HAnimSegment148.NameField := 't2';
{ .AddChildren }
HAnimJoint147.AddChildren([HAnimSegment148]);
HAnimJoint149 := THAnimJointNode.Create;
HAnimJoint149.NameField := 'vt1';
HAnimJoint149.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimSegment150 := THAnimSegmentNode.Create;
HAnimSegment150.NameField := 't1';
HAnimSite151 := THAnimSiteNode.Create;
HAnimSite151.NameField := 'suprasternale_pt';
HAnimSite151.Translation := Vector3(0.0084,1.4714,0.0551);
{ .AddChildren }
HAnimSegment150.AddChildren([HAnimSite151]);
HAnimSite152 := THAnimSiteNode.Create;
HAnimSite152.NameField := 'cervicale_pt';
HAnimSite152.Translation := Vector3(0.0064,1.52,-0.0815);
{ .AddChildren }
HAnimSegment150.AddChildren([HAnimSite152]);
{ .AddChildren }
HAnimJoint149.AddChildren([HAnimSegment150]);
HAnimJoint153 := THAnimJointNode.Create;
HAnimJoint153.NameField := 'vc7';
HAnimJoint153.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimSegment154 := THAnimSegmentNode.Create;
HAnimSegment154.NameField := 'c7';
HAnimSite155 := THAnimSiteNode.Create;
HAnimSite155.NameField := 'r_neck_base_pt';
HAnimSite155.Translation := Vector3(-0.0419,1.5149,-0.022);
{ .AddChildren }
HAnimSegment154.AddChildren([HAnimSite155]);
HAnimSite156 := THAnimSiteNode.Create;
HAnimSite156.NameField := 'l_neck_base_pt';
HAnimSite156.Translation := Vector3(0.0646,1.5141,-0.038);
{ .AddChildren }
HAnimSegment154.AddChildren([HAnimSite156]);
{ .AddChildren }
HAnimJoint153.AddChildren([HAnimSegment154]);
HAnimJoint157 := THAnimJointNode.Create;
HAnimJoint157.NameField := 'vc6';
HAnimJoint157.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimSegment158 := THAnimSegmentNode.Create;
HAnimSegment158.NameField := 'c6';
{ .AddChildren }
HAnimJoint157.AddChildren([HAnimSegment158]);
HAnimJoint159 := THAnimJointNode.Create;
HAnimJoint159.NameField := 'vc5';
HAnimJoint159.Center := Vector3(0.0066,1.552,-0.0082);
HAnimSegment160 := THAnimSegmentNode.Create;
HAnimSegment160.NameField := 'c5';
{ .AddChildren }
HAnimJoint159.AddChildren([HAnimSegment160]);
HAnimJoint161 := THAnimJointNode.Create;
HAnimJoint161.NameField := 'vc4';
HAnimJoint161.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimSegment162 := THAnimSegmentNode.Create;
HAnimSegment162.NameField := 'c4';
{ .AddChildren }
HAnimJoint161.AddChildren([HAnimSegment162]);
HAnimJoint163 := THAnimJointNode.Create;
HAnimJoint163.NameField := 'vc3';
HAnimJoint163.Center := Vector3(0.0066,1.58,-0.0103);
HAnimSegment164 := THAnimSegmentNode.Create;
HAnimSegment164.NameField := 'c3';
{ .AddChildren }
HAnimJoint163.AddChildren([HAnimSegment164]);
HAnimJoint165 := THAnimJointNode.Create;
HAnimJoint165.NameField := 'vc2';
HAnimJoint165.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimSegment166 := THAnimSegmentNode.Create;
HAnimSegment166.NameField := 'c2';
{ .AddChildren }
HAnimJoint165.AddChildren([HAnimSegment166]);
HAnimJoint167 := THAnimJointNode.Create;
HAnimJoint167.NameField := 'vc1';
HAnimJoint167.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimSegment168 := THAnimSegmentNode.Create;
HAnimSegment168.NameField := 'c1';
{ .AddChildren }
HAnimJoint167.AddChildren([HAnimSegment168]);
HAnimJoint169 := THAnimJointNode.Create;
HAnimJoint169.NameField := 'skullbase';
HAnimJoint169.Center := Vector3(0.0044,1.6209,0.0236);
HAnimSegment170 := THAnimSegmentNode.Create;
HAnimSegment170.NameField := 'skull';
HAnimSite171 := THAnimSiteNode.Create;
HAnimSite171.NameField := 'skull_vertex_tip';
HAnimSite171.Translation := Vector3(0.005,1.7504,0.0055);
{ .AddChildren }
HAnimSegment170.AddChildren([HAnimSite171]);
HAnimSite172 := THAnimSiteNode.Create;
HAnimSite172.NameField := 'sellion_pt';
HAnimSite172.Translation := Vector3(0.0058,1.6316,0.0852);
{ .AddChildren }
HAnimSegment170.AddChildren([HAnimSite172]);
HAnimSite173 := THAnimSiteNode.Create;
HAnimSite173.NameField := 'r_infraorbitale_pt';
HAnimSite173.Translation := Vector3(-0.0237,1.6171,0.0752);
{ .AddChildren }
HAnimSegment170.AddChildren([HAnimSite173]);
HAnimSite174 := THAnimSiteNode.Create;
HAnimSite174.NameField := 'l_infraorbitale_pt';
HAnimSite174.Translation := Vector3(0.0341,1.6171,0.0752);
{ .AddChildren }
HAnimSegment170.AddChildren([HAnimSite174]);
HAnimSite175 := THAnimSiteNode.Create;
HAnimSite175.NameField := 'supramenton_pt';
HAnimSite175.Translation := Vector3(0.0061,1.541,0.0805);
{ .AddChildren }
HAnimSegment170.AddChildren([HAnimSite175]);
HAnimSite176 := THAnimSiteNode.Create;
HAnimSite176.NameField := 'r_tragion_pt';
HAnimSite176.Translation := Vector3(-0.0646,1.6347,0.0302);
{ .AddChildren }
HAnimSegment170.AddChildren([HAnimSite176]);
HAnimSite177 := THAnimSiteNode.Create;
HAnimSite177.NameField := 'r_gonion_pt';
HAnimSite177.Translation := Vector3(-0.052,1.5529,0.0347);
{ .AddChildren }
HAnimSegment170.AddChildren([HAnimSite177]);
HAnimSite178 := THAnimSiteNode.Create;
HAnimSite178.NameField := 'l_tragion_pt';
HAnimSite178.Translation := Vector3(0.0739,1.6348,0.0282);
{ .AddChildren }
HAnimSegment170.AddChildren([HAnimSite178]);
HAnimSite179 := THAnimSiteNode.Create;
HAnimSite179.NameField := 'l_gonion_pt';
HAnimSite179.Translation := Vector3(0.0631,1.553,0.033);
{ .AddChildren }
HAnimSegment170.AddChildren([HAnimSite179]);
HAnimSite180 := THAnimSiteNode.Create;
HAnimSite180.NameField := 'nuchale_pt';
HAnimSite180.Translation := Vector3(0.0039,1.5972,-0.0796);
{ .AddChildren }
HAnimSegment170.AddChildren([HAnimSite180]);
{ .AddChildren }
HAnimJoint169.AddChildren([HAnimSegment170]);
HAnimJoint181 := THAnimJointNode.Create;
HAnimJoint181.NameField := 'l_eyeball_joint';
HAnimJoint181.Center := Vector3(0.0336,1.6332,0.0502);
HAnimSegment182 := THAnimSegmentNode.Create;
HAnimSegment182.NameField := 'l_eyeball';
HAnimSite183 := THAnimSiteNode.Create;
HAnimSite183.NameField := 'l_eyeball_site_view';
HAnimSite183.Translation := Vector3(0.034,1.64,0.05);
Viewpoint184 := TViewpointNode.Create;
Viewpoint184.Description := 'l_eyeball_site_viewpoint looking forward';
Viewpoint184.Position := Vector3(0,0,0);
Viewpoint184.Orientation := Vector4(0,1,0,3.141593);
{ .AddChildren }
HAnimSite183.AddChildren([Viewpoint184]);
{ .AddChildren }
HAnimSegment182.AddChildren([HAnimSite183]);
{ .AddChildren }
HAnimJoint181.AddChildren([HAnimSegment182]);
{ .AddChildren }
HAnimJoint169.AddChildren([HAnimJoint181]);
HAnimJoint185 := THAnimJointNode.Create;
HAnimJoint185.NameField := 'l_eyelid_joint';
HAnimJoint185.Center := Vector3(0.0336,1.6332,0.0502);
HAnimSegment186 := THAnimSegmentNode.Create;
HAnimSegment186.NameField := 'l_eyelid';
{ .AddChildren }
HAnimJoint185.AddChildren([HAnimSegment186]);
{ .AddChildren }
HAnimJoint169.AddChildren([HAnimJoint185]);
HAnimJoint187 := THAnimJointNode.Create;
HAnimJoint187.NameField := 'l_eyebrow_joint';
HAnimJoint187.Center := Vector3(0.0336,1.635,0.0506);
HAnimSegment188 := THAnimSegmentNode.Create;
HAnimSegment188.NameField := 'l_eyebrow';
{ .AddChildren }
HAnimJoint187.AddChildren([HAnimSegment188]);
{ .AddChildren }
HAnimJoint169.AddChildren([HAnimJoint187]);
HAnimJoint189 := THAnimJointNode.Create;
HAnimJoint189.NameField := 'r_eyeball_joint';
HAnimJoint189.Center := Vector3(-0.0336,1.6332,0.0502);
HAnimSegment190 := THAnimSegmentNode.Create;
HAnimSegment190.NameField := 'r_eyeball';
HAnimSite191 := THAnimSiteNode.Create;
HAnimSite191.NameField := 'r_eyeball_site_view';
HAnimSite191.Translation := Vector3(-0.034,1.64,0.05);
Viewpoint192 := TViewpointNode.Create;
Viewpoint192.Description := 'r_eyeball_site_viewpoint looking forward';
Viewpoint192.Position := Vector3(0,0,0);
Viewpoint192.Orientation := Vector4(0,1,0,3.141593);
{ .AddChildren }
HAnimSite191.AddChildren([Viewpoint192]);
{ .AddChildren }
HAnimSegment190.AddChildren([HAnimSite191]);
{ .AddChildren }
HAnimJoint189.AddChildren([HAnimSegment190]);
{ .AddChildren }
HAnimJoint169.AddChildren([HAnimJoint189]);
HAnimJoint193 := THAnimJointNode.Create;
HAnimJoint193.NameField := 'r_eyelid_joint';
HAnimJoint193.Center := Vector3(-0.0336,1.6332,0.0502);
HAnimSegment194 := THAnimSegmentNode.Create;
HAnimSegment194.NameField := 'r_eyelid';
{ .AddChildren }
HAnimJoint193.AddChildren([HAnimSegment194]);
{ .AddChildren }
HAnimJoint169.AddChildren([HAnimJoint193]);
HAnimJoint195 := THAnimJointNode.Create;
HAnimJoint195.NameField := 'r_eyebrow_joint';
HAnimJoint195.Center := Vector3(-0.0336,1.635,0.0506);
HAnimSegment196 := THAnimSegmentNode.Create;
HAnimSegment196.NameField := 'r_eyebrow';
{ .AddChildren }
HAnimJoint195.AddChildren([HAnimSegment196]);
{ .AddChildren }
HAnimJoint169.AddChildren([HAnimJoint195]);
HAnimJoint197 := THAnimJointNode.Create;
HAnimJoint197.NameField := 'temporomandibular';
HAnimJoint197.Center := Vector3(0,1.63,0.015);
HAnimSegment198 := THAnimSegmentNode.Create;
HAnimSegment198.NameField := 'jaw';
HAnimSite199 := THAnimSiteNode.Create;
HAnimSite199.NameField := 'temporomandibular_l_site_pt';
HAnimSite199.Translation := Vector3(0.045,1.63,0);
{ .AddChildren }
HAnimSegment198.AddChildren([HAnimSite199]);
HAnimSite200 := THAnimSiteNode.Create;
HAnimSite200.NameField := 'temporomandibular_r_site_pt';
HAnimSite200.Translation := Vector3(-0.045,1.63,0);
{ .AddChildren }
HAnimSegment198.AddChildren([HAnimSite200]);
{ .AddChildren }
HAnimJoint197.AddChildren([HAnimSegment198]);
{ .AddChildren }
HAnimJoint169.AddChildren([HAnimJoint197]);
{ .AddChildren }
HAnimJoint167.AddChildren([HAnimJoint169]);
{ .AddChildren }
HAnimJoint165.AddChildren([HAnimJoint167]);
{ .AddChildren }
HAnimJoint163.AddChildren([HAnimJoint165]);
{ .AddChildren }
HAnimJoint161.AddChildren([HAnimJoint163]);
{ .AddChildren }
HAnimJoint159.AddChildren([HAnimJoint161]);
{ .AddChildren }
HAnimJoint157.AddChildren([HAnimJoint159]);
{ .AddChildren }
HAnimJoint153.AddChildren([HAnimJoint157]);
{ .AddChildren }
HAnimJoint149.AddChildren([HAnimJoint153]);
HAnimJoint201 := THAnimJointNode.Create;
HAnimJoint201.NameField := 'l_sternoclavicular';
HAnimJoint201.Center := Vector3(0.082,1.4488,-0.0353);
HAnimSegment202 := THAnimSegmentNode.Create;
HAnimSegment202.NameField := 'l_clavicle';
HAnimSite203 := THAnimSiteNode.Create;
HAnimSite203.NameField := 'l_clavicle_pt';
HAnimSite203.Translation := Vector3(0.0271,1.4943,0.0394);
{ .AddChildren }
HAnimSegment202.AddChildren([HAnimSite203]);
HAnimSite204 := THAnimSiteNode.Create;
HAnimSite204.NameField := 'l_acromion_pt';
HAnimSite204.Translation := Vector3(0.2032,1.476,-0.049);
{ .AddChildren }
HAnimSegment202.AddChildren([HAnimSite204]);
HAnimSite205 := THAnimSiteNode.Create;
HAnimSite205.NameField := 'l_axilla_proximal_pt';
HAnimSite205.Translation := Vector3(0.1777,1.4065,-0.0075);
{ .AddChildren }
HAnimSegment202.AddChildren([HAnimSite205]);
HAnimSite206 := THAnimSiteNode.Create;
HAnimSite206.NameField := 'l_axilla_distal_pt';
HAnimSite206.Translation := Vector3(0.1706,1.4072,-0.0875);
{ .AddChildren }
HAnimSegment202.AddChildren([HAnimSite206]);
{ .AddChildren }
HAnimJoint201.AddChildren([HAnimSegment202]);
HAnimJoint207 := THAnimJointNode.Create;
HAnimJoint207.NameField := 'l_acromioclavicular';
HAnimJoint207.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimSegment208 := THAnimSegmentNode.Create;
HAnimSegment208.NameField := 'l_scapula';
{ .AddChildren }
HAnimJoint207.AddChildren([HAnimSegment208]);
HAnimJoint209 := THAnimJointNode.Create;
HAnimJoint209.NameField := 'l_shoulder';
HAnimJoint209.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimSegment210 := THAnimSegmentNode.Create;
HAnimSegment210.NameField := 'l_upperarm';
HAnimSite211 := THAnimSiteNode.Create;
HAnimSite211.NameField := 'l_humeral_lateral_epicondyle_pt';
HAnimSite211.Translation := Vector3(0.228,1.1482,-0.11);
{ .AddChildren }
HAnimSegment210.AddChildren([HAnimSite211]);
{ .AddChildren }
HAnimJoint209.AddChildren([HAnimSegment210]);
HAnimJoint212 := THAnimJointNode.Create;
HAnimJoint212.NameField := 'l_elbow';
HAnimJoint212.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimSegment213 := THAnimSegmentNode.Create;
HAnimSegment213.NameField := 'l_forearm';
HAnimSite214 := THAnimSiteNode.Create;
HAnimSite214.NameField := 'l_radial_styloid_pt';
HAnimSite214.Translation := Vector3(0.1901,0.8645,-0.0415);
{ .AddChildren }
HAnimSegment213.AddChildren([HAnimSite214]);
HAnimSite215 := THAnimSiteNode.Create;
HAnimSite215.NameField := 'l_olecranon_pt';
HAnimSite215.Translation := Vector3(0.1962,1.1375,-0.1123);
{ .AddChildren }
HAnimSegment213.AddChildren([HAnimSite215]);
HAnimSite216 := THAnimSiteNode.Create;
HAnimSite216.NameField := 'l_humeral_medial_epicondyle_pt';
HAnimSite216.Translation := Vector3(0.1735,1.1272,-0.1113);
{ .AddChildren }
HAnimSegment213.AddChildren([HAnimSite216]);
HAnimSite217 := THAnimSiteNode.Create;
HAnimSite217.NameField := 'l_radiale_pt';
HAnimSite217.Translation := Vector3(0.2182,1.1212,-0.1167);
{ .AddChildren }
HAnimSegment213.AddChildren([HAnimSite217]);
{ .AddChildren }
HAnimJoint212.AddChildren([HAnimSegment213]);
HAnimJoint218 := THAnimJointNode.Create;
HAnimJoint218.NameField := 'l_radiocarpal';
HAnimJoint218.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimSegment219 := THAnimSegmentNode.Create;
HAnimSegment219.NameField := 'l_carpal';
HAnimSite220 := THAnimSiteNode.Create;
HAnimSite220.NameField := 'l_metacarpal_phalanx_2_pt';
HAnimSite220.Translation := Vector3(0.2009,0.8139,-0.0237);
{ .AddChildren }
HAnimSegment219.AddChildren([HAnimSite220]);
HAnimSite221 := THAnimSiteNode.Create;
HAnimSite221.NameField := 'l_ulnar_styloid_pt';
HAnimSite221.Translation := Vector3(0.2142,0.8529,-0.0648);
{ .AddChildren }
HAnimSegment219.AddChildren([HAnimSite221]);
HAnimSite222 := THAnimSiteNode.Create;
HAnimSite222.NameField := 'l_metacarpal_phalanx_5_pt';
HAnimSite222.Translation := Vector3(0.1929,0.786,-0.1122);
{ .AddChildren }
HAnimSegment219.AddChildren([HAnimSite222]);
HAnimSite223 := THAnimSiteNode.Create;
HAnimSite223.NameField := 'l_hand_front_view';
HAnimSite223.Translation := Vector3(0.3,0.75,0.45);
Viewpoint224 := TViewpointNode.Create;
Viewpoint224.Description := 'left hand front';
Viewpoint224.Position := Vector3(0,0,0);
Viewpoint224.CenterOfRotation := Vector3(0,0.7,0);
{ .AddChildren }
HAnimSite223.AddChildren([Viewpoint224]);
{ .AddChildren }
HAnimSegment219.AddChildren([HAnimSite223]);
{ .AddChildren }
HAnimJoint218.AddChildren([HAnimSegment219]);
HAnimJoint225 := THAnimJointNode.Create;
HAnimJoint225.NameField := 'l_carpometacarpal_1';
HAnimJoint225.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimSegment226 := THAnimSegmentNode.Create;
HAnimSegment226.NameField := 'l_metacarpal_1';
{ .AddChildren }
HAnimJoint225.AddChildren([HAnimSegment226]);
HAnimJoint227 := THAnimJointNode.Create;
HAnimJoint227.NameField := 'l_metacarpophalangeal_1';
HAnimJoint227.Center := Vector3(0.1951,0.8226,0.0246);
HAnimSegment228 := THAnimSegmentNode.Create;
HAnimSegment228.NameField := 'l_carpal_proximal_phalanx_1';
{ .AddChildren }
HAnimJoint227.AddChildren([HAnimSegment228]);
HAnimJoint229 := THAnimJointNode.Create;
HAnimJoint229.NameField := 'l_carpal_interphalangeal_1';
HAnimJoint229.Center := Vector3(0.1955,0.8159,0.0464);
HAnimSegment230 := THAnimSegmentNode.Create;
HAnimSegment230.NameField := 'l_carpal_distal_phalanx_1';
HAnimSite231 := THAnimSiteNode.Create;
HAnimSite231.NameField := 'l_carpal_distal_phalanx_1_tip';
HAnimSite231.Translation := Vector3(0.1982,0.8061,0.0759);
{ .AddChildren }
HAnimSegment230.AddChildren([HAnimSite231]);
{ .AddChildren }
HAnimJoint229.AddChildren([HAnimSegment230]);
{ .AddChildren }
HAnimJoint227.AddChildren([HAnimJoint229]);
{ .AddChildren }
HAnimJoint225.AddChildren([HAnimJoint227]);
{ .AddChildren }
HAnimJoint218.AddChildren([HAnimJoint225]);
HAnimJoint232 := THAnimJointNode.Create;
HAnimJoint232.NameField := 'l_carpometacarpal_2';
HAnimJoint232.Center := Vector3(0.1983,0.8024,-0.028);
HAnimSegment233 := THAnimSegmentNode.Create;
HAnimSegment233.NameField := 'l_metacarpal_2';
{ .AddChildren }
HAnimJoint232.AddChildren([HAnimSegment233]);
HAnimJoint234 := THAnimJointNode.Create;
HAnimJoint234.NameField := 'l_metacarpophalangeal_2';
HAnimJoint234.Center := Vector3(0.1983,0.7815,-0.028);
HAnimSegment235 := THAnimSegmentNode.Create;
HAnimSegment235.NameField := 'l_carpal_proximal_phalanx_2';
{ .AddChildren }
HAnimJoint234.AddChildren([HAnimSegment235]);
HAnimJoint236 := THAnimJointNode.Create;
HAnimJoint236.NameField := 'l_carpal_proximal_interphalangeal_2';
HAnimJoint236.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimSegment237 := THAnimSegmentNode.Create;
HAnimSegment237.NameField := 'l_carpal_middle_phalanx_2';
{ .AddChildren }
HAnimJoint236.AddChildren([HAnimSegment237]);
HAnimJoint238 := THAnimJointNode.Create;
HAnimJoint238.NameField := 'l_carpal_distal_interphalangeal_2';
HAnimJoint238.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimSegment239 := THAnimSegmentNode.Create;
HAnimSegment239.NameField := 'l_carpal_distal_phalanx_2';
HAnimSite240 := THAnimSiteNode.Create;
HAnimSite240.NameField := 'l_carpal_distal_phalanx_2_tip';
HAnimSite240.Translation := Vector3(0.2089,0.6858,-0.0245);
{ .AddChildren }
HAnimSegment239.AddChildren([HAnimSite240]);
HAnimSite241 := THAnimSiteNode.Create;
HAnimSite241.NameField := 'l_dactylion_pt';
HAnimSite241.Translation := Vector3(0.2056,0.6743,-0.0482);
{ .AddChildren }
HAnimSegment239.AddChildren([HAnimSite241]);
{ .AddChildren }
HAnimJoint238.AddChildren([HAnimSegment239]);
{ .AddChildren }
HAnimJoint236.AddChildren([HAnimJoint238]);
{ .AddChildren }
HAnimJoint234.AddChildren([HAnimJoint236]);
{ .AddChildren }
HAnimJoint232.AddChildren([HAnimJoint234]);
{ .AddChildren }
HAnimJoint218.AddChildren([HAnimJoint232]);
HAnimJoint242 := THAnimJointNode.Create;
HAnimJoint242.NameField := 'l_carpometacarpal_3';
HAnimJoint242.Center := Vector3(0.1987,0.8029,-0.053);
HAnimSegment243 := THAnimSegmentNode.Create;
HAnimSegment243.NameField := 'l_metacarpal_3';
{ .AddChildren }
HAnimJoint242.AddChildren([HAnimSegment243]);
HAnimJoint244 := THAnimJointNode.Create;
HAnimJoint244.NameField := 'l_metacarpophalangeal_3';
HAnimJoint244.Center := Vector3(0.1987,0.7818,-0.053);
HAnimSegment245 := THAnimSegmentNode.Create;
HAnimSegment245.NameField := 'l_carpal_proximal_phalanx_3';
{ .AddChildren }
HAnimJoint244.AddChildren([HAnimSegment245]);
HAnimJoint246 := THAnimJointNode.Create;
HAnimJoint246.NameField := 'l_carpal_proximal_interphalangeal_3';
HAnimJoint246.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimSegment247 := THAnimSegmentNode.Create;
HAnimSegment247.NameField := 'l_carpal_middle_phalanx_3';
{ .AddChildren }
HAnimJoint246.AddChildren([HAnimSegment247]);
HAnimJoint248 := THAnimJointNode.Create;
HAnimJoint248.NameField := 'l_carpal_distal_interphalangeal_3';
HAnimJoint248.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimSegment249 := THAnimSegmentNode.Create;
HAnimSegment249.NameField := 'l_carpal_distal_phalanx_3';
HAnimSite250 := THAnimSiteNode.Create;
HAnimSite250.NameField := 'l_carpal_distal_phalanx_3_tip';
HAnimSite250.Translation := Vector3(0.208,0.6731,-0.0491);
{ .AddChildren }
HAnimSegment249.AddChildren([HAnimSite250]);
{ .AddChildren }
HAnimJoint248.AddChildren([HAnimSegment249]);
{ .AddChildren }
HAnimJoint246.AddChildren([HAnimJoint248]);
{ .AddChildren }
HAnimJoint244.AddChildren([HAnimJoint246]);
{ .AddChildren }
HAnimJoint242.AddChildren([HAnimJoint244]);
{ .AddChildren }
HAnimJoint218.AddChildren([HAnimJoint242]);
HAnimJoint251 := THAnimJointNode.Create;
HAnimJoint251.NameField := 'l_carpometacarpal_4';
HAnimJoint251.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimSegment252 := THAnimSegmentNode.Create;
HAnimSegment252.NameField := 'l_metacarpal_4';
{ .AddChildren }
HAnimJoint251.AddChildren([HAnimSegment252]);
HAnimJoint253 := THAnimJointNode.Create;
HAnimJoint253.NameField := 'l_metacarpophalangeal_4';
HAnimJoint253.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimSegment254 := THAnimSegmentNode.Create;
HAnimSegment254.NameField := 'l_carpal_proximal_phalanx_4';
{ .AddChildren }
HAnimJoint253.AddChildren([HAnimSegment254]);
HAnimJoint255 := THAnimJointNode.Create;
HAnimJoint255.NameField := 'l_carpal_proximal_interphalangeal_4';
HAnimJoint255.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimSegment256 := THAnimSegmentNode.Create;
HAnimSegment256.NameField := 'l_carpal_middle_phalanx_4';
{ .AddChildren }
HAnimJoint255.AddChildren([HAnimSegment256]);
HAnimJoint257 := THAnimJointNode.Create;
HAnimJoint257.NameField := 'l_carpal_distal_interphalangeal_4';
HAnimJoint257.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimSegment258 := THAnimSegmentNode.Create;
HAnimSegment258.NameField := 'l_carpal_distal_phalanx_4';
HAnimSite259 := THAnimSiteNode.Create;
HAnimSite259.NameField := 'l_carpal_distal_phalanx_4_tip';
HAnimSite259.Translation := Vector3(0.2035,0.675,-0.0756);
{ .AddChildren }
HAnimSegment258.AddChildren([HAnimSite259]);
{ .AddChildren }
HAnimJoint257.AddChildren([HAnimSegment258]);
{ .AddChildren }
HAnimJoint255.AddChildren([HAnimJoint257]);
{ .AddChildren }
HAnimJoint253.AddChildren([HAnimJoint255]);
{ .AddChildren }
HAnimJoint251.AddChildren([HAnimJoint253]);
{ .AddChildren }
HAnimJoint218.AddChildren([HAnimJoint251]);
HAnimJoint260 := THAnimJointNode.Create;
HAnimJoint260.NameField := 'l_carpometacarpal_5';
HAnimJoint260.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimSegment261 := THAnimSegmentNode.Create;
HAnimSegment261.NameField := 'l_metacarpal_5';
{ .AddChildren }
HAnimJoint260.AddChildren([HAnimSegment261]);
HAnimJoint262 := THAnimJointNode.Create;
HAnimJoint262.NameField := 'l_metacarpophalangeal_5';
HAnimJoint262.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimSegment263 := THAnimSegmentNode.Create;
HAnimSegment263.NameField := 'l_carpal_proximal_phalanx_5';
{ .AddChildren }
HAnimJoint262.AddChildren([HAnimSegment263]);
HAnimJoint264 := THAnimJointNode.Create;
HAnimJoint264.NameField := 'l_carpal_proximal_interphalangeal_5';
HAnimJoint264.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimSegment265 := THAnimSegmentNode.Create;
HAnimSegment265.NameField := 'l_carpal_middle_phalanx_5';
{ .AddChildren }
HAnimJoint264.AddChildren([HAnimSegment265]);
HAnimJoint266 := THAnimJointNode.Create;
HAnimJoint266.NameField := 'l_carpal_distal_interphalangeal_5';
HAnimJoint266.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimSegment267 := THAnimSegmentNode.Create;
HAnimSegment267.NameField := 'l_carpal_distal_phalanx_5';
HAnimSite268 := THAnimSiteNode.Create;
HAnimSite268.NameField := 'l_carpal_distal_phalanx_5_tip';
HAnimSite268.Translation := Vector3(0.2014,0.7009,-0.1012);
{ .AddChildren }
HAnimSegment267.AddChildren([HAnimSite268]);
{ .AddChildren }
HAnimJoint266.AddChildren([HAnimSegment267]);
{ .AddChildren }
HAnimJoint264.AddChildren([HAnimJoint266]);
{ .AddChildren }
HAnimJoint262.AddChildren([HAnimJoint264]);
{ .AddChildren }
HAnimJoint260.AddChildren([HAnimJoint262]);
{ .AddChildren }
HAnimJoint218.AddChildren([HAnimJoint260]);
{ .AddChildren }
HAnimJoint212.AddChildren([HAnimJoint218]);
{ .AddChildren }
HAnimJoint209.AddChildren([HAnimJoint212]);
{ .AddChildren }
HAnimJoint207.AddChildren([HAnimJoint209]);
{ .AddChildren }
HAnimJoint201.AddChildren([HAnimJoint207]);
{ .AddChildren }
HAnimJoint149.AddChildren([HAnimJoint201]);
HAnimJoint269 := THAnimJointNode.Create;
HAnimJoint269.NameField := 'r_sternoclavicular';
HAnimJoint269.Center := Vector3(-0.082,1.4488,-0.0353);
HAnimSegment270 := THAnimSegmentNode.Create;
HAnimSegment270.NameField := 'r_clavicle';
HAnimSite271 := THAnimSiteNode.Create;
HAnimSite271.NameField := 'r_clavicle_pt';
HAnimSite271.Translation := Vector3(-0.0115,1.4943,0.04);
{ .AddChildren }
HAnimSegment270.AddChildren([HAnimSite271]);
HAnimSite272 := THAnimSiteNode.Create;
HAnimSite272.NameField := 'r_acromion_pt';
HAnimSite272.Translation := Vector3(-0.1905,1.4791,-0.0431);
{ .AddChildren }
HAnimSegment270.AddChildren([HAnimSite272]);
HAnimSite273 := THAnimSiteNode.Create;
HAnimSite273.NameField := 'r_axilla_proximal_pt';
HAnimSite273.Translation := Vector3(-0.1626,1.4072,-0.0031);
{ .AddChildren }
HAnimSegment270.AddChildren([HAnimSite273]);
HAnimSite274 := THAnimSiteNode.Create;
HAnimSite274.NameField := 'r_axilla_distal_pt';
HAnimSite274.Translation := Vector3(-0.1603,1.4098,-0.0826);
{ .AddChildren }
HAnimSegment270.AddChildren([HAnimSite274]);
{ .AddChildren }
HAnimJoint269.AddChildren([HAnimSegment270]);
HAnimJoint275 := THAnimJointNode.Create;
HAnimJoint275.NameField := 'r_acromioclavicular';
HAnimJoint275.Center := Vector3(-0.0962,1.4269,-0.0424);
HAnimSegment276 := THAnimSegmentNode.Create;
HAnimSegment276.NameField := 'r_scapula';
{ .AddChildren }
HAnimJoint275.AddChildren([HAnimSegment276]);
HAnimJoint277 := THAnimJointNode.Create;
HAnimJoint277.NameField := 'r_shoulder';
HAnimJoint277.Center := Vector3(-0.2029,1.4376,-0.0387);
HAnimSegment278 := THAnimSegmentNode.Create;
HAnimSegment278.NameField := 'r_upperarm';
HAnimSite279 := THAnimSiteNode.Create;
HAnimSite279.NameField := 'r_humeral_lateral_epicondyle_pt';
HAnimSite279.Translation := Vector3(-0.2224,1.1517,-0.1033);
{ .AddChildren }
HAnimSegment278.AddChildren([HAnimSite279]);
{ .AddChildren }
HAnimJoint277.AddChildren([HAnimSegment278]);
HAnimJoint280 := THAnimJointNode.Create;
HAnimJoint280.NameField := 'r_elbow';
HAnimJoint280.Center := Vector3(-0.2014,1.1357,-0.0682);
HAnimSegment281 := THAnimSegmentNode.Create;
HAnimSegment281.NameField := 'r_forearm';
HAnimSite282 := THAnimSiteNode.Create;
HAnimSite282.NameField := 'r_radial_styloid_pt';
HAnimSite282.Translation := Vector3(-0.1884,0.8676,-0.036);
{ .AddChildren }
HAnimSegment281.AddChildren([HAnimSite282]);
HAnimSite283 := THAnimSiteNode.Create;
HAnimSite283.NameField := 'r_olecranon_pt';
HAnimSite283.Translation := Vector3(-0.1907,1.1405,-0.1065);
{ .AddChildren }
HAnimSegment281.AddChildren([HAnimSite283]);
HAnimSite284 := THAnimSiteNode.Create;
HAnimSite284.NameField := 'r_humeral_medial_epicondyle_pt';
HAnimSite284.Translation := Vector3(-0.168,1.1298,-0.1062);
{ .AddChildren }
HAnimSegment281.AddChildren([HAnimSite284]);
HAnimSite285 := THAnimSiteNode.Create;
HAnimSite285.NameField := 'r_radiale_pt';
HAnimSite285.Translation := Vector3(-0.213,1.1305,-0.1091);
{ .AddChildren }
HAnimSegment281.AddChildren([HAnimSite285]);
{ .AddChildren }
HAnimJoint280.AddChildren([HAnimSegment281]);
HAnimJoint286 := THAnimJointNode.Create;
HAnimJoint286.NameField := 'r_radiocarpal';
HAnimJoint286.Center := Vector3(-0.1984,0.8663,-0.0583);
HAnimSegment287 := THAnimSegmentNode.Create;
HAnimSegment287.NameField := 'r_carpal';
HAnimSite288 := THAnimSiteNode.Create;
HAnimSite288.NameField := 'r_metacarpal_phalanx_2_pt';
HAnimSite288.Translation := Vector3(-0.1977,0.8169,-0.0177);
{ .AddChildren }
HAnimSegment287.AddChildren([HAnimSite288]);
HAnimSite289 := THAnimSiteNode.Create;
HAnimSite289.NameField := 'r_ulnar_styloid_pt';
HAnimSite289.Translation := Vector3(-0.2117,0.8562,-0.0584);
{ .AddChildren }
HAnimSegment287.AddChildren([HAnimSite289]);
HAnimSite290 := THAnimSiteNode.Create;
HAnimSite290.NameField := 'r_metacarpal_phalanx_5_pt';
HAnimSite290.Translation := Vector3(-0.1929,0.789,-0.1064);
{ .AddChildren }
HAnimSegment287.AddChildren([HAnimSite290]);
HAnimSite291 := THAnimSiteNode.Create;
HAnimSite291.NameField := 'r_hand_front_view';
HAnimSite291.Translation := Vector3(-0.3,0.75,0.45);
Viewpoint292 := TViewpointNode.Create;
Viewpoint292.Description := 'right hand front';
Viewpoint292.Position := Vector3(0,0,0);
Viewpoint292.CenterOfRotation := Vector3(0,0.7,0);
{ .AddChildren }
HAnimSite291.AddChildren([Viewpoint292]);
{ .AddChildren }
HAnimSegment287.AddChildren([HAnimSite291]);
{ .AddChildren }
HAnimJoint286.AddChildren([HAnimSegment287]);
HAnimJoint293 := THAnimJointNode.Create;
HAnimJoint293.NameField := 'r_carpometacarpal_1';
HAnimJoint293.Center := Vector3(-0.1924,0.8472,-0.0534);
HAnimSegment294 := THAnimSegmentNode.Create;
HAnimSegment294.NameField := 'r_metacarpal_1';
{ .AddChildren }
HAnimJoint293.AddChildren([HAnimSegment294]);
HAnimJoint295 := THAnimJointNode.Create;
HAnimJoint295.NameField := 'r_metacarpophalangeal_1';
HAnimJoint295.Center := Vector3(-0.1951,0.8226,0.0246);
HAnimSegment296 := THAnimSegmentNode.Create;
HAnimSegment296.NameField := 'r_carpal_proximal_phalanx_1';
{ .AddChildren }
HAnimJoint295.AddChildren([HAnimSegment296]);
HAnimJoint297 := THAnimJointNode.Create;
HAnimJoint297.NameField := 'r_carpal_interphalangeal_1';
HAnimJoint297.Center := Vector3(-0.1955,0.8159,0.0464);
HAnimSegment298 := THAnimSegmentNode.Create;
HAnimSegment298.NameField := 'r_carpal_distal_phalanx_1';
HAnimSite299 := THAnimSiteNode.Create;
HAnimSite299.NameField := 'r_carpal_distal_phalanx_1_tip';
HAnimSite299.Translation := Vector3(-0.1869,0.809,0.082);
{ .AddChildren }
HAnimSegment298.AddChildren([HAnimSite299]);
{ .AddChildren }
HAnimJoint297.AddChildren([HAnimSegment298]);
{ .AddChildren }
HAnimJoint295.AddChildren([HAnimJoint297]);
{ .AddChildren }
HAnimJoint293.AddChildren([HAnimJoint295]);
{ .AddChildren }
HAnimJoint286.AddChildren([HAnimJoint293]);
HAnimJoint300 := THAnimJointNode.Create;
HAnimJoint300.NameField := 'r_carpometacarpal_2';
HAnimJoint300.Center := Vector3(-0.1983,0.8024,-0.028);
HAnimSegment301 := THAnimSegmentNode.Create;
HAnimSegment301.NameField := 'r_metacarpal_2';
{ .AddChildren }
HAnimJoint300.AddChildren([HAnimSegment301]);
HAnimJoint302 := THAnimJointNode.Create;
HAnimJoint302.NameField := 'r_metacarpophalangeal_2';
HAnimJoint302.Center := Vector3(-0.1983,0.7815,-0.028);
HAnimSegment303 := THAnimSegmentNode.Create;
HAnimSegment303.NameField := 'r_carpal_proximal_phalanx_2';
{ .AddChildren }
HAnimJoint302.AddChildren([HAnimSegment303]);
HAnimJoint304 := THAnimJointNode.Create;
HAnimJoint304.NameField := 'r_carpal_proximal_interphalangeal_2';
HAnimJoint304.Center := Vector3(-0.2017,0.7363,-0.0248);
HAnimSegment305 := THAnimSegmentNode.Create;
HAnimSegment305.NameField := 'r_carpal_middle_phalanx_2';
{ .AddChildren }
HAnimJoint304.AddChildren([HAnimSegment305]);
HAnimJoint306 := THAnimJointNode.Create;
HAnimJoint306.NameField := 'r_carpal_distal_interphalangeal_2';
HAnimJoint306.Center := Vector3(-0.2028,0.7139,-0.0236);
HAnimSegment307 := THAnimSegmentNode.Create;
HAnimSegment307.NameField := 'r_carpal_distal_phalanx_2';
HAnimSite308 := THAnimSiteNode.Create;
HAnimSite308.NameField := 'r_carpal_distal_phalanx_2_tip';
HAnimSite308.Translation := Vector3(-0.198,0.6883,-0.018);
{ .AddChildren }
HAnimSegment307.AddChildren([HAnimSite308]);
HAnimSite309 := THAnimSiteNode.Create;
HAnimSite309.NameField := 'r_dactylion_pt';
HAnimSite309.Translation := Vector3(-0.1941,0.6772,-0.0423);
{ .AddChildren }
HAnimSegment307.AddChildren([HAnimSite309]);
{ .AddChildren }
HAnimJoint306.AddChildren([HAnimSegment307]);
{ .AddChildren }
HAnimJoint304.AddChildren([HAnimJoint306]);
{ .AddChildren }
HAnimJoint302.AddChildren([HAnimJoint304]);
{ .AddChildren }
HAnimJoint300.AddChildren([HAnimJoint302]);
{ .AddChildren }
HAnimJoint286.AddChildren([HAnimJoint300]);
HAnimJoint310 := THAnimJointNode.Create;
HAnimJoint310.NameField := 'r_carpometacarpal_3';
HAnimJoint310.Center := Vector3(-0.1987,0.8029,-0.053);
HAnimSegment311 := THAnimSegmentNode.Create;
HAnimSegment311.NameField := 'r_metacarpal_3';
{ .AddChildren }
HAnimJoint310.AddChildren([HAnimSegment311]);
HAnimJoint312 := THAnimJointNode.Create;
HAnimJoint312.NameField := 'r_metacarpophalangeal_3';
HAnimJoint312.Center := Vector3(-0.1987,0.7818,-0.053);
HAnimSegment313 := THAnimSegmentNode.Create;
HAnimSegment313.NameField := 'r_carpal_proximal_phalanx_3';
{ .AddChildren }
HAnimJoint312.AddChildren([HAnimSegment313]);
HAnimJoint314 := THAnimJointNode.Create;
HAnimJoint314.NameField := 'r_carpal_proximal_interphalangeal_3';
HAnimJoint314.Center := Vector3(-0.2013,0.7273,-0.0503);
HAnimSegment315 := THAnimSegmentNode.Create;
HAnimSegment315.NameField := 'r_carpal_middle_phalanx_3';
{ .AddChildren }
HAnimJoint314.AddChildren([HAnimSegment315]);
HAnimJoint316 := THAnimJointNode.Create;
HAnimJoint316.NameField := 'r_carpal_distal_interphalangeal_3';
HAnimJoint316.Center := Vector3(-0.2026,0.7011,-0.0494);
HAnimSegment317 := THAnimSegmentNode.Create;
HAnimSegment317.NameField := 'r_carpal_distal_phalanx_3';
HAnimSite318 := THAnimSiteNode.Create;
HAnimSite318.NameField := 'r_carpal_distal_phalanx_3_tip';
HAnimSite318.Translation := Vector3(-0.1969,0.6758,-0.0427);
{ .AddChildren }
HAnimSegment317.AddChildren([HAnimSite318]);
{ .AddChildren }
HAnimJoint316.AddChildren([HAnimSegment317]);
{ .AddChildren }
HAnimJoint314.AddChildren([HAnimJoint316]);
{ .AddChildren }
HAnimJoint312.AddChildren([HAnimJoint314]);
{ .AddChildren }
HAnimJoint310.AddChildren([HAnimJoint312]);
{ .AddChildren }
HAnimJoint286.AddChildren([HAnimJoint310]);
HAnimJoint319 := THAnimJointNode.Create;
HAnimJoint319.NameField := 'r_carpometacarpal_4';
HAnimJoint319.Center := Vector3(-0.1956,0.8019,-0.0794);
HAnimSegment320 := THAnimSegmentNode.Create;
HAnimSegment320.NameField := 'r_metacarpal_4';
{ .AddChildren }
HAnimJoint319.AddChildren([HAnimSegment320]);
HAnimJoint321 := THAnimJointNode.Create;
HAnimJoint321.NameField := 'r_metacarpophalangeal_4';
HAnimJoint321.Center := Vector3(-0.1956,0.7815,-0.0794);
HAnimSegment322 := THAnimSegmentNode.Create;
HAnimSegment322.NameField := 'r_carpal_proximal_phalanx_4';
{ .AddChildren }
HAnimJoint321.AddChildren([HAnimSegment322]);
HAnimJoint323 := THAnimJointNode.Create;
HAnimJoint323.NameField := 'r_carpal_proximal_interphalangeal_4';
HAnimJoint323.Center := Vector3(-0.1973,0.7287,-0.0777);
HAnimSegment324 := THAnimSegmentNode.Create;
HAnimSegment324.NameField := 'r_carpal_middle_phalanx_4';
{ .AddChildren }
HAnimJoint323.AddChildren([HAnimSegment324]);
HAnimJoint325 := THAnimJointNode.Create;
HAnimJoint325.NameField := 'r_carpal_distal_interphalangeal_4';
HAnimJoint325.Center := Vector3(-0.1983,0.7045,-0.0767);
HAnimSegment326 := THAnimSegmentNode.Create;
HAnimSegment326.NameField := 'r_carpal_distal_phalanx_4';
HAnimSite327 := THAnimSiteNode.Create;
HAnimSite327.NameField := 'r_carpal_distal_phalanx_4_tip';
HAnimSite327.Translation := Vector3(-0.1934,0.6778,-0.0693);
{ .AddChildren }
HAnimSegment326.AddChildren([HAnimSite327]);
{ .AddChildren }
HAnimJoint325.AddChildren([HAnimSegment326]);
{ .AddChildren }
HAnimJoint323.AddChildren([HAnimJoint325]);
{ .AddChildren }
HAnimJoint321.AddChildren([HAnimJoint323]);
{ .AddChildren }
HAnimJoint319.AddChildren([HAnimJoint321]);
{ .AddChildren }
HAnimJoint286.AddChildren([HAnimJoint319]);
HAnimJoint328 := THAnimJointNode.Create;
HAnimJoint328.NameField := 'r_carpometacarpal_5';
HAnimJoint328.Center := Vector3(-0.1925,0.8066,-0.1036);
HAnimSegment329 := THAnimSegmentNode.Create;
HAnimSegment329.NameField := 'r_metacarpal_5';
{ .AddChildren }
HAnimJoint328.AddChildren([HAnimSegment329]);
HAnimJoint330 := THAnimJointNode.Create;
HAnimJoint330.NameField := 'r_metacarpophalangeal_5';
HAnimJoint330.Center := Vector3(-0.1925,0.7866,-0.1036);
HAnimSegment331 := THAnimSegmentNode.Create;
HAnimSegment331.NameField := 'r_carpal_proximal_phalanx_5';
{ .AddChildren }
HAnimJoint330.AddChildren([HAnimSegment331]);
HAnimJoint332 := THAnimJointNode.Create;
HAnimJoint332.NameField := 'r_carpal_proximal_interphalangeal_5';
HAnimJoint332.Center := Vector3(-0.1938,0.7452,-0.1024);
HAnimSegment333 := THAnimSegmentNode.Create;
HAnimSegment333.NameField := 'r_carpal_middle_phalanx_5';
{ .AddChildren }
HAnimJoint332.AddChildren([HAnimSegment333]);
HAnimJoint334 := THAnimJointNode.Create;
HAnimJoint334.NameField := 'r_carpal_distal_interphalangeal_5';
HAnimJoint334.Center := Vector3(-0.1948,0.7277,-0.1017);
HAnimSegment335 := THAnimSegmentNode.Create;
HAnimSegment335.NameField := 'r_carpal_distal_phalanx_5';
HAnimSite336 := THAnimSiteNode.Create;
HAnimSite336.NameField := 'r_carpal_distal_phalanx_5_tip';
HAnimSite336.Translation := Vector3(-0.1938,0.7035,-0.0949);
{ .AddChildren }
HAnimSegment335.AddChildren([HAnimSite336]);
{ .AddChildren }
HAnimJoint334.AddChildren([HAnimSegment335]);
{ .AddChildren }
HAnimJoint332.AddChildren([HAnimJoint334]);
{ .AddChildren }
HAnimJoint330.AddChildren([HAnimJoint332]);
{ .AddChildren }
HAnimJoint328.AddChildren([HAnimJoint330]);
{ .AddChildren }
HAnimJoint286.AddChildren([HAnimJoint328]);
{ .AddChildren }
HAnimJoint280.AddChildren([HAnimJoint286]);
{ .AddChildren }
HAnimJoint277.AddChildren([HAnimJoint280]);
{ .AddChildren }
HAnimJoint275.AddChildren([HAnimJoint277]);
{ .AddChildren }
HAnimJoint269.AddChildren([HAnimJoint275]);
{ .AddChildren }
HAnimJoint149.AddChildren([HAnimJoint269]);
{ .AddChildren }
HAnimJoint147.AddChildren([HAnimJoint149]);
{ .AddChildren }
HAnimJoint145.AddChildren([HAnimJoint147]);
{ .AddChildren }
HAnimJoint143.AddChildren([HAnimJoint145]);
{ .AddChildren }
HAnimJoint141.AddChildren([HAnimJoint143]);
{ .AddChildren }
HAnimJoint139.AddChildren([HAnimJoint141]);
{ .AddChildren }
HAnimJoint137.AddChildren([HAnimJoint139]);
{ .AddChildren }
HAnimJoint135.AddChildren([HAnimJoint137]);
{ .AddChildren }
HAnimJoint131.AddChildren([HAnimJoint135]);
{ .AddChildren }
HAnimJoint128.AddChildren([HAnimJoint131]);
{ .AddChildren }
HAnimJoint126.AddChildren([HAnimJoint128]);
{ .AddChildren }
HAnimJoint124.AddChildren([HAnimJoint126]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimJoint124]);
{ .AddChildren }
HAnimJoint117.AddChildren([HAnimJoint122]);
{ .AddChildren }
HAnimJoint115.AddChildren([HAnimJoint117]);
{ .AddChildren }
HAnimJoint113.AddChildren([HAnimJoint115]);
{ .AddChildren }
HAnimJoint109.AddChildren([HAnimJoint113]);
{ .AddChildren }
HAnimJoint50.AddChildren([HAnimJoint109]);
{ .AddSkeleton }
HAnimHumanoid41.SetSkeleton([HAnimJoint50]);
HAnimJoint337 := THAnimJointNode.Create;
HAnimJoint337 := HAnimJoint50;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint337;
HAnimJoint338 := THAnimJointNode.Create;
HAnimJoint338 := HAnimJoint52;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint338;
HAnimJoint339 := THAnimJointNode.Create;
HAnimJoint339 := HAnimJoint109;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint339;
HAnimJoint340 := THAnimJointNode.Create;
HAnimJoint340 := HAnimJoint113;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint340;
HAnimJoint341 := THAnimJointNode.Create;
HAnimJoint341 := HAnimJoint115;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint341;
HAnimJoint342 := THAnimJointNode.Create;
HAnimJoint342 := HAnimJoint117;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint342;
HAnimJoint343 := THAnimJointNode.Create;
HAnimJoint343 := HAnimJoint122;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint343;
HAnimJoint344 := THAnimJointNode.Create;
HAnimJoint344 := HAnimJoint124;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint344;
HAnimJoint345 := THAnimJointNode.Create;
HAnimJoint345 := HAnimJoint126;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint345;
HAnimJoint346 := THAnimJointNode.Create;
HAnimJoint346 := HAnimJoint128;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint346;
HAnimJoint347 := THAnimJointNode.Create;
HAnimJoint347 := HAnimJoint131;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint347;
HAnimJoint348 := THAnimJointNode.Create;
HAnimJoint348 := HAnimJoint135;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint348;
HAnimJoint349 := THAnimJointNode.Create;
HAnimJoint349 := HAnimJoint137;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint349;
HAnimJoint350 := THAnimJointNode.Create;
HAnimJoint350 := HAnimJoint139;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint350;
HAnimJoint351 := THAnimJointNode.Create;
HAnimJoint351 := HAnimJoint141;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint351;
HAnimJoint352 := THAnimJointNode.Create;
HAnimJoint352 := HAnimJoint143;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint352;
HAnimJoint353 := THAnimJointNode.Create;
HAnimJoint353 := HAnimJoint145;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint353;
HAnimJoint354 := THAnimJointNode.Create;
HAnimJoint354 := HAnimJoint147;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint354;
HAnimJoint355 := THAnimJointNode.Create;
HAnimJoint355 := HAnimJoint149;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint355;
HAnimJoint356 := THAnimJointNode.Create;
HAnimJoint356 := HAnimJoint153;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint356;
HAnimJoint357 := THAnimJointNode.Create;
HAnimJoint357 := HAnimJoint157;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint357;
HAnimJoint358 := THAnimJointNode.Create;
HAnimJoint358 := HAnimJoint159;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint358;
HAnimJoint359 := THAnimJointNode.Create;
HAnimJoint359 := HAnimJoint161;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint359;
HAnimJoint360 := THAnimJointNode.Create;
HAnimJoint360 := HAnimJoint163;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint360;
HAnimJoint361 := THAnimJointNode.Create;
HAnimJoint361 := HAnimJoint165;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint361;
HAnimJoint362 := THAnimJointNode.Create;
HAnimJoint362 := HAnimJoint167;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint362;
HAnimJoint363 := THAnimJointNode.Create;
HAnimJoint363 := HAnimJoint169;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint363;
HAnimJoint364 := THAnimJointNode.Create;
HAnimJoint364 := HAnimJoint197;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint364;
HAnimJoint365 := THAnimJointNode.Create;
HAnimJoint365 := HAnimJoint207;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint365;
HAnimJoint366 := THAnimJointNode.Create;
HAnimJoint366 := HAnimJoint275;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint366;
HAnimJoint367 := THAnimJointNode.Create;
HAnimJoint367 := HAnimJoint238;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint367;
HAnimJoint368 := THAnimJointNode.Create;
HAnimJoint368 := HAnimJoint306;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint368;
HAnimJoint369 := THAnimJointNode.Create;
HAnimJoint369 := HAnimJoint248;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint369;
HAnimJoint370 := THAnimJointNode.Create;
HAnimJoint370 := HAnimJoint316;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint370;
HAnimJoint371 := THAnimJointNode.Create;
HAnimJoint371 := HAnimJoint257;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint371;
HAnimJoint372 := THAnimJointNode.Create;
HAnimJoint372 := HAnimJoint325;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint372;
HAnimJoint373 := THAnimJointNode.Create;
HAnimJoint373 := HAnimJoint266;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint373;
HAnimJoint374 := THAnimJointNode.Create;
HAnimJoint374 := HAnimJoint334;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint374;
HAnimJoint375 := THAnimJointNode.Create;
HAnimJoint375 := HAnimJoint229;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint375;
HAnimJoint376 := THAnimJointNode.Create;
HAnimJoint376 := HAnimJoint297;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint376;
HAnimJoint377 := THAnimJointNode.Create;
HAnimJoint377 := HAnimJoint236;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint377;
HAnimJoint378 := THAnimJointNode.Create;
HAnimJoint378 := HAnimJoint304;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint378;
HAnimJoint379 := THAnimJointNode.Create;
HAnimJoint379 := HAnimJoint246;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint379;
HAnimJoint380 := THAnimJointNode.Create;
HAnimJoint380 := HAnimJoint314;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint380;
HAnimJoint381 := THAnimJointNode.Create;
HAnimJoint381 := HAnimJoint255;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint381;
HAnimJoint382 := THAnimJointNode.Create;
HAnimJoint382 := HAnimJoint323;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint382;
HAnimJoint383 := THAnimJointNode.Create;
HAnimJoint383 := HAnimJoint264;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint383;
HAnimJoint384 := THAnimJointNode.Create;
HAnimJoint384 := HAnimJoint332;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint384;
HAnimJoint385 := THAnimJointNode.Create;
HAnimJoint385 := HAnimJoint225;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint385;
HAnimJoint386 := THAnimJointNode.Create;
HAnimJoint386 := HAnimJoint293;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint386;
HAnimJoint387 := THAnimJointNode.Create;
HAnimJoint387 := HAnimJoint232;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint387;
HAnimJoint388 := THAnimJointNode.Create;
HAnimJoint388 := HAnimJoint300;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint388;
HAnimJoint389 := THAnimJointNode.Create;
HAnimJoint389 := HAnimJoint242;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint389;
HAnimJoint390 := THAnimJointNode.Create;
HAnimJoint390 := HAnimJoint310;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint390;
HAnimJoint391 := THAnimJointNode.Create;
HAnimJoint391 := HAnimJoint251;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint391;
HAnimJoint392 := THAnimJointNode.Create;
HAnimJoint392 := HAnimJoint319;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint392;
HAnimJoint393 := THAnimJointNode.Create;
HAnimJoint393 := HAnimJoint260;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint393;
HAnimJoint394 := THAnimJointNode.Create;
HAnimJoint394 := HAnimJoint328;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint394;
HAnimJoint395 := THAnimJointNode.Create;
HAnimJoint395 := HAnimJoint212;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint395;
HAnimJoint396 := THAnimJointNode.Create;
HAnimJoint396 := HAnimJoint280;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint396;
HAnimJoint397 := THAnimJointNode.Create;
HAnimJoint397 := HAnimJoint181;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint397;
HAnimJoint398 := THAnimJointNode.Create;
HAnimJoint398 := HAnimJoint189;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint398;
HAnimJoint399 := THAnimJointNode.Create;
HAnimJoint399 := HAnimJoint187;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint399;
HAnimJoint400 := THAnimJointNode.Create;
HAnimJoint400 := HAnimJoint195;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint400;
HAnimJoint401 := THAnimJointNode.Create;
HAnimJoint401 := HAnimJoint185;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint401;
HAnimJoint402 := THAnimJointNode.Create;
HAnimJoint402 := HAnimJoint193;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint402;
HAnimJoint403 := THAnimJointNode.Create;
HAnimJoint403 := HAnimJoint63;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint403;
HAnimJoint404 := THAnimJointNode.Create;
HAnimJoint404 := HAnimJoint86;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint404;
HAnimJoint405 := THAnimJointNode.Create;
HAnimJoint405 := HAnimJoint68;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint405;
HAnimJoint406 := THAnimJointNode.Create;
HAnimJoint406 := HAnimJoint91;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint406;
HAnimJoint407 := THAnimJointNode.Create;
HAnimJoint407 := HAnimJoint227;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint407;
HAnimJoint408 := THAnimJointNode.Create;
HAnimJoint408 := HAnimJoint295;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint408;
HAnimJoint409 := THAnimJointNode.Create;
HAnimJoint409 := HAnimJoint234;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint409;
HAnimJoint410 := THAnimJointNode.Create;
HAnimJoint410 := HAnimJoint302;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint410;
HAnimJoint411 := THAnimJointNode.Create;
HAnimJoint411 := HAnimJoint244;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint411;
HAnimJoint412 := THAnimJointNode.Create;
HAnimJoint412 := HAnimJoint312;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint412;
HAnimJoint413 := THAnimJointNode.Create;
HAnimJoint413 := HAnimJoint253;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint413;
HAnimJoint414 := THAnimJointNode.Create;
HAnimJoint414 := HAnimJoint321;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint414;
HAnimJoint415 := THAnimJointNode.Create;
HAnimJoint415 := HAnimJoint262;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint415;
HAnimJoint416 := THAnimJointNode.Create;
HAnimJoint416 := HAnimJoint330;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint416;
HAnimJoint417 := THAnimJointNode.Create;
HAnimJoint417 := HAnimJoint78;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint417;
HAnimJoint418 := THAnimJointNode.Create;
HAnimJoint418 := HAnimJoint101;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint418;
HAnimJoint419 := THAnimJointNode.Create;
HAnimJoint419 := HAnimJoint218;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint419;
HAnimJoint420 := THAnimJointNode.Create;
HAnimJoint420 := HAnimJoint286;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint420;
HAnimJoint421 := THAnimJointNode.Create;
HAnimJoint421 := HAnimJoint209;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint421;
HAnimJoint422 := THAnimJointNode.Create;
HAnimJoint422 := HAnimJoint277;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint422;
HAnimJoint423 := THAnimJointNode.Create;
HAnimJoint423 := HAnimJoint201;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint423;
HAnimJoint424 := THAnimJointNode.Create;
HAnimJoint424 := HAnimJoint269;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint424;
HAnimJoint425 := THAnimJointNode.Create;
HAnimJoint425 := HAnimJoint70;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint425;
HAnimJoint426 := THAnimJointNode.Create;
HAnimJoint426 := HAnimJoint93;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint426;
HAnimJoint427 := THAnimJointNode.Create;
HAnimJoint427 := HAnimJoint81;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint427;
HAnimJoint428 := THAnimJointNode.Create;
HAnimJoint428 := HAnimJoint104;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint428;
HAnimJoint429 := THAnimJointNode.Create;
HAnimJoint429 := HAnimJoint76;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint429;
HAnimJoint430 := THAnimJointNode.Create;
HAnimJoint430 := HAnimJoint99;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint430;
HAnimSegment431 := THAnimSegmentNode.Create;
HAnimSegment431 := HAnimSegment53;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment431;
HAnimSegment432 := THAnimSegmentNode.Create;
HAnimSegment432 := HAnimSegment170;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment432;
HAnimSegment433 := THAnimSegmentNode.Create;
HAnimSegment433 := HAnimSegment198;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment433;
HAnimSegment434 := THAnimSegmentNode.Create;
HAnimSegment434 := HAnimSegment168;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment434;
HAnimSegment435 := THAnimSegmentNode.Create;
HAnimSegment435 := HAnimSegment166;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment435;
HAnimSegment436 := THAnimSegmentNode.Create;
HAnimSegment436 := HAnimSegment164;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment436;
HAnimSegment437 := THAnimSegmentNode.Create;
HAnimSegment437 := HAnimSegment162;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment437;
HAnimSegment438 := THAnimSegmentNode.Create;
HAnimSegment438 := HAnimSegment160;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment438;
HAnimSegment439 := THAnimSegmentNode.Create;
HAnimSegment439 := HAnimSegment158;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment439;
HAnimSegment440 := THAnimSegmentNode.Create;
HAnimSegment440 := HAnimSegment154;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment440;
HAnimSegment441 := THAnimSegmentNode.Create;
HAnimSegment441 := HAnimSegment150;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment441;
HAnimSegment442 := THAnimSegmentNode.Create;
HAnimSegment442 := HAnimSegment148;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment442;
HAnimSegment443 := THAnimSegmentNode.Create;
HAnimSegment443 := HAnimSegment146;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment443;
HAnimSegment444 := THAnimSegmentNode.Create;
HAnimSegment444 := HAnimSegment144;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment444;
HAnimSegment445 := THAnimSegmentNode.Create;
HAnimSegment445 := HAnimSegment142;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment445;
HAnimSegment446 := THAnimSegmentNode.Create;
HAnimSegment446 := HAnimSegment140;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment446;
HAnimSegment447 := THAnimSegmentNode.Create;
HAnimSegment447 := HAnimSegment138;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment447;
HAnimSegment448 := THAnimSegmentNode.Create;
HAnimSegment448 := HAnimSegment136;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment448;
HAnimSegment449 := THAnimSegmentNode.Create;
HAnimSegment449 := HAnimSegment132;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment449;
HAnimSegment450 := THAnimSegmentNode.Create;
HAnimSegment450 := HAnimSegment129;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment450;
HAnimSegment451 := THAnimSegmentNode.Create;
HAnimSegment451 := HAnimSegment127;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment451;
HAnimSegment452 := THAnimSegmentNode.Create;
HAnimSegment452 := HAnimSegment125;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment452;
HAnimSegment453 := THAnimSegmentNode.Create;
HAnimSegment453 := HAnimSegment123;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment453;
HAnimSegment454 := THAnimSegmentNode.Create;
HAnimSegment454 := HAnimSegment118;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment454;
HAnimSegment455 := THAnimSegmentNode.Create;
HAnimSegment455 := HAnimSegment116;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment455;
HAnimSegment456 := THAnimSegmentNode.Create;
HAnimSegment456 := HAnimSegment114;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment456;
HAnimSegment457 := THAnimSegmentNode.Create;
HAnimSegment457 := HAnimSegment110;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment457;
HAnimSegment458 := THAnimSegmentNode.Create;
HAnimSegment458 := HAnimSegment51;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment458;
HAnimSegment459 := THAnimSegmentNode.Create;
HAnimSegment459 := HAnimSegment69;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment459;
HAnimSegment460 := THAnimSegmentNode.Create;
HAnimSegment460 := HAnimSegment92;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment460;
HAnimSegment461 := THAnimSegmentNode.Create;
HAnimSegment461 := HAnimSegment219;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment461;
HAnimSegment462 := THAnimSegmentNode.Create;
HAnimSegment462 := HAnimSegment287;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment462;
HAnimSegment463 := THAnimSegmentNode.Create;
HAnimSegment463 := HAnimSegment230;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment463;
HAnimSegment464 := THAnimSegmentNode.Create;
HAnimSegment464 := HAnimSegment298;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment464;
HAnimSegment465 := THAnimSegmentNode.Create;
HAnimSegment465 := HAnimSegment239;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment465;
HAnimSegment466 := THAnimSegmentNode.Create;
HAnimSegment466 := HAnimSegment307;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment466;
HAnimSegment467 := THAnimSegmentNode.Create;
HAnimSegment467 := HAnimSegment249;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment467;
HAnimSegment468 := THAnimSegmentNode.Create;
HAnimSegment468 := HAnimSegment317;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment468;
HAnimSegment469 := THAnimSegmentNode.Create;
HAnimSegment469 := HAnimSegment258;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment469;
HAnimSegment470 := THAnimSegmentNode.Create;
HAnimSegment470 := HAnimSegment326;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment470;
HAnimSegment471 := THAnimSegmentNode.Create;
HAnimSegment471 := HAnimSegment267;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment471;
HAnimSegment472 := THAnimSegmentNode.Create;
HAnimSegment472 := HAnimSegment335;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment472;
HAnimSegment473 := THAnimSegmentNode.Create;
HAnimSegment473 := HAnimSegment237;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment473;
HAnimSegment474 := THAnimSegmentNode.Create;
HAnimSegment474 := HAnimSegment305;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment474;
HAnimSegment475 := THAnimSegmentNode.Create;
HAnimSegment475 := HAnimSegment247;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment475;
HAnimSegment476 := THAnimSegmentNode.Create;
HAnimSegment476 := HAnimSegment315;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment476;
HAnimSegment477 := THAnimSegmentNode.Create;
HAnimSegment477 := HAnimSegment256;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment477;
HAnimSegment478 := THAnimSegmentNode.Create;
HAnimSegment478 := HAnimSegment324;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment478;
HAnimSegment479 := THAnimSegmentNode.Create;
HAnimSegment479 := HAnimSegment265;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment479;
HAnimSegment480 := THAnimSegmentNode.Create;
HAnimSegment480 := HAnimSegment333;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment480;
HAnimSegment481 := THAnimSegmentNode.Create;
HAnimSegment481 := HAnimSegment228;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment481;
HAnimSegment482 := THAnimSegmentNode.Create;
HAnimSegment482 := HAnimSegment296;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment482;
HAnimSegment483 := THAnimSegmentNode.Create;
HAnimSegment483 := HAnimSegment235;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment483;
HAnimSegment484 := THAnimSegmentNode.Create;
HAnimSegment484 := HAnimSegment303;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment484;
HAnimSegment485 := THAnimSegmentNode.Create;
HAnimSegment485 := HAnimSegment245;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment485;
HAnimSegment486 := THAnimSegmentNode.Create;
HAnimSegment486 := HAnimSegment313;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment486;
HAnimSegment487 := THAnimSegmentNode.Create;
HAnimSegment487 := HAnimSegment254;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment487;
HAnimSegment488 := THAnimSegmentNode.Create;
HAnimSegment488 := HAnimSegment322;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment488;
HAnimSegment489 := THAnimSegmentNode.Create;
HAnimSegment489 := HAnimSegment263;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment489;
HAnimSegment490 := THAnimSegmentNode.Create;
HAnimSegment490 := HAnimSegment331;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment490;
HAnimSegment491 := THAnimSegmentNode.Create;
HAnimSegment491 := HAnimSegment202;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment491;
HAnimSegment492 := THAnimSegmentNode.Create;
HAnimSegment492 := HAnimSegment270;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment492;
HAnimSegment493 := THAnimSegmentNode.Create;
HAnimSegment493 := HAnimSegment182;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment493;
HAnimSegment494 := THAnimSegmentNode.Create;
HAnimSegment494 := HAnimSegment190;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment494;
HAnimSegment495 := THAnimSegmentNode.Create;
HAnimSegment495 := HAnimSegment188;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment495;
HAnimSegment496 := THAnimSegmentNode.Create;
HAnimSegment496 := HAnimSegment196;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment496;
HAnimSegment497 := THAnimSegmentNode.Create;
HAnimSegment497 := HAnimSegment186;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment497;
HAnimSegment498 := THAnimSegmentNode.Create;
HAnimSegment498 := HAnimSegment194;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment498;
HAnimSegment499 := THAnimSegmentNode.Create;
HAnimSegment499 := HAnimSegment213;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment499;
HAnimSegment500 := THAnimSegmentNode.Create;
HAnimSegment500 := HAnimSegment281;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment500;
HAnimSegment501 := THAnimSegmentNode.Create;
HAnimSegment501 := HAnimSegment226;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment501;
HAnimSegment502 := THAnimSegmentNode.Create;
HAnimSegment502 := HAnimSegment294;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment502;
HAnimSegment503 := THAnimSegmentNode.Create;
HAnimSegment503 := HAnimSegment233;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment503;
HAnimSegment504 := THAnimSegmentNode.Create;
HAnimSegment504 := HAnimSegment301;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment504;
HAnimSegment505 := THAnimSegmentNode.Create;
HAnimSegment505 := HAnimSegment243;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment505;
HAnimSegment506 := THAnimSegmentNode.Create;
HAnimSegment506 := HAnimSegment311;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment506;
HAnimSegment507 := THAnimSegmentNode.Create;
HAnimSegment507 := HAnimSegment252;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment507;
HAnimSegment508 := THAnimSegmentNode.Create;
HAnimSegment508 := HAnimSegment320;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment508;
HAnimSegment509 := THAnimSegmentNode.Create;
HAnimSegment509 := HAnimSegment261;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment509;
HAnimSegment510 := THAnimSegmentNode.Create;
HAnimSegment510 := HAnimSegment329;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment510;
HAnimSegment511 := THAnimSegmentNode.Create;
HAnimSegment511 := HAnimSegment77;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment511;
HAnimSegment512 := THAnimSegmentNode.Create;
HAnimSegment512 := HAnimSegment100;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment512;
HAnimSegment513 := THAnimSegmentNode.Create;
HAnimSegment513 := HAnimSegment208;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment513;
HAnimSegment514 := THAnimSegmentNode.Create;
HAnimSegment514 := HAnimSegment276;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment514;
HAnimSegment515 := THAnimSegmentNode.Create;
HAnimSegment515 := HAnimSegment71;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment515;
HAnimSegment516 := THAnimSegmentNode.Create;
HAnimSegment516 := HAnimSegment94;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment516;
HAnimSegment517 := THAnimSegmentNode.Create;
HAnimSegment517 := HAnimSegment82;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment517;
HAnimSegment518 := THAnimSegmentNode.Create;
HAnimSegment518 := HAnimSegment105;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment518;
HAnimSegment519 := THAnimSegmentNode.Create;
HAnimSegment519 := HAnimSegment79;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment519;
HAnimSegment520 := THAnimSegmentNode.Create;
HAnimSegment520 := HAnimSegment102;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment520;
HAnimSegment521 := THAnimSegmentNode.Create;
HAnimSegment521 := HAnimSegment64;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment521;
HAnimSegment522 := THAnimSegmentNode.Create;
HAnimSegment522 := HAnimSegment87;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment522;
HAnimSegment523 := THAnimSegmentNode.Create;
HAnimSegment523 := HAnimSegment210;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment523;
HAnimSegment524 := THAnimSegmentNode.Create;
HAnimSegment524 := HAnimSegment278;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment524;
HAnimSite525 := THAnimSiteNode.Create;
HAnimSite525 := HAnimSite62;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite525;
HAnimSite526 := THAnimSiteNode.Create;
HAnimSite526 := HAnimSite171;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite526;
HAnimSite527 := THAnimSiteNode.Create;
HAnimSite527 := HAnimSite172;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite527;
HAnimSite528 := THAnimSiteNode.Create;
HAnimSite528 := HAnimSite175;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite528;
HAnimSite529 := THAnimSiteNode.Create;
HAnimSite529 := HAnimSite180;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite529;
HAnimSite530 := THAnimSiteNode.Create;
HAnimSite530 := HAnimSite151;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite530;
HAnimSite531 := THAnimSiteNode.Create;
HAnimSite531 := HAnimSite152;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite531;
HAnimSite532 := THAnimSiteNode.Create;
HAnimSite532 := HAnimSite130;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite532;
HAnimSite533 := THAnimSiteNode.Create;
HAnimSite533 := HAnimSite121;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite533;
HAnimSite534 := THAnimSiteNode.Create;
HAnimSite534 := HAnimSite111;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite534;
HAnimSite535 := THAnimSiteNode.Create;
HAnimSite535 := HAnimSite112;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite535;
HAnimSite536 := THAnimSiteNode.Create;
HAnimSite536 := HAnimSite204;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite536;
HAnimSite537 := THAnimSiteNode.Create;
HAnimSite537 := HAnimSite272;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite537;
HAnimSite538 := THAnimSiteNode.Create;
HAnimSite538 := HAnimSite58;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite538;
HAnimSite539 := THAnimSiteNode.Create;
HAnimSite539 := HAnimSite59;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite539;
HAnimSite540 := THAnimSiteNode.Create;
HAnimSite540 := HAnimSite206;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite540;
HAnimSite541 := THAnimSiteNode.Create;
HAnimSite541 := HAnimSite274;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite541;
HAnimSite542 := THAnimSiteNode.Create;
HAnimSite542 := HAnimSite205;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite542;
HAnimSite543 := THAnimSiteNode.Create;
HAnimSite543 := HAnimSite273;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite543;
HAnimSite544 := THAnimSiteNode.Create;
HAnimSite544 := HAnimSite75;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite544;
HAnimSite545 := THAnimSiteNode.Create;
HAnimSite545 := HAnimSite98;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite545;
HAnimSite546 := THAnimSiteNode.Create;
HAnimSite546 := HAnimSite231;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite546;
HAnimSite547 := THAnimSiteNode.Create;
HAnimSite547 := HAnimSite299;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite547;
HAnimSite548 := THAnimSiteNode.Create;
HAnimSite548 := HAnimSite240;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite548;
HAnimSite549 := THAnimSiteNode.Create;
HAnimSite549 := HAnimSite308;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite549;
HAnimSite550 := THAnimSiteNode.Create;
HAnimSite550 := HAnimSite250;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite550;
HAnimSite551 := THAnimSiteNode.Create;
HAnimSite551 := HAnimSite318;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite551;
HAnimSite552 := THAnimSiteNode.Create;
HAnimSite552 := HAnimSite259;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite552;
HAnimSite553 := THAnimSiteNode.Create;
HAnimSite553 := HAnimSite327;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite553;
HAnimSite554 := THAnimSiteNode.Create;
HAnimSite554 := HAnimSite268;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite554;
HAnimSite555 := THAnimSiteNode.Create;
HAnimSite555 := HAnimSite336;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite555;
HAnimSite556 := THAnimSiteNode.Create;
HAnimSite556 := HAnimSite203;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite556;
HAnimSite557 := THAnimSiteNode.Create;
HAnimSite557 := HAnimSite271;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite557;
HAnimSite558 := THAnimSiteNode.Create;
HAnimSite558 := HAnimSite241;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite558;
HAnimSite559 := THAnimSiteNode.Create;
HAnimSite559 := HAnimSite309;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite559;
HAnimSite560 := THAnimSiteNode.Create;
HAnimSite560 := HAnimSite66;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite560;
HAnimSite561 := THAnimSiteNode.Create;
HAnimSite561 := HAnimSite89;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite561;
HAnimSite562 := THAnimSiteNode.Create;
HAnimSite562 := HAnimSite67;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite562;
HAnimSite563 := THAnimSiteNode.Create;
HAnimSite563 := HAnimSite90;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite563;
HAnimSite564 := THAnimSiteNode.Create;
HAnimSite564 := HAnimSite83;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite564;
HAnimSite565 := THAnimSiteNode.Create;
HAnimSite565 := HAnimSite106;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite565;
HAnimSite566 := THAnimSiteNode.Create;
HAnimSite566 := HAnimSite177;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite566;
HAnimSite567 := THAnimSiteNode.Create;
HAnimSite567 := HAnimSite179;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite567;
HAnimSite568 := THAnimSiteNode.Create;
HAnimSite568 := HAnimSite211;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite568;
HAnimSite569 := THAnimSiteNode.Create;
HAnimSite569 := HAnimSite279;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite569;
HAnimSite570 := THAnimSiteNode.Create;
HAnimSite570 := HAnimSite216;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite570;
HAnimSite571 := THAnimSiteNode.Create;
HAnimSite571 := HAnimSite284;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite571;
HAnimSite572 := THAnimSiteNode.Create;
HAnimSite572 := HAnimSite54;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite572;
HAnimSite573 := THAnimSiteNode.Create;
HAnimSite573 := HAnimSite56;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite573;
HAnimSite574 := THAnimSiteNode.Create;
HAnimSite574 := HAnimSite173;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite574;
HAnimSite575 := THAnimSiteNode.Create;
HAnimSite575 := HAnimSite174;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite575;
HAnimSite576 := THAnimSiteNode.Create;
HAnimSite576 := HAnimSite65;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite576;
HAnimSite577 := THAnimSiteNode.Create;
HAnimSite577 := HAnimSite88;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite577;
HAnimSite578 := THAnimSiteNode.Create;
HAnimSite578 := HAnimSite72;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite578;
HAnimSite579 := THAnimSiteNode.Create;
HAnimSite579 := HAnimSite95;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite579;
HAnimSite580 := THAnimSiteNode.Create;
HAnimSite580 := HAnimSite73;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite580;
HAnimSite581 := THAnimSiteNode.Create;
HAnimSite581 := HAnimSite96;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite581;
HAnimSite582 := THAnimSiteNode.Create;
HAnimSite582 := HAnimSite220;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite582;
HAnimSite583 := THAnimSiteNode.Create;
HAnimSite583 := HAnimSite288;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite583;
HAnimSite584 := THAnimSiteNode.Create;
HAnimSite584 := HAnimSite222;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite584;
HAnimSite585 := THAnimSiteNode.Create;
HAnimSite585 := HAnimSite290;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite585;
HAnimSite586 := THAnimSiteNode.Create;
HAnimSite586 := HAnimSite80;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite586;
HAnimSite587 := THAnimSiteNode.Create;
HAnimSite587 := HAnimSite103;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite587;
HAnimSite588 := THAnimSiteNode.Create;
HAnimSite588 := HAnimSite84;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite588;
HAnimSite589 := THAnimSiteNode.Create;
HAnimSite589 := HAnimSite107;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite589;
HAnimSite590 := THAnimSiteNode.Create;
HAnimSite590 := HAnimSite155;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite590;
HAnimSite591 := THAnimSiteNode.Create;
HAnimSite591 := HAnimSite156;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite591;
HAnimSite592 := THAnimSiteNode.Create;
HAnimSite592 := HAnimSite215;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite592;
HAnimSite593 := THAnimSiteNode.Create;
HAnimSite593 := HAnimSite283;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite593;
HAnimSite594 := THAnimSiteNode.Create;
HAnimSite594 := HAnimSite60;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite594;
HAnimSite595 := THAnimSiteNode.Create;
HAnimSite595 := HAnimSite61;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite595;
HAnimSite596 := THAnimSiteNode.Create;
HAnimSite596 := HAnimSite214;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite596;
HAnimSite597 := THAnimSiteNode.Create;
HAnimSite597 := HAnimSite282;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite597;
HAnimSite598 := THAnimSiteNode.Create;
HAnimSite598 := HAnimSite217;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite598;
HAnimSite599 := THAnimSiteNode.Create;
HAnimSite599 := HAnimSite285;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite599;
HAnimSite600 := THAnimSiteNode.Create;
HAnimSite600 := HAnimSite119;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite600;
HAnimSite601 := THAnimSiteNode.Create;
HAnimSite601 := HAnimSite120;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite601;
HAnimSite602 := THAnimSiteNode.Create;
HAnimSite602 := HAnimSite199;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite602;
HAnimSite603 := THAnimSiteNode.Create;
HAnimSite603 := HAnimSite200;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite603;
HAnimSite604 := THAnimSiteNode.Create;
HAnimSite604 := HAnimSite74;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite604;
HAnimSite605 := THAnimSiteNode.Create;
HAnimSite605 := HAnimSite97;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite605;
HAnimSite606 := THAnimSiteNode.Create;
HAnimSite606 := HAnimSite85;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite606;
HAnimSite607 := THAnimSiteNode.Create;
HAnimSite607 := HAnimSite108;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite607;
HAnimSite608 := THAnimSiteNode.Create;
HAnimSite608 := HAnimSite133;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite608;
HAnimSite609 := THAnimSiteNode.Create;
HAnimSite609 := HAnimSite134;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite609;
HAnimSite610 := THAnimSiteNode.Create;
HAnimSite610 := HAnimSite176;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite610;
HAnimSite611 := THAnimSiteNode.Create;
HAnimSite611 := HAnimSite178;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite611;
HAnimSite612 := THAnimSiteNode.Create;
HAnimSite612 := HAnimSite55;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite612;
HAnimSite613 := THAnimSiteNode.Create;
HAnimSite613 := HAnimSite57;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite613;
HAnimSite614 := THAnimSiteNode.Create;
HAnimSite614 := HAnimSite221;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite614;
HAnimSite615 := THAnimSiteNode.Create;
HAnimSite615 := HAnimSite289;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite615;
HAnimSite616 := THAnimSiteNode.Create;
HAnimSite616.NameField := 'l_inclined_view';
HAnimSite616.Translation := Vector3(1.62,1.05,2.06);
HAnimSite616.Rotation := Vector4(-0.113,0.993,0.0347,0.671);
Viewpoint617 := TViewpointNode.Create;
Viewpoint617.Description := 'left inclined';
Viewpoint617.Position := Vector3(0,0,0);
{ .AddChildren }
HAnimSite616.AddChildren([Viewpoint617]);
{ .SetViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite616;
HAnimSite618 := THAnimSiteNode.Create;
HAnimSite618.NameField := 'r_inclined_view';
HAnimSite618.Translation := Vector3(-1.62,1.05,2.06);
HAnimSite618.Rotation := Vector4(-0.113,-0.993,0.0347,0.671);
Viewpoint619 := TViewpointNode.Create;
Viewpoint619.Description := 'right inclined';
Viewpoint619.Position := Vector3(0,0,0);
Viewpoint619.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite618.AddChildren([Viewpoint619]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite618;
HAnimSite620 := THAnimSiteNode.Create;
HAnimSite620.NameField := 'front_view';
HAnimSite620.Translation := Vector3(0,0.85,2.58);
Viewpoint621 := TViewpointNode.Create;
Viewpoint621.Description := 'front';
Viewpoint621.Position := Vector3(0,0,0);
Viewpoint621.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite620.AddChildren([Viewpoint621]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite620;
HAnimSite622 := THAnimSiteNode.Create;
HAnimSite622.NameField := 'back_view';
HAnimSite622.Translation := Vector3(0,0.85,-2.58);
HAnimSite622.Rotation := Vector4(0,1,0,3.14);
Viewpoint623 := TViewpointNode.Create;
Viewpoint623.Description := 'back';
Viewpoint623.Position := Vector3(0,0,0);
Viewpoint623.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite622.AddChildren([Viewpoint623]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite622;
HAnimSite624 := THAnimSiteNode.Create;
HAnimSite624.NameField := 'l_side_view';
HAnimSite624.Translation := Vector3(2.6,0.854,0);
HAnimSite624.Rotation := Vector4(0,1,0,1.5708);
Viewpoint625 := TViewpointNode.Create;
Viewpoint625.Description := 'left side';
Viewpoint625.Position := Vector3(0,0,0);
Viewpoint625.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite624.AddChildren([Viewpoint625]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite624;
HAnimSite626 := THAnimSiteNode.Create;
HAnimSite626.NameField := 'Top_view';
HAnimSite626.Translation := Vector3(0,3.5,0);
HAnimSite626.Rotation := Vector4(1,0,0,-1.57);
Viewpoint627 := TViewpointNode.Create;
Viewpoint627.Description := 'Top';
Viewpoint627.Position := Vector3(0,0,0);
Viewpoint627.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite626.AddChildren([Viewpoint627]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite626;
HAnimSite628 := THAnimSiteNode.Create;
HAnimSite628.NameField := 'front_close_view';
HAnimSite628.Translation := Vector3(0,0.854,1.575);
Viewpoint629 := TViewpointNode.Create;
Viewpoint629.Description := 'front close';
Viewpoint629.Position := Vector3(0,0,0);
Viewpoint629.CenterOfRotation := Vector3(0,0,1.575);
{ .AddChildren }
HAnimSite628.AddChildren([Viewpoint629]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite628;
HAnimSite630 := THAnimSiteNode.Create;
HAnimSite630.NameField := 'side_close_view';
HAnimSite630.Translation := Vector3(1.56,0.854,0);
HAnimSite630.Rotation := Vector4(0,1,0,1.5708);
Viewpoint631 := TViewpointNode.Create;
Viewpoint631.Description := 'side close';
Viewpoint631.Position := Vector3(0,0,0);
Viewpoint631.CenterOfRotation := Vector3(1.6,0,0);
{ .AddChildren }
HAnimSite630.AddChildren([Viewpoint631]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite630;
HAnimSite632 := THAnimSiteNode.Create;
HAnimSite632.NameField := 'head_front_close_view';
HAnimSite632.Translation := Vector3(0,1.5,1);
Viewpoint633 := TViewpointNode.Create;
Viewpoint633.Description := 'head front close';
Viewpoint633.Position := Vector3(0,0,0);
Viewpoint633.CenterOfRotation := Vector3(0,0,1);
{ .AddChildren }
HAnimSite632.AddChildren([Viewpoint633]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite632;
HAnimSite634 := THAnimSiteNode.Create;
HAnimSite634.NameField := 'chest_front_close_view';
HAnimSite634.Translation := Vector3(0,1.2,1);
Viewpoint635 := TViewpointNode.Create;
Viewpoint635.Description := 'chest front close';
Viewpoint635.Position := Vector3(0,0,0);
Viewpoint635.CenterOfRotation := Vector3(0,0,1);
{ .AddChildren }
HAnimSite634.AddChildren([Viewpoint635]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite634;
HAnimSite636 := THAnimSiteNode.Create;
HAnimSite636.NameField := 'pelvis_front_close_view';
HAnimSite636.Translation := Vector3(0,0.8,1);
Viewpoint637 := TViewpointNode.Create;
Viewpoint637.Description := 'pelvis front close';
Viewpoint637.Position := Vector3(0,0,0);
Viewpoint637.CenterOfRotation := Vector3(0,0,1);
{ .AddChildren }
HAnimSite636.AddChildren([Viewpoint637]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite636;
HAnimSite638 := THAnimSiteNode.Create;
HAnimSite638.NameField := 'knees_front_close_view';
HAnimSite638.Translation := Vector3(0,0.4,1);
Viewpoint639 := TViewpointNode.Create;
Viewpoint639.Description := 'knees front close';
Viewpoint639.Position := Vector3(0,0,0);
Viewpoint639.CenterOfRotation := Vector3(0,0.4,0);
{ .AddChildren }
HAnimSite638.AddChildren([Viewpoint639]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite638;
HAnimSite640 := THAnimSiteNode.Create;
HAnimSite640.NameField := 'feet_front_close_view';
HAnimSite640.Translation := Vector3(0,0,1);
Viewpoint641 := TViewpointNode.Create;
Viewpoint641.Description := 'feet front close';
Viewpoint641.Position := Vector3(0,0,0);
{ .AddChildren }
HAnimSite640.AddChildren([Viewpoint641]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite640;
HAnimSite642 := THAnimSiteNode.Create;
HAnimSite642.NameField := 'eye_level_view';
HAnimSite642.Translation := Vector3(0,1.6332,0.0502);
Viewpoint643 := TViewpointNode.Create;
Viewpoint643.Description := 'eye level looking forward';
Viewpoint643.Position := Vector3(0,0,0);
Viewpoint643.Orientation := Vector4(0,1,0,3.141593);
{ .AddChildren }
HAnimSite642.AddChildren([Viewpoint643]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite642;
HAnimSite644 := THAnimSiteNode.Create;
HAnimSite644 := HAnimSite183;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite644;
HAnimSite645 := THAnimSiteNode.Create;
HAnimSite645 := HAnimSite191;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite645;
HAnimSite646 := THAnimSiteNode.Create;
HAnimSite646 := HAnimSite223;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite646;
HAnimSite647 := THAnimSiteNode.Create;
HAnimSite647 := HAnimSite291;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite647;
{ .AddChildren }
Group27.AddChildren([HAnimHumanoid41]);
{ .AddGroup }
X3D0.AddChildren([Group27]);
Result := X3D0;
end;
