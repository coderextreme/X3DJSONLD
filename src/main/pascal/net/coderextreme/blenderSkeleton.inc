function blenderSkeleton: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Background9: TBackgroundNode;
Transform10: TTransformNode;
Shape11: TShapeNode;
Box12: TBoxNode;
Appearance13: TAppearanceNode;
Material14: TMaterialNode;
Transform15: TTransformNode;
Shape16: TShapeNode;
Sphere17: TSphereNode;
Appearance18: TAppearanceNode;
Material19: TMaterialNode;
Transform20: TTransformNode;
PointLight21: TPointLightNode;
Transform22: TTransformNode;
Viewpoint23: TViewpointNode;
Transform24: TTransformNode;
HAnimHumanoid25: THAnimHumanoidNode;
HAnimJoint26: THAnimJointNode;
HAnimSegment27: THAnimSegmentNode;
TouchSensor28: TTouchSensorNode;
Transform29: TTransformNode;
Shape30: TShapeNode;
HAnimSite31: THAnimSiteNode;
Transform32: TTransformNode;
Shape33: TShapeNode;
HAnimJoint34: THAnimJointNode;
HAnimSegment35: THAnimSegmentNode;
TouchSensor36: TTouchSensorNode;
Transform37: TTransformNode;
Shape38: TShapeNode;
HAnimSite39: THAnimSiteNode;
Transform40: TTransformNode;
Shape41: TShapeNode;
HAnimJoint42: THAnimJointNode;
HAnimSegment43: THAnimSegmentNode;
TouchSensor44: TTouchSensorNode;
Transform45: TTransformNode;
Shape46: TShapeNode;
HAnimSite47: THAnimSiteNode;
Transform48: TTransformNode;
Shape49: TShapeNode;
HAnimJoint50: THAnimJointNode;
HAnimSegment51: THAnimSegmentNode;
TouchSensor52: TTouchSensorNode;
Transform53: TTransformNode;
Shape54: TShapeNode;
HAnimSite55: THAnimSiteNode;
Transform56: TTransformNode;
Shape57: TShapeNode;
HAnimJoint58: THAnimJointNode;
HAnimSegment59: THAnimSegmentNode;
TouchSensor60: TTouchSensorNode;
Transform61: TTransformNode;
Shape62: TShapeNode;
HAnimSite63: THAnimSiteNode;
Transform64: TTransformNode;
Shape65: TShapeNode;
HAnimJoint66: THAnimJointNode;
HAnimSegment67: THAnimSegmentNode;
TouchSensor68: TTouchSensorNode;
Transform69: TTransformNode;
Shape70: TShapeNode;
HAnimSite71: THAnimSiteNode;
Transform72: TTransformNode;
Shape73: TShapeNode;
HAnimJoint74: THAnimJointNode;
HAnimSegment75: THAnimSegmentNode;
TouchSensor76: TTouchSensorNode;
Transform77: TTransformNode;
Shape78: TShapeNode;
HAnimSite79: THAnimSiteNode;
Transform80: TTransformNode;
Shape81: TShapeNode;
HAnimJoint82: THAnimJointNode;
HAnimSegment83: THAnimSegmentNode;
TouchSensor84: TTouchSensorNode;
Transform85: TTransformNode;
Shape86: TShapeNode;
HAnimSite87: THAnimSiteNode;
Transform88: TTransformNode;
Shape89: TShapeNode;
HAnimJoint90: THAnimJointNode;
HAnimSegment91: THAnimSegmentNode;
TouchSensor92: TTouchSensorNode;
Transform93: TTransformNode;
Shape94: TShapeNode;
HAnimSite95: THAnimSiteNode;
Transform96: TTransformNode;
Shape97: TShapeNode;
HAnimJoint98: THAnimJointNode;
HAnimSegment99: THAnimSegmentNode;
TouchSensor100: TTouchSensorNode;
Transform101: TTransformNode;
Shape102: TShapeNode;
HAnimSite103: THAnimSiteNode;
Transform104: TTransformNode;
Shape105: TShapeNode;
HAnimJoint106: THAnimJointNode;
HAnimSegment107: THAnimSegmentNode;
TouchSensor108: TTouchSensorNode;
Transform109: TTransformNode;
Shape110: TShapeNode;
HAnimSite111: THAnimSiteNode;
Transform112: TTransformNode;
Shape113: TShapeNode;
HAnimJoint114: THAnimJointNode;
HAnimSegment115: THAnimSegmentNode;
TouchSensor116: TTouchSensorNode;
Transform117: TTransformNode;
Shape118: TShapeNode;
HAnimSite119: THAnimSiteNode;
Transform120: TTransformNode;
Shape121: TShapeNode;
HAnimJoint122: THAnimJointNode;
HAnimSegment123: THAnimSegmentNode;
TouchSensor124: TTouchSensorNode;
Transform125: TTransformNode;
Shape126: TShapeNode;
HAnimSite127: THAnimSiteNode;
Transform128: TTransformNode;
Shape129: TShapeNode;
HAnimJoint130: THAnimJointNode;
HAnimSegment131: THAnimSegmentNode;
TouchSensor132: TTouchSensorNode;
Transform133: TTransformNode;
Shape134: TShapeNode;
HAnimSite135: THAnimSiteNode;
Transform136: TTransformNode;
Shape137: TShapeNode;
HAnimJoint138: THAnimJointNode;
HAnimSegment139: THAnimSegmentNode;
TouchSensor140: TTouchSensorNode;
Transform141: TTransformNode;
Shape142: TShapeNode;
HAnimSite143: THAnimSiteNode;
Transform144: TTransformNode;
Shape145: TShapeNode;
HAnimJoint146: THAnimJointNode;
HAnimSegment147: THAnimSegmentNode;
TouchSensor148: TTouchSensorNode;
Transform149: TTransformNode;
Shape150: TShapeNode;
HAnimSite151: THAnimSiteNode;
Transform152: TTransformNode;
Shape153: TShapeNode;
HAnimJoint154: THAnimJointNode;
HAnimSegment155: THAnimSegmentNode;
TouchSensor156: TTouchSensorNode;
Transform157: TTransformNode;
Shape158: TShapeNode;
HAnimSite159: THAnimSiteNode;
Transform160: TTransformNode;
Shape161: TShapeNode;
HAnimJoint162: THAnimJointNode;
HAnimSegment163: THAnimSegmentNode;
TouchSensor164: TTouchSensorNode;
Transform165: TTransformNode;
Shape166: TShapeNode;
HAnimSite167: THAnimSiteNode;
Transform168: TTransformNode;
Shape169: TShapeNode;
HAnimJoint170: THAnimJointNode;
HAnimSegment171: THAnimSegmentNode;
TouchSensor172: TTouchSensorNode;
Transform173: TTransformNode;
Shape174: TShapeNode;
HAnimSite175: THAnimSiteNode;
Transform176: TTransformNode;
Shape177: TShapeNode;
HAnimJoint178: THAnimJointNode;
HAnimSegment179: THAnimSegmentNode;
TouchSensor180: TTouchSensorNode;
Transform181: TTransformNode;
Shape182: TShapeNode;
HAnimSite183: THAnimSiteNode;
Transform184: TTransformNode;
Shape185: TShapeNode;
HAnimJoint186: THAnimJointNode;
HAnimSegment187: THAnimSegmentNode;
TouchSensor188: TTouchSensorNode;
Transform189: TTransformNode;
Shape190: TShapeNode;
HAnimSite191: THAnimSiteNode;
Transform192: TTransformNode;
Shape193: TShapeNode;
HAnimJoint194: THAnimJointNode;
HAnimSegment195: THAnimSegmentNode;
TouchSensor196: TTouchSensorNode;
Transform197: TTransformNode;
Shape198: TShapeNode;
HAnimSite199: THAnimSiteNode;
Transform200: TTransformNode;
Shape201: TShapeNode;
HAnimJoint202: THAnimJointNode;
HAnimSegment203: THAnimSegmentNode;
TouchSensor204: TTouchSensorNode;
Transform205: TTransformNode;
Shape206: TShapeNode;
HAnimSite207: THAnimSiteNode;
Transform208: TTransformNode;
Shape209: TShapeNode;
HAnimJoint210: THAnimJointNode;
HAnimSegment211: THAnimSegmentNode;
TouchSensor212: TTouchSensorNode;
Transform213: TTransformNode;
Shape214: TShapeNode;
HAnimSite215: THAnimSiteNode;
Transform216: TTransformNode;
Shape217: TShapeNode;
HAnimJoint218: THAnimJointNode;
HAnimSegment219: THAnimSegmentNode;
TouchSensor220: TTouchSensorNode;
Transform221: TTransformNode;
Shape222: TShapeNode;
HAnimSite223: THAnimSiteNode;
Transform224: TTransformNode;
Shape225: TShapeNode;
HAnimJoint226: THAnimJointNode;
HAnimSegment227: THAnimSegmentNode;
TouchSensor228: TTouchSensorNode;
Transform229: TTransformNode;
Shape230: TShapeNode;
HAnimSite231: THAnimSiteNode;
Transform232: TTransformNode;
Shape233: TShapeNode;
HAnimJoint234: THAnimJointNode;
HAnimSegment235: THAnimSegmentNode;
TouchSensor236: TTouchSensorNode;
Transform237: TTransformNode;
Shape238: TShapeNode;
HAnimSite239: THAnimSiteNode;
Transform240: TTransformNode;
Shape241: TShapeNode;
HAnimJoint242: THAnimJointNode;
HAnimSegment243: THAnimSegmentNode;
TouchSensor244: TTouchSensorNode;
Transform245: TTransformNode;
Shape246: TShapeNode;
HAnimSite247: THAnimSiteNode;
Transform248: TTransformNode;
Shape249: TShapeNode;
HAnimJoint250: THAnimJointNode;
HAnimSegment251: THAnimSegmentNode;
TouchSensor252: TTouchSensorNode;
Transform253: TTransformNode;
Shape254: TShapeNode;
HAnimSite255: THAnimSiteNode;
Transform256: TTransformNode;
Shape257: TShapeNode;
HAnimJoint258: THAnimJointNode;
HAnimSegment259: THAnimSegmentNode;
TouchSensor260: TTouchSensorNode;
Transform261: TTransformNode;
Shape262: TShapeNode;
HAnimSite263: THAnimSiteNode;
Transform264: TTransformNode;
Shape265: TShapeNode;
HAnimJoint266: THAnimJointNode;
HAnimSegment267: THAnimSegmentNode;
TouchSensor268: TTouchSensorNode;
Transform269: TTransformNode;
Shape270: TShapeNode;
HAnimSite271: THAnimSiteNode;
Transform272: TTransformNode;
Shape273: TShapeNode;
HAnimJoint274: THAnimJointNode;
HAnimSegment275: THAnimSegmentNode;
TouchSensor276: TTouchSensorNode;
Transform277: TTransformNode;
Shape278: TShapeNode;
HAnimSite279: THAnimSiteNode;
Transform280: TTransformNode;
Shape281: TShapeNode;
HAnimJoint282: THAnimJointNode;
HAnimSegment283: THAnimSegmentNode;
TouchSensor284: TTouchSensorNode;
Transform285: TTransformNode;
Shape286: TShapeNode;
HAnimSite287: THAnimSiteNode;
Transform288: TTransformNode;
Shape289: TShapeNode;
HAnimJoint290: THAnimJointNode;
HAnimSegment291: THAnimSegmentNode;
TouchSensor292: TTouchSensorNode;
Transform293: TTransformNode;
Shape294: TShapeNode;
HAnimSite295: THAnimSiteNode;
Transform296: TTransformNode;
Shape297: TShapeNode;
HAnimJoint298: THAnimJointNode;
HAnimSegment299: THAnimSegmentNode;
TouchSensor300: TTouchSensorNode;
Transform301: TTransformNode;
Shape302: TShapeNode;
HAnimSite303: THAnimSiteNode;
Transform304: TTransformNode;
Shape305: TShapeNode;
HAnimJoint306: THAnimJointNode;
HAnimSegment307: THAnimSegmentNode;
TouchSensor308: TTouchSensorNode;
Transform309: TTransformNode;
Shape310: TShapeNode;
HAnimSite311: THAnimSiteNode;
Transform312: TTransformNode;
Shape313: TShapeNode;
HAnimJoint314: THAnimJointNode;
HAnimSegment315: THAnimSegmentNode;
TouchSensor316: TTouchSensorNode;
Transform317: TTransformNode;
Shape318: TShapeNode;
HAnimSite319: THAnimSiteNode;
Transform320: TTransformNode;
Shape321: TShapeNode;
HAnimJoint322: THAnimJointNode;
HAnimSegment323: THAnimSegmentNode;
TouchSensor324: TTouchSensorNode;
Transform325: TTransformNode;
Shape326: TShapeNode;
HAnimSite327: THAnimSiteNode;
Transform328: TTransformNode;
Shape329: TShapeNode;
HAnimJoint330: THAnimJointNode;
HAnimSegment331: THAnimSegmentNode;
TouchSensor332: TTouchSensorNode;
Transform333: TTransformNode;
Shape334: TShapeNode;
HAnimSite335: THAnimSiteNode;
Transform336: TTransformNode;
Shape337: TShapeNode;
HAnimJoint338: THAnimJointNode;
HAnimSegment339: THAnimSegmentNode;
TouchSensor340: TTouchSensorNode;
Transform341: TTransformNode;
Shape342: TShapeNode;
HAnimSite343: THAnimSiteNode;
Transform344: TTransformNode;
Shape345: TShapeNode;
HAnimJoint346: THAnimJointNode;
HAnimSegment347: THAnimSegmentNode;
TouchSensor348: TTouchSensorNode;
Transform349: TTransformNode;
Shape350: TShapeNode;
HAnimSite351: THAnimSiteNode;
Transform352: TTransformNode;
Shape353: TShapeNode;
HAnimJoint354: THAnimJointNode;
HAnimSegment355: THAnimSegmentNode;
TouchSensor356: TTouchSensorNode;
Transform357: TTransformNode;
Shape358: TShapeNode;
HAnimSite359: THAnimSiteNode;
Transform360: TTransformNode;
Shape361: TShapeNode;
HAnimJoint362: THAnimJointNode;
HAnimSegment363: THAnimSegmentNode;
TouchSensor364: TTouchSensorNode;
Transform365: TTransformNode;
Shape366: TShapeNode;
HAnimSite367: THAnimSiteNode;
Transform368: TTransformNode;
Shape369: TShapeNode;
HAnimJoint370: THAnimJointNode;
HAnimSegment371: THAnimSegmentNode;
TouchSensor372: TTouchSensorNode;
Transform373: TTransformNode;
Shape374: TShapeNode;
HAnimSite375: THAnimSiteNode;
Transform376: TTransformNode;
Shape377: TShapeNode;
HAnimJoint378: THAnimJointNode;
HAnimSegment379: THAnimSegmentNode;
TouchSensor380: TTouchSensorNode;
Transform381: TTransformNode;
Shape382: TShapeNode;
HAnimSite383: THAnimSiteNode;
Transform384: TTransformNode;
Shape385: TShapeNode;
HAnimJoint386: THAnimJointNode;
HAnimSegment387: THAnimSegmentNode;
TouchSensor388: TTouchSensorNode;
Transform389: TTransformNode;
Shape390: TShapeNode;
HAnimSite391: THAnimSiteNode;
Transform392: TTransformNode;
Shape393: TShapeNode;
HAnimJoint394: THAnimJointNode;
HAnimSegment395: THAnimSegmentNode;
TouchSensor396: TTouchSensorNode;
Transform397: TTransformNode;
Shape398: TShapeNode;
HAnimSite399: THAnimSiteNode;
Transform400: TTransformNode;
Shape401: TShapeNode;
HAnimJoint402: THAnimJointNode;
HAnimSegment403: THAnimSegmentNode;
TouchSensor404: TTouchSensorNode;
Transform405: TTransformNode;
Shape406: TShapeNode;
HAnimSite407: THAnimSiteNode;
Transform408: TTransformNode;
Shape409: TShapeNode;
HAnimJoint410: THAnimJointNode;
HAnimSegment411: THAnimSegmentNode;
TouchSensor412: TTouchSensorNode;
Transform413: TTransformNode;
Shape414: TShapeNode;
HAnimSite415: THAnimSiteNode;
Transform416: TTransformNode;
Shape417: TShapeNode;
HAnimJoint418: THAnimJointNode;
HAnimSegment419: THAnimSegmentNode;
TouchSensor420: TTouchSensorNode;
Transform421: TTransformNode;
Shape422: TShapeNode;
HAnimSite423: THAnimSiteNode;
Transform424: TTransformNode;
Shape425: TShapeNode;
HAnimJoint426: THAnimJointNode;
HAnimSegment427: THAnimSegmentNode;
TouchSensor428: TTouchSensorNode;
Transform429: TTransformNode;
Shape430: TShapeNode;
HAnimSite431: THAnimSiteNode;
Transform432: TTransformNode;
Shape433: TShapeNode;
HAnimJoint434: THAnimJointNode;
HAnimSegment435: THAnimSegmentNode;
TouchSensor436: TTouchSensorNode;
Transform437: TTransformNode;
Shape438: TShapeNode;
HAnimSite439: THAnimSiteNode;
Transform440: TTransformNode;
Shape441: TShapeNode;
HAnimJoint442: THAnimJointNode;
HAnimSegment443: THAnimSegmentNode;
TouchSensor444: TTouchSensorNode;
Transform445: TTransformNode;
Shape446: TShapeNode;
HAnimSite447: THAnimSiteNode;
Transform448: TTransformNode;
Shape449: TShapeNode;
HAnimJoint450: THAnimJointNode;
HAnimSegment451: THAnimSegmentNode;
TouchSensor452: TTouchSensorNode;
Transform453: TTransformNode;
Shape454: TShapeNode;
HAnimSite455: THAnimSiteNode;
Transform456: TTransformNode;
Shape457: TShapeNode;
HAnimJoint458: THAnimJointNode;
HAnimSegment459: THAnimSegmentNode;
TouchSensor460: TTouchSensorNode;
Transform461: TTransformNode;
Shape462: TShapeNode;
HAnimSite463: THAnimSiteNode;
Transform464: TTransformNode;
Shape465: TShapeNode;
HAnimJoint466: THAnimJointNode;
HAnimSegment467: THAnimSegmentNode;
TouchSensor468: TTouchSensorNode;
Transform469: TTransformNode;
Shape470: TShapeNode;
HAnimSite471: THAnimSiteNode;
Transform472: TTransformNode;
Shape473: TShapeNode;
HAnimJoint474: THAnimJointNode;
HAnimSegment475: THAnimSegmentNode;
TouchSensor476: TTouchSensorNode;
Transform477: TTransformNode;
Shape478: TShapeNode;
HAnimSite479: THAnimSiteNode;
Transform480: TTransformNode;
Shape481: TShapeNode;
HAnimJoint482: THAnimJointNode;
HAnimSegment483: THAnimSegmentNode;
TouchSensor484: TTouchSensorNode;
Transform485: TTransformNode;
Shape486: TShapeNode;
HAnimSite487: THAnimSiteNode;
Transform488: TTransformNode;
Shape489: TShapeNode;
HAnimJoint490: THAnimJointNode;
HAnimSegment491: THAnimSegmentNode;
TouchSensor492: TTouchSensorNode;
Transform493: TTransformNode;
Shape494: TShapeNode;
HAnimSite495: THAnimSiteNode;
Transform496: TTransformNode;
Shape497: TShapeNode;
HAnimJoint498: THAnimJointNode;
HAnimSegment499: THAnimSegmentNode;
TouchSensor500: TTouchSensorNode;
Transform501: TTransformNode;
Shape502: TShapeNode;
HAnimSite503: THAnimSiteNode;
Transform504: TTransformNode;
Shape505: TShapeNode;
HAnimJoint506: THAnimJointNode;
HAnimSegment507: THAnimSegmentNode;
TouchSensor508: TTouchSensorNode;
Transform509: TTransformNode;
Shape510: TShapeNode;
HAnimSite511: THAnimSiteNode;
Transform512: TTransformNode;
Shape513: TShapeNode;
HAnimJoint514: THAnimJointNode;
HAnimSegment515: THAnimSegmentNode;
TouchSensor516: TTouchSensorNode;
Transform517: TTransformNode;
Shape518: TShapeNode;
HAnimSite519: THAnimSiteNode;
Transform520: TTransformNode;
Shape521: TShapeNode;
HAnimJoint522: THAnimJointNode;
HAnimSegment523: THAnimSegmentNode;
TouchSensor524: TTouchSensorNode;
Transform525: TTransformNode;
Shape526: TShapeNode;
HAnimSite527: THAnimSiteNode;
Transform528: TTransformNode;
Shape529: TShapeNode;
HAnimJoint530: THAnimJointNode;
HAnimSegment531: THAnimSegmentNode;
TouchSensor532: TTouchSensorNode;
Transform533: TTransformNode;
Shape534: TShapeNode;
HAnimSite535: THAnimSiteNode;
Transform536: TTransformNode;
Shape537: TShapeNode;
HAnimJoint538: THAnimJointNode;
HAnimSegment539: THAnimSegmentNode;
TouchSensor540: TTouchSensorNode;
Transform541: TTransformNode;
Shape542: TShapeNode;
HAnimSite543: THAnimSiteNode;
Transform544: TTransformNode;
Shape545: TShapeNode;
HAnimJoint546: THAnimJointNode;
HAnimSegment547: THAnimSegmentNode;
TouchSensor548: TTouchSensorNode;
Transform549: TTransformNode;
Shape550: TShapeNode;
HAnimSite551: THAnimSiteNode;
Transform552: TTransformNode;
Shape553: TShapeNode;
HAnimJoint554: THAnimJointNode;
HAnimSegment555: THAnimSegmentNode;
TouchSensor556: TTouchSensorNode;
Transform557: TTransformNode;
Shape558: TShapeNode;
HAnimSite559: THAnimSiteNode;
Transform560: TTransformNode;
Shape561: TShapeNode;
HAnimJoint562: THAnimJointNode;
HAnimSegment563: THAnimSegmentNode;
TouchSensor564: TTouchSensorNode;
Transform565: TTransformNode;
Shape566: TShapeNode;
HAnimSite567: THAnimSiteNode;
Transform568: TTransformNode;
Shape569: TShapeNode;
HAnimJoint570: THAnimJointNode;
HAnimSegment571: THAnimSegmentNode;
TouchSensor572: TTouchSensorNode;
Transform573: TTransformNode;
Shape574: TShapeNode;
HAnimSite575: THAnimSiteNode;
Transform576: TTransformNode;
Shape577: TShapeNode;
HAnimJoint578: THAnimJointNode;
HAnimSegment579: THAnimSegmentNode;
TouchSensor580: TTouchSensorNode;
Transform581: TTransformNode;
Shape582: TShapeNode;
HAnimSite583: THAnimSiteNode;
Transform584: TTransformNode;
Shape585: TShapeNode;
HAnimJoint586: THAnimJointNode;
HAnimSegment587: THAnimSegmentNode;
TouchSensor588: TTouchSensorNode;
Transform589: TTransformNode;
Shape590: TShapeNode;
HAnimSite591: THAnimSiteNode;
Transform592: TTransformNode;
Shape593: TShapeNode;
HAnimJoint594: THAnimJointNode;
HAnimSegment595: THAnimSegmentNode;
TouchSensor596: TTouchSensorNode;
Transform597: TTransformNode;
Shape598: TShapeNode;
HAnimSite599: THAnimSiteNode;
Transform600: TTransformNode;
Shape601: TShapeNode;
HAnimJoint602: THAnimJointNode;
HAnimSegment603: THAnimSegmentNode;
TouchSensor604: TTouchSensorNode;
Transform605: TTransformNode;
Shape606: TShapeNode;
HAnimSite607: THAnimSiteNode;
Transform608: TTransformNode;
Shape609: TShapeNode;
HAnimJoint610: THAnimJointNode;
HAnimSegment611: THAnimSegmentNode;
TouchSensor612: TTouchSensorNode;
Transform613: TTransformNode;
Shape614: TShapeNode;
HAnimSite615: THAnimSiteNode;
Transform616: TTransformNode;
Shape617: TShapeNode;
HAnimJoint618: THAnimJointNode;
HAnimSegment619: THAnimSegmentNode;
TouchSensor620: TTouchSensorNode;
Transform621: TTransformNode;
Shape622: TShapeNode;
HAnimSite623: THAnimSiteNode;
Transform624: TTransformNode;
Shape625: TShapeNode;
HAnimJoint626: THAnimJointNode;
HAnimSegment627: THAnimSegmentNode;
TouchSensor628: TTouchSensorNode;
Transform629: TTransformNode;
Shape630: TShapeNode;
HAnimSite631: THAnimSiteNode;
Transform632: TTransformNode;
Shape633: TShapeNode;
HAnimJoint634: THAnimJointNode;
HAnimSegment635: THAnimSegmentNode;
TouchSensor636: TTouchSensorNode;
Transform637: TTransformNode;
Shape638: TShapeNode;
HAnimSite639: THAnimSiteNode;
Transform640: TTransformNode;
Shape641: TShapeNode;
HAnimJoint642: THAnimJointNode;
HAnimSegment643: THAnimSegmentNode;
TouchSensor644: TTouchSensorNode;
Transform645: TTransformNode;
Shape646: TShapeNode;
HAnimSite647: THAnimSiteNode;
Transform648: TTransformNode;
Shape649: TShapeNode;
HAnimJoint650: THAnimJointNode;
HAnimSegment651: THAnimSegmentNode;
TouchSensor652: TTouchSensorNode;
Transform653: TTransformNode;
Shape654: TShapeNode;
HAnimSite655: THAnimSiteNode;
Transform656: TTransformNode;
Shape657: TShapeNode;
HAnimJoint658: THAnimJointNode;
HAnimSegment659: THAnimSegmentNode;
TouchSensor660: TTouchSensorNode;
Transform661: TTransformNode;
Shape662: TShapeNode;
HAnimSite663: THAnimSiteNode;
Transform664: TTransformNode;
Shape665: TShapeNode;
HAnimJoint666: THAnimJointNode;
HAnimSegment667: THAnimSegmentNode;
TouchSensor668: TTouchSensorNode;
Transform669: TTransformNode;
Shape670: TShapeNode;
HAnimSite671: THAnimSiteNode;
Transform672: TTransformNode;
Shape673: TShapeNode;
HAnimJoint674: THAnimJointNode;
HAnimSegment675: THAnimSegmentNode;
TouchSensor676: TTouchSensorNode;
Transform677: TTransformNode;
Shape678: TShapeNode;
HAnimSite679: THAnimSiteNode;
Transform680: TTransformNode;
Shape681: TShapeNode;
HAnimJoint682: THAnimJointNode;
HAnimSegment683: THAnimSegmentNode;
TouchSensor684: TTouchSensorNode;
Transform685: TTransformNode;
Shape686: TShapeNode;
HAnimSite687: THAnimSiteNode;
Transform688: TTransformNode;
Shape689: TShapeNode;
HAnimJoint690: THAnimJointNode;
HAnimSegment691: THAnimSegmentNode;
TouchSensor692: TTouchSensorNode;
Transform693: TTransformNode;
Shape694: TShapeNode;
HAnimSite695: THAnimSiteNode;
Transform696: TTransformNode;
Shape697: TShapeNode;
HAnimJoint698: THAnimJointNode;
HAnimSegment699: THAnimSegmentNode;
TouchSensor700: TTouchSensorNode;
Transform701: TTransformNode;
Shape702: TShapeNode;
HAnimSite703: THAnimSiteNode;
Transform704: TTransformNode;
Shape705: TShapeNode;
HAnimJoint706: THAnimJointNode;
HAnimSegment707: THAnimSegmentNode;
TouchSensor708: TTouchSensorNode;
Transform709: TTransformNode;
Shape710: TShapeNode;
HAnimSite711: THAnimSiteNode;
Transform712: TTransformNode;
Shape713: TShapeNode;
HAnimJoint714: THAnimJointNode;
HAnimSegment715: THAnimSegmentNode;
TouchSensor716: TTouchSensorNode;
Transform717: TTransformNode;
Shape718: TShapeNode;
HAnimSite719: THAnimSiteNode;
Transform720: TTransformNode;
Shape721: TShapeNode;
HAnimJoint722: THAnimJointNode;
HAnimSegment723: THAnimSegmentNode;
TouchSensor724: TTouchSensorNode;
Transform725: TTransformNode;
Shape726: TShapeNode;
HAnimSite727: THAnimSiteNode;
Transform728: TTransformNode;
Shape729: TShapeNode;
HAnimJoint730: THAnimJointNode;
HAnimSegment731: THAnimSegmentNode;
TouchSensor732: TTouchSensorNode;
Transform733: TTransformNode;
Shape734: TShapeNode;
HAnimSite735: THAnimSiteNode;
Transform736: TTransformNode;
Shape737: TShapeNode;
HAnimJoint738: THAnimJointNode;
HAnimSegment739: THAnimSegmentNode;
TouchSensor740: TTouchSensorNode;
Transform741: TTransformNode;
Shape742: TShapeNode;
HAnimSite743: THAnimSiteNode;
Transform744: TTransformNode;
Shape745: TShapeNode;
HAnimJoint746: THAnimJointNode;
HAnimSegment747: THAnimSegmentNode;
TouchSensor748: TTouchSensorNode;
Transform749: TTransformNode;
Shape750: TShapeNode;
HAnimSite751: THAnimSiteNode;
Transform752: TTransformNode;
Shape753: TShapeNode;
HAnimJoint754: THAnimJointNode;
HAnimSegment755: THAnimSegmentNode;
TouchSensor756: TTouchSensorNode;
Transform757: TTransformNode;
Shape758: TShapeNode;
HAnimSite759: THAnimSiteNode;
Transform760: TTransformNode;
Shape761: TShapeNode;
HAnimJoint762: THAnimJointNode;
HAnimSegment763: THAnimSegmentNode;
TouchSensor764: TTouchSensorNode;
Transform765: TTransformNode;
Shape766: TShapeNode;
HAnimSite767: THAnimSiteNode;
Transform768: TTransformNode;
Shape769: TShapeNode;
HAnimJoint770: THAnimJointNode;
HAnimSegment771: THAnimSegmentNode;
TouchSensor772: TTouchSensorNode;
Transform773: TTransformNode;
Shape774: TShapeNode;
HAnimSite775: THAnimSiteNode;
Transform776: TTransformNode;
Shape777: TShapeNode;
HAnimJoint778: THAnimJointNode;
HAnimSegment779: THAnimSegmentNode;
TouchSensor780: TTouchSensorNode;
Transform781: TTransformNode;
Shape782: TShapeNode;
HAnimSite783: THAnimSiteNode;
Transform784: TTransformNode;
Shape785: TShapeNode;
HAnimJoint786: THAnimJointNode;
HAnimSegment787: THAnimSegmentNode;
TouchSensor788: TTouchSensorNode;
Transform789: TTransformNode;
Shape790: TShapeNode;
HAnimSite791: THAnimSiteNode;
Transform792: TTransformNode;
Shape793: TShapeNode;
HAnimJoint794: THAnimJointNode;
HAnimSegment795: THAnimSegmentNode;
TouchSensor796: TTouchSensorNode;
Transform797: TTransformNode;
Shape798: TShapeNode;
HAnimSite799: THAnimSiteNode;
Transform800: TTransformNode;
Shape801: TShapeNode;
HAnimJoint802: THAnimJointNode;
HAnimSegment803: THAnimSegmentNode;
TouchSensor804: TTouchSensorNode;
Transform805: TTransformNode;
Shape806: TShapeNode;
HAnimSite807: THAnimSiteNode;
Transform808: TTransformNode;
Shape809: TShapeNode;
HAnimJoint810: THAnimJointNode;
HAnimSegment811: THAnimSegmentNode;
TouchSensor812: TTouchSensorNode;
Transform813: TTransformNode;
Shape814: TShapeNode;
HAnimSite815: THAnimSiteNode;
Transform816: TTransformNode;
Shape817: TShapeNode;
HAnimJoint818: THAnimJointNode;
HAnimSegment819: THAnimSegmentNode;
TouchSensor820: TTouchSensorNode;
Transform821: TTransformNode;
Shape822: TShapeNode;
HAnimSite823: THAnimSiteNode;
Transform824: TTransformNode;
Shape825: TShapeNode;
HAnimJoint826: THAnimJointNode;
HAnimSegment827: THAnimSegmentNode;
TouchSensor828: TTouchSensorNode;
Transform829: TTransformNode;
Shape830: TShapeNode;
HAnimSite831: THAnimSiteNode;
Transform832: TTransformNode;
Shape833: TShapeNode;
HAnimJoint834: THAnimJointNode;
HAnimSegment835: THAnimSegmentNode;
TouchSensor836: TTouchSensorNode;
Transform837: TTransformNode;
Shape838: TShapeNode;
HAnimSite839: THAnimSiteNode;
Transform840: TTransformNode;
Shape841: TShapeNode;
HAnimJoint842: THAnimJointNode;
HAnimSegment843: THAnimSegmentNode;
TouchSensor844: TTouchSensorNode;
Transform845: TTransformNode;
Shape846: TShapeNode;
HAnimSite847: THAnimSiteNode;
Transform848: TTransformNode;
Shape849: TShapeNode;
HAnimJoint850: THAnimJointNode;
HAnimSegment851: THAnimSegmentNode;
TouchSensor852: TTouchSensorNode;
Transform853: TTransformNode;
Shape854: TShapeNode;
HAnimSite855: THAnimSiteNode;
Transform856: TTransformNode;
Shape857: TShapeNode;
HAnimJoint858: THAnimJointNode;
HAnimSegment859: THAnimSegmentNode;
TouchSensor860: TTouchSensorNode;
Transform861: TTransformNode;
Shape862: TShapeNode;
HAnimSite863: THAnimSiteNode;
Transform864: TTransformNode;
Shape865: TShapeNode;
HAnimJoint866: THAnimJointNode;
HAnimSegment867: THAnimSegmentNode;
TouchSensor868: TTouchSensorNode;
Transform869: TTransformNode;
Shape870: TShapeNode;
HAnimSite871: THAnimSiteNode;
Transform872: TTransformNode;
Shape873: TShapeNode;
HAnimJoint874: THAnimJointNode;
HAnimSegment875: THAnimSegmentNode;
TouchSensor876: TTouchSensorNode;
Transform877: TTransformNode;
Shape878: TShapeNode;
HAnimSite879: THAnimSiteNode;
Transform880: TTransformNode;
Shape881: TShapeNode;
HAnimJoint882: THAnimJointNode;
HAnimSegment883: THAnimSegmentNode;
TouchSensor884: TTouchSensorNode;
Transform885: TTransformNode;
Shape886: TShapeNode;
HAnimSite887: THAnimSiteNode;
Transform888: TTransformNode;
Shape889: TShapeNode;
HAnimJoint890: THAnimJointNode;
HAnimSegment891: THAnimSegmentNode;
TouchSensor892: TTouchSensorNode;
Transform893: TTransformNode;
Shape894: TShapeNode;
HAnimSite895: THAnimSiteNode;
Transform896: TTransformNode;
Shape897: TShapeNode;
HAnimJoint898: THAnimJointNode;
HAnimSegment899: THAnimSegmentNode;
TouchSensor900: TTouchSensorNode;
Transform901: TTransformNode;
Shape902: TShapeNode;
HAnimSite903: THAnimSiteNode;
Transform904: TTransformNode;
Shape905: TShapeNode;
HAnimJoint906: THAnimJointNode;
HAnimSegment907: THAnimSegmentNode;
TouchSensor908: TTouchSensorNode;
Transform909: TTransformNode;
Shape910: TShapeNode;
HAnimSite911: THAnimSiteNode;
Transform912: TTransformNode;
Shape913: TShapeNode;
HAnimJoint914: THAnimJointNode;
HAnimSegment915: THAnimSegmentNode;
TouchSensor916: TTouchSensorNode;
Transform917: TTransformNode;
Shape918: TShapeNode;
HAnimSite919: THAnimSiteNode;
Transform920: TTransformNode;
Shape921: TShapeNode;
HAnimJoint922: THAnimJointNode;
HAnimSegment923: THAnimSegmentNode;
TouchSensor924: TTouchSensorNode;
Transform925: TTransformNode;
Shape926: TShapeNode;
HAnimSite927: THAnimSiteNode;
Transform928: TTransformNode;
Shape929: TShapeNode;
HAnimJoint930: THAnimJointNode;
HAnimSegment931: THAnimSegmentNode;
TouchSensor932: TTouchSensorNode;
Transform933: TTransformNode;
Shape934: TShapeNode;
HAnimSite935: THAnimSiteNode;
Transform936: TTransformNode;
Shape937: TShapeNode;
HAnimJoint938: THAnimJointNode;
HAnimSegment939: THAnimSegmentNode;
TouchSensor940: TTouchSensorNode;
Transform941: TTransformNode;
Shape942: TShapeNode;
HAnimSite943: THAnimSiteNode;
Transform944: TTransformNode;
Shape945: TShapeNode;
HAnimJoint946: THAnimJointNode;
HAnimSegment947: THAnimSegmentNode;
TouchSensor948: TTouchSensorNode;
Transform949: TTransformNode;
Shape950: TShapeNode;
HAnimSite951: THAnimSiteNode;
Transform952: TTransformNode;
Shape953: TShapeNode;
HAnimJoint954: THAnimJointNode;
HAnimSegment955: THAnimSegmentNode;
TouchSensor956: TTouchSensorNode;
Transform957: TTransformNode;
Shape958: TShapeNode;
HAnimSite959: THAnimSiteNode;
Transform960: TTransformNode;
Shape961: TShapeNode;
HAnimJoint962: THAnimJointNode;
HAnimSegment963: THAnimSegmentNode;
TouchSensor964: TTouchSensorNode;
Transform965: TTransformNode;
Shape966: TShapeNode;
HAnimSite967: THAnimSiteNode;
Transform968: TTransformNode;
Shape969: TShapeNode;
HAnimJoint970: THAnimJointNode;
HAnimSegment971: THAnimSegmentNode;
TouchSensor972: TTouchSensorNode;
Transform973: TTransformNode;
Shape974: TShapeNode;
HAnimSite975: THAnimSiteNode;
Transform976: TTransformNode;
Shape977: TShapeNode;
HAnimJoint978: THAnimJointNode;
HAnimSegment979: THAnimSegmentNode;
TouchSensor980: TTouchSensorNode;
Transform981: TTransformNode;
Shape982: TShapeNode;
HAnimSite983: THAnimSiteNode;
Transform984: TTransformNode;
Shape985: TShapeNode;
HAnimJoint986: THAnimJointNode;
HAnimSegment987: THAnimSegmentNode;
TouchSensor988: TTouchSensorNode;
Transform989: TTransformNode;
Shape990: TShapeNode;
HAnimSite991: THAnimSiteNode;
Transform992: TTransformNode;
Shape993: TShapeNode;
HAnimJoint994: THAnimJointNode;
HAnimSegment995: THAnimSegmentNode;
TouchSensor996: TTouchSensorNode;
Transform997: TTransformNode;
Shape998: TShapeNode;
HAnimSite999: THAnimSiteNode;
Transform1000: TTransformNode;
Shape1001: TShapeNode;
HAnimJoint1002: THAnimJointNode;
HAnimSegment1003: THAnimSegmentNode;
TouchSensor1004: TTouchSensorNode;
Transform1005: TTransformNode;
Shape1006: TShapeNode;
HAnimSite1007: THAnimSiteNode;
Transform1008: TTransformNode;
Shape1009: TShapeNode;
HAnimJoint1010: THAnimJointNode;
HAnimSegment1011: THAnimSegmentNode;
TouchSensor1012: TTouchSensorNode;
Transform1013: TTransformNode;
Shape1014: TShapeNode;
HAnimSite1015: THAnimSiteNode;
Transform1016: TTransformNode;
Shape1017: TShapeNode;
HAnimJoint1018: THAnimJointNode;
HAnimSegment1019: THAnimSegmentNode;
TouchSensor1020: TTouchSensorNode;
Transform1021: TTransformNode;
Shape1022: TShapeNode;
HAnimSite1023: THAnimSiteNode;
Transform1024: TTransformNode;
Shape1025: TShapeNode;
HAnimJoint1026: THAnimJointNode;
HAnimSegment1027: THAnimSegmentNode;
TouchSensor1028: TTouchSensorNode;
Transform1029: TTransformNode;
Shape1030: TShapeNode;
HAnimSite1031: THAnimSiteNode;
Transform1032: TTransformNode;
Shape1033: TShapeNode;
HAnimJoint1034: THAnimJointNode;
HAnimSegment1035: THAnimSegmentNode;
TouchSensor1036: TTouchSensorNode;
Transform1037: TTransformNode;
Shape1038: TShapeNode;
HAnimSite1039: THAnimSiteNode;
Transform1040: TTransformNode;
Shape1041: TShapeNode;
HAnimJoint1042: THAnimJointNode;
HAnimSegment1043: THAnimSegmentNode;
TouchSensor1044: TTouchSensorNode;
Transform1045: TTransformNode;
Shape1046: TShapeNode;
HAnimSite1047: THAnimSiteNode;
Transform1048: TTransformNode;
Shape1049: TShapeNode;
HAnimJoint1050: THAnimJointNode;
HAnimSegment1051: THAnimSegmentNode;
TouchSensor1052: TTouchSensorNode;
Transform1053: TTransformNode;
Shape1054: TShapeNode;
HAnimSite1055: THAnimSiteNode;
Transform1056: TTransformNode;
Shape1057: TShapeNode;
HAnimJoint1058: THAnimJointNode;
HAnimSegment1059: THAnimSegmentNode;
TouchSensor1060: TTouchSensorNode;
Transform1061: TTransformNode;
Shape1062: TShapeNode;
HAnimSite1063: THAnimSiteNode;
Transform1064: TTransformNode;
Shape1065: TShapeNode;
HAnimJoint1066: THAnimJointNode;
HAnimSegment1067: THAnimSegmentNode;
TouchSensor1068: TTouchSensorNode;
Transform1069: TTransformNode;
Shape1070: TShapeNode;
HAnimSite1071: THAnimSiteNode;
Transform1072: TTransformNode;
Shape1073: TShapeNode;
HAnimJoint1074: THAnimJointNode;
HAnimSegment1075: THAnimSegmentNode;
TouchSensor1076: TTouchSensorNode;
Transform1077: TTransformNode;
Shape1078: TShapeNode;
HAnimSite1079: THAnimSiteNode;
Transform1080: TTransformNode;
Shape1081: TShapeNode;
HAnimJoint1082: THAnimJointNode;
HAnimSegment1083: THAnimSegmentNode;
TouchSensor1084: TTouchSensorNode;
Transform1085: TTransformNode;
Shape1086: TShapeNode;
HAnimSite1087: THAnimSiteNode;
Transform1088: TTransformNode;
Shape1089: TShapeNode;
HAnimJoint1090: THAnimJointNode;
HAnimSegment1091: THAnimSegmentNode;
TouchSensor1092: TTouchSensorNode;
Transform1093: TTransformNode;
Shape1094: TShapeNode;
HAnimSite1095: THAnimSiteNode;
Transform1096: TTransformNode;
Shape1097: TShapeNode;
HAnimJoint1098: THAnimJointNode;
HAnimSegment1099: THAnimSegmentNode;
TouchSensor1100: TTouchSensorNode;
Transform1101: TTransformNode;
Shape1102: TShapeNode;
HAnimSite1103: THAnimSiteNode;
Transform1104: TTransformNode;
Shape1105: TShapeNode;
HAnimJoint1106: THAnimJointNode;
HAnimSegment1107: THAnimSegmentNode;
TouchSensor1108: TTouchSensorNode;
Transform1109: TTransformNode;
Shape1110: TShapeNode;
HAnimSite1111: THAnimSiteNode;
Transform1112: TTransformNode;
Shape1113: TShapeNode;
HAnimJoint1114: THAnimJointNode;
HAnimSegment1115: THAnimSegmentNode;
TouchSensor1116: TTouchSensorNode;
Transform1117: TTransformNode;
Shape1118: TShapeNode;
HAnimSite1119: THAnimSiteNode;
Transform1120: TTransformNode;
Shape1121: TShapeNode;
HAnimJoint1122: THAnimJointNode;
HAnimSegment1123: THAnimSegmentNode;
TouchSensor1124: TTouchSensorNode;
Transform1125: TTransformNode;
Shape1126: TShapeNode;
HAnimSite1127: THAnimSiteNode;
Transform1128: TTransformNode;
Shape1129: TShapeNode;
HAnimJoint1130: THAnimJointNode;
HAnimSegment1131: THAnimSegmentNode;
TouchSensor1132: TTouchSensorNode;
Transform1133: TTransformNode;
Shape1134: TShapeNode;
HAnimSite1135: THAnimSiteNode;
Transform1136: TTransformNode;
Shape1137: TShapeNode;
HAnimJoint1138: THAnimJointNode;
HAnimSegment1139: THAnimSegmentNode;
TouchSensor1140: TTouchSensorNode;
Transform1141: TTransformNode;
Shape1142: TShapeNode;
HAnimSite1143: THAnimSiteNode;
Transform1144: TTransformNode;
Shape1145: TShapeNode;
HAnimJoint1146: THAnimJointNode;
HAnimSegment1147: THAnimSegmentNode;
TouchSensor1148: TTouchSensorNode;
Transform1149: TTransformNode;
Shape1150: TShapeNode;
HAnimSite1151: THAnimSiteNode;
Transform1152: TTransformNode;
Shape1153: TShapeNode;
HAnimJoint1154: THAnimJointNode;
HAnimSegment1155: THAnimSegmentNode;
TouchSensor1156: TTouchSensorNode;
Transform1157: TTransformNode;
Shape1158: TShapeNode;
HAnimSite1159: THAnimSiteNode;
Transform1160: TTransformNode;
Shape1161: TShapeNode;
HAnimJoint1162: THAnimJointNode;
HAnimSegment1163: THAnimSegmentNode;
TouchSensor1164: TTouchSensorNode;
Transform1165: TTransformNode;
Shape1166: TShapeNode;
HAnimSite1167: THAnimSiteNode;
Transform1168: TTransformNode;
Shape1169: TShapeNode;
HAnimJoint1170: THAnimJointNode;
HAnimSegment1171: THAnimSegmentNode;
TouchSensor1172: TTouchSensorNode;
Transform1173: TTransformNode;
Shape1174: TShapeNode;
HAnimSite1175: THAnimSiteNode;
Transform1176: TTransformNode;
Shape1177: TShapeNode;
HAnimJoint1178: THAnimJointNode;
HAnimSegment1179: THAnimSegmentNode;
TouchSensor1180: TTouchSensorNode;
Transform1181: TTransformNode;
Shape1182: TShapeNode;
HAnimSite1183: THAnimSiteNode;
Transform1184: TTransformNode;
Shape1185: TShapeNode;
HAnimJoint1186: THAnimJointNode;
HAnimSegment1187: THAnimSegmentNode;
TouchSensor1188: TTouchSensorNode;
Transform1189: TTransformNode;
Shape1190: TShapeNode;
HAnimSite1191: THAnimSiteNode;
Transform1192: TTransformNode;
Shape1193: TShapeNode;
HAnimJoint1194: THAnimJointNode;
HAnimSegment1195: THAnimSegmentNode;
TouchSensor1196: TTouchSensorNode;
Transform1197: TTransformNode;
Shape1198: TShapeNode;
HAnimSite1199: THAnimSiteNode;
Transform1200: TTransformNode;
Shape1201: TShapeNode;
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
TimeSensor1348: TTimeSensorNode;
ProximitySensor1349: TProximitySensorNode;
OrientationInterpolator1351: TOrientationInterpolatorNode;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 3;
X3D0.Meta['title'] := 'blenderSkeleton.x3d';
X3D0.Meta['copyright'] := '2023';
X3D0.Meta['reference'] := 'http://www.web3D.org';
X3D0.Meta['generator'] := 'Blender 4.0.1';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
Background9 := TBackgroundNode.Create;
Background9.SetGroundColor([Vector3(0.05087608844041824,0.05087608844041824,0.05087608844041824)]);
Background9.SetSkyColor([Vector3(0.05087608844041824,0.05087608844041824,0.05087608844041824)]);
{ .AddChildren }
Group7.AddChildren([Background9]);
Transform10 := TTransformNode.Create;
Shape11 := TShapeNode.Create;
Box12 := TBoxNode.Create;
Box12.Size := Vector3(0.05,0.05,0.05);
{ .SetGeometry }
Shape11.Geometry := Box12;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance13.Material := Material14;
{ .SetAppearance }
Shape11.Appearance := Appearance13;
{ .AddChild }
Transform10.AddChildren([Shape11]);
{ .AddChildren }
Group7.AddChildren([Transform10]);
Transform15 := TTransformNode.Create;
Shape16 := TShapeNode.Create;
Sphere17 := TSphereNode.Create;
Sphere17.Radius := 0.06;
{ .SetGeometry }
Shape16.Geometry := Sphere17;
Appearance18 := TAppearanceNode.Create;
Material19 := TMaterialNode.Create;
Material19.DiffuseColor := Vector3(1,0.5,0);
Material19.Transparency := 0.5;
{ .SetMaterial }
Appearance18.Material := Material19;
{ .SetAppearance }
Shape16.Appearance := Appearance18;
{ .AddChild }
Transform15.AddChildren([Shape16]);
{ .AddChildren }
Group7.AddChildren([Transform15]);
Transform20 := TTransformNode.Create;
Transform20.Rotation := Vector4(0.20594,0.33152,0.9207,1.92627);
Transform20.Translation := Vector3(4.07625,1.00545,5.90386);
PointLight21 := TPointLightNode.Create;
PointLight21.Location := Vector3(-8.940696716308594e-8,-3.5762786865234375e-7,4.6193599700927734e-7);
PointLight21.Radius := 40;
{ .AddChildren }
Transform20.AddChildren([PointLight21]);
{ .AddChildren }
Group7.AddChildren([Transform20]);
Transform22 := TTransformNode.Create;
Transform22.Rotation := Vector4(0.77344,0.33383,0.53884,1.35072);
Transform22.Translation := Vector3(7.35889,-6.92579,4.95831);
Viewpoint23 := TViewpointNode.Create;
Viewpoint23.FieldOfView := 0.6911112070083618;
Viewpoint23.Orientation := Vector4(-3.627339850709177e-8,-0.4730778932571411,-0.8810206651687622,0);
Viewpoint23.Position := Vector3(-3.927080456378462e-7,-2.123415470123291e-7,2.384185791015625e-7);
{ .AddChildren }
Transform22.AddChildren([Viewpoint23]);
{ .AddChildren }
Group7.AddChildren([Transform22]);
Transform24 := TTransformNode.Create;
HAnimHumanoid25 := THAnimHumanoidNode.Create;
HAnimHumanoid25.NameField := 'humanoid';
HAnimHumanoid25.Version := '2.0';
HAnimJoint26 := THAnimJointNode.Create;
HAnimJoint26.NameField := 'Armature';
HAnimJoint26.SetUlimit([0,0,0]);
HAnimJoint26.SetLlimit([0,0,0]);
HAnimSegment27 := THAnimSegmentNode.Create;
HAnimSegment27.NameField := 'SEGMENT_FOR_Armature';
TouchSensor28 := TTouchSensorNode.Create;
TouchSensor28.Description := 'joint Armature segment SEGMENT_FOR_Armature';
{ .AddChildren }
HAnimSegment27.AddChildren([TouchSensor28]);
Transform29 := TTransformNode.Create;
Shape30 := TShapeNode.Create;
Shape30 := Shape16;
{ .AddChild }
Transform29.AddChildren([Shape30]);
{ .AddChildren }
HAnimSegment27.AddChildren([Transform29]);
HAnimSite31 := THAnimSiteNode.Create;
HAnimSite31.NameField := 'SEGMENT_FOR_Armature_tip';
Transform32 := TTransformNode.Create;
Shape33 := TShapeNode.Create;
Shape33 := Shape11;
{ .AddChild }
Transform32.AddChildren([Shape33]);
{ .AddChildren }
HAnimSite31.AddChildren([Transform32]);
{ .AddChildren }
HAnimSegment27.AddChildren([HAnimSite31]);
{ .AddChildren }
HAnimJoint26.AddChildren([HAnimSegment27]);
HAnimJoint34 := THAnimJointNode.Create;
HAnimJoint34.NameField := 'sacrum';
HAnimJoint34.Center := Vector3(-0.0002,-0.1178,0.8174);
HAnimJoint34.SetUlimit([0,0,0]);
HAnimJoint34.SetLlimit([0,0,0]);
HAnimSegment35 := THAnimSegmentNode.Create;
HAnimSegment35.NameField := 'SEGMENT_FOR_sacrum';
TouchSensor36 := TTouchSensorNode.Create;
TouchSensor36.Description := 'joint sacrum segment SEGMENT_FOR_sacrum';
{ .AddChildren }
HAnimSegment35.AddChildren([TouchSensor36]);
Transform37 := TTransformNode.Create;
Transform37.Translation := Vector3(-0.0002,-0.1178,0.8174);
Shape38 := TShapeNode.Create;
Shape38 := Shape16;
{ .AddChild }
Transform37.AddChildren([Shape38]);
{ .AddChildren }
HAnimSegment35.AddChildren([Transform37]);
HAnimSite39 := THAnimSiteNode.Create;
HAnimSite39.NameField := 'SEGMENT_FOR_sacrum_tip';
Transform40 := TTransformNode.Create;
Transform40.Translation := Vector3(-0.0002,-0.1178,0.8174);
Shape41 := TShapeNode.Create;
Shape41 := Shape11;
{ .AddChild }
Transform40.AddChildren([Shape41]);
{ .AddChildren }
HAnimSite39.AddChildren([Transform40]);
{ .AddChildren }
HAnimSegment35.AddChildren([HAnimSite39]);
{ .AddChildren }
HAnimJoint34.AddChildren([HAnimSegment35]);
HAnimJoint42 := THAnimJointNode.Create;
HAnimJoint42.NameField := 'pelvis';
HAnimJoint42.Center := Vector3(-0.0002,-0.1178,0.6986);
HAnimJoint42.SetUlimit([0,0,0]);
HAnimJoint42.SetLlimit([0,0,0]);
HAnimSegment43 := THAnimSegmentNode.Create;
HAnimSegment43.NameField := 'SEGMENT_FOR_pelvis';
TouchSensor44 := TTouchSensorNode.Create;
TouchSensor44.Description := 'joint pelvis segment SEGMENT_FOR_pelvis';
{ .AddChildren }
HAnimSegment43.AddChildren([TouchSensor44]);
Transform45 := TTransformNode.Create;
Transform45.Translation := Vector3(-0.0002,-0.1178,0.6986);
Shape46 := TShapeNode.Create;
Shape46 := Shape16;
{ .AddChild }
Transform45.AddChildren([Shape46]);
{ .AddChildren }
HAnimSegment43.AddChildren([Transform45]);
HAnimSite47 := THAnimSiteNode.Create;
HAnimSite47.NameField := 'SEGMENT_FOR_pelvis_tip';
Transform48 := TTransformNode.Create;
Transform48.Translation := Vector3(-0.0002,-0.1178,0.6986);
Shape49 := TShapeNode.Create;
Shape49 := Shape11;
{ .AddChild }
Transform48.AddChildren([Shape49]);
{ .AddChildren }
HAnimSite47.AddChildren([Transform48]);
{ .AddChildren }
HAnimSegment43.AddChildren([HAnimSite47]);
{ .AddChildren }
HAnimJoint42.AddChildren([HAnimSegment43]);
HAnimJoint50 := THAnimJointNode.Create;
HAnimJoint50.NameField := 'l_thigh';
HAnimJoint50.Center := Vector3(0.0945,-0.1202,0.8181);
HAnimJoint50.SetUlimit([0,0,0]);
HAnimJoint50.SetLlimit([0,0,0]);
HAnimSegment51 := THAnimSegmentNode.Create;
HAnimSegment51.NameField := 'SEGMENT_FOR_l_thigh';
TouchSensor52 := TTouchSensorNode.Create;
TouchSensor52.Description := 'joint l_thigh segment SEGMENT_FOR_l_thigh';
{ .AddChildren }
HAnimSegment51.AddChildren([TouchSensor52]);
Transform53 := TTransformNode.Create;
Transform53.Translation := Vector3(0.0945,-0.1202,0.8181);
Shape54 := TShapeNode.Create;
Shape54 := Shape16;
{ .AddChild }
Transform53.AddChildren([Shape54]);
{ .AddChildren }
HAnimSegment51.AddChildren([Transform53]);
HAnimSite55 := THAnimSiteNode.Create;
HAnimSite55.NameField := 'SEGMENT_FOR_l_thigh_tip';
Transform56 := TTransformNode.Create;
Transform56.Translation := Vector3(0.0945,-0.1202,0.8181);
Shape57 := TShapeNode.Create;
Shape57 := Shape11;
{ .AddChild }
Transform56.AddChildren([Shape57]);
{ .AddChildren }
HAnimSite55.AddChildren([Transform56]);
{ .AddChildren }
HAnimSegment51.AddChildren([HAnimSite55]);
{ .AddChildren }
HAnimJoint50.AddChildren([HAnimSegment51]);
HAnimJoint58 := THAnimJointNode.Create;
HAnimJoint58.NameField := 'l_calf';
HAnimJoint58.Center := Vector3(0.0924,-0.1213,0.4003);
HAnimJoint58.SetUlimit([0,0,0]);
HAnimJoint58.SetLlimit([0,0,0]);
HAnimSegment59 := THAnimSegmentNode.Create;
HAnimSegment59.NameField := 'SEGMENT_FOR_l_calf';
TouchSensor60 := TTouchSensorNode.Create;
TouchSensor60.Description := 'joint l_calf segment SEGMENT_FOR_l_calf';
{ .AddChildren }
HAnimSegment59.AddChildren([TouchSensor60]);
Transform61 := TTransformNode.Create;
Transform61.Translation := Vector3(0.0924,-0.1213,0.4003);
Shape62 := TShapeNode.Create;
Shape62 := Shape16;
{ .AddChild }
Transform61.AddChildren([Shape62]);
{ .AddChildren }
HAnimSegment59.AddChildren([Transform61]);
HAnimSite63 := THAnimSiteNode.Create;
HAnimSite63.NameField := 'SEGMENT_FOR_l_calf_tip';
Transform64 := TTransformNode.Create;
Transform64.Translation := Vector3(0.0924,-0.1213,0.4003);
Shape65 := TShapeNode.Create;
Shape65 := Shape11;
{ .AddChild }
Transform64.AddChildren([Shape65]);
{ .AddChildren }
HAnimSite63.AddChildren([Transform64]);
{ .AddChildren }
HAnimSegment59.AddChildren([HAnimSite63]);
{ .AddChildren }
HAnimJoint58.AddChildren([HAnimSegment59]);
HAnimJoint66 := THAnimJointNode.Create;
HAnimJoint66.NameField := 'l_talus';
HAnimJoint66.Center := Vector3(0.0886,-0.1123,0.0869);
HAnimJoint66.SetUlimit([0,0,0]);
HAnimJoint66.SetLlimit([0,0,0]);
HAnimSegment67 := THAnimSegmentNode.Create;
HAnimSegment67.NameField := 'SEGMENT_FOR_l_talus';
TouchSensor68 := TTouchSensorNode.Create;
TouchSensor68.Description := 'joint l_talus segment SEGMENT_FOR_l_talus';
{ .AddChildren }
HAnimSegment67.AddChildren([TouchSensor68]);
Transform69 := TTransformNode.Create;
Transform69.Translation := Vector3(0.0886,-0.1123,0.0869);
Shape70 := TShapeNode.Create;
Shape70 := Shape16;
{ .AddChild }
Transform69.AddChildren([Shape70]);
{ .AddChildren }
HAnimSegment67.AddChildren([Transform69]);
HAnimSite71 := THAnimSiteNode.Create;
HAnimSite71.NameField := 'SEGMENT_FOR_l_talus_tip';
Transform72 := TTransformNode.Create;
Transform72.Translation := Vector3(0.0886,-0.1123,0.0869);
Shape73 := TShapeNode.Create;
Shape73 := Shape11;
{ .AddChild }
Transform72.AddChildren([Shape73]);
{ .AddChildren }
HAnimSite71.AddChildren([Transform72]);
{ .AddChildren }
HAnimSegment67.AddChildren([HAnimSite71]);
{ .AddChildren }
HAnimJoint66.AddChildren([HAnimSegment67]);
HAnimJoint74 := THAnimJointNode.Create;
HAnimJoint74.NameField := 'l_navicular';
HAnimJoint74.Center := Vector3(0.0781,-0.097,0.0283);
HAnimJoint74.SetUlimit([0,0,0]);
HAnimJoint74.SetLlimit([0,0,0]);
HAnimSegment75 := THAnimSegmentNode.Create;
HAnimSegment75.NameField := 'SEGMENT_FOR_l_navicular';
TouchSensor76 := TTouchSensorNode.Create;
TouchSensor76.Description := 'joint l_navicular segment SEGMENT_FOR_l_navicular';
{ .AddChildren }
HAnimSegment75.AddChildren([TouchSensor76]);
Transform77 := TTransformNode.Create;
Transform77.Translation := Vector3(0.0781,-0.097,0.0283);
Shape78 := TShapeNode.Create;
Shape78 := Shape16;
{ .AddChild }
Transform77.AddChildren([Shape78]);
{ .AddChildren }
HAnimSegment75.AddChildren([Transform77]);
HAnimSite79 := THAnimSiteNode.Create;
HAnimSite79.NameField := 'SEGMENT_FOR_l_navicular_tip';
Transform80 := TTransformNode.Create;
Transform80.Translation := Vector3(0.0781,-0.097,0.0283);
Shape81 := TShapeNode.Create;
Shape81 := Shape11;
{ .AddChild }
Transform80.AddChildren([Shape81]);
{ .AddChildren }
HAnimSite79.AddChildren([Transform80]);
{ .AddChildren }
HAnimSegment75.AddChildren([HAnimSite79]);
{ .AddChildren }
HAnimJoint74.AddChildren([HAnimSegment75]);
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.NameField := 'l_cuneiform_1';
HAnimJoint82.Center := Vector3(0.0672,-0.0835,0.0235);
HAnimJoint82.SetUlimit([0,0,0]);
HAnimJoint82.SetLlimit([0,0,0]);
HAnimSegment83 := THAnimSegmentNode.Create;
HAnimSegment83.NameField := 'SEGMENT_FOR_l_cuneiform_1';
TouchSensor84 := TTouchSensorNode.Create;
TouchSensor84.Description := 'joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1';
{ .AddChildren }
HAnimSegment83.AddChildren([TouchSensor84]);
Transform85 := TTransformNode.Create;
Transform85.Translation := Vector3(0.0672,-0.0835,0.0235);
Shape86 := TShapeNode.Create;
Shape86 := Shape16;
{ .AddChild }
Transform85.AddChildren([Shape86]);
{ .AddChildren }
HAnimSegment83.AddChildren([Transform85]);
HAnimSite87 := THAnimSiteNode.Create;
HAnimSite87.NameField := 'SEGMENT_FOR_l_cuneiform_1_tip';
Transform88 := TTransformNode.Create;
Transform88.Translation := Vector3(0.0672,-0.0835,0.0235);
Shape89 := TShapeNode.Create;
Shape89 := Shape11;
{ .AddChild }
Transform88.AddChildren([Shape89]);
{ .AddChildren }
HAnimSite87.AddChildren([Transform88]);
{ .AddChildren }
HAnimSegment83.AddChildren([HAnimSite87]);
{ .AddChildren }
HAnimJoint82.AddChildren([HAnimSegment83]);
HAnimJoint90 := THAnimJointNode.Create;
HAnimJoint90.NameField := 'l_metatarsal_1';
HAnimJoint90.Center := Vector3(0.0644,-0.0577,0.0147);
HAnimJoint90.SetUlimit([0,0,0]);
HAnimJoint90.SetLlimit([0,0,0]);
HAnimSegment91 := THAnimSegmentNode.Create;
HAnimSegment91.NameField := 'SEGMENT_FOR_l_metatarsal_1';
TouchSensor92 := TTouchSensorNode.Create;
TouchSensor92.Description := 'joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1';
{ .AddChildren }
HAnimSegment91.AddChildren([TouchSensor92]);
Transform93 := TTransformNode.Create;
Transform93.Translation := Vector3(0.0644,-0.0577,0.0147);
Shape94 := TShapeNode.Create;
Shape94 := Shape16;
{ .AddChild }
Transform93.AddChildren([Shape94]);
{ .AddChildren }
HAnimSegment91.AddChildren([Transform93]);
HAnimSite95 := THAnimSiteNode.Create;
HAnimSite95.NameField := 'SEGMENT_FOR_l_metatarsal_1_tip';
Transform96 := TTransformNode.Create;
Transform96.Translation := Vector3(0.0644,-0.0577,0.0147);
Shape97 := TShapeNode.Create;
Shape97 := Shape11;
{ .AddChild }
Transform96.AddChildren([Shape97]);
{ .AddChildren }
HAnimSite95.AddChildren([Transform96]);
{ .AddChildren }
HAnimSegment91.AddChildren([HAnimSite95]);
{ .AddChildren }
HAnimJoint90.AddChildren([HAnimSegment91]);
HAnimJoint98 := THAnimJointNode.Create;
HAnimJoint98.NameField := 'l_tarsal_proximal_phalanx_1';
HAnimJoint98.Center := Vector3(0.0619,-0.0083,0.0059);
HAnimJoint98.SetUlimit([0,0,0]);
HAnimJoint98.SetLlimit([0,0,0]);
HAnimSegment99 := THAnimSegmentNode.Create;
HAnimSegment99.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_1';
TouchSensor100 := TTouchSensorNode.Create;
TouchSensor100.Description := 'joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1';
{ .AddChildren }
HAnimSegment99.AddChildren([TouchSensor100]);
Transform101 := TTransformNode.Create;
Transform101.Translation := Vector3(0.0619,-0.0083,0.0059);
Shape102 := TShapeNode.Create;
Shape102 := Shape16;
{ .AddChild }
Transform101.AddChildren([Shape102]);
{ .AddChildren }
HAnimSegment99.AddChildren([Transform101]);
HAnimSite103 := THAnimSiteNode.Create;
HAnimSite103.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip';
Transform104 := TTransformNode.Create;
Transform104.Translation := Vector3(0.0619,-0.0083,0.0059);
Shape105 := TShapeNode.Create;
Shape105 := Shape11;
{ .AddChild }
Transform104.AddChildren([Shape105]);
{ .AddChildren }
HAnimSite103.AddChildren([Transform104]);
{ .AddChildren }
HAnimSegment99.AddChildren([HAnimSite103]);
{ .AddChildren }
HAnimJoint98.AddChildren([HAnimSegment99]);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.NameField := 'l_tarsal_distal_phalanx_1';
HAnimJoint106.SetUlimit([0,0,0]);
HAnimJoint106.SetLlimit([0,0,0]);
HAnimSegment107 := THAnimSegmentNode.Create;
HAnimSegment107.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_1';
TouchSensor108 := TTouchSensorNode.Create;
TouchSensor108.Description := 'joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1';
{ .AddChildren }
HAnimSegment107.AddChildren([TouchSensor108]);
Transform109 := TTransformNode.Create;
Shape110 := TShapeNode.Create;
Shape110 := Shape16;
{ .AddChild }
Transform109.AddChildren([Shape110]);
{ .AddChildren }
HAnimSegment107.AddChildren([Transform109]);
HAnimSite111 := THAnimSiteNode.Create;
HAnimSite111.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip';
Transform112 := TTransformNode.Create;
Shape113 := TShapeNode.Create;
Shape113 := Shape11;
{ .AddChild }
Transform112.AddChildren([Shape113]);
{ .AddChildren }
HAnimSite111.AddChildren([Transform112]);
{ .AddChildren }
HAnimSegment107.AddChildren([HAnimSite111]);
{ .AddChildren }
HAnimJoint106.AddChildren([HAnimSegment107]);
{ .AddChildren }
HAnimJoint98.AddChildren([HAnimJoint106]);
{ .AddChildren }
HAnimJoint90.AddChildren([HAnimJoint98]);
{ .AddChildren }
HAnimJoint82.AddChildren([HAnimJoint90]);
{ .AddChildren }
HAnimJoint74.AddChildren([HAnimJoint82]);
HAnimJoint114 := THAnimJointNode.Create;
HAnimJoint114.NameField := 'l_cuneiform_2';
HAnimJoint114.Center := Vector3(0.0812,-0.0805,0.025);
HAnimJoint114.SetUlimit([0,0,0]);
HAnimJoint114.SetLlimit([0,0,0]);
HAnimSegment115 := THAnimSegmentNode.Create;
HAnimSegment115.NameField := 'SEGMENT_FOR_l_cuneiform_2';
TouchSensor116 := TTouchSensorNode.Create;
TouchSensor116.Description := 'joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2';
{ .AddChildren }
HAnimSegment115.AddChildren([TouchSensor116]);
Transform117 := TTransformNode.Create;
Transform117.Translation := Vector3(0.0812,-0.0805,0.025);
Shape118 := TShapeNode.Create;
Shape118 := Shape16;
{ .AddChild }
Transform117.AddChildren([Shape118]);
{ .AddChildren }
HAnimSegment115.AddChildren([Transform117]);
HAnimSite119 := THAnimSiteNode.Create;
HAnimSite119.NameField := 'SEGMENT_FOR_l_cuneiform_2_tip';
Transform120 := TTransformNode.Create;
Transform120.Translation := Vector3(0.0812,-0.0805,0.025);
Shape121 := TShapeNode.Create;
Shape121 := Shape11;
{ .AddChild }
Transform120.AddChildren([Shape121]);
{ .AddChildren }
HAnimSite119.AddChildren([Transform120]);
{ .AddChildren }
HAnimSegment115.AddChildren([HAnimSite119]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimSegment115]);
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122.NameField := 'l_metatarsal_2';
HAnimJoint122.Center := Vector3(0.08,-0.0608,0.0175);
HAnimJoint122.SetUlimit([0,0,0]);
HAnimJoint122.SetLlimit([0,0,0]);
HAnimSegment123 := THAnimSegmentNode.Create;
HAnimSegment123.NameField := 'SEGMENT_FOR_l_metatarsal_2';
TouchSensor124 := TTouchSensorNode.Create;
TouchSensor124.Description := 'joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2';
{ .AddChildren }
HAnimSegment123.AddChildren([TouchSensor124]);
Transform125 := TTransformNode.Create;
Transform125.Translation := Vector3(0.08,-0.0608,0.0175);
Shape126 := TShapeNode.Create;
Shape126 := Shape16;
{ .AddChild }
Transform125.AddChildren([Shape126]);
{ .AddChildren }
HAnimSegment123.AddChildren([Transform125]);
HAnimSite127 := THAnimSiteNode.Create;
HAnimSite127.NameField := 'SEGMENT_FOR_l_metatarsal_2_tip';
Transform128 := TTransformNode.Create;
Transform128.Translation := Vector3(0.08,-0.0608,0.0175);
Shape129 := TShapeNode.Create;
Shape129 := Shape11;
{ .AddChild }
Transform128.AddChildren([Shape129]);
{ .AddChildren }
HAnimSite127.AddChildren([Transform128]);
{ .AddChildren }
HAnimSegment123.AddChildren([HAnimSite127]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimSegment123]);
HAnimJoint130 := THAnimJointNode.Create;
HAnimJoint130.NameField := 'l_tarsal_proximal_phalanx_2';
HAnimJoint130.Center := Vector3(0.0824,-0.004,0.0064);
HAnimJoint130.SetUlimit([0,0,0]);
HAnimJoint130.SetLlimit([0,0,0]);
HAnimSegment131 := THAnimSegmentNode.Create;
HAnimSegment131.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_2';
TouchSensor132 := TTouchSensorNode.Create;
TouchSensor132.Description := 'joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment131.AddChildren([TouchSensor132]);
Transform133 := TTransformNode.Create;
Transform133.Translation := Vector3(0.0824,-0.004,0.0064);
Shape134 := TShapeNode.Create;
Shape134 := Shape16;
{ .AddChild }
Transform133.AddChildren([Shape134]);
{ .AddChildren }
HAnimSegment131.AddChildren([Transform133]);
HAnimSite135 := THAnimSiteNode.Create;
HAnimSite135.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip';
Transform136 := TTransformNode.Create;
Transform136.Translation := Vector3(0.0824,-0.004,0.0064);
Shape137 := TShapeNode.Create;
Shape137 := Shape11;
{ .AddChild }
Transform136.AddChildren([Shape137]);
{ .AddChildren }
HAnimSite135.AddChildren([Transform136]);
{ .AddChildren }
HAnimSegment131.AddChildren([HAnimSite135]);
{ .AddChildren }
HAnimJoint130.AddChildren([HAnimSegment131]);
HAnimJoint138 := THAnimJointNode.Create;
HAnimJoint138.NameField := 'l_tarsal_middle_phalanx_2';
HAnimJoint138.Center := Vector3(0.0841,0.0121,0.0041);
HAnimJoint138.SetUlimit([0,0,0]);
HAnimJoint138.SetLlimit([0,0,0]);
HAnimSegment139 := THAnimSegmentNode.Create;
HAnimSegment139.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_2';
TouchSensor140 := TTouchSensorNode.Create;
TouchSensor140.Description := 'joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2';
{ .AddChildren }
HAnimSegment139.AddChildren([TouchSensor140]);
Transform141 := TTransformNode.Create;
Transform141.Translation := Vector3(0.0841,0.0121,0.0041);
Shape142 := TShapeNode.Create;
Shape142 := Shape16;
{ .AddChild }
Transform141.AddChildren([Shape142]);
{ .AddChildren }
HAnimSegment139.AddChildren([Transform141]);
HAnimSite143 := THAnimSiteNode.Create;
HAnimSite143.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip';
Transform144 := TTransformNode.Create;
Transform144.Translation := Vector3(0.0841,0.0121,0.0041);
Shape145 := TShapeNode.Create;
Shape145 := Shape11;
{ .AddChild }
Transform144.AddChildren([Shape145]);
{ .AddChildren }
HAnimSite143.AddChildren([Transform144]);
{ .AddChildren }
HAnimSegment139.AddChildren([HAnimSite143]);
{ .AddChildren }
HAnimJoint138.AddChildren([HAnimSegment139]);
HAnimJoint146 := THAnimJointNode.Create;
HAnimJoint146.NameField := 'l_tarsal_distal_phalanx_2';
HAnimJoint146.Center := Vector3(0.0841,0.0216,0.0013);
HAnimJoint146.SetUlimit([0,0,0]);
HAnimJoint146.SetLlimit([0,0,0]);
HAnimSegment147 := THAnimSegmentNode.Create;
HAnimSegment147.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_2';
TouchSensor148 := TTouchSensorNode.Create;
TouchSensor148.Description := 'joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2';
{ .AddChildren }
HAnimSegment147.AddChildren([TouchSensor148]);
Transform149 := TTransformNode.Create;
Transform149.Translation := Vector3(0.0841,0.0216,0.0013);
Shape150 := TShapeNode.Create;
Shape150 := Shape16;
{ .AddChild }
Transform149.AddChildren([Shape150]);
{ .AddChildren }
HAnimSegment147.AddChildren([Transform149]);
HAnimSite151 := THAnimSiteNode.Create;
HAnimSite151.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip';
Transform152 := TTransformNode.Create;
Transform152.Translation := Vector3(0.0841,0.0216,0.0013);
Shape153 := TShapeNode.Create;
Shape153 := Shape11;
{ .AddChild }
Transform152.AddChildren([Shape153]);
{ .AddChildren }
HAnimSite151.AddChildren([Transform152]);
{ .AddChildren }
HAnimSegment147.AddChildren([HAnimSite151]);
{ .AddChildren }
HAnimJoint146.AddChildren([HAnimSegment147]);
{ .AddChildren }
HAnimJoint138.AddChildren([HAnimJoint146]);
{ .AddChildren }
HAnimJoint130.AddChildren([HAnimJoint138]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimJoint130]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint122]);
{ .AddChildren }
HAnimJoint74.AddChildren([HAnimJoint114]);
HAnimJoint154 := THAnimJointNode.Create;
HAnimJoint154.NameField := 'l_cuneiform_3';
HAnimJoint154.Center := Vector3(0.0928,-0.0821,0.0248);
HAnimJoint154.SetUlimit([0,0,0]);
HAnimJoint154.SetLlimit([0,0,0]);
HAnimSegment155 := THAnimSegmentNode.Create;
HAnimSegment155.NameField := 'SEGMENT_FOR_l_cuneiform_3';
TouchSensor156 := TTouchSensorNode.Create;
TouchSensor156.Description := 'joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3';
{ .AddChildren }
HAnimSegment155.AddChildren([TouchSensor156]);
Transform157 := TTransformNode.Create;
Transform157.Translation := Vector3(0.0928,-0.0821,0.0248);
Shape158 := TShapeNode.Create;
Shape158 := Shape16;
{ .AddChild }
Transform157.AddChildren([Shape158]);
{ .AddChildren }
HAnimSegment155.AddChildren([Transform157]);
HAnimSite159 := THAnimSiteNode.Create;
HAnimSite159.NameField := 'SEGMENT_FOR_l_cuneiform_3_tip';
Transform160 := TTransformNode.Create;
Transform160.Translation := Vector3(0.0928,-0.0821,0.0248);
Shape161 := TShapeNode.Create;
Shape161 := Shape11;
{ .AddChild }
Transform160.AddChildren([Shape161]);
{ .AddChildren }
HAnimSite159.AddChildren([Transform160]);
{ .AddChildren }
HAnimSegment155.AddChildren([HAnimSite159]);
{ .AddChildren }
HAnimJoint154.AddChildren([HAnimSegment155]);
HAnimJoint162 := THAnimJointNode.Create;
HAnimJoint162.NameField := 'l_metatarsal_3';
HAnimJoint162.Center := Vector3(0.0944,-0.0625,0.0175);
HAnimJoint162.SetUlimit([0,0,0]);
HAnimJoint162.SetLlimit([0,0,0]);
HAnimSegment163 := THAnimSegmentNode.Create;
HAnimSegment163.NameField := 'SEGMENT_FOR_l_metatarsal_3';
TouchSensor164 := TTouchSensorNode.Create;
TouchSensor164.Description := 'joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3';
{ .AddChildren }
HAnimSegment163.AddChildren([TouchSensor164]);
Transform165 := TTransformNode.Create;
Transform165.Translation := Vector3(0.0944,-0.0625,0.0175);
Shape166 := TShapeNode.Create;
Shape166 := Shape16;
{ .AddChild }
Transform165.AddChildren([Shape166]);
{ .AddChildren }
HAnimSegment163.AddChildren([Transform165]);
HAnimSite167 := THAnimSiteNode.Create;
HAnimSite167.NameField := 'SEGMENT_FOR_l_metatarsal_3_tip';
Transform168 := TTransformNode.Create;
Transform168.Translation := Vector3(0.0944,-0.0625,0.0175);
Shape169 := TShapeNode.Create;
Shape169 := Shape11;
{ .AddChild }
Transform168.AddChildren([Shape169]);
{ .AddChildren }
HAnimSite167.AddChildren([Transform168]);
{ .AddChildren }
HAnimSegment163.AddChildren([HAnimSite167]);
{ .AddChildren }
HAnimJoint162.AddChildren([HAnimSegment163]);
HAnimJoint170 := THAnimJointNode.Create;
HAnimJoint170.NameField := 'l_tarsal_proximal_phalanx_3';
HAnimJoint170.Center := Vector3(0.0963,-0.0065,0.0065);
HAnimJoint170.SetUlimit([0,0,0]);
HAnimJoint170.SetLlimit([0,0,0]);
HAnimSegment171 := THAnimSegmentNode.Create;
HAnimSegment171.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_3';
TouchSensor172 := TTouchSensorNode.Create;
TouchSensor172.Description := 'joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3';
{ .AddChildren }
HAnimSegment171.AddChildren([TouchSensor172]);
Transform173 := TTransformNode.Create;
Transform173.Translation := Vector3(0.0963,-0.0065,0.0065);
Shape174 := TShapeNode.Create;
Shape174 := Shape16;
{ .AddChild }
Transform173.AddChildren([Shape174]);
{ .AddChildren }
HAnimSegment171.AddChildren([Transform173]);
HAnimSite175 := THAnimSiteNode.Create;
HAnimSite175.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip';
Transform176 := TTransformNode.Create;
Transform176.Translation := Vector3(0.0963,-0.0065,0.0065);
Shape177 := TShapeNode.Create;
Shape177 := Shape11;
{ .AddChild }
Transform176.AddChildren([Shape177]);
{ .AddChildren }
HAnimSite175.AddChildren([Transform176]);
{ .AddChildren }
HAnimSegment171.AddChildren([HAnimSite175]);
{ .AddChildren }
HAnimJoint170.AddChildren([HAnimSegment171]);
HAnimJoint178 := THAnimJointNode.Create;
HAnimJoint178.NameField := 'l_tarsal_middle_phalanx_3';
HAnimJoint178.Center := Vector3(0.0987,0.0086,0.0034);
HAnimJoint178.SetUlimit([0,0,0]);
HAnimJoint178.SetLlimit([0,0,0]);
HAnimSegment179 := THAnimSegmentNode.Create;
HAnimSegment179.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_3';
TouchSensor180 := TTouchSensorNode.Create;
TouchSensor180.Description := 'joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3';
{ .AddChildren }
HAnimSegment179.AddChildren([TouchSensor180]);
Transform181 := TTransformNode.Create;
Transform181.Translation := Vector3(0.0987,0.0086,0.0034);
Shape182 := TShapeNode.Create;
Shape182 := Shape16;
{ .AddChild }
Transform181.AddChildren([Shape182]);
{ .AddChildren }
HAnimSegment179.AddChildren([Transform181]);
HAnimSite183 := THAnimSiteNode.Create;
HAnimSite183.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip';
Transform184 := TTransformNode.Create;
Transform184.Translation := Vector3(0.0987,0.0086,0.0034);
Shape185 := TShapeNode.Create;
Shape185 := Shape11;
{ .AddChild }
Transform184.AddChildren([Shape185]);
{ .AddChildren }
HAnimSite183.AddChildren([Transform184]);
{ .AddChildren }
HAnimSegment179.AddChildren([HAnimSite183]);
{ .AddChildren }
HAnimJoint178.AddChildren([HAnimSegment179]);
HAnimJoint186 := THAnimJointNode.Create;
HAnimJoint186.NameField := 'l_tarsal_distal_phalanx_3';
HAnimJoint186.Center := Vector3(0.1002,0.0178,0.0013);
HAnimJoint186.SetUlimit([0,0,0]);
HAnimJoint186.SetLlimit([0,0,0]);
HAnimSegment187 := THAnimSegmentNode.Create;
HAnimSegment187.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_3';
TouchSensor188 := TTouchSensorNode.Create;
TouchSensor188.Description := 'joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3';
{ .AddChildren }
HAnimSegment187.AddChildren([TouchSensor188]);
Transform189 := TTransformNode.Create;
Transform189.Translation := Vector3(0.1002,0.0178,0.0013);
Shape190 := TShapeNode.Create;
Shape190 := Shape16;
{ .AddChild }
Transform189.AddChildren([Shape190]);
{ .AddChildren }
HAnimSegment187.AddChildren([Transform189]);
HAnimSite191 := THAnimSiteNode.Create;
HAnimSite191.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip';
Transform192 := TTransformNode.Create;
Transform192.Translation := Vector3(0.1002,0.0178,0.0013);
Shape193 := TShapeNode.Create;
Shape193 := Shape11;
{ .AddChild }
Transform192.AddChildren([Shape193]);
{ .AddChildren }
HAnimSite191.AddChildren([Transform192]);
{ .AddChildren }
HAnimSegment187.AddChildren([HAnimSite191]);
{ .AddChildren }
HAnimJoint186.AddChildren([HAnimSegment187]);
{ .AddChildren }
HAnimJoint178.AddChildren([HAnimJoint186]);
{ .AddChildren }
HAnimJoint170.AddChildren([HAnimJoint178]);
{ .AddChildren }
HAnimJoint162.AddChildren([HAnimJoint170]);
{ .AddChildren }
HAnimJoint154.AddChildren([HAnimJoint162]);
{ .AddChildren }
HAnimJoint74.AddChildren([HAnimJoint154]);
{ .AddChildren }
HAnimJoint66.AddChildren([HAnimJoint74]);
HAnimJoint194 := THAnimJointNode.Create;
HAnimJoint194.NameField := 'l_calcaneus';
HAnimJoint194.Center := Vector3(0.0889,-0.1278,0.0494);
HAnimJoint194.SetUlimit([0,0,0]);
HAnimJoint194.SetLlimit([0,0,0]);
HAnimSegment195 := THAnimSegmentNode.Create;
HAnimSegment195.NameField := 'SEGMENT_FOR_l_calcaneus';
TouchSensor196 := TTouchSensorNode.Create;
TouchSensor196.Description := 'joint l_calcaneus segment SEGMENT_FOR_l_calcaneus';
{ .AddChildren }
HAnimSegment195.AddChildren([TouchSensor196]);
Transform197 := TTransformNode.Create;
Transform197.Translation := Vector3(0.0889,-0.1278,0.0494);
Shape198 := TShapeNode.Create;
Shape198 := Shape16;
{ .AddChild }
Transform197.AddChildren([Shape198]);
{ .AddChildren }
HAnimSegment195.AddChildren([Transform197]);
HAnimSite199 := THAnimSiteNode.Create;
HAnimSite199.NameField := 'SEGMENT_FOR_l_calcaneus_tip';
Transform200 := TTransformNode.Create;
Transform200.Translation := Vector3(0.0889,-0.1278,0.0494);
Shape201 := TShapeNode.Create;
Shape201 := Shape11;
{ .AddChild }
Transform200.AddChildren([Shape201]);
{ .AddChildren }
HAnimSite199.AddChildren([Transform200]);
{ .AddChildren }
HAnimSegment195.AddChildren([HAnimSite199]);
{ .AddChildren }
HAnimJoint194.AddChildren([HAnimSegment195]);
HAnimJoint202 := THAnimJointNode.Create;
HAnimJoint202.NameField := 'l_cuboid';
HAnimJoint202.Center := Vector3(0.1105,-0.0998,0.0267);
HAnimJoint202.SetUlimit([0,0,0]);
HAnimJoint202.SetLlimit([0,0,0]);
HAnimSegment203 := THAnimSegmentNode.Create;
HAnimSegment203.NameField := 'SEGMENT_FOR_l_cuboid';
TouchSensor204 := TTouchSensorNode.Create;
TouchSensor204.Description := 'joint l_cuboid segment SEGMENT_FOR_l_cuboid';
{ .AddChildren }
HAnimSegment203.AddChildren([TouchSensor204]);
Transform205 := TTransformNode.Create;
Transform205.Translation := Vector3(0.1105,-0.0998,0.0267);
Shape206 := TShapeNode.Create;
Shape206 := Shape16;
{ .AddChild }
Transform205.AddChildren([Shape206]);
{ .AddChildren }
HAnimSegment203.AddChildren([Transform205]);
HAnimSite207 := THAnimSiteNode.Create;
HAnimSite207.NameField := 'SEGMENT_FOR_l_cuboid_tip';
Transform208 := TTransformNode.Create;
Transform208.Translation := Vector3(0.1105,-0.0998,0.0267);
Shape209 := TShapeNode.Create;
Shape209 := Shape11;
{ .AddChild }
Transform208.AddChildren([Shape209]);
{ .AddChildren }
HAnimSite207.AddChildren([Transform208]);
{ .AddChildren }
HAnimSegment203.AddChildren([HAnimSite207]);
{ .AddChildren }
HAnimJoint202.AddChildren([HAnimSegment203]);
HAnimJoint210 := THAnimJointNode.Create;
HAnimJoint210.NameField := 'l_metatarsal_4';
HAnimJoint210.Center := Vector3(0.1063,-0.0634,0.016);
HAnimJoint210.SetUlimit([0,0,0]);
HAnimJoint210.SetLlimit([0,0,0]);
HAnimSegment211 := THAnimSegmentNode.Create;
HAnimSegment211.NameField := 'SEGMENT_FOR_l_metatarsal_4';
TouchSensor212 := TTouchSensorNode.Create;
TouchSensor212.Description := 'joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4';
{ .AddChildren }
HAnimSegment211.AddChildren([TouchSensor212]);
Transform213 := TTransformNode.Create;
Transform213.Translation := Vector3(0.1063,-0.0634,0.016);
Shape214 := TShapeNode.Create;
Shape214 := Shape16;
{ .AddChild }
Transform213.AddChildren([Shape214]);
{ .AddChildren }
HAnimSegment211.AddChildren([Transform213]);
HAnimSite215 := THAnimSiteNode.Create;
HAnimSite215.NameField := 'SEGMENT_FOR_l_metatarsal_4_tip';
Transform216 := TTransformNode.Create;
Transform216.Translation := Vector3(0.1063,-0.0634,0.016);
Shape217 := TShapeNode.Create;
Shape217 := Shape11;
{ .AddChild }
Transform216.AddChildren([Shape217]);
{ .AddChildren }
HAnimSite215.AddChildren([Transform216]);
{ .AddChildren }
HAnimSegment211.AddChildren([HAnimSite215]);
{ .AddChildren }
HAnimJoint210.AddChildren([HAnimSegment211]);
HAnimJoint218 := THAnimJointNode.Create;
HAnimJoint218.NameField := 'l_tarsal_proximal_phalanx_4';
HAnimJoint218.Center := Vector3(0.1097,-0.0107,0.0058);
HAnimJoint218.SetUlimit([0,0,0]);
HAnimJoint218.SetLlimit([0,0,0]);
HAnimSegment219 := THAnimSegmentNode.Create;
HAnimSegment219.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_4';
TouchSensor220 := TTouchSensorNode.Create;
TouchSensor220.Description := 'joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4';
{ .AddChildren }
HAnimSegment219.AddChildren([TouchSensor220]);
Transform221 := TTransformNode.Create;
Transform221.Translation := Vector3(0.1097,-0.0107,0.0058);
Shape222 := TShapeNode.Create;
Shape222 := Shape16;
{ .AddChild }
Transform221.AddChildren([Shape222]);
{ .AddChildren }
HAnimSegment219.AddChildren([Transform221]);
HAnimSite223 := THAnimSiteNode.Create;
HAnimSite223.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip';
Transform224 := TTransformNode.Create;
Transform224.Translation := Vector3(0.1097,-0.0107,0.0058);
Shape225 := TShapeNode.Create;
Shape225 := Shape11;
{ .AddChild }
Transform224.AddChildren([Shape225]);
{ .AddChildren }
HAnimSite223.AddChildren([Transform224]);
{ .AddChildren }
HAnimSegment219.AddChildren([HAnimSite223]);
{ .AddChildren }
HAnimJoint218.AddChildren([HAnimSegment219]);
HAnimJoint226 := THAnimJointNode.Create;
HAnimJoint226.NameField := 'l_tarsal_middle_phalanx_4';
HAnimJoint226.Center := Vector3(0.114,0.0044,0.0037);
HAnimJoint226.SetUlimit([0,0,0]);
HAnimJoint226.SetLlimit([0,0,0]);
HAnimSegment227 := THAnimSegmentNode.Create;
HAnimSegment227.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_4';
TouchSensor228 := TTouchSensorNode.Create;
TouchSensor228.Description := 'joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4';
{ .AddChildren }
HAnimSegment227.AddChildren([TouchSensor228]);
Transform229 := TTransformNode.Create;
Transform229.Translation := Vector3(0.114,0.0044,0.0037);
Shape230 := TShapeNode.Create;
Shape230 := Shape16;
{ .AddChild }
Transform229.AddChildren([Shape230]);
{ .AddChildren }
HAnimSegment227.AddChildren([Transform229]);
HAnimSite231 := THAnimSiteNode.Create;
HAnimSite231.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip';
Transform232 := TTransformNode.Create;
Transform232.Translation := Vector3(0.114,0.0044,0.0037);
Shape233 := TShapeNode.Create;
Shape233 := Shape11;
{ .AddChild }
Transform232.AddChildren([Shape233]);
{ .AddChildren }
HAnimSite231.AddChildren([Transform232]);
{ .AddChildren }
HAnimSegment227.AddChildren([HAnimSite231]);
{ .AddChildren }
HAnimJoint226.AddChildren([HAnimSegment227]);
HAnimJoint234 := THAnimJointNode.Create;
HAnimJoint234.NameField := 'l_tarsal_distal_phalanx_4';
HAnimJoint234.Center := Vector3(0.1155,0.0118,0.0008);
HAnimJoint234.SetUlimit([0,0,0]);
HAnimJoint234.SetLlimit([0,0,0]);
HAnimSegment235 := THAnimSegmentNode.Create;
HAnimSegment235.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_4';
TouchSensor236 := TTouchSensorNode.Create;
TouchSensor236.Description := 'joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4';
{ .AddChildren }
HAnimSegment235.AddChildren([TouchSensor236]);
Transform237 := TTransformNode.Create;
Transform237.Translation := Vector3(0.1155,0.0118,0.0008);
Shape238 := TShapeNode.Create;
Shape238 := Shape16;
{ .AddChild }
Transform237.AddChildren([Shape238]);
{ .AddChildren }
HAnimSegment235.AddChildren([Transform237]);
HAnimSite239 := THAnimSiteNode.Create;
HAnimSite239.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip';
Transform240 := TTransformNode.Create;
Transform240.Translation := Vector3(0.1155,0.0118,0.0008);
Shape241 := TShapeNode.Create;
Shape241 := Shape11;
{ .AddChild }
Transform240.AddChildren([Shape241]);
{ .AddChildren }
HAnimSite239.AddChildren([Transform240]);
{ .AddChildren }
HAnimSegment235.AddChildren([HAnimSite239]);
{ .AddChildren }
HAnimJoint234.AddChildren([HAnimSegment235]);
{ .AddChildren }
HAnimJoint226.AddChildren([HAnimJoint234]);
{ .AddChildren }
HAnimJoint218.AddChildren([HAnimJoint226]);
{ .AddChildren }
HAnimJoint210.AddChildren([HAnimJoint218]);
{ .AddChildren }
HAnimJoint202.AddChildren([HAnimJoint210]);
HAnimJoint242 := THAnimJointNode.Create;
HAnimJoint242.NameField := 'l_metatarsal_5';
HAnimJoint242.Center := Vector3(0.1206,-0.0671,0.0124);
HAnimJoint242.SetUlimit([0,0,0]);
HAnimJoint242.SetLlimit([0,0,0]);
HAnimSegment243 := THAnimSegmentNode.Create;
HAnimSegment243.NameField := 'SEGMENT_FOR_l_metatarsal_5';
TouchSensor244 := TTouchSensorNode.Create;
TouchSensor244.Description := 'joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5';
{ .AddChildren }
HAnimSegment243.AddChildren([TouchSensor244]);
Transform245 := TTransformNode.Create;
Transform245.Translation := Vector3(0.1206,-0.0671,0.0124);
Shape246 := TShapeNode.Create;
Shape246 := Shape16;
{ .AddChild }
Transform245.AddChildren([Shape246]);
{ .AddChildren }
HAnimSegment243.AddChildren([Transform245]);
HAnimSite247 := THAnimSiteNode.Create;
HAnimSite247.NameField := 'SEGMENT_FOR_l_metatarsal_5_tip';
Transform248 := TTransformNode.Create;
Transform248.Translation := Vector3(0.1206,-0.0671,0.0124);
Shape249 := TShapeNode.Create;
Shape249 := Shape11;
{ .AddChild }
Transform248.AddChildren([Shape249]);
{ .AddChildren }
HAnimSite247.AddChildren([Transform248]);
{ .AddChildren }
HAnimSegment243.AddChildren([HAnimSite247]);
{ .AddChildren }
HAnimJoint242.AddChildren([HAnimSegment243]);
HAnimJoint250 := THAnimJointNode.Create;
HAnimJoint250.NameField := 'l_tarsal_proximal_phalanx_5';
HAnimJoint250.Center := Vector3(0.1239,-0.0153,0.0051);
HAnimJoint250.SetUlimit([0,0,0]);
HAnimJoint250.SetLlimit([0,0,0]);
HAnimSegment251 := THAnimSegmentNode.Create;
HAnimSegment251.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_5';
TouchSensor252 := TTouchSensorNode.Create;
TouchSensor252.Description := 'joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5';
{ .AddChildren }
HAnimSegment251.AddChildren([TouchSensor252]);
Transform253 := TTransformNode.Create;
Transform253.Translation := Vector3(0.1239,-0.0153,0.0051);
Shape254 := TShapeNode.Create;
Shape254 := Shape16;
{ .AddChild }
Transform253.AddChildren([Shape254]);
{ .AddChildren }
HAnimSegment251.AddChildren([Transform253]);
HAnimSite255 := THAnimSiteNode.Create;
HAnimSite255.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip';
Transform256 := TTransformNode.Create;
Transform256.Translation := Vector3(0.1239,-0.0153,0.0051);
Shape257 := TShapeNode.Create;
Shape257 := Shape11;
{ .AddChild }
Transform256.AddChildren([Shape257]);
{ .AddChildren }
HAnimSite255.AddChildren([Transform256]);
{ .AddChildren }
HAnimSegment251.AddChildren([HAnimSite255]);
{ .AddChildren }
HAnimJoint250.AddChildren([HAnimSegment251]);
HAnimJoint258 := THAnimJointNode.Create;
HAnimJoint258.NameField := 'l_tarsal_middle_phalanx_5';
HAnimJoint258.Center := Vector3(0.1262,-0.0077,0.0023);
HAnimJoint258.SetUlimit([0,0,0]);
HAnimJoint258.SetLlimit([0,0,0]);
HAnimSegment259 := THAnimSegmentNode.Create;
HAnimSegment259.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_5';
TouchSensor260 := TTouchSensorNode.Create;
TouchSensor260.Description := 'joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5';
{ .AddChildren }
HAnimSegment259.AddChildren([TouchSensor260]);
Transform261 := TTransformNode.Create;
Transform261.Translation := Vector3(0.1262,-0.0077,0.0023);
Shape262 := TShapeNode.Create;
Shape262 := Shape16;
{ .AddChild }
Transform261.AddChildren([Shape262]);
{ .AddChildren }
HAnimSegment259.AddChildren([Transform261]);
HAnimSite263 := THAnimSiteNode.Create;
HAnimSite263.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip';
Transform264 := TTransformNode.Create;
Transform264.Translation := Vector3(0.1262,-0.0077,0.0023);
Shape265 := TShapeNode.Create;
Shape265 := Shape11;
{ .AddChild }
Transform264.AddChildren([Shape265]);
{ .AddChildren }
HAnimSite263.AddChildren([Transform264]);
{ .AddChildren }
HAnimSegment259.AddChildren([HAnimSite263]);
{ .AddChildren }
HAnimJoint258.AddChildren([HAnimSegment259]);
HAnimJoint266 := THAnimJointNode.Create;
HAnimJoint266.NameField := 'l_tarsal_distal_phalanx_5';
HAnimJoint266.Center := Vector3(0.1271,0,0);
HAnimJoint266.SetUlimit([0,0,0]);
HAnimJoint266.SetLlimit([0,0,0]);
HAnimSegment267 := THAnimSegmentNode.Create;
HAnimSegment267.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_5';
TouchSensor268 := TTouchSensorNode.Create;
TouchSensor268.Description := 'joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5';
{ .AddChildren }
HAnimSegment267.AddChildren([TouchSensor268]);
Transform269 := TTransformNode.Create;
Transform269.Translation := Vector3(0.1271,0,0);
Shape270 := TShapeNode.Create;
Shape270 := Shape16;
{ .AddChild }
Transform269.AddChildren([Shape270]);
{ .AddChildren }
HAnimSegment267.AddChildren([Transform269]);
HAnimSite271 := THAnimSiteNode.Create;
HAnimSite271.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip';
Transform272 := TTransformNode.Create;
Transform272.Translation := Vector3(0.1271,0,0);
Shape273 := TShapeNode.Create;
Shape273 := Shape11;
{ .AddChild }
Transform272.AddChildren([Shape273]);
{ .AddChildren }
HAnimSite271.AddChildren([Transform272]);
{ .AddChildren }
HAnimSegment267.AddChildren([HAnimSite271]);
{ .AddChildren }
HAnimJoint266.AddChildren([HAnimSegment267]);
{ .AddChildren }
HAnimJoint258.AddChildren([HAnimJoint266]);
{ .AddChildren }
HAnimJoint250.AddChildren([HAnimJoint258]);
{ .AddChildren }
HAnimJoint242.AddChildren([HAnimJoint250]);
{ .AddChildren }
HAnimJoint202.AddChildren([HAnimJoint242]);
{ .AddChildren }
HAnimJoint194.AddChildren([HAnimJoint202]);
{ .AddChildren }
HAnimJoint66.AddChildren([HAnimJoint194]);
{ .AddChildren }
HAnimJoint58.AddChildren([HAnimJoint66]);
{ .AddChildren }
HAnimJoint50.AddChildren([HAnimJoint58]);
{ .AddChildren }
HAnimJoint42.AddChildren([HAnimJoint50]);
HAnimJoint274 := THAnimJointNode.Create;
HAnimJoint274.NameField := 'r_thigh';
HAnimJoint274.Center := Vector3(-0.0948,-0.1202,0.8181);
HAnimJoint274.SetUlimit([0,0,0]);
HAnimJoint274.SetLlimit([0,0,0]);
HAnimSegment275 := THAnimSegmentNode.Create;
HAnimSegment275.NameField := 'SEGMENT_FOR_r_thigh';
TouchSensor276 := TTouchSensorNode.Create;
TouchSensor276.Description := 'joint r_thigh segment SEGMENT_FOR_r_thigh';
{ .AddChildren }
HAnimSegment275.AddChildren([TouchSensor276]);
Transform277 := TTransformNode.Create;
Transform277.Translation := Vector3(-0.0948,-0.1202,0.8181);
Shape278 := TShapeNode.Create;
Shape278 := Shape16;
{ .AddChild }
Transform277.AddChildren([Shape278]);
{ .AddChildren }
HAnimSegment275.AddChildren([Transform277]);
HAnimSite279 := THAnimSiteNode.Create;
HAnimSite279.NameField := 'SEGMENT_FOR_r_thigh_tip';
Transform280 := TTransformNode.Create;
Transform280.Translation := Vector3(-0.0948,-0.1202,0.8181);
Shape281 := TShapeNode.Create;
Shape281 := Shape11;
{ .AddChild }
Transform280.AddChildren([Shape281]);
{ .AddChildren }
HAnimSite279.AddChildren([Transform280]);
{ .AddChildren }
HAnimSegment275.AddChildren([HAnimSite279]);
{ .AddChildren }
HAnimJoint274.AddChildren([HAnimSegment275]);
HAnimJoint282 := THAnimJointNode.Create;
HAnimJoint282.NameField := 'r_calf';
HAnimJoint282.Center := Vector3(-0.0928,-0.1213,0.4003);
HAnimJoint282.SetUlimit([0,0,0]);
HAnimJoint282.SetLlimit([0,0,0]);
HAnimSegment283 := THAnimSegmentNode.Create;
HAnimSegment283.NameField := 'SEGMENT_FOR_r_calf';
TouchSensor284 := TTouchSensorNode.Create;
TouchSensor284.Description := 'joint r_calf segment SEGMENT_FOR_r_calf';
{ .AddChildren }
HAnimSegment283.AddChildren([TouchSensor284]);
Transform285 := TTransformNode.Create;
Transform285.Translation := Vector3(-0.0928,-0.1213,0.4003);
Shape286 := TShapeNode.Create;
Shape286 := Shape16;
{ .AddChild }
Transform285.AddChildren([Shape286]);
{ .AddChildren }
HAnimSegment283.AddChildren([Transform285]);
HAnimSite287 := THAnimSiteNode.Create;
HAnimSite287.NameField := 'SEGMENT_FOR_r_calf_tip';
Transform288 := TTransformNode.Create;
Transform288.Translation := Vector3(-0.0928,-0.1213,0.4003);
Shape289 := TShapeNode.Create;
Shape289 := Shape11;
{ .AddChild }
Transform288.AddChildren([Shape289]);
{ .AddChildren }
HAnimSite287.AddChildren([Transform288]);
{ .AddChildren }
HAnimSegment283.AddChildren([HAnimSite287]);
{ .AddChildren }
HAnimJoint282.AddChildren([HAnimSegment283]);
HAnimJoint290 := THAnimJointNode.Create;
HAnimJoint290.NameField := 'r_talus';
HAnimJoint290.Center := Vector3(-0.0886,-0.1123,0.0869);
HAnimJoint290.SetUlimit([0,0,0]);
HAnimJoint290.SetLlimit([0,0,0]);
HAnimSegment291 := THAnimSegmentNode.Create;
HAnimSegment291.NameField := 'SEGMENT_FOR_r_talus';
TouchSensor292 := TTouchSensorNode.Create;
TouchSensor292.Description := 'joint r_talus segment SEGMENT_FOR_r_talus';
{ .AddChildren }
HAnimSegment291.AddChildren([TouchSensor292]);
Transform293 := TTransformNode.Create;
Transform293.Translation := Vector3(-0.0886,-0.1123,0.0869);
Shape294 := TShapeNode.Create;
Shape294 := Shape16;
{ .AddChild }
Transform293.AddChildren([Shape294]);
{ .AddChildren }
HAnimSegment291.AddChildren([Transform293]);
HAnimSite295 := THAnimSiteNode.Create;
HAnimSite295.NameField := 'SEGMENT_FOR_r_talus_tip';
Transform296 := TTransformNode.Create;
Transform296.Translation := Vector3(-0.0886,-0.1123,0.0869);
Shape297 := TShapeNode.Create;
Shape297 := Shape11;
{ .AddChild }
Transform296.AddChildren([Shape297]);
{ .AddChildren }
HAnimSite295.AddChildren([Transform296]);
{ .AddChildren }
HAnimSegment291.AddChildren([HAnimSite295]);
{ .AddChildren }
HAnimJoint290.AddChildren([HAnimSegment291]);
HAnimJoint298 := THAnimJointNode.Create;
HAnimJoint298.NameField := 'r_navicular';
HAnimJoint298.Center := Vector3(-0.0781,-0.097,0.0283);
HAnimJoint298.SetUlimit([0,0,0]);
HAnimJoint298.SetLlimit([0,0,0]);
HAnimSegment299 := THAnimSegmentNode.Create;
HAnimSegment299.NameField := 'SEGMENT_FOR_r_navicular';
TouchSensor300 := TTouchSensorNode.Create;
TouchSensor300.Description := 'joint r_navicular segment SEGMENT_FOR_r_navicular';
{ .AddChildren }
HAnimSegment299.AddChildren([TouchSensor300]);
Transform301 := TTransformNode.Create;
Transform301.Translation := Vector3(-0.0781,-0.097,0.0283);
Shape302 := TShapeNode.Create;
Shape302 := Shape16;
{ .AddChild }
Transform301.AddChildren([Shape302]);
{ .AddChildren }
HAnimSegment299.AddChildren([Transform301]);
HAnimSite303 := THAnimSiteNode.Create;
HAnimSite303.NameField := 'SEGMENT_FOR_r_navicular_tip';
Transform304 := TTransformNode.Create;
Transform304.Translation := Vector3(-0.0781,-0.097,0.0283);
Shape305 := TShapeNode.Create;
Shape305 := Shape11;
{ .AddChild }
Transform304.AddChildren([Shape305]);
{ .AddChildren }
HAnimSite303.AddChildren([Transform304]);
{ .AddChildren }
HAnimSegment299.AddChildren([HAnimSite303]);
{ .AddChildren }
HAnimJoint298.AddChildren([HAnimSegment299]);
HAnimJoint306 := THAnimJointNode.Create;
HAnimJoint306.NameField := 'r_cuneiform_1';
HAnimJoint306.Center := Vector3(-0.0672,-0.0835,0.0235);
HAnimJoint306.SetUlimit([0,0,0]);
HAnimJoint306.SetLlimit([0,0,0]);
HAnimSegment307 := THAnimSegmentNode.Create;
HAnimSegment307.NameField := 'SEGMENT_FOR_r_cuneiform_1';
TouchSensor308 := TTouchSensorNode.Create;
TouchSensor308.Description := 'joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1';
{ .AddChildren }
HAnimSegment307.AddChildren([TouchSensor308]);
Transform309 := TTransformNode.Create;
Transform309.Translation := Vector3(-0.0672,-0.0835,0.0235);
Shape310 := TShapeNode.Create;
Shape310 := Shape16;
{ .AddChild }
Transform309.AddChildren([Shape310]);
{ .AddChildren }
HAnimSegment307.AddChildren([Transform309]);
HAnimSite311 := THAnimSiteNode.Create;
HAnimSite311.NameField := 'SEGMENT_FOR_r_cuneiform_1_tip';
Transform312 := TTransformNode.Create;
Transform312.Translation := Vector3(-0.0672,-0.0835,0.0235);
Shape313 := TShapeNode.Create;
Shape313 := Shape11;
{ .AddChild }
Transform312.AddChildren([Shape313]);
{ .AddChildren }
HAnimSite311.AddChildren([Transform312]);
{ .AddChildren }
HAnimSegment307.AddChildren([HAnimSite311]);
{ .AddChildren }
HAnimJoint306.AddChildren([HAnimSegment307]);
HAnimJoint314 := THAnimJointNode.Create;
HAnimJoint314.NameField := 'r_metatarsal_1';
HAnimJoint314.Center := Vector3(-0.0644,-0.0577,0.0147);
HAnimJoint314.SetUlimit([0,0,0]);
HAnimJoint314.SetLlimit([0,0,0]);
HAnimSegment315 := THAnimSegmentNode.Create;
HAnimSegment315.NameField := 'SEGMENT_FOR_r_metatarsal_1';
TouchSensor316 := TTouchSensorNode.Create;
TouchSensor316.Description := 'joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1';
{ .AddChildren }
HAnimSegment315.AddChildren([TouchSensor316]);
Transform317 := TTransformNode.Create;
Transform317.Translation := Vector3(-0.0644,-0.0577,0.0147);
Shape318 := TShapeNode.Create;
Shape318 := Shape16;
{ .AddChild }
Transform317.AddChildren([Shape318]);
{ .AddChildren }
HAnimSegment315.AddChildren([Transform317]);
HAnimSite319 := THAnimSiteNode.Create;
HAnimSite319.NameField := 'SEGMENT_FOR_r_metatarsal_1_tip';
Transform320 := TTransformNode.Create;
Transform320.Translation := Vector3(-0.0644,-0.0577,0.0147);
Shape321 := TShapeNode.Create;
Shape321 := Shape11;
{ .AddChild }
Transform320.AddChildren([Shape321]);
{ .AddChildren }
HAnimSite319.AddChildren([Transform320]);
{ .AddChildren }
HAnimSegment315.AddChildren([HAnimSite319]);
{ .AddChildren }
HAnimJoint314.AddChildren([HAnimSegment315]);
HAnimJoint322 := THAnimJointNode.Create;
HAnimJoint322.NameField := 'r_tarsal_proximal_phalanx_1';
HAnimJoint322.Center := Vector3(-0.0619,-0.0083,0.0059);
HAnimJoint322.SetUlimit([0,0,0]);
HAnimJoint322.SetLlimit([0,0,0]);
HAnimSegment323 := THAnimSegmentNode.Create;
HAnimSegment323.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_1';
TouchSensor324 := TTouchSensorNode.Create;
TouchSensor324.Description := 'joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1';
{ .AddChildren }
HAnimSegment323.AddChildren([TouchSensor324]);
Transform325 := TTransformNode.Create;
Transform325.Translation := Vector3(-0.0619,-0.0083,0.0059);
Shape326 := TShapeNode.Create;
Shape326 := Shape16;
{ .AddChild }
Transform325.AddChildren([Shape326]);
{ .AddChildren }
HAnimSegment323.AddChildren([Transform325]);
HAnimSite327 := THAnimSiteNode.Create;
HAnimSite327.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip';
Transform328 := TTransformNode.Create;
Transform328.Translation := Vector3(-0.0619,-0.0083,0.0059);
Shape329 := TShapeNode.Create;
Shape329 := Shape11;
{ .AddChild }
Transform328.AddChildren([Shape329]);
{ .AddChildren }
HAnimSite327.AddChildren([Transform328]);
{ .AddChildren }
HAnimSegment323.AddChildren([HAnimSite327]);
{ .AddChildren }
HAnimJoint322.AddChildren([HAnimSegment323]);
HAnimJoint330 := THAnimJointNode.Create;
HAnimJoint330.NameField := 'r_tarsal_distal_phalanx_1';
HAnimJoint330.SetUlimit([0,0,0]);
HAnimJoint330.SetLlimit([0,0,0]);
HAnimSegment331 := THAnimSegmentNode.Create;
HAnimSegment331.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_1';
TouchSensor332 := TTouchSensorNode.Create;
TouchSensor332.Description := 'joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1';
{ .AddChildren }
HAnimSegment331.AddChildren([TouchSensor332]);
Transform333 := TTransformNode.Create;
Shape334 := TShapeNode.Create;
Shape334 := Shape16;
{ .AddChild }
Transform333.AddChildren([Shape334]);
{ .AddChildren }
HAnimSegment331.AddChildren([Transform333]);
HAnimSite335 := THAnimSiteNode.Create;
HAnimSite335.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip';
Transform336 := TTransformNode.Create;
Shape337 := TShapeNode.Create;
Shape337 := Shape11;
{ .AddChild }
Transform336.AddChildren([Shape337]);
{ .AddChildren }
HAnimSite335.AddChildren([Transform336]);
{ .AddChildren }
HAnimSegment331.AddChildren([HAnimSite335]);
{ .AddChildren }
HAnimJoint330.AddChildren([HAnimSegment331]);
{ .AddChildren }
HAnimJoint322.AddChildren([HAnimJoint330]);
{ .AddChildren }
HAnimJoint314.AddChildren([HAnimJoint322]);
{ .AddChildren }
HAnimJoint306.AddChildren([HAnimJoint314]);
{ .AddChildren }
HAnimJoint298.AddChildren([HAnimJoint306]);
HAnimJoint338 := THAnimJointNode.Create;
HAnimJoint338.NameField := 'r_cuneiform_2';
HAnimJoint338.Center := Vector3(-0.0812,-0.0805,0.025);
HAnimJoint338.SetUlimit([0,0,0]);
HAnimJoint338.SetLlimit([0,0,0]);
HAnimSegment339 := THAnimSegmentNode.Create;
HAnimSegment339.NameField := 'SEGMENT_FOR_r_cuneiform_2';
TouchSensor340 := TTouchSensorNode.Create;
TouchSensor340.Description := 'joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2';
{ .AddChildren }
HAnimSegment339.AddChildren([TouchSensor340]);
Transform341 := TTransformNode.Create;
Transform341.Translation := Vector3(-0.0812,-0.0805,0.025);
Shape342 := TShapeNode.Create;
Shape342 := Shape16;
{ .AddChild }
Transform341.AddChildren([Shape342]);
{ .AddChildren }
HAnimSegment339.AddChildren([Transform341]);
HAnimSite343 := THAnimSiteNode.Create;
HAnimSite343.NameField := 'SEGMENT_FOR_r_cuneiform_2_tip';
Transform344 := TTransformNode.Create;
Transform344.Translation := Vector3(-0.0812,-0.0805,0.025);
Shape345 := TShapeNode.Create;
Shape345 := Shape11;
{ .AddChild }
Transform344.AddChildren([Shape345]);
{ .AddChildren }
HAnimSite343.AddChildren([Transform344]);
{ .AddChildren }
HAnimSegment339.AddChildren([HAnimSite343]);
{ .AddChildren }
HAnimJoint338.AddChildren([HAnimSegment339]);
HAnimJoint346 := THAnimJointNode.Create;
HAnimJoint346.NameField := 'r_metatarsal_2';
HAnimJoint346.Center := Vector3(-0.08,-0.0608,0.0175);
HAnimJoint346.SetUlimit([0,0,0]);
HAnimJoint346.SetLlimit([0,0,0]);
HAnimSegment347 := THAnimSegmentNode.Create;
HAnimSegment347.NameField := 'SEGMENT_FOR_r_metatarsal_2';
TouchSensor348 := TTouchSensorNode.Create;
TouchSensor348.Description := 'joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2';
{ .AddChildren }
HAnimSegment347.AddChildren([TouchSensor348]);
Transform349 := TTransformNode.Create;
Transform349.Translation := Vector3(-0.08,-0.0608,0.0175);
Shape350 := TShapeNode.Create;
Shape350 := Shape16;
{ .AddChild }
Transform349.AddChildren([Shape350]);
{ .AddChildren }
HAnimSegment347.AddChildren([Transform349]);
HAnimSite351 := THAnimSiteNode.Create;
HAnimSite351.NameField := 'SEGMENT_FOR_r_metatarsal_2_tip';
Transform352 := TTransformNode.Create;
Transform352.Translation := Vector3(-0.08,-0.0608,0.0175);
Shape353 := TShapeNode.Create;
Shape353 := Shape11;
{ .AddChild }
Transform352.AddChildren([Shape353]);
{ .AddChildren }
HAnimSite351.AddChildren([Transform352]);
{ .AddChildren }
HAnimSegment347.AddChildren([HAnimSite351]);
{ .AddChildren }
HAnimJoint346.AddChildren([HAnimSegment347]);
HAnimJoint354 := THAnimJointNode.Create;
HAnimJoint354.NameField := 'r_tarsal_proximal_phalanx_2';
HAnimJoint354.Center := Vector3(-0.0823,-0.004,0.0064);
HAnimJoint354.SetUlimit([0,0,0]);
HAnimJoint354.SetLlimit([0,0,0]);
HAnimSegment355 := THAnimSegmentNode.Create;
HAnimSegment355.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_2';
TouchSensor356 := TTouchSensorNode.Create;
TouchSensor356.Description := 'joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment355.AddChildren([TouchSensor356]);
Transform357 := TTransformNode.Create;
Transform357.Translation := Vector3(-0.0823,-0.004,0.0064);
Shape358 := TShapeNode.Create;
Shape358 := Shape16;
{ .AddChild }
Transform357.AddChildren([Shape358]);
{ .AddChildren }
HAnimSegment355.AddChildren([Transform357]);
HAnimSite359 := THAnimSiteNode.Create;
HAnimSite359.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip';
Transform360 := TTransformNode.Create;
Transform360.Translation := Vector3(-0.0823,-0.004,0.0064);
Shape361 := TShapeNode.Create;
Shape361 := Shape11;
{ .AddChild }
Transform360.AddChildren([Shape361]);
{ .AddChildren }
HAnimSite359.AddChildren([Transform360]);
{ .AddChildren }
HAnimSegment355.AddChildren([HAnimSite359]);
{ .AddChildren }
HAnimJoint354.AddChildren([HAnimSegment355]);
HAnimJoint362 := THAnimJointNode.Create;
HAnimJoint362.NameField := 'r_tarsal_middle_phalanx_2';
HAnimJoint362.Center := Vector3(-0.0841,0.0121,0.0041);
HAnimJoint362.SetUlimit([0,0,0]);
HAnimJoint362.SetLlimit([0,0,0]);
HAnimSegment363 := THAnimSegmentNode.Create;
HAnimSegment363.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_2';
TouchSensor364 := TTouchSensorNode.Create;
TouchSensor364.Description := 'joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2';
{ .AddChildren }
HAnimSegment363.AddChildren([TouchSensor364]);
Transform365 := TTransformNode.Create;
Transform365.Translation := Vector3(-0.0841,0.0121,0.0041);
Shape366 := TShapeNode.Create;
Shape366 := Shape16;
{ .AddChild }
Transform365.AddChildren([Shape366]);
{ .AddChildren }
HAnimSegment363.AddChildren([Transform365]);
HAnimSite367 := THAnimSiteNode.Create;
HAnimSite367.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip';
Transform368 := TTransformNode.Create;
Transform368.Translation := Vector3(-0.0841,0.0121,0.0041);
Shape369 := TShapeNode.Create;
Shape369 := Shape11;
{ .AddChild }
Transform368.AddChildren([Shape369]);
{ .AddChildren }
HAnimSite367.AddChildren([Transform368]);
{ .AddChildren }
HAnimSegment363.AddChildren([HAnimSite367]);
{ .AddChildren }
HAnimJoint362.AddChildren([HAnimSegment363]);
HAnimJoint370 := THAnimJointNode.Create;
HAnimJoint370.NameField := 'r_tarsal_distal_phalanx_2';
HAnimJoint370.Center := Vector3(-0.0841,0.0216,0.0013);
HAnimJoint370.SetUlimit([0,0,0]);
HAnimJoint370.SetLlimit([0,0,0]);
HAnimSegment371 := THAnimSegmentNode.Create;
HAnimSegment371.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_2';
TouchSensor372 := TTouchSensorNode.Create;
TouchSensor372.Description := 'joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2';
{ .AddChildren }
HAnimSegment371.AddChildren([TouchSensor372]);
Transform373 := TTransformNode.Create;
Transform373.Translation := Vector3(-0.0841,0.0216,0.0013);
Shape374 := TShapeNode.Create;
Shape374 := Shape16;
{ .AddChild }
Transform373.AddChildren([Shape374]);
{ .AddChildren }
HAnimSegment371.AddChildren([Transform373]);
HAnimSite375 := THAnimSiteNode.Create;
HAnimSite375.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip';
Transform376 := TTransformNode.Create;
Transform376.Translation := Vector3(-0.0841,0.0216,0.0013);
Shape377 := TShapeNode.Create;
Shape377 := Shape11;
{ .AddChild }
Transform376.AddChildren([Shape377]);
{ .AddChildren }
HAnimSite375.AddChildren([Transform376]);
{ .AddChildren }
HAnimSegment371.AddChildren([HAnimSite375]);
{ .AddChildren }
HAnimJoint370.AddChildren([HAnimSegment371]);
{ .AddChildren }
HAnimJoint362.AddChildren([HAnimJoint370]);
{ .AddChildren }
HAnimJoint354.AddChildren([HAnimJoint362]);
{ .AddChildren }
HAnimJoint346.AddChildren([HAnimJoint354]);
{ .AddChildren }
HAnimJoint338.AddChildren([HAnimJoint346]);
{ .AddChildren }
HAnimJoint298.AddChildren([HAnimJoint338]);
HAnimJoint378 := THAnimJointNode.Create;
HAnimJoint378.NameField := 'r_cuneiform_3';
HAnimJoint378.Center := Vector3(-0.0928,-0.0821,0.0248);
HAnimJoint378.SetUlimit([0,0,0]);
HAnimJoint378.SetLlimit([0,0,0]);
HAnimSegment379 := THAnimSegmentNode.Create;
HAnimSegment379.NameField := 'SEGMENT_FOR_r_cuneiform_3';
TouchSensor380 := TTouchSensorNode.Create;
TouchSensor380.Description := 'joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3';
{ .AddChildren }
HAnimSegment379.AddChildren([TouchSensor380]);
Transform381 := TTransformNode.Create;
Transform381.Translation := Vector3(-0.0928,-0.0821,0.0248);
Shape382 := TShapeNode.Create;
Shape382 := Shape16;
{ .AddChild }
Transform381.AddChildren([Shape382]);
{ .AddChildren }
HAnimSegment379.AddChildren([Transform381]);
HAnimSite383 := THAnimSiteNode.Create;
HAnimSite383.NameField := 'SEGMENT_FOR_r_cuneiform_3_tip';
Transform384 := TTransformNode.Create;
Transform384.Translation := Vector3(-0.0928,-0.0821,0.0248);
Shape385 := TShapeNode.Create;
Shape385 := Shape11;
{ .AddChild }
Transform384.AddChildren([Shape385]);
{ .AddChildren }
HAnimSite383.AddChildren([Transform384]);
{ .AddChildren }
HAnimSegment379.AddChildren([HAnimSite383]);
{ .AddChildren }
HAnimJoint378.AddChildren([HAnimSegment379]);
HAnimJoint386 := THAnimJointNode.Create;
HAnimJoint386.NameField := 'r_metatarsal_3';
HAnimJoint386.Center := Vector3(-0.0944,-0.0625,0.0175);
HAnimJoint386.SetUlimit([0,0,0]);
HAnimJoint386.SetLlimit([0,0,0]);
HAnimSegment387 := THAnimSegmentNode.Create;
HAnimSegment387.NameField := 'SEGMENT_FOR_r_metatarsal_3';
TouchSensor388 := TTouchSensorNode.Create;
TouchSensor388.Description := 'joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3';
{ .AddChildren }
HAnimSegment387.AddChildren([TouchSensor388]);
Transform389 := TTransformNode.Create;
Transform389.Translation := Vector3(-0.0944,-0.0625,0.0175);
Shape390 := TShapeNode.Create;
Shape390 := Shape16;
{ .AddChild }
Transform389.AddChildren([Shape390]);
{ .AddChildren }
HAnimSegment387.AddChildren([Transform389]);
HAnimSite391 := THAnimSiteNode.Create;
HAnimSite391.NameField := 'SEGMENT_FOR_r_metatarsal_3_tip';
Transform392 := TTransformNode.Create;
Transform392.Translation := Vector3(-0.0944,-0.0625,0.0175);
Shape393 := TShapeNode.Create;
Shape393 := Shape11;
{ .AddChild }
Transform392.AddChildren([Shape393]);
{ .AddChildren }
HAnimSite391.AddChildren([Transform392]);
{ .AddChildren }
HAnimSegment387.AddChildren([HAnimSite391]);
{ .AddChildren }
HAnimJoint386.AddChildren([HAnimSegment387]);
HAnimJoint394 := THAnimJointNode.Create;
HAnimJoint394.NameField := 'r_tarsal_proximal_phalanx_3';
HAnimJoint394.Center := Vector3(-0.0963,-0.0065,0.0065);
HAnimJoint394.SetUlimit([0,0,0]);
HAnimJoint394.SetLlimit([0,0,0]);
HAnimSegment395 := THAnimSegmentNode.Create;
HAnimSegment395.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_3';
TouchSensor396 := TTouchSensorNode.Create;
TouchSensor396.Description := 'joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3';
{ .AddChildren }
HAnimSegment395.AddChildren([TouchSensor396]);
Transform397 := TTransformNode.Create;
Transform397.Translation := Vector3(-0.0963,-0.0065,0.0065);
Shape398 := TShapeNode.Create;
Shape398 := Shape16;
{ .AddChild }
Transform397.AddChildren([Shape398]);
{ .AddChildren }
HAnimSegment395.AddChildren([Transform397]);
HAnimSite399 := THAnimSiteNode.Create;
HAnimSite399.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip';
Transform400 := TTransformNode.Create;
Transform400.Translation := Vector3(-0.0963,-0.0065,0.0065);
Shape401 := TShapeNode.Create;
Shape401 := Shape11;
{ .AddChild }
Transform400.AddChildren([Shape401]);
{ .AddChildren }
HAnimSite399.AddChildren([Transform400]);
{ .AddChildren }
HAnimSegment395.AddChildren([HAnimSite399]);
{ .AddChildren }
HAnimJoint394.AddChildren([HAnimSegment395]);
HAnimJoint402 := THAnimJointNode.Create;
HAnimJoint402.NameField := 'r_tarsal_middle_phalanx_3';
HAnimJoint402.Center := Vector3(-0.0987,0.0086,0.0034);
HAnimJoint402.SetUlimit([0,0,0]);
HAnimJoint402.SetLlimit([0,0,0]);
HAnimSegment403 := THAnimSegmentNode.Create;
HAnimSegment403.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_3';
TouchSensor404 := TTouchSensorNode.Create;
TouchSensor404.Description := 'joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3';
{ .AddChildren }
HAnimSegment403.AddChildren([TouchSensor404]);
Transform405 := TTransformNode.Create;
Transform405.Translation := Vector3(-0.0987,0.0086,0.0034);
Shape406 := TShapeNode.Create;
Shape406 := Shape16;
{ .AddChild }
Transform405.AddChildren([Shape406]);
{ .AddChildren }
HAnimSegment403.AddChildren([Transform405]);
HAnimSite407 := THAnimSiteNode.Create;
HAnimSite407.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip';
Transform408 := TTransformNode.Create;
Transform408.Translation := Vector3(-0.0987,0.0086,0.0034);
Shape409 := TShapeNode.Create;
Shape409 := Shape11;
{ .AddChild }
Transform408.AddChildren([Shape409]);
{ .AddChildren }
HAnimSite407.AddChildren([Transform408]);
{ .AddChildren }
HAnimSegment403.AddChildren([HAnimSite407]);
{ .AddChildren }
HAnimJoint402.AddChildren([HAnimSegment403]);
HAnimJoint410 := THAnimJointNode.Create;
HAnimJoint410.NameField := 'r_tarsal_distal_phalanx_3';
HAnimJoint410.Center := Vector3(-0.1002,0.0178,0.0013);
HAnimJoint410.SetUlimit([0,0,0]);
HAnimJoint410.SetLlimit([0,0,0]);
HAnimSegment411 := THAnimSegmentNode.Create;
HAnimSegment411.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_3';
TouchSensor412 := TTouchSensorNode.Create;
TouchSensor412.Description := 'joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3';
{ .AddChildren }
HAnimSegment411.AddChildren([TouchSensor412]);
Transform413 := TTransformNode.Create;
Transform413.Translation := Vector3(-0.1002,0.0178,0.0013);
Shape414 := TShapeNode.Create;
Shape414 := Shape16;
{ .AddChild }
Transform413.AddChildren([Shape414]);
{ .AddChildren }
HAnimSegment411.AddChildren([Transform413]);
HAnimSite415 := THAnimSiteNode.Create;
HAnimSite415.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip';
Transform416 := TTransformNode.Create;
Transform416.Translation := Vector3(-0.1002,0.0178,0.0013);
Shape417 := TShapeNode.Create;
Shape417 := Shape11;
{ .AddChild }
Transform416.AddChildren([Shape417]);
{ .AddChildren }
HAnimSite415.AddChildren([Transform416]);
{ .AddChildren }
HAnimSegment411.AddChildren([HAnimSite415]);
{ .AddChildren }
HAnimJoint410.AddChildren([HAnimSegment411]);
{ .AddChildren }
HAnimJoint402.AddChildren([HAnimJoint410]);
{ .AddChildren }
HAnimJoint394.AddChildren([HAnimJoint402]);
{ .AddChildren }
HAnimJoint386.AddChildren([HAnimJoint394]);
{ .AddChildren }
HAnimJoint378.AddChildren([HAnimJoint386]);
{ .AddChildren }
HAnimJoint298.AddChildren([HAnimJoint378]);
{ .AddChildren }
HAnimJoint290.AddChildren([HAnimJoint298]);
HAnimJoint418 := THAnimJointNode.Create;
HAnimJoint418.NameField := 'r_calcaneus';
HAnimJoint418.Center := Vector3(-0.0889,-0.1278,0.0494);
HAnimJoint418.SetUlimit([0,0,0]);
HAnimJoint418.SetLlimit([0,0,0]);
HAnimSegment419 := THAnimSegmentNode.Create;
HAnimSegment419.NameField := 'SEGMENT_FOR_r_calcaneus';
TouchSensor420 := TTouchSensorNode.Create;
TouchSensor420.Description := 'joint r_calcaneus segment SEGMENT_FOR_r_calcaneus';
{ .AddChildren }
HAnimSegment419.AddChildren([TouchSensor420]);
Transform421 := TTransformNode.Create;
Transform421.Translation := Vector3(-0.0889,-0.1278,0.0494);
Shape422 := TShapeNode.Create;
Shape422 := Shape16;
{ .AddChild }
Transform421.AddChildren([Shape422]);
{ .AddChildren }
HAnimSegment419.AddChildren([Transform421]);
HAnimSite423 := THAnimSiteNode.Create;
HAnimSite423.NameField := 'SEGMENT_FOR_r_calcaneus_tip';
Transform424 := TTransformNode.Create;
Transform424.Translation := Vector3(-0.0889,-0.1278,0.0494);
Shape425 := TShapeNode.Create;
Shape425 := Shape11;
{ .AddChild }
Transform424.AddChildren([Shape425]);
{ .AddChildren }
HAnimSite423.AddChildren([Transform424]);
{ .AddChildren }
HAnimSegment419.AddChildren([HAnimSite423]);
{ .AddChildren }
HAnimJoint418.AddChildren([HAnimSegment419]);
HAnimJoint426 := THAnimJointNode.Create;
HAnimJoint426.NameField := 'r_cuboid';
HAnimJoint426.Center := Vector3(-0.1105,-0.0998,0.0267);
HAnimJoint426.SetUlimit([0,0,0]);
HAnimJoint426.SetLlimit([0,0,0]);
HAnimSegment427 := THAnimSegmentNode.Create;
HAnimSegment427.NameField := 'SEGMENT_FOR_r_cuboid';
TouchSensor428 := TTouchSensorNode.Create;
TouchSensor428.Description := 'joint r_cuboid segment SEGMENT_FOR_r_cuboid';
{ .AddChildren }
HAnimSegment427.AddChildren([TouchSensor428]);
Transform429 := TTransformNode.Create;
Transform429.Translation := Vector3(-0.1105,-0.0998,0.0267);
Shape430 := TShapeNode.Create;
Shape430 := Shape16;
{ .AddChild }
Transform429.AddChildren([Shape430]);
{ .AddChildren }
HAnimSegment427.AddChildren([Transform429]);
HAnimSite431 := THAnimSiteNode.Create;
HAnimSite431.NameField := 'SEGMENT_FOR_r_cuboid_tip';
Transform432 := TTransformNode.Create;
Transform432.Translation := Vector3(-0.1105,-0.0998,0.0267);
Shape433 := TShapeNode.Create;
Shape433 := Shape11;
{ .AddChild }
Transform432.AddChildren([Shape433]);
{ .AddChildren }
HAnimSite431.AddChildren([Transform432]);
{ .AddChildren }
HAnimSegment427.AddChildren([HAnimSite431]);
{ .AddChildren }
HAnimJoint426.AddChildren([HAnimSegment427]);
HAnimJoint434 := THAnimJointNode.Create;
HAnimJoint434.NameField := 'r_metatarsal_4';
HAnimJoint434.Center := Vector3(-0.1063,-0.0634,0.016);
HAnimJoint434.SetUlimit([0,0,0]);
HAnimJoint434.SetLlimit([0,0,0]);
HAnimSegment435 := THAnimSegmentNode.Create;
HAnimSegment435.NameField := 'SEGMENT_FOR_r_metatarsal_4';
TouchSensor436 := TTouchSensorNode.Create;
TouchSensor436.Description := 'joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4';
{ .AddChildren }
HAnimSegment435.AddChildren([TouchSensor436]);
Transform437 := TTransformNode.Create;
Transform437.Translation := Vector3(-0.1063,-0.0634,0.016);
Shape438 := TShapeNode.Create;
Shape438 := Shape16;
{ .AddChild }
Transform437.AddChildren([Shape438]);
{ .AddChildren }
HAnimSegment435.AddChildren([Transform437]);
HAnimSite439 := THAnimSiteNode.Create;
HAnimSite439.NameField := 'SEGMENT_FOR_r_metatarsal_4_tip';
Transform440 := TTransformNode.Create;
Transform440.Translation := Vector3(-0.1063,-0.0634,0.016);
Shape441 := TShapeNode.Create;
Shape441 := Shape11;
{ .AddChild }
Transform440.AddChildren([Shape441]);
{ .AddChildren }
HAnimSite439.AddChildren([Transform440]);
{ .AddChildren }
HAnimSegment435.AddChildren([HAnimSite439]);
{ .AddChildren }
HAnimJoint434.AddChildren([HAnimSegment435]);
HAnimJoint442 := THAnimJointNode.Create;
HAnimJoint442.NameField := 'r_tarsal_proximal_phalanx_4';
HAnimJoint442.Center := Vector3(-0.1097,-0.0107,0.0058);
HAnimJoint442.SetUlimit([0,0,0]);
HAnimJoint442.SetLlimit([0,0,0]);
HAnimSegment443 := THAnimSegmentNode.Create;
HAnimSegment443.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_4';
TouchSensor444 := TTouchSensorNode.Create;
TouchSensor444.Description := 'joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4';
{ .AddChildren }
HAnimSegment443.AddChildren([TouchSensor444]);
Transform445 := TTransformNode.Create;
Transform445.Translation := Vector3(-0.1097,-0.0107,0.0058);
Shape446 := TShapeNode.Create;
Shape446 := Shape16;
{ .AddChild }
Transform445.AddChildren([Shape446]);
{ .AddChildren }
HAnimSegment443.AddChildren([Transform445]);
HAnimSite447 := THAnimSiteNode.Create;
HAnimSite447.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip';
Transform448 := TTransformNode.Create;
Transform448.Translation := Vector3(-0.1097,-0.0107,0.0058);
Shape449 := TShapeNode.Create;
Shape449 := Shape11;
{ .AddChild }
Transform448.AddChildren([Shape449]);
{ .AddChildren }
HAnimSite447.AddChildren([Transform448]);
{ .AddChildren }
HAnimSegment443.AddChildren([HAnimSite447]);
{ .AddChildren }
HAnimJoint442.AddChildren([HAnimSegment443]);
HAnimJoint450 := THAnimJointNode.Create;
HAnimJoint450.NameField := 'r_tarsal_middle_phalanx_4';
HAnimJoint450.Center := Vector3(-0.114,0.0044,0.0037);
HAnimJoint450.SetUlimit([0,0,0]);
HAnimJoint450.SetLlimit([0,0,0]);
HAnimSegment451 := THAnimSegmentNode.Create;
HAnimSegment451.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_4';
TouchSensor452 := TTouchSensorNode.Create;
TouchSensor452.Description := 'joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4';
{ .AddChildren }
HAnimSegment451.AddChildren([TouchSensor452]);
Transform453 := TTransformNode.Create;
Transform453.Translation := Vector3(-0.114,0.0044,0.0037);
Shape454 := TShapeNode.Create;
Shape454 := Shape16;
{ .AddChild }
Transform453.AddChildren([Shape454]);
{ .AddChildren }
HAnimSegment451.AddChildren([Transform453]);
HAnimSite455 := THAnimSiteNode.Create;
HAnimSite455.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip';
Transform456 := TTransformNode.Create;
Transform456.Translation := Vector3(-0.114,0.0044,0.0037);
Shape457 := TShapeNode.Create;
Shape457 := Shape11;
{ .AddChild }
Transform456.AddChildren([Shape457]);
{ .AddChildren }
HAnimSite455.AddChildren([Transform456]);
{ .AddChildren }
HAnimSegment451.AddChildren([HAnimSite455]);
{ .AddChildren }
HAnimJoint450.AddChildren([HAnimSegment451]);
HAnimJoint458 := THAnimJointNode.Create;
HAnimJoint458.NameField := 'r_tarsal_distal_phalanx_4';
HAnimJoint458.Center := Vector3(-0.1155,0.0118,0.0008);
HAnimJoint458.SetUlimit([0,0,0]);
HAnimJoint458.SetLlimit([0,0,0]);
HAnimSegment459 := THAnimSegmentNode.Create;
HAnimSegment459.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_4';
TouchSensor460 := TTouchSensorNode.Create;
TouchSensor460.Description := 'joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4';
{ .AddChildren }
HAnimSegment459.AddChildren([TouchSensor460]);
Transform461 := TTransformNode.Create;
Transform461.Translation := Vector3(-0.1155,0.0118,0.0008);
Shape462 := TShapeNode.Create;
Shape462 := Shape16;
{ .AddChild }
Transform461.AddChildren([Shape462]);
{ .AddChildren }
HAnimSegment459.AddChildren([Transform461]);
HAnimSite463 := THAnimSiteNode.Create;
HAnimSite463.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip';
Transform464 := TTransformNode.Create;
Transform464.Translation := Vector3(-0.1155,0.0118,0.0008);
Shape465 := TShapeNode.Create;
Shape465 := Shape11;
{ .AddChild }
Transform464.AddChildren([Shape465]);
{ .AddChildren }
HAnimSite463.AddChildren([Transform464]);
{ .AddChildren }
HAnimSegment459.AddChildren([HAnimSite463]);
{ .AddChildren }
HAnimJoint458.AddChildren([HAnimSegment459]);
{ .AddChildren }
HAnimJoint450.AddChildren([HAnimJoint458]);
{ .AddChildren }
HAnimJoint442.AddChildren([HAnimJoint450]);
{ .AddChildren }
HAnimJoint434.AddChildren([HAnimJoint442]);
{ .AddChildren }
HAnimJoint426.AddChildren([HAnimJoint434]);
HAnimJoint466 := THAnimJointNode.Create;
HAnimJoint466.NameField := 'r_metatarsal_5';
HAnimJoint466.Center := Vector3(-0.1206,-0.0671,0.0124);
HAnimJoint466.SetUlimit([0,0,0]);
HAnimJoint466.SetLlimit([0,0,0]);
HAnimSegment467 := THAnimSegmentNode.Create;
HAnimSegment467.NameField := 'SEGMENT_FOR_r_metatarsal_5';
TouchSensor468 := TTouchSensorNode.Create;
TouchSensor468.Description := 'joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5';
{ .AddChildren }
HAnimSegment467.AddChildren([TouchSensor468]);
Transform469 := TTransformNode.Create;
Transform469.Translation := Vector3(-0.1206,-0.0671,0.0124);
Shape470 := TShapeNode.Create;
Shape470 := Shape16;
{ .AddChild }
Transform469.AddChildren([Shape470]);
{ .AddChildren }
HAnimSegment467.AddChildren([Transform469]);
HAnimSite471 := THAnimSiteNode.Create;
HAnimSite471.NameField := 'SEGMENT_FOR_r_metatarsal_5_tip';
Transform472 := TTransformNode.Create;
Transform472.Translation := Vector3(-0.1206,-0.0671,0.0124);
Shape473 := TShapeNode.Create;
Shape473 := Shape11;
{ .AddChild }
Transform472.AddChildren([Shape473]);
{ .AddChildren }
HAnimSite471.AddChildren([Transform472]);
{ .AddChildren }
HAnimSegment467.AddChildren([HAnimSite471]);
{ .AddChildren }
HAnimJoint466.AddChildren([HAnimSegment467]);
HAnimJoint474 := THAnimJointNode.Create;
HAnimJoint474.NameField := 'r_tarsal_proximal_phalanx_5';
HAnimJoint474.Center := Vector3(-0.1239,-0.0153,0.0051);
HAnimJoint474.SetUlimit([0,0,0]);
HAnimJoint474.SetLlimit([0,0,0]);
HAnimSegment475 := THAnimSegmentNode.Create;
HAnimSegment475.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_5';
TouchSensor476 := TTouchSensorNode.Create;
TouchSensor476.Description := 'joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5';
{ .AddChildren }
HAnimSegment475.AddChildren([TouchSensor476]);
Transform477 := TTransformNode.Create;
Transform477.Translation := Vector3(-0.1239,-0.0153,0.0051);
Shape478 := TShapeNode.Create;
Shape478 := Shape16;
{ .AddChild }
Transform477.AddChildren([Shape478]);
{ .AddChildren }
HAnimSegment475.AddChildren([Transform477]);
HAnimSite479 := THAnimSiteNode.Create;
HAnimSite479.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip';
Transform480 := TTransformNode.Create;
Transform480.Translation := Vector3(-0.1239,-0.0153,0.0051);
Shape481 := TShapeNode.Create;
Shape481 := Shape11;
{ .AddChild }
Transform480.AddChildren([Shape481]);
{ .AddChildren }
HAnimSite479.AddChildren([Transform480]);
{ .AddChildren }
HAnimSegment475.AddChildren([HAnimSite479]);
{ .AddChildren }
HAnimJoint474.AddChildren([HAnimSegment475]);
HAnimJoint482 := THAnimJointNode.Create;
HAnimJoint482.NameField := 'r_tarsal_middle_phalanx_5';
HAnimJoint482.Center := Vector3(-0.1262,-0.0077,0.0023);
HAnimJoint482.SetUlimit([0,0,0]);
HAnimJoint482.SetLlimit([0,0,0]);
HAnimSegment483 := THAnimSegmentNode.Create;
HAnimSegment483.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_5';
TouchSensor484 := TTouchSensorNode.Create;
TouchSensor484.Description := 'joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5';
{ .AddChildren }
HAnimSegment483.AddChildren([TouchSensor484]);
Transform485 := TTransformNode.Create;
Transform485.Translation := Vector3(-0.1262,-0.0077,0.0023);
Shape486 := TShapeNode.Create;
Shape486 := Shape16;
{ .AddChild }
Transform485.AddChildren([Shape486]);
{ .AddChildren }
HAnimSegment483.AddChildren([Transform485]);
HAnimSite487 := THAnimSiteNode.Create;
HAnimSite487.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip';
Transform488 := TTransformNode.Create;
Transform488.Translation := Vector3(-0.1262,-0.0077,0.0023);
Shape489 := TShapeNode.Create;
Shape489 := Shape11;
{ .AddChild }
Transform488.AddChildren([Shape489]);
{ .AddChildren }
HAnimSite487.AddChildren([Transform488]);
{ .AddChildren }
HAnimSegment483.AddChildren([HAnimSite487]);
{ .AddChildren }
HAnimJoint482.AddChildren([HAnimSegment483]);
HAnimJoint490 := THAnimJointNode.Create;
HAnimJoint490.NameField := 'r_tarsal_distal_phalanx_5';
HAnimJoint490.Center := Vector3(-0.1271,0,0);
HAnimJoint490.SetUlimit([0,0,0]);
HAnimJoint490.SetLlimit([0,0,0]);
HAnimSegment491 := THAnimSegmentNode.Create;
HAnimSegment491.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_5';
TouchSensor492 := TTouchSensorNode.Create;
TouchSensor492.Description := 'joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5';
{ .AddChildren }
HAnimSegment491.AddChildren([TouchSensor492]);
Transform493 := TTransformNode.Create;
Transform493.Translation := Vector3(-0.1271,0,0);
Shape494 := TShapeNode.Create;
Shape494 := Shape16;
{ .AddChild }
Transform493.AddChildren([Shape494]);
{ .AddChildren }
HAnimSegment491.AddChildren([Transform493]);
HAnimSite495 := THAnimSiteNode.Create;
HAnimSite495.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip';
Transform496 := TTransformNode.Create;
Transform496.Translation := Vector3(-0.1271,0,0);
Shape497 := TShapeNode.Create;
Shape497 := Shape11;
{ .AddChild }
Transform496.AddChildren([Shape497]);
{ .AddChildren }
HAnimSite495.AddChildren([Transform496]);
{ .AddChildren }
HAnimSegment491.AddChildren([HAnimSite495]);
{ .AddChildren }
HAnimJoint490.AddChildren([HAnimSegment491]);
{ .AddChildren }
HAnimJoint482.AddChildren([HAnimJoint490]);
{ .AddChildren }
HAnimJoint474.AddChildren([HAnimJoint482]);
{ .AddChildren }
HAnimJoint466.AddChildren([HAnimJoint474]);
{ .AddChildren }
HAnimJoint426.AddChildren([HAnimJoint466]);
{ .AddChildren }
HAnimJoint418.AddChildren([HAnimJoint426]);
{ .AddChildren }
HAnimJoint290.AddChildren([HAnimJoint418]);
{ .AddChildren }
HAnimJoint282.AddChildren([HAnimJoint290]);
{ .AddChildren }
HAnimJoint274.AddChildren([HAnimJoint282]);
{ .AddChildren }
HAnimJoint42.AddChildren([HAnimJoint274]);
{ .AddChildren }
HAnimJoint34.AddChildren([HAnimJoint42]);
HAnimJoint498 := THAnimJointNode.Create;
HAnimJoint498.NameField := 'l5';
HAnimJoint498.Center := Vector3(-0.0002,-0.1156,0.9169);
HAnimJoint498.SetUlimit([0,0,0]);
HAnimJoint498.SetLlimit([0,0,0]);
HAnimSegment499 := THAnimSegmentNode.Create;
HAnimSegment499.NameField := 'SEGMENT_FOR_l5';
TouchSensor500 := TTouchSensorNode.Create;
TouchSensor500.Description := 'joint l5 segment SEGMENT_FOR_l5';
{ .AddChildren }
HAnimSegment499.AddChildren([TouchSensor500]);
Transform501 := TTransformNode.Create;
Transform501.Translation := Vector3(-0.0002,-0.1156,0.9169);
Shape502 := TShapeNode.Create;
Shape502 := Shape16;
{ .AddChild }
Transform501.AddChildren([Shape502]);
{ .AddChildren }
HAnimSegment499.AddChildren([Transform501]);
HAnimSite503 := THAnimSiteNode.Create;
HAnimSite503.NameField := 'SEGMENT_FOR_l5_tip';
Transform504 := TTransformNode.Create;
Transform504.Translation := Vector3(-0.0002,-0.1156,0.9169);
Shape505 := TShapeNode.Create;
Shape505 := Shape11;
{ .AddChild }
Transform504.AddChildren([Shape505]);
{ .AddChildren }
HAnimSite503.AddChildren([Transform504]);
{ .AddChildren }
HAnimSegment499.AddChildren([HAnimSite503]);
{ .AddChildren }
HAnimJoint498.AddChildren([HAnimSegment499]);
HAnimJoint506 := THAnimJointNode.Create;
HAnimJoint506.NameField := 'l4';
HAnimJoint506.Center := Vector3(-0.0002,-0.1156,0.9412);
HAnimJoint506.SetUlimit([0,0,0]);
HAnimJoint506.SetLlimit([0,0,0]);
HAnimSegment507 := THAnimSegmentNode.Create;
HAnimSegment507.NameField := 'SEGMENT_FOR_l4';
TouchSensor508 := TTouchSensorNode.Create;
TouchSensor508.Description := 'joint l4 segment SEGMENT_FOR_l4';
{ .AddChildren }
HAnimSegment507.AddChildren([TouchSensor508]);
Transform509 := TTransformNode.Create;
Transform509.Translation := Vector3(-0.0002,-0.1156,0.9412);
Shape510 := TShapeNode.Create;
Shape510 := Shape16;
{ .AddChild }
Transform509.AddChildren([Shape510]);
{ .AddChildren }
HAnimSegment507.AddChildren([Transform509]);
HAnimSite511 := THAnimSiteNode.Create;
HAnimSite511.NameField := 'SEGMENT_FOR_l4_tip';
Transform512 := TTransformNode.Create;
Transform512.Translation := Vector3(-0.0002,-0.1156,0.9412);
Shape513 := TShapeNode.Create;
Shape513 := Shape11;
{ .AddChild }
Transform512.AddChildren([Shape513]);
{ .AddChildren }
HAnimSite511.AddChildren([Transform512]);
{ .AddChildren }
HAnimSegment507.AddChildren([HAnimSite511]);
{ .AddChildren }
HAnimJoint506.AddChildren([HAnimSegment507]);
HAnimJoint514 := THAnimJointNode.Create;
HAnimJoint514.NameField := 'l3';
HAnimJoint514.Center := Vector3(-0.0002,-0.1156,0.9574);
HAnimJoint514.SetUlimit([0,0,0]);
HAnimJoint514.SetLlimit([0,0,0]);
HAnimSegment515 := THAnimSegmentNode.Create;
HAnimSegment515.NameField := 'SEGMENT_FOR_l3';
TouchSensor516 := TTouchSensorNode.Create;
TouchSensor516.Description := 'joint l3 segment SEGMENT_FOR_l3';
{ .AddChildren }
HAnimSegment515.AddChildren([TouchSensor516]);
Transform517 := TTransformNode.Create;
Transform517.Translation := Vector3(-0.0002,-0.1156,0.9574);
Shape518 := TShapeNode.Create;
Shape518 := Shape16;
{ .AddChild }
Transform517.AddChildren([Shape518]);
{ .AddChildren }
HAnimSegment515.AddChildren([Transform517]);
HAnimSite519 := THAnimSiteNode.Create;
HAnimSite519.NameField := 'SEGMENT_FOR_l3_tip';
Transform520 := TTransformNode.Create;
Transform520.Translation := Vector3(-0.0002,-0.1156,0.9574);
Shape521 := TShapeNode.Create;
Shape521 := Shape11;
{ .AddChild }
Transform520.AddChildren([Shape521]);
{ .AddChildren }
HAnimSite519.AddChildren([Transform520]);
{ .AddChildren }
HAnimSegment515.AddChildren([HAnimSite519]);
{ .AddChildren }
HAnimJoint514.AddChildren([HAnimSegment515]);
HAnimJoint522 := THAnimJointNode.Create;
HAnimJoint522.NameField := 'l2';
HAnimJoint522.Center := Vector3(-0.0002,-0.1156,0.9738);
HAnimJoint522.SetUlimit([0,0,0]);
HAnimJoint522.SetLlimit([0,0,0]);
HAnimSegment523 := THAnimSegmentNode.Create;
HAnimSegment523.NameField := 'SEGMENT_FOR_l2';
TouchSensor524 := TTouchSensorNode.Create;
TouchSensor524.Description := 'joint l2 segment SEGMENT_FOR_l2';
{ .AddChildren }
HAnimSegment523.AddChildren([TouchSensor524]);
Transform525 := TTransformNode.Create;
Transform525.Translation := Vector3(-0.0002,-0.1156,0.9738);
Shape526 := TShapeNode.Create;
Shape526 := Shape16;
{ .AddChild }
Transform525.AddChildren([Shape526]);
{ .AddChildren }
HAnimSegment523.AddChildren([Transform525]);
HAnimSite527 := THAnimSiteNode.Create;
HAnimSite527.NameField := 'SEGMENT_FOR_l2_tip';
Transform528 := TTransformNode.Create;
Transform528.Translation := Vector3(-0.0002,-0.1156,0.9738);
Shape529 := TShapeNode.Create;
Shape529 := Shape11;
{ .AddChild }
Transform528.AddChildren([Shape529]);
{ .AddChildren }
HAnimSite527.AddChildren([Transform528]);
{ .AddChildren }
HAnimSegment523.AddChildren([HAnimSite527]);
{ .AddChildren }
HAnimJoint522.AddChildren([HAnimSegment523]);
HAnimJoint530 := THAnimJointNode.Create;
HAnimJoint530.NameField := 'l1';
HAnimJoint530.Center := Vector3(-0.0002,-0.1156,0.9911);
HAnimJoint530.SetUlimit([0,0,0]);
HAnimJoint530.SetLlimit([0,0,0]);
HAnimSegment531 := THAnimSegmentNode.Create;
HAnimSegment531.NameField := 'SEGMENT_FOR_l1';
TouchSensor532 := TTouchSensorNode.Create;
TouchSensor532.Description := 'joint l1 segment SEGMENT_FOR_l1';
{ .AddChildren }
HAnimSegment531.AddChildren([TouchSensor532]);
Transform533 := TTransformNode.Create;
Transform533.Translation := Vector3(-0.0002,-0.1156,0.9911);
Shape534 := TShapeNode.Create;
Shape534 := Shape16;
{ .AddChild }
Transform533.AddChildren([Shape534]);
{ .AddChildren }
HAnimSegment531.AddChildren([Transform533]);
HAnimSite535 := THAnimSiteNode.Create;
HAnimSite535.NameField := 'SEGMENT_FOR_l1_tip';
Transform536 := TTransformNode.Create;
Transform536.Translation := Vector3(-0.0002,-0.1156,0.9911);
Shape537 := TShapeNode.Create;
Shape537 := Shape11;
{ .AddChild }
Transform536.AddChildren([Shape537]);
{ .AddChildren }
HAnimSite535.AddChildren([Transform536]);
{ .AddChildren }
HAnimSegment531.AddChildren([HAnimSite535]);
{ .AddChildren }
HAnimJoint530.AddChildren([HAnimSegment531]);
HAnimJoint538 := THAnimJointNode.Create;
HAnimJoint538.NameField := 't12';
HAnimJoint538.Center := Vector3(-0.0002,-0.1156,1.0145);
HAnimJoint538.SetUlimit([0,0,0]);
HAnimJoint538.SetLlimit([0,0,0]);
HAnimSegment539 := THAnimSegmentNode.Create;
HAnimSegment539.NameField := 'SEGMENT_FOR_t12';
TouchSensor540 := TTouchSensorNode.Create;
TouchSensor540.Description := 'joint t12 segment SEGMENT_FOR_t12';
{ .AddChildren }
HAnimSegment539.AddChildren([TouchSensor540]);
Transform541 := TTransformNode.Create;
Transform541.Translation := Vector3(-0.0002,-0.1156,1.0145);
Shape542 := TShapeNode.Create;
Shape542 := Shape16;
{ .AddChild }
Transform541.AddChildren([Shape542]);
{ .AddChildren }
HAnimSegment539.AddChildren([Transform541]);
HAnimSite543 := THAnimSiteNode.Create;
HAnimSite543.NameField := 'SEGMENT_FOR_t12_tip';
Transform544 := TTransformNode.Create;
Transform544.Translation := Vector3(-0.0002,-0.1156,1.0145);
Shape545 := TShapeNode.Create;
Shape545 := Shape11;
{ .AddChild }
Transform544.AddChildren([Shape545]);
{ .AddChildren }
HAnimSite543.AddChildren([Transform544]);
{ .AddChildren }
HAnimSegment539.AddChildren([HAnimSite543]);
{ .AddChildren }
HAnimJoint538.AddChildren([HAnimSegment539]);
HAnimJoint546 := THAnimJointNode.Create;
HAnimJoint546.NameField := 't11';
HAnimJoint546.Center := Vector3(-0.0002,-0.1156,1.0381);
HAnimJoint546.SetUlimit([0,0,0]);
HAnimJoint546.SetLlimit([0,0,0]);
HAnimSegment547 := THAnimSegmentNode.Create;
HAnimSegment547.NameField := 'SEGMENT_FOR_t11';
TouchSensor548 := TTouchSensorNode.Create;
TouchSensor548.Description := 'joint t11 segment SEGMENT_FOR_t11';
{ .AddChildren }
HAnimSegment547.AddChildren([TouchSensor548]);
Transform549 := TTransformNode.Create;
Transform549.Translation := Vector3(-0.0002,-0.1156,1.0381);
Shape550 := TShapeNode.Create;
Shape550 := Shape16;
{ .AddChild }
Transform549.AddChildren([Shape550]);
{ .AddChildren }
HAnimSegment547.AddChildren([Transform549]);
HAnimSite551 := THAnimSiteNode.Create;
HAnimSite551.NameField := 'SEGMENT_FOR_t11_tip';
Transform552 := TTransformNode.Create;
Transform552.Translation := Vector3(-0.0002,-0.1156,1.0381);
Shape553 := TShapeNode.Create;
Shape553 := Shape11;
{ .AddChild }
Transform552.AddChildren([Shape553]);
{ .AddChildren }
HAnimSite551.AddChildren([Transform552]);
{ .AddChildren }
HAnimSegment547.AddChildren([HAnimSite551]);
{ .AddChildren }
HAnimJoint546.AddChildren([HAnimSegment547]);
HAnimJoint554 := THAnimJointNode.Create;
HAnimJoint554.NameField := 't10';
HAnimJoint554.Center := Vector3(-0.0002,-0.1157,1.0552);
HAnimJoint554.SetUlimit([0,0,0]);
HAnimJoint554.SetLlimit([0,0,0]);
HAnimSegment555 := THAnimSegmentNode.Create;
HAnimSegment555.NameField := 'SEGMENT_FOR_t10';
TouchSensor556 := TTouchSensorNode.Create;
TouchSensor556.Description := 'joint t10 segment SEGMENT_FOR_t10';
{ .AddChildren }
HAnimSegment555.AddChildren([TouchSensor556]);
Transform557 := TTransformNode.Create;
Transform557.Translation := Vector3(-0.0002,-0.1157,1.0552);
Shape558 := TShapeNode.Create;
Shape558 := Shape16;
{ .AddChild }
Transform557.AddChildren([Shape558]);
{ .AddChildren }
HAnimSegment555.AddChildren([Transform557]);
HAnimSite559 := THAnimSiteNode.Create;
HAnimSite559.NameField := 'SEGMENT_FOR_t10_tip';
Transform560 := TTransformNode.Create;
Transform560.Translation := Vector3(-0.0002,-0.1157,1.0552);
Shape561 := TShapeNode.Create;
Shape561 := Shape11;
{ .AddChild }
Transform560.AddChildren([Shape561]);
{ .AddChildren }
HAnimSite559.AddChildren([Transform560]);
{ .AddChildren }
HAnimSegment555.AddChildren([HAnimSite559]);
{ .AddChildren }
HAnimJoint554.AddChildren([HAnimSegment555]);
HAnimJoint562 := THAnimJointNode.Create;
HAnimJoint562.NameField := 't9';
HAnimJoint562.Center := Vector3(-0.0002,-0.1156,1.0699);
HAnimJoint562.SetUlimit([0,0,0]);
HAnimJoint562.SetLlimit([0,0,0]);
HAnimSegment563 := THAnimSegmentNode.Create;
HAnimSegment563.NameField := 'SEGMENT_FOR_t9';
TouchSensor564 := TTouchSensorNode.Create;
TouchSensor564.Description := 'joint t9 segment SEGMENT_FOR_t9';
{ .AddChildren }
HAnimSegment563.AddChildren([TouchSensor564]);
Transform565 := TTransformNode.Create;
Transform565.Translation := Vector3(-0.0002,-0.1156,1.0699);
Shape566 := TShapeNode.Create;
Shape566 := Shape16;
{ .AddChild }
Transform565.AddChildren([Shape566]);
{ .AddChildren }
HAnimSegment563.AddChildren([Transform565]);
HAnimSite567 := THAnimSiteNode.Create;
HAnimSite567.NameField := 'SEGMENT_FOR_t9_tip';
Transform568 := TTransformNode.Create;
Transform568.Translation := Vector3(-0.0002,-0.1156,1.0699);
Shape569 := TShapeNode.Create;
Shape569 := Shape11;
{ .AddChild }
Transform568.AddChildren([Shape569]);
{ .AddChildren }
HAnimSite567.AddChildren([Transform568]);
{ .AddChildren }
HAnimSegment563.AddChildren([HAnimSite567]);
{ .AddChildren }
HAnimJoint562.AddChildren([HAnimSegment563]);
HAnimJoint570 := THAnimJointNode.Create;
HAnimJoint570.NameField := 't8';
HAnimJoint570.Center := Vector3(-0.0002,-0.1156,1.0845);
HAnimJoint570.SetUlimit([0,0,0]);
HAnimJoint570.SetLlimit([0,0,0]);
HAnimSegment571 := THAnimSegmentNode.Create;
HAnimSegment571.NameField := 'SEGMENT_FOR_t8';
TouchSensor572 := TTouchSensorNode.Create;
TouchSensor572.Description := 'joint t8 segment SEGMENT_FOR_t8';
{ .AddChildren }
HAnimSegment571.AddChildren([TouchSensor572]);
Transform573 := TTransformNode.Create;
Transform573.Translation := Vector3(-0.0002,-0.1156,1.0845);
Shape574 := TShapeNode.Create;
Shape574 := Shape16;
{ .AddChild }
Transform573.AddChildren([Shape574]);
{ .AddChildren }
HAnimSegment571.AddChildren([Transform573]);
HAnimSite575 := THAnimSiteNode.Create;
HAnimSite575.NameField := 'SEGMENT_FOR_t8_tip';
Transform576 := TTransformNode.Create;
Transform576.Translation := Vector3(-0.0002,-0.1156,1.0845);
Shape577 := TShapeNode.Create;
Shape577 := Shape11;
{ .AddChild }
Transform576.AddChildren([Shape577]);
{ .AddChildren }
HAnimSite575.AddChildren([Transform576]);
{ .AddChildren }
HAnimSegment571.AddChildren([HAnimSite575]);
{ .AddChildren }
HAnimJoint570.AddChildren([HAnimSegment571]);
HAnimJoint578 := THAnimJointNode.Create;
HAnimJoint578.NameField := 't7';
HAnimJoint578.Center := Vector3(-0.0002,-0.1156,1.1002);
HAnimJoint578.SetUlimit([0,0,0]);
HAnimJoint578.SetLlimit([0,0,0]);
HAnimSegment579 := THAnimSegmentNode.Create;
HAnimSegment579.NameField := 'SEGMENT_FOR_t7';
TouchSensor580 := TTouchSensorNode.Create;
TouchSensor580.Description := 'joint t7 segment SEGMENT_FOR_t7';
{ .AddChildren }
HAnimSegment579.AddChildren([TouchSensor580]);
Transform581 := TTransformNode.Create;
Transform581.Translation := Vector3(-0.0002,-0.1156,1.1002);
Shape582 := TShapeNode.Create;
Shape582 := Shape16;
{ .AddChild }
Transform581.AddChildren([Shape582]);
{ .AddChildren }
HAnimSegment579.AddChildren([Transform581]);
HAnimSite583 := THAnimSiteNode.Create;
HAnimSite583.NameField := 'SEGMENT_FOR_t7_tip';
Transform584 := TTransformNode.Create;
Transform584.Translation := Vector3(-0.0002,-0.1156,1.1002);
Shape585 := TShapeNode.Create;
Shape585 := Shape11;
{ .AddChild }
Transform584.AddChildren([Shape585]);
{ .AddChildren }
HAnimSite583.AddChildren([Transform584]);
{ .AddChildren }
HAnimSegment579.AddChildren([HAnimSite583]);
{ .AddChildren }
HAnimJoint578.AddChildren([HAnimSegment579]);
HAnimJoint586 := THAnimJointNode.Create;
HAnimJoint586.NameField := 't6';
HAnimJoint586.Center := Vector3(-0.0002,-0.1156,1.1131);
HAnimJoint586.SetUlimit([0,0,0]);
HAnimJoint586.SetLlimit([0,0,0]);
HAnimSegment587 := THAnimSegmentNode.Create;
HAnimSegment587.NameField := 'SEGMENT_FOR_t6';
TouchSensor588 := TTouchSensorNode.Create;
TouchSensor588.Description := 'joint t6 segment SEGMENT_FOR_t6';
{ .AddChildren }
HAnimSegment587.AddChildren([TouchSensor588]);
Transform589 := TTransformNode.Create;
Transform589.Translation := Vector3(-0.0002,-0.1156,1.1131);
Shape590 := TShapeNode.Create;
Shape590 := Shape16;
{ .AddChild }
Transform589.AddChildren([Shape590]);
{ .AddChildren }
HAnimSegment587.AddChildren([Transform589]);
HAnimSite591 := THAnimSiteNode.Create;
HAnimSite591.NameField := 'SEGMENT_FOR_t6_tip';
Transform592 := TTransformNode.Create;
Transform592.Translation := Vector3(-0.0002,-0.1156,1.1131);
Shape593 := TShapeNode.Create;
Shape593 := Shape11;
{ .AddChild }
Transform592.AddChildren([Shape593]);
{ .AddChildren }
HAnimSite591.AddChildren([Transform592]);
{ .AddChildren }
HAnimSegment587.AddChildren([HAnimSite591]);
{ .AddChildren }
HAnimJoint586.AddChildren([HAnimSegment587]);
HAnimJoint594 := THAnimJointNode.Create;
HAnimJoint594.NameField := 't5';
HAnimJoint594.Center := Vector3(-0.0002,-0.1156,1.1286);
HAnimJoint594.SetUlimit([0,0,0]);
HAnimJoint594.SetLlimit([0,0,0]);
HAnimSegment595 := THAnimSegmentNode.Create;
HAnimSegment595.NameField := 'SEGMENT_FOR_t5';
TouchSensor596 := TTouchSensorNode.Create;
TouchSensor596.Description := 'joint t5 segment SEGMENT_FOR_t5';
{ .AddChildren }
HAnimSegment595.AddChildren([TouchSensor596]);
Transform597 := TTransformNode.Create;
Transform597.Translation := Vector3(-0.0002,-0.1156,1.1286);
Shape598 := TShapeNode.Create;
Shape598 := Shape16;
{ .AddChild }
Transform597.AddChildren([Shape598]);
{ .AddChildren }
HAnimSegment595.AddChildren([Transform597]);
HAnimSite599 := THAnimSiteNode.Create;
HAnimSite599.NameField := 'SEGMENT_FOR_t5_tip';
Transform600 := TTransformNode.Create;
Transform600.Translation := Vector3(-0.0002,-0.1156,1.1286);
Shape601 := TShapeNode.Create;
Shape601 := Shape11;
{ .AddChild }
Transform600.AddChildren([Shape601]);
{ .AddChildren }
HAnimSite599.AddChildren([Transform600]);
{ .AddChildren }
HAnimSegment595.AddChildren([HAnimSite599]);
{ .AddChildren }
HAnimJoint594.AddChildren([HAnimSegment595]);
HAnimJoint602 := THAnimJointNode.Create;
HAnimJoint602.NameField := 't4';
HAnimJoint602.Center := Vector3(-0.0002,-0.1156,1.1439);
HAnimJoint602.SetUlimit([0,0,0]);
HAnimJoint602.SetLlimit([0,0,0]);
HAnimSegment603 := THAnimSegmentNode.Create;
HAnimSegment603.NameField := 'SEGMENT_FOR_t4';
TouchSensor604 := TTouchSensorNode.Create;
TouchSensor604.Description := 'joint t4 segment SEGMENT_FOR_t4';
{ .AddChildren }
HAnimSegment603.AddChildren([TouchSensor604]);
Transform605 := TTransformNode.Create;
Transform605.Translation := Vector3(-0.0002,-0.1156,1.1439);
Shape606 := TShapeNode.Create;
Shape606 := Shape16;
{ .AddChild }
Transform605.AddChildren([Shape606]);
{ .AddChildren }
HAnimSegment603.AddChildren([Transform605]);
HAnimSite607 := THAnimSiteNode.Create;
HAnimSite607.NameField := 'SEGMENT_FOR_t4_tip';
Transform608 := TTransformNode.Create;
Transform608.Translation := Vector3(-0.0002,-0.1156,1.1439);
Shape609 := TShapeNode.Create;
Shape609 := Shape11;
{ .AddChild }
Transform608.AddChildren([Shape609]);
{ .AddChildren }
HAnimSite607.AddChildren([Transform608]);
{ .AddChildren }
HAnimSegment603.AddChildren([HAnimSite607]);
{ .AddChildren }
HAnimJoint602.AddChildren([HAnimSegment603]);
HAnimJoint610 := THAnimJointNode.Create;
HAnimJoint610.NameField := 't3';
HAnimJoint610.Center := Vector3(-0.0002,-0.1156,1.1623);
HAnimJoint610.SetUlimit([0,0,0]);
HAnimJoint610.SetLlimit([0,0,0]);
HAnimSegment611 := THAnimSegmentNode.Create;
HAnimSegment611.NameField := 'SEGMENT_FOR_t3';
TouchSensor612 := TTouchSensorNode.Create;
TouchSensor612.Description := 'joint t3 segment SEGMENT_FOR_t3';
{ .AddChildren }
HAnimSegment611.AddChildren([TouchSensor612]);
Transform613 := TTransformNode.Create;
Transform613.Translation := Vector3(-0.0002,-0.1156,1.1623);
Shape614 := TShapeNode.Create;
Shape614 := Shape16;
{ .AddChild }
Transform613.AddChildren([Shape614]);
{ .AddChildren }
HAnimSegment611.AddChildren([Transform613]);
HAnimSite615 := THAnimSiteNode.Create;
HAnimSite615.NameField := 'SEGMENT_FOR_t3_tip';
Transform616 := TTransformNode.Create;
Transform616.Translation := Vector3(-0.0002,-0.1156,1.1623);
Shape617 := TShapeNode.Create;
Shape617 := Shape11;
{ .AddChild }
Transform616.AddChildren([Shape617]);
{ .AddChildren }
HAnimSite615.AddChildren([Transform616]);
{ .AddChildren }
HAnimSegment611.AddChildren([HAnimSite615]);
{ .AddChildren }
HAnimJoint610.AddChildren([HAnimSegment611]);
HAnimJoint618 := THAnimJointNode.Create;
HAnimJoint618.NameField := 't2';
HAnimJoint618.Center := Vector3(-0.0002,-0.1157,1.1871);
HAnimJoint618.SetUlimit([0,0,0]);
HAnimJoint618.SetLlimit([0,0,0]);
HAnimSegment619 := THAnimSegmentNode.Create;
HAnimSegment619.NameField := 'SEGMENT_FOR_t2';
TouchSensor620 := TTouchSensorNode.Create;
TouchSensor620.Description := 'joint t2 segment SEGMENT_FOR_t2';
{ .AddChildren }
HAnimSegment619.AddChildren([TouchSensor620]);
Transform621 := TTransformNode.Create;
Transform621.Translation := Vector3(-0.0002,-0.1157,1.1871);
Shape622 := TShapeNode.Create;
Shape622 := Shape16;
{ .AddChild }
Transform621.AddChildren([Shape622]);
{ .AddChildren }
HAnimSegment619.AddChildren([Transform621]);
HAnimSite623 := THAnimSiteNode.Create;
HAnimSite623.NameField := 'SEGMENT_FOR_t2_tip';
Transform624 := TTransformNode.Create;
Transform624.Translation := Vector3(-0.0002,-0.1157,1.1871);
Shape625 := TShapeNode.Create;
Shape625 := Shape11;
{ .AddChild }
Transform624.AddChildren([Shape625]);
{ .AddChildren }
HAnimSite623.AddChildren([Transform624]);
{ .AddChildren }
HAnimSegment619.AddChildren([HAnimSite623]);
{ .AddChildren }
HAnimJoint618.AddChildren([HAnimSegment619]);
HAnimJoint626 := THAnimJointNode.Create;
HAnimJoint626.NameField := 't1';
HAnimJoint626.Center := Vector3(-0.0002,-0.1156,1.2109);
HAnimJoint626.SetUlimit([0,0,0]);
HAnimJoint626.SetLlimit([0,0,0]);
HAnimSegment627 := THAnimSegmentNode.Create;
HAnimSegment627.NameField := 'SEGMENT_FOR_t1';
TouchSensor628 := TTouchSensorNode.Create;
TouchSensor628.Description := 'joint t1 segment SEGMENT_FOR_t1';
{ .AddChildren }
HAnimSegment627.AddChildren([TouchSensor628]);
Transform629 := TTransformNode.Create;
Transform629.Translation := Vector3(-0.0002,-0.1156,1.2109);
Shape630 := TShapeNode.Create;
Shape630 := Shape16;
{ .AddChild }
Transform629.AddChildren([Shape630]);
{ .AddChildren }
HAnimSegment627.AddChildren([Transform629]);
HAnimSite631 := THAnimSiteNode.Create;
HAnimSite631.NameField := 'SEGMENT_FOR_t1_tip';
Transform632 := TTransformNode.Create;
Transform632.Translation := Vector3(-0.0002,-0.1156,1.2109);
Shape633 := TShapeNode.Create;
Shape633 := Shape11;
{ .AddChild }
Transform632.AddChildren([Shape633]);
{ .AddChildren }
HAnimSite631.AddChildren([Transform632]);
{ .AddChildren }
HAnimSegment627.AddChildren([HAnimSite631]);
{ .AddChildren }
HAnimJoint626.AddChildren([HAnimSegment627]);
HAnimJoint634 := THAnimJointNode.Create;
HAnimJoint634.NameField := 'c7';
HAnimJoint634.Center := Vector3(-0.0002,-0.1169,1.2368);
HAnimJoint634.SetUlimit([0,0,0]);
HAnimJoint634.SetLlimit([0,0,0]);
HAnimSegment635 := THAnimSegmentNode.Create;
HAnimSegment635.NameField := 'SEGMENT_FOR_c7';
TouchSensor636 := TTouchSensorNode.Create;
TouchSensor636.Description := 'joint c7 segment SEGMENT_FOR_c7';
{ .AddChildren }
HAnimSegment635.AddChildren([TouchSensor636]);
Transform637 := TTransformNode.Create;
Transform637.Translation := Vector3(-0.0002,-0.1169,1.2368);
Shape638 := TShapeNode.Create;
Shape638 := Shape16;
{ .AddChild }
Transform637.AddChildren([Shape638]);
{ .AddChildren }
HAnimSegment635.AddChildren([Transform637]);
HAnimSite639 := THAnimSiteNode.Create;
HAnimSite639.NameField := 'SEGMENT_FOR_c7_tip';
Transform640 := TTransformNode.Create;
Transform640.Translation := Vector3(-0.0002,-0.1169,1.2368);
Shape641 := TShapeNode.Create;
Shape641 := Shape11;
{ .AddChild }
Transform640.AddChildren([Shape641]);
{ .AddChildren }
HAnimSite639.AddChildren([Transform640]);
{ .AddChildren }
HAnimSegment635.AddChildren([HAnimSite639]);
{ .AddChildren }
HAnimJoint634.AddChildren([HAnimSegment635]);
HAnimJoint642 := THAnimJointNode.Create;
HAnimJoint642.NameField := 'c6';
HAnimJoint642.Center := Vector3(-0.0002,-0.1169,1.249);
HAnimJoint642.SetUlimit([0,0,0]);
HAnimJoint642.SetLlimit([0,0,0]);
HAnimSegment643 := THAnimSegmentNode.Create;
HAnimSegment643.NameField := 'SEGMENT_FOR_c6';
TouchSensor644 := TTouchSensorNode.Create;
TouchSensor644.Description := 'joint c6 segment SEGMENT_FOR_c6';
{ .AddChildren }
HAnimSegment643.AddChildren([TouchSensor644]);
Transform645 := TTransformNode.Create;
Transform645.Translation := Vector3(-0.0002,-0.1169,1.249);
Shape646 := TShapeNode.Create;
Shape646 := Shape16;
{ .AddChild }
Transform645.AddChildren([Shape646]);
{ .AddChildren }
HAnimSegment643.AddChildren([Transform645]);
HAnimSite647 := THAnimSiteNode.Create;
HAnimSite647.NameField := 'SEGMENT_FOR_c6_tip';
Transform648 := TTransformNode.Create;
Transform648.Translation := Vector3(-0.0002,-0.1169,1.249);
Shape649 := TShapeNode.Create;
Shape649 := Shape11;
{ .AddChild }
Transform648.AddChildren([Shape649]);
{ .AddChildren }
HAnimSite647.AddChildren([Transform648]);
{ .AddChildren }
HAnimSegment643.AddChildren([HAnimSite647]);
{ .AddChildren }
HAnimJoint642.AddChildren([HAnimSegment643]);
HAnimJoint650 := THAnimJointNode.Create;
HAnimJoint650.NameField := 'c5';
HAnimJoint650.Center := Vector3(-0.0002,-0.1169,1.2613);
HAnimJoint650.SetUlimit([0,0,0]);
HAnimJoint650.SetLlimit([0,0,0]);
HAnimSegment651 := THAnimSegmentNode.Create;
HAnimSegment651.NameField := 'SEGMENT_FOR_c5';
TouchSensor652 := TTouchSensorNode.Create;
TouchSensor652.Description := 'joint c5 segment SEGMENT_FOR_c5';
{ .AddChildren }
HAnimSegment651.AddChildren([TouchSensor652]);
Transform653 := TTransformNode.Create;
Transform653.Translation := Vector3(-0.0002,-0.1169,1.2613);
Shape654 := TShapeNode.Create;
Shape654 := Shape16;
{ .AddChild }
Transform653.AddChildren([Shape654]);
{ .AddChildren }
HAnimSegment651.AddChildren([Transform653]);
HAnimSite655 := THAnimSiteNode.Create;
HAnimSite655.NameField := 'SEGMENT_FOR_c5_tip';
Transform656 := TTransformNode.Create;
Transform656.Translation := Vector3(-0.0002,-0.1169,1.2613);
Shape657 := TShapeNode.Create;
Shape657 := Shape11;
{ .AddChild }
Transform656.AddChildren([Shape657]);
{ .AddChildren }
HAnimSite655.AddChildren([Transform656]);
{ .AddChildren }
HAnimSegment651.AddChildren([HAnimSite655]);
{ .AddChildren }
HAnimJoint650.AddChildren([HAnimSegment651]);
HAnimJoint658 := THAnimJointNode.Create;
HAnimJoint658.NameField := 'c4';
HAnimJoint658.Center := Vector3(-0.0002,-0.1169,1.2737);
HAnimJoint658.SetUlimit([0,0,0]);
HAnimJoint658.SetLlimit([0,0,0]);
HAnimSegment659 := THAnimSegmentNode.Create;
HAnimSegment659.NameField := 'SEGMENT_FOR_c4';
TouchSensor660 := TTouchSensorNode.Create;
TouchSensor660.Description := 'joint c4 segment SEGMENT_FOR_c4';
{ .AddChildren }
HAnimSegment659.AddChildren([TouchSensor660]);
Transform661 := TTransformNode.Create;
Transform661.Translation := Vector3(-0.0002,-0.1169,1.2737);
Shape662 := TShapeNode.Create;
Shape662 := Shape16;
{ .AddChild }
Transform661.AddChildren([Shape662]);
{ .AddChildren }
HAnimSegment659.AddChildren([Transform661]);
HAnimSite663 := THAnimSiteNode.Create;
HAnimSite663.NameField := 'SEGMENT_FOR_c4_tip';
Transform664 := TTransformNode.Create;
Transform664.Translation := Vector3(-0.0002,-0.1169,1.2737);
Shape665 := TShapeNode.Create;
Shape665 := Shape11;
{ .AddChild }
Transform664.AddChildren([Shape665]);
{ .AddChildren }
HAnimSite663.AddChildren([Transform664]);
{ .AddChildren }
HAnimSegment659.AddChildren([HAnimSite663]);
{ .AddChildren }
HAnimJoint658.AddChildren([HAnimSegment659]);
HAnimJoint666 := THAnimJointNode.Create;
HAnimJoint666.NameField := 'c3';
HAnimJoint666.Center := Vector3(-0.0002,-0.1169,1.2865);
HAnimJoint666.SetUlimit([0,0,0]);
HAnimJoint666.SetLlimit([0,0,0]);
HAnimSegment667 := THAnimSegmentNode.Create;
HAnimSegment667.NameField := 'SEGMENT_FOR_c3';
TouchSensor668 := TTouchSensorNode.Create;
TouchSensor668.Description := 'joint c3 segment SEGMENT_FOR_c3';
{ .AddChildren }
HAnimSegment667.AddChildren([TouchSensor668]);
Transform669 := TTransformNode.Create;
Transform669.Translation := Vector3(-0.0002,-0.1169,1.2865);
Shape670 := TShapeNode.Create;
Shape670 := Shape16;
{ .AddChild }
Transform669.AddChildren([Shape670]);
{ .AddChildren }
HAnimSegment667.AddChildren([Transform669]);
HAnimSite671 := THAnimSiteNode.Create;
HAnimSite671.NameField := 'SEGMENT_FOR_c3_tip';
Transform672 := TTransformNode.Create;
Transform672.Translation := Vector3(-0.0002,-0.1169,1.2865);
Shape673 := TShapeNode.Create;
Shape673 := Shape11;
{ .AddChild }
Transform672.AddChildren([Shape673]);
{ .AddChildren }
HAnimSite671.AddChildren([Transform672]);
{ .AddChildren }
HAnimSegment667.AddChildren([HAnimSite671]);
{ .AddChildren }
HAnimJoint666.AddChildren([HAnimSegment667]);
HAnimJoint674 := THAnimJointNode.Create;
HAnimJoint674.NameField := 'c2';
HAnimJoint674.Center := Vector3(-0.0002,-0.1169,1.2982);
HAnimJoint674.SetUlimit([0,0,0]);
HAnimJoint674.SetLlimit([0,0,0]);
HAnimSegment675 := THAnimSegmentNode.Create;
HAnimSegment675.NameField := 'SEGMENT_FOR_c2';
TouchSensor676 := TTouchSensorNode.Create;
TouchSensor676.Description := 'joint c2 segment SEGMENT_FOR_c2';
{ .AddChildren }
HAnimSegment675.AddChildren([TouchSensor676]);
Transform677 := TTransformNode.Create;
Transform677.Translation := Vector3(-0.0002,-0.1169,1.2982);
Shape678 := TShapeNode.Create;
Shape678 := Shape16;
{ .AddChild }
Transform677.AddChildren([Shape678]);
{ .AddChildren }
HAnimSegment675.AddChildren([Transform677]);
HAnimSite679 := THAnimSiteNode.Create;
HAnimSite679.NameField := 'SEGMENT_FOR_c2_tip';
Transform680 := TTransformNode.Create;
Transform680.Translation := Vector3(-0.0002,-0.1169,1.2982);
Shape681 := TShapeNode.Create;
Shape681 := Shape11;
{ .AddChild }
Transform680.AddChildren([Shape681]);
{ .AddChildren }
HAnimSite679.AddChildren([Transform680]);
{ .AddChildren }
HAnimSegment675.AddChildren([HAnimSite679]);
{ .AddChildren }
HAnimJoint674.AddChildren([HAnimSegment675]);
HAnimJoint682 := THAnimJointNode.Create;
HAnimJoint682.NameField := 'c1';
HAnimJoint682.Center := Vector3(-0.0002,-0.1169,1.3099);
HAnimJoint682.SetUlimit([0,0,0]);
HAnimJoint682.SetLlimit([0,0,0]);
HAnimSegment683 := THAnimSegmentNode.Create;
HAnimSegment683.NameField := 'SEGMENT_FOR_c1';
TouchSensor684 := TTouchSensorNode.Create;
TouchSensor684.Description := 'joint c1 segment SEGMENT_FOR_c1';
{ .AddChildren }
HAnimSegment683.AddChildren([TouchSensor684]);
Transform685 := TTransformNode.Create;
Transform685.Translation := Vector3(-0.0002,-0.1169,1.3099);
Shape686 := TShapeNode.Create;
Shape686 := Shape16;
{ .AddChild }
Transform685.AddChildren([Shape686]);
{ .AddChildren }
HAnimSegment683.AddChildren([Transform685]);
HAnimSite687 := THAnimSiteNode.Create;
HAnimSite687.NameField := 'SEGMENT_FOR_c1_tip';
Transform688 := TTransformNode.Create;
Transform688.Translation := Vector3(-0.0002,-0.1169,1.3099);
Shape689 := TShapeNode.Create;
Shape689 := Shape11;
{ .AddChild }
Transform688.AddChildren([Shape689]);
{ .AddChildren }
HAnimSite687.AddChildren([Transform688]);
{ .AddChildren }
HAnimSegment683.AddChildren([HAnimSite687]);
{ .AddChildren }
HAnimJoint682.AddChildren([HAnimSegment683]);
HAnimJoint690 := THAnimJointNode.Create;
HAnimJoint690.NameField := 'skull';
HAnimJoint690.Center := Vector3(-0.0002,-0.1173,1.3041);
HAnimJoint690.SetUlimit([0,0,0]);
HAnimJoint690.SetLlimit([0,0,0]);
HAnimSegment691 := THAnimSegmentNode.Create;
HAnimSegment691.NameField := 'SEGMENT_FOR_skull';
TouchSensor692 := TTouchSensorNode.Create;
TouchSensor692.Description := 'joint skull segment SEGMENT_FOR_skull';
{ .AddChildren }
HAnimSegment691.AddChildren([TouchSensor692]);
Transform693 := TTransformNode.Create;
Transform693.Translation := Vector3(-0.0002,-0.1173,1.3041);
Shape694 := TShapeNode.Create;
Shape694 := Shape16;
{ .AddChild }
Transform693.AddChildren([Shape694]);
{ .AddChildren }
HAnimSegment691.AddChildren([Transform693]);
HAnimSite695 := THAnimSiteNode.Create;
HAnimSite695.NameField := 'SEGMENT_FOR_skull_tip';
Transform696 := TTransformNode.Create;
Transform696.Translation := Vector3(-0.0002,-0.1173,1.3041);
Shape697 := TShapeNode.Create;
Shape697 := Shape11;
{ .AddChild }
Transform696.AddChildren([Shape697]);
{ .AddChildren }
HAnimSite695.AddChildren([Transform696]);
{ .AddChildren }
HAnimSegment691.AddChildren([HAnimSite695]);
{ .AddChildren }
HAnimJoint690.AddChildren([HAnimSegment691]);
HAnimJoint698 := THAnimJointNode.Create;
HAnimJoint698.NameField := 'l_eyelid';
HAnimJoint698.Center := Vector3(0.0503,-0.0689,1.4157);
HAnimJoint698.SetUlimit([0,0,0]);
HAnimJoint698.SetLlimit([0,0,0]);
HAnimSegment699 := THAnimSegmentNode.Create;
HAnimSegment699.NameField := 'SEGMENT_FOR_l_eyelid';
TouchSensor700 := TTouchSensorNode.Create;
TouchSensor700.Description := 'joint l_eyelid segment SEGMENT_FOR_l_eyelid';
{ .AddChildren }
HAnimSegment699.AddChildren([TouchSensor700]);
Transform701 := TTransformNode.Create;
Transform701.Translation := Vector3(0.0503,-0.0689,1.4157);
Shape702 := TShapeNode.Create;
Shape702 := Shape16;
{ .AddChild }
Transform701.AddChildren([Shape702]);
{ .AddChildren }
HAnimSegment699.AddChildren([Transform701]);
HAnimSite703 := THAnimSiteNode.Create;
HAnimSite703.NameField := 'SEGMENT_FOR_l_eyelid_tip';
Transform704 := TTransformNode.Create;
Transform704.Translation := Vector3(0.0503,-0.0689,1.4157);
Shape705 := TShapeNode.Create;
Shape705 := Shape11;
{ .AddChild }
Transform704.AddChildren([Shape705]);
{ .AddChildren }
HAnimSite703.AddChildren([Transform704]);
{ .AddChildren }
HAnimSegment699.AddChildren([HAnimSite703]);
{ .AddChildren }
HAnimJoint698.AddChildren([HAnimSegment699]);
{ .AddChildren }
HAnimJoint690.AddChildren([HAnimJoint698]);
HAnimJoint706 := THAnimJointNode.Create;
HAnimJoint706.NameField := 'r_eyelid';
HAnimJoint706.Center := Vector3(-0.0507,-0.0689,1.4157);
HAnimJoint706.SetUlimit([0,0,0]);
HAnimJoint706.SetLlimit([0,0,0]);
HAnimSegment707 := THAnimSegmentNode.Create;
HAnimSegment707.NameField := 'SEGMENT_FOR_r_eyelid';
TouchSensor708 := TTouchSensorNode.Create;
TouchSensor708.Description := 'joint r_eyelid segment SEGMENT_FOR_r_eyelid';
{ .AddChildren }
HAnimSegment707.AddChildren([TouchSensor708]);
Transform709 := TTransformNode.Create;
Transform709.Translation := Vector3(-0.0507,-0.0689,1.4157);
Shape710 := TShapeNode.Create;
Shape710 := Shape16;
{ .AddChild }
Transform709.AddChildren([Shape710]);
{ .AddChildren }
HAnimSegment707.AddChildren([Transform709]);
HAnimSite711 := THAnimSiteNode.Create;
HAnimSite711.NameField := 'SEGMENT_FOR_r_eyelid_tip';
Transform712 := TTransformNode.Create;
Transform712.Translation := Vector3(-0.0507,-0.0689,1.4157);
Shape713 := TShapeNode.Create;
Shape713 := Shape11;
{ .AddChild }
Transform712.AddChildren([Shape713]);
{ .AddChildren }
HAnimSite711.AddChildren([Transform712]);
{ .AddChildren }
HAnimSegment707.AddChildren([HAnimSite711]);
{ .AddChildren }
HAnimJoint706.AddChildren([HAnimSegment707]);
{ .AddChildren }
HAnimJoint690.AddChildren([HAnimJoint706]);
HAnimJoint714 := THAnimJointNode.Create;
HAnimJoint714.NameField := 'l_eyeball';
HAnimJoint714.Center := Vector3(0.0479,-0.0188,1.3963);
HAnimJoint714.SetUlimit([0,0,0]);
HAnimJoint714.SetLlimit([0,0,0]);
HAnimSegment715 := THAnimSegmentNode.Create;
HAnimSegment715.NameField := 'SEGMENT_FOR_l_eyeball';
TouchSensor716 := TTouchSensorNode.Create;
TouchSensor716.Description := 'joint l_eyeball segment SEGMENT_FOR_l_eyeball';
{ .AddChildren }
HAnimSegment715.AddChildren([TouchSensor716]);
Transform717 := TTransformNode.Create;
Transform717.Translation := Vector3(0.0479,-0.0188,1.3963);
Shape718 := TShapeNode.Create;
Shape718 := Shape16;
{ .AddChild }
Transform717.AddChildren([Shape718]);
{ .AddChildren }
HAnimSegment715.AddChildren([Transform717]);
HAnimSite719 := THAnimSiteNode.Create;
HAnimSite719.NameField := 'SEGMENT_FOR_l_eyeball_tip';
Transform720 := TTransformNode.Create;
Transform720.Translation := Vector3(0.0479,-0.0188,1.3963);
Shape721 := TShapeNode.Create;
Shape721 := Shape11;
{ .AddChild }
Transform720.AddChildren([Shape721]);
{ .AddChildren }
HAnimSite719.AddChildren([Transform720]);
{ .AddChildren }
HAnimSegment715.AddChildren([HAnimSite719]);
{ .AddChildren }
HAnimJoint714.AddChildren([HAnimSegment715]);
{ .AddChildren }
HAnimJoint690.AddChildren([HAnimJoint714]);
HAnimJoint722 := THAnimJointNode.Create;
HAnimJoint722.NameField := 'r_eyeball';
HAnimJoint722.Center := Vector3(-0.0483,-0.0188,1.3963);
HAnimJoint722.SetUlimit([0,0,0]);
HAnimJoint722.SetLlimit([0,0,0]);
HAnimSegment723 := THAnimSegmentNode.Create;
HAnimSegment723.NameField := 'SEGMENT_FOR_r_eyeball';
TouchSensor724 := TTouchSensorNode.Create;
TouchSensor724.Description := 'joint r_eyeball segment SEGMENT_FOR_r_eyeball';
{ .AddChildren }
HAnimSegment723.AddChildren([TouchSensor724]);
Transform725 := TTransformNode.Create;
Transform725.Translation := Vector3(-0.0483,-0.0188,1.3963);
Shape726 := TShapeNode.Create;
Shape726 := Shape16;
{ .AddChild }
Transform725.AddChildren([Shape726]);
{ .AddChildren }
HAnimSegment723.AddChildren([Transform725]);
HAnimSite727 := THAnimSiteNode.Create;
HAnimSite727.NameField := 'SEGMENT_FOR_r_eyeball_tip';
Transform728 := TTransformNode.Create;
Transform728.Translation := Vector3(-0.0483,-0.0188,1.3963);
Shape729 := TShapeNode.Create;
Shape729 := Shape11;
{ .AddChild }
Transform728.AddChildren([Shape729]);
{ .AddChildren }
HAnimSite727.AddChildren([Transform728]);
{ .AddChildren }
HAnimSegment723.AddChildren([HAnimSite727]);
{ .AddChildren }
HAnimJoint722.AddChildren([HAnimSegment723]);
{ .AddChildren }
HAnimJoint690.AddChildren([HAnimJoint722]);
HAnimJoint730 := THAnimJointNode.Create;
HAnimJoint730.NameField := 'l_eyebrow';
HAnimJoint730.Center := Vector3(0.0216,0.0051,1.4053);
HAnimJoint730.SetUlimit([0,0,0]);
HAnimJoint730.SetLlimit([0,0,0]);
HAnimSegment731 := THAnimSegmentNode.Create;
HAnimSegment731.NameField := 'SEGMENT_FOR_l_eyebrow';
TouchSensor732 := TTouchSensorNode.Create;
TouchSensor732.Description := 'joint l_eyebrow segment SEGMENT_FOR_l_eyebrow';
{ .AddChildren }
HAnimSegment731.AddChildren([TouchSensor732]);
Transform733 := TTransformNode.Create;
Transform733.Translation := Vector3(0.0216,0.0051,1.4053);
Shape734 := TShapeNode.Create;
Shape734 := Shape16;
{ .AddChild }
Transform733.AddChildren([Shape734]);
{ .AddChildren }
HAnimSegment731.AddChildren([Transform733]);
HAnimSite735 := THAnimSiteNode.Create;
HAnimSite735.NameField := 'SEGMENT_FOR_l_eyebrow_tip';
Transform736 := TTransformNode.Create;
Transform736.Translation := Vector3(0.0216,0.0051,1.4053);
Shape737 := TShapeNode.Create;
Shape737 := Shape11;
{ .AddChild }
Transform736.AddChildren([Shape737]);
{ .AddChildren }
HAnimSite735.AddChildren([Transform736]);
{ .AddChildren }
HAnimSegment731.AddChildren([HAnimSite735]);
{ .AddChildren }
HAnimJoint730.AddChildren([HAnimSegment731]);
{ .AddChildren }
HAnimJoint690.AddChildren([HAnimJoint730]);
HAnimJoint738 := THAnimJointNode.Create;
HAnimJoint738.NameField := 'r_eyebrow';
HAnimJoint738.Center := Vector3(-0.0219,0.0051,1.4053);
HAnimJoint738.SetUlimit([0,0,0]);
HAnimJoint738.SetLlimit([0,0,0]);
HAnimSegment739 := THAnimSegmentNode.Create;
HAnimSegment739.NameField := 'SEGMENT_FOR_r_eyebrow';
TouchSensor740 := TTouchSensorNode.Create;
TouchSensor740.Description := 'joint r_eyebrow segment SEGMENT_FOR_r_eyebrow';
{ .AddChildren }
HAnimSegment739.AddChildren([TouchSensor740]);
Transform741 := TTransformNode.Create;
Transform741.Translation := Vector3(-0.0219,0.0051,1.4053);
Shape742 := TShapeNode.Create;
Shape742 := Shape16;
{ .AddChild }
Transform741.AddChildren([Shape742]);
{ .AddChildren }
HAnimSegment739.AddChildren([Transform741]);
HAnimSite743 := THAnimSiteNode.Create;
HAnimSite743.NameField := 'SEGMENT_FOR_r_eyebrow_tip';
Transform744 := TTransformNode.Create;
Transform744.Translation := Vector3(-0.0219,0.0051,1.4053);
Shape745 := TShapeNode.Create;
Shape745 := Shape11;
{ .AddChild }
Transform744.AddChildren([Shape745]);
{ .AddChildren }
HAnimSite743.AddChildren([Transform744]);
{ .AddChildren }
HAnimSegment739.AddChildren([HAnimSite743]);
{ .AddChildren }
HAnimJoint738.AddChildren([HAnimSegment739]);
{ .AddChildren }
HAnimJoint690.AddChildren([HAnimJoint738]);
HAnimJoint746 := THAnimJointNode.Create;
HAnimJoint746.NameField := 'jaw';
HAnimJoint746.Center := Vector3(-0.0002,-0.0865,1.3043);
HAnimJoint746.SetUlimit([0,0,0]);
HAnimJoint746.SetLlimit([0,0,0]);
HAnimSegment747 := THAnimSegmentNode.Create;
HAnimSegment747.NameField := 'SEGMENT_FOR_jaw';
TouchSensor748 := TTouchSensorNode.Create;
TouchSensor748.Description := 'joint jaw segment SEGMENT_FOR_jaw';
{ .AddChildren }
HAnimSegment747.AddChildren([TouchSensor748]);
Transform749 := TTransformNode.Create;
Transform749.Translation := Vector3(-0.0002,-0.0865,1.3043);
Shape750 := TShapeNode.Create;
Shape750 := Shape16;
{ .AddChild }
Transform749.AddChildren([Shape750]);
{ .AddChildren }
HAnimSegment747.AddChildren([Transform749]);
HAnimSite751 := THAnimSiteNode.Create;
HAnimSite751.NameField := 'SEGMENT_FOR_jaw_tip';
Transform752 := TTransformNode.Create;
Transform752.Translation := Vector3(-0.0002,-0.0865,1.3043);
Shape753 := TShapeNode.Create;
Shape753 := Shape11;
{ .AddChild }
Transform752.AddChildren([Shape753]);
{ .AddChildren }
HAnimSite751.AddChildren([Transform752]);
{ .AddChildren }
HAnimSegment747.AddChildren([HAnimSite751]);
{ .AddChildren }
HAnimJoint746.AddChildren([HAnimSegment747]);
{ .AddChildren }
HAnimJoint690.AddChildren([HAnimJoint746]);
{ .AddChildren }
HAnimJoint682.AddChildren([HAnimJoint690]);
{ .AddChildren }
HAnimJoint674.AddChildren([HAnimJoint682]);
{ .AddChildren }
HAnimJoint666.AddChildren([HAnimJoint674]);
{ .AddChildren }
HAnimJoint658.AddChildren([HAnimJoint666]);
{ .AddChildren }
HAnimJoint650.AddChildren([HAnimJoint658]);
{ .AddChildren }
HAnimJoint642.AddChildren([HAnimJoint650]);
{ .AddChildren }
HAnimJoint634.AddChildren([HAnimJoint642]);
{ .AddChildren }
HAnimJoint626.AddChildren([HAnimJoint634]);
HAnimJoint754 := THAnimJointNode.Create;
HAnimJoint754.NameField := 'l_clavicle';
HAnimJoint754.Center := Vector3(0.1228,-0.1148,1.1833);
HAnimJoint754.SetUlimit([0,0,0]);
HAnimJoint754.SetLlimit([0,0,0]);
HAnimSegment755 := THAnimSegmentNode.Create;
HAnimSegment755.NameField := 'SEGMENT_FOR_l_clavicle';
TouchSensor756 := TTouchSensorNode.Create;
TouchSensor756.Description := 'joint l_clavicle segment SEGMENT_FOR_l_clavicle';
{ .AddChildren }
HAnimSegment755.AddChildren([TouchSensor756]);
Transform757 := TTransformNode.Create;
Transform757.Translation := Vector3(0.1228,-0.1148,1.1833);
Shape758 := TShapeNode.Create;
Shape758 := Shape16;
{ .AddChild }
Transform757.AddChildren([Shape758]);
{ .AddChildren }
HAnimSegment755.AddChildren([Transform757]);
HAnimSite759 := THAnimSiteNode.Create;
HAnimSite759.NameField := 'SEGMENT_FOR_l_clavicle_tip';
Transform760 := TTransformNode.Create;
Transform760.Translation := Vector3(0.1228,-0.1148,1.1833);
Shape761 := TShapeNode.Create;
Shape761 := Shape11;
{ .AddChild }
Transform760.AddChildren([Shape761]);
{ .AddChildren }
HAnimSite759.AddChildren([Transform760]);
{ .AddChildren }
HAnimSegment755.AddChildren([HAnimSite759]);
{ .AddChildren }
HAnimJoint754.AddChildren([HAnimSegment755]);
HAnimJoint762 := THAnimJointNode.Create;
HAnimJoint762.NameField := 'l_scapula';
HAnimJoint762.Center := Vector3(0.0383,-0.1157,1.2001);
HAnimJoint762.SetUlimit([0,0,0]);
HAnimJoint762.SetLlimit([0,0,0]);
HAnimSegment763 := THAnimSegmentNode.Create;
HAnimSegment763.NameField := 'SEGMENT_FOR_l_scapula';
TouchSensor764 := TTouchSensorNode.Create;
TouchSensor764.Description := 'joint l_scapula segment SEGMENT_FOR_l_scapula';
{ .AddChildren }
HAnimSegment763.AddChildren([TouchSensor764]);
Transform765 := TTransformNode.Create;
Transform765.Translation := Vector3(0.0383,-0.1157,1.2001);
Shape766 := TShapeNode.Create;
Shape766 := Shape16;
{ .AddChild }
Transform765.AddChildren([Shape766]);
{ .AddChildren }
HAnimSegment763.AddChildren([Transform765]);
HAnimSite767 := THAnimSiteNode.Create;
HAnimSite767.NameField := 'SEGMENT_FOR_l_scapula_tip';
Transform768 := TTransformNode.Create;
Transform768.Translation := Vector3(0.0383,-0.1157,1.2001);
Shape769 := TShapeNode.Create;
Shape769 := Shape11;
{ .AddChild }
Transform768.AddChildren([Shape769]);
{ .AddChildren }
HAnimSite767.AddChildren([Transform768]);
{ .AddChildren }
HAnimSegment763.AddChildren([HAnimSite767]);
{ .AddChildren }
HAnimJoint762.AddChildren([HAnimSegment763]);
HAnimJoint770 := THAnimJointNode.Create;
HAnimJoint770.NameField := 'l_upperarm';
HAnimJoint770.Center := Vector3(0.1649,-0.1051,1.17);
HAnimJoint770.SetUlimit([0,0,0]);
HAnimJoint770.SetLlimit([0,0,0]);
HAnimSegment771 := THAnimSegmentNode.Create;
HAnimSegment771.NameField := 'SEGMENT_FOR_l_upperarm';
TouchSensor772 := TTouchSensorNode.Create;
TouchSensor772.Description := 'joint l_upperarm segment SEGMENT_FOR_l_upperarm';
{ .AddChildren }
HAnimSegment771.AddChildren([TouchSensor772]);
Transform773 := TTransformNode.Create;
Transform773.Translation := Vector3(0.1649,-0.1051,1.17);
Shape774 := TShapeNode.Create;
Shape774 := Shape16;
{ .AddChild }
Transform773.AddChildren([Shape774]);
{ .AddChildren }
HAnimSegment771.AddChildren([Transform773]);
HAnimSite775 := THAnimSiteNode.Create;
HAnimSite775.NameField := 'SEGMENT_FOR_l_upperarm_tip';
Transform776 := TTransformNode.Create;
Transform776.Translation := Vector3(0.1649,-0.1051,1.17);
Shape777 := TShapeNode.Create;
Shape777 := Shape11;
{ .AddChild }
Transform776.AddChildren([Shape777]);
{ .AddChildren }
HAnimSite775.AddChildren([Transform776]);
{ .AddChildren }
HAnimSegment771.AddChildren([HAnimSite775]);
{ .AddChildren }
HAnimJoint770.AddChildren([HAnimSegment771]);
HAnimJoint778 := THAnimJointNode.Create;
HAnimJoint778.NameField := 'l_forearm';
HAnimJoint778.Center := Vector3(0.1819,-0.1075,0.9202);
HAnimJoint778.SetUlimit([0,0,0]);
HAnimJoint778.SetLlimit([0,0,0]);
HAnimSegment779 := THAnimSegmentNode.Create;
HAnimSegment779.NameField := 'SEGMENT_FOR_l_forearm';
TouchSensor780 := TTouchSensorNode.Create;
TouchSensor780.Description := 'joint l_forearm segment SEGMENT_FOR_l_forearm';
{ .AddChildren }
HAnimSegment779.AddChildren([TouchSensor780]);
Transform781 := TTransformNode.Create;
Transform781.Translation := Vector3(0.1819,-0.1075,0.9202);
Shape782 := TShapeNode.Create;
Shape782 := Shape16;
{ .AddChild }
Transform781.AddChildren([Shape782]);
{ .AddChildren }
HAnimSegment779.AddChildren([Transform781]);
HAnimSite783 := THAnimSiteNode.Create;
HAnimSite783.NameField := 'SEGMENT_FOR_l_forearm_tip';
Transform784 := TTransformNode.Create;
Transform784.Translation := Vector3(0.1819,-0.1075,0.9202);
Shape785 := TShapeNode.Create;
Shape785 := Shape11;
{ .AddChild }
Transform784.AddChildren([Shape785]);
{ .AddChildren }
HAnimSite783.AddChildren([Transform784]);
{ .AddChildren }
HAnimSegment779.AddChildren([HAnimSite783]);
{ .AddChildren }
HAnimJoint778.AddChildren([HAnimSegment779]);
HAnimJoint786 := THAnimJointNode.Create;
HAnimJoint786.NameField := 'l_carpal';
HAnimJoint786.Center := Vector3(0.1818,-0.1069,0.7157);
HAnimJoint786.SetUlimit([0,0,0]);
HAnimJoint786.SetLlimit([0,0,0]);
HAnimSegment787 := THAnimSegmentNode.Create;
HAnimSegment787.NameField := 'SEGMENT_FOR_l_carpal';
TouchSensor788 := TTouchSensorNode.Create;
TouchSensor788.Description := 'joint l_carpal segment SEGMENT_FOR_l_carpal';
{ .AddChildren }
HAnimSegment787.AddChildren([TouchSensor788]);
Transform789 := TTransformNode.Create;
Transform789.Translation := Vector3(0.1818,-0.1069,0.7157);
Shape790 := TShapeNode.Create;
Shape790 := Shape16;
{ .AddChild }
Transform789.AddChildren([Shape790]);
{ .AddChildren }
HAnimSegment787.AddChildren([Transform789]);
HAnimSite791 := THAnimSiteNode.Create;
HAnimSite791.NameField := 'SEGMENT_FOR_l_carpal_tip';
Transform792 := TTransformNode.Create;
Transform792.Translation := Vector3(0.1818,-0.1069,0.7157);
Shape793 := TShapeNode.Create;
Shape793 := Shape11;
{ .AddChild }
Transform792.AddChildren([Shape793]);
{ .AddChildren }
HAnimSite791.AddChildren([Transform792]);
{ .AddChildren }
HAnimSegment787.AddChildren([HAnimSite791]);
{ .AddChildren }
HAnimJoint786.AddChildren([HAnimSegment787]);
HAnimJoint794 := THAnimJointNode.Create;
HAnimJoint794.NameField := 'l_trapezium';
HAnimJoint794.Center := Vector3(0.1811,-0.0826,0.6975);
HAnimJoint794.SetUlimit([0,0,0]);
HAnimJoint794.SetLlimit([0,0,0]);
HAnimSegment795 := THAnimSegmentNode.Create;
HAnimSegment795.NameField := 'SEGMENT_FOR_l_trapezium';
TouchSensor796 := TTouchSensorNode.Create;
TouchSensor796.Description := 'joint l_trapezium segment SEGMENT_FOR_l_trapezium';
{ .AddChildren }
HAnimSegment795.AddChildren([TouchSensor796]);
Transform797 := TTransformNode.Create;
Transform797.Translation := Vector3(0.1811,-0.0826,0.6975);
Shape798 := TShapeNode.Create;
Shape798 := Shape16;
{ .AddChild }
Transform797.AddChildren([Shape798]);
{ .AddChildren }
HAnimSegment795.AddChildren([Transform797]);
HAnimSite799 := THAnimSiteNode.Create;
HAnimSite799.NameField := 'SEGMENT_FOR_l_trapezium_tip';
Transform800 := TTransformNode.Create;
Transform800.Translation := Vector3(0.1811,-0.0826,0.6975);
Shape801 := TShapeNode.Create;
Shape801 := Shape11;
{ .AddChild }
Transform800.AddChildren([Shape801]);
{ .AddChildren }
HAnimSite799.AddChildren([Transform800]);
{ .AddChildren }
HAnimSegment795.AddChildren([HAnimSite799]);
{ .AddChildren }
HAnimJoint794.AddChildren([HAnimSegment795]);
HAnimJoint802 := THAnimJointNode.Create;
HAnimJoint802.NameField := 'l_metacarpal_1';
HAnimJoint802.Center := Vector3(0.1803,-0.0759,0.684);
HAnimJoint802.SetUlimit([0,0,0]);
HAnimJoint802.SetLlimit([0,0,0]);
HAnimSegment803 := THAnimSegmentNode.Create;
HAnimSegment803.NameField := 'SEGMENT_FOR_l_metacarpal_1';
TouchSensor804 := TTouchSensorNode.Create;
TouchSensor804.Description := 'joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1';
{ .AddChildren }
HAnimSegment803.AddChildren([TouchSensor804]);
Transform805 := TTransformNode.Create;
Transform805.Translation := Vector3(0.1803,-0.0759,0.684);
Shape806 := TShapeNode.Create;
Shape806 := Shape16;
{ .AddChild }
Transform805.AddChildren([Shape806]);
{ .AddChildren }
HAnimSegment803.AddChildren([Transform805]);
HAnimSite807 := THAnimSiteNode.Create;
HAnimSite807.NameField := 'SEGMENT_FOR_l_metacarpal_1_tip';
Transform808 := TTransformNode.Create;
Transform808.Translation := Vector3(0.1803,-0.0759,0.684);
Shape809 := TShapeNode.Create;
Shape809 := Shape11;
{ .AddChild }
Transform808.AddChildren([Shape809]);
{ .AddChildren }
HAnimSite807.AddChildren([Transform808]);
{ .AddChildren }
HAnimSegment803.AddChildren([HAnimSite807]);
{ .AddChildren }
HAnimJoint802.AddChildren([HAnimSegment803]);
HAnimJoint810 := THAnimJointNode.Create;
HAnimJoint810.NameField := 'l_carpal_proximal_phalanx_1';
HAnimJoint810.Center := Vector3(0.1809,-0.0661,0.6642);
HAnimJoint810.SetUlimit([0,0,0]);
HAnimJoint810.SetLlimit([0,0,0]);
HAnimSegment811 := THAnimSegmentNode.Create;
HAnimSegment811.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_1';
TouchSensor812 := TTouchSensorNode.Create;
TouchSensor812.Description := 'joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1';
{ .AddChildren }
HAnimSegment811.AddChildren([TouchSensor812]);
Transform813 := TTransformNode.Create;
Transform813.Translation := Vector3(0.1809,-0.0661,0.6642);
Shape814 := TShapeNode.Create;
Shape814 := Shape16;
{ .AddChild }
Transform813.AddChildren([Shape814]);
{ .AddChildren }
HAnimSegment811.AddChildren([Transform813]);
HAnimSite815 := THAnimSiteNode.Create;
HAnimSite815.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip';
Transform816 := TTransformNode.Create;
Transform816.Translation := Vector3(0.1809,-0.0661,0.6642);
Shape817 := TShapeNode.Create;
Shape817 := Shape11;
{ .AddChild }
Transform816.AddChildren([Shape817]);
{ .AddChildren }
HAnimSite815.AddChildren([Transform816]);
{ .AddChildren }
HAnimSegment811.AddChildren([HAnimSite815]);
{ .AddChildren }
HAnimJoint810.AddChildren([HAnimSegment811]);
HAnimJoint818 := THAnimJointNode.Create;
HAnimJoint818.NameField := 'l_carpal_distal_phalanx_1';
HAnimJoint818.Center := Vector3(0.1825,-0.0522,0.6455);
HAnimJoint818.SetUlimit([0,0,0]);
HAnimJoint818.SetLlimit([0,0,0]);
HAnimSegment819 := THAnimSegmentNode.Create;
HAnimSegment819.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_1';
TouchSensor820 := TTouchSensorNode.Create;
TouchSensor820.Description := 'joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1';
{ .AddChildren }
HAnimSegment819.AddChildren([TouchSensor820]);
Transform821 := TTransformNode.Create;
Transform821.Translation := Vector3(0.1825,-0.0522,0.6455);
Shape822 := TShapeNode.Create;
Shape822 := Shape16;
{ .AddChild }
Transform821.AddChildren([Shape822]);
{ .AddChildren }
HAnimSegment819.AddChildren([Transform821]);
HAnimSite823 := THAnimSiteNode.Create;
HAnimSite823.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_1_tip';
Transform824 := TTransformNode.Create;
Transform824.Translation := Vector3(0.1825,-0.0522,0.6455);
Shape825 := TShapeNode.Create;
Shape825 := Shape11;
{ .AddChild }
Transform824.AddChildren([Shape825]);
{ .AddChildren }
HAnimSite823.AddChildren([Transform824]);
{ .AddChildren }
HAnimSegment819.AddChildren([HAnimSite823]);
{ .AddChildren }
HAnimJoint818.AddChildren([HAnimSegment819]);
{ .AddChildren }
HAnimJoint810.AddChildren([HAnimJoint818]);
{ .AddChildren }
HAnimJoint802.AddChildren([HAnimJoint810]);
{ .AddChildren }
HAnimJoint794.AddChildren([HAnimJoint802]);
{ .AddChildren }
HAnimJoint786.AddChildren([HAnimJoint794]);
HAnimJoint826 := THAnimJointNode.Create;
HAnimJoint826.NameField := 'l_trapezoid';
HAnimJoint826.Center := Vector3(0.1811,-0.0935,0.6984);
HAnimJoint826.SetUlimit([0,0,0]);
HAnimJoint826.SetLlimit([0,0,0]);
HAnimSegment827 := THAnimSegmentNode.Create;
HAnimSegment827.NameField := 'SEGMENT_FOR_l_trapezoid';
TouchSensor828 := TTouchSensorNode.Create;
TouchSensor828.Description := 'joint l_trapezoid segment SEGMENT_FOR_l_trapezoid';
{ .AddChildren }
HAnimSegment827.AddChildren([TouchSensor828]);
Transform829 := TTransformNode.Create;
Transform829.Translation := Vector3(0.1811,-0.0935,0.6984);
Shape830 := TShapeNode.Create;
Shape830 := Shape16;
{ .AddChild }
Transform829.AddChildren([Shape830]);
{ .AddChildren }
HAnimSegment827.AddChildren([Transform829]);
HAnimSite831 := THAnimSiteNode.Create;
HAnimSite831.NameField := 'SEGMENT_FOR_l_trapezoid_tip';
Transform832 := TTransformNode.Create;
Transform832.Translation := Vector3(0.1811,-0.0935,0.6984);
Shape833 := TShapeNode.Create;
Shape833 := Shape11;
{ .AddChild }
Transform832.AddChildren([Shape833]);
{ .AddChildren }
HAnimSite831.AddChildren([Transform832]);
{ .AddChildren }
HAnimSegment827.AddChildren([HAnimSite831]);
{ .AddChildren }
HAnimJoint826.AddChildren([HAnimSegment827]);
HAnimJoint834 := THAnimJointNode.Create;
HAnimJoint834.NameField := 'l_metacarpal_2';
HAnimJoint834.Center := Vector3(0.1811,-0.0922,0.679);
HAnimJoint834.SetUlimit([0,0,0]);
HAnimJoint834.SetLlimit([0,0,0]);
HAnimSegment835 := THAnimSegmentNode.Create;
HAnimSegment835.NameField := 'SEGMENT_FOR_l_metacarpal_2';
TouchSensor836 := TTouchSensorNode.Create;
TouchSensor836.Description := 'joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2';
{ .AddChildren }
HAnimSegment835.AddChildren([TouchSensor836]);
Transform837 := TTransformNode.Create;
Transform837.Translation := Vector3(0.1811,-0.0922,0.679);
Shape838 := TShapeNode.Create;
Shape838 := Shape16;
{ .AddChild }
Transform837.AddChildren([Shape838]);
{ .AddChildren }
HAnimSegment835.AddChildren([Transform837]);
HAnimSite839 := THAnimSiteNode.Create;
HAnimSite839.NameField := 'SEGMENT_FOR_l_metacarpal_2_tip';
Transform840 := TTransformNode.Create;
Transform840.Translation := Vector3(0.1811,-0.0922,0.679);
Shape841 := TShapeNode.Create;
Shape841 := Shape11;
{ .AddChild }
Transform840.AddChildren([Shape841]);
{ .AddChildren }
HAnimSite839.AddChildren([Transform840]);
{ .AddChildren }
HAnimSegment835.AddChildren([HAnimSite839]);
{ .AddChildren }
HAnimJoint834.AddChildren([HAnimSegment835]);
HAnimJoint842 := THAnimJointNode.Create;
HAnimJoint842.NameField := 'l_carpal_proximal_phalanx_2';
HAnimJoint842.Center := Vector3(0.1836,-0.0868,0.6286);
HAnimJoint842.SetUlimit([0,0,0]);
HAnimJoint842.SetLlimit([0,0,0]);
HAnimSegment843 := THAnimSegmentNode.Create;
HAnimSegment843.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_2';
TouchSensor844 := TTouchSensorNode.Create;
TouchSensor844.Description := 'joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment843.AddChildren([TouchSensor844]);
Transform845 := TTransformNode.Create;
Transform845.Translation := Vector3(0.1836,-0.0868,0.6286);
Shape846 := TShapeNode.Create;
Shape846 := Shape16;
{ .AddChild }
Transform845.AddChildren([Shape846]);
{ .AddChildren }
HAnimSegment843.AddChildren([Transform845]);
HAnimSite847 := THAnimSiteNode.Create;
HAnimSite847.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip';
Transform848 := TTransformNode.Create;
Transform848.Translation := Vector3(0.1836,-0.0868,0.6286);
Shape849 := TShapeNode.Create;
Shape849 := Shape11;
{ .AddChild }
Transform848.AddChildren([Shape849]);
{ .AddChildren }
HAnimSite847.AddChildren([Transform848]);
{ .AddChildren }
HAnimSegment843.AddChildren([HAnimSite847]);
{ .AddChildren }
HAnimJoint842.AddChildren([HAnimSegment843]);
HAnimJoint850 := THAnimJointNode.Create;
HAnimJoint850.NameField := 'l_carpal_middle_phalanx_2';
HAnimJoint850.Center := Vector3(0.1815,-0.0877,0.5983);
HAnimJoint850.SetUlimit([0,0,0]);
HAnimJoint850.SetLlimit([0,0,0]);
HAnimSegment851 := THAnimSegmentNode.Create;
HAnimSegment851.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_2';
TouchSensor852 := TTouchSensorNode.Create;
TouchSensor852.Description := 'joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2';
{ .AddChildren }
HAnimSegment851.AddChildren([TouchSensor852]);
Transform853 := TTransformNode.Create;
Transform853.Translation := Vector3(0.1815,-0.0877,0.5983);
Shape854 := TShapeNode.Create;
Shape854 := Shape16;
{ .AddChild }
Transform853.AddChildren([Shape854]);
{ .AddChildren }
HAnimSegment851.AddChildren([Transform853]);
HAnimSite855 := THAnimSiteNode.Create;
HAnimSite855.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_2_tip';
Transform856 := TTransformNode.Create;
Transform856.Translation := Vector3(0.1815,-0.0877,0.5983);
Shape857 := TShapeNode.Create;
Shape857 := Shape11;
{ .AddChild }
Transform856.AddChildren([Shape857]);
{ .AddChildren }
HAnimSite855.AddChildren([Transform856]);
{ .AddChildren }
HAnimSegment851.AddChildren([HAnimSite855]);
{ .AddChildren }
HAnimJoint850.AddChildren([HAnimSegment851]);
HAnimJoint858 := THAnimJointNode.Create;
HAnimJoint858.NameField := 'l_carpal_distal_phalanx_2';
HAnimJoint858.Center := Vector3(0.1805,-0.0885,0.5731);
HAnimJoint858.SetUlimit([0,0,0]);
HAnimJoint858.SetLlimit([0,0,0]);
HAnimSegment859 := THAnimSegmentNode.Create;
HAnimSegment859.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_2';
TouchSensor860 := TTouchSensorNode.Create;
TouchSensor860.Description := 'joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2';
{ .AddChildren }
HAnimSegment859.AddChildren([TouchSensor860]);
Transform861 := TTransformNode.Create;
Transform861.Translation := Vector3(0.1805,-0.0885,0.5731);
Shape862 := TShapeNode.Create;
Shape862 := Shape16;
{ .AddChild }
Transform861.AddChildren([Shape862]);
{ .AddChildren }
HAnimSegment859.AddChildren([Transform861]);
HAnimSite863 := THAnimSiteNode.Create;
HAnimSite863.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_2_tip';
Transform864 := TTransformNode.Create;
Transform864.Translation := Vector3(0.1805,-0.0885,0.5731);
Shape865 := TShapeNode.Create;
Shape865 := Shape11;
{ .AddChild }
Transform864.AddChildren([Shape865]);
{ .AddChildren }
HAnimSite863.AddChildren([Transform864]);
{ .AddChildren }
HAnimSegment859.AddChildren([HAnimSite863]);
{ .AddChildren }
HAnimJoint858.AddChildren([HAnimSegment859]);
{ .AddChildren }
HAnimJoint850.AddChildren([HAnimJoint858]);
{ .AddChildren }
HAnimJoint842.AddChildren([HAnimJoint850]);
{ .AddChildren }
HAnimJoint834.AddChildren([HAnimJoint842]);
{ .AddChildren }
HAnimJoint826.AddChildren([HAnimJoint834]);
{ .AddChildren }
HAnimJoint786.AddChildren([HAnimJoint826]);
HAnimJoint866 := THAnimJointNode.Create;
HAnimJoint866.NameField := 'l_capitate';
HAnimJoint866.Center := Vector3(0.1809,-0.1067,0.7);
HAnimJoint866.SetUlimit([0,0,0]);
HAnimJoint866.SetLlimit([0,0,0]);
HAnimSegment867 := THAnimSegmentNode.Create;
HAnimSegment867.NameField := 'SEGMENT_FOR_l_capitate';
TouchSensor868 := TTouchSensorNode.Create;
TouchSensor868.Description := 'joint l_capitate segment SEGMENT_FOR_l_capitate';
{ .AddChildren }
HAnimSegment867.AddChildren([TouchSensor868]);
Transform869 := TTransformNode.Create;
Transform869.Translation := Vector3(0.1809,-0.1067,0.7);
Shape870 := TShapeNode.Create;
Shape870 := Shape16;
{ .AddChild }
Transform869.AddChildren([Shape870]);
{ .AddChildren }
HAnimSegment867.AddChildren([Transform869]);
HAnimSite871 := THAnimSiteNode.Create;
HAnimSite871.NameField := 'SEGMENT_FOR_l_capitate_tip';
Transform872 := TTransformNode.Create;
Transform872.Translation := Vector3(0.1809,-0.1067,0.7);
Shape873 := TShapeNode.Create;
Shape873 := Shape11;
{ .AddChild }
Transform872.AddChildren([Shape873]);
{ .AddChildren }
HAnimSite871.AddChildren([Transform872]);
{ .AddChildren }
HAnimSegment867.AddChildren([HAnimSite871]);
{ .AddChildren }
HAnimJoint866.AddChildren([HAnimSegment867]);
HAnimJoint874 := THAnimJointNode.Create;
HAnimJoint874.NameField := 'l_metacarpal_3';
HAnimJoint874.Center := Vector3(0.1809,-0.1081,0.6772);
HAnimJoint874.SetUlimit([0,0,0]);
HAnimJoint874.SetLlimit([0,0,0]);
HAnimSegment875 := THAnimSegmentNode.Create;
HAnimSegment875.NameField := 'SEGMENT_FOR_l_metacarpal_3';
TouchSensor876 := TTouchSensorNode.Create;
TouchSensor876.Description := 'joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3';
{ .AddChildren }
HAnimSegment875.AddChildren([TouchSensor876]);
Transform877 := TTransformNode.Create;
Transform877.Translation := Vector3(0.1809,-0.1081,0.6772);
Shape878 := TShapeNode.Create;
Shape878 := Shape16;
{ .AddChild }
Transform877.AddChildren([Shape878]);
{ .AddChildren }
HAnimSegment875.AddChildren([Transform877]);
HAnimSite879 := THAnimSiteNode.Create;
HAnimSite879.NameField := 'SEGMENT_FOR_l_metacarpal_3_tip';
Transform880 := TTransformNode.Create;
Transform880.Translation := Vector3(0.1809,-0.1081,0.6772);
Shape881 := TShapeNode.Create;
Shape881 := Shape11;
{ .AddChild }
Transform880.AddChildren([Shape881]);
{ .AddChildren }
HAnimSite879.AddChildren([Transform880]);
{ .AddChildren }
HAnimSegment875.AddChildren([HAnimSite879]);
{ .AddChildren }
HAnimJoint874.AddChildren([HAnimSegment875]);
HAnimJoint882 := THAnimJointNode.Create;
HAnimJoint882.NameField := 'l_carpal_proximal_phalanx_3';
HAnimJoint882.Center := Vector3(0.1835,-0.1058,0.6264);
HAnimJoint882.SetUlimit([0,0,0]);
HAnimJoint882.SetLlimit([0,0,0]);
HAnimSegment883 := THAnimSegmentNode.Create;
HAnimSegment883.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_3';
TouchSensor884 := TTouchSensorNode.Create;
TouchSensor884.Description := 'joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3';
{ .AddChildren }
HAnimSegment883.AddChildren([TouchSensor884]);
Transform885 := TTransformNode.Create;
Transform885.Translation := Vector3(0.1835,-0.1058,0.6264);
Shape886 := TShapeNode.Create;
Shape886 := Shape16;
{ .AddChild }
Transform885.AddChildren([Shape886]);
{ .AddChildren }
HAnimSegment883.AddChildren([Transform885]);
HAnimSite887 := THAnimSiteNode.Create;
HAnimSite887.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip';
Transform888 := TTransformNode.Create;
Transform888.Translation := Vector3(0.1835,-0.1058,0.6264);
Shape889 := TShapeNode.Create;
Shape889 := Shape11;
{ .AddChild }
Transform888.AddChildren([Shape889]);
{ .AddChildren }
HAnimSite887.AddChildren([Transform888]);
{ .AddChildren }
HAnimSegment883.AddChildren([HAnimSite887]);
{ .AddChildren }
HAnimJoint882.AddChildren([HAnimSegment883]);
HAnimJoint890 := THAnimJointNode.Create;
HAnimJoint890.NameField := 'l_carpal_middle_phalanx_3';
HAnimJoint890.Center := Vector3(0.1815,-0.1054,0.5947);
HAnimJoint890.SetUlimit([0,0,0]);
HAnimJoint890.SetLlimit([0,0,0]);
HAnimSegment891 := THAnimSegmentNode.Create;
HAnimSegment891.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_3';
TouchSensor892 := TTouchSensorNode.Create;
TouchSensor892.Description := 'joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3';
{ .AddChildren }
HAnimSegment891.AddChildren([TouchSensor892]);
Transform893 := TTransformNode.Create;
Transform893.Translation := Vector3(0.1815,-0.1054,0.5947);
Shape894 := TShapeNode.Create;
Shape894 := Shape16;
{ .AddChild }
Transform893.AddChildren([Shape894]);
{ .AddChildren }
HAnimSegment891.AddChildren([Transform893]);
HAnimSite895 := THAnimSiteNode.Create;
HAnimSite895.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_3_tip';
Transform896 := TTransformNode.Create;
Transform896.Translation := Vector3(0.1815,-0.1054,0.5947);
Shape897 := TShapeNode.Create;
Shape897 := Shape11;
{ .AddChild }
Transform896.AddChildren([Shape897]);
{ .AddChildren }
HAnimSite895.AddChildren([Transform896]);
{ .AddChildren }
HAnimSegment891.AddChildren([HAnimSite895]);
{ .AddChildren }
HAnimJoint890.AddChildren([HAnimSegment891]);
HAnimJoint898 := THAnimJointNode.Create;
HAnimJoint898.NameField := 'l_carpal_distal_phalanx_3';
HAnimJoint898.Center := Vector3(0.1805,-0.1056,0.5668);
HAnimJoint898.SetUlimit([0,0,0]);
HAnimJoint898.SetLlimit([0,0,0]);
HAnimSegment899 := THAnimSegmentNode.Create;
HAnimSegment899.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_3';
TouchSensor900 := TTouchSensorNode.Create;
TouchSensor900.Description := 'joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3';
{ .AddChildren }
HAnimSegment899.AddChildren([TouchSensor900]);
Transform901 := TTransformNode.Create;
Transform901.Translation := Vector3(0.1805,-0.1056,0.5668);
Shape902 := TShapeNode.Create;
Shape902 := Shape16;
{ .AddChild }
Transform901.AddChildren([Shape902]);
{ .AddChildren }
HAnimSegment899.AddChildren([Transform901]);
HAnimSite903 := THAnimSiteNode.Create;
HAnimSite903.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_3_tip';
Transform904 := TTransformNode.Create;
Transform904.Translation := Vector3(0.1805,-0.1056,0.5668);
Shape905 := TShapeNode.Create;
Shape905 := Shape11;
{ .AddChild }
Transform904.AddChildren([Shape905]);
{ .AddChildren }
HAnimSite903.AddChildren([Transform904]);
{ .AddChildren }
HAnimSegment899.AddChildren([HAnimSite903]);
{ .AddChildren }
HAnimJoint898.AddChildren([HAnimSegment899]);
{ .AddChildren }
HAnimJoint890.AddChildren([HAnimJoint898]);
{ .AddChildren }
HAnimJoint882.AddChildren([HAnimJoint890]);
{ .AddChildren }
HAnimJoint874.AddChildren([HAnimJoint882]);
{ .AddChildren }
HAnimJoint866.AddChildren([HAnimJoint874]);
{ .AddChildren }
HAnimJoint786.AddChildren([HAnimJoint866]);
HAnimJoint906 := THAnimJointNode.Create;
HAnimJoint906.NameField := 'l_hamate';
HAnimJoint906.Center := Vector3(0.1809,-0.1276,0.6973);
HAnimJoint906.SetUlimit([0,0,0]);
HAnimJoint906.SetLlimit([0,0,0]);
HAnimSegment907 := THAnimSegmentNode.Create;
HAnimSegment907.NameField := 'SEGMENT_FOR_l_hamate';
TouchSensor908 := TTouchSensorNode.Create;
TouchSensor908.Description := 'joint l_hamate segment SEGMENT_FOR_l_hamate';
{ .AddChildren }
HAnimSegment907.AddChildren([TouchSensor908]);
Transform909 := TTransformNode.Create;
Transform909.Translation := Vector3(0.1809,-0.1276,0.6973);
Shape910 := TShapeNode.Create;
Shape910 := Shape16;
{ .AddChild }
Transform909.AddChildren([Shape910]);
{ .AddChildren }
HAnimSegment907.AddChildren([Transform909]);
HAnimSite911 := THAnimSiteNode.Create;
HAnimSite911.NameField := 'SEGMENT_FOR_l_hamate_tip';
Transform912 := TTransformNode.Create;
Transform912.Translation := Vector3(0.1809,-0.1276,0.6973);
Shape913 := TShapeNode.Create;
Shape913 := Shape11;
{ .AddChild }
Transform912.AddChildren([Shape913]);
{ .AddChildren }
HAnimSite911.AddChildren([Transform912]);
{ .AddChildren }
HAnimSegment907.AddChildren([HAnimSite911]);
{ .AddChildren }
HAnimJoint906.AddChildren([HAnimSegment907]);
HAnimJoint914 := THAnimJointNode.Create;
HAnimJoint914.NameField := 'l_metacarpal_4';
HAnimJoint914.Center := Vector3(0.1809,-0.1218,0.6777);
HAnimJoint914.SetUlimit([0,0,0]);
HAnimJoint914.SetLlimit([0,0,0]);
HAnimSegment915 := THAnimSegmentNode.Create;
HAnimSegment915.NameField := 'SEGMENT_FOR_l_metacarpal_4';
TouchSensor916 := TTouchSensorNode.Create;
TouchSensor916.Description := 'joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4';
{ .AddChildren }
HAnimSegment915.AddChildren([TouchSensor916]);
Transform917 := TTransformNode.Create;
Transform917.Translation := Vector3(0.1809,-0.1218,0.6777);
Shape918 := TShapeNode.Create;
Shape918 := Shape16;
{ .AddChild }
Transform917.AddChildren([Shape918]);
{ .AddChildren }
HAnimSegment915.AddChildren([Transform917]);
HAnimSite919 := THAnimSiteNode.Create;
HAnimSite919.NameField := 'SEGMENT_FOR_l_metacarpal_4_tip';
Transform920 := TTransformNode.Create;
Transform920.Translation := Vector3(0.1809,-0.1218,0.6777);
Shape921 := TShapeNode.Create;
Shape921 := Shape11;
{ .AddChild }
Transform920.AddChildren([Shape921]);
{ .AddChildren }
HAnimSite919.AddChildren([Transform920]);
{ .AddChildren }
HAnimSegment915.AddChildren([HAnimSite919]);
{ .AddChildren }
HAnimJoint914.AddChildren([HAnimSegment915]);
HAnimJoint922 := THAnimJointNode.Create;
HAnimJoint922.NameField := 'l_carpal_proximal_phalanx_4';
HAnimJoint922.Center := Vector3(0.1835,-0.1233,0.6255);
HAnimJoint922.SetUlimit([0,0,0]);
HAnimJoint922.SetLlimit([0,0,0]);
HAnimSegment923 := THAnimSegmentNode.Create;
HAnimSegment923.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_4';
TouchSensor924 := TTouchSensorNode.Create;
TouchSensor924.Description := 'joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4';
{ .AddChildren }
HAnimSegment923.AddChildren([TouchSensor924]);
Transform925 := TTransformNode.Create;
Transform925.Translation := Vector3(0.1835,-0.1233,0.6255);
Shape926 := TShapeNode.Create;
Shape926 := Shape16;
{ .AddChild }
Transform925.AddChildren([Shape926]);
{ .AddChildren }
HAnimSegment923.AddChildren([Transform925]);
HAnimSite927 := THAnimSiteNode.Create;
HAnimSite927.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip';
Transform928 := TTransformNode.Create;
Transform928.Translation := Vector3(0.1835,-0.1233,0.6255);
Shape929 := TShapeNode.Create;
Shape929 := Shape11;
{ .AddChild }
Transform928.AddChildren([Shape929]);
{ .AddChildren }
HAnimSite927.AddChildren([Transform928]);
{ .AddChildren }
HAnimSegment923.AddChildren([HAnimSite927]);
{ .AddChildren }
HAnimJoint922.AddChildren([HAnimSegment923]);
HAnimJoint930 := THAnimJointNode.Create;
HAnimJoint930.NameField := 'l_carpal_middle_phalanx_4';
HAnimJoint930.Center := Vector3(0.1815,-0.1225,0.598);
HAnimJoint930.SetUlimit([0,0,0]);
HAnimJoint930.SetLlimit([0,0,0]);
HAnimSegment931 := THAnimSegmentNode.Create;
HAnimSegment931.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_4';
TouchSensor932 := TTouchSensorNode.Create;
TouchSensor932.Description := 'joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4';
{ .AddChildren }
HAnimSegment931.AddChildren([TouchSensor932]);
Transform933 := TTransformNode.Create;
Transform933.Translation := Vector3(0.1815,-0.1225,0.598);
Shape934 := TShapeNode.Create;
Shape934 := Shape16;
{ .AddChild }
Transform933.AddChildren([Shape934]);
{ .AddChildren }
HAnimSegment931.AddChildren([Transform933]);
HAnimSite935 := THAnimSiteNode.Create;
HAnimSite935.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_4_tip';
Transform936 := TTransformNode.Create;
Transform936.Translation := Vector3(0.1815,-0.1225,0.598);
Shape937 := TShapeNode.Create;
Shape937 := Shape11;
{ .AddChild }
Transform936.AddChildren([Shape937]);
{ .AddChildren }
HAnimSite935.AddChildren([Transform936]);
{ .AddChildren }
HAnimSegment931.AddChildren([HAnimSite935]);
{ .AddChildren }
HAnimJoint930.AddChildren([HAnimSegment931]);
HAnimJoint938 := THAnimJointNode.Create;
HAnimJoint938.NameField := 'l_carpal_distal_phalanx_4';
HAnimJoint938.Center := Vector3(0.1805,-0.1217,0.5722);
HAnimJoint938.SetUlimit([0,0,0]);
HAnimJoint938.SetLlimit([0,0,0]);
HAnimSegment939 := THAnimSegmentNode.Create;
HAnimSegment939.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_4';
TouchSensor940 := TTouchSensorNode.Create;
TouchSensor940.Description := 'joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4';
{ .AddChildren }
HAnimSegment939.AddChildren([TouchSensor940]);
Transform941 := TTransformNode.Create;
Transform941.Translation := Vector3(0.1805,-0.1217,0.5722);
Shape942 := TShapeNode.Create;
Shape942 := Shape16;
{ .AddChild }
Transform941.AddChildren([Shape942]);
{ .AddChildren }
HAnimSegment939.AddChildren([Transform941]);
HAnimSite943 := THAnimSiteNode.Create;
HAnimSite943.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_4_tip';
Transform944 := TTransformNode.Create;
Transform944.Translation := Vector3(0.1805,-0.1217,0.5722);
Shape945 := TShapeNode.Create;
Shape945 := Shape11;
{ .AddChild }
Transform944.AddChildren([Shape945]);
{ .AddChildren }
HAnimSite943.AddChildren([Transform944]);
{ .AddChildren }
HAnimSegment939.AddChildren([HAnimSite943]);
{ .AddChildren }
HAnimJoint938.AddChildren([HAnimSegment939]);
{ .AddChildren }
HAnimJoint930.AddChildren([HAnimJoint938]);
{ .AddChildren }
HAnimJoint922.AddChildren([HAnimJoint930]);
{ .AddChildren }
HAnimJoint914.AddChildren([HAnimJoint922]);
{ .AddChildren }
HAnimJoint906.AddChildren([HAnimJoint914]);
HAnimJoint946 := THAnimJointNode.Create;
HAnimJoint946.NameField := 'l_metacarpal_5';
HAnimJoint946.Center := Vector3(0.1815,-0.1347,0.6797);
HAnimJoint946.SetUlimit([0,0,0]);
HAnimJoint946.SetLlimit([0,0,0]);
HAnimSegment947 := THAnimSegmentNode.Create;
HAnimSegment947.NameField := 'SEGMENT_FOR_l_metacarpal_5';
TouchSensor948 := TTouchSensorNode.Create;
TouchSensor948.Description := 'joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5';
{ .AddChildren }
HAnimSegment947.AddChildren([TouchSensor948]);
Transform949 := TTransformNode.Create;
Transform949.Translation := Vector3(0.1815,-0.1347,0.6797);
Shape950 := TShapeNode.Create;
Shape950 := Shape16;
{ .AddChild }
Transform949.AddChildren([Shape950]);
{ .AddChildren }
HAnimSegment947.AddChildren([Transform949]);
HAnimSite951 := THAnimSiteNode.Create;
HAnimSite951.NameField := 'SEGMENT_FOR_l_metacarpal_5_tip';
Transform952 := TTransformNode.Create;
Transform952.Translation := Vector3(0.1815,-0.1347,0.6797);
Shape953 := TShapeNode.Create;
Shape953 := Shape11;
{ .AddChild }
Transform952.AddChildren([Shape953]);
{ .AddChildren }
HAnimSite951.AddChildren([Transform952]);
{ .AddChildren }
HAnimSegment947.AddChildren([HAnimSite951]);
{ .AddChildren }
HAnimJoint946.AddChildren([HAnimSegment947]);
HAnimJoint954 := THAnimJointNode.Create;
HAnimJoint954.NameField := 'l_carpal_proximal_phalanx_5';
HAnimJoint954.Center := Vector3(0.1832,-0.1389,0.6295);
HAnimJoint954.SetUlimit([0,0,0]);
HAnimJoint954.SetLlimit([0,0,0]);
HAnimSegment955 := THAnimSegmentNode.Create;
HAnimSegment955.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_5';
TouchSensor956 := TTouchSensorNode.Create;
TouchSensor956.Description := 'joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5';
{ .AddChildren }
HAnimSegment955.AddChildren([TouchSensor956]);
Transform957 := TTransformNode.Create;
Transform957.Translation := Vector3(0.1832,-0.1389,0.6295);
Shape958 := TShapeNode.Create;
Shape958 := Shape16;
{ .AddChild }
Transform957.AddChildren([Shape958]);
{ .AddChildren }
HAnimSegment955.AddChildren([Transform957]);
HAnimSite959 := THAnimSiteNode.Create;
HAnimSite959.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip';
Transform960 := TTransformNode.Create;
Transform960.Translation := Vector3(0.1832,-0.1389,0.6295);
Shape961 := TShapeNode.Create;
Shape961 := Shape11;
{ .AddChild }
Transform960.AddChildren([Shape961]);
{ .AddChildren }
HAnimSite959.AddChildren([Transform960]);
{ .AddChildren }
HAnimSegment955.AddChildren([HAnimSite959]);
{ .AddChildren }
HAnimJoint954.AddChildren([HAnimSegment955]);
HAnimJoint962 := THAnimJointNode.Create;
HAnimJoint962.NameField := 'l_carpal_middle_phalanx_5';
HAnimJoint962.Center := Vector3(0.1815,-0.139,0.6124);
HAnimJoint962.SetUlimit([0,0,0]);
HAnimJoint962.SetLlimit([0,0,0]);
HAnimSegment963 := THAnimSegmentNode.Create;
HAnimSegment963.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_5';
TouchSensor964 := TTouchSensorNode.Create;
TouchSensor964.Description := 'joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5';
{ .AddChildren }
HAnimSegment963.AddChildren([TouchSensor964]);
Transform965 := TTransformNode.Create;
Transform965.Translation := Vector3(0.1815,-0.139,0.6124);
Shape966 := TShapeNode.Create;
Shape966 := Shape16;
{ .AddChild }
Transform965.AddChildren([Shape966]);
{ .AddChildren }
HAnimSegment963.AddChildren([Transform965]);
HAnimSite967 := THAnimSiteNode.Create;
HAnimSite967.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_5_tip';
Transform968 := TTransformNode.Create;
Transform968.Translation := Vector3(0.1815,-0.139,0.6124);
Shape969 := TShapeNode.Create;
Shape969 := Shape11;
{ .AddChild }
Transform968.AddChildren([Shape969]);
{ .AddChildren }
HAnimSite967.AddChildren([Transform968]);
{ .AddChildren }
HAnimSegment963.AddChildren([HAnimSite967]);
{ .AddChildren }
HAnimJoint962.AddChildren([HAnimSegment963]);
HAnimJoint970 := THAnimJointNode.Create;
HAnimJoint970.NameField := 'l_carpal_distal_phalanx_5';
HAnimJoint970.Center := Vector3(0.1806,-0.1388,0.5938);
HAnimJoint970.SetUlimit([0,0,0]);
HAnimJoint970.SetLlimit([0,0,0]);
HAnimSegment971 := THAnimSegmentNode.Create;
HAnimSegment971.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_5';
TouchSensor972 := TTouchSensorNode.Create;
TouchSensor972.Description := 'joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5';
{ .AddChildren }
HAnimSegment971.AddChildren([TouchSensor972]);
Transform973 := TTransformNode.Create;
Transform973.Translation := Vector3(0.1806,-0.1388,0.5938);
Shape974 := TShapeNode.Create;
Shape974 := Shape16;
{ .AddChild }
Transform973.AddChildren([Shape974]);
{ .AddChildren }
HAnimSegment971.AddChildren([Transform973]);
HAnimSite975 := THAnimSiteNode.Create;
HAnimSite975.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_5_tip';
Transform976 := TTransformNode.Create;
Transform976.Translation := Vector3(0.1806,-0.1388,0.5938);
Shape977 := TShapeNode.Create;
Shape977 := Shape11;
{ .AddChild }
Transform976.AddChildren([Shape977]);
{ .AddChildren }
HAnimSite975.AddChildren([Transform976]);
{ .AddChildren }
HAnimSegment971.AddChildren([HAnimSite975]);
{ .AddChildren }
HAnimJoint970.AddChildren([HAnimSegment971]);
{ .AddChildren }
HAnimJoint962.AddChildren([HAnimJoint970]);
{ .AddChildren }
HAnimJoint954.AddChildren([HAnimJoint962]);
{ .AddChildren }
HAnimJoint946.AddChildren([HAnimJoint954]);
{ .AddChildren }
HAnimJoint906.AddChildren([HAnimJoint946]);
{ .AddChildren }
HAnimJoint786.AddChildren([HAnimJoint906]);
{ .AddChildren }
HAnimJoint778.AddChildren([HAnimJoint786]);
{ .AddChildren }
HAnimJoint770.AddChildren([HAnimJoint778]);
{ .AddChildren }
HAnimJoint762.AddChildren([HAnimJoint770]);
{ .AddChildren }
HAnimJoint754.AddChildren([HAnimJoint762]);
{ .AddChildren }
HAnimJoint626.AddChildren([HAnimJoint754]);
HAnimJoint978 := THAnimJointNode.Create;
HAnimJoint978.NameField := 'r_clavicle';
HAnimJoint978.Center := Vector3(-0.1231,-0.1148,1.1833);
HAnimJoint978.SetUlimit([0,0,0]);
HAnimJoint978.SetLlimit([0,0,0]);
HAnimSegment979 := THAnimSegmentNode.Create;
HAnimSegment979.NameField := 'SEGMENT_FOR_r_clavicle';
TouchSensor980 := TTouchSensorNode.Create;
TouchSensor980.Description := 'joint r_clavicle segment SEGMENT_FOR_r_clavicle';
{ .AddChildren }
HAnimSegment979.AddChildren([TouchSensor980]);
Transform981 := TTransformNode.Create;
Transform981.Translation := Vector3(-0.1231,-0.1148,1.1833);
Shape982 := TShapeNode.Create;
Shape982 := Shape16;
{ .AddChild }
Transform981.AddChildren([Shape982]);
{ .AddChildren }
HAnimSegment979.AddChildren([Transform981]);
HAnimSite983 := THAnimSiteNode.Create;
HAnimSite983.NameField := 'SEGMENT_FOR_r_clavicle_tip';
Transform984 := TTransformNode.Create;
Transform984.Translation := Vector3(-0.1231,-0.1148,1.1833);
Shape985 := TShapeNode.Create;
Shape985 := Shape11;
{ .AddChild }
Transform984.AddChildren([Shape985]);
{ .AddChildren }
HAnimSite983.AddChildren([Transform984]);
{ .AddChildren }
HAnimSegment979.AddChildren([HAnimSite983]);
{ .AddChildren }
HAnimJoint978.AddChildren([HAnimSegment979]);
HAnimJoint986 := THAnimJointNode.Create;
HAnimJoint986.NameField := 'r_scapula';
HAnimJoint986.Center := Vector3(-0.0387,-0.1157,1.2001);
HAnimJoint986.SetUlimit([0,0,0]);
HAnimJoint986.SetLlimit([0,0,0]);
HAnimSegment987 := THAnimSegmentNode.Create;
HAnimSegment987.NameField := 'SEGMENT_FOR_r_scapula';
TouchSensor988 := TTouchSensorNode.Create;
TouchSensor988.Description := 'joint r_scapula segment SEGMENT_FOR_r_scapula';
{ .AddChildren }
HAnimSegment987.AddChildren([TouchSensor988]);
Transform989 := TTransformNode.Create;
Transform989.Translation := Vector3(-0.0387,-0.1157,1.2001);
Shape990 := TShapeNode.Create;
Shape990 := Shape16;
{ .AddChild }
Transform989.AddChildren([Shape990]);
{ .AddChildren }
HAnimSegment987.AddChildren([Transform989]);
HAnimSite991 := THAnimSiteNode.Create;
HAnimSite991.NameField := 'SEGMENT_FOR_r_scapula_tip';
Transform992 := TTransformNode.Create;
Transform992.Translation := Vector3(-0.0387,-0.1157,1.2001);
Shape993 := TShapeNode.Create;
Shape993 := Shape11;
{ .AddChild }
Transform992.AddChildren([Shape993]);
{ .AddChildren }
HAnimSite991.AddChildren([Transform992]);
{ .AddChildren }
HAnimSegment987.AddChildren([HAnimSite991]);
{ .AddChildren }
HAnimJoint986.AddChildren([HAnimSegment987]);
HAnimJoint994 := THAnimJointNode.Create;
HAnimJoint994.NameField := 'r_upperarm';
HAnimJoint994.Center := Vector3(-0.1649,-0.1051,1.17);
HAnimJoint994.SetUlimit([0,0,0]);
HAnimJoint994.SetLlimit([0,0,0]);
HAnimSegment995 := THAnimSegmentNode.Create;
HAnimSegment995.NameField := 'SEGMENT_FOR_r_upperarm';
TouchSensor996 := TTouchSensorNode.Create;
TouchSensor996.Description := 'joint r_upperarm segment SEGMENT_FOR_r_upperarm';
{ .AddChildren }
HAnimSegment995.AddChildren([TouchSensor996]);
Transform997 := TTransformNode.Create;
Transform997.Translation := Vector3(-0.1649,-0.1051,1.17);
Shape998 := TShapeNode.Create;
Shape998 := Shape16;
{ .AddChild }
Transform997.AddChildren([Shape998]);
{ .AddChildren }
HAnimSegment995.AddChildren([Transform997]);
HAnimSite999 := THAnimSiteNode.Create;
HAnimSite999.NameField := 'SEGMENT_FOR_r_upperarm_tip';
Transform1000 := TTransformNode.Create;
Transform1000.Translation := Vector3(-0.1649,-0.1051,1.17);
Shape1001 := TShapeNode.Create;
Shape1001 := Shape11;
{ .AddChild }
Transform1000.AddChildren([Shape1001]);
{ .AddChildren }
HAnimSite999.AddChildren([Transform1000]);
{ .AddChildren }
HAnimSegment995.AddChildren([HAnimSite999]);
{ .AddChildren }
HAnimJoint994.AddChildren([HAnimSegment995]);
HAnimJoint1002 := THAnimJointNode.Create;
HAnimJoint1002.NameField := 'r_forearm';
HAnimJoint1002.Center := Vector3(-0.1819,-0.1075,0.9202);
HAnimJoint1002.SetUlimit([0,0,0]);
HAnimJoint1002.SetLlimit([0,0,0]);
HAnimSegment1003 := THAnimSegmentNode.Create;
HAnimSegment1003.NameField := 'SEGMENT_FOR_r_forearm';
TouchSensor1004 := TTouchSensorNode.Create;
TouchSensor1004.Description := 'joint r_forearm segment SEGMENT_FOR_r_forearm';
{ .AddChildren }
HAnimSegment1003.AddChildren([TouchSensor1004]);
Transform1005 := TTransformNode.Create;
Transform1005.Translation := Vector3(-0.1819,-0.1075,0.9202);
Shape1006 := TShapeNode.Create;
Shape1006 := Shape16;
{ .AddChild }
Transform1005.AddChildren([Shape1006]);
{ .AddChildren }
HAnimSegment1003.AddChildren([Transform1005]);
HAnimSite1007 := THAnimSiteNode.Create;
HAnimSite1007.NameField := 'SEGMENT_FOR_r_forearm_tip';
Transform1008 := TTransformNode.Create;
Transform1008.Translation := Vector3(-0.1819,-0.1075,0.9202);
Shape1009 := TShapeNode.Create;
Shape1009 := Shape11;
{ .AddChild }
Transform1008.AddChildren([Shape1009]);
{ .AddChildren }
HAnimSite1007.AddChildren([Transform1008]);
{ .AddChildren }
HAnimSegment1003.AddChildren([HAnimSite1007]);
{ .AddChildren }
HAnimJoint1002.AddChildren([HAnimSegment1003]);
HAnimJoint1010 := THAnimJointNode.Create;
HAnimJoint1010.NameField := 'r_carpal';
HAnimJoint1010.Center := Vector3(-0.1818,-0.1069,0.7157);
HAnimJoint1010.SetUlimit([0,0,0]);
HAnimJoint1010.SetLlimit([0,0,0]);
HAnimSegment1011 := THAnimSegmentNode.Create;
HAnimSegment1011.NameField := 'SEGMENT_FOR_r_carpal';
TouchSensor1012 := TTouchSensorNode.Create;
TouchSensor1012.Description := 'joint r_carpal segment SEGMENT_FOR_r_carpal';
{ .AddChildren }
HAnimSegment1011.AddChildren([TouchSensor1012]);
Transform1013 := TTransformNode.Create;
Transform1013.Translation := Vector3(-0.1818,-0.1069,0.7157);
Shape1014 := TShapeNode.Create;
Shape1014 := Shape16;
{ .AddChild }
Transform1013.AddChildren([Shape1014]);
{ .AddChildren }
HAnimSegment1011.AddChildren([Transform1013]);
HAnimSite1015 := THAnimSiteNode.Create;
HAnimSite1015.NameField := 'SEGMENT_FOR_r_carpal_tip';
Transform1016 := TTransformNode.Create;
Transform1016.Translation := Vector3(-0.1818,-0.1069,0.7157);
Shape1017 := TShapeNode.Create;
Shape1017 := Shape11;
{ .AddChild }
Transform1016.AddChildren([Shape1017]);
{ .AddChildren }
HAnimSite1015.AddChildren([Transform1016]);
{ .AddChildren }
HAnimSegment1011.AddChildren([HAnimSite1015]);
{ .AddChildren }
HAnimJoint1010.AddChildren([HAnimSegment1011]);
HAnimJoint1018 := THAnimJointNode.Create;
HAnimJoint1018.NameField := 'r_trapezium';
HAnimJoint1018.Center := Vector3(-0.1811,-0.0826,0.6975);
HAnimJoint1018.SetUlimit([0,0,0]);
HAnimJoint1018.SetLlimit([0,0,0]);
HAnimSegment1019 := THAnimSegmentNode.Create;
HAnimSegment1019.NameField := 'SEGMENT_FOR_r_trapezium';
TouchSensor1020 := TTouchSensorNode.Create;
TouchSensor1020.Description := 'joint r_trapezium segment SEGMENT_FOR_r_trapezium';
{ .AddChildren }
HAnimSegment1019.AddChildren([TouchSensor1020]);
Transform1021 := TTransformNode.Create;
Transform1021.Translation := Vector3(-0.1811,-0.0826,0.6975);
Shape1022 := TShapeNode.Create;
Shape1022 := Shape16;
{ .AddChild }
Transform1021.AddChildren([Shape1022]);
{ .AddChildren }
HAnimSegment1019.AddChildren([Transform1021]);
HAnimSite1023 := THAnimSiteNode.Create;
HAnimSite1023.NameField := 'SEGMENT_FOR_r_trapezium_tip';
Transform1024 := TTransformNode.Create;
Transform1024.Translation := Vector3(-0.1811,-0.0826,0.6975);
Shape1025 := TShapeNode.Create;
Shape1025 := Shape11;
{ .AddChild }
Transform1024.AddChildren([Shape1025]);
{ .AddChildren }
HAnimSite1023.AddChildren([Transform1024]);
{ .AddChildren }
HAnimSegment1019.AddChildren([HAnimSite1023]);
{ .AddChildren }
HAnimJoint1018.AddChildren([HAnimSegment1019]);
HAnimJoint1026 := THAnimJointNode.Create;
HAnimJoint1026.NameField := 'r_metacarpal_1';
HAnimJoint1026.Center := Vector3(-0.1803,-0.0759,0.684);
HAnimJoint1026.SetUlimit([0,0,0]);
HAnimJoint1026.SetLlimit([0,0,0]);
HAnimSegment1027 := THAnimSegmentNode.Create;
HAnimSegment1027.NameField := 'SEGMENT_FOR_r_metacarpal_1';
TouchSensor1028 := TTouchSensorNode.Create;
TouchSensor1028.Description := 'joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1';
{ .AddChildren }
HAnimSegment1027.AddChildren([TouchSensor1028]);
Transform1029 := TTransformNode.Create;
Transform1029.Translation := Vector3(-0.1803,-0.0759,0.684);
Shape1030 := TShapeNode.Create;
Shape1030 := Shape16;
{ .AddChild }
Transform1029.AddChildren([Shape1030]);
{ .AddChildren }
HAnimSegment1027.AddChildren([Transform1029]);
HAnimSite1031 := THAnimSiteNode.Create;
HAnimSite1031.NameField := 'SEGMENT_FOR_r_metacarpal_1_tip';
Transform1032 := TTransformNode.Create;
Transform1032.Translation := Vector3(-0.1803,-0.0759,0.684);
Shape1033 := TShapeNode.Create;
Shape1033 := Shape11;
{ .AddChild }
Transform1032.AddChildren([Shape1033]);
{ .AddChildren }
HAnimSite1031.AddChildren([Transform1032]);
{ .AddChildren }
HAnimSegment1027.AddChildren([HAnimSite1031]);
{ .AddChildren }
HAnimJoint1026.AddChildren([HAnimSegment1027]);
HAnimJoint1034 := THAnimJointNode.Create;
HAnimJoint1034.NameField := 'r_carpal_proximal_phalanx_1';
HAnimJoint1034.Center := Vector3(-0.1808,-0.0661,0.6642);
HAnimJoint1034.SetUlimit([0,0,0]);
HAnimJoint1034.SetLlimit([0,0,0]);
HAnimSegment1035 := THAnimSegmentNode.Create;
HAnimSegment1035.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_1';
TouchSensor1036 := TTouchSensorNode.Create;
TouchSensor1036.Description := 'joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1';
{ .AddChildren }
HAnimSegment1035.AddChildren([TouchSensor1036]);
Transform1037 := TTransformNode.Create;
Transform1037.Translation := Vector3(-0.1808,-0.0661,0.6642);
Shape1038 := TShapeNode.Create;
Shape1038 := Shape16;
{ .AddChild }
Transform1037.AddChildren([Shape1038]);
{ .AddChildren }
HAnimSegment1035.AddChildren([Transform1037]);
HAnimSite1039 := THAnimSiteNode.Create;
HAnimSite1039.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip';
Transform1040 := TTransformNode.Create;
Transform1040.Translation := Vector3(-0.1808,-0.0661,0.6642);
Shape1041 := TShapeNode.Create;
Shape1041 := Shape11;
{ .AddChild }
Transform1040.AddChildren([Shape1041]);
{ .AddChildren }
HAnimSite1039.AddChildren([Transform1040]);
{ .AddChildren }
HAnimSegment1035.AddChildren([HAnimSite1039]);
{ .AddChildren }
HAnimJoint1034.AddChildren([HAnimSegment1035]);
HAnimJoint1042 := THAnimJointNode.Create;
HAnimJoint1042.NameField := 'r_carpal_distal_phalanx_1';
HAnimJoint1042.Center := Vector3(-0.1825,-0.0522,0.6455);
HAnimJoint1042.SetUlimit([0,0,0]);
HAnimJoint1042.SetLlimit([0,0,0]);
HAnimSegment1043 := THAnimSegmentNode.Create;
HAnimSegment1043.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_1';
TouchSensor1044 := TTouchSensorNode.Create;
TouchSensor1044.Description := 'joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1';
{ .AddChildren }
HAnimSegment1043.AddChildren([TouchSensor1044]);
Transform1045 := TTransformNode.Create;
Transform1045.Translation := Vector3(-0.1825,-0.0522,0.6455);
Shape1046 := TShapeNode.Create;
Shape1046 := Shape16;
{ .AddChild }
Transform1045.AddChildren([Shape1046]);
{ .AddChildren }
HAnimSegment1043.AddChildren([Transform1045]);
HAnimSite1047 := THAnimSiteNode.Create;
HAnimSite1047.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_1_tip';
Transform1048 := TTransformNode.Create;
Transform1048.Translation := Vector3(-0.1825,-0.0522,0.6455);
Shape1049 := TShapeNode.Create;
Shape1049 := Shape11;
{ .AddChild }
Transform1048.AddChildren([Shape1049]);
{ .AddChildren }
HAnimSite1047.AddChildren([Transform1048]);
{ .AddChildren }
HAnimSegment1043.AddChildren([HAnimSite1047]);
{ .AddChildren }
HAnimJoint1042.AddChildren([HAnimSegment1043]);
{ .AddChildren }
HAnimJoint1034.AddChildren([HAnimJoint1042]);
{ .AddChildren }
HAnimJoint1026.AddChildren([HAnimJoint1034]);
{ .AddChildren }
HAnimJoint1018.AddChildren([HAnimJoint1026]);
{ .AddChildren }
HAnimJoint1010.AddChildren([HAnimJoint1018]);
HAnimJoint1050 := THAnimJointNode.Create;
HAnimJoint1050.NameField := 'r_trapezoid';
HAnimJoint1050.Center := Vector3(-0.1811,-0.0935,0.6984);
HAnimJoint1050.SetUlimit([0,0,0]);
HAnimJoint1050.SetLlimit([0,0,0]);
HAnimSegment1051 := THAnimSegmentNode.Create;
HAnimSegment1051.NameField := 'SEGMENT_FOR_r_trapezoid';
TouchSensor1052 := TTouchSensorNode.Create;
TouchSensor1052.Description := 'joint r_trapezoid segment SEGMENT_FOR_r_trapezoid';
{ .AddChildren }
HAnimSegment1051.AddChildren([TouchSensor1052]);
Transform1053 := TTransformNode.Create;
Transform1053.Translation := Vector3(-0.1811,-0.0935,0.6984);
Shape1054 := TShapeNode.Create;
Shape1054 := Shape16;
{ .AddChild }
Transform1053.AddChildren([Shape1054]);
{ .AddChildren }
HAnimSegment1051.AddChildren([Transform1053]);
HAnimSite1055 := THAnimSiteNode.Create;
HAnimSite1055.NameField := 'SEGMENT_FOR_r_trapezoid_tip';
Transform1056 := TTransformNode.Create;
Transform1056.Translation := Vector3(-0.1811,-0.0935,0.6984);
Shape1057 := TShapeNode.Create;
Shape1057 := Shape11;
{ .AddChild }
Transform1056.AddChildren([Shape1057]);
{ .AddChildren }
HAnimSite1055.AddChildren([Transform1056]);
{ .AddChildren }
HAnimSegment1051.AddChildren([HAnimSite1055]);
{ .AddChildren }
HAnimJoint1050.AddChildren([HAnimSegment1051]);
HAnimJoint1058 := THAnimJointNode.Create;
HAnimJoint1058.NameField := 'r_metacarpal_2';
HAnimJoint1058.Center := Vector3(-0.1811,-0.0922,0.679);
HAnimJoint1058.SetUlimit([0,0,0]);
HAnimJoint1058.SetLlimit([0,0,0]);
HAnimSegment1059 := THAnimSegmentNode.Create;
HAnimSegment1059.NameField := 'SEGMENT_FOR_r_metacarpal_2';
TouchSensor1060 := TTouchSensorNode.Create;
TouchSensor1060.Description := 'joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2';
{ .AddChildren }
HAnimSegment1059.AddChildren([TouchSensor1060]);
Transform1061 := TTransformNode.Create;
Transform1061.Translation := Vector3(-0.1811,-0.0922,0.679);
Shape1062 := TShapeNode.Create;
Shape1062 := Shape16;
{ .AddChild }
Transform1061.AddChildren([Shape1062]);
{ .AddChildren }
HAnimSegment1059.AddChildren([Transform1061]);
HAnimSite1063 := THAnimSiteNode.Create;
HAnimSite1063.NameField := 'SEGMENT_FOR_r_metacarpal_2_tip';
Transform1064 := TTransformNode.Create;
Transform1064.Translation := Vector3(-0.1811,-0.0922,0.679);
Shape1065 := TShapeNode.Create;
Shape1065 := Shape11;
{ .AddChild }
Transform1064.AddChildren([Shape1065]);
{ .AddChildren }
HAnimSite1063.AddChildren([Transform1064]);
{ .AddChildren }
HAnimSegment1059.AddChildren([HAnimSite1063]);
{ .AddChildren }
HAnimJoint1058.AddChildren([HAnimSegment1059]);
HAnimJoint1066 := THAnimJointNode.Create;
HAnimJoint1066.NameField := 'r_carpal_proximal_phalanx_2';
HAnimJoint1066.Center := Vector3(-0.1835,-0.0868,0.6286);
HAnimJoint1066.SetUlimit([0,0,0]);
HAnimJoint1066.SetLlimit([0,0,0]);
HAnimSegment1067 := THAnimSegmentNode.Create;
HAnimSegment1067.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_2';
TouchSensor1068 := TTouchSensorNode.Create;
TouchSensor1068.Description := 'joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment1067.AddChildren([TouchSensor1068]);
Transform1069 := TTransformNode.Create;
Transform1069.Translation := Vector3(-0.1835,-0.0868,0.6286);
Shape1070 := TShapeNode.Create;
Shape1070 := Shape16;
{ .AddChild }
Transform1069.AddChildren([Shape1070]);
{ .AddChildren }
HAnimSegment1067.AddChildren([Transform1069]);
HAnimSite1071 := THAnimSiteNode.Create;
HAnimSite1071.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip';
Transform1072 := TTransformNode.Create;
Transform1072.Translation := Vector3(-0.1835,-0.0868,0.6286);
Shape1073 := TShapeNode.Create;
Shape1073 := Shape11;
{ .AddChild }
Transform1072.AddChildren([Shape1073]);
{ .AddChildren }
HAnimSite1071.AddChildren([Transform1072]);
{ .AddChildren }
HAnimSegment1067.AddChildren([HAnimSite1071]);
{ .AddChildren }
HAnimJoint1066.AddChildren([HAnimSegment1067]);
HAnimJoint1074 := THAnimJointNode.Create;
HAnimJoint1074.NameField := 'r_carpal_middle_phalanx_2';
HAnimJoint1074.Center := Vector3(-0.1815,-0.0877,0.5983);
HAnimJoint1074.SetUlimit([0,0,0]);
HAnimJoint1074.SetLlimit([0,0,0]);
HAnimSegment1075 := THAnimSegmentNode.Create;
HAnimSegment1075.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_2';
TouchSensor1076 := TTouchSensorNode.Create;
TouchSensor1076.Description := 'joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2';
{ .AddChildren }
HAnimSegment1075.AddChildren([TouchSensor1076]);
Transform1077 := TTransformNode.Create;
Transform1077.Translation := Vector3(-0.1815,-0.0877,0.5983);
Shape1078 := TShapeNode.Create;
Shape1078 := Shape16;
{ .AddChild }
Transform1077.AddChildren([Shape1078]);
{ .AddChildren }
HAnimSegment1075.AddChildren([Transform1077]);
HAnimSite1079 := THAnimSiteNode.Create;
HAnimSite1079.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_2_tip';
Transform1080 := TTransformNode.Create;
Transform1080.Translation := Vector3(-0.1815,-0.0877,0.5983);
Shape1081 := TShapeNode.Create;
Shape1081 := Shape11;
{ .AddChild }
Transform1080.AddChildren([Shape1081]);
{ .AddChildren }
HAnimSite1079.AddChildren([Transform1080]);
{ .AddChildren }
HAnimSegment1075.AddChildren([HAnimSite1079]);
{ .AddChildren }
HAnimJoint1074.AddChildren([HAnimSegment1075]);
HAnimJoint1082 := THAnimJointNode.Create;
HAnimJoint1082.NameField := 'r_carpal_distal_phalanx_2';
HAnimJoint1082.Center := Vector3(-0.1805,-0.0885,0.5731);
HAnimJoint1082.SetUlimit([0,0,0]);
HAnimJoint1082.SetLlimit([0,0,0]);
HAnimSegment1083 := THAnimSegmentNode.Create;
HAnimSegment1083.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_2';
TouchSensor1084 := TTouchSensorNode.Create;
TouchSensor1084.Description := 'joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2';
{ .AddChildren }
HAnimSegment1083.AddChildren([TouchSensor1084]);
Transform1085 := TTransformNode.Create;
Transform1085.Translation := Vector3(-0.1805,-0.0885,0.5731);
Shape1086 := TShapeNode.Create;
Shape1086 := Shape16;
{ .AddChild }
Transform1085.AddChildren([Shape1086]);
{ .AddChildren }
HAnimSegment1083.AddChildren([Transform1085]);
HAnimSite1087 := THAnimSiteNode.Create;
HAnimSite1087.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_2_tip';
Transform1088 := TTransformNode.Create;
Transform1088.Translation := Vector3(-0.1805,-0.0885,0.5731);
Shape1089 := TShapeNode.Create;
Shape1089 := Shape11;
{ .AddChild }
Transform1088.AddChildren([Shape1089]);
{ .AddChildren }
HAnimSite1087.AddChildren([Transform1088]);
{ .AddChildren }
HAnimSegment1083.AddChildren([HAnimSite1087]);
{ .AddChildren }
HAnimJoint1082.AddChildren([HAnimSegment1083]);
{ .AddChildren }
HAnimJoint1074.AddChildren([HAnimJoint1082]);
{ .AddChildren }
HAnimJoint1066.AddChildren([HAnimJoint1074]);
{ .AddChildren }
HAnimJoint1058.AddChildren([HAnimJoint1066]);
{ .AddChildren }
HAnimJoint1050.AddChildren([HAnimJoint1058]);
{ .AddChildren }
HAnimJoint1010.AddChildren([HAnimJoint1050]);
HAnimJoint1090 := THAnimJointNode.Create;
HAnimJoint1090.NameField := 'r_capitate';
HAnimJoint1090.Center := Vector3(-0.1809,-0.1067,0.7);
HAnimJoint1090.SetUlimit([0,0,0]);
HAnimJoint1090.SetLlimit([0,0,0]);
HAnimSegment1091 := THAnimSegmentNode.Create;
HAnimSegment1091.NameField := 'SEGMENT_FOR_r_capitate';
TouchSensor1092 := TTouchSensorNode.Create;
TouchSensor1092.Description := 'joint r_capitate segment SEGMENT_FOR_r_capitate';
{ .AddChildren }
HAnimSegment1091.AddChildren([TouchSensor1092]);
Transform1093 := TTransformNode.Create;
Transform1093.Translation := Vector3(-0.1809,-0.1067,0.7);
Shape1094 := TShapeNode.Create;
Shape1094 := Shape16;
{ .AddChild }
Transform1093.AddChildren([Shape1094]);
{ .AddChildren }
HAnimSegment1091.AddChildren([Transform1093]);
HAnimSite1095 := THAnimSiteNode.Create;
HAnimSite1095.NameField := 'SEGMENT_FOR_r_capitate_tip';
Transform1096 := TTransformNode.Create;
Transform1096.Translation := Vector3(-0.1809,-0.1067,0.7);
Shape1097 := TShapeNode.Create;
Shape1097 := Shape11;
{ .AddChild }
Transform1096.AddChildren([Shape1097]);
{ .AddChildren }
HAnimSite1095.AddChildren([Transform1096]);
{ .AddChildren }
HAnimSegment1091.AddChildren([HAnimSite1095]);
{ .AddChildren }
HAnimJoint1090.AddChildren([HAnimSegment1091]);
HAnimJoint1098 := THAnimJointNode.Create;
HAnimJoint1098.NameField := 'r_metacarpal_3';
HAnimJoint1098.Center := Vector3(-0.1809,-0.1081,0.6772);
HAnimJoint1098.SetUlimit([0,0,0]);
HAnimJoint1098.SetLlimit([0,0,0]);
HAnimSegment1099 := THAnimSegmentNode.Create;
HAnimSegment1099.NameField := 'SEGMENT_FOR_r_metacarpal_3';
TouchSensor1100 := TTouchSensorNode.Create;
TouchSensor1100.Description := 'joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3';
{ .AddChildren }
HAnimSegment1099.AddChildren([TouchSensor1100]);
Transform1101 := TTransformNode.Create;
Transform1101.Translation := Vector3(-0.1809,-0.1081,0.6772);
Shape1102 := TShapeNode.Create;
Shape1102 := Shape16;
{ .AddChild }
Transform1101.AddChildren([Shape1102]);
{ .AddChildren }
HAnimSegment1099.AddChildren([Transform1101]);
HAnimSite1103 := THAnimSiteNode.Create;
HAnimSite1103.NameField := 'SEGMENT_FOR_r_metacarpal_3_tip';
Transform1104 := TTransformNode.Create;
Transform1104.Translation := Vector3(-0.1809,-0.1081,0.6772);
Shape1105 := TShapeNode.Create;
Shape1105 := Shape11;
{ .AddChild }
Transform1104.AddChildren([Shape1105]);
{ .AddChildren }
HAnimSite1103.AddChildren([Transform1104]);
{ .AddChildren }
HAnimSegment1099.AddChildren([HAnimSite1103]);
{ .AddChildren }
HAnimJoint1098.AddChildren([HAnimSegment1099]);
HAnimJoint1106 := THAnimJointNode.Create;
HAnimJoint1106.NameField := 'r_carpal_proximal_phalanx_3';
HAnimJoint1106.Center := Vector3(-0.1835,-0.1058,0.6264);
HAnimJoint1106.SetUlimit([0,0,0]);
HAnimJoint1106.SetLlimit([0,0,0]);
HAnimSegment1107 := THAnimSegmentNode.Create;
HAnimSegment1107.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_3';
TouchSensor1108 := TTouchSensorNode.Create;
TouchSensor1108.Description := 'joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3';
{ .AddChildren }
HAnimSegment1107.AddChildren([TouchSensor1108]);
Transform1109 := TTransformNode.Create;
Transform1109.Translation := Vector3(-0.1835,-0.1058,0.6264);
Shape1110 := TShapeNode.Create;
Shape1110 := Shape16;
{ .AddChild }
Transform1109.AddChildren([Shape1110]);
{ .AddChildren }
HAnimSegment1107.AddChildren([Transform1109]);
HAnimSite1111 := THAnimSiteNode.Create;
HAnimSite1111.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip';
Transform1112 := TTransformNode.Create;
Transform1112.Translation := Vector3(-0.1835,-0.1058,0.6264);
Shape1113 := TShapeNode.Create;
Shape1113 := Shape11;
{ .AddChild }
Transform1112.AddChildren([Shape1113]);
{ .AddChildren }
HAnimSite1111.AddChildren([Transform1112]);
{ .AddChildren }
HAnimSegment1107.AddChildren([HAnimSite1111]);
{ .AddChildren }
HAnimJoint1106.AddChildren([HAnimSegment1107]);
HAnimJoint1114 := THAnimJointNode.Create;
HAnimJoint1114.NameField := 'r_carpal_middle_phalanx_3';
HAnimJoint1114.Center := Vector3(-0.1815,-0.1054,0.5947);
HAnimJoint1114.SetUlimit([0,0,0]);
HAnimJoint1114.SetLlimit([0,0,0]);
HAnimSegment1115 := THAnimSegmentNode.Create;
HAnimSegment1115.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_3';
TouchSensor1116 := TTouchSensorNode.Create;
TouchSensor1116.Description := 'joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3';
{ .AddChildren }
HAnimSegment1115.AddChildren([TouchSensor1116]);
Transform1117 := TTransformNode.Create;
Transform1117.Translation := Vector3(-0.1815,-0.1054,0.5947);
Shape1118 := TShapeNode.Create;
Shape1118 := Shape16;
{ .AddChild }
Transform1117.AddChildren([Shape1118]);
{ .AddChildren }
HAnimSegment1115.AddChildren([Transform1117]);
HAnimSite1119 := THAnimSiteNode.Create;
HAnimSite1119.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_3_tip';
Transform1120 := TTransformNode.Create;
Transform1120.Translation := Vector3(-0.1815,-0.1054,0.5947);
Shape1121 := TShapeNode.Create;
Shape1121 := Shape11;
{ .AddChild }
Transform1120.AddChildren([Shape1121]);
{ .AddChildren }
HAnimSite1119.AddChildren([Transform1120]);
{ .AddChildren }
HAnimSegment1115.AddChildren([HAnimSite1119]);
{ .AddChildren }
HAnimJoint1114.AddChildren([HAnimSegment1115]);
HAnimJoint1122 := THAnimJointNode.Create;
HAnimJoint1122.NameField := 'r_carpal_distal_phalanx_3';
HAnimJoint1122.Center := Vector3(-0.1805,-0.1056,0.5668);
HAnimJoint1122.SetUlimit([0,0,0]);
HAnimJoint1122.SetLlimit([0,0,0]);
HAnimSegment1123 := THAnimSegmentNode.Create;
HAnimSegment1123.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_3';
TouchSensor1124 := TTouchSensorNode.Create;
TouchSensor1124.Description := 'joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3';
{ .AddChildren }
HAnimSegment1123.AddChildren([TouchSensor1124]);
Transform1125 := TTransformNode.Create;
Transform1125.Translation := Vector3(-0.1805,-0.1056,0.5668);
Shape1126 := TShapeNode.Create;
Shape1126 := Shape16;
{ .AddChild }
Transform1125.AddChildren([Shape1126]);
{ .AddChildren }
HAnimSegment1123.AddChildren([Transform1125]);
HAnimSite1127 := THAnimSiteNode.Create;
HAnimSite1127.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_3_tip';
Transform1128 := TTransformNode.Create;
Transform1128.Translation := Vector3(-0.1805,-0.1056,0.5668);
Shape1129 := TShapeNode.Create;
Shape1129 := Shape11;
{ .AddChild }
Transform1128.AddChildren([Shape1129]);
{ .AddChildren }
HAnimSite1127.AddChildren([Transform1128]);
{ .AddChildren }
HAnimSegment1123.AddChildren([HAnimSite1127]);
{ .AddChildren }
HAnimJoint1122.AddChildren([HAnimSegment1123]);
{ .AddChildren }
HAnimJoint1114.AddChildren([HAnimJoint1122]);
{ .AddChildren }
HAnimJoint1106.AddChildren([HAnimJoint1114]);
{ .AddChildren }
HAnimJoint1098.AddChildren([HAnimJoint1106]);
{ .AddChildren }
HAnimJoint1090.AddChildren([HAnimJoint1098]);
{ .AddChildren }
HAnimJoint1010.AddChildren([HAnimJoint1090]);
HAnimJoint1130 := THAnimJointNode.Create;
HAnimJoint1130.NameField := 'r_hamate';
HAnimJoint1130.Center := Vector3(-0.1809,-0.1276,0.6973);
HAnimJoint1130.SetUlimit([0,0,0]);
HAnimJoint1130.SetLlimit([0,0,0]);
HAnimSegment1131 := THAnimSegmentNode.Create;
HAnimSegment1131.NameField := 'SEGMENT_FOR_r_hamate';
TouchSensor1132 := TTouchSensorNode.Create;
TouchSensor1132.Description := 'joint r_hamate segment SEGMENT_FOR_r_hamate';
{ .AddChildren }
HAnimSegment1131.AddChildren([TouchSensor1132]);
Transform1133 := TTransformNode.Create;
Transform1133.Translation := Vector3(-0.1809,-0.1276,0.6973);
Shape1134 := TShapeNode.Create;
Shape1134 := Shape16;
{ .AddChild }
Transform1133.AddChildren([Shape1134]);
{ .AddChildren }
HAnimSegment1131.AddChildren([Transform1133]);
HAnimSite1135 := THAnimSiteNode.Create;
HAnimSite1135.NameField := 'SEGMENT_FOR_r_hamate_tip';
Transform1136 := TTransformNode.Create;
Transform1136.Translation := Vector3(-0.1809,-0.1276,0.6973);
Shape1137 := TShapeNode.Create;
Shape1137 := Shape11;
{ .AddChild }
Transform1136.AddChildren([Shape1137]);
{ .AddChildren }
HAnimSite1135.AddChildren([Transform1136]);
{ .AddChildren }
HAnimSegment1131.AddChildren([HAnimSite1135]);
{ .AddChildren }
HAnimJoint1130.AddChildren([HAnimSegment1131]);
HAnimJoint1138 := THAnimJointNode.Create;
HAnimJoint1138.NameField := 'r_metacarpal_4';
HAnimJoint1138.Center := Vector3(-0.1809,-0.1218,0.6777);
HAnimJoint1138.SetUlimit([0,0,0]);
HAnimJoint1138.SetLlimit([0,0,0]);
HAnimSegment1139 := THAnimSegmentNode.Create;
HAnimSegment1139.NameField := 'SEGMENT_FOR_r_metacarpal_4';
TouchSensor1140 := TTouchSensorNode.Create;
TouchSensor1140.Description := 'joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4';
{ .AddChildren }
HAnimSegment1139.AddChildren([TouchSensor1140]);
Transform1141 := TTransformNode.Create;
Transform1141.Translation := Vector3(-0.1809,-0.1218,0.6777);
Shape1142 := TShapeNode.Create;
Shape1142 := Shape16;
{ .AddChild }
Transform1141.AddChildren([Shape1142]);
{ .AddChildren }
HAnimSegment1139.AddChildren([Transform1141]);
HAnimSite1143 := THAnimSiteNode.Create;
HAnimSite1143.NameField := 'SEGMENT_FOR_r_metacarpal_4_tip';
Transform1144 := TTransformNode.Create;
Transform1144.Translation := Vector3(-0.1809,-0.1218,0.6777);
Shape1145 := TShapeNode.Create;
Shape1145 := Shape11;
{ .AddChild }
Transform1144.AddChildren([Shape1145]);
{ .AddChildren }
HAnimSite1143.AddChildren([Transform1144]);
{ .AddChildren }
HAnimSegment1139.AddChildren([HAnimSite1143]);
{ .AddChildren }
HAnimJoint1138.AddChildren([HAnimSegment1139]);
HAnimJoint1146 := THAnimJointNode.Create;
HAnimJoint1146.NameField := 'r_carpal_proximal_phalanx_4';
HAnimJoint1146.Center := Vector3(-0.1835,-0.1233,0.6255);
HAnimJoint1146.SetUlimit([0,0,0]);
HAnimJoint1146.SetLlimit([0,0,0]);
HAnimSegment1147 := THAnimSegmentNode.Create;
HAnimSegment1147.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_4';
TouchSensor1148 := TTouchSensorNode.Create;
TouchSensor1148.Description := 'joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4';
{ .AddChildren }
HAnimSegment1147.AddChildren([TouchSensor1148]);
Transform1149 := TTransformNode.Create;
Transform1149.Translation := Vector3(-0.1835,-0.1233,0.6255);
Shape1150 := TShapeNode.Create;
Shape1150 := Shape16;
{ .AddChild }
Transform1149.AddChildren([Shape1150]);
{ .AddChildren }
HAnimSegment1147.AddChildren([Transform1149]);
HAnimSite1151 := THAnimSiteNode.Create;
HAnimSite1151.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip';
Transform1152 := TTransformNode.Create;
Transform1152.Translation := Vector3(-0.1835,-0.1233,0.6255);
Shape1153 := TShapeNode.Create;
Shape1153 := Shape11;
{ .AddChild }
Transform1152.AddChildren([Shape1153]);
{ .AddChildren }
HAnimSite1151.AddChildren([Transform1152]);
{ .AddChildren }
HAnimSegment1147.AddChildren([HAnimSite1151]);
{ .AddChildren }
HAnimJoint1146.AddChildren([HAnimSegment1147]);
HAnimJoint1154 := THAnimJointNode.Create;
HAnimJoint1154.NameField := 'r_carpal_middle_phalanx_4';
HAnimJoint1154.Center := Vector3(-0.1815,-0.1225,0.598);
HAnimJoint1154.SetUlimit([0,0,0]);
HAnimJoint1154.SetLlimit([0,0,0]);
HAnimSegment1155 := THAnimSegmentNode.Create;
HAnimSegment1155.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_4';
TouchSensor1156 := TTouchSensorNode.Create;
TouchSensor1156.Description := 'joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4';
{ .AddChildren }
HAnimSegment1155.AddChildren([TouchSensor1156]);
Transform1157 := TTransformNode.Create;
Transform1157.Translation := Vector3(-0.1815,-0.1225,0.598);
Shape1158 := TShapeNode.Create;
Shape1158 := Shape16;
{ .AddChild }
Transform1157.AddChildren([Shape1158]);
{ .AddChildren }
HAnimSegment1155.AddChildren([Transform1157]);
HAnimSite1159 := THAnimSiteNode.Create;
HAnimSite1159.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_4_tip';
Transform1160 := TTransformNode.Create;
Transform1160.Translation := Vector3(-0.1815,-0.1225,0.598);
Shape1161 := TShapeNode.Create;
Shape1161 := Shape11;
{ .AddChild }
Transform1160.AddChildren([Shape1161]);
{ .AddChildren }
HAnimSite1159.AddChildren([Transform1160]);
{ .AddChildren }
HAnimSegment1155.AddChildren([HAnimSite1159]);
{ .AddChildren }
HAnimJoint1154.AddChildren([HAnimSegment1155]);
HAnimJoint1162 := THAnimJointNode.Create;
HAnimJoint1162.NameField := 'r_carpal_distal_phalanx_4';
HAnimJoint1162.Center := Vector3(-0.1805,-0.1217,0.5722);
HAnimJoint1162.SetUlimit([0,0,0]);
HAnimJoint1162.SetLlimit([0,0,0]);
HAnimSegment1163 := THAnimSegmentNode.Create;
HAnimSegment1163.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_4';
TouchSensor1164 := TTouchSensorNode.Create;
TouchSensor1164.Description := 'joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4';
{ .AddChildren }
HAnimSegment1163.AddChildren([TouchSensor1164]);
Transform1165 := TTransformNode.Create;
Transform1165.Translation := Vector3(-0.1805,-0.1217,0.5722);
Shape1166 := TShapeNode.Create;
Shape1166 := Shape16;
{ .AddChild }
Transform1165.AddChildren([Shape1166]);
{ .AddChildren }
HAnimSegment1163.AddChildren([Transform1165]);
HAnimSite1167 := THAnimSiteNode.Create;
HAnimSite1167.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_4_tip';
Transform1168 := TTransformNode.Create;
Transform1168.Translation := Vector3(-0.1805,-0.1217,0.5722);
Shape1169 := TShapeNode.Create;
Shape1169 := Shape11;
{ .AddChild }
Transform1168.AddChildren([Shape1169]);
{ .AddChildren }
HAnimSite1167.AddChildren([Transform1168]);
{ .AddChildren }
HAnimSegment1163.AddChildren([HAnimSite1167]);
{ .AddChildren }
HAnimJoint1162.AddChildren([HAnimSegment1163]);
{ .AddChildren }
HAnimJoint1154.AddChildren([HAnimJoint1162]);
{ .AddChildren }
HAnimJoint1146.AddChildren([HAnimJoint1154]);
{ .AddChildren }
HAnimJoint1138.AddChildren([HAnimJoint1146]);
{ .AddChildren }
HAnimJoint1130.AddChildren([HAnimJoint1138]);
HAnimJoint1170 := THAnimJointNode.Create;
HAnimJoint1170.NameField := 'r_metacarpal_5';
HAnimJoint1170.Center := Vector3(-0.1814,-0.1347,0.6797);
HAnimJoint1170.SetUlimit([0,0,0]);
HAnimJoint1170.SetLlimit([0,0,0]);
HAnimSegment1171 := THAnimSegmentNode.Create;
HAnimSegment1171.NameField := 'SEGMENT_FOR_r_metacarpal_5';
TouchSensor1172 := TTouchSensorNode.Create;
TouchSensor1172.Description := 'joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5';
{ .AddChildren }
HAnimSegment1171.AddChildren([TouchSensor1172]);
Transform1173 := TTransformNode.Create;
Transform1173.Translation := Vector3(-0.1814,-0.1347,0.6797);
Shape1174 := TShapeNode.Create;
Shape1174 := Shape16;
{ .AddChild }
Transform1173.AddChildren([Shape1174]);
{ .AddChildren }
HAnimSegment1171.AddChildren([Transform1173]);
HAnimSite1175 := THAnimSiteNode.Create;
HAnimSite1175.NameField := 'SEGMENT_FOR_r_metacarpal_5_tip';
Transform1176 := TTransformNode.Create;
Transform1176.Translation := Vector3(-0.1814,-0.1347,0.6797);
Shape1177 := TShapeNode.Create;
Shape1177 := Shape11;
{ .AddChild }
Transform1176.AddChildren([Shape1177]);
{ .AddChildren }
HAnimSite1175.AddChildren([Transform1176]);
{ .AddChildren }
HAnimSegment1171.AddChildren([HAnimSite1175]);
{ .AddChildren }
HAnimJoint1170.AddChildren([HAnimSegment1171]);
HAnimJoint1178 := THAnimJointNode.Create;
HAnimJoint1178.NameField := 'r_carpal_proximal_phalanx_5';
HAnimJoint1178.Center := Vector3(-0.1832,-0.1389,0.6295);
HAnimJoint1178.SetUlimit([0,0,0]);
HAnimJoint1178.SetLlimit([0,0,0]);
HAnimSegment1179 := THAnimSegmentNode.Create;
HAnimSegment1179.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_5';
TouchSensor1180 := TTouchSensorNode.Create;
TouchSensor1180.Description := 'joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5';
{ .AddChildren }
HAnimSegment1179.AddChildren([TouchSensor1180]);
Transform1181 := TTransformNode.Create;
Transform1181.Translation := Vector3(-0.1832,-0.1389,0.6295);
Shape1182 := TShapeNode.Create;
Shape1182 := Shape16;
{ .AddChild }
Transform1181.AddChildren([Shape1182]);
{ .AddChildren }
HAnimSegment1179.AddChildren([Transform1181]);
HAnimSite1183 := THAnimSiteNode.Create;
HAnimSite1183.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip';
Transform1184 := TTransformNode.Create;
Transform1184.Translation := Vector3(-0.1832,-0.1389,0.6295);
Shape1185 := TShapeNode.Create;
Shape1185 := Shape11;
{ .AddChild }
Transform1184.AddChildren([Shape1185]);
{ .AddChildren }
HAnimSite1183.AddChildren([Transform1184]);
{ .AddChildren }
HAnimSegment1179.AddChildren([HAnimSite1183]);
{ .AddChildren }
HAnimJoint1178.AddChildren([HAnimSegment1179]);
HAnimJoint1186 := THAnimJointNode.Create;
HAnimJoint1186.NameField := 'r_carpal_middle_phalanx_5';
HAnimJoint1186.Center := Vector3(-0.1815,-0.139,0.6124);
HAnimJoint1186.SetUlimit([0,0,0]);
HAnimJoint1186.SetLlimit([0,0,0]);
HAnimSegment1187 := THAnimSegmentNode.Create;
HAnimSegment1187.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_5';
TouchSensor1188 := TTouchSensorNode.Create;
TouchSensor1188.Description := 'joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5';
{ .AddChildren }
HAnimSegment1187.AddChildren([TouchSensor1188]);
Transform1189 := TTransformNode.Create;
Transform1189.Translation := Vector3(-0.1815,-0.139,0.6124);
Shape1190 := TShapeNode.Create;
Shape1190 := Shape16;
{ .AddChild }
Transform1189.AddChildren([Shape1190]);
{ .AddChildren }
HAnimSegment1187.AddChildren([Transform1189]);
HAnimSite1191 := THAnimSiteNode.Create;
HAnimSite1191.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_5_tip';
Transform1192 := TTransformNode.Create;
Transform1192.Translation := Vector3(-0.1815,-0.139,0.6124);
Shape1193 := TShapeNode.Create;
Shape1193 := Shape11;
{ .AddChild }
Transform1192.AddChildren([Shape1193]);
{ .AddChildren }
HAnimSite1191.AddChildren([Transform1192]);
{ .AddChildren }
HAnimSegment1187.AddChildren([HAnimSite1191]);
{ .AddChildren }
HAnimJoint1186.AddChildren([HAnimSegment1187]);
HAnimJoint1194 := THAnimJointNode.Create;
HAnimJoint1194.NameField := 'r_carpal_distal_phalanx_5';
HAnimJoint1194.Center := Vector3(-0.1806,-0.1388,0.5938);
HAnimJoint1194.SetUlimit([0,0,0]);
HAnimJoint1194.SetLlimit([0,0,0]);
HAnimSegment1195 := THAnimSegmentNode.Create;
HAnimSegment1195.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_5';
TouchSensor1196 := TTouchSensorNode.Create;
TouchSensor1196.Description := 'joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5';
{ .AddChildren }
HAnimSegment1195.AddChildren([TouchSensor1196]);
Transform1197 := TTransformNode.Create;
Transform1197.Translation := Vector3(-0.1806,-0.1388,0.5938);
Shape1198 := TShapeNode.Create;
Shape1198 := Shape16;
{ .AddChild }
Transform1197.AddChildren([Shape1198]);
{ .AddChildren }
HAnimSegment1195.AddChildren([Transform1197]);
HAnimSite1199 := THAnimSiteNode.Create;
HAnimSite1199.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_5_tip';
Transform1200 := TTransformNode.Create;
Transform1200.Translation := Vector3(-0.1806,-0.1388,0.5938);
Shape1201 := TShapeNode.Create;
Shape1201 := Shape11;
{ .AddChild }
Transform1200.AddChildren([Shape1201]);
{ .AddChildren }
HAnimSite1199.AddChildren([Transform1200]);
{ .AddChildren }
HAnimSegment1195.AddChildren([HAnimSite1199]);
{ .AddChildren }
HAnimJoint1194.AddChildren([HAnimSegment1195]);
{ .AddChildren }
HAnimJoint1186.AddChildren([HAnimJoint1194]);
{ .AddChildren }
HAnimJoint1178.AddChildren([HAnimJoint1186]);
{ .AddChildren }
HAnimJoint1170.AddChildren([HAnimJoint1178]);
{ .AddChildren }
HAnimJoint1130.AddChildren([HAnimJoint1170]);
{ .AddChildren }
HAnimJoint1010.AddChildren([HAnimJoint1130]);
{ .AddChildren }
HAnimJoint1002.AddChildren([HAnimJoint1010]);
{ .AddChildren }
HAnimJoint994.AddChildren([HAnimJoint1002]);
{ .AddChildren }
HAnimJoint986.AddChildren([HAnimJoint994]);
{ .AddChildren }
HAnimJoint978.AddChildren([HAnimJoint986]);
{ .AddChildren }
HAnimJoint626.AddChildren([HAnimJoint978]);
{ .AddChildren }
HAnimJoint618.AddChildren([HAnimJoint626]);
{ .AddChildren }
HAnimJoint610.AddChildren([HAnimJoint618]);
{ .AddChildren }
HAnimJoint602.AddChildren([HAnimJoint610]);
{ .AddChildren }
HAnimJoint594.AddChildren([HAnimJoint602]);
{ .AddChildren }
HAnimJoint586.AddChildren([HAnimJoint594]);
{ .AddChildren }
HAnimJoint578.AddChildren([HAnimJoint586]);
{ .AddChildren }
HAnimJoint570.AddChildren([HAnimJoint578]);
{ .AddChildren }
HAnimJoint562.AddChildren([HAnimJoint570]);
{ .AddChildren }
HAnimJoint554.AddChildren([HAnimJoint562]);
{ .AddChildren }
HAnimJoint546.AddChildren([HAnimJoint554]);
{ .AddChildren }
HAnimJoint538.AddChildren([HAnimJoint546]);
{ .AddChildren }
HAnimJoint530.AddChildren([HAnimJoint538]);
{ .AddChildren }
HAnimJoint522.AddChildren([HAnimJoint530]);
{ .AddChildren }
HAnimJoint514.AddChildren([HAnimJoint522]);
{ .AddChildren }
HAnimJoint506.AddChildren([HAnimJoint514]);
{ .AddChildren }
HAnimJoint498.AddChildren([HAnimJoint506]);
{ .AddChildren }
HAnimJoint34.AddChildren([HAnimJoint498]);
{ .AddChildren }
HAnimJoint26.AddChildren([HAnimJoint34]);
{ .AddSkeleton }
HAnimHumanoid25.SetSkeleton([HAnimJoint26]);
HAnimJoint1202 := THAnimJointNode.Create;
HAnimJoint1202 := HAnimJoint34;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1202;
HAnimJoint1203 := THAnimJointNode.Create;
HAnimJoint1203 := HAnimJoint42;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1203;
HAnimJoint1204 := THAnimJointNode.Create;
HAnimJoint1204 := HAnimJoint50;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1204;
HAnimJoint1205 := THAnimJointNode.Create;
HAnimJoint1205 := HAnimJoint58;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1205;
HAnimJoint1206 := THAnimJointNode.Create;
HAnimJoint1206 := HAnimJoint66;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1206;
HAnimJoint1207 := THAnimJointNode.Create;
HAnimJoint1207 := HAnimJoint74;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1207;
HAnimJoint1208 := THAnimJointNode.Create;
HAnimJoint1208 := HAnimJoint82;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1208;
HAnimJoint1209 := THAnimJointNode.Create;
HAnimJoint1209 := HAnimJoint90;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1209;
HAnimJoint1210 := THAnimJointNode.Create;
HAnimJoint1210 := HAnimJoint98;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1210;
HAnimJoint1211 := THAnimJointNode.Create;
HAnimJoint1211 := HAnimJoint106;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1211;
HAnimJoint1212 := THAnimJointNode.Create;
HAnimJoint1212 := HAnimJoint114;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1212;
HAnimJoint1213 := THAnimJointNode.Create;
HAnimJoint1213 := HAnimJoint122;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1213;
HAnimJoint1214 := THAnimJointNode.Create;
HAnimJoint1214 := HAnimJoint130;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1214;
HAnimJoint1215 := THAnimJointNode.Create;
HAnimJoint1215 := HAnimJoint138;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1215;
HAnimJoint1216 := THAnimJointNode.Create;
HAnimJoint1216 := HAnimJoint146;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1216;
HAnimJoint1217 := THAnimJointNode.Create;
HAnimJoint1217 := HAnimJoint154;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1217;
HAnimJoint1218 := THAnimJointNode.Create;
HAnimJoint1218 := HAnimJoint162;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1218;
HAnimJoint1219 := THAnimJointNode.Create;
HAnimJoint1219 := HAnimJoint170;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1219;
HAnimJoint1220 := THAnimJointNode.Create;
HAnimJoint1220 := HAnimJoint178;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1220;
HAnimJoint1221 := THAnimJointNode.Create;
HAnimJoint1221 := HAnimJoint186;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1221;
HAnimJoint1222 := THAnimJointNode.Create;
HAnimJoint1222 := HAnimJoint194;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1222;
HAnimJoint1223 := THAnimJointNode.Create;
HAnimJoint1223 := HAnimJoint202;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1223;
HAnimJoint1224 := THAnimJointNode.Create;
HAnimJoint1224 := HAnimJoint210;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1224;
HAnimJoint1225 := THAnimJointNode.Create;
HAnimJoint1225 := HAnimJoint218;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1225;
HAnimJoint1226 := THAnimJointNode.Create;
HAnimJoint1226 := HAnimJoint226;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1226;
HAnimJoint1227 := THAnimJointNode.Create;
HAnimJoint1227 := HAnimJoint234;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1227;
HAnimJoint1228 := THAnimJointNode.Create;
HAnimJoint1228 := HAnimJoint242;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1228;
HAnimJoint1229 := THAnimJointNode.Create;
HAnimJoint1229 := HAnimJoint250;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1229;
HAnimJoint1230 := THAnimJointNode.Create;
HAnimJoint1230 := HAnimJoint258;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1230;
HAnimJoint1231 := THAnimJointNode.Create;
HAnimJoint1231 := HAnimJoint266;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1231;
HAnimJoint1232 := THAnimJointNode.Create;
HAnimJoint1232 := HAnimJoint274;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1232;
HAnimJoint1233 := THAnimJointNode.Create;
HAnimJoint1233 := HAnimJoint282;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1233;
HAnimJoint1234 := THAnimJointNode.Create;
HAnimJoint1234 := HAnimJoint290;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1234;
HAnimJoint1235 := THAnimJointNode.Create;
HAnimJoint1235 := HAnimJoint298;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1235;
HAnimJoint1236 := THAnimJointNode.Create;
HAnimJoint1236 := HAnimJoint306;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1236;
HAnimJoint1237 := THAnimJointNode.Create;
HAnimJoint1237 := HAnimJoint314;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1237;
HAnimJoint1238 := THAnimJointNode.Create;
HAnimJoint1238 := HAnimJoint322;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1238;
HAnimJoint1239 := THAnimJointNode.Create;
HAnimJoint1239 := HAnimJoint330;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1239;
HAnimJoint1240 := THAnimJointNode.Create;
HAnimJoint1240 := HAnimJoint338;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1240;
HAnimJoint1241 := THAnimJointNode.Create;
HAnimJoint1241 := HAnimJoint346;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1241;
HAnimJoint1242 := THAnimJointNode.Create;
HAnimJoint1242 := HAnimJoint354;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1242;
HAnimJoint1243 := THAnimJointNode.Create;
HAnimJoint1243 := HAnimJoint362;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1243;
HAnimJoint1244 := THAnimJointNode.Create;
HAnimJoint1244 := HAnimJoint370;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1244;
HAnimJoint1245 := THAnimJointNode.Create;
HAnimJoint1245 := HAnimJoint378;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1245;
HAnimJoint1246 := THAnimJointNode.Create;
HAnimJoint1246 := HAnimJoint386;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1246;
HAnimJoint1247 := THAnimJointNode.Create;
HAnimJoint1247 := HAnimJoint394;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1247;
HAnimJoint1248 := THAnimJointNode.Create;
HAnimJoint1248 := HAnimJoint402;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1248;
HAnimJoint1249 := THAnimJointNode.Create;
HAnimJoint1249 := HAnimJoint410;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1249;
HAnimJoint1250 := THAnimJointNode.Create;
HAnimJoint1250 := HAnimJoint418;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1250;
HAnimJoint1251 := THAnimJointNode.Create;
HAnimJoint1251 := HAnimJoint426;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1251;
HAnimJoint1252 := THAnimJointNode.Create;
HAnimJoint1252 := HAnimJoint434;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1252;
HAnimJoint1253 := THAnimJointNode.Create;
HAnimJoint1253 := HAnimJoint442;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1253;
HAnimJoint1254 := THAnimJointNode.Create;
HAnimJoint1254 := HAnimJoint450;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1254;
HAnimJoint1255 := THAnimJointNode.Create;
HAnimJoint1255 := HAnimJoint458;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1255;
HAnimJoint1256 := THAnimJointNode.Create;
HAnimJoint1256 := HAnimJoint466;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1256;
HAnimJoint1257 := THAnimJointNode.Create;
HAnimJoint1257 := HAnimJoint474;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1257;
HAnimJoint1258 := THAnimJointNode.Create;
HAnimJoint1258 := HAnimJoint482;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1258;
HAnimJoint1259 := THAnimJointNode.Create;
HAnimJoint1259 := HAnimJoint490;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1259;
HAnimJoint1260 := THAnimJointNode.Create;
HAnimJoint1260 := HAnimJoint498;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1260;
HAnimJoint1261 := THAnimJointNode.Create;
HAnimJoint1261 := HAnimJoint506;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1261;
HAnimJoint1262 := THAnimJointNode.Create;
HAnimJoint1262 := HAnimJoint514;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1262;
HAnimJoint1263 := THAnimJointNode.Create;
HAnimJoint1263 := HAnimJoint522;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1263;
HAnimJoint1264 := THAnimJointNode.Create;
HAnimJoint1264 := HAnimJoint530;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1264;
HAnimJoint1265 := THAnimJointNode.Create;
HAnimJoint1265 := HAnimJoint538;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1265;
HAnimJoint1266 := THAnimJointNode.Create;
HAnimJoint1266 := HAnimJoint546;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1266;
HAnimJoint1267 := THAnimJointNode.Create;
HAnimJoint1267 := HAnimJoint554;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1267;
HAnimJoint1268 := THAnimJointNode.Create;
HAnimJoint1268 := HAnimJoint562;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1268;
HAnimJoint1269 := THAnimJointNode.Create;
HAnimJoint1269 := HAnimJoint570;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1269;
HAnimJoint1270 := THAnimJointNode.Create;
HAnimJoint1270 := HAnimJoint578;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1270;
HAnimJoint1271 := THAnimJointNode.Create;
HAnimJoint1271 := HAnimJoint586;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1271;
HAnimJoint1272 := THAnimJointNode.Create;
HAnimJoint1272 := HAnimJoint594;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1272;
HAnimJoint1273 := THAnimJointNode.Create;
HAnimJoint1273 := HAnimJoint602;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1273;
HAnimJoint1274 := THAnimJointNode.Create;
HAnimJoint1274 := HAnimJoint610;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1274;
HAnimJoint1275 := THAnimJointNode.Create;
HAnimJoint1275 := HAnimJoint618;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1275;
HAnimJoint1276 := THAnimJointNode.Create;
HAnimJoint1276 := HAnimJoint626;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1276;
HAnimJoint1277 := THAnimJointNode.Create;
HAnimJoint1277 := HAnimJoint634;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1277;
HAnimJoint1278 := THAnimJointNode.Create;
HAnimJoint1278 := HAnimJoint642;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1278;
HAnimJoint1279 := THAnimJointNode.Create;
HAnimJoint1279 := HAnimJoint650;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1279;
HAnimJoint1280 := THAnimJointNode.Create;
HAnimJoint1280 := HAnimJoint658;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1280;
HAnimJoint1281 := THAnimJointNode.Create;
HAnimJoint1281 := HAnimJoint666;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1281;
HAnimJoint1282 := THAnimJointNode.Create;
HAnimJoint1282 := HAnimJoint674;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1282;
HAnimJoint1283 := THAnimJointNode.Create;
HAnimJoint1283 := HAnimJoint682;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1283;
HAnimJoint1284 := THAnimJointNode.Create;
HAnimJoint1284 := HAnimJoint690;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1284;
HAnimJoint1285 := THAnimJointNode.Create;
HAnimJoint1285 := HAnimJoint698;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1285;
HAnimJoint1286 := THAnimJointNode.Create;
HAnimJoint1286 := HAnimJoint706;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1286;
HAnimJoint1287 := THAnimJointNode.Create;
HAnimJoint1287 := HAnimJoint714;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1287;
HAnimJoint1288 := THAnimJointNode.Create;
HAnimJoint1288 := HAnimJoint722;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1288;
HAnimJoint1289 := THAnimJointNode.Create;
HAnimJoint1289 := HAnimJoint730;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1289;
HAnimJoint1290 := THAnimJointNode.Create;
HAnimJoint1290 := HAnimJoint738;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1290;
HAnimJoint1291 := THAnimJointNode.Create;
HAnimJoint1291 := HAnimJoint746;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1291;
HAnimJoint1292 := THAnimJointNode.Create;
HAnimJoint1292 := HAnimJoint754;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1292;
HAnimJoint1293 := THAnimJointNode.Create;
HAnimJoint1293 := HAnimJoint762;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1293;
HAnimJoint1294 := THAnimJointNode.Create;
HAnimJoint1294 := HAnimJoint770;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1294;
HAnimJoint1295 := THAnimJointNode.Create;
HAnimJoint1295 := HAnimJoint778;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1295;
HAnimJoint1296 := THAnimJointNode.Create;
HAnimJoint1296 := HAnimJoint786;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1296;
HAnimJoint1297 := THAnimJointNode.Create;
HAnimJoint1297 := HAnimJoint794;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1297;
HAnimJoint1298 := THAnimJointNode.Create;
HAnimJoint1298 := HAnimJoint802;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1298;
HAnimJoint1299 := THAnimJointNode.Create;
HAnimJoint1299 := HAnimJoint810;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1299;
HAnimJoint1300 := THAnimJointNode.Create;
HAnimJoint1300 := HAnimJoint818;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1300;
HAnimJoint1301 := THAnimJointNode.Create;
HAnimJoint1301 := HAnimJoint826;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1301;
HAnimJoint1302 := THAnimJointNode.Create;
HAnimJoint1302 := HAnimJoint834;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1302;
HAnimJoint1303 := THAnimJointNode.Create;
HAnimJoint1303 := HAnimJoint842;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1303;
HAnimJoint1304 := THAnimJointNode.Create;
HAnimJoint1304 := HAnimJoint850;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1304;
HAnimJoint1305 := THAnimJointNode.Create;
HAnimJoint1305 := HAnimJoint858;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1305;
HAnimJoint1306 := THAnimJointNode.Create;
HAnimJoint1306 := HAnimJoint866;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1306;
HAnimJoint1307 := THAnimJointNode.Create;
HAnimJoint1307 := HAnimJoint874;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1307;
HAnimJoint1308 := THAnimJointNode.Create;
HAnimJoint1308 := HAnimJoint882;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1308;
HAnimJoint1309 := THAnimJointNode.Create;
HAnimJoint1309 := HAnimJoint890;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1309;
HAnimJoint1310 := THAnimJointNode.Create;
HAnimJoint1310 := HAnimJoint898;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1310;
HAnimJoint1311 := THAnimJointNode.Create;
HAnimJoint1311 := HAnimJoint906;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1311;
HAnimJoint1312 := THAnimJointNode.Create;
HAnimJoint1312 := HAnimJoint914;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1312;
HAnimJoint1313 := THAnimJointNode.Create;
HAnimJoint1313 := HAnimJoint922;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1313;
HAnimJoint1314 := THAnimJointNode.Create;
HAnimJoint1314 := HAnimJoint930;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1314;
HAnimJoint1315 := THAnimJointNode.Create;
HAnimJoint1315 := HAnimJoint938;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1315;
HAnimJoint1316 := THAnimJointNode.Create;
HAnimJoint1316 := HAnimJoint946;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1316;
HAnimJoint1317 := THAnimJointNode.Create;
HAnimJoint1317 := HAnimJoint954;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1317;
HAnimJoint1318 := THAnimJointNode.Create;
HAnimJoint1318 := HAnimJoint962;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1318;
HAnimJoint1319 := THAnimJointNode.Create;
HAnimJoint1319 := HAnimJoint970;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1319;
HAnimJoint1320 := THAnimJointNode.Create;
HAnimJoint1320 := HAnimJoint978;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1320;
HAnimJoint1321 := THAnimJointNode.Create;
HAnimJoint1321 := HAnimJoint986;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1321;
HAnimJoint1322 := THAnimJointNode.Create;
HAnimJoint1322 := HAnimJoint994;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1322;
HAnimJoint1323 := THAnimJointNode.Create;
HAnimJoint1323 := HAnimJoint1002;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1323;
HAnimJoint1324 := THAnimJointNode.Create;
HAnimJoint1324 := HAnimJoint1010;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1324;
HAnimJoint1325 := THAnimJointNode.Create;
HAnimJoint1325 := HAnimJoint1018;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1325;
HAnimJoint1326 := THAnimJointNode.Create;
HAnimJoint1326 := HAnimJoint1026;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1326;
HAnimJoint1327 := THAnimJointNode.Create;
HAnimJoint1327 := HAnimJoint1034;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1327;
HAnimJoint1328 := THAnimJointNode.Create;
HAnimJoint1328 := HAnimJoint1042;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1328;
HAnimJoint1329 := THAnimJointNode.Create;
HAnimJoint1329 := HAnimJoint1050;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1329;
HAnimJoint1330 := THAnimJointNode.Create;
HAnimJoint1330 := HAnimJoint1058;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1330;
HAnimJoint1331 := THAnimJointNode.Create;
HAnimJoint1331 := HAnimJoint1066;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1331;
HAnimJoint1332 := THAnimJointNode.Create;
HAnimJoint1332 := HAnimJoint1074;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1332;
HAnimJoint1333 := THAnimJointNode.Create;
HAnimJoint1333 := HAnimJoint1082;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1333;
HAnimJoint1334 := THAnimJointNode.Create;
HAnimJoint1334 := HAnimJoint1090;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1334;
HAnimJoint1335 := THAnimJointNode.Create;
HAnimJoint1335 := HAnimJoint1098;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1335;
HAnimJoint1336 := THAnimJointNode.Create;
HAnimJoint1336 := HAnimJoint1106;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1336;
HAnimJoint1337 := THAnimJointNode.Create;
HAnimJoint1337 := HAnimJoint1114;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1337;
HAnimJoint1338 := THAnimJointNode.Create;
HAnimJoint1338 := HAnimJoint1122;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1338;
HAnimJoint1339 := THAnimJointNode.Create;
HAnimJoint1339 := HAnimJoint1130;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1339;
HAnimJoint1340 := THAnimJointNode.Create;
HAnimJoint1340 := HAnimJoint1138;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1340;
HAnimJoint1341 := THAnimJointNode.Create;
HAnimJoint1341 := HAnimJoint1146;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1341;
HAnimJoint1342 := THAnimJointNode.Create;
HAnimJoint1342 := HAnimJoint1154;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1342;
HAnimJoint1343 := THAnimJointNode.Create;
HAnimJoint1343 := HAnimJoint1162;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1343;
HAnimJoint1344 := THAnimJointNode.Create;
HAnimJoint1344 := HAnimJoint1170;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1344;
HAnimJoint1345 := THAnimJointNode.Create;
HAnimJoint1345 := HAnimJoint1178;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1345;
HAnimJoint1346 := THAnimJointNode.Create;
HAnimJoint1346 := HAnimJoint1186;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1346;
HAnimJoint1347 := THAnimJointNode.Create;
HAnimJoint1347 := HAnimJoint1194;
{ .AddJoints }
HAnimHumanoid25.Joints := HAnimJoint1347;
{ .AddChildren }
Transform24.AddChildren([HAnimHumanoid25]);
{ .AddChildren }
Group7.AddChildren([Transform24]);
TimeSensor1348 := TTimeSensorNode.Create;
TimeSensor1348.CycleInterval := 10.416666666666666;
TimeSensor1348.Loop := True;
{ .AddChildren }
Group7.AddChildren([TimeSensor1348]);
ProximitySensor1349 := TProximitySensorNode.Create;
ProximitySensor1349.Size := Vector3(1000000,1000000,1000000);
{ .AddChildren }
Group7.AddChildren([ProximitySensor1349]);
Group7.AddRoute(ProximitySensor1349.FdEntertime, TimeSensor1348.FdStarttime);
{ .AddX3DRoute }
OrientationInterpolator1351 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1351.SetKey([0,1]);
OrientationInterpolator1351.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1351]);
OrientationInterpolator1352 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1352.SetKey([0,1]);
OrientationInterpolator1352.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1352]);
OrientationInterpolator1353 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1353.SetKey([0,1]);
OrientationInterpolator1353.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1353]);
OrientationInterpolator1354 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1354.SetKey([0,1]);
OrientationInterpolator1354.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1354]);
OrientationInterpolator1355 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1355.SetKey([0,1]);
OrientationInterpolator1355.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1355]);
OrientationInterpolator1356 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1356.SetKey([0,1]);
OrientationInterpolator1356.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1356]);
OrientationInterpolator1357 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1357.SetKey([0,1]);
OrientationInterpolator1357.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1357]);
OrientationInterpolator1358 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1358.SetKey([0,1]);
OrientationInterpolator1358.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1358]);
OrientationInterpolator1359 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1359.SetKey([0,1]);
OrientationInterpolator1359.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1359]);
OrientationInterpolator1360 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1360.SetKey([0,1]);
OrientationInterpolator1360.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1360]);
OrientationInterpolator1361 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1361.SetKey([0,1]);
OrientationInterpolator1361.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1361]);
OrientationInterpolator1362 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1362.SetKey([0,1]);
OrientationInterpolator1362.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1362]);
OrientationInterpolator1363 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1363.SetKey([0,1]);
OrientationInterpolator1363.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1363]);
OrientationInterpolator1364 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1364.SetKey([0,1]);
OrientationInterpolator1364.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1364]);
OrientationInterpolator1365 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1365.SetKey([0,1]);
OrientationInterpolator1365.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1365]);
OrientationInterpolator1366 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1366.SetKey([0,1]);
OrientationInterpolator1366.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1366]);
OrientationInterpolator1367 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1367.SetKey([0,1]);
OrientationInterpolator1367.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1367]);
OrientationInterpolator1368 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1368.SetKey([0,1]);
OrientationInterpolator1368.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1368]);
OrientationInterpolator1369 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1369.SetKey([0,1]);
OrientationInterpolator1369.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1369]);
OrientationInterpolator1370 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1370.SetKey([0,1]);
OrientationInterpolator1370.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1370]);
OrientationInterpolator1371 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1371.SetKey([0,1]);
OrientationInterpolator1371.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1371]);
OrientationInterpolator1372 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1372.SetKey([0,1]);
OrientationInterpolator1372.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1372]);
OrientationInterpolator1373 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1373.SetKey([0,1]);
OrientationInterpolator1373.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1373]);
OrientationInterpolator1374 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1374.SetKey([0,1]);
OrientationInterpolator1374.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1374]);
OrientationInterpolator1375 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1375.SetKey([0,1]);
OrientationInterpolator1375.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1375]);
OrientationInterpolator1376 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1376.SetKey([0,1]);
OrientationInterpolator1376.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1376]);
OrientationInterpolator1377 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1377.SetKey([0,1]);
OrientationInterpolator1377.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1377]);
OrientationInterpolator1378 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1378.SetKey([0,1]);
OrientationInterpolator1378.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1378]);
OrientationInterpolator1379 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1379.SetKey([0,1]);
OrientationInterpolator1379.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1379]);
OrientationInterpolator1380 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1380.SetKey([0,1]);
OrientationInterpolator1380.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1380]);
OrientationInterpolator1381 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1381.SetKey([0,1]);
OrientationInterpolator1381.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1381]);
OrientationInterpolator1382 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1382.SetKey([0,1]);
OrientationInterpolator1382.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1382]);
OrientationInterpolator1383 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1383.SetKey([0,1]);
OrientationInterpolator1383.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1383]);
OrientationInterpolator1384 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1384.SetKey([0,1]);
OrientationInterpolator1384.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1384]);
OrientationInterpolator1385 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1385.SetKey([0,1]);
OrientationInterpolator1385.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1385]);
OrientationInterpolator1386 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1386.SetKey([0,1]);
OrientationInterpolator1386.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1386]);
OrientationInterpolator1387 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1387.SetKey([0,1]);
OrientationInterpolator1387.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1387]);
OrientationInterpolator1388 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1388.SetKey([0,1]);
OrientationInterpolator1388.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1388]);
OrientationInterpolator1389 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1389.SetKey([0,1]);
OrientationInterpolator1389.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1389]);
OrientationInterpolator1390 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1390.SetKey([0,1]);
OrientationInterpolator1390.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1390]);
OrientationInterpolator1391 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1391.SetKey([0,1]);
OrientationInterpolator1391.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1391]);
OrientationInterpolator1392 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1392.SetKey([0,1]);
OrientationInterpolator1392.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1392]);
OrientationInterpolator1393 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1393.SetKey([0,1]);
OrientationInterpolator1393.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1393]);
OrientationInterpolator1394 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1394.SetKey([0,1]);
OrientationInterpolator1394.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1394]);
OrientationInterpolator1395 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1395.SetKey([0,1]);
OrientationInterpolator1395.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1395]);
OrientationInterpolator1396 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1396.SetKey([0,1]);
OrientationInterpolator1396.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1396]);
OrientationInterpolator1397 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1397.SetKey([0,1]);
OrientationInterpolator1397.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1397]);
OrientationInterpolator1398 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1398.SetKey([0,1]);
OrientationInterpolator1398.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1398]);
OrientationInterpolator1399 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1399.SetKey([0,1]);
OrientationInterpolator1399.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1399]);
OrientationInterpolator1400 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1400.SetKey([0,1]);
OrientationInterpolator1400.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1400]);
OrientationInterpolator1401 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1401.SetKey([0,1]);
OrientationInterpolator1401.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1401]);
OrientationInterpolator1402 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1402.SetKey([0,1]);
OrientationInterpolator1402.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1402]);
OrientationInterpolator1403 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1403.SetKey([0,1]);
OrientationInterpolator1403.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1403]);
OrientationInterpolator1404 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1404.SetKey([0,1]);
OrientationInterpolator1404.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1404]);
OrientationInterpolator1405 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1405.SetKey([0,1]);
OrientationInterpolator1405.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1405]);
OrientationInterpolator1406 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1406.SetKey([0,1]);
OrientationInterpolator1406.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1406]);
OrientationInterpolator1407 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1407.SetKey([0,1]);
OrientationInterpolator1407.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1407]);
OrientationInterpolator1408 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1408.SetKey([0,1]);
OrientationInterpolator1408.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1408]);
OrientationInterpolator1409 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1409.SetKey([0,1]);
OrientationInterpolator1409.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1409]);
OrientationInterpolator1410 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1410.SetKey([0,1]);
OrientationInterpolator1410.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1410]);
OrientationInterpolator1411 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1411.SetKey([0,1]);
OrientationInterpolator1411.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1411]);
OrientationInterpolator1412 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1412.SetKey([0,1]);
OrientationInterpolator1412.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1412]);
OrientationInterpolator1413 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1413.SetKey([0,1]);
OrientationInterpolator1413.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1413]);
OrientationInterpolator1414 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1414.SetKey([0,1]);
OrientationInterpolator1414.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1414]);
OrientationInterpolator1415 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1415.SetKey([0,1]);
OrientationInterpolator1415.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1415]);
OrientationInterpolator1416 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1416.SetKey([0,1]);
OrientationInterpolator1416.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1416]);
OrientationInterpolator1417 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1417.SetKey([0,1]);
OrientationInterpolator1417.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1417]);
OrientationInterpolator1418 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1418.SetKey([0,1]);
OrientationInterpolator1418.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1418]);
OrientationInterpolator1419 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1419.SetKey([0,1]);
OrientationInterpolator1419.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1419]);
OrientationInterpolator1420 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1420.SetKey([0,1]);
OrientationInterpolator1420.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1420]);
OrientationInterpolator1421 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1421.SetKey([0,1]);
OrientationInterpolator1421.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1421]);
OrientationInterpolator1422 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1422.SetKey([0,1]);
OrientationInterpolator1422.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1422]);
OrientationInterpolator1423 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1423.SetKey([0,1]);
OrientationInterpolator1423.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1423]);
OrientationInterpolator1424 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1424.SetKey([0,1]);
OrientationInterpolator1424.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1424]);
OrientationInterpolator1425 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1425.SetKey([0,1]);
OrientationInterpolator1425.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1425]);
OrientationInterpolator1426 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1426.SetKey([0,1]);
OrientationInterpolator1426.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1426]);
OrientationInterpolator1427 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1427.SetKey([0,1]);
OrientationInterpolator1427.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1427]);
OrientationInterpolator1428 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1428.SetKey([0,1]);
OrientationInterpolator1428.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1428]);
OrientationInterpolator1429 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1429.SetKey([0,1]);
OrientationInterpolator1429.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1429]);
OrientationInterpolator1430 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1430.SetKey([0,1]);
OrientationInterpolator1430.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1430]);
OrientationInterpolator1431 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1431.SetKey([0,1]);
OrientationInterpolator1431.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1431]);
OrientationInterpolator1432 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1432.SetKey([0,1]);
OrientationInterpolator1432.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1432]);
OrientationInterpolator1433 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1433.SetKey([0,1]);
OrientationInterpolator1433.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1433]);
OrientationInterpolator1434 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1434.SetKey([0,1]);
OrientationInterpolator1434.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1434]);
OrientationInterpolator1435 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1435.SetKey([0,1]);
OrientationInterpolator1435.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1435]);
OrientationInterpolator1436 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1436.SetKey([0,1]);
OrientationInterpolator1436.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1436]);
OrientationInterpolator1437 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1437.SetKey([0,1]);
OrientationInterpolator1437.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1437]);
OrientationInterpolator1438 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1438.SetKey([0,1]);
OrientationInterpolator1438.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1438]);
OrientationInterpolator1439 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1439.SetKey([0,1]);
OrientationInterpolator1439.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1439]);
OrientationInterpolator1440 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1440.SetKey([0,1]);
OrientationInterpolator1440.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1440]);
OrientationInterpolator1441 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1441.SetKey([0,1]);
OrientationInterpolator1441.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1441]);
OrientationInterpolator1442 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1442.SetKey([0,1]);
OrientationInterpolator1442.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1442]);
OrientationInterpolator1443 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1443.SetKey([0,1]);
OrientationInterpolator1443.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1443]);
OrientationInterpolator1444 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1444.SetKey([0,1]);
OrientationInterpolator1444.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1444]);
OrientationInterpolator1445 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1445.SetKey([0,1]);
OrientationInterpolator1445.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1445]);
OrientationInterpolator1446 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1446.SetKey([0,1]);
OrientationInterpolator1446.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1446]);
OrientationInterpolator1447 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1447.SetKey([0,1]);
OrientationInterpolator1447.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1447]);
OrientationInterpolator1448 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1448.SetKey([0,1]);
OrientationInterpolator1448.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1448]);
OrientationInterpolator1449 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1449.SetKey([0,1]);
OrientationInterpolator1449.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1449]);
OrientationInterpolator1450 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1450.SetKey([0,1]);
OrientationInterpolator1450.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1450]);
OrientationInterpolator1451 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1451.SetKey([0,1]);
OrientationInterpolator1451.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1451]);
OrientationInterpolator1452 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1452.SetKey([0,1]);
OrientationInterpolator1452.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1452]);
OrientationInterpolator1453 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1453.SetKey([0,1]);
OrientationInterpolator1453.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1453]);
OrientationInterpolator1454 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1454.SetKey([0,1]);
OrientationInterpolator1454.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1454]);
OrientationInterpolator1455 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1455.SetKey([0,1]);
OrientationInterpolator1455.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1455]);
OrientationInterpolator1456 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1456.SetKey([0,1]);
OrientationInterpolator1456.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1456]);
OrientationInterpolator1457 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1457.SetKey([0,1]);
OrientationInterpolator1457.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1457]);
OrientationInterpolator1458 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1458.SetKey([0,1]);
OrientationInterpolator1458.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1458]);
OrientationInterpolator1459 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1459.SetKey([0,1]);
OrientationInterpolator1459.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1459]);
OrientationInterpolator1460 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1460.SetKey([0,1]);
OrientationInterpolator1460.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1460]);
OrientationInterpolator1461 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1461.SetKey([0,1]);
OrientationInterpolator1461.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1461]);
OrientationInterpolator1462 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1462.SetKey([0,1]);
OrientationInterpolator1462.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1462]);
OrientationInterpolator1463 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1463.SetKey([0,1]);
OrientationInterpolator1463.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1463]);
OrientationInterpolator1464 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1464.SetKey([0,1]);
OrientationInterpolator1464.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1464]);
OrientationInterpolator1465 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1465.SetKey([0,1]);
OrientationInterpolator1465.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1465]);
OrientationInterpolator1466 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1466.SetKey([0,1]);
OrientationInterpolator1466.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1466]);
OrientationInterpolator1467 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1467.SetKey([0,1]);
OrientationInterpolator1467.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1467]);
OrientationInterpolator1468 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1468.SetKey([0,1]);
OrientationInterpolator1468.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1468]);
OrientationInterpolator1469 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1469.SetKey([0,1]);
OrientationInterpolator1469.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1469]);
OrientationInterpolator1470 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1470.SetKey([0,1]);
OrientationInterpolator1470.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1470]);
OrientationInterpolator1471 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1471.SetKey([0,1]);
OrientationInterpolator1471.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1471]);
OrientationInterpolator1472 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1472.SetKey([0,1]);
OrientationInterpolator1472.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1472]);
OrientationInterpolator1473 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1473.SetKey([0,1]);
OrientationInterpolator1473.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1473]);
OrientationInterpolator1474 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1474.SetKey([0,1]);
OrientationInterpolator1474.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1474]);
OrientationInterpolator1475 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1475.SetKey([0,1]);
OrientationInterpolator1475.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1475]);
OrientationInterpolator1476 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1476.SetKey([0,1]);
OrientationInterpolator1476.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1476]);
OrientationInterpolator1477 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1477.SetKey([0,1]);
OrientationInterpolator1477.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1477]);
OrientationInterpolator1478 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1478.SetKey([0,1]);
OrientationInterpolator1478.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1478]);
OrientationInterpolator1479 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1479.SetKey([0,1]);
OrientationInterpolator1479.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1479]);
OrientationInterpolator1480 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1480.SetKey([0,1]);
OrientationInterpolator1480.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1480]);
OrientationInterpolator1481 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1481.SetKey([0,1]);
OrientationInterpolator1481.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1481]);
OrientationInterpolator1482 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1482.SetKey([0,1]);
OrientationInterpolator1482.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1482]);
OrientationInterpolator1483 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1483.SetKey([0,1]);
OrientationInterpolator1483.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1483]);
OrientationInterpolator1484 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1484.SetKey([0,1]);
OrientationInterpolator1484.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1484]);
OrientationInterpolator1485 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1485.SetKey([0,1]);
OrientationInterpolator1485.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1485]);
OrientationInterpolator1486 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1486.SetKey([0,1]);
OrientationInterpolator1486.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1486]);
OrientationInterpolator1487 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1487.SetKey([0,1]);
OrientationInterpolator1487.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1487]);
OrientationInterpolator1488 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1488.SetKey([0,1]);
OrientationInterpolator1488.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1488]);
OrientationInterpolator1489 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1489.SetKey([0,1]);
OrientationInterpolator1489.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1489]);
OrientationInterpolator1490 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1490.SetKey([0,1]);
OrientationInterpolator1490.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1490]);
OrientationInterpolator1491 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1491.SetKey([0,1]);
OrientationInterpolator1491.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1491]);
OrientationInterpolator1492 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1492.SetKey([0,1]);
OrientationInterpolator1492.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1492]);
OrientationInterpolator1493 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1493.SetKey([0,1]);
OrientationInterpolator1493.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1493]);
OrientationInterpolator1494 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1494.SetKey([0,1]);
OrientationInterpolator1494.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1494]);
OrientationInterpolator1495 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1495.SetKey([0,1]);
OrientationInterpolator1495.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1495]);
OrientationInterpolator1496 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1496.SetKey([0,1]);
OrientationInterpolator1496.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator1496]);
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1351.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1351.EventValue_changed, HAnimJoint34.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1352.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1352.EventValue_changed, HAnimJoint42.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1353.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1353.EventValue_changed, HAnimJoint50.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1354.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1354.EventValue_changed, HAnimJoint58.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1355.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1355.EventValue_changed, HAnimJoint66.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1356.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1356.EventValue_changed, HAnimJoint74.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1357.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1357.EventValue_changed, HAnimJoint82.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1358.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1358.EventValue_changed, HAnimJoint90.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1359.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1359.EventValue_changed, HAnimJoint98.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1360.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1360.EventValue_changed, HAnimJoint106.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1361.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1361.EventValue_changed, HAnimJoint114.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1362.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1362.EventValue_changed, HAnimJoint122.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1363.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1363.EventValue_changed, HAnimJoint130.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1364.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1364.EventValue_changed, HAnimJoint138.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1365.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1365.EventValue_changed, HAnimJoint146.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1366.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1366.EventValue_changed, HAnimJoint154.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1367.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1367.EventValue_changed, HAnimJoint162.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1368.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1368.EventValue_changed, HAnimJoint170.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1369.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1369.EventValue_changed, HAnimJoint178.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1370.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1370.EventValue_changed, HAnimJoint186.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1371.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1371.EventValue_changed, HAnimJoint194.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1372.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1372.EventValue_changed, HAnimJoint202.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1373.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1373.EventValue_changed, HAnimJoint210.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1374.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1374.EventValue_changed, HAnimJoint218.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1375.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1375.EventValue_changed, HAnimJoint226.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1376.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1376.EventValue_changed, HAnimJoint234.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1377.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1377.EventValue_changed, HAnimJoint242.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1378.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1378.EventValue_changed, HAnimJoint250.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1379.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1379.EventValue_changed, HAnimJoint258.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1380.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1380.EventValue_changed, HAnimJoint266.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1381.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1381.EventValue_changed, HAnimJoint274.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1382.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1382.EventValue_changed, HAnimJoint282.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1383.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1383.EventValue_changed, HAnimJoint290.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1384.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1384.EventValue_changed, HAnimJoint298.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1385.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1385.EventValue_changed, HAnimJoint306.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1386.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1386.EventValue_changed, HAnimJoint314.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1387.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1387.EventValue_changed, HAnimJoint322.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1388.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1388.EventValue_changed, HAnimJoint330.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1389.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1389.EventValue_changed, HAnimJoint338.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1390.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1390.EventValue_changed, HAnimJoint346.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1391.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1391.EventValue_changed, HAnimJoint354.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1392.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1392.EventValue_changed, HAnimJoint362.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1393.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1393.EventValue_changed, HAnimJoint370.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1394.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1394.EventValue_changed, HAnimJoint378.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1395.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1395.EventValue_changed, HAnimJoint386.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1396.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1396.EventValue_changed, HAnimJoint394.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1397.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1397.EventValue_changed, HAnimJoint402.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1398.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1398.EventValue_changed, HAnimJoint410.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1399.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1399.EventValue_changed, HAnimJoint418.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1400.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1400.EventValue_changed, HAnimJoint426.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1401.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1401.EventValue_changed, HAnimJoint434.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1402.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1402.EventValue_changed, HAnimJoint442.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1403.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1403.EventValue_changed, HAnimJoint450.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1404.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1404.EventValue_changed, HAnimJoint458.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1405.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1405.EventValue_changed, HAnimJoint466.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1406.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1406.EventValue_changed, HAnimJoint474.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1407.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1407.EventValue_changed, HAnimJoint482.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1408.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1408.EventValue_changed, HAnimJoint490.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1409.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1409.EventValue_changed, HAnimJoint498.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1410.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1410.EventValue_changed, HAnimJoint506.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1411.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1411.EventValue_changed, HAnimJoint514.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1412.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1412.EventValue_changed, HAnimJoint522.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1413.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1413.EventValue_changed, HAnimJoint530.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1414.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1414.EventValue_changed, HAnimJoint538.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1415.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1415.EventValue_changed, HAnimJoint546.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1416.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1416.EventValue_changed, HAnimJoint554.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1417.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1417.EventValue_changed, HAnimJoint562.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1418.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1418.EventValue_changed, HAnimJoint570.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1419.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1419.EventValue_changed, HAnimJoint578.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1420.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1420.EventValue_changed, HAnimJoint586.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1421.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1421.EventValue_changed, HAnimJoint594.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1422.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1422.EventValue_changed, HAnimJoint602.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1423.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1423.EventValue_changed, HAnimJoint610.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1424.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1424.EventValue_changed, HAnimJoint618.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1425.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1425.EventValue_changed, HAnimJoint626.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1426.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1426.EventValue_changed, HAnimJoint634.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1427.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1427.EventValue_changed, HAnimJoint642.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1428.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1428.EventValue_changed, HAnimJoint650.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1429.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1429.EventValue_changed, HAnimJoint658.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1430.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1430.EventValue_changed, HAnimJoint666.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1431.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1431.EventValue_changed, HAnimJoint674.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1432.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1432.EventValue_changed, HAnimJoint682.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1433.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1433.EventValue_changed, HAnimJoint690.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1434.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1434.EventValue_changed, HAnimJoint698.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1435.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1435.EventValue_changed, HAnimJoint706.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1436.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1436.EventValue_changed, HAnimJoint714.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1437.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1437.EventValue_changed, HAnimJoint722.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1438.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1438.EventValue_changed, HAnimJoint730.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1439.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1439.EventValue_changed, HAnimJoint738.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1440.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1440.EventValue_changed, HAnimJoint746.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1441.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1441.EventValue_changed, HAnimJoint754.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1442.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1442.EventValue_changed, HAnimJoint762.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1443.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1443.EventValue_changed, HAnimJoint770.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1444.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1444.EventValue_changed, HAnimJoint778.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1445.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1445.EventValue_changed, HAnimJoint786.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1446.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1446.EventValue_changed, HAnimJoint794.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1447.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1447.EventValue_changed, HAnimJoint802.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1448.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1448.EventValue_changed, HAnimJoint810.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1449.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1449.EventValue_changed, HAnimJoint818.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1450.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1450.EventValue_changed, HAnimJoint826.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1451.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1451.EventValue_changed, HAnimJoint834.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1452.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1452.EventValue_changed, HAnimJoint842.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1453.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1453.EventValue_changed, HAnimJoint850.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1454.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1454.EventValue_changed, HAnimJoint858.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1455.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1455.EventValue_changed, HAnimJoint866.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1456.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1456.EventValue_changed, HAnimJoint874.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1457.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1457.EventValue_changed, HAnimJoint882.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1458.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1458.EventValue_changed, HAnimJoint890.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1459.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1459.EventValue_changed, HAnimJoint898.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1460.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1460.EventValue_changed, HAnimJoint906.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1461.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1461.EventValue_changed, HAnimJoint914.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1462.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1462.EventValue_changed, HAnimJoint922.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1463.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1463.EventValue_changed, HAnimJoint930.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1464.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1464.EventValue_changed, HAnimJoint938.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1465.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1465.EventValue_changed, HAnimJoint946.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1466.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1466.EventValue_changed, HAnimJoint954.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1467.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1467.EventValue_changed, HAnimJoint962.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1468.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1468.EventValue_changed, HAnimJoint970.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1469.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1469.EventValue_changed, HAnimJoint978.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1470.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1470.EventValue_changed, HAnimJoint986.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1471.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1471.EventValue_changed, HAnimJoint994.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1472.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1472.EventValue_changed, HAnimJoint1002.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1473.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1473.EventValue_changed, HAnimJoint1010.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1474.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1474.EventValue_changed, HAnimJoint1018.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1475.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1475.EventValue_changed, HAnimJoint1026.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1476.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1476.EventValue_changed, HAnimJoint1034.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1477.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1477.EventValue_changed, HAnimJoint1042.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1478.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1478.EventValue_changed, HAnimJoint1050.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1479.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1479.EventValue_changed, HAnimJoint1058.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1480.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1480.EventValue_changed, HAnimJoint1066.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1481.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1481.EventValue_changed, HAnimJoint1074.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1482.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1482.EventValue_changed, HAnimJoint1082.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1483.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1483.EventValue_changed, HAnimJoint1090.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1484.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1484.EventValue_changed, HAnimJoint1098.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1485.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1485.EventValue_changed, HAnimJoint1106.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1486.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1486.EventValue_changed, HAnimJoint1114.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1487.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1487.EventValue_changed, HAnimJoint1122.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1488.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1488.EventValue_changed, HAnimJoint1130.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1489.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1489.EventValue_changed, HAnimJoint1138.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1490.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1490.EventValue_changed, HAnimJoint1146.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1491.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1491.EventValue_changed, HAnimJoint1154.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1492.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1492.EventValue_changed, HAnimJoint1162.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1493.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1493.EventValue_changed, HAnimJoint1170.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1494.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1494.EventValue_changed, HAnimJoint1178.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1495.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1495.EventValue_changed, HAnimJoint1186.FdRotation);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor1348.EventFraction_changed, OrientationInterpolator1496.EventSet_fraction);
{ .AddX3DRoute }
Group7.AddRoute(OrientationInterpolator1496.EventValue_changed, HAnimJoint1194.FdRotation);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
