function HAnim1SpecificationLOA3Animation: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group29: TGroupNode;
Background30: TBackgroundNode;
NavigationInfo31: TNavigationInfoNode;
Group32: TGroupNode;
WorldInfo33: TWorldInfoNode;
Viewpoint34: TViewpointNode;
Viewpoint35: TViewpointNode;
Viewpoint36: TViewpointNode;
Viewpoint37: TViewpointNode;
Viewpoint38: TViewpointNode;
Viewpoint39: TViewpointNode;
Viewpoint40: TViewpointNode;
Viewpoint41: TViewpointNode;
Viewpoint42: TViewpointNode;
HAnimHumanoid43: THAnimHumanoidNode;
HAnimJoint44: THAnimJointNode;
HAnimSegment45: THAnimSegmentNode;
TouchSensor46: TTouchSensorNode;
Transform47: TTransformNode;
Shape48: TShapeNode;
Appearance49: TAppearanceNode;
Material50: TMaterialNode;
Sphere51: TSphereNode;
Shape52: TShapeNode;
LineSet53: TLineSetNode;
ColorRGBA54: TColorRGBANode;
Coordinate55: TCoordinateNode;
Shape56: TShapeNode;
LineSet57: TLineSetNode;
ColorRGBA58: TColorRGBANode;
Coordinate59: TCoordinateNode;
HAnimJoint60: THAnimJointNode;
HAnimSegment61: THAnimSegmentNode;
TouchSensor62: TTouchSensorNode;
Transform63: TTransformNode;
Shape64: TShapeNode;
Shape65: TShapeNode;
LineSet66: TLineSetNode;
ColorRGBA67: TColorRGBANode;
Coordinate68: TCoordinateNode;
Shape69: TShapeNode;
LineSet70: TLineSetNode;
ColorRGBA71: TColorRGBANode;
Coordinate72: TCoordinateNode;
Shape73: TShapeNode;
LineSet74: TLineSetNode;
ColorRGBA75: TColorRGBANode;
Coordinate76: TCoordinateNode;
Shape77: TShapeNode;
LineSet78: TLineSetNode;
ColorRGBA79: TColorRGBANode;
Coordinate80: TCoordinateNode;
Shape81: TShapeNode;
LineSet82: TLineSetNode;
ColorRGBA83: TColorRGBANode;
Coordinate84: TCoordinateNode;
Shape85: TShapeNode;
LineSet86: TLineSetNode;
ColorRGBA87: TColorRGBANode;
Coordinate88: TCoordinateNode;
Shape89: TShapeNode;
LineSet90: TLineSetNode;
ColorRGBA91: TColorRGBANode;
Coordinate92: TCoordinateNode;
Shape93: TShapeNode;
LineSet94: TLineSetNode;
ColorRGBA95: TColorRGBANode;
Coordinate96: TCoordinateNode;
Shape97: TShapeNode;
LineSet98: TLineSetNode;
ColorRGBA99: TColorRGBANode;
Coordinate100: TCoordinateNode;
Shape101: TShapeNode;
LineSet102: TLineSetNode;
ColorRGBA103: TColorRGBANode;
Coordinate104: TCoordinateNode;
Shape105: TShapeNode;
LineSet106: TLineSetNode;
ColorRGBA107: TColorRGBANode;
Coordinate108: TCoordinateNode;
HAnimSite109: THAnimSiteNode;
TouchSensor110: TTouchSensorNode;
Shape111: TShapeNode;
Appearance112: TAppearanceNode;
Material113: TMaterialNode;
IndexedFaceSet114: TIndexedFaceSetNode;
Coordinate115: TCoordinateNode;
HAnimSite116: THAnimSiteNode;
TouchSensor117: TTouchSensorNode;
Shape118: TShapeNode;
HAnimSite119: THAnimSiteNode;
TouchSensor120: TTouchSensorNode;
Shape121: TShapeNode;
HAnimSite122: THAnimSiteNode;
TouchSensor123: TTouchSensorNode;
Shape124: TShapeNode;
HAnimSite125: THAnimSiteNode;
TouchSensor126: TTouchSensorNode;
Shape127: TShapeNode;
HAnimSite128: THAnimSiteNode;
TouchSensor129: TTouchSensorNode;
Shape130: TShapeNode;
HAnimSite131: THAnimSiteNode;
TouchSensor132: TTouchSensorNode;
Shape133: TShapeNode;
HAnimSite134: THAnimSiteNode;
TouchSensor135: TTouchSensorNode;
Shape136: TShapeNode;
HAnimSite137: THAnimSiteNode;
TouchSensor138: TTouchSensorNode;
Shape139: TShapeNode;
HAnimJoint140: THAnimJointNode;
HAnimSegment141: THAnimSegmentNode;
TouchSensor142: TTouchSensorNode;
Transform143: TTransformNode;
Shape144: TShapeNode;
Shape145: TShapeNode;
LineSet146: TLineSetNode;
ColorRGBA147: TColorRGBANode;
Coordinate148: TCoordinateNode;
Shape149: TShapeNode;
LineSet150: TLineSetNode;
ColorRGBA151: TColorRGBANode;
Coordinate152: TCoordinateNode;
Shape153: TShapeNode;
LineSet154: TLineSetNode;
ColorRGBA155: TColorRGBANode;
Coordinate156: TCoordinateNode;
Shape157: TShapeNode;
LineSet158: TLineSetNode;
ColorRGBA159: TColorRGBANode;
Coordinate160: TCoordinateNode;
HAnimSite161: THAnimSiteNode;
TouchSensor162: TTouchSensorNode;
Shape163: TShapeNode;
HAnimSite164: THAnimSiteNode;
TouchSensor165: TTouchSensorNode;
Shape166: TShapeNode;
HAnimSite167: THAnimSiteNode;
TouchSensor168: TTouchSensorNode;
Shape169: TShapeNode;
HAnimJoint170: THAnimJointNode;
HAnimSegment171: THAnimSegmentNode;
TouchSensor172: TTouchSensorNode;
Transform173: TTransformNode;
Shape174: TShapeNode;
Shape175: TShapeNode;
LineSet176: TLineSetNode;
ColorRGBA177: TColorRGBANode;
Coordinate178: TCoordinateNode;
HAnimJoint179: THAnimJointNode;
HAnimSegment180: THAnimSegmentNode;
TouchSensor181: TTouchSensorNode;
Transform182: TTransformNode;
Shape183: TShapeNode;
Shape184: TShapeNode;
LineSet185: TLineSetNode;
ColorRGBA186: TColorRGBANode;
Coordinate187: TCoordinateNode;
Shape188: TShapeNode;
LineSet189: TLineSetNode;
ColorRGBA190: TColorRGBANode;
Coordinate191: TCoordinateNode;
Shape192: TShapeNode;
LineSet193: TLineSetNode;
ColorRGBA194: TColorRGBANode;
Coordinate195: TCoordinateNode;
Shape196: TShapeNode;
LineSet197: TLineSetNode;
ColorRGBA198: TColorRGBANode;
Coordinate199: TCoordinateNode;
Shape200: TShapeNode;
LineSet201: TLineSetNode;
ColorRGBA202: TColorRGBANode;
Coordinate203: TCoordinateNode;
HAnimSite204: THAnimSiteNode;
TouchSensor205: TTouchSensorNode;
Shape206: TShapeNode;
HAnimSite207: THAnimSiteNode;
TouchSensor208: TTouchSensorNode;
Shape209: TShapeNode;
HAnimSite210: THAnimSiteNode;
TouchSensor211: TTouchSensorNode;
Shape212: TShapeNode;
HAnimSite213: THAnimSiteNode;
TouchSensor214: TTouchSensorNode;
Shape215: TShapeNode;
HAnimJoint216: THAnimJointNode;
HAnimSegment217: THAnimSegmentNode;
TouchSensor218: TTouchSensorNode;
Transform219: TTransformNode;
Shape220: TShapeNode;
Shape221: TShapeNode;
LineSet222: TLineSetNode;
ColorRGBA223: TColorRGBANode;
Coordinate224: TCoordinateNode;
HAnimJoint225: THAnimJointNode;
HAnimSegment226: THAnimSegmentNode;
TouchSensor227: TTouchSensorNode;
Transform228: TTransformNode;
Shape229: TShapeNode;
Shape230: TShapeNode;
LineSet231: TLineSetNode;
ColorRGBA232: TColorRGBANode;
Coordinate233: TCoordinateNode;
Shape234: TShapeNode;
LineSet235: TLineSetNode;
ColorRGBA236: TColorRGBANode;
Coordinate237: TCoordinateNode;
HAnimSite238: THAnimSiteNode;
TouchSensor239: TTouchSensorNode;
Shape240: TShapeNode;
HAnimJoint241: THAnimJointNode;
HAnimSegment242: THAnimSegmentNode;
TouchSensor243: TTouchSensorNode;
Transform244: TTransformNode;
Shape245: TShapeNode;
Shape246: TShapeNode;
LineSet247: TLineSetNode;
ColorRGBA248: TColorRGBANode;
Coordinate249: TCoordinateNode;
Shape250: TShapeNode;
LineSet251: TLineSetNode;
ColorRGBA252: TColorRGBANode;
Coordinate253: TCoordinateNode;
Shape254: TShapeNode;
LineSet255: TLineSetNode;
ColorRGBA256: TColorRGBANode;
Coordinate257: TCoordinateNode;
HAnimSite258: THAnimSiteNode;
TouchSensor259: TTouchSensorNode;
Shape260: TShapeNode;
HAnimSite261: THAnimSiteNode;
TouchSensor262: TTouchSensorNode;
Shape263: TShapeNode;
HAnimSite264: THAnimSiteNode;
TouchSensor265: TTouchSensorNode;
Shape266: TShapeNode;
HAnimJoint267: THAnimJointNode;
HAnimSegment268: THAnimSegmentNode;
TouchSensor269: TTouchSensorNode;
Transform270: TTransformNode;
Shape271: TShapeNode;
Shape272: TShapeNode;
LineSet273: TLineSetNode;
ColorRGBA274: TColorRGBANode;
Coordinate275: TCoordinateNode;
Shape276: TShapeNode;
LineSet277: TLineSetNode;
ColorRGBA278: TColorRGBANode;
Coordinate279: TCoordinateNode;
Shape280: TShapeNode;
LineSet281: TLineSetNode;
ColorRGBA282: TColorRGBANode;
Coordinate283: TCoordinateNode;
Shape284: TShapeNode;
LineSet285: TLineSetNode;
ColorRGBA286: TColorRGBANode;
Coordinate287: TCoordinateNode;
HAnimSite288: THAnimSiteNode;
TouchSensor289: TTouchSensorNode;
Shape290: TShapeNode;
HAnimSite291: THAnimSiteNode;
TouchSensor292: TTouchSensorNode;
Shape293: TShapeNode;
HAnimSite294: THAnimSiteNode;
TouchSensor295: TTouchSensorNode;
Shape296: TShapeNode;
HAnimJoint297: THAnimJointNode;
HAnimSegment298: THAnimSegmentNode;
TouchSensor299: TTouchSensorNode;
Transform300: TTransformNode;
Shape301: TShapeNode;
Shape302: TShapeNode;
LineSet303: TLineSetNode;
ColorRGBA304: TColorRGBANode;
Coordinate305: TCoordinateNode;
HAnimJoint306: THAnimJointNode;
HAnimSegment307: THAnimSegmentNode;
TouchSensor308: TTouchSensorNode;
Transform309: TTransformNode;
Shape310: TShapeNode;
Shape311: TShapeNode;
LineSet312: TLineSetNode;
ColorRGBA313: TColorRGBANode;
Coordinate314: TCoordinateNode;
Shape315: TShapeNode;
LineSet316: TLineSetNode;
ColorRGBA317: TColorRGBANode;
Coordinate318: TCoordinateNode;
Shape319: TShapeNode;
LineSet320: TLineSetNode;
ColorRGBA321: TColorRGBANode;
Coordinate322: TCoordinateNode;
Shape323: TShapeNode;
LineSet324: TLineSetNode;
ColorRGBA325: TColorRGBANode;
Coordinate326: TCoordinateNode;
Shape327: TShapeNode;
LineSet328: TLineSetNode;
ColorRGBA329: TColorRGBANode;
Coordinate330: TCoordinateNode;
HAnimSite331: THAnimSiteNode;
TouchSensor332: TTouchSensorNode;
Shape333: TShapeNode;
HAnimSite334: THAnimSiteNode;
TouchSensor335: TTouchSensorNode;
Shape336: TShapeNode;
HAnimSite337: THAnimSiteNode;
TouchSensor338: TTouchSensorNode;
Shape339: TShapeNode;
HAnimSite340: THAnimSiteNode;
TouchSensor341: TTouchSensorNode;
Shape342: TShapeNode;
HAnimJoint343: THAnimJointNode;
HAnimSegment344: THAnimSegmentNode;
TouchSensor345: TTouchSensorNode;
Transform346: TTransformNode;
Shape347: TShapeNode;
Shape348: TShapeNode;
LineSet349: TLineSetNode;
ColorRGBA350: TColorRGBANode;
Coordinate351: TCoordinateNode;
HAnimJoint352: THAnimJointNode;
HAnimSegment353: THAnimSegmentNode;
TouchSensor354: TTouchSensorNode;
Transform355: TTransformNode;
Shape356: TShapeNode;
Shape357: TShapeNode;
LineSet358: TLineSetNode;
ColorRGBA359: TColorRGBANode;
Coordinate360: TCoordinateNode;
Shape361: TShapeNode;
LineSet362: TLineSetNode;
ColorRGBA363: TColorRGBANode;
Coordinate364: TCoordinateNode;
HAnimSite365: THAnimSiteNode;
TouchSensor366: TTouchSensorNode;
Shape367: TShapeNode;
HAnimJoint368: THAnimJointNode;
HAnimSegment369: THAnimSegmentNode;
TouchSensor370: TTouchSensorNode;
Transform371: TTransformNode;
Shape372: TShapeNode;
Shape373: TShapeNode;
LineSet374: TLineSetNode;
ColorRGBA375: TColorRGBANode;
Coordinate376: TCoordinateNode;
Shape377: TShapeNode;
LineSet378: TLineSetNode;
ColorRGBA379: TColorRGBANode;
Coordinate380: TCoordinateNode;
Shape381: TShapeNode;
LineSet382: TLineSetNode;
ColorRGBA383: TColorRGBANode;
Coordinate384: TCoordinateNode;
HAnimSite385: THAnimSiteNode;
TouchSensor386: TTouchSensorNode;
Shape387: TShapeNode;
HAnimSite388: THAnimSiteNode;
TouchSensor389: TTouchSensorNode;
Shape390: TShapeNode;
HAnimSite391: THAnimSiteNode;
TouchSensor392: TTouchSensorNode;
Shape393: TShapeNode;
HAnimJoint394: THAnimJointNode;
HAnimSegment395: THAnimSegmentNode;
TouchSensor396: TTouchSensorNode;
Transform397: TTransformNode;
Shape398: TShapeNode;
Shape399: TShapeNode;
LineSet400: TLineSetNode;
ColorRGBA401: TColorRGBANode;
Coordinate402: TCoordinateNode;
Shape403: TShapeNode;
LineSet404: TLineSetNode;
ColorRGBA405: TColorRGBANode;
Coordinate406: TCoordinateNode;
Shape407: TShapeNode;
LineSet408: TLineSetNode;
ColorRGBA409: TColorRGBANode;
Coordinate410: TCoordinateNode;
HAnimSite411: THAnimSiteNode;
TouchSensor412: TTouchSensorNode;
Shape413: TShapeNode;
HAnimSite414: THAnimSiteNode;
TouchSensor415: TTouchSensorNode;
Shape416: TShapeNode;
HAnimJoint417: THAnimJointNode;
HAnimSegment418: THAnimSegmentNode;
TouchSensor419: TTouchSensorNode;
Transform420: TTransformNode;
Shape421: TShapeNode;
Shape422: TShapeNode;
LineSet423: TLineSetNode;
ColorRGBA424: TColorRGBANode;
Coordinate425: TCoordinateNode;
HAnimJoint426: THAnimJointNode;
HAnimSegment427: THAnimSegmentNode;
TouchSensor428: TTouchSensorNode;
Transform429: TTransformNode;
Shape430: TShapeNode;
Shape431: TShapeNode;
LineSet432: TLineSetNode;
ColorRGBA433: TColorRGBANode;
Coordinate434: TCoordinateNode;
HAnimJoint435: THAnimJointNode;
HAnimSegment436: THAnimSegmentNode;
TouchSensor437: TTouchSensorNode;
Transform438: TTransformNode;
Shape439: TShapeNode;
Shape440: TShapeNode;
LineSet441: TLineSetNode;
ColorRGBA442: TColorRGBANode;
Coordinate443: TCoordinateNode;
Shape444: TShapeNode;
LineSet445: TLineSetNode;
ColorRGBA446: TColorRGBANode;
Coordinate447: TCoordinateNode;
Shape448: TShapeNode;
LineSet449: TLineSetNode;
ColorRGBA450: TColorRGBANode;
Coordinate451: TCoordinateNode;
Shape452: TShapeNode;
LineSet453: TLineSetNode;
ColorRGBA454: TColorRGBANode;
Coordinate455: TCoordinateNode;
HAnimSite456: THAnimSiteNode;
TouchSensor457: TTouchSensorNode;
Shape458: TShapeNode;
HAnimSite459: THAnimSiteNode;
TouchSensor460: TTouchSensorNode;
Shape461: TShapeNode;
HAnimSite462: THAnimSiteNode;
TouchSensor463: TTouchSensorNode;
Shape464: TShapeNode;
HAnimJoint465: THAnimJointNode;
HAnimSegment466: THAnimSegmentNode;
TouchSensor467: TTouchSensorNode;
Transform468: TTransformNode;
Shape469: TShapeNode;
Shape470: TShapeNode;
LineSet471: TLineSetNode;
ColorRGBA472: TColorRGBANode;
Coordinate473: TCoordinateNode;
HAnimJoint474: THAnimJointNode;
HAnimSegment475: THAnimSegmentNode;
TouchSensor476: TTouchSensorNode;
Transform477: TTransformNode;
Shape478: TShapeNode;
Shape479: TShapeNode;
LineSet480: TLineSetNode;
ColorRGBA481: TColorRGBANode;
Coordinate482: TCoordinateNode;
HAnimJoint483: THAnimJointNode;
HAnimSegment484: THAnimSegmentNode;
TouchSensor485: TTouchSensorNode;
Transform486: TTransformNode;
Shape487: TShapeNode;
Shape488: TShapeNode;
LineSet489: TLineSetNode;
ColorRGBA490: TColorRGBANode;
Coordinate491: TCoordinateNode;
HAnimJoint492: THAnimJointNode;
HAnimSegment493: THAnimSegmentNode;
TouchSensor494: TTouchSensorNode;
Transform495: TTransformNode;
Shape496: TShapeNode;
Shape497: TShapeNode;
LineSet498: TLineSetNode;
ColorRGBA499: TColorRGBANode;
Coordinate500: TCoordinateNode;
Shape501: TShapeNode;
LineSet502: TLineSetNode;
ColorRGBA503: TColorRGBANode;
Coordinate504: TCoordinateNode;
HAnimSite505: THAnimSiteNode;
TouchSensor506: TTouchSensorNode;
Shape507: TShapeNode;
HAnimJoint508: THAnimJointNode;
HAnimSegment509: THAnimSegmentNode;
TouchSensor510: TTouchSensorNode;
Transform511: TTransformNode;
Shape512: TShapeNode;
Shape513: TShapeNode;
LineSet514: TLineSetNode;
ColorRGBA515: TColorRGBANode;
Coordinate516: TCoordinateNode;
Shape517: TShapeNode;
LineSet518: TLineSetNode;
ColorRGBA519: TColorRGBANode;
Coordinate520: TCoordinateNode;
Shape521: TShapeNode;
LineSet522: TLineSetNode;
ColorRGBA523: TColorRGBANode;
Coordinate524: TCoordinateNode;
HAnimSite525: THAnimSiteNode;
TouchSensor526: TTouchSensorNode;
Shape527: TShapeNode;
HAnimSite528: THAnimSiteNode;
TouchSensor529: TTouchSensorNode;
Shape530: TShapeNode;
HAnimJoint531: THAnimJointNode;
HAnimSegment532: THAnimSegmentNode;
TouchSensor533: TTouchSensorNode;
Transform534: TTransformNode;
Shape535: TShapeNode;
Shape536: TShapeNode;
LineSet537: TLineSetNode;
ColorRGBA538: TColorRGBANode;
Coordinate539: TCoordinateNode;
HAnimJoint540: THAnimJointNode;
HAnimSegment541: THAnimSegmentNode;
TouchSensor542: TTouchSensorNode;
Transform543: TTransformNode;
Shape544: TShapeNode;
Shape545: TShapeNode;
LineSet546: TLineSetNode;
ColorRGBA547: TColorRGBANode;
Coordinate548: TCoordinateNode;
HAnimJoint549: THAnimJointNode;
HAnimSegment550: THAnimSegmentNode;
TouchSensor551: TTouchSensorNode;
Transform552: TTransformNode;
Shape553: TShapeNode;
Shape554: TShapeNode;
LineSet555: TLineSetNode;
ColorRGBA556: TColorRGBANode;
Coordinate557: TCoordinateNode;
HAnimJoint558: THAnimJointNode;
HAnimSegment559: THAnimSegmentNode;
TouchSensor560: TTouchSensorNode;
Transform561: TTransformNode;
Shape562: TShapeNode;
Shape563: TShapeNode;
LineSet564: TLineSetNode;
ColorRGBA565: TColorRGBANode;
Coordinate566: TCoordinateNode;
HAnimJoint567: THAnimJointNode;
HAnimSegment568: THAnimSegmentNode;
TouchSensor569: TTouchSensorNode;
Transform570: TTransformNode;
Shape571: TShapeNode;
Shape572: TShapeNode;
LineSet573: TLineSetNode;
ColorRGBA574: TColorRGBANode;
Coordinate575: TCoordinateNode;
HAnimJoint576: THAnimJointNode;
HAnimSegment577: THAnimSegmentNode;
TouchSensor578: TTouchSensorNode;
Transform579: TTransformNode;
Shape580: TShapeNode;
Shape581: TShapeNode;
LineSet582: TLineSetNode;
ColorRGBA583: TColorRGBANode;
Coordinate584: TCoordinateNode;
HAnimJoint585: THAnimJointNode;
HAnimSegment586: THAnimSegmentNode;
TouchSensor587: TTouchSensorNode;
Transform588: TTransformNode;
Shape589: TShapeNode;
Shape590: TShapeNode;
LineSet591: TLineSetNode;
ColorRGBA592: TColorRGBANode;
Coordinate593: TCoordinateNode;
HAnimJoint594: THAnimJointNode;
HAnimSegment595: THAnimSegmentNode;
TouchSensor596: TTouchSensorNode;
Transform597: TTransformNode;
Shape598: TShapeNode;
Shape599: TShapeNode;
LineSet600: TLineSetNode;
ColorRGBA601: TColorRGBANode;
Coordinate602: TCoordinateNode;
Shape603: TShapeNode;
LineSet604: TLineSetNode;
ColorRGBA605: TColorRGBANode;
Coordinate606: TCoordinateNode;
Shape607: TShapeNode;
LineSet608: TLineSetNode;
ColorRGBA609: TColorRGBANode;
Coordinate610: TCoordinateNode;
Shape611: TShapeNode;
LineSet612: TLineSetNode;
ColorRGBA613: TColorRGBANode;
Coordinate614: TCoordinateNode;
Shape615: TShapeNode;
LineSet616: TLineSetNode;
ColorRGBA617: TColorRGBANode;
Coordinate618: TCoordinateNode;
HAnimSite619: THAnimSiteNode;
TouchSensor620: TTouchSensorNode;
Shape621: TShapeNode;
HAnimSite622: THAnimSiteNode;
TouchSensor623: TTouchSensorNode;
Shape624: TShapeNode;
HAnimJoint625: THAnimJointNode;
HAnimSegment626: THAnimSegmentNode;
TouchSensor627: TTouchSensorNode;
Transform628: TTransformNode;
Shape629: TShapeNode;
Shape630: TShapeNode;
LineSet631: TLineSetNode;
ColorRGBA632: TColorRGBANode;
Coordinate633: TCoordinateNode;
Shape634: TShapeNode;
LineSet635: TLineSetNode;
ColorRGBA636: TColorRGBANode;
Coordinate637: TCoordinateNode;
Shape638: TShapeNode;
LineSet639: TLineSetNode;
ColorRGBA640: TColorRGBANode;
Coordinate641: TCoordinateNode;
HAnimSite642: THAnimSiteNode;
TouchSensor643: TTouchSensorNode;
Shape644: TShapeNode;
HAnimSite645: THAnimSiteNode;
TouchSensor646: TTouchSensorNode;
Shape647: TShapeNode;
HAnimJoint648: THAnimJointNode;
HAnimSegment649: THAnimSegmentNode;
TouchSensor650: TTouchSensorNode;
Transform651: TTransformNode;
Shape652: TShapeNode;
Shape653: TShapeNode;
LineSet654: TLineSetNode;
ColorRGBA655: TColorRGBANode;
Coordinate656: TCoordinateNode;
HAnimJoint657: THAnimJointNode;
HAnimSegment658: THAnimSegmentNode;
TouchSensor659: TTouchSensorNode;
Transform660: TTransformNode;
Shape661: TShapeNode;
Shape662: TShapeNode;
LineSet663: TLineSetNode;
ColorRGBA664: TColorRGBANode;
Coordinate665: TCoordinateNode;
HAnimJoint666: THAnimJointNode;
HAnimSegment667: THAnimSegmentNode;
TouchSensor668: TTouchSensorNode;
Transform669: TTransformNode;
Shape670: TShapeNode;
Shape671: TShapeNode;
LineSet672: TLineSetNode;
ColorRGBA673: TColorRGBANode;
Coordinate674: TCoordinateNode;
HAnimJoint675: THAnimJointNode;
HAnimSegment676: THAnimSegmentNode;
TouchSensor677: TTouchSensorNode;
Transform678: TTransformNode;
Shape679: TShapeNode;
Shape680: TShapeNode;
LineSet681: TLineSetNode;
ColorRGBA682: TColorRGBANode;
Coordinate683: TCoordinateNode;
HAnimJoint684: THAnimJointNode;
HAnimSegment685: THAnimSegmentNode;
TouchSensor686: TTouchSensorNode;
Transform687: TTransformNode;
Shape688: TShapeNode;
Shape689: TShapeNode;
LineSet690: TLineSetNode;
ColorRGBA691: TColorRGBANode;
Coordinate692: TCoordinateNode;
HAnimJoint693: THAnimJointNode;
HAnimSegment694: THAnimSegmentNode;
TouchSensor695: TTouchSensorNode;
Transform696: TTransformNode;
Shape697: TShapeNode;
Shape698: TShapeNode;
LineSet699: TLineSetNode;
ColorRGBA700: TColorRGBANode;
Coordinate701: TCoordinateNode;
HAnimJoint702: THAnimJointNode;
HAnimSegment703: THAnimSegmentNode;
TouchSensor704: TTouchSensorNode;
Transform705: TTransformNode;
Shape706: TShapeNode;
Shape707: TShapeNode;
LineSet708: TLineSetNode;
ColorRGBA709: TColorRGBANode;
Coordinate710: TCoordinateNode;
Shape711: TShapeNode;
LineSet712: TLineSetNode;
ColorRGBA713: TColorRGBANode;
Coordinate714: TCoordinateNode;
Shape715: TShapeNode;
LineSet716: TLineSetNode;
ColorRGBA717: TColorRGBANode;
Coordinate718: TCoordinateNode;
Shape719: TShapeNode;
LineSet720: TLineSetNode;
ColorRGBA721: TColorRGBANode;
Coordinate722: TCoordinateNode;
Shape723: TShapeNode;
LineSet724: TLineSetNode;
ColorRGBA725: TColorRGBANode;
Coordinate726: TCoordinateNode;
Shape727: TShapeNode;
LineSet728: TLineSetNode;
ColorRGBA729: TColorRGBANode;
Coordinate730: TCoordinateNode;
Shape731: TShapeNode;
LineSet732: TLineSetNode;
ColorRGBA733: TColorRGBANode;
Coordinate734: TCoordinateNode;
Shape735: TShapeNode;
LineSet736: TLineSetNode;
ColorRGBA737: TColorRGBANode;
Coordinate738: TCoordinateNode;
Shape739: TShapeNode;
LineSet740: TLineSetNode;
ColorRGBA741: TColorRGBANode;
Coordinate742: TCoordinateNode;
Shape743: TShapeNode;
LineSet744: TLineSetNode;
ColorRGBA745: TColorRGBANode;
Coordinate746: TCoordinateNode;
Shape747: TShapeNode;
LineSet748: TLineSetNode;
ColorRGBA749: TColorRGBANode;
Coordinate750: TCoordinateNode;
Shape751: TShapeNode;
LineSet752: TLineSetNode;
ColorRGBA753: TColorRGBANode;
Coordinate754: TCoordinateNode;
Shape755: TShapeNode;
LineSet756: TLineSetNode;
ColorRGBA757: TColorRGBANode;
Coordinate758: TCoordinateNode;
Shape759: TShapeNode;
LineSet760: TLineSetNode;
ColorRGBA761: TColorRGBANode;
Coordinate762: TCoordinateNode;
Shape763: TShapeNode;
LineSet764: TLineSetNode;
ColorRGBA765: TColorRGBANode;
Coordinate766: TCoordinateNode;
Shape767: TShapeNode;
LineSet768: TLineSetNode;
ColorRGBA769: TColorRGBANode;
Coordinate770: TCoordinateNode;
Shape771: TShapeNode;
LineSet772: TLineSetNode;
ColorRGBA773: TColorRGBANode;
Coordinate774: TCoordinateNode;
HAnimSite775: THAnimSiteNode;
TouchSensor776: TTouchSensorNode;
Shape777: TShapeNode;
HAnimSite778: THAnimSiteNode;
TouchSensor779: TTouchSensorNode;
Shape780: TShapeNode;
HAnimSite781: THAnimSiteNode;
TouchSensor782: TTouchSensorNode;
Shape783: TShapeNode;
HAnimSite784: THAnimSiteNode;
TouchSensor785: TTouchSensorNode;
Shape786: TShapeNode;
HAnimSite787: THAnimSiteNode;
TouchSensor788: TTouchSensorNode;
Shape789: TShapeNode;
HAnimSite790: THAnimSiteNode;
TouchSensor791: TTouchSensorNode;
Shape792: TShapeNode;
HAnimSite793: THAnimSiteNode;
TouchSensor794: TTouchSensorNode;
Shape795: TShapeNode;
HAnimSite796: THAnimSiteNode;
TouchSensor797: TTouchSensorNode;
Shape798: TShapeNode;
HAnimSite799: THAnimSiteNode;
TouchSensor800: TTouchSensorNode;
Shape801: TShapeNode;
HAnimSite802: THAnimSiteNode;
TouchSensor803: TTouchSensorNode;
Shape804: TShapeNode;
HAnimJoint805: THAnimJointNode;
HAnimSegment806: THAnimSegmentNode;
TouchSensor807: TTouchSensorNode;
Transform808: TTransformNode;
Shape809: TShapeNode;
Shape810: TShapeNode;
LineSet811: TLineSetNode;
ColorRGBA812: TColorRGBANode;
Coordinate813: TCoordinateNode;
HAnimSite814: THAnimSiteNode;
Viewpoint815: TViewpointNode;
Anchor816: TAnchorNode;
LOD817: TLODNode;
WorldInfo818: TWorldInfoNode;
Shape819: TShapeNode;
Appearance820: TAppearanceNode;
Material821: TMaterialNode;
IndexedFaceSet822: TIndexedFaceSetNode;
Coordinate823: TCoordinateNode;
HAnimJoint824: THAnimJointNode;
HAnimSegment825: THAnimSegmentNode;
TouchSensor826: TTouchSensorNode;
Transform827: TTransformNode;
Shape828: TShapeNode;
HAnimJoint829: THAnimJointNode;
HAnimSegment830: THAnimSegmentNode;
TouchSensor831: TTouchSensorNode;
Transform832: TTransformNode;
Shape833: TShapeNode;
HAnimJoint834: THAnimJointNode;
HAnimSegment835: THAnimSegmentNode;
TouchSensor836: TTouchSensorNode;
Transform837: TTransformNode;
Shape838: TShapeNode;
Shape839: TShapeNode;
LineSet840: TLineSetNode;
ColorRGBA841: TColorRGBANode;
Coordinate842: TCoordinateNode;
HAnimSite843: THAnimSiteNode;
Viewpoint844: TViewpointNode;
Anchor845: TAnchorNode;
LOD846: TLODNode;
WorldInfo847: TWorldInfoNode;
Shape848: TShapeNode;
HAnimJoint849: THAnimJointNode;
HAnimSegment850: THAnimSegmentNode;
TouchSensor851: TTouchSensorNode;
Transform852: TTransformNode;
Shape853: TShapeNode;
HAnimJoint854: THAnimJointNode;
HAnimSegment855: THAnimSegmentNode;
TouchSensor856: TTouchSensorNode;
Transform857: TTransformNode;
Shape858: TShapeNode;
HAnimJoint859: THAnimJointNode;
HAnimSegment860: THAnimSegmentNode;
TouchSensor861: TTouchSensorNode;
Transform862: TTransformNode;
Shape863: TShapeNode;
Shape864: TShapeNode;
LineSet865: TLineSetNode;
ColorRGBA866: TColorRGBANode;
Coordinate867: TCoordinateNode;
Shape868: TShapeNode;
LineSet869: TLineSetNode;
ColorRGBA870: TColorRGBANode;
Coordinate871: TCoordinateNode;
HAnimSite872: THAnimSiteNode;
TouchSensor873: TTouchSensorNode;
Shape874: TShapeNode;
HAnimSite875: THAnimSiteNode;
TouchSensor876: TTouchSensorNode;
Shape877: TShapeNode;
HAnimJoint878: THAnimJointNode;
HAnimSegment879: THAnimSegmentNode;
TouchSensor880: TTouchSensorNode;
Transform881: TTransformNode;
Shape882: TShapeNode;
Shape883: TShapeNode;
LineSet884: TLineSetNode;
ColorRGBA885: TColorRGBANode;
Coordinate886: TCoordinateNode;
Shape887: TShapeNode;
LineSet888: TLineSetNode;
ColorRGBA889: TColorRGBANode;
Coordinate890: TCoordinateNode;
Shape891: TShapeNode;
LineSet892: TLineSetNode;
ColorRGBA893: TColorRGBANode;
Coordinate894: TCoordinateNode;
Shape895: TShapeNode;
LineSet896: TLineSetNode;
ColorRGBA897: TColorRGBANode;
Coordinate898: TCoordinateNode;
Shape899: TShapeNode;
LineSet900: TLineSetNode;
ColorRGBA901: TColorRGBANode;
Coordinate902: TCoordinateNode;
HAnimSite903: THAnimSiteNode;
TouchSensor904: TTouchSensorNode;
Shape905: TShapeNode;
HAnimSite906: THAnimSiteNode;
TouchSensor907: TTouchSensorNode;
Shape908: TShapeNode;
HAnimSite909: THAnimSiteNode;
TouchSensor910: TTouchSensorNode;
Shape911: TShapeNode;
HAnimSite912: THAnimSiteNode;
TouchSensor913: TTouchSensorNode;
Shape914: TShapeNode;
HAnimJoint915: THAnimJointNode;
HAnimSegment916: THAnimSegmentNode;
TouchSensor917: TTouchSensorNode;
Transform918: TTransformNode;
Shape919: TShapeNode;
Shape920: TShapeNode;
LineSet921: TLineSetNode;
ColorRGBA922: TColorRGBANode;
Coordinate923: TCoordinateNode;
HAnimJoint924: THAnimJointNode;
HAnimSegment925: THAnimSegmentNode;
TouchSensor926: TTouchSensorNode;
Transform927: TTransformNode;
Shape928: TShapeNode;
Shape929: TShapeNode;
LineSet930: TLineSetNode;
ColorRGBA931: TColorRGBANode;
Coordinate932: TCoordinateNode;
Shape933: TShapeNode;
LineSet934: TLineSetNode;
ColorRGBA935: TColorRGBANode;
Coordinate936: TCoordinateNode;
HAnimSite937: THAnimSiteNode;
TouchSensor938: TTouchSensorNode;
Shape939: TShapeNode;
HAnimJoint940: THAnimJointNode;
HAnimSegment941: THAnimSegmentNode;
TouchSensor942: TTouchSensorNode;
Transform943: TTransformNode;
Shape944: TShapeNode;
Shape945: TShapeNode;
LineSet946: TLineSetNode;
ColorRGBA947: TColorRGBANode;
Coordinate948: TCoordinateNode;
Shape949: TShapeNode;
LineSet950: TLineSetNode;
ColorRGBA951: TColorRGBANode;
Coordinate952: TCoordinateNode;
Shape953: TShapeNode;
LineSet954: TLineSetNode;
ColorRGBA955: TColorRGBANode;
Coordinate956: TCoordinateNode;
Shape957: TShapeNode;
LineSet958: TLineSetNode;
ColorRGBA959: TColorRGBANode;
Coordinate960: TCoordinateNode;
Shape961: TShapeNode;
LineSet962: TLineSetNode;
ColorRGBA963: TColorRGBANode;
Coordinate964: TCoordinateNode;
HAnimSite965: THAnimSiteNode;
TouchSensor966: TTouchSensorNode;
Shape967: TShapeNode;
HAnimSite968: THAnimSiteNode;
TouchSensor969: TTouchSensorNode;
Shape970: TShapeNode;
HAnimSite971: THAnimSiteNode;
TouchSensor972: TTouchSensorNode;
Shape973: TShapeNode;
HAnimSite974: THAnimSiteNode;
TouchSensor975: TTouchSensorNode;
Shape976: TShapeNode;
HAnimJoint977: THAnimJointNode;
HAnimSegment978: THAnimSegmentNode;
TouchSensor979: TTouchSensorNode;
Transform980: TTransformNode;
Shape981: TShapeNode;
Shape982: TShapeNode;
LineSet983: TLineSetNode;
ColorRGBA984: TColorRGBANode;
Coordinate985: TCoordinateNode;
Shape986: TShapeNode;
LineSet987: TLineSetNode;
ColorRGBA988: TColorRGBANode;
Coordinate989: TCoordinateNode;
Shape990: TShapeNode;
LineSet991: TLineSetNode;
ColorRGBA992: TColorRGBANode;
Coordinate993: TCoordinateNode;
Shape994: TShapeNode;
LineSet995: TLineSetNode;
ColorRGBA996: TColorRGBANode;
Coordinate997: TCoordinateNode;
Shape998: TShapeNode;
LineSet999: TLineSetNode;
ColorRGBA1000: TColorRGBANode;
Coordinate1001: TCoordinateNode;
Shape1002: TShapeNode;
LineSet1003: TLineSetNode;
ColorRGBA1004: TColorRGBANode;
Coordinate1005: TCoordinateNode;
Shape1006: TShapeNode;
LineSet1007: TLineSetNode;
ColorRGBA1008: TColorRGBANode;
Coordinate1009: TCoordinateNode;
Shape1010: TShapeNode;
LineSet1011: TLineSetNode;
ColorRGBA1012: TColorRGBANode;
Coordinate1013: TCoordinateNode;
Shape1014: TShapeNode;
LineSet1015: TLineSetNode;
ColorRGBA1016: TColorRGBANode;
Coordinate1017: TCoordinateNode;
HAnimSite1018: THAnimSiteNode;
TouchSensor1019: TTouchSensorNode;
Shape1020: TShapeNode;
HAnimSite1021: THAnimSiteNode;
TouchSensor1022: TTouchSensorNode;
Shape1023: TShapeNode;
HAnimSite1024: THAnimSiteNode;
TouchSensor1025: TTouchSensorNode;
Shape1026: TShapeNode;
HAnimSite1027: THAnimSiteNode;
Viewpoint1028: TViewpointNode;
Anchor1029: TAnchorNode;
LOD1030: TLODNode;
WorldInfo1031: TWorldInfoNode;
Shape1032: TShapeNode;
HAnimJoint1033: THAnimJointNode;
HAnimSegment1034: THAnimSegmentNode;
TouchSensor1035: TTouchSensorNode;
Transform1036: TTransformNode;
Shape1037: TShapeNode;
Shape1038: TShapeNode;
LineSet1039: TLineSetNode;
ColorRGBA1040: TColorRGBANode;
Coordinate1041: TCoordinateNode;
HAnimJoint1042: THAnimJointNode;
HAnimSegment1043: THAnimSegmentNode;
TouchSensor1044: TTouchSensorNode;
Transform1045: TTransformNode;
Shape1046: TShapeNode;
Shape1047: TShapeNode;
LineSet1048: TLineSetNode;
ColorRGBA1049: TColorRGBANode;
Coordinate1050: TCoordinateNode;
HAnimJoint1051: THAnimJointNode;
HAnimSegment1052: THAnimSegmentNode;
TouchSensor1053: TTouchSensorNode;
Transform1054: TTransformNode;
Shape1055: TShapeNode;
Shape1056: TShapeNode;
LineSet1057: TLineSetNode;
ColorRGBA1058: TColorRGBANode;
Coordinate1059: TCoordinateNode;
HAnimSite1060: THAnimSiteNode;
TouchSensor1061: TTouchSensorNode;
Shape1062: TShapeNode;
HAnimJoint1063: THAnimJointNode;
HAnimSegment1064: THAnimSegmentNode;
TouchSensor1065: TTouchSensorNode;
Transform1066: TTransformNode;
Shape1067: TShapeNode;
Shape1068: TShapeNode;
LineSet1069: TLineSetNode;
ColorRGBA1070: TColorRGBANode;
Coordinate1071: TCoordinateNode;
HAnimJoint1072: THAnimJointNode;
HAnimSegment1073: THAnimSegmentNode;
TouchSensor1074: TTouchSensorNode;
Transform1075: TTransformNode;
Shape1076: TShapeNode;
Shape1077: TShapeNode;
LineSet1078: TLineSetNode;
ColorRGBA1079: TColorRGBANode;
Coordinate1080: TCoordinateNode;
HAnimJoint1081: THAnimJointNode;
HAnimSegment1082: THAnimSegmentNode;
TouchSensor1083: TTouchSensorNode;
Transform1084: TTransformNode;
Shape1085: TShapeNode;
Shape1086: TShapeNode;
LineSet1087: TLineSetNode;
ColorRGBA1088: TColorRGBANode;
Coordinate1089: TCoordinateNode;
HAnimJoint1090: THAnimJointNode;
HAnimSegment1091: THAnimSegmentNode;
TouchSensor1092: TTouchSensorNode;
Transform1093: TTransformNode;
Shape1094: TShapeNode;
Shape1095: TShapeNode;
LineSet1096: TLineSetNode;
ColorRGBA1097: TColorRGBANode;
Coordinate1098: TCoordinateNode;
Shape1099: TShapeNode;
LineSet1100: TLineSetNode;
ColorRGBA1101: TColorRGBANode;
Coordinate1102: TCoordinateNode;
HAnimSite1103: THAnimSiteNode;
TouchSensor1104: TTouchSensorNode;
Shape1105: TShapeNode;
HAnimSite1106: THAnimSiteNode;
TouchSensor1107: TTouchSensorNode;
Shape1108: TShapeNode;
HAnimJoint1109: THAnimJointNode;
HAnimSegment1110: THAnimSegmentNode;
TouchSensor1111: TTouchSensorNode;
Transform1112: TTransformNode;
Shape1113: TShapeNode;
Shape1114: TShapeNode;
LineSet1115: TLineSetNode;
ColorRGBA1116: TColorRGBANode;
Coordinate1117: TCoordinateNode;
HAnimJoint1118: THAnimJointNode;
HAnimSegment1119: THAnimSegmentNode;
TouchSensor1120: TTouchSensorNode;
Transform1121: TTransformNode;
Shape1122: TShapeNode;
Shape1123: TShapeNode;
LineSet1124: TLineSetNode;
ColorRGBA1125: TColorRGBANode;
Coordinate1126: TCoordinateNode;
HAnimJoint1127: THAnimJointNode;
HAnimSegment1128: THAnimSegmentNode;
TouchSensor1129: TTouchSensorNode;
Transform1130: TTransformNode;
Shape1131: TShapeNode;
Shape1132: TShapeNode;
LineSet1133: TLineSetNode;
ColorRGBA1134: TColorRGBANode;
Coordinate1135: TCoordinateNode;
HAnimJoint1136: THAnimJointNode;
HAnimSegment1137: THAnimSegmentNode;
TouchSensor1138: TTouchSensorNode;
Transform1139: TTransformNode;
Shape1140: TShapeNode;
Shape1141: TShapeNode;
LineSet1142: TLineSetNode;
ColorRGBA1143: TColorRGBANode;
Coordinate1144: TCoordinateNode;
HAnimSite1145: THAnimSiteNode;
TouchSensor1146: TTouchSensorNode;
Shape1147: TShapeNode;
HAnimJoint1148: THAnimJointNode;
HAnimSegment1149: THAnimSegmentNode;
TouchSensor1150: TTouchSensorNode;
Transform1151: TTransformNode;
Shape1152: TShapeNode;
Shape1153: TShapeNode;
LineSet1154: TLineSetNode;
ColorRGBA1155: TColorRGBANode;
Coordinate1156: TCoordinateNode;
HAnimJoint1157: THAnimJointNode;
HAnimSegment1158: THAnimSegmentNode;
TouchSensor1159: TTouchSensorNode;
Transform1160: TTransformNode;
Shape1161: TShapeNode;
Shape1162: TShapeNode;
LineSet1163: TLineSetNode;
ColorRGBA1164: TColorRGBANode;
Coordinate1165: TCoordinateNode;
HAnimJoint1166: THAnimJointNode;
HAnimSegment1167: THAnimSegmentNode;
TouchSensor1168: TTouchSensorNode;
Transform1169: TTransformNode;
Shape1170: TShapeNode;
Shape1171: TShapeNode;
LineSet1172: TLineSetNode;
ColorRGBA1173: TColorRGBANode;
Coordinate1174: TCoordinateNode;
HAnimJoint1175: THAnimJointNode;
HAnimSegment1176: THAnimSegmentNode;
TouchSensor1177: TTouchSensorNode;
Transform1178: TTransformNode;
Shape1179: TShapeNode;
Shape1180: TShapeNode;
LineSet1181: TLineSetNode;
ColorRGBA1182: TColorRGBANode;
Coordinate1183: TCoordinateNode;
HAnimSite1184: THAnimSiteNode;
TouchSensor1185: TTouchSensorNode;
Shape1186: TShapeNode;
HAnimJoint1187: THAnimJointNode;
HAnimSegment1188: THAnimSegmentNode;
TouchSensor1189: TTouchSensorNode;
Transform1190: TTransformNode;
Shape1191: TShapeNode;
Shape1192: TShapeNode;
LineSet1193: TLineSetNode;
ColorRGBA1194: TColorRGBANode;
Coordinate1195: TCoordinateNode;
HAnimJoint1196: THAnimJointNode;
HAnimSegment1197: THAnimSegmentNode;
TouchSensor1198: TTouchSensorNode;
Transform1199: TTransformNode;
Shape1200: TShapeNode;
Shape1201: TShapeNode;
LineSet1202: TLineSetNode;
ColorRGBA1203: TColorRGBANode;
Coordinate1204: TCoordinateNode;
HAnimJoint1205: THAnimJointNode;
HAnimSegment1206: THAnimSegmentNode;
TouchSensor1207: TTouchSensorNode;
Transform1208: TTransformNode;
Shape1209: TShapeNode;
Shape1210: TShapeNode;
LineSet1211: TLineSetNode;
ColorRGBA1212: TColorRGBANode;
Coordinate1213: TCoordinateNode;
HAnimJoint1214: THAnimJointNode;
HAnimSegment1215: THAnimSegmentNode;
TouchSensor1216: TTouchSensorNode;
Transform1217: TTransformNode;
Shape1218: TShapeNode;
Shape1219: TShapeNode;
LineSet1220: TLineSetNode;
ColorRGBA1221: TColorRGBANode;
Coordinate1222: TCoordinateNode;
HAnimSite1223: THAnimSiteNode;
TouchSensor1224: TTouchSensorNode;
Shape1225: TShapeNode;
HAnimJoint1226: THAnimJointNode;
HAnimSegment1227: THAnimSegmentNode;
TouchSensor1228: TTouchSensorNode;
Transform1229: TTransformNode;
Shape1230: TShapeNode;
Shape1231: TShapeNode;
LineSet1232: TLineSetNode;
ColorRGBA1233: TColorRGBANode;
Coordinate1234: TCoordinateNode;
Shape1235: TShapeNode;
LineSet1236: TLineSetNode;
ColorRGBA1237: TColorRGBANode;
Coordinate1238: TCoordinateNode;
Shape1239: TShapeNode;
LineSet1240: TLineSetNode;
ColorRGBA1241: TColorRGBANode;
Coordinate1242: TCoordinateNode;
Shape1243: TShapeNode;
LineSet1244: TLineSetNode;
ColorRGBA1245: TColorRGBANode;
Coordinate1246: TCoordinateNode;
Shape1247: TShapeNode;
LineSet1248: TLineSetNode;
ColorRGBA1249: TColorRGBANode;
Coordinate1250: TCoordinateNode;
HAnimSite1251: THAnimSiteNode;
TouchSensor1252: TTouchSensorNode;
Shape1253: TShapeNode;
HAnimSite1254: THAnimSiteNode;
TouchSensor1255: TTouchSensorNode;
Shape1256: TShapeNode;
HAnimSite1257: THAnimSiteNode;
TouchSensor1258: TTouchSensorNode;
Shape1259: TShapeNode;
HAnimSite1260: THAnimSiteNode;
TouchSensor1261: TTouchSensorNode;
Shape1262: TShapeNode;
HAnimJoint1263: THAnimJointNode;
HAnimSegment1264: THAnimSegmentNode;
TouchSensor1265: TTouchSensorNode;
Transform1266: TTransformNode;
Shape1267: TShapeNode;
Shape1268: TShapeNode;
LineSet1269: TLineSetNode;
ColorRGBA1270: TColorRGBANode;
Coordinate1271: TCoordinateNode;
HAnimJoint1272: THAnimJointNode;
HAnimSegment1273: THAnimSegmentNode;
TouchSensor1274: TTouchSensorNode;
Transform1275: TTransformNode;
Shape1276: TShapeNode;
Shape1277: TShapeNode;
LineSet1278: TLineSetNode;
ColorRGBA1279: TColorRGBANode;
Coordinate1280: TCoordinateNode;
Shape1281: TShapeNode;
LineSet1282: TLineSetNode;
ColorRGBA1283: TColorRGBANode;
Coordinate1284: TCoordinateNode;
HAnimSite1285: THAnimSiteNode;
TouchSensor1286: TTouchSensorNode;
Shape1287: TShapeNode;
HAnimJoint1288: THAnimJointNode;
HAnimSegment1289: THAnimSegmentNode;
TouchSensor1290: TTouchSensorNode;
Transform1291: TTransformNode;
Shape1292: TShapeNode;
Shape1293: TShapeNode;
LineSet1294: TLineSetNode;
ColorRGBA1295: TColorRGBANode;
Coordinate1296: TCoordinateNode;
Shape1297: TShapeNode;
LineSet1298: TLineSetNode;
ColorRGBA1299: TColorRGBANode;
Coordinate1300: TCoordinateNode;
Shape1301: TShapeNode;
LineSet1302: TLineSetNode;
ColorRGBA1303: TColorRGBANode;
Coordinate1304: TCoordinateNode;
Shape1305: TShapeNode;
LineSet1306: TLineSetNode;
ColorRGBA1307: TColorRGBANode;
Coordinate1308: TCoordinateNode;
Shape1309: TShapeNode;
LineSet1310: TLineSetNode;
ColorRGBA1311: TColorRGBANode;
Coordinate1312: TCoordinateNode;
HAnimSite1313: THAnimSiteNode;
TouchSensor1314: TTouchSensorNode;
Shape1315: TShapeNode;
HAnimSite1316: THAnimSiteNode;
TouchSensor1317: TTouchSensorNode;
Shape1318: TShapeNode;
HAnimSite1319: THAnimSiteNode;
TouchSensor1320: TTouchSensorNode;
Shape1321: TShapeNode;
HAnimSite1322: THAnimSiteNode;
TouchSensor1323: TTouchSensorNode;
Shape1324: TShapeNode;
HAnimJoint1325: THAnimJointNode;
HAnimSegment1326: THAnimSegmentNode;
TouchSensor1327: TTouchSensorNode;
Transform1328: TTransformNode;
Shape1329: TShapeNode;
Shape1330: TShapeNode;
LineSet1331: TLineSetNode;
ColorRGBA1332: TColorRGBANode;
Coordinate1333: TCoordinateNode;
Shape1334: TShapeNode;
LineSet1335: TLineSetNode;
ColorRGBA1336: TColorRGBANode;
Coordinate1337: TCoordinateNode;
Shape1338: TShapeNode;
LineSet1339: TLineSetNode;
ColorRGBA1340: TColorRGBANode;
Coordinate1341: TCoordinateNode;
Shape1342: TShapeNode;
LineSet1343: TLineSetNode;
ColorRGBA1344: TColorRGBANode;
Coordinate1345: TCoordinateNode;
Shape1346: TShapeNode;
LineSet1347: TLineSetNode;
ColorRGBA1348: TColorRGBANode;
Coordinate1349: TCoordinateNode;
Shape1350: TShapeNode;
LineSet1351: TLineSetNode;
ColorRGBA1352: TColorRGBANode;
Coordinate1353: TCoordinateNode;
Shape1354: TShapeNode;
LineSet1355: TLineSetNode;
ColorRGBA1356: TColorRGBANode;
Coordinate1357: TCoordinateNode;
Shape1358: TShapeNode;
LineSet1359: TLineSetNode;
ColorRGBA1360: TColorRGBANode;
Coordinate1361: TCoordinateNode;
Shape1362: TShapeNode;
LineSet1363: TLineSetNode;
ColorRGBA1364: TColorRGBANode;
Coordinate1365: TCoordinateNode;
HAnimSite1366: THAnimSiteNode;
TouchSensor1367: TTouchSensorNode;
Shape1368: TShapeNode;
HAnimSite1369: THAnimSiteNode;
TouchSensor1370: TTouchSensorNode;
Shape1371: TShapeNode;
HAnimSite1372: THAnimSiteNode;
TouchSensor1373: TTouchSensorNode;
Shape1374: TShapeNode;
HAnimSite1375: THAnimSiteNode;
Viewpoint1376: TViewpointNode;
Anchor1377: TAnchorNode;
LOD1378: TLODNode;
WorldInfo1379: TWorldInfoNode;
Shape1380: TShapeNode;
HAnimJoint1381: THAnimJointNode;
HAnimSegment1382: THAnimSegmentNode;
TouchSensor1383: TTouchSensorNode;
Transform1384: TTransformNode;
Shape1385: TShapeNode;
Shape1386: TShapeNode;
LineSet1387: TLineSetNode;
ColorRGBA1388: TColorRGBANode;
Coordinate1389: TCoordinateNode;
HAnimJoint1390: THAnimJointNode;
HAnimSegment1391: THAnimSegmentNode;
TouchSensor1392: TTouchSensorNode;
Transform1393: TTransformNode;
Shape1394: TShapeNode;
Shape1395: TShapeNode;
LineSet1396: TLineSetNode;
ColorRGBA1397: TColorRGBANode;
Coordinate1398: TCoordinateNode;
HAnimJoint1399: THAnimJointNode;
HAnimSegment1400: THAnimSegmentNode;
TouchSensor1401: TTouchSensorNode;
Transform1402: TTransformNode;
Shape1403: TShapeNode;
Shape1404: TShapeNode;
LineSet1405: TLineSetNode;
ColorRGBA1406: TColorRGBANode;
Coordinate1407: TCoordinateNode;
HAnimSite1408: THAnimSiteNode;
TouchSensor1409: TTouchSensorNode;
Shape1410: TShapeNode;
HAnimJoint1411: THAnimJointNode;
HAnimSegment1412: THAnimSegmentNode;
TouchSensor1413: TTouchSensorNode;
Transform1414: TTransformNode;
Shape1415: TShapeNode;
Shape1416: TShapeNode;
LineSet1417: TLineSetNode;
ColorRGBA1418: TColorRGBANode;
Coordinate1419: TCoordinateNode;
HAnimJoint1420: THAnimJointNode;
HAnimSegment1421: THAnimSegmentNode;
TouchSensor1422: TTouchSensorNode;
Transform1423: TTransformNode;
Shape1424: TShapeNode;
Shape1425: TShapeNode;
LineSet1426: TLineSetNode;
ColorRGBA1427: TColorRGBANode;
Coordinate1428: TCoordinateNode;
HAnimJoint1429: THAnimJointNode;
HAnimSegment1430: THAnimSegmentNode;
TouchSensor1431: TTouchSensorNode;
Transform1432: TTransformNode;
Shape1433: TShapeNode;
Shape1434: TShapeNode;
LineSet1435: TLineSetNode;
ColorRGBA1436: TColorRGBANode;
Coordinate1437: TCoordinateNode;
HAnimJoint1438: THAnimJointNode;
HAnimSegment1439: THAnimSegmentNode;
TouchSensor1440: TTouchSensorNode;
Transform1441: TTransformNode;
Shape1442: TShapeNode;
Shape1443: TShapeNode;
LineSet1444: TLineSetNode;
ColorRGBA1445: TColorRGBANode;
Coordinate1446: TCoordinateNode;
Shape1447: TShapeNode;
LineSet1448: TLineSetNode;
ColorRGBA1449: TColorRGBANode;
Coordinate1450: TCoordinateNode;
HAnimSite1451: THAnimSiteNode;
TouchSensor1452: TTouchSensorNode;
Shape1453: TShapeNode;
HAnimSite1454: THAnimSiteNode;
TouchSensor1455: TTouchSensorNode;
Shape1456: TShapeNode;
HAnimJoint1457: THAnimJointNode;
HAnimSegment1458: THAnimSegmentNode;
TouchSensor1459: TTouchSensorNode;
Transform1460: TTransformNode;
Shape1461: TShapeNode;
Shape1462: TShapeNode;
LineSet1463: TLineSetNode;
ColorRGBA1464: TColorRGBANode;
Coordinate1465: TCoordinateNode;
HAnimJoint1466: THAnimJointNode;
HAnimSegment1467: THAnimSegmentNode;
TouchSensor1468: TTouchSensorNode;
Transform1469: TTransformNode;
Shape1470: TShapeNode;
Shape1471: TShapeNode;
LineSet1472: TLineSetNode;
ColorRGBA1473: TColorRGBANode;
Coordinate1474: TCoordinateNode;
HAnimJoint1475: THAnimJointNode;
HAnimSegment1476: THAnimSegmentNode;
TouchSensor1477: TTouchSensorNode;
Transform1478: TTransformNode;
Shape1479: TShapeNode;
Shape1480: TShapeNode;
LineSet1481: TLineSetNode;
ColorRGBA1482: TColorRGBANode;
Coordinate1483: TCoordinateNode;
HAnimJoint1484: THAnimJointNode;
HAnimSegment1485: THAnimSegmentNode;
TouchSensor1486: TTouchSensorNode;
Transform1487: TTransformNode;
Shape1488: TShapeNode;
Shape1489: TShapeNode;
LineSet1490: TLineSetNode;
ColorRGBA1491: TColorRGBANode;
Coordinate1492: TCoordinateNode;
HAnimSite1493: THAnimSiteNode;
TouchSensor1494: TTouchSensorNode;
Shape1495: TShapeNode;
HAnimJoint1496: THAnimJointNode;
HAnimSegment1497: THAnimSegmentNode;
TouchSensor1498: TTouchSensorNode;
Transform1499: TTransformNode;
Shape1500: TShapeNode;
Shape1501: TShapeNode;
LineSet1502: TLineSetNode;
ColorRGBA1503: TColorRGBANode;
Coordinate1504: TCoordinateNode;
HAnimJoint1505: THAnimJointNode;
HAnimSegment1506: THAnimSegmentNode;
TouchSensor1507: TTouchSensorNode;
Transform1508: TTransformNode;
Shape1509: TShapeNode;
Shape1510: TShapeNode;
LineSet1511: TLineSetNode;
ColorRGBA1512: TColorRGBANode;
Coordinate1513: TCoordinateNode;
HAnimJoint1514: THAnimJointNode;
HAnimSegment1515: THAnimSegmentNode;
TouchSensor1516: TTouchSensorNode;
Transform1517: TTransformNode;
Shape1518: TShapeNode;
Shape1519: TShapeNode;
LineSet1520: TLineSetNode;
ColorRGBA1521: TColorRGBANode;
Coordinate1522: TCoordinateNode;
HAnimJoint1523: THAnimJointNode;
HAnimSegment1524: THAnimSegmentNode;
TouchSensor1525: TTouchSensorNode;
Transform1526: TTransformNode;
Shape1527: TShapeNode;
Shape1528: TShapeNode;
LineSet1529: TLineSetNode;
ColorRGBA1530: TColorRGBANode;
Coordinate1531: TCoordinateNode;
HAnimSite1532: THAnimSiteNode;
TouchSensor1533: TTouchSensorNode;
Shape1534: TShapeNode;
HAnimJoint1535: THAnimJointNode;
HAnimSegment1536: THAnimSegmentNode;
TouchSensor1537: TTouchSensorNode;
Transform1538: TTransformNode;
Shape1539: TShapeNode;
Shape1540: TShapeNode;
LineSet1541: TLineSetNode;
ColorRGBA1542: TColorRGBANode;
Coordinate1543: TCoordinateNode;
HAnimJoint1544: THAnimJointNode;
HAnimSegment1545: THAnimSegmentNode;
TouchSensor1546: TTouchSensorNode;
Transform1547: TTransformNode;
Shape1548: TShapeNode;
Shape1549: TShapeNode;
LineSet1550: TLineSetNode;
ColorRGBA1551: TColorRGBANode;
Coordinate1552: TCoordinateNode;
HAnimJoint1553: THAnimJointNode;
HAnimSegment1554: THAnimSegmentNode;
TouchSensor1555: TTouchSensorNode;
Transform1556: TTransformNode;
Shape1557: TShapeNode;
Shape1558: TShapeNode;
LineSet1559: TLineSetNode;
ColorRGBA1560: TColorRGBANode;
Coordinate1561: TCoordinateNode;
HAnimJoint1562: THAnimJointNode;
HAnimSegment1563: THAnimSegmentNode;
TouchSensor1564: TTouchSensorNode;
Transform1565: TTransformNode;
Shape1566: TShapeNode;
Shape1567: TShapeNode;
LineSet1568: TLineSetNode;
ColorRGBA1569: TColorRGBANode;
Coordinate1570: TCoordinateNode;
HAnimSite1571: THAnimSiteNode;
TouchSensor1572: TTouchSensorNode;
Shape1573: TShapeNode;
HAnimJoint1574: THAnimJointNode;
HAnimJoint1575: THAnimJointNode;
HAnimJoint1576: THAnimJointNode;
HAnimJoint1577: THAnimJointNode;
HAnimJoint1578: THAnimJointNode;
HAnimJoint1579: THAnimJointNode;
HAnimJoint1580: THAnimJointNode;
HAnimJoint1581: THAnimJointNode;
HAnimJoint1582: THAnimJointNode;
HAnimJoint1583: THAnimJointNode;
HAnimJoint1584: THAnimJointNode;
HAnimJoint1585: THAnimJointNode;
HAnimJoint1586: THAnimJointNode;
HAnimJoint1587: THAnimJointNode;
HAnimJoint1588: THAnimJointNode;
HAnimJoint1589: THAnimJointNode;
HAnimJoint1590: THAnimJointNode;
HAnimJoint1591: THAnimJointNode;
HAnimJoint1592: THAnimJointNode;
HAnimJoint1593: THAnimJointNode;
HAnimJoint1594: THAnimJointNode;
HAnimJoint1595: THAnimJointNode;
HAnimJoint1596: THAnimJointNode;
HAnimJoint1597: THAnimJointNode;
HAnimJoint1598: THAnimJointNode;
HAnimJoint1599: THAnimJointNode;
HAnimJoint1600: THAnimJointNode;
HAnimJoint1601: THAnimJointNode;
HAnimJoint1602: THAnimJointNode;
HAnimJoint1603: THAnimJointNode;
HAnimJoint1604: THAnimJointNode;
HAnimJoint1605: THAnimJointNode;
HAnimJoint1606: THAnimJointNode;
HAnimJoint1607: THAnimJointNode;
HAnimJoint1608: THAnimJointNode;
HAnimJoint1609: THAnimJointNode;
HAnimJoint1610: THAnimJointNode;
HAnimJoint1611: THAnimJointNode;
HAnimJoint1612: THAnimJointNode;
HAnimJoint1613: THAnimJointNode;
HAnimJoint1614: THAnimJointNode;
HAnimJoint1615: THAnimJointNode;
HAnimJoint1616: THAnimJointNode;
HAnimJoint1617: THAnimJointNode;
HAnimJoint1618: THAnimJointNode;
HAnimJoint1619: THAnimJointNode;
HAnimJoint1620: THAnimJointNode;
HAnimJoint1621: THAnimJointNode;
HAnimJoint1622: THAnimJointNode;
HAnimJoint1623: THAnimJointNode;
HAnimJoint1624: THAnimJointNode;
HAnimJoint1625: THAnimJointNode;
HAnimJoint1626: THAnimJointNode;
HAnimJoint1627: THAnimJointNode;
HAnimJoint1628: THAnimJointNode;
HAnimJoint1629: THAnimJointNode;
HAnimJoint1630: THAnimJointNode;
HAnimJoint1631: THAnimJointNode;
HAnimJoint1632: THAnimJointNode;
HAnimJoint1633: THAnimJointNode;
HAnimJoint1634: THAnimJointNode;
HAnimJoint1635: THAnimJointNode;
HAnimJoint1636: THAnimJointNode;
HAnimJoint1637: THAnimJointNode;
HAnimJoint1638: THAnimJointNode;
HAnimJoint1639: THAnimJointNode;
HAnimJoint1640: THAnimJointNode;
HAnimJoint1641: THAnimJointNode;
HAnimJoint1642: THAnimJointNode;
HAnimJoint1643: THAnimJointNode;
HAnimJoint1644: THAnimJointNode;
HAnimJoint1645: THAnimJointNode;
HAnimJoint1646: THAnimJointNode;
HAnimJoint1647: THAnimJointNode;
HAnimJoint1648: THAnimJointNode;
HAnimJoint1649: THAnimJointNode;
HAnimJoint1650: THAnimJointNode;
HAnimJoint1651: THAnimJointNode;
HAnimJoint1652: THAnimJointNode;
HAnimJoint1653: THAnimJointNode;
HAnimJoint1654: THAnimJointNode;
HAnimJoint1655: THAnimJointNode;
HAnimJoint1656: THAnimJointNode;
HAnimJoint1657: THAnimJointNode;
HAnimJoint1658: THAnimJointNode;
HAnimJoint1659: THAnimJointNode;
HAnimJoint1660: THAnimJointNode;
HAnimJoint1661: THAnimJointNode;
HAnimJoint1662: THAnimJointNode;
HAnimJoint1663: THAnimJointNode;
HAnimJoint1664: THAnimJointNode;
HAnimJoint1665: THAnimJointNode;
HAnimJoint1666: THAnimJointNode;
HAnimJoint1667: THAnimJointNode;
HAnimSegment1668: THAnimSegmentNode;
HAnimSegment1669: THAnimSegmentNode;
HAnimSegment1670: THAnimSegmentNode;
HAnimSegment1671: THAnimSegmentNode;
HAnimSegment1672: THAnimSegmentNode;
HAnimSegment1673: THAnimSegmentNode;
HAnimSegment1674: THAnimSegmentNode;
HAnimSegment1675: THAnimSegmentNode;
HAnimSegment1676: THAnimSegmentNode;
HAnimSegment1677: THAnimSegmentNode;
HAnimSegment1678: THAnimSegmentNode;
HAnimSegment1679: THAnimSegmentNode;
HAnimSegment1680: THAnimSegmentNode;
HAnimSegment1681: THAnimSegmentNode;
HAnimSegment1682: THAnimSegmentNode;
HAnimSegment1683: THAnimSegmentNode;
HAnimSegment1684: THAnimSegmentNode;
HAnimSegment1685: THAnimSegmentNode;
HAnimSegment1686: THAnimSegmentNode;
HAnimSegment1687: THAnimSegmentNode;
HAnimSegment1688: THAnimSegmentNode;
HAnimSegment1689: THAnimSegmentNode;
HAnimSegment1690: THAnimSegmentNode;
HAnimSegment1691: THAnimSegmentNode;
HAnimSegment1692: THAnimSegmentNode;
HAnimSegment1693: THAnimSegmentNode;
HAnimSegment1694: THAnimSegmentNode;
HAnimSegment1695: THAnimSegmentNode;
HAnimSegment1696: THAnimSegmentNode;
HAnimSegment1697: THAnimSegmentNode;
HAnimSegment1698: THAnimSegmentNode;
HAnimSegment1699: THAnimSegmentNode;
HAnimSegment1700: THAnimSegmentNode;
HAnimSegment1701: THAnimSegmentNode;
HAnimSegment1702: THAnimSegmentNode;
HAnimSegment1703: THAnimSegmentNode;
HAnimSegment1704: THAnimSegmentNode;
HAnimSegment1705: THAnimSegmentNode;
HAnimSegment1706: THAnimSegmentNode;
HAnimSegment1707: THAnimSegmentNode;
HAnimSegment1708: THAnimSegmentNode;
HAnimSegment1709: THAnimSegmentNode;
HAnimSegment1710: THAnimSegmentNode;
HAnimSegment1711: THAnimSegmentNode;
HAnimSegment1712: THAnimSegmentNode;
HAnimSegment1713: THAnimSegmentNode;
HAnimSegment1714: THAnimSegmentNode;
HAnimSegment1715: THAnimSegmentNode;
HAnimSegment1716: THAnimSegmentNode;
HAnimSegment1717: THAnimSegmentNode;
HAnimSegment1718: THAnimSegmentNode;
HAnimSegment1719: THAnimSegmentNode;
HAnimSegment1720: THAnimSegmentNode;
HAnimSegment1721: THAnimSegmentNode;
HAnimSegment1722: THAnimSegmentNode;
HAnimSegment1723: THAnimSegmentNode;
HAnimSegment1724: THAnimSegmentNode;
HAnimSegment1725: THAnimSegmentNode;
HAnimSegment1726: THAnimSegmentNode;
HAnimSegment1727: THAnimSegmentNode;
HAnimSegment1728: THAnimSegmentNode;
HAnimSegment1729: THAnimSegmentNode;
HAnimSegment1730: THAnimSegmentNode;
HAnimSegment1731: THAnimSegmentNode;
HAnimSegment1732: THAnimSegmentNode;
HAnimSegment1733: THAnimSegmentNode;
HAnimSegment1734: THAnimSegmentNode;
HAnimSegment1735: THAnimSegmentNode;
HAnimSegment1736: THAnimSegmentNode;
HAnimSegment1737: THAnimSegmentNode;
HAnimSegment1738: THAnimSegmentNode;
HAnimSegment1739: THAnimSegmentNode;
HAnimSegment1740: THAnimSegmentNode;
HAnimSegment1741: THAnimSegmentNode;
HAnimSegment1742: THAnimSegmentNode;
HAnimSegment1743: THAnimSegmentNode;
HAnimSegment1744: THAnimSegmentNode;
HAnimSegment1745: THAnimSegmentNode;
HAnimSegment1746: THAnimSegmentNode;
HAnimSegment1747: THAnimSegmentNode;
HAnimSegment1748: THAnimSegmentNode;
HAnimSegment1749: THAnimSegmentNode;
HAnimSegment1750: THAnimSegmentNode;
HAnimSegment1751: THAnimSegmentNode;
HAnimSegment1752: THAnimSegmentNode;
HAnimSegment1753: THAnimSegmentNode;
HAnimSegment1754: THAnimSegmentNode;
HAnimSegment1755: THAnimSegmentNode;
HAnimSegment1756: THAnimSegmentNode;
HAnimSegment1757: THAnimSegmentNode;
HAnimSegment1758: THAnimSegmentNode;
HAnimSegment1759: THAnimSegmentNode;
HAnimSegment1760: THAnimSegmentNode;
HAnimSegment1761: THAnimSegmentNode;
HAnimSite1762: THAnimSiteNode;
HAnimSite1763: THAnimSiteNode;
HAnimSite1764: THAnimSiteNode;
HAnimSite1765: THAnimSiteNode;
HAnimSite1766: THAnimSiteNode;
HAnimSite1767: THAnimSiteNode;
HAnimSite1768: THAnimSiteNode;
HAnimSite1769: THAnimSiteNode;
HAnimSite1770: THAnimSiteNode;
HAnimSite1771: THAnimSiteNode;
HAnimSite1772: THAnimSiteNode;
HAnimSite1773: THAnimSiteNode;
HAnimSite1774: THAnimSiteNode;
HAnimSite1775: THAnimSiteNode;
HAnimSite1776: THAnimSiteNode;
HAnimSite1777: THAnimSiteNode;
HAnimSite1778: THAnimSiteNode;
HAnimSite1779: THAnimSiteNode;
HAnimSite1780: THAnimSiteNode;
HAnimSite1781: THAnimSiteNode;
HAnimSite1782: THAnimSiteNode;
HAnimSite1783: THAnimSiteNode;
HAnimSite1784: THAnimSiteNode;
HAnimSite1785: THAnimSiteNode;
HAnimSite1786: THAnimSiteNode;
HAnimSite1787: THAnimSiteNode;
HAnimSite1788: THAnimSiteNode;
HAnimSite1789: THAnimSiteNode;
HAnimSite1790: THAnimSiteNode;
HAnimSite1791: THAnimSiteNode;
HAnimSite1792: THAnimSiteNode;
HAnimSite1793: THAnimSiteNode;
HAnimSite1794: THAnimSiteNode;
HAnimSite1795: THAnimSiteNode;
HAnimSite1796: THAnimSiteNode;
HAnimSite1797: THAnimSiteNode;
HAnimSite1798: THAnimSiteNode;
HAnimSite1799: THAnimSiteNode;
HAnimSite1800: THAnimSiteNode;
HAnimSite1801: THAnimSiteNode;
HAnimSite1802: THAnimSiteNode;
HAnimSite1803: THAnimSiteNode;
HAnimSite1804: THAnimSiteNode;
HAnimSite1805: THAnimSiteNode;
HAnimSite1806: THAnimSiteNode;
HAnimSite1807: THAnimSiteNode;
HAnimSite1808: THAnimSiteNode;
HAnimSite1809: THAnimSiteNode;
HAnimSite1810: THAnimSiteNode;
HAnimSite1811: THAnimSiteNode;
HAnimSite1812: THAnimSiteNode;
HAnimSite1813: THAnimSiteNode;
HAnimSite1814: THAnimSiteNode;
HAnimSite1815: THAnimSiteNode;
HAnimSite1816: THAnimSiteNode;
HAnimSite1817: THAnimSiteNode;
HAnimSite1818: THAnimSiteNode;
HAnimSite1819: THAnimSiteNode;
HAnimSite1820: THAnimSiteNode;
HAnimSite1821: THAnimSiteNode;
HAnimSite1822: THAnimSiteNode;
HAnimSite1823: THAnimSiteNode;
HAnimSite1824: THAnimSiteNode;
HAnimSite1825: THAnimSiteNode;
HAnimSite1826: THAnimSiteNode;
HAnimSite1827: THAnimSiteNode;
HAnimSite1828: THAnimSiteNode;
HAnimSite1829: THAnimSiteNode;
HAnimSite1830: THAnimSiteNode;
HAnimSite1831: THAnimSiteNode;
HAnimSite1832: THAnimSiteNode;
HAnimSite1833: THAnimSiteNode;
HAnimSite1834: THAnimSiteNode;
HAnimSite1835: THAnimSiteNode;
HAnimSite1836: THAnimSiteNode;
HAnimSite1837: THAnimSiteNode;
HAnimSite1838: THAnimSiteNode;
HAnimSite1839: THAnimSiteNode;
HAnimSite1840: THAnimSiteNode;
HAnimSite1841: THAnimSiteNode;
HAnimSite1842: THAnimSiteNode;
HAnimSite1843: THAnimSiteNode;
HAnimSite1844: THAnimSiteNode;
HAnimSite1845: THAnimSiteNode;
HAnimSite1846: THAnimSiteNode;
HAnimSite1847: THAnimSiteNode;
HAnimSite1848: THAnimSiteNode;
HAnimSite1849: THAnimSiteNode;
HAnimSite1850: THAnimSiteNode;
HAnimSite1851: THAnimSiteNode;
HAnimSite1852: THAnimSiteNode;
HAnimSite1853: THAnimSiteNode;
Viewpoint1854: TViewpointNode;
Anchor1855: TAnchorNode;
LOD1856: TLODNode;
WorldInfo1857: TWorldInfoNode;
Shape1858: TShapeNode;
HAnimSite1859: THAnimSiteNode;
Viewpoint1860: TViewpointNode;
Anchor1861: TAnchorNode;
LOD1862: TLODNode;
WorldInfo1863: TWorldInfoNode;
Shape1864: TShapeNode;
HAnimSite1865: THAnimSiteNode;
Viewpoint1866: TViewpointNode;
Anchor1867: TAnchorNode;
LOD1868: TLODNode;
WorldInfo1869: TWorldInfoNode;
Shape1870: TShapeNode;
HAnimSite1871: THAnimSiteNode;
Viewpoint1872: TViewpointNode;
Anchor1873: TAnchorNode;
LOD1874: TLODNode;
WorldInfo1875: TWorldInfoNode;
Shape1876: TShapeNode;
HAnimSite1877: THAnimSiteNode;
Viewpoint1878: TViewpointNode;
Anchor1879: TAnchorNode;
LOD1880: TLODNode;
WorldInfo1881: TWorldInfoNode;
Shape1882: TShapeNode;
HAnimSite1883: THAnimSiteNode;
Viewpoint1884: TViewpointNode;
Anchor1885: TAnchorNode;
LOD1886: TLODNode;
WorldInfo1887: TWorldInfoNode;
Shape1888: TShapeNode;
HAnimSite1889: THAnimSiteNode;
Viewpoint1890: TViewpointNode;
Anchor1891: TAnchorNode;
LOD1892: TLODNode;
WorldInfo1893: TWorldInfoNode;
Shape1894: TShapeNode;
HAnimSite1895: THAnimSiteNode;
Viewpoint1896: TViewpointNode;
Anchor1897: TAnchorNode;
LOD1898: TLODNode;
WorldInfo1899: TWorldInfoNode;
Shape1900: TShapeNode;
HAnimSite1901: THAnimSiteNode;
Viewpoint1902: TViewpointNode;
Anchor1903: TAnchorNode;
LOD1904: TLODNode;
WorldInfo1905: TWorldInfoNode;
Shape1906: TShapeNode;
HAnimSite1907: THAnimSiteNode;
Viewpoint1908: TViewpointNode;
Anchor1909: TAnchorNode;
LOD1910: TLODNode;
WorldInfo1911: TWorldInfoNode;
Shape1912: TShapeNode;
HAnimSite1913: THAnimSiteNode;
Viewpoint1914: TViewpointNode;
Anchor1915: TAnchorNode;
LOD1916: TLODNode;
WorldInfo1917: TWorldInfoNode;
Shape1918: TShapeNode;
HAnimSite1919: THAnimSiteNode;
Viewpoint1920: TViewpointNode;
Anchor1921: TAnchorNode;
LOD1922: TLODNode;
WorldInfo1923: TWorldInfoNode;
Shape1924: TShapeNode;
HAnimSite1925: THAnimSiteNode;
Viewpoint1926: TViewpointNode;
Anchor1927: TAnchorNode;
LOD1928: TLODNode;
WorldInfo1929: TWorldInfoNode;
Shape1930: TShapeNode;
HAnimSite1931: THAnimSiteNode;
Viewpoint1932: TViewpointNode;
Anchor1933: TAnchorNode;
LOD1934: TLODNode;
WorldInfo1935: TWorldInfoNode;
Shape1936: TShapeNode;
HAnimSite1937: THAnimSiteNode;
HAnimSite1938: THAnimSiteNode;
HAnimSite1939: THAnimSiteNode;
HAnimSite1940: THAnimSiteNode;
Group1941: TGroupNode;
TimeSensor1942: TTimeSensorNode;
PositionInterpolator1943: TPositionInterpolatorNode;
OrientationInterpolator1944: TOrientationInterpolatorNode;
OrientationInterpolator1945: TOrientationInterpolatorNode;
OrientationInterpolator1946: TOrientationInterpolatorNode;
OrientationInterpolator1947: TOrientationInterpolatorNode;
OrientationInterpolator1948: TOrientationInterpolatorNode;
OrientationInterpolator1949: TOrientationInterpolatorNode;
OrientationInterpolator1950: TOrientationInterpolatorNode;
OrientationInterpolator1951: TOrientationInterpolatorNode;
OrientationInterpolator1952: TOrientationInterpolatorNode;
OrientationInterpolator1953: TOrientationInterpolatorNode;
OrientationInterpolator1954: TOrientationInterpolatorNode;
OrientationInterpolator1955: TOrientationInterpolatorNode;
OrientationInterpolator1956: TOrientationInterpolatorNode;
OrientationInterpolator1957: TOrientationInterpolatorNode;
OrientationInterpolator1958: TOrientationInterpolatorNode;
OrientationInterpolator1959: TOrientationInterpolatorNode;
OrientationInterpolator1960: TOrientationInterpolatorNode;
OrientationInterpolator1961: TOrientationInterpolatorNode;
OrientationInterpolator1962: TOrientationInterpolatorNode;
OrientationInterpolator1963: TOrientationInterpolatorNode;
OrientationInterpolator1964: TOrientationInterpolatorNode;
OrientationInterpolator1965: TOrientationInterpolatorNode;
OrientationInterpolator1966: TOrientationInterpolatorNode;
OrientationInterpolator1967: TOrientationInterpolatorNode;
OrientationInterpolator1968: TOrientationInterpolatorNode;
OrientationInterpolator1969: TOrientationInterpolatorNode;
OrientationInterpolator1970: TOrientationInterpolatorNode;
OrientationInterpolator1971: TOrientationInterpolatorNode;
OrientationInterpolator1972: TOrientationInterpolatorNode;
OrientationInterpolator1973: TOrientationInterpolatorNode;
OrientationInterpolator1974: TOrientationInterpolatorNode;
OrientationInterpolator1975: TOrientationInterpolatorNode;
OrientationInterpolator1976: TOrientationInterpolatorNode;
OrientationInterpolator1977: TOrientationInterpolatorNode;
OrientationInterpolator1978: TOrientationInterpolatorNode;
OrientationInterpolator1979: TOrientationInterpolatorNode;
OrientationInterpolator1980: TOrientationInterpolatorNode;
OrientationInterpolator1981: TOrientationInterpolatorNode;
OrientationInterpolator1982: TOrientationInterpolatorNode;
OrientationInterpolator1983: TOrientationInterpolatorNode;
OrientationInterpolator1984: TOrientationInterpolatorNode;
OrientationInterpolator1985: TOrientationInterpolatorNode;
OrientationInterpolator1986: TOrientationInterpolatorNode;
OrientationInterpolator1987: TOrientationInterpolatorNode;
OrientationInterpolator1988: TOrientationInterpolatorNode;
OrientationInterpolator1989: TOrientationInterpolatorNode;
OrientationInterpolator1990: TOrientationInterpolatorNode;
OrientationInterpolator1991: TOrientationInterpolatorNode;
OrientationInterpolator1992: TOrientationInterpolatorNode;
OrientationInterpolator1993: TOrientationInterpolatorNode;
OrientationInterpolator1994: TOrientationInterpolatorNode;
OrientationInterpolator1995: TOrientationInterpolatorNode;
OrientationInterpolator1996: TOrientationInterpolatorNode;
OrientationInterpolator1997: TOrientationInterpolatorNode;
OrientationInterpolator1998: TOrientationInterpolatorNode;
OrientationInterpolator1999: TOrientationInterpolatorNode;
OrientationInterpolator2000: TOrientationInterpolatorNode;
OrientationInterpolator2001: TOrientationInterpolatorNode;
OrientationInterpolator2002: TOrientationInterpolatorNode;
OrientationInterpolator2003: TOrientationInterpolatorNode;
OrientationInterpolator2004: TOrientationInterpolatorNode;
OrientationInterpolator2005: TOrientationInterpolatorNode;
OrientationInterpolator2006: TOrientationInterpolatorNode;
OrientationInterpolator2007: TOrientationInterpolatorNode;
OrientationInterpolator2008: TOrientationInterpolatorNode;
OrientationInterpolator2009: TOrientationInterpolatorNode;
OrientationInterpolator2010: TOrientationInterpolatorNode;
OrientationInterpolator2011: TOrientationInterpolatorNode;
OrientationInterpolator2012: TOrientationInterpolatorNode;
OrientationInterpolator2013: TOrientationInterpolatorNode;
OrientationInterpolator2014: TOrientationInterpolatorNode;
OrientationInterpolator2015: TOrientationInterpolatorNode;
OrientationInterpolator2016: TOrientationInterpolatorNode;
OrientationInterpolator2017: TOrientationInterpolatorNode;
OrientationInterpolator2018: TOrientationInterpolatorNode;
OrientationInterpolator2019: TOrientationInterpolatorNode;
OrientationInterpolator2020: TOrientationInterpolatorNode;
OrientationInterpolator2021: TOrientationInterpolatorNode;
OrientationInterpolator2022: TOrientationInterpolatorNode;
OrientationInterpolator2023: TOrientationInterpolatorNode;
OrientationInterpolator2024: TOrientationInterpolatorNode;
OrientationInterpolator2025: TOrientationInterpolatorNode;
OrientationInterpolator2026: TOrientationInterpolatorNode;
OrientationInterpolator2027: TOrientationInterpolatorNode;
OrientationInterpolator2028: TOrientationInterpolatorNode;
OrientationInterpolator2029: TOrientationInterpolatorNode;
OrientationInterpolator2030: TOrientationInterpolatorNode;
OrientationInterpolator2031: TOrientationInterpolatorNode;
OrientationInterpolator2032: TOrientationInterpolatorNode;
Group2033: TGroupNode;
TimeSensor2034: TTimeSensorNode;
OrientationInterpolator2035: TOrientationInterpolatorNode;
OrientationInterpolator2036: TOrientationInterpolatorNode;
OrientationInterpolator2037: TOrientationInterpolatorNode;
OrientationInterpolator2038: TOrientationInterpolatorNode;
OrientationInterpolator2039: TOrientationInterpolatorNode;
OrientationInterpolator2040: TOrientationInterpolatorNode;
OrientationInterpolator2041: TOrientationInterpolatorNode;
OrientationInterpolator2042: TOrientationInterpolatorNode;
OrientationInterpolator2043: TOrientationInterpolatorNode;
OrientationInterpolator2044: TOrientationInterpolatorNode;
OrientationInterpolator2045: TOrientationInterpolatorNode;
OrientationInterpolator2046: TOrientationInterpolatorNode;
OrientationInterpolator2047: TOrientationInterpolatorNode;
OrientationInterpolator2048: TOrientationInterpolatorNode;
OrientationInterpolator2049: TOrientationInterpolatorNode;
OrientationInterpolator2050: TOrientationInterpolatorNode;
OrientationInterpolator2051: TOrientationInterpolatorNode;
OrientationInterpolator2052: TOrientationInterpolatorNode;
OrientationInterpolator2053: TOrientationInterpolatorNode;
OrientationInterpolator2054: TOrientationInterpolatorNode;
PositionInterpolator2055: TPositionInterpolatorNode;
OrientationInterpolator2056: TOrientationInterpolatorNode;
OrientationInterpolator2057: TOrientationInterpolatorNode;
OrientationInterpolator2058: TOrientationInterpolatorNode;
OrientationInterpolator2059: TOrientationInterpolatorNode;
OrientationInterpolator2060: TOrientationInterpolatorNode;
OrientationInterpolator2061: TOrientationInterpolatorNode;
OrientationInterpolator2062: TOrientationInterpolatorNode;
OrientationInterpolator2063: TOrientationInterpolatorNode;
OrientationInterpolator2064: TOrientationInterpolatorNode;
OrientationInterpolator2065: TOrientationInterpolatorNode;
OrientationInterpolator2066: TOrientationInterpolatorNode;
OrientationInterpolator2067: TOrientationInterpolatorNode;
Group2068: TGroupNode;
TimeSensor2069: TTimeSensorNode;
OrientationInterpolator2070: TOrientationInterpolatorNode;
OrientationInterpolator2071: TOrientationInterpolatorNode;
OrientationInterpolator2072: TOrientationInterpolatorNode;
OrientationInterpolator2073: TOrientationInterpolatorNode;
OrientationInterpolator2074: TOrientationInterpolatorNode;
OrientationInterpolator2075: TOrientationInterpolatorNode;
OrientationInterpolator2076: TOrientationInterpolatorNode;
OrientationInterpolator2077: TOrientationInterpolatorNode;
OrientationInterpolator2078: TOrientationInterpolatorNode;
OrientationInterpolator2079: TOrientationInterpolatorNode;
OrientationInterpolator2080: TOrientationInterpolatorNode;
OrientationInterpolator2081: TOrientationInterpolatorNode;
OrientationInterpolator2082: TOrientationInterpolatorNode;
OrientationInterpolator2083: TOrientationInterpolatorNode;
OrientationInterpolator2084: TOrientationInterpolatorNode;
OrientationInterpolator2085: TOrientationInterpolatorNode;
OrientationInterpolator2086: TOrientationInterpolatorNode;
OrientationInterpolator2087: TOrientationInterpolatorNode;
PositionInterpolator2088: TPositionInterpolatorNode;
OrientationInterpolator2089: TOrientationInterpolatorNode;
OrientationInterpolator2090: TOrientationInterpolatorNode;
OrientationInterpolator2091: TOrientationInterpolatorNode;
OrientationInterpolator2092: TOrientationInterpolatorNode;
OrientationInterpolator2093: TOrientationInterpolatorNode;
OrientationInterpolator2094: TOrientationInterpolatorNode;
OrientationInterpolator2095: TOrientationInterpolatorNode;
OrientationInterpolator2096: TOrientationInterpolatorNode;
OrientationInterpolator2097: TOrientationInterpolatorNode;
Group2098: TGroupNode;
TimeSensor2099: TTimeSensorNode;
OrientationInterpolator2100: TOrientationInterpolatorNode;
OrientationInterpolator2101: TOrientationInterpolatorNode;
OrientationInterpolator2102: TOrientationInterpolatorNode;
OrientationInterpolator2103: TOrientationInterpolatorNode;
OrientationInterpolator2104: TOrientationInterpolatorNode;
OrientationInterpolator2105: TOrientationInterpolatorNode;
OrientationInterpolator2106: TOrientationInterpolatorNode;
OrientationInterpolator2107: TOrientationInterpolatorNode;
OrientationInterpolator2108: TOrientationInterpolatorNode;
OrientationInterpolator2109: TOrientationInterpolatorNode;
OrientationInterpolator2110: TOrientationInterpolatorNode;
OrientationInterpolator2111: TOrientationInterpolatorNode;
OrientationInterpolator2112: TOrientationInterpolatorNode;
OrientationInterpolator2113: TOrientationInterpolatorNode;
OrientationInterpolator2114: TOrientationInterpolatorNode;
OrientationInterpolator2115: TOrientationInterpolatorNode;
OrientationInterpolator2116: TOrientationInterpolatorNode;
OrientationInterpolator2117: TOrientationInterpolatorNode;
PositionInterpolator2118: TPositionInterpolatorNode;
OrientationInterpolator2119: TOrientationInterpolatorNode;
OrientationInterpolator2120: TOrientationInterpolatorNode;
OrientationInterpolator2121: TOrientationInterpolatorNode;
OrientationInterpolator2122: TOrientationInterpolatorNode;
OrientationInterpolator2123: TOrientationInterpolatorNode;
OrientationInterpolator2124: TOrientationInterpolatorNode;
OrientationInterpolator2125: TOrientationInterpolatorNode;
OrientationInterpolator2126: TOrientationInterpolatorNode;
OrientationInterpolator2127: TOrientationInterpolatorNode;
Group2128: TGroupNode;
TimeSensor2129: TTimeSensorNode;
OrientationInterpolator2130: TOrientationInterpolatorNode;
OrientationInterpolator2131: TOrientationInterpolatorNode;
OrientationInterpolator2132: TOrientationInterpolatorNode;
OrientationInterpolator2133: TOrientationInterpolatorNode;
OrientationInterpolator2134: TOrientationInterpolatorNode;
OrientationInterpolator2135: TOrientationInterpolatorNode;
OrientationInterpolator2136: TOrientationInterpolatorNode;
OrientationInterpolator2137: TOrientationInterpolatorNode;
OrientationInterpolator2138: TOrientationInterpolatorNode;
OrientationInterpolator2139: TOrientationInterpolatorNode;
OrientationInterpolator2140: TOrientationInterpolatorNode;
OrientationInterpolator2141: TOrientationInterpolatorNode;
OrientationInterpolator2142: TOrientationInterpolatorNode;
OrientationInterpolator2143: TOrientationInterpolatorNode;
OrientationInterpolator2144: TOrientationInterpolatorNode;
OrientationInterpolator2145: TOrientationInterpolatorNode;
OrientationInterpolator2146: TOrientationInterpolatorNode;
OrientationInterpolator2147: TOrientationInterpolatorNode;
PositionInterpolator2148: TPositionInterpolatorNode;
OrientationInterpolator2149: TOrientationInterpolatorNode;
OrientationInterpolator2150: TOrientationInterpolatorNode;
OrientationInterpolator2151: TOrientationInterpolatorNode;
OrientationInterpolator2152: TOrientationInterpolatorNode;
OrientationInterpolator2153: TOrientationInterpolatorNode;
OrientationInterpolator2154: TOrientationInterpolatorNode;
OrientationInterpolator2155: TOrientationInterpolatorNode;
OrientationInterpolator2156: TOrientationInterpolatorNode;
OrientationInterpolator2157: TOrientationInterpolatorNode;
Group2158: TGroupNode;
TimeSensor2159: TTimeSensorNode;
OrientationInterpolator2160: TOrientationInterpolatorNode;
OrientationInterpolator2161: TOrientationInterpolatorNode;
OrientationInterpolator2162: TOrientationInterpolatorNode;
OrientationInterpolator2163: TOrientationInterpolatorNode;
OrientationInterpolator2164: TOrientationInterpolatorNode;
OrientationInterpolator2165: TOrientationInterpolatorNode;
OrientationInterpolator2166: TOrientationInterpolatorNode;
OrientationInterpolator2167: TOrientationInterpolatorNode;
OrientationInterpolator2168: TOrientationInterpolatorNode;
OrientationInterpolator2169: TOrientationInterpolatorNode;
OrientationInterpolator2170: TOrientationInterpolatorNode;
OrientationInterpolator2171: TOrientationInterpolatorNode;
OrientationInterpolator2172: TOrientationInterpolatorNode;
OrientationInterpolator2173: TOrientationInterpolatorNode;
OrientationInterpolator2174: TOrientationInterpolatorNode;
OrientationInterpolator2175: TOrientationInterpolatorNode;
OrientationInterpolator2176: TOrientationInterpolatorNode;
OrientationInterpolator2177: TOrientationInterpolatorNode;
PositionInterpolator2178: TPositionInterpolatorNode;
OrientationInterpolator2179: TOrientationInterpolatorNode;
OrientationInterpolator2180: TOrientationInterpolatorNode;
OrientationInterpolator2181: TOrientationInterpolatorNode;
OrientationInterpolator2182: TOrientationInterpolatorNode;
OrientationInterpolator2183: TOrientationInterpolatorNode;
OrientationInterpolator2184: TOrientationInterpolatorNode;
OrientationInterpolator2185: TOrientationInterpolatorNode;
OrientationInterpolator2186: TOrientationInterpolatorNode;
OrientationInterpolator2187: TOrientationInterpolatorNode;
Group2188: TGroupNode;
TimeSensor2189: TTimeSensorNode;
OrientationInterpolator2190: TOrientationInterpolatorNode;
OrientationInterpolator2191: TOrientationInterpolatorNode;
OrientationInterpolator2192: TOrientationInterpolatorNode;
OrientationInterpolator2193: TOrientationInterpolatorNode;
OrientationInterpolator2194: TOrientationInterpolatorNode;
OrientationInterpolator2195: TOrientationInterpolatorNode;
OrientationInterpolator2196: TOrientationInterpolatorNode;
OrientationInterpolator2197: TOrientationInterpolatorNode;
OrientationInterpolator2198: TOrientationInterpolatorNode;
OrientationInterpolator2199: TOrientationInterpolatorNode;
OrientationInterpolator2200: TOrientationInterpolatorNode;
OrientationInterpolator2201: TOrientationInterpolatorNode;
OrientationInterpolator2202: TOrientationInterpolatorNode;
OrientationInterpolator2203: TOrientationInterpolatorNode;
OrientationInterpolator2204: TOrientationInterpolatorNode;
OrientationInterpolator2205: TOrientationInterpolatorNode;
OrientationInterpolator2206: TOrientationInterpolatorNode;
OrientationInterpolator2207: TOrientationInterpolatorNode;
PositionInterpolator2208: TPositionInterpolatorNode;
OrientationInterpolator2209: TOrientationInterpolatorNode;
OrientationInterpolator2210: TOrientationInterpolatorNode;
OrientationInterpolator2211: TOrientationInterpolatorNode;
OrientationInterpolator2212: TOrientationInterpolatorNode;
OrientationInterpolator2213: TOrientationInterpolatorNode;
OrientationInterpolator2214: TOrientationInterpolatorNode;
OrientationInterpolator2215: TOrientationInterpolatorNode;
OrientationInterpolator2216: TOrientationInterpolatorNode;
OrientationInterpolator2217: TOrientationInterpolatorNode;
Group2218: TGroupNode;
TimeSensor2219: TTimeSensorNode;
OrientationInterpolator2220: TOrientationInterpolatorNode;
OrientationInterpolator2221: TOrientationInterpolatorNode;
OrientationInterpolator2222: TOrientationInterpolatorNode;
OrientationInterpolator2223: TOrientationInterpolatorNode;
OrientationInterpolator2224: TOrientationInterpolatorNode;
OrientationInterpolator2225: TOrientationInterpolatorNode;
OrientationInterpolator2226: TOrientationInterpolatorNode;
OrientationInterpolator2227: TOrientationInterpolatorNode;
OrientationInterpolator2228: TOrientationInterpolatorNode;
OrientationInterpolator2229: TOrientationInterpolatorNode;
OrientationInterpolator2230: TOrientationInterpolatorNode;
OrientationInterpolator2231: TOrientationInterpolatorNode;
OrientationInterpolator2232: TOrientationInterpolatorNode;
OrientationInterpolator2233: TOrientationInterpolatorNode;
OrientationInterpolator2234: TOrientationInterpolatorNode;
OrientationInterpolator2235: TOrientationInterpolatorNode;
OrientationInterpolator2236: TOrientationInterpolatorNode;
OrientationInterpolator2237: TOrientationInterpolatorNode;
PositionInterpolator2238: TPositionInterpolatorNode;
OrientationInterpolator2239: TOrientationInterpolatorNode;
OrientationInterpolator2240: TOrientationInterpolatorNode;
OrientationInterpolator2241: TOrientationInterpolatorNode;
OrientationInterpolator2242: TOrientationInterpolatorNode;
OrientationInterpolator2243: TOrientationInterpolatorNode;
OrientationInterpolator2244: TOrientationInterpolatorNode;
OrientationInterpolator2245: TOrientationInterpolatorNode;
OrientationInterpolator2246: TOrientationInterpolatorNode;
OrientationInterpolator2247: TOrientationInterpolatorNode;
Group2248: TGroupNode;
TimeSensor2249: TTimeSensorNode;
OrientationInterpolator2250: TOrientationInterpolatorNode;
OrientationInterpolator2251: TOrientationInterpolatorNode;
OrientationInterpolator2252: TOrientationInterpolatorNode;
OrientationInterpolator2253: TOrientationInterpolatorNode;
OrientationInterpolator2254: TOrientationInterpolatorNode;
OrientationInterpolator2255: TOrientationInterpolatorNode;
OrientationInterpolator2256: TOrientationInterpolatorNode;
OrientationInterpolator2257: TOrientationInterpolatorNode;
OrientationInterpolator2258: TOrientationInterpolatorNode;
OrientationInterpolator2259: TOrientationInterpolatorNode;
OrientationInterpolator2260: TOrientationInterpolatorNode;
OrientationInterpolator2261: TOrientationInterpolatorNode;
OrientationInterpolator2262: TOrientationInterpolatorNode;
OrientationInterpolator2263: TOrientationInterpolatorNode;
OrientationInterpolator2264: TOrientationInterpolatorNode;
OrientationInterpolator2265: TOrientationInterpolatorNode;
OrientationInterpolator2266: TOrientationInterpolatorNode;
OrientationInterpolator2267: TOrientationInterpolatorNode;
OrientationInterpolator2268: TOrientationInterpolatorNode;
OrientationInterpolator2269: TOrientationInterpolatorNode;
OrientationInterpolator2270: TOrientationInterpolatorNode;
OrientationInterpolator2271: TOrientationInterpolatorNode;
OrientationInterpolator2272: TOrientationInterpolatorNode;
OrientationInterpolator2273: TOrientationInterpolatorNode;
PositionInterpolator2274: TPositionInterpolatorNode;
OrientationInterpolator2275: TOrientationInterpolatorNode;
Group2276: TGroupNode;
Transform2277: TTransformNode;
Inline2278: TInlineNode;
Transform2279: TTransformNode;
ProximitySensor2280: TProximitySensorNode;
Transform2281: TTransformNode;
Shape2282: TShapeNode;
Appearance2283: TAppearanceNode;
Material2284: TMaterialNode;
Box2285: TBoxNode;
Transform2286: TTransformNode;
Shape2287: TShapeNode;
Appearance2288: TAppearanceNode;
Material2289: TMaterialNode;
IndexedLineSet2290: TIndexedLineSetNode;
Coordinate2291: TCoordinateNode;
Transform2292: TTransformNode;
Shape2293: TShapeNode;
Appearance2294: TAppearanceNode;
Material2295: TMaterialNode;
IndexedLineSet2296: TIndexedLineSetNode;
Transform2297: TTransformNode;
Shape2298: TShapeNode;
Appearance2299: TAppearanceNode;
Material2300: TMaterialNode;
IndexedLineSet2301: TIndexedLineSetNode;
Transform2302: TTransformNode;
Transform2303: TTransformNode;
Transform2304: TTransformNode;
TouchSensor2305: TTouchSensorNode;
Shape2306: TShapeNode;
Appearance2307: TAppearanceNode;
Material2308: TMaterialNode;
Text2309: TTextNode;
Shape2310: TShapeNode;
Appearance2311: TAppearanceNode;
Material2312: TMaterialNode;
IndexedFaceSet2313: TIndexedFaceSetNode;
Coordinate2314: TCoordinateNode;
Transform2315: TTransformNode;
TouchSensor2316: TTouchSensorNode;
Shape2317: TShapeNode;
Appearance2318: TAppearanceNode;
Material2319: TMaterialNode;
Text2320: TTextNode;
Shape2321: TShapeNode;
Appearance2322: TAppearanceNode;
Material2323: TMaterialNode;
IndexedFaceSet2324: TIndexedFaceSetNode;
Transform2325: TTransformNode;
TouchSensor2326: TTouchSensorNode;
Shape2327: TShapeNode;
Appearance2328: TAppearanceNode;
Material2329: TMaterialNode;
Text2330: TTextNode;
Shape2331: TShapeNode;
Appearance2332: TAppearanceNode;
Material2333: TMaterialNode;
IndexedFaceSet2334: TIndexedFaceSetNode;
Transform2335: TTransformNode;
TouchSensor2336: TTouchSensorNode;
Shape2337: TShapeNode;
Appearance2338: TAppearanceNode;
Material2339: TMaterialNode;
Text2340: TTextNode;
Shape2341: TShapeNode;
Appearance2342: TAppearanceNode;
Material2343: TMaterialNode;
IndexedFaceSet2344: TIndexedFaceSetNode;
Transform2345: TTransformNode;
TouchSensor2346: TTouchSensorNode;
Shape2347: TShapeNode;
Appearance2348: TAppearanceNode;
Material2349: TMaterialNode;
Text2350: TTextNode;
Shape2351: TShapeNode;
Appearance2352: TAppearanceNode;
Material2353: TMaterialNode;
IndexedFaceSet2354: TIndexedFaceSetNode;
Transform2355: TTransformNode;
TouchSensor2356: TTouchSensorNode;
Shape2357: TShapeNode;
Appearance2358: TAppearanceNode;
Material2359: TMaterialNode;
Text2360: TTextNode;
Shape2361: TShapeNode;
Appearance2362: TAppearanceNode;
Material2363: TMaterialNode;
IndexedFaceSet2364: TIndexedFaceSetNode;
Transform2365: TTransformNode;
TouchSensor2366: TTouchSensorNode;
Shape2367: TShapeNode;
Appearance2368: TAppearanceNode;
Material2369: TMaterialNode;
Text2370: TTextNode;
Shape2371: TShapeNode;
Appearance2372: TAppearanceNode;
Material2373: TMaterialNode;
IndexedFaceSet2374: TIndexedFaceSetNode;
Transform2375: TTransformNode;
TouchSensor2376: TTouchSensorNode;
Shape2377: TShapeNode;
Appearance2378: TAppearanceNode;
Material2379: TMaterialNode;
Text2380: TTextNode;
Shape2381: TShapeNode;
Appearance2382: TAppearanceNode;
Material2383: TMaterialNode;
IndexedFaceSet2384: TIndexedFaceSetNode;
Transform2385: TTransformNode;
TouchSensor2386: TTouchSensorNode;
Shape2387: TShapeNode;
Appearance2388: TAppearanceNode;
Material2389: TMaterialNode;
Text2390: TTextNode;
Shape2391: TShapeNode;
Appearance2392: TAppearanceNode;
Material2393: TMaterialNode;
IndexedFaceSet2394: TIndexedFaceSetNode;
Group2395: TGroupNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'HAnimSpecificationLOA3Animation.x3d';
X3D0.Meta['description'] := 'HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.';
X3D0.Meta['reference'] := 'https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds';
X3D0.Meta['reference'] := 'HAnimSpecificationLOA3Illustrated.x3d';
X3D0.Meta['reference'] := 'HAnimSpecificationLOA3Invisible.x3d';
X3D0.Meta['reference'] := 'HAnimSpecificationExampleChangeLog.txt';
X3D0.Meta['reference'] := 'Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.';
X3D0.Meta['reference'] := 'http://www.cis.upenn.edu/~badler/anthro/89-71.ps';
X3D0.Meta['reference'] := 'tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf';
X3D0.Meta['reference'] := 'originals/LOA3ExampleSourceWithDiamondsOriginal.wrl';
X3D0.Meta['reference'] := 'originals/LOA3ExampleSourceWithDiamondsOriginal.x3d';
X3D0.Meta['reference'] := 'originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d';
X3D0.Meta['created'] := '24 April 2013';
X3D0.Meta['modified'] := 'Tue, 09 Sep 2025 19:39:08 GMT';
X3D0.Meta['error'] := 'Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported';
X3D0.Meta['Image'] := 'HAnimSpecificationLOA3MotionH3DViewer.png';
X3D0.Meta['Image'] := 'HAnimSpecificationLOA3MotionInstantReality.png';
X3D0.Meta['Image'] := 'HAnimSpecificationLOA3MotionOctagaVS.png';
X3D0.Meta['Image'] := 'HAnimSpecificationLOA3MotionView3dscene.png';
X3D0.Meta['Image'] := 'images/BonesAllSkeletonFrontViewLOA1.png';
X3D0.Meta['Image'] := 'images/BonesAllSkeletonFrontViewLOA2.png';
X3D0.Meta['Image'] := 'images/BonesAllSkeletonFrontViewLOA3.png';
X3D0.Meta['creator'] := 'Matthew T. Beitler, Joe D. Williams, Don Brutzman';
X3D0.Meta['translator'] := 'Don Brutzman and Joe Williams';
X3D0.Meta['generator'] := 'BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit';
Group29 := TGroupNode.Create;
Background30 := TBackgroundNode.Create;
Background30.SetSkyColor([Vector3(0.3,0.3,0.3)]);
{ .AddChildren }
Group29.AddChildren([Background30]);
NavigationInfo31 := TNavigationInfoNode.Create;
{ .AddChildren }
Group29.AddChildren([NavigationInfo31]);
Group32 := TGroupNode.Create;
WorldInfo33 := TWorldInfoNode.Create;
WorldInfo33.Title := 'HANIM 200x Default Joint Centers, LOA3';
WorldInfo33.SetInfo([' HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ']);
{ .AddChildren }
Group32.AddChildren([WorldInfo33]);
{ .AddChildren }
Group29.AddChildren([Group32]);
Viewpoint34 := TViewpointNode.Create;
Viewpoint34.Description := 'Humanoid LOA 3 Front';
Viewpoint34.Position := Vector3(0,0.4,4);
Viewpoint34.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group29.AddChildren([Viewpoint34]);
Viewpoint35 := TViewpointNode.Create;
Viewpoint35.Description := 'Humanoid LOA 3 Front Close';
Viewpoint35.Position := Vector3(0,0.8,2);
Viewpoint35.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group29.AddChildren([Viewpoint35]);
Viewpoint36 := TViewpointNode.Create;
Viewpoint36.Description := 'Humanoid LOA 3 Front Closer';
Viewpoint36.Position := Vector3(0,1.2,1);
Viewpoint36.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group29.AddChildren([Viewpoint36]);
Viewpoint37 := TViewpointNode.Create;
Viewpoint37.Description := 'Humanoid LOA 3 Front Face';
Viewpoint37.Position := Vector3(0,1.63,1);
Viewpoint37.CenterOfRotation := Vector3(0,1.5,0.0016);
{ .AddChildren }
Group29.AddChildren([Viewpoint37]);
Viewpoint38 := TViewpointNode.Create;
Viewpoint38.Description := 'Humanoid LOA 3 Right Side';
Viewpoint38.Position := Vector3(2.6,0.8,0);
Viewpoint38.Orientation := Vector4(0,1,0,1.5708);
Viewpoint38.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group29.AddChildren([Viewpoint38]);
Viewpoint39 := TViewpointNode.Create;
Viewpoint39.Description := 'Humanoid LOA 3 Right Side Close';
Viewpoint39.Position := Vector3(1,0.8,0.5);
Viewpoint39.Orientation := Vector4(0,1,0,1.2);
Viewpoint39.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group29.AddChildren([Viewpoint39]);
Viewpoint40 := TViewpointNode.Create;
Viewpoint40.Description := 'Humanoid LOA 3 Left Side Close';
Viewpoint40.Position := Vector3(-1,0.8,0.5);
Viewpoint40.Orientation := Vector4(0,1,0,-1.2);
Viewpoint40.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group29.AddChildren([Viewpoint40]);
Viewpoint41 := TViewpointNode.Create;
Viewpoint41.Description := 'Humanoid LOA 3 Left Side';
Viewpoint41.Position := Vector3(-2.6,0.8,0);
Viewpoint41.Orientation := Vector4(0,1,0,-1.5708);
Viewpoint41.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group29.AddChildren([Viewpoint41]);
Viewpoint42 := TViewpointNode.Create;
Viewpoint42.Description := 'Humanoid LOA 3 Top';
Viewpoint42.Position := Vector3(0,3.5,0);
Viewpoint42.Orientation := Vector4(1,0,0,-1.5708);
Viewpoint42.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group29.AddChildren([Viewpoint42]);
HAnimHumanoid43 := THAnimHumanoidNode.Create;
HAnimHumanoid43.NameField := 'humanoid';
HAnimHumanoid43.SetInfo(['authorName=Matthew T. Beitler Joe D. Williams Don Brutzman','authorEmail=HAnim@web3D.org','copyright=none','creationDate=12 May 1999','usageRestrictions=none','humanoidVersion=2.0','height=1.7504']);
HAnimHumanoid43.Version := '1.0';
HAnimJoint44 := THAnimJointNode.Create;
HAnimJoint44.NameField := 'humanoid_root';
HAnimJoint44.Center := Vector3(0,0.824,0.0277);
HAnimSegment45 := THAnimSegmentNode.Create;
HAnimSegment45.NameField := 'sacrum';
TouchSensor46 := TTouchSensorNode.Create;
TouchSensor46.Description := 'HAnimJoint HumanoidRoot, HAnimSegment sacrum';
{ .AddChildren }
HAnimSegment45.AddChildren([TouchSensor46]);
Transform47 := TTransformNode.Create;
Transform47.Translation := Vector3(0,0.824,0.0277);
Shape48 := TShapeNode.Create;
Appearance49 := TAppearanceNode.Create;
Material50 := TMaterialNode.Create;
Material50.DiffuseColor := Vector3(1,0.5,0);
Material50.Transparency := 0.5;
{ .SetMaterial }
Appearance49.Material := Material50;
{ .SetAppearance }
Shape48.Appearance := Appearance49;
Sphere51 := TSphereNode.Create;
Sphere51.Radius := 0.006;
{ .SetGeometry }
Shape48.Geometry := Sphere51;
{ .AddChild }
Transform47.AddChildren([Shape48]);
{ .AddChildren }
HAnimSegment45.AddChildren([Transform47]);
Shape52 := TShapeNode.Create;
LineSet53 := TLineSetNode.Create;
LineSet53.SetVertexCount([2]);
ColorRGBA54 := TColorRGBANode.Create;
ColorRGBA54.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ .SetColor }
LineSet53.Color := ColorRGBA54;
Coordinate55 := TCoordinateNode.Create;
Coordinate55.SetPoint([Vector3(0,0.824,0.0277),Vector3(0,0.9149,0.0016)]);
{ .SetCoord }
LineSet53.Coord := Coordinate55;
{ .SetGeometry }
Shape52.Geometry := LineSet53;
{ .AddChildren }
HAnimSegment45.AddChildren([Shape52]);
Shape56 := TShapeNode.Create;
LineSet57 := TLineSetNode.Create;
LineSet57.SetVertexCount([2]);
ColorRGBA58 := TColorRGBANode.Create;
ColorRGBA58 := ColorRGBA54;
{ .SetColor }
LineSet57.Color := ColorRGBA58;
Coordinate59 := TCoordinateNode.Create;
Coordinate59.SetPoint([Vector3(0,0.824,0.0277),Vector3(0.0028,1.0568,-0.0776)]);
{ .SetCoord }
LineSet57.Coord := Coordinate59;
{ .SetGeometry }
Shape56.Geometry := LineSet57;
{ .AddChildren }
HAnimSegment45.AddChildren([Shape56]);
{ .AddChildren }
HAnimJoint44.AddChildren([HAnimSegment45]);
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.NameField := 'sacroiliac';
HAnimJoint60.Center := Vector3(0,0.9149,0.0016);
HAnimSegment61 := THAnimSegmentNode.Create;
HAnimSegment61.NameField := 'pelvis';
TouchSensor62 := TTouchSensorNode.Create;
TouchSensor62.Description := 'HAnimJoint sacroiliac, HAnimSegment pelvis';
{ .AddChildren }
HAnimSegment61.AddChildren([TouchSensor62]);
Transform63 := TTransformNode.Create;
Transform63.Translation := Vector3(0,0.9149,0.0016);
Shape64 := TShapeNode.Create;
Shape64 := Shape48;
{ .AddChild }
Transform63.AddChildren([Shape64]);
{ .AddChildren }
HAnimSegment61.AddChildren([Transform63]);
Shape65 := TShapeNode.Create;
LineSet66 := TLineSetNode.Create;
LineSet66.SetVertexCount([2]);
ColorRGBA67 := TColorRGBANode.Create;
ColorRGBA67 := ColorRGBA54;
{ .SetColor }
LineSet66.Color := ColorRGBA67;
Coordinate68 := TCoordinateNode.Create;
Coordinate68.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0961,0.9124,-0.0001)]);
{ .SetCoord }
LineSet66.Coord := Coordinate68;
{ .SetGeometry }
Shape65.Geometry := LineSet66;
{ .AddChildren }
HAnimSegment61.AddChildren([Shape65]);
Shape69 := TShapeNode.Create;
LineSet70 := TLineSetNode.Create;
LineSet70.SetVertexCount([2]);
ColorRGBA71 := TColorRGBANode.Create;
ColorRGBA71 := ColorRGBA54;
{ .SetColor }
LineSet70.Color := ColorRGBA71;
Coordinate72 := TCoordinateNode.Create;
Coordinate72.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.0961,0.9124,-0.0001)]);
{ .SetCoord }
LineSet70.Coord := Coordinate72;
{ .SetGeometry }
Shape69.Geometry := LineSet70;
{ .AddChildren }
HAnimSegment61.AddChildren([Shape69]);
Shape73 := TShapeNode.Create;
LineSet74 := TLineSetNode.Create;
LineSet74.SetVertexCount([2]);
ColorRGBA75 := TColorRGBANode.Create;
ColorRGBA75.SetColor([Vector4(1,0,0,1),Vector4(1,0,0,0.1)]);
{ .SetColor }
LineSet74.Color := ColorRGBA75;
Coordinate76 := TCoordinateNode.Create;
Coordinate76.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.1525,1.0628,0.0035)]);
{ .SetCoord }
LineSet74.Coord := Coordinate76;
{ .SetGeometry }
Shape73.Geometry := LineSet74;
{ .AddChildren }
HAnimSegment61.AddChildren([Shape73]);
Shape77 := TShapeNode.Create;
LineSet78 := TLineSetNode.Create;
LineSet78.SetVertexCount([2]);
ColorRGBA79 := TColorRGBANode.Create;
ColorRGBA79 := ColorRGBA75;
{ .SetColor }
LineSet78.Color := ColorRGBA79;
Coordinate80 := TCoordinateNode.Create;
Coordinate80.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.1689,0.8419,0.0352)]);
{ .SetCoord }
LineSet78.Coord := Coordinate80;
{ .SetGeometry }
Shape77.Geometry := LineSet78;
{ .AddChildren }
HAnimSegment61.AddChildren([Shape77]);
Shape81 := TShapeNode.Create;
LineSet82 := TLineSetNode.Create;
LineSet82.SetVertexCount([2]);
ColorRGBA83 := TColorRGBANode.Create;
ColorRGBA83 := ColorRGBA75;
{ .SetColor }
LineSet82.Color := ColorRGBA83;
Coordinate84 := TCoordinateNode.Create;
Coordinate84.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.1612,1.0537,0.0008)]);
{ .SetCoord }
LineSet82.Coord := Coordinate84;
{ .SetGeometry }
Shape81.Geometry := LineSet82;
{ .AddChildren }
HAnimSegment61.AddChildren([Shape81]);
Shape85 := TShapeNode.Create;
LineSet86 := TLineSetNode.Create;
LineSet86.SetVertexCount([2]);
ColorRGBA87 := TColorRGBANode.Create;
ColorRGBA87 := ColorRGBA75;
{ .SetColor }
LineSet86.Color := ColorRGBA87;
Coordinate88 := TCoordinateNode.Create;
Coordinate88.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.1677,0.8336,0.0303)]);
{ .SetCoord }
LineSet86.Coord := Coordinate88;
{ .SetGeometry }
Shape85.Geometry := LineSet86;
{ .AddChildren }
HAnimSegment61.AddChildren([Shape85]);
Shape89 := TShapeNode.Create;
LineSet90 := TLineSetNode.Create;
LineSet90.SetVertexCount([2]);
ColorRGBA91 := TColorRGBANode.Create;
ColorRGBA91 := ColorRGBA75;
{ .SetColor }
LineSet90.Color := ColorRGBA91;
Coordinate92 := TCoordinateNode.Create;
Coordinate92.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.0887,1.0021,0.1112)]);
{ .SetCoord }
LineSet90.Coord := Coordinate92;
{ .SetGeometry }
Shape89.Geometry := LineSet90;
{ .AddChildren }
HAnimSegment61.AddChildren([Shape89]);
Shape93 := TShapeNode.Create;
LineSet94 := TLineSetNode.Create;
LineSet94.SetVertexCount([2]);
ColorRGBA95 := TColorRGBANode.Create;
ColorRGBA95 := ColorRGBA75;
{ .SetColor }
LineSet94.Color := ColorRGBA95;
Coordinate96 := TCoordinateNode.Create;
Coordinate96.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0925,0.9983,0.1052)]);
{ .SetCoord }
LineSet94.Coord := Coordinate96;
{ .SetGeometry }
Shape93.Geometry := LineSet94;
{ .AddChildren }
HAnimSegment61.AddChildren([Shape93]);
Shape97 := TShapeNode.Create;
LineSet98 := TLineSetNode.Create;
LineSet98.SetVertexCount([2]);
ColorRGBA99 := TColorRGBANode.Create;
ColorRGBA99 := ColorRGBA75;
{ .SetColor }
LineSet98.Color := ColorRGBA99;
Coordinate100 := TCoordinateNode.Create;
Coordinate100.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.0716,1.019,-0.1138)]);
{ .SetCoord }
LineSet98.Coord := Coordinate100;
{ .SetGeometry }
Shape97.Geometry := LineSet98;
{ .AddChildren }
HAnimSegment61.AddChildren([Shape97]);
Shape101 := TShapeNode.Create;
LineSet102 := TLineSetNode.Create;
LineSet102.SetVertexCount([2]);
ColorRGBA103 := TColorRGBANode.Create;
ColorRGBA103 := ColorRGBA75;
{ .SetColor }
LineSet102.Color := ColorRGBA103;
Coordinate104 := TCoordinateNode.Create;
Coordinate104.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0774,1.019,-0.1151)]);
{ .SetCoord }
LineSet102.Coord := Coordinate104;
{ .SetGeometry }
Shape101.Geometry := LineSet102;
{ .AddChildren }
HAnimSegment61.AddChildren([Shape101]);
Shape105 := TShapeNode.Create;
LineSet106 := TLineSetNode.Create;
LineSet106.SetVertexCount([2]);
ColorRGBA107 := TColorRGBANode.Create;
ColorRGBA107 := ColorRGBA75;
{ .SetColor }
LineSet106.Color := ColorRGBA107;
Coordinate108 := TCoordinateNode.Create;
Coordinate108.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0034,0.8266,0.0257)]);
{ .SetCoord }
LineSet106.Coord := Coordinate108;
{ .SetGeometry }
Shape105.Geometry := LineSet106;
{ .AddChildren }
HAnimSegment61.AddChildren([Shape105]);
HAnimSite109 := THAnimSiteNode.Create;
HAnimSite109.NameField := 'r_iliocristale_pt';
HAnimSite109.Translation := Vector3(-0.1525,1.0628,0.0035);
TouchSensor110 := TTouchSensorNode.Create;
TouchSensor110.Description := 'HAnimSite r_iliocristale';
{ .AddChildren }
HAnimSite109.AddChildren([TouchSensor110]);
Shape111 := TShapeNode.Create;
Appearance112 := TAppearanceNode.Create;
Material113 := TMaterialNode.Create;
Material113.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance112.Material := Material113;
{ .SetAppearance }
Shape111.Appearance := Appearance112;
IndexedFaceSet114 := TIndexedFaceSetNode.Create;
IndexedFaceSet114.Solid := False;
IndexedFaceSet114.CreaseAngle := 0.5;
IndexedFaceSet114.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate115 := TCoordinateNode.Create;
Coordinate115.SetPoint([Vector3(0,0.008,0),Vector3(-0.008,0,0),Vector3(0,0,0.008),Vector3(0.008,0,0),Vector3(0,0,-0.008),Vector3(0,-0.008,0)]);
{ .SetCoord }
IndexedFaceSet114.Coord := Coordinate115;
{ .SetGeometry }
Shape111.Geometry := IndexedFaceSet114;
{ .AddChildren }
HAnimSite109.AddChildren([Shape111]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite109]);
HAnimSite116 := THAnimSiteNode.Create;
HAnimSite116.NameField := 'r_trochanterion_pt';
HAnimSite116.Translation := Vector3(-0.1689,0.8419,0.0352);
TouchSensor117 := TTouchSensorNode.Create;
TouchSensor117.Description := 'HAnimSite r_trochanterion';
{ .AddChildren }
HAnimSite116.AddChildren([TouchSensor117]);
Shape118 := TShapeNode.Create;
Shape118 := Shape111;
{ .AddChildren }
HAnimSite116.AddChildren([Shape118]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite116]);
HAnimSite119 := THAnimSiteNode.Create;
HAnimSite119.NameField := 'l_iliocristale_pt';
HAnimSite119.Translation := Vector3(0.1612,1.0537,0.0008);
TouchSensor120 := TTouchSensorNode.Create;
TouchSensor120.Description := 'HAnimSite l_iliocristale';
{ .AddChildren }
HAnimSite119.AddChildren([TouchSensor120]);
Shape121 := TShapeNode.Create;
Shape121 := Shape111;
{ .AddChildren }
HAnimSite119.AddChildren([Shape121]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite119]);
HAnimSite122 := THAnimSiteNode.Create;
HAnimSite122.NameField := 'l_trochanterion_pt';
HAnimSite122.Translation := Vector3(0.1677,0.8336,0.0303);
TouchSensor123 := TTouchSensorNode.Create;
TouchSensor123.Description := 'HAnimSite l_trochanterion';
{ .AddChildren }
HAnimSite122.AddChildren([TouchSensor123]);
Shape124 := TShapeNode.Create;
Shape124 := Shape111;
{ .AddChildren }
HAnimSite122.AddChildren([Shape124]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite122]);
HAnimSite125 := THAnimSiteNode.Create;
HAnimSite125.NameField := 'r_asis_pt';
HAnimSite125.Translation := Vector3(-0.0887,1.0021,0.1112);
TouchSensor126 := TTouchSensorNode.Create;
TouchSensor126.Description := 'HAnimSite r_asis';
{ .AddChildren }
HAnimSite125.AddChildren([TouchSensor126]);
Shape127 := TShapeNode.Create;
Shape127 := Shape111;
{ .AddChildren }
HAnimSite125.AddChildren([Shape127]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite125]);
HAnimSite128 := THAnimSiteNode.Create;
HAnimSite128.NameField := 'l_asis_pt';
HAnimSite128.Translation := Vector3(0.0925,0.9983,0.1052);
TouchSensor129 := TTouchSensorNode.Create;
TouchSensor129.Description := 'HAnimSite l_asis';
{ .AddChildren }
HAnimSite128.AddChildren([TouchSensor129]);
Shape130 := TShapeNode.Create;
Shape130 := Shape111;
{ .AddChildren }
HAnimSite128.AddChildren([Shape130]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite128]);
HAnimSite131 := THAnimSiteNode.Create;
HAnimSite131.NameField := 'r_psis_pt';
HAnimSite131.Translation := Vector3(-0.0716,1.019,-0.1138);
TouchSensor132 := TTouchSensorNode.Create;
TouchSensor132.Description := 'HAnimSite r_psis';
{ .AddChildren }
HAnimSite131.AddChildren([TouchSensor132]);
Shape133 := TShapeNode.Create;
Shape133 := Shape111;
{ .AddChildren }
HAnimSite131.AddChildren([Shape133]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite131]);
HAnimSite134 := THAnimSiteNode.Create;
HAnimSite134.NameField := 'l_psis_pt';
HAnimSite134.Translation := Vector3(0.0774,1.019,-0.1151);
TouchSensor135 := TTouchSensorNode.Create;
TouchSensor135.Description := 'HAnimSite l_psis';
{ .AddChildren }
HAnimSite134.AddChildren([TouchSensor135]);
Shape136 := TShapeNode.Create;
Shape136 := Shape111;
{ .AddChildren }
HAnimSite134.AddChildren([Shape136]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite134]);
HAnimSite137 := THAnimSiteNode.Create;
HAnimSite137.NameField := 'crotch_pt';
HAnimSite137.Translation := Vector3(0.0034,0.8266,0.0257);
TouchSensor138 := TTouchSensorNode.Create;
TouchSensor138.Description := 'HAnimSite crotch';
{ .AddChildren }
HAnimSite137.AddChildren([TouchSensor138]);
Shape139 := TShapeNode.Create;
Shape139 := Shape111;
{ .AddChildren }
HAnimSite137.AddChildren([Shape139]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite137]);
{ .AddChildren }
HAnimJoint60.AddChildren([HAnimSegment61]);
HAnimJoint140 := THAnimJointNode.Create;
HAnimJoint140.NameField := 'l_hip';
HAnimJoint140.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimSegment141 := THAnimSegmentNode.Create;
HAnimSegment141.NameField := 'l_thigh';
TouchSensor142 := TTouchSensorNode.Create;
TouchSensor142.Description := 'HAnimJoint l_hip, HAnimSegment l_thigh';
{ .AddChildren }
HAnimSegment141.AddChildren([TouchSensor142]);
Transform143 := TTransformNode.Create;
Transform143.Translation := Vector3(0.0961,0.9124,-0.0001);
Shape144 := TShapeNode.Create;
Shape144 := Shape48;
{ .AddChild }
Transform143.AddChildren([Shape144]);
{ .AddChildren }
HAnimSegment141.AddChildren([Transform143]);
Shape145 := TShapeNode.Create;
LineSet146 := TLineSetNode.Create;
LineSet146.SetVertexCount([2]);
ColorRGBA147 := TColorRGBANode.Create;
ColorRGBA147 := ColorRGBA54;
{ .SetColor }
LineSet146.Color := ColorRGBA147;
Coordinate148 := TCoordinateNode.Create;
Coordinate148.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.104,0.4867,0.0308)]);
{ .SetCoord }
LineSet146.Coord := Coordinate148;
{ .SetGeometry }
Shape145.Geometry := LineSet146;
{ .AddChildren }
HAnimSegment141.AddChildren([Shape145]);
Shape149 := TShapeNode.Create;
LineSet150 := TLineSetNode.Create;
LineSet150.SetVertexCount([2]);
ColorRGBA151 := TColorRGBANode.Create;
ColorRGBA151 := ColorRGBA75;
{ .SetColor }
LineSet150.Color := ColorRGBA151;
Coordinate152 := TCoordinateNode.Create;
Coordinate152.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.0993,0.4881,-0.0309)]);
{ .SetCoord }
LineSet150.Coord := Coordinate152;
{ .SetGeometry }
Shape149.Geometry := LineSet150;
{ .AddChildren }
HAnimSegment141.AddChildren([Shape149]);
Shape153 := TShapeNode.Create;
LineSet154 := TLineSetNode.Create;
LineSet154.SetVertexCount([2]);
ColorRGBA155 := TColorRGBANode.Create;
ColorRGBA155 := ColorRGBA75;
{ .SetColor }
LineSet154.Color := ColorRGBA155;
Coordinate156 := TCoordinateNode.Create;
Coordinate156.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.1598,0.4967,0.0297)]);
{ .SetCoord }
LineSet154.Coord := Coordinate156;
{ .SetGeometry }
Shape153.Geometry := LineSet154;
{ .AddChildren }
HAnimSegment141.AddChildren([Shape153]);
Shape157 := TShapeNode.Create;
LineSet158 := TLineSetNode.Create;
LineSet158.SetVertexCount([2]);
ColorRGBA159 := TColorRGBANode.Create;
ColorRGBA159 := ColorRGBA75;
{ .SetColor }
LineSet158.Color := ColorRGBA159;
Coordinate160 := TCoordinateNode.Create;
Coordinate160.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.0398,0.4946,0.0303)]);
{ .SetCoord }
LineSet158.Coord := Coordinate160;
{ .SetGeometry }
Shape157.Geometry := LineSet158;
{ .AddChildren }
HAnimSegment141.AddChildren([Shape157]);
HAnimSite161 := THAnimSiteNode.Create;
HAnimSite161.NameField := 'l_knee_crease_pt';
HAnimSite161.Translation := Vector3(0.0993,0.4881,-0.0309);
TouchSensor162 := TTouchSensorNode.Create;
TouchSensor162.Description := 'HAnimSite l_knee_crease';
{ .AddChildren }
HAnimSite161.AddChildren([TouchSensor162]);
Shape163 := TShapeNode.Create;
Shape163 := Shape111;
{ .AddChildren }
HAnimSite161.AddChildren([Shape163]);
{ .AddChildren }
HAnimSegment141.AddChildren([HAnimSite161]);
HAnimSite164 := THAnimSiteNode.Create;
HAnimSite164.NameField := 'l_femoral_lateral_epicn_pt';
HAnimSite164.Translation := Vector3(0.1598,0.4967,0.0297);
TouchSensor165 := TTouchSensorNode.Create;
TouchSensor165.Description := 'HAnimSite l_femoral_lateral_epicn';
{ .AddChildren }
HAnimSite164.AddChildren([TouchSensor165]);
Shape166 := TShapeNode.Create;
Shape166 := Shape111;
{ .AddChildren }
HAnimSite164.AddChildren([Shape166]);
{ .AddChildren }
HAnimSegment141.AddChildren([HAnimSite164]);
HAnimSite167 := THAnimSiteNode.Create;
HAnimSite167.NameField := 'l_femoral_medial_epicn_pt';
HAnimSite167.Translation := Vector3(0.0398,0.4946,0.0303);
TouchSensor168 := TTouchSensorNode.Create;
TouchSensor168.Description := 'HAnimSite l_femoral_medial_epicn';
{ .AddChildren }
HAnimSite167.AddChildren([TouchSensor168]);
Shape169 := TShapeNode.Create;
Shape169 := Shape111;
{ .AddChildren }
HAnimSite167.AddChildren([Shape169]);
{ .AddChildren }
HAnimSegment141.AddChildren([HAnimSite167]);
{ .AddChildren }
HAnimJoint140.AddChildren([HAnimSegment141]);
HAnimJoint170 := THAnimJointNode.Create;
HAnimJoint170.NameField := 'l_knee';
HAnimJoint170.Center := Vector3(0.104,0.4867,0.0308);
HAnimSegment171 := THAnimSegmentNode.Create;
HAnimSegment171.NameField := 'l_calf';
TouchSensor172 := TTouchSensorNode.Create;
TouchSensor172.Description := 'HAnimJoint l_knee, HAnimSegment l_calf';
{ .AddChildren }
HAnimSegment171.AddChildren([TouchSensor172]);
Transform173 := TTransformNode.Create;
Transform173.Translation := Vector3(0.104,0.4867,0.0308);
Shape174 := TShapeNode.Create;
Shape174 := Shape48;
{ .AddChild }
Transform173.AddChildren([Shape174]);
{ .AddChildren }
HAnimSegment171.AddChildren([Transform173]);
Shape175 := TShapeNode.Create;
LineSet176 := TLineSetNode.Create;
LineSet176.SetVertexCount([2]);
ColorRGBA177 := TColorRGBANode.Create;
ColorRGBA177 := ColorRGBA54;
{ .SetColor }
LineSet176.Color := ColorRGBA177;
Coordinate178 := TCoordinateNode.Create;
Coordinate178.SetPoint([Vector3(0.104,0.4867,0.0308),Vector3(0.1101,0.0656,-0.0736)]);
{ .SetCoord }
LineSet176.Coord := Coordinate178;
{ .SetGeometry }
Shape175.Geometry := LineSet176;
{ .AddChildren }
HAnimSegment171.AddChildren([Shape175]);
{ .AddChildren }
HAnimJoint170.AddChildren([HAnimSegment171]);
HAnimJoint179 := THAnimJointNode.Create;
HAnimJoint179.NameField := 'l_ankle';
HAnimJoint179.Rotation := Vector4(-0.999999999999999,0,0,0.486193023827777);
HAnimJoint179.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimSegment180 := THAnimSegmentNode.Create;
HAnimSegment180.NameField := 'l_hindfoot';
TouchSensor181 := TTouchSensorNode.Create;
TouchSensor181.Description := 'HAnimJoint l_ankle, HAnimSegment l_hindfoot';
{ .AddChildren }
HAnimSegment180.AddChildren([TouchSensor181]);
Transform182 := TTransformNode.Create;
Transform182.Translation := Vector3(0.1101,0.0656,-0.0736);
Shape183 := TShapeNode.Create;
Shape183 := Shape48;
{ .AddChild }
Transform182.AddChildren([Shape183]);
{ .AddChildren }
HAnimSegment180.AddChildren([Transform182]);
Shape184 := TShapeNode.Create;
LineSet185 := TLineSetNode.Create;
LineSet185.SetVertexCount([2]);
ColorRGBA186 := TColorRGBANode.Create;
ColorRGBA186 := ColorRGBA54;
{ .SetColor }
LineSet185.Color := ColorRGBA186;
Coordinate187 := TCoordinateNode.Create;
Coordinate187.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.1086,0.0001,-0.0368)]);
{ .SetCoord }
LineSet185.Coord := Coordinate187;
{ .SetGeometry }
Shape184.Geometry := LineSet185;
{ .AddChildren }
HAnimSegment180.AddChildren([Shape184]);
Shape188 := TShapeNode.Create;
LineSet189 := TLineSetNode.Create;
LineSet189.SetVertexCount([2]);
ColorRGBA190 := TColorRGBANode.Create;
ColorRGBA190 := ColorRGBA75;
{ .SetColor }
LineSet189.Color := ColorRGBA190;
Coordinate191 := TCoordinateNode.Create;
Coordinate191.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.1308,0.0597,-0.1032)]);
{ .SetCoord }
LineSet189.Coord := Coordinate191;
{ .SetGeometry }
Shape188.Geometry := LineSet189;
{ .AddChildren }
HAnimSegment180.AddChildren([Shape188]);
Shape192 := TShapeNode.Create;
LineSet193 := TLineSetNode.Create;
LineSet193.SetVertexCount([2]);
ColorRGBA194 := TColorRGBANode.Create;
ColorRGBA194 := ColorRGBA75;
{ .SetColor }
LineSet193.Color := ColorRGBA194;
Coordinate195 := TCoordinateNode.Create;
Coordinate195.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.089,0.0716,-0.0881)]);
{ .SetCoord }
LineSet193.Coord := Coordinate195;
{ .SetGeometry }
Shape192.Geometry := LineSet193;
{ .AddChildren }
HAnimSegment180.AddChildren([Shape192]);
Shape196 := TShapeNode.Create;
LineSet197 := TLineSetNode.Create;
LineSet197.SetVertexCount([2]);
ColorRGBA198 := TColorRGBANode.Create;
ColorRGBA198 := ColorRGBA75;
{ .SetColor }
LineSet197.Color := ColorRGBA198;
Coordinate199 := TCoordinateNode.Create;
Coordinate199.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.089,0.0575,-0.0943)]);
{ .SetCoord }
LineSet197.Coord := Coordinate199;
{ .SetGeometry }
Shape196.Geometry := LineSet197;
{ .AddChildren }
HAnimSegment180.AddChildren([Shape196]);
Shape200 := TShapeNode.Create;
LineSet201 := TLineSetNode.Create;
LineSet201.SetVertexCount([2]);
ColorRGBA202 := TColorRGBANode.Create;
ColorRGBA202 := ColorRGBA75;
{ .SetColor }
LineSet201.Color := ColorRGBA202;
Coordinate203 := TCoordinateNode.Create;
Coordinate203.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.0974,0.0259,-0.1171)]);
{ .SetCoord }
LineSet201.Coord := Coordinate203;
{ .SetGeometry }
Shape200.Geometry := LineSet201;
{ .AddChildren }
HAnimSegment180.AddChildren([Shape200]);
HAnimSite204 := THAnimSiteNode.Create;
HAnimSite204.NameField := 'l_lateral_malleolus_pt';
HAnimSite204.Translation := Vector3(0.1308,0.0597,-0.1032);
TouchSensor205 := TTouchSensorNode.Create;
TouchSensor205.Description := 'HAnimSite l_lateral_malleolus';
{ .AddChildren }
HAnimSite204.AddChildren([TouchSensor205]);
Shape206 := TShapeNode.Create;
Shape206 := Shape111;
{ .AddChildren }
HAnimSite204.AddChildren([Shape206]);
{ .AddChildren }
HAnimSegment180.AddChildren([HAnimSite204]);
HAnimSite207 := THAnimSiteNode.Create;
HAnimSite207.NameField := 'l_medial_malleolus_pt';
HAnimSite207.Translation := Vector3(0.089,0.0716,-0.0881);
TouchSensor208 := TTouchSensorNode.Create;
TouchSensor208.Description := 'HAnimSite l_medial_malleolus';
{ .AddChildren }
HAnimSite207.AddChildren([TouchSensor208]);
Shape209 := TShapeNode.Create;
Shape209 := Shape111;
{ .AddChildren }
HAnimSite207.AddChildren([Shape209]);
{ .AddChildren }
HAnimSegment180.AddChildren([HAnimSite207]);
HAnimSite210 := THAnimSiteNode.Create;
HAnimSite210.NameField := 'l_sphyrion_pt';
HAnimSite210.Translation := Vector3(0.089,0.0575,-0.0943);
TouchSensor211 := TTouchSensorNode.Create;
TouchSensor211.Description := 'HAnimSite l_sphyrion';
{ .AddChildren }
HAnimSite210.AddChildren([TouchSensor211]);
Shape212 := TShapeNode.Create;
Shape212 := Shape111;
{ .AddChildren }
HAnimSite210.AddChildren([Shape212]);
{ .AddChildren }
HAnimSegment180.AddChildren([HAnimSite210]);
HAnimSite213 := THAnimSiteNode.Create;
HAnimSite213.NameField := 'l_calcaneous_post_pt';
HAnimSite213.Translation := Vector3(0.0974,0.0259,-0.1171);
TouchSensor214 := TTouchSensorNode.Create;
TouchSensor214.Description := 'HAnimSite l_calcaneous_post';
{ .AddChildren }
HAnimSite213.AddChildren([TouchSensor214]);
Shape215 := TShapeNode.Create;
Shape215 := Shape111;
{ .AddChildren }
HAnimSite213.AddChildren([Shape215]);
{ .AddChildren }
HAnimSegment180.AddChildren([HAnimSite213]);
{ .AddChildren }
HAnimJoint179.AddChildren([HAnimSegment180]);
HAnimJoint216 := THAnimJointNode.Create;
HAnimJoint216.NameField := 'l_subtalar';
HAnimJoint216.Center := Vector3(0.1086,0.0001,-0.0368);
HAnimSegment217 := THAnimSegmentNode.Create;
HAnimSegment217.NameField := 'l_midproximal';
TouchSensor218 := TTouchSensorNode.Create;
TouchSensor218.Description := 'HAnimJoint l_subtalar, HAnimSegment l_midproximal';
{ .AddChildren }
HAnimSegment217.AddChildren([TouchSensor218]);
Transform219 := TTransformNode.Create;
Transform219.Translation := Vector3(0.1086,0.0001,-0.0368);
Shape220 := TShapeNode.Create;
Shape220 := Shape48;
{ .AddChild }
Transform219.AddChildren([Shape220]);
{ .AddChildren }
HAnimSegment217.AddChildren([Transform219]);
Shape221 := TShapeNode.Create;
LineSet222 := TLineSetNode.Create;
LineSet222.SetVertexCount([2]);
ColorRGBA223 := TColorRGBANode.Create;
ColorRGBA223 := ColorRGBA54;
{ .SetColor }
LineSet222.Color := ColorRGBA223;
Coordinate224 := TCoordinateNode.Create;
Coordinate224.SetPoint([Vector3(0.1086,0.0001,-0.0368),Vector3(0.1086,0.0001,0.0368)]);
{ .SetCoord }
LineSet222.Coord := Coordinate224;
{ .SetGeometry }
Shape221.Geometry := LineSet222;
{ .AddChildren }
HAnimSegment217.AddChildren([Shape221]);
{ .AddChildren }
HAnimJoint216.AddChildren([HAnimSegment217]);
HAnimJoint225 := THAnimJointNode.Create;
HAnimJoint225.NameField := 'l_midtarsal';
HAnimJoint225.Center := Vector3(0.1086,0.0001,0.0368);
HAnimSegment226 := THAnimSegmentNode.Create;
HAnimSegment226.NameField := 'l_middistal';
TouchSensor227 := TTouchSensorNode.Create;
TouchSensor227.Description := 'HAnimJoint l_midtarsal, HAnimSegment l_middistal';
{ .AddChildren }
HAnimSegment226.AddChildren([TouchSensor227]);
Transform228 := TTransformNode.Create;
Transform228.Translation := Vector3(0.1086,0.0001,0.0368);
Shape229 := TShapeNode.Create;
Shape229 := Shape48;
{ .AddChild }
Transform228.AddChildren([Shape229]);
{ .AddChildren }
HAnimSegment226.AddChildren([Transform228]);
Shape230 := TShapeNode.Create;
LineSet231 := TLineSetNode.Create;
LineSet231.SetVertexCount([2]);
ColorRGBA232 := TColorRGBANode.Create;
ColorRGBA232 := ColorRGBA54;
{ .SetColor }
LineSet231.Color := ColorRGBA232;
Coordinate233 := TCoordinateNode.Create;
Coordinate233.SetPoint([Vector3(0.1086,0.0001,0.0368),Vector3(0.1086,0,0.0762)]);
{ .SetCoord }
LineSet231.Coord := Coordinate233;
{ .SetGeometry }
Shape230.Geometry := LineSet231;
{ .AddChildren }
HAnimSegment226.AddChildren([Shape230]);
Shape234 := TShapeNode.Create;
LineSet235 := TLineSetNode.Create;
LineSet235.SetVertexCount([2]);
ColorRGBA236 := TColorRGBANode.Create;
ColorRGBA236 := ColorRGBA75;
{ .SetColor }
LineSet235.Color := ColorRGBA236;
Coordinate237 := TCoordinateNode.Create;
Coordinate237.SetPoint([Vector3(0.1086,0.0001,0.0368),Vector3(0.0816,0.0232,0.0106)]);
{ .SetCoord }
LineSet235.Coord := Coordinate237;
{ .SetGeometry }
Shape234.Geometry := LineSet235;
{ .AddChildren }
HAnimSegment226.AddChildren([Shape234]);
HAnimSite238 := THAnimSiteNode.Create;
HAnimSite238.NameField := 'l_metatarsal_pha1_pt';
HAnimSite238.Translation := Vector3(0.0816,0.0232,0.0106);
TouchSensor239 := TTouchSensorNode.Create;
TouchSensor239.Description := 'HAnimSite l_metatarsal_pha1';
{ .AddChildren }
HAnimSite238.AddChildren([TouchSensor239]);
Shape240 := TShapeNode.Create;
Shape240 := Shape111;
{ .AddChildren }
HAnimSite238.AddChildren([Shape240]);
{ .AddChildren }
HAnimSegment226.AddChildren([HAnimSite238]);
{ .AddChildren }
HAnimJoint225.AddChildren([HAnimSegment226]);
HAnimJoint241 := THAnimJointNode.Create;
HAnimJoint241.NameField := 'l_metatarsal';
HAnimJoint241.Rotation := Vector4(-1,0,0,0.270107235459875);
HAnimJoint241.Center := Vector3(0.1086,0,0.0762);
HAnimSegment242 := THAnimSegmentNode.Create;
HAnimSegment242.NameField := 'l_forefoot';
TouchSensor243 := TTouchSensorNode.Create;
TouchSensor243.Description := 'HAnimJoint l_metatarsal, HAnimSegment l_forefoot';
{ .AddChildren }
HAnimSegment242.AddChildren([TouchSensor243]);
Transform244 := TTransformNode.Create;
Transform244.Translation := Vector3(0.1086,0,0.0762);
Shape245 := TShapeNode.Create;
Shape245 := Shape48;
{ .AddChild }
Transform244.AddChildren([Shape245]);
{ .AddChildren }
HAnimSegment242.AddChildren([Transform244]);
Shape246 := TShapeNode.Create;
LineSet247 := TLineSetNode.Create;
LineSet247.SetVertexCount([2]);
ColorRGBA248 := TColorRGBANode.Create;
ColorRGBA248 := ColorRGBA75;
{ .SetColor }
LineSet247.Color := ColorRGBA248;
Coordinate249 := TCoordinateNode.Create;
Coordinate249.SetPoint([Vector3(0.1086,0,0.0762),Vector3(0.1354,0.0016,0.1476)]);
{ .SetCoord }
LineSet247.Coord := Coordinate249;
{ .SetGeometry }
Shape246.Geometry := LineSet247;
{ .AddChildren }
HAnimSegment242.AddChildren([Shape246]);
Shape250 := TShapeNode.Create;
LineSet251 := TLineSetNode.Create;
LineSet251.SetVertexCount([2]);
ColorRGBA252 := TColorRGBANode.Create;
ColorRGBA252 := ColorRGBA75;
{ .SetColor }
LineSet251.Color := ColorRGBA252;
Coordinate253 := TCoordinateNode.Create;
Coordinate253.SetPoint([Vector3(0.1086,0,0.0762),Vector3(0.1825,0.007,0.0928)]);
{ .SetCoord }
LineSet251.Coord := Coordinate253;
{ .SetGeometry }
Shape250.Geometry := LineSet251;
{ .AddChildren }
HAnimSegment242.AddChildren([Shape250]);
Shape254 := TShapeNode.Create;
LineSet255 := TLineSetNode.Create;
LineSet255.SetVertexCount([2]);
ColorRGBA256 := TColorRGBANode.Create;
ColorRGBA256 := ColorRGBA75;
{ .SetColor }
LineSet255.Color := ColorRGBA256;
Coordinate257 := TCoordinateNode.Create;
Coordinate257.SetPoint([Vector3(0.1086,0,0.0762),Vector3(0.1195,0.0079,0.1433)]);
{ .SetCoord }
LineSet255.Coord := Coordinate257;
{ .SetGeometry }
Shape254.Geometry := LineSet255;
{ .AddChildren }
HAnimSegment242.AddChildren([Shape254]);
HAnimSite258 := THAnimSiteNode.Create;
HAnimSite258.NameField := 'l_forefoot_tip';
HAnimSite258.Translation := Vector3(0.1354,0.0016,0.1476);
TouchSensor259 := TTouchSensorNode.Create;
TouchSensor259.Description := 'HAnimSite l_forefoot_tip';
{ .AddChildren }
HAnimSite258.AddChildren([TouchSensor259]);
Shape260 := TShapeNode.Create;
Shape260 := Shape111;
{ .AddChildren }
HAnimSite258.AddChildren([Shape260]);
{ .AddChildren }
HAnimSegment242.AddChildren([HAnimSite258]);
HAnimSite261 := THAnimSiteNode.Create;
HAnimSite261.NameField := 'l_metatarsal_pha5_pt';
HAnimSite261.Translation := Vector3(0.1825,0.007,0.0928);
TouchSensor262 := TTouchSensorNode.Create;
TouchSensor262.Description := 'HAnimSite l_metatarsal_pha5';
{ .AddChildren }
HAnimSite261.AddChildren([TouchSensor262]);
Shape263 := TShapeNode.Create;
Shape263 := Shape111;
{ .AddChildren }
HAnimSite261.AddChildren([Shape263]);
{ .AddChildren }
HAnimSegment242.AddChildren([HAnimSite261]);
HAnimSite264 := THAnimSiteNode.Create;
HAnimSite264.NameField := 'l_digit2_pt';
HAnimSite264.Translation := Vector3(0.1195,0.0079,0.1433);
TouchSensor265 := TTouchSensorNode.Create;
TouchSensor265.Description := 'HAnimSite l_digit2';
{ .AddChildren }
HAnimSite264.AddChildren([TouchSensor265]);
Shape266 := TShapeNode.Create;
Shape266 := Shape111;
{ .AddChildren }
HAnimSite264.AddChildren([Shape266]);
{ .AddChildren }
HAnimSegment242.AddChildren([HAnimSite264]);
{ .AddChildren }
HAnimJoint241.AddChildren([HAnimSegment242]);
{ .AddChildren }
HAnimJoint225.AddChildren([HAnimJoint241]);
{ .AddChildren }
HAnimJoint216.AddChildren([HAnimJoint225]);
{ .AddChildren }
HAnimJoint179.AddChildren([HAnimJoint216]);
{ .AddChildren }
HAnimJoint170.AddChildren([HAnimJoint179]);
{ .AddChildren }
HAnimJoint140.AddChildren([HAnimJoint170]);
{ .AddChildren }
HAnimJoint60.AddChildren([HAnimJoint140]);
HAnimJoint267 := THAnimJointNode.Create;
HAnimJoint267.NameField := 'r_hip';
HAnimJoint267.Rotation := Vector4(0.999999999999999,0,0,0.486193023827777);
HAnimJoint267.Center := Vector3(-0.0961,0.9124,-0.0001);
HAnimSegment268 := THAnimSegmentNode.Create;
HAnimSegment268.NameField := 'r_thigh';
TouchSensor269 := TTouchSensorNode.Create;
TouchSensor269.Description := 'HAnimJoint r_hip, HAnimSegment r_thigh';
{ .AddChildren }
HAnimSegment268.AddChildren([TouchSensor269]);
Transform270 := TTransformNode.Create;
Transform270.Translation := Vector3(-0.0961,0.9124,-0.0001);
Shape271 := TShapeNode.Create;
Shape271 := Shape48;
{ .AddChild }
Transform270.AddChildren([Shape271]);
{ .AddChildren }
HAnimSegment268.AddChildren([Transform270]);
Shape272 := TShapeNode.Create;
LineSet273 := TLineSetNode.Create;
LineSet273.SetVertexCount([2]);
ColorRGBA274 := TColorRGBANode.Create;
ColorRGBA274 := ColorRGBA54;
{ .SetColor }
LineSet273.Color := ColorRGBA274;
Coordinate275 := TCoordinateNode.Create;
Coordinate275.SetPoint([Vector3(-0.0961,0.9124,-0.0001),Vector3(-0.104,0.4867,0.0308)]);
{ .SetCoord }
LineSet273.Coord := Coordinate275;
{ .SetGeometry }
Shape272.Geometry := LineSet273;
{ .AddChildren }
HAnimSegment268.AddChildren([Shape272]);
Shape276 := TShapeNode.Create;
LineSet277 := TLineSetNode.Create;
LineSet277.SetVertexCount([2]);
ColorRGBA278 := TColorRGBANode.Create;
ColorRGBA278 := ColorRGBA75;
{ .SetColor }
LineSet277.Color := ColorRGBA278;
Coordinate279 := TCoordinateNode.Create;
Coordinate279.SetPoint([Vector3(-0.0961,0.9124,-0.0001),Vector3(-0.0825,0.4932,-0.0326)]);
{ .SetCoord }
LineSet277.Coord := Coordinate279;
{ .SetGeometry }
Shape276.Geometry := LineSet277;
{ .AddChildren }
HAnimSegment268.AddChildren([Shape276]);
Shape280 := TShapeNode.Create;
LineSet281 := TLineSetNode.Create;
LineSet281.SetVertexCount([2]);
ColorRGBA282 := TColorRGBANode.Create;
ColorRGBA282 := ColorRGBA75;
{ .SetColor }
LineSet281.Color := ColorRGBA282;
Coordinate283 := TCoordinateNode.Create;
Coordinate283.SetPoint([Vector3(-0.0961,0.9124,-0.0001),Vector3(-0.1421,0.4992,0.031)]);
{ .SetCoord }
LineSet281.Coord := Coordinate283;
{ .SetGeometry }
Shape280.Geometry := LineSet281;
{ .AddChildren }
HAnimSegment268.AddChildren([Shape280]);
Shape284 := TShapeNode.Create;
LineSet285 := TLineSetNode.Create;
LineSet285.SetVertexCount([2]);
ColorRGBA286 := TColorRGBANode.Create;
ColorRGBA286 := ColorRGBA75;
{ .SetColor }
LineSet285.Color := ColorRGBA286;
Coordinate287 := TCoordinateNode.Create;
Coordinate287.SetPoint([Vector3(-0.0961,0.9124,-0.0001),Vector3(-0.0221,0.5014,0.0289)]);
{ .SetCoord }
LineSet285.Coord := Coordinate287;
{ .SetGeometry }
Shape284.Geometry := LineSet285;
{ .AddChildren }
HAnimSegment268.AddChildren([Shape284]);
HAnimSite288 := THAnimSiteNode.Create;
HAnimSite288.NameField := 'r_knee_crease_pt';
HAnimSite288.Translation := Vector3(-0.0825,0.4932,-0.0326);
TouchSensor289 := TTouchSensorNode.Create;
TouchSensor289.Description := 'HAnimSite r_knee_crease';
{ .AddChildren }
HAnimSite288.AddChildren([TouchSensor289]);
Shape290 := TShapeNode.Create;
Shape290 := Shape111;
{ .AddChildren }
HAnimSite288.AddChildren([Shape290]);
{ .AddChildren }
HAnimSegment268.AddChildren([HAnimSite288]);
HAnimSite291 := THAnimSiteNode.Create;
HAnimSite291.NameField := 'r_femoral_lateral_epicn_pt';
HAnimSite291.Translation := Vector3(-0.1421,0.4992,0.031);
TouchSensor292 := TTouchSensorNode.Create;
TouchSensor292.Description := 'HAnimSite r_femoral_lateral_epicn';
{ .AddChildren }
HAnimSite291.AddChildren([TouchSensor292]);
Shape293 := TShapeNode.Create;
Shape293 := Shape111;
{ .AddChildren }
HAnimSite291.AddChildren([Shape293]);
{ .AddChildren }
HAnimSegment268.AddChildren([HAnimSite291]);
HAnimSite294 := THAnimSiteNode.Create;
HAnimSite294.NameField := 'r_femoral_medial_epicn_pt';
HAnimSite294.Translation := Vector3(-0.0221,0.5014,0.0289);
TouchSensor295 := TTouchSensorNode.Create;
TouchSensor295.Description := 'HAnimSite r_femoral_medial_epicn';
{ .AddChildren }
HAnimSite294.AddChildren([TouchSensor295]);
Shape296 := TShapeNode.Create;
Shape296 := Shape111;
{ .AddChildren }
HAnimSite294.AddChildren([Shape296]);
{ .AddChildren }
HAnimSegment268.AddChildren([HAnimSite294]);
{ .AddChildren }
HAnimJoint267.AddChildren([HAnimSegment268]);
HAnimJoint297 := THAnimJointNode.Create;
HAnimJoint297.NameField := 'r_knee';
HAnimJoint297.Rotation := Vector4(1,0,0,1.05341821829351);
HAnimJoint297.Center := Vector3(-0.104,0.4867,0.0308);
HAnimSegment298 := THAnimSegmentNode.Create;
HAnimSegment298.NameField := 'r_calf';
TouchSensor299 := TTouchSensorNode.Create;
TouchSensor299.Description := 'HAnimJoint r_knee, HAnimSegment r_calf';
{ .AddChildren }
HAnimSegment298.AddChildren([TouchSensor299]);
Transform300 := TTransformNode.Create;
Transform300.Translation := Vector3(-0.104,0.4867,0.0308);
Shape301 := TShapeNode.Create;
Shape301 := Shape48;
{ .AddChild }
Transform300.AddChildren([Shape301]);
{ .AddChildren }
HAnimSegment298.AddChildren([Transform300]);
Shape302 := TShapeNode.Create;
LineSet303 := TLineSetNode.Create;
LineSet303.SetVertexCount([2]);
ColorRGBA304 := TColorRGBANode.Create;
ColorRGBA304 := ColorRGBA54;
{ .SetColor }
LineSet303.Color := ColorRGBA304;
Coordinate305 := TCoordinateNode.Create;
Coordinate305.SetPoint([Vector3(-0.104,0.4867,0.0308),Vector3(-0.1101,0.0656,-0.0736)]);
{ .SetCoord }
LineSet303.Coord := Coordinate305;
{ .SetGeometry }
Shape302.Geometry := LineSet303;
{ .AddChildren }
HAnimSegment298.AddChildren([Shape302]);
{ .AddChildren }
HAnimJoint297.AddChildren([HAnimSegment298]);
HAnimJoint306 := THAnimJointNode.Create;
HAnimJoint306.NameField := 'r_ankle';
HAnimJoint306.Rotation := Vector4(-0.999999999999999,0,0,0.486193023827777);
HAnimJoint306.Center := Vector3(-0.1101,0.0656,-0.0736);
HAnimSegment307 := THAnimSegmentNode.Create;
HAnimSegment307.NameField := 'r_hindfoot';
TouchSensor308 := TTouchSensorNode.Create;
TouchSensor308.Description := 'HAnimJoint r_ankle, HAnimSegment r_hindfoot';
{ .AddChildren }
HAnimSegment307.AddChildren([TouchSensor308]);
Transform309 := TTransformNode.Create;
Transform309.Translation := Vector3(-0.1101,0.0656,-0.0736);
Shape310 := TShapeNode.Create;
Shape310 := Shape48;
{ .AddChild }
Transform309.AddChildren([Shape310]);
{ .AddChildren }
HAnimSegment307.AddChildren([Transform309]);
Shape311 := TShapeNode.Create;
LineSet312 := TLineSetNode.Create;
LineSet312.SetVertexCount([2]);
ColorRGBA313 := TColorRGBANode.Create;
ColorRGBA313 := ColorRGBA54;
{ .SetColor }
LineSet312.Color := ColorRGBA313;
Coordinate314 := TCoordinateNode.Create;
Coordinate314.SetPoint([Vector3(-0.1101,0.0656,-0.0736),Vector3(-0.1086,0.0001,-0.0368)]);
{ .SetCoord }
LineSet312.Coord := Coordinate314;
{ .SetGeometry }
Shape311.Geometry := LineSet312;
{ .AddChildren }
HAnimSegment307.AddChildren([Shape311]);
Shape315 := TShapeNode.Create;
LineSet316 := TLineSetNode.Create;
LineSet316.SetVertexCount([2]);
ColorRGBA317 := TColorRGBANode.Create;
ColorRGBA317 := ColorRGBA75;
{ .SetColor }
LineSet316.Color := ColorRGBA317;
Coordinate318 := TCoordinateNode.Create;
Coordinate318.SetPoint([Vector3(-0.1101,0.0656,-0.0736),Vector3(-0.1006,0.0658,-0.1075)]);
{ .SetCoord }
LineSet316.Coord := Coordinate318;
{ .SetGeometry }
Shape315.Geometry := LineSet316;
{ .AddChildren }
HAnimSegment307.AddChildren([Shape315]);
Shape319 := TShapeNode.Create;
LineSet320 := TLineSetNode.Create;
LineSet320.SetVertexCount([2]);
ColorRGBA321 := TColorRGBANode.Create;
ColorRGBA321 := ColorRGBA75;
{ .SetColor }
LineSet320.Color := ColorRGBA321;
Coordinate322 := TCoordinateNode.Create;
Coordinate322.SetPoint([Vector3(-0.1101,0.0656,-0.0736),Vector3(-0.0591,0.076,-0.0928)]);
{ .SetCoord }
LineSet320.Coord := Coordinate322;
{ .SetGeometry }
Shape319.Geometry := LineSet320;
{ .AddChildren }
HAnimSegment307.AddChildren([Shape319]);
Shape323 := TShapeNode.Create;
LineSet324 := TLineSetNode.Create;
LineSet324.SetVertexCount([2]);
ColorRGBA325 := TColorRGBANode.Create;
ColorRGBA325 := ColorRGBA75;
{ .SetColor }
LineSet324.Color := ColorRGBA325;
Coordinate326 := TCoordinateNode.Create;
Coordinate326.SetPoint([Vector3(-0.1101,0.0656,-0.0736),Vector3(-0.0603,0.061,-0.1002)]);
{ .SetCoord }
LineSet324.Coord := Coordinate326;
{ .SetGeometry }
Shape323.Geometry := LineSet324;
{ .AddChildren }
HAnimSegment307.AddChildren([Shape323]);
Shape327 := TShapeNode.Create;
LineSet328 := TLineSetNode.Create;
LineSet328.SetVertexCount([2]);
ColorRGBA329 := TColorRGBANode.Create;
ColorRGBA329 := ColorRGBA75;
{ .SetColor }
LineSet328.Color := ColorRGBA329;
Coordinate330 := TCoordinateNode.Create;
Coordinate330.SetPoint([Vector3(-0.1101,0.0656,-0.0736),Vector3(-0.0692,0.0297,-0.1221)]);
{ .SetCoord }
LineSet328.Coord := Coordinate330;
{ .SetGeometry }
Shape327.Geometry := LineSet328;
{ .AddChildren }
HAnimSegment307.AddChildren([Shape327]);
HAnimSite331 := THAnimSiteNode.Create;
HAnimSite331.NameField := 'r_lateral_malleolus_pt';
HAnimSite331.Translation := Vector3(-0.1006,0.0658,-0.1075);
TouchSensor332 := TTouchSensorNode.Create;
TouchSensor332.Description := 'HAnimSite r_lateral_malleolus';
{ .AddChildren }
HAnimSite331.AddChildren([TouchSensor332]);
Shape333 := TShapeNode.Create;
Shape333 := Shape111;
{ .AddChildren }
HAnimSite331.AddChildren([Shape333]);
{ .AddChildren }
HAnimSegment307.AddChildren([HAnimSite331]);
HAnimSite334 := THAnimSiteNode.Create;
HAnimSite334.NameField := 'r_medial_malleolus_pt';
HAnimSite334.Translation := Vector3(-0.0591,0.076,-0.0928);
TouchSensor335 := TTouchSensorNode.Create;
TouchSensor335.Description := 'HAnimSite r_medial_malleolus';
{ .AddChildren }
HAnimSite334.AddChildren([TouchSensor335]);
Shape336 := TShapeNode.Create;
Shape336 := Shape111;
{ .AddChildren }
HAnimSite334.AddChildren([Shape336]);
{ .AddChildren }
HAnimSegment307.AddChildren([HAnimSite334]);
HAnimSite337 := THAnimSiteNode.Create;
HAnimSite337.NameField := 'r_sphyrion_pt';
HAnimSite337.Translation := Vector3(-0.0603,0.061,-0.1002);
TouchSensor338 := TTouchSensorNode.Create;
TouchSensor338.Description := 'HAnimSite r_sphyrion';
{ .AddChildren }
HAnimSite337.AddChildren([TouchSensor338]);
Shape339 := TShapeNode.Create;
Shape339 := Shape111;
{ .AddChildren }
HAnimSite337.AddChildren([Shape339]);
{ .AddChildren }
HAnimSegment307.AddChildren([HAnimSite337]);
HAnimSite340 := THAnimSiteNode.Create;
HAnimSite340.NameField := 'r_calcaneous_post_pt';
HAnimSite340.Translation := Vector3(-0.0692,0.0297,-0.1221);
TouchSensor341 := TTouchSensorNode.Create;
TouchSensor341.Description := 'HAnimSite r_calcaneous_post';
{ .AddChildren }
HAnimSite340.AddChildren([TouchSensor341]);
Shape342 := TShapeNode.Create;
Shape342 := Shape111;
{ .AddChildren }
HAnimSite340.AddChildren([Shape342]);
{ .AddChildren }
HAnimSegment307.AddChildren([HAnimSite340]);
{ .AddChildren }
HAnimJoint306.AddChildren([HAnimSegment307]);
HAnimJoint343 := THAnimJointNode.Create;
HAnimJoint343.NameField := 'r_subtalar';
HAnimJoint343.Center := Vector3(-0.1086,0.0001,-0.0368);
HAnimSegment344 := THAnimSegmentNode.Create;
HAnimSegment344.NameField := 'r_midproximal';
TouchSensor345 := TTouchSensorNode.Create;
TouchSensor345.Description := 'HAnimJoint r_subtalar, HAnimSegment r_midproximal';
{ .AddChildren }
HAnimSegment344.AddChildren([TouchSensor345]);
Transform346 := TTransformNode.Create;
Transform346.Translation := Vector3(-0.1086,0.0001,-0.0368);
Shape347 := TShapeNode.Create;
Shape347 := Shape48;
{ .AddChild }
Transform346.AddChildren([Shape347]);
{ .AddChildren }
HAnimSegment344.AddChildren([Transform346]);
Shape348 := TShapeNode.Create;
LineSet349 := TLineSetNode.Create;
LineSet349.SetVertexCount([2]);
ColorRGBA350 := TColorRGBANode.Create;
ColorRGBA350 := ColorRGBA54;
{ .SetColor }
LineSet349.Color := ColorRGBA350;
Coordinate351 := TCoordinateNode.Create;
Coordinate351.SetPoint([Vector3(-0.1086,0.0001,-0.0368),Vector3(-0.1086,0.0001,0.0368)]);
{ .SetCoord }
LineSet349.Coord := Coordinate351;
{ .SetGeometry }
Shape348.Geometry := LineSet349;
{ .AddChildren }
HAnimSegment344.AddChildren([Shape348]);
{ .AddChildren }
HAnimJoint343.AddChildren([HAnimSegment344]);
HAnimJoint352 := THAnimJointNode.Create;
HAnimJoint352.NameField := 'r_midtarsal';
HAnimJoint352.Center := Vector3(-0.1086,0.0001,0.0368);
HAnimSegment353 := THAnimSegmentNode.Create;
HAnimSegment353.NameField := 'r_middistal';
TouchSensor354 := TTouchSensorNode.Create;
TouchSensor354.Description := 'HAnimJoint r_midtarsal, HAnimSegment r_middistal';
{ .AddChildren }
HAnimSegment353.AddChildren([TouchSensor354]);
Transform355 := TTransformNode.Create;
Transform355.Translation := Vector3(-0.1086,0.0001,0.0368);
Shape356 := TShapeNode.Create;
Shape356 := Shape48;
{ .AddChild }
Transform355.AddChildren([Shape356]);
{ .AddChildren }
HAnimSegment353.AddChildren([Transform355]);
Shape357 := TShapeNode.Create;
LineSet358 := TLineSetNode.Create;
LineSet358.SetVertexCount([2]);
ColorRGBA359 := TColorRGBANode.Create;
ColorRGBA359 := ColorRGBA54;
{ .SetColor }
LineSet358.Color := ColorRGBA359;
Coordinate360 := TCoordinateNode.Create;
Coordinate360.SetPoint([Vector3(-0.1086,0.0001,0.0368),Vector3(-0.1086,0,0.0762)]);
{ .SetCoord }
LineSet358.Coord := Coordinate360;
{ .SetGeometry }
Shape357.Geometry := LineSet358;
{ .AddChildren }
HAnimSegment353.AddChildren([Shape357]);
Shape361 := TShapeNode.Create;
LineSet362 := TLineSetNode.Create;
LineSet362.SetVertexCount([2]);
ColorRGBA363 := TColorRGBANode.Create;
ColorRGBA363 := ColorRGBA75;
{ .SetColor }
LineSet362.Color := ColorRGBA363;
Coordinate364 := TCoordinateNode.Create;
Coordinate364.SetPoint([Vector3(-0.1086,0.0001,0.0368),Vector3(-0.0521,0.026,0.0127)]);
{ .SetCoord }
LineSet362.Coord := Coordinate364;
{ .SetGeometry }
Shape361.Geometry := LineSet362;
{ .AddChildren }
HAnimSegment353.AddChildren([Shape361]);
HAnimSite365 := THAnimSiteNode.Create;
HAnimSite365.NameField := 'r_metatarsal_pha1_pt';
HAnimSite365.Translation := Vector3(-0.0521,0.026,0.0127);
TouchSensor366 := TTouchSensorNode.Create;
TouchSensor366.Description := 'HAnimSite r_metatarsal_pha1';
{ .AddChildren }
HAnimSite365.AddChildren([TouchSensor366]);
Shape367 := TShapeNode.Create;
Shape367 := Shape111;
{ .AddChildren }
HAnimSite365.AddChildren([Shape367]);
{ .AddChildren }
HAnimSegment353.AddChildren([HAnimSite365]);
{ .AddChildren }
HAnimJoint352.AddChildren([HAnimSegment353]);
HAnimJoint368 := THAnimJointNode.Create;
HAnimJoint368.NameField := 'r_metatarsal';
HAnimJoint368.Rotation := Vector4(-1,0,0,0.270107235459875);
HAnimJoint368.Center := Vector3(-0.1086,0,0.0762);
HAnimSegment369 := THAnimSegmentNode.Create;
HAnimSegment369.NameField := 'r_forefoot';
TouchSensor370 := TTouchSensorNode.Create;
TouchSensor370.Description := 'HAnimJoint r_metatarsal, HAnimSegment r_forefoot';
{ .AddChildren }
HAnimSegment369.AddChildren([TouchSensor370]);
Transform371 := TTransformNode.Create;
Transform371.Translation := Vector3(-0.1086,0,0.0762);
Shape372 := TShapeNode.Create;
Shape372 := Shape48;
{ .AddChild }
Transform371.AddChildren([Shape372]);
{ .AddChildren }
HAnimSegment369.AddChildren([Transform371]);
Shape373 := TShapeNode.Create;
LineSet374 := TLineSetNode.Create;
LineSet374.SetVertexCount([2]);
ColorRGBA375 := TColorRGBANode.Create;
ColorRGBA375 := ColorRGBA75;
{ .SetColor }
LineSet374.Color := ColorRGBA375;
Coordinate376 := TCoordinateNode.Create;
Coordinate376.SetPoint([Vector3(-0.1086,0,0.0762),Vector3(-0.1043,0.0227,0.145)]);
{ .SetCoord }
LineSet374.Coord := Coordinate376;
{ .SetGeometry }
Shape373.Geometry := LineSet374;
{ .AddChildren }
HAnimSegment369.AddChildren([Shape373]);
Shape377 := TShapeNode.Create;
LineSet378 := TLineSetNode.Create;
LineSet378.SetVertexCount([2]);
ColorRGBA379 := TColorRGBANode.Create;
ColorRGBA379 := ColorRGBA75;
{ .SetColor }
LineSet378.Color := ColorRGBA379;
Coordinate380 := TCoordinateNode.Create;
Coordinate380.SetPoint([Vector3(-0.1086,0,0.0762),Vector3(-0.1523,0.0166,0.0895)]);
{ .SetCoord }
LineSet378.Coord := Coordinate380;
{ .SetGeometry }
Shape377.Geometry := LineSet378;
{ .AddChildren }
HAnimSegment369.AddChildren([Shape377]);
Shape381 := TShapeNode.Create;
LineSet382 := TLineSetNode.Create;
LineSet382.SetVertexCount([2]);
ColorRGBA383 := TColorRGBANode.Create;
ColorRGBA383 := ColorRGBA75;
{ .SetColor }
LineSet382.Color := ColorRGBA383;
Coordinate384 := TCoordinateNode.Create;
Coordinate384.SetPoint([Vector3(-0.1086,0,0.0762),Vector3(-0.0883,0.0134,0.1383)]);
{ .SetCoord }
LineSet382.Coord := Coordinate384;
{ .SetGeometry }
Shape381.Geometry := LineSet382;
{ .AddChildren }
HAnimSegment369.AddChildren([Shape381]);
HAnimSite385 := THAnimSiteNode.Create;
HAnimSite385.NameField := 'r_forefoot_tip';
HAnimSite385.Translation := Vector3(-0.1043,0.0227,0.145);
TouchSensor386 := TTouchSensorNode.Create;
TouchSensor386.Description := 'HAnimSite r_forefoot_tip';
{ .AddChildren }
HAnimSite385.AddChildren([TouchSensor386]);
Shape387 := TShapeNode.Create;
Shape387 := Shape111;
{ .AddChildren }
HAnimSite385.AddChildren([Shape387]);
{ .AddChildren }
HAnimSegment369.AddChildren([HAnimSite385]);
HAnimSite388 := THAnimSiteNode.Create;
HAnimSite388.NameField := 'r_metatarsal_pha5_pt';
HAnimSite388.Translation := Vector3(-0.1523,0.0166,0.0895);
TouchSensor389 := TTouchSensorNode.Create;
TouchSensor389.Description := 'HAnimSite r_metatarsal_pha5';
{ .AddChildren }
HAnimSite388.AddChildren([TouchSensor389]);
Shape390 := TShapeNode.Create;
Shape390 := Shape111;
{ .AddChildren }
HAnimSite388.AddChildren([Shape390]);
{ .AddChildren }
HAnimSegment369.AddChildren([HAnimSite388]);
HAnimSite391 := THAnimSiteNode.Create;
HAnimSite391.NameField := 'r_digit2_pt';
HAnimSite391.Translation := Vector3(-0.0883,0.0134,0.1383);
TouchSensor392 := TTouchSensorNode.Create;
TouchSensor392.Description := 'HAnimSite r_digit2';
{ .AddChildren }
HAnimSite391.AddChildren([TouchSensor392]);
Shape393 := TShapeNode.Create;
Shape393 := Shape111;
{ .AddChildren }
HAnimSite391.AddChildren([Shape393]);
{ .AddChildren }
HAnimSegment369.AddChildren([HAnimSite391]);
{ .AddChildren }
HAnimJoint368.AddChildren([HAnimSegment369]);
{ .AddChildren }
HAnimJoint352.AddChildren([HAnimJoint368]);
{ .AddChildren }
HAnimJoint343.AddChildren([HAnimJoint352]);
{ .AddChildren }
HAnimJoint306.AddChildren([HAnimJoint343]);
{ .AddChildren }
HAnimJoint297.AddChildren([HAnimJoint306]);
{ .AddChildren }
HAnimJoint267.AddChildren([HAnimJoint297]);
{ .AddChildren }
HAnimJoint60.AddChildren([HAnimJoint267]);
{ .AddChildren }
HAnimJoint44.AddChildren([HAnimJoint60]);
HAnimJoint394 := THAnimJointNode.Create;
HAnimJoint394.NameField := 'vl5';
HAnimJoint394.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimSegment395 := THAnimSegmentNode.Create;
HAnimSegment395.NameField := 'l5';
TouchSensor396 := TTouchSensorNode.Create;
TouchSensor396.Description := 'HAnimJoint vl5, HAnimSegment l5';
{ .AddChildren }
HAnimSegment395.AddChildren([TouchSensor396]);
Transform397 := TTransformNode.Create;
Transform397.Translation := Vector3(0.0028,1.0568,-0.0776);
Shape398 := TShapeNode.Create;
Shape398 := Shape48;
{ .AddChild }
Transform397.AddChildren([Shape398]);
{ .AddChildren }
HAnimSegment395.AddChildren([Transform397]);
Shape399 := TShapeNode.Create;
LineSet400 := TLineSetNode.Create;
LineSet400.SetVertexCount([2]);
ColorRGBA401 := TColorRGBANode.Create;
ColorRGBA401 := ColorRGBA54;
{ .SetColor }
LineSet400.Color := ColorRGBA401;
Coordinate402 := TCoordinateNode.Create;
Coordinate402.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0035,1.0925,-0.0787)]);
{ .SetCoord }
LineSet400.Coord := Coordinate402;
{ .SetGeometry }
Shape399.Geometry := LineSet400;
{ .AddChildren }
HAnimSegment395.AddChildren([Shape399]);
Shape403 := TShapeNode.Create;
LineSet404 := TLineSetNode.Create;
LineSet404.SetVertexCount([2]);
ColorRGBA405 := TColorRGBANode.Create;
ColorRGBA405 := ColorRGBA75;
{ .SetColor }
LineSet404.Color := ColorRGBA405;
Coordinate406 := TCoordinateNode.Create;
Coordinate406.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0,1.0915,-0.1091)]);
{ .SetCoord }
LineSet404.Coord := Coordinate406;
{ .SetGeometry }
Shape403.Geometry := LineSet404;
{ .AddChildren }
HAnimSegment395.AddChildren([Shape403]);
Shape407 := TShapeNode.Create;
LineSet408 := TLineSetNode.Create;
LineSet408.SetVertexCount([2]);
ColorRGBA409 := TColorRGBANode.Create;
ColorRGBA409 := ColorRGBA75;
{ .SetColor }
LineSet408.Color := ColorRGBA409;
Coordinate410 := TCoordinateNode.Create;
Coordinate410.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0069,1.0966,0.1017)]);
{ .SetCoord }
LineSet408.Coord := Coordinate410;
{ .SetGeometry }
Shape407.Geometry := LineSet408;
{ .AddChildren }
HAnimSegment395.AddChildren([Shape407]);
HAnimSite411 := THAnimSiteNode.Create;
HAnimSite411.NameField := 'waist_preferred_post_pt';
HAnimSite411.Translation := Vector3(0,1.0915,-0.1091);
TouchSensor412 := TTouchSensorNode.Create;
TouchSensor412.Description := 'HAnimSite waist_preferred_post';
{ .AddChildren }
HAnimSite411.AddChildren([TouchSensor412]);
Shape413 := TShapeNode.Create;
Shape413 := Shape111;
{ .AddChildren }
HAnimSite411.AddChildren([Shape413]);
{ .AddChildren }
HAnimSegment395.AddChildren([HAnimSite411]);
HAnimSite414 := THAnimSiteNode.Create;
HAnimSite414.NameField := 'navel_pt';
HAnimSite414.Translation := Vector3(0.0069,1.0966,0.1017);
TouchSensor415 := TTouchSensorNode.Create;
TouchSensor415.Description := 'HAnimSite navel';
{ .AddChildren }
HAnimSite414.AddChildren([TouchSensor415]);
Shape416 := TShapeNode.Create;
Shape416 := Shape111;
{ .AddChildren }
HAnimSite414.AddChildren([Shape416]);
{ .AddChildren }
HAnimSegment395.AddChildren([HAnimSite414]);
{ .AddChildren }
HAnimJoint394.AddChildren([HAnimSegment395]);
HAnimJoint417 := THAnimJointNode.Create;
HAnimJoint417.NameField := 'vl4';
HAnimJoint417.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimSegment418 := THAnimSegmentNode.Create;
HAnimSegment418.NameField := 'l4';
TouchSensor419 := TTouchSensorNode.Create;
TouchSensor419.Description := 'HAnimJoint vl4, HAnimSegment l4';
{ .AddChildren }
HAnimSegment418.AddChildren([TouchSensor419]);
Transform420 := TTransformNode.Create;
Transform420.Translation := Vector3(0.0035,1.0925,-0.0787);
Shape421 := TShapeNode.Create;
Shape421 := Shape48;
{ .AddChild }
Transform420.AddChildren([Shape421]);
{ .AddChildren }
HAnimSegment418.AddChildren([Transform420]);
Shape422 := TShapeNode.Create;
LineSet423 := TLineSetNode.Create;
LineSet423.SetVertexCount([2]);
ColorRGBA424 := TColorRGBANode.Create;
ColorRGBA424 := ColorRGBA54;
{ .SetColor }
LineSet423.Color := ColorRGBA424;
Coordinate425 := TCoordinateNode.Create;
Coordinate425.SetPoint([Vector3(0.0035,1.0925,-0.0787),Vector3(0.0041,1.1276,-0.0796)]);
{ .SetCoord }
LineSet423.Coord := Coordinate425;
{ .SetGeometry }
Shape422.Geometry := LineSet423;
{ .AddChildren }
HAnimSegment418.AddChildren([Shape422]);
{ .AddChildren }
HAnimJoint417.AddChildren([HAnimSegment418]);
HAnimJoint426 := THAnimJointNode.Create;
HAnimJoint426.NameField := 'vl3';
HAnimJoint426.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimSegment427 := THAnimSegmentNode.Create;
HAnimSegment427.NameField := 'l3';
TouchSensor428 := TTouchSensorNode.Create;
TouchSensor428.Description := 'HAnimJoint vl3, HAnimSegment l3';
{ .AddChildren }
HAnimSegment427.AddChildren([TouchSensor428]);
Transform429 := TTransformNode.Create;
Transform429.Translation := Vector3(0.0041,1.1276,-0.0796);
Shape430 := TShapeNode.Create;
Shape430 := Shape48;
{ .AddChild }
Transform429.AddChildren([Shape430]);
{ .AddChildren }
HAnimSegment427.AddChildren([Transform429]);
Shape431 := TShapeNode.Create;
LineSet432 := TLineSetNode.Create;
LineSet432.SetVertexCount([2]);
ColorRGBA433 := TColorRGBANode.Create;
ColorRGBA433 := ColorRGBA54;
{ .SetColor }
LineSet432.Color := ColorRGBA433;
Coordinate434 := TCoordinateNode.Create;
Coordinate434.SetPoint([Vector3(0.0041,1.1276,-0.0796),Vector3(0.0045,1.1546,-0.08)]);
{ .SetCoord }
LineSet432.Coord := Coordinate434;
{ .SetGeometry }
Shape431.Geometry := LineSet432;
{ .AddChildren }
HAnimSegment427.AddChildren([Shape431]);
{ .AddChildren }
HAnimJoint426.AddChildren([HAnimSegment427]);
HAnimJoint435 := THAnimJointNode.Create;
HAnimJoint435.NameField := 'vl2';
HAnimJoint435.Center := Vector3(0.0045,1.1546,-0.08);
HAnimSegment436 := THAnimSegmentNode.Create;
HAnimSegment436.NameField := 'l2';
TouchSensor437 := TTouchSensorNode.Create;
TouchSensor437.Description := 'HAnimJoint vl2, HAnimSegment l2';
{ .AddChildren }
HAnimSegment436.AddChildren([TouchSensor437]);
Transform438 := TTransformNode.Create;
Transform438.Translation := Vector3(0.0045,1.1546,-0.08);
Shape439 := TShapeNode.Create;
Shape439 := Shape48;
{ .AddChild }
Transform438.AddChildren([Shape439]);
{ .AddChildren }
HAnimSegment436.AddChildren([Transform438]);
Shape440 := TShapeNode.Create;
LineSet441 := TLineSetNode.Create;
LineSet441.SetVertexCount([2]);
ColorRGBA442 := TColorRGBANode.Create;
ColorRGBA442 := ColorRGBA54;
{ .SetColor }
LineSet441.Color := ColorRGBA442;
Coordinate443 := TCoordinateNode.Create;
Coordinate443.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0048,1.1912,-0.0805)]);
{ .SetCoord }
LineSet441.Coord := Coordinate443;
{ .SetGeometry }
Shape440.Geometry := LineSet441;
{ .AddChildren }
HAnimSegment436.AddChildren([Shape440]);
Shape444 := TShapeNode.Create;
LineSet445 := TLineSetNode.Create;
LineSet445.SetVertexCount([2]);
ColorRGBA446 := TColorRGBANode.Create;
ColorRGBA446 := ColorRGBA75;
{ .SetColor }
LineSet445.Color := ColorRGBA446;
Coordinate447 := TCoordinateNode.Create;
Coordinate447.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(-0.0711,1.1941,0.1016)]);
{ .SetCoord }
LineSet445.Coord := Coordinate447;
{ .SetGeometry }
Shape444.Geometry := LineSet445;
{ .AddChildren }
HAnimSegment436.AddChildren([Shape444]);
Shape448 := TShapeNode.Create;
LineSet449 := TLineSetNode.Create;
LineSet449.SetVertexCount([2]);
ColorRGBA450 := TColorRGBANode.Create;
ColorRGBA450 := ColorRGBA75;
{ .SetColor }
LineSet449.Color := ColorRGBA450;
Coordinate451 := TCoordinateNode.Create;
Coordinate451.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0871,1.1925,0.0992)]);
{ .SetCoord }
LineSet449.Coord := Coordinate451;
{ .SetGeometry }
Shape448.Geometry := LineSet449;
{ .AddChildren }
HAnimSegment436.AddChildren([Shape448]);
Shape452 := TShapeNode.Create;
LineSet453 := TLineSetNode.Create;
LineSet453.SetVertexCount([2]);
ColorRGBA454 := TColorRGBANode.Create;
ColorRGBA454 := ColorRGBA75;
{ .SetColor }
LineSet453.Color := ColorRGBA454;
Coordinate455 := TCoordinateNode.Create;
Coordinate455.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0049,1.1908,-0.1113)]);
{ .SetCoord }
LineSet453.Coord := Coordinate455;
{ .SetGeometry }
Shape452.Geometry := LineSet453;
{ .AddChildren }
HAnimSegment436.AddChildren([Shape452]);
HAnimSite456 := THAnimSiteNode.Create;
HAnimSite456.NameField := 'r_rib10_pt';
HAnimSite456.Translation := Vector3(-0.0711,1.1941,0.1016);
TouchSensor457 := TTouchSensorNode.Create;
TouchSensor457.Description := 'HAnimSite r_rib10';
{ .AddChildren }
HAnimSite456.AddChildren([TouchSensor457]);
Shape458 := TShapeNode.Create;
Shape458 := Shape111;
{ .AddChildren }
HAnimSite456.AddChildren([Shape458]);
{ .AddChildren }
HAnimSegment436.AddChildren([HAnimSite456]);
HAnimSite459 := THAnimSiteNode.Create;
HAnimSite459.NameField := 'l_rib10_pt';
HAnimSite459.Translation := Vector3(0.0871,1.1925,0.0992);
TouchSensor460 := TTouchSensorNode.Create;
TouchSensor460.Description := 'HAnimSite l_rib10';
{ .AddChildren }
HAnimSite459.AddChildren([TouchSensor460]);
Shape461 := TShapeNode.Create;
Shape461 := Shape111;
{ .AddChildren }
HAnimSite459.AddChildren([Shape461]);
{ .AddChildren }
HAnimSegment436.AddChildren([HAnimSite459]);
HAnimSite462 := THAnimSiteNode.Create;
HAnimSite462.NameField := 'rib10_midspine_pt';
HAnimSite462.Translation := Vector3(0.0049,1.1908,-0.1113);
TouchSensor463 := TTouchSensorNode.Create;
TouchSensor463.Description := 'HAnimSite rib10_midspine';
{ .AddChildren }
HAnimSite462.AddChildren([TouchSensor463]);
Shape464 := TShapeNode.Create;
Shape464 := Shape111;
{ .AddChildren }
HAnimSite462.AddChildren([Shape464]);
{ .AddChildren }
HAnimSegment436.AddChildren([HAnimSite462]);
{ .AddChildren }
HAnimJoint435.AddChildren([HAnimSegment436]);
HAnimJoint465 := THAnimJointNode.Create;
HAnimJoint465.NameField := 'vl1';
HAnimJoint465.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimSegment466 := THAnimSegmentNode.Create;
HAnimSegment466.NameField := 'l1';
TouchSensor467 := TTouchSensorNode.Create;
TouchSensor467.Description := 'HAnimJoint vl1, HAnimSegment l1';
{ .AddChildren }
HAnimSegment466.AddChildren([TouchSensor467]);
Transform468 := TTransformNode.Create;
Transform468.Translation := Vector3(0.0048,1.1912,-0.0805);
Shape469 := TShapeNode.Create;
Shape469 := Shape48;
{ .AddChild }
Transform468.AddChildren([Shape469]);
{ .AddChildren }
HAnimSegment466.AddChildren([Transform468]);
Shape470 := TShapeNode.Create;
LineSet471 := TLineSetNode.Create;
LineSet471.SetVertexCount([2]);
ColorRGBA472 := TColorRGBANode.Create;
ColorRGBA472 := ColorRGBA54;
{ .SetColor }
LineSet471.Color := ColorRGBA472;
Coordinate473 := TCoordinateNode.Create;
Coordinate473.SetPoint([Vector3(0.0048,1.1912,-0.0805),Vector3(0.0051,1.2278,-0.0808)]);
{ .SetCoord }
LineSet471.Coord := Coordinate473;
{ .SetGeometry }
Shape470.Geometry := LineSet471;
{ .AddChildren }
HAnimSegment466.AddChildren([Shape470]);
{ .AddChildren }
HAnimJoint465.AddChildren([HAnimSegment466]);
HAnimJoint474 := THAnimJointNode.Create;
HAnimJoint474.NameField := 'vt12';
HAnimJoint474.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimSegment475 := THAnimSegmentNode.Create;
HAnimSegment475.NameField := 't12';
TouchSensor476 := TTouchSensorNode.Create;
TouchSensor476.Description := 'HAnimJoint vt12, HAnimSegment t12';
{ .AddChildren }
HAnimSegment475.AddChildren([TouchSensor476]);
Transform477 := TTransformNode.Create;
Transform477.Translation := Vector3(0.0051,1.2278,-0.0808);
Shape478 := TShapeNode.Create;
Shape478 := Shape48;
{ .AddChild }
Transform477.AddChildren([Shape478]);
{ .AddChildren }
HAnimSegment475.AddChildren([Transform477]);
Shape479 := TShapeNode.Create;
LineSet480 := TLineSetNode.Create;
LineSet480.SetVertexCount([2]);
ColorRGBA481 := TColorRGBANode.Create;
ColorRGBA481 := ColorRGBA54;
{ .SetColor }
LineSet480.Color := ColorRGBA481;
Coordinate482 := TCoordinateNode.Create;
Coordinate482.SetPoint([Vector3(0.0051,1.2278,-0.0808),Vector3(0.0053,1.2679,-0.081)]);
{ .SetCoord }
LineSet480.Coord := Coordinate482;
{ .SetGeometry }
Shape479.Geometry := LineSet480;
{ .AddChildren }
HAnimSegment475.AddChildren([Shape479]);
{ .AddChildren }
HAnimJoint474.AddChildren([HAnimSegment475]);
HAnimJoint483 := THAnimJointNode.Create;
HAnimJoint483.NameField := 'vt11';
HAnimJoint483.Center := Vector3(0.0053,1.2679,-0.081);
HAnimSegment484 := THAnimSegmentNode.Create;
HAnimSegment484.NameField := 't11';
TouchSensor485 := TTouchSensorNode.Create;
TouchSensor485.Description := 'HAnimJoint vt11, HAnimSegment t11';
{ .AddChildren }
HAnimSegment484.AddChildren([TouchSensor485]);
Transform486 := TTransformNode.Create;
Transform486.Translation := Vector3(0.0053,1.2679,-0.081);
Shape487 := TShapeNode.Create;
Shape487 := Shape48;
{ .AddChild }
Transform486.AddChildren([Shape487]);
{ .AddChildren }
HAnimSegment484.AddChildren([Transform486]);
Shape488 := TShapeNode.Create;
LineSet489 := TLineSetNode.Create;
LineSet489.SetVertexCount([2]);
ColorRGBA490 := TColorRGBANode.Create;
ColorRGBA490 := ColorRGBA54;
{ .SetColor }
LineSet489.Color := ColorRGBA490;
Coordinate491 := TCoordinateNode.Create;
Coordinate491.SetPoint([Vector3(0.0053,1.2679,-0.081),Vector3(0.0056,1.2848,-0.0822)]);
{ .SetCoord }
LineSet489.Coord := Coordinate491;
{ .SetGeometry }
Shape488.Geometry := LineSet489;
{ .AddChildren }
HAnimSegment484.AddChildren([Shape488]);
{ .AddChildren }
HAnimJoint483.AddChildren([HAnimSegment484]);
HAnimJoint492 := THAnimJointNode.Create;
HAnimJoint492.NameField := 'vt10';
HAnimJoint492.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimSegment493 := THAnimSegmentNode.Create;
HAnimSegment493.NameField := 't10';
TouchSensor494 := TTouchSensorNode.Create;
TouchSensor494.Description := 'HAnimJoint vt10, HAnimSegment t10';
{ .AddChildren }
HAnimSegment493.AddChildren([TouchSensor494]);
Transform495 := TTransformNode.Create;
Transform495.Translation := Vector3(0.0056,1.2848,-0.0822);
Shape496 := TShapeNode.Create;
Shape496 := Shape48;
{ .AddChild }
Transform495.AddChildren([Shape496]);
{ .AddChildren }
HAnimSegment493.AddChildren([Transform495]);
Shape497 := TShapeNode.Create;
LineSet498 := TLineSetNode.Create;
LineSet498.SetVertexCount([2]);
ColorRGBA499 := TColorRGBANode.Create;
ColorRGBA499 := ColorRGBA54;
{ .SetColor }
LineSet498.Color := ColorRGBA499;
Coordinate500 := TCoordinateNode.Create;
Coordinate500.SetPoint([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0057,1.3126,-0.0838)]);
{ .SetCoord }
LineSet498.Coord := Coordinate500;
{ .SetGeometry }
Shape497.Geometry := LineSet498;
{ .AddChildren }
HAnimSegment493.AddChildren([Shape497]);
Shape501 := TShapeNode.Create;
LineSet502 := TLineSetNode.Create;
LineSet502.SetVertexCount([2]);
ColorRGBA503 := TColorRGBANode.Create;
ColorRGBA503 := ColorRGBA75;
{ .SetColor }
LineSet502.Color := ColorRGBA503;
Coordinate504 := TCoordinateNode.Create;
Coordinate504.SetPoint([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0085,1.2995,0.1147)]);
{ .SetCoord }
LineSet502.Coord := Coordinate504;
{ .SetGeometry }
Shape501.Geometry := LineSet502;
{ .AddChildren }
HAnimSegment493.AddChildren([Shape501]);
HAnimSite505 := THAnimSiteNode.Create;
HAnimSite505.NameField := 'substernale_pt';
HAnimSite505.Translation := Vector3(0.0085,1.2995,0.1147);
TouchSensor506 := TTouchSensorNode.Create;
TouchSensor506.Description := 'HAnimSite substernale';
{ .AddChildren }
HAnimSite505.AddChildren([TouchSensor506]);
Shape507 := TShapeNode.Create;
Shape507 := Shape111;
{ .AddChildren }
HAnimSite505.AddChildren([Shape507]);
{ .AddChildren }
HAnimSegment493.AddChildren([HAnimSite505]);
{ .AddChildren }
HAnimJoint492.AddChildren([HAnimSegment493]);
HAnimJoint508 := THAnimJointNode.Create;
HAnimJoint508.NameField := 'vt9';
HAnimJoint508.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimSegment509 := THAnimSegmentNode.Create;
HAnimSegment509.NameField := 't9';
TouchSensor510 := TTouchSensorNode.Create;
TouchSensor510.Description := 'HAnimJoint vt9, HAnimSegment t9';
{ .AddChildren }
HAnimSegment509.AddChildren([TouchSensor510]);
Transform511 := TTransformNode.Create;
Transform511.Translation := Vector3(0.0057,1.3126,-0.0838);
Shape512 := TShapeNode.Create;
Shape512 := Shape48;
{ .AddChild }
Transform511.AddChildren([Shape512]);
{ .AddChildren }
HAnimSegment509.AddChildren([Transform511]);
Shape513 := TShapeNode.Create;
LineSet514 := TLineSetNode.Create;
LineSet514.SetVertexCount([2]);
ColorRGBA515 := TColorRGBANode.Create;
ColorRGBA515 := ColorRGBA54;
{ .SetColor }
LineSet514.Color := ColorRGBA515;
Coordinate516 := TCoordinateNode.Create;
Coordinate516.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(0.0057,1.3382,-0.0845)]);
{ .SetCoord }
LineSet514.Coord := Coordinate516;
{ .SetGeometry }
Shape513.Geometry := LineSet514;
{ .AddChildren }
HAnimSegment509.AddChildren([Shape513]);
Shape517 := TShapeNode.Create;
LineSet518 := TLineSetNode.Create;
LineSet518.SetVertexCount([2]);
ColorRGBA519 := TColorRGBANode.Create;
ColorRGBA519 := ColorRGBA75;
{ .SetColor }
LineSet518.Color := ColorRGBA519;
Coordinate520 := TCoordinateNode.Create;
Coordinate520.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(-0.0736,1.3385,0.1217)]);
{ .SetCoord }
LineSet518.Coord := Coordinate520;
{ .SetGeometry }
Shape517.Geometry := LineSet518;
{ .AddChildren }
HAnimSegment509.AddChildren([Shape517]);
Shape521 := TShapeNode.Create;
LineSet522 := TLineSetNode.Create;
LineSet522.SetVertexCount([2]);
ColorRGBA523 := TColorRGBANode.Create;
ColorRGBA523 := ColorRGBA75;
{ .SetColor }
LineSet522.Color := ColorRGBA523;
Coordinate524 := TCoordinateNode.Create;
Coordinate524.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(0.0918,1.3382,0.1192)]);
{ .SetCoord }
LineSet522.Coord := Coordinate524;
{ .SetGeometry }
Shape521.Geometry := LineSet522;
{ .AddChildren }
HAnimSegment509.AddChildren([Shape521]);
HAnimSite525 := THAnimSiteNode.Create;
HAnimSite525.NameField := 'r_thelion_pt';
HAnimSite525.Translation := Vector3(-0.0736,1.3385,0.1217);
TouchSensor526 := TTouchSensorNode.Create;
TouchSensor526.Description := 'HAnimSite r_thelion';
{ .AddChildren }
HAnimSite525.AddChildren([TouchSensor526]);
Shape527 := TShapeNode.Create;
Shape527 := Shape111;
{ .AddChildren }
HAnimSite525.AddChildren([Shape527]);
{ .AddChildren }
HAnimSegment509.AddChildren([HAnimSite525]);
HAnimSite528 := THAnimSiteNode.Create;
HAnimSite528.NameField := 'l_thelion_pt';
HAnimSite528.Translation := Vector3(0.0918,1.3382,0.1192);
TouchSensor529 := TTouchSensorNode.Create;
TouchSensor529.Description := 'HAnimSite l_thelion';
{ .AddChildren }
HAnimSite528.AddChildren([TouchSensor529]);
Shape530 := TShapeNode.Create;
Shape530 := Shape111;
{ .AddChildren }
HAnimSite528.AddChildren([Shape530]);
{ .AddChildren }
HAnimSegment509.AddChildren([HAnimSite528]);
{ .AddChildren }
HAnimJoint508.AddChildren([HAnimSegment509]);
HAnimJoint531 := THAnimJointNode.Create;
HAnimJoint531.NameField := 'vt8';
HAnimJoint531.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimSegment532 := THAnimSegmentNode.Create;
HAnimSegment532.NameField := 't8';
TouchSensor533 := TTouchSensorNode.Create;
TouchSensor533.Description := 'HAnimJoint vt8, HAnimSegment t8';
{ .AddChildren }
HAnimSegment532.AddChildren([TouchSensor533]);
Transform534 := TTransformNode.Create;
Transform534.Translation := Vector3(0.0057,1.3382,-0.0845);
Shape535 := TShapeNode.Create;
Shape535 := Shape48;
{ .AddChild }
Transform534.AddChildren([Shape535]);
{ .AddChildren }
HAnimSegment532.AddChildren([Transform534]);
Shape536 := TShapeNode.Create;
LineSet537 := TLineSetNode.Create;
LineSet537.SetVertexCount([2]);
ColorRGBA538 := TColorRGBANode.Create;
ColorRGBA538 := ColorRGBA54;
{ .SetColor }
LineSet537.Color := ColorRGBA538;
Coordinate539 := TCoordinateNode.Create;
Coordinate539.SetPoint([Vector3(0.0057,1.3382,-0.0845),Vector3(0.0058,1.3625,-0.0833)]);
{ .SetCoord }
LineSet537.Coord := Coordinate539;
{ .SetGeometry }
Shape536.Geometry := LineSet537;
{ .AddChildren }
HAnimSegment532.AddChildren([Shape536]);
{ .AddChildren }
HAnimJoint531.AddChildren([HAnimSegment532]);
HAnimJoint540 := THAnimJointNode.Create;
HAnimJoint540.NameField := 'vt7';
HAnimJoint540.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimSegment541 := THAnimSegmentNode.Create;
HAnimSegment541.NameField := 't7';
TouchSensor542 := TTouchSensorNode.Create;
TouchSensor542.Description := 'HAnimJoint vt7, HAnimSegment t7';
{ .AddChildren }
HAnimSegment541.AddChildren([TouchSensor542]);
Transform543 := TTransformNode.Create;
Transform543.Translation := Vector3(0.0058,1.3625,-0.0833);
Shape544 := TShapeNode.Create;
Shape544 := Shape48;
{ .AddChild }
Transform543.AddChildren([Shape544]);
{ .AddChildren }
HAnimSegment541.AddChildren([Transform543]);
Shape545 := TShapeNode.Create;
LineSet546 := TLineSetNode.Create;
LineSet546.SetVertexCount([2]);
ColorRGBA547 := TColorRGBANode.Create;
ColorRGBA547 := ColorRGBA54;
{ .SetColor }
LineSet546.Color := ColorRGBA547;
Coordinate548 := TCoordinateNode.Create;
Coordinate548.SetPoint([Vector3(0.0058,1.3625,-0.0833),Vector3(0.0059,1.3866,-0.08)]);
{ .SetCoord }
LineSet546.Coord := Coordinate548;
{ .SetGeometry }
Shape545.Geometry := LineSet546;
{ .AddChildren }
HAnimSegment541.AddChildren([Shape545]);
{ .AddChildren }
HAnimJoint540.AddChildren([HAnimSegment541]);
HAnimJoint549 := THAnimJointNode.Create;
HAnimJoint549.NameField := 'vt6';
HAnimJoint549.Center := Vector3(0.0059,1.3866,-0.08);
HAnimSegment550 := THAnimSegmentNode.Create;
HAnimSegment550.NameField := 't6';
TouchSensor551 := TTouchSensorNode.Create;
TouchSensor551.Description := 'HAnimJoint vt6, HAnimSegment t6';
{ .AddChildren }
HAnimSegment550.AddChildren([TouchSensor551]);
Transform552 := TTransformNode.Create;
Transform552.Translation := Vector3(0.0059,1.3866,-0.08);
Shape553 := TShapeNode.Create;
Shape553 := Shape48;
{ .AddChild }
Transform552.AddChildren([Shape553]);
{ .AddChildren }
HAnimSegment550.AddChildren([Transform552]);
Shape554 := TShapeNode.Create;
LineSet555 := TLineSetNode.Create;
LineSet555.SetVertexCount([2]);
ColorRGBA556 := TColorRGBANode.Create;
ColorRGBA556 := ColorRGBA54;
{ .SetColor }
LineSet555.Color := ColorRGBA556;
Coordinate557 := TCoordinateNode.Create;
Coordinate557.SetPoint([Vector3(0.0059,1.3866,-0.08),Vector3(0.006,1.4102,-0.0745)]);
{ .SetCoord }
LineSet555.Coord := Coordinate557;
{ .SetGeometry }
Shape554.Geometry := LineSet555;
{ .AddChildren }
HAnimSegment550.AddChildren([Shape554]);
{ .AddChildren }
HAnimJoint549.AddChildren([HAnimSegment550]);
HAnimJoint558 := THAnimJointNode.Create;
HAnimJoint558.NameField := 'vt5';
HAnimJoint558.Center := Vector3(0.006,1.4102,-0.0745);
HAnimSegment559 := THAnimSegmentNode.Create;
HAnimSegment559.NameField := 't5';
TouchSensor560 := TTouchSensorNode.Create;
TouchSensor560.Description := 'HAnimJoint vt5, HAnimSegment t5';
{ .AddChildren }
HAnimSegment559.AddChildren([TouchSensor560]);
Transform561 := TTransformNode.Create;
Transform561.Translation := Vector3(0.006,1.4102,-0.0745);
Shape562 := TShapeNode.Create;
Shape562 := Shape48;
{ .AddChild }
Transform561.AddChildren([Shape562]);
{ .AddChildren }
HAnimSegment559.AddChildren([Transform561]);
Shape563 := TShapeNode.Create;
LineSet564 := TLineSetNode.Create;
LineSet564.SetVertexCount([2]);
ColorRGBA565 := TColorRGBANode.Create;
ColorRGBA565 := ColorRGBA54;
{ .SetColor }
LineSet564.Color := ColorRGBA565;
Coordinate566 := TCoordinateNode.Create;
Coordinate566.SetPoint([Vector3(0.006,1.4102,-0.0745),Vector3(0.0061,1.432,-0.0675)]);
{ .SetCoord }
LineSet564.Coord := Coordinate566;
{ .SetGeometry }
Shape563.Geometry := LineSet564;
{ .AddChildren }
HAnimSegment559.AddChildren([Shape563]);
{ .AddChildren }
HAnimJoint558.AddChildren([HAnimSegment559]);
HAnimJoint567 := THAnimJointNode.Create;
HAnimJoint567.NameField := 'vt4';
HAnimJoint567.Center := Vector3(0.0061,1.432,-0.0675);
HAnimSegment568 := THAnimSegmentNode.Create;
HAnimSegment568.NameField := 't4';
TouchSensor569 := TTouchSensorNode.Create;
TouchSensor569.Description := 'HAnimJoint vt4, HAnimSegment t4';
{ .AddChildren }
HAnimSegment568.AddChildren([TouchSensor569]);
Transform570 := TTransformNode.Create;
Transform570.Translation := Vector3(0.0061,1.432,-0.0675);
Shape571 := TShapeNode.Create;
Shape571 := Shape48;
{ .AddChild }
Transform570.AddChildren([Shape571]);
{ .AddChildren }
HAnimSegment568.AddChildren([Transform570]);
Shape572 := TShapeNode.Create;
LineSet573 := TLineSetNode.Create;
LineSet573.SetVertexCount([2]);
ColorRGBA574 := TColorRGBANode.Create;
ColorRGBA574 := ColorRGBA54;
{ .SetColor }
LineSet573.Color := ColorRGBA574;
Coordinate575 := TCoordinateNode.Create;
Coordinate575.SetPoint([Vector3(0.0061,1.432,-0.0675),Vector3(0.0062,1.4583,-0.057)]);
{ .SetCoord }
LineSet573.Coord := Coordinate575;
{ .SetGeometry }
Shape572.Geometry := LineSet573;
{ .AddChildren }
HAnimSegment568.AddChildren([Shape572]);
{ .AddChildren }
HAnimJoint567.AddChildren([HAnimSegment568]);
HAnimJoint576 := THAnimJointNode.Create;
HAnimJoint576.NameField := 'vt3';
HAnimJoint576.Center := Vector3(0.0062,1.4583,-0.057);
HAnimSegment577 := THAnimSegmentNode.Create;
HAnimSegment577.NameField := 't3';
TouchSensor578 := TTouchSensorNode.Create;
TouchSensor578.Description := 'HAnimJoint vt3, HAnimSegment t3';
{ .AddChildren }
HAnimSegment577.AddChildren([TouchSensor578]);
Transform579 := TTransformNode.Create;
Transform579.Translation := Vector3(0.0062,1.4583,-0.057);
Shape580 := TShapeNode.Create;
Shape580 := Shape48;
{ .AddChild }
Transform579.AddChildren([Shape580]);
{ .AddChildren }
HAnimSegment577.AddChildren([Transform579]);
Shape581 := TShapeNode.Create;
LineSet582 := TLineSetNode.Create;
LineSet582.SetVertexCount([2]);
ColorRGBA583 := TColorRGBANode.Create;
ColorRGBA583 := ColorRGBA54;
{ .SetColor }
LineSet582.Color := ColorRGBA583;
Coordinate584 := TCoordinateNode.Create;
Coordinate584.SetPoint([Vector3(0.0062,1.4583,-0.057),Vector3(0.0063,1.4761,-0.0484)]);
{ .SetCoord }
LineSet582.Coord := Coordinate584;
{ .SetGeometry }
Shape581.Geometry := LineSet582;
{ .AddChildren }
HAnimSegment577.AddChildren([Shape581]);
{ .AddChildren }
HAnimJoint576.AddChildren([HAnimSegment577]);
HAnimJoint585 := THAnimJointNode.Create;
HAnimJoint585.NameField := 'vt2';
HAnimJoint585.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimSegment586 := THAnimSegmentNode.Create;
HAnimSegment586.NameField := 't2';
TouchSensor587 := TTouchSensorNode.Create;
TouchSensor587.Description := 'HAnimJoint vt2, HAnimSegment t2';
{ .AddChildren }
HAnimSegment586.AddChildren([TouchSensor587]);
Transform588 := TTransformNode.Create;
Transform588.Translation := Vector3(0.0063,1.4761,-0.0484);
Shape589 := TShapeNode.Create;
Shape589 := Shape48;
{ .AddChild }
Transform588.AddChildren([Shape589]);
{ .AddChildren }
HAnimSegment586.AddChildren([Transform588]);
Shape590 := TShapeNode.Create;
LineSet591 := TLineSetNode.Create;
LineSet591.SetVertexCount([2]);
ColorRGBA592 := TColorRGBANode.Create;
ColorRGBA592 := ColorRGBA54;
{ .SetColor }
LineSet591.Color := ColorRGBA592;
Coordinate593 := TCoordinateNode.Create;
Coordinate593.SetPoint([Vector3(0.0063,1.4761,-0.0484),Vector3(0.0065,1.4951,-0.0387)]);
{ .SetCoord }
LineSet591.Coord := Coordinate593;
{ .SetGeometry }
Shape590.Geometry := LineSet591;
{ .AddChildren }
HAnimSegment586.AddChildren([Shape590]);
{ .AddChildren }
HAnimJoint585.AddChildren([HAnimSegment586]);
HAnimJoint594 := THAnimJointNode.Create;
HAnimJoint594.NameField := 'vt1';
HAnimJoint594.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimSegment595 := THAnimSegmentNode.Create;
HAnimSegment595.NameField := 't1';
TouchSensor596 := TTouchSensorNode.Create;
TouchSensor596.Description := 'HAnimJoint vt1, HAnimSegment t1';
{ .AddChildren }
HAnimSegment595.AddChildren([TouchSensor596]);
Transform597 := TTransformNode.Create;
Transform597.Translation := Vector3(0.0065,1.4951,-0.0387);
Shape598 := TShapeNode.Create;
Shape598 := Shape48;
{ .AddChild }
Transform597.AddChildren([Shape598]);
{ .AddChildren }
HAnimSegment595.AddChildren([Transform597]);
Shape599 := TShapeNode.Create;
LineSet600 := TLineSetNode.Create;
LineSet600.SetVertexCount([2]);
ColorRGBA601 := TColorRGBANode.Create;
ColorRGBA601 := ColorRGBA54;
{ .SetColor }
LineSet600.Color := ColorRGBA601;
Coordinate602 := TCoordinateNode.Create;
Coordinate602.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0066,1.5132,-0.0301)]);
{ .SetCoord }
LineSet600.Coord := Coordinate602;
{ .SetGeometry }
Shape599.Geometry := LineSet600;
{ .AddChildren }
HAnimSegment595.AddChildren([Shape599]);
Shape603 := TShapeNode.Create;
LineSet604 := TLineSetNode.Create;
LineSet604.SetVertexCount([2]);
ColorRGBA605 := TColorRGBANode.Create;
ColorRGBA605 := ColorRGBA54;
{ .SetColor }
LineSet604.Color := ColorRGBA605;
Coordinate606 := TCoordinateNode.Create;
Coordinate606.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.082,1.4488,-0.0353)]);
{ .SetCoord }
LineSet604.Coord := Coordinate606;
{ .SetGeometry }
Shape603.Geometry := LineSet604;
{ .AddChildren }
HAnimSegment595.AddChildren([Shape603]);
Shape607 := TShapeNode.Create;
LineSet608 := TLineSetNode.Create;
LineSet608.SetVertexCount([2]);
ColorRGBA609 := TColorRGBANode.Create;
ColorRGBA609 := ColorRGBA54;
{ .SetColor }
LineSet608.Color := ColorRGBA609;
Coordinate610 := TCoordinateNode.Create;
Coordinate610.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(-0.082,1.4488,-0.0353)]);
{ .SetCoord }
LineSet608.Coord := Coordinate610;
{ .SetGeometry }
Shape607.Geometry := LineSet608;
{ .AddChildren }
HAnimSegment595.AddChildren([Shape607]);
Shape611 := TShapeNode.Create;
LineSet612 := TLineSetNode.Create;
LineSet612.SetVertexCount([2]);
ColorRGBA613 := TColorRGBANode.Create;
ColorRGBA613 := ColorRGBA75;
{ .SetColor }
LineSet612.Color := ColorRGBA613;
Coordinate614 := TCoordinateNode.Create;
Coordinate614.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0084,1.4714,0.0551)]);
{ .SetCoord }
LineSet612.Coord := Coordinate614;
{ .SetGeometry }
Shape611.Geometry := LineSet612;
{ .AddChildren }
HAnimSegment595.AddChildren([Shape611]);
Shape615 := TShapeNode.Create;
LineSet616 := TLineSetNode.Create;
LineSet616.SetVertexCount([2]);
ColorRGBA617 := TColorRGBANode.Create;
ColorRGBA617 := ColorRGBA75;
{ .SetColor }
LineSet616.Color := ColorRGBA617;
Coordinate618 := TCoordinateNode.Create;
Coordinate618.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0064,1.52,-0.0815)]);
{ .SetCoord }
LineSet616.Coord := Coordinate618;
{ .SetGeometry }
Shape615.Geometry := LineSet616;
{ .AddChildren }
HAnimSegment595.AddChildren([Shape615]);
HAnimSite619 := THAnimSiteNode.Create;
HAnimSite619.NameField := 'suprasternale_pt';
HAnimSite619.Translation := Vector3(0.0084,1.4714,0.0551);
TouchSensor620 := TTouchSensorNode.Create;
TouchSensor620.Description := 'HAnimSite suprasternale';
{ .AddChildren }
HAnimSite619.AddChildren([TouchSensor620]);
Shape621 := TShapeNode.Create;
Shape621 := Shape111;
{ .AddChildren }
HAnimSite619.AddChildren([Shape621]);
{ .AddChildren }
HAnimSegment595.AddChildren([HAnimSite619]);
HAnimSite622 := THAnimSiteNode.Create;
HAnimSite622.NameField := 'cervicale_pt';
HAnimSite622.Translation := Vector3(0.0064,1.52,-0.0815);
TouchSensor623 := TTouchSensorNode.Create;
TouchSensor623.Description := 'HAnimSite cervicale';
{ .AddChildren }
HAnimSite622.AddChildren([TouchSensor623]);
Shape624 := TShapeNode.Create;
Shape624 := Shape111;
{ .AddChildren }
HAnimSite622.AddChildren([Shape624]);
{ .AddChildren }
HAnimSegment595.AddChildren([HAnimSite622]);
{ .AddChildren }
HAnimJoint594.AddChildren([HAnimSegment595]);
HAnimJoint625 := THAnimJointNode.Create;
HAnimJoint625.NameField := 'vc7';
HAnimJoint625.Rotation := Vector4(-0.999999999999996,0,0,0.222164034843446);
HAnimJoint625.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimSegment626 := THAnimSegmentNode.Create;
HAnimSegment626.NameField := 'c7';
TouchSensor627 := TTouchSensorNode.Create;
TouchSensor627.Description := 'HAnimJoint vc7, HAnimSegment c7';
{ .AddChildren }
HAnimSegment626.AddChildren([TouchSensor627]);
Transform628 := TTransformNode.Create;
Transform628.Translation := Vector3(0.0066,1.5132,-0.0301);
Shape629 := TShapeNode.Create;
Shape629 := Shape48;
{ .AddChild }
Transform628.AddChildren([Shape629]);
{ .AddChildren }
HAnimSegment626.AddChildren([Transform628]);
Shape630 := TShapeNode.Create;
LineSet631 := TLineSetNode.Create;
LineSet631.SetVertexCount([2]);
ColorRGBA632 := TColorRGBANode.Create;
ColorRGBA632 := ColorRGBA54;
{ .SetColor }
LineSet631.Color := ColorRGBA632;
Coordinate633 := TCoordinateNode.Create;
Coordinate633.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(0.0066,1.5357,-0.0143)]);
{ .SetCoord }
LineSet631.Coord := Coordinate633;
{ .SetGeometry }
Shape630.Geometry := LineSet631;
{ .AddChildren }
HAnimSegment626.AddChildren([Shape630]);
Shape634 := TShapeNode.Create;
LineSet635 := TLineSetNode.Create;
LineSet635.SetVertexCount([2]);
ColorRGBA636 := TColorRGBANode.Create;
ColorRGBA636 := ColorRGBA75;
{ .SetColor }
LineSet635.Color := ColorRGBA636;
Coordinate637 := TCoordinateNode.Create;
Coordinate637.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(-0.0419,1.5149,-0.022)]);
{ .SetCoord }
LineSet635.Coord := Coordinate637;
{ .SetGeometry }
Shape634.Geometry := LineSet635;
{ .AddChildren }
HAnimSegment626.AddChildren([Shape634]);
Shape638 := TShapeNode.Create;
LineSet639 := TLineSetNode.Create;
LineSet639.SetVertexCount([2]);
ColorRGBA640 := TColorRGBANode.Create;
ColorRGBA640 := ColorRGBA75;
{ .SetColor }
LineSet639.Color := ColorRGBA640;
Coordinate641 := TCoordinateNode.Create;
Coordinate641.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(0.0646,1.5141,-0.038)]);
{ .SetCoord }
LineSet639.Coord := Coordinate641;
{ .SetGeometry }
Shape638.Geometry := LineSet639;
{ .AddChildren }
HAnimSegment626.AddChildren([Shape638]);
HAnimSite642 := THAnimSiteNode.Create;
HAnimSite642.NameField := 'r_neck_base_pt';
HAnimSite642.Translation := Vector3(-0.0419,1.5149,-0.022);
TouchSensor643 := TTouchSensorNode.Create;
TouchSensor643.Description := 'HAnimSite r_neck_base';
{ .AddChildren }
HAnimSite642.AddChildren([TouchSensor643]);
Shape644 := TShapeNode.Create;
Shape644 := Shape111;
{ .AddChildren }
HAnimSite642.AddChildren([Shape644]);
{ .AddChildren }
HAnimSegment626.AddChildren([HAnimSite642]);
HAnimSite645 := THAnimSiteNode.Create;
HAnimSite645.NameField := 'l_neck_base_pt';
HAnimSite645.Translation := Vector3(0.0646,1.5141,-0.038);
TouchSensor646 := TTouchSensorNode.Create;
TouchSensor646.Description := 'HAnimSite l_neck_base';
{ .AddChildren }
HAnimSite645.AddChildren([TouchSensor646]);
Shape647 := TShapeNode.Create;
Shape647 := Shape111;
{ .AddChildren }
HAnimSite645.AddChildren([Shape647]);
{ .AddChildren }
HAnimSegment626.AddChildren([HAnimSite645]);
{ .AddChildren }
HAnimJoint625.AddChildren([HAnimSegment626]);
HAnimJoint648 := THAnimJointNode.Create;
HAnimJoint648.NameField := 'vc6';
HAnimJoint648.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimSegment649 := THAnimSegmentNode.Create;
HAnimSegment649.NameField := 'c6';
TouchSensor650 := TTouchSensorNode.Create;
TouchSensor650.Description := 'HAnimJoint vc6, HAnimSegment c6';
{ .AddChildren }
HAnimSegment649.AddChildren([TouchSensor650]);
Transform651 := TTransformNode.Create;
Transform651.Translation := Vector3(0.0066,1.5357,-0.0143);
Shape652 := TShapeNode.Create;
Shape652 := Shape48;
{ .AddChild }
Transform651.AddChildren([Shape652]);
{ .AddChildren }
HAnimSegment649.AddChildren([Transform651]);
Shape653 := TShapeNode.Create;
LineSet654 := TLineSetNode.Create;
LineSet654.SetVertexCount([2]);
ColorRGBA655 := TColorRGBANode.Create;
ColorRGBA655 := ColorRGBA54;
{ .SetColor }
LineSet654.Color := ColorRGBA655;
Coordinate656 := TCoordinateNode.Create;
Coordinate656.SetPoint([Vector3(0.0066,1.5357,-0.0143),Vector3(0.0066,1.552,-0.0082)]);
{ .SetCoord }
LineSet654.Coord := Coordinate656;
{ .SetGeometry }
Shape653.Geometry := LineSet654;
{ .AddChildren }
HAnimSegment649.AddChildren([Shape653]);
{ .AddChildren }
HAnimJoint648.AddChildren([HAnimSegment649]);
HAnimJoint657 := THAnimJointNode.Create;
HAnimJoint657.NameField := 'vc5';
HAnimJoint657.Center := Vector3(0.0066,1.552,-0.0082);
HAnimSegment658 := THAnimSegmentNode.Create;
HAnimSegment658.NameField := 'c5';
TouchSensor659 := TTouchSensorNode.Create;
TouchSensor659.Description := 'HAnimJoint vc5, HAnimSegment c5';
{ .AddChildren }
HAnimSegment658.AddChildren([TouchSensor659]);
Transform660 := TTransformNode.Create;
Transform660.Translation := Vector3(0.0066,1.552,-0.0082);
Shape661 := TShapeNode.Create;
Shape661 := Shape48;
{ .AddChild }
Transform660.AddChildren([Shape661]);
{ .AddChildren }
HAnimSegment658.AddChildren([Transform660]);
Shape662 := TShapeNode.Create;
LineSet663 := TLineSetNode.Create;
LineSet663.SetVertexCount([2]);
ColorRGBA664 := TColorRGBANode.Create;
ColorRGBA664 := ColorRGBA54;
{ .SetColor }
LineSet663.Color := ColorRGBA664;
Coordinate665 := TCoordinateNode.Create;
Coordinate665.SetPoint([Vector3(0.0066,1.552,-0.0082),Vector3(0.0066,1.5662,-0.0084)]);
{ .SetCoord }
LineSet663.Coord := Coordinate665;
{ .SetGeometry }
Shape662.Geometry := LineSet663;
{ .AddChildren }
HAnimSegment658.AddChildren([Shape662]);
{ .AddChildren }
HAnimJoint657.AddChildren([HAnimSegment658]);
HAnimJoint666 := THAnimJointNode.Create;
HAnimJoint666.NameField := 'vc4';
HAnimJoint666.Rotation := Vector4(1,0,0,0.302520108222961);
HAnimJoint666.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimSegment667 := THAnimSegmentNode.Create;
HAnimSegment667.NameField := 'c4';
TouchSensor668 := TTouchSensorNode.Create;
TouchSensor668.Description := 'HAnimJoint vc4, HAnimSegment c4';
{ .AddChildren }
HAnimSegment667.AddChildren([TouchSensor668]);
Transform669 := TTransformNode.Create;
Transform669.Translation := Vector3(0.0066,1.5662,-0.0084);
Shape670 := TShapeNode.Create;
Shape670 := Shape48;
{ .AddChild }
Transform669.AddChildren([Shape670]);
{ .AddChildren }
HAnimSegment667.AddChildren([Transform669]);
Shape671 := TShapeNode.Create;
LineSet672 := TLineSetNode.Create;
LineSet672.SetVertexCount([2]);
ColorRGBA673 := TColorRGBANode.Create;
ColorRGBA673 := ColorRGBA54;
{ .SetColor }
LineSet672.Color := ColorRGBA673;
Coordinate674 := TCoordinateNode.Create;
Coordinate674.SetPoint([Vector3(0.0066,1.5662,-0.0084),Vector3(0.0066,1.58,-0.0103)]);
{ .SetCoord }
LineSet672.Coord := Coordinate674;
{ .SetGeometry }
Shape671.Geometry := LineSet672;
{ .AddChildren }
HAnimSegment667.AddChildren([Shape671]);
{ .AddChildren }
HAnimJoint666.AddChildren([HAnimSegment667]);
HAnimJoint675 := THAnimJointNode.Create;
HAnimJoint675.NameField := 'vc3';
HAnimJoint675.Center := Vector3(0.0066,1.58,-0.0103);
HAnimSegment676 := THAnimSegmentNode.Create;
HAnimSegment676.NameField := 'c3';
TouchSensor677 := TTouchSensorNode.Create;
TouchSensor677.Description := 'HAnimJoint vc3, HAnimSegment c3';
{ .AddChildren }
HAnimSegment676.AddChildren([TouchSensor677]);
Transform678 := TTransformNode.Create;
Transform678.Translation := Vector3(0.0066,1.58,-0.0103);
Shape679 := TShapeNode.Create;
Shape679 := Shape48;
{ .AddChild }
Transform678.AddChildren([Shape679]);
{ .AddChildren }
HAnimSegment676.AddChildren([Transform678]);
Shape680 := TShapeNode.Create;
LineSet681 := TLineSetNode.Create;
LineSet681.SetVertexCount([2]);
ColorRGBA682 := TColorRGBANode.Create;
ColorRGBA682 := ColorRGBA54;
{ .SetColor }
LineSet681.Color := ColorRGBA682;
Coordinate683 := TCoordinateNode.Create;
Coordinate683.SetPoint([Vector3(0.0066,1.58,-0.0103),Vector3(0.0066,1.5928,-0.0103)]);
{ .SetCoord }
LineSet681.Coord := Coordinate683;
{ .SetGeometry }
Shape680.Geometry := LineSet681;
{ .AddChildren }
HAnimSegment676.AddChildren([Shape680]);
{ .AddChildren }
HAnimJoint675.AddChildren([HAnimSegment676]);
HAnimJoint684 := THAnimJointNode.Create;
HAnimJoint684.NameField := 'vc2';
HAnimJoint684.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimSegment685 := THAnimSegmentNode.Create;
HAnimSegment685.NameField := 'c2';
TouchSensor686 := TTouchSensorNode.Create;
TouchSensor686.Description := 'HAnimJoint vc2, HAnimSegment c2';
{ .AddChildren }
HAnimSegment685.AddChildren([TouchSensor686]);
Transform687 := TTransformNode.Create;
Transform687.Translation := Vector3(0.0066,1.5928,-0.0103);
Shape688 := TShapeNode.Create;
Shape688 := Shape48;
{ .AddChild }
Transform687.AddChildren([Shape688]);
{ .AddChildren }
HAnimSegment685.AddChildren([Transform687]);
Shape689 := TShapeNode.Create;
LineSet690 := TLineSetNode.Create;
LineSet690.SetVertexCount([2]);
ColorRGBA691 := TColorRGBANode.Create;
ColorRGBA691 := ColorRGBA54;
{ .SetColor }
LineSet690.Color := ColorRGBA691;
Coordinate692 := TCoordinateNode.Create;
Coordinate692.SetPoint([Vector3(0.0066,1.5928,-0.0103),Vector3(0.0066,1.6144,-0.0034)]);
{ .SetCoord }
LineSet690.Coord := Coordinate692;
{ .SetGeometry }
Shape689.Geometry := LineSet690;
{ .AddChildren }
HAnimSegment685.AddChildren([Shape689]);
{ .AddChildren }
HAnimJoint684.AddChildren([HAnimSegment685]);
HAnimJoint693 := THAnimJointNode.Create;
HAnimJoint693.NameField := 'vc1';
HAnimJoint693.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimSegment694 := THAnimSegmentNode.Create;
HAnimSegment694.NameField := 'c1';
TouchSensor695 := TTouchSensorNode.Create;
TouchSensor695.Description := 'HAnimJoint vc1, HAnimSegment c1';
{ .AddChildren }
HAnimSegment694.AddChildren([TouchSensor695]);
Transform696 := TTransformNode.Create;
Transform696.Translation := Vector3(0.0066,1.6144,-0.0034);
Shape697 := TShapeNode.Create;
Shape697 := Shape48;
{ .AddChild }
Transform696.AddChildren([Shape697]);
{ .AddChildren }
HAnimSegment694.AddChildren([Transform696]);
Shape698 := TShapeNode.Create;
LineSet699 := TLineSetNode.Create;
LineSet699.SetVertexCount([2]);
ColorRGBA700 := TColorRGBANode.Create;
ColorRGBA700 := ColorRGBA54;
{ .SetColor }
LineSet699.Color := ColorRGBA700;
Coordinate701 := TCoordinateNode.Create;
Coordinate701.SetPoint([Vector3(0.0066,1.6144,-0.0034),Vector3(0.0044,1.6209,0.0236)]);
{ .SetCoord }
LineSet699.Coord := Coordinate701;
{ .SetGeometry }
Shape698.Geometry := LineSet699;
{ .AddChildren }
HAnimSegment694.AddChildren([Shape698]);
{ .AddChildren }
HAnimJoint693.AddChildren([HAnimSegment694]);
HAnimJoint702 := THAnimJointNode.Create;
HAnimJoint702.NameField := 'skullbase';
HAnimJoint702.Rotation := Vector4(-1.00000000000001,0,0,0.231096035769597);
HAnimJoint702.Center := Vector3(0.0044,1.6209,0.0236);
HAnimSegment703 := THAnimSegmentNode.Create;
HAnimSegment703.NameField := 'skull';
TouchSensor704 := TTouchSensorNode.Create;
TouchSensor704.Description := 'HAnimJoint skullbase, HAnimSegment skull';
{ .AddChildren }
HAnimSegment703.AddChildren([TouchSensor704]);
Transform705 := TTransformNode.Create;
Transform705.Translation := Vector3(0.0044,1.6209,0.0236);
Shape706 := TShapeNode.Create;
Shape706 := Shape48;
{ .AddChild }
Transform705.AddChildren([Shape706]);
{ .AddChildren }
HAnimSegment703.AddChildren([Transform705]);
Shape707 := TShapeNode.Create;
LineSet708 := TLineSetNode.Create;
LineSet708.SetVertexCount([2]);
ColorRGBA709 := TColorRGBANode.Create;
ColorRGBA709 := ColorRGBA54;
{ .SetColor }
LineSet708.Color := ColorRGBA709;
Coordinate710 := TCoordinateNode.Create;
Coordinate710.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0336,1.6332,0.0502)]);
{ .SetCoord }
LineSet708.Coord := Coordinate710;
{ .SetGeometry }
Shape707.Geometry := LineSet708;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape707]);
Shape711 := TShapeNode.Create;
LineSet712 := TLineSetNode.Create;
LineSet712.SetVertexCount([2]);
ColorRGBA713 := TColorRGBANode.Create;
ColorRGBA713 := ColorRGBA54;
{ .SetColor }
LineSet712.Color := ColorRGBA713;
Coordinate714 := TCoordinateNode.Create;
Coordinate714.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0336,1.6332,0.0502)]);
{ .SetCoord }
LineSet712.Coord := Coordinate714;
{ .SetGeometry }
Shape711.Geometry := LineSet712;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape711]);
Shape715 := TShapeNode.Create;
LineSet716 := TLineSetNode.Create;
LineSet716.SetVertexCount([2]);
ColorRGBA717 := TColorRGBANode.Create;
ColorRGBA717 := ColorRGBA54;
{ .SetColor }
LineSet716.Color := ColorRGBA717;
Coordinate718 := TCoordinateNode.Create;
Coordinate718.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0336,1.635,0.0506)]);
{ .SetCoord }
LineSet716.Coord := Coordinate718;
{ .SetGeometry }
Shape715.Geometry := LineSet716;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape715]);
Shape719 := TShapeNode.Create;
LineSet720 := TLineSetNode.Create;
LineSet720.SetVertexCount([2]);
ColorRGBA721 := TColorRGBANode.Create;
ColorRGBA721 := ColorRGBA54;
{ .SetColor }
LineSet720.Color := ColorRGBA721;
Coordinate722 := TCoordinateNode.Create;
Coordinate722.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0336,1.6332,0.0502)]);
{ .SetCoord }
LineSet720.Coord := Coordinate722;
{ .SetGeometry }
Shape719.Geometry := LineSet720;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape719]);
Shape723 := TShapeNode.Create;
LineSet724 := TLineSetNode.Create;
LineSet724.SetVertexCount([2]);
ColorRGBA725 := TColorRGBANode.Create;
ColorRGBA725 := ColorRGBA54;
{ .SetColor }
LineSet724.Color := ColorRGBA725;
Coordinate726 := TCoordinateNode.Create;
Coordinate726.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0336,1.6332,0.0502)]);
{ .SetCoord }
LineSet724.Coord := Coordinate726;
{ .SetGeometry }
Shape723.Geometry := LineSet724;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape723]);
Shape727 := TShapeNode.Create;
LineSet728 := TLineSetNode.Create;
LineSet728.SetVertexCount([2]);
ColorRGBA729 := TColorRGBANode.Create;
ColorRGBA729 := ColorRGBA54;
{ .SetColor }
LineSet728.Color := ColorRGBA729;
Coordinate730 := TCoordinateNode.Create;
Coordinate730.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0336,1.635,0.0506)]);
{ .SetCoord }
LineSet728.Coord := Coordinate730;
{ .SetGeometry }
Shape727.Geometry := LineSet728;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape727]);
Shape731 := TShapeNode.Create;
LineSet732 := TLineSetNode.Create;
LineSet732.SetVertexCount([2]);
ColorRGBA733 := TColorRGBANode.Create;
ColorRGBA733 := ColorRGBA54;
{ .SetColor }
LineSet732.Color := ColorRGBA733;
Coordinate734 := TCoordinateNode.Create;
Coordinate734.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1.63,0.015)]);
{ .SetCoord }
LineSet732.Coord := Coordinate734;
{ .SetGeometry }
Shape731.Geometry := LineSet732;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape731]);
Shape735 := TShapeNode.Create;
LineSet736 := TLineSetNode.Create;
LineSet736.SetVertexCount([2]);
ColorRGBA737 := TColorRGBANode.Create;
ColorRGBA737 := ColorRGBA75;
{ .SetColor }
LineSet736.Color := ColorRGBA737;
Coordinate738 := TCoordinateNode.Create;
Coordinate738.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.005,1.7504,0.0055)]);
{ .SetCoord }
LineSet736.Coord := Coordinate738;
{ .SetGeometry }
Shape735.Geometry := LineSet736;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape735]);
Shape739 := TShapeNode.Create;
LineSet740 := TLineSetNode.Create;
LineSet740.SetVertexCount([2]);
ColorRGBA741 := TColorRGBANode.Create;
ColorRGBA741 := ColorRGBA75;
{ .SetColor }
LineSet740.Color := ColorRGBA741;
Coordinate742 := TCoordinateNode.Create;
Coordinate742.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0058,1.6316,0.0852)]);
{ .SetCoord }
LineSet740.Coord := Coordinate742;
{ .SetGeometry }
Shape739.Geometry := LineSet740;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape739]);
Shape743 := TShapeNode.Create;
LineSet744 := TLineSetNode.Create;
LineSet744.SetVertexCount([2]);
ColorRGBA745 := TColorRGBANode.Create;
ColorRGBA745 := ColorRGBA75;
{ .SetColor }
LineSet744.Color := ColorRGBA745;
Coordinate746 := TCoordinateNode.Create;
Coordinate746.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0237,1.6171,0.0752)]);
{ .SetCoord }
LineSet744.Coord := Coordinate746;
{ .SetGeometry }
Shape743.Geometry := LineSet744;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape743]);
Shape747 := TShapeNode.Create;
LineSet748 := TLineSetNode.Create;
LineSet748.SetVertexCount([2]);
ColorRGBA749 := TColorRGBANode.Create;
ColorRGBA749 := ColorRGBA75;
{ .SetColor }
LineSet748.Color := ColorRGBA749;
Coordinate750 := TCoordinateNode.Create;
Coordinate750.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0341,1.6171,0.0752)]);
{ .SetCoord }
LineSet748.Coord := Coordinate750;
{ .SetGeometry }
Shape747.Geometry := LineSet748;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape747]);
Shape751 := TShapeNode.Create;
LineSet752 := TLineSetNode.Create;
LineSet752.SetVertexCount([2]);
ColorRGBA753 := TColorRGBANode.Create;
ColorRGBA753 := ColorRGBA75;
{ .SetColor }
LineSet752.Color := ColorRGBA753;
Coordinate754 := TCoordinateNode.Create;
Coordinate754.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0061,1.541,0.0805)]);
{ .SetCoord }
LineSet752.Coord := Coordinate754;
{ .SetGeometry }
Shape751.Geometry := LineSet752;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape751]);
Shape755 := TShapeNode.Create;
LineSet756 := TLineSetNode.Create;
LineSet756.SetVertexCount([2]);
ColorRGBA757 := TColorRGBANode.Create;
ColorRGBA757 := ColorRGBA75;
{ .SetColor }
LineSet756.Color := ColorRGBA757;
Coordinate758 := TCoordinateNode.Create;
Coordinate758.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0646,1.6347,0.0302)]);
{ .SetCoord }
LineSet756.Coord := Coordinate758;
{ .SetGeometry }
Shape755.Geometry := LineSet756;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape755]);
Shape759 := TShapeNode.Create;
LineSet760 := TLineSetNode.Create;
LineSet760.SetVertexCount([2]);
ColorRGBA761 := TColorRGBANode.Create;
ColorRGBA761 := ColorRGBA75;
{ .SetColor }
LineSet760.Color := ColorRGBA761;
Coordinate762 := TCoordinateNode.Create;
Coordinate762.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.052,1.5529,0.0347)]);
{ .SetCoord }
LineSet760.Coord := Coordinate762;
{ .SetGeometry }
Shape759.Geometry := LineSet760;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape759]);
Shape763 := TShapeNode.Create;
LineSet764 := TLineSetNode.Create;
LineSet764.SetVertexCount([2]);
ColorRGBA765 := TColorRGBANode.Create;
ColorRGBA765 := ColorRGBA75;
{ .SetColor }
LineSet764.Color := ColorRGBA765;
Coordinate766 := TCoordinateNode.Create;
Coordinate766.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0739,1.6348,0.0282)]);
{ .SetCoord }
LineSet764.Coord := Coordinate766;
{ .SetGeometry }
Shape763.Geometry := LineSet764;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape763]);
Shape767 := TShapeNode.Create;
LineSet768 := TLineSetNode.Create;
LineSet768.SetVertexCount([2]);
ColorRGBA769 := TColorRGBANode.Create;
ColorRGBA769 := ColorRGBA75;
{ .SetColor }
LineSet768.Color := ColorRGBA769;
Coordinate770 := TCoordinateNode.Create;
Coordinate770.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0631,1.553,0.033)]);
{ .SetCoord }
LineSet768.Coord := Coordinate770;
{ .SetGeometry }
Shape767.Geometry := LineSet768;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape767]);
Shape771 := TShapeNode.Create;
LineSet772 := TLineSetNode.Create;
LineSet772.SetVertexCount([2]);
ColorRGBA773 := TColorRGBANode.Create;
ColorRGBA773 := ColorRGBA75;
{ .SetColor }
LineSet772.Color := ColorRGBA773;
Coordinate774 := TCoordinateNode.Create;
Coordinate774.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0039,1.5972,-0.0796)]);
{ .SetCoord }
LineSet772.Coord := Coordinate774;
{ .SetGeometry }
Shape771.Geometry := LineSet772;
{ .AddChildren }
HAnimSegment703.AddChildren([Shape771]);
HAnimSite775 := THAnimSiteNode.Create;
HAnimSite775.NameField := 'skull_tip';
HAnimSite775.Translation := Vector3(0.005,1.7504,0.0055);
TouchSensor776 := TTouchSensorNode.Create;
TouchSensor776.Description := 'HAnimSite skull_tip';
{ .AddChildren }
HAnimSite775.AddChildren([TouchSensor776]);
Shape777 := TShapeNode.Create;
Shape777 := Shape111;
{ .AddChildren }
HAnimSite775.AddChildren([Shape777]);
{ .AddChildren }
HAnimSegment703.AddChildren([HAnimSite775]);
HAnimSite778 := THAnimSiteNode.Create;
HAnimSite778.NameField := 'sellion_pt';
HAnimSite778.Translation := Vector3(0.0058,1.6316,0.0852);
TouchSensor779 := TTouchSensorNode.Create;
TouchSensor779.Description := 'HAnimSite sellion';
{ .AddChildren }
HAnimSite778.AddChildren([TouchSensor779]);
Shape780 := TShapeNode.Create;
Shape780 := Shape111;
{ .AddChildren }
HAnimSite778.AddChildren([Shape780]);
{ .AddChildren }
HAnimSegment703.AddChildren([HAnimSite778]);
HAnimSite781 := THAnimSiteNode.Create;
HAnimSite781.NameField := 'r_infraorbitale_pt';
HAnimSite781.Translation := Vector3(-0.0237,1.6171,0.0752);
TouchSensor782 := TTouchSensorNode.Create;
TouchSensor782.Description := 'HAnimSite r_infraorbitale';
{ .AddChildren }
HAnimSite781.AddChildren([TouchSensor782]);
Shape783 := TShapeNode.Create;
Shape783 := Shape111;
{ .AddChildren }
HAnimSite781.AddChildren([Shape783]);
{ .AddChildren }
HAnimSegment703.AddChildren([HAnimSite781]);
HAnimSite784 := THAnimSiteNode.Create;
HAnimSite784.NameField := 'l_infraorbitale_pt';
HAnimSite784.Translation := Vector3(0.0341,1.6171,0.0752);
TouchSensor785 := TTouchSensorNode.Create;
TouchSensor785.Description := 'HAnimSite l_infraorbitale';
{ .AddChildren }
HAnimSite784.AddChildren([TouchSensor785]);
Shape786 := TShapeNode.Create;
Shape786 := Shape111;
{ .AddChildren }
HAnimSite784.AddChildren([Shape786]);
{ .AddChildren }
HAnimSegment703.AddChildren([HAnimSite784]);
HAnimSite787 := THAnimSiteNode.Create;
HAnimSite787.NameField := 'supramenton_pt';
HAnimSite787.Translation := Vector3(0.0061,1.541,0.0805);
TouchSensor788 := TTouchSensorNode.Create;
TouchSensor788.Description := 'HAnimSite supramenton';
{ .AddChildren }
HAnimSite787.AddChildren([TouchSensor788]);
Shape789 := TShapeNode.Create;
Shape789 := Shape111;
{ .AddChildren }
HAnimSite787.AddChildren([Shape789]);
{ .AddChildren }
HAnimSegment703.AddChildren([HAnimSite787]);
HAnimSite790 := THAnimSiteNode.Create;
HAnimSite790.NameField := 'r_tragion_pt';
HAnimSite790.Translation := Vector3(-0.0646,1.6347,0.0302);
TouchSensor791 := TTouchSensorNode.Create;
TouchSensor791.Description := 'HAnimSite r_tragion';
{ .AddChildren }
HAnimSite790.AddChildren([TouchSensor791]);
Shape792 := TShapeNode.Create;
Shape792 := Shape111;
{ .AddChildren }
HAnimSite790.AddChildren([Shape792]);
{ .AddChildren }
HAnimSegment703.AddChildren([HAnimSite790]);
HAnimSite793 := THAnimSiteNode.Create;
HAnimSite793.NameField := 'r_gonion_pt';
HAnimSite793.Translation := Vector3(-0.052,1.5529,0.0347);
TouchSensor794 := TTouchSensorNode.Create;
TouchSensor794.Description := 'HAnimSite r_gonion';
{ .AddChildren }
HAnimSite793.AddChildren([TouchSensor794]);
Shape795 := TShapeNode.Create;
Shape795 := Shape111;
{ .AddChildren }
HAnimSite793.AddChildren([Shape795]);
{ .AddChildren }
HAnimSegment703.AddChildren([HAnimSite793]);
HAnimSite796 := THAnimSiteNode.Create;
HAnimSite796.NameField := 'l_tragion_pt';
HAnimSite796.Translation := Vector3(0.0739,1.6348,0.0282);
TouchSensor797 := TTouchSensorNode.Create;
TouchSensor797.Description := 'HAnimSite l_tragion';
{ .AddChildren }
HAnimSite796.AddChildren([TouchSensor797]);
Shape798 := TShapeNode.Create;
Shape798 := Shape111;
{ .AddChildren }
HAnimSite796.AddChildren([Shape798]);
{ .AddChildren }
HAnimSegment703.AddChildren([HAnimSite796]);
HAnimSite799 := THAnimSiteNode.Create;
HAnimSite799.NameField := 'l_gonion_pt';
HAnimSite799.Translation := Vector3(0.0631,1.553,0.033);
TouchSensor800 := TTouchSensorNode.Create;
TouchSensor800.Description := 'HAnimSite l_gonion';
{ .AddChildren }
HAnimSite799.AddChildren([TouchSensor800]);
Shape801 := TShapeNode.Create;
Shape801 := Shape111;
{ .AddChildren }
HAnimSite799.AddChildren([Shape801]);
{ .AddChildren }
HAnimSegment703.AddChildren([HAnimSite799]);
HAnimSite802 := THAnimSiteNode.Create;
HAnimSite802.NameField := 'nuchale_pt';
HAnimSite802.Translation := Vector3(0.0039,1.5972,-0.0796);
TouchSensor803 := TTouchSensorNode.Create;
TouchSensor803.Description := 'HAnimSite nuchale';
{ .AddChildren }
HAnimSite802.AddChildren([TouchSensor803]);
Shape804 := TShapeNode.Create;
Shape804 := Shape111;
{ .AddChildren }
HAnimSite802.AddChildren([Shape804]);
{ .AddChildren }
HAnimSegment703.AddChildren([HAnimSite802]);
{ .AddChildren }
HAnimJoint702.AddChildren([HAnimSegment703]);
HAnimJoint805 := THAnimJointNode.Create;
HAnimJoint805.NameField := 'l_eyeball_joint';
HAnimJoint805.Rotation := Vector4(-0.999999999999999,0,0,0.277705039416179);
HAnimJoint805.Center := Vector3(0.0336,1.6332,0.0502);
HAnimSegment806 := THAnimSegmentNode.Create;
HAnimSegment806.NameField := 'l_eyeball';
TouchSensor807 := TTouchSensorNode.Create;
TouchSensor807.Description := 'HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball';
{ .AddChildren }
HAnimSegment806.AddChildren([TouchSensor807]);
Transform808 := TTransformNode.Create;
Transform808.Translation := Vector3(0.0336,1.6332,0.0502);
Shape809 := TShapeNode.Create;
Shape809 := Shape48;
{ .AddChild }
Transform808.AddChildren([Shape809]);
{ .AddChildren }
HAnimSegment806.AddChildren([Transform808]);
Shape810 := TShapeNode.Create;
LineSet811 := TLineSetNode.Create;
LineSet811.SetVertexCount([2]);
ColorRGBA812 := TColorRGBANode.Create;
ColorRGBA812.SetColor([Vector4(0,0,1,1),Vector4(0,0,1,0.1)]);
{ .SetColor }
LineSet811.Color := ColorRGBA812;
Coordinate813 := TCoordinateNode.Create;
Coordinate813.SetPoint([Vector3(0.0336,1.6332,0.0502),Vector3(0.034,1.64,0.05)]);
{ .SetCoord }
LineSet811.Coord := Coordinate813;
{ .SetGeometry }
Shape810.Geometry := LineSet811;
{ .AddChildren }
HAnimSegment806.AddChildren([Shape810]);
HAnimSite814 := THAnimSiteNode.Create;
HAnimSite814.NameField := 'l_eyeball_site_view';
HAnimSite814.Translation := Vector3(0.034,1.64,0.05);
Viewpoint815 := TViewpointNode.Create;
Viewpoint815.Description := 'l_eyeball_site_viewpoint looking forward';
Viewpoint815.Position := Vector3(0,0,0);
Viewpoint815.Orientation := Vector4(0,1,0,3.141593);
{ .AddChildren }
HAnimSite814.AddChildren([Viewpoint815]);
Anchor816 := TAnchorNode.Create;
Anchor816.Description := 'HAnimSite Viewpoint hanim_l_eyeball_site_view';
Anchor816.SetUrl(['#hanim_l_eyeball_site_viewpoint']);
LOD817 := TLODNode.Create;
LOD817.ForceTransitions := True;
LOD817.SetRange([0.04]);
WorldInfo818 := TWorldInfoNode.Create;
WorldInfo818.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD817.AddChildren([WorldInfo818]);
Shape819 := TShapeNode.Create;
Appearance820 := TAppearanceNode.Create;
Material821 := TMaterialNode.Create;
Material821.DiffuseColor := Vector3(0,0,1);
Material821.Transparency := 0.6;
{ .SetMaterial }
Appearance820.Material := Material821;
{ .SetAppearance }
Shape819.Appearance := Appearance820;
IndexedFaceSet822 := TIndexedFaceSetNode.Create;
IndexedFaceSet822.CreaseAngle := 0.5;
IndexedFaceSet822.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate823 := TCoordinateNode.Create;
Coordinate823.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ .SetCoord }
IndexedFaceSet822.Coord := Coordinate823;
{ .SetGeometry }
Shape819.Geometry := IndexedFaceSet822;
{ .AddChildren }
LOD817.AddChildren([Shape819]);
{ .AddChildren }
Anchor816.AddChildren([LOD817]);
{ .AddChildren }
HAnimSite814.AddChildren([Anchor816]);
{ .AddChildren }
HAnimSegment806.AddChildren([HAnimSite814]);
{ .AddChildren }
HAnimJoint805.AddChildren([HAnimSegment806]);
{ .AddChildren }
HAnimJoint702.AddChildren([HAnimJoint805]);
HAnimJoint824 := THAnimJointNode.Create;
HAnimJoint824.NameField := 'l_eyelid_joint';
HAnimJoint824.Center := Vector3(0.0336,1.6332,0.0502);
HAnimSegment825 := THAnimSegmentNode.Create;
HAnimSegment825.NameField := 'l_eyelid';
TouchSensor826 := TTouchSensorNode.Create;
TouchSensor826.Description := 'HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid';
{ .AddChildren }
HAnimSegment825.AddChildren([TouchSensor826]);
Transform827 := TTransformNode.Create;
Transform827.Translation := Vector3(0.0336,1.6332,0.0502);
Shape828 := TShapeNode.Create;
Shape828 := Shape48;
{ .AddChild }
Transform827.AddChildren([Shape828]);
{ .AddChildren }
HAnimSegment825.AddChildren([Transform827]);
{ .AddChildren }
HAnimJoint824.AddChildren([HAnimSegment825]);
{ .AddChildren }
HAnimJoint702.AddChildren([HAnimJoint824]);
HAnimJoint829 := THAnimJointNode.Create;
HAnimJoint829.NameField := 'l_eyebrow_joint';
HAnimJoint829.Center := Vector3(0.0336,1.635,0.0506);
HAnimSegment830 := THAnimSegmentNode.Create;
HAnimSegment830.NameField := 'l_eyebrow';
TouchSensor831 := TTouchSensorNode.Create;
TouchSensor831.Description := 'HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow';
{ .AddChildren }
HAnimSegment830.AddChildren([TouchSensor831]);
Transform832 := TTransformNode.Create;
Transform832.Translation := Vector3(0.0336,1.635,0.0506);
Shape833 := TShapeNode.Create;
Shape833 := Shape48;
{ .AddChild }
Transform832.AddChildren([Shape833]);
{ .AddChildren }
HAnimSegment830.AddChildren([Transform832]);
{ .AddChildren }
HAnimJoint829.AddChildren([HAnimSegment830]);
{ .AddChildren }
HAnimJoint702.AddChildren([HAnimJoint829]);
HAnimJoint834 := THAnimJointNode.Create;
HAnimJoint834.NameField := 'r_eyeball_joint';
HAnimJoint834.Rotation := Vector4(-0.999999999999999,0,0,0.277705039416179);
HAnimJoint834.Center := Vector3(-0.0336,1.6332,0.0502);
HAnimSegment835 := THAnimSegmentNode.Create;
HAnimSegment835.NameField := 'r_eyeball';
TouchSensor836 := TTouchSensorNode.Create;
TouchSensor836.Description := 'HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball';
{ .AddChildren }
HAnimSegment835.AddChildren([TouchSensor836]);
Transform837 := TTransformNode.Create;
Transform837.Translation := Vector3(-0.0336,1.6332,0.0502);
Shape838 := TShapeNode.Create;
Shape838 := Shape48;
{ .AddChild }
Transform837.AddChildren([Shape838]);
{ .AddChildren }
HAnimSegment835.AddChildren([Transform837]);
Shape839 := TShapeNode.Create;
LineSet840 := TLineSetNode.Create;
LineSet840.SetVertexCount([2]);
ColorRGBA841 := TColorRGBANode.Create;
ColorRGBA841 := ColorRGBA812;
{ .SetColor }
LineSet840.Color := ColorRGBA841;
Coordinate842 := TCoordinateNode.Create;
Coordinate842.SetPoint([Vector3(-0.0336,1.6332,0.0502),Vector3(-0.034,1.64,0.05)]);
{ .SetCoord }
LineSet840.Coord := Coordinate842;
{ .SetGeometry }
Shape839.Geometry := LineSet840;
{ .AddChildren }
HAnimSegment835.AddChildren([Shape839]);
HAnimSite843 := THAnimSiteNode.Create;
HAnimSite843.NameField := 'r_eyeball_site_view';
HAnimSite843.Translation := Vector3(-0.034,1.64,0.05);
Viewpoint844 := TViewpointNode.Create;
Viewpoint844.Description := 'r_eyeball_site_viewpoint looking forward';
Viewpoint844.Position := Vector3(0,0,0);
Viewpoint844.Orientation := Vector4(0,1,0,3.141593);
{ .AddChildren }
HAnimSite843.AddChildren([Viewpoint844]);
Anchor845 := TAnchorNode.Create;
Anchor845.Description := 'HAnimSite Viewpoint hanim_r_eyeball_site_view';
Anchor845.SetUrl(['#hanim_r_eyeball_site_viewpoint']);
LOD846 := TLODNode.Create;
LOD846.ForceTransitions := True;
LOD846.SetRange([0.04]);
WorldInfo847 := TWorldInfoNode.Create;
WorldInfo847.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD846.AddChildren([WorldInfo847]);
Shape848 := TShapeNode.Create;
Shape848 := Shape819;
{ .AddChildren }
LOD846.AddChildren([Shape848]);
{ .AddChildren }
Anchor845.AddChildren([LOD846]);
{ .AddChildren }
HAnimSite843.AddChildren([Anchor845]);
{ .AddChildren }
HAnimSegment835.AddChildren([HAnimSite843]);
{ .AddChildren }
HAnimJoint834.AddChildren([HAnimSegment835]);
{ .AddChildren }
HAnimJoint702.AddChildren([HAnimJoint834]);
HAnimJoint849 := THAnimJointNode.Create;
HAnimJoint849.NameField := 'r_eyelid_joint';
HAnimJoint849.Center := Vector3(-0.0336,1.6332,0.0502);
HAnimSegment850 := THAnimSegmentNode.Create;
HAnimSegment850.NameField := 'r_eyelid';
TouchSensor851 := TTouchSensorNode.Create;
TouchSensor851.Description := 'HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid';
{ .AddChildren }
HAnimSegment850.AddChildren([TouchSensor851]);
Transform852 := TTransformNode.Create;
Transform852.Translation := Vector3(-0.0336,1.6332,0.0502);
Shape853 := TShapeNode.Create;
Shape853 := Shape48;
{ .AddChild }
Transform852.AddChildren([Shape853]);
{ .AddChildren }
HAnimSegment850.AddChildren([Transform852]);
{ .AddChildren }
HAnimJoint849.AddChildren([HAnimSegment850]);
{ .AddChildren }
HAnimJoint702.AddChildren([HAnimJoint849]);
HAnimJoint854 := THAnimJointNode.Create;
HAnimJoint854.NameField := 'r_eyebrow_joint';
HAnimJoint854.Center := Vector3(-0.0336,1.635,0.0506);
HAnimSegment855 := THAnimSegmentNode.Create;
HAnimSegment855.NameField := 'r_eyebrow';
TouchSensor856 := TTouchSensorNode.Create;
TouchSensor856.Description := 'HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow';
{ .AddChildren }
HAnimSegment855.AddChildren([TouchSensor856]);
Transform857 := TTransformNode.Create;
Transform857.Translation := Vector3(-0.0336,1.635,0.0506);
Shape858 := TShapeNode.Create;
Shape858 := Shape48;
{ .AddChild }
Transform857.AddChildren([Shape858]);
{ .AddChildren }
HAnimSegment855.AddChildren([Transform857]);
{ .AddChildren }
HAnimJoint854.AddChildren([HAnimSegment855]);
{ .AddChildren }
HAnimJoint702.AddChildren([HAnimJoint854]);
HAnimJoint859 := THAnimJointNode.Create;
HAnimJoint859.NameField := 'temporomandibular';
HAnimJoint859.Center := Vector3(0,1.63,0.015);
HAnimSegment860 := THAnimSegmentNode.Create;
HAnimSegment860.NameField := 'jaw';
TouchSensor861 := TTouchSensorNode.Create;
TouchSensor861.Description := 'HAnimJoint temporomandibular, HAnimSegment jaw';
{ .AddChildren }
HAnimSegment860.AddChildren([TouchSensor861]);
Transform862 := TTransformNode.Create;
Transform862.Translation := Vector3(0,1.63,0.015);
Shape863 := TShapeNode.Create;
Shape863 := Shape48;
{ .AddChild }
Transform862.AddChildren([Shape863]);
{ .AddChildren }
HAnimSegment860.AddChildren([Transform862]);
Shape864 := TShapeNode.Create;
LineSet865 := TLineSetNode.Create;
LineSet865.SetVertexCount([2]);
ColorRGBA866 := TColorRGBANode.Create;
ColorRGBA866 := ColorRGBA75;
{ .SetColor }
LineSet865.Color := ColorRGBA866;
Coordinate867 := TCoordinateNode.Create;
Coordinate867.SetPoint([Vector3(0,1.63,0.015),Vector3(0.045,1.63,0)]);
{ .SetCoord }
LineSet865.Coord := Coordinate867;
{ .SetGeometry }
Shape864.Geometry := LineSet865;
{ .AddChildren }
HAnimSegment860.AddChildren([Shape864]);
Shape868 := TShapeNode.Create;
LineSet869 := TLineSetNode.Create;
LineSet869.SetVertexCount([2]);
ColorRGBA870 := TColorRGBANode.Create;
ColorRGBA870 := ColorRGBA75;
{ .SetColor }
LineSet869.Color := ColorRGBA870;
Coordinate871 := TCoordinateNode.Create;
Coordinate871.SetPoint([Vector3(0,1.63,0.015),Vector3(-0.045,1.63,0)]);
{ .SetCoord }
LineSet869.Coord := Coordinate871;
{ .SetGeometry }
Shape868.Geometry := LineSet869;
{ .AddChildren }
HAnimSegment860.AddChildren([Shape868]);
HAnimSite872 := THAnimSiteNode.Create;
HAnimSite872.NameField := 'temporomandibular_l_site_pt';
HAnimSite872.Translation := Vector3(0.045,1.63,0);
TouchSensor873 := TTouchSensorNode.Create;
TouchSensor873.Description := 'HAnimSite temporomandibular_l_site';
{ .AddChildren }
HAnimSite872.AddChildren([TouchSensor873]);
Shape874 := TShapeNode.Create;
Shape874 := Shape111;
{ .AddChildren }
HAnimSite872.AddChildren([Shape874]);
{ .AddChildren }
HAnimSegment860.AddChildren([HAnimSite872]);
HAnimSite875 := THAnimSiteNode.Create;
HAnimSite875.NameField := 'temporomandibular_r_site_pt';
HAnimSite875.Translation := Vector3(-0.045,1.63,0);
TouchSensor876 := TTouchSensorNode.Create;
TouchSensor876.Description := 'HAnimSite temporomandibular_r_site';
{ .AddChildren }
HAnimSite875.AddChildren([TouchSensor876]);
Shape877 := TShapeNode.Create;
Shape877 := Shape111;
{ .AddChildren }
HAnimSite875.AddChildren([Shape877]);
{ .AddChildren }
HAnimSegment860.AddChildren([HAnimSite875]);
{ .AddChildren }
HAnimJoint859.AddChildren([HAnimSegment860]);
{ .AddChildren }
HAnimJoint702.AddChildren([HAnimJoint859]);
{ .AddChildren }
HAnimJoint693.AddChildren([HAnimJoint702]);
{ .AddChildren }
HAnimJoint684.AddChildren([HAnimJoint693]);
{ .AddChildren }
HAnimJoint675.AddChildren([HAnimJoint684]);
{ .AddChildren }
HAnimJoint666.AddChildren([HAnimJoint675]);
{ .AddChildren }
HAnimJoint657.AddChildren([HAnimJoint666]);
{ .AddChildren }
HAnimJoint648.AddChildren([HAnimJoint657]);
{ .AddChildren }
HAnimJoint625.AddChildren([HAnimJoint648]);
{ .AddChildren }
HAnimJoint594.AddChildren([HAnimJoint625]);
HAnimJoint878 := THAnimJointNode.Create;
HAnimJoint878.NameField := 'l_sternoclavicular';
HAnimJoint878.Rotation := Vector4(0,0,1.00000000000003,0.108042894183947);
HAnimJoint878.Center := Vector3(0.082,1.4488,-0.0353);
HAnimSegment879 := THAnimSegmentNode.Create;
HAnimSegment879.NameField := 'l_clavicle';
TouchSensor880 := TTouchSensorNode.Create;
TouchSensor880.Description := 'HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle';
{ .AddChildren }
HAnimSegment879.AddChildren([TouchSensor880]);
Transform881 := TTransformNode.Create;
Transform881.Translation := Vector3(0.082,1.4488,-0.0353);
Shape882 := TShapeNode.Create;
Shape882 := Shape48;
{ .AddChild }
Transform881.AddChildren([Shape882]);
{ .AddChildren }
HAnimSegment879.AddChildren([Transform881]);
Shape883 := TShapeNode.Create;
LineSet884 := TLineSetNode.Create;
LineSet884.SetVertexCount([2]);
ColorRGBA885 := TColorRGBANode.Create;
ColorRGBA885 := ColorRGBA54;
{ .SetColor }
LineSet884.Color := ColorRGBA885;
Coordinate886 := TCoordinateNode.Create;
Coordinate886.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ .SetCoord }
LineSet884.Coord := Coordinate886;
{ .SetGeometry }
Shape883.Geometry := LineSet884;
{ .AddChildren }
HAnimSegment879.AddChildren([Shape883]);
Shape887 := TShapeNode.Create;
LineSet888 := TLineSetNode.Create;
LineSet888.SetVertexCount([2]);
ColorRGBA889 := TColorRGBANode.Create;
ColorRGBA889 := ColorRGBA75;
{ .SetColor }
LineSet888.Color := ColorRGBA889;
Coordinate890 := TCoordinateNode.Create;
Coordinate890.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0271,1.4943,0.0394)]);
{ .SetCoord }
LineSet888.Coord := Coordinate890;
{ .SetGeometry }
Shape887.Geometry := LineSet888;
{ .AddChildren }
HAnimSegment879.AddChildren([Shape887]);
Shape891 := TShapeNode.Create;
LineSet892 := TLineSetNode.Create;
LineSet892.SetVertexCount([2]);
ColorRGBA893 := TColorRGBANode.Create;
ColorRGBA893 := ColorRGBA75;
{ .SetColor }
LineSet892.Color := ColorRGBA893;
Coordinate894 := TCoordinateNode.Create;
Coordinate894.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.2032,1.476,-0.049)]);
{ .SetCoord }
LineSet892.Coord := Coordinate894;
{ .SetGeometry }
Shape891.Geometry := LineSet892;
{ .AddChildren }
HAnimSegment879.AddChildren([Shape891]);
Shape895 := TShapeNode.Create;
LineSet896 := TLineSetNode.Create;
LineSet896.SetVertexCount([2]);
ColorRGBA897 := TColorRGBANode.Create;
ColorRGBA897 := ColorRGBA75;
{ .SetColor }
LineSet896.Color := ColorRGBA897;
Coordinate898 := TCoordinateNode.Create;
Coordinate898.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.1777,1.4065,-0.0075)]);
{ .SetCoord }
LineSet896.Coord := Coordinate898;
{ .SetGeometry }
Shape895.Geometry := LineSet896;
{ .AddChildren }
HAnimSegment879.AddChildren([Shape895]);
Shape899 := TShapeNode.Create;
LineSet900 := TLineSetNode.Create;
LineSet900.SetVertexCount([2]);
ColorRGBA901 := TColorRGBANode.Create;
ColorRGBA901 := ColorRGBA75;
{ .SetColor }
LineSet900.Color := ColorRGBA901;
Coordinate902 := TCoordinateNode.Create;
Coordinate902.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.1706,1.4072,-0.0875)]);
{ .SetCoord }
LineSet900.Coord := Coordinate902;
{ .SetGeometry }
Shape899.Geometry := LineSet900;
{ .AddChildren }
HAnimSegment879.AddChildren([Shape899]);
HAnimSite903 := THAnimSiteNode.Create;
HAnimSite903.NameField := 'l_clavicale_pt';
HAnimSite903.Translation := Vector3(0.0271,1.4943,0.0394);
TouchSensor904 := TTouchSensorNode.Create;
TouchSensor904.Description := 'HAnimSite l_clavicale';
{ .AddChildren }
HAnimSite903.AddChildren([TouchSensor904]);
Shape905 := TShapeNode.Create;
Shape905 := Shape111;
{ .AddChildren }
HAnimSite903.AddChildren([Shape905]);
{ .AddChildren }
HAnimSegment879.AddChildren([HAnimSite903]);
HAnimSite906 := THAnimSiteNode.Create;
HAnimSite906.NameField := 'l_acromion_pt';
HAnimSite906.Translation := Vector3(0.2032,1.476,-0.049);
TouchSensor907 := TTouchSensorNode.Create;
TouchSensor907.Description := 'HAnimSite l_acromion';
{ .AddChildren }
HAnimSite906.AddChildren([TouchSensor907]);
Shape908 := TShapeNode.Create;
Shape908 := Shape111;
{ .AddChildren }
HAnimSite906.AddChildren([Shape908]);
{ .AddChildren }
HAnimSegment879.AddChildren([HAnimSite906]);
HAnimSite909 := THAnimSiteNode.Create;
HAnimSite909.NameField := 'l_axilla_ant_pt';
HAnimSite909.Translation := Vector3(0.1777,1.4065,-0.0075);
TouchSensor910 := TTouchSensorNode.Create;
TouchSensor910.Description := 'HAnimSite l_axilla_ant';
{ .AddChildren }
HAnimSite909.AddChildren([TouchSensor910]);
Shape911 := TShapeNode.Create;
Shape911 := Shape111;
{ .AddChildren }
HAnimSite909.AddChildren([Shape911]);
{ .AddChildren }
HAnimSegment879.AddChildren([HAnimSite909]);
HAnimSite912 := THAnimSiteNode.Create;
HAnimSite912.NameField := 'l_axilla_post_pt';
HAnimSite912.Translation := Vector3(0.1706,1.4072,-0.0875);
TouchSensor913 := TTouchSensorNode.Create;
TouchSensor913.Description := 'HAnimSite l_axilla_post';
{ .AddChildren }
HAnimSite912.AddChildren([TouchSensor913]);
Shape914 := TShapeNode.Create;
Shape914 := Shape111;
{ .AddChildren }
HAnimSite912.AddChildren([Shape914]);
{ .AddChildren }
HAnimSegment879.AddChildren([HAnimSite912]);
{ .AddChildren }
HAnimJoint878.AddChildren([HAnimSegment879]);
HAnimJoint915 := THAnimJointNode.Create;
HAnimJoint915.NameField := 'l_acromioclavicular';
HAnimJoint915.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimSegment916 := THAnimSegmentNode.Create;
HAnimSegment916.NameField := 'l_scapula';
TouchSensor917 := TTouchSensorNode.Create;
TouchSensor917.Description := 'HAnimJoint l_acromioclavicular, HAnimSegment l_scapula';
{ .AddChildren }
HAnimSegment916.AddChildren([TouchSensor917]);
Transform918 := TTransformNode.Create;
Transform918.Translation := Vector3(0.0962,1.4269,-0.0424);
Shape919 := TShapeNode.Create;
Shape919 := Shape48;
{ .AddChild }
Transform918.AddChildren([Shape919]);
{ .AddChildren }
HAnimSegment916.AddChildren([Transform918]);
Shape920 := TShapeNode.Create;
LineSet921 := TLineSetNode.Create;
LineSet921.SetVertexCount([2]);
ColorRGBA922 := TColorRGBANode.Create;
ColorRGBA922 := ColorRGBA54;
{ .SetColor }
LineSet921.Color := ColorRGBA922;
Coordinate923 := TCoordinateNode.Create;
Coordinate923.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2029,1.4376,-0.0387)]);
{ .SetCoord }
LineSet921.Coord := Coordinate923;
{ .SetGeometry }
Shape920.Geometry := LineSet921;
{ .AddChildren }
HAnimSegment916.AddChildren([Shape920]);
{ .AddChildren }
HAnimJoint915.AddChildren([HAnimSegment916]);
HAnimJoint924 := THAnimJointNode.Create;
HAnimJoint924.NameField := 'l_shoulder';
HAnimJoint924.Rotation := Vector4(0,0,1,0.950777468818762);
HAnimJoint924.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimSegment925 := THAnimSegmentNode.Create;
HAnimSegment925.NameField := 'l_upperarm';
TouchSensor926 := TTouchSensorNode.Create;
TouchSensor926.Description := 'HAnimJoint l_shoulder, HAnimSegment l_upperarm';
{ .AddChildren }
HAnimSegment925.AddChildren([TouchSensor926]);
Transform927 := TTransformNode.Create;
Transform927.Translation := Vector3(0.2029,1.4376,-0.0387);
Shape928 := TShapeNode.Create;
Shape928 := Shape48;
{ .AddChild }
Transform927.AddChildren([Shape928]);
{ .AddChildren }
HAnimSegment925.AddChildren([Transform927]);
Shape929 := TShapeNode.Create;
LineSet930 := TLineSetNode.Create;
LineSet930.SetVertexCount([2]);
ColorRGBA931 := TColorRGBANode.Create;
ColorRGBA931 := ColorRGBA54;
{ .SetColor }
LineSet930.Color := ColorRGBA931;
Coordinate932 := TCoordinateNode.Create;
Coordinate932.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.2014,1.1357,-0.0682)]);
{ .SetCoord }
LineSet930.Coord := Coordinate932;
{ .SetGeometry }
Shape929.Geometry := LineSet930;
{ .AddChildren }
HAnimSegment925.AddChildren([Shape929]);
Shape933 := TShapeNode.Create;
LineSet934 := TLineSetNode.Create;
LineSet934.SetVertexCount([2]);
ColorRGBA935 := TColorRGBANode.Create;
ColorRGBA935 := ColorRGBA75;
{ .SetColor }
LineSet934.Color := ColorRGBA935;
Coordinate936 := TCoordinateNode.Create;
Coordinate936.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.228,1.1482,-0.11)]);
{ .SetCoord }
LineSet934.Coord := Coordinate936;
{ .SetGeometry }
Shape933.Geometry := LineSet934;
{ .AddChildren }
HAnimSegment925.AddChildren([Shape933]);
HAnimSite937 := THAnimSiteNode.Create;
HAnimSite937.NameField := 'l_humeral_lateral_epicn_pt';
HAnimSite937.Translation := Vector3(0.228,1.1482,-0.11);
TouchSensor938 := TTouchSensorNode.Create;
TouchSensor938.Description := 'HAnimSite l_humeral_lateral_epicn';
{ .AddChildren }
HAnimSite937.AddChildren([TouchSensor938]);
Shape939 := TShapeNode.Create;
Shape939 := Shape111;
{ .AddChildren }
HAnimSite937.AddChildren([Shape939]);
{ .AddChildren }
HAnimSegment925.AddChildren([HAnimSite937]);
{ .AddChildren }
HAnimJoint924.AddChildren([HAnimSegment925]);
HAnimJoint940 := THAnimJointNode.Create;
HAnimJoint940.NameField := 'l_elbow';
HAnimJoint940.Rotation := Vector4(-1,0,0,0.297117959005863);
HAnimJoint940.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimSegment941 := THAnimSegmentNode.Create;
HAnimSegment941.NameField := 'l_forearm';
TouchSensor942 := TTouchSensorNode.Create;
TouchSensor942.Description := 'HAnimJoint l_elbow, HAnimSegment l_forearm';
{ .AddChildren }
HAnimSegment941.AddChildren([TouchSensor942]);
Transform943 := TTransformNode.Create;
Transform943.Translation := Vector3(0.2014,1.1357,-0.0682);
Shape944 := TShapeNode.Create;
Shape944 := Shape48;
{ .AddChild }
Transform943.AddChildren([Shape944]);
{ .AddChildren }
HAnimSegment941.AddChildren([Transform943]);
Shape945 := TShapeNode.Create;
LineSet946 := TLineSetNode.Create;
LineSet946.SetVertexCount([2]);
ColorRGBA947 := TColorRGBANode.Create;
ColorRGBA947 := ColorRGBA54;
{ .SetColor }
LineSet946.Color := ColorRGBA947;
Coordinate948 := TCoordinateNode.Create;
Coordinate948.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1984,0.8663,-0.0583)]);
{ .SetCoord }
LineSet946.Coord := Coordinate948;
{ .SetGeometry }
Shape945.Geometry := LineSet946;
{ .AddChildren }
HAnimSegment941.AddChildren([Shape945]);
Shape949 := TShapeNode.Create;
LineSet950 := TLineSetNode.Create;
LineSet950.SetVertexCount([2]);
ColorRGBA951 := TColorRGBANode.Create;
ColorRGBA951 := ColorRGBA75;
{ .SetColor }
LineSet950.Color := ColorRGBA951;
Coordinate952 := TCoordinateNode.Create;
Coordinate952.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1901,0.8645,-0.0415)]);
{ .SetCoord }
LineSet950.Coord := Coordinate952;
{ .SetGeometry }
Shape949.Geometry := LineSet950;
{ .AddChildren }
HAnimSegment941.AddChildren([Shape949]);
Shape953 := TShapeNode.Create;
LineSet954 := TLineSetNode.Create;
LineSet954.SetVertexCount([2]);
ColorRGBA955 := TColorRGBANode.Create;
ColorRGBA955 := ColorRGBA75;
{ .SetColor }
LineSet954.Color := ColorRGBA955;
Coordinate956 := TCoordinateNode.Create;
Coordinate956.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1962,1.1375,-0.1123)]);
{ .SetCoord }
LineSet954.Coord := Coordinate956;
{ .SetGeometry }
Shape953.Geometry := LineSet954;
{ .AddChildren }
HAnimSegment941.AddChildren([Shape953]);
Shape957 := TShapeNode.Create;
LineSet958 := TLineSetNode.Create;
LineSet958.SetVertexCount([2]);
ColorRGBA959 := TColorRGBANode.Create;
ColorRGBA959 := ColorRGBA75;
{ .SetColor }
LineSet958.Color := ColorRGBA959;
Coordinate960 := TCoordinateNode.Create;
Coordinate960.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1735,1.1272,-0.1113)]);
{ .SetCoord }
LineSet958.Coord := Coordinate960;
{ .SetGeometry }
Shape957.Geometry := LineSet958;
{ .AddChildren }
HAnimSegment941.AddChildren([Shape957]);
Shape961 := TShapeNode.Create;
LineSet962 := TLineSetNode.Create;
LineSet962.SetVertexCount([2]);
ColorRGBA963 := TColorRGBANode.Create;
ColorRGBA963 := ColorRGBA75;
{ .SetColor }
LineSet962.Color := ColorRGBA963;
Coordinate964 := TCoordinateNode.Create;
Coordinate964.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.2182,1.1212,-0.1167)]);
{ .SetCoord }
LineSet962.Coord := Coordinate964;
{ .SetGeometry }
Shape961.Geometry := LineSet962;
{ .AddChildren }
HAnimSegment941.AddChildren([Shape961]);
HAnimSite965 := THAnimSiteNode.Create;
HAnimSite965.NameField := 'l_radial_styloid_pt';
HAnimSite965.Translation := Vector3(0.1901,0.8645,-0.0415);
TouchSensor966 := TTouchSensorNode.Create;
TouchSensor966.Description := 'HAnimSite l_radial_styloid';
{ .AddChildren }
HAnimSite965.AddChildren([TouchSensor966]);
Shape967 := TShapeNode.Create;
Shape967 := Shape111;
{ .AddChildren }
HAnimSite965.AddChildren([Shape967]);
{ .AddChildren }
HAnimSegment941.AddChildren([HAnimSite965]);
HAnimSite968 := THAnimSiteNode.Create;
HAnimSite968.NameField := 'l_olecranon_pt';
HAnimSite968.Translation := Vector3(0.1962,1.1375,-0.1123);
TouchSensor969 := TTouchSensorNode.Create;
TouchSensor969.Description := 'HAnimSite l_olecranon';
{ .AddChildren }
HAnimSite968.AddChildren([TouchSensor969]);
Shape970 := TShapeNode.Create;
Shape970 := Shape111;
{ .AddChildren }
HAnimSite968.AddChildren([Shape970]);
{ .AddChildren }
HAnimSegment941.AddChildren([HAnimSite968]);
HAnimSite971 := THAnimSiteNode.Create;
HAnimSite971.NameField := 'l_humeral_medial_epicn_pt';
HAnimSite971.Translation := Vector3(0.1735,1.1272,-0.1113);
TouchSensor972 := TTouchSensorNode.Create;
TouchSensor972.Description := 'HAnimSite l_humeral_medial_epicn';
{ .AddChildren }
HAnimSite971.AddChildren([TouchSensor972]);
Shape973 := TShapeNode.Create;
Shape973 := Shape111;
{ .AddChildren }
HAnimSite971.AddChildren([Shape973]);
{ .AddChildren }
HAnimSegment941.AddChildren([HAnimSite971]);
HAnimSite974 := THAnimSiteNode.Create;
HAnimSite974.NameField := 'l_radiale_pt';
HAnimSite974.Translation := Vector3(0.2182,1.1212,-0.1167);
TouchSensor975 := TTouchSensorNode.Create;
TouchSensor975.Description := 'HAnimSite l_radiale';
{ .AddChildren }
HAnimSite974.AddChildren([TouchSensor975]);
Shape976 := TShapeNode.Create;
Shape976 := Shape111;
{ .AddChildren }
HAnimSite974.AddChildren([Shape976]);
{ .AddChildren }
HAnimSegment941.AddChildren([HAnimSite974]);
{ .AddChildren }
HAnimJoint940.AddChildren([HAnimSegment941]);
HAnimJoint977 := THAnimJointNode.Create;
HAnimJoint977.NameField := 'l_wrist';
HAnimJoint977.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimSegment978 := THAnimSegmentNode.Create;
HAnimSegment978.NameField := 'l_hand';
TouchSensor979 := TTouchSensorNode.Create;
TouchSensor979.Description := 'HAnimJoint l_wrist, HAnimSegment l_hand';
{ .AddChildren }
HAnimSegment978.AddChildren([TouchSensor979]);
Transform980 := TTransformNode.Create;
Transform980.Translation := Vector3(0.1984,0.8663,-0.0583);
Shape981 := TShapeNode.Create;
Shape981 := Shape48;
{ .AddChild }
Transform980.AddChildren([Shape981]);
{ .AddChildren }
HAnimSegment978.AddChildren([Transform980]);
Shape982 := TShapeNode.Create;
LineSet983 := TLineSetNode.Create;
LineSet983.SetVertexCount([2]);
ColorRGBA984 := TColorRGBANode.Create;
ColorRGBA984 := ColorRGBA54;
{ .SetColor }
LineSet983.Color := ColorRGBA984;
Coordinate985 := TCoordinateNode.Create;
Coordinate985.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1924,0.8472,-0.0534)]);
{ .SetCoord }
LineSet983.Coord := Coordinate985;
{ .SetGeometry }
Shape982.Geometry := LineSet983;
{ .AddChildren }
HAnimSegment978.AddChildren([Shape982]);
Shape986 := TShapeNode.Create;
LineSet987 := TLineSetNode.Create;
LineSet987.SetVertexCount([2]);
ColorRGBA988 := TColorRGBANode.Create;
ColorRGBA988 := ColorRGBA54;
{ .SetColor }
LineSet987.Color := ColorRGBA988;
Coordinate989 := TCoordinateNode.Create;
Coordinate989.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1983,0.8024,-0.028)]);
{ .SetCoord }
LineSet987.Coord := Coordinate989;
{ .SetGeometry }
Shape986.Geometry := LineSet987;
{ .AddChildren }
HAnimSegment978.AddChildren([Shape986]);
Shape990 := TShapeNode.Create;
LineSet991 := TLineSetNode.Create;
LineSet991.SetVertexCount([2]);
ColorRGBA992 := TColorRGBANode.Create;
ColorRGBA992 := ColorRGBA54;
{ .SetColor }
LineSet991.Color := ColorRGBA992;
Coordinate993 := TCoordinateNode.Create;
Coordinate993.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1987,0.8029,-0.053)]);
{ .SetCoord }
LineSet991.Coord := Coordinate993;
{ .SetGeometry }
Shape990.Geometry := LineSet991;
{ .AddChildren }
HAnimSegment978.AddChildren([Shape990]);
Shape994 := TShapeNode.Create;
LineSet995 := TLineSetNode.Create;
LineSet995.SetVertexCount([2]);
ColorRGBA996 := TColorRGBANode.Create;
ColorRGBA996 := ColorRGBA54;
{ .SetColor }
LineSet995.Color := ColorRGBA996;
Coordinate997 := TCoordinateNode.Create;
Coordinate997.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1956,0.8019,-0.0794)]);
{ .SetCoord }
LineSet995.Coord := Coordinate997;
{ .SetGeometry }
Shape994.Geometry := LineSet995;
{ .AddChildren }
HAnimSegment978.AddChildren([Shape994]);
Shape998 := TShapeNode.Create;
LineSet999 := TLineSetNode.Create;
LineSet999.SetVertexCount([2]);
ColorRGBA1000 := TColorRGBANode.Create;
ColorRGBA1000 := ColorRGBA54;
{ .SetColor }
LineSet999.Color := ColorRGBA1000;
Coordinate1001 := TCoordinateNode.Create;
Coordinate1001.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1925,0.8066,-0.1036)]);
{ .SetCoord }
LineSet999.Coord := Coordinate1001;
{ .SetGeometry }
Shape998.Geometry := LineSet999;
{ .AddChildren }
HAnimSegment978.AddChildren([Shape998]);
Shape1002 := TShapeNode.Create;
LineSet1003 := TLineSetNode.Create;
LineSet1003.SetVertexCount([2]);
ColorRGBA1004 := TColorRGBANode.Create;
ColorRGBA1004 := ColorRGBA75;
{ .SetColor }
LineSet1003.Color := ColorRGBA1004;
Coordinate1005 := TCoordinateNode.Create;
Coordinate1005.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.2009,0.8139,-0.0237)]);
{ .SetCoord }
LineSet1003.Coord := Coordinate1005;
{ .SetGeometry }
Shape1002.Geometry := LineSet1003;
{ .AddChildren }
HAnimSegment978.AddChildren([Shape1002]);
Shape1006 := TShapeNode.Create;
LineSet1007 := TLineSetNode.Create;
LineSet1007.SetVertexCount([2]);
ColorRGBA1008 := TColorRGBANode.Create;
ColorRGBA1008 := ColorRGBA75;
{ .SetColor }
LineSet1007.Color := ColorRGBA1008;
Coordinate1009 := TCoordinateNode.Create;
Coordinate1009.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.2142,0.8529,-0.0648)]);
{ .SetCoord }
LineSet1007.Coord := Coordinate1009;
{ .SetGeometry }
Shape1006.Geometry := LineSet1007;
{ .AddChildren }
HAnimSegment978.AddChildren([Shape1006]);
Shape1010 := TShapeNode.Create;
LineSet1011 := TLineSetNode.Create;
LineSet1011.SetVertexCount([2]);
ColorRGBA1012 := TColorRGBANode.Create;
ColorRGBA1012 := ColorRGBA75;
{ .SetColor }
LineSet1011.Color := ColorRGBA1012;
Coordinate1013 := TCoordinateNode.Create;
Coordinate1013.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1929,0.786,-0.1122)]);
{ .SetCoord }
LineSet1011.Coord := Coordinate1013;
{ .SetGeometry }
Shape1010.Geometry := LineSet1011;
{ .AddChildren }
HAnimSegment978.AddChildren([Shape1010]);
Shape1014 := TShapeNode.Create;
LineSet1015 := TLineSetNode.Create;
LineSet1015.SetVertexCount([2]);
ColorRGBA1016 := TColorRGBANode.Create;
ColorRGBA1016 := ColorRGBA812;
{ .SetColor }
LineSet1015.Color := ColorRGBA1016;
Coordinate1017 := TCoordinateNode.Create;
Coordinate1017.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.3,0.75,0.45)]);
{ .SetCoord }
LineSet1015.Coord := Coordinate1017;
{ .SetGeometry }
Shape1014.Geometry := LineSet1015;
{ .AddChildren }
HAnimSegment978.AddChildren([Shape1014]);
HAnimSite1018 := THAnimSiteNode.Create;
HAnimSite1018.NameField := 'l_metacarpal_pha2_pt';
HAnimSite1018.Translation := Vector3(0.2009,0.8139,-0.0237);
TouchSensor1019 := TTouchSensorNode.Create;
TouchSensor1019.Description := 'HAnimSite l_metacarpal_pha2';
{ .AddChildren }
HAnimSite1018.AddChildren([TouchSensor1019]);
Shape1020 := TShapeNode.Create;
Shape1020 := Shape111;
{ .AddChildren }
HAnimSite1018.AddChildren([Shape1020]);
{ .AddChildren }
HAnimSegment978.AddChildren([HAnimSite1018]);
HAnimSite1021 := THAnimSiteNode.Create;
HAnimSite1021.NameField := 'l_ulnar_styloid_pt';
HAnimSite1021.Translation := Vector3(0.2142,0.8529,-0.0648);
TouchSensor1022 := TTouchSensorNode.Create;
TouchSensor1022.Description := 'HAnimSite l_ulnar_styloid';
{ .AddChildren }
HAnimSite1021.AddChildren([TouchSensor1022]);
Shape1023 := TShapeNode.Create;
Shape1023 := Shape111;
{ .AddChildren }
HAnimSite1021.AddChildren([Shape1023]);
{ .AddChildren }
HAnimSegment978.AddChildren([HAnimSite1021]);
HAnimSite1024 := THAnimSiteNode.Create;
HAnimSite1024.NameField := 'l_metacarpal_pha5_pt';
HAnimSite1024.Translation := Vector3(0.1929,0.786,-0.1122);
TouchSensor1025 := TTouchSensorNode.Create;
TouchSensor1025.Description := 'HAnimSite l_metacarpal_pha5';
{ .AddChildren }
HAnimSite1024.AddChildren([TouchSensor1025]);
Shape1026 := TShapeNode.Create;
Shape1026 := Shape111;
{ .AddChildren }
HAnimSite1024.AddChildren([Shape1026]);
{ .AddChildren }
HAnimSegment978.AddChildren([HAnimSite1024]);
HAnimSite1027 := THAnimSiteNode.Create;
HAnimSite1027.NameField := 'l_hand_front_view';
HAnimSite1027.Translation := Vector3(0.3,0.75,0.45);
Viewpoint1028 := TViewpointNode.Create;
Viewpoint1028.Description := 'left hand front';
Viewpoint1028.Position := Vector3(0,0,0);
Viewpoint1028.CenterOfRotation := Vector3(0,0.7,0);
{ .AddChildren }
HAnimSite1027.AddChildren([Viewpoint1028]);
Anchor1029 := TAnchorNode.Create;
Anchor1029.Description := 'HAnimSite Viewpoint hanim_l_hand_front_view';
Anchor1029.SetUrl(['#hanim_l_hand_front_viewpoint']);
LOD1030 := TLODNode.Create;
LOD1030.ForceTransitions := True;
LOD1030.SetRange([0.04]);
WorldInfo1031 := TWorldInfoNode.Create;
WorldInfo1031.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1030.AddChildren([WorldInfo1031]);
Shape1032 := TShapeNode.Create;
Shape1032 := Shape819;
{ .AddChildren }
LOD1030.AddChildren([Shape1032]);
{ .AddChildren }
Anchor1029.AddChildren([LOD1030]);
{ .AddChildren }
HAnimSite1027.AddChildren([Anchor1029]);
{ .AddChildren }
HAnimSegment978.AddChildren([HAnimSite1027]);
{ .AddChildren }
HAnimJoint977.AddChildren([HAnimSegment978]);
HAnimJoint1033 := THAnimJointNode.Create;
HAnimJoint1033.NameField := 'l_thumb1';
HAnimJoint1033.Rotation := Vector4(1,0,0,0.270107235459875);
HAnimJoint1033.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimSegment1034 := THAnimSegmentNode.Create;
HAnimSegment1034.NameField := 'l_thumb_metacarpal';
TouchSensor1035 := TTouchSensorNode.Create;
TouchSensor1035.Description := 'HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal';
{ .AddChildren }
HAnimSegment1034.AddChildren([TouchSensor1035]);
Transform1036 := TTransformNode.Create;
Transform1036.Translation := Vector3(0.1924,0.8472,-0.0534);
Shape1037 := TShapeNode.Create;
Shape1037 := Shape48;
{ .AddChild }
Transform1036.AddChildren([Shape1037]);
{ .AddChildren }
HAnimSegment1034.AddChildren([Transform1036]);
Shape1038 := TShapeNode.Create;
LineSet1039 := TLineSetNode.Create;
LineSet1039.SetVertexCount([2]);
ColorRGBA1040 := TColorRGBANode.Create;
ColorRGBA1040 := ColorRGBA54;
{ .SetColor }
LineSet1039.Color := ColorRGBA1040;
Coordinate1041 := TCoordinateNode.Create;
Coordinate1041.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ .SetCoord }
LineSet1039.Coord := Coordinate1041;
{ .SetGeometry }
Shape1038.Geometry := LineSet1039;
{ .AddChildren }
HAnimSegment1034.AddChildren([Shape1038]);
{ .AddChildren }
HAnimJoint1033.AddChildren([HAnimSegment1034]);
HAnimJoint1042 := THAnimJointNode.Create;
HAnimJoint1042.NameField := 'l_thumb2';
HAnimJoint1042.Center := Vector3(0.1951,0.8226,0.0246);
HAnimSegment1043 := THAnimSegmentNode.Create;
HAnimSegment1043.NameField := 'l_thumb_proximal';
TouchSensor1044 := TTouchSensorNode.Create;
TouchSensor1044.Description := 'HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal';
{ .AddChildren }
HAnimSegment1043.AddChildren([TouchSensor1044]);
Transform1045 := TTransformNode.Create;
Transform1045.Translation := Vector3(0.1951,0.8226,0.0246);
Shape1046 := TShapeNode.Create;
Shape1046 := Shape48;
{ .AddChild }
Transform1045.AddChildren([Shape1046]);
{ .AddChildren }
HAnimSegment1043.AddChildren([Transform1045]);
Shape1047 := TShapeNode.Create;
LineSet1048 := TLineSetNode.Create;
LineSet1048.SetVertexCount([2]);
ColorRGBA1049 := TColorRGBANode.Create;
ColorRGBA1049 := ColorRGBA54;
{ .SetColor }
LineSet1048.Color := ColorRGBA1049;
Coordinate1050 := TCoordinateNode.Create;
Coordinate1050.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ .SetCoord }
LineSet1048.Coord := Coordinate1050;
{ .SetGeometry }
Shape1047.Geometry := LineSet1048;
{ .AddChildren }
HAnimSegment1043.AddChildren([Shape1047]);
{ .AddChildren }
HAnimJoint1042.AddChildren([HAnimSegment1043]);
HAnimJoint1051 := THAnimJointNode.Create;
HAnimJoint1051.NameField := 'l_thumb3';
HAnimJoint1051.Center := Vector3(0.1955,0.8159,0.0464);
HAnimSegment1052 := THAnimSegmentNode.Create;
HAnimSegment1052.NameField := 'l_thumb_distal';
TouchSensor1053 := TTouchSensorNode.Create;
TouchSensor1053.Description := 'HAnimJoint l_thumb3, HAnimSegment l_thumb_distal';
{ .AddChildren }
HAnimSegment1052.AddChildren([TouchSensor1053]);
Transform1054 := TTransformNode.Create;
Transform1054.Translation := Vector3(0.1955,0.8159,0.0464);
Shape1055 := TShapeNode.Create;
Shape1055 := Shape48;
{ .AddChild }
Transform1054.AddChildren([Shape1055]);
{ .AddChildren }
HAnimSegment1052.AddChildren([Transform1054]);
Shape1056 := TShapeNode.Create;
LineSet1057 := TLineSetNode.Create;
LineSet1057.SetVertexCount([2]);
ColorRGBA1058 := TColorRGBANode.Create;
ColorRGBA1058 := ColorRGBA75;
{ .SetColor }
LineSet1057.Color := ColorRGBA1058;
Coordinate1059 := TCoordinateNode.Create;
Coordinate1059.SetPoint([Vector3(0.1955,0.8159,0.0464),Vector3(0.1982,0.8061,0.0759)]);
{ .SetCoord }
LineSet1057.Coord := Coordinate1059;
{ .SetGeometry }
Shape1056.Geometry := LineSet1057;
{ .AddChildren }
HAnimSegment1052.AddChildren([Shape1056]);
HAnimSite1060 := THAnimSiteNode.Create;
HAnimSite1060.NameField := 'l_thumb_distal_tip';
HAnimSite1060.Translation := Vector3(0.1982,0.8061,0.0759);
TouchSensor1061 := TTouchSensorNode.Create;
TouchSensor1061.Description := 'HAnimSite l_thumb_distal_tip';
{ .AddChildren }
HAnimSite1060.AddChildren([TouchSensor1061]);
Shape1062 := TShapeNode.Create;
Shape1062 := Shape111;
{ .AddChildren }
HAnimSite1060.AddChildren([Shape1062]);
{ .AddChildren }
HAnimSegment1052.AddChildren([HAnimSite1060]);
{ .AddChildren }
HAnimJoint1051.AddChildren([HAnimSegment1052]);
{ .AddChildren }
HAnimJoint1042.AddChildren([HAnimJoint1051]);
{ .AddChildren }
HAnimJoint1033.AddChildren([HAnimJoint1042]);
{ .AddChildren }
HAnimJoint977.AddChildren([HAnimJoint1033]);
HAnimJoint1063 := THAnimJointNode.Create;
HAnimJoint1063.NameField := 'l_index0';
HAnimJoint1063.Center := Vector3(0.1983,0.8024,-0.028);
HAnimSegment1064 := THAnimSegmentNode.Create;
HAnimSegment1064.NameField := 'l_index_metacarpal';
TouchSensor1065 := TTouchSensorNode.Create;
TouchSensor1065.Description := 'HAnimJoint l_index0, HAnimSegment l_index_metacarpal';
{ .AddChildren }
HAnimSegment1064.AddChildren([TouchSensor1065]);
Transform1066 := TTransformNode.Create;
Transform1066.Translation := Vector3(0.1983,0.8024,-0.028);
Shape1067 := TShapeNode.Create;
Shape1067 := Shape48;
{ .AddChild }
Transform1066.AddChildren([Shape1067]);
{ .AddChildren }
HAnimSegment1064.AddChildren([Transform1066]);
Shape1068 := TShapeNode.Create;
LineSet1069 := TLineSetNode.Create;
LineSet1069.SetVertexCount([2]);
ColorRGBA1070 := TColorRGBANode.Create;
ColorRGBA1070 := ColorRGBA54;
{ .SetColor }
LineSet1069.Color := ColorRGBA1070;
Coordinate1071 := TCoordinateNode.Create;
Coordinate1071.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ .SetCoord }
LineSet1069.Coord := Coordinate1071;
{ .SetGeometry }
Shape1068.Geometry := LineSet1069;
{ .AddChildren }
HAnimSegment1064.AddChildren([Shape1068]);
{ .AddChildren }
HAnimJoint1063.AddChildren([HAnimSegment1064]);
HAnimJoint1072 := THAnimJointNode.Create;
HAnimJoint1072.NameField := 'l_index1';
HAnimJoint1072.Center := Vector3(0.1983,0.7815,-0.028);
HAnimSegment1073 := THAnimSegmentNode.Create;
HAnimSegment1073.NameField := 'l_index_proximal';
TouchSensor1074 := TTouchSensorNode.Create;
TouchSensor1074.Description := 'HAnimJoint l_index1, HAnimSegment l_index_proximal';
{ .AddChildren }
HAnimSegment1073.AddChildren([TouchSensor1074]);
Transform1075 := TTransformNode.Create;
Transform1075.Translation := Vector3(0.1983,0.7815,-0.028);
Shape1076 := TShapeNode.Create;
Shape1076 := Shape48;
{ .AddChild }
Transform1075.AddChildren([Shape1076]);
{ .AddChildren }
HAnimSegment1073.AddChildren([Transform1075]);
Shape1077 := TShapeNode.Create;
LineSet1078 := TLineSetNode.Create;
LineSet1078.SetVertexCount([2]);
ColorRGBA1079 := TColorRGBANode.Create;
ColorRGBA1079 := ColorRGBA54;
{ .SetColor }
LineSet1078.Color := ColorRGBA1079;
Coordinate1080 := TCoordinateNode.Create;
Coordinate1080.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ .SetCoord }
LineSet1078.Coord := Coordinate1080;
{ .SetGeometry }
Shape1077.Geometry := LineSet1078;
{ .AddChildren }
HAnimSegment1073.AddChildren([Shape1077]);
{ .AddChildren }
HAnimJoint1072.AddChildren([HAnimSegment1073]);
HAnimJoint1081 := THAnimJointNode.Create;
HAnimJoint1081.NameField := 'l_index2';
HAnimJoint1081.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimSegment1082 := THAnimSegmentNode.Create;
HAnimSegment1082.NameField := 'l_index_middle';
TouchSensor1083 := TTouchSensorNode.Create;
TouchSensor1083.Description := 'HAnimJoint l_index2, HAnimSegment l_index_middle';
{ .AddChildren }
HAnimSegment1082.AddChildren([TouchSensor1083]);
Transform1084 := TTransformNode.Create;
Transform1084.Translation := Vector3(0.2017,0.7363,-0.0248);
Shape1085 := TShapeNode.Create;
Shape1085 := Shape48;
{ .AddChild }
Transform1084.AddChildren([Shape1085]);
{ .AddChildren }
HAnimSegment1082.AddChildren([Transform1084]);
Shape1086 := TShapeNode.Create;
LineSet1087 := TLineSetNode.Create;
LineSet1087.SetVertexCount([2]);
ColorRGBA1088 := TColorRGBANode.Create;
ColorRGBA1088 := ColorRGBA54;
{ .SetColor }
LineSet1087.Color := ColorRGBA1088;
Coordinate1089 := TCoordinateNode.Create;
Coordinate1089.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ .SetCoord }
LineSet1087.Coord := Coordinate1089;
{ .SetGeometry }
Shape1086.Geometry := LineSet1087;
{ .AddChildren }
HAnimSegment1082.AddChildren([Shape1086]);
{ .AddChildren }
HAnimJoint1081.AddChildren([HAnimSegment1082]);
HAnimJoint1090 := THAnimJointNode.Create;
HAnimJoint1090.NameField := 'l_index3';
HAnimJoint1090.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimSegment1091 := THAnimSegmentNode.Create;
HAnimSegment1091.NameField := 'l_index_distal';
TouchSensor1092 := TTouchSensorNode.Create;
TouchSensor1092.Description := 'HAnimJoint l_index3, HAnimSegment l_index_distal';
{ .AddChildren }
HAnimSegment1091.AddChildren([TouchSensor1092]);
Transform1093 := TTransformNode.Create;
Transform1093.Translation := Vector3(0.2028,0.7139,-0.0236);
Shape1094 := TShapeNode.Create;
Shape1094 := Shape48;
{ .AddChild }
Transform1093.AddChildren([Shape1094]);
{ .AddChildren }
HAnimSegment1091.AddChildren([Transform1093]);
Shape1095 := TShapeNode.Create;
LineSet1096 := TLineSetNode.Create;
LineSet1096.SetVertexCount([2]);
ColorRGBA1097 := TColorRGBANode.Create;
ColorRGBA1097 := ColorRGBA75;
{ .SetColor }
LineSet1096.Color := ColorRGBA1097;
Coordinate1098 := TCoordinateNode.Create;
Coordinate1098.SetPoint([Vector3(0.2028,0.7139,-0.0236),Vector3(0.2089,0.6858,-0.0245)]);
{ .SetCoord }
LineSet1096.Coord := Coordinate1098;
{ .SetGeometry }
Shape1095.Geometry := LineSet1096;
{ .AddChildren }
HAnimSegment1091.AddChildren([Shape1095]);
Shape1099 := TShapeNode.Create;
LineSet1100 := TLineSetNode.Create;
LineSet1100.SetVertexCount([2]);
ColorRGBA1101 := TColorRGBANode.Create;
ColorRGBA1101 := ColorRGBA75;
{ .SetColor }
LineSet1100.Color := ColorRGBA1101;
Coordinate1102 := TCoordinateNode.Create;
Coordinate1102.SetPoint([Vector3(0.2028,0.7139,-0.0236),Vector3(0.2056,0.6743,-0.0482)]);
{ .SetCoord }
LineSet1100.Coord := Coordinate1102;
{ .SetGeometry }
Shape1099.Geometry := LineSet1100;
{ .AddChildren }
HAnimSegment1091.AddChildren([Shape1099]);
HAnimSite1103 := THAnimSiteNode.Create;
HAnimSite1103.NameField := 'l_index_distal_tip';
HAnimSite1103.Translation := Vector3(0.2089,0.6858,-0.0245);
TouchSensor1104 := TTouchSensorNode.Create;
TouchSensor1104.Description := 'HAnimSite l_index_distal_tip';
{ .AddChildren }
HAnimSite1103.AddChildren([TouchSensor1104]);
Shape1105 := TShapeNode.Create;
Shape1105 := Shape111;
{ .AddChildren }
HAnimSite1103.AddChildren([Shape1105]);
{ .AddChildren }
HAnimSegment1091.AddChildren([HAnimSite1103]);
HAnimSite1106 := THAnimSiteNode.Create;
HAnimSite1106.NameField := 'l_dactylion_pt';
HAnimSite1106.Translation := Vector3(0.2056,0.6743,-0.0482);
TouchSensor1107 := TTouchSensorNode.Create;
TouchSensor1107.Description := 'HAnimSite l_dactylion';
{ .AddChildren }
HAnimSite1106.AddChildren([TouchSensor1107]);
Shape1108 := TShapeNode.Create;
Shape1108 := Shape111;
{ .AddChildren }
HAnimSite1106.AddChildren([Shape1108]);
{ .AddChildren }
HAnimSegment1091.AddChildren([HAnimSite1106]);
{ .AddChildren }
HAnimJoint1090.AddChildren([HAnimSegment1091]);
{ .AddChildren }
HAnimJoint1081.AddChildren([HAnimJoint1090]);
{ .AddChildren }
HAnimJoint1072.AddChildren([HAnimJoint1081]);
{ .AddChildren }
HAnimJoint1063.AddChildren([HAnimJoint1072]);
{ .AddChildren }
HAnimJoint977.AddChildren([HAnimJoint1063]);
HAnimJoint1109 := THAnimJointNode.Create;
HAnimJoint1109.NameField := 'l_middle0';
HAnimJoint1109.Center := Vector3(0.1987,0.8029,-0.053);
HAnimSegment1110 := THAnimSegmentNode.Create;
HAnimSegment1110.NameField := 'l_middle_metacarpal';
TouchSensor1111 := TTouchSensorNode.Create;
TouchSensor1111.Description := 'HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal';
{ .AddChildren }
HAnimSegment1110.AddChildren([TouchSensor1111]);
Transform1112 := TTransformNode.Create;
Transform1112.Translation := Vector3(0.1987,0.8029,-0.053);
Shape1113 := TShapeNode.Create;
Shape1113 := Shape48;
{ .AddChild }
Transform1112.AddChildren([Shape1113]);
{ .AddChildren }
HAnimSegment1110.AddChildren([Transform1112]);
Shape1114 := TShapeNode.Create;
LineSet1115 := TLineSetNode.Create;
LineSet1115.SetVertexCount([2]);
ColorRGBA1116 := TColorRGBANode.Create;
ColorRGBA1116 := ColorRGBA54;
{ .SetColor }
LineSet1115.Color := ColorRGBA1116;
Coordinate1117 := TCoordinateNode.Create;
Coordinate1117.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ .SetCoord }
LineSet1115.Coord := Coordinate1117;
{ .SetGeometry }
Shape1114.Geometry := LineSet1115;
{ .AddChildren }
HAnimSegment1110.AddChildren([Shape1114]);
{ .AddChildren }
HAnimJoint1109.AddChildren([HAnimSegment1110]);
HAnimJoint1118 := THAnimJointNode.Create;
HAnimJoint1118.NameField := 'l_middle1';
HAnimJoint1118.Center := Vector3(0.1987,0.7818,-0.053);
HAnimSegment1119 := THAnimSegmentNode.Create;
HAnimSegment1119.NameField := 'l_middle_proximal';
TouchSensor1120 := TTouchSensorNode.Create;
TouchSensor1120.Description := 'HAnimJoint l_middle1, HAnimSegment l_middle_proximal';
{ .AddChildren }
HAnimSegment1119.AddChildren([TouchSensor1120]);
Transform1121 := TTransformNode.Create;
Transform1121.Translation := Vector3(0.1987,0.7818,-0.053);
Shape1122 := TShapeNode.Create;
Shape1122 := Shape48;
{ .AddChild }
Transform1121.AddChildren([Shape1122]);
{ .AddChildren }
HAnimSegment1119.AddChildren([Transform1121]);
Shape1123 := TShapeNode.Create;
LineSet1124 := TLineSetNode.Create;
LineSet1124.SetVertexCount([2]);
ColorRGBA1125 := TColorRGBANode.Create;
ColorRGBA1125 := ColorRGBA54;
{ .SetColor }
LineSet1124.Color := ColorRGBA1125;
Coordinate1126 := TCoordinateNode.Create;
Coordinate1126.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ .SetCoord }
LineSet1124.Coord := Coordinate1126;
{ .SetGeometry }
Shape1123.Geometry := LineSet1124;
{ .AddChildren }
HAnimSegment1119.AddChildren([Shape1123]);
{ .AddChildren }
HAnimJoint1118.AddChildren([HAnimSegment1119]);
HAnimJoint1127 := THAnimJointNode.Create;
HAnimJoint1127.NameField := 'l_middle2';
HAnimJoint1127.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimSegment1128 := THAnimSegmentNode.Create;
HAnimSegment1128.NameField := 'l_middle_middle';
TouchSensor1129 := TTouchSensorNode.Create;
TouchSensor1129.Description := 'HAnimJoint l_middle2, HAnimSegment l_middle_middle';
{ .AddChildren }
HAnimSegment1128.AddChildren([TouchSensor1129]);
Transform1130 := TTransformNode.Create;
Transform1130.Translation := Vector3(0.2013,0.7273,-0.0503);
Shape1131 := TShapeNode.Create;
Shape1131 := Shape48;
{ .AddChild }
Transform1130.AddChildren([Shape1131]);
{ .AddChildren }
HAnimSegment1128.AddChildren([Transform1130]);
Shape1132 := TShapeNode.Create;
LineSet1133 := TLineSetNode.Create;
LineSet1133.SetVertexCount([2]);
ColorRGBA1134 := TColorRGBANode.Create;
ColorRGBA1134 := ColorRGBA54;
{ .SetColor }
LineSet1133.Color := ColorRGBA1134;
Coordinate1135 := TCoordinateNode.Create;
Coordinate1135.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ .SetCoord }
LineSet1133.Coord := Coordinate1135;
{ .SetGeometry }
Shape1132.Geometry := LineSet1133;
{ .AddChildren }
HAnimSegment1128.AddChildren([Shape1132]);
{ .AddChildren }
HAnimJoint1127.AddChildren([HAnimSegment1128]);
HAnimJoint1136 := THAnimJointNode.Create;
HAnimJoint1136.NameField := 'l_middle3';
HAnimJoint1136.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimSegment1137 := THAnimSegmentNode.Create;
HAnimSegment1137.NameField := 'l_middle_distal';
TouchSensor1138 := TTouchSensorNode.Create;
TouchSensor1138.Description := 'HAnimJoint l_middle3, HAnimSegment l_middle_distal';
{ .AddChildren }
HAnimSegment1137.AddChildren([TouchSensor1138]);
Transform1139 := TTransformNode.Create;
Transform1139.Translation := Vector3(0.2026,0.7011,-0.0494);
Shape1140 := TShapeNode.Create;
Shape1140 := Shape48;
{ .AddChild }
Transform1139.AddChildren([Shape1140]);
{ .AddChildren }
HAnimSegment1137.AddChildren([Transform1139]);
Shape1141 := TShapeNode.Create;
LineSet1142 := TLineSetNode.Create;
LineSet1142.SetVertexCount([2]);
ColorRGBA1143 := TColorRGBANode.Create;
ColorRGBA1143 := ColorRGBA75;
{ .SetColor }
LineSet1142.Color := ColorRGBA1143;
Coordinate1144 := TCoordinateNode.Create;
Coordinate1144.SetPoint([Vector3(0.2026,0.7011,-0.0494),Vector3(0.208,0.6731,-0.0491)]);
{ .SetCoord }
LineSet1142.Coord := Coordinate1144;
{ .SetGeometry }
Shape1141.Geometry := LineSet1142;
{ .AddChildren }
HAnimSegment1137.AddChildren([Shape1141]);
HAnimSite1145 := THAnimSiteNode.Create;
HAnimSite1145.NameField := 'l_middle_distal_tip';
HAnimSite1145.Translation := Vector3(0.208,0.6731,-0.0491);
TouchSensor1146 := TTouchSensorNode.Create;
TouchSensor1146.Description := 'HAnimSite l_middle_distal_tip';
{ .AddChildren }
HAnimSite1145.AddChildren([TouchSensor1146]);
Shape1147 := TShapeNode.Create;
Shape1147 := Shape111;
{ .AddChildren }
HAnimSite1145.AddChildren([Shape1147]);
{ .AddChildren }
HAnimSegment1137.AddChildren([HAnimSite1145]);
{ .AddChildren }
HAnimJoint1136.AddChildren([HAnimSegment1137]);
{ .AddChildren }
HAnimJoint1127.AddChildren([HAnimJoint1136]);
{ .AddChildren }
HAnimJoint1118.AddChildren([HAnimJoint1127]);
{ .AddChildren }
HAnimJoint1109.AddChildren([HAnimJoint1118]);
{ .AddChildren }
HAnimJoint977.AddChildren([HAnimJoint1109]);
HAnimJoint1148 := THAnimJointNode.Create;
HAnimJoint1148.NameField := 'l_ring0';
HAnimJoint1148.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimSegment1149 := THAnimSegmentNode.Create;
HAnimSegment1149.NameField := 'l_ring_metacarpal';
TouchSensor1150 := TTouchSensorNode.Create;
TouchSensor1150.Description := 'HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal';
{ .AddChildren }
HAnimSegment1149.AddChildren([TouchSensor1150]);
Transform1151 := TTransformNode.Create;
Transform1151.Translation := Vector3(0.1956,0.8019,-0.0794);
Shape1152 := TShapeNode.Create;
Shape1152 := Shape48;
{ .AddChild }
Transform1151.AddChildren([Shape1152]);
{ .AddChildren }
HAnimSegment1149.AddChildren([Transform1151]);
Shape1153 := TShapeNode.Create;
LineSet1154 := TLineSetNode.Create;
LineSet1154.SetVertexCount([2]);
ColorRGBA1155 := TColorRGBANode.Create;
ColorRGBA1155 := ColorRGBA54;
{ .SetColor }
LineSet1154.Color := ColorRGBA1155;
Coordinate1156 := TCoordinateNode.Create;
Coordinate1156.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ .SetCoord }
LineSet1154.Coord := Coordinate1156;
{ .SetGeometry }
Shape1153.Geometry := LineSet1154;
{ .AddChildren }
HAnimSegment1149.AddChildren([Shape1153]);
{ .AddChildren }
HAnimJoint1148.AddChildren([HAnimSegment1149]);
HAnimJoint1157 := THAnimJointNode.Create;
HAnimJoint1157.NameField := 'l_ring1';
HAnimJoint1157.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimSegment1158 := THAnimSegmentNode.Create;
HAnimSegment1158.NameField := 'l_ring_proximal';
TouchSensor1159 := TTouchSensorNode.Create;
TouchSensor1159.Description := 'HAnimJoint l_ring1, HAnimSegment l_ring_proximal';
{ .AddChildren }
HAnimSegment1158.AddChildren([TouchSensor1159]);
Transform1160 := TTransformNode.Create;
Transform1160.Translation := Vector3(0.1956,0.7815,-0.0794);
Shape1161 := TShapeNode.Create;
Shape1161 := Shape48;
{ .AddChild }
Transform1160.AddChildren([Shape1161]);
{ .AddChildren }
HAnimSegment1158.AddChildren([Transform1160]);
Shape1162 := TShapeNode.Create;
LineSet1163 := TLineSetNode.Create;
LineSet1163.SetVertexCount([2]);
ColorRGBA1164 := TColorRGBANode.Create;
ColorRGBA1164 := ColorRGBA54;
{ .SetColor }
LineSet1163.Color := ColorRGBA1164;
Coordinate1165 := TCoordinateNode.Create;
Coordinate1165.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ .SetCoord }
LineSet1163.Coord := Coordinate1165;
{ .SetGeometry }
Shape1162.Geometry := LineSet1163;
{ .AddChildren }
HAnimSegment1158.AddChildren([Shape1162]);
{ .AddChildren }
HAnimJoint1157.AddChildren([HAnimSegment1158]);
HAnimJoint1166 := THAnimJointNode.Create;
HAnimJoint1166.NameField := 'l_ring2';
HAnimJoint1166.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimSegment1167 := THAnimSegmentNode.Create;
HAnimSegment1167.NameField := 'l_ring_middle';
TouchSensor1168 := TTouchSensorNode.Create;
TouchSensor1168.Description := 'HAnimJoint l_ring2, HAnimSegment l_ring_middle';
{ .AddChildren }
HAnimSegment1167.AddChildren([TouchSensor1168]);
Transform1169 := TTransformNode.Create;
Transform1169.Translation := Vector3(0.1973,0.7287,-0.0777);
Shape1170 := TShapeNode.Create;
Shape1170 := Shape48;
{ .AddChild }
Transform1169.AddChildren([Shape1170]);
{ .AddChildren }
HAnimSegment1167.AddChildren([Transform1169]);
Shape1171 := TShapeNode.Create;
LineSet1172 := TLineSetNode.Create;
LineSet1172.SetVertexCount([2]);
ColorRGBA1173 := TColorRGBANode.Create;
ColorRGBA1173 := ColorRGBA54;
{ .SetColor }
LineSet1172.Color := ColorRGBA1173;
Coordinate1174 := TCoordinateNode.Create;
Coordinate1174.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ .SetCoord }
LineSet1172.Coord := Coordinate1174;
{ .SetGeometry }
Shape1171.Geometry := LineSet1172;
{ .AddChildren }
HAnimSegment1167.AddChildren([Shape1171]);
{ .AddChildren }
HAnimJoint1166.AddChildren([HAnimSegment1167]);
HAnimJoint1175 := THAnimJointNode.Create;
HAnimJoint1175.NameField := 'l_ring3';
HAnimJoint1175.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimSegment1176 := THAnimSegmentNode.Create;
HAnimSegment1176.NameField := 'l_ring_distal';
TouchSensor1177 := TTouchSensorNode.Create;
TouchSensor1177.Description := 'HAnimJoint l_ring3, HAnimSegment l_ring_distal';
{ .AddChildren }
HAnimSegment1176.AddChildren([TouchSensor1177]);
Transform1178 := TTransformNode.Create;
Transform1178.Translation := Vector3(0.1983,0.7045,-0.0767);
Shape1179 := TShapeNode.Create;
Shape1179 := Shape48;
{ .AddChild }
Transform1178.AddChildren([Shape1179]);
{ .AddChildren }
HAnimSegment1176.AddChildren([Transform1178]);
Shape1180 := TShapeNode.Create;
LineSet1181 := TLineSetNode.Create;
LineSet1181.SetVertexCount([2]);
ColorRGBA1182 := TColorRGBANode.Create;
ColorRGBA1182 := ColorRGBA75;
{ .SetColor }
LineSet1181.Color := ColorRGBA1182;
Coordinate1183 := TCoordinateNode.Create;
Coordinate1183.SetPoint([Vector3(0.1983,0.7045,-0.0767),Vector3(0.2035,0.675,-0.0756)]);
{ .SetCoord }
LineSet1181.Coord := Coordinate1183;
{ .SetGeometry }
Shape1180.Geometry := LineSet1181;
{ .AddChildren }
HAnimSegment1176.AddChildren([Shape1180]);
HAnimSite1184 := THAnimSiteNode.Create;
HAnimSite1184.NameField := 'l_ring_distal_tip';
HAnimSite1184.Translation := Vector3(0.2035,0.675,-0.0756);
TouchSensor1185 := TTouchSensorNode.Create;
TouchSensor1185.Description := 'HAnimSite l_ring_distal_tip';
{ .AddChildren }
HAnimSite1184.AddChildren([TouchSensor1185]);
Shape1186 := TShapeNode.Create;
Shape1186 := Shape111;
{ .AddChildren }
HAnimSite1184.AddChildren([Shape1186]);
{ .AddChildren }
HAnimSegment1176.AddChildren([HAnimSite1184]);
{ .AddChildren }
HAnimJoint1175.AddChildren([HAnimSegment1176]);
{ .AddChildren }
HAnimJoint1166.AddChildren([HAnimJoint1175]);
{ .AddChildren }
HAnimJoint1157.AddChildren([HAnimJoint1166]);
{ .AddChildren }
HAnimJoint1148.AddChildren([HAnimJoint1157]);
{ .AddChildren }
HAnimJoint977.AddChildren([HAnimJoint1148]);
HAnimJoint1187 := THAnimJointNode.Create;
HAnimJoint1187.NameField := 'l_pinky0';
HAnimJoint1187.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimSegment1188 := THAnimSegmentNode.Create;
HAnimSegment1188.NameField := 'l_pinky_metacarpal';
TouchSensor1189 := TTouchSensorNode.Create;
TouchSensor1189.Description := 'HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal';
{ .AddChildren }
HAnimSegment1188.AddChildren([TouchSensor1189]);
Transform1190 := TTransformNode.Create;
Transform1190.Translation := Vector3(0.1925,0.8066,-0.1036);
Shape1191 := TShapeNode.Create;
Shape1191 := Shape48;
{ .AddChild }
Transform1190.AddChildren([Shape1191]);
{ .AddChildren }
HAnimSegment1188.AddChildren([Transform1190]);
Shape1192 := TShapeNode.Create;
LineSet1193 := TLineSetNode.Create;
LineSet1193.SetVertexCount([2]);
ColorRGBA1194 := TColorRGBANode.Create;
ColorRGBA1194 := ColorRGBA54;
{ .SetColor }
LineSet1193.Color := ColorRGBA1194;
Coordinate1195 := TCoordinateNode.Create;
Coordinate1195.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ .SetCoord }
LineSet1193.Coord := Coordinate1195;
{ .SetGeometry }
Shape1192.Geometry := LineSet1193;
{ .AddChildren }
HAnimSegment1188.AddChildren([Shape1192]);
{ .AddChildren }
HAnimJoint1187.AddChildren([HAnimSegment1188]);
HAnimJoint1196 := THAnimJointNode.Create;
HAnimJoint1196.NameField := 'l_pinky1';
HAnimJoint1196.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimSegment1197 := THAnimSegmentNode.Create;
HAnimSegment1197.NameField := 'l_pinky_proximal';
TouchSensor1198 := TTouchSensorNode.Create;
TouchSensor1198.Description := 'HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal';
{ .AddChildren }
HAnimSegment1197.AddChildren([TouchSensor1198]);
Transform1199 := TTransformNode.Create;
Transform1199.Translation := Vector3(0.1925,0.7866,-0.1036);
Shape1200 := TShapeNode.Create;
Shape1200 := Shape48;
{ .AddChild }
Transform1199.AddChildren([Shape1200]);
{ .AddChildren }
HAnimSegment1197.AddChildren([Transform1199]);
Shape1201 := TShapeNode.Create;
LineSet1202 := TLineSetNode.Create;
LineSet1202.SetVertexCount([2]);
ColorRGBA1203 := TColorRGBANode.Create;
ColorRGBA1203 := ColorRGBA54;
{ .SetColor }
LineSet1202.Color := ColorRGBA1203;
Coordinate1204 := TCoordinateNode.Create;
Coordinate1204.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ .SetCoord }
LineSet1202.Coord := Coordinate1204;
{ .SetGeometry }
Shape1201.Geometry := LineSet1202;
{ .AddChildren }
HAnimSegment1197.AddChildren([Shape1201]);
{ .AddChildren }
HAnimJoint1196.AddChildren([HAnimSegment1197]);
HAnimJoint1205 := THAnimJointNode.Create;
HAnimJoint1205.NameField := 'l_pinky2';
HAnimJoint1205.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimSegment1206 := THAnimSegmentNode.Create;
HAnimSegment1206.NameField := 'l_pinky_middle';
TouchSensor1207 := TTouchSensorNode.Create;
TouchSensor1207.Description := 'HAnimJoint l_pinky2, HAnimSegment l_pinky_middle';
{ .AddChildren }
HAnimSegment1206.AddChildren([TouchSensor1207]);
Transform1208 := TTransformNode.Create;
Transform1208.Translation := Vector3(0.1938,0.7452,-0.1024);
Shape1209 := TShapeNode.Create;
Shape1209 := Shape48;
{ .AddChild }
Transform1208.AddChildren([Shape1209]);
{ .AddChildren }
HAnimSegment1206.AddChildren([Transform1208]);
Shape1210 := TShapeNode.Create;
LineSet1211 := TLineSetNode.Create;
LineSet1211.SetVertexCount([2]);
ColorRGBA1212 := TColorRGBANode.Create;
ColorRGBA1212 := ColorRGBA54;
{ .SetColor }
LineSet1211.Color := ColorRGBA1212;
Coordinate1213 := TCoordinateNode.Create;
Coordinate1213.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ .SetCoord }
LineSet1211.Coord := Coordinate1213;
{ .SetGeometry }
Shape1210.Geometry := LineSet1211;
{ .AddChildren }
HAnimSegment1206.AddChildren([Shape1210]);
{ .AddChildren }
HAnimJoint1205.AddChildren([HAnimSegment1206]);
HAnimJoint1214 := THAnimJointNode.Create;
HAnimJoint1214.NameField := 'l_pinky3';
HAnimJoint1214.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimSegment1215 := THAnimSegmentNode.Create;
HAnimSegment1215.NameField := 'l_pinky_distal';
TouchSensor1216 := TTouchSensorNode.Create;
TouchSensor1216.Description := 'HAnimJoint l_pinky3, HAnimSegment l_pinky_distal';
{ .AddChildren }
HAnimSegment1215.AddChildren([TouchSensor1216]);
Transform1217 := TTransformNode.Create;
Transform1217.Translation := Vector3(0.1948,0.7277,-0.1017);
Shape1218 := TShapeNode.Create;
Shape1218 := Shape48;
{ .AddChild }
Transform1217.AddChildren([Shape1218]);
{ .AddChildren }
HAnimSegment1215.AddChildren([Transform1217]);
Shape1219 := TShapeNode.Create;
LineSet1220 := TLineSetNode.Create;
LineSet1220.SetVertexCount([2]);
ColorRGBA1221 := TColorRGBANode.Create;
ColorRGBA1221 := ColorRGBA75;
{ .SetColor }
LineSet1220.Color := ColorRGBA1221;
Coordinate1222 := TCoordinateNode.Create;
Coordinate1222.SetPoint([Vector3(0.1948,0.7277,-0.1017),Vector3(0.2014,0.7009,-0.1012)]);
{ .SetCoord }
LineSet1220.Coord := Coordinate1222;
{ .SetGeometry }
Shape1219.Geometry := LineSet1220;
{ .AddChildren }
HAnimSegment1215.AddChildren([Shape1219]);
HAnimSite1223 := THAnimSiteNode.Create;
HAnimSite1223.NameField := 'l_pinky_distal_tip';
HAnimSite1223.Translation := Vector3(0.2014,0.7009,-0.1012);
TouchSensor1224 := TTouchSensorNode.Create;
TouchSensor1224.Description := 'HAnimSite l_pinky_distal_tip';
{ .AddChildren }
HAnimSite1223.AddChildren([TouchSensor1224]);
Shape1225 := TShapeNode.Create;
Shape1225 := Shape111;
{ .AddChildren }
HAnimSite1223.AddChildren([Shape1225]);
{ .AddChildren }
HAnimSegment1215.AddChildren([HAnimSite1223]);
{ .AddChildren }
HAnimJoint1214.AddChildren([HAnimSegment1215]);
{ .AddChildren }
HAnimJoint1205.AddChildren([HAnimJoint1214]);
{ .AddChildren }
HAnimJoint1196.AddChildren([HAnimJoint1205]);
{ .AddChildren }
HAnimJoint1187.AddChildren([HAnimJoint1196]);
{ .AddChildren }
HAnimJoint977.AddChildren([HAnimJoint1187]);
{ .AddChildren }
HAnimJoint940.AddChildren([HAnimJoint977]);
{ .AddChildren }
HAnimJoint924.AddChildren([HAnimJoint940]);
{ .AddChildren }
HAnimJoint915.AddChildren([HAnimJoint924]);
{ .AddChildren }
HAnimJoint878.AddChildren([HAnimJoint915]);
{ .AddChildren }
HAnimJoint594.AddChildren([HAnimJoint878]);
HAnimJoint1226 := THAnimJointNode.Create;
HAnimJoint1226.NameField := 'r_sternoclavicular';
HAnimJoint1226.Rotation := Vector4(0,0,-1.00000000000003,0.108042894183947);
HAnimJoint1226.Center := Vector3(-0.082,1.4488,-0.0353);
HAnimSegment1227 := THAnimSegmentNode.Create;
HAnimSegment1227.NameField := 'r_clavicle';
TouchSensor1228 := TTouchSensorNode.Create;
TouchSensor1228.Description := 'HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle';
{ .AddChildren }
HAnimSegment1227.AddChildren([TouchSensor1228]);
Transform1229 := TTransformNode.Create;
Transform1229.Translation := Vector3(-0.082,1.4488,-0.0353);
Shape1230 := TShapeNode.Create;
Shape1230 := Shape48;
{ .AddChild }
Transform1229.AddChildren([Shape1230]);
{ .AddChildren }
HAnimSegment1227.AddChildren([Transform1229]);
Shape1231 := TShapeNode.Create;
LineSet1232 := TLineSetNode.Create;
LineSet1232.SetVertexCount([2]);
ColorRGBA1233 := TColorRGBANode.Create;
ColorRGBA1233 := ColorRGBA54;
{ .SetColor }
LineSet1232.Color := ColorRGBA1233;
Coordinate1234 := TCoordinateNode.Create;
Coordinate1234.SetPoint([Vector3(-0.082,1.4488,-0.0353),Vector3(-0.0962,1.4269,-0.0424)]);
{ .SetCoord }
LineSet1232.Coord := Coordinate1234;
{ .SetGeometry }
Shape1231.Geometry := LineSet1232;
{ .AddChildren }
HAnimSegment1227.AddChildren([Shape1231]);
Shape1235 := TShapeNode.Create;
LineSet1236 := TLineSetNode.Create;
LineSet1236.SetVertexCount([2]);
ColorRGBA1237 := TColorRGBANode.Create;
ColorRGBA1237 := ColorRGBA75;
{ .SetColor }
LineSet1236.Color := ColorRGBA1237;
Coordinate1238 := TCoordinateNode.Create;
Coordinate1238.SetPoint([Vector3(-0.082,1.4488,-0.0353),Vector3(-0.0115,1.4943,0.04)]);
{ .SetCoord }
LineSet1236.Coord := Coordinate1238;
{ .SetGeometry }
Shape1235.Geometry := LineSet1236;
{ .AddChildren }
HAnimSegment1227.AddChildren([Shape1235]);
Shape1239 := TShapeNode.Create;
LineSet1240 := TLineSetNode.Create;
LineSet1240.SetVertexCount([2]);
ColorRGBA1241 := TColorRGBANode.Create;
ColorRGBA1241 := ColorRGBA75;
{ .SetColor }
LineSet1240.Color := ColorRGBA1241;
Coordinate1242 := TCoordinateNode.Create;
Coordinate1242.SetPoint([Vector3(-0.082,1.4488,-0.0353),Vector3(-0.1905,1.4791,-0.0431)]);
{ .SetCoord }
LineSet1240.Coord := Coordinate1242;
{ .SetGeometry }
Shape1239.Geometry := LineSet1240;
{ .AddChildren }
HAnimSegment1227.AddChildren([Shape1239]);
Shape1243 := TShapeNode.Create;
LineSet1244 := TLineSetNode.Create;
LineSet1244.SetVertexCount([2]);
ColorRGBA1245 := TColorRGBANode.Create;
ColorRGBA1245 := ColorRGBA75;
{ .SetColor }
LineSet1244.Color := ColorRGBA1245;
Coordinate1246 := TCoordinateNode.Create;
Coordinate1246.SetPoint([Vector3(-0.082,1.4488,-0.0353),Vector3(-0.1626,1.4072,-0.0031)]);
{ .SetCoord }
LineSet1244.Coord := Coordinate1246;
{ .SetGeometry }
Shape1243.Geometry := LineSet1244;
{ .AddChildren }
HAnimSegment1227.AddChildren([Shape1243]);
Shape1247 := TShapeNode.Create;
LineSet1248 := TLineSetNode.Create;
LineSet1248.SetVertexCount([2]);
ColorRGBA1249 := TColorRGBANode.Create;
ColorRGBA1249 := ColorRGBA75;
{ .SetColor }
LineSet1248.Color := ColorRGBA1249;
Coordinate1250 := TCoordinateNode.Create;
Coordinate1250.SetPoint([Vector3(-0.082,1.4488,-0.0353),Vector3(-0.1603,1.4098,-0.0826)]);
{ .SetCoord }
LineSet1248.Coord := Coordinate1250;
{ .SetGeometry }
Shape1247.Geometry := LineSet1248;
{ .AddChildren }
HAnimSegment1227.AddChildren([Shape1247]);
HAnimSite1251 := THAnimSiteNode.Create;
HAnimSite1251.NameField := 'r_clavicale_pt';
HAnimSite1251.Translation := Vector3(-0.0115,1.4943,0.04);
TouchSensor1252 := TTouchSensorNode.Create;
TouchSensor1252.Description := 'HAnimSite r_clavicale';
{ .AddChildren }
HAnimSite1251.AddChildren([TouchSensor1252]);
Shape1253 := TShapeNode.Create;
Shape1253 := Shape111;
{ .AddChildren }
HAnimSite1251.AddChildren([Shape1253]);
{ .AddChildren }
HAnimSegment1227.AddChildren([HAnimSite1251]);
HAnimSite1254 := THAnimSiteNode.Create;
HAnimSite1254.NameField := 'r_acromion_pt';
HAnimSite1254.Translation := Vector3(-0.1905,1.4791,-0.0431);
TouchSensor1255 := TTouchSensorNode.Create;
TouchSensor1255.Description := 'HAnimSite r_acromion';
{ .AddChildren }
HAnimSite1254.AddChildren([TouchSensor1255]);
Shape1256 := TShapeNode.Create;
Shape1256 := Shape111;
{ .AddChildren }
HAnimSite1254.AddChildren([Shape1256]);
{ .AddChildren }
HAnimSegment1227.AddChildren([HAnimSite1254]);
HAnimSite1257 := THAnimSiteNode.Create;
HAnimSite1257.NameField := 'r_axilla_ant_pt';
HAnimSite1257.Translation := Vector3(-0.1626,1.4072,-0.0031);
TouchSensor1258 := TTouchSensorNode.Create;
TouchSensor1258.Description := 'HAnimSite r_axilla_ant';
{ .AddChildren }
HAnimSite1257.AddChildren([TouchSensor1258]);
Shape1259 := TShapeNode.Create;
Shape1259 := Shape111;
{ .AddChildren }
HAnimSite1257.AddChildren([Shape1259]);
{ .AddChildren }
HAnimSegment1227.AddChildren([HAnimSite1257]);
HAnimSite1260 := THAnimSiteNode.Create;
HAnimSite1260.NameField := 'r_axilla_post_pt';
HAnimSite1260.Translation := Vector3(-0.1603,1.4098,-0.0826);
TouchSensor1261 := TTouchSensorNode.Create;
TouchSensor1261.Description := 'HAnimSite r_axilla_post';
{ .AddChildren }
HAnimSite1260.AddChildren([TouchSensor1261]);
Shape1262 := TShapeNode.Create;
Shape1262 := Shape111;
{ .AddChildren }
HAnimSite1260.AddChildren([Shape1262]);
{ .AddChildren }
HAnimSegment1227.AddChildren([HAnimSite1260]);
{ .AddChildren }
HAnimJoint1226.AddChildren([HAnimSegment1227]);
HAnimJoint1263 := THAnimJointNode.Create;
HAnimJoint1263.NameField := 'r_acromioclavicular';
HAnimJoint1263.Center := Vector3(-0.0962,1.4269,-0.0424);
HAnimSegment1264 := THAnimSegmentNode.Create;
HAnimSegment1264.NameField := 'r_scapula';
TouchSensor1265 := TTouchSensorNode.Create;
TouchSensor1265.Description := 'HAnimJoint r_acromioclavicular, HAnimSegment r_scapula';
{ .AddChildren }
HAnimSegment1264.AddChildren([TouchSensor1265]);
Transform1266 := TTransformNode.Create;
Transform1266.Translation := Vector3(-0.0962,1.4269,-0.0424);
Shape1267 := TShapeNode.Create;
Shape1267 := Shape48;
{ .AddChild }
Transform1266.AddChildren([Shape1267]);
{ .AddChildren }
HAnimSegment1264.AddChildren([Transform1266]);
Shape1268 := TShapeNode.Create;
LineSet1269 := TLineSetNode.Create;
LineSet1269.SetVertexCount([2]);
ColorRGBA1270 := TColorRGBANode.Create;
ColorRGBA1270 := ColorRGBA54;
{ .SetColor }
LineSet1269.Color := ColorRGBA1270;
Coordinate1271 := TCoordinateNode.Create;
Coordinate1271.SetPoint([Vector3(-0.0962,1.4269,-0.0424),Vector3(-0.2029,1.4376,-0.0387)]);
{ .SetCoord }
LineSet1269.Coord := Coordinate1271;
{ .SetGeometry }
Shape1268.Geometry := LineSet1269;
{ .AddChildren }
HAnimSegment1264.AddChildren([Shape1268]);
{ .AddChildren }
HAnimJoint1263.AddChildren([HAnimSegment1264]);
HAnimJoint1272 := THAnimJointNode.Create;
HAnimJoint1272.NameField := 'r_shoulder';
HAnimJoint1272.Rotation := Vector4(0,0,-1,0.950777468818762);
HAnimJoint1272.Center := Vector3(-0.2029,1.4376,-0.0387);
HAnimSegment1273 := THAnimSegmentNode.Create;
HAnimSegment1273.NameField := 'r_upperarm';
TouchSensor1274 := TTouchSensorNode.Create;
TouchSensor1274.Description := 'HAnimJoint r_shoulder, HAnimSegment r_upperarm';
{ .AddChildren }
HAnimSegment1273.AddChildren([TouchSensor1274]);
Transform1275 := TTransformNode.Create;
Transform1275.Translation := Vector3(-0.2029,1.4376,-0.0387);
Shape1276 := TShapeNode.Create;
Shape1276 := Shape48;
{ .AddChild }
Transform1275.AddChildren([Shape1276]);
{ .AddChildren }
HAnimSegment1273.AddChildren([Transform1275]);
Shape1277 := TShapeNode.Create;
LineSet1278 := TLineSetNode.Create;
LineSet1278.SetVertexCount([2]);
ColorRGBA1279 := TColorRGBANode.Create;
ColorRGBA1279 := ColorRGBA54;
{ .SetColor }
LineSet1278.Color := ColorRGBA1279;
Coordinate1280 := TCoordinateNode.Create;
Coordinate1280.SetPoint([Vector3(-0.2029,1.4376,-0.0387),Vector3(-0.2014,1.1357,-0.0682)]);
{ .SetCoord }
LineSet1278.Coord := Coordinate1280;
{ .SetGeometry }
Shape1277.Geometry := LineSet1278;
{ .AddChildren }
HAnimSegment1273.AddChildren([Shape1277]);
Shape1281 := TShapeNode.Create;
LineSet1282 := TLineSetNode.Create;
LineSet1282.SetVertexCount([2]);
ColorRGBA1283 := TColorRGBANode.Create;
ColorRGBA1283 := ColorRGBA75;
{ .SetColor }
LineSet1282.Color := ColorRGBA1283;
Coordinate1284 := TCoordinateNode.Create;
Coordinate1284.SetPoint([Vector3(-0.2029,1.4376,-0.0387),Vector3(-0.2224,1.1517,-0.1033)]);
{ .SetCoord }
LineSet1282.Coord := Coordinate1284;
{ .SetGeometry }
Shape1281.Geometry := LineSet1282;
{ .AddChildren }
HAnimSegment1273.AddChildren([Shape1281]);
HAnimSite1285 := THAnimSiteNode.Create;
HAnimSite1285.NameField := 'r_humeral_lateral_epicn_pt';
HAnimSite1285.Translation := Vector3(-0.2224,1.1517,-0.1033);
TouchSensor1286 := TTouchSensorNode.Create;
TouchSensor1286.Description := 'HAnimSite r_humeral_lateral_epicn';
{ .AddChildren }
HAnimSite1285.AddChildren([TouchSensor1286]);
Shape1287 := TShapeNode.Create;
Shape1287 := Shape111;
{ .AddChildren }
HAnimSite1285.AddChildren([Shape1287]);
{ .AddChildren }
HAnimSegment1273.AddChildren([HAnimSite1285]);
{ .AddChildren }
HAnimJoint1272.AddChildren([HAnimSegment1273]);
HAnimJoint1288 := THAnimJointNode.Create;
HAnimJoint1288.NameField := 'r_elbow';
HAnimJoint1288.Rotation := Vector4(-1,0,0,0.297117959005863);
HAnimJoint1288.Center := Vector3(-0.2014,1.1357,-0.0682);
HAnimSegment1289 := THAnimSegmentNode.Create;
HAnimSegment1289.NameField := 'r_forearm';
TouchSensor1290 := TTouchSensorNode.Create;
TouchSensor1290.Description := 'HAnimJoint r_elbow, HAnimSegment r_forearm';
{ .AddChildren }
HAnimSegment1289.AddChildren([TouchSensor1290]);
Transform1291 := TTransformNode.Create;
Transform1291.Translation := Vector3(-0.2014,1.1357,-0.0682);
Shape1292 := TShapeNode.Create;
Shape1292 := Shape48;
{ .AddChild }
Transform1291.AddChildren([Shape1292]);
{ .AddChildren }
HAnimSegment1289.AddChildren([Transform1291]);
Shape1293 := TShapeNode.Create;
LineSet1294 := TLineSetNode.Create;
LineSet1294.SetVertexCount([2]);
ColorRGBA1295 := TColorRGBANode.Create;
ColorRGBA1295 := ColorRGBA54;
{ .SetColor }
LineSet1294.Color := ColorRGBA1295;
Coordinate1296 := TCoordinateNode.Create;
Coordinate1296.SetPoint([Vector3(-0.2014,1.1357,-0.0682),Vector3(-0.1984,0.8663,-0.0583)]);
{ .SetCoord }
LineSet1294.Coord := Coordinate1296;
{ .SetGeometry }
Shape1293.Geometry := LineSet1294;
{ .AddChildren }
HAnimSegment1289.AddChildren([Shape1293]);
Shape1297 := TShapeNode.Create;
LineSet1298 := TLineSetNode.Create;
LineSet1298.SetVertexCount([2]);
ColorRGBA1299 := TColorRGBANode.Create;
ColorRGBA1299 := ColorRGBA75;
{ .SetColor }
LineSet1298.Color := ColorRGBA1299;
Coordinate1300 := TCoordinateNode.Create;
Coordinate1300.SetPoint([Vector3(-0.2014,1.1357,-0.0682),Vector3(-0.1884,0.8676,-0.036)]);
{ .SetCoord }
LineSet1298.Coord := Coordinate1300;
{ .SetGeometry }
Shape1297.Geometry := LineSet1298;
{ .AddChildren }
HAnimSegment1289.AddChildren([Shape1297]);
Shape1301 := TShapeNode.Create;
LineSet1302 := TLineSetNode.Create;
LineSet1302.SetVertexCount([2]);
ColorRGBA1303 := TColorRGBANode.Create;
ColorRGBA1303 := ColorRGBA75;
{ .SetColor }
LineSet1302.Color := ColorRGBA1303;
Coordinate1304 := TCoordinateNode.Create;
Coordinate1304.SetPoint([Vector3(-0.2014,1.1357,-0.0682),Vector3(-0.1907,1.1405,-0.1065)]);
{ .SetCoord }
LineSet1302.Coord := Coordinate1304;
{ .SetGeometry }
Shape1301.Geometry := LineSet1302;
{ .AddChildren }
HAnimSegment1289.AddChildren([Shape1301]);
Shape1305 := TShapeNode.Create;
LineSet1306 := TLineSetNode.Create;
LineSet1306.SetVertexCount([2]);
ColorRGBA1307 := TColorRGBANode.Create;
ColorRGBA1307 := ColorRGBA75;
{ .SetColor }
LineSet1306.Color := ColorRGBA1307;
Coordinate1308 := TCoordinateNode.Create;
Coordinate1308.SetPoint([Vector3(-0.2014,1.1357,-0.0682),Vector3(-0.168,1.1298,-0.1062)]);
{ .SetCoord }
LineSet1306.Coord := Coordinate1308;
{ .SetGeometry }
Shape1305.Geometry := LineSet1306;
{ .AddChildren }
HAnimSegment1289.AddChildren([Shape1305]);
Shape1309 := TShapeNode.Create;
LineSet1310 := TLineSetNode.Create;
LineSet1310.SetVertexCount([2]);
ColorRGBA1311 := TColorRGBANode.Create;
ColorRGBA1311 := ColorRGBA75;
{ .SetColor }
LineSet1310.Color := ColorRGBA1311;
Coordinate1312 := TCoordinateNode.Create;
Coordinate1312.SetPoint([Vector3(-0.2014,1.1357,-0.0682),Vector3(-0.213,1.1305,-0.1091)]);
{ .SetCoord }
LineSet1310.Coord := Coordinate1312;
{ .SetGeometry }
Shape1309.Geometry := LineSet1310;
{ .AddChildren }
HAnimSegment1289.AddChildren([Shape1309]);
HAnimSite1313 := THAnimSiteNode.Create;
HAnimSite1313.NameField := 'r_radial_styloid_pt';
HAnimSite1313.Translation := Vector3(-0.1884,0.8676,-0.036);
TouchSensor1314 := TTouchSensorNode.Create;
TouchSensor1314.Description := 'HAnimSite r_radial_styloid';
{ .AddChildren }
HAnimSite1313.AddChildren([TouchSensor1314]);
Shape1315 := TShapeNode.Create;
Shape1315 := Shape111;
{ .AddChildren }
HAnimSite1313.AddChildren([Shape1315]);
{ .AddChildren }
HAnimSegment1289.AddChildren([HAnimSite1313]);
HAnimSite1316 := THAnimSiteNode.Create;
HAnimSite1316.NameField := 'r_olecranon_pt';
HAnimSite1316.Translation := Vector3(-0.1907,1.1405,-0.1065);
TouchSensor1317 := TTouchSensorNode.Create;
TouchSensor1317.Description := 'HAnimSite r_olecranon';
{ .AddChildren }
HAnimSite1316.AddChildren([TouchSensor1317]);
Shape1318 := TShapeNode.Create;
Shape1318 := Shape111;
{ .AddChildren }
HAnimSite1316.AddChildren([Shape1318]);
{ .AddChildren }
HAnimSegment1289.AddChildren([HAnimSite1316]);
HAnimSite1319 := THAnimSiteNode.Create;
HAnimSite1319.NameField := 'r_humeral_medial_epicn_pt';
HAnimSite1319.Translation := Vector3(-0.168,1.1298,-0.1062);
TouchSensor1320 := TTouchSensorNode.Create;
TouchSensor1320.Description := 'HAnimSite r_humeral_medial_epicn';
{ .AddChildren }
HAnimSite1319.AddChildren([TouchSensor1320]);
Shape1321 := TShapeNode.Create;
Shape1321 := Shape111;
{ .AddChildren }
HAnimSite1319.AddChildren([Shape1321]);
{ .AddChildren }
HAnimSegment1289.AddChildren([HAnimSite1319]);
HAnimSite1322 := THAnimSiteNode.Create;
HAnimSite1322.NameField := 'r_radiale_pt';
HAnimSite1322.Translation := Vector3(-0.213,1.1305,-0.1091);
TouchSensor1323 := TTouchSensorNode.Create;
TouchSensor1323.Description := 'HAnimSite r_radiale';
{ .AddChildren }
HAnimSite1322.AddChildren([TouchSensor1323]);
Shape1324 := TShapeNode.Create;
Shape1324 := Shape111;
{ .AddChildren }
HAnimSite1322.AddChildren([Shape1324]);
{ .AddChildren }
HAnimSegment1289.AddChildren([HAnimSite1322]);
{ .AddChildren }
HAnimJoint1288.AddChildren([HAnimSegment1289]);
HAnimJoint1325 := THAnimJointNode.Create;
HAnimJoint1325.NameField := 'r_wrist';
HAnimJoint1325.Center := Vector3(-0.1984,0.8663,-0.0583);
HAnimSegment1326 := THAnimSegmentNode.Create;
HAnimSegment1326.NameField := 'r_hand';
TouchSensor1327 := TTouchSensorNode.Create;
TouchSensor1327.Description := 'HAnimJoint r_wrist, HAnimSegment r_hand';
{ .AddChildren }
HAnimSegment1326.AddChildren([TouchSensor1327]);
Transform1328 := TTransformNode.Create;
Transform1328.Translation := Vector3(-0.1984,0.8663,-0.0583);
Shape1329 := TShapeNode.Create;
Shape1329 := Shape48;
{ .AddChild }
Transform1328.AddChildren([Shape1329]);
{ .AddChildren }
HAnimSegment1326.AddChildren([Transform1328]);
Shape1330 := TShapeNode.Create;
LineSet1331 := TLineSetNode.Create;
LineSet1331.SetVertexCount([2]);
ColorRGBA1332 := TColorRGBANode.Create;
ColorRGBA1332 := ColorRGBA54;
{ .SetColor }
LineSet1331.Color := ColorRGBA1332;
Coordinate1333 := TCoordinateNode.Create;
Coordinate1333.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1924,0.8472,-0.0534)]);
{ .SetCoord }
LineSet1331.Coord := Coordinate1333;
{ .SetGeometry }
Shape1330.Geometry := LineSet1331;
{ .AddChildren }
HAnimSegment1326.AddChildren([Shape1330]);
Shape1334 := TShapeNode.Create;
LineSet1335 := TLineSetNode.Create;
LineSet1335.SetVertexCount([2]);
ColorRGBA1336 := TColorRGBANode.Create;
ColorRGBA1336 := ColorRGBA54;
{ .SetColor }
LineSet1335.Color := ColorRGBA1336;
Coordinate1337 := TCoordinateNode.Create;
Coordinate1337.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1983,0.8024,-0.028)]);
{ .SetCoord }
LineSet1335.Coord := Coordinate1337;
{ .SetGeometry }
Shape1334.Geometry := LineSet1335;
{ .AddChildren }
HAnimSegment1326.AddChildren([Shape1334]);
Shape1338 := TShapeNode.Create;
LineSet1339 := TLineSetNode.Create;
LineSet1339.SetVertexCount([2]);
ColorRGBA1340 := TColorRGBANode.Create;
ColorRGBA1340 := ColorRGBA54;
{ .SetColor }
LineSet1339.Color := ColorRGBA1340;
Coordinate1341 := TCoordinateNode.Create;
Coordinate1341.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1987,0.8029,-0.053)]);
{ .SetCoord }
LineSet1339.Coord := Coordinate1341;
{ .SetGeometry }
Shape1338.Geometry := LineSet1339;
{ .AddChildren }
HAnimSegment1326.AddChildren([Shape1338]);
Shape1342 := TShapeNode.Create;
LineSet1343 := TLineSetNode.Create;
LineSet1343.SetVertexCount([2]);
ColorRGBA1344 := TColorRGBANode.Create;
ColorRGBA1344 := ColorRGBA54;
{ .SetColor }
LineSet1343.Color := ColorRGBA1344;
Coordinate1345 := TCoordinateNode.Create;
Coordinate1345.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1956,0.8019,-0.0794)]);
{ .SetCoord }
LineSet1343.Coord := Coordinate1345;
{ .SetGeometry }
Shape1342.Geometry := LineSet1343;
{ .AddChildren }
HAnimSegment1326.AddChildren([Shape1342]);
Shape1346 := TShapeNode.Create;
LineSet1347 := TLineSetNode.Create;
LineSet1347.SetVertexCount([2]);
ColorRGBA1348 := TColorRGBANode.Create;
ColorRGBA1348 := ColorRGBA54;
{ .SetColor }
LineSet1347.Color := ColorRGBA1348;
Coordinate1349 := TCoordinateNode.Create;
Coordinate1349.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1925,0.8066,-0.1036)]);
{ .SetCoord }
LineSet1347.Coord := Coordinate1349;
{ .SetGeometry }
Shape1346.Geometry := LineSet1347;
{ .AddChildren }
HAnimSegment1326.AddChildren([Shape1346]);
Shape1350 := TShapeNode.Create;
LineSet1351 := TLineSetNode.Create;
LineSet1351.SetVertexCount([2]);
ColorRGBA1352 := TColorRGBANode.Create;
ColorRGBA1352 := ColorRGBA75;
{ .SetColor }
LineSet1351.Color := ColorRGBA1352;
Coordinate1353 := TCoordinateNode.Create;
Coordinate1353.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1977,0.8169,-0.0177)]);
{ .SetCoord }
LineSet1351.Coord := Coordinate1353;
{ .SetGeometry }
Shape1350.Geometry := LineSet1351;
{ .AddChildren }
HAnimSegment1326.AddChildren([Shape1350]);
Shape1354 := TShapeNode.Create;
LineSet1355 := TLineSetNode.Create;
LineSet1355.SetVertexCount([2]);
ColorRGBA1356 := TColorRGBANode.Create;
ColorRGBA1356 := ColorRGBA75;
{ .SetColor }
LineSet1355.Color := ColorRGBA1356;
Coordinate1357 := TCoordinateNode.Create;
Coordinate1357.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.2117,0.8562,-0.0584)]);
{ .SetCoord }
LineSet1355.Coord := Coordinate1357;
{ .SetGeometry }
Shape1354.Geometry := LineSet1355;
{ .AddChildren }
HAnimSegment1326.AddChildren([Shape1354]);
Shape1358 := TShapeNode.Create;
LineSet1359 := TLineSetNode.Create;
LineSet1359.SetVertexCount([2]);
ColorRGBA1360 := TColorRGBANode.Create;
ColorRGBA1360 := ColorRGBA75;
{ .SetColor }
LineSet1359.Color := ColorRGBA1360;
Coordinate1361 := TCoordinateNode.Create;
Coordinate1361.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1929,0.789,-0.1064)]);
{ .SetCoord }
LineSet1359.Coord := Coordinate1361;
{ .SetGeometry }
Shape1358.Geometry := LineSet1359;
{ .AddChildren }
HAnimSegment1326.AddChildren([Shape1358]);
Shape1362 := TShapeNode.Create;
LineSet1363 := TLineSetNode.Create;
LineSet1363.SetVertexCount([2]);
ColorRGBA1364 := TColorRGBANode.Create;
ColorRGBA1364 := ColorRGBA812;
{ .SetColor }
LineSet1363.Color := ColorRGBA1364;
Coordinate1365 := TCoordinateNode.Create;
Coordinate1365.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.3,0.75,0.45)]);
{ .SetCoord }
LineSet1363.Coord := Coordinate1365;
{ .SetGeometry }
Shape1362.Geometry := LineSet1363;
{ .AddChildren }
HAnimSegment1326.AddChildren([Shape1362]);
HAnimSite1366 := THAnimSiteNode.Create;
HAnimSite1366.NameField := 'r_metacarpal_pha2_pt';
HAnimSite1366.Translation := Vector3(-0.1977,0.8169,-0.0177);
TouchSensor1367 := TTouchSensorNode.Create;
TouchSensor1367.Description := 'HAnimSite r_metacarpal_pha2';
{ .AddChildren }
HAnimSite1366.AddChildren([TouchSensor1367]);
Shape1368 := TShapeNode.Create;
Shape1368 := Shape111;
{ .AddChildren }
HAnimSite1366.AddChildren([Shape1368]);
{ .AddChildren }
HAnimSegment1326.AddChildren([HAnimSite1366]);
HAnimSite1369 := THAnimSiteNode.Create;
HAnimSite1369.NameField := 'r_ulnar_styloid_pt';
HAnimSite1369.Translation := Vector3(-0.2117,0.8562,-0.0584);
TouchSensor1370 := TTouchSensorNode.Create;
TouchSensor1370.Description := 'HAnimSite r_ulnar_styloid';
{ .AddChildren }
HAnimSite1369.AddChildren([TouchSensor1370]);
Shape1371 := TShapeNode.Create;
Shape1371 := Shape111;
{ .AddChildren }
HAnimSite1369.AddChildren([Shape1371]);
{ .AddChildren }
HAnimSegment1326.AddChildren([HAnimSite1369]);
HAnimSite1372 := THAnimSiteNode.Create;
HAnimSite1372.NameField := 'r_metacarpal_pha5_pt';
HAnimSite1372.Translation := Vector3(-0.1929,0.789,-0.1064);
TouchSensor1373 := TTouchSensorNode.Create;
TouchSensor1373.Description := 'HAnimSite r_metacarpal_pha5';
{ .AddChildren }
HAnimSite1372.AddChildren([TouchSensor1373]);
Shape1374 := TShapeNode.Create;
Shape1374 := Shape111;
{ .AddChildren }
HAnimSite1372.AddChildren([Shape1374]);
{ .AddChildren }
HAnimSegment1326.AddChildren([HAnimSite1372]);
HAnimSite1375 := THAnimSiteNode.Create;
HAnimSite1375.NameField := 'r_hand_front_view';
HAnimSite1375.Translation := Vector3(-0.3,0.75,0.45);
Viewpoint1376 := TViewpointNode.Create;
Viewpoint1376.Description := 'right hand front';
Viewpoint1376.Position := Vector3(0,0,0);
Viewpoint1376.CenterOfRotation := Vector3(0,0.7,0);
{ .AddChildren }
HAnimSite1375.AddChildren([Viewpoint1376]);
Anchor1377 := TAnchorNode.Create;
Anchor1377.Description := 'HAnimSite Viewpoint hanim_r_hand_front_view';
Anchor1377.SetUrl(['#hanim_r_hand_front_viewpoint']);
LOD1378 := TLODNode.Create;
LOD1378.ForceTransitions := True;
LOD1378.SetRange([0.04]);
WorldInfo1379 := TWorldInfoNode.Create;
WorldInfo1379.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1378.AddChildren([WorldInfo1379]);
Shape1380 := TShapeNode.Create;
Shape1380 := Shape819;
{ .AddChildren }
LOD1378.AddChildren([Shape1380]);
{ .AddChildren }
Anchor1377.AddChildren([LOD1378]);
{ .AddChildren }
HAnimSite1375.AddChildren([Anchor1377]);
{ .AddChildren }
HAnimSegment1326.AddChildren([HAnimSite1375]);
{ .AddChildren }
HAnimJoint1325.AddChildren([HAnimSegment1326]);
HAnimJoint1381 := THAnimJointNode.Create;
HAnimJoint1381.NameField := 'r_thumb1';
HAnimJoint1381.Rotation := Vector4(1,0,0,0.270107235459875);
HAnimJoint1381.Center := Vector3(-0.1924,0.8472,-0.0534);
HAnimSegment1382 := THAnimSegmentNode.Create;
HAnimSegment1382.NameField := 'r_thumb_metacarpal';
TouchSensor1383 := TTouchSensorNode.Create;
TouchSensor1383.Description := 'HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal';
{ .AddChildren }
HAnimSegment1382.AddChildren([TouchSensor1383]);
Transform1384 := TTransformNode.Create;
Transform1384.Translation := Vector3(-0.1924,0.8472,-0.0534);
Shape1385 := TShapeNode.Create;
Shape1385 := Shape48;
{ .AddChild }
Transform1384.AddChildren([Shape1385]);
{ .AddChildren }
HAnimSegment1382.AddChildren([Transform1384]);
Shape1386 := TShapeNode.Create;
LineSet1387 := TLineSetNode.Create;
LineSet1387.SetVertexCount([2]);
ColorRGBA1388 := TColorRGBANode.Create;
ColorRGBA1388 := ColorRGBA54;
{ .SetColor }
LineSet1387.Color := ColorRGBA1388;
Coordinate1389 := TCoordinateNode.Create;
Coordinate1389.SetPoint([Vector3(-0.1924,0.8472,-0.0534),Vector3(-0.1951,0.8226,0.0246)]);
{ .SetCoord }
LineSet1387.Coord := Coordinate1389;
{ .SetGeometry }
Shape1386.Geometry := LineSet1387;
{ .AddChildren }
HAnimSegment1382.AddChildren([Shape1386]);
{ .AddChildren }
HAnimJoint1381.AddChildren([HAnimSegment1382]);
HAnimJoint1390 := THAnimJointNode.Create;
HAnimJoint1390.NameField := 'r_thumb2';
HAnimJoint1390.Center := Vector3(-0.1951,0.8226,0.0246);
HAnimSegment1391 := THAnimSegmentNode.Create;
HAnimSegment1391.NameField := 'r_thumb_proximal';
TouchSensor1392 := TTouchSensorNode.Create;
TouchSensor1392.Description := 'HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal';
{ .AddChildren }
HAnimSegment1391.AddChildren([TouchSensor1392]);
Transform1393 := TTransformNode.Create;
Transform1393.Translation := Vector3(-0.1951,0.8226,0.0246);
Shape1394 := TShapeNode.Create;
Shape1394 := Shape48;
{ .AddChild }
Transform1393.AddChildren([Shape1394]);
{ .AddChildren }
HAnimSegment1391.AddChildren([Transform1393]);
Shape1395 := TShapeNode.Create;
LineSet1396 := TLineSetNode.Create;
LineSet1396.SetVertexCount([2]);
ColorRGBA1397 := TColorRGBANode.Create;
ColorRGBA1397 := ColorRGBA54;
{ .SetColor }
LineSet1396.Color := ColorRGBA1397;
Coordinate1398 := TCoordinateNode.Create;
Coordinate1398.SetPoint([Vector3(-0.1951,0.8226,0.0246),Vector3(-0.1955,0.8159,0.0464)]);
{ .SetCoord }
LineSet1396.Coord := Coordinate1398;
{ .SetGeometry }
Shape1395.Geometry := LineSet1396;
{ .AddChildren }
HAnimSegment1391.AddChildren([Shape1395]);
{ .AddChildren }
HAnimJoint1390.AddChildren([HAnimSegment1391]);
HAnimJoint1399 := THAnimJointNode.Create;
HAnimJoint1399.NameField := 'r_thumb3';
HAnimJoint1399.Center := Vector3(-0.1955,0.8159,0.0464);
HAnimSegment1400 := THAnimSegmentNode.Create;
HAnimSegment1400.NameField := 'r_thumb_distal';
TouchSensor1401 := TTouchSensorNode.Create;
TouchSensor1401.Description := 'HAnimJoint r_thumb3, HAnimSegment r_thumb_distal';
{ .AddChildren }
HAnimSegment1400.AddChildren([TouchSensor1401]);
Transform1402 := TTransformNode.Create;
Transform1402.Translation := Vector3(-0.1955,0.8159,0.0464);
Shape1403 := TShapeNode.Create;
Shape1403 := Shape48;
{ .AddChild }
Transform1402.AddChildren([Shape1403]);
{ .AddChildren }
HAnimSegment1400.AddChildren([Transform1402]);
Shape1404 := TShapeNode.Create;
LineSet1405 := TLineSetNode.Create;
LineSet1405.SetVertexCount([2]);
ColorRGBA1406 := TColorRGBANode.Create;
ColorRGBA1406 := ColorRGBA75;
{ .SetColor }
LineSet1405.Color := ColorRGBA1406;
Coordinate1407 := TCoordinateNode.Create;
Coordinate1407.SetPoint([Vector3(-0.1955,0.8159,0.0464),Vector3(-0.1869,0.809,0.082)]);
{ .SetCoord }
LineSet1405.Coord := Coordinate1407;
{ .SetGeometry }
Shape1404.Geometry := LineSet1405;
{ .AddChildren }
HAnimSegment1400.AddChildren([Shape1404]);
HAnimSite1408 := THAnimSiteNode.Create;
HAnimSite1408.NameField := 'r_thumb_distal_tip';
HAnimSite1408.Translation := Vector3(-0.1869,0.809,0.082);
TouchSensor1409 := TTouchSensorNode.Create;
TouchSensor1409.Description := 'HAnimSite r_thumb_distal_tip';
{ .AddChildren }
HAnimSite1408.AddChildren([TouchSensor1409]);
Shape1410 := TShapeNode.Create;
Shape1410 := Shape111;
{ .AddChildren }
HAnimSite1408.AddChildren([Shape1410]);
{ .AddChildren }
HAnimSegment1400.AddChildren([HAnimSite1408]);
{ .AddChildren }
HAnimJoint1399.AddChildren([HAnimSegment1400]);
{ .AddChildren }
HAnimJoint1390.AddChildren([HAnimJoint1399]);
{ .AddChildren }
HAnimJoint1381.AddChildren([HAnimJoint1390]);
{ .AddChildren }
HAnimJoint1325.AddChildren([HAnimJoint1381]);
HAnimJoint1411 := THAnimJointNode.Create;
HAnimJoint1411.NameField := 'r_index0';
HAnimJoint1411.Center := Vector3(-0.1983,0.8024,-0.028);
HAnimSegment1412 := THAnimSegmentNode.Create;
HAnimSegment1412.NameField := 'r_index_metacarpal';
TouchSensor1413 := TTouchSensorNode.Create;
TouchSensor1413.Description := 'HAnimJoint r_index0, HAnimSegment r_index_metacarpal';
{ .AddChildren }
HAnimSegment1412.AddChildren([TouchSensor1413]);
Transform1414 := TTransformNode.Create;
Transform1414.Translation := Vector3(-0.1983,0.8024,-0.028);
Shape1415 := TShapeNode.Create;
Shape1415 := Shape48;
{ .AddChild }
Transform1414.AddChildren([Shape1415]);
{ .AddChildren }
HAnimSegment1412.AddChildren([Transform1414]);
Shape1416 := TShapeNode.Create;
LineSet1417 := TLineSetNode.Create;
LineSet1417.SetVertexCount([2]);
ColorRGBA1418 := TColorRGBANode.Create;
ColorRGBA1418 := ColorRGBA54;
{ .SetColor }
LineSet1417.Color := ColorRGBA1418;
Coordinate1419 := TCoordinateNode.Create;
Coordinate1419.SetPoint([Vector3(-0.1983,0.8024,-0.028),Vector3(-0.1983,0.7815,-0.028)]);
{ .SetCoord }
LineSet1417.Coord := Coordinate1419;
{ .SetGeometry }
Shape1416.Geometry := LineSet1417;
{ .AddChildren }
HAnimSegment1412.AddChildren([Shape1416]);
{ .AddChildren }
HAnimJoint1411.AddChildren([HAnimSegment1412]);
HAnimJoint1420 := THAnimJointNode.Create;
HAnimJoint1420.NameField := 'r_index1';
HAnimJoint1420.Rotation := Vector4(0,0,1.00000000000003,0.111082015766469);
HAnimJoint1420.Center := Vector3(-0.1983,0.7815,-0.028);
HAnimSegment1421 := THAnimSegmentNode.Create;
HAnimSegment1421.NameField := 'r_index_proximal';
TouchSensor1422 := TTouchSensorNode.Create;
TouchSensor1422.Description := 'HAnimJoint r_index1, HAnimSegment r_index_proximal';
{ .AddChildren }
HAnimSegment1421.AddChildren([TouchSensor1422]);
Transform1423 := TTransformNode.Create;
Transform1423.Translation := Vector3(-0.1983,0.7815,-0.028);
Shape1424 := TShapeNode.Create;
Shape1424 := Shape48;
{ .AddChild }
Transform1423.AddChildren([Shape1424]);
{ .AddChildren }
HAnimSegment1421.AddChildren([Transform1423]);
Shape1425 := TShapeNode.Create;
LineSet1426 := TLineSetNode.Create;
LineSet1426.SetVertexCount([2]);
ColorRGBA1427 := TColorRGBANode.Create;
ColorRGBA1427 := ColorRGBA54;
{ .SetColor }
LineSet1426.Color := ColorRGBA1427;
Coordinate1428 := TCoordinateNode.Create;
Coordinate1428.SetPoint([Vector3(-0.1983,0.7815,-0.028),Vector3(-0.2017,0.7363,-0.0248)]);
{ .SetCoord }
LineSet1426.Coord := Coordinate1428;
{ .SetGeometry }
Shape1425.Geometry := LineSet1426;
{ .AddChildren }
HAnimSegment1421.AddChildren([Shape1425]);
{ .AddChildren }
HAnimJoint1420.AddChildren([HAnimSegment1421]);
HAnimJoint1429 := THAnimJointNode.Create;
HAnimJoint1429.NameField := 'r_index2';
HAnimJoint1429.Rotation := Vector4(0,0,0.999999999999999,0.391134387386823);
HAnimJoint1429.Center := Vector3(-0.2017,0.7363,-0.0248);
HAnimSegment1430 := THAnimSegmentNode.Create;
HAnimSegment1430.NameField := 'r_index_middle';
TouchSensor1431 := TTouchSensorNode.Create;
TouchSensor1431.Description := 'HAnimJoint r_index2, HAnimSegment r_index_middle';
{ .AddChildren }
HAnimSegment1430.AddChildren([TouchSensor1431]);
Transform1432 := TTransformNode.Create;
Transform1432.Translation := Vector3(-0.2017,0.7363,-0.0248);
Shape1433 := TShapeNode.Create;
Shape1433 := Shape48;
{ .AddChild }
Transform1432.AddChildren([Shape1433]);
{ .AddChildren }
HAnimSegment1430.AddChildren([Transform1432]);
Shape1434 := TShapeNode.Create;
LineSet1435 := TLineSetNode.Create;
LineSet1435.SetVertexCount([2]);
ColorRGBA1436 := TColorRGBANode.Create;
ColorRGBA1436 := ColorRGBA54;
{ .SetColor }
LineSet1435.Color := ColorRGBA1436;
Coordinate1437 := TCoordinateNode.Create;
Coordinate1437.SetPoint([Vector3(-0.2017,0.7363,-0.0248),Vector3(-0.2028,0.7139,-0.0236)]);
{ .SetCoord }
LineSet1435.Coord := Coordinate1437;
{ .SetGeometry }
Shape1434.Geometry := LineSet1435;
{ .AddChildren }
HAnimSegment1430.AddChildren([Shape1434]);
{ .AddChildren }
HAnimJoint1429.AddChildren([HAnimSegment1430]);
HAnimJoint1438 := THAnimJointNode.Create;
HAnimJoint1438.NameField := 'r_index3';
HAnimJoint1438.Rotation := Vector4(0,0,0.999999999999997,0.211082015766472);
HAnimJoint1438.Center := Vector3(-0.2028,0.7139,-0.0236);
HAnimSegment1439 := THAnimSegmentNode.Create;
HAnimSegment1439.NameField := 'r_index_distal';
TouchSensor1440 := TTouchSensorNode.Create;
TouchSensor1440.Description := 'HAnimJoint r_index3, HAnimSegment r_index_distal';
{ .AddChildren }
HAnimSegment1439.AddChildren([TouchSensor1440]);
Transform1441 := TTransformNode.Create;
Transform1441.Translation := Vector3(-0.2028,0.7139,-0.0236);
Shape1442 := TShapeNode.Create;
Shape1442 := Shape48;
{ .AddChild }
Transform1441.AddChildren([Shape1442]);
{ .AddChildren }
HAnimSegment1439.AddChildren([Transform1441]);
Shape1443 := TShapeNode.Create;
LineSet1444 := TLineSetNode.Create;
LineSet1444.SetVertexCount([2]);
ColorRGBA1445 := TColorRGBANode.Create;
ColorRGBA1445 := ColorRGBA75;
{ .SetColor }
LineSet1444.Color := ColorRGBA1445;
Coordinate1446 := TCoordinateNode.Create;
Coordinate1446.SetPoint([Vector3(-0.2028,0.7139,-0.0236),Vector3(-0.198,0.6883,-0.018)]);
{ .SetCoord }
LineSet1444.Coord := Coordinate1446;
{ .SetGeometry }
Shape1443.Geometry := LineSet1444;
{ .AddChildren }
HAnimSegment1439.AddChildren([Shape1443]);
Shape1447 := TShapeNode.Create;
LineSet1448 := TLineSetNode.Create;
LineSet1448.SetVertexCount([2]);
ColorRGBA1449 := TColorRGBANode.Create;
ColorRGBA1449 := ColorRGBA75;
{ .SetColor }
LineSet1448.Color := ColorRGBA1449;
Coordinate1450 := TCoordinateNode.Create;
Coordinate1450.SetPoint([Vector3(-0.2028,0.7139,-0.0236),Vector3(-0.1941,0.6772,-0.0423)]);
{ .SetCoord }
LineSet1448.Coord := Coordinate1450;
{ .SetGeometry }
Shape1447.Geometry := LineSet1448;
{ .AddChildren }
HAnimSegment1439.AddChildren([Shape1447]);
HAnimSite1451 := THAnimSiteNode.Create;
HAnimSite1451.NameField := 'r_index_distal_tip';
HAnimSite1451.Translation := Vector3(-0.198,0.6883,-0.018);
TouchSensor1452 := TTouchSensorNode.Create;
TouchSensor1452.Description := 'HAnimSite r_index_distal_tip';
{ .AddChildren }
HAnimSite1451.AddChildren([TouchSensor1452]);
Shape1453 := TShapeNode.Create;
Shape1453 := Shape111;
{ .AddChildren }
HAnimSite1451.AddChildren([Shape1453]);
{ .AddChildren }
HAnimSegment1439.AddChildren([HAnimSite1451]);
HAnimSite1454 := THAnimSiteNode.Create;
HAnimSite1454.NameField := 'r_dactylion_pt';
HAnimSite1454.Translation := Vector3(-0.1941,0.6772,-0.0423);
TouchSensor1455 := TTouchSensorNode.Create;
TouchSensor1455.Description := 'HAnimSite r_dactylion';
{ .AddChildren }
HAnimSite1454.AddChildren([TouchSensor1455]);
Shape1456 := TShapeNode.Create;
Shape1456 := Shape111;
{ .AddChildren }
HAnimSite1454.AddChildren([Shape1456]);
{ .AddChildren }
HAnimSegment1439.AddChildren([HAnimSite1454]);
{ .AddChildren }
HAnimJoint1438.AddChildren([HAnimSegment1439]);
{ .AddChildren }
HAnimJoint1429.AddChildren([HAnimJoint1438]);
{ .AddChildren }
HAnimJoint1420.AddChildren([HAnimJoint1429]);
{ .AddChildren }
HAnimJoint1411.AddChildren([HAnimJoint1420]);
{ .AddChildren }
HAnimJoint1325.AddChildren([HAnimJoint1411]);
HAnimJoint1457 := THAnimJointNode.Create;
HAnimJoint1457.NameField := 'r_middle0';
HAnimJoint1457.Center := Vector3(-0.1987,0.8029,-0.053);
HAnimSegment1458 := THAnimSegmentNode.Create;
HAnimSegment1458.NameField := 'r_middle_metacarpal';
TouchSensor1459 := TTouchSensorNode.Create;
TouchSensor1459.Description := 'HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal';
{ .AddChildren }
HAnimSegment1458.AddChildren([TouchSensor1459]);
Transform1460 := TTransformNode.Create;
Transform1460.Translation := Vector3(-0.1987,0.8029,-0.053);
Shape1461 := TShapeNode.Create;
Shape1461 := Shape48;
{ .AddChild }
Transform1460.AddChildren([Shape1461]);
{ .AddChildren }
HAnimSegment1458.AddChildren([Transform1460]);
Shape1462 := TShapeNode.Create;
LineSet1463 := TLineSetNode.Create;
LineSet1463.SetVertexCount([2]);
ColorRGBA1464 := TColorRGBANode.Create;
ColorRGBA1464 := ColorRGBA54;
{ .SetColor }
LineSet1463.Color := ColorRGBA1464;
Coordinate1465 := TCoordinateNode.Create;
Coordinate1465.SetPoint([Vector3(-0.1987,0.8029,-0.053),Vector3(-0.1987,0.7818,-0.053)]);
{ .SetCoord }
LineSet1463.Coord := Coordinate1465;
{ .SetGeometry }
Shape1462.Geometry := LineSet1463;
{ .AddChildren }
HAnimSegment1458.AddChildren([Shape1462]);
{ .AddChildren }
HAnimJoint1457.AddChildren([HAnimSegment1458]);
HAnimJoint1466 := THAnimJointNode.Create;
HAnimJoint1466.NameField := 'r_middle1';
HAnimJoint1466.Rotation := Vector4(0,0,1.00000000000003,0.111082015766469);
HAnimJoint1466.Center := Vector3(-0.1987,0.7818,-0.053);
HAnimSegment1467 := THAnimSegmentNode.Create;
HAnimSegment1467.NameField := 'r_middle_proximal';
TouchSensor1468 := TTouchSensorNode.Create;
TouchSensor1468.Description := 'HAnimJoint r_middle1, HAnimSegment r_middle_proximal';
{ .AddChildren }
HAnimSegment1467.AddChildren([TouchSensor1468]);
Transform1469 := TTransformNode.Create;
Transform1469.Translation := Vector3(-0.1987,0.7818,-0.053);
Shape1470 := TShapeNode.Create;
Shape1470 := Shape48;
{ .AddChild }
Transform1469.AddChildren([Shape1470]);
{ .AddChildren }
HAnimSegment1467.AddChildren([Transform1469]);
Shape1471 := TShapeNode.Create;
LineSet1472 := TLineSetNode.Create;
LineSet1472.SetVertexCount([2]);
ColorRGBA1473 := TColorRGBANode.Create;
ColorRGBA1473 := ColorRGBA54;
{ .SetColor }
LineSet1472.Color := ColorRGBA1473;
Coordinate1474 := TCoordinateNode.Create;
Coordinate1474.SetPoint([Vector3(-0.1987,0.7818,-0.053),Vector3(-0.2013,0.7273,-0.0503)]);
{ .SetCoord }
LineSet1472.Coord := Coordinate1474;
{ .SetGeometry }
Shape1471.Geometry := LineSet1472;
{ .AddChildren }
HAnimSegment1467.AddChildren([Shape1471]);
{ .AddChildren }
HAnimJoint1466.AddChildren([HAnimSegment1467]);
HAnimJoint1475 := THAnimJointNode.Create;
HAnimJoint1475.NameField := 'r_middle2';
HAnimJoint1475.Rotation := Vector4(0,0,0.999999999999999,0.391134387386823);
HAnimJoint1475.Center := Vector3(-0.2013,0.7273,-0.0503);
HAnimSegment1476 := THAnimSegmentNode.Create;
HAnimSegment1476.NameField := 'r_middle_middle';
TouchSensor1477 := TTouchSensorNode.Create;
TouchSensor1477.Description := 'HAnimJoint r_middle2, HAnimSegment r_middle_middle';
{ .AddChildren }
HAnimSegment1476.AddChildren([TouchSensor1477]);
Transform1478 := TTransformNode.Create;
Transform1478.Translation := Vector3(-0.2013,0.7273,-0.0503);
Shape1479 := TShapeNode.Create;
Shape1479 := Shape48;
{ .AddChild }
Transform1478.AddChildren([Shape1479]);
{ .AddChildren }
HAnimSegment1476.AddChildren([Transform1478]);
Shape1480 := TShapeNode.Create;
LineSet1481 := TLineSetNode.Create;
LineSet1481.SetVertexCount([2]);
ColorRGBA1482 := TColorRGBANode.Create;
ColorRGBA1482 := ColorRGBA54;
{ .SetColor }
LineSet1481.Color := ColorRGBA1482;
Coordinate1483 := TCoordinateNode.Create;
Coordinate1483.SetPoint([Vector3(-0.2013,0.7273,-0.0503),Vector3(-0.2026,0.7011,-0.0494)]);
{ .SetCoord }
LineSet1481.Coord := Coordinate1483;
{ .SetGeometry }
Shape1480.Geometry := LineSet1481;
{ .AddChildren }
HAnimSegment1476.AddChildren([Shape1480]);
{ .AddChildren }
HAnimJoint1475.AddChildren([HAnimSegment1476]);
HAnimJoint1484 := THAnimJointNode.Create;
HAnimJoint1484.NameField := 'r_middle3';
HAnimJoint1484.Rotation := Vector4(0,0,0.999999999999997,0.211082015766472);
HAnimJoint1484.Center := Vector3(-0.2026,0.7011,-0.0494);
HAnimSegment1485 := THAnimSegmentNode.Create;
HAnimSegment1485.NameField := 'r_middle_distal';
TouchSensor1486 := TTouchSensorNode.Create;
TouchSensor1486.Description := 'HAnimJoint r_middle3, HAnimSegment r_middle_distal';
{ .AddChildren }
HAnimSegment1485.AddChildren([TouchSensor1486]);
Transform1487 := TTransformNode.Create;
Transform1487.Translation := Vector3(-0.2026,0.7011,-0.0494);
Shape1488 := TShapeNode.Create;
Shape1488 := Shape48;
{ .AddChild }
Transform1487.AddChildren([Shape1488]);
{ .AddChildren }
HAnimSegment1485.AddChildren([Transform1487]);
Shape1489 := TShapeNode.Create;
LineSet1490 := TLineSetNode.Create;
LineSet1490.SetVertexCount([2]);
ColorRGBA1491 := TColorRGBANode.Create;
ColorRGBA1491 := ColorRGBA75;
{ .SetColor }
LineSet1490.Color := ColorRGBA1491;
Coordinate1492 := TCoordinateNode.Create;
Coordinate1492.SetPoint([Vector3(-0.2026,0.7011,-0.0494),Vector3(-0.1969,0.6758,-0.0427)]);
{ .SetCoord }
LineSet1490.Coord := Coordinate1492;
{ .SetGeometry }
Shape1489.Geometry := LineSet1490;
{ .AddChildren }
HAnimSegment1485.AddChildren([Shape1489]);
HAnimSite1493 := THAnimSiteNode.Create;
HAnimSite1493.NameField := 'r_middle_distal_tip';
HAnimSite1493.Translation := Vector3(-0.1969,0.6758,-0.0427);
TouchSensor1494 := TTouchSensorNode.Create;
TouchSensor1494.Description := 'HAnimSite r_middle_distal_tip';
{ .AddChildren }
HAnimSite1493.AddChildren([TouchSensor1494]);
Shape1495 := TShapeNode.Create;
Shape1495 := Shape111;
{ .AddChildren }
HAnimSite1493.AddChildren([Shape1495]);
{ .AddChildren }
HAnimSegment1485.AddChildren([HAnimSite1493]);
{ .AddChildren }
HAnimJoint1484.AddChildren([HAnimSegment1485]);
{ .AddChildren }
HAnimJoint1475.AddChildren([HAnimJoint1484]);
{ .AddChildren }
HAnimJoint1466.AddChildren([HAnimJoint1475]);
{ .AddChildren }
HAnimJoint1457.AddChildren([HAnimJoint1466]);
{ .AddChildren }
HAnimJoint1325.AddChildren([HAnimJoint1457]);
HAnimJoint1496 := THAnimJointNode.Create;
HAnimJoint1496.NameField := 'r_ring0';
HAnimJoint1496.Center := Vector3(-0.1956,0.8019,-0.0794);
HAnimSegment1497 := THAnimSegmentNode.Create;
HAnimSegment1497.NameField := 'r_ring_metacarpal';
TouchSensor1498 := TTouchSensorNode.Create;
TouchSensor1498.Description := 'HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal';
{ .AddChildren }
HAnimSegment1497.AddChildren([TouchSensor1498]);
Transform1499 := TTransformNode.Create;
Transform1499.Translation := Vector3(-0.1956,0.8019,-0.0794);
Shape1500 := TShapeNode.Create;
Shape1500 := Shape48;
{ .AddChild }
Transform1499.AddChildren([Shape1500]);
{ .AddChildren }
HAnimSegment1497.AddChildren([Transform1499]);
Shape1501 := TShapeNode.Create;
LineSet1502 := TLineSetNode.Create;
LineSet1502.SetVertexCount([2]);
ColorRGBA1503 := TColorRGBANode.Create;
ColorRGBA1503 := ColorRGBA54;
{ .SetColor }
LineSet1502.Color := ColorRGBA1503;
Coordinate1504 := TCoordinateNode.Create;
Coordinate1504.SetPoint([Vector3(-0.1956,0.8019,-0.0794),Vector3(-0.1956,0.7815,-0.0794)]);
{ .SetCoord }
LineSet1502.Coord := Coordinate1504;
{ .SetGeometry }
Shape1501.Geometry := LineSet1502;
{ .AddChildren }
HAnimSegment1497.AddChildren([Shape1501]);
{ .AddChildren }
HAnimJoint1496.AddChildren([HAnimSegment1497]);
HAnimJoint1505 := THAnimJointNode.Create;
HAnimJoint1505.NameField := 'r_ring1';
HAnimJoint1505.Rotation := Vector4(0,0,1.00000000000003,0.111082015766469);
HAnimJoint1505.Center := Vector3(-0.1956,0.7815,-0.0794);
HAnimSegment1506 := THAnimSegmentNode.Create;
HAnimSegment1506.NameField := 'r_ring_proximal';
TouchSensor1507 := TTouchSensorNode.Create;
TouchSensor1507.Description := 'HAnimJoint r_ring1, HAnimSegment r_ring_proximal';
{ .AddChildren }
HAnimSegment1506.AddChildren([TouchSensor1507]);
Transform1508 := TTransformNode.Create;
Transform1508.Translation := Vector3(-0.1956,0.7815,-0.0794);
Shape1509 := TShapeNode.Create;
Shape1509 := Shape48;
{ .AddChild }
Transform1508.AddChildren([Shape1509]);
{ .AddChildren }
HAnimSegment1506.AddChildren([Transform1508]);
Shape1510 := TShapeNode.Create;
LineSet1511 := TLineSetNode.Create;
LineSet1511.SetVertexCount([2]);
ColorRGBA1512 := TColorRGBANode.Create;
ColorRGBA1512 := ColorRGBA54;
{ .SetColor }
LineSet1511.Color := ColorRGBA1512;
Coordinate1513 := TCoordinateNode.Create;
Coordinate1513.SetPoint([Vector3(-0.1956,0.7815,-0.0794),Vector3(-0.1973,0.7287,-0.0777)]);
{ .SetCoord }
LineSet1511.Coord := Coordinate1513;
{ .SetGeometry }
Shape1510.Geometry := LineSet1511;
{ .AddChildren }
HAnimSegment1506.AddChildren([Shape1510]);
{ .AddChildren }
HAnimJoint1505.AddChildren([HAnimSegment1506]);
HAnimJoint1514 := THAnimJointNode.Create;
HAnimJoint1514.NameField := 'r_ring2';
HAnimJoint1514.Rotation := Vector4(0,0,0.999999999999999,0.391134387386823);
HAnimJoint1514.Center := Vector3(-0.1973,0.7287,-0.0777);
HAnimSegment1515 := THAnimSegmentNode.Create;
HAnimSegment1515.NameField := 'r_ring_middle';
TouchSensor1516 := TTouchSensorNode.Create;
TouchSensor1516.Description := 'HAnimJoint r_ring2, HAnimSegment r_ring_middle';
{ .AddChildren }
HAnimSegment1515.AddChildren([TouchSensor1516]);
Transform1517 := TTransformNode.Create;
Transform1517.Translation := Vector3(-0.1973,0.7287,-0.0777);
Shape1518 := TShapeNode.Create;
Shape1518 := Shape48;
{ .AddChild }
Transform1517.AddChildren([Shape1518]);
{ .AddChildren }
HAnimSegment1515.AddChildren([Transform1517]);
Shape1519 := TShapeNode.Create;
LineSet1520 := TLineSetNode.Create;
LineSet1520.SetVertexCount([2]);
ColorRGBA1521 := TColorRGBANode.Create;
ColorRGBA1521 := ColorRGBA54;
{ .SetColor }
LineSet1520.Color := ColorRGBA1521;
Coordinate1522 := TCoordinateNode.Create;
Coordinate1522.SetPoint([Vector3(-0.1973,0.7287,-0.0777),Vector3(-0.1983,0.7045,-0.0767)]);
{ .SetCoord }
LineSet1520.Coord := Coordinate1522;
{ .SetGeometry }
Shape1519.Geometry := LineSet1520;
{ .AddChildren }
HAnimSegment1515.AddChildren([Shape1519]);
{ .AddChildren }
HAnimJoint1514.AddChildren([HAnimSegment1515]);
HAnimJoint1523 := THAnimJointNode.Create;
HAnimJoint1523.NameField := 'r_ring3';
HAnimJoint1523.Rotation := Vector4(0,0,0.999999999999997,0.211082015766472);
HAnimJoint1523.Center := Vector3(-0.1983,0.7045,-0.0767);
HAnimSegment1524 := THAnimSegmentNode.Create;
HAnimSegment1524.NameField := 'r_ring_distal';
TouchSensor1525 := TTouchSensorNode.Create;
TouchSensor1525.Description := 'HAnimJoint r_ring3, HAnimSegment r_ring_distal';
{ .AddChildren }
HAnimSegment1524.AddChildren([TouchSensor1525]);
Transform1526 := TTransformNode.Create;
Transform1526.Translation := Vector3(-0.1983,0.7045,-0.0767);
Shape1527 := TShapeNode.Create;
Shape1527 := Shape48;
{ .AddChild }
Transform1526.AddChildren([Shape1527]);
{ .AddChildren }
HAnimSegment1524.AddChildren([Transform1526]);
Shape1528 := TShapeNode.Create;
LineSet1529 := TLineSetNode.Create;
LineSet1529.SetVertexCount([2]);
ColorRGBA1530 := TColorRGBANode.Create;
ColorRGBA1530 := ColorRGBA75;
{ .SetColor }
LineSet1529.Color := ColorRGBA1530;
Coordinate1531 := TCoordinateNode.Create;
Coordinate1531.SetPoint([Vector3(-0.1983,0.7045,-0.0767),Vector3(-0.1934,0.6778,-0.0693)]);
{ .SetCoord }
LineSet1529.Coord := Coordinate1531;
{ .SetGeometry }
Shape1528.Geometry := LineSet1529;
{ .AddChildren }
HAnimSegment1524.AddChildren([Shape1528]);
HAnimSite1532 := THAnimSiteNode.Create;
HAnimSite1532.NameField := 'r_ring_distal_tip';
HAnimSite1532.Translation := Vector3(-0.1934,0.6778,-0.0693);
TouchSensor1533 := TTouchSensorNode.Create;
TouchSensor1533.Description := 'HAnimSite r_ring_distal_tip';
{ .AddChildren }
HAnimSite1532.AddChildren([TouchSensor1533]);
Shape1534 := TShapeNode.Create;
Shape1534 := Shape111;
{ .AddChildren }
HAnimSite1532.AddChildren([Shape1534]);
{ .AddChildren }
HAnimSegment1524.AddChildren([HAnimSite1532]);
{ .AddChildren }
HAnimJoint1523.AddChildren([HAnimSegment1524]);
{ .AddChildren }
HAnimJoint1514.AddChildren([HAnimJoint1523]);
{ .AddChildren }
HAnimJoint1505.AddChildren([HAnimJoint1514]);
{ .AddChildren }
HAnimJoint1496.AddChildren([HAnimJoint1505]);
{ .AddChildren }
HAnimJoint1325.AddChildren([HAnimJoint1496]);
HAnimJoint1535 := THAnimJointNode.Create;
HAnimJoint1535.NameField := 'r_pinky0';
HAnimJoint1535.Center := Vector3(-0.1925,0.8066,-0.1036);
HAnimSegment1536 := THAnimSegmentNode.Create;
HAnimSegment1536.NameField := 'r_pinky_metacarpal';
TouchSensor1537 := TTouchSensorNode.Create;
TouchSensor1537.Description := 'HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal';
{ .AddChildren }
HAnimSegment1536.AddChildren([TouchSensor1537]);
Transform1538 := TTransformNode.Create;
Transform1538.Translation := Vector3(-0.1925,0.8066,-0.1036);
Shape1539 := TShapeNode.Create;
Shape1539 := Shape48;
{ .AddChild }
Transform1538.AddChildren([Shape1539]);
{ .AddChildren }
HAnimSegment1536.AddChildren([Transform1538]);
Shape1540 := TShapeNode.Create;
LineSet1541 := TLineSetNode.Create;
LineSet1541.SetVertexCount([2]);
ColorRGBA1542 := TColorRGBANode.Create;
ColorRGBA1542 := ColorRGBA54;
{ .SetColor }
LineSet1541.Color := ColorRGBA1542;
Coordinate1543 := TCoordinateNode.Create;
Coordinate1543.SetPoint([Vector3(-0.1925,0.8066,-0.1036),Vector3(-0.1925,0.7866,-0.1036)]);
{ .SetCoord }
LineSet1541.Coord := Coordinate1543;
{ .SetGeometry }
Shape1540.Geometry := LineSet1541;
{ .AddChildren }
HAnimSegment1536.AddChildren([Shape1540]);
{ .AddChildren }
HAnimJoint1535.AddChildren([HAnimSegment1536]);
HAnimJoint1544 := THAnimJointNode.Create;
HAnimJoint1544.NameField := 'r_pinky1';
HAnimJoint1544.Rotation := Vector4(0,0,1.00000000000003,0.111082015766469);
HAnimJoint1544.Center := Vector3(-0.1925,0.7866,-0.1036);
HAnimSegment1545 := THAnimSegmentNode.Create;
HAnimSegment1545.NameField := 'r_pinky_proximal';
TouchSensor1546 := TTouchSensorNode.Create;
TouchSensor1546.Description := 'HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal';
{ .AddChildren }
HAnimSegment1545.AddChildren([TouchSensor1546]);
Transform1547 := TTransformNode.Create;
Transform1547.Translation := Vector3(-0.1925,0.7866,-0.1036);
Shape1548 := TShapeNode.Create;
Shape1548 := Shape48;
{ .AddChild }
Transform1547.AddChildren([Shape1548]);
{ .AddChildren }
HAnimSegment1545.AddChildren([Transform1547]);
Shape1549 := TShapeNode.Create;
LineSet1550 := TLineSetNode.Create;
LineSet1550.SetVertexCount([2]);
ColorRGBA1551 := TColorRGBANode.Create;
ColorRGBA1551 := ColorRGBA54;
{ .SetColor }
LineSet1550.Color := ColorRGBA1551;
Coordinate1552 := TCoordinateNode.Create;
Coordinate1552.SetPoint([Vector3(-0.1925,0.7866,-0.1036),Vector3(-0.1938,0.7452,-0.1024)]);
{ .SetCoord }
LineSet1550.Coord := Coordinate1552;
{ .SetGeometry }
Shape1549.Geometry := LineSet1550;
{ .AddChildren }
HAnimSegment1545.AddChildren([Shape1549]);
{ .AddChildren }
HAnimJoint1544.AddChildren([HAnimSegment1545]);
HAnimJoint1553 := THAnimJointNode.Create;
HAnimJoint1553.NameField := 'r_pinky2';
HAnimJoint1553.Rotation := Vector4(0,0,0.999999999999999,0.391134387386823);
HAnimJoint1553.Center := Vector3(-0.1938,0.7452,-0.1024);
HAnimSegment1554 := THAnimSegmentNode.Create;
HAnimSegment1554.NameField := 'r_pinky_middle';
TouchSensor1555 := TTouchSensorNode.Create;
TouchSensor1555.Description := 'HAnimJoint r_pinky2, HAnimSegment r_pinky_middle';
{ .AddChildren }
HAnimSegment1554.AddChildren([TouchSensor1555]);
Transform1556 := TTransformNode.Create;
Transform1556.Translation := Vector3(-0.1938,0.7452,-0.1024);
Shape1557 := TShapeNode.Create;
Shape1557 := Shape48;
{ .AddChild }
Transform1556.AddChildren([Shape1557]);
{ .AddChildren }
HAnimSegment1554.AddChildren([Transform1556]);
Shape1558 := TShapeNode.Create;
LineSet1559 := TLineSetNode.Create;
LineSet1559.SetVertexCount([2]);
ColorRGBA1560 := TColorRGBANode.Create;
ColorRGBA1560 := ColorRGBA54;
{ .SetColor }
LineSet1559.Color := ColorRGBA1560;
Coordinate1561 := TCoordinateNode.Create;
Coordinate1561.SetPoint([Vector3(-0.1938,0.7452,-0.1024),Vector3(-0.1948,0.7277,-0.1017)]);
{ .SetCoord }
LineSet1559.Coord := Coordinate1561;
{ .SetGeometry }
Shape1558.Geometry := LineSet1559;
{ .AddChildren }
HAnimSegment1554.AddChildren([Shape1558]);
{ .AddChildren }
HAnimJoint1553.AddChildren([HAnimSegment1554]);
HAnimJoint1562 := THAnimJointNode.Create;
HAnimJoint1562.NameField := 'r_pinky3';
HAnimJoint1562.Rotation := Vector4(0,0,0.999999999999997,0.211082015766472);
HAnimJoint1562.Center := Vector3(-0.1948,0.7277,-0.1017);
HAnimSegment1563 := THAnimSegmentNode.Create;
HAnimSegment1563.NameField := 'r_pinky_distal';
TouchSensor1564 := TTouchSensorNode.Create;
TouchSensor1564.Description := 'HAnimJoint r_pinky3, HAnimSegment r_pinky_distal';
{ .AddChildren }
HAnimSegment1563.AddChildren([TouchSensor1564]);
Transform1565 := TTransformNode.Create;
Transform1565.Translation := Vector3(-0.1948,0.7277,-0.1017);
Shape1566 := TShapeNode.Create;
Shape1566 := Shape48;
{ .AddChild }
Transform1565.AddChildren([Shape1566]);
{ .AddChildren }
HAnimSegment1563.AddChildren([Transform1565]);
Shape1567 := TShapeNode.Create;
LineSet1568 := TLineSetNode.Create;
LineSet1568.SetVertexCount([2]);
ColorRGBA1569 := TColorRGBANode.Create;
ColorRGBA1569 := ColorRGBA75;
{ .SetColor }
LineSet1568.Color := ColorRGBA1569;
Coordinate1570 := TCoordinateNode.Create;
Coordinate1570.SetPoint([Vector3(-0.1948,0.7277,-0.1017),Vector3(-0.1938,0.7035,-0.0949)]);
{ .SetCoord }
LineSet1568.Coord := Coordinate1570;
{ .SetGeometry }
Shape1567.Geometry := LineSet1568;
{ .AddChildren }
HAnimSegment1563.AddChildren([Shape1567]);
HAnimSite1571 := THAnimSiteNode.Create;
HAnimSite1571.NameField := 'r_pinky_distal_tip';
HAnimSite1571.Translation := Vector3(-0.1938,0.7035,-0.0949);
TouchSensor1572 := TTouchSensorNode.Create;
TouchSensor1572.Description := 'HAnimSite r_pinky_distal_tip';
{ .AddChildren }
HAnimSite1571.AddChildren([TouchSensor1572]);
Shape1573 := TShapeNode.Create;
Shape1573 := Shape111;
{ .AddChildren }
HAnimSite1571.AddChildren([Shape1573]);
{ .AddChildren }
HAnimSegment1563.AddChildren([HAnimSite1571]);
{ .AddChildren }
HAnimJoint1562.AddChildren([HAnimSegment1563]);
{ .AddChildren }
HAnimJoint1553.AddChildren([HAnimJoint1562]);
{ .AddChildren }
HAnimJoint1544.AddChildren([HAnimJoint1553]);
{ .AddChildren }
HAnimJoint1535.AddChildren([HAnimJoint1544]);
{ .AddChildren }
HAnimJoint1325.AddChildren([HAnimJoint1535]);
{ .AddChildren }
HAnimJoint1288.AddChildren([HAnimJoint1325]);
{ .AddChildren }
HAnimJoint1272.AddChildren([HAnimJoint1288]);
{ .AddChildren }
HAnimJoint1263.AddChildren([HAnimJoint1272]);
{ .AddChildren }
HAnimJoint1226.AddChildren([HAnimJoint1263]);
{ .AddChildren }
HAnimJoint594.AddChildren([HAnimJoint1226]);
{ .AddChildren }
HAnimJoint585.AddChildren([HAnimJoint594]);
{ .AddChildren }
HAnimJoint576.AddChildren([HAnimJoint585]);
{ .AddChildren }
HAnimJoint567.AddChildren([HAnimJoint576]);
{ .AddChildren }
HAnimJoint558.AddChildren([HAnimJoint567]);
{ .AddChildren }
HAnimJoint549.AddChildren([HAnimJoint558]);
{ .AddChildren }
HAnimJoint540.AddChildren([HAnimJoint549]);
{ .AddChildren }
HAnimJoint531.AddChildren([HAnimJoint540]);
{ .AddChildren }
HAnimJoint508.AddChildren([HAnimJoint531]);
{ .AddChildren }
HAnimJoint492.AddChildren([HAnimJoint508]);
{ .AddChildren }
HAnimJoint483.AddChildren([HAnimJoint492]);
{ .AddChildren }
HAnimJoint474.AddChildren([HAnimJoint483]);
{ .AddChildren }
HAnimJoint465.AddChildren([HAnimJoint474]);
{ .AddChildren }
HAnimJoint435.AddChildren([HAnimJoint465]);
{ .AddChildren }
HAnimJoint426.AddChildren([HAnimJoint435]);
{ .AddChildren }
HAnimJoint417.AddChildren([HAnimJoint426]);
{ .AddChildren }
HAnimJoint394.AddChildren([HAnimJoint417]);
{ .AddChildren }
HAnimJoint44.AddChildren([HAnimJoint394]);
{ .AddSkeleton }
HAnimHumanoid43.SetSkeleton([HAnimJoint44]);
HAnimJoint1574 := THAnimJointNode.Create;
HAnimJoint1574 := HAnimJoint44;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1574;
HAnimJoint1575 := THAnimJointNode.Create;
HAnimJoint1575 := HAnimJoint60;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1575;
HAnimJoint1576 := THAnimJointNode.Create;
HAnimJoint1576 := HAnimJoint394;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1576;
HAnimJoint1577 := THAnimJointNode.Create;
HAnimJoint1577 := HAnimJoint417;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1577;
HAnimJoint1578 := THAnimJointNode.Create;
HAnimJoint1578 := HAnimJoint426;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1578;
HAnimJoint1579 := THAnimJointNode.Create;
HAnimJoint1579 := HAnimJoint435;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1579;
HAnimJoint1580 := THAnimJointNode.Create;
HAnimJoint1580 := HAnimJoint465;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1580;
HAnimJoint1581 := THAnimJointNode.Create;
HAnimJoint1581 := HAnimJoint474;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1581;
HAnimJoint1582 := THAnimJointNode.Create;
HAnimJoint1582 := HAnimJoint483;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1582;
HAnimJoint1583 := THAnimJointNode.Create;
HAnimJoint1583 := HAnimJoint492;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1583;
HAnimJoint1584 := THAnimJointNode.Create;
HAnimJoint1584 := HAnimJoint508;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1584;
HAnimJoint1585 := THAnimJointNode.Create;
HAnimJoint1585 := HAnimJoint531;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1585;
HAnimJoint1586 := THAnimJointNode.Create;
HAnimJoint1586 := HAnimJoint540;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1586;
HAnimJoint1587 := THAnimJointNode.Create;
HAnimJoint1587 := HAnimJoint549;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1587;
HAnimJoint1588 := THAnimJointNode.Create;
HAnimJoint1588 := HAnimJoint558;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1588;
HAnimJoint1589 := THAnimJointNode.Create;
HAnimJoint1589 := HAnimJoint567;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1589;
HAnimJoint1590 := THAnimJointNode.Create;
HAnimJoint1590 := HAnimJoint576;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1590;
HAnimJoint1591 := THAnimJointNode.Create;
HAnimJoint1591 := HAnimJoint585;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1591;
HAnimJoint1592 := THAnimJointNode.Create;
HAnimJoint1592 := HAnimJoint594;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1592;
HAnimJoint1593 := THAnimJointNode.Create;
HAnimJoint1593 := HAnimJoint625;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1593;
HAnimJoint1594 := THAnimJointNode.Create;
HAnimJoint1594 := HAnimJoint648;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1594;
HAnimJoint1595 := THAnimJointNode.Create;
HAnimJoint1595 := HAnimJoint657;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1595;
HAnimJoint1596 := THAnimJointNode.Create;
HAnimJoint1596 := HAnimJoint666;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1596;
HAnimJoint1597 := THAnimJointNode.Create;
HAnimJoint1597 := HAnimJoint675;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1597;
HAnimJoint1598 := THAnimJointNode.Create;
HAnimJoint1598 := HAnimJoint684;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1598;
HAnimJoint1599 := THAnimJointNode.Create;
HAnimJoint1599 := HAnimJoint693;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1599;
HAnimJoint1600 := THAnimJointNode.Create;
HAnimJoint1600 := HAnimJoint702;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1600;
HAnimJoint1601 := THAnimJointNode.Create;
HAnimJoint1601 := HAnimJoint859;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1601;
HAnimJoint1602 := THAnimJointNode.Create;
HAnimJoint1602 := HAnimJoint915;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1602;
HAnimJoint1603 := THAnimJointNode.Create;
HAnimJoint1603 := HAnimJoint1263;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1603;
HAnimJoint1604 := THAnimJointNode.Create;
HAnimJoint1604 := HAnimJoint179;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1604;
HAnimJoint1605 := THAnimJointNode.Create;
HAnimJoint1605 := HAnimJoint306;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1605;
HAnimJoint1606 := THAnimJointNode.Create;
HAnimJoint1606 := HAnimJoint940;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1606;
HAnimJoint1607 := THAnimJointNode.Create;
HAnimJoint1607 := HAnimJoint1288;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1607;
HAnimJoint1608 := THAnimJointNode.Create;
HAnimJoint1608 := HAnimJoint805;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1608;
HAnimJoint1609 := THAnimJointNode.Create;
HAnimJoint1609 := HAnimJoint834;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1609;
HAnimJoint1610 := THAnimJointNode.Create;
HAnimJoint1610 := HAnimJoint829;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1610;
HAnimJoint1611 := THAnimJointNode.Create;
HAnimJoint1611 := HAnimJoint854;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1611;
HAnimJoint1612 := THAnimJointNode.Create;
HAnimJoint1612 := HAnimJoint824;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1612;
HAnimJoint1613 := THAnimJointNode.Create;
HAnimJoint1613 := HAnimJoint849;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1613;
HAnimJoint1614 := THAnimJointNode.Create;
HAnimJoint1614 := HAnimJoint140;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1614;
HAnimJoint1615 := THAnimJointNode.Create;
HAnimJoint1615 := HAnimJoint267;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1615;
HAnimJoint1616 := THAnimJointNode.Create;
HAnimJoint1616 := HAnimJoint1063;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1616;
HAnimJoint1617 := THAnimJointNode.Create;
HAnimJoint1617 := HAnimJoint1411;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1617;
HAnimJoint1618 := THAnimJointNode.Create;
HAnimJoint1618 := HAnimJoint1072;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1618;
HAnimJoint1619 := THAnimJointNode.Create;
HAnimJoint1619 := HAnimJoint1420;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1619;
HAnimJoint1620 := THAnimJointNode.Create;
HAnimJoint1620 := HAnimJoint1081;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1620;
HAnimJoint1621 := THAnimJointNode.Create;
HAnimJoint1621 := HAnimJoint1429;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1621;
HAnimJoint1622 := THAnimJointNode.Create;
HAnimJoint1622 := HAnimJoint1090;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1622;
HAnimJoint1623 := THAnimJointNode.Create;
HAnimJoint1623 := HAnimJoint1438;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1623;
HAnimJoint1624 := THAnimJointNode.Create;
HAnimJoint1624 := HAnimJoint170;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1624;
HAnimJoint1625 := THAnimJointNode.Create;
HAnimJoint1625 := HAnimJoint297;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1625;
HAnimJoint1626 := THAnimJointNode.Create;
HAnimJoint1626 := HAnimJoint241;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1626;
HAnimJoint1627 := THAnimJointNode.Create;
HAnimJoint1627 := HAnimJoint368;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1627;
HAnimJoint1628 := THAnimJointNode.Create;
HAnimJoint1628 := HAnimJoint1109;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1628;
HAnimJoint1629 := THAnimJointNode.Create;
HAnimJoint1629 := HAnimJoint1457;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1629;
HAnimJoint1630 := THAnimJointNode.Create;
HAnimJoint1630 := HAnimJoint1118;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1630;
HAnimJoint1631 := THAnimJointNode.Create;
HAnimJoint1631 := HAnimJoint1466;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1631;
HAnimJoint1632 := THAnimJointNode.Create;
HAnimJoint1632 := HAnimJoint1127;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1632;
HAnimJoint1633 := THAnimJointNode.Create;
HAnimJoint1633 := HAnimJoint1475;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1633;
HAnimJoint1634 := THAnimJointNode.Create;
HAnimJoint1634 := HAnimJoint1136;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1634;
HAnimJoint1635 := THAnimJointNode.Create;
HAnimJoint1635 := HAnimJoint1484;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1635;
HAnimJoint1636 := THAnimJointNode.Create;
HAnimJoint1636 := HAnimJoint225;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1636;
HAnimJoint1637 := THAnimJointNode.Create;
HAnimJoint1637 := HAnimJoint352;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1637;
HAnimJoint1638 := THAnimJointNode.Create;
HAnimJoint1638 := HAnimJoint1187;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1638;
HAnimJoint1639 := THAnimJointNode.Create;
HAnimJoint1639 := HAnimJoint1535;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1639;
HAnimJoint1640 := THAnimJointNode.Create;
HAnimJoint1640 := HAnimJoint1196;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1640;
HAnimJoint1641 := THAnimJointNode.Create;
HAnimJoint1641 := HAnimJoint1544;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1641;
HAnimJoint1642 := THAnimJointNode.Create;
HAnimJoint1642 := HAnimJoint1205;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1642;
HAnimJoint1643 := THAnimJointNode.Create;
HAnimJoint1643 := HAnimJoint1553;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1643;
HAnimJoint1644 := THAnimJointNode.Create;
HAnimJoint1644 := HAnimJoint1214;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1644;
HAnimJoint1645 := THAnimJointNode.Create;
HAnimJoint1645 := HAnimJoint1562;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1645;
HAnimJoint1646 := THAnimJointNode.Create;
HAnimJoint1646 := HAnimJoint1148;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1646;
HAnimJoint1647 := THAnimJointNode.Create;
HAnimJoint1647 := HAnimJoint1496;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1647;
HAnimJoint1648 := THAnimJointNode.Create;
HAnimJoint1648 := HAnimJoint1157;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1648;
HAnimJoint1649 := THAnimJointNode.Create;
HAnimJoint1649 := HAnimJoint1505;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1649;
HAnimJoint1650 := THAnimJointNode.Create;
HAnimJoint1650 := HAnimJoint1166;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1650;
HAnimJoint1651 := THAnimJointNode.Create;
HAnimJoint1651 := HAnimJoint1514;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1651;
HAnimJoint1652 := THAnimJointNode.Create;
HAnimJoint1652 := HAnimJoint1175;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1652;
HAnimJoint1653 := THAnimJointNode.Create;
HAnimJoint1653 := HAnimJoint1523;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1653;
HAnimJoint1654 := THAnimJointNode.Create;
HAnimJoint1654 := HAnimJoint924;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1654;
HAnimJoint1655 := THAnimJointNode.Create;
HAnimJoint1655 := HAnimJoint1272;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1655;
HAnimJoint1656 := THAnimJointNode.Create;
HAnimJoint1656 := HAnimJoint878;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1656;
HAnimJoint1657 := THAnimJointNode.Create;
HAnimJoint1657 := HAnimJoint1226;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1657;
HAnimJoint1658 := THAnimJointNode.Create;
HAnimJoint1658 := HAnimJoint216;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1658;
HAnimJoint1659 := THAnimJointNode.Create;
HAnimJoint1659 := HAnimJoint343;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1659;
HAnimJoint1660 := THAnimJointNode.Create;
HAnimJoint1660 := HAnimJoint1033;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1660;
HAnimJoint1661 := THAnimJointNode.Create;
HAnimJoint1661 := HAnimJoint1381;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1661;
HAnimJoint1662 := THAnimJointNode.Create;
HAnimJoint1662 := HAnimJoint1042;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1662;
HAnimJoint1663 := THAnimJointNode.Create;
HAnimJoint1663 := HAnimJoint1390;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1663;
HAnimJoint1664 := THAnimJointNode.Create;
HAnimJoint1664 := HAnimJoint1051;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1664;
HAnimJoint1665 := THAnimJointNode.Create;
HAnimJoint1665 := HAnimJoint1399;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1665;
HAnimJoint1666 := THAnimJointNode.Create;
HAnimJoint1666 := HAnimJoint977;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1666;
HAnimJoint1667 := THAnimJointNode.Create;
HAnimJoint1667 := HAnimJoint1325;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1667;
HAnimSegment1668 := THAnimSegmentNode.Create;
HAnimSegment1668 := HAnimSegment61;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1668;
HAnimSegment1669 := THAnimSegmentNode.Create;
HAnimSegment1669 := HAnimSegment703;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1669;
HAnimSegment1670 := THAnimSegmentNode.Create;
HAnimSegment1670 := HAnimSegment860;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1670;
HAnimSegment1671 := THAnimSegmentNode.Create;
HAnimSegment1671 := HAnimSegment694;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1671;
HAnimSegment1672 := THAnimSegmentNode.Create;
HAnimSegment1672 := HAnimSegment685;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1672;
HAnimSegment1673 := THAnimSegmentNode.Create;
HAnimSegment1673 := HAnimSegment676;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1673;
HAnimSegment1674 := THAnimSegmentNode.Create;
HAnimSegment1674 := HAnimSegment667;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1674;
HAnimSegment1675 := THAnimSegmentNode.Create;
HAnimSegment1675 := HAnimSegment658;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1675;
HAnimSegment1676 := THAnimSegmentNode.Create;
HAnimSegment1676 := HAnimSegment649;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1676;
HAnimSegment1677 := THAnimSegmentNode.Create;
HAnimSegment1677 := HAnimSegment626;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1677;
HAnimSegment1678 := THAnimSegmentNode.Create;
HAnimSegment1678 := HAnimSegment595;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1678;
HAnimSegment1679 := THAnimSegmentNode.Create;
HAnimSegment1679 := HAnimSegment586;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1679;
HAnimSegment1680 := THAnimSegmentNode.Create;
HAnimSegment1680 := HAnimSegment577;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1680;
HAnimSegment1681 := THAnimSegmentNode.Create;
HAnimSegment1681 := HAnimSegment568;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1681;
HAnimSegment1682 := THAnimSegmentNode.Create;
HAnimSegment1682 := HAnimSegment559;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1682;
HAnimSegment1683 := THAnimSegmentNode.Create;
HAnimSegment1683 := HAnimSegment550;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1683;
HAnimSegment1684 := THAnimSegmentNode.Create;
HAnimSegment1684 := HAnimSegment541;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1684;
HAnimSegment1685 := THAnimSegmentNode.Create;
HAnimSegment1685 := HAnimSegment532;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1685;
HAnimSegment1686 := THAnimSegmentNode.Create;
HAnimSegment1686 := HAnimSegment509;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1686;
HAnimSegment1687 := THAnimSegmentNode.Create;
HAnimSegment1687 := HAnimSegment493;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1687;
HAnimSegment1688 := THAnimSegmentNode.Create;
HAnimSegment1688 := HAnimSegment484;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1688;
HAnimSegment1689 := THAnimSegmentNode.Create;
HAnimSegment1689 := HAnimSegment475;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1689;
HAnimSegment1690 := THAnimSegmentNode.Create;
HAnimSegment1690 := HAnimSegment466;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1690;
HAnimSegment1691 := THAnimSegmentNode.Create;
HAnimSegment1691 := HAnimSegment436;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1691;
HAnimSegment1692 := THAnimSegmentNode.Create;
HAnimSegment1692 := HAnimSegment427;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1692;
HAnimSegment1693 := THAnimSegmentNode.Create;
HAnimSegment1693 := HAnimSegment418;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1693;
HAnimSegment1694 := THAnimSegmentNode.Create;
HAnimSegment1694 := HAnimSegment395;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1694;
HAnimSegment1695 := THAnimSegmentNode.Create;
HAnimSegment1695 := HAnimSegment45;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1695;
HAnimSegment1696 := THAnimSegmentNode.Create;
HAnimSegment1696 := HAnimSegment171;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1696;
HAnimSegment1697 := THAnimSegmentNode.Create;
HAnimSegment1697 := HAnimSegment298;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1697;
HAnimSegment1698 := THAnimSegmentNode.Create;
HAnimSegment1698 := HAnimSegment879;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1698;
HAnimSegment1699 := THAnimSegmentNode.Create;
HAnimSegment1699 := HAnimSegment1227;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1699;
HAnimSegment1700 := THAnimSegmentNode.Create;
HAnimSegment1700 := HAnimSegment806;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1700;
HAnimSegment1701 := THAnimSegmentNode.Create;
HAnimSegment1701 := HAnimSegment835;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1701;
HAnimSegment1702 := THAnimSegmentNode.Create;
HAnimSegment1702 := HAnimSegment830;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1702;
HAnimSegment1703 := THAnimSegmentNode.Create;
HAnimSegment1703 := HAnimSegment855;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1703;
HAnimSegment1704 := THAnimSegmentNode.Create;
HAnimSegment1704 := HAnimSegment825;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1704;
HAnimSegment1705 := THAnimSegmentNode.Create;
HAnimSegment1705 := HAnimSegment850;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1705;
HAnimSegment1706 := THAnimSegmentNode.Create;
HAnimSegment1706 := HAnimSegment941;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1706;
HAnimSegment1707 := THAnimSegmentNode.Create;
HAnimSegment1707 := HAnimSegment1289;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1707;
HAnimSegment1708 := THAnimSegmentNode.Create;
HAnimSegment1708 := HAnimSegment242;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1708;
HAnimSegment1709 := THAnimSegmentNode.Create;
HAnimSegment1709 := HAnimSegment369;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1709;
HAnimSegment1710 := THAnimSegmentNode.Create;
HAnimSegment1710 := HAnimSegment978;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1710;
HAnimSegment1711 := THAnimSegmentNode.Create;
HAnimSegment1711 := HAnimSegment1326;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1711;
HAnimSegment1712 := THAnimSegmentNode.Create;
HAnimSegment1712 := HAnimSegment180;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1712;
HAnimSegment1713 := THAnimSegmentNode.Create;
HAnimSegment1713 := HAnimSegment307;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1713;
HAnimSegment1714 := THAnimSegmentNode.Create;
HAnimSegment1714 := HAnimSegment1091;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1714;
HAnimSegment1715 := THAnimSegmentNode.Create;
HAnimSegment1715 := HAnimSegment1439;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1715;
HAnimSegment1716 := THAnimSegmentNode.Create;
HAnimSegment1716 := HAnimSegment1064;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1716;
HAnimSegment1717 := THAnimSegmentNode.Create;
HAnimSegment1717 := HAnimSegment1412;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1717;
HAnimSegment1718 := THAnimSegmentNode.Create;
HAnimSegment1718 := HAnimSegment1082;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1718;
HAnimSegment1719 := THAnimSegmentNode.Create;
HAnimSegment1719 := HAnimSegment1430;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1719;
HAnimSegment1720 := THAnimSegmentNode.Create;
HAnimSegment1720 := HAnimSegment1073;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1720;
HAnimSegment1721 := THAnimSegmentNode.Create;
HAnimSegment1721 := HAnimSegment1421;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1721;
HAnimSegment1722 := THAnimSegmentNode.Create;
HAnimSegment1722 := HAnimSegment226;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1722;
HAnimSegment1723 := THAnimSegmentNode.Create;
HAnimSegment1723 := HAnimSegment353;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1723;
HAnimSegment1724 := THAnimSegmentNode.Create;
HAnimSegment1724 := HAnimSegment1137;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1724;
HAnimSegment1725 := THAnimSegmentNode.Create;
HAnimSegment1725 := HAnimSegment1485;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1725;
HAnimSegment1726 := THAnimSegmentNode.Create;
HAnimSegment1726 := HAnimSegment1110;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1726;
HAnimSegment1727 := THAnimSegmentNode.Create;
HAnimSegment1727 := HAnimSegment1458;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1727;
HAnimSegment1728 := THAnimSegmentNode.Create;
HAnimSegment1728 := HAnimSegment1128;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1728;
HAnimSegment1729 := THAnimSegmentNode.Create;
HAnimSegment1729 := HAnimSegment1476;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1729;
HAnimSegment1730 := THAnimSegmentNode.Create;
HAnimSegment1730 := HAnimSegment1119;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1730;
HAnimSegment1731 := THAnimSegmentNode.Create;
HAnimSegment1731 := HAnimSegment1467;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1731;
HAnimSegment1732 := THAnimSegmentNode.Create;
HAnimSegment1732 := HAnimSegment217;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1732;
HAnimSegment1733 := THAnimSegmentNode.Create;
HAnimSegment1733 := HAnimSegment344;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1733;
HAnimSegment1734 := THAnimSegmentNode.Create;
HAnimSegment1734 := HAnimSegment1215;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1734;
HAnimSegment1735 := THAnimSegmentNode.Create;
HAnimSegment1735 := HAnimSegment1563;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1735;
HAnimSegment1736 := THAnimSegmentNode.Create;
HAnimSegment1736 := HAnimSegment1188;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1736;
HAnimSegment1737 := THAnimSegmentNode.Create;
HAnimSegment1737 := HAnimSegment1536;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1737;
HAnimSegment1738 := THAnimSegmentNode.Create;
HAnimSegment1738 := HAnimSegment1206;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1738;
HAnimSegment1739 := THAnimSegmentNode.Create;
HAnimSegment1739 := HAnimSegment1554;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1739;
HAnimSegment1740 := THAnimSegmentNode.Create;
HAnimSegment1740 := HAnimSegment1197;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1740;
HAnimSegment1741 := THAnimSegmentNode.Create;
HAnimSegment1741 := HAnimSegment1545;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1741;
HAnimSegment1742 := THAnimSegmentNode.Create;
HAnimSegment1742 := HAnimSegment1176;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1742;
HAnimSegment1743 := THAnimSegmentNode.Create;
HAnimSegment1743 := HAnimSegment1524;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1743;
HAnimSegment1744 := THAnimSegmentNode.Create;
HAnimSegment1744 := HAnimSegment1149;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1744;
HAnimSegment1745 := THAnimSegmentNode.Create;
HAnimSegment1745 := HAnimSegment1497;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1745;
HAnimSegment1746 := THAnimSegmentNode.Create;
HAnimSegment1746 := HAnimSegment1167;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1746;
HAnimSegment1747 := THAnimSegmentNode.Create;
HAnimSegment1747 := HAnimSegment1515;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1747;
HAnimSegment1748 := THAnimSegmentNode.Create;
HAnimSegment1748 := HAnimSegment1158;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1748;
HAnimSegment1749 := THAnimSegmentNode.Create;
HAnimSegment1749 := HAnimSegment1506;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1749;
HAnimSegment1750 := THAnimSegmentNode.Create;
HAnimSegment1750 := HAnimSegment916;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1750;
HAnimSegment1751 := THAnimSegmentNode.Create;
HAnimSegment1751 := HAnimSegment1264;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1751;
HAnimSegment1752 := THAnimSegmentNode.Create;
HAnimSegment1752 := HAnimSegment141;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1752;
HAnimSegment1753 := THAnimSegmentNode.Create;
HAnimSegment1753 := HAnimSegment268;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1753;
HAnimSegment1754 := THAnimSegmentNode.Create;
HAnimSegment1754 := HAnimSegment1052;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1754;
HAnimSegment1755 := THAnimSegmentNode.Create;
HAnimSegment1755 := HAnimSegment1400;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1755;
HAnimSegment1756 := THAnimSegmentNode.Create;
HAnimSegment1756 := HAnimSegment1034;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1756;
HAnimSegment1757 := THAnimSegmentNode.Create;
HAnimSegment1757 := HAnimSegment1382;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1757;
HAnimSegment1758 := THAnimSegmentNode.Create;
HAnimSegment1758 := HAnimSegment1043;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1758;
HAnimSegment1759 := THAnimSegmentNode.Create;
HAnimSegment1759 := HAnimSegment1391;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1759;
HAnimSegment1760 := THAnimSegmentNode.Create;
HAnimSegment1760 := HAnimSegment925;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1760;
HAnimSegment1761 := THAnimSegmentNode.Create;
HAnimSegment1761 := HAnimSegment1273;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1761;
HAnimSite1762 := THAnimSiteNode.Create;
HAnimSite1762 := HAnimSite137;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1762;
HAnimSite1763 := THAnimSiteNode.Create;
HAnimSite1763 := HAnimSite775;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1763;
HAnimSite1764 := THAnimSiteNode.Create;
HAnimSite1764 := HAnimSite778;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1764;
HAnimSite1765 := THAnimSiteNode.Create;
HAnimSite1765 := HAnimSite787;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1765;
HAnimSite1766 := THAnimSiteNode.Create;
HAnimSite1766 := HAnimSite802;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1766;
HAnimSite1767 := THAnimSiteNode.Create;
HAnimSite1767 := HAnimSite619;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1767;
HAnimSite1768 := THAnimSiteNode.Create;
HAnimSite1768 := HAnimSite622;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1768;
HAnimSite1769 := THAnimSiteNode.Create;
HAnimSite1769 := HAnimSite505;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1769;
HAnimSite1770 := THAnimSiteNode.Create;
HAnimSite1770 := HAnimSite462;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1770;
HAnimSite1771 := THAnimSiteNode.Create;
HAnimSite1771 := HAnimSite411;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1771;
HAnimSite1772 := THAnimSiteNode.Create;
HAnimSite1772 := HAnimSite414;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1772;
HAnimSite1773 := THAnimSiteNode.Create;
HAnimSite1773 := HAnimSite906;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1773;
HAnimSite1774 := THAnimSiteNode.Create;
HAnimSite1774 := HAnimSite1254;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1774;
HAnimSite1775 := THAnimSiteNode.Create;
HAnimSite1775 := HAnimSite125;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1775;
HAnimSite1776 := THAnimSiteNode.Create;
HAnimSite1776 := HAnimSite128;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1776;
HAnimSite1777 := THAnimSiteNode.Create;
HAnimSite1777 := HAnimSite909;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1777;
HAnimSite1778 := THAnimSiteNode.Create;
HAnimSite1778 := HAnimSite1257;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1778;
HAnimSite1779 := THAnimSiteNode.Create;
HAnimSite1779 := HAnimSite912;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1779;
HAnimSite1780 := THAnimSiteNode.Create;
HAnimSite1780 := HAnimSite1260;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1780;
HAnimSite1781 := THAnimSiteNode.Create;
HAnimSite1781 := HAnimSite213;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1781;
HAnimSite1782 := THAnimSiteNode.Create;
HAnimSite1782 := HAnimSite340;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1782;
HAnimSite1783 := THAnimSiteNode.Create;
HAnimSite1783 := HAnimSite903;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1783;
HAnimSite1784 := THAnimSiteNode.Create;
HAnimSite1784 := HAnimSite1251;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1784;
HAnimSite1785 := THAnimSiteNode.Create;
HAnimSite1785 := HAnimSite1106;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1785;
HAnimSite1786 := THAnimSiteNode.Create;
HAnimSite1786 := HAnimSite1454;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1786;
HAnimSite1787 := THAnimSiteNode.Create;
HAnimSite1787 := HAnimSite264;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1787;
HAnimSite1788 := THAnimSiteNode.Create;
HAnimSite1788 := HAnimSite391;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1788;
HAnimSite1789 := THAnimSiteNode.Create;
HAnimSite1789 := HAnimSite164;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1789;
HAnimSite1790 := THAnimSiteNode.Create;
HAnimSite1790 := HAnimSite291;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1790;
HAnimSite1791 := THAnimSiteNode.Create;
HAnimSite1791 := HAnimSite167;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1791;
HAnimSite1792 := THAnimSiteNode.Create;
HAnimSite1792 := HAnimSite294;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1792;
HAnimSite1793 := THAnimSiteNode.Create;
HAnimSite1793 := HAnimSite258;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1793;
HAnimSite1794 := THAnimSiteNode.Create;
HAnimSite1794 := HAnimSite385;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1794;
HAnimSite1795 := THAnimSiteNode.Create;
HAnimSite1795 := HAnimSite793;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1795;
HAnimSite1796 := THAnimSiteNode.Create;
HAnimSite1796 := HAnimSite799;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1796;
HAnimSite1797 := THAnimSiteNode.Create;
HAnimSite1797 := HAnimSite937;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1797;
HAnimSite1798 := THAnimSiteNode.Create;
HAnimSite1798 := HAnimSite1285;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1798;
HAnimSite1799 := THAnimSiteNode.Create;
HAnimSite1799 := HAnimSite971;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1799;
HAnimSite1800 := THAnimSiteNode.Create;
HAnimSite1800 := HAnimSite1319;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1800;
HAnimSite1801 := THAnimSiteNode.Create;
HAnimSite1801 := HAnimSite109;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1801;
HAnimSite1802 := THAnimSiteNode.Create;
HAnimSite1802 := HAnimSite119;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1802;
HAnimSite1803 := THAnimSiteNode.Create;
HAnimSite1803 := HAnimSite1103;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1803;
HAnimSite1804 := THAnimSiteNode.Create;
HAnimSite1804 := HAnimSite1451;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1804;
HAnimSite1805 := THAnimSiteNode.Create;
HAnimSite1805 := HAnimSite781;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1805;
HAnimSite1806 := THAnimSiteNode.Create;
HAnimSite1806 := HAnimSite784;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1806;
HAnimSite1807 := THAnimSiteNode.Create;
HAnimSite1807 := HAnimSite161;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1807;
HAnimSite1808 := THAnimSiteNode.Create;
HAnimSite1808 := HAnimSite288;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1808;
HAnimSite1809 := THAnimSiteNode.Create;
HAnimSite1809 := HAnimSite204;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1809;
HAnimSite1810 := THAnimSiteNode.Create;
HAnimSite1810 := HAnimSite331;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1810;
HAnimSite1811 := THAnimSiteNode.Create;
HAnimSite1811 := HAnimSite207;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1811;
HAnimSite1812 := THAnimSiteNode.Create;
HAnimSite1812 := HAnimSite334;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1812;
HAnimSite1813 := THAnimSiteNode.Create;
HAnimSite1813 := HAnimSite1018;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1813;
HAnimSite1814 := THAnimSiteNode.Create;
HAnimSite1814 := HAnimSite1366;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1814;
HAnimSite1815 := THAnimSiteNode.Create;
HAnimSite1815 := HAnimSite1024;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1815;
HAnimSite1816 := THAnimSiteNode.Create;
HAnimSite1816 := HAnimSite1372;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1816;
HAnimSite1817 := THAnimSiteNode.Create;
HAnimSite1817 := HAnimSite238;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1817;
HAnimSite1818 := THAnimSiteNode.Create;
HAnimSite1818 := HAnimSite365;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1818;
HAnimSite1819 := THAnimSiteNode.Create;
HAnimSite1819 := HAnimSite261;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1819;
HAnimSite1820 := THAnimSiteNode.Create;
HAnimSite1820 := HAnimSite388;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1820;
HAnimSite1821 := THAnimSiteNode.Create;
HAnimSite1821 := HAnimSite1145;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1821;
HAnimSite1822 := THAnimSiteNode.Create;
HAnimSite1822 := HAnimSite1493;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1822;
HAnimSite1823 := THAnimSiteNode.Create;
HAnimSite1823 := HAnimSite642;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1823;
HAnimSite1824 := THAnimSiteNode.Create;
HAnimSite1824 := HAnimSite645;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1824;
HAnimSite1825 := THAnimSiteNode.Create;
HAnimSite1825 := HAnimSite968;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1825;
HAnimSite1826 := THAnimSiteNode.Create;
HAnimSite1826 := HAnimSite1316;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1826;
HAnimSite1827 := THAnimSiteNode.Create;
HAnimSite1827 := HAnimSite1223;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1827;
HAnimSite1828 := THAnimSiteNode.Create;
HAnimSite1828 := HAnimSite1571;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1828;
HAnimSite1829 := THAnimSiteNode.Create;
HAnimSite1829 := HAnimSite131;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1829;
HAnimSite1830 := THAnimSiteNode.Create;
HAnimSite1830 := HAnimSite134;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1830;
HAnimSite1831 := THAnimSiteNode.Create;
HAnimSite1831 := HAnimSite965;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1831;
HAnimSite1832 := THAnimSiteNode.Create;
HAnimSite1832 := HAnimSite1313;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1832;
HAnimSite1833 := THAnimSiteNode.Create;
HAnimSite1833 := HAnimSite974;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1833;
HAnimSite1834 := THAnimSiteNode.Create;
HAnimSite1834 := HAnimSite1322;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1834;
HAnimSite1835 := THAnimSiteNode.Create;
HAnimSite1835 := HAnimSite456;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1835;
HAnimSite1836 := THAnimSiteNode.Create;
HAnimSite1836 := HAnimSite459;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1836;
HAnimSite1837 := THAnimSiteNode.Create;
HAnimSite1837 := HAnimSite1184;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1837;
HAnimSite1838 := THAnimSiteNode.Create;
HAnimSite1838 := HAnimSite1532;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1838;
HAnimSite1839 := THAnimSiteNode.Create;
HAnimSite1839 := HAnimSite872;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1839;
HAnimSite1840 := THAnimSiteNode.Create;
HAnimSite1840 := HAnimSite875;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1840;
HAnimSite1841 := THAnimSiteNode.Create;
HAnimSite1841 := HAnimSite210;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1841;
HAnimSite1842 := THAnimSiteNode.Create;
HAnimSite1842 := HAnimSite337;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1842;
HAnimSite1843 := THAnimSiteNode.Create;
HAnimSite1843 := HAnimSite525;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1843;
HAnimSite1844 := THAnimSiteNode.Create;
HAnimSite1844 := HAnimSite528;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1844;
HAnimSite1845 := THAnimSiteNode.Create;
HAnimSite1845 := HAnimSite1060;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1845;
HAnimSite1846 := THAnimSiteNode.Create;
HAnimSite1846 := HAnimSite1408;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1846;
HAnimSite1847 := THAnimSiteNode.Create;
HAnimSite1847 := HAnimSite790;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1847;
HAnimSite1848 := THAnimSiteNode.Create;
HAnimSite1848 := HAnimSite796;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1848;
HAnimSite1849 := THAnimSiteNode.Create;
HAnimSite1849 := HAnimSite116;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1849;
HAnimSite1850 := THAnimSiteNode.Create;
HAnimSite1850 := HAnimSite122;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1850;
HAnimSite1851 := THAnimSiteNode.Create;
HAnimSite1851 := HAnimSite1021;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1851;
HAnimSite1852 := THAnimSiteNode.Create;
HAnimSite1852 := HAnimSite1369;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1852;
HAnimSite1853 := THAnimSiteNode.Create;
HAnimSite1853.NameField := 'l_inclined_view';
HAnimSite1853.Translation := Vector3(1.62,1.05,2.06);
HAnimSite1853.Rotation := Vector4(-0.113,0.993,0.0347,0.671);
Viewpoint1854 := TViewpointNode.Create;
Viewpoint1854.Description := 'left inclined';
Viewpoint1854.Position := Vector3(0,0,0);
{ .AddChildren }
HAnimSite1853.AddChildren([Viewpoint1854]);
Anchor1855 := TAnchorNode.Create;
Anchor1855.Description := 'HAnimSite Viewpoint hanim_l_inclined_view';
Anchor1855.SetUrl(['#hanim_l_inclined_viewpoint']);
LOD1856 := TLODNode.Create;
LOD1856.ForceTransitions := True;
LOD1856.SetRange([0.04]);
WorldInfo1857 := TWorldInfoNode.Create;
WorldInfo1857.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1856.AddChildren([WorldInfo1857]);
Shape1858 := TShapeNode.Create;
Shape1858 := Shape819;
{ .AddChildren }
LOD1856.AddChildren([Shape1858]);
{ .AddChildren }
Anchor1855.AddChildren([LOD1856]);
{ .AddChildren }
HAnimSite1853.AddChildren([Anchor1855]);
{ .SetViewpoints }
HAnimHumanoid43.Viewpoints := HAnimSite1853;
HAnimSite1859 := THAnimSiteNode.Create;
HAnimSite1859.NameField := 'r_inclined_view';
HAnimSite1859.Translation := Vector3(-1.62,1.05,2.06);
HAnimSite1859.Rotation := Vector4(-0.113,-0.993,0.0347,0.671);
Viewpoint1860 := TViewpointNode.Create;
Viewpoint1860.Description := 'right inclined';
Viewpoint1860.Position := Vector3(0,0,0);
Viewpoint1860.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite1859.AddChildren([Viewpoint1860]);
Anchor1861 := TAnchorNode.Create;
Anchor1861.Description := 'HAnimSite Viewpoint hanim_r_inclined_view';
Anchor1861.SetUrl(['#hanim_r_inclined_viewpoint']);
LOD1862 := TLODNode.Create;
LOD1862.ForceTransitions := True;
LOD1862.SetRange([0.04]);
WorldInfo1863 := TWorldInfoNode.Create;
WorldInfo1863.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1862.AddChildren([WorldInfo1863]);
Shape1864 := TShapeNode.Create;
Shape1864 := Shape819;
{ .AddChildren }
LOD1862.AddChildren([Shape1864]);
{ .AddChildren }
Anchor1861.AddChildren([LOD1862]);
{ .AddChildren }
HAnimSite1859.AddChildren([Anchor1861]);
{ .SetViewpoints }
HAnimHumanoid43.Viewpoints := HAnimSite1859;
HAnimSite1865 := THAnimSiteNode.Create;
HAnimSite1865.NameField := 'front_view';
HAnimSite1865.Translation := Vector3(0,0.85,2.58);
Viewpoint1866 := TViewpointNode.Create;
Viewpoint1866.Description := 'front';
Viewpoint1866.Position := Vector3(0,0,0);
Viewpoint1866.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite1865.AddChildren([Viewpoint1866]);
Anchor1867 := TAnchorNode.Create;
Anchor1867.Description := 'HAnimSite Viewpoint hanim_front_view';
Anchor1867.SetUrl(['#hanim_front_viewpoint']);
LOD1868 := TLODNode.Create;
LOD1868.ForceTransitions := True;
LOD1868.SetRange([0.04]);
WorldInfo1869 := TWorldInfoNode.Create;
WorldInfo1869.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1868.AddChildren([WorldInfo1869]);
Shape1870 := TShapeNode.Create;
Shape1870 := Shape819;
{ .AddChildren }
LOD1868.AddChildren([Shape1870]);
{ .AddChildren }
Anchor1867.AddChildren([LOD1868]);
{ .AddChildren }
HAnimSite1865.AddChildren([Anchor1867]);
{ .SetViewpoints }
HAnimHumanoid43.Viewpoints := HAnimSite1865;
HAnimSite1871 := THAnimSiteNode.Create;
HAnimSite1871.NameField := 'back_view';
HAnimSite1871.Translation := Vector3(0,0.85,-2.58);
HAnimSite1871.Rotation := Vector4(0,1,0,3.14);
Viewpoint1872 := TViewpointNode.Create;
Viewpoint1872.Description := 'back';
Viewpoint1872.Position := Vector3(0,0,0);
Viewpoint1872.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite1871.AddChildren([Viewpoint1872]);
Anchor1873 := TAnchorNode.Create;
Anchor1873.Description := 'HAnimSite Viewpoint hanim_back_view';
Anchor1873.SetUrl(['#hanim_back_viewpoint']);
LOD1874 := TLODNode.Create;
LOD1874.ForceTransitions := True;
LOD1874.SetRange([0.04]);
WorldInfo1875 := TWorldInfoNode.Create;
WorldInfo1875.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1874.AddChildren([WorldInfo1875]);
Shape1876 := TShapeNode.Create;
Shape1876 := Shape819;
{ .AddChildren }
LOD1874.AddChildren([Shape1876]);
{ .AddChildren }
Anchor1873.AddChildren([LOD1874]);
{ .AddChildren }
HAnimSite1871.AddChildren([Anchor1873]);
{ .SetViewpoints }
HAnimHumanoid43.Viewpoints := HAnimSite1871;
HAnimSite1877 := THAnimSiteNode.Create;
HAnimSite1877.NameField := 'l_side_view';
HAnimSite1877.Translation := Vector3(2.6,0.854,0);
HAnimSite1877.Rotation := Vector4(0,1,0,1.5708);
Viewpoint1878 := TViewpointNode.Create;
Viewpoint1878.Description := 'left side';
Viewpoint1878.Position := Vector3(0,0,0);
Viewpoint1878.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite1877.AddChildren([Viewpoint1878]);
Anchor1879 := TAnchorNode.Create;
Anchor1879.Description := 'HAnimSite Viewpoint hanim_l_side_view';
Anchor1879.SetUrl(['#hanim_l_side_viewpoint']);
LOD1880 := TLODNode.Create;
LOD1880.ForceTransitions := True;
LOD1880.SetRange([0.04]);
WorldInfo1881 := TWorldInfoNode.Create;
WorldInfo1881.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1880.AddChildren([WorldInfo1881]);
Shape1882 := TShapeNode.Create;
Shape1882 := Shape819;
{ .AddChildren }
LOD1880.AddChildren([Shape1882]);
{ .AddChildren }
Anchor1879.AddChildren([LOD1880]);
{ .AddChildren }
HAnimSite1877.AddChildren([Anchor1879]);
{ .SetViewpoints }
HAnimHumanoid43.Viewpoints := HAnimSite1877;
HAnimSite1883 := THAnimSiteNode.Create;
HAnimSite1883.NameField := 'Top_view';
HAnimSite1883.Translation := Vector3(0,3.5,0);
HAnimSite1883.Rotation := Vector4(1,0,0,-1.57);
Viewpoint1884 := TViewpointNode.Create;
Viewpoint1884.Description := 'Top';
Viewpoint1884.Position := Vector3(0,0,0);
Viewpoint1884.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite1883.AddChildren([Viewpoint1884]);
Anchor1885 := TAnchorNode.Create;
Anchor1885.Description := 'HAnimSite Viewpoint hanim_Top_view';
Anchor1885.SetUrl(['#hanim_Top_viewpoint']);
LOD1886 := TLODNode.Create;
LOD1886.ForceTransitions := True;
LOD1886.SetRange([0.04]);
WorldInfo1887 := TWorldInfoNode.Create;
WorldInfo1887.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1886.AddChildren([WorldInfo1887]);
Shape1888 := TShapeNode.Create;
Shape1888 := Shape819;
{ .AddChildren }
LOD1886.AddChildren([Shape1888]);
{ .AddChildren }
Anchor1885.AddChildren([LOD1886]);
{ .AddChildren }
HAnimSite1883.AddChildren([Anchor1885]);
{ .SetViewpoints }
HAnimHumanoid43.Viewpoints := HAnimSite1883;
HAnimSite1889 := THAnimSiteNode.Create;
HAnimSite1889.NameField := 'front_close_view';
HAnimSite1889.Translation := Vector3(0,0.854,1.575);
Viewpoint1890 := TViewpointNode.Create;
Viewpoint1890.Description := 'front close';
Viewpoint1890.Position := Vector3(0,0,0);
Viewpoint1890.CenterOfRotation := Vector3(0,0,1.575);
{ .AddChildren }
HAnimSite1889.AddChildren([Viewpoint1890]);
Anchor1891 := TAnchorNode.Create;
Anchor1891.Description := 'HAnimSite Viewpoint hanim_front_close_view';
Anchor1891.SetUrl(['#hanim_front_close_viewpoint']);
LOD1892 := TLODNode.Create;
LOD1892.ForceTransitions := True;
LOD1892.SetRange([0.04]);
WorldInfo1893 := TWorldInfoNode.Create;
WorldInfo1893.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1892.AddChildren([WorldInfo1893]);
Shape1894 := TShapeNode.Create;
Shape1894 := Shape819;
{ .AddChildren }
LOD1892.AddChildren([Shape1894]);
{ .AddChildren }
Anchor1891.AddChildren([LOD1892]);
{ .AddChildren }
HAnimSite1889.AddChildren([Anchor1891]);
{ .SetViewpoints }
HAnimHumanoid43.Viewpoints := HAnimSite1889;
HAnimSite1895 := THAnimSiteNode.Create;
HAnimSite1895.NameField := 'side_close_view';
HAnimSite1895.Translation := Vector3(1.56,0.854,0);
HAnimSite1895.Rotation := Vector4(0,1,0,1.5708);
Viewpoint1896 := TViewpointNode.Create;
Viewpoint1896.Description := 'side close';
Viewpoint1896.Position := Vector3(0,0,0);
Viewpoint1896.CenterOfRotation := Vector3(1.6,0,0);
{ .AddChildren }
HAnimSite1895.AddChildren([Viewpoint1896]);
Anchor1897 := TAnchorNode.Create;
Anchor1897.Description := 'HAnimSite Viewpoint hanim_side_close_view';
Anchor1897.SetUrl(['#hanim_side_close_viewpoint']);
LOD1898 := TLODNode.Create;
LOD1898.ForceTransitions := True;
LOD1898.SetRange([0.04]);
WorldInfo1899 := TWorldInfoNode.Create;
WorldInfo1899.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1898.AddChildren([WorldInfo1899]);
Shape1900 := TShapeNode.Create;
Shape1900 := Shape819;
{ .AddChildren }
LOD1898.AddChildren([Shape1900]);
{ .AddChildren }
Anchor1897.AddChildren([LOD1898]);
{ .AddChildren }
HAnimSite1895.AddChildren([Anchor1897]);
{ .SetViewpoints }
HAnimHumanoid43.Viewpoints := HAnimSite1895;
HAnimSite1901 := THAnimSiteNode.Create;
HAnimSite1901.NameField := 'head_front_close_view';
HAnimSite1901.Translation := Vector3(0,1.5,1);
Viewpoint1902 := TViewpointNode.Create;
Viewpoint1902.Description := 'head front close';
Viewpoint1902.Position := Vector3(0,0,0);
Viewpoint1902.CenterOfRotation := Vector3(0,0,1);
{ .AddChildren }
HAnimSite1901.AddChildren([Viewpoint1902]);
Anchor1903 := TAnchorNode.Create;
Anchor1903.Description := 'HAnimSite Viewpoint hanim_head_front_close_view';
Anchor1903.SetUrl(['#hanim_head_front_close_viewpoint']);
LOD1904 := TLODNode.Create;
LOD1904.ForceTransitions := True;
LOD1904.SetRange([0.04]);
WorldInfo1905 := TWorldInfoNode.Create;
WorldInfo1905.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1904.AddChildren([WorldInfo1905]);
Shape1906 := TShapeNode.Create;
Shape1906 := Shape819;
{ .AddChildren }
LOD1904.AddChildren([Shape1906]);
{ .AddChildren }
Anchor1903.AddChildren([LOD1904]);
{ .AddChildren }
HAnimSite1901.AddChildren([Anchor1903]);
{ .SetViewpoints }
HAnimHumanoid43.Viewpoints := HAnimSite1901;
HAnimSite1907 := THAnimSiteNode.Create;
HAnimSite1907.NameField := 'chest_front_close_view';
HAnimSite1907.Translation := Vector3(0,1.2,1);
Viewpoint1908 := TViewpointNode.Create;
Viewpoint1908.Description := 'chest front close';
Viewpoint1908.Position := Vector3(0,0,0);
Viewpoint1908.CenterOfRotation := Vector3(0,0,1);
{ .AddChildren }
HAnimSite1907.AddChildren([Viewpoint1908]);
Anchor1909 := TAnchorNode.Create;
Anchor1909.Description := 'HAnimSite Viewpoint hanim_chest_front_close_view';
Anchor1909.SetUrl(['#hanim_chest_front_close_viewpoint']);
LOD1910 := TLODNode.Create;
LOD1910.ForceTransitions := True;
LOD1910.SetRange([0.04]);
WorldInfo1911 := TWorldInfoNode.Create;
WorldInfo1911.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1910.AddChildren([WorldInfo1911]);
Shape1912 := TShapeNode.Create;
Shape1912 := Shape819;
{ .AddChildren }
LOD1910.AddChildren([Shape1912]);
{ .AddChildren }
Anchor1909.AddChildren([LOD1910]);
{ .AddChildren }
HAnimSite1907.AddChildren([Anchor1909]);
{ .SetViewpoints }
HAnimHumanoid43.Viewpoints := HAnimSite1907;
HAnimSite1913 := THAnimSiteNode.Create;
HAnimSite1913.NameField := 'pelvis_front_close_view';
HAnimSite1913.Translation := Vector3(0,0.8,1);
Viewpoint1914 := TViewpointNode.Create;
Viewpoint1914.Description := 'pelvis front close';
Viewpoint1914.Position := Vector3(0,0,0);
Viewpoint1914.CenterOfRotation := Vector3(0,0,1);
{ .AddChildren }
HAnimSite1913.AddChildren([Viewpoint1914]);
Anchor1915 := TAnchorNode.Create;
Anchor1915.Description := 'HAnimSite Viewpoint hanim_pelvis_front_close_view';
Anchor1915.SetUrl(['#hanim_pelvis_front_close_viewpoint']);
LOD1916 := TLODNode.Create;
LOD1916.ForceTransitions := True;
LOD1916.SetRange([0.04]);
WorldInfo1917 := TWorldInfoNode.Create;
WorldInfo1917.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1916.AddChildren([WorldInfo1917]);
Shape1918 := TShapeNode.Create;
Shape1918 := Shape819;
{ .AddChildren }
LOD1916.AddChildren([Shape1918]);
{ .AddChildren }
Anchor1915.AddChildren([LOD1916]);
{ .AddChildren }
HAnimSite1913.AddChildren([Anchor1915]);
{ .SetViewpoints }
HAnimHumanoid43.Viewpoints := HAnimSite1913;
HAnimSite1919 := THAnimSiteNode.Create;
HAnimSite1919.NameField := 'knees_front_close_view';
HAnimSite1919.Translation := Vector3(0,0.4,1);
Viewpoint1920 := TViewpointNode.Create;
Viewpoint1920.Description := 'knees front close';
Viewpoint1920.Position := Vector3(0,0,0);
Viewpoint1920.CenterOfRotation := Vector3(0,0.4,0);
{ .AddChildren }
HAnimSite1919.AddChildren([Viewpoint1920]);
Anchor1921 := TAnchorNode.Create;
Anchor1921.Description := 'HAnimSite Viewpoint hanim_knees_front_close_view';
Anchor1921.SetUrl(['#hanim_knees_front_close_viewpoint']);
LOD1922 := TLODNode.Create;
LOD1922.ForceTransitions := True;
LOD1922.SetRange([0.04]);
WorldInfo1923 := TWorldInfoNode.Create;
WorldInfo1923.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1922.AddChildren([WorldInfo1923]);
Shape1924 := TShapeNode.Create;
Shape1924 := Shape819;
{ .AddChildren }
LOD1922.AddChildren([Shape1924]);
{ .AddChildren }
Anchor1921.AddChildren([LOD1922]);
{ .AddChildren }
HAnimSite1919.AddChildren([Anchor1921]);
{ .SetViewpoints }
HAnimHumanoid43.Viewpoints := HAnimSite1919;
HAnimSite1925 := THAnimSiteNode.Create;
HAnimSite1925.NameField := 'feet_front_close_view';
HAnimSite1925.Translation := Vector3(0,0,1);
Viewpoint1926 := TViewpointNode.Create;
Viewpoint1926.Description := 'feet front close';
Viewpoint1926.Position := Vector3(0,0,0);
{ .AddChildren }
HAnimSite1925.AddChildren([Viewpoint1926]);
Anchor1927 := TAnchorNode.Create;
Anchor1927.Description := 'HAnimSite Viewpoint hanim_feet_front_close_view';
Anchor1927.SetUrl(['#hanim_feet_front_close_viewpoint']);
LOD1928 := TLODNode.Create;
LOD1928.ForceTransitions := True;
LOD1928.SetRange([0.04]);
WorldInfo1929 := TWorldInfoNode.Create;
WorldInfo1929.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1928.AddChildren([WorldInfo1929]);
Shape1930 := TShapeNode.Create;
Shape1930 := Shape819;
{ .AddChildren }
LOD1928.AddChildren([Shape1930]);
{ .AddChildren }
Anchor1927.AddChildren([LOD1928]);
{ .AddChildren }
HAnimSite1925.AddChildren([Anchor1927]);
{ .SetViewpoints }
HAnimHumanoid43.Viewpoints := HAnimSite1925;
HAnimSite1931 := THAnimSiteNode.Create;
HAnimSite1931.NameField := 'eye_level_view';
HAnimSite1931.Translation := Vector3(0,1.6332,0.0502);
Viewpoint1932 := TViewpointNode.Create;
Viewpoint1932.Description := 'eye level looking forward';
Viewpoint1932.Position := Vector3(0,0,0);
Viewpoint1932.Orientation := Vector4(0,1,0,3.141593);
{ .AddChildren }
HAnimSite1931.AddChildren([Viewpoint1932]);
Anchor1933 := TAnchorNode.Create;
Anchor1933.Description := 'HAnimSite Viewpoint hanim_eye_level_view';
Anchor1933.SetUrl(['#hanim_eye_level_viewpoint']);
LOD1934 := TLODNode.Create;
LOD1934.ForceTransitions := True;
LOD1934.SetRange([0.04]);
WorldInfo1935 := TWorldInfoNode.Create;
WorldInfo1935.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1934.AddChildren([WorldInfo1935]);
Shape1936 := TShapeNode.Create;
Shape1936 := Shape819;
{ .AddChildren }
LOD1934.AddChildren([Shape1936]);
{ .AddChildren }
Anchor1933.AddChildren([LOD1934]);
{ .AddChildren }
HAnimSite1931.AddChildren([Anchor1933]);
{ .SetViewpoints }
HAnimHumanoid43.Viewpoints := HAnimSite1931;
HAnimSite1937 := THAnimSiteNode.Create;
HAnimSite1937 := HAnimSite814;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1937;
HAnimSite1938 := THAnimSiteNode.Create;
HAnimSite1938 := HAnimSite843;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1938;
HAnimSite1939 := THAnimSiteNode.Create;
HAnimSite1939 := HAnimSite1027;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1939;
HAnimSite1940 := THAnimSiteNode.Create;
HAnimSite1940 := HAnimSite1375;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1940;
{ .AddChildren }
Group29.AddChildren([HAnimHumanoid43]);
Group1941 := TGroupNode.Create;
TimeSensor1942 := TTimeSensorNode.Create;
TimeSensor1942.CycleInterval := 5.73;
TimeSensor1942.Loop := True;
{ .AddChildren }
Group1941.AddChildren([TimeSensor1942]);
PositionInterpolator1943 := TPositionInterpolatorNode.Create;
PositionInterpolator1943.SetKey([0,0.5,1]);
PositionInterpolator1943.SetKeyValue([Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0)]);
{ .AddChildren }
Group1941.AddChildren([PositionInterpolator1943]);
OrientationInterpolator1944 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1944.SetKey([0,0.5,1]);
OrientationInterpolator1944.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1944]);
OrientationInterpolator1945 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1945.SetKey([0,0.5,1]);
OrientationInterpolator1945.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1945]);
OrientationInterpolator1946 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1946.SetKey([0,0.5,1]);
OrientationInterpolator1946.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1946]);
OrientationInterpolator1947 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1947.SetKey([0,0.5,1]);
OrientationInterpolator1947.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1947]);
OrientationInterpolator1948 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1948.SetKey([0,0.5,1]);
OrientationInterpolator1948.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1948]);
OrientationInterpolator1949 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1949.SetKey([0,0.5,1]);
OrientationInterpolator1949.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1949]);
OrientationInterpolator1950 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1950.SetKey([0,0.5,1]);
OrientationInterpolator1950.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1950]);
OrientationInterpolator1951 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1951.SetKey([0,0.5,1]);
OrientationInterpolator1951.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1951]);
OrientationInterpolator1952 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1952.SetKey([0,0.5,1]);
OrientationInterpolator1952.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1952]);
OrientationInterpolator1953 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1953.SetKey([0,0.5,1]);
OrientationInterpolator1953.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1953]);
OrientationInterpolator1954 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1954.SetKey([0,0.5,1]);
OrientationInterpolator1954.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1954]);
OrientationInterpolator1955 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1955.SetKey([0,0.5,1]);
OrientationInterpolator1955.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1955]);
OrientationInterpolator1956 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1956.SetKey([0,0.5,1]);
OrientationInterpolator1956.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1956]);
OrientationInterpolator1957 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1957.SetKey([0,0.5,1]);
OrientationInterpolator1957.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1957]);
OrientationInterpolator1958 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1958.SetKey([0,0.5,1]);
OrientationInterpolator1958.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1958]);
OrientationInterpolator1959 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1959.SetKey([0,0.5,1]);
OrientationInterpolator1959.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1959]);
OrientationInterpolator1960 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1960.SetKey([0,0.5,1]);
OrientationInterpolator1960.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1960]);
OrientationInterpolator1961 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1961.SetKey([0,0.5,1]);
OrientationInterpolator1961.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1961]);
OrientationInterpolator1962 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1962.SetKey([0,0.5,1]);
OrientationInterpolator1962.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1962]);
OrientationInterpolator1963 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1963.SetKey([0,0.5,1]);
OrientationInterpolator1963.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1963]);
OrientationInterpolator1964 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1964.SetKey([0,0.5,1]);
OrientationInterpolator1964.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1964]);
OrientationInterpolator1965 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1965.SetKey([0,0.5,1]);
OrientationInterpolator1965.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1965]);
OrientationInterpolator1966 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1966.SetKey([0,0.5,1]);
OrientationInterpolator1966.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1966]);
OrientationInterpolator1967 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1967.SetKey([0,0.5,1]);
OrientationInterpolator1967.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1967]);
OrientationInterpolator1968 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1968.SetKey([0,0.5,1]);
OrientationInterpolator1968.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1968]);
OrientationInterpolator1969 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1969.SetKey([0,0.5,1]);
OrientationInterpolator1969.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1969]);
OrientationInterpolator1970 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1970.SetKey([0,0.5,1]);
OrientationInterpolator1970.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1970]);
OrientationInterpolator1971 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1971.SetKey([0,0.5,1]);
OrientationInterpolator1971.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1971]);
OrientationInterpolator1972 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1972.SetKey([0,0.5,1]);
OrientationInterpolator1972.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1972]);
OrientationInterpolator1973 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1973.SetKey([0,0.5,1]);
OrientationInterpolator1973.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1973]);
OrientationInterpolator1974 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1974.SetKey([0,0.5,1]);
OrientationInterpolator1974.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1974]);
OrientationInterpolator1975 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1975.SetKey([0,0.5,1]);
OrientationInterpolator1975.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1975]);
OrientationInterpolator1976 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1976.SetKey([0,0.5,1]);
OrientationInterpolator1976.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1976]);
OrientationInterpolator1977 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1977.SetKey([0,0.5,1]);
OrientationInterpolator1977.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1977]);
OrientationInterpolator1978 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1978.SetKey([0,0.5,1]);
OrientationInterpolator1978.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1978]);
OrientationInterpolator1979 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1979.SetKey([0,0.5,1]);
OrientationInterpolator1979.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1979]);
OrientationInterpolator1980 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1980.SetKey([0,0.5,1]);
OrientationInterpolator1980.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1980]);
OrientationInterpolator1981 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1981.SetKey([0,0.5,1]);
OrientationInterpolator1981.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1981]);
OrientationInterpolator1982 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1982.SetKey([0,0.5,1]);
OrientationInterpolator1982.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1982]);
OrientationInterpolator1983 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1983.SetKey([0,0.5,1]);
OrientationInterpolator1983.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1983]);
OrientationInterpolator1984 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1984.SetKey([0,0.5,1]);
OrientationInterpolator1984.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1984]);
OrientationInterpolator1985 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1985.SetKey([0,0.5,1]);
OrientationInterpolator1985.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1985]);
OrientationInterpolator1986 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1986.SetKey([0,0.5,1]);
OrientationInterpolator1986.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1986]);
OrientationInterpolator1987 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1987.SetKey([0,0.5,1]);
OrientationInterpolator1987.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1987]);
OrientationInterpolator1988 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1988.SetKey([0,0.5,1]);
OrientationInterpolator1988.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1988]);
OrientationInterpolator1989 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1989.SetKey([0,0.5,1]);
OrientationInterpolator1989.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1989]);
OrientationInterpolator1990 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1990.SetKey([0,0.5,1]);
OrientationInterpolator1990.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1990]);
OrientationInterpolator1991 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1991.SetKey([0,0.5,1]);
OrientationInterpolator1991.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1991]);
OrientationInterpolator1992 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1992.SetKey([0,0.5,1]);
OrientationInterpolator1992.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1992]);
OrientationInterpolator1993 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1993.SetKey([0,0.5,1]);
OrientationInterpolator1993.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1993]);
OrientationInterpolator1994 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1994.SetKey([0,0.5,1]);
OrientationInterpolator1994.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1994]);
OrientationInterpolator1995 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1995.SetKey([0,0.5,1]);
OrientationInterpolator1995.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1995]);
OrientationInterpolator1996 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1996.SetKey([0,0.5,1]);
OrientationInterpolator1996.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1996]);
OrientationInterpolator1997 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1997.SetKey([0,0.5,1]);
OrientationInterpolator1997.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1997]);
OrientationInterpolator1998 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1998.SetKey([0,0.5,1]);
OrientationInterpolator1998.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1998]);
OrientationInterpolator1999 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1999.SetKey([0,0.5,1]);
OrientationInterpolator1999.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator1999]);
OrientationInterpolator2000 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2000.SetKey([0,0.5,1]);
OrientationInterpolator2000.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2000]);
OrientationInterpolator2001 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2001.SetKey([0,0.5,1]);
OrientationInterpolator2001.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2001]);
OrientationInterpolator2002 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2002.SetKey([0,0.5,1]);
OrientationInterpolator2002.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2002]);
OrientationInterpolator2003 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2003.SetKey([0,0.5,1]);
OrientationInterpolator2003.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2003]);
OrientationInterpolator2004 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2004.SetKey([0,0.5,1]);
OrientationInterpolator2004.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2004]);
OrientationInterpolator2005 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2005.SetKey([0,0.5,1]);
OrientationInterpolator2005.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2005]);
OrientationInterpolator2006 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2006.SetKey([0,0.5,1]);
OrientationInterpolator2006.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2006]);
OrientationInterpolator2007 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2007.SetKey([0,0.5,1]);
OrientationInterpolator2007.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2007]);
OrientationInterpolator2008 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2008.SetKey([0,0.5,1]);
OrientationInterpolator2008.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2008]);
OrientationInterpolator2009 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2009.SetKey([0,0.5,1]);
OrientationInterpolator2009.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2009]);
OrientationInterpolator2010 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2010.SetKey([0,0.5,1]);
OrientationInterpolator2010.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2010]);
OrientationInterpolator2011 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2011.SetKey([0,0.5,1]);
OrientationInterpolator2011.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2011]);
OrientationInterpolator2012 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2012.SetKey([0,0.5,1]);
OrientationInterpolator2012.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2012]);
OrientationInterpolator2013 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2013.SetKey([0,0.5,1]);
OrientationInterpolator2013.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2013]);
OrientationInterpolator2014 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2014.SetKey([0,0.5,1]);
OrientationInterpolator2014.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2014]);
OrientationInterpolator2015 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2015.SetKey([0,0.5,1]);
OrientationInterpolator2015.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2015]);
OrientationInterpolator2016 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2016.SetKey([0,0.5,1]);
OrientationInterpolator2016.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2016]);
OrientationInterpolator2017 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2017.SetKey([0,0.5,1]);
OrientationInterpolator2017.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2017]);
OrientationInterpolator2018 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2018.SetKey([0,0.5,1]);
OrientationInterpolator2018.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2018]);
OrientationInterpolator2019 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2019.SetKey([0,0.5,1]);
OrientationInterpolator2019.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2019]);
OrientationInterpolator2020 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2020.SetKey([0,0.5,1]);
OrientationInterpolator2020.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2020]);
OrientationInterpolator2021 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2021.SetKey([0,0.5,1]);
OrientationInterpolator2021.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2021]);
OrientationInterpolator2022 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2022.SetKey([0,0.5,1]);
OrientationInterpolator2022.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2022]);
OrientationInterpolator2023 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2023.SetKey([0,0.5,1]);
OrientationInterpolator2023.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2023]);
OrientationInterpolator2024 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2024.SetKey([0,0.5,1]);
OrientationInterpolator2024.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2024]);
OrientationInterpolator2025 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2025.SetKey([0,0.5,1]);
OrientationInterpolator2025.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2025]);
OrientationInterpolator2026 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2026.SetKey([0,0.5,1]);
OrientationInterpolator2026.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2026]);
OrientationInterpolator2027 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2027.SetKey([0,0.5,1]);
OrientationInterpolator2027.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2027]);
OrientationInterpolator2028 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2028.SetKey([0,0.5,1]);
OrientationInterpolator2028.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2028]);
OrientationInterpolator2029 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2029.SetKey([0,0.5,1]);
OrientationInterpolator2029.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2029]);
OrientationInterpolator2030 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2030.SetKey([0,0.5,1]);
OrientationInterpolator2030.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2030]);
OrientationInterpolator2031 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2031.SetKey([0,0.5,1]);
OrientationInterpolator2031.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2031]);
OrientationInterpolator2032 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2032.SetKey([0,0.5,1]);
OrientationInterpolator2032.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1941.AddChildren([OrientationInterpolator2032]);
{ .AddChildren }
Group29.AddChildren([Group1941]);
Group2033 := TGroupNode.Create;
TimeSensor2034 := TTimeSensorNode.Create;
TimeSensor2034.CycleInterval := 5.73;
TimeSensor2034.Loop := True;
{ .AddChildren }
Group2033.AddChildren([TimeSensor2034]);
OrientationInterpolator2035 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2035.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2035.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.015),Vector4(1,0,0,0.17),Vector4(-1,0,0,0.025),Vector4(1,0,0,0.01),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2035]);
OrientationInterpolator2036 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2036.SetKey([0,0.5,1]);
OrientationInterpolator2036.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2036]);
OrientationInterpolator2037 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2037.SetKey([0,0.5,1]);
OrientationInterpolator2037.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2037]);
OrientationInterpolator2038 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2038.SetKey([0,0.5,1]);
OrientationInterpolator2038.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2038]);
OrientationInterpolator2039 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2039.SetKey([0,0.5,1]);
OrientationInterpolator2039.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2039]);
OrientationInterpolator2040 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2040.SetKey([0,0.5,1]);
OrientationInterpolator2040.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2040]);
OrientationInterpolator2041 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2041.SetKey([0,0.5,1]);
OrientationInterpolator2041.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2041]);
OrientationInterpolator2042 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2042.SetKey([0,0.5,1]);
OrientationInterpolator2042.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,-1,0.25),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2042]);
OrientationInterpolator2043 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2043.SetKey([0,0.5,1]);
OrientationInterpolator2043.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2043]);
OrientationInterpolator2044 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2044.SetKey([0,0.5,1]);
OrientationInterpolator2044.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2044]);
OrientationInterpolator2045 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2045.SetKey([0,0.5,1]);
OrientationInterpolator2045.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2045]);
OrientationInterpolator2046 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2046.SetKey([0,0.5,1]);
OrientationInterpolator2046.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2046]);
OrientationInterpolator2047 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2047.SetKey([0,0.5,1]);
OrientationInterpolator2047.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2047]);
OrientationInterpolator2048 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2048.SetKey([0,0.5,1]);
OrientationInterpolator2048.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2048]);
OrientationInterpolator2049 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2049.SetKey([0,0.5,1]);
OrientationInterpolator2049.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2049]);
OrientationInterpolator2050 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2050.SetKey([0,0.4,0.7,1]);
OrientationInterpolator2050.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.5),Vector4(1,0,0,0.45),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2050]);
OrientationInterpolator2051 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2051.SetKey([0,0.4,0.7,1]);
OrientationInterpolator2051.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.5),Vector4(1,0,0,0.45),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2051]);
OrientationInterpolator2052 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2052.SetKey([0,0.5,1]);
OrientationInterpolator2052.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2052]);
OrientationInterpolator2053 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2053.SetKey([0,0.5,1]);
OrientationInterpolator2053.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2053]);
OrientationInterpolator2054 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2054.SetKey([0,0.5,1]);
OrientationInterpolator2054.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2054]);
PositionInterpolator2055 := TPositionInterpolatorNode.Create;
PositionInterpolator2055.SetKey([0,0.5,1]);
PositionInterpolator2055.SetKeyValue([Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0)]);
{ .AddChildren }
Group2033.AddChildren([PositionInterpolator2055]);
OrientationInterpolator2056 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2056.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2056.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2056]);
OrientationInterpolator2057 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2057.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2057.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2057]);
OrientationInterpolator2058 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2058.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2058.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2058]);
OrientationInterpolator2059 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2059.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2059.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2059]);
OrientationInterpolator2060 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2060.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2060.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2060]);
OrientationInterpolator2061 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2061.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2061.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2061]);
OrientationInterpolator2062 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2062.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2062.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0),Vector4(0,1,0,0),Vector4(0,1,0,0),Vector4(-1,0,0,0),Vector4(0,-1,0,0),Vector4(0,1,0,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2062]);
OrientationInterpolator2063 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2063.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2063.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2063]);
OrientationInterpolator2064 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2064.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2064.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.5),Vector4(1,0,0,0.1),Vector4(1,0,0,0.27),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2064]);
OrientationInterpolator2065 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2065.SetKey([0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2065.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0.1),Vector4(0,0,1,0.2),Vector4(0,0,1,0.3),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2065]);
OrientationInterpolator2066 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2066.SetKey([0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2066.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0.4),Vector4(0,0,1,0.32),Vector4(0,0,1,0.25),Vector4(0,0,1,0.2),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2066]);
OrientationInterpolator2067 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2067.SetKey([0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2067.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0.2),Vector4(0,0,1,0.3),Vector4(0,0,1,0.35),Vector4(0,0,1,0.2),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2033.AddChildren([OrientationInterpolator2067]);
{ .AddChildren }
Group29.AddChildren([Group2033]);
Group2068 := TGroupNode.Create;
TimeSensor2069 := TTimeSensorNode.Create;
TimeSensor2069.CycleInterval := 5.73;
TimeSensor2069.Loop := True;
{ .AddChildren }
Group2068.AddChildren([TimeSensor2069]);
OrientationInterpolator2070 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2070.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2070.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.5),Vector4(-1,0,0,0.7),Vector4(1,0,0,0.75),Vector4(-1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2070]);
OrientationInterpolator2071 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2071.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2071.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,1.5),Vector4(0,0,1,0),Vector4(-1,0,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2071]);
OrientationInterpolator2072 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2072.SetKey([0,0.5,1]);
OrientationInterpolator2072.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2072]);
OrientationInterpolator2073 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2073.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2073.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,1.5),Vector4(0,0,1,0),Vector4(1,0,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2073]);
OrientationInterpolator2074 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2074.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2074.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,1.5),Vector4(0,0,1,0),Vector4(1,0,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2074]);
OrientationInterpolator2075 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2075.SetKey([0,0.5,1]);
OrientationInterpolator2075.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2075]);
OrientationInterpolator2076 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2076.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2076.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,1.5),Vector4(0,0,1,0),Vector4(-1,0,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2076]);
OrientationInterpolator2077 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2077.SetKey([0,0.5,1]);
OrientationInterpolator2077.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2077]);
OrientationInterpolator2078 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2078.SetKey([0,0.5,1]);
OrientationInterpolator2078.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2078]);
OrientationInterpolator2079 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2079.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2079.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,1.5),Vector4(0,0,1,0),Vector4(-1,0,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2079]);
OrientationInterpolator2080 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2080.SetKey([0,0.5,1]);
OrientationInterpolator2080.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2080]);
OrientationInterpolator2081 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2081.SetKey([0,0.5,1]);
OrientationInterpolator2081.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2081]);
OrientationInterpolator2082 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2082.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2082.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,1.5),Vector4(0,0,1,0),Vector4(1,0,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2082]);
OrientationInterpolator2083 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2083.SetKey([0,0.5,1]);
OrientationInterpolator2083.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2083]);
OrientationInterpolator2084 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2084.SetKey([0,0.25,0.55,1]);
OrientationInterpolator2084.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,0.55),Vector4(-1,0,0,1.05),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2084]);
OrientationInterpolator2085 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2085.SetKey([0,0.5,1]);
OrientationInterpolator2085.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2085]);
OrientationInterpolator2086 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2086.SetKey([0,0.5,1]);
OrientationInterpolator2086.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2086]);
OrientationInterpolator2087 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2087.SetKey([0,0.5,1]);
OrientationInterpolator2087.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2087]);
PositionInterpolator2088 := TPositionInterpolatorNode.Create;
PositionInterpolator2088.SetKey([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2088.SetKeyValue([Vector3(0,0,0),Vector3(0,-0.15,0),Vector3(0,-0.7,0),Vector3(0,-0.15,0),Vector3(0,0,0),Vector3(0,-0.15,0),Vector3(0,-0.7,0),Vector3(0,-0.15,0),Vector3(0,0,0)]);
{ .AddChildren }
Group2068.AddChildren([PositionInterpolator2088]);
OrientationInterpolator2089 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2089.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2089.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2089]);
OrientationInterpolator2090 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2090.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2090.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2090]);
OrientationInterpolator2091 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2091.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2091.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2091]);
OrientationInterpolator2092 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2092.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2092.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2092]);
OrientationInterpolator2093 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2093.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2093.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2093]);
OrientationInterpolator2094 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2094.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2094.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2094]);
OrientationInterpolator2095 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2095.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2095.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2095]);
OrientationInterpolator2096 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2096.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2096.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.25),Vector4(1,0,0,0.3),Vector4(1,0,0,0.27),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2096]);
OrientationInterpolator2097 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2097.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2097.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.25),Vector4(1,0,0,0.3),Vector4(1,0,0,0.27),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2068.AddChildren([OrientationInterpolator2097]);
{ .AddChildren }
Group29.AddChildren([Group2068]);
Group2098 := TGroupNode.Create;
TimeSensor2099 := TTimeSensorNode.Create;
TimeSensor2099.CycleInterval := 5.73;
TimeSensor2099.Loop := True;
{ .AddChildren }
Group2098.AddChildren([TimeSensor2099]);
OrientationInterpolator2100 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2100.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2100.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2100]);
OrientationInterpolator2101 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2101.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2101.SetKeyValue([Vector4(0,0,1,0),Vector4(0,-1,0,1.5),Vector4(0,0,1,0),Vector4(0,1,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2101]);
OrientationInterpolator2102 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2102.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2102.SetKeyValue([Vector4(0,0,1,0),Vector4(0,1,0,1.5),Vector4(0,0,1,0),Vector4(0,-1,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2102]);
OrientationInterpolator2103 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2103.SetKey([0,0.5,1]);
OrientationInterpolator2103.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2103]);
OrientationInterpolator2104 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2104.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2104.SetKeyValue([Vector4(0,0,1,0),Vector4(0,1,0,1.5),Vector4(0,0,1,0),Vector4(0,-1,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2104]);
OrientationInterpolator2105 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2105.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2105.SetKeyValue([Vector4(0,0,1,0),Vector4(0,-1,0,1.5),Vector4(0,0,1,0),Vector4(0,1,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2105]);
OrientationInterpolator2106 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2106.SetKey([0,0.5,1]);
OrientationInterpolator2106.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2106]);
OrientationInterpolator2107 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2107.SetKey([0,0.5,1]);
OrientationInterpolator2107.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2107]);
OrientationInterpolator2108 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2108.SetKey([0,0.5,1]);
OrientationInterpolator2108.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2108]);
OrientationInterpolator2109 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2109.SetKey([0,0.5,1]);
OrientationInterpolator2109.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2109]);
OrientationInterpolator2110 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2110.SetKey([0,0.5,1]);
OrientationInterpolator2110.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2110]);
OrientationInterpolator2111 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2111.SetKey([0,0.5,1]);
OrientationInterpolator2111.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2111]);
OrientationInterpolator2112 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2112.SetKey([0,0.5,1]);
OrientationInterpolator2112.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2112]);
OrientationInterpolator2113 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2113.SetKey([0,0.5,1]);
OrientationInterpolator2113.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2113]);
OrientationInterpolator2114 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2114.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2114.SetKeyValue([Vector4(0,0,1,0),Vector4(0,1,0,1.5),Vector4(0,0,1,0),Vector4(0,-1,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2114]);
OrientationInterpolator2115 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2115.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2115.SetKeyValue([Vector4(0,0,1,0),Vector4(0,-1,0,1.5),Vector4(0,0,1,0),Vector4(0,1,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2115]);
OrientationInterpolator2116 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2116.SetKey([0,0.5,1]);
OrientationInterpolator2116.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2116]);
OrientationInterpolator2117 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2117.SetKey([0,0.5,1]);
OrientationInterpolator2117.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2117]);
PositionInterpolator2118 := TPositionInterpolatorNode.Create;
PositionInterpolator2118.SetKey([0,0.5,1]);
PositionInterpolator2118.SetKeyValue([Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0)]);
{ .AddChildren }
Group2098.AddChildren([PositionInterpolator2118]);
OrientationInterpolator2119 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2119.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2119.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2119]);
OrientationInterpolator2120 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2120.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2120.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2120]);
OrientationInterpolator2121 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2121.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2121.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2121]);
OrientationInterpolator2122 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2122.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2122.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2122]);
OrientationInterpolator2123 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2123.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2123.SetKeyValue([Vector4(0,1,0,0),Vector4(0,-1,0,0.1),Vector4(0,1,0,0),Vector4(0,1,0,0.24),Vector4(0,-1,0,0.4),Vector4(0,1,0,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2123]);
OrientationInterpolator2124 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2124.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2124.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2124]);
OrientationInterpolator2125 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2125.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2125.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2125]);
OrientationInterpolator2126 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2126.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2126.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2126]);
OrientationInterpolator2127 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2127.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2127.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2098.AddChildren([OrientationInterpolator2127]);
{ .AddChildren }
Group29.AddChildren([Group2098]);
Group2128 := TGroupNode.Create;
TimeSensor2129 := TTimeSensorNode.Create;
TimeSensor2129.CycleInterval := 5.73;
TimeSensor2129.Loop := True;
{ .AddChildren }
Group2128.AddChildren([TimeSensor2129]);
OrientationInterpolator2130 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2130.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2130.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2130]);
OrientationInterpolator2131 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2131.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2131.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2131]);
OrientationInterpolator2132 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2132.SetKey([0,0.5,1]);
OrientationInterpolator2132.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2132]);
OrientationInterpolator2133 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2133.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2133.SetKeyValue([Vector4(0,0,-1,0),Vector4(0,0,-1,1.5),Vector4(0,0,1,0),Vector4(0,0,-1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2133]);
OrientationInterpolator2134 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2134.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2134.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,-1,1.5),Vector4(0,0,1,0),Vector4(0,0,-1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2134]);
OrientationInterpolator2135 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2135.SetKey([0,0.5,1]);
OrientationInterpolator2135.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2135]);
OrientationInterpolator2136 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2136.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2136.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2136]);
OrientationInterpolator2137 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2137.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2137.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,-1,1.5),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2137]);
OrientationInterpolator2138 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2138.SetKey([0,0.5,1]);
OrientationInterpolator2138.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2138]);
OrientationInterpolator2139 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2139.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2139.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,-1,1.5),Vector4(0,0,-1,3),Vector4(0,0,-1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2139]);
OrientationInterpolator2140 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2140.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2140.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0),Vector4(0,0,-1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2140]);
OrientationInterpolator2141 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2141.SetKey([0,0.5,1]);
OrientationInterpolator2141.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2141]);
OrientationInterpolator2142 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2142.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2142.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,3),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2142]);
OrientationInterpolator2143 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2143.SetKey([0,0.5,1]);
OrientationInterpolator2143.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2143]);
OrientationInterpolator2144 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2144.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2144.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.25),Vector4(0,0,1,0),Vector4(0,0,-1,1.25),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2144]);
OrientationInterpolator2145 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2145.SetKey([0,0.5,1]);
OrientationInterpolator2145.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2145]);
OrientationInterpolator2146 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2146.SetKey([0,0.5,1]);
OrientationInterpolator2146.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2146]);
OrientationInterpolator2147 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2147.SetKey([0,0.5,1]);
OrientationInterpolator2147.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2147]);
PositionInterpolator2148 := TPositionInterpolatorNode.Create;
PositionInterpolator2148.SetKey([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2148.SetKeyValue([Vector3(0,0,0),Vector3(0,-0.25,0),Vector3(0,-0.8,0),Vector3(0,-0.25,0),Vector3(0,0,0),Vector3(0,-0.25,0),Vector3(0,-0.8,0),Vector3(0,-0.25,0),Vector3(0,0,0)]);
{ .AddChildren }
Group2128.AddChildren([PositionInterpolator2148]);
OrientationInterpolator2149 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2149.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2149.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0.2),Vector4(0,0,1,0.22),Vector4(0,0,1,0.2),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2149]);
OrientationInterpolator2150 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2150.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2150.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0.05),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2150]);
OrientationInterpolator2151 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2151.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2151.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,-0.2),Vector4(0,0,1,-0.22),Vector4(0,0,1,-0.2),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2151]);
OrientationInterpolator2152 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2152.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2152.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,-0.05),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2152]);
OrientationInterpolator2153 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2153.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2153.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2153]);
OrientationInterpolator2154 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2154.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2154.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2154]);
OrientationInterpolator2155 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2155.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2155.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2155]);
OrientationInterpolator2156 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2156.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2156.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2156]);
OrientationInterpolator2157 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2157.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2157.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2128.AddChildren([OrientationInterpolator2157]);
{ .AddChildren }
Group29.AddChildren([Group2128]);
Group2158 := TGroupNode.Create;
TimeSensor2159 := TTimeSensorNode.Create;
TimeSensor2159.CycleInterval := 1.73;
TimeSensor2159.Loop := True;
{ .AddChildren }
Group2158.AddChildren([TimeSensor2159]);
OrientationInterpolator2160 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2160.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2160.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2160]);
OrientationInterpolator2161 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2161.SetKey([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator2161.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.3533),Vector4(-1,0,0,0.1072),Vector4(1,0,0,0.2612),Vector4(1,0,0,0.1268),Vector4(-1,0,0,0.01793),Vector4(-1,0,0,0.05824),Vector4(-1,0,0,0.2398),Vector4(-1,0,0,0.35),Vector4(-1,0,0,0.3322),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2161]);
OrientationInterpolator2162 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2162.SetKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2162.SetKeyValue([Vector4(1,0,0,0.8573),Vector4(1,0,0,0.8926),Vector4(1,0,0,0.5351),Vector4(1,0,0,0.1756),Vector4(1,0,0,0.1194),Vector4(1,0,0,0.3153),Vector4(1,0,0,0.09354),Vector4(1,0,0,0.08558),Vector4(1,0,0,0.2475),Vector4(1,0,0,0.8573)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2162]);
OrientationInterpolator2163 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2163.SetKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2163.SetKeyValue([Vector4(-0.5831,0.03511,0.8116,0.1481),Vector4(-0.995,0.02296,0.09674,0.4683),Vector4(-1,0.00192,0.007964,0.4732),Vector4(-0.998,-0.0158,-0.06102,0.5079),Vector4(-0.9911,-0.03541,-0.1286,0.5419),Vector4(-0.9131,-0.06243,-0.403,0.3361),Vector4(-0.4306,-0.07962,-0.899,0.07038),Vector4(1,0,0,0.2571),Vector4(0.9891,-0.02805,0.1444,0.3879),Vector4(-0.5831,0.03511,0.8116,0.1481)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2163]);
OrientationInterpolator2164 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2164.SetKey([0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator2164.SetKeyValue([Vector4(-1,0,0,0.06714),Vector4(-1,0,0,0.2152),Vector4(-1,0,0,0.3184),Vector4(-1,0,0,0.4717),Vector4(-1,0,0,0.2912),Vector4(1,0,0,0.1222),Vector4(-1,0,0,0.06714)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2164]);
OrientationInterpolator2165 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2165.SetKey([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2165.SetKeyValue([Vector4(1,0,0,0.3226),Vector4(1,0,0,0.1556),Vector4(1,0,0,0.08678),Vector4(1,0,0,0.8751),Vector4(1,0,0,1.131),Vector4(1,0,0,0.09961),Vector4(1,0,0,0.3942),Vector4(1,0,0,0.3226)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2165]);
OrientationInterpolator2166 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2166.SetKey([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2166.SetKeyValue([Vector4(-0.873,0.06094,0.484,0.2865),Vector4(0.9963,-0.01057,0.08481,0.2488),Vector4(0.9965,0.01591,-0.08222,0.3836),Vector4(-0.7018,-0.03223,-0.7117,0.1289),Vector4(-1,0,0,0.5518),Vector4(-0.9964,0.02231,0.0817,0.5351),Vector4(-0.9809,0.04912,0.1881,0.5204),Vector4(-0.873,0.06094,0.484,0.2865)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2166]);
OrientationInterpolator2167 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2167.SetKey([0,0.5,1]);
OrientationInterpolator2167.SetKeyValue([Vector4(0,0,-1,0.1056),Vector4(0,0,1,0.09018),Vector4(0,0,-1,0.1056)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2167]);
OrientationInterpolator2168 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2168.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator2168.SetKeyValue([Vector4(-0.8129,0.4759,-0.3357,0.1346),Vector4(0.1533,-0.9878,0.02582,0.3902),Vector4(-0.5701,0.7604,-0.311,0.366),Vector4(-0.8129,0.4759,-0.3357,0.1346)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2168]);
OrientationInterpolator2169 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2169.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator2169.SetKeyValue([Vector4(-1,0,0,0.411508),Vector4(-1,0,0,0.0925011),Vector4(-1,0,0,0.572568),Vector4(-1,0,0,0.411508)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2169]);
OrientationInterpolator2170 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2170.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator2170.SetKeyValue([Vector4(-1,0,0,0.09346),Vector4(1,0,0,0.3197),Vector4(-1,0,0,0.1564),Vector4(-1,0,0,0.09346)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2170]);
OrientationInterpolator2171 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2171.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator2171.SetKeyValue([Vector4(0,-1,0,0.461076),Vector4(-0.330195,-0.927451,0.175516,0.538852),Vector4(0.0327774,-0.999314,-0.0172185,0.492033),Vector4(0,-1,0,0.461076)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2171]);
OrientationInterpolator2172 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2172.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator2172.SetKeyValue([Vector4(-1,0,0,0.0659878),Vector4(-1,0,0,0.488383),Vector4(-1,0,0,0.0177536),Vector4(-1,0,0,0.0659878)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2172]);
OrientationInterpolator2173 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2173.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator2173.SetKeyValue([Vector4(1,0,0,0.1189),Vector4(-1,0,0,0.1861),Vector4(1,0,0,0.3357),Vector4(1,0,0,0.1189)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2173]);
OrientationInterpolator2174 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2174.SetKey([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator2174.SetKeyValue([Vector4(0,-1,0,0.08642),Vector4(0,1,0,0.1825),Vector4(0,1,0,0.1505),Vector4(0,1,0,0.1053),Vector4(0,1,0,0.04391),Vector4(0,-1,0,0.03119),Vector4(0,-1,0,0.07936),Vector4(0,-1,0,0.1616),Vector4(0,-1,0,0.155),Vector4(0,-1,0,0.08642)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2174]);
OrientationInterpolator2175 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2175.SetKey([0,1]);
OrientationInterpolator2175.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2175]);
OrientationInterpolator2176 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2176.SetKey([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator2176.SetKeyValue([Vector4(0,1,0,0.0826),Vector4(-0.01972,-0.5974,0.8017,0.08231),Vector4(0.009296,-0.9648,0.2627,0.1734),Vector4(-0.01238,0.9549,-0.2968,0.08732),Vector4(-0.008125,0.9691,-0.2463,0.158),Vector4(0,1,0,0.0826)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2176]);
OrientationInterpolator2177 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2177.SetKey([0,1]);
OrientationInterpolator2177.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2177]);
PositionInterpolator2178 := TPositionInterpolatorNode.Create;
PositionInterpolator2178.SetKey([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator2178.SetKeyValue([Vector3(0,-0.00928,0),Vector3(0,-0.003858,0),Vector3(0,-0.008847,0),Vector3(0,-0.01486,0),Vector3(0,-0.02641,0),Vector3(0,-0.03934,0),Vector3(0,-0.0502,0),Vector3(0,-0.07469,0),Vector3(0,-0.02732,0),Vector3(0,-0.01608,0),Vector3(0,-0.01129,0),Vector3(0,-0.005819,0),Vector3(0,-0.002004,0),Vector3(0,-0.002579,0),Vector3(0,-0.0143,0),Vector3(0,-0.03799,0),Vector3(0,-0.05648,0),Vector3(0,-0.045,0),Vector3(0,-0.00928,0)]);
{ .AddChildren }
Group2158.AddChildren([PositionInterpolator2178]);
OrientationInterpolator2179 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2179.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2179.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2179]);
OrientationInterpolator2180 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2180.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2180.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2180]);
OrientationInterpolator2181 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2181.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2181.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2181]);
OrientationInterpolator2182 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2182.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2182.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2182]);
OrientationInterpolator2183 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2183.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2183.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2183]);
OrientationInterpolator2184 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2184.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2184.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2184]);
OrientationInterpolator2185 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2185.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2185.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2185]);
OrientationInterpolator2186 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2186.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2186.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.25),Vector4(1,0,0,0.5),Vector4(1,0,0,0.7),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2186]);
OrientationInterpolator2187 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2187.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2187.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.25),Vector4(1,0,0,0.5),Vector4(1,0,0,0.7),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2158.AddChildren([OrientationInterpolator2187]);
{ .AddChildren }
Group29.AddChildren([Group2158]);
Group2188 := TGroupNode.Create;
TimeSensor2189 := TTimeSensorNode.Create;
TimeSensor2189.CycleInterval := 0.9;
TimeSensor2189.Loop := True;
{ .AddChildren }
Group2188.AddChildren([TimeSensor2189]);
OrientationInterpolator2190 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2190.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2190.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2190]);
OrientationInterpolator2191 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2191.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2191.SetKeyValue([Vector4(-0.99,0.033,0.04,1.42),Vector4(-0.99,0.1328,0.067,0.42),Vector4(0.99,0.014,0.009,0.9),Vector4(-0.99,0.0703,0.05,0.7),Vector4(-0.99,0.033,0.04,1.42)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2191]);
OrientationInterpolator2192 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2192.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2192.SetKeyValue([Vector4(1,0,0,1.01),Vector4(1,0,0,0.426),Vector4(1,0,0,0.705),Vector4(1,0,0,2.179),Vector4(1,0,0,1.01)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2192]);
OrientationInterpolator2193 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2193.SetKey([0,0.22,0.3,0.4,1]);
OrientationInterpolator2193.SetKeyValue([Vector4(1,0,0,0.0374),Vector4(-1,0,0,0.1037),Vector4(-1,0,0,0.4328),Vector4(1,0,0,0.1929),Vector4(1,0,0,0.03574)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2193]);
OrientationInterpolator2194 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2194.SetKey([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2194.SetKeyValue([Vector4(0.99,-0.014,0.009,0.9),Vector4(-0.99,-0.0703,-0.05,0.7),Vector4(-0.99,-0.033,0.04,1.42),Vector4(-0.99,-0.1328,-0.067,0.42),Vector4(0.99,-0.014,0.009,0.9)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2194]);
OrientationInterpolator2195 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2195.SetKey([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2195.SetKeyValue([Vector4(1,0,0,0.705),Vector4(1,0,0,2.179),Vector4(1,0,0,1.01),Vector4(1,0,0,0.426),Vector4(1,0,0,0.705)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2195]);
OrientationInterpolator2196 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2196.SetKey([0,0.4,0.71,0.8,0.82,1]);
OrientationInterpolator2196.SetKeyValue([Vector4(1,0,0,0.2323),Vector4(-1,0,0,0.07843),Vector4(-1,0,0,0.32),Vector4(-1,0,0,0.374),Vector4(-1,0,0,0.3478),Vector4(1,0,0,0.2323)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2196]);
OrientationInterpolator2197 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2197.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2197.SetKeyValue([Vector4(0.99,-0.074,0.25,1.5),Vector4(0.99,-0.092,0.44,0.3),Vector4(-0.99,0.136,0.25,0.85),Vector4(0.99,-0.081,0.38,0.4),Vector4(0.99,-0.074,0.25,1.5)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2197]);
OrientationInterpolator2198 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2198.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2198.SetKeyValue([Vector4(-1,0,0,1.85),Vector4(-0.99,-0.19,0.18,1.35),Vector4(-1,0,0,0.975),Vector4(-0.99,-0.09,-0.02,1.55),Vector4(-1,0,0,1.85)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2198]);
OrientationInterpolator2199 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2199.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2199.SetKeyValue([Vector4(-0.25,-1,0.08,0.14),Vector4(0.25,1,0.08,0.14),Vector4(0,0,1,0),Vector4(-0.25,1,0.08,-0.14),Vector4(-0.25,1,0.08,0.14)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2199]);
OrientationInterpolator2200 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2200.SetKey([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2200.SetKeyValue([Vector4(-0.99,-0.136,-0.25,0.85),Vector4(0.99,0.081,-0.38,0.4),Vector4(0.99,0.074,-0.25,1.5),Vector4(0.99,0.081,-0.38,0.4),Vector4(-0.99,-0.136,-0.25,0.85)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2200]);
OrientationInterpolator2201 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2201.SetKey([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2201.SetKeyValue([Vector4(-1,0,0,0.975),Vector4(-0.99,0.09,0.02,1.55),Vector4(-1,0,0,1.85),Vector4(-0.99,0.19,-0.18,1.35),Vector4(-1,0,0,0.975)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2201]);
OrientationInterpolator2202 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2202.SetKey([0,1]);
OrientationInterpolator2202.SetKeyValue([Vector4(-0.917742,-0.237244,-0.318536,0.214273),Vector4(-0.917742,-0.237244,-0.318536,0.214273)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2202]);
OrientationInterpolator2203 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2203.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2203.SetKeyValue([Vector4(0,-1,0,0.125),Vector4(0,0,1,0),Vector4(0,1,0,0.125),Vector4(0,0,1,0),Vector4(0,-1,0,0.125)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2203]);
OrientationInterpolator2204 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2204.SetKey([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2204.SetKeyValue([Vector4(1,0,0,0.08),Vector4(1,0,0,0.12),Vector4(1,0,0,0.3),Vector4(1,0,0,0.3),Vector4(1,0,0,0.08)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2204]);
OrientationInterpolator2205 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2205.SetKey([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2205.SetKeyValue([Vector4(0.7,0,0,0.4),Vector4(-0.7,-0.7,0,0.4),Vector4(0,0,0,0.4),Vector4(-0.7,0.7,0,0.4),Vector4(0.7,0,0,0.4)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2205]);
OrientationInterpolator2206 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2206.SetKey([0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator2206.SetKeyValue([Vector4(0.97,0.65,0.086,0.5),Vector4(0.9,0.003,-0.02,0.38),Vector4(0.95,-0.68,-0.086,0.5),Vector4(0.9,0.004,-0.025,0.4),Vector4(0.97,0.65,0.086,0.5)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2206]);
OrientationInterpolator2207 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2207.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator2207.SetKeyValue([Vector4(1,0,0,0.06),Vector4(1,0,0,0.167),Vector4(1,0,0,0.06),Vector4(1,0,0,0.168),Vector4(1,0,0,0.06)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2207]);
PositionInterpolator2208 := TPositionInterpolatorNode.Create;
PositionInterpolator2208.SetKey([0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]);
PositionInterpolator2208.SetKeyValue([Vector3(0,-0.01,0),Vector3(0,-0.037,0),Vector3(0,-0.049,0),Vector3(0,-0.037,0),Vector3(0,-0.01,0),Vector3(0,-0.037,0),Vector3(0,-0.049,0),Vector3(0,-0.037,0),Vector3(0,-0.01,0)]);
{ .AddChildren }
Group2188.AddChildren([PositionInterpolator2208]);
OrientationInterpolator2209 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2209.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2209.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2209]);
OrientationInterpolator2210 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2210.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2210.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2210]);
OrientationInterpolator2211 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2211.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2211.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2211]);
OrientationInterpolator2212 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2212.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2212.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2212]);
OrientationInterpolator2213 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2213.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2213.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2213]);
OrientationInterpolator2214 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2214.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2214.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2214]);
OrientationInterpolator2215 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2215.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2215.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2215]);
OrientationInterpolator2216 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2216.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2216.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.25),Vector4(1,0,0,0.7),Vector4(1,0,0,0.27),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2216]);
OrientationInterpolator2217 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2217.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2217.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.25),Vector4(1,0,0,0.7),Vector4(1,0,0,0.27),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2188.AddChildren([OrientationInterpolator2217]);
{ .AddChildren }
Group29.AddChildren([Group2188]);
Group2218 := TGroupNode.Create;
TimeSensor2219 := TTimeSensorNode.Create;
TimeSensor2219.CycleInterval := 3.73;
TimeSensor2219.Loop := True;
{ .AddChildren }
Group2218.AddChildren([TimeSensor2219]);
OrientationInterpolator2220 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2220.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2220.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2220]);
OrientationInterpolator2221 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2221.SetKey([0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2221.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.6735),Vector4(-1,0,0,0.6735),Vector4(-1,0,0,0.3527),Vector4(-1,0,0,0.3038),Vector4(-1,0,0,0.07964),Vector4(1,0,0,1.3),Vector4(1,0,0,0.6509),Vector4(1,0,0,0.3001),Vector4(-1,0,0,0.2087),Vector4(-1,0,0,0.3756),Vector4(-1,0,0,0.3279),Vector4(-1,0,0,0.1193),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2221]);
OrientationInterpolator2222 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2222.SetKey([0,0.2,0.25,0.3,0.64,0.76,0.88,1]);
OrientationInterpolator2222.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,2.5),Vector4(1,0,0,1.7),Vector4(0,0,1,0),Vector4(1,0,0,0.9507),Vector4(1,0,0,0.5845),Vector4(1,0,0,0.9054),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2222]);
OrientationInterpolator2223 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2223.SetKey([0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2223.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,1.63),Vector4(-1,0,0,1.7),Vector4(-1,0,0,1.55),Vector4(-1,0,0,0.8943),Vector4(-1,0,0,0.3698),Vector4(0,0,1,0),Vector4(-1,0,0,0.4963),Vector4(-1,0,0,0.3829),Vector4(-1,0,0,0.5169),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2223]);
OrientationInterpolator2224 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2224.SetKey([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2224.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.625),Vector4(-1,0,0,0.625),Vector4(-1,0,0,0.3364),Vector4(-1,0,0,0.2742),Vector4(-1,0,0,0.05078),Vector4(1,0,0,0.2833),Vector4(1,0,0,0.6667),Vector4(1,0,0,0.2833),Vector4(-1,0,0,0.2108),Vector4(-1,0,0,0.375),Vector4(-1,0,0,0.3146),Vector4(-1,0,0,0.1174),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2224]);
OrientationInterpolator2225 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2225.SetKey([0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2225.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,2.047),Vector4(1,0,0,2.047),Vector4(0,0,1,0),Vector4(1,0,0,1.566),Vector4(1,0,0,0.5913),Vector4(1,0,0,0.9235),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2225]);
OrientationInterpolator2226 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2226.SetKey([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2226.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,4.349),Vector4(1,0,0,4.349),Vector4(1,0,0,4.615),Vector4(-1,0,0,0.9136),Vector4(-1,0,0,0.3614),Vector4(0,0,1,0),Vector4(-1,0,0,0.7869),Vector4(-1,0,0,0.3918),Vector4(-1,0,0,0.5433),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2226]);
OrientationInterpolator2227 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2227.SetKey([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2227.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,0.1892),Vector4(1,0,0,0.1892),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2227]);
OrientationInterpolator2228 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2228.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2228.SetKeyValue([Vector4(0,0,1,0),Vector4(-0.0585279,0.983903,-0.168849,1.85956),Vector4(-0.0585279,0.983903,-0.168849,1.85956),Vector4(-0.00222418,0.99801,-0.0630095,1.46072),Vector4(0,1,0,0.497349),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2228]);
OrientationInterpolator2229 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2229.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2229.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.04151),Vector4(-1,0,0,0.04151),Vector4(-1,0,0,0.5855),Vector4(-1,0,0,0.5852),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2229]);
OrientationInterpolator2230 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2230.SetKey([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2230.SetKeyValue([Vector4(0,0,1,0),Vector4(0.9992,0.02042,0.03558,4.688),Vector4(0.9992,0.02042,0.03558,4.688),Vector4(0.9989,-0.04623,0.005159,4.079),Vector4(-0.8687,-0.2525,-0.4261,1.501),Vector4(-0.941,-0.2893,-0.1754,0.4788),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2230]);
OrientationInterpolator2231 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2231.SetKey([0,0.48,0.52,0.64,0.76,0.88,1]);
OrientationInterpolator2231.SetKeyValue([Vector4(0,0,1,0),Vector4(0.0672928,0.989475,-0.128107,4.15574),Vector4(0.0672928,0.989475,-0.128107,4.15574),Vector4(0.00364942,0.999901,0.0135896,4.5822),Vector4(0,-1,0,0.655922),Vector4(-0.00050618,-0.999999,0.0012782,1.28397),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2231]);
OrientationInterpolator2232 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2232.SetKey([0,0.28,0.32,0.58,0.72,1]);
OrientationInterpolator2232.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,1.13),Vector4(-1,0,0,1.7),Vector4(-1,0,0,1.7),Vector4(-1,0,0,0.4),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2232]);
OrientationInterpolator2233 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2233.SetKey([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2233.SetKeyValue([Vector4(0,0,1,0),Vector4(-0.9987,0.02554,0.04498,1.57),Vector4(-0.9987,0.02554,0.04498,1.57),Vector4(1,0.0004113,0.003055,4.114),Vector4(-0.8413,0.3238,0.4329,1.453),Vector4(-0.877,0.4198,0.2337,0.6009),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2233]);
OrientationInterpolator2234 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2234.SetKey([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2234.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.5989),Vector4(-1,0,0,0.5989),Vector4(-1,0,0,0.3216),Vector4(1,0,0,0.06503),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2234]);
OrientationInterpolator2235 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2235.SetKey([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2235.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.1942),Vector4(-1,0,0,0.1942),Vector4(0,0,1,0),Vector4(1,0,0,0.2284),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2235]);
OrientationInterpolator2236 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2236.SetKey([0,0.22,0.28,0.34,0.71,0.88,1]);
OrientationInterpolator2236.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,1.05),Vector4(1,0,0,1.051),Vector4(-1,0,0,0.257),Vector4(1,0,0,0.2171),Vector4(1,0,0,0.3465),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2236]);
OrientationInterpolator2237 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2237.SetKey([0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator2237.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,0.3273),Vector4(1,0,0,0.3273),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2237]);
PositionInterpolator2238 := TPositionInterpolatorNode.Create;
PositionInterpolator2238.SetKey([0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator2238.SetKeyValue([Vector3(0,0,0),Vector3(0,-0.01264,-0.01289),Vector3(0,-0.04712,-0.03738),Vector3(-0.0003345,-0.1049,-0.05353),Vector3(-0.0005712,-0.1892,-0.06561),Vector3(-0.0008233,-0.286,-0.06276),Vector3(-0.0009591,-0.3795,-0.05148),Vector3(-0.00106,-0.4484,-0.03656),Vector3(-0.00106,-0.4484,-0.03656),Vector3(-0.001122,-0.25,-0.1499),Vector3(-0.0008616,-0.05,-0.06358),Vector3(-0.0005128,0.15,-0.05488),Vector3(0.0004779,0.55,0.02732),Vector3(0.0001728,1.385,0.006873),Vector3(0.00017,1.395,0.0069),Vector3(0,0.35,0.02148),Vector3(0,-0.01299,-0.01057),Vector3(0,-0.06932,-0.01064),Vector3(0.0001365,-0.1037,-0.005059),Vector3(0.0001279,-0.07198,-0.007596),Vector3(0.000141,-0.01626,-0.004935),Vector3(0,0,0)]);
{ .AddChildren }
Group2218.AddChildren([PositionInterpolator2238]);
OrientationInterpolator2239 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2239.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2239.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0.2),Vector4(0,0,1,0.22),Vector4(0,0,1,0.2),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2239]);
OrientationInterpolator2240 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2240.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2240.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0.05),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2240]);
OrientationInterpolator2241 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2241.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2241.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,-0.2),Vector4(0,0,1,-0.22),Vector4(0,0,1,-0.2),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2241]);
OrientationInterpolator2242 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2242.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2242.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,-0.05),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2242]);
OrientationInterpolator2243 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2243.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2243.SetKeyValue([Vector4(0,1,0,0),Vector4(0,-1,0,0.1),Vector4(0,1,0,0),Vector4(0,1,-1,0.24),Vector4(0,-1,0,0.4),Vector4(0,1,0,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2243]);
OrientationInterpolator2244 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2244.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2244.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,-0.1),Vector4(0,1,0,0),Vector4(0,1,0,0),Vector4(1,0,0,0.6),Vector4(0,1,0,0.1),Vector4(0,1,0,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2244]);
OrientationInterpolator2245 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2245.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2245.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0.8),Vector4(0,1,0,0),Vector4(0,1,0,0),Vector4(-1,0,0,0.6),Vector4(0,-1,0,0.8),Vector4(0,1,0,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2245]);
OrientationInterpolator2246 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2246.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2246.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.5),Vector4(1,0,0,1.1),Vector4(1,0,0,0.7),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2246]);
OrientationInterpolator2247 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2247.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2247.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.5),Vector4(1,0,0,1.1),Vector4(1,0,0,0.7),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2218.AddChildren([OrientationInterpolator2247]);
{ .AddChildren }
Group29.AddChildren([Group2218]);
Group2248 := TGroupNode.Create;
TimeSensor2249 := TTimeSensorNode.Create;
TimeSensor2249.CycleInterval := 3.73;
TimeSensor2249.Loop := True;
{ .AddChildren }
Group2248.AddChildren([TimeSensor2249]);
OrientationInterpolator2250 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2250.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2250.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0.2),Vector4(0,0,1,0.22),Vector4(0,0,1,0.2),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2250]);
OrientationInterpolator2251 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2251.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2251.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0.05),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2251]);
OrientationInterpolator2252 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2252.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2252.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.76),Vector4(-0.25,0,1,1.76),Vector4(0,0,1,1.256),Vector4(0,0,1,0.05),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2252]);
OrientationInterpolator2253 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2253.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2253.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,-0.55),Vector4(-1,0.25,0,2.55),Vector4(1,0,0,0),Vector4(1,0,0,0),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2253]);
OrientationInterpolator2254 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2254.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2254.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,1,0,0.55),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2254]);
OrientationInterpolator2255 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2255.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2255.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.5),Vector4(1,0,0,1.1),Vector4(1,0,0,0.7),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2255]);
OrientationInterpolator2256 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2256.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2256.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,-0.2),Vector4(0,0,1,-0.22),Vector4(0,0,1,-0.2),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2256]);
OrientationInterpolator2257 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2257.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2257.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,-0.05),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2257]);
OrientationInterpolator2258 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2258.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2258.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,-1.76),Vector4(0.25,0,1,-1.76),Vector4(0,0,1,-1.256),Vector4(0,0,1,-0.05),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2258]);
OrientationInterpolator2259 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2259.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2259.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,-0.55),Vector4(1,0.25,0,-2.55),Vector4(1,0,0,0),Vector4(1,0,0,0),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2259]);
OrientationInterpolator2260 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2260.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2260.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,1,0,-0.55),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2260]);
OrientationInterpolator2261 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2261.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2261.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.5),Vector4(1,0,0,1.1),Vector4(1,0,0,0.7),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2261]);
OrientationInterpolator2262 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2262.SetKey([0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2262.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.9),Vector4(-1,0,0,1.75),Vector4(-1,0,0,2.25),Vector4(-1,0,0,2),Vector4(1,0,0,0),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2262]);
OrientationInterpolator2263 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2263.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2263.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,1.95),Vector4(1,0,0,1.75),Vector4(-1,0,0,0.28),Vector4(1,0,0,0),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2263]);
OrientationInterpolator2264 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2264.SetKey([0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2264.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2264]);
OrientationInterpolator2265 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2265.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2265.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2265]);
OrientationInterpolator2266 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2266.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2266.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.95),Vector4(1,0,0,0.75),Vector4(-1,0,0,0.05),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2266]);
OrientationInterpolator2267 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2267.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2267.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.5),Vector4(-1,0,0,0.7),Vector4(1,0,0,0.75),Vector4(-1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2267]);
OrientationInterpolator2268 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2268.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2268.SetKeyValue([Vector4(0,1,0,0),Vector4(0,-1,0,0.1),Vector4(0,1,0,0),Vector4(0,1,-1,0.24),Vector4(0,-1,0,0.4),Vector4(0,1,0,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2268]);
OrientationInterpolator2269 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2269.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2269.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2269]);
OrientationInterpolator2270 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2270.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2270.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2270]);
OrientationInterpolator2271 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2271.SetKey([0,0.5,1]);
OrientationInterpolator2271.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2271]);
OrientationInterpolator2272 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2272.SetKey([0,0.5,1]);
OrientationInterpolator2272.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2272]);
OrientationInterpolator2273 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2273.SetKey([0,0.5,1]);
OrientationInterpolator2273.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2273]);
PositionInterpolator2274 := TPositionInterpolatorNode.Create;
PositionInterpolator2274.SetKey([0,0.5,1]);
PositionInterpolator2274.SetKeyValue([Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0)]);
{ .AddChildren }
Group2248.AddChildren([PositionInterpolator2274]);
OrientationInterpolator2275 := TOrientationInterpolatorNode.Create;
OrientationInterpolator2275.SetKey([0,0.25,0.55,1]);
OrientationInterpolator2275.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,0.7),Vector4(1,0,0,0.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group2248.AddChildren([OrientationInterpolator2275]);
{ .AddChildren }
Group29.AddChildren([Group2248]);
Group2276 := TGroupNode.Create;
Transform2277 := TTransformNode.Create;
Transform2277.Scale := Vector3(0.175,0.175,0.175);
Inline2278 := TInlineNode.Create;
Inline2278.Global := True;
Inline2278.SetUrl(['../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d','../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl']);
{ .AddChildren }
Transform2277.AddChildren([Inline2278]);
{ .AddChildren }
Group2276.AddChildren([Transform2277]);
Transform2279 := TTransformNode.Create;
Transform2279.Scale := Vector3(0.175,0.175,0.175);
{ .AddChildren }
Group2276.AddChildren([Transform2279]);
ProximitySensor2280 := TProximitySensorNode.Create;
ProximitySensor2280.Size := Vector3(500,100,500);
ProximitySensor2280.Center := Vector3(0,20,0);
{ .AddChildren }
Group2276.AddChildren([ProximitySensor2280]);
Transform2281 := TTransformNode.Create;
Transform2281.Translation := Vector3(0,-0.0125,0);
Transform2281.Scale := Vector3(1,0.0125,1);
Shape2282 := TShapeNode.Create;
Appearance2283 := TAppearanceNode.Create;
Material2284 := TMaterialNode.Create;
Material2284.Transparency := 0.6;
{ .SetMaterial }
Appearance2283.Material := Material2284;
{ .SetAppearance }
Shape2282.Appearance := Appearance2283;
Box2285 := TBoxNode.Create;
{ .SetGeometry }
Shape2282.Geometry := Box2285;
{ .AddChild }
Transform2281.AddChildren([Shape2282]);
Transform2286 := TTransformNode.Create;
Transform2286.Scale := Vector3(1.175,1,1.175);
Shape2287 := TShapeNode.Create;
Appearance2288 := TAppearanceNode.Create;
Material2289 := TMaterialNode.Create;
Material2289.DiffuseColor := Vector3(0.9,0,0.7);
Material2289.EmissiveColor := Vector3(0.424956,0.483976,1);
{ .SetMaterial }
Appearance2288.Material := Material2289;
{ .SetAppearance }
Shape2287.Appearance := Appearance2288;
IndexedLineSet2290 := TIndexedLineSetNode.Create;
IndexedLineSet2290.SetCoordIndex([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
Coordinate2291 := TCoordinateNode.Create;
Coordinate2291.SetPoint([Vector3(1,0,0),Vector3(0.995,0,-0.105),Vector3(0.979,0,-0.208),Vector3(0.951,0,-0.309),Vector3(0.914,0,-0.407),Vector3(0.866,0,-0.5),Vector3(0.809,0,-0.588),Vector3(0.743,0,-0.669),Vector3(0.669,0,-0.743),Vector3(0.588,0,-0.809),Vector3(0.5,0,-0.866),Vector3(0.407,0,-0.914),Vector3(0.309,0,-0.951),Vector3(0.208,0,-0.978),Vector3(0.105,0,-0.995),Vector3(0,0,-1),Vector3(-0.105,0,-0.994522),Vector3(-0.208,0,-0.978),Vector3(-0.309,0,-0.951),Vector3(-0.407,0,-0.914),Vector3(-0.5,0,-0.866),Vector3(-0.588,0,-0.809),Vector3(-0.669,0,-0.743),Vector3(-0.743,0,-0.669),Vector3(-0.809,0,-0.588),Vector3(-0.866,0,-0.5),Vector3(-0.914,0,-0.407),Vector3(-0.951,0,-0.309),Vector3(-0.978,0,-0.208),Vector3(-0.995,0,-0.105),Vector3(-1,0,0),Vector3(-0.995,0,0.105),Vector3(-0.978,0,0.208),Vector3(-0.951,0,0.309),Vector3(-0.914,0,0.407),Vector3(-0.866,0,0.5),Vector3(-0.809,0,0.588),Vector3(-0.743,0,0.669),Vector3(-0.669,0,0.743),Vector3(-0.588,0,0.809),Vector3(-0.5,0,0.866),Vector3(-0.407,0,0.914),Vector3(-0.309,0,0.951),Vector3(-0.208,0,0.978),Vector3(-0.105,0,0.995),Vector3(0,0,1),Vector3(0.105,0,0.995),Vector3(0.208,0,0.978),Vector3(0.309,0,0.951),Vector3(0.407,0,0.914),Vector3(0.5,0,0.866),Vector3(0.588,0,0.809),Vector3(0.669,0,0.743),Vector3(0.743,0,0.669),Vector3(0.809,0,0.588),Vector3(0.866,0,0.5),Vector3(0.914,0,0.407),Vector3(0.951,0,0.309),Vector3(0.978,0,0.208),Vector3(0.995,0,0.104),Vector3(1,0,0)]);
{ .SetCoord }
IndexedLineSet2290.Coord := Coordinate2291;
{ .SetGeometry }
Shape2287.Geometry := IndexedLineSet2290;
{ .AddChild }
Transform2286.AddChildren([Shape2287]);
{ .AddChildren }
Transform2281.AddChildren([Transform2286]);
Transform2292 := TTransformNode.Create;
Transform2292.Scale := Vector3(0.5,1,0.5);
Shape2293 := TShapeNode.Create;
Appearance2294 := TAppearanceNode.Create;
Material2295 := TMaterialNode.Create;
Material2295.DiffuseColor := Vector3(0.9,0,0.7);
Material2295.EmissiveColor := Vector3(0.424956,0.483976,1);
{ .SetMaterial }
Appearance2294.Material := Material2295;
{ .SetAppearance }
Shape2293.Appearance := Appearance2294;
IndexedLineSet2296 := TIndexedLineSetNode.Create;
IndexedLineSet2296 := IndexedLineSet2290;
{ .SetGeometry }
Shape2293.Geometry := IndexedLineSet2296;
{ .AddChild }
Transform2292.AddChildren([Shape2293]);
{ .AddChildren }
Transform2281.AddChildren([Transform2292]);
Transform2297 := TTransformNode.Create;
Transform2297.Scale := Vector3(0.25,1,0.25);
Shape2298 := TShapeNode.Create;
Appearance2299 := TAppearanceNode.Create;
Material2300 := TMaterialNode.Create;
Material2300.DiffuseColor := Vector3(0.9,0,0.7);
Material2300.EmissiveColor := Vector3(0.424956,0.483976,1);
{ .SetMaterial }
Appearance2299.Material := Material2300;
{ .SetAppearance }
Shape2298.Appearance := Appearance2299;
IndexedLineSet2301 := TIndexedLineSetNode.Create;
IndexedLineSet2301 := IndexedLineSet2290;
{ .SetGeometry }
Shape2298.Geometry := IndexedLineSet2301;
{ .AddChild }
Transform2297.AddChildren([Shape2298]);
{ .AddChildren }
Transform2281.AddChildren([Transform2297]);
{ .AddChildren }
Group2276.AddChildren([Transform2281]);
Transform2302 := TTransformNode.Create;
Transform2302.Translation := Vector3(1.705442,1.042139,1.989742);
Transform2302.Rotation := Vector4(-0.09996068,0.9942513,0.03837026,0.7131352);
Transform2303 := TTransformNode.Create;
Transform2303.Translation := Vector3(-0.42,-0.2,-0.75);
Transform2303.Scale := Vector3(0.035,0.035,0.035);
Transform2304 := TTransformNode.Create;
Transform2304.Translation := Vector3(0,-1,0);
TouchSensor2305 := TTouchSensorNode.Create;
TouchSensor2305.Description := 'touch to select';
{ .AddChildren }
Transform2304.AddChildren([TouchSensor2305]);
Shape2306 := TShapeNode.Create;
Appearance2307 := TAppearanceNode.Create;
Material2308 := TMaterialNode.Create;
Material2308.AmbientIntensity := 1;
Material2308.DiffuseColor := Vector3(0.819,0.521,0.169);
Material2308.SpecularColor := Vector3(0.819,0.521,0.169);
Material2308.EmissiveColor := Vector3(0.819,0.521,0.169);
{ .SetMaterial }
Appearance2307.Material := Material2308;
{ .SetAppearance }
Shape2306.Appearance := Appearance2307;
Text2309 := TTextNode.Create;
Text2309.SetText(['Stand']);
{ .SetGeometry }
Shape2306.Geometry := Text2309;
{ .AddChild }
Transform2304.AddChildren([Shape2306]);
Shape2310 := TShapeNode.Create;
Appearance2311 := TAppearanceNode.Create;
Material2312 := TMaterialNode.Create;
Material2312.AmbientIntensity := 1;
Material2312.DiffuseColor := Vector3(0,0.5,0);
Material2312.EmissiveColor := Vector3(0,0.5,0);
Material2312.Transparency := 0.8;
{ .SetMaterial }
Appearance2311.Material := Material2312;
{ .SetAppearance }
Shape2310.Appearance := Appearance2311;
IndexedFaceSet2313 := TIndexedFaceSetNode.Create;
IndexedFaceSet2313.SetCoordIndex([0,1,2,3,-1]);
Coordinate2314 := TCoordinateNode.Create;
Coordinate2314.SetPoint([Vector3(-0.2,-1.2,-0.01),Vector3(2.5,-1.2,-0.01),Vector3(2.5,0.75,-0.01),Vector3(-0.2,0.75,-0.01)]);
{ .SetCoord }
IndexedFaceSet2313.Coord := Coordinate2314;
{ .SetGeometry }
Shape2310.Geometry := IndexedFaceSet2313;
{ .AddChild }
Transform2304.AddChildren([Shape2310]);
{ .AddChildren }
Transform2303.AddChildren([Transform2304]);
Transform2315 := TTransformNode.Create;
Transform2315.Translation := Vector3(3,-1,0);
TouchSensor2316 := TTouchSensorNode.Create;
TouchSensor2316.Description := 'touch to select';
{ .AddChildren }
Transform2315.AddChildren([TouchSensor2316]);
Shape2317 := TShapeNode.Create;
Appearance2318 := TAppearanceNode.Create;
Material2319 := TMaterialNode.Create;
Material2319 := Material2308;
{ .SetMaterial }
Appearance2318.Material := Material2319;
{ .SetAppearance }
Shape2317.Appearance := Appearance2318;
Text2320 := TTextNode.Create;
Text2320.SetText(['Pitch']);
{ .SetGeometry }
Shape2317.Geometry := Text2320;
{ .AddChild }
Transform2315.AddChildren([Shape2317]);
Shape2321 := TShapeNode.Create;
Appearance2322 := TAppearanceNode.Create;
Material2323 := TMaterialNode.Create;
Material2323 := Material2312;
{ .SetMaterial }
Appearance2322.Material := Material2323;
{ .SetAppearance }
Shape2321.Appearance := Appearance2322;
IndexedFaceSet2324 := TIndexedFaceSetNode.Create;
IndexedFaceSet2324 := IndexedFaceSet2313;
{ .SetGeometry }
Shape2321.Geometry := IndexedFaceSet2324;
{ .AddChild }
Transform2315.AddChildren([Shape2321]);
{ .AddChildren }
Transform2303.AddChildren([Transform2315]);
Transform2325 := TTransformNode.Create;
Transform2325.Translation := Vector3(6,-1,0);
TouchSensor2326 := TTouchSensorNode.Create;
TouchSensor2326.Description := 'touch to select';
{ .AddChildren }
Transform2325.AddChildren([TouchSensor2326]);
Shape2327 := TShapeNode.Create;
Appearance2328 := TAppearanceNode.Create;
Material2329 := TMaterialNode.Create;
Material2329 := Material2308;
{ .SetMaterial }
Appearance2328.Material := Material2329;
{ .SetAppearance }
Shape2327.Appearance := Appearance2328;
Text2330 := TTextNode.Create;
Text2330.SetText(['Yaw']);
{ .SetGeometry }
Shape2327.Geometry := Text2330;
{ .AddChild }
Transform2325.AddChildren([Shape2327]);
Shape2331 := TShapeNode.Create;
Appearance2332 := TAppearanceNode.Create;
Material2333 := TMaterialNode.Create;
Material2333 := Material2312;
{ .SetMaterial }
Appearance2332.Material := Material2333;
{ .SetAppearance }
Shape2331.Appearance := Appearance2332;
IndexedFaceSet2334 := TIndexedFaceSetNode.Create;
IndexedFaceSet2334 := IndexedFaceSet2313;
{ .SetGeometry }
Shape2331.Geometry := IndexedFaceSet2334;
{ .AddChild }
Transform2325.AddChildren([Shape2331]);
{ .AddChildren }
Transform2303.AddChildren([Transform2325]);
Transform2335 := TTransformNode.Create;
Transform2335.Translation := Vector3(9,-1,0);
TouchSensor2336 := TTouchSensorNode.Create;
TouchSensor2336.Description := 'touch to select';
{ .AddChildren }
Transform2335.AddChildren([TouchSensor2336]);
Shape2337 := TShapeNode.Create;
Appearance2338 := TAppearanceNode.Create;
Material2339 := TMaterialNode.Create;
Material2339 := Material2308;
{ .SetMaterial }
Appearance2338.Material := Material2339;
{ .SetAppearance }
Shape2337.Appearance := Appearance2338;
Text2340 := TTextNode.Create;
Text2340.SetText(['Roll']);
{ .SetGeometry }
Shape2337.Geometry := Text2340;
{ .AddChild }
Transform2335.AddChildren([Shape2337]);
Shape2341 := TShapeNode.Create;
Appearance2342 := TAppearanceNode.Create;
Material2343 := TMaterialNode.Create;
Material2343 := Material2312;
{ .SetMaterial }
Appearance2342.Material := Material2343;
{ .SetAppearance }
Shape2341.Appearance := Appearance2342;
IndexedFaceSet2344 := TIndexedFaceSetNode.Create;
IndexedFaceSet2344 := IndexedFaceSet2313;
{ .SetGeometry }
Shape2341.Geometry := IndexedFaceSet2344;
{ .AddChild }
Transform2335.AddChildren([Shape2341]);
{ .AddChildren }
Transform2303.AddChildren([Transform2335]);
Transform2345 := TTransformNode.Create;
Transform2345.Translation := Vector3(12,-1,0);
TouchSensor2346 := TTouchSensorNode.Create;
TouchSensor2346.Description := 'touch to select';
{ .AddChildren }
Transform2345.AddChildren([TouchSensor2346]);
Shape2347 := TShapeNode.Create;
Appearance2348 := TAppearanceNode.Create;
Material2349 := TMaterialNode.Create;
Material2349 := Material2308;
{ .SetMaterial }
Appearance2348.Material := Material2349;
{ .SetAppearance }
Shape2347.Appearance := Appearance2348;
Text2350 := TTextNode.Create;
Text2350.SetText(['Walk']);
{ .SetGeometry }
Shape2347.Geometry := Text2350;
{ .AddChild }
Transform2345.AddChildren([Shape2347]);
Shape2351 := TShapeNode.Create;
Appearance2352 := TAppearanceNode.Create;
Material2353 := TMaterialNode.Create;
Material2353 := Material2312;
{ .SetMaterial }
Appearance2352.Material := Material2353;
{ .SetAppearance }
Shape2351.Appearance := Appearance2352;
IndexedFaceSet2354 := TIndexedFaceSetNode.Create;
IndexedFaceSet2354 := IndexedFaceSet2313;
{ .SetGeometry }
Shape2351.Geometry := IndexedFaceSet2354;
{ .AddChild }
Transform2345.AddChildren([Shape2351]);
{ .AddChildren }
Transform2303.AddChildren([Transform2345]);
Transform2355 := TTransformNode.Create;
Transform2355.Translation := Vector3(15,-1,0);
TouchSensor2356 := TTouchSensorNode.Create;
TouchSensor2356.Description := 'touch to select';
{ .AddChildren }
Transform2355.AddChildren([TouchSensor2356]);
Shape2357 := TShapeNode.Create;
Appearance2358 := TAppearanceNode.Create;
Material2359 := TMaterialNode.Create;
Material2359 := Material2308;
{ .SetMaterial }
Appearance2358.Material := Material2359;
{ .SetAppearance }
Shape2357.Appearance := Appearance2358;
Text2360 := TTextNode.Create;
Text2360.SetText(['Run']);
{ .SetGeometry }
Shape2357.Geometry := Text2360;
{ .AddChild }
Transform2355.AddChildren([Shape2357]);
Shape2361 := TShapeNode.Create;
Appearance2362 := TAppearanceNode.Create;
Material2363 := TMaterialNode.Create;
Material2363 := Material2312;
{ .SetMaterial }
Appearance2362.Material := Material2363;
{ .SetAppearance }
Shape2361.Appearance := Appearance2362;
IndexedFaceSet2364 := TIndexedFaceSetNode.Create;
IndexedFaceSet2364 := IndexedFaceSet2313;
{ .SetGeometry }
Shape2361.Geometry := IndexedFaceSet2364;
{ .AddChild }
Transform2355.AddChildren([Shape2361]);
{ .AddChildren }
Transform2303.AddChildren([Transform2355]);
Transform2365 := TTransformNode.Create;
Transform2365.Translation := Vector3(18,-1,0);
TouchSensor2366 := TTouchSensorNode.Create;
TouchSensor2366.Description := 'touch to select';
{ .AddChildren }
Transform2365.AddChildren([TouchSensor2366]);
Shape2367 := TShapeNode.Create;
Appearance2368 := TAppearanceNode.Create;
Material2369 := TMaterialNode.Create;
Material2369 := Material2308;
{ .SetMaterial }
Appearance2368.Material := Material2369;
{ .SetAppearance }
Shape2367.Appearance := Appearance2368;
Text2370 := TTextNode.Create;
Text2370.SetText(['Jump']);
{ .SetGeometry }
Shape2367.Geometry := Text2370;
{ .AddChild }
Transform2365.AddChildren([Shape2367]);
Shape2371 := TShapeNode.Create;
Appearance2372 := TAppearanceNode.Create;
Material2373 := TMaterialNode.Create;
Material2373 := Material2312;
{ .SetMaterial }
Appearance2372.Material := Material2373;
{ .SetAppearance }
Shape2371.Appearance := Appearance2372;
IndexedFaceSet2374 := TIndexedFaceSetNode.Create;
IndexedFaceSet2374 := IndexedFaceSet2313;
{ .SetGeometry }
Shape2371.Geometry := IndexedFaceSet2374;
{ .AddChild }
Transform2365.AddChildren([Shape2371]);
{ .AddChildren }
Transform2303.AddChildren([Transform2365]);
Transform2375 := TTransformNode.Create;
Transform2375.Translation := Vector3(21,-1,0);
TouchSensor2376 := TTouchSensorNode.Create;
TouchSensor2376.Description := 'touch to select';
{ .AddChildren }
Transform2375.AddChildren([TouchSensor2376]);
Shape2377 := TShapeNode.Create;
Appearance2378 := TAppearanceNode.Create;
Material2379 := TMaterialNode.Create;
Material2379 := Material2308;
{ .SetMaterial }
Appearance2378.Material := Material2379;
{ .SetAppearance }
Shape2377.Appearance := Appearance2378;
Text2380 := TTextNode.Create;
Text2380.SetText(['Kick']);
{ .SetGeometry }
Shape2377.Geometry := Text2380;
{ .AddChild }
Transform2375.AddChildren([Shape2377]);
Shape2381 := TShapeNode.Create;
Appearance2382 := TAppearanceNode.Create;
Material2383 := TMaterialNode.Create;
Material2383 := Material2312;
{ .SetMaterial }
Appearance2382.Material := Material2383;
{ .SetAppearance }
Shape2381.Appearance := Appearance2382;
IndexedFaceSet2384 := TIndexedFaceSetNode.Create;
IndexedFaceSet2384 := IndexedFaceSet2313;
{ .SetGeometry }
Shape2381.Geometry := IndexedFaceSet2384;
{ .AddChild }
Transform2375.AddChildren([Shape2381]);
{ .AddChildren }
Transform2303.AddChildren([Transform2375]);
Transform2385 := TTransformNode.Create;
Transform2385.Translation := Vector3(0,1.4,0);
TouchSensor2386 := TTouchSensorNode.Create;
TouchSensor2386.Description := 'touch to select';
{ .AddChildren }
Transform2385.AddChildren([TouchSensor2386]);
Shape2387 := TShapeNode.Create;
Appearance2388 := TAppearanceNode.Create;
Material2389 := TMaterialNode.Create;
Material2389 := Material2308;
{ .SetMaterial }
Appearance2388.Material := Material2389;
{ .SetAppearance }
Shape2387.Appearance := Appearance2388;
Text2390 := TTextNode.Create;
Text2390.SetText(['Stop','Default Pose']);
{ .SetGeometry }
Shape2387.Geometry := Text2390;
{ .AddChild }
Transform2385.AddChildren([Shape2387]);
Shape2391 := TShapeNode.Create;
Appearance2392 := TAppearanceNode.Create;
Material2393 := TMaterialNode.Create;
Material2393 := Material2312;
{ .SetMaterial }
Appearance2392.Material := Material2393;
{ .SetAppearance }
Shape2391.Appearance := Appearance2392;
IndexedFaceSet2394 := TIndexedFaceSetNode.Create;
IndexedFaceSet2394 := IndexedFaceSet2313;
{ .SetGeometry }
Shape2391.Geometry := IndexedFaceSet2394;
{ .AddChild }
Transform2385.AddChildren([Shape2391]);
{ .AddChildren }
Transform2303.AddChildren([Transform2385]);
{ .AddChildren }
Transform2302.AddChildren([Transform2303]);
{ .AddChildren }
Group2276.AddChildren([Transform2302]);
{ .AddChildren }
Group29.AddChildren([Group2276]);
Group2395 := TGroupNode.Create;
{ .AddChildren }
Group29.AddChildren([Group2395]);
Group29.AddRoute(TimeSensor1942.EventFraction_changed, PositionInterpolator1943.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1944.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1945.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1946.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1947.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1948.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1949.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1950.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1951.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1952.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1953.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1954.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1955.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1956.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1957.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1958.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1959.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1960.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1961.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1962.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1963.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1964.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1965.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1966.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1967.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1968.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1969.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1970.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1971.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1972.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1973.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1974.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1975.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1976.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1977.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1978.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1979.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1980.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1981.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1982.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1983.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1984.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1985.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1986.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1987.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1988.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1989.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1990.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1991.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1992.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1993.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1994.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1995.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1996.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1997.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1998.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator1999.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2000.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2001.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2002.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2003.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2004.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2005.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2006.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2007.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2008.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2009.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2010.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2011.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2012.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2013.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2014.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2015.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2016.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2017.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2018.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2019.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2020.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2021.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2022.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2023.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2024.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2025.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2026.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2027.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2028.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2029.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2030.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2031.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor1942.EventFraction_changed, OrientationInterpolator2032.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(PositionInterpolator1943.EventValue_changed, HAnimJoint44.FdTranslation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1944.EventValue_changed, HAnimJoint44.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1945.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1946.EventValue_changed, HAnimJoint140.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1947.EventValue_changed, HAnimJoint170.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1948.EventValue_changed, HAnimJoint179.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1949.EventValue_changed, HAnimJoint216.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1950.EventValue_changed, HAnimJoint225.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1951.EventValue_changed, HAnimJoint241.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1952.EventValue_changed, HAnimJoint267.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1953.EventValue_changed, HAnimJoint297.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1954.EventValue_changed, HAnimJoint306.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1955.EventValue_changed, HAnimJoint343.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1956.EventValue_changed, HAnimJoint352.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1957.EventValue_changed, HAnimJoint368.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1958.EventValue_changed, HAnimJoint394.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1959.EventValue_changed, HAnimJoint417.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1960.EventValue_changed, HAnimJoint426.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1961.EventValue_changed, HAnimJoint435.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1962.EventValue_changed, HAnimJoint465.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1963.EventValue_changed, HAnimJoint474.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1964.EventValue_changed, HAnimJoint483.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1965.EventValue_changed, HAnimJoint492.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1966.EventValue_changed, HAnimJoint508.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1967.EventValue_changed, HAnimJoint531.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1968.EventValue_changed, HAnimJoint540.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1969.EventValue_changed, HAnimJoint549.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1970.EventValue_changed, HAnimJoint558.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1971.EventValue_changed, HAnimJoint567.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1972.EventValue_changed, HAnimJoint576.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1973.EventValue_changed, HAnimJoint585.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1974.EventValue_changed, HAnimJoint594.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1975.EventValue_changed, HAnimJoint625.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1976.EventValue_changed, HAnimJoint648.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1977.EventValue_changed, HAnimJoint657.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1978.EventValue_changed, HAnimJoint666.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1979.EventValue_changed, HAnimJoint675.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1980.EventValue_changed, HAnimJoint684.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1981.EventValue_changed, HAnimJoint693.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1982.EventValue_changed, HAnimJoint702.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1983.EventValue_changed, HAnimJoint805.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1984.EventValue_changed, HAnimJoint834.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1985.EventValue_changed, HAnimJoint878.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1986.EventValue_changed, HAnimJoint915.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1987.EventValue_changed, HAnimJoint924.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1988.EventValue_changed, HAnimJoint940.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1989.EventValue_changed, HAnimJoint977.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1990.EventValue_changed, HAnimJoint1033.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1991.EventValue_changed, HAnimJoint1042.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1992.EventValue_changed, HAnimJoint1051.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1993.EventValue_changed, HAnimJoint1063.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1994.EventValue_changed, HAnimJoint1072.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1995.EventValue_changed, HAnimJoint1081.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1996.EventValue_changed, HAnimJoint1090.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1997.EventValue_changed, HAnimJoint1109.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1998.EventValue_changed, HAnimJoint1118.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator1999.EventValue_changed, HAnimJoint1127.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2000.EventValue_changed, HAnimJoint1136.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2001.EventValue_changed, HAnimJoint1148.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2002.EventValue_changed, HAnimJoint1157.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2003.EventValue_changed, HAnimJoint1166.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2004.EventValue_changed, HAnimJoint1175.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2005.EventValue_changed, HAnimJoint1187.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2006.EventValue_changed, HAnimJoint1196.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2007.EventValue_changed, HAnimJoint1205.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2008.EventValue_changed, HAnimJoint1214.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2009.EventValue_changed, HAnimJoint1226.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2010.EventValue_changed, HAnimJoint1263.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2011.EventValue_changed, HAnimJoint1272.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2012.EventValue_changed, HAnimJoint1288.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2013.EventValue_changed, HAnimJoint1325.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2014.EventValue_changed, HAnimJoint1381.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2015.EventValue_changed, HAnimJoint1390.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2016.EventValue_changed, HAnimJoint1399.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2017.EventValue_changed, HAnimJoint1411.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2018.EventValue_changed, HAnimJoint1420.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2019.EventValue_changed, HAnimJoint1429.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2020.EventValue_changed, HAnimJoint1438.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2021.EventValue_changed, HAnimJoint1457.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2022.EventValue_changed, HAnimJoint1466.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2023.EventValue_changed, HAnimJoint1475.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2024.EventValue_changed, HAnimJoint1484.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2025.EventValue_changed, HAnimJoint1496.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2026.EventValue_changed, HAnimJoint1505.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2027.EventValue_changed, HAnimJoint1514.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2028.EventValue_changed, HAnimJoint1523.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2029.EventValue_changed, HAnimJoint1535.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2030.EventValue_changed, HAnimJoint1544.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2031.EventValue_changed, HAnimJoint1553.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2032.EventValue_changed, HAnimJoint1562.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2036.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2037.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2038.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2039.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2040.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2041.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2052.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2042.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2043.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2044.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2045.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2046.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2047.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2048.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2049.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2050.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2051.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2053.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2054.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, PositionInterpolator2055.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2056.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2057.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2058.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2059.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2035.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2060.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2061.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2062.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2063.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2064.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2065.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2066.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2034.EventFraction_changed, OrientationInterpolator2067.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2036.EventValue_changed, HAnimJoint306.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2037.EventValue_changed, HAnimJoint297.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2038.EventValue_changed, HAnimJoint267.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2039.EventValue_changed, HAnimJoint179.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2040.EventValue_changed, HAnimJoint170.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2041.EventValue_changed, HAnimJoint140.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2042.EventValue_changed, HAnimJoint1325.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2043.EventValue_changed, HAnimJoint1288.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2044.EventValue_changed, HAnimJoint1272.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2045.EventValue_changed, HAnimJoint977.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2046.EventValue_changed, HAnimJoint940.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2047.EventValue_changed, HAnimJoint924.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2048.EventValue_changed, HAnimJoint702.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2049.EventValue_changed, HAnimJoint625.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2050.EventValue_changed, HAnimJoint805.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2051.EventValue_changed, HAnimJoint834.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2053.EventValue_changed, HAnimJoint465.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2052.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2054.EventValue_changed, HAnimJoint44.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(PositionInterpolator2055.EventValue_changed, HAnimJoint44.FdTranslation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2056.EventValue_changed, HAnimJoint878.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2057.EventValue_changed, HAnimJoint915.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2058.EventValue_changed, HAnimJoint1226.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2059.EventValue_changed, HAnimJoint1263.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2035.EventValue_changed, HAnimJoint241.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2035.EventValue_changed, HAnimJoint368.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2060.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2061.EventValue_changed, HAnimJoint394.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2062.EventValue_changed, HAnimJoint648.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2063.EventValue_changed, HAnimJoint1033.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2064.EventValue_changed, HAnimJoint1381.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2065.EventValue_changed, HAnimJoint1420.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2066.EventValue_changed, HAnimJoint1429.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2067.EventValue_changed, HAnimJoint1438.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2065.EventValue_changed, HAnimJoint1466.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2066.EventValue_changed, HAnimJoint1475.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2067.EventValue_changed, HAnimJoint1484.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2065.EventValue_changed, HAnimJoint1505.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2066.EventValue_changed, HAnimJoint1514.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2067.EventValue_changed, HAnimJoint1523.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2065.EventValue_changed, HAnimJoint1544.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2066.EventValue_changed, HAnimJoint1553.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2067.EventValue_changed, HAnimJoint1562.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2071.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2072.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2073.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2074.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2075.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2076.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2085.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2077.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2078.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2079.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2080.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2081.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2082.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2083.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2084.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2086.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2087.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, PositionInterpolator2088.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2089.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2090.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2091.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2092.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2070.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2093.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2094.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2095.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2096.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2069.EventFraction_changed, OrientationInterpolator2097.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2071.EventValue_changed, HAnimJoint306.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2072.EventValue_changed, HAnimJoint297.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2073.EventValue_changed, HAnimJoint267.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2074.EventValue_changed, HAnimJoint179.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2075.EventValue_changed, HAnimJoint170.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2076.EventValue_changed, HAnimJoint140.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2085.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2077.EventValue_changed, HAnimJoint1325.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2078.EventValue_changed, HAnimJoint1288.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2079.EventValue_changed, HAnimJoint1272.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2080.EventValue_changed, HAnimJoint977.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2081.EventValue_changed, HAnimJoint940.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2082.EventValue_changed, HAnimJoint924.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2083.EventValue_changed, HAnimJoint702.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2084.EventValue_changed, HAnimJoint666.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2086.EventValue_changed, HAnimJoint465.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2087.EventValue_changed, HAnimJoint44.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(PositionInterpolator2088.EventValue_changed, HAnimJoint44.FdTranslation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2089.EventValue_changed, HAnimJoint878.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2090.EventValue_changed, HAnimJoint915.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2091.EventValue_changed, HAnimJoint1226.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2092.EventValue_changed, HAnimJoint1263.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2070.EventValue_changed, HAnimJoint241.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2070.EventValue_changed, HAnimJoint368.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2093.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2094.EventValue_changed, HAnimJoint394.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2095.EventValue_changed, HAnimJoint648.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2096.EventValue_changed, HAnimJoint1033.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2097.EventValue_changed, HAnimJoint1381.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2101.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2102.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2103.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2104.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2105.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2106.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2116.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2107.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2108.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2109.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2110.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2111.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2112.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2113.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2114.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2115.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2117.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, PositionInterpolator2118.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2119.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2120.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2121.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2122.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2100.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2123.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2124.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2125.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2126.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2099.EventFraction_changed, OrientationInterpolator2127.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2101.EventValue_changed, HAnimJoint306.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2102.EventValue_changed, HAnimJoint297.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2103.EventValue_changed, HAnimJoint267.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2104.EventValue_changed, HAnimJoint179.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2105.EventValue_changed, HAnimJoint170.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2106.EventValue_changed, HAnimJoint140.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2116.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2107.EventValue_changed, HAnimJoint1325.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2108.EventValue_changed, HAnimJoint1288.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2109.EventValue_changed, HAnimJoint1272.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2110.EventValue_changed, HAnimJoint977.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2111.EventValue_changed, HAnimJoint940.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2112.EventValue_changed, HAnimJoint924.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2113.EventValue_changed, HAnimJoint702.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2114.EventValue_changed, HAnimJoint666.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2115.EventValue_changed, HAnimJoint465.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2117.EventValue_changed, HAnimJoint44.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(PositionInterpolator2118.EventValue_changed, HAnimJoint44.FdTranslation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2119.EventValue_changed, HAnimJoint878.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2120.EventValue_changed, HAnimJoint915.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2121.EventValue_changed, HAnimJoint1226.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2122.EventValue_changed, HAnimJoint1263.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2100.EventValue_changed, HAnimJoint241.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2100.EventValue_changed, HAnimJoint368.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2123.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2124.EventValue_changed, HAnimJoint394.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2125.EventValue_changed, HAnimJoint648.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2126.EventValue_changed, HAnimJoint1033.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2127.EventValue_changed, HAnimJoint1381.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2131.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2132.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2133.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2134.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2135.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2136.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2145.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2137.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2138.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2139.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2140.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2141.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2142.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2143.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2144.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2146.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2147.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, PositionInterpolator2148.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2149.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2150.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2151.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2152.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2130.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2153.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2154.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2155.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2156.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2129.EventFraction_changed, OrientationInterpolator2157.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2131.EventValue_changed, HAnimJoint306.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2132.EventValue_changed, HAnimJoint297.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2133.EventValue_changed, HAnimJoint267.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2134.EventValue_changed, HAnimJoint179.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2135.EventValue_changed, HAnimJoint170.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2136.EventValue_changed, HAnimJoint140.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2145.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2137.EventValue_changed, HAnimJoint1325.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2138.EventValue_changed, HAnimJoint1288.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2139.EventValue_changed, HAnimJoint1272.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2140.EventValue_changed, HAnimJoint977.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2141.EventValue_changed, HAnimJoint940.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2142.EventValue_changed, HAnimJoint924.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2143.EventValue_changed, HAnimJoint702.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2144.EventValue_changed, HAnimJoint666.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2146.EventValue_changed, HAnimJoint465.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2147.EventValue_changed, HAnimJoint44.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(PositionInterpolator2148.EventValue_changed, HAnimJoint44.FdTranslation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2149.EventValue_changed, HAnimJoint878.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2150.EventValue_changed, HAnimJoint915.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2151.EventValue_changed, HAnimJoint1226.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2152.EventValue_changed, HAnimJoint1263.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2130.EventValue_changed, HAnimJoint241.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2130.EventValue_changed, HAnimJoint368.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2153.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2154.EventValue_changed, HAnimJoint394.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2155.EventValue_changed, HAnimJoint648.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2156.EventValue_changed, HAnimJoint1033.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2157.EventValue_changed, HAnimJoint1381.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2161.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2162.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2163.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2164.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2165.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2166.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2167.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2168.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2169.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2170.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2171.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2172.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2173.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2174.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2175.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2176.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2177.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, PositionInterpolator2178.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2179.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2180.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2181.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2182.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2160.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2183.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2184.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2185.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2186.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2159.EventFraction_changed, OrientationInterpolator2187.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2161.EventValue_changed, HAnimJoint306.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2162.EventValue_changed, HAnimJoint297.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2163.EventValue_changed, HAnimJoint267.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2164.EventValue_changed, HAnimJoint179.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2165.EventValue_changed, HAnimJoint170.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2166.EventValue_changed, HAnimJoint140.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2167.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2168.EventValue_changed, HAnimJoint1325.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2169.EventValue_changed, HAnimJoint1288.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2170.EventValue_changed, HAnimJoint1272.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2171.EventValue_changed, HAnimJoint977.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2172.EventValue_changed, HAnimJoint940.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2173.EventValue_changed, HAnimJoint924.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2174.EventValue_changed, HAnimJoint702.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2175.EventValue_changed, HAnimJoint666.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2176.EventValue_changed, HAnimJoint465.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2177.EventValue_changed, HAnimJoint44.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(PositionInterpolator2178.EventValue_changed, HAnimJoint44.FdTranslation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2179.EventValue_changed, HAnimJoint878.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2180.EventValue_changed, HAnimJoint915.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2181.EventValue_changed, HAnimJoint1226.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2182.EventValue_changed, HAnimJoint1263.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2160.EventValue_changed, HAnimJoint241.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2160.EventValue_changed, HAnimJoint368.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2183.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2184.EventValue_changed, HAnimJoint394.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2185.EventValue_changed, HAnimJoint648.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2186.EventValue_changed, HAnimJoint1033.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2187.EventValue_changed, HAnimJoint1381.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2196.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2195.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2194.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2193.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2192.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2191.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2203.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2202.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2201.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2200.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2199.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2198.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2197.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2204.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2205.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2206.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2207.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, PositionInterpolator2208.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2209.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2210.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2211.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2212.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2190.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2213.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2214.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2215.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2216.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2189.EventFraction_changed, OrientationInterpolator2217.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2196.EventValue_changed, HAnimJoint306.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2195.EventValue_changed, HAnimJoint297.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2194.EventValue_changed, HAnimJoint267.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2193.EventValue_changed, HAnimJoint179.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2192.EventValue_changed, HAnimJoint170.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2191.EventValue_changed, HAnimJoint140.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2202.EventValue_changed, HAnimJoint1325.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2201.EventValue_changed, HAnimJoint1288.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2200.EventValue_changed, HAnimJoint1272.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2199.EventValue_changed, HAnimJoint977.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2198.EventValue_changed, HAnimJoint940.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2197.EventValue_changed, HAnimJoint924.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2203.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2204.EventValue_changed, HAnimJoint702.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2205.EventValue_changed, HAnimJoint666.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2206.EventValue_changed, HAnimJoint465.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2207.EventValue_changed, HAnimJoint44.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(PositionInterpolator2208.EventValue_changed, HAnimJoint44.FdTranslation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2209.EventValue_changed, HAnimJoint878.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2210.EventValue_changed, HAnimJoint915.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2211.EventValue_changed, HAnimJoint1226.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2212.EventValue_changed, HAnimJoint1263.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2190.EventValue_changed, HAnimJoint241.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2190.EventValue_changed, HAnimJoint368.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2213.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2214.EventValue_changed, HAnimJoint394.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2215.EventValue_changed, HAnimJoint648.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2216.EventValue_changed, HAnimJoint1033.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2217.EventValue_changed, HAnimJoint1381.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2221.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2222.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2223.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2224.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2225.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2226.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2227.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2228.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2229.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2230.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2231.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2232.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2233.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2234.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2235.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2236.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2237.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, PositionInterpolator2238.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2239.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2240.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2241.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2242.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2220.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2243.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2244.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2245.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2246.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2219.EventFraction_changed, OrientationInterpolator2247.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2221.EventValue_changed, HAnimJoint306.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2222.EventValue_changed, HAnimJoint297.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2223.EventValue_changed, HAnimJoint267.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2224.EventValue_changed, HAnimJoint179.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2225.EventValue_changed, HAnimJoint170.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2226.EventValue_changed, HAnimJoint140.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2227.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2228.EventValue_changed, HAnimJoint1325.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2229.EventValue_changed, HAnimJoint1288.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2230.EventValue_changed, HAnimJoint1272.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2231.EventValue_changed, HAnimJoint977.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2232.EventValue_changed, HAnimJoint940.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2233.EventValue_changed, HAnimJoint924.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2234.EventValue_changed, HAnimJoint702.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2235.EventValue_changed, HAnimJoint666.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2236.EventValue_changed, HAnimJoint465.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2237.EventValue_changed, HAnimJoint44.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(PositionInterpolator2238.EventValue_changed, HAnimJoint44.FdTranslation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2239.EventValue_changed, HAnimJoint878.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2240.EventValue_changed, HAnimJoint915.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2241.EventValue_changed, HAnimJoint1226.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2242.EventValue_changed, HAnimJoint1263.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2220.EventValue_changed, HAnimJoint241.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2220.EventValue_changed, HAnimJoint368.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2243.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2244.EventValue_changed, HAnimJoint394.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2245.EventValue_changed, HAnimJoint648.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2246.EventValue_changed, HAnimJoint1033.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2247.EventValue_changed, HAnimJoint1381.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2250.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2251.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2252.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2253.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2254.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2255.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2256.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2257.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2258.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2259.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2260.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2261.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2262.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2263.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2264.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2265.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2266.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2267.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2268.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2269.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2270.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2271.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2272.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2273.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, PositionInterpolator2274.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(TimeSensor2249.EventFraction_changed, OrientationInterpolator2275.EventSet_fraction);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2250.EventValue_changed, HAnimJoint878.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2251.EventValue_changed, HAnimJoint915.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2252.EventValue_changed, HAnimJoint924.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2253.EventValue_changed, HAnimJoint940.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2254.EventValue_changed, HAnimJoint977.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2255.EventValue_changed, HAnimJoint1033.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2256.EventValue_changed, HAnimJoint1226.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2257.EventValue_changed, HAnimJoint1263.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2258.EventValue_changed, HAnimJoint1272.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2259.EventValue_changed, HAnimJoint1288.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2260.EventValue_changed, HAnimJoint1325.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2261.EventValue_changed, HAnimJoint1381.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2262.EventValue_changed, HAnimJoint267.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2263.EventValue_changed, HAnimJoint297.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2266.EventValue_changed, HAnimJoint306.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2267.EventValue_changed, HAnimJoint368.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2264.EventValue_changed, HAnimJoint140.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2265.EventValue_changed, HAnimJoint170.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2266.EventValue_changed, HAnimJoint179.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2267.EventValue_changed, HAnimJoint241.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2268.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2269.EventValue_changed, HAnimJoint394.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2270.EventValue_changed, HAnimJoint648.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2272.EventValue_changed, HAnimJoint465.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2271.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2273.EventValue_changed, HAnimJoint44.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(PositionInterpolator2274.EventValue_changed, HAnimJoint44.FdTranslation);
{ .AddX3DRoute }
Group29.AddRoute(OrientationInterpolator2275.EventValue_changed, HAnimJoint666.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(ProximitySensor2280.EventPosition_changed, Transform2302.FdTranslation);
{ .AddX3DRoute }
Group29.AddRoute(ProximitySensor2280.EventOrientation_changed, Transform2302.FdRotation);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2305.EventTouchtime, TimeSensor2069.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2305.EventTouchtime, TimeSensor2099.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2305.EventTouchtime, TimeSensor2129.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2305.EventTouchtime, TimeSensor2159.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2305.EventTouchtime, TimeSensor2189.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2305.EventTouchtime, TimeSensor2219.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2305.EventTouchtime, TimeSensor2249.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2305.EventTouchtime, TimeSensor1942.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2305.EventTouchtime, TimeSensor2034.FdStarttime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2316.EventTouchtime, TimeSensor2034.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2316.EventTouchtime, TimeSensor2099.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2316.EventTouchtime, TimeSensor2129.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2316.EventTouchtime, TimeSensor2159.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2316.EventTouchtime, TimeSensor2189.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2316.EventTouchtime, TimeSensor2219.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2316.EventTouchtime, TimeSensor2249.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2316.EventTouchtime, TimeSensor1942.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2316.EventTouchtime, TimeSensor2069.FdStarttime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2326.EventTouchtime, TimeSensor2034.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2326.EventTouchtime, TimeSensor2069.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2326.EventTouchtime, TimeSensor2129.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2326.EventTouchtime, TimeSensor2159.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2326.EventTouchtime, TimeSensor2189.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2326.EventTouchtime, TimeSensor2219.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2326.EventTouchtime, TimeSensor2249.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2326.EventTouchtime, TimeSensor1942.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2326.EventTouchtime, TimeSensor2099.FdStarttime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2346.EventTouchtime, TimeSensor2034.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2346.EventTouchtime, TimeSensor2069.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2346.EventTouchtime, TimeSensor2099.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2346.EventTouchtime, TimeSensor2129.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2346.EventTouchtime, TimeSensor2189.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2346.EventTouchtime, TimeSensor2219.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2346.EventTouchtime, TimeSensor2249.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2346.EventTouchtime, TimeSensor1942.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2346.EventTouchtime, TimeSensor2159.FdStarttime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2336.EventTouchtime, TimeSensor2034.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2336.EventTouchtime, TimeSensor2069.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2336.EventTouchtime, TimeSensor2099.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2336.EventTouchtime, TimeSensor2159.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2336.EventTouchtime, TimeSensor2189.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2336.EventTouchtime, TimeSensor2219.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2336.EventTouchtime, TimeSensor2249.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2336.EventTouchtime, TimeSensor1942.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2336.EventTouchtime, TimeSensor2129.FdStarttime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2356.EventTouchtime, TimeSensor2034.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2356.EventTouchtime, TimeSensor2069.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2356.EventTouchtime, TimeSensor2099.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2356.EventTouchtime, TimeSensor2129.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2356.EventTouchtime, TimeSensor2159.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2356.EventTouchtime, TimeSensor2219.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2356.EventTouchtime, TimeSensor2249.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2356.EventTouchtime, TimeSensor1942.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2356.EventTouchtime, TimeSensor2189.FdStarttime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2366.EventTouchtime, TimeSensor2034.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2366.EventTouchtime, TimeSensor2069.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2366.EventTouchtime, TimeSensor2099.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2366.EventTouchtime, TimeSensor2129.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2366.EventTouchtime, TimeSensor2159.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2366.EventTouchtime, TimeSensor2189.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2366.EventTouchtime, TimeSensor2249.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2366.EventTouchtime, TimeSensor1942.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2366.EventTouchtime, TimeSensor2219.FdStarttime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2376.EventTouchtime, TimeSensor2034.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2376.EventTouchtime, TimeSensor2069.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2376.EventTouchtime, TimeSensor2099.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2376.EventTouchtime, TimeSensor2129.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2376.EventTouchtime, TimeSensor2159.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2376.EventTouchtime, TimeSensor2189.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2376.EventTouchtime, TimeSensor2219.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2376.EventTouchtime, TimeSensor1942.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2376.EventTouchtime, TimeSensor2249.FdStarttime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2386.EventTouchtime, TimeSensor2034.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2386.EventTouchtime, TimeSensor2069.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2386.EventTouchtime, TimeSensor2099.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2386.EventTouchtime, TimeSensor2129.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2386.EventTouchtime, TimeSensor2159.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2386.EventTouchtime, TimeSensor2189.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2386.EventTouchtime, TimeSensor2219.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2386.EventTouchtime, TimeSensor2249.FdStoptime);
{ .AddX3DRoute }
Group29.AddRoute(TouchSensor2386.EventTouchtime, TimeSensor1942.FdStarttime);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group29]);
Result := X3D0;
end;
