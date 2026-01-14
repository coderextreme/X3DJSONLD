function HAnim2SpecificationLOA3Illustrated: TX3DRootNode;
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
TouchSensor52: TTouchSensorNode;
Transform53: TTransformNode;
Shape54: TShapeNode;
Appearance55: TAppearanceNode;
Material56: TMaterialNode;
Sphere57: TSphereNode;
Shape58: TShapeNode;
LineSet59: TLineSetNode;
ColorRGBA60: TColorRGBANode;
Coordinate61: TCoordinateNode;
Shape62: TShapeNode;
LineSet63: TLineSetNode;
ColorRGBA64: TColorRGBANode;
Coordinate65: TCoordinateNode;
HAnimJoint66: THAnimJointNode;
HAnimSegment67: THAnimSegmentNode;
TouchSensor68: TTouchSensorNode;
Transform69: TTransformNode;
Shape70: TShapeNode;
Shape71: TShapeNode;
LineSet72: TLineSetNode;
ColorRGBA73: TColorRGBANode;
Coordinate74: TCoordinateNode;
Shape75: TShapeNode;
LineSet76: TLineSetNode;
ColorRGBA77: TColorRGBANode;
Coordinate78: TCoordinateNode;
Shape79: TShapeNode;
LineSet80: TLineSetNode;
ColorRGBA81: TColorRGBANode;
Coordinate82: TCoordinateNode;
Shape83: TShapeNode;
LineSet84: TLineSetNode;
ColorRGBA85: TColorRGBANode;
Coordinate86: TCoordinateNode;
Shape87: TShapeNode;
LineSet88: TLineSetNode;
ColorRGBA89: TColorRGBANode;
Coordinate90: TCoordinateNode;
Shape91: TShapeNode;
LineSet92: TLineSetNode;
ColorRGBA93: TColorRGBANode;
Coordinate94: TCoordinateNode;
Shape95: TShapeNode;
LineSet96: TLineSetNode;
ColorRGBA97: TColorRGBANode;
Coordinate98: TCoordinateNode;
Shape99: TShapeNode;
LineSet100: TLineSetNode;
ColorRGBA101: TColorRGBANode;
Coordinate102: TCoordinateNode;
Shape103: TShapeNode;
LineSet104: TLineSetNode;
ColorRGBA105: TColorRGBANode;
Coordinate106: TCoordinateNode;
Shape107: TShapeNode;
LineSet108: TLineSetNode;
ColorRGBA109: TColorRGBANode;
Coordinate110: TCoordinateNode;
Shape111: TShapeNode;
LineSet112: TLineSetNode;
ColorRGBA113: TColorRGBANode;
Coordinate114: TCoordinateNode;
HAnimSite115: THAnimSiteNode;
TouchSensor116: TTouchSensorNode;
Shape117: TShapeNode;
Appearance118: TAppearanceNode;
Material119: TMaterialNode;
IndexedFaceSet120: TIndexedFaceSetNode;
Coordinate121: TCoordinateNode;
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
HAnimSite140: THAnimSiteNode;
TouchSensor141: TTouchSensorNode;
Shape142: TShapeNode;
HAnimSite143: THAnimSiteNode;
TouchSensor144: TTouchSensorNode;
Shape145: TShapeNode;
HAnimJoint146: THAnimJointNode;
HAnimSegment147: THAnimSegmentNode;
TouchSensor148: TTouchSensorNode;
Transform149: TTransformNode;
Shape150: TShapeNode;
Shape151: TShapeNode;
LineSet152: TLineSetNode;
ColorRGBA153: TColorRGBANode;
Coordinate154: TCoordinateNode;
Shape155: TShapeNode;
LineSet156: TLineSetNode;
ColorRGBA157: TColorRGBANode;
Coordinate158: TCoordinateNode;
Shape159: TShapeNode;
LineSet160: TLineSetNode;
ColorRGBA161: TColorRGBANode;
Coordinate162: TCoordinateNode;
Shape163: TShapeNode;
LineSet164: TLineSetNode;
ColorRGBA165: TColorRGBANode;
Coordinate166: TCoordinateNode;
HAnimSite167: THAnimSiteNode;
TouchSensor168: TTouchSensorNode;
Shape169: TShapeNode;
HAnimSite170: THAnimSiteNode;
TouchSensor171: TTouchSensorNode;
Shape172: TShapeNode;
HAnimSite173: THAnimSiteNode;
TouchSensor174: TTouchSensorNode;
Shape175: TShapeNode;
HAnimJoint176: THAnimJointNode;
HAnimSegment177: THAnimSegmentNode;
TouchSensor178: TTouchSensorNode;
Transform179: TTransformNode;
Shape180: TShapeNode;
Shape181: TShapeNode;
LineSet182: TLineSetNode;
ColorRGBA183: TColorRGBANode;
Coordinate184: TCoordinateNode;
HAnimJoint185: THAnimJointNode;
HAnimSegment186: THAnimSegmentNode;
TouchSensor187: TTouchSensorNode;
Transform188: TTransformNode;
Shape189: TShapeNode;
Shape190: TShapeNode;
LineSet191: TLineSetNode;
ColorRGBA192: TColorRGBANode;
Coordinate193: TCoordinateNode;
Shape194: TShapeNode;
LineSet195: TLineSetNode;
ColorRGBA196: TColorRGBANode;
Coordinate197: TCoordinateNode;
Shape198: TShapeNode;
LineSet199: TLineSetNode;
ColorRGBA200: TColorRGBANode;
Coordinate201: TCoordinateNode;
Shape202: TShapeNode;
LineSet203: TLineSetNode;
ColorRGBA204: TColorRGBANode;
Coordinate205: TCoordinateNode;
Shape206: TShapeNode;
LineSet207: TLineSetNode;
ColorRGBA208: TColorRGBANode;
Coordinate209: TCoordinateNode;
HAnimSite210: THAnimSiteNode;
TouchSensor211: TTouchSensorNode;
Shape212: TShapeNode;
HAnimSite213: THAnimSiteNode;
TouchSensor214: TTouchSensorNode;
Shape215: TShapeNode;
HAnimSite216: THAnimSiteNode;
TouchSensor217: TTouchSensorNode;
Shape218: TShapeNode;
HAnimSite219: THAnimSiteNode;
TouchSensor220: TTouchSensorNode;
Shape221: TShapeNode;
HAnimJoint222: THAnimJointNode;
HAnimSegment223: THAnimSegmentNode;
TouchSensor224: TTouchSensorNode;
Transform225: TTransformNode;
Shape226: TShapeNode;
Shape227: TShapeNode;
LineSet228: TLineSetNode;
ColorRGBA229: TColorRGBANode;
Coordinate230: TCoordinateNode;
HAnimJoint231: THAnimJointNode;
HAnimSegment232: THAnimSegmentNode;
TouchSensor233: TTouchSensorNode;
Transform234: TTransformNode;
Shape235: TShapeNode;
Shape236: TShapeNode;
LineSet237: TLineSetNode;
ColorRGBA238: TColorRGBANode;
Coordinate239: TCoordinateNode;
Shape240: TShapeNode;
LineSet241: TLineSetNode;
ColorRGBA242: TColorRGBANode;
Coordinate243: TCoordinateNode;
HAnimSite244: THAnimSiteNode;
TouchSensor245: TTouchSensorNode;
Shape246: TShapeNode;
HAnimJoint247: THAnimJointNode;
HAnimSegment248: THAnimSegmentNode;
TouchSensor249: TTouchSensorNode;
Transform250: TTransformNode;
Shape251: TShapeNode;
Shape252: TShapeNode;
LineSet253: TLineSetNode;
ColorRGBA254: TColorRGBANode;
Coordinate255: TCoordinateNode;
Shape256: TShapeNode;
LineSet257: TLineSetNode;
ColorRGBA258: TColorRGBANode;
Coordinate259: TCoordinateNode;
Shape260: TShapeNode;
LineSet261: TLineSetNode;
ColorRGBA262: TColorRGBANode;
Coordinate263: TCoordinateNode;
HAnimSite264: THAnimSiteNode;
TouchSensor265: TTouchSensorNode;
Shape266: TShapeNode;
HAnimSite267: THAnimSiteNode;
TouchSensor268: TTouchSensorNode;
Shape269: TShapeNode;
HAnimSite270: THAnimSiteNode;
TouchSensor271: TTouchSensorNode;
Shape272: TShapeNode;
HAnimJoint273: THAnimJointNode;
HAnimSegment274: THAnimSegmentNode;
TouchSensor275: TTouchSensorNode;
Transform276: TTransformNode;
Shape277: TShapeNode;
Shape278: TShapeNode;
LineSet279: TLineSetNode;
ColorRGBA280: TColorRGBANode;
Coordinate281: TCoordinateNode;
Shape282: TShapeNode;
LineSet283: TLineSetNode;
ColorRGBA284: TColorRGBANode;
Coordinate285: TCoordinateNode;
Shape286: TShapeNode;
LineSet287: TLineSetNode;
ColorRGBA288: TColorRGBANode;
Coordinate289: TCoordinateNode;
Shape290: TShapeNode;
LineSet291: TLineSetNode;
ColorRGBA292: TColorRGBANode;
Coordinate293: TCoordinateNode;
HAnimSite294: THAnimSiteNode;
TouchSensor295: TTouchSensorNode;
Shape296: TShapeNode;
HAnimSite297: THAnimSiteNode;
TouchSensor298: TTouchSensorNode;
Shape299: TShapeNode;
HAnimSite300: THAnimSiteNode;
TouchSensor301: TTouchSensorNode;
Shape302: TShapeNode;
HAnimJoint303: THAnimJointNode;
HAnimSegment304: THAnimSegmentNode;
TouchSensor305: TTouchSensorNode;
Transform306: TTransformNode;
Shape307: TShapeNode;
Shape308: TShapeNode;
LineSet309: TLineSetNode;
ColorRGBA310: TColorRGBANode;
Coordinate311: TCoordinateNode;
HAnimJoint312: THAnimJointNode;
HAnimSegment313: THAnimSegmentNode;
TouchSensor314: TTouchSensorNode;
Transform315: TTransformNode;
Shape316: TShapeNode;
Shape317: TShapeNode;
LineSet318: TLineSetNode;
ColorRGBA319: TColorRGBANode;
Coordinate320: TCoordinateNode;
Shape321: TShapeNode;
LineSet322: TLineSetNode;
ColorRGBA323: TColorRGBANode;
Coordinate324: TCoordinateNode;
Shape325: TShapeNode;
LineSet326: TLineSetNode;
ColorRGBA327: TColorRGBANode;
Coordinate328: TCoordinateNode;
Shape329: TShapeNode;
LineSet330: TLineSetNode;
ColorRGBA331: TColorRGBANode;
Coordinate332: TCoordinateNode;
Shape333: TShapeNode;
LineSet334: TLineSetNode;
ColorRGBA335: TColorRGBANode;
Coordinate336: TCoordinateNode;
HAnimSite337: THAnimSiteNode;
TouchSensor338: TTouchSensorNode;
Shape339: TShapeNode;
HAnimSite340: THAnimSiteNode;
TouchSensor341: TTouchSensorNode;
Shape342: TShapeNode;
HAnimSite343: THAnimSiteNode;
TouchSensor344: TTouchSensorNode;
Shape345: TShapeNode;
HAnimSite346: THAnimSiteNode;
TouchSensor347: TTouchSensorNode;
Shape348: TShapeNode;
HAnimJoint349: THAnimJointNode;
HAnimSegment350: THAnimSegmentNode;
TouchSensor351: TTouchSensorNode;
Transform352: TTransformNode;
Shape353: TShapeNode;
Shape354: TShapeNode;
LineSet355: TLineSetNode;
ColorRGBA356: TColorRGBANode;
Coordinate357: TCoordinateNode;
HAnimJoint358: THAnimJointNode;
HAnimSegment359: THAnimSegmentNode;
TouchSensor360: TTouchSensorNode;
Transform361: TTransformNode;
Shape362: TShapeNode;
Shape363: TShapeNode;
LineSet364: TLineSetNode;
ColorRGBA365: TColorRGBANode;
Coordinate366: TCoordinateNode;
Shape367: TShapeNode;
LineSet368: TLineSetNode;
ColorRGBA369: TColorRGBANode;
Coordinate370: TCoordinateNode;
HAnimSite371: THAnimSiteNode;
TouchSensor372: TTouchSensorNode;
Shape373: TShapeNode;
HAnimJoint374: THAnimJointNode;
HAnimSegment375: THAnimSegmentNode;
TouchSensor376: TTouchSensorNode;
Transform377: TTransformNode;
Shape378: TShapeNode;
Shape379: TShapeNode;
LineSet380: TLineSetNode;
ColorRGBA381: TColorRGBANode;
Coordinate382: TCoordinateNode;
Shape383: TShapeNode;
LineSet384: TLineSetNode;
ColorRGBA385: TColorRGBANode;
Coordinate386: TCoordinateNode;
Shape387: TShapeNode;
LineSet388: TLineSetNode;
ColorRGBA389: TColorRGBANode;
Coordinate390: TCoordinateNode;
HAnimSite391: THAnimSiteNode;
TouchSensor392: TTouchSensorNode;
Shape393: TShapeNode;
HAnimSite394: THAnimSiteNode;
TouchSensor395: TTouchSensorNode;
Shape396: TShapeNode;
HAnimSite397: THAnimSiteNode;
TouchSensor398: TTouchSensorNode;
Shape399: TShapeNode;
HAnimJoint400: THAnimJointNode;
HAnimSegment401: THAnimSegmentNode;
TouchSensor402: TTouchSensorNode;
Transform403: TTransformNode;
Shape404: TShapeNode;
Shape405: TShapeNode;
LineSet406: TLineSetNode;
ColorRGBA407: TColorRGBANode;
Coordinate408: TCoordinateNode;
Shape409: TShapeNode;
LineSet410: TLineSetNode;
ColorRGBA411: TColorRGBANode;
Coordinate412: TCoordinateNode;
Shape413: TShapeNode;
LineSet414: TLineSetNode;
ColorRGBA415: TColorRGBANode;
Coordinate416: TCoordinateNode;
HAnimSite417: THAnimSiteNode;
TouchSensor418: TTouchSensorNode;
Shape419: TShapeNode;
HAnimSite420: THAnimSiteNode;
TouchSensor421: TTouchSensorNode;
Shape422: TShapeNode;
HAnimJoint423: THAnimJointNode;
HAnimSegment424: THAnimSegmentNode;
TouchSensor425: TTouchSensorNode;
Transform426: TTransformNode;
Shape427: TShapeNode;
Shape428: TShapeNode;
LineSet429: TLineSetNode;
ColorRGBA430: TColorRGBANode;
Coordinate431: TCoordinateNode;
HAnimJoint432: THAnimJointNode;
HAnimSegment433: THAnimSegmentNode;
TouchSensor434: TTouchSensorNode;
Transform435: TTransformNode;
Shape436: TShapeNode;
Shape437: TShapeNode;
LineSet438: TLineSetNode;
ColorRGBA439: TColorRGBANode;
Coordinate440: TCoordinateNode;
HAnimJoint441: THAnimJointNode;
HAnimSegment442: THAnimSegmentNode;
TouchSensor443: TTouchSensorNode;
Transform444: TTransformNode;
Shape445: TShapeNode;
Shape446: TShapeNode;
LineSet447: TLineSetNode;
ColorRGBA448: TColorRGBANode;
Coordinate449: TCoordinateNode;
Shape450: TShapeNode;
LineSet451: TLineSetNode;
ColorRGBA452: TColorRGBANode;
Coordinate453: TCoordinateNode;
Shape454: TShapeNode;
LineSet455: TLineSetNode;
ColorRGBA456: TColorRGBANode;
Coordinate457: TCoordinateNode;
Shape458: TShapeNode;
LineSet459: TLineSetNode;
ColorRGBA460: TColorRGBANode;
Coordinate461: TCoordinateNode;
HAnimSite462: THAnimSiteNode;
TouchSensor463: TTouchSensorNode;
Shape464: TShapeNode;
HAnimSite465: THAnimSiteNode;
TouchSensor466: TTouchSensorNode;
Shape467: TShapeNode;
HAnimSite468: THAnimSiteNode;
TouchSensor469: TTouchSensorNode;
Shape470: TShapeNode;
HAnimJoint471: THAnimJointNode;
HAnimSegment472: THAnimSegmentNode;
TouchSensor473: TTouchSensorNode;
Transform474: TTransformNode;
Shape475: TShapeNode;
Shape476: TShapeNode;
LineSet477: TLineSetNode;
ColorRGBA478: TColorRGBANode;
Coordinate479: TCoordinateNode;
HAnimJoint480: THAnimJointNode;
HAnimSegment481: THAnimSegmentNode;
TouchSensor482: TTouchSensorNode;
Transform483: TTransformNode;
Shape484: TShapeNode;
Shape485: TShapeNode;
LineSet486: TLineSetNode;
ColorRGBA487: TColorRGBANode;
Coordinate488: TCoordinateNode;
HAnimJoint489: THAnimJointNode;
HAnimSegment490: THAnimSegmentNode;
TouchSensor491: TTouchSensorNode;
Transform492: TTransformNode;
Shape493: TShapeNode;
Shape494: TShapeNode;
LineSet495: TLineSetNode;
ColorRGBA496: TColorRGBANode;
Coordinate497: TCoordinateNode;
HAnimJoint498: THAnimJointNode;
HAnimSegment499: THAnimSegmentNode;
TouchSensor500: TTouchSensorNode;
Transform501: TTransformNode;
Shape502: TShapeNode;
Shape503: TShapeNode;
LineSet504: TLineSetNode;
ColorRGBA505: TColorRGBANode;
Coordinate506: TCoordinateNode;
Shape507: TShapeNode;
LineSet508: TLineSetNode;
ColorRGBA509: TColorRGBANode;
Coordinate510: TCoordinateNode;
HAnimSite511: THAnimSiteNode;
TouchSensor512: TTouchSensorNode;
Shape513: TShapeNode;
HAnimJoint514: THAnimJointNode;
HAnimSegment515: THAnimSegmentNode;
TouchSensor516: TTouchSensorNode;
Transform517: TTransformNode;
Shape518: TShapeNode;
Shape519: TShapeNode;
LineSet520: TLineSetNode;
ColorRGBA521: TColorRGBANode;
Coordinate522: TCoordinateNode;
Shape523: TShapeNode;
LineSet524: TLineSetNode;
ColorRGBA525: TColorRGBANode;
Coordinate526: TCoordinateNode;
Shape527: TShapeNode;
LineSet528: TLineSetNode;
ColorRGBA529: TColorRGBANode;
Coordinate530: TCoordinateNode;
HAnimSite531: THAnimSiteNode;
TouchSensor532: TTouchSensorNode;
Shape533: TShapeNode;
HAnimSite534: THAnimSiteNode;
TouchSensor535: TTouchSensorNode;
Shape536: TShapeNode;
HAnimJoint537: THAnimJointNode;
HAnimSegment538: THAnimSegmentNode;
TouchSensor539: TTouchSensorNode;
Transform540: TTransformNode;
Shape541: TShapeNode;
Shape542: TShapeNode;
LineSet543: TLineSetNode;
ColorRGBA544: TColorRGBANode;
Coordinate545: TCoordinateNode;
HAnimJoint546: THAnimJointNode;
HAnimSegment547: THAnimSegmentNode;
TouchSensor548: TTouchSensorNode;
Transform549: TTransformNode;
Shape550: TShapeNode;
Shape551: TShapeNode;
LineSet552: TLineSetNode;
ColorRGBA553: TColorRGBANode;
Coordinate554: TCoordinateNode;
HAnimJoint555: THAnimJointNode;
HAnimSegment556: THAnimSegmentNode;
TouchSensor557: TTouchSensorNode;
Transform558: TTransformNode;
Shape559: TShapeNode;
Shape560: TShapeNode;
LineSet561: TLineSetNode;
ColorRGBA562: TColorRGBANode;
Coordinate563: TCoordinateNode;
HAnimJoint564: THAnimJointNode;
HAnimSegment565: THAnimSegmentNode;
TouchSensor566: TTouchSensorNode;
Transform567: TTransformNode;
Shape568: TShapeNode;
Shape569: TShapeNode;
LineSet570: TLineSetNode;
ColorRGBA571: TColorRGBANode;
Coordinate572: TCoordinateNode;
HAnimJoint573: THAnimJointNode;
HAnimSegment574: THAnimSegmentNode;
TouchSensor575: TTouchSensorNode;
Transform576: TTransformNode;
Shape577: TShapeNode;
Shape578: TShapeNode;
LineSet579: TLineSetNode;
ColorRGBA580: TColorRGBANode;
Coordinate581: TCoordinateNode;
HAnimJoint582: THAnimJointNode;
HAnimSegment583: THAnimSegmentNode;
TouchSensor584: TTouchSensorNode;
Transform585: TTransformNode;
Shape586: TShapeNode;
Shape587: TShapeNode;
LineSet588: TLineSetNode;
ColorRGBA589: TColorRGBANode;
Coordinate590: TCoordinateNode;
HAnimJoint591: THAnimJointNode;
HAnimSegment592: THAnimSegmentNode;
TouchSensor593: TTouchSensorNode;
Transform594: TTransformNode;
Shape595: TShapeNode;
Shape596: TShapeNode;
LineSet597: TLineSetNode;
ColorRGBA598: TColorRGBANode;
Coordinate599: TCoordinateNode;
HAnimJoint600: THAnimJointNode;
HAnimSegment601: THAnimSegmentNode;
TouchSensor602: TTouchSensorNode;
Transform603: TTransformNode;
Shape604: TShapeNode;
Shape605: TShapeNode;
LineSet606: TLineSetNode;
ColorRGBA607: TColorRGBANode;
Coordinate608: TCoordinateNode;
Shape609: TShapeNode;
LineSet610: TLineSetNode;
ColorRGBA611: TColorRGBANode;
Coordinate612: TCoordinateNode;
Shape613: TShapeNode;
LineSet614: TLineSetNode;
ColorRGBA615: TColorRGBANode;
Coordinate616: TCoordinateNode;
Shape617: TShapeNode;
LineSet618: TLineSetNode;
ColorRGBA619: TColorRGBANode;
Coordinate620: TCoordinateNode;
Shape621: TShapeNode;
LineSet622: TLineSetNode;
ColorRGBA623: TColorRGBANode;
Coordinate624: TCoordinateNode;
HAnimSite625: THAnimSiteNode;
TouchSensor626: TTouchSensorNode;
Shape627: TShapeNode;
HAnimSite628: THAnimSiteNode;
TouchSensor629: TTouchSensorNode;
Shape630: TShapeNode;
HAnimJoint631: THAnimJointNode;
HAnimSegment632: THAnimSegmentNode;
TouchSensor633: TTouchSensorNode;
Transform634: TTransformNode;
Shape635: TShapeNode;
Shape636: TShapeNode;
LineSet637: TLineSetNode;
ColorRGBA638: TColorRGBANode;
Coordinate639: TCoordinateNode;
Shape640: TShapeNode;
LineSet641: TLineSetNode;
ColorRGBA642: TColorRGBANode;
Coordinate643: TCoordinateNode;
Shape644: TShapeNode;
LineSet645: TLineSetNode;
ColorRGBA646: TColorRGBANode;
Coordinate647: TCoordinateNode;
HAnimSite648: THAnimSiteNode;
TouchSensor649: TTouchSensorNode;
Shape650: TShapeNode;
HAnimSite651: THAnimSiteNode;
TouchSensor652: TTouchSensorNode;
Shape653: TShapeNode;
HAnimJoint654: THAnimJointNode;
HAnimSegment655: THAnimSegmentNode;
TouchSensor656: TTouchSensorNode;
Transform657: TTransformNode;
Shape658: TShapeNode;
Shape659: TShapeNode;
LineSet660: TLineSetNode;
ColorRGBA661: TColorRGBANode;
Coordinate662: TCoordinateNode;
HAnimJoint663: THAnimJointNode;
HAnimSegment664: THAnimSegmentNode;
TouchSensor665: TTouchSensorNode;
Transform666: TTransformNode;
Shape667: TShapeNode;
Shape668: TShapeNode;
LineSet669: TLineSetNode;
ColorRGBA670: TColorRGBANode;
Coordinate671: TCoordinateNode;
HAnimJoint672: THAnimJointNode;
HAnimSegment673: THAnimSegmentNode;
TouchSensor674: TTouchSensorNode;
Transform675: TTransformNode;
Shape676: TShapeNode;
Shape677: TShapeNode;
LineSet678: TLineSetNode;
ColorRGBA679: TColorRGBANode;
Coordinate680: TCoordinateNode;
HAnimJoint681: THAnimJointNode;
HAnimSegment682: THAnimSegmentNode;
TouchSensor683: TTouchSensorNode;
Transform684: TTransformNode;
Shape685: TShapeNode;
Shape686: TShapeNode;
LineSet687: TLineSetNode;
ColorRGBA688: TColorRGBANode;
Coordinate689: TCoordinateNode;
HAnimJoint690: THAnimJointNode;
HAnimSegment691: THAnimSegmentNode;
TouchSensor692: TTouchSensorNode;
Transform693: TTransformNode;
Shape694: TShapeNode;
Shape695: TShapeNode;
LineSet696: TLineSetNode;
ColorRGBA697: TColorRGBANode;
Coordinate698: TCoordinateNode;
HAnimJoint699: THAnimJointNode;
HAnimSegment700: THAnimSegmentNode;
TouchSensor701: TTouchSensorNode;
Transform702: TTransformNode;
Shape703: TShapeNode;
Shape704: TShapeNode;
LineSet705: TLineSetNode;
ColorRGBA706: TColorRGBANode;
Coordinate707: TCoordinateNode;
HAnimJoint708: THAnimJointNode;
HAnimSegment709: THAnimSegmentNode;
TouchSensor710: TTouchSensorNode;
Transform711: TTransformNode;
Shape712: TShapeNode;
Shape713: TShapeNode;
LineSet714: TLineSetNode;
ColorRGBA715: TColorRGBANode;
Coordinate716: TCoordinateNode;
Shape717: TShapeNode;
LineSet718: TLineSetNode;
ColorRGBA719: TColorRGBANode;
Coordinate720: TCoordinateNode;
Shape721: TShapeNode;
LineSet722: TLineSetNode;
ColorRGBA723: TColorRGBANode;
Coordinate724: TCoordinateNode;
Shape725: TShapeNode;
LineSet726: TLineSetNode;
ColorRGBA727: TColorRGBANode;
Coordinate728: TCoordinateNode;
Shape729: TShapeNode;
LineSet730: TLineSetNode;
ColorRGBA731: TColorRGBANode;
Coordinate732: TCoordinateNode;
Shape733: TShapeNode;
LineSet734: TLineSetNode;
ColorRGBA735: TColorRGBANode;
Coordinate736: TCoordinateNode;
Shape737: TShapeNode;
LineSet738: TLineSetNode;
ColorRGBA739: TColorRGBANode;
Coordinate740: TCoordinateNode;
Shape741: TShapeNode;
LineSet742: TLineSetNode;
ColorRGBA743: TColorRGBANode;
Coordinate744: TCoordinateNode;
Shape745: TShapeNode;
LineSet746: TLineSetNode;
ColorRGBA747: TColorRGBANode;
Coordinate748: TCoordinateNode;
Shape749: TShapeNode;
LineSet750: TLineSetNode;
ColorRGBA751: TColorRGBANode;
Coordinate752: TCoordinateNode;
Shape753: TShapeNode;
LineSet754: TLineSetNode;
ColorRGBA755: TColorRGBANode;
Coordinate756: TCoordinateNode;
Shape757: TShapeNode;
LineSet758: TLineSetNode;
ColorRGBA759: TColorRGBANode;
Coordinate760: TCoordinateNode;
Shape761: TShapeNode;
LineSet762: TLineSetNode;
ColorRGBA763: TColorRGBANode;
Coordinate764: TCoordinateNode;
Shape765: TShapeNode;
LineSet766: TLineSetNode;
ColorRGBA767: TColorRGBANode;
Coordinate768: TCoordinateNode;
Shape769: TShapeNode;
LineSet770: TLineSetNode;
ColorRGBA771: TColorRGBANode;
Coordinate772: TCoordinateNode;
Shape773: TShapeNode;
LineSet774: TLineSetNode;
ColorRGBA775: TColorRGBANode;
Coordinate776: TCoordinateNode;
Shape777: TShapeNode;
LineSet778: TLineSetNode;
ColorRGBA779: TColorRGBANode;
Coordinate780: TCoordinateNode;
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
HAnimSite805: THAnimSiteNode;
TouchSensor806: TTouchSensorNode;
Shape807: TShapeNode;
HAnimSite808: THAnimSiteNode;
TouchSensor809: TTouchSensorNode;
Shape810: TShapeNode;
HAnimJoint811: THAnimJointNode;
HAnimSegment812: THAnimSegmentNode;
TouchSensor813: TTouchSensorNode;
Transform814: TTransformNode;
Shape815: TShapeNode;
Shape816: TShapeNode;
LineSet817: TLineSetNode;
ColorRGBA818: TColorRGBANode;
Coordinate819: TCoordinateNode;
HAnimSite820: THAnimSiteNode;
TouchSensor821: TTouchSensorNode;
Shape822: TShapeNode;
Viewpoint823: TViewpointNode;
Anchor824: TAnchorNode;
LOD825: TLODNode;
WorldInfo826: TWorldInfoNode;
Shape827: TShapeNode;
Appearance828: TAppearanceNode;
Material829: TMaterialNode;
IndexedFaceSet830: TIndexedFaceSetNode;
Coordinate831: TCoordinateNode;
HAnimJoint832: THAnimJointNode;
HAnimSegment833: THAnimSegmentNode;
TouchSensor834: TTouchSensorNode;
Transform835: TTransformNode;
Shape836: TShapeNode;
HAnimJoint837: THAnimJointNode;
HAnimSegment838: THAnimSegmentNode;
TouchSensor839: TTouchSensorNode;
Transform840: TTransformNode;
Shape841: TShapeNode;
HAnimJoint842: THAnimJointNode;
HAnimSegment843: THAnimSegmentNode;
TouchSensor844: TTouchSensorNode;
Transform845: TTransformNode;
Shape846: TShapeNode;
Shape847: TShapeNode;
LineSet848: TLineSetNode;
ColorRGBA849: TColorRGBANode;
Coordinate850: TCoordinateNode;
HAnimSite851: THAnimSiteNode;
TouchSensor852: TTouchSensorNode;
Shape853: TShapeNode;
Viewpoint854: TViewpointNode;
Anchor855: TAnchorNode;
LOD856: TLODNode;
WorldInfo857: TWorldInfoNode;
Shape858: TShapeNode;
HAnimJoint859: THAnimJointNode;
HAnimSegment860: THAnimSegmentNode;
TouchSensor861: TTouchSensorNode;
Transform862: TTransformNode;
Shape863: TShapeNode;
HAnimJoint864: THAnimJointNode;
HAnimSegment865: THAnimSegmentNode;
TouchSensor866: TTouchSensorNode;
Transform867: TTransformNode;
Shape868: TShapeNode;
HAnimJoint869: THAnimJointNode;
HAnimSegment870: THAnimSegmentNode;
TouchSensor871: TTouchSensorNode;
Transform872: TTransformNode;
Shape873: TShapeNode;
Shape874: TShapeNode;
LineSet875: TLineSetNode;
ColorRGBA876: TColorRGBANode;
Coordinate877: TCoordinateNode;
Shape878: TShapeNode;
LineSet879: TLineSetNode;
ColorRGBA880: TColorRGBANode;
Coordinate881: TCoordinateNode;
HAnimSite882: THAnimSiteNode;
TouchSensor883: TTouchSensorNode;
Shape884: TShapeNode;
HAnimSite885: THAnimSiteNode;
TouchSensor886: TTouchSensorNode;
Shape887: TShapeNode;
HAnimJoint888: THAnimJointNode;
HAnimSegment889: THAnimSegmentNode;
TouchSensor890: TTouchSensorNode;
Transform891: TTransformNode;
Shape892: TShapeNode;
Shape893: TShapeNode;
LineSet894: TLineSetNode;
ColorRGBA895: TColorRGBANode;
Coordinate896: TCoordinateNode;
Shape897: TShapeNode;
LineSet898: TLineSetNode;
ColorRGBA899: TColorRGBANode;
Coordinate900: TCoordinateNode;
Shape901: TShapeNode;
LineSet902: TLineSetNode;
ColorRGBA903: TColorRGBANode;
Coordinate904: TCoordinateNode;
Shape905: TShapeNode;
LineSet906: TLineSetNode;
ColorRGBA907: TColorRGBANode;
Coordinate908: TCoordinateNode;
Shape909: TShapeNode;
LineSet910: TLineSetNode;
ColorRGBA911: TColorRGBANode;
Coordinate912: TCoordinateNode;
HAnimSite913: THAnimSiteNode;
TouchSensor914: TTouchSensorNode;
Shape915: TShapeNode;
HAnimSite916: THAnimSiteNode;
TouchSensor917: TTouchSensorNode;
Shape918: TShapeNode;
HAnimSite919: THAnimSiteNode;
TouchSensor920: TTouchSensorNode;
Shape921: TShapeNode;
HAnimSite922: THAnimSiteNode;
TouchSensor923: TTouchSensorNode;
Shape924: TShapeNode;
HAnimJoint925: THAnimJointNode;
HAnimSegment926: THAnimSegmentNode;
TouchSensor927: TTouchSensorNode;
Transform928: TTransformNode;
Shape929: TShapeNode;
Shape930: TShapeNode;
LineSet931: TLineSetNode;
ColorRGBA932: TColorRGBANode;
Coordinate933: TCoordinateNode;
HAnimJoint934: THAnimJointNode;
HAnimSegment935: THAnimSegmentNode;
TouchSensor936: TTouchSensorNode;
Transform937: TTransformNode;
Shape938: TShapeNode;
Shape939: TShapeNode;
LineSet940: TLineSetNode;
ColorRGBA941: TColorRGBANode;
Coordinate942: TCoordinateNode;
Shape943: TShapeNode;
LineSet944: TLineSetNode;
ColorRGBA945: TColorRGBANode;
Coordinate946: TCoordinateNode;
HAnimSite947: THAnimSiteNode;
TouchSensor948: TTouchSensorNode;
Shape949: TShapeNode;
HAnimJoint950: THAnimJointNode;
HAnimSegment951: THAnimSegmentNode;
TouchSensor952: TTouchSensorNode;
Transform953: TTransformNode;
Shape954: TShapeNode;
Shape955: TShapeNode;
LineSet956: TLineSetNode;
ColorRGBA957: TColorRGBANode;
Coordinate958: TCoordinateNode;
Shape959: TShapeNode;
LineSet960: TLineSetNode;
ColorRGBA961: TColorRGBANode;
Coordinate962: TCoordinateNode;
Shape963: TShapeNode;
LineSet964: TLineSetNode;
ColorRGBA965: TColorRGBANode;
Coordinate966: TCoordinateNode;
Shape967: TShapeNode;
LineSet968: TLineSetNode;
ColorRGBA969: TColorRGBANode;
Coordinate970: TCoordinateNode;
Shape971: TShapeNode;
LineSet972: TLineSetNode;
ColorRGBA973: TColorRGBANode;
Coordinate974: TCoordinateNode;
HAnimSite975: THAnimSiteNode;
TouchSensor976: TTouchSensorNode;
Shape977: TShapeNode;
HAnimSite978: THAnimSiteNode;
TouchSensor979: TTouchSensorNode;
Shape980: TShapeNode;
HAnimSite981: THAnimSiteNode;
TouchSensor982: TTouchSensorNode;
Shape983: TShapeNode;
HAnimSite984: THAnimSiteNode;
TouchSensor985: TTouchSensorNode;
Shape986: TShapeNode;
HAnimJoint987: THAnimJointNode;
HAnimSegment988: THAnimSegmentNode;
TouchSensor989: TTouchSensorNode;
Transform990: TTransformNode;
Shape991: TShapeNode;
Shape992: TShapeNode;
LineSet993: TLineSetNode;
ColorRGBA994: TColorRGBANode;
Coordinate995: TCoordinateNode;
Shape996: TShapeNode;
LineSet997: TLineSetNode;
ColorRGBA998: TColorRGBANode;
Coordinate999: TCoordinateNode;
Shape1000: TShapeNode;
LineSet1001: TLineSetNode;
ColorRGBA1002: TColorRGBANode;
Coordinate1003: TCoordinateNode;
Shape1004: TShapeNode;
LineSet1005: TLineSetNode;
ColorRGBA1006: TColorRGBANode;
Coordinate1007: TCoordinateNode;
Shape1008: TShapeNode;
LineSet1009: TLineSetNode;
ColorRGBA1010: TColorRGBANode;
Coordinate1011: TCoordinateNode;
Shape1012: TShapeNode;
LineSet1013: TLineSetNode;
ColorRGBA1014: TColorRGBANode;
Coordinate1015: TCoordinateNode;
Shape1016: TShapeNode;
LineSet1017: TLineSetNode;
ColorRGBA1018: TColorRGBANode;
Coordinate1019: TCoordinateNode;
Shape1020: TShapeNode;
LineSet1021: TLineSetNode;
ColorRGBA1022: TColorRGBANode;
Coordinate1023: TCoordinateNode;
Shape1024: TShapeNode;
LineSet1025: TLineSetNode;
ColorRGBA1026: TColorRGBANode;
Coordinate1027: TCoordinateNode;
HAnimSite1028: THAnimSiteNode;
TouchSensor1029: TTouchSensorNode;
Shape1030: TShapeNode;
HAnimSite1031: THAnimSiteNode;
TouchSensor1032: TTouchSensorNode;
Shape1033: TShapeNode;
HAnimSite1034: THAnimSiteNode;
TouchSensor1035: TTouchSensorNode;
Shape1036: TShapeNode;
HAnimSite1037: THAnimSiteNode;
TouchSensor1038: TTouchSensorNode;
Shape1039: TShapeNode;
Viewpoint1040: TViewpointNode;
Anchor1041: TAnchorNode;
LOD1042: TLODNode;
WorldInfo1043: TWorldInfoNode;
Shape1044: TShapeNode;
HAnimJoint1045: THAnimJointNode;
HAnimSegment1046: THAnimSegmentNode;
TouchSensor1047: TTouchSensorNode;
Transform1048: TTransformNode;
Shape1049: TShapeNode;
Shape1050: TShapeNode;
LineSet1051: TLineSetNode;
ColorRGBA1052: TColorRGBANode;
Coordinate1053: TCoordinateNode;
HAnimJoint1054: THAnimJointNode;
HAnimSegment1055: THAnimSegmentNode;
TouchSensor1056: TTouchSensorNode;
Transform1057: TTransformNode;
Shape1058: TShapeNode;
Shape1059: TShapeNode;
LineSet1060: TLineSetNode;
ColorRGBA1061: TColorRGBANode;
Coordinate1062: TCoordinateNode;
HAnimJoint1063: THAnimJointNode;
HAnimSegment1064: THAnimSegmentNode;
TouchSensor1065: TTouchSensorNode;
Transform1066: TTransformNode;
Shape1067: TShapeNode;
Shape1068: TShapeNode;
LineSet1069: TLineSetNode;
ColorRGBA1070: TColorRGBANode;
Coordinate1071: TCoordinateNode;
HAnimSite1072: THAnimSiteNode;
TouchSensor1073: TTouchSensorNode;
Shape1074: TShapeNode;
HAnimJoint1075: THAnimJointNode;
HAnimSegment1076: THAnimSegmentNode;
TouchSensor1077: TTouchSensorNode;
Transform1078: TTransformNode;
Shape1079: TShapeNode;
Shape1080: TShapeNode;
LineSet1081: TLineSetNode;
ColorRGBA1082: TColorRGBANode;
Coordinate1083: TCoordinateNode;
HAnimJoint1084: THAnimJointNode;
HAnimSegment1085: THAnimSegmentNode;
TouchSensor1086: TTouchSensorNode;
Transform1087: TTransformNode;
Shape1088: TShapeNode;
Shape1089: TShapeNode;
LineSet1090: TLineSetNode;
ColorRGBA1091: TColorRGBANode;
Coordinate1092: TCoordinateNode;
HAnimJoint1093: THAnimJointNode;
HAnimSegment1094: THAnimSegmentNode;
TouchSensor1095: TTouchSensorNode;
Transform1096: TTransformNode;
Shape1097: TShapeNode;
Shape1098: TShapeNode;
LineSet1099: TLineSetNode;
ColorRGBA1100: TColorRGBANode;
Coordinate1101: TCoordinateNode;
HAnimJoint1102: THAnimJointNode;
HAnimSegment1103: THAnimSegmentNode;
TouchSensor1104: TTouchSensorNode;
Transform1105: TTransformNode;
Shape1106: TShapeNode;
Shape1107: TShapeNode;
LineSet1108: TLineSetNode;
ColorRGBA1109: TColorRGBANode;
Coordinate1110: TCoordinateNode;
Shape1111: TShapeNode;
LineSet1112: TLineSetNode;
ColorRGBA1113: TColorRGBANode;
Coordinate1114: TCoordinateNode;
HAnimSite1115: THAnimSiteNode;
TouchSensor1116: TTouchSensorNode;
Shape1117: TShapeNode;
HAnimSite1118: THAnimSiteNode;
TouchSensor1119: TTouchSensorNode;
Shape1120: TShapeNode;
HAnimJoint1121: THAnimJointNode;
HAnimSegment1122: THAnimSegmentNode;
TouchSensor1123: TTouchSensorNode;
Transform1124: TTransformNode;
Shape1125: TShapeNode;
Shape1126: TShapeNode;
LineSet1127: TLineSetNode;
ColorRGBA1128: TColorRGBANode;
Coordinate1129: TCoordinateNode;
HAnimJoint1130: THAnimJointNode;
HAnimSegment1131: THAnimSegmentNode;
TouchSensor1132: TTouchSensorNode;
Transform1133: TTransformNode;
Shape1134: TShapeNode;
Shape1135: TShapeNode;
LineSet1136: TLineSetNode;
ColorRGBA1137: TColorRGBANode;
Coordinate1138: TCoordinateNode;
HAnimJoint1139: THAnimJointNode;
HAnimSegment1140: THAnimSegmentNode;
TouchSensor1141: TTouchSensorNode;
Transform1142: TTransformNode;
Shape1143: TShapeNode;
Shape1144: TShapeNode;
LineSet1145: TLineSetNode;
ColorRGBA1146: TColorRGBANode;
Coordinate1147: TCoordinateNode;
HAnimJoint1148: THAnimJointNode;
HAnimSegment1149: THAnimSegmentNode;
TouchSensor1150: TTouchSensorNode;
Transform1151: TTransformNode;
Shape1152: TShapeNode;
Shape1153: TShapeNode;
LineSet1154: TLineSetNode;
ColorRGBA1155: TColorRGBANode;
Coordinate1156: TCoordinateNode;
HAnimSite1157: THAnimSiteNode;
TouchSensor1158: TTouchSensorNode;
Shape1159: TShapeNode;
HAnimJoint1160: THAnimJointNode;
HAnimSegment1161: THAnimSegmentNode;
TouchSensor1162: TTouchSensorNode;
Transform1163: TTransformNode;
Shape1164: TShapeNode;
Shape1165: TShapeNode;
LineSet1166: TLineSetNode;
ColorRGBA1167: TColorRGBANode;
Coordinate1168: TCoordinateNode;
HAnimJoint1169: THAnimJointNode;
HAnimSegment1170: THAnimSegmentNode;
TouchSensor1171: TTouchSensorNode;
Transform1172: TTransformNode;
Shape1173: TShapeNode;
Shape1174: TShapeNode;
LineSet1175: TLineSetNode;
ColorRGBA1176: TColorRGBANode;
Coordinate1177: TCoordinateNode;
HAnimJoint1178: THAnimJointNode;
HAnimSegment1179: THAnimSegmentNode;
TouchSensor1180: TTouchSensorNode;
Transform1181: TTransformNode;
Shape1182: TShapeNode;
Shape1183: TShapeNode;
LineSet1184: TLineSetNode;
ColorRGBA1185: TColorRGBANode;
Coordinate1186: TCoordinateNode;
HAnimJoint1187: THAnimJointNode;
HAnimSegment1188: THAnimSegmentNode;
TouchSensor1189: TTouchSensorNode;
Transform1190: TTransformNode;
Shape1191: TShapeNode;
Shape1192: TShapeNode;
LineSet1193: TLineSetNode;
ColorRGBA1194: TColorRGBANode;
Coordinate1195: TCoordinateNode;
HAnimSite1196: THAnimSiteNode;
TouchSensor1197: TTouchSensorNode;
Shape1198: TShapeNode;
HAnimJoint1199: THAnimJointNode;
HAnimSegment1200: THAnimSegmentNode;
TouchSensor1201: TTouchSensorNode;
Transform1202: TTransformNode;
Shape1203: TShapeNode;
Shape1204: TShapeNode;
LineSet1205: TLineSetNode;
ColorRGBA1206: TColorRGBANode;
Coordinate1207: TCoordinateNode;
HAnimJoint1208: THAnimJointNode;
HAnimSegment1209: THAnimSegmentNode;
TouchSensor1210: TTouchSensorNode;
Transform1211: TTransformNode;
Shape1212: TShapeNode;
Shape1213: TShapeNode;
LineSet1214: TLineSetNode;
ColorRGBA1215: TColorRGBANode;
Coordinate1216: TCoordinateNode;
HAnimJoint1217: THAnimJointNode;
HAnimSegment1218: THAnimSegmentNode;
TouchSensor1219: TTouchSensorNode;
Transform1220: TTransformNode;
Shape1221: TShapeNode;
Shape1222: TShapeNode;
LineSet1223: TLineSetNode;
ColorRGBA1224: TColorRGBANode;
Coordinate1225: TCoordinateNode;
HAnimJoint1226: THAnimJointNode;
HAnimSegment1227: THAnimSegmentNode;
TouchSensor1228: TTouchSensorNode;
Transform1229: TTransformNode;
Shape1230: TShapeNode;
Shape1231: TShapeNode;
LineSet1232: TLineSetNode;
ColorRGBA1233: TColorRGBANode;
Coordinate1234: TCoordinateNode;
HAnimSite1235: THAnimSiteNode;
TouchSensor1236: TTouchSensorNode;
Shape1237: TShapeNode;
HAnimJoint1238: THAnimJointNode;
HAnimSegment1239: THAnimSegmentNode;
TouchSensor1240: TTouchSensorNode;
Transform1241: TTransformNode;
Shape1242: TShapeNode;
Shape1243: TShapeNode;
LineSet1244: TLineSetNode;
ColorRGBA1245: TColorRGBANode;
Coordinate1246: TCoordinateNode;
Shape1247: TShapeNode;
LineSet1248: TLineSetNode;
ColorRGBA1249: TColorRGBANode;
Coordinate1250: TCoordinateNode;
Shape1251: TShapeNode;
LineSet1252: TLineSetNode;
ColorRGBA1253: TColorRGBANode;
Coordinate1254: TCoordinateNode;
Shape1255: TShapeNode;
LineSet1256: TLineSetNode;
ColorRGBA1257: TColorRGBANode;
Coordinate1258: TCoordinateNode;
Shape1259: TShapeNode;
LineSet1260: TLineSetNode;
ColorRGBA1261: TColorRGBANode;
Coordinate1262: TCoordinateNode;
HAnimSite1263: THAnimSiteNode;
TouchSensor1264: TTouchSensorNode;
Shape1265: TShapeNode;
HAnimSite1266: THAnimSiteNode;
TouchSensor1267: TTouchSensorNode;
Shape1268: TShapeNode;
HAnimSite1269: THAnimSiteNode;
TouchSensor1270: TTouchSensorNode;
Shape1271: TShapeNode;
HAnimSite1272: THAnimSiteNode;
TouchSensor1273: TTouchSensorNode;
Shape1274: TShapeNode;
HAnimJoint1275: THAnimJointNode;
HAnimSegment1276: THAnimSegmentNode;
TouchSensor1277: TTouchSensorNode;
Transform1278: TTransformNode;
Shape1279: TShapeNode;
Shape1280: TShapeNode;
LineSet1281: TLineSetNode;
ColorRGBA1282: TColorRGBANode;
Coordinate1283: TCoordinateNode;
HAnimJoint1284: THAnimJointNode;
HAnimSegment1285: THAnimSegmentNode;
TouchSensor1286: TTouchSensorNode;
Transform1287: TTransformNode;
Shape1288: TShapeNode;
Shape1289: TShapeNode;
LineSet1290: TLineSetNode;
ColorRGBA1291: TColorRGBANode;
Coordinate1292: TCoordinateNode;
Shape1293: TShapeNode;
LineSet1294: TLineSetNode;
ColorRGBA1295: TColorRGBANode;
Coordinate1296: TCoordinateNode;
HAnimSite1297: THAnimSiteNode;
TouchSensor1298: TTouchSensorNode;
Shape1299: TShapeNode;
HAnimJoint1300: THAnimJointNode;
HAnimSegment1301: THAnimSegmentNode;
TouchSensor1302: TTouchSensorNode;
Transform1303: TTransformNode;
Shape1304: TShapeNode;
Shape1305: TShapeNode;
LineSet1306: TLineSetNode;
ColorRGBA1307: TColorRGBANode;
Coordinate1308: TCoordinateNode;
Shape1309: TShapeNode;
LineSet1310: TLineSetNode;
ColorRGBA1311: TColorRGBANode;
Coordinate1312: TCoordinateNode;
Shape1313: TShapeNode;
LineSet1314: TLineSetNode;
ColorRGBA1315: TColorRGBANode;
Coordinate1316: TCoordinateNode;
Shape1317: TShapeNode;
LineSet1318: TLineSetNode;
ColorRGBA1319: TColorRGBANode;
Coordinate1320: TCoordinateNode;
Shape1321: TShapeNode;
LineSet1322: TLineSetNode;
ColorRGBA1323: TColorRGBANode;
Coordinate1324: TCoordinateNode;
HAnimSite1325: THAnimSiteNode;
TouchSensor1326: TTouchSensorNode;
Shape1327: TShapeNode;
HAnimSite1328: THAnimSiteNode;
TouchSensor1329: TTouchSensorNode;
Shape1330: TShapeNode;
HAnimSite1331: THAnimSiteNode;
TouchSensor1332: TTouchSensorNode;
Shape1333: TShapeNode;
HAnimSite1334: THAnimSiteNode;
TouchSensor1335: TTouchSensorNode;
Shape1336: TShapeNode;
HAnimJoint1337: THAnimJointNode;
HAnimSegment1338: THAnimSegmentNode;
TouchSensor1339: TTouchSensorNode;
Transform1340: TTransformNode;
Shape1341: TShapeNode;
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
Shape1366: TShapeNode;
LineSet1367: TLineSetNode;
ColorRGBA1368: TColorRGBANode;
Coordinate1369: TCoordinateNode;
Shape1370: TShapeNode;
LineSet1371: TLineSetNode;
ColorRGBA1372: TColorRGBANode;
Coordinate1373: TCoordinateNode;
Shape1374: TShapeNode;
LineSet1375: TLineSetNode;
ColorRGBA1376: TColorRGBANode;
Coordinate1377: TCoordinateNode;
HAnimSite1378: THAnimSiteNode;
TouchSensor1379: TTouchSensorNode;
Shape1380: TShapeNode;
HAnimSite1381: THAnimSiteNode;
TouchSensor1382: TTouchSensorNode;
Shape1383: TShapeNode;
HAnimSite1384: THAnimSiteNode;
TouchSensor1385: TTouchSensorNode;
Shape1386: TShapeNode;
HAnimSite1387: THAnimSiteNode;
TouchSensor1388: TTouchSensorNode;
Shape1389: TShapeNode;
Viewpoint1390: TViewpointNode;
Anchor1391: TAnchorNode;
LOD1392: TLODNode;
WorldInfo1393: TWorldInfoNode;
Shape1394: TShapeNode;
HAnimJoint1395: THAnimJointNode;
HAnimSegment1396: THAnimSegmentNode;
TouchSensor1397: TTouchSensorNode;
Transform1398: TTransformNode;
Shape1399: TShapeNode;
Shape1400: TShapeNode;
LineSet1401: TLineSetNode;
ColorRGBA1402: TColorRGBANode;
Coordinate1403: TCoordinateNode;
HAnimJoint1404: THAnimJointNode;
HAnimSegment1405: THAnimSegmentNode;
TouchSensor1406: TTouchSensorNode;
Transform1407: TTransformNode;
Shape1408: TShapeNode;
Shape1409: TShapeNode;
LineSet1410: TLineSetNode;
ColorRGBA1411: TColorRGBANode;
Coordinate1412: TCoordinateNode;
HAnimJoint1413: THAnimJointNode;
HAnimSegment1414: THAnimSegmentNode;
TouchSensor1415: TTouchSensorNode;
Transform1416: TTransformNode;
Shape1417: TShapeNode;
Shape1418: TShapeNode;
LineSet1419: TLineSetNode;
ColorRGBA1420: TColorRGBANode;
Coordinate1421: TCoordinateNode;
HAnimSite1422: THAnimSiteNode;
TouchSensor1423: TTouchSensorNode;
Shape1424: TShapeNode;
HAnimJoint1425: THAnimJointNode;
HAnimSegment1426: THAnimSegmentNode;
TouchSensor1427: TTouchSensorNode;
Transform1428: TTransformNode;
Shape1429: TShapeNode;
Shape1430: TShapeNode;
LineSet1431: TLineSetNode;
ColorRGBA1432: TColorRGBANode;
Coordinate1433: TCoordinateNode;
HAnimJoint1434: THAnimJointNode;
HAnimSegment1435: THAnimSegmentNode;
TouchSensor1436: TTouchSensorNode;
Transform1437: TTransformNode;
Shape1438: TShapeNode;
Shape1439: TShapeNode;
LineSet1440: TLineSetNode;
ColorRGBA1441: TColorRGBANode;
Coordinate1442: TCoordinateNode;
HAnimJoint1443: THAnimJointNode;
HAnimSegment1444: THAnimSegmentNode;
TouchSensor1445: TTouchSensorNode;
Transform1446: TTransformNode;
Shape1447: TShapeNode;
Shape1448: TShapeNode;
LineSet1449: TLineSetNode;
ColorRGBA1450: TColorRGBANode;
Coordinate1451: TCoordinateNode;
HAnimJoint1452: THAnimJointNode;
HAnimSegment1453: THAnimSegmentNode;
TouchSensor1454: TTouchSensorNode;
Transform1455: TTransformNode;
Shape1456: TShapeNode;
Shape1457: TShapeNode;
LineSet1458: TLineSetNode;
ColorRGBA1459: TColorRGBANode;
Coordinate1460: TCoordinateNode;
Shape1461: TShapeNode;
LineSet1462: TLineSetNode;
ColorRGBA1463: TColorRGBANode;
Coordinate1464: TCoordinateNode;
HAnimSite1465: THAnimSiteNode;
TouchSensor1466: TTouchSensorNode;
Shape1467: TShapeNode;
HAnimSite1468: THAnimSiteNode;
TouchSensor1469: TTouchSensorNode;
Shape1470: TShapeNode;
HAnimJoint1471: THAnimJointNode;
HAnimSegment1472: THAnimSegmentNode;
TouchSensor1473: TTouchSensorNode;
Transform1474: TTransformNode;
Shape1475: TShapeNode;
Shape1476: TShapeNode;
LineSet1477: TLineSetNode;
ColorRGBA1478: TColorRGBANode;
Coordinate1479: TCoordinateNode;
HAnimJoint1480: THAnimJointNode;
HAnimSegment1481: THAnimSegmentNode;
TouchSensor1482: TTouchSensorNode;
Transform1483: TTransformNode;
Shape1484: TShapeNode;
Shape1485: TShapeNode;
LineSet1486: TLineSetNode;
ColorRGBA1487: TColorRGBANode;
Coordinate1488: TCoordinateNode;
HAnimJoint1489: THAnimJointNode;
HAnimSegment1490: THAnimSegmentNode;
TouchSensor1491: TTouchSensorNode;
Transform1492: TTransformNode;
Shape1493: TShapeNode;
Shape1494: TShapeNode;
LineSet1495: TLineSetNode;
ColorRGBA1496: TColorRGBANode;
Coordinate1497: TCoordinateNode;
HAnimJoint1498: THAnimJointNode;
HAnimSegment1499: THAnimSegmentNode;
TouchSensor1500: TTouchSensorNode;
Transform1501: TTransformNode;
Shape1502: TShapeNode;
Shape1503: TShapeNode;
LineSet1504: TLineSetNode;
ColorRGBA1505: TColorRGBANode;
Coordinate1506: TCoordinateNode;
HAnimSite1507: THAnimSiteNode;
TouchSensor1508: TTouchSensorNode;
Shape1509: TShapeNode;
HAnimJoint1510: THAnimJointNode;
HAnimSegment1511: THAnimSegmentNode;
TouchSensor1512: TTouchSensorNode;
Transform1513: TTransformNode;
Shape1514: TShapeNode;
Shape1515: TShapeNode;
LineSet1516: TLineSetNode;
ColorRGBA1517: TColorRGBANode;
Coordinate1518: TCoordinateNode;
HAnimJoint1519: THAnimJointNode;
HAnimSegment1520: THAnimSegmentNode;
TouchSensor1521: TTouchSensorNode;
Transform1522: TTransformNode;
Shape1523: TShapeNode;
Shape1524: TShapeNode;
LineSet1525: TLineSetNode;
ColorRGBA1526: TColorRGBANode;
Coordinate1527: TCoordinateNode;
HAnimJoint1528: THAnimJointNode;
HAnimSegment1529: THAnimSegmentNode;
TouchSensor1530: TTouchSensorNode;
Transform1531: TTransformNode;
Shape1532: TShapeNode;
Shape1533: TShapeNode;
LineSet1534: TLineSetNode;
ColorRGBA1535: TColorRGBANode;
Coordinate1536: TCoordinateNode;
HAnimJoint1537: THAnimJointNode;
HAnimSegment1538: THAnimSegmentNode;
TouchSensor1539: TTouchSensorNode;
Transform1540: TTransformNode;
Shape1541: TShapeNode;
Shape1542: TShapeNode;
LineSet1543: TLineSetNode;
ColorRGBA1544: TColorRGBANode;
Coordinate1545: TCoordinateNode;
HAnimSite1546: THAnimSiteNode;
TouchSensor1547: TTouchSensorNode;
Shape1548: TShapeNode;
HAnimJoint1549: THAnimJointNode;
HAnimSegment1550: THAnimSegmentNode;
TouchSensor1551: TTouchSensorNode;
Transform1552: TTransformNode;
Shape1553: TShapeNode;
Shape1554: TShapeNode;
LineSet1555: TLineSetNode;
ColorRGBA1556: TColorRGBANode;
Coordinate1557: TCoordinateNode;
HAnimJoint1558: THAnimJointNode;
HAnimSegment1559: THAnimSegmentNode;
TouchSensor1560: TTouchSensorNode;
Transform1561: TTransformNode;
Shape1562: TShapeNode;
Shape1563: TShapeNode;
LineSet1564: TLineSetNode;
ColorRGBA1565: TColorRGBANode;
Coordinate1566: TCoordinateNode;
HAnimJoint1567: THAnimJointNode;
HAnimSegment1568: THAnimSegmentNode;
TouchSensor1569: TTouchSensorNode;
Transform1570: TTransformNode;
Shape1571: TShapeNode;
Shape1572: TShapeNode;
LineSet1573: TLineSetNode;
ColorRGBA1574: TColorRGBANode;
Coordinate1575: TCoordinateNode;
HAnimJoint1576: THAnimJointNode;
HAnimSegment1577: THAnimSegmentNode;
TouchSensor1578: TTouchSensorNode;
Transform1579: TTransformNode;
Shape1580: TShapeNode;
Shape1581: TShapeNode;
LineSet1582: TLineSetNode;
ColorRGBA1583: TColorRGBANode;
Coordinate1584: TCoordinateNode;
HAnimSite1585: THAnimSiteNode;
TouchSensor1586: TTouchSensorNode;
Shape1587: TShapeNode;
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
HAnimJoint1668: THAnimJointNode;
HAnimJoint1669: THAnimJointNode;
HAnimJoint1670: THAnimJointNode;
HAnimJoint1671: THAnimJointNode;
HAnimJoint1672: THAnimJointNode;
HAnimJoint1673: THAnimJointNode;
HAnimJoint1674: THAnimJointNode;
HAnimJoint1675: THAnimJointNode;
HAnimJoint1676: THAnimJointNode;
HAnimJoint1677: THAnimJointNode;
HAnimJoint1678: THAnimJointNode;
HAnimJoint1679: THAnimJointNode;
HAnimJoint1680: THAnimJointNode;
HAnimJoint1681: THAnimJointNode;
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
HAnimSegment1762: THAnimSegmentNode;
HAnimSegment1763: THAnimSegmentNode;
HAnimSegment1764: THAnimSegmentNode;
HAnimSegment1765: THAnimSegmentNode;
HAnimSegment1766: THAnimSegmentNode;
HAnimSegment1767: THAnimSegmentNode;
HAnimSegment1768: THAnimSegmentNode;
HAnimSegment1769: THAnimSegmentNode;
HAnimSegment1770: THAnimSegmentNode;
HAnimSegment1771: THAnimSegmentNode;
HAnimSegment1772: THAnimSegmentNode;
HAnimSegment1773: THAnimSegmentNode;
HAnimSegment1774: THAnimSegmentNode;
HAnimSegment1775: THAnimSegmentNode;
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
HAnimSite1854: THAnimSiteNode;
HAnimSite1855: THAnimSiteNode;
HAnimSite1856: THAnimSiteNode;
HAnimSite1857: THAnimSiteNode;
HAnimSite1858: THAnimSiteNode;
HAnimSite1859: THAnimSiteNode;
HAnimSite1860: THAnimSiteNode;
HAnimSite1861: THAnimSiteNode;
HAnimSite1862: THAnimSiteNode;
HAnimSite1863: THAnimSiteNode;
HAnimSite1864: THAnimSiteNode;
HAnimSite1865: THAnimSiteNode;
HAnimSite1866: THAnimSiteNode;
HAnimSite1867: THAnimSiteNode;
TouchSensor1868: TTouchSensorNode;
Shape1869: TShapeNode;
Viewpoint1870: TViewpointNode;
Anchor1871: TAnchorNode;
LOD1872: TLODNode;
WorldInfo1873: TWorldInfoNode;
Shape1874: TShapeNode;
HAnimSite1875: THAnimSiteNode;
TouchSensor1876: TTouchSensorNode;
Shape1877: TShapeNode;
Viewpoint1878: TViewpointNode;
Anchor1879: TAnchorNode;
LOD1880: TLODNode;
WorldInfo1881: TWorldInfoNode;
Shape1882: TShapeNode;
HAnimSite1883: THAnimSiteNode;
TouchSensor1884: TTouchSensorNode;
Shape1885: TShapeNode;
Viewpoint1886: TViewpointNode;
Anchor1887: TAnchorNode;
LOD1888: TLODNode;
WorldInfo1889: TWorldInfoNode;
Shape1890: TShapeNode;
HAnimSite1891: THAnimSiteNode;
TouchSensor1892: TTouchSensorNode;
Shape1893: TShapeNode;
Viewpoint1894: TViewpointNode;
Anchor1895: TAnchorNode;
LOD1896: TLODNode;
WorldInfo1897: TWorldInfoNode;
Shape1898: TShapeNode;
HAnimSite1899: THAnimSiteNode;
TouchSensor1900: TTouchSensorNode;
Shape1901: TShapeNode;
Viewpoint1902: TViewpointNode;
Anchor1903: TAnchorNode;
LOD1904: TLODNode;
WorldInfo1905: TWorldInfoNode;
Shape1906: TShapeNode;
HAnimSite1907: THAnimSiteNode;
TouchSensor1908: TTouchSensorNode;
Shape1909: TShapeNode;
Viewpoint1910: TViewpointNode;
Anchor1911: TAnchorNode;
LOD1912: TLODNode;
WorldInfo1913: TWorldInfoNode;
Shape1914: TShapeNode;
HAnimSite1915: THAnimSiteNode;
TouchSensor1916: TTouchSensorNode;
Shape1917: TShapeNode;
Viewpoint1918: TViewpointNode;
Anchor1919: TAnchorNode;
LOD1920: TLODNode;
WorldInfo1921: TWorldInfoNode;
Shape1922: TShapeNode;
HAnimSite1923: THAnimSiteNode;
TouchSensor1924: TTouchSensorNode;
Shape1925: TShapeNode;
Viewpoint1926: TViewpointNode;
Anchor1927: TAnchorNode;
LOD1928: TLODNode;
WorldInfo1929: TWorldInfoNode;
Shape1930: TShapeNode;
HAnimSite1931: THAnimSiteNode;
TouchSensor1932: TTouchSensorNode;
Shape1933: TShapeNode;
Viewpoint1934: TViewpointNode;
Anchor1935: TAnchorNode;
LOD1936: TLODNode;
WorldInfo1937: TWorldInfoNode;
Shape1938: TShapeNode;
HAnimSite1939: THAnimSiteNode;
TouchSensor1940: TTouchSensorNode;
Shape1941: TShapeNode;
Viewpoint1942: TViewpointNode;
Anchor1943: TAnchorNode;
LOD1944: TLODNode;
WorldInfo1945: TWorldInfoNode;
Shape1946: TShapeNode;
HAnimSite1947: THAnimSiteNode;
TouchSensor1948: TTouchSensorNode;
Shape1949: TShapeNode;
Viewpoint1950: TViewpointNode;
Anchor1951: TAnchorNode;
LOD1952: TLODNode;
WorldInfo1953: TWorldInfoNode;
Shape1954: TShapeNode;
HAnimSite1955: THAnimSiteNode;
TouchSensor1956: TTouchSensorNode;
Shape1957: TShapeNode;
Viewpoint1958: TViewpointNode;
Anchor1959: TAnchorNode;
LOD1960: TLODNode;
WorldInfo1961: TWorldInfoNode;
Shape1962: TShapeNode;
HAnimSite1963: THAnimSiteNode;
TouchSensor1964: TTouchSensorNode;
Shape1965: TShapeNode;
Viewpoint1966: TViewpointNode;
Anchor1967: TAnchorNode;
LOD1968: TLODNode;
WorldInfo1969: TWorldInfoNode;
Shape1970: TShapeNode;
HAnimSite1971: THAnimSiteNode;
TouchSensor1972: TTouchSensorNode;
Shape1973: TShapeNode;
Viewpoint1974: TViewpointNode;
Anchor1975: TAnchorNode;
LOD1976: TLODNode;
WorldInfo1977: TWorldInfoNode;
Shape1978: TShapeNode;
HAnimSite1979: THAnimSiteNode;
HAnimSite1980: THAnimSiteNode;
HAnimSite1981: THAnimSiteNode;
HAnimSite1982: THAnimSiteNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'HAnim2SpecificationLOA3Illustrated.x3d';
X3D0.Meta['description'] := 'HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.';
X3D0.Meta['reference'] := 'https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds';
X3D0.Meta['reference'] := 'HAnim2SpecificationLOA3Invisible.x3d';
X3D0.Meta['reference'] := 'HAnim2SpecificationLOA3Animation.x3d';
X3D0.Meta['reference'] := 'HAnimSpecificationExampleChangeLog.txt';
X3D0.Meta['reference'] := 'Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.';
X3D0.Meta['reference'] := 'http://www.cis.upenn.edu/~badler/anthro/89-71.ps';
X3D0.Meta['reference'] := 'tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf';
X3D0.Meta['reference'] := 'originals/LOA3ExampleSourceWithDiamondsOriginal.wrl';
X3D0.Meta['reference'] := 'originals/LOA3ExampleSourceWithDiamondsOriginal.x3d';
X3D0.Meta['reference'] := 'originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d';
X3D0.Meta['reference'] := 'HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames';
X3D0.Meta['created'] := '18 February 2021';
X3D0.Meta['modified'] := 'Mon, 15 Sep 2025 05:20:09 GMT';
X3D0.Meta['creator'] := 'Don Brutzman';
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
TouchSensor52 := TTouchSensorNode.Create;
TouchSensor52.Description := 'HAnimJoint humanoid_root, HAnimSegment sacrum';
{ .AddChildren }
HAnimSegment51.AddChildren([TouchSensor52]);
Transform53 := TTransformNode.Create;
Transform53.Translation := Vector3(0,0.824,0.0277);
Shape54 := TShapeNode.Create;
Appearance55 := TAppearanceNode.Create;
Material56 := TMaterialNode.Create;
Material56.DiffuseColor := Vector3(1,0.5,0);
Material56.Transparency := 0.5;
{ .SetMaterial }
Appearance55.Material := Material56;
{ .SetAppearance }
Shape54.Appearance := Appearance55;
Sphere57 := TSphereNode.Create;
Sphere57.Radius := 0.006;
{ .SetGeometry }
Shape54.Geometry := Sphere57;
{ .AddChild }
Transform53.AddChildren([Shape54]);
{ .AddChildren }
HAnimSegment51.AddChildren([Transform53]);
Shape58 := TShapeNode.Create;
LineSet59 := TLineSetNode.Create;
LineSet59.SetVertexCount([2]);
ColorRGBA60 := TColorRGBANode.Create;
ColorRGBA60.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ .SetColor }
LineSet59.Color := ColorRGBA60;
Coordinate61 := TCoordinateNode.Create;
Coordinate61.SetPoint([Vector3(0,0.824,0.0277),Vector3(0,0.9149,0.0016)]);
{ .SetCoord }
LineSet59.Coord := Coordinate61;
{ .SetGeometry }
Shape58.Geometry := LineSet59;
{ .AddChildren }
HAnimSegment51.AddChildren([Shape58]);
Shape62 := TShapeNode.Create;
LineSet63 := TLineSetNode.Create;
LineSet63.SetVertexCount([2]);
ColorRGBA64 := TColorRGBANode.Create;
ColorRGBA64 := ColorRGBA60;
{ .SetColor }
LineSet63.Color := ColorRGBA64;
Coordinate65 := TCoordinateNode.Create;
Coordinate65.SetPoint([Vector3(0,0.824,0.0277),Vector3(0.0028,1.0568,-0.0776)]);
{ .SetCoord }
LineSet63.Coord := Coordinate65;
{ .SetGeometry }
Shape62.Geometry := LineSet63;
{ .AddChildren }
HAnimSegment51.AddChildren([Shape62]);
{ .AddChildren }
HAnimJoint50.AddChildren([HAnimSegment51]);
HAnimJoint66 := THAnimJointNode.Create;
HAnimJoint66.NameField := 'sacroiliac';
HAnimJoint66.Center := Vector3(0,0.9149,0.0016);
HAnimSegment67 := THAnimSegmentNode.Create;
HAnimSegment67.NameField := 'pelvis';
TouchSensor68 := TTouchSensorNode.Create;
TouchSensor68.Description := 'HAnimJoint sacroiliac, HAnimSegment pelvis';
{ .AddChildren }
HAnimSegment67.AddChildren([TouchSensor68]);
Transform69 := TTransformNode.Create;
Transform69.Translation := Vector3(0,0.9149,0.0016);
Shape70 := TShapeNode.Create;
Shape70 := Shape54;
{ .AddChild }
Transform69.AddChildren([Shape70]);
{ .AddChildren }
HAnimSegment67.AddChildren([Transform69]);
Shape71 := TShapeNode.Create;
LineSet72 := TLineSetNode.Create;
LineSet72.SetVertexCount([2]);
ColorRGBA73 := TColorRGBANode.Create;
ColorRGBA73 := ColorRGBA60;
{ .SetColor }
LineSet72.Color := ColorRGBA73;
Coordinate74 := TCoordinateNode.Create;
Coordinate74.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0961,0.9124,-0.0001)]);
{ .SetCoord }
LineSet72.Coord := Coordinate74;
{ .SetGeometry }
Shape71.Geometry := LineSet72;
{ .AddChildren }
HAnimSegment67.AddChildren([Shape71]);
Shape75 := TShapeNode.Create;
LineSet76 := TLineSetNode.Create;
LineSet76.SetVertexCount([2]);
ColorRGBA77 := TColorRGBANode.Create;
ColorRGBA77 := ColorRGBA60;
{ .SetColor }
LineSet76.Color := ColorRGBA77;
Coordinate78 := TCoordinateNode.Create;
Coordinate78.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.0961,0.9124,-0.0001)]);
{ .SetCoord }
LineSet76.Coord := Coordinate78;
{ .SetGeometry }
Shape75.Geometry := LineSet76;
{ .AddChildren }
HAnimSegment67.AddChildren([Shape75]);
Shape79 := TShapeNode.Create;
LineSet80 := TLineSetNode.Create;
LineSet80.SetVertexCount([2]);
ColorRGBA81 := TColorRGBANode.Create;
ColorRGBA81.SetColor([Vector4(1,0,0,1),Vector4(1,0,0,0.1)]);
{ .SetColor }
LineSet80.Color := ColorRGBA81;
Coordinate82 := TCoordinateNode.Create;
Coordinate82.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.1525,1.0628,0.0035)]);
{ .SetCoord }
LineSet80.Coord := Coordinate82;
{ .SetGeometry }
Shape79.Geometry := LineSet80;
{ .AddChildren }
HAnimSegment67.AddChildren([Shape79]);
Shape83 := TShapeNode.Create;
LineSet84 := TLineSetNode.Create;
LineSet84.SetVertexCount([2]);
ColorRGBA85 := TColorRGBANode.Create;
ColorRGBA85 := ColorRGBA81;
{ .SetColor }
LineSet84.Color := ColorRGBA85;
Coordinate86 := TCoordinateNode.Create;
Coordinate86.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.1689,0.8419,0.0352)]);
{ .SetCoord }
LineSet84.Coord := Coordinate86;
{ .SetGeometry }
Shape83.Geometry := LineSet84;
{ .AddChildren }
HAnimSegment67.AddChildren([Shape83]);
Shape87 := TShapeNode.Create;
LineSet88 := TLineSetNode.Create;
LineSet88.SetVertexCount([2]);
ColorRGBA89 := TColorRGBANode.Create;
ColorRGBA89 := ColorRGBA81;
{ .SetColor }
LineSet88.Color := ColorRGBA89;
Coordinate90 := TCoordinateNode.Create;
Coordinate90.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.1612,1.0537,0.0008)]);
{ .SetCoord }
LineSet88.Coord := Coordinate90;
{ .SetGeometry }
Shape87.Geometry := LineSet88;
{ .AddChildren }
HAnimSegment67.AddChildren([Shape87]);
Shape91 := TShapeNode.Create;
LineSet92 := TLineSetNode.Create;
LineSet92.SetVertexCount([2]);
ColorRGBA93 := TColorRGBANode.Create;
ColorRGBA93 := ColorRGBA81;
{ .SetColor }
LineSet92.Color := ColorRGBA93;
Coordinate94 := TCoordinateNode.Create;
Coordinate94.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.1677,0.8336,0.0303)]);
{ .SetCoord }
LineSet92.Coord := Coordinate94;
{ .SetGeometry }
Shape91.Geometry := LineSet92;
{ .AddChildren }
HAnimSegment67.AddChildren([Shape91]);
Shape95 := TShapeNode.Create;
LineSet96 := TLineSetNode.Create;
LineSet96.SetVertexCount([2]);
ColorRGBA97 := TColorRGBANode.Create;
ColorRGBA97 := ColorRGBA81;
{ .SetColor }
LineSet96.Color := ColorRGBA97;
Coordinate98 := TCoordinateNode.Create;
Coordinate98.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.0887,1.0021,0.1112)]);
{ .SetCoord }
LineSet96.Coord := Coordinate98;
{ .SetGeometry }
Shape95.Geometry := LineSet96;
{ .AddChildren }
HAnimSegment67.AddChildren([Shape95]);
Shape99 := TShapeNode.Create;
LineSet100 := TLineSetNode.Create;
LineSet100.SetVertexCount([2]);
ColorRGBA101 := TColorRGBANode.Create;
ColorRGBA101 := ColorRGBA81;
{ .SetColor }
LineSet100.Color := ColorRGBA101;
Coordinate102 := TCoordinateNode.Create;
Coordinate102.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0925,0.9983,0.1052)]);
{ .SetCoord }
LineSet100.Coord := Coordinate102;
{ .SetGeometry }
Shape99.Geometry := LineSet100;
{ .AddChildren }
HAnimSegment67.AddChildren([Shape99]);
Shape103 := TShapeNode.Create;
LineSet104 := TLineSetNode.Create;
LineSet104.SetVertexCount([2]);
ColorRGBA105 := TColorRGBANode.Create;
ColorRGBA105 := ColorRGBA81;
{ .SetColor }
LineSet104.Color := ColorRGBA105;
Coordinate106 := TCoordinateNode.Create;
Coordinate106.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.0716,1.019,-0.1138)]);
{ .SetCoord }
LineSet104.Coord := Coordinate106;
{ .SetGeometry }
Shape103.Geometry := LineSet104;
{ .AddChildren }
HAnimSegment67.AddChildren([Shape103]);
Shape107 := TShapeNode.Create;
LineSet108 := TLineSetNode.Create;
LineSet108.SetVertexCount([2]);
ColorRGBA109 := TColorRGBANode.Create;
ColorRGBA109 := ColorRGBA81;
{ .SetColor }
LineSet108.Color := ColorRGBA109;
Coordinate110 := TCoordinateNode.Create;
Coordinate110.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0774,1.019,-0.1151)]);
{ .SetCoord }
LineSet108.Coord := Coordinate110;
{ .SetGeometry }
Shape107.Geometry := LineSet108;
{ .AddChildren }
HAnimSegment67.AddChildren([Shape107]);
Shape111 := TShapeNode.Create;
LineSet112 := TLineSetNode.Create;
LineSet112.SetVertexCount([2]);
ColorRGBA113 := TColorRGBANode.Create;
ColorRGBA113 := ColorRGBA81;
{ .SetColor }
LineSet112.Color := ColorRGBA113;
Coordinate114 := TCoordinateNode.Create;
Coordinate114.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0034,0.8266,0.0257)]);
{ .SetCoord }
LineSet112.Coord := Coordinate114;
{ .SetGeometry }
Shape111.Geometry := LineSet112;
{ .AddChildren }
HAnimSegment67.AddChildren([Shape111]);
HAnimSite115 := THAnimSiteNode.Create;
HAnimSite115.NameField := 'r_iliocristale_pt';
HAnimSite115.Translation := Vector3(-0.1525,1.0628,0.0035);
TouchSensor116 := TTouchSensorNode.Create;
TouchSensor116.Description := 'HAnimSite r_iliocristale_pt';
{ .AddChildren }
HAnimSite115.AddChildren([TouchSensor116]);
Shape117 := TShapeNode.Create;
Appearance118 := TAppearanceNode.Create;
Material119 := TMaterialNode.Create;
Material119.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance118.Material := Material119;
{ .SetAppearance }
Shape117.Appearance := Appearance118;
IndexedFaceSet120 := TIndexedFaceSetNode.Create;
IndexedFaceSet120.Solid := False;
IndexedFaceSet120.CreaseAngle := 0.5;
IndexedFaceSet120.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate121 := TCoordinateNode.Create;
Coordinate121.SetPoint([Vector3(0,0.008,0),Vector3(-0.008,0,0),Vector3(0,0,0.008),Vector3(0.008,0,0),Vector3(0,0,-0.008),Vector3(0,-0.008,0)]);
{ .SetCoord }
IndexedFaceSet120.Coord := Coordinate121;
{ .SetGeometry }
Shape117.Geometry := IndexedFaceSet120;
{ .AddChildren }
HAnimSite115.AddChildren([Shape117]);
{ .AddChildren }
HAnimSegment67.AddChildren([HAnimSite115]);
HAnimSite122 := THAnimSiteNode.Create;
HAnimSite122.NameField := 'r_trochanterion_pt';
HAnimSite122.Translation := Vector3(-0.1689,0.8419,0.0352);
TouchSensor123 := TTouchSensorNode.Create;
TouchSensor123.Description := 'HAnimSite r_trochanterion_pt';
{ .AddChildren }
HAnimSite122.AddChildren([TouchSensor123]);
Shape124 := TShapeNode.Create;
Shape124 := Shape117;
{ .AddChildren }
HAnimSite122.AddChildren([Shape124]);
{ .AddChildren }
HAnimSegment67.AddChildren([HAnimSite122]);
HAnimSite125 := THAnimSiteNode.Create;
HAnimSite125.NameField := 'l_iliocristale_pt';
HAnimSite125.Translation := Vector3(0.1612,1.0537,0.0008);
TouchSensor126 := TTouchSensorNode.Create;
TouchSensor126.Description := 'HAnimSite l_iliocristale_pt';
{ .AddChildren }
HAnimSite125.AddChildren([TouchSensor126]);
Shape127 := TShapeNode.Create;
Shape127 := Shape117;
{ .AddChildren }
HAnimSite125.AddChildren([Shape127]);
{ .AddChildren }
HAnimSegment67.AddChildren([HAnimSite125]);
HAnimSite128 := THAnimSiteNode.Create;
HAnimSite128.NameField := 'l_trochanterion_pt';
HAnimSite128.Translation := Vector3(0.1677,0.8336,0.0303);
TouchSensor129 := TTouchSensorNode.Create;
TouchSensor129.Description := 'HAnimSite l_trochanterion_pt';
{ .AddChildren }
HAnimSite128.AddChildren([TouchSensor129]);
Shape130 := TShapeNode.Create;
Shape130 := Shape117;
{ .AddChildren }
HAnimSite128.AddChildren([Shape130]);
{ .AddChildren }
HAnimSegment67.AddChildren([HAnimSite128]);
HAnimSite131 := THAnimSiteNode.Create;
HAnimSite131.NameField := 'r_asis_pt';
HAnimSite131.Translation := Vector3(-0.0887,1.0021,0.1112);
TouchSensor132 := TTouchSensorNode.Create;
TouchSensor132.Description := 'HAnimSite r_asis_pt';
{ .AddChildren }
HAnimSite131.AddChildren([TouchSensor132]);
Shape133 := TShapeNode.Create;
Shape133 := Shape117;
{ .AddChildren }
HAnimSite131.AddChildren([Shape133]);
{ .AddChildren }
HAnimSegment67.AddChildren([HAnimSite131]);
HAnimSite134 := THAnimSiteNode.Create;
HAnimSite134.NameField := 'l_asis_pt';
HAnimSite134.Translation := Vector3(0.0925,0.9983,0.1052);
TouchSensor135 := TTouchSensorNode.Create;
TouchSensor135.Description := 'HAnimSite l_asis_pt';
{ .AddChildren }
HAnimSite134.AddChildren([TouchSensor135]);
Shape136 := TShapeNode.Create;
Shape136 := Shape117;
{ .AddChildren }
HAnimSite134.AddChildren([Shape136]);
{ .AddChildren }
HAnimSegment67.AddChildren([HAnimSite134]);
HAnimSite137 := THAnimSiteNode.Create;
HAnimSite137.NameField := 'r_psis_pt';
HAnimSite137.Translation := Vector3(-0.0716,1.019,-0.1138);
TouchSensor138 := TTouchSensorNode.Create;
TouchSensor138.Description := 'HAnimSite r_psis_pt';
{ .AddChildren }
HAnimSite137.AddChildren([TouchSensor138]);
Shape139 := TShapeNode.Create;
Shape139 := Shape117;
{ .AddChildren }
HAnimSite137.AddChildren([Shape139]);
{ .AddChildren }
HAnimSegment67.AddChildren([HAnimSite137]);
HAnimSite140 := THAnimSiteNode.Create;
HAnimSite140.NameField := 'l_psis_pt';
HAnimSite140.Translation := Vector3(0.0774,1.019,-0.1151);
TouchSensor141 := TTouchSensorNode.Create;
TouchSensor141.Description := 'HAnimSite l_psis_pt';
{ .AddChildren }
HAnimSite140.AddChildren([TouchSensor141]);
Shape142 := TShapeNode.Create;
Shape142 := Shape117;
{ .AddChildren }
HAnimSite140.AddChildren([Shape142]);
{ .AddChildren }
HAnimSegment67.AddChildren([HAnimSite140]);
HAnimSite143 := THAnimSiteNode.Create;
HAnimSite143.NameField := 'crotch_pt';
HAnimSite143.Translation := Vector3(0.0034,0.8266,0.0257);
TouchSensor144 := TTouchSensorNode.Create;
TouchSensor144.Description := 'HAnimSite crotch_pt';
{ .AddChildren }
HAnimSite143.AddChildren([TouchSensor144]);
Shape145 := TShapeNode.Create;
Shape145 := Shape117;
{ .AddChildren }
HAnimSite143.AddChildren([Shape145]);
{ .AddChildren }
HAnimSegment67.AddChildren([HAnimSite143]);
{ .AddChildren }
HAnimJoint66.AddChildren([HAnimSegment67]);
HAnimJoint146 := THAnimJointNode.Create;
HAnimJoint146.NameField := 'l_hip';
HAnimJoint146.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimSegment147 := THAnimSegmentNode.Create;
HAnimSegment147.NameField := 'l_thigh';
TouchSensor148 := TTouchSensorNode.Create;
TouchSensor148.Description := 'HAnimJoint l_hip, HAnimSegment l_thigh';
{ .AddChildren }
HAnimSegment147.AddChildren([TouchSensor148]);
Transform149 := TTransformNode.Create;
Transform149.Translation := Vector3(0.0961,0.9124,-0.0001);
Shape150 := TShapeNode.Create;
Shape150 := Shape54;
{ .AddChild }
Transform149.AddChildren([Shape150]);
{ .AddChildren }
HAnimSegment147.AddChildren([Transform149]);
Shape151 := TShapeNode.Create;
LineSet152 := TLineSetNode.Create;
LineSet152.SetVertexCount([2]);
ColorRGBA153 := TColorRGBANode.Create;
ColorRGBA153 := ColorRGBA60;
{ .SetColor }
LineSet152.Color := ColorRGBA153;
Coordinate154 := TCoordinateNode.Create;
Coordinate154.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.104,0.4867,0.0308)]);
{ .SetCoord }
LineSet152.Coord := Coordinate154;
{ .SetGeometry }
Shape151.Geometry := LineSet152;
{ .AddChildren }
HAnimSegment147.AddChildren([Shape151]);
Shape155 := TShapeNode.Create;
LineSet156 := TLineSetNode.Create;
LineSet156.SetVertexCount([2]);
ColorRGBA157 := TColorRGBANode.Create;
ColorRGBA157 := ColorRGBA81;
{ .SetColor }
LineSet156.Color := ColorRGBA157;
Coordinate158 := TCoordinateNode.Create;
Coordinate158.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.0993,0.4881,-0.0309)]);
{ .SetCoord }
LineSet156.Coord := Coordinate158;
{ .SetGeometry }
Shape155.Geometry := LineSet156;
{ .AddChildren }
HAnimSegment147.AddChildren([Shape155]);
Shape159 := TShapeNode.Create;
LineSet160 := TLineSetNode.Create;
LineSet160.SetVertexCount([2]);
ColorRGBA161 := TColorRGBANode.Create;
ColorRGBA161 := ColorRGBA81;
{ .SetColor }
LineSet160.Color := ColorRGBA161;
Coordinate162 := TCoordinateNode.Create;
Coordinate162.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.1598,0.4967,0.0297)]);
{ .SetCoord }
LineSet160.Coord := Coordinate162;
{ .SetGeometry }
Shape159.Geometry := LineSet160;
{ .AddChildren }
HAnimSegment147.AddChildren([Shape159]);
Shape163 := TShapeNode.Create;
LineSet164 := TLineSetNode.Create;
LineSet164.SetVertexCount([2]);
ColorRGBA165 := TColorRGBANode.Create;
ColorRGBA165 := ColorRGBA81;
{ .SetColor }
LineSet164.Color := ColorRGBA165;
Coordinate166 := TCoordinateNode.Create;
Coordinate166.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.0398,0.4946,0.0303)]);
{ .SetCoord }
LineSet164.Coord := Coordinate166;
{ .SetGeometry }
Shape163.Geometry := LineSet164;
{ .AddChildren }
HAnimSegment147.AddChildren([Shape163]);
HAnimSite167 := THAnimSiteNode.Create;
HAnimSite167.NameField := 'l_knee_crease_pt';
HAnimSite167.Translation := Vector3(0.0993,0.4881,-0.0309);
TouchSensor168 := TTouchSensorNode.Create;
TouchSensor168.Description := 'HAnimSite l_knee_crease_pt';
{ .AddChildren }
HAnimSite167.AddChildren([TouchSensor168]);
Shape169 := TShapeNode.Create;
Shape169 := Shape117;
{ .AddChildren }
HAnimSite167.AddChildren([Shape169]);
{ .AddChildren }
HAnimSegment147.AddChildren([HAnimSite167]);
HAnimSite170 := THAnimSiteNode.Create;
HAnimSite170.NameField := 'l_femoral_lateral_epicondyle_pt';
HAnimSite170.Translation := Vector3(0.1598,0.4967,0.0297);
TouchSensor171 := TTouchSensorNode.Create;
TouchSensor171.Description := 'HAnimSite l_femoral_lateral_epicn_pt';
{ .AddChildren }
HAnimSite170.AddChildren([TouchSensor171]);
Shape172 := TShapeNode.Create;
Shape172 := Shape117;
{ .AddChildren }
HAnimSite170.AddChildren([Shape172]);
{ .AddChildren }
HAnimSegment147.AddChildren([HAnimSite170]);
HAnimSite173 := THAnimSiteNode.Create;
HAnimSite173.NameField := 'l_femoral_medial_epicondyle_pt';
HAnimSite173.Translation := Vector3(0.0398,0.4946,0.0303);
TouchSensor174 := TTouchSensorNode.Create;
TouchSensor174.Description := 'HAnimSite l_femoral_medial_epicn_pt';
{ .AddChildren }
HAnimSite173.AddChildren([TouchSensor174]);
Shape175 := TShapeNode.Create;
Shape175 := Shape117;
{ .AddChildren }
HAnimSite173.AddChildren([Shape175]);
{ .AddChildren }
HAnimSegment147.AddChildren([HAnimSite173]);
{ .AddChildren }
HAnimJoint146.AddChildren([HAnimSegment147]);
HAnimJoint176 := THAnimJointNode.Create;
HAnimJoint176.NameField := 'l_knee';
HAnimJoint176.Center := Vector3(0.104,0.4867,0.0308);
HAnimSegment177 := THAnimSegmentNode.Create;
HAnimSegment177.NameField := 'l_calf';
TouchSensor178 := TTouchSensorNode.Create;
TouchSensor178.Description := 'HAnimJoint l_knee, HAnimSegment l_calf';
{ .AddChildren }
HAnimSegment177.AddChildren([TouchSensor178]);
Transform179 := TTransformNode.Create;
Transform179.Translation := Vector3(0.104,0.4867,0.0308);
Shape180 := TShapeNode.Create;
Shape180 := Shape54;
{ .AddChild }
Transform179.AddChildren([Shape180]);
{ .AddChildren }
HAnimSegment177.AddChildren([Transform179]);
Shape181 := TShapeNode.Create;
LineSet182 := TLineSetNode.Create;
LineSet182.SetVertexCount([2]);
ColorRGBA183 := TColorRGBANode.Create;
ColorRGBA183 := ColorRGBA60;
{ .SetColor }
LineSet182.Color := ColorRGBA183;
Coordinate184 := TCoordinateNode.Create;
Coordinate184.SetPoint([Vector3(0.104,0.4867,0.0308),Vector3(0.1101,0.0656,-0.0736)]);
{ .SetCoord }
LineSet182.Coord := Coordinate184;
{ .SetGeometry }
Shape181.Geometry := LineSet182;
{ .AddChildren }
HAnimSegment177.AddChildren([Shape181]);
{ .AddChildren }
HAnimJoint176.AddChildren([HAnimSegment177]);
HAnimJoint185 := THAnimJointNode.Create;
HAnimJoint185.NameField := 'l_talocrural';
HAnimJoint185.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimSegment186 := THAnimSegmentNode.Create;
HAnimSegment186.NameField := 'l_talus';
TouchSensor187 := TTouchSensorNode.Create;
TouchSensor187.Description := 'HAnimJoint l_talocrural, HAnimSegment l_talus';
{ .AddChildren }
HAnimSegment186.AddChildren([TouchSensor187]);
Transform188 := TTransformNode.Create;
Transform188.Translation := Vector3(0.1101,0.0656,-0.0736);
Shape189 := TShapeNode.Create;
Shape189 := Shape54;
{ .AddChild }
Transform188.AddChildren([Shape189]);
{ .AddChildren }
HAnimSegment186.AddChildren([Transform188]);
Shape190 := TShapeNode.Create;
LineSet191 := TLineSetNode.Create;
LineSet191.SetVertexCount([2]);
ColorRGBA192 := TColorRGBANode.Create;
ColorRGBA192 := ColorRGBA60;
{ .SetColor }
LineSet191.Color := ColorRGBA192;
Coordinate193 := TCoordinateNode.Create;
Coordinate193.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.1086,0.0001,-0.0368)]);
{ .SetCoord }
LineSet191.Coord := Coordinate193;
{ .SetGeometry }
Shape190.Geometry := LineSet191;
{ .AddChildren }
HAnimSegment186.AddChildren([Shape190]);
Shape194 := TShapeNode.Create;
LineSet195 := TLineSetNode.Create;
LineSet195.SetVertexCount([2]);
ColorRGBA196 := TColorRGBANode.Create;
ColorRGBA196 := ColorRGBA81;
{ .SetColor }
LineSet195.Color := ColorRGBA196;
Coordinate197 := TCoordinateNode.Create;
Coordinate197.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.1308,0.0597,-0.1032)]);
{ .SetCoord }
LineSet195.Coord := Coordinate197;
{ .SetGeometry }
Shape194.Geometry := LineSet195;
{ .AddChildren }
HAnimSegment186.AddChildren([Shape194]);
Shape198 := TShapeNode.Create;
LineSet199 := TLineSetNode.Create;
LineSet199.SetVertexCount([2]);
ColorRGBA200 := TColorRGBANode.Create;
ColorRGBA200 := ColorRGBA81;
{ .SetColor }
LineSet199.Color := ColorRGBA200;
Coordinate201 := TCoordinateNode.Create;
Coordinate201.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.089,0.0716,-0.0881)]);
{ .SetCoord }
LineSet199.Coord := Coordinate201;
{ .SetGeometry }
Shape198.Geometry := LineSet199;
{ .AddChildren }
HAnimSegment186.AddChildren([Shape198]);
Shape202 := TShapeNode.Create;
LineSet203 := TLineSetNode.Create;
LineSet203.SetVertexCount([2]);
ColorRGBA204 := TColorRGBANode.Create;
ColorRGBA204 := ColorRGBA81;
{ .SetColor }
LineSet203.Color := ColorRGBA204;
Coordinate205 := TCoordinateNode.Create;
Coordinate205.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.089,0.0575,-0.0943)]);
{ .SetCoord }
LineSet203.Coord := Coordinate205;
{ .SetGeometry }
Shape202.Geometry := LineSet203;
{ .AddChildren }
HAnimSegment186.AddChildren([Shape202]);
Shape206 := TShapeNode.Create;
LineSet207 := TLineSetNode.Create;
LineSet207.SetVertexCount([2]);
ColorRGBA208 := TColorRGBANode.Create;
ColorRGBA208 := ColorRGBA81;
{ .SetColor }
LineSet207.Color := ColorRGBA208;
Coordinate209 := TCoordinateNode.Create;
Coordinate209.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.0974,0.0259,-0.1171)]);
{ .SetCoord }
LineSet207.Coord := Coordinate209;
{ .SetGeometry }
Shape206.Geometry := LineSet207;
{ .AddChildren }
HAnimSegment186.AddChildren([Shape206]);
HAnimSite210 := THAnimSiteNode.Create;
HAnimSite210.NameField := 'l_lateral_malleolus_pt';
HAnimSite210.Translation := Vector3(0.1308,0.0597,-0.1032);
TouchSensor211 := TTouchSensorNode.Create;
TouchSensor211.Description := 'HAnimSite l_lateral_malleolus_pt';
{ .AddChildren }
HAnimSite210.AddChildren([TouchSensor211]);
Shape212 := TShapeNode.Create;
Shape212 := Shape117;
{ .AddChildren }
HAnimSite210.AddChildren([Shape212]);
{ .AddChildren }
HAnimSegment186.AddChildren([HAnimSite210]);
HAnimSite213 := THAnimSiteNode.Create;
HAnimSite213.NameField := 'l_medial_malleolus_pt';
HAnimSite213.Translation := Vector3(0.089,0.0716,-0.0881);
TouchSensor214 := TTouchSensorNode.Create;
TouchSensor214.Description := 'HAnimSite l_medial_malleolus_pt';
{ .AddChildren }
HAnimSite213.AddChildren([TouchSensor214]);
Shape215 := TShapeNode.Create;
Shape215 := Shape117;
{ .AddChildren }
HAnimSite213.AddChildren([Shape215]);
{ .AddChildren }
HAnimSegment186.AddChildren([HAnimSite213]);
HAnimSite216 := THAnimSiteNode.Create;
HAnimSite216.NameField := 'l_sphyrion_pt';
HAnimSite216.Translation := Vector3(0.089,0.0575,-0.0943);
TouchSensor217 := TTouchSensorNode.Create;
TouchSensor217.Description := 'HAnimSite l_sphyrion_pt';
{ .AddChildren }
HAnimSite216.AddChildren([TouchSensor217]);
Shape218 := TShapeNode.Create;
Shape218 := Shape117;
{ .AddChildren }
HAnimSite216.AddChildren([Shape218]);
{ .AddChildren }
HAnimSegment186.AddChildren([HAnimSite216]);
HAnimSite219 := THAnimSiteNode.Create;
HAnimSite219.NameField := 'l_calcaneus_posterior_pt';
HAnimSite219.Translation := Vector3(0.0974,0.0259,-0.1171);
TouchSensor220 := TTouchSensorNode.Create;
TouchSensor220.Description := 'HAnimSite l_calcaneous_post_pt';
{ .AddChildren }
HAnimSite219.AddChildren([TouchSensor220]);
Shape221 := TShapeNode.Create;
Shape221 := Shape117;
{ .AddChildren }
HAnimSite219.AddChildren([Shape221]);
{ .AddChildren }
HAnimSegment186.AddChildren([HAnimSite219]);
{ .AddChildren }
HAnimJoint185.AddChildren([HAnimSegment186]);
HAnimJoint222 := THAnimJointNode.Create;
HAnimJoint222.NameField := 'l_tarsometatarsal_2';
HAnimJoint222.Center := Vector3(0.1086,0.0001,-0.0368);
HAnimSegment223 := THAnimSegmentNode.Create;
HAnimSegment223.NameField := 'l_metatarsal_2';
TouchSensor224 := TTouchSensorNode.Create;
TouchSensor224.Description := 'HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2';
{ .AddChildren }
HAnimSegment223.AddChildren([TouchSensor224]);
Transform225 := TTransformNode.Create;
Transform225.Translation := Vector3(0.1086,0.0001,-0.0368);
Shape226 := TShapeNode.Create;
Shape226 := Shape54;
{ .AddChild }
Transform225.AddChildren([Shape226]);
{ .AddChildren }
HAnimSegment223.AddChildren([Transform225]);
Shape227 := TShapeNode.Create;
LineSet228 := TLineSetNode.Create;
LineSet228.SetVertexCount([2]);
ColorRGBA229 := TColorRGBANode.Create;
ColorRGBA229 := ColorRGBA60;
{ .SetColor }
LineSet228.Color := ColorRGBA229;
Coordinate230 := TCoordinateNode.Create;
Coordinate230.SetPoint([Vector3(0.1086,0.0001,-0.0368),Vector3(0.1086,0.0001,0.0368)]);
{ .SetCoord }
LineSet228.Coord := Coordinate230;
{ .SetGeometry }
Shape227.Geometry := LineSet228;
{ .AddChildren }
HAnimSegment223.AddChildren([Shape227]);
{ .AddChildren }
HAnimJoint222.AddChildren([HAnimSegment223]);
HAnimJoint231 := THAnimJointNode.Create;
HAnimJoint231.NameField := 'l_metatarsophalangeal_2';
HAnimJoint231.Center := Vector3(0.1086,0.0001,0.0368);
HAnimSegment232 := THAnimSegmentNode.Create;
HAnimSegment232.NameField := 'l_tarsal_proximal_phalanx_2';
TouchSensor233 := TTouchSensorNode.Create;
TouchSensor233.Description := 'HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment232.AddChildren([TouchSensor233]);
Transform234 := TTransformNode.Create;
Transform234.Translation := Vector3(0.1086,0.0001,0.0368);
Shape235 := TShapeNode.Create;
Shape235 := Shape54;
{ .AddChild }
Transform234.AddChildren([Shape235]);
{ .AddChildren }
HAnimSegment232.AddChildren([Transform234]);
Shape236 := TShapeNode.Create;
LineSet237 := TLineSetNode.Create;
LineSet237.SetVertexCount([2]);
ColorRGBA238 := TColorRGBANode.Create;
ColorRGBA238 := ColorRGBA60;
{ .SetColor }
LineSet237.Color := ColorRGBA238;
Coordinate239 := TCoordinateNode.Create;
Coordinate239.SetPoint([Vector3(0.1086,0.0001,0.0368),Vector3(0.1086,0,0.0762)]);
{ .SetCoord }
LineSet237.Coord := Coordinate239;
{ .SetGeometry }
Shape236.Geometry := LineSet237;
{ .AddChildren }
HAnimSegment232.AddChildren([Shape236]);
Shape240 := TShapeNode.Create;
LineSet241 := TLineSetNode.Create;
LineSet241.SetVertexCount([2]);
ColorRGBA242 := TColorRGBANode.Create;
ColorRGBA242 := ColorRGBA81;
{ .SetColor }
LineSet241.Color := ColorRGBA242;
Coordinate243 := TCoordinateNode.Create;
Coordinate243.SetPoint([Vector3(0.1086,0.0001,0.0368),Vector3(0.0816,0.0232,0.0106)]);
{ .SetCoord }
LineSet241.Coord := Coordinate243;
{ .SetGeometry }
Shape240.Geometry := LineSet241;
{ .AddChildren }
HAnimSegment232.AddChildren([Shape240]);
HAnimSite244 := THAnimSiteNode.Create;
HAnimSite244.NameField := 'l_metatarsal_phalanx_1_pt';
HAnimSite244.Translation := Vector3(0.0816,0.0232,0.0106);
TouchSensor245 := TTouchSensorNode.Create;
TouchSensor245.Description := 'HAnimSite l_metatarsal_pha1_pt';
{ .AddChildren }
HAnimSite244.AddChildren([TouchSensor245]);
Shape246 := TShapeNode.Create;
Shape246 := Shape117;
{ .AddChildren }
HAnimSite244.AddChildren([Shape246]);
{ .AddChildren }
HAnimSegment232.AddChildren([HAnimSite244]);
{ .AddChildren }
HAnimJoint231.AddChildren([HAnimSegment232]);
HAnimJoint247 := THAnimJointNode.Create;
HAnimJoint247.NameField := 'l_tarsal_distal_interphalangeal_2';
HAnimJoint247.Center := Vector3(0.1086,0,0.0762);
HAnimSegment248 := THAnimSegmentNode.Create;
HAnimSegment248.NameField := 'l_tarsal_distal_phalanx_2';
TouchSensor249 := TTouchSensorNode.Create;
TouchSensor249.Description := 'HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2';
{ .AddChildren }
HAnimSegment248.AddChildren([TouchSensor249]);
Transform250 := TTransformNode.Create;
Transform250.Translation := Vector3(0.1086,0,0.0762);
Shape251 := TShapeNode.Create;
Shape251 := Shape54;
{ .AddChild }
Transform250.AddChildren([Shape251]);
{ .AddChildren }
HAnimSegment248.AddChildren([Transform250]);
Shape252 := TShapeNode.Create;
LineSet253 := TLineSetNode.Create;
LineSet253.SetVertexCount([2]);
ColorRGBA254 := TColorRGBANode.Create;
ColorRGBA254 := ColorRGBA81;
{ .SetColor }
LineSet253.Color := ColorRGBA254;
Coordinate255 := TCoordinateNode.Create;
Coordinate255.SetPoint([Vector3(0.1086,0,0.0762),Vector3(0.1354,0.0016,0.1476)]);
{ .SetCoord }
LineSet253.Coord := Coordinate255;
{ .SetGeometry }
Shape252.Geometry := LineSet253;
{ .AddChildren }
HAnimSegment248.AddChildren([Shape252]);
Shape256 := TShapeNode.Create;
LineSet257 := TLineSetNode.Create;
LineSet257.SetVertexCount([2]);
ColorRGBA258 := TColorRGBANode.Create;
ColorRGBA258 := ColorRGBA81;
{ .SetColor }
LineSet257.Color := ColorRGBA258;
Coordinate259 := TCoordinateNode.Create;
Coordinate259.SetPoint([Vector3(0.1086,0,0.0762),Vector3(0.1825,0.007,0.0928)]);
{ .SetCoord }
LineSet257.Coord := Coordinate259;
{ .SetGeometry }
Shape256.Geometry := LineSet257;
{ .AddChildren }
HAnimSegment248.AddChildren([Shape256]);
Shape260 := TShapeNode.Create;
LineSet261 := TLineSetNode.Create;
LineSet261.SetVertexCount([2]);
ColorRGBA262 := TColorRGBANode.Create;
ColorRGBA262 := ColorRGBA81;
{ .SetColor }
LineSet261.Color := ColorRGBA262;
Coordinate263 := TCoordinateNode.Create;
Coordinate263.SetPoint([Vector3(0.1086,0,0.0762),Vector3(0.1195,0.0079,0.1433)]);
{ .SetCoord }
LineSet261.Coord := Coordinate263;
{ .SetGeometry }
Shape260.Geometry := LineSet261;
{ .AddChildren }
HAnimSegment248.AddChildren([Shape260]);
HAnimSite264 := THAnimSiteNode.Create;
HAnimSite264.NameField := 'l_forefoot_tip_pt';
HAnimSite264.Translation := Vector3(0.1354,0.0016,0.1476);
TouchSensor265 := TTouchSensorNode.Create;
TouchSensor265.Description := 'HAnimSite l_forefoot_tip';
{ .AddChildren }
HAnimSite264.AddChildren([TouchSensor265]);
Shape266 := TShapeNode.Create;
Shape266 := Shape117;
{ .AddChildren }
HAnimSite264.AddChildren([Shape266]);
{ .AddChildren }
HAnimSegment248.AddChildren([HAnimSite264]);
HAnimSite267 := THAnimSiteNode.Create;
HAnimSite267.NameField := 'l_metatarsal_phalanx_5_pt';
HAnimSite267.Translation := Vector3(0.1825,0.007,0.0928);
TouchSensor268 := TTouchSensorNode.Create;
TouchSensor268.Description := 'HAnimSite l_metatarsal_pha5_pt';
{ .AddChildren }
HAnimSite267.AddChildren([TouchSensor268]);
Shape269 := TShapeNode.Create;
Shape269 := Shape117;
{ .AddChildren }
HAnimSite267.AddChildren([Shape269]);
{ .AddChildren }
HAnimSegment248.AddChildren([HAnimSite267]);
HAnimSite270 := THAnimSiteNode.Create;
HAnimSite270.NameField := 'l_tarsal_distal_phalanx_2_pt';
HAnimSite270.Translation := Vector3(0.1195,0.0079,0.1433);
TouchSensor271 := TTouchSensorNode.Create;
TouchSensor271.Description := 'HAnimSite l_digit2_pt';
{ .AddChildren }
HAnimSite270.AddChildren([TouchSensor271]);
Shape272 := TShapeNode.Create;
Shape272 := Shape117;
{ .AddChildren }
HAnimSite270.AddChildren([Shape272]);
{ .AddChildren }
HAnimSegment248.AddChildren([HAnimSite270]);
{ .AddChildren }
HAnimJoint247.AddChildren([HAnimSegment248]);
{ .AddChildren }
HAnimJoint231.AddChildren([HAnimJoint247]);
{ .AddChildren }
HAnimJoint222.AddChildren([HAnimJoint231]);
{ .AddChildren }
HAnimJoint185.AddChildren([HAnimJoint222]);
{ .AddChildren }
HAnimJoint176.AddChildren([HAnimJoint185]);
{ .AddChildren }
HAnimJoint146.AddChildren([HAnimJoint176]);
{ .AddChildren }
HAnimJoint66.AddChildren([HAnimJoint146]);
HAnimJoint273 := THAnimJointNode.Create;
HAnimJoint273.NameField := 'r_hip';
HAnimJoint273.Center := Vector3(-0.0961,0.9124,-0.0001);
HAnimSegment274 := THAnimSegmentNode.Create;
HAnimSegment274.NameField := 'r_thigh';
TouchSensor275 := TTouchSensorNode.Create;
TouchSensor275.Description := 'HAnimJoint r_hip, HAnimSegment r_thigh';
{ .AddChildren }
HAnimSegment274.AddChildren([TouchSensor275]);
Transform276 := TTransformNode.Create;
Transform276.Translation := Vector3(-0.0961,0.9124,-0.0001);
Shape277 := TShapeNode.Create;
Shape277 := Shape54;
{ .AddChild }
Transform276.AddChildren([Shape277]);
{ .AddChildren }
HAnimSegment274.AddChildren([Transform276]);
Shape278 := TShapeNode.Create;
LineSet279 := TLineSetNode.Create;
LineSet279.SetVertexCount([2]);
ColorRGBA280 := TColorRGBANode.Create;
ColorRGBA280 := ColorRGBA60;
{ .SetColor }
LineSet279.Color := ColorRGBA280;
Coordinate281 := TCoordinateNode.Create;
Coordinate281.SetPoint([Vector3(-0.0961,0.9124,-0.0001),Vector3(-0.104,0.4867,0.0308)]);
{ .SetCoord }
LineSet279.Coord := Coordinate281;
{ .SetGeometry }
Shape278.Geometry := LineSet279;
{ .AddChildren }
HAnimSegment274.AddChildren([Shape278]);
Shape282 := TShapeNode.Create;
LineSet283 := TLineSetNode.Create;
LineSet283.SetVertexCount([2]);
ColorRGBA284 := TColorRGBANode.Create;
ColorRGBA284 := ColorRGBA81;
{ .SetColor }
LineSet283.Color := ColorRGBA284;
Coordinate285 := TCoordinateNode.Create;
Coordinate285.SetPoint([Vector3(-0.0961,0.9124,-0.0001),Vector3(-0.0825,0.4932,-0.0326)]);
{ .SetCoord }
LineSet283.Coord := Coordinate285;
{ .SetGeometry }
Shape282.Geometry := LineSet283;
{ .AddChildren }
HAnimSegment274.AddChildren([Shape282]);
Shape286 := TShapeNode.Create;
LineSet287 := TLineSetNode.Create;
LineSet287.SetVertexCount([2]);
ColorRGBA288 := TColorRGBANode.Create;
ColorRGBA288 := ColorRGBA81;
{ .SetColor }
LineSet287.Color := ColorRGBA288;
Coordinate289 := TCoordinateNode.Create;
Coordinate289.SetPoint([Vector3(-0.0961,0.9124,-0.0001),Vector3(-0.1421,0.4992,0.031)]);
{ .SetCoord }
LineSet287.Coord := Coordinate289;
{ .SetGeometry }
Shape286.Geometry := LineSet287;
{ .AddChildren }
HAnimSegment274.AddChildren([Shape286]);
Shape290 := TShapeNode.Create;
LineSet291 := TLineSetNode.Create;
LineSet291.SetVertexCount([2]);
ColorRGBA292 := TColorRGBANode.Create;
ColorRGBA292 := ColorRGBA81;
{ .SetColor }
LineSet291.Color := ColorRGBA292;
Coordinate293 := TCoordinateNode.Create;
Coordinate293.SetPoint([Vector3(-0.0961,0.9124,-0.0001),Vector3(-0.0221,0.5014,0.0289)]);
{ .SetCoord }
LineSet291.Coord := Coordinate293;
{ .SetGeometry }
Shape290.Geometry := LineSet291;
{ .AddChildren }
HAnimSegment274.AddChildren([Shape290]);
HAnimSite294 := THAnimSiteNode.Create;
HAnimSite294.NameField := 'r_knee_crease_pt';
HAnimSite294.Translation := Vector3(-0.0825,0.4932,-0.0326);
TouchSensor295 := TTouchSensorNode.Create;
TouchSensor295.Description := 'HAnimSite r_knee_crease_pt';
{ .AddChildren }
HAnimSite294.AddChildren([TouchSensor295]);
Shape296 := TShapeNode.Create;
Shape296 := Shape117;
{ .AddChildren }
HAnimSite294.AddChildren([Shape296]);
{ .AddChildren }
HAnimSegment274.AddChildren([HAnimSite294]);
HAnimSite297 := THAnimSiteNode.Create;
HAnimSite297.NameField := 'r_femoral_lateral_epicondyle_pt';
HAnimSite297.Translation := Vector3(-0.1421,0.4992,0.031);
TouchSensor298 := TTouchSensorNode.Create;
TouchSensor298.Description := 'HAnimSite r_femoral_lateral_epicn_pt';
{ .AddChildren }
HAnimSite297.AddChildren([TouchSensor298]);
Shape299 := TShapeNode.Create;
Shape299 := Shape117;
{ .AddChildren }
HAnimSite297.AddChildren([Shape299]);
{ .AddChildren }
HAnimSegment274.AddChildren([HAnimSite297]);
HAnimSite300 := THAnimSiteNode.Create;
HAnimSite300.NameField := 'r_femoral_medial_epicondyle_pt';
HAnimSite300.Translation := Vector3(-0.0221,0.5014,0.0289);
TouchSensor301 := TTouchSensorNode.Create;
TouchSensor301.Description := 'HAnimSite r_femoral_medial_epicn_pt';
{ .AddChildren }
HAnimSite300.AddChildren([TouchSensor301]);
Shape302 := TShapeNode.Create;
Shape302 := Shape117;
{ .AddChildren }
HAnimSite300.AddChildren([Shape302]);
{ .AddChildren }
HAnimSegment274.AddChildren([HAnimSite300]);
{ .AddChildren }
HAnimJoint273.AddChildren([HAnimSegment274]);
HAnimJoint303 := THAnimJointNode.Create;
HAnimJoint303.NameField := 'r_knee';
HAnimJoint303.Center := Vector3(-0.104,0.4867,0.0308);
HAnimSegment304 := THAnimSegmentNode.Create;
HAnimSegment304.NameField := 'r_calf';
TouchSensor305 := TTouchSensorNode.Create;
TouchSensor305.Description := 'HAnimJoint r_knee, HAnimSegment r_calf';
{ .AddChildren }
HAnimSegment304.AddChildren([TouchSensor305]);
Transform306 := TTransformNode.Create;
Transform306.Translation := Vector3(-0.104,0.4867,0.0308);
Shape307 := TShapeNode.Create;
Shape307 := Shape54;
{ .AddChild }
Transform306.AddChildren([Shape307]);
{ .AddChildren }
HAnimSegment304.AddChildren([Transform306]);
Shape308 := TShapeNode.Create;
LineSet309 := TLineSetNode.Create;
LineSet309.SetVertexCount([2]);
ColorRGBA310 := TColorRGBANode.Create;
ColorRGBA310 := ColorRGBA60;
{ .SetColor }
LineSet309.Color := ColorRGBA310;
Coordinate311 := TCoordinateNode.Create;
Coordinate311.SetPoint([Vector3(-0.104,0.4867,0.0308),Vector3(-0.1101,0.0656,-0.0736)]);
{ .SetCoord }
LineSet309.Coord := Coordinate311;
{ .SetGeometry }
Shape308.Geometry := LineSet309;
{ .AddChildren }
HAnimSegment304.AddChildren([Shape308]);
{ .AddChildren }
HAnimJoint303.AddChildren([HAnimSegment304]);
HAnimJoint312 := THAnimJointNode.Create;
HAnimJoint312.NameField := 'r_talocrural';
HAnimJoint312.Center := Vector3(-0.1101,0.0656,-0.0736);
HAnimSegment313 := THAnimSegmentNode.Create;
HAnimSegment313.NameField := 'r_talus';
TouchSensor314 := TTouchSensorNode.Create;
TouchSensor314.Description := 'HAnimJoint r_talocrural, HAnimSegment r_talus';
{ .AddChildren }
HAnimSegment313.AddChildren([TouchSensor314]);
Transform315 := TTransformNode.Create;
Transform315.Translation := Vector3(-0.1101,0.0656,-0.0736);
Shape316 := TShapeNode.Create;
Shape316 := Shape54;
{ .AddChild }
Transform315.AddChildren([Shape316]);
{ .AddChildren }
HAnimSegment313.AddChildren([Transform315]);
Shape317 := TShapeNode.Create;
LineSet318 := TLineSetNode.Create;
LineSet318.SetVertexCount([2]);
ColorRGBA319 := TColorRGBANode.Create;
ColorRGBA319 := ColorRGBA60;
{ .SetColor }
LineSet318.Color := ColorRGBA319;
Coordinate320 := TCoordinateNode.Create;
Coordinate320.SetPoint([Vector3(-0.1101,0.0656,-0.0736),Vector3(-0.1086,0.0001,-0.0368)]);
{ .SetCoord }
LineSet318.Coord := Coordinate320;
{ .SetGeometry }
Shape317.Geometry := LineSet318;
{ .AddChildren }
HAnimSegment313.AddChildren([Shape317]);
Shape321 := TShapeNode.Create;
LineSet322 := TLineSetNode.Create;
LineSet322.SetVertexCount([2]);
ColorRGBA323 := TColorRGBANode.Create;
ColorRGBA323 := ColorRGBA81;
{ .SetColor }
LineSet322.Color := ColorRGBA323;
Coordinate324 := TCoordinateNode.Create;
Coordinate324.SetPoint([Vector3(-0.1101,0.0656,-0.0736),Vector3(-0.1006,0.0658,-0.1075)]);
{ .SetCoord }
LineSet322.Coord := Coordinate324;
{ .SetGeometry }
Shape321.Geometry := LineSet322;
{ .AddChildren }
HAnimSegment313.AddChildren([Shape321]);
Shape325 := TShapeNode.Create;
LineSet326 := TLineSetNode.Create;
LineSet326.SetVertexCount([2]);
ColorRGBA327 := TColorRGBANode.Create;
ColorRGBA327 := ColorRGBA81;
{ .SetColor }
LineSet326.Color := ColorRGBA327;
Coordinate328 := TCoordinateNode.Create;
Coordinate328.SetPoint([Vector3(-0.1101,0.0656,-0.0736),Vector3(-0.0591,0.076,-0.0928)]);
{ .SetCoord }
LineSet326.Coord := Coordinate328;
{ .SetGeometry }
Shape325.Geometry := LineSet326;
{ .AddChildren }
HAnimSegment313.AddChildren([Shape325]);
Shape329 := TShapeNode.Create;
LineSet330 := TLineSetNode.Create;
LineSet330.SetVertexCount([2]);
ColorRGBA331 := TColorRGBANode.Create;
ColorRGBA331 := ColorRGBA81;
{ .SetColor }
LineSet330.Color := ColorRGBA331;
Coordinate332 := TCoordinateNode.Create;
Coordinate332.SetPoint([Vector3(-0.1101,0.0656,-0.0736),Vector3(-0.0603,0.061,-0.1002)]);
{ .SetCoord }
LineSet330.Coord := Coordinate332;
{ .SetGeometry }
Shape329.Geometry := LineSet330;
{ .AddChildren }
HAnimSegment313.AddChildren([Shape329]);
Shape333 := TShapeNode.Create;
LineSet334 := TLineSetNode.Create;
LineSet334.SetVertexCount([2]);
ColorRGBA335 := TColorRGBANode.Create;
ColorRGBA335 := ColorRGBA81;
{ .SetColor }
LineSet334.Color := ColorRGBA335;
Coordinate336 := TCoordinateNode.Create;
Coordinate336.SetPoint([Vector3(-0.1101,0.0656,-0.0736),Vector3(-0.0692,0.0297,-0.1221)]);
{ .SetCoord }
LineSet334.Coord := Coordinate336;
{ .SetGeometry }
Shape333.Geometry := LineSet334;
{ .AddChildren }
HAnimSegment313.AddChildren([Shape333]);
HAnimSite337 := THAnimSiteNode.Create;
HAnimSite337.NameField := 'r_lateral_malleolus_pt';
HAnimSite337.Translation := Vector3(-0.1006,0.0658,-0.1075);
TouchSensor338 := TTouchSensorNode.Create;
TouchSensor338.Description := 'HAnimSite r_lateral_malleolus_pt';
{ .AddChildren }
HAnimSite337.AddChildren([TouchSensor338]);
Shape339 := TShapeNode.Create;
Shape339 := Shape117;
{ .AddChildren }
HAnimSite337.AddChildren([Shape339]);
{ .AddChildren }
HAnimSegment313.AddChildren([HAnimSite337]);
HAnimSite340 := THAnimSiteNode.Create;
HAnimSite340.NameField := 'r_medial_malleolus_pt';
HAnimSite340.Translation := Vector3(-0.0591,0.076,-0.0928);
TouchSensor341 := TTouchSensorNode.Create;
TouchSensor341.Description := 'HAnimSite r_medial_malleolus_pt';
{ .AddChildren }
HAnimSite340.AddChildren([TouchSensor341]);
Shape342 := TShapeNode.Create;
Shape342 := Shape117;
{ .AddChildren }
HAnimSite340.AddChildren([Shape342]);
{ .AddChildren }
HAnimSegment313.AddChildren([HAnimSite340]);
HAnimSite343 := THAnimSiteNode.Create;
HAnimSite343.NameField := 'r_sphyrion_pt';
HAnimSite343.Translation := Vector3(-0.0603,0.061,-0.1002);
TouchSensor344 := TTouchSensorNode.Create;
TouchSensor344.Description := 'HAnimSite r_sphyrion_pt';
{ .AddChildren }
HAnimSite343.AddChildren([TouchSensor344]);
Shape345 := TShapeNode.Create;
Shape345 := Shape117;
{ .AddChildren }
HAnimSite343.AddChildren([Shape345]);
{ .AddChildren }
HAnimSegment313.AddChildren([HAnimSite343]);
HAnimSite346 := THAnimSiteNode.Create;
HAnimSite346.NameField := 'r_calcaneus_posterior_pt';
HAnimSite346.Translation := Vector3(-0.0692,0.0297,-0.1221);
TouchSensor347 := TTouchSensorNode.Create;
TouchSensor347.Description := 'HAnimSite r_calcaneous_post_pt';
{ .AddChildren }
HAnimSite346.AddChildren([TouchSensor347]);
Shape348 := TShapeNode.Create;
Shape348 := Shape117;
{ .AddChildren }
HAnimSite346.AddChildren([Shape348]);
{ .AddChildren }
HAnimSegment313.AddChildren([HAnimSite346]);
{ .AddChildren }
HAnimJoint312.AddChildren([HAnimSegment313]);
HAnimJoint349 := THAnimJointNode.Create;
HAnimJoint349.NameField := 'r_tarsometatarsal_2';
HAnimJoint349.Center := Vector3(-0.1086,0.0001,-0.0368);
HAnimSegment350 := THAnimSegmentNode.Create;
HAnimSegment350.NameField := 'r_metatarsal_2';
TouchSensor351 := TTouchSensorNode.Create;
TouchSensor351.Description := 'HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2';
{ .AddChildren }
HAnimSegment350.AddChildren([TouchSensor351]);
Transform352 := TTransformNode.Create;
Transform352.Translation := Vector3(-0.1086,0.0001,-0.0368);
Shape353 := TShapeNode.Create;
Shape353 := Shape54;
{ .AddChild }
Transform352.AddChildren([Shape353]);
{ .AddChildren }
HAnimSegment350.AddChildren([Transform352]);
Shape354 := TShapeNode.Create;
LineSet355 := TLineSetNode.Create;
LineSet355.SetVertexCount([2]);
ColorRGBA356 := TColorRGBANode.Create;
ColorRGBA356 := ColorRGBA60;
{ .SetColor }
LineSet355.Color := ColorRGBA356;
Coordinate357 := TCoordinateNode.Create;
Coordinate357.SetPoint([Vector3(-0.1086,0.0001,-0.0368),Vector3(-0.1086,0.0001,0.0368)]);
{ .SetCoord }
LineSet355.Coord := Coordinate357;
{ .SetGeometry }
Shape354.Geometry := LineSet355;
{ .AddChildren }
HAnimSegment350.AddChildren([Shape354]);
{ .AddChildren }
HAnimJoint349.AddChildren([HAnimSegment350]);
HAnimJoint358 := THAnimJointNode.Create;
HAnimJoint358.NameField := 'r_metatarsophalangeal_2';
HAnimJoint358.Center := Vector3(-0.1086,0.0001,0.0368);
HAnimSegment359 := THAnimSegmentNode.Create;
HAnimSegment359.NameField := 'r_tarsal_proximal_phalanx_2';
TouchSensor360 := TTouchSensorNode.Create;
TouchSensor360.Description := 'HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment359.AddChildren([TouchSensor360]);
Transform361 := TTransformNode.Create;
Transform361.Translation := Vector3(-0.1086,0.0001,0.0368);
Shape362 := TShapeNode.Create;
Shape362 := Shape54;
{ .AddChild }
Transform361.AddChildren([Shape362]);
{ .AddChildren }
HAnimSegment359.AddChildren([Transform361]);
Shape363 := TShapeNode.Create;
LineSet364 := TLineSetNode.Create;
LineSet364.SetVertexCount([2]);
ColorRGBA365 := TColorRGBANode.Create;
ColorRGBA365 := ColorRGBA60;
{ .SetColor }
LineSet364.Color := ColorRGBA365;
Coordinate366 := TCoordinateNode.Create;
Coordinate366.SetPoint([Vector3(-0.1086,0.0001,0.0368),Vector3(-0.1086,0,0.0762)]);
{ .SetCoord }
LineSet364.Coord := Coordinate366;
{ .SetGeometry }
Shape363.Geometry := LineSet364;
{ .AddChildren }
HAnimSegment359.AddChildren([Shape363]);
Shape367 := TShapeNode.Create;
LineSet368 := TLineSetNode.Create;
LineSet368.SetVertexCount([2]);
ColorRGBA369 := TColorRGBANode.Create;
ColorRGBA369 := ColorRGBA81;
{ .SetColor }
LineSet368.Color := ColorRGBA369;
Coordinate370 := TCoordinateNode.Create;
Coordinate370.SetPoint([Vector3(-0.1086,0.0001,0.0368),Vector3(-0.0521,0.026,0.0127)]);
{ .SetCoord }
LineSet368.Coord := Coordinate370;
{ .SetGeometry }
Shape367.Geometry := LineSet368;
{ .AddChildren }
HAnimSegment359.AddChildren([Shape367]);
HAnimSite371 := THAnimSiteNode.Create;
HAnimSite371.NameField := 'r_metatarsal_phalanx_1_pt';
HAnimSite371.Translation := Vector3(-0.0521,0.026,0.0127);
TouchSensor372 := TTouchSensorNode.Create;
TouchSensor372.Description := 'HAnimSite r_metatarsal_pha1_pt';
{ .AddChildren }
HAnimSite371.AddChildren([TouchSensor372]);
Shape373 := TShapeNode.Create;
Shape373 := Shape117;
{ .AddChildren }
HAnimSite371.AddChildren([Shape373]);
{ .AddChildren }
HAnimSegment359.AddChildren([HAnimSite371]);
{ .AddChildren }
HAnimJoint358.AddChildren([HAnimSegment359]);
HAnimJoint374 := THAnimJointNode.Create;
HAnimJoint374.NameField := 'r_tarsal_distal_interphalangeal_2';
HAnimJoint374.Center := Vector3(-0.1086,0,0.0762);
HAnimSegment375 := THAnimSegmentNode.Create;
HAnimSegment375.NameField := 'r_tarsal_distal_phalanx_2';
TouchSensor376 := TTouchSensorNode.Create;
TouchSensor376.Description := 'HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2';
{ .AddChildren }
HAnimSegment375.AddChildren([TouchSensor376]);
Transform377 := TTransformNode.Create;
Transform377.Translation := Vector3(-0.1086,0,0.0762);
Shape378 := TShapeNode.Create;
Shape378 := Shape54;
{ .AddChild }
Transform377.AddChildren([Shape378]);
{ .AddChildren }
HAnimSegment375.AddChildren([Transform377]);
Shape379 := TShapeNode.Create;
LineSet380 := TLineSetNode.Create;
LineSet380.SetVertexCount([2]);
ColorRGBA381 := TColorRGBANode.Create;
ColorRGBA381 := ColorRGBA81;
{ .SetColor }
LineSet380.Color := ColorRGBA381;
Coordinate382 := TCoordinateNode.Create;
Coordinate382.SetPoint([Vector3(-0.1086,0,0.0762),Vector3(-0.1043,0.0227,0.145)]);
{ .SetCoord }
LineSet380.Coord := Coordinate382;
{ .SetGeometry }
Shape379.Geometry := LineSet380;
{ .AddChildren }
HAnimSegment375.AddChildren([Shape379]);
Shape383 := TShapeNode.Create;
LineSet384 := TLineSetNode.Create;
LineSet384.SetVertexCount([2]);
ColorRGBA385 := TColorRGBANode.Create;
ColorRGBA385 := ColorRGBA81;
{ .SetColor }
LineSet384.Color := ColorRGBA385;
Coordinate386 := TCoordinateNode.Create;
Coordinate386.SetPoint([Vector3(-0.1086,0,0.0762),Vector3(-0.1523,0.0166,0.0895)]);
{ .SetCoord }
LineSet384.Coord := Coordinate386;
{ .SetGeometry }
Shape383.Geometry := LineSet384;
{ .AddChildren }
HAnimSegment375.AddChildren([Shape383]);
Shape387 := TShapeNode.Create;
LineSet388 := TLineSetNode.Create;
LineSet388.SetVertexCount([2]);
ColorRGBA389 := TColorRGBANode.Create;
ColorRGBA389 := ColorRGBA81;
{ .SetColor }
LineSet388.Color := ColorRGBA389;
Coordinate390 := TCoordinateNode.Create;
Coordinate390.SetPoint([Vector3(-0.1086,0,0.0762),Vector3(-0.0883,0.0134,0.1383)]);
{ .SetCoord }
LineSet388.Coord := Coordinate390;
{ .SetGeometry }
Shape387.Geometry := LineSet388;
{ .AddChildren }
HAnimSegment375.AddChildren([Shape387]);
HAnimSite391 := THAnimSiteNode.Create;
HAnimSite391.NameField := 'r_forefoot_tip_pt';
HAnimSite391.Translation := Vector3(-0.1043,0.0227,0.145);
TouchSensor392 := TTouchSensorNode.Create;
TouchSensor392.Description := 'HAnimSite r_forefoot_tip';
{ .AddChildren }
HAnimSite391.AddChildren([TouchSensor392]);
Shape393 := TShapeNode.Create;
Shape393 := Shape117;
{ .AddChildren }
HAnimSite391.AddChildren([Shape393]);
{ .AddChildren }
HAnimSegment375.AddChildren([HAnimSite391]);
HAnimSite394 := THAnimSiteNode.Create;
HAnimSite394.NameField := 'r_metatarsal_phalanx_5_pt';
HAnimSite394.Translation := Vector3(-0.1523,0.0166,0.0895);
TouchSensor395 := TTouchSensorNode.Create;
TouchSensor395.Description := 'HAnimSite r_metatarsal_pha5_pt';
{ .AddChildren }
HAnimSite394.AddChildren([TouchSensor395]);
Shape396 := TShapeNode.Create;
Shape396 := Shape117;
{ .AddChildren }
HAnimSite394.AddChildren([Shape396]);
{ .AddChildren }
HAnimSegment375.AddChildren([HAnimSite394]);
HAnimSite397 := THAnimSiteNode.Create;
HAnimSite397.NameField := 'r_tarsal_distal_phalanx_2_pt';
HAnimSite397.Translation := Vector3(-0.0883,0.0134,0.1383);
TouchSensor398 := TTouchSensorNode.Create;
TouchSensor398.Description := 'HAnimSite r_digit2_pt';
{ .AddChildren }
HAnimSite397.AddChildren([TouchSensor398]);
Shape399 := TShapeNode.Create;
Shape399 := Shape117;
{ .AddChildren }
HAnimSite397.AddChildren([Shape399]);
{ .AddChildren }
HAnimSegment375.AddChildren([HAnimSite397]);
{ .AddChildren }
HAnimJoint374.AddChildren([HAnimSegment375]);
{ .AddChildren }
HAnimJoint358.AddChildren([HAnimJoint374]);
{ .AddChildren }
HAnimJoint349.AddChildren([HAnimJoint358]);
{ .AddChildren }
HAnimJoint312.AddChildren([HAnimJoint349]);
{ .AddChildren }
HAnimJoint303.AddChildren([HAnimJoint312]);
{ .AddChildren }
HAnimJoint273.AddChildren([HAnimJoint303]);
{ .AddChildren }
HAnimJoint66.AddChildren([HAnimJoint273]);
{ .AddChildren }
HAnimJoint50.AddChildren([HAnimJoint66]);
HAnimJoint400 := THAnimJointNode.Create;
HAnimJoint400.NameField := 'vl5';
HAnimJoint400.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimSegment401 := THAnimSegmentNode.Create;
HAnimSegment401.NameField := 'l5';
TouchSensor402 := TTouchSensorNode.Create;
TouchSensor402.Description := 'HAnimJoint vl5, HAnimSegment l5';
{ .AddChildren }
HAnimSegment401.AddChildren([TouchSensor402]);
Transform403 := TTransformNode.Create;
Transform403.Translation := Vector3(0.0028,1.0568,-0.0776);
Shape404 := TShapeNode.Create;
Shape404 := Shape54;
{ .AddChild }
Transform403.AddChildren([Shape404]);
{ .AddChildren }
HAnimSegment401.AddChildren([Transform403]);
Shape405 := TShapeNode.Create;
LineSet406 := TLineSetNode.Create;
LineSet406.SetVertexCount([2]);
ColorRGBA407 := TColorRGBANode.Create;
ColorRGBA407 := ColorRGBA60;
{ .SetColor }
LineSet406.Color := ColorRGBA407;
Coordinate408 := TCoordinateNode.Create;
Coordinate408.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0035,1.0925,-0.0787)]);
{ .SetCoord }
LineSet406.Coord := Coordinate408;
{ .SetGeometry }
Shape405.Geometry := LineSet406;
{ .AddChildren }
HAnimSegment401.AddChildren([Shape405]);
Shape409 := TShapeNode.Create;
LineSet410 := TLineSetNode.Create;
LineSet410.SetVertexCount([2]);
ColorRGBA411 := TColorRGBANode.Create;
ColorRGBA411 := ColorRGBA81;
{ .SetColor }
LineSet410.Color := ColorRGBA411;
Coordinate412 := TCoordinateNode.Create;
Coordinate412.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0,1.0915,-0.1091)]);
{ .SetCoord }
LineSet410.Coord := Coordinate412;
{ .SetGeometry }
Shape409.Geometry := LineSet410;
{ .AddChildren }
HAnimSegment401.AddChildren([Shape409]);
Shape413 := TShapeNode.Create;
LineSet414 := TLineSetNode.Create;
LineSet414.SetVertexCount([2]);
ColorRGBA415 := TColorRGBANode.Create;
ColorRGBA415 := ColorRGBA81;
{ .SetColor }
LineSet414.Color := ColorRGBA415;
Coordinate416 := TCoordinateNode.Create;
Coordinate416.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0069,1.0966,0.1017)]);
{ .SetCoord }
LineSet414.Coord := Coordinate416;
{ .SetGeometry }
Shape413.Geometry := LineSet414;
{ .AddChildren }
HAnimSegment401.AddChildren([Shape413]);
HAnimSite417 := THAnimSiteNode.Create;
HAnimSite417.NameField := 'waist_preferred_posterior_pt';
HAnimSite417.Translation := Vector3(0,1.0915,-0.1091);
TouchSensor418 := TTouchSensorNode.Create;
TouchSensor418.Description := 'HAnimSite waist_preferred_post_pt';
{ .AddChildren }
HAnimSite417.AddChildren([TouchSensor418]);
Shape419 := TShapeNode.Create;
Shape419 := Shape117;
{ .AddChildren }
HAnimSite417.AddChildren([Shape419]);
{ .AddChildren }
HAnimSegment401.AddChildren([HAnimSite417]);
HAnimSite420 := THAnimSiteNode.Create;
HAnimSite420.NameField := 'navel_pt';
HAnimSite420.Translation := Vector3(0.0069,1.0966,0.1017);
TouchSensor421 := TTouchSensorNode.Create;
TouchSensor421.Description := 'HAnimSite navel_pt';
{ .AddChildren }
HAnimSite420.AddChildren([TouchSensor421]);
Shape422 := TShapeNode.Create;
Shape422 := Shape117;
{ .AddChildren }
HAnimSite420.AddChildren([Shape422]);
{ .AddChildren }
HAnimSegment401.AddChildren([HAnimSite420]);
{ .AddChildren }
HAnimJoint400.AddChildren([HAnimSegment401]);
HAnimJoint423 := THAnimJointNode.Create;
HAnimJoint423.NameField := 'vl4';
HAnimJoint423.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimSegment424 := THAnimSegmentNode.Create;
HAnimSegment424.NameField := 'l4';
TouchSensor425 := TTouchSensorNode.Create;
TouchSensor425.Description := 'HAnimJoint vl4, HAnimSegment l4';
{ .AddChildren }
HAnimSegment424.AddChildren([TouchSensor425]);
Transform426 := TTransformNode.Create;
Transform426.Translation := Vector3(0.0035,1.0925,-0.0787);
Shape427 := TShapeNode.Create;
Shape427 := Shape54;
{ .AddChild }
Transform426.AddChildren([Shape427]);
{ .AddChildren }
HAnimSegment424.AddChildren([Transform426]);
Shape428 := TShapeNode.Create;
LineSet429 := TLineSetNode.Create;
LineSet429.SetVertexCount([2]);
ColorRGBA430 := TColorRGBANode.Create;
ColorRGBA430 := ColorRGBA60;
{ .SetColor }
LineSet429.Color := ColorRGBA430;
Coordinate431 := TCoordinateNode.Create;
Coordinate431.SetPoint([Vector3(0.0035,1.0925,-0.0787),Vector3(0.0041,1.1276,-0.0796)]);
{ .SetCoord }
LineSet429.Coord := Coordinate431;
{ .SetGeometry }
Shape428.Geometry := LineSet429;
{ .AddChildren }
HAnimSegment424.AddChildren([Shape428]);
{ .AddChildren }
HAnimJoint423.AddChildren([HAnimSegment424]);
HAnimJoint432 := THAnimJointNode.Create;
HAnimJoint432.NameField := 'vl3';
HAnimJoint432.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimSegment433 := THAnimSegmentNode.Create;
HAnimSegment433.NameField := 'l3';
TouchSensor434 := TTouchSensorNode.Create;
TouchSensor434.Description := 'HAnimJoint vl3, HAnimSegment l3';
{ .AddChildren }
HAnimSegment433.AddChildren([TouchSensor434]);
Transform435 := TTransformNode.Create;
Transform435.Translation := Vector3(0.0041,1.1276,-0.0796);
Shape436 := TShapeNode.Create;
Shape436 := Shape54;
{ .AddChild }
Transform435.AddChildren([Shape436]);
{ .AddChildren }
HAnimSegment433.AddChildren([Transform435]);
Shape437 := TShapeNode.Create;
LineSet438 := TLineSetNode.Create;
LineSet438.SetVertexCount([2]);
ColorRGBA439 := TColorRGBANode.Create;
ColorRGBA439 := ColorRGBA60;
{ .SetColor }
LineSet438.Color := ColorRGBA439;
Coordinate440 := TCoordinateNode.Create;
Coordinate440.SetPoint([Vector3(0.0041,1.1276,-0.0796),Vector3(0.0045,1.1546,-0.08)]);
{ .SetCoord }
LineSet438.Coord := Coordinate440;
{ .SetGeometry }
Shape437.Geometry := LineSet438;
{ .AddChildren }
HAnimSegment433.AddChildren([Shape437]);
{ .AddChildren }
HAnimJoint432.AddChildren([HAnimSegment433]);
HAnimJoint441 := THAnimJointNode.Create;
HAnimJoint441.NameField := 'vl2';
HAnimJoint441.Center := Vector3(0.0045,1.1546,-0.08);
HAnimSegment442 := THAnimSegmentNode.Create;
HAnimSegment442.NameField := 'l2';
TouchSensor443 := TTouchSensorNode.Create;
TouchSensor443.Description := 'HAnimJoint vl2, HAnimSegment l2';
{ .AddChildren }
HAnimSegment442.AddChildren([TouchSensor443]);
Transform444 := TTransformNode.Create;
Transform444.Translation := Vector3(0.0045,1.1546,-0.08);
Shape445 := TShapeNode.Create;
Shape445 := Shape54;
{ .AddChild }
Transform444.AddChildren([Shape445]);
{ .AddChildren }
HAnimSegment442.AddChildren([Transform444]);
Shape446 := TShapeNode.Create;
LineSet447 := TLineSetNode.Create;
LineSet447.SetVertexCount([2]);
ColorRGBA448 := TColorRGBANode.Create;
ColorRGBA448 := ColorRGBA60;
{ .SetColor }
LineSet447.Color := ColorRGBA448;
Coordinate449 := TCoordinateNode.Create;
Coordinate449.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0048,1.1912,-0.0805)]);
{ .SetCoord }
LineSet447.Coord := Coordinate449;
{ .SetGeometry }
Shape446.Geometry := LineSet447;
{ .AddChildren }
HAnimSegment442.AddChildren([Shape446]);
Shape450 := TShapeNode.Create;
LineSet451 := TLineSetNode.Create;
LineSet451.SetVertexCount([2]);
ColorRGBA452 := TColorRGBANode.Create;
ColorRGBA452 := ColorRGBA81;
{ .SetColor }
LineSet451.Color := ColorRGBA452;
Coordinate453 := TCoordinateNode.Create;
Coordinate453.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(-0.0711,1.1941,0.1016)]);
{ .SetCoord }
LineSet451.Coord := Coordinate453;
{ .SetGeometry }
Shape450.Geometry := LineSet451;
{ .AddChildren }
HAnimSegment442.AddChildren([Shape450]);
Shape454 := TShapeNode.Create;
LineSet455 := TLineSetNode.Create;
LineSet455.SetVertexCount([2]);
ColorRGBA456 := TColorRGBANode.Create;
ColorRGBA456 := ColorRGBA81;
{ .SetColor }
LineSet455.Color := ColorRGBA456;
Coordinate457 := TCoordinateNode.Create;
Coordinate457.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0871,1.1925,0.0992)]);
{ .SetCoord }
LineSet455.Coord := Coordinate457;
{ .SetGeometry }
Shape454.Geometry := LineSet455;
{ .AddChildren }
HAnimSegment442.AddChildren([Shape454]);
Shape458 := TShapeNode.Create;
LineSet459 := TLineSetNode.Create;
LineSet459.SetVertexCount([2]);
ColorRGBA460 := TColorRGBANode.Create;
ColorRGBA460 := ColorRGBA81;
{ .SetColor }
LineSet459.Color := ColorRGBA460;
Coordinate461 := TCoordinateNode.Create;
Coordinate461.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0049,1.1908,-0.1113)]);
{ .SetCoord }
LineSet459.Coord := Coordinate461;
{ .SetGeometry }
Shape458.Geometry := LineSet459;
{ .AddChildren }
HAnimSegment442.AddChildren([Shape458]);
HAnimSite462 := THAnimSiteNode.Create;
HAnimSite462.NameField := 'r_rib10_pt';
HAnimSite462.Translation := Vector3(-0.0711,1.1941,0.1016);
TouchSensor463 := TTouchSensorNode.Create;
TouchSensor463.Description := 'HAnimSite r_rib10_pt';
{ .AddChildren }
HAnimSite462.AddChildren([TouchSensor463]);
Shape464 := TShapeNode.Create;
Shape464 := Shape117;
{ .AddChildren }
HAnimSite462.AddChildren([Shape464]);
{ .AddChildren }
HAnimSegment442.AddChildren([HAnimSite462]);
HAnimSite465 := THAnimSiteNode.Create;
HAnimSite465.NameField := 'l_rib10_pt';
HAnimSite465.Translation := Vector3(0.0871,1.1925,0.0992);
TouchSensor466 := TTouchSensorNode.Create;
TouchSensor466.Description := 'HAnimSite l_rib10_pt';
{ .AddChildren }
HAnimSite465.AddChildren([TouchSensor466]);
Shape467 := TShapeNode.Create;
Shape467 := Shape117;
{ .AddChildren }
HAnimSite465.AddChildren([Shape467]);
{ .AddChildren }
HAnimSegment442.AddChildren([HAnimSite465]);
HAnimSite468 := THAnimSiteNode.Create;
HAnimSite468.NameField := 'rib10_midspine_pt';
HAnimSite468.Translation := Vector3(0.0049,1.1908,-0.1113);
TouchSensor469 := TTouchSensorNode.Create;
TouchSensor469.Description := 'HAnimSite rib10_midspine_pt';
{ .AddChildren }
HAnimSite468.AddChildren([TouchSensor469]);
Shape470 := TShapeNode.Create;
Shape470 := Shape117;
{ .AddChildren }
HAnimSite468.AddChildren([Shape470]);
{ .AddChildren }
HAnimSegment442.AddChildren([HAnimSite468]);
{ .AddChildren }
HAnimJoint441.AddChildren([HAnimSegment442]);
HAnimJoint471 := THAnimJointNode.Create;
HAnimJoint471.NameField := 'vl1';
HAnimJoint471.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimSegment472 := THAnimSegmentNode.Create;
HAnimSegment472.NameField := 'l1';
TouchSensor473 := TTouchSensorNode.Create;
TouchSensor473.Description := 'HAnimJoint vl1, HAnimSegment l1';
{ .AddChildren }
HAnimSegment472.AddChildren([TouchSensor473]);
Transform474 := TTransformNode.Create;
Transform474.Translation := Vector3(0.0048,1.1912,-0.0805);
Shape475 := TShapeNode.Create;
Shape475 := Shape54;
{ .AddChild }
Transform474.AddChildren([Shape475]);
{ .AddChildren }
HAnimSegment472.AddChildren([Transform474]);
Shape476 := TShapeNode.Create;
LineSet477 := TLineSetNode.Create;
LineSet477.SetVertexCount([2]);
ColorRGBA478 := TColorRGBANode.Create;
ColorRGBA478 := ColorRGBA60;
{ .SetColor }
LineSet477.Color := ColorRGBA478;
Coordinate479 := TCoordinateNode.Create;
Coordinate479.SetPoint([Vector3(0.0048,1.1912,-0.0805),Vector3(0.0051,1.2278,-0.0808)]);
{ .SetCoord }
LineSet477.Coord := Coordinate479;
{ .SetGeometry }
Shape476.Geometry := LineSet477;
{ .AddChildren }
HAnimSegment472.AddChildren([Shape476]);
{ .AddChildren }
HAnimJoint471.AddChildren([HAnimSegment472]);
HAnimJoint480 := THAnimJointNode.Create;
HAnimJoint480.NameField := 'vt12';
HAnimJoint480.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimSegment481 := THAnimSegmentNode.Create;
HAnimSegment481.NameField := 't12';
TouchSensor482 := TTouchSensorNode.Create;
TouchSensor482.Description := 'HAnimJoint vt12, HAnimSegment t12';
{ .AddChildren }
HAnimSegment481.AddChildren([TouchSensor482]);
Transform483 := TTransformNode.Create;
Transform483.Translation := Vector3(0.0051,1.2278,-0.0808);
Shape484 := TShapeNode.Create;
Shape484 := Shape54;
{ .AddChild }
Transform483.AddChildren([Shape484]);
{ .AddChildren }
HAnimSegment481.AddChildren([Transform483]);
Shape485 := TShapeNode.Create;
LineSet486 := TLineSetNode.Create;
LineSet486.SetVertexCount([2]);
ColorRGBA487 := TColorRGBANode.Create;
ColorRGBA487 := ColorRGBA60;
{ .SetColor }
LineSet486.Color := ColorRGBA487;
Coordinate488 := TCoordinateNode.Create;
Coordinate488.SetPoint([Vector3(0.0051,1.2278,-0.0808),Vector3(0.0053,1.2679,-0.081)]);
{ .SetCoord }
LineSet486.Coord := Coordinate488;
{ .SetGeometry }
Shape485.Geometry := LineSet486;
{ .AddChildren }
HAnimSegment481.AddChildren([Shape485]);
{ .AddChildren }
HAnimJoint480.AddChildren([HAnimSegment481]);
HAnimJoint489 := THAnimJointNode.Create;
HAnimJoint489.NameField := 'vt11';
HAnimJoint489.Center := Vector3(0.0053,1.2679,-0.081);
HAnimSegment490 := THAnimSegmentNode.Create;
HAnimSegment490.NameField := 't11';
TouchSensor491 := TTouchSensorNode.Create;
TouchSensor491.Description := 'HAnimJoint vt11, HAnimSegment t11';
{ .AddChildren }
HAnimSegment490.AddChildren([TouchSensor491]);
Transform492 := TTransformNode.Create;
Transform492.Translation := Vector3(0.0053,1.2679,-0.081);
Shape493 := TShapeNode.Create;
Shape493 := Shape54;
{ .AddChild }
Transform492.AddChildren([Shape493]);
{ .AddChildren }
HAnimSegment490.AddChildren([Transform492]);
Shape494 := TShapeNode.Create;
LineSet495 := TLineSetNode.Create;
LineSet495.SetVertexCount([2]);
ColorRGBA496 := TColorRGBANode.Create;
ColorRGBA496 := ColorRGBA60;
{ .SetColor }
LineSet495.Color := ColorRGBA496;
Coordinate497 := TCoordinateNode.Create;
Coordinate497.SetPoint([Vector3(0.0053,1.2679,-0.081),Vector3(0.0056,1.2848,-0.0822)]);
{ .SetCoord }
LineSet495.Coord := Coordinate497;
{ .SetGeometry }
Shape494.Geometry := LineSet495;
{ .AddChildren }
HAnimSegment490.AddChildren([Shape494]);
{ .AddChildren }
HAnimJoint489.AddChildren([HAnimSegment490]);
HAnimJoint498 := THAnimJointNode.Create;
HAnimJoint498.NameField := 'vt10';
HAnimJoint498.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimSegment499 := THAnimSegmentNode.Create;
HAnimSegment499.NameField := 't10';
TouchSensor500 := TTouchSensorNode.Create;
TouchSensor500.Description := 'HAnimJoint vt10, HAnimSegment t10';
{ .AddChildren }
HAnimSegment499.AddChildren([TouchSensor500]);
Transform501 := TTransformNode.Create;
Transform501.Translation := Vector3(0.0056,1.2848,-0.0822);
Shape502 := TShapeNode.Create;
Shape502 := Shape54;
{ .AddChild }
Transform501.AddChildren([Shape502]);
{ .AddChildren }
HAnimSegment499.AddChildren([Transform501]);
Shape503 := TShapeNode.Create;
LineSet504 := TLineSetNode.Create;
LineSet504.SetVertexCount([2]);
ColorRGBA505 := TColorRGBANode.Create;
ColorRGBA505 := ColorRGBA60;
{ .SetColor }
LineSet504.Color := ColorRGBA505;
Coordinate506 := TCoordinateNode.Create;
Coordinate506.SetPoint([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0057,1.3126,-0.0838)]);
{ .SetCoord }
LineSet504.Coord := Coordinate506;
{ .SetGeometry }
Shape503.Geometry := LineSet504;
{ .AddChildren }
HAnimSegment499.AddChildren([Shape503]);
Shape507 := TShapeNode.Create;
LineSet508 := TLineSetNode.Create;
LineSet508.SetVertexCount([2]);
ColorRGBA509 := TColorRGBANode.Create;
ColorRGBA509 := ColorRGBA81;
{ .SetColor }
LineSet508.Color := ColorRGBA509;
Coordinate510 := TCoordinateNode.Create;
Coordinate510.SetPoint([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0085,1.2995,0.1147)]);
{ .SetCoord }
LineSet508.Coord := Coordinate510;
{ .SetGeometry }
Shape507.Geometry := LineSet508;
{ .AddChildren }
HAnimSegment499.AddChildren([Shape507]);
HAnimSite511 := THAnimSiteNode.Create;
HAnimSite511.NameField := 'substernale_pt';
HAnimSite511.Translation := Vector3(0.0085,1.2995,0.1147);
TouchSensor512 := TTouchSensorNode.Create;
TouchSensor512.Description := 'HAnimSite substernale_pt';
{ .AddChildren }
HAnimSite511.AddChildren([TouchSensor512]);
Shape513 := TShapeNode.Create;
Shape513 := Shape117;
{ .AddChildren }
HAnimSite511.AddChildren([Shape513]);
{ .AddChildren }
HAnimSegment499.AddChildren([HAnimSite511]);
{ .AddChildren }
HAnimJoint498.AddChildren([HAnimSegment499]);
HAnimJoint514 := THAnimJointNode.Create;
HAnimJoint514.NameField := 'vt9';
HAnimJoint514.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimSegment515 := THAnimSegmentNode.Create;
HAnimSegment515.NameField := 't9';
TouchSensor516 := TTouchSensorNode.Create;
TouchSensor516.Description := 'HAnimJoint vt9, HAnimSegment t9';
{ .AddChildren }
HAnimSegment515.AddChildren([TouchSensor516]);
Transform517 := TTransformNode.Create;
Transform517.Translation := Vector3(0.0057,1.3126,-0.0838);
Shape518 := TShapeNode.Create;
Shape518 := Shape54;
{ .AddChild }
Transform517.AddChildren([Shape518]);
{ .AddChildren }
HAnimSegment515.AddChildren([Transform517]);
Shape519 := TShapeNode.Create;
LineSet520 := TLineSetNode.Create;
LineSet520.SetVertexCount([2]);
ColorRGBA521 := TColorRGBANode.Create;
ColorRGBA521 := ColorRGBA60;
{ .SetColor }
LineSet520.Color := ColorRGBA521;
Coordinate522 := TCoordinateNode.Create;
Coordinate522.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(0.0057,1.3382,-0.0845)]);
{ .SetCoord }
LineSet520.Coord := Coordinate522;
{ .SetGeometry }
Shape519.Geometry := LineSet520;
{ .AddChildren }
HAnimSegment515.AddChildren([Shape519]);
Shape523 := TShapeNode.Create;
LineSet524 := TLineSetNode.Create;
LineSet524.SetVertexCount([2]);
ColorRGBA525 := TColorRGBANode.Create;
ColorRGBA525 := ColorRGBA81;
{ .SetColor }
LineSet524.Color := ColorRGBA525;
Coordinate526 := TCoordinateNode.Create;
Coordinate526.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(-0.0736,1.3385,0.1217)]);
{ .SetCoord }
LineSet524.Coord := Coordinate526;
{ .SetGeometry }
Shape523.Geometry := LineSet524;
{ .AddChildren }
HAnimSegment515.AddChildren([Shape523]);
Shape527 := TShapeNode.Create;
LineSet528 := TLineSetNode.Create;
LineSet528.SetVertexCount([2]);
ColorRGBA529 := TColorRGBANode.Create;
ColorRGBA529 := ColorRGBA81;
{ .SetColor }
LineSet528.Color := ColorRGBA529;
Coordinate530 := TCoordinateNode.Create;
Coordinate530.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(0.0918,1.3382,0.1192)]);
{ .SetCoord }
LineSet528.Coord := Coordinate530;
{ .SetGeometry }
Shape527.Geometry := LineSet528;
{ .AddChildren }
HAnimSegment515.AddChildren([Shape527]);
HAnimSite531 := THAnimSiteNode.Create;
HAnimSite531.NameField := 'r_thelion_pt';
HAnimSite531.Translation := Vector3(-0.0736,1.3385,0.1217);
TouchSensor532 := TTouchSensorNode.Create;
TouchSensor532.Description := 'HAnimSite r_thelion_pt';
{ .AddChildren }
HAnimSite531.AddChildren([TouchSensor532]);
Shape533 := TShapeNode.Create;
Shape533 := Shape117;
{ .AddChildren }
HAnimSite531.AddChildren([Shape533]);
{ .AddChildren }
HAnimSegment515.AddChildren([HAnimSite531]);
HAnimSite534 := THAnimSiteNode.Create;
HAnimSite534.NameField := 'l_thelion_pt';
HAnimSite534.Translation := Vector3(0.0918,1.3382,0.1192);
TouchSensor535 := TTouchSensorNode.Create;
TouchSensor535.Description := 'HAnimSite l_thelion_pt';
{ .AddChildren }
HAnimSite534.AddChildren([TouchSensor535]);
Shape536 := TShapeNode.Create;
Shape536 := Shape117;
{ .AddChildren }
HAnimSite534.AddChildren([Shape536]);
{ .AddChildren }
HAnimSegment515.AddChildren([HAnimSite534]);
{ .AddChildren }
HAnimJoint514.AddChildren([HAnimSegment515]);
HAnimJoint537 := THAnimJointNode.Create;
HAnimJoint537.NameField := 'vt8';
HAnimJoint537.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimSegment538 := THAnimSegmentNode.Create;
HAnimSegment538.NameField := 't8';
TouchSensor539 := TTouchSensorNode.Create;
TouchSensor539.Description := 'HAnimJoint vt8, HAnimSegment t8';
{ .AddChildren }
HAnimSegment538.AddChildren([TouchSensor539]);
Transform540 := TTransformNode.Create;
Transform540.Translation := Vector3(0.0057,1.3382,-0.0845);
Shape541 := TShapeNode.Create;
Shape541 := Shape54;
{ .AddChild }
Transform540.AddChildren([Shape541]);
{ .AddChildren }
HAnimSegment538.AddChildren([Transform540]);
Shape542 := TShapeNode.Create;
LineSet543 := TLineSetNode.Create;
LineSet543.SetVertexCount([2]);
ColorRGBA544 := TColorRGBANode.Create;
ColorRGBA544 := ColorRGBA60;
{ .SetColor }
LineSet543.Color := ColorRGBA544;
Coordinate545 := TCoordinateNode.Create;
Coordinate545.SetPoint([Vector3(0.0057,1.3382,-0.0845),Vector3(0.0058,1.3625,-0.0833)]);
{ .SetCoord }
LineSet543.Coord := Coordinate545;
{ .SetGeometry }
Shape542.Geometry := LineSet543;
{ .AddChildren }
HAnimSegment538.AddChildren([Shape542]);
{ .AddChildren }
HAnimJoint537.AddChildren([HAnimSegment538]);
HAnimJoint546 := THAnimJointNode.Create;
HAnimJoint546.NameField := 'vt7';
HAnimJoint546.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimSegment547 := THAnimSegmentNode.Create;
HAnimSegment547.NameField := 't7';
TouchSensor548 := TTouchSensorNode.Create;
TouchSensor548.Description := 'HAnimJoint vt7, HAnimSegment t7';
{ .AddChildren }
HAnimSegment547.AddChildren([TouchSensor548]);
Transform549 := TTransformNode.Create;
Transform549.Translation := Vector3(0.0058,1.3625,-0.0833);
Shape550 := TShapeNode.Create;
Shape550 := Shape54;
{ .AddChild }
Transform549.AddChildren([Shape550]);
{ .AddChildren }
HAnimSegment547.AddChildren([Transform549]);
Shape551 := TShapeNode.Create;
LineSet552 := TLineSetNode.Create;
LineSet552.SetVertexCount([2]);
ColorRGBA553 := TColorRGBANode.Create;
ColorRGBA553 := ColorRGBA60;
{ .SetColor }
LineSet552.Color := ColorRGBA553;
Coordinate554 := TCoordinateNode.Create;
Coordinate554.SetPoint([Vector3(0.0058,1.3625,-0.0833),Vector3(0.0059,1.3866,-0.08)]);
{ .SetCoord }
LineSet552.Coord := Coordinate554;
{ .SetGeometry }
Shape551.Geometry := LineSet552;
{ .AddChildren }
HAnimSegment547.AddChildren([Shape551]);
{ .AddChildren }
HAnimJoint546.AddChildren([HAnimSegment547]);
HAnimJoint555 := THAnimJointNode.Create;
HAnimJoint555.NameField := 'vt6';
HAnimJoint555.Center := Vector3(0.0059,1.3866,-0.08);
HAnimSegment556 := THAnimSegmentNode.Create;
HAnimSegment556.NameField := 't6';
TouchSensor557 := TTouchSensorNode.Create;
TouchSensor557.Description := 'HAnimJoint vt6, HAnimSegment t6';
{ .AddChildren }
HAnimSegment556.AddChildren([TouchSensor557]);
Transform558 := TTransformNode.Create;
Transform558.Translation := Vector3(0.0059,1.3866,-0.08);
Shape559 := TShapeNode.Create;
Shape559 := Shape54;
{ .AddChild }
Transform558.AddChildren([Shape559]);
{ .AddChildren }
HAnimSegment556.AddChildren([Transform558]);
Shape560 := TShapeNode.Create;
LineSet561 := TLineSetNode.Create;
LineSet561.SetVertexCount([2]);
ColorRGBA562 := TColorRGBANode.Create;
ColorRGBA562 := ColorRGBA60;
{ .SetColor }
LineSet561.Color := ColorRGBA562;
Coordinate563 := TCoordinateNode.Create;
Coordinate563.SetPoint([Vector3(0.0059,1.3866,-0.08),Vector3(0.006,1.4102,-0.0745)]);
{ .SetCoord }
LineSet561.Coord := Coordinate563;
{ .SetGeometry }
Shape560.Geometry := LineSet561;
{ .AddChildren }
HAnimSegment556.AddChildren([Shape560]);
{ .AddChildren }
HAnimJoint555.AddChildren([HAnimSegment556]);
HAnimJoint564 := THAnimJointNode.Create;
HAnimJoint564.NameField := 'vt5';
HAnimJoint564.Center := Vector3(0.006,1.4102,-0.0745);
HAnimSegment565 := THAnimSegmentNode.Create;
HAnimSegment565.NameField := 't5';
TouchSensor566 := TTouchSensorNode.Create;
TouchSensor566.Description := 'HAnimJoint vt5, HAnimSegment t5';
{ .AddChildren }
HAnimSegment565.AddChildren([TouchSensor566]);
Transform567 := TTransformNode.Create;
Transform567.Translation := Vector3(0.006,1.4102,-0.0745);
Shape568 := TShapeNode.Create;
Shape568 := Shape54;
{ .AddChild }
Transform567.AddChildren([Shape568]);
{ .AddChildren }
HAnimSegment565.AddChildren([Transform567]);
Shape569 := TShapeNode.Create;
LineSet570 := TLineSetNode.Create;
LineSet570.SetVertexCount([2]);
ColorRGBA571 := TColorRGBANode.Create;
ColorRGBA571 := ColorRGBA60;
{ .SetColor }
LineSet570.Color := ColorRGBA571;
Coordinate572 := TCoordinateNode.Create;
Coordinate572.SetPoint([Vector3(0.006,1.4102,-0.0745),Vector3(0.0061,1.432,-0.0675)]);
{ .SetCoord }
LineSet570.Coord := Coordinate572;
{ .SetGeometry }
Shape569.Geometry := LineSet570;
{ .AddChildren }
HAnimSegment565.AddChildren([Shape569]);
{ .AddChildren }
HAnimJoint564.AddChildren([HAnimSegment565]);
HAnimJoint573 := THAnimJointNode.Create;
HAnimJoint573.NameField := 'vt4';
HAnimJoint573.Center := Vector3(0.0061,1.432,-0.0675);
HAnimSegment574 := THAnimSegmentNode.Create;
HAnimSegment574.NameField := 't4';
TouchSensor575 := TTouchSensorNode.Create;
TouchSensor575.Description := 'HAnimJoint vt4, HAnimSegment t4';
{ .AddChildren }
HAnimSegment574.AddChildren([TouchSensor575]);
Transform576 := TTransformNode.Create;
Transform576.Translation := Vector3(0.0061,1.432,-0.0675);
Shape577 := TShapeNode.Create;
Shape577 := Shape54;
{ .AddChild }
Transform576.AddChildren([Shape577]);
{ .AddChildren }
HAnimSegment574.AddChildren([Transform576]);
Shape578 := TShapeNode.Create;
LineSet579 := TLineSetNode.Create;
LineSet579.SetVertexCount([2]);
ColorRGBA580 := TColorRGBANode.Create;
ColorRGBA580 := ColorRGBA60;
{ .SetColor }
LineSet579.Color := ColorRGBA580;
Coordinate581 := TCoordinateNode.Create;
Coordinate581.SetPoint([Vector3(0.0061,1.432,-0.0675),Vector3(0.0062,1.4583,-0.057)]);
{ .SetCoord }
LineSet579.Coord := Coordinate581;
{ .SetGeometry }
Shape578.Geometry := LineSet579;
{ .AddChildren }
HAnimSegment574.AddChildren([Shape578]);
{ .AddChildren }
HAnimJoint573.AddChildren([HAnimSegment574]);
HAnimJoint582 := THAnimJointNode.Create;
HAnimJoint582.NameField := 'vt3';
HAnimJoint582.Center := Vector3(0.0062,1.4583,-0.057);
HAnimSegment583 := THAnimSegmentNode.Create;
HAnimSegment583.NameField := 't3';
TouchSensor584 := TTouchSensorNode.Create;
TouchSensor584.Description := 'HAnimJoint vt3, HAnimSegment t3';
{ .AddChildren }
HAnimSegment583.AddChildren([TouchSensor584]);
Transform585 := TTransformNode.Create;
Transform585.Translation := Vector3(0.0062,1.4583,-0.057);
Shape586 := TShapeNode.Create;
Shape586 := Shape54;
{ .AddChild }
Transform585.AddChildren([Shape586]);
{ .AddChildren }
HAnimSegment583.AddChildren([Transform585]);
Shape587 := TShapeNode.Create;
LineSet588 := TLineSetNode.Create;
LineSet588.SetVertexCount([2]);
ColorRGBA589 := TColorRGBANode.Create;
ColorRGBA589 := ColorRGBA60;
{ .SetColor }
LineSet588.Color := ColorRGBA589;
Coordinate590 := TCoordinateNode.Create;
Coordinate590.SetPoint([Vector3(0.0062,1.4583,-0.057),Vector3(0.0063,1.4761,-0.0484)]);
{ .SetCoord }
LineSet588.Coord := Coordinate590;
{ .SetGeometry }
Shape587.Geometry := LineSet588;
{ .AddChildren }
HAnimSegment583.AddChildren([Shape587]);
{ .AddChildren }
HAnimJoint582.AddChildren([HAnimSegment583]);
HAnimJoint591 := THAnimJointNode.Create;
HAnimJoint591.NameField := 'vt2';
HAnimJoint591.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimSegment592 := THAnimSegmentNode.Create;
HAnimSegment592.NameField := 't2';
TouchSensor593 := TTouchSensorNode.Create;
TouchSensor593.Description := 'HAnimJoint vt2, HAnimSegment t2';
{ .AddChildren }
HAnimSegment592.AddChildren([TouchSensor593]);
Transform594 := TTransformNode.Create;
Transform594.Translation := Vector3(0.0063,1.4761,-0.0484);
Shape595 := TShapeNode.Create;
Shape595 := Shape54;
{ .AddChild }
Transform594.AddChildren([Shape595]);
{ .AddChildren }
HAnimSegment592.AddChildren([Transform594]);
Shape596 := TShapeNode.Create;
LineSet597 := TLineSetNode.Create;
LineSet597.SetVertexCount([2]);
ColorRGBA598 := TColorRGBANode.Create;
ColorRGBA598 := ColorRGBA60;
{ .SetColor }
LineSet597.Color := ColorRGBA598;
Coordinate599 := TCoordinateNode.Create;
Coordinate599.SetPoint([Vector3(0.0063,1.4761,-0.0484),Vector3(0.0065,1.4951,-0.0387)]);
{ .SetCoord }
LineSet597.Coord := Coordinate599;
{ .SetGeometry }
Shape596.Geometry := LineSet597;
{ .AddChildren }
HAnimSegment592.AddChildren([Shape596]);
{ .AddChildren }
HAnimJoint591.AddChildren([HAnimSegment592]);
HAnimJoint600 := THAnimJointNode.Create;
HAnimJoint600.NameField := 'vt1';
HAnimJoint600.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimSegment601 := THAnimSegmentNode.Create;
HAnimSegment601.NameField := 't1';
TouchSensor602 := TTouchSensorNode.Create;
TouchSensor602.Description := 'HAnimJoint vt1, HAnimSegment t1';
{ .AddChildren }
HAnimSegment601.AddChildren([TouchSensor602]);
Transform603 := TTransformNode.Create;
Transform603.Translation := Vector3(0.0065,1.4951,-0.0387);
Shape604 := TShapeNode.Create;
Shape604 := Shape54;
{ .AddChild }
Transform603.AddChildren([Shape604]);
{ .AddChildren }
HAnimSegment601.AddChildren([Transform603]);
Shape605 := TShapeNode.Create;
LineSet606 := TLineSetNode.Create;
LineSet606.SetVertexCount([2]);
ColorRGBA607 := TColorRGBANode.Create;
ColorRGBA607 := ColorRGBA60;
{ .SetColor }
LineSet606.Color := ColorRGBA607;
Coordinate608 := TCoordinateNode.Create;
Coordinate608.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0066,1.5132,-0.0301)]);
{ .SetCoord }
LineSet606.Coord := Coordinate608;
{ .SetGeometry }
Shape605.Geometry := LineSet606;
{ .AddChildren }
HAnimSegment601.AddChildren([Shape605]);
Shape609 := TShapeNode.Create;
LineSet610 := TLineSetNode.Create;
LineSet610.SetVertexCount([2]);
ColorRGBA611 := TColorRGBANode.Create;
ColorRGBA611 := ColorRGBA60;
{ .SetColor }
LineSet610.Color := ColorRGBA611;
Coordinate612 := TCoordinateNode.Create;
Coordinate612.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.082,1.4488,-0.0353)]);
{ .SetCoord }
LineSet610.Coord := Coordinate612;
{ .SetGeometry }
Shape609.Geometry := LineSet610;
{ .AddChildren }
HAnimSegment601.AddChildren([Shape609]);
Shape613 := TShapeNode.Create;
LineSet614 := TLineSetNode.Create;
LineSet614.SetVertexCount([2]);
ColorRGBA615 := TColorRGBANode.Create;
ColorRGBA615 := ColorRGBA60;
{ .SetColor }
LineSet614.Color := ColorRGBA615;
Coordinate616 := TCoordinateNode.Create;
Coordinate616.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(-0.082,1.4488,-0.0353)]);
{ .SetCoord }
LineSet614.Coord := Coordinate616;
{ .SetGeometry }
Shape613.Geometry := LineSet614;
{ .AddChildren }
HAnimSegment601.AddChildren([Shape613]);
Shape617 := TShapeNode.Create;
LineSet618 := TLineSetNode.Create;
LineSet618.SetVertexCount([2]);
ColorRGBA619 := TColorRGBANode.Create;
ColorRGBA619 := ColorRGBA81;
{ .SetColor }
LineSet618.Color := ColorRGBA619;
Coordinate620 := TCoordinateNode.Create;
Coordinate620.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0084,1.4714,0.0551)]);
{ .SetCoord }
LineSet618.Coord := Coordinate620;
{ .SetGeometry }
Shape617.Geometry := LineSet618;
{ .AddChildren }
HAnimSegment601.AddChildren([Shape617]);
Shape621 := TShapeNode.Create;
LineSet622 := TLineSetNode.Create;
LineSet622.SetVertexCount([2]);
ColorRGBA623 := TColorRGBANode.Create;
ColorRGBA623 := ColorRGBA81;
{ .SetColor }
LineSet622.Color := ColorRGBA623;
Coordinate624 := TCoordinateNode.Create;
Coordinate624.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0064,1.52,-0.0815)]);
{ .SetCoord }
LineSet622.Coord := Coordinate624;
{ .SetGeometry }
Shape621.Geometry := LineSet622;
{ .AddChildren }
HAnimSegment601.AddChildren([Shape621]);
HAnimSite625 := THAnimSiteNode.Create;
HAnimSite625.NameField := 'suprasternale_pt';
HAnimSite625.Translation := Vector3(0.0084,1.4714,0.0551);
TouchSensor626 := TTouchSensorNode.Create;
TouchSensor626.Description := 'HAnimSite suprasternale_pt';
{ .AddChildren }
HAnimSite625.AddChildren([TouchSensor626]);
Shape627 := TShapeNode.Create;
Shape627 := Shape117;
{ .AddChildren }
HAnimSite625.AddChildren([Shape627]);
{ .AddChildren }
HAnimSegment601.AddChildren([HAnimSite625]);
HAnimSite628 := THAnimSiteNode.Create;
HAnimSite628.NameField := 'cervicale_pt';
HAnimSite628.Translation := Vector3(0.0064,1.52,-0.0815);
TouchSensor629 := TTouchSensorNode.Create;
TouchSensor629.Description := 'HAnimSite cervicale_pt';
{ .AddChildren }
HAnimSite628.AddChildren([TouchSensor629]);
Shape630 := TShapeNode.Create;
Shape630 := Shape117;
{ .AddChildren }
HAnimSite628.AddChildren([Shape630]);
{ .AddChildren }
HAnimSegment601.AddChildren([HAnimSite628]);
{ .AddChildren }
HAnimJoint600.AddChildren([HAnimSegment601]);
HAnimJoint631 := THAnimJointNode.Create;
HAnimJoint631.NameField := 'vc7';
HAnimJoint631.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimSegment632 := THAnimSegmentNode.Create;
HAnimSegment632.NameField := 'c7';
TouchSensor633 := TTouchSensorNode.Create;
TouchSensor633.Description := 'HAnimJoint vc7, HAnimSegment c7';
{ .AddChildren }
HAnimSegment632.AddChildren([TouchSensor633]);
Transform634 := TTransformNode.Create;
Transform634.Translation := Vector3(0.0066,1.5132,-0.0301);
Shape635 := TShapeNode.Create;
Shape635 := Shape54;
{ .AddChild }
Transform634.AddChildren([Shape635]);
{ .AddChildren }
HAnimSegment632.AddChildren([Transform634]);
Shape636 := TShapeNode.Create;
LineSet637 := TLineSetNode.Create;
LineSet637.SetVertexCount([2]);
ColorRGBA638 := TColorRGBANode.Create;
ColorRGBA638 := ColorRGBA60;
{ .SetColor }
LineSet637.Color := ColorRGBA638;
Coordinate639 := TCoordinateNode.Create;
Coordinate639.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(0.0066,1.5357,-0.0143)]);
{ .SetCoord }
LineSet637.Coord := Coordinate639;
{ .SetGeometry }
Shape636.Geometry := LineSet637;
{ .AddChildren }
HAnimSegment632.AddChildren([Shape636]);
Shape640 := TShapeNode.Create;
LineSet641 := TLineSetNode.Create;
LineSet641.SetVertexCount([2]);
ColorRGBA642 := TColorRGBANode.Create;
ColorRGBA642 := ColorRGBA81;
{ .SetColor }
LineSet641.Color := ColorRGBA642;
Coordinate643 := TCoordinateNode.Create;
Coordinate643.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(-0.0419,1.5149,-0.022)]);
{ .SetCoord }
LineSet641.Coord := Coordinate643;
{ .SetGeometry }
Shape640.Geometry := LineSet641;
{ .AddChildren }
HAnimSegment632.AddChildren([Shape640]);
Shape644 := TShapeNode.Create;
LineSet645 := TLineSetNode.Create;
LineSet645.SetVertexCount([2]);
ColorRGBA646 := TColorRGBANode.Create;
ColorRGBA646 := ColorRGBA81;
{ .SetColor }
LineSet645.Color := ColorRGBA646;
Coordinate647 := TCoordinateNode.Create;
Coordinate647.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(0.0646,1.5141,-0.038)]);
{ .SetCoord }
LineSet645.Coord := Coordinate647;
{ .SetGeometry }
Shape644.Geometry := LineSet645;
{ .AddChildren }
HAnimSegment632.AddChildren([Shape644]);
HAnimSite648 := THAnimSiteNode.Create;
HAnimSite648.NameField := 'r_neck_base_pt';
HAnimSite648.Translation := Vector3(-0.0419,1.5149,-0.022);
TouchSensor649 := TTouchSensorNode.Create;
TouchSensor649.Description := 'HAnimSite r_neck_base_pt';
{ .AddChildren }
HAnimSite648.AddChildren([TouchSensor649]);
Shape650 := TShapeNode.Create;
Shape650 := Shape117;
{ .AddChildren }
HAnimSite648.AddChildren([Shape650]);
{ .AddChildren }
HAnimSegment632.AddChildren([HAnimSite648]);
HAnimSite651 := THAnimSiteNode.Create;
HAnimSite651.NameField := 'l_neck_base_pt';
HAnimSite651.Translation := Vector3(0.0646,1.5141,-0.038);
TouchSensor652 := TTouchSensorNode.Create;
TouchSensor652.Description := 'HAnimSite l_neck_base_pt';
{ .AddChildren }
HAnimSite651.AddChildren([TouchSensor652]);
Shape653 := TShapeNode.Create;
Shape653 := Shape117;
{ .AddChildren }
HAnimSite651.AddChildren([Shape653]);
{ .AddChildren }
HAnimSegment632.AddChildren([HAnimSite651]);
{ .AddChildren }
HAnimJoint631.AddChildren([HAnimSegment632]);
HAnimJoint654 := THAnimJointNode.Create;
HAnimJoint654.NameField := 'vc6';
HAnimJoint654.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimSegment655 := THAnimSegmentNode.Create;
HAnimSegment655.NameField := 'c6';
TouchSensor656 := TTouchSensorNode.Create;
TouchSensor656.Description := 'HAnimJoint vc6, HAnimSegment c6';
{ .AddChildren }
HAnimSegment655.AddChildren([TouchSensor656]);
Transform657 := TTransformNode.Create;
Transform657.Translation := Vector3(0.0066,1.5357,-0.0143);
Shape658 := TShapeNode.Create;
Shape658 := Shape54;
{ .AddChild }
Transform657.AddChildren([Shape658]);
{ .AddChildren }
HAnimSegment655.AddChildren([Transform657]);
Shape659 := TShapeNode.Create;
LineSet660 := TLineSetNode.Create;
LineSet660.SetVertexCount([2]);
ColorRGBA661 := TColorRGBANode.Create;
ColorRGBA661 := ColorRGBA60;
{ .SetColor }
LineSet660.Color := ColorRGBA661;
Coordinate662 := TCoordinateNode.Create;
Coordinate662.SetPoint([Vector3(0.0066,1.5357,-0.0143),Vector3(0.0066,1.552,-0.0082)]);
{ .SetCoord }
LineSet660.Coord := Coordinate662;
{ .SetGeometry }
Shape659.Geometry := LineSet660;
{ .AddChildren }
HAnimSegment655.AddChildren([Shape659]);
{ .AddChildren }
HAnimJoint654.AddChildren([HAnimSegment655]);
HAnimJoint663 := THAnimJointNode.Create;
HAnimJoint663.NameField := 'vc5';
HAnimJoint663.Center := Vector3(0.0066,1.552,-0.0082);
HAnimSegment664 := THAnimSegmentNode.Create;
HAnimSegment664.NameField := 'c5';
TouchSensor665 := TTouchSensorNode.Create;
TouchSensor665.Description := 'HAnimJoint vc5, HAnimSegment c5';
{ .AddChildren }
HAnimSegment664.AddChildren([TouchSensor665]);
Transform666 := TTransformNode.Create;
Transform666.Translation := Vector3(0.0066,1.552,-0.0082);
Shape667 := TShapeNode.Create;
Shape667 := Shape54;
{ .AddChild }
Transform666.AddChildren([Shape667]);
{ .AddChildren }
HAnimSegment664.AddChildren([Transform666]);
Shape668 := TShapeNode.Create;
LineSet669 := TLineSetNode.Create;
LineSet669.SetVertexCount([2]);
ColorRGBA670 := TColorRGBANode.Create;
ColorRGBA670 := ColorRGBA60;
{ .SetColor }
LineSet669.Color := ColorRGBA670;
Coordinate671 := TCoordinateNode.Create;
Coordinate671.SetPoint([Vector3(0.0066,1.552,-0.0082),Vector3(0.0066,1.5662,-0.0084)]);
{ .SetCoord }
LineSet669.Coord := Coordinate671;
{ .SetGeometry }
Shape668.Geometry := LineSet669;
{ .AddChildren }
HAnimSegment664.AddChildren([Shape668]);
{ .AddChildren }
HAnimJoint663.AddChildren([HAnimSegment664]);
HAnimJoint672 := THAnimJointNode.Create;
HAnimJoint672.NameField := 'vc4';
HAnimJoint672.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimSegment673 := THAnimSegmentNode.Create;
HAnimSegment673.NameField := 'c4';
TouchSensor674 := TTouchSensorNode.Create;
TouchSensor674.Description := 'HAnimJoint vc4, HAnimSegment c4';
{ .AddChildren }
HAnimSegment673.AddChildren([TouchSensor674]);
Transform675 := TTransformNode.Create;
Transform675.Translation := Vector3(0.0066,1.5662,-0.0084);
Shape676 := TShapeNode.Create;
Shape676 := Shape54;
{ .AddChild }
Transform675.AddChildren([Shape676]);
{ .AddChildren }
HAnimSegment673.AddChildren([Transform675]);
Shape677 := TShapeNode.Create;
LineSet678 := TLineSetNode.Create;
LineSet678.SetVertexCount([2]);
ColorRGBA679 := TColorRGBANode.Create;
ColorRGBA679 := ColorRGBA60;
{ .SetColor }
LineSet678.Color := ColorRGBA679;
Coordinate680 := TCoordinateNode.Create;
Coordinate680.SetPoint([Vector3(0.0066,1.5662,-0.0084),Vector3(0.0066,1.58,-0.0103)]);
{ .SetCoord }
LineSet678.Coord := Coordinate680;
{ .SetGeometry }
Shape677.Geometry := LineSet678;
{ .AddChildren }
HAnimSegment673.AddChildren([Shape677]);
{ .AddChildren }
HAnimJoint672.AddChildren([HAnimSegment673]);
HAnimJoint681 := THAnimJointNode.Create;
HAnimJoint681.NameField := 'vc3';
HAnimJoint681.Center := Vector3(0.0066,1.58,-0.0103);
HAnimSegment682 := THAnimSegmentNode.Create;
HAnimSegment682.NameField := 'c3';
TouchSensor683 := TTouchSensorNode.Create;
TouchSensor683.Description := 'HAnimJoint vc3, HAnimSegment c3';
{ .AddChildren }
HAnimSegment682.AddChildren([TouchSensor683]);
Transform684 := TTransformNode.Create;
Transform684.Translation := Vector3(0.0066,1.58,-0.0103);
Shape685 := TShapeNode.Create;
Shape685 := Shape54;
{ .AddChild }
Transform684.AddChildren([Shape685]);
{ .AddChildren }
HAnimSegment682.AddChildren([Transform684]);
Shape686 := TShapeNode.Create;
LineSet687 := TLineSetNode.Create;
LineSet687.SetVertexCount([2]);
ColorRGBA688 := TColorRGBANode.Create;
ColorRGBA688 := ColorRGBA60;
{ .SetColor }
LineSet687.Color := ColorRGBA688;
Coordinate689 := TCoordinateNode.Create;
Coordinate689.SetPoint([Vector3(0.0066,1.58,-0.0103),Vector3(0.0066,1.5928,-0.0103)]);
{ .SetCoord }
LineSet687.Coord := Coordinate689;
{ .SetGeometry }
Shape686.Geometry := LineSet687;
{ .AddChildren }
HAnimSegment682.AddChildren([Shape686]);
{ .AddChildren }
HAnimJoint681.AddChildren([HAnimSegment682]);
HAnimJoint690 := THAnimJointNode.Create;
HAnimJoint690.NameField := 'vc2';
HAnimJoint690.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimSegment691 := THAnimSegmentNode.Create;
HAnimSegment691.NameField := 'c2';
TouchSensor692 := TTouchSensorNode.Create;
TouchSensor692.Description := 'HAnimJoint vc2, HAnimSegment c2';
{ .AddChildren }
HAnimSegment691.AddChildren([TouchSensor692]);
Transform693 := TTransformNode.Create;
Transform693.Translation := Vector3(0.0066,1.5928,-0.0103);
Shape694 := TShapeNode.Create;
Shape694 := Shape54;
{ .AddChild }
Transform693.AddChildren([Shape694]);
{ .AddChildren }
HAnimSegment691.AddChildren([Transform693]);
Shape695 := TShapeNode.Create;
LineSet696 := TLineSetNode.Create;
LineSet696.SetVertexCount([2]);
ColorRGBA697 := TColorRGBANode.Create;
ColorRGBA697 := ColorRGBA60;
{ .SetColor }
LineSet696.Color := ColorRGBA697;
Coordinate698 := TCoordinateNode.Create;
Coordinate698.SetPoint([Vector3(0.0066,1.5928,-0.0103),Vector3(0.0066,1.6144,-0.0034)]);
{ .SetCoord }
LineSet696.Coord := Coordinate698;
{ .SetGeometry }
Shape695.Geometry := LineSet696;
{ .AddChildren }
HAnimSegment691.AddChildren([Shape695]);
{ .AddChildren }
HAnimJoint690.AddChildren([HAnimSegment691]);
HAnimJoint699 := THAnimJointNode.Create;
HAnimJoint699.NameField := 'vc1';
HAnimJoint699.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimSegment700 := THAnimSegmentNode.Create;
HAnimSegment700.NameField := 'c1';
TouchSensor701 := TTouchSensorNode.Create;
TouchSensor701.Description := 'HAnimJoint vc1, HAnimSegment c1';
{ .AddChildren }
HAnimSegment700.AddChildren([TouchSensor701]);
Transform702 := TTransformNode.Create;
Transform702.Translation := Vector3(0.0066,1.6144,-0.0034);
Shape703 := TShapeNode.Create;
Shape703 := Shape54;
{ .AddChild }
Transform702.AddChildren([Shape703]);
{ .AddChildren }
HAnimSegment700.AddChildren([Transform702]);
Shape704 := TShapeNode.Create;
LineSet705 := TLineSetNode.Create;
LineSet705.SetVertexCount([2]);
ColorRGBA706 := TColorRGBANode.Create;
ColorRGBA706 := ColorRGBA60;
{ .SetColor }
LineSet705.Color := ColorRGBA706;
Coordinate707 := TCoordinateNode.Create;
Coordinate707.SetPoint([Vector3(0.0066,1.6144,-0.0034),Vector3(0.0044,1.6209,0.0236)]);
{ .SetCoord }
LineSet705.Coord := Coordinate707;
{ .SetGeometry }
Shape704.Geometry := LineSet705;
{ .AddChildren }
HAnimSegment700.AddChildren([Shape704]);
{ .AddChildren }
HAnimJoint699.AddChildren([HAnimSegment700]);
HAnimJoint708 := THAnimJointNode.Create;
HAnimJoint708.NameField := 'skullbase';
HAnimJoint708.Center := Vector3(0.0044,1.6209,0.0236);
HAnimSegment709 := THAnimSegmentNode.Create;
HAnimSegment709.NameField := 'skull';
TouchSensor710 := TTouchSensorNode.Create;
TouchSensor710.Description := 'HAnimJoint skullbase, HAnimSegment skull';
{ .AddChildren }
HAnimSegment709.AddChildren([TouchSensor710]);
Transform711 := TTransformNode.Create;
Transform711.Translation := Vector3(0.0044,1.6209,0.0236);
Shape712 := TShapeNode.Create;
Shape712 := Shape54;
{ .AddChild }
Transform711.AddChildren([Shape712]);
{ .AddChildren }
HAnimSegment709.AddChildren([Transform711]);
Shape713 := TShapeNode.Create;
LineSet714 := TLineSetNode.Create;
LineSet714.SetVertexCount([2]);
ColorRGBA715 := TColorRGBANode.Create;
ColorRGBA715 := ColorRGBA60;
{ .SetColor }
LineSet714.Color := ColorRGBA715;
Coordinate716 := TCoordinateNode.Create;
Coordinate716.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0336,1.6332,0.0502)]);
{ .SetCoord }
LineSet714.Coord := Coordinate716;
{ .SetGeometry }
Shape713.Geometry := LineSet714;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape713]);
Shape717 := TShapeNode.Create;
LineSet718 := TLineSetNode.Create;
LineSet718.SetVertexCount([2]);
ColorRGBA719 := TColorRGBANode.Create;
ColorRGBA719 := ColorRGBA60;
{ .SetColor }
LineSet718.Color := ColorRGBA719;
Coordinate720 := TCoordinateNode.Create;
Coordinate720.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0336,1.6332,0.0502)]);
{ .SetCoord }
LineSet718.Coord := Coordinate720;
{ .SetGeometry }
Shape717.Geometry := LineSet718;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape717]);
Shape721 := TShapeNode.Create;
LineSet722 := TLineSetNode.Create;
LineSet722.SetVertexCount([2]);
ColorRGBA723 := TColorRGBANode.Create;
ColorRGBA723 := ColorRGBA60;
{ .SetColor }
LineSet722.Color := ColorRGBA723;
Coordinate724 := TCoordinateNode.Create;
Coordinate724.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0336,1.635,0.0506)]);
{ .SetCoord }
LineSet722.Coord := Coordinate724;
{ .SetGeometry }
Shape721.Geometry := LineSet722;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape721]);
Shape725 := TShapeNode.Create;
LineSet726 := TLineSetNode.Create;
LineSet726.SetVertexCount([2]);
ColorRGBA727 := TColorRGBANode.Create;
ColorRGBA727 := ColorRGBA60;
{ .SetColor }
LineSet726.Color := ColorRGBA727;
Coordinate728 := TCoordinateNode.Create;
Coordinate728.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0336,1.6332,0.0502)]);
{ .SetCoord }
LineSet726.Coord := Coordinate728;
{ .SetGeometry }
Shape725.Geometry := LineSet726;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape725]);
Shape729 := TShapeNode.Create;
LineSet730 := TLineSetNode.Create;
LineSet730.SetVertexCount([2]);
ColorRGBA731 := TColorRGBANode.Create;
ColorRGBA731 := ColorRGBA60;
{ .SetColor }
LineSet730.Color := ColorRGBA731;
Coordinate732 := TCoordinateNode.Create;
Coordinate732.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0336,1.6332,0.0502)]);
{ .SetCoord }
LineSet730.Coord := Coordinate732;
{ .SetGeometry }
Shape729.Geometry := LineSet730;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape729]);
Shape733 := TShapeNode.Create;
LineSet734 := TLineSetNode.Create;
LineSet734.SetVertexCount([2]);
ColorRGBA735 := TColorRGBANode.Create;
ColorRGBA735 := ColorRGBA60;
{ .SetColor }
LineSet734.Color := ColorRGBA735;
Coordinate736 := TCoordinateNode.Create;
Coordinate736.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0336,1.635,0.0506)]);
{ .SetCoord }
LineSet734.Coord := Coordinate736;
{ .SetGeometry }
Shape733.Geometry := LineSet734;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape733]);
Shape737 := TShapeNode.Create;
LineSet738 := TLineSetNode.Create;
LineSet738.SetVertexCount([2]);
ColorRGBA739 := TColorRGBANode.Create;
ColorRGBA739 := ColorRGBA60;
{ .SetColor }
LineSet738.Color := ColorRGBA739;
Coordinate740 := TCoordinateNode.Create;
Coordinate740.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1.63,0.015)]);
{ .SetCoord }
LineSet738.Coord := Coordinate740;
{ .SetGeometry }
Shape737.Geometry := LineSet738;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape737]);
Shape741 := TShapeNode.Create;
LineSet742 := TLineSetNode.Create;
LineSet742.SetVertexCount([2]);
ColorRGBA743 := TColorRGBANode.Create;
ColorRGBA743 := ColorRGBA81;
{ .SetColor }
LineSet742.Color := ColorRGBA743;
Coordinate744 := TCoordinateNode.Create;
Coordinate744.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.005,1.7504,0.0055)]);
{ .SetCoord }
LineSet742.Coord := Coordinate744;
{ .SetGeometry }
Shape741.Geometry := LineSet742;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape741]);
Shape745 := TShapeNode.Create;
LineSet746 := TLineSetNode.Create;
LineSet746.SetVertexCount([2]);
ColorRGBA747 := TColorRGBANode.Create;
ColorRGBA747 := ColorRGBA81;
{ .SetColor }
LineSet746.Color := ColorRGBA747;
Coordinate748 := TCoordinateNode.Create;
Coordinate748.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0058,1.6316,0.0852)]);
{ .SetCoord }
LineSet746.Coord := Coordinate748;
{ .SetGeometry }
Shape745.Geometry := LineSet746;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape745]);
Shape749 := TShapeNode.Create;
LineSet750 := TLineSetNode.Create;
LineSet750.SetVertexCount([2]);
ColorRGBA751 := TColorRGBANode.Create;
ColorRGBA751 := ColorRGBA81;
{ .SetColor }
LineSet750.Color := ColorRGBA751;
Coordinate752 := TCoordinateNode.Create;
Coordinate752.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0237,1.6171,0.0752)]);
{ .SetCoord }
LineSet750.Coord := Coordinate752;
{ .SetGeometry }
Shape749.Geometry := LineSet750;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape749]);
Shape753 := TShapeNode.Create;
LineSet754 := TLineSetNode.Create;
LineSet754.SetVertexCount([2]);
ColorRGBA755 := TColorRGBANode.Create;
ColorRGBA755 := ColorRGBA81;
{ .SetColor }
LineSet754.Color := ColorRGBA755;
Coordinate756 := TCoordinateNode.Create;
Coordinate756.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0341,1.6171,0.0752)]);
{ .SetCoord }
LineSet754.Coord := Coordinate756;
{ .SetGeometry }
Shape753.Geometry := LineSet754;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape753]);
Shape757 := TShapeNode.Create;
LineSet758 := TLineSetNode.Create;
LineSet758.SetVertexCount([2]);
ColorRGBA759 := TColorRGBANode.Create;
ColorRGBA759 := ColorRGBA81;
{ .SetColor }
LineSet758.Color := ColorRGBA759;
Coordinate760 := TCoordinateNode.Create;
Coordinate760.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0061,1.541,0.0805)]);
{ .SetCoord }
LineSet758.Coord := Coordinate760;
{ .SetGeometry }
Shape757.Geometry := LineSet758;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape757]);
Shape761 := TShapeNode.Create;
LineSet762 := TLineSetNode.Create;
LineSet762.SetVertexCount([2]);
ColorRGBA763 := TColorRGBANode.Create;
ColorRGBA763 := ColorRGBA81;
{ .SetColor }
LineSet762.Color := ColorRGBA763;
Coordinate764 := TCoordinateNode.Create;
Coordinate764.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0646,1.6347,0.0302)]);
{ .SetCoord }
LineSet762.Coord := Coordinate764;
{ .SetGeometry }
Shape761.Geometry := LineSet762;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape761]);
Shape765 := TShapeNode.Create;
LineSet766 := TLineSetNode.Create;
LineSet766.SetVertexCount([2]);
ColorRGBA767 := TColorRGBANode.Create;
ColorRGBA767 := ColorRGBA81;
{ .SetColor }
LineSet766.Color := ColorRGBA767;
Coordinate768 := TCoordinateNode.Create;
Coordinate768.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.052,1.5529,0.0347)]);
{ .SetCoord }
LineSet766.Coord := Coordinate768;
{ .SetGeometry }
Shape765.Geometry := LineSet766;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape765]);
Shape769 := TShapeNode.Create;
LineSet770 := TLineSetNode.Create;
LineSet770.SetVertexCount([2]);
ColorRGBA771 := TColorRGBANode.Create;
ColorRGBA771 := ColorRGBA81;
{ .SetColor }
LineSet770.Color := ColorRGBA771;
Coordinate772 := TCoordinateNode.Create;
Coordinate772.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0739,1.6348,0.0282)]);
{ .SetCoord }
LineSet770.Coord := Coordinate772;
{ .SetGeometry }
Shape769.Geometry := LineSet770;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape769]);
Shape773 := TShapeNode.Create;
LineSet774 := TLineSetNode.Create;
LineSet774.SetVertexCount([2]);
ColorRGBA775 := TColorRGBANode.Create;
ColorRGBA775 := ColorRGBA81;
{ .SetColor }
LineSet774.Color := ColorRGBA775;
Coordinate776 := TCoordinateNode.Create;
Coordinate776.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0631,1.553,0.033)]);
{ .SetCoord }
LineSet774.Coord := Coordinate776;
{ .SetGeometry }
Shape773.Geometry := LineSet774;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape773]);
Shape777 := TShapeNode.Create;
LineSet778 := TLineSetNode.Create;
LineSet778.SetVertexCount([2]);
ColorRGBA779 := TColorRGBANode.Create;
ColorRGBA779 := ColorRGBA81;
{ .SetColor }
LineSet778.Color := ColorRGBA779;
Coordinate780 := TCoordinateNode.Create;
Coordinate780.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0039,1.5972,-0.0796)]);
{ .SetCoord }
LineSet778.Coord := Coordinate780;
{ .SetGeometry }
Shape777.Geometry := LineSet778;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape777]);
HAnimSite781 := THAnimSiteNode.Create;
HAnimSite781.NameField := 'skull_vertex_pt';
HAnimSite781.Translation := Vector3(0.005,1.7504,0.0055);
TouchSensor782 := TTouchSensorNode.Create;
TouchSensor782.Description := 'HAnimSite skull_tip';
{ .AddChildren }
HAnimSite781.AddChildren([TouchSensor782]);
Shape783 := TShapeNode.Create;
Shape783 := Shape117;
{ .AddChildren }
HAnimSite781.AddChildren([Shape783]);
{ .AddChildren }
HAnimSegment709.AddChildren([HAnimSite781]);
HAnimSite784 := THAnimSiteNode.Create;
HAnimSite784.NameField := 'sellion_pt';
HAnimSite784.Translation := Vector3(0.0058,1.6316,0.0852);
TouchSensor785 := TTouchSensorNode.Create;
TouchSensor785.Description := 'HAnimSite sellion_pt';
{ .AddChildren }
HAnimSite784.AddChildren([TouchSensor785]);
Shape786 := TShapeNode.Create;
Shape786 := Shape117;
{ .AddChildren }
HAnimSite784.AddChildren([Shape786]);
{ .AddChildren }
HAnimSegment709.AddChildren([HAnimSite784]);
HAnimSite787 := THAnimSiteNode.Create;
HAnimSite787.NameField := 'r_infraorbitale_pt';
HAnimSite787.Translation := Vector3(-0.0237,1.6171,0.0752);
TouchSensor788 := TTouchSensorNode.Create;
TouchSensor788.Description := 'HAnimSite r_infraorbitale_pt';
{ .AddChildren }
HAnimSite787.AddChildren([TouchSensor788]);
Shape789 := TShapeNode.Create;
Shape789 := Shape117;
{ .AddChildren }
HAnimSite787.AddChildren([Shape789]);
{ .AddChildren }
HAnimSegment709.AddChildren([HAnimSite787]);
HAnimSite790 := THAnimSiteNode.Create;
HAnimSite790.NameField := 'l_infraorbitale_pt';
HAnimSite790.Translation := Vector3(0.0341,1.6171,0.0752);
TouchSensor791 := TTouchSensorNode.Create;
TouchSensor791.Description := 'HAnimSite l_infraorbitale_pt';
{ .AddChildren }
HAnimSite790.AddChildren([TouchSensor791]);
Shape792 := TShapeNode.Create;
Shape792 := Shape117;
{ .AddChildren }
HAnimSite790.AddChildren([Shape792]);
{ .AddChildren }
HAnimSegment709.AddChildren([HAnimSite790]);
HAnimSite793 := THAnimSiteNode.Create;
HAnimSite793.NameField := 'supramenton_pt';
HAnimSite793.Translation := Vector3(0.0061,1.541,0.0805);
TouchSensor794 := TTouchSensorNode.Create;
TouchSensor794.Description := 'HAnimSite supramenton_pt';
{ .AddChildren }
HAnimSite793.AddChildren([TouchSensor794]);
Shape795 := TShapeNode.Create;
Shape795 := Shape117;
{ .AddChildren }
HAnimSite793.AddChildren([Shape795]);
{ .AddChildren }
HAnimSegment709.AddChildren([HAnimSite793]);
HAnimSite796 := THAnimSiteNode.Create;
HAnimSite796.NameField := 'r_tragion_pt';
HAnimSite796.Translation := Vector3(-0.0646,1.6347,0.0302);
TouchSensor797 := TTouchSensorNode.Create;
TouchSensor797.Description := 'HAnimSite r_tragion_pt';
{ .AddChildren }
HAnimSite796.AddChildren([TouchSensor797]);
Shape798 := TShapeNode.Create;
Shape798 := Shape117;
{ .AddChildren }
HAnimSite796.AddChildren([Shape798]);
{ .AddChildren }
HAnimSegment709.AddChildren([HAnimSite796]);
HAnimSite799 := THAnimSiteNode.Create;
HAnimSite799.NameField := 'r_gonion_pt';
HAnimSite799.Translation := Vector3(-0.052,1.5529,0.0347);
TouchSensor800 := TTouchSensorNode.Create;
TouchSensor800.Description := 'HAnimSite r_gonion_pt';
{ .AddChildren }
HAnimSite799.AddChildren([TouchSensor800]);
Shape801 := TShapeNode.Create;
Shape801 := Shape117;
{ .AddChildren }
HAnimSite799.AddChildren([Shape801]);
{ .AddChildren }
HAnimSegment709.AddChildren([HAnimSite799]);
HAnimSite802 := THAnimSiteNode.Create;
HAnimSite802.NameField := 'l_tragion_pt';
HAnimSite802.Translation := Vector3(0.0739,1.6348,0.0282);
TouchSensor803 := TTouchSensorNode.Create;
TouchSensor803.Description := 'HAnimSite l_tragion_pt';
{ .AddChildren }
HAnimSite802.AddChildren([TouchSensor803]);
Shape804 := TShapeNode.Create;
Shape804 := Shape117;
{ .AddChildren }
HAnimSite802.AddChildren([Shape804]);
{ .AddChildren }
HAnimSegment709.AddChildren([HAnimSite802]);
HAnimSite805 := THAnimSiteNode.Create;
HAnimSite805.NameField := 'l_gonion_pt';
HAnimSite805.Translation := Vector3(0.0631,1.553,0.033);
TouchSensor806 := TTouchSensorNode.Create;
TouchSensor806.Description := 'HAnimSite l_gonion_pt';
{ .AddChildren }
HAnimSite805.AddChildren([TouchSensor806]);
Shape807 := TShapeNode.Create;
Shape807 := Shape117;
{ .AddChildren }
HAnimSite805.AddChildren([Shape807]);
{ .AddChildren }
HAnimSegment709.AddChildren([HAnimSite805]);
HAnimSite808 := THAnimSiteNode.Create;
HAnimSite808.NameField := 'nuchale_pt';
HAnimSite808.Translation := Vector3(0.0039,1.5972,-0.0796);
TouchSensor809 := TTouchSensorNode.Create;
TouchSensor809.Description := 'HAnimSite nuchale_pt';
{ .AddChildren }
HAnimSite808.AddChildren([TouchSensor809]);
Shape810 := TShapeNode.Create;
Shape810 := Shape117;
{ .AddChildren }
HAnimSite808.AddChildren([Shape810]);
{ .AddChildren }
HAnimSegment709.AddChildren([HAnimSite808]);
{ .AddChildren }
HAnimJoint708.AddChildren([HAnimSegment709]);
HAnimJoint811 := THAnimJointNode.Create;
HAnimJoint811.NameField := 'l_eyeball_joint';
HAnimJoint811.Center := Vector3(0.0336,1.6332,0.0502);
HAnimSegment812 := THAnimSegmentNode.Create;
HAnimSegment812.NameField := 'l_eyeball';
TouchSensor813 := TTouchSensorNode.Create;
TouchSensor813.Description := 'HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball';
{ .AddChildren }
HAnimSegment812.AddChildren([TouchSensor813]);
Transform814 := TTransformNode.Create;
Transform814.Translation := Vector3(0.0336,1.6332,0.0502);
Shape815 := TShapeNode.Create;
Shape815 := Shape54;
{ .AddChild }
Transform814.AddChildren([Shape815]);
{ .AddChildren }
HAnimSegment812.AddChildren([Transform814]);
Shape816 := TShapeNode.Create;
LineSet817 := TLineSetNode.Create;
LineSet817.SetVertexCount([2]);
ColorRGBA818 := TColorRGBANode.Create;
ColorRGBA818.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ .SetColor }
LineSet817.Color := ColorRGBA818;
Coordinate819 := TCoordinateNode.Create;
Coordinate819.SetPoint([Vector3(0.0336,1.6332,0.0502),Vector3(0.034,1.64,0.05)]);
{ .SetCoord }
LineSet817.Coord := Coordinate819;
{ .SetGeometry }
Shape816.Geometry := LineSet817;
{ .AddChildren }
HAnimSegment812.AddChildren([Shape816]);
HAnimSite820 := THAnimSiteNode.Create;
HAnimSite820.NameField := 'l_eyeball_site_view';
HAnimSite820.Translation := Vector3(0.034,1.64,0.05);
TouchSensor821 := TTouchSensorNode.Create;
TouchSensor821.Description := 'HAnimSite l_eyeball_site_view';
{ .AddChildren }
HAnimSite820.AddChildren([TouchSensor821]);
Shape822 := TShapeNode.Create;
Shape822 := Shape117;
{ .AddChildren }
HAnimSite820.AddChildren([Shape822]);
Viewpoint823 := TViewpointNode.Create;
Viewpoint823.Description := 'l_eyeball_site_viewpoint looking forward';
Viewpoint823.Position := Vector3(0,0,0);
Viewpoint823.Orientation := Vector4(0,1,0,3.141593);
{ .AddChildren }
HAnimSite820.AddChildren([Viewpoint823]);
Anchor824 := TAnchorNode.Create;
Anchor824.Description := 'HAnimSite hanim_l_eyeball_site_view Viewpoint';
Anchor824.SetUrl(['#hanim_l_eyeball_site_viewpoint']);
LOD825 := TLODNode.Create;
LOD825.ForceTransitions := True;
LOD825.SetRange([0.04]);
WorldInfo826 := TWorldInfoNode.Create;
WorldInfo826.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD825.AddChildren([WorldInfo826]);
Shape827 := TShapeNode.Create;
Appearance828 := TAppearanceNode.Create;
Material829 := TMaterialNode.Create;
Material829.DiffuseColor := Vector3(1,1,0);
Material829.Transparency := 0.3;
{ .SetMaterial }
Appearance828.Material := Material829;
{ .SetAppearance }
Shape827.Appearance := Appearance828;
IndexedFaceSet830 := TIndexedFaceSetNode.Create;
IndexedFaceSet830.CreaseAngle := 0.5;
IndexedFaceSet830.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate831 := TCoordinateNode.Create;
Coordinate831.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ .SetCoord }
IndexedFaceSet830.Coord := Coordinate831;
{ .SetGeometry }
Shape827.Geometry := IndexedFaceSet830;
{ .AddChildren }
LOD825.AddChildren([Shape827]);
{ .AddChildren }
Anchor824.AddChildren([LOD825]);
{ .AddChildren }
HAnimSite820.AddChildren([Anchor824]);
{ .AddChildren }
HAnimSegment812.AddChildren([HAnimSite820]);
{ .AddChildren }
HAnimJoint811.AddChildren([HAnimSegment812]);
{ .AddChildren }
HAnimJoint708.AddChildren([HAnimJoint811]);
HAnimJoint832 := THAnimJointNode.Create;
HAnimJoint832.NameField := 'l_eyelid_joint';
HAnimJoint832.Center := Vector3(0.0336,1.6332,0.0502);
HAnimSegment833 := THAnimSegmentNode.Create;
HAnimSegment833.NameField := 'l_eyelid';
TouchSensor834 := TTouchSensorNode.Create;
TouchSensor834.Description := 'HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid';
{ .AddChildren }
HAnimSegment833.AddChildren([TouchSensor834]);
Transform835 := TTransformNode.Create;
Transform835.Translation := Vector3(0.0336,1.6332,0.0502);
Shape836 := TShapeNode.Create;
Shape836 := Shape54;
{ .AddChild }
Transform835.AddChildren([Shape836]);
{ .AddChildren }
HAnimSegment833.AddChildren([Transform835]);
{ .AddChildren }
HAnimJoint832.AddChildren([HAnimSegment833]);
{ .AddChildren }
HAnimJoint708.AddChildren([HAnimJoint832]);
HAnimJoint837 := THAnimJointNode.Create;
HAnimJoint837.NameField := 'l_eyebrow_joint';
HAnimJoint837.Center := Vector3(0.0336,1.635,0.0506);
HAnimSegment838 := THAnimSegmentNode.Create;
HAnimSegment838.NameField := 'l_eyebrow';
TouchSensor839 := TTouchSensorNode.Create;
TouchSensor839.Description := 'HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow';
{ .AddChildren }
HAnimSegment838.AddChildren([TouchSensor839]);
Transform840 := TTransformNode.Create;
Transform840.Translation := Vector3(0.0336,1.635,0.0506);
Shape841 := TShapeNode.Create;
Shape841 := Shape54;
{ .AddChild }
Transform840.AddChildren([Shape841]);
{ .AddChildren }
HAnimSegment838.AddChildren([Transform840]);
{ .AddChildren }
HAnimJoint837.AddChildren([HAnimSegment838]);
{ .AddChildren }
HAnimJoint708.AddChildren([HAnimJoint837]);
HAnimJoint842 := THAnimJointNode.Create;
HAnimJoint842.NameField := 'r_eyeball_joint';
HAnimJoint842.Center := Vector3(-0.0336,1.6332,0.0502);
HAnimSegment843 := THAnimSegmentNode.Create;
HAnimSegment843.NameField := 'r_eyeball';
TouchSensor844 := TTouchSensorNode.Create;
TouchSensor844.Description := 'HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball';
{ .AddChildren }
HAnimSegment843.AddChildren([TouchSensor844]);
Transform845 := TTransformNode.Create;
Transform845.Translation := Vector3(-0.0336,1.6332,0.0502);
Shape846 := TShapeNode.Create;
Shape846 := Shape54;
{ .AddChild }
Transform845.AddChildren([Shape846]);
{ .AddChildren }
HAnimSegment843.AddChildren([Transform845]);
Shape847 := TShapeNode.Create;
LineSet848 := TLineSetNode.Create;
LineSet848.SetVertexCount([2]);
ColorRGBA849 := TColorRGBANode.Create;
ColorRGBA849 := ColorRGBA818;
{ .SetColor }
LineSet848.Color := ColorRGBA849;
Coordinate850 := TCoordinateNode.Create;
Coordinate850.SetPoint([Vector3(-0.0336,1.6332,0.0502),Vector3(-0.034,1.64,0.05)]);
{ .SetCoord }
LineSet848.Coord := Coordinate850;
{ .SetGeometry }
Shape847.Geometry := LineSet848;
{ .AddChildren }
HAnimSegment843.AddChildren([Shape847]);
HAnimSite851 := THAnimSiteNode.Create;
HAnimSite851.NameField := 'r_eyeball_site_view';
HAnimSite851.Translation := Vector3(-0.034,1.64,0.05);
TouchSensor852 := TTouchSensorNode.Create;
TouchSensor852.Description := 'HAnimSite r_eyeball_site_view';
{ .AddChildren }
HAnimSite851.AddChildren([TouchSensor852]);
Shape853 := TShapeNode.Create;
Shape853 := Shape117;
{ .AddChildren }
HAnimSite851.AddChildren([Shape853]);
Viewpoint854 := TViewpointNode.Create;
Viewpoint854.Description := 'r_eyeball_site_viewpoint looking forward';
Viewpoint854.Position := Vector3(0,0,0);
Viewpoint854.Orientation := Vector4(0,1,0,3.141593);
{ .AddChildren }
HAnimSite851.AddChildren([Viewpoint854]);
Anchor855 := TAnchorNode.Create;
Anchor855.Description := 'HAnimSite hanim_r_eyeball_site_view Viewpoint';
Anchor855.SetUrl(['#hanim_r_eyeball_site_viewpoint']);
LOD856 := TLODNode.Create;
LOD856.ForceTransitions := True;
LOD856.SetRange([0.04]);
WorldInfo857 := TWorldInfoNode.Create;
WorldInfo857.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD856.AddChildren([WorldInfo857]);
Shape858 := TShapeNode.Create;
Shape858 := Shape827;
{ .AddChildren }
LOD856.AddChildren([Shape858]);
{ .AddChildren }
Anchor855.AddChildren([LOD856]);
{ .AddChildren }
HAnimSite851.AddChildren([Anchor855]);
{ .AddChildren }
HAnimSegment843.AddChildren([HAnimSite851]);
{ .AddChildren }
HAnimJoint842.AddChildren([HAnimSegment843]);
{ .AddChildren }
HAnimJoint708.AddChildren([HAnimJoint842]);
HAnimJoint859 := THAnimJointNode.Create;
HAnimJoint859.NameField := 'r_eyelid_joint';
HAnimJoint859.Center := Vector3(-0.0336,1.6332,0.0502);
HAnimSegment860 := THAnimSegmentNode.Create;
HAnimSegment860.NameField := 'r_eyelid';
TouchSensor861 := TTouchSensorNode.Create;
TouchSensor861.Description := 'HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid';
{ .AddChildren }
HAnimSegment860.AddChildren([TouchSensor861]);
Transform862 := TTransformNode.Create;
Transform862.Translation := Vector3(-0.0336,1.6332,0.0502);
Shape863 := TShapeNode.Create;
Shape863 := Shape54;
{ .AddChild }
Transform862.AddChildren([Shape863]);
{ .AddChildren }
HAnimSegment860.AddChildren([Transform862]);
{ .AddChildren }
HAnimJoint859.AddChildren([HAnimSegment860]);
{ .AddChildren }
HAnimJoint708.AddChildren([HAnimJoint859]);
HAnimJoint864 := THAnimJointNode.Create;
HAnimJoint864.NameField := 'r_eyebrow_joint';
HAnimJoint864.Center := Vector3(-0.0336,1.635,0.0506);
HAnimSegment865 := THAnimSegmentNode.Create;
HAnimSegment865.NameField := 'r_eyebrow';
TouchSensor866 := TTouchSensorNode.Create;
TouchSensor866.Description := 'HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow';
{ .AddChildren }
HAnimSegment865.AddChildren([TouchSensor866]);
Transform867 := TTransformNode.Create;
Transform867.Translation := Vector3(-0.0336,1.635,0.0506);
Shape868 := TShapeNode.Create;
Shape868 := Shape54;
{ .AddChild }
Transform867.AddChildren([Shape868]);
{ .AddChildren }
HAnimSegment865.AddChildren([Transform867]);
{ .AddChildren }
HAnimJoint864.AddChildren([HAnimSegment865]);
{ .AddChildren }
HAnimJoint708.AddChildren([HAnimJoint864]);
HAnimJoint869 := THAnimJointNode.Create;
HAnimJoint869.NameField := 'temporomandibular';
HAnimJoint869.Center := Vector3(0,1.63,0.015);
HAnimSegment870 := THAnimSegmentNode.Create;
HAnimSegment870.NameField := 'jaw';
TouchSensor871 := TTouchSensorNode.Create;
TouchSensor871.Description := 'HAnimJoint temporomandibular, HAnimSegment jaw';
{ .AddChildren }
HAnimSegment870.AddChildren([TouchSensor871]);
Transform872 := TTransformNode.Create;
Transform872.Translation := Vector3(0,1.63,0.015);
Shape873 := TShapeNode.Create;
Shape873 := Shape54;
{ .AddChild }
Transform872.AddChildren([Shape873]);
{ .AddChildren }
HAnimSegment870.AddChildren([Transform872]);
Shape874 := TShapeNode.Create;
LineSet875 := TLineSetNode.Create;
LineSet875.SetVertexCount([2]);
ColorRGBA876 := TColorRGBANode.Create;
ColorRGBA876 := ColorRGBA81;
{ .SetColor }
LineSet875.Color := ColorRGBA876;
Coordinate877 := TCoordinateNode.Create;
Coordinate877.SetPoint([Vector3(0,1.63,0.015),Vector3(0.045,1.63,0)]);
{ .SetCoord }
LineSet875.Coord := Coordinate877;
{ .SetGeometry }
Shape874.Geometry := LineSet875;
{ .AddChildren }
HAnimSegment870.AddChildren([Shape874]);
Shape878 := TShapeNode.Create;
LineSet879 := TLineSetNode.Create;
LineSet879.SetVertexCount([2]);
ColorRGBA880 := TColorRGBANode.Create;
ColorRGBA880 := ColorRGBA81;
{ .SetColor }
LineSet879.Color := ColorRGBA880;
Coordinate881 := TCoordinateNode.Create;
Coordinate881.SetPoint([Vector3(0,1.63,0.015),Vector3(-0.045,1.63,0)]);
{ .SetCoord }
LineSet879.Coord := Coordinate881;
{ .SetGeometry }
Shape878.Geometry := LineSet879;
{ .AddChildren }
HAnimSegment870.AddChildren([Shape878]);
HAnimSite882 := THAnimSiteNode.Create;
HAnimSite882.NameField := 'temporomandibular_l_site_pt';
HAnimSite882.Translation := Vector3(0.045,1.63,0);
TouchSensor883 := TTouchSensorNode.Create;
TouchSensor883.Description := 'HAnimSite temporomandibular_l_site_pt';
{ .AddChildren }
HAnimSite882.AddChildren([TouchSensor883]);
Shape884 := TShapeNode.Create;
Shape884 := Shape117;
{ .AddChildren }
HAnimSite882.AddChildren([Shape884]);
{ .AddChildren }
HAnimSegment870.AddChildren([HAnimSite882]);
HAnimSite885 := THAnimSiteNode.Create;
HAnimSite885.NameField := 'temporomandibular_r_site_pt';
HAnimSite885.Translation := Vector3(-0.045,1.63,0);
TouchSensor886 := TTouchSensorNode.Create;
TouchSensor886.Description := 'HAnimSite temporomandibular_r_site_pt';
{ .AddChildren }
HAnimSite885.AddChildren([TouchSensor886]);
Shape887 := TShapeNode.Create;
Shape887 := Shape117;
{ .AddChildren }
HAnimSite885.AddChildren([Shape887]);
{ .AddChildren }
HAnimSegment870.AddChildren([HAnimSite885]);
{ .AddChildren }
HAnimJoint869.AddChildren([HAnimSegment870]);
{ .AddChildren }
HAnimJoint708.AddChildren([HAnimJoint869]);
{ .AddChildren }
HAnimJoint699.AddChildren([HAnimJoint708]);
{ .AddChildren }
HAnimJoint690.AddChildren([HAnimJoint699]);
{ .AddChildren }
HAnimJoint681.AddChildren([HAnimJoint690]);
{ .AddChildren }
HAnimJoint672.AddChildren([HAnimJoint681]);
{ .AddChildren }
HAnimJoint663.AddChildren([HAnimJoint672]);
{ .AddChildren }
HAnimJoint654.AddChildren([HAnimJoint663]);
{ .AddChildren }
HAnimJoint631.AddChildren([HAnimJoint654]);
{ .AddChildren }
HAnimJoint600.AddChildren([HAnimJoint631]);
HAnimJoint888 := THAnimJointNode.Create;
HAnimJoint888.NameField := 'l_sternoclavicular';
HAnimJoint888.Center := Vector3(0.082,1.4488,-0.0353);
HAnimSegment889 := THAnimSegmentNode.Create;
HAnimSegment889.NameField := 'l_clavicle';
TouchSensor890 := TTouchSensorNode.Create;
TouchSensor890.Description := 'HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle';
{ .AddChildren }
HAnimSegment889.AddChildren([TouchSensor890]);
Transform891 := TTransformNode.Create;
Transform891.Translation := Vector3(0.082,1.4488,-0.0353);
Shape892 := TShapeNode.Create;
Shape892 := Shape54;
{ .AddChild }
Transform891.AddChildren([Shape892]);
{ .AddChildren }
HAnimSegment889.AddChildren([Transform891]);
Shape893 := TShapeNode.Create;
LineSet894 := TLineSetNode.Create;
LineSet894.SetVertexCount([2]);
ColorRGBA895 := TColorRGBANode.Create;
ColorRGBA895 := ColorRGBA60;
{ .SetColor }
LineSet894.Color := ColorRGBA895;
Coordinate896 := TCoordinateNode.Create;
Coordinate896.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ .SetCoord }
LineSet894.Coord := Coordinate896;
{ .SetGeometry }
Shape893.Geometry := LineSet894;
{ .AddChildren }
HAnimSegment889.AddChildren([Shape893]);
Shape897 := TShapeNode.Create;
LineSet898 := TLineSetNode.Create;
LineSet898.SetVertexCount([2]);
ColorRGBA899 := TColorRGBANode.Create;
ColorRGBA899 := ColorRGBA81;
{ .SetColor }
LineSet898.Color := ColorRGBA899;
Coordinate900 := TCoordinateNode.Create;
Coordinate900.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0271,1.4943,0.0394)]);
{ .SetCoord }
LineSet898.Coord := Coordinate900;
{ .SetGeometry }
Shape897.Geometry := LineSet898;
{ .AddChildren }
HAnimSegment889.AddChildren([Shape897]);
Shape901 := TShapeNode.Create;
LineSet902 := TLineSetNode.Create;
LineSet902.SetVertexCount([2]);
ColorRGBA903 := TColorRGBANode.Create;
ColorRGBA903 := ColorRGBA81;
{ .SetColor }
LineSet902.Color := ColorRGBA903;
Coordinate904 := TCoordinateNode.Create;
Coordinate904.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.2032,1.476,-0.049)]);
{ .SetCoord }
LineSet902.Coord := Coordinate904;
{ .SetGeometry }
Shape901.Geometry := LineSet902;
{ .AddChildren }
HAnimSegment889.AddChildren([Shape901]);
Shape905 := TShapeNode.Create;
LineSet906 := TLineSetNode.Create;
LineSet906.SetVertexCount([2]);
ColorRGBA907 := TColorRGBANode.Create;
ColorRGBA907 := ColorRGBA81;
{ .SetColor }
LineSet906.Color := ColorRGBA907;
Coordinate908 := TCoordinateNode.Create;
Coordinate908.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.1777,1.4065,-0.0075)]);
{ .SetCoord }
LineSet906.Coord := Coordinate908;
{ .SetGeometry }
Shape905.Geometry := LineSet906;
{ .AddChildren }
HAnimSegment889.AddChildren([Shape905]);
Shape909 := TShapeNode.Create;
LineSet910 := TLineSetNode.Create;
LineSet910.SetVertexCount([2]);
ColorRGBA911 := TColorRGBANode.Create;
ColorRGBA911 := ColorRGBA81;
{ .SetColor }
LineSet910.Color := ColorRGBA911;
Coordinate912 := TCoordinateNode.Create;
Coordinate912.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.1706,1.4072,-0.0875)]);
{ .SetCoord }
LineSet910.Coord := Coordinate912;
{ .SetGeometry }
Shape909.Geometry := LineSet910;
{ .AddChildren }
HAnimSegment889.AddChildren([Shape909]);
HAnimSite913 := THAnimSiteNode.Create;
HAnimSite913.NameField := 'l_clavicle_pt';
HAnimSite913.Translation := Vector3(0.0271,1.4943,0.0394);
TouchSensor914 := TTouchSensorNode.Create;
TouchSensor914.Description := 'HAnimSite l_clavicale_pt';
{ .AddChildren }
HAnimSite913.AddChildren([TouchSensor914]);
Shape915 := TShapeNode.Create;
Shape915 := Shape117;
{ .AddChildren }
HAnimSite913.AddChildren([Shape915]);
{ .AddChildren }
HAnimSegment889.AddChildren([HAnimSite913]);
HAnimSite916 := THAnimSiteNode.Create;
HAnimSite916.NameField := 'l_acromion_pt';
HAnimSite916.Translation := Vector3(0.2032,1.476,-0.049);
TouchSensor917 := TTouchSensorNode.Create;
TouchSensor917.Description := 'HAnimSite l_acromion_pt';
{ .AddChildren }
HAnimSite916.AddChildren([TouchSensor917]);
Shape918 := TShapeNode.Create;
Shape918 := Shape117;
{ .AddChildren }
HAnimSite916.AddChildren([Shape918]);
{ .AddChildren }
HAnimSegment889.AddChildren([HAnimSite916]);
HAnimSite919 := THAnimSiteNode.Create;
HAnimSite919.NameField := 'l_axilla_proximal_pt';
HAnimSite919.Translation := Vector3(0.1777,1.4065,-0.0075);
TouchSensor920 := TTouchSensorNode.Create;
TouchSensor920.Description := 'HAnimSite l_axilla_ant_pt';
{ .AddChildren }
HAnimSite919.AddChildren([TouchSensor920]);
Shape921 := TShapeNode.Create;
Shape921 := Shape117;
{ .AddChildren }
HAnimSite919.AddChildren([Shape921]);
{ .AddChildren }
HAnimSegment889.AddChildren([HAnimSite919]);
HAnimSite922 := THAnimSiteNode.Create;
HAnimSite922.NameField := 'l_axilla_distal_pt';
HAnimSite922.Translation := Vector3(0.1706,1.4072,-0.0875);
TouchSensor923 := TTouchSensorNode.Create;
TouchSensor923.Description := 'HAnimSite l_axilla_post_pt';
{ .AddChildren }
HAnimSite922.AddChildren([TouchSensor923]);
Shape924 := TShapeNode.Create;
Shape924 := Shape117;
{ .AddChildren }
HAnimSite922.AddChildren([Shape924]);
{ .AddChildren }
HAnimSegment889.AddChildren([HAnimSite922]);
{ .AddChildren }
HAnimJoint888.AddChildren([HAnimSegment889]);
HAnimJoint925 := THAnimJointNode.Create;
HAnimJoint925.NameField := 'l_acromioclavicular';
HAnimJoint925.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimSegment926 := THAnimSegmentNode.Create;
HAnimSegment926.NameField := 'l_scapula';
TouchSensor927 := TTouchSensorNode.Create;
TouchSensor927.Description := 'HAnimJoint l_acromioclavicular, HAnimSegment l_scapula';
{ .AddChildren }
HAnimSegment926.AddChildren([TouchSensor927]);
Transform928 := TTransformNode.Create;
Transform928.Translation := Vector3(0.0962,1.4269,-0.0424);
Shape929 := TShapeNode.Create;
Shape929 := Shape54;
{ .AddChild }
Transform928.AddChildren([Shape929]);
{ .AddChildren }
HAnimSegment926.AddChildren([Transform928]);
Shape930 := TShapeNode.Create;
LineSet931 := TLineSetNode.Create;
LineSet931.SetVertexCount([2]);
ColorRGBA932 := TColorRGBANode.Create;
ColorRGBA932 := ColorRGBA60;
{ .SetColor }
LineSet931.Color := ColorRGBA932;
Coordinate933 := TCoordinateNode.Create;
Coordinate933.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2029,1.4376,-0.0387)]);
{ .SetCoord }
LineSet931.Coord := Coordinate933;
{ .SetGeometry }
Shape930.Geometry := LineSet931;
{ .AddChildren }
HAnimSegment926.AddChildren([Shape930]);
{ .AddChildren }
HAnimJoint925.AddChildren([HAnimSegment926]);
HAnimJoint934 := THAnimJointNode.Create;
HAnimJoint934.NameField := 'l_shoulder';
HAnimJoint934.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimSegment935 := THAnimSegmentNode.Create;
HAnimSegment935.NameField := 'l_upperarm';
TouchSensor936 := TTouchSensorNode.Create;
TouchSensor936.Description := 'HAnimJoint l_shoulder, HAnimSegment l_upperarm';
{ .AddChildren }
HAnimSegment935.AddChildren([TouchSensor936]);
Transform937 := TTransformNode.Create;
Transform937.Translation := Vector3(0.2029,1.4376,-0.0387);
Shape938 := TShapeNode.Create;
Shape938 := Shape54;
{ .AddChild }
Transform937.AddChildren([Shape938]);
{ .AddChildren }
HAnimSegment935.AddChildren([Transform937]);
Shape939 := TShapeNode.Create;
LineSet940 := TLineSetNode.Create;
LineSet940.SetVertexCount([2]);
ColorRGBA941 := TColorRGBANode.Create;
ColorRGBA941 := ColorRGBA60;
{ .SetColor }
LineSet940.Color := ColorRGBA941;
Coordinate942 := TCoordinateNode.Create;
Coordinate942.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.2014,1.1357,-0.0682)]);
{ .SetCoord }
LineSet940.Coord := Coordinate942;
{ .SetGeometry }
Shape939.Geometry := LineSet940;
{ .AddChildren }
HAnimSegment935.AddChildren([Shape939]);
Shape943 := TShapeNode.Create;
LineSet944 := TLineSetNode.Create;
LineSet944.SetVertexCount([2]);
ColorRGBA945 := TColorRGBANode.Create;
ColorRGBA945 := ColorRGBA81;
{ .SetColor }
LineSet944.Color := ColorRGBA945;
Coordinate946 := TCoordinateNode.Create;
Coordinate946.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.228,1.1482,-0.11)]);
{ .SetCoord }
LineSet944.Coord := Coordinate946;
{ .SetGeometry }
Shape943.Geometry := LineSet944;
{ .AddChildren }
HAnimSegment935.AddChildren([Shape943]);
HAnimSite947 := THAnimSiteNode.Create;
HAnimSite947.NameField := 'l_humeral_lateral_epicondyle_pt';
HAnimSite947.Translation := Vector3(0.228,1.1482,-0.11);
TouchSensor948 := TTouchSensorNode.Create;
TouchSensor948.Description := 'HAnimSite l_humeral_lateral_epicn_pt';
{ .AddChildren }
HAnimSite947.AddChildren([TouchSensor948]);
Shape949 := TShapeNode.Create;
Shape949 := Shape117;
{ .AddChildren }
HAnimSite947.AddChildren([Shape949]);
{ .AddChildren }
HAnimSegment935.AddChildren([HAnimSite947]);
{ .AddChildren }
HAnimJoint934.AddChildren([HAnimSegment935]);
HAnimJoint950 := THAnimJointNode.Create;
HAnimJoint950.NameField := 'l_elbow';
HAnimJoint950.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimSegment951 := THAnimSegmentNode.Create;
HAnimSegment951.NameField := 'l_forearm';
TouchSensor952 := TTouchSensorNode.Create;
TouchSensor952.Description := 'HAnimJoint l_elbow, HAnimSegment l_forearm';
{ .AddChildren }
HAnimSegment951.AddChildren([TouchSensor952]);
Transform953 := TTransformNode.Create;
Transform953.Translation := Vector3(0.2014,1.1357,-0.0682);
Shape954 := TShapeNode.Create;
Shape954 := Shape54;
{ .AddChild }
Transform953.AddChildren([Shape954]);
{ .AddChildren }
HAnimSegment951.AddChildren([Transform953]);
Shape955 := TShapeNode.Create;
LineSet956 := TLineSetNode.Create;
LineSet956.SetVertexCount([2]);
ColorRGBA957 := TColorRGBANode.Create;
ColorRGBA957 := ColorRGBA60;
{ .SetColor }
LineSet956.Color := ColorRGBA957;
Coordinate958 := TCoordinateNode.Create;
Coordinate958.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1984,0.8663,-0.0583)]);
{ .SetCoord }
LineSet956.Coord := Coordinate958;
{ .SetGeometry }
Shape955.Geometry := LineSet956;
{ .AddChildren }
HAnimSegment951.AddChildren([Shape955]);
Shape959 := TShapeNode.Create;
LineSet960 := TLineSetNode.Create;
LineSet960.SetVertexCount([2]);
ColorRGBA961 := TColorRGBANode.Create;
ColorRGBA961 := ColorRGBA81;
{ .SetColor }
LineSet960.Color := ColorRGBA961;
Coordinate962 := TCoordinateNode.Create;
Coordinate962.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1901,0.8645,-0.0415)]);
{ .SetCoord }
LineSet960.Coord := Coordinate962;
{ .SetGeometry }
Shape959.Geometry := LineSet960;
{ .AddChildren }
HAnimSegment951.AddChildren([Shape959]);
Shape963 := TShapeNode.Create;
LineSet964 := TLineSetNode.Create;
LineSet964.SetVertexCount([2]);
ColorRGBA965 := TColorRGBANode.Create;
ColorRGBA965 := ColorRGBA81;
{ .SetColor }
LineSet964.Color := ColorRGBA965;
Coordinate966 := TCoordinateNode.Create;
Coordinate966.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1962,1.1375,-0.1123)]);
{ .SetCoord }
LineSet964.Coord := Coordinate966;
{ .SetGeometry }
Shape963.Geometry := LineSet964;
{ .AddChildren }
HAnimSegment951.AddChildren([Shape963]);
Shape967 := TShapeNode.Create;
LineSet968 := TLineSetNode.Create;
LineSet968.SetVertexCount([2]);
ColorRGBA969 := TColorRGBANode.Create;
ColorRGBA969 := ColorRGBA81;
{ .SetColor }
LineSet968.Color := ColorRGBA969;
Coordinate970 := TCoordinateNode.Create;
Coordinate970.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1735,1.1272,-0.1113)]);
{ .SetCoord }
LineSet968.Coord := Coordinate970;
{ .SetGeometry }
Shape967.Geometry := LineSet968;
{ .AddChildren }
HAnimSegment951.AddChildren([Shape967]);
Shape971 := TShapeNode.Create;
LineSet972 := TLineSetNode.Create;
LineSet972.SetVertexCount([2]);
ColorRGBA973 := TColorRGBANode.Create;
ColorRGBA973 := ColorRGBA81;
{ .SetColor }
LineSet972.Color := ColorRGBA973;
Coordinate974 := TCoordinateNode.Create;
Coordinate974.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.2182,1.1212,-0.1167)]);
{ .SetCoord }
LineSet972.Coord := Coordinate974;
{ .SetGeometry }
Shape971.Geometry := LineSet972;
{ .AddChildren }
HAnimSegment951.AddChildren([Shape971]);
HAnimSite975 := THAnimSiteNode.Create;
HAnimSite975.NameField := 'l_radial_styloid_pt';
HAnimSite975.Translation := Vector3(0.1901,0.8645,-0.0415);
TouchSensor976 := TTouchSensorNode.Create;
TouchSensor976.Description := 'HAnimSite l_radial_styloid_pt';
{ .AddChildren }
HAnimSite975.AddChildren([TouchSensor976]);
Shape977 := TShapeNode.Create;
Shape977 := Shape117;
{ .AddChildren }
HAnimSite975.AddChildren([Shape977]);
{ .AddChildren }
HAnimSegment951.AddChildren([HAnimSite975]);
HAnimSite978 := THAnimSiteNode.Create;
HAnimSite978.NameField := 'l_olecranon_pt';
HAnimSite978.Translation := Vector3(0.1962,1.1375,-0.1123);
TouchSensor979 := TTouchSensorNode.Create;
TouchSensor979.Description := 'HAnimSite l_olecranon_pt';
{ .AddChildren }
HAnimSite978.AddChildren([TouchSensor979]);
Shape980 := TShapeNode.Create;
Shape980 := Shape117;
{ .AddChildren }
HAnimSite978.AddChildren([Shape980]);
{ .AddChildren }
HAnimSegment951.AddChildren([HAnimSite978]);
HAnimSite981 := THAnimSiteNode.Create;
HAnimSite981.NameField := 'l_humeral_medial_epicondyle_pt';
HAnimSite981.Translation := Vector3(0.1735,1.1272,-0.1113);
TouchSensor982 := TTouchSensorNode.Create;
TouchSensor982.Description := 'HAnimSite l_humeral_medial_epicn_pt';
{ .AddChildren }
HAnimSite981.AddChildren([TouchSensor982]);
Shape983 := TShapeNode.Create;
Shape983 := Shape117;
{ .AddChildren }
HAnimSite981.AddChildren([Shape983]);
{ .AddChildren }
HAnimSegment951.AddChildren([HAnimSite981]);
HAnimSite984 := THAnimSiteNode.Create;
HAnimSite984.NameField := 'l_radiale_pt';
HAnimSite984.Translation := Vector3(0.2182,1.1212,-0.1167);
TouchSensor985 := TTouchSensorNode.Create;
TouchSensor985.Description := 'HAnimSite l_radiale_pt';
{ .AddChildren }
HAnimSite984.AddChildren([TouchSensor985]);
Shape986 := TShapeNode.Create;
Shape986 := Shape117;
{ .AddChildren }
HAnimSite984.AddChildren([Shape986]);
{ .AddChildren }
HAnimSegment951.AddChildren([HAnimSite984]);
{ .AddChildren }
HAnimJoint950.AddChildren([HAnimSegment951]);
HAnimJoint987 := THAnimJointNode.Create;
HAnimJoint987.NameField := 'l_radiocarpal';
HAnimJoint987.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimSegment988 := THAnimSegmentNode.Create;
HAnimSegment988.NameField := 'l_carpal';
TouchSensor989 := TTouchSensorNode.Create;
TouchSensor989.Description := 'HAnimJoint l_radiocarpal, HAnimSegment l_carpal';
{ .AddChildren }
HAnimSegment988.AddChildren([TouchSensor989]);
Transform990 := TTransformNode.Create;
Transform990.Translation := Vector3(0.1984,0.8663,-0.0583);
Shape991 := TShapeNode.Create;
Shape991 := Shape54;
{ .AddChild }
Transform990.AddChildren([Shape991]);
{ .AddChildren }
HAnimSegment988.AddChildren([Transform990]);
Shape992 := TShapeNode.Create;
LineSet993 := TLineSetNode.Create;
LineSet993.SetVertexCount([2]);
ColorRGBA994 := TColorRGBANode.Create;
ColorRGBA994 := ColorRGBA60;
{ .SetColor }
LineSet993.Color := ColorRGBA994;
Coordinate995 := TCoordinateNode.Create;
Coordinate995.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1924,0.8472,-0.0534)]);
{ .SetCoord }
LineSet993.Coord := Coordinate995;
{ .SetGeometry }
Shape992.Geometry := LineSet993;
{ .AddChildren }
HAnimSegment988.AddChildren([Shape992]);
Shape996 := TShapeNode.Create;
LineSet997 := TLineSetNode.Create;
LineSet997.SetVertexCount([2]);
ColorRGBA998 := TColorRGBANode.Create;
ColorRGBA998 := ColorRGBA60;
{ .SetColor }
LineSet997.Color := ColorRGBA998;
Coordinate999 := TCoordinateNode.Create;
Coordinate999.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1983,0.8024,-0.028)]);
{ .SetCoord }
LineSet997.Coord := Coordinate999;
{ .SetGeometry }
Shape996.Geometry := LineSet997;
{ .AddChildren }
HAnimSegment988.AddChildren([Shape996]);
Shape1000 := TShapeNode.Create;
LineSet1001 := TLineSetNode.Create;
LineSet1001.SetVertexCount([2]);
ColorRGBA1002 := TColorRGBANode.Create;
ColorRGBA1002 := ColorRGBA60;
{ .SetColor }
LineSet1001.Color := ColorRGBA1002;
Coordinate1003 := TCoordinateNode.Create;
Coordinate1003.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1987,0.8029,-0.053)]);
{ .SetCoord }
LineSet1001.Coord := Coordinate1003;
{ .SetGeometry }
Shape1000.Geometry := LineSet1001;
{ .AddChildren }
HAnimSegment988.AddChildren([Shape1000]);
Shape1004 := TShapeNode.Create;
LineSet1005 := TLineSetNode.Create;
LineSet1005.SetVertexCount([2]);
ColorRGBA1006 := TColorRGBANode.Create;
ColorRGBA1006 := ColorRGBA60;
{ .SetColor }
LineSet1005.Color := ColorRGBA1006;
Coordinate1007 := TCoordinateNode.Create;
Coordinate1007.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1956,0.8019,-0.0794)]);
{ .SetCoord }
LineSet1005.Coord := Coordinate1007;
{ .SetGeometry }
Shape1004.Geometry := LineSet1005;
{ .AddChildren }
HAnimSegment988.AddChildren([Shape1004]);
Shape1008 := TShapeNode.Create;
LineSet1009 := TLineSetNode.Create;
LineSet1009.SetVertexCount([2]);
ColorRGBA1010 := TColorRGBANode.Create;
ColorRGBA1010 := ColorRGBA60;
{ .SetColor }
LineSet1009.Color := ColorRGBA1010;
Coordinate1011 := TCoordinateNode.Create;
Coordinate1011.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1925,0.8066,-0.1036)]);
{ .SetCoord }
LineSet1009.Coord := Coordinate1011;
{ .SetGeometry }
Shape1008.Geometry := LineSet1009;
{ .AddChildren }
HAnimSegment988.AddChildren([Shape1008]);
Shape1012 := TShapeNode.Create;
LineSet1013 := TLineSetNode.Create;
LineSet1013.SetVertexCount([2]);
ColorRGBA1014 := TColorRGBANode.Create;
ColorRGBA1014 := ColorRGBA81;
{ .SetColor }
LineSet1013.Color := ColorRGBA1014;
Coordinate1015 := TCoordinateNode.Create;
Coordinate1015.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.2009,0.8139,-0.0237)]);
{ .SetCoord }
LineSet1013.Coord := Coordinate1015;
{ .SetGeometry }
Shape1012.Geometry := LineSet1013;
{ .AddChildren }
HAnimSegment988.AddChildren([Shape1012]);
Shape1016 := TShapeNode.Create;
LineSet1017 := TLineSetNode.Create;
LineSet1017.SetVertexCount([2]);
ColorRGBA1018 := TColorRGBANode.Create;
ColorRGBA1018 := ColorRGBA81;
{ .SetColor }
LineSet1017.Color := ColorRGBA1018;
Coordinate1019 := TCoordinateNode.Create;
Coordinate1019.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.2142,0.8529,-0.0648)]);
{ .SetCoord }
LineSet1017.Coord := Coordinate1019;
{ .SetGeometry }
Shape1016.Geometry := LineSet1017;
{ .AddChildren }
HAnimSegment988.AddChildren([Shape1016]);
Shape1020 := TShapeNode.Create;
LineSet1021 := TLineSetNode.Create;
LineSet1021.SetVertexCount([2]);
ColorRGBA1022 := TColorRGBANode.Create;
ColorRGBA1022 := ColorRGBA81;
{ .SetColor }
LineSet1021.Color := ColorRGBA1022;
Coordinate1023 := TCoordinateNode.Create;
Coordinate1023.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1929,0.786,-0.1122)]);
{ .SetCoord }
LineSet1021.Coord := Coordinate1023;
{ .SetGeometry }
Shape1020.Geometry := LineSet1021;
{ .AddChildren }
HAnimSegment988.AddChildren([Shape1020]);
Shape1024 := TShapeNode.Create;
LineSet1025 := TLineSetNode.Create;
LineSet1025.SetVertexCount([2]);
ColorRGBA1026 := TColorRGBANode.Create;
ColorRGBA1026 := ColorRGBA818;
{ .SetColor }
LineSet1025.Color := ColorRGBA1026;
Coordinate1027 := TCoordinateNode.Create;
Coordinate1027.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.3,0.75,0.45)]);
{ .SetCoord }
LineSet1025.Coord := Coordinate1027;
{ .SetGeometry }
Shape1024.Geometry := LineSet1025;
{ .AddChildren }
HAnimSegment988.AddChildren([Shape1024]);
HAnimSite1028 := THAnimSiteNode.Create;
HAnimSite1028.NameField := 'l_metacarpal_phalanx_2_pt';
HAnimSite1028.Translation := Vector3(0.2009,0.8139,-0.0237);
TouchSensor1029 := TTouchSensorNode.Create;
TouchSensor1029.Description := 'HAnimSite l_metacarpal_pha2_pt';
{ .AddChildren }
HAnimSite1028.AddChildren([TouchSensor1029]);
Shape1030 := TShapeNode.Create;
Shape1030 := Shape117;
{ .AddChildren }
HAnimSite1028.AddChildren([Shape1030]);
{ .AddChildren }
HAnimSegment988.AddChildren([HAnimSite1028]);
HAnimSite1031 := THAnimSiteNode.Create;
HAnimSite1031.NameField := 'l_ulnar_styloid_pt';
HAnimSite1031.Translation := Vector3(0.2142,0.8529,-0.0648);
TouchSensor1032 := TTouchSensorNode.Create;
TouchSensor1032.Description := 'HAnimSite l_ulnar_styloid_pt';
{ .AddChildren }
HAnimSite1031.AddChildren([TouchSensor1032]);
Shape1033 := TShapeNode.Create;
Shape1033 := Shape117;
{ .AddChildren }
HAnimSite1031.AddChildren([Shape1033]);
{ .AddChildren }
HAnimSegment988.AddChildren([HAnimSite1031]);
HAnimSite1034 := THAnimSiteNode.Create;
HAnimSite1034.NameField := 'l_metacarpal_phalanx_5_pt';
HAnimSite1034.Translation := Vector3(0.1929,0.786,-0.1122);
TouchSensor1035 := TTouchSensorNode.Create;
TouchSensor1035.Description := 'HAnimSite l_metacarpal_pha5_pt';
{ .AddChildren }
HAnimSite1034.AddChildren([TouchSensor1035]);
Shape1036 := TShapeNode.Create;
Shape1036 := Shape117;
{ .AddChildren }
HAnimSite1034.AddChildren([Shape1036]);
{ .AddChildren }
HAnimSegment988.AddChildren([HAnimSite1034]);
HAnimSite1037 := THAnimSiteNode.Create;
HAnimSite1037.NameField := 'l_hand_front_view';
HAnimSite1037.Translation := Vector3(0.3,0.75,0.45);
TouchSensor1038 := TTouchSensorNode.Create;
TouchSensor1038.Description := 'HAnimSite l_hand_front_view';
{ .AddChildren }
HAnimSite1037.AddChildren([TouchSensor1038]);
Shape1039 := TShapeNode.Create;
Shape1039 := Shape117;
{ .AddChildren }
HAnimSite1037.AddChildren([Shape1039]);
Viewpoint1040 := TViewpointNode.Create;
Viewpoint1040.Description := 'left hand front';
Viewpoint1040.Position := Vector3(0,0,0);
Viewpoint1040.CenterOfRotation := Vector3(0,0.7,0);
{ .AddChildren }
HAnimSite1037.AddChildren([Viewpoint1040]);
Anchor1041 := TAnchorNode.Create;
Anchor1041.Description := 'HAnimSite hanim_l_hand_front_view Viewpoint';
Anchor1041.SetUrl(['#hanim_l_hand_front_viewpoint']);
LOD1042 := TLODNode.Create;
LOD1042.ForceTransitions := True;
LOD1042.SetRange([0.04]);
WorldInfo1043 := TWorldInfoNode.Create;
WorldInfo1043.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1042.AddChildren([WorldInfo1043]);
Shape1044 := TShapeNode.Create;
Shape1044 := Shape827;
{ .AddChildren }
LOD1042.AddChildren([Shape1044]);
{ .AddChildren }
Anchor1041.AddChildren([LOD1042]);
{ .AddChildren }
HAnimSite1037.AddChildren([Anchor1041]);
{ .AddChildren }
HAnimSegment988.AddChildren([HAnimSite1037]);
{ .AddChildren }
HAnimJoint987.AddChildren([HAnimSegment988]);
HAnimJoint1045 := THAnimJointNode.Create;
HAnimJoint1045.NameField := 'l_carpometacarpal_1';
HAnimJoint1045.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimSegment1046 := THAnimSegmentNode.Create;
HAnimSegment1046.NameField := 'l_metacarpal_1';
TouchSensor1047 := TTouchSensorNode.Create;
TouchSensor1047.Description := 'HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1';
{ .AddChildren }
HAnimSegment1046.AddChildren([TouchSensor1047]);
Transform1048 := TTransformNode.Create;
Transform1048.Translation := Vector3(0.1924,0.8472,-0.0534);
Shape1049 := TShapeNode.Create;
Shape1049 := Shape54;
{ .AddChild }
Transform1048.AddChildren([Shape1049]);
{ .AddChildren }
HAnimSegment1046.AddChildren([Transform1048]);
Shape1050 := TShapeNode.Create;
LineSet1051 := TLineSetNode.Create;
LineSet1051.SetVertexCount([2]);
ColorRGBA1052 := TColorRGBANode.Create;
ColorRGBA1052 := ColorRGBA60;
{ .SetColor }
LineSet1051.Color := ColorRGBA1052;
Coordinate1053 := TCoordinateNode.Create;
Coordinate1053.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ .SetCoord }
LineSet1051.Coord := Coordinate1053;
{ .SetGeometry }
Shape1050.Geometry := LineSet1051;
{ .AddChildren }
HAnimSegment1046.AddChildren([Shape1050]);
{ .AddChildren }
HAnimJoint1045.AddChildren([HAnimSegment1046]);
HAnimJoint1054 := THAnimJointNode.Create;
HAnimJoint1054.NameField := 'l_metacarpophalangeal_1';
HAnimJoint1054.Center := Vector3(0.1951,0.8226,0.0246);
HAnimSegment1055 := THAnimSegmentNode.Create;
HAnimSegment1055.NameField := 'l_carpal_proximal_phalanx_1';
TouchSensor1056 := TTouchSensorNode.Create;
TouchSensor1056.Description := 'HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1';
{ .AddChildren }
HAnimSegment1055.AddChildren([TouchSensor1056]);
Transform1057 := TTransformNode.Create;
Transform1057.Translation := Vector3(0.1951,0.8226,0.0246);
Shape1058 := TShapeNode.Create;
Shape1058 := Shape54;
{ .AddChild }
Transform1057.AddChildren([Shape1058]);
{ .AddChildren }
HAnimSegment1055.AddChildren([Transform1057]);
Shape1059 := TShapeNode.Create;
LineSet1060 := TLineSetNode.Create;
LineSet1060.SetVertexCount([2]);
ColorRGBA1061 := TColorRGBANode.Create;
ColorRGBA1061 := ColorRGBA60;
{ .SetColor }
LineSet1060.Color := ColorRGBA1061;
Coordinate1062 := TCoordinateNode.Create;
Coordinate1062.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ .SetCoord }
LineSet1060.Coord := Coordinate1062;
{ .SetGeometry }
Shape1059.Geometry := LineSet1060;
{ .AddChildren }
HAnimSegment1055.AddChildren([Shape1059]);
{ .AddChildren }
HAnimJoint1054.AddChildren([HAnimSegment1055]);
HAnimJoint1063 := THAnimJointNode.Create;
HAnimJoint1063.NameField := 'l_carpal_interphalangeal_1';
HAnimJoint1063.Center := Vector3(0.1955,0.8159,0.0464);
HAnimSegment1064 := THAnimSegmentNode.Create;
HAnimSegment1064.NameField := 'l_carpal_distal_phalanx_1';
TouchSensor1065 := TTouchSensorNode.Create;
TouchSensor1065.Description := 'HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1';
{ .AddChildren }
HAnimSegment1064.AddChildren([TouchSensor1065]);
Transform1066 := TTransformNode.Create;
Transform1066.Translation := Vector3(0.1955,0.8159,0.0464);
Shape1067 := TShapeNode.Create;
Shape1067 := Shape54;
{ .AddChild }
Transform1066.AddChildren([Shape1067]);
{ .AddChildren }
HAnimSegment1064.AddChildren([Transform1066]);
Shape1068 := TShapeNode.Create;
LineSet1069 := TLineSetNode.Create;
LineSet1069.SetVertexCount([2]);
ColorRGBA1070 := TColorRGBANode.Create;
ColorRGBA1070 := ColorRGBA81;
{ .SetColor }
LineSet1069.Color := ColorRGBA1070;
Coordinate1071 := TCoordinateNode.Create;
Coordinate1071.SetPoint([Vector3(0.1955,0.8159,0.0464),Vector3(0.1982,0.8061,0.0759)]);
{ .SetCoord }
LineSet1069.Coord := Coordinate1071;
{ .SetGeometry }
Shape1068.Geometry := LineSet1069;
{ .AddChildren }
HAnimSegment1064.AddChildren([Shape1068]);
HAnimSite1072 := THAnimSiteNode.Create;
HAnimSite1072.NameField := 'l_carpal_distal_phalanx_1_pt';
HAnimSite1072.Translation := Vector3(0.1982,0.8061,0.0759);
TouchSensor1073 := TTouchSensorNode.Create;
TouchSensor1073.Description := 'HAnimSite l_thumb_distal_tip';
{ .AddChildren }
HAnimSite1072.AddChildren([TouchSensor1073]);
Shape1074 := TShapeNode.Create;
Shape1074 := Shape117;
{ .AddChildren }
HAnimSite1072.AddChildren([Shape1074]);
{ .AddChildren }
HAnimSegment1064.AddChildren([HAnimSite1072]);
{ .AddChildren }
HAnimJoint1063.AddChildren([HAnimSegment1064]);
{ .AddChildren }
HAnimJoint1054.AddChildren([HAnimJoint1063]);
{ .AddChildren }
HAnimJoint1045.AddChildren([HAnimJoint1054]);
{ .AddChildren }
HAnimJoint987.AddChildren([HAnimJoint1045]);
HAnimJoint1075 := THAnimJointNode.Create;
HAnimJoint1075.NameField := 'l_carpometacarpal_2';
HAnimJoint1075.Center := Vector3(0.1983,0.8024,-0.028);
HAnimSegment1076 := THAnimSegmentNode.Create;
HAnimSegment1076.NameField := 'l_metacarpal_2';
TouchSensor1077 := TTouchSensorNode.Create;
TouchSensor1077.Description := 'HAnimJoint l_index0, HAnimSegment l_metacarpal_2';
{ .AddChildren }
HAnimSegment1076.AddChildren([TouchSensor1077]);
Transform1078 := TTransformNode.Create;
Transform1078.Translation := Vector3(0.1983,0.8024,-0.028);
Shape1079 := TShapeNode.Create;
Shape1079 := Shape54;
{ .AddChild }
Transform1078.AddChildren([Shape1079]);
{ .AddChildren }
HAnimSegment1076.AddChildren([Transform1078]);
Shape1080 := TShapeNode.Create;
LineSet1081 := TLineSetNode.Create;
LineSet1081.SetVertexCount([2]);
ColorRGBA1082 := TColorRGBANode.Create;
ColorRGBA1082 := ColorRGBA60;
{ .SetColor }
LineSet1081.Color := ColorRGBA1082;
Coordinate1083 := TCoordinateNode.Create;
Coordinate1083.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ .SetCoord }
LineSet1081.Coord := Coordinate1083;
{ .SetGeometry }
Shape1080.Geometry := LineSet1081;
{ .AddChildren }
HAnimSegment1076.AddChildren([Shape1080]);
{ .AddChildren }
HAnimJoint1075.AddChildren([HAnimSegment1076]);
HAnimJoint1084 := THAnimJointNode.Create;
HAnimJoint1084.NameField := 'l_metacarpophalangeal_2';
HAnimJoint1084.Center := Vector3(0.1983,0.7815,-0.028);
HAnimSegment1085 := THAnimSegmentNode.Create;
HAnimSegment1085.NameField := 'l_carpal_proximal_phalanx_2';
TouchSensor1086 := TTouchSensorNode.Create;
TouchSensor1086.Description := 'HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment1085.AddChildren([TouchSensor1086]);
Transform1087 := TTransformNode.Create;
Transform1087.Translation := Vector3(0.1983,0.7815,-0.028);
Shape1088 := TShapeNode.Create;
Shape1088 := Shape54;
{ .AddChild }
Transform1087.AddChildren([Shape1088]);
{ .AddChildren }
HAnimSegment1085.AddChildren([Transform1087]);
Shape1089 := TShapeNode.Create;
LineSet1090 := TLineSetNode.Create;
LineSet1090.SetVertexCount([2]);
ColorRGBA1091 := TColorRGBANode.Create;
ColorRGBA1091 := ColorRGBA60;
{ .SetColor }
LineSet1090.Color := ColorRGBA1091;
Coordinate1092 := TCoordinateNode.Create;
Coordinate1092.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ .SetCoord }
LineSet1090.Coord := Coordinate1092;
{ .SetGeometry }
Shape1089.Geometry := LineSet1090;
{ .AddChildren }
HAnimSegment1085.AddChildren([Shape1089]);
{ .AddChildren }
HAnimJoint1084.AddChildren([HAnimSegment1085]);
HAnimJoint1093 := THAnimJointNode.Create;
HAnimJoint1093.NameField := 'l_carpal_proximal_interphalangeal_2';
HAnimJoint1093.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimSegment1094 := THAnimSegmentNode.Create;
HAnimSegment1094.NameField := 'l_carpal_middle_phalanx_2';
TouchSensor1095 := TTouchSensorNode.Create;
TouchSensor1095.Description := 'HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2';
{ .AddChildren }
HAnimSegment1094.AddChildren([TouchSensor1095]);
Transform1096 := TTransformNode.Create;
Transform1096.Translation := Vector3(0.2017,0.7363,-0.0248);
Shape1097 := TShapeNode.Create;
Shape1097 := Shape54;
{ .AddChild }
Transform1096.AddChildren([Shape1097]);
{ .AddChildren }
HAnimSegment1094.AddChildren([Transform1096]);
Shape1098 := TShapeNode.Create;
LineSet1099 := TLineSetNode.Create;
LineSet1099.SetVertexCount([2]);
ColorRGBA1100 := TColorRGBANode.Create;
ColorRGBA1100 := ColorRGBA60;
{ .SetColor }
LineSet1099.Color := ColorRGBA1100;
Coordinate1101 := TCoordinateNode.Create;
Coordinate1101.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ .SetCoord }
LineSet1099.Coord := Coordinate1101;
{ .SetGeometry }
Shape1098.Geometry := LineSet1099;
{ .AddChildren }
HAnimSegment1094.AddChildren([Shape1098]);
{ .AddChildren }
HAnimJoint1093.AddChildren([HAnimSegment1094]);
HAnimJoint1102 := THAnimJointNode.Create;
HAnimJoint1102.NameField := 'l_carpal_distal_interphalangeal_2';
HAnimJoint1102.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimSegment1103 := THAnimSegmentNode.Create;
HAnimSegment1103.NameField := 'l_carpal_distal_phalanx_2';
TouchSensor1104 := TTouchSensorNode.Create;
TouchSensor1104.Description := 'HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2';
{ .AddChildren }
HAnimSegment1103.AddChildren([TouchSensor1104]);
Transform1105 := TTransformNode.Create;
Transform1105.Translation := Vector3(0.2028,0.7139,-0.0236);
Shape1106 := TShapeNode.Create;
Shape1106 := Shape54;
{ .AddChild }
Transform1105.AddChildren([Shape1106]);
{ .AddChildren }
HAnimSegment1103.AddChildren([Transform1105]);
Shape1107 := TShapeNode.Create;
LineSet1108 := TLineSetNode.Create;
LineSet1108.SetVertexCount([2]);
ColorRGBA1109 := TColorRGBANode.Create;
ColorRGBA1109 := ColorRGBA81;
{ .SetColor }
LineSet1108.Color := ColorRGBA1109;
Coordinate1110 := TCoordinateNode.Create;
Coordinate1110.SetPoint([Vector3(0.2028,0.7139,-0.0236),Vector3(0.2089,0.6858,-0.0245)]);
{ .SetCoord }
LineSet1108.Coord := Coordinate1110;
{ .SetGeometry }
Shape1107.Geometry := LineSet1108;
{ .AddChildren }
HAnimSegment1103.AddChildren([Shape1107]);
Shape1111 := TShapeNode.Create;
LineSet1112 := TLineSetNode.Create;
LineSet1112.SetVertexCount([2]);
ColorRGBA1113 := TColorRGBANode.Create;
ColorRGBA1113 := ColorRGBA81;
{ .SetColor }
LineSet1112.Color := ColorRGBA1113;
Coordinate1114 := TCoordinateNode.Create;
Coordinate1114.SetPoint([Vector3(0.2028,0.7139,-0.0236),Vector3(0.2056,0.6743,-0.0482)]);
{ .SetCoord }
LineSet1112.Coord := Coordinate1114;
{ .SetGeometry }
Shape1111.Geometry := LineSet1112;
{ .AddChildren }
HAnimSegment1103.AddChildren([Shape1111]);
HAnimSite1115 := THAnimSiteNode.Create;
HAnimSite1115.NameField := 'l_carpal_distal_phalanx_2_pt';
HAnimSite1115.Translation := Vector3(0.2089,0.6858,-0.0245);
TouchSensor1116 := TTouchSensorNode.Create;
TouchSensor1116.Description := 'HAnimSite l_index_distal_tip';
{ .AddChildren }
HAnimSite1115.AddChildren([TouchSensor1116]);
Shape1117 := TShapeNode.Create;
Shape1117 := Shape117;
{ .AddChildren }
HAnimSite1115.AddChildren([Shape1117]);
{ .AddChildren }
HAnimSegment1103.AddChildren([HAnimSite1115]);
HAnimSite1118 := THAnimSiteNode.Create;
HAnimSite1118.NameField := 'l_dactylion_pt';
HAnimSite1118.Translation := Vector3(0.2056,0.6743,-0.0482);
TouchSensor1119 := TTouchSensorNode.Create;
TouchSensor1119.Description := 'HAnimSite l_dactylion_pt';
{ .AddChildren }
HAnimSite1118.AddChildren([TouchSensor1119]);
Shape1120 := TShapeNode.Create;
Shape1120 := Shape117;
{ .AddChildren }
HAnimSite1118.AddChildren([Shape1120]);
{ .AddChildren }
HAnimSegment1103.AddChildren([HAnimSite1118]);
{ .AddChildren }
HAnimJoint1102.AddChildren([HAnimSegment1103]);
{ .AddChildren }
HAnimJoint1093.AddChildren([HAnimJoint1102]);
{ .AddChildren }
HAnimJoint1084.AddChildren([HAnimJoint1093]);
{ .AddChildren }
HAnimJoint1075.AddChildren([HAnimJoint1084]);
{ .AddChildren }
HAnimJoint987.AddChildren([HAnimJoint1075]);
HAnimJoint1121 := THAnimJointNode.Create;
HAnimJoint1121.NameField := 'l_carpometacarpal_3';
HAnimJoint1121.Center := Vector3(0.1987,0.8029,-0.053);
HAnimSegment1122 := THAnimSegmentNode.Create;
HAnimSegment1122.NameField := 'l_metacarpal_3';
TouchSensor1123 := TTouchSensorNode.Create;
TouchSensor1123.Description := 'HAnimJoint l_middle0, HAnimSegment l_metacarpal_3';
{ .AddChildren }
HAnimSegment1122.AddChildren([TouchSensor1123]);
Transform1124 := TTransformNode.Create;
Transform1124.Translation := Vector3(0.1987,0.8029,-0.053);
Shape1125 := TShapeNode.Create;
Shape1125 := Shape54;
{ .AddChild }
Transform1124.AddChildren([Shape1125]);
{ .AddChildren }
HAnimSegment1122.AddChildren([Transform1124]);
Shape1126 := TShapeNode.Create;
LineSet1127 := TLineSetNode.Create;
LineSet1127.SetVertexCount([2]);
ColorRGBA1128 := TColorRGBANode.Create;
ColorRGBA1128 := ColorRGBA60;
{ .SetColor }
LineSet1127.Color := ColorRGBA1128;
Coordinate1129 := TCoordinateNode.Create;
Coordinate1129.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ .SetCoord }
LineSet1127.Coord := Coordinate1129;
{ .SetGeometry }
Shape1126.Geometry := LineSet1127;
{ .AddChildren }
HAnimSegment1122.AddChildren([Shape1126]);
{ .AddChildren }
HAnimJoint1121.AddChildren([HAnimSegment1122]);
HAnimJoint1130 := THAnimJointNode.Create;
HAnimJoint1130.NameField := 'l_metacarpophalangeal_3';
HAnimJoint1130.Center := Vector3(0.1987,0.7818,-0.053);
HAnimSegment1131 := THAnimSegmentNode.Create;
HAnimSegment1131.NameField := 'l_carpal_proximal_phalanx_3';
TouchSensor1132 := TTouchSensorNode.Create;
TouchSensor1132.Description := 'HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3';
{ .AddChildren }
HAnimSegment1131.AddChildren([TouchSensor1132]);
Transform1133 := TTransformNode.Create;
Transform1133.Translation := Vector3(0.1987,0.7818,-0.053);
Shape1134 := TShapeNode.Create;
Shape1134 := Shape54;
{ .AddChild }
Transform1133.AddChildren([Shape1134]);
{ .AddChildren }
HAnimSegment1131.AddChildren([Transform1133]);
Shape1135 := TShapeNode.Create;
LineSet1136 := TLineSetNode.Create;
LineSet1136.SetVertexCount([2]);
ColorRGBA1137 := TColorRGBANode.Create;
ColorRGBA1137 := ColorRGBA60;
{ .SetColor }
LineSet1136.Color := ColorRGBA1137;
Coordinate1138 := TCoordinateNode.Create;
Coordinate1138.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ .SetCoord }
LineSet1136.Coord := Coordinate1138;
{ .SetGeometry }
Shape1135.Geometry := LineSet1136;
{ .AddChildren }
HAnimSegment1131.AddChildren([Shape1135]);
{ .AddChildren }
HAnimJoint1130.AddChildren([HAnimSegment1131]);
HAnimJoint1139 := THAnimJointNode.Create;
HAnimJoint1139.NameField := 'l_carpal_proximal_interphalangeal_3';
HAnimJoint1139.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimSegment1140 := THAnimSegmentNode.Create;
HAnimSegment1140.NameField := 'l_carpal_middle_phalanx_3';
TouchSensor1141 := TTouchSensorNode.Create;
TouchSensor1141.Description := 'HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3';
{ .AddChildren }
HAnimSegment1140.AddChildren([TouchSensor1141]);
Transform1142 := TTransformNode.Create;
Transform1142.Translation := Vector3(0.2013,0.7273,-0.0503);
Shape1143 := TShapeNode.Create;
Shape1143 := Shape54;
{ .AddChild }
Transform1142.AddChildren([Shape1143]);
{ .AddChildren }
HAnimSegment1140.AddChildren([Transform1142]);
Shape1144 := TShapeNode.Create;
LineSet1145 := TLineSetNode.Create;
LineSet1145.SetVertexCount([2]);
ColorRGBA1146 := TColorRGBANode.Create;
ColorRGBA1146 := ColorRGBA60;
{ .SetColor }
LineSet1145.Color := ColorRGBA1146;
Coordinate1147 := TCoordinateNode.Create;
Coordinate1147.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ .SetCoord }
LineSet1145.Coord := Coordinate1147;
{ .SetGeometry }
Shape1144.Geometry := LineSet1145;
{ .AddChildren }
HAnimSegment1140.AddChildren([Shape1144]);
{ .AddChildren }
HAnimJoint1139.AddChildren([HAnimSegment1140]);
HAnimJoint1148 := THAnimJointNode.Create;
HAnimJoint1148.NameField := 'l_carpal_distal_interphalangeal_3';
HAnimJoint1148.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimSegment1149 := THAnimSegmentNode.Create;
HAnimSegment1149.NameField := 'l_carpal_distal_phalanx_3';
TouchSensor1150 := TTouchSensorNode.Create;
TouchSensor1150.Description := 'HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3';
{ .AddChildren }
HAnimSegment1149.AddChildren([TouchSensor1150]);
Transform1151 := TTransformNode.Create;
Transform1151.Translation := Vector3(0.2026,0.7011,-0.0494);
Shape1152 := TShapeNode.Create;
Shape1152 := Shape54;
{ .AddChild }
Transform1151.AddChildren([Shape1152]);
{ .AddChildren }
HAnimSegment1149.AddChildren([Transform1151]);
Shape1153 := TShapeNode.Create;
LineSet1154 := TLineSetNode.Create;
LineSet1154.SetVertexCount([2]);
ColorRGBA1155 := TColorRGBANode.Create;
ColorRGBA1155 := ColorRGBA81;
{ .SetColor }
LineSet1154.Color := ColorRGBA1155;
Coordinate1156 := TCoordinateNode.Create;
Coordinate1156.SetPoint([Vector3(0.2026,0.7011,-0.0494),Vector3(0.208,0.6731,-0.0491)]);
{ .SetCoord }
LineSet1154.Coord := Coordinate1156;
{ .SetGeometry }
Shape1153.Geometry := LineSet1154;
{ .AddChildren }
HAnimSegment1149.AddChildren([Shape1153]);
HAnimSite1157 := THAnimSiteNode.Create;
HAnimSite1157.NameField := 'l_carpal_distal_phalanx_3_pt';
HAnimSite1157.Translation := Vector3(0.208,0.6731,-0.0491);
TouchSensor1158 := TTouchSensorNode.Create;
TouchSensor1158.Description := 'HAnimSite l_middle_distal_tip';
{ .AddChildren }
HAnimSite1157.AddChildren([TouchSensor1158]);
Shape1159 := TShapeNode.Create;
Shape1159 := Shape117;
{ .AddChildren }
HAnimSite1157.AddChildren([Shape1159]);
{ .AddChildren }
HAnimSegment1149.AddChildren([HAnimSite1157]);
{ .AddChildren }
HAnimJoint1148.AddChildren([HAnimSegment1149]);
{ .AddChildren }
HAnimJoint1139.AddChildren([HAnimJoint1148]);
{ .AddChildren }
HAnimJoint1130.AddChildren([HAnimJoint1139]);
{ .AddChildren }
HAnimJoint1121.AddChildren([HAnimJoint1130]);
{ .AddChildren }
HAnimJoint987.AddChildren([HAnimJoint1121]);
HAnimJoint1160 := THAnimJointNode.Create;
HAnimJoint1160.NameField := 'l_carpometacarpal_4';
HAnimJoint1160.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimSegment1161 := THAnimSegmentNode.Create;
HAnimSegment1161.NameField := 'l_metacarpal_4';
TouchSensor1162 := TTouchSensorNode.Create;
TouchSensor1162.Description := 'HAnimJoint l_ring0, HAnimSegment l_metacarpal_4';
{ .AddChildren }
HAnimSegment1161.AddChildren([TouchSensor1162]);
Transform1163 := TTransformNode.Create;
Transform1163.Translation := Vector3(0.1956,0.8019,-0.0794);
Shape1164 := TShapeNode.Create;
Shape1164 := Shape54;
{ .AddChild }
Transform1163.AddChildren([Shape1164]);
{ .AddChildren }
HAnimSegment1161.AddChildren([Transform1163]);
Shape1165 := TShapeNode.Create;
LineSet1166 := TLineSetNode.Create;
LineSet1166.SetVertexCount([2]);
ColorRGBA1167 := TColorRGBANode.Create;
ColorRGBA1167 := ColorRGBA60;
{ .SetColor }
LineSet1166.Color := ColorRGBA1167;
Coordinate1168 := TCoordinateNode.Create;
Coordinate1168.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ .SetCoord }
LineSet1166.Coord := Coordinate1168;
{ .SetGeometry }
Shape1165.Geometry := LineSet1166;
{ .AddChildren }
HAnimSegment1161.AddChildren([Shape1165]);
{ .AddChildren }
HAnimJoint1160.AddChildren([HAnimSegment1161]);
HAnimJoint1169 := THAnimJointNode.Create;
HAnimJoint1169.NameField := 'l_metacarpophalangeal_4';
HAnimJoint1169.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimSegment1170 := THAnimSegmentNode.Create;
HAnimSegment1170.NameField := 'l_carpal_proximal_phalanx_4';
TouchSensor1171 := TTouchSensorNode.Create;
TouchSensor1171.Description := 'HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4';
{ .AddChildren }
HAnimSegment1170.AddChildren([TouchSensor1171]);
Transform1172 := TTransformNode.Create;
Transform1172.Translation := Vector3(0.1956,0.7815,-0.0794);
Shape1173 := TShapeNode.Create;
Shape1173 := Shape54;
{ .AddChild }
Transform1172.AddChildren([Shape1173]);
{ .AddChildren }
HAnimSegment1170.AddChildren([Transform1172]);
Shape1174 := TShapeNode.Create;
LineSet1175 := TLineSetNode.Create;
LineSet1175.SetVertexCount([2]);
ColorRGBA1176 := TColorRGBANode.Create;
ColorRGBA1176 := ColorRGBA60;
{ .SetColor }
LineSet1175.Color := ColorRGBA1176;
Coordinate1177 := TCoordinateNode.Create;
Coordinate1177.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ .SetCoord }
LineSet1175.Coord := Coordinate1177;
{ .SetGeometry }
Shape1174.Geometry := LineSet1175;
{ .AddChildren }
HAnimSegment1170.AddChildren([Shape1174]);
{ .AddChildren }
HAnimJoint1169.AddChildren([HAnimSegment1170]);
HAnimJoint1178 := THAnimJointNode.Create;
HAnimJoint1178.NameField := 'l_carpal_proximal_interphalangeal_4';
HAnimJoint1178.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimSegment1179 := THAnimSegmentNode.Create;
HAnimSegment1179.NameField := 'l_carpal_middle_phalanx_4';
TouchSensor1180 := TTouchSensorNode.Create;
TouchSensor1180.Description := 'HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4';
{ .AddChildren }
HAnimSegment1179.AddChildren([TouchSensor1180]);
Transform1181 := TTransformNode.Create;
Transform1181.Translation := Vector3(0.1973,0.7287,-0.0777);
Shape1182 := TShapeNode.Create;
Shape1182 := Shape54;
{ .AddChild }
Transform1181.AddChildren([Shape1182]);
{ .AddChildren }
HAnimSegment1179.AddChildren([Transform1181]);
Shape1183 := TShapeNode.Create;
LineSet1184 := TLineSetNode.Create;
LineSet1184.SetVertexCount([2]);
ColorRGBA1185 := TColorRGBANode.Create;
ColorRGBA1185 := ColorRGBA60;
{ .SetColor }
LineSet1184.Color := ColorRGBA1185;
Coordinate1186 := TCoordinateNode.Create;
Coordinate1186.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ .SetCoord }
LineSet1184.Coord := Coordinate1186;
{ .SetGeometry }
Shape1183.Geometry := LineSet1184;
{ .AddChildren }
HAnimSegment1179.AddChildren([Shape1183]);
{ .AddChildren }
HAnimJoint1178.AddChildren([HAnimSegment1179]);
HAnimJoint1187 := THAnimJointNode.Create;
HAnimJoint1187.NameField := 'l_carpal_distal_interphalangeal_4';
HAnimJoint1187.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimSegment1188 := THAnimSegmentNode.Create;
HAnimSegment1188.NameField := 'l_carpal_distal_phalanx_4';
TouchSensor1189 := TTouchSensorNode.Create;
TouchSensor1189.Description := 'HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4';
{ .AddChildren }
HAnimSegment1188.AddChildren([TouchSensor1189]);
Transform1190 := TTransformNode.Create;
Transform1190.Translation := Vector3(0.1983,0.7045,-0.0767);
Shape1191 := TShapeNode.Create;
Shape1191 := Shape54;
{ .AddChild }
Transform1190.AddChildren([Shape1191]);
{ .AddChildren }
HAnimSegment1188.AddChildren([Transform1190]);
Shape1192 := TShapeNode.Create;
LineSet1193 := TLineSetNode.Create;
LineSet1193.SetVertexCount([2]);
ColorRGBA1194 := TColorRGBANode.Create;
ColorRGBA1194 := ColorRGBA81;
{ .SetColor }
LineSet1193.Color := ColorRGBA1194;
Coordinate1195 := TCoordinateNode.Create;
Coordinate1195.SetPoint([Vector3(0.1983,0.7045,-0.0767),Vector3(0.2035,0.675,-0.0756)]);
{ .SetCoord }
LineSet1193.Coord := Coordinate1195;
{ .SetGeometry }
Shape1192.Geometry := LineSet1193;
{ .AddChildren }
HAnimSegment1188.AddChildren([Shape1192]);
HAnimSite1196 := THAnimSiteNode.Create;
HAnimSite1196.NameField := 'l_carpal_distal_phalanx_4_pt';
HAnimSite1196.Translation := Vector3(0.2035,0.675,-0.0756);
TouchSensor1197 := TTouchSensorNode.Create;
TouchSensor1197.Description := 'HAnimSite l_ring_distal_tip';
{ .AddChildren }
HAnimSite1196.AddChildren([TouchSensor1197]);
Shape1198 := TShapeNode.Create;
Shape1198 := Shape117;
{ .AddChildren }
HAnimSite1196.AddChildren([Shape1198]);
{ .AddChildren }
HAnimSegment1188.AddChildren([HAnimSite1196]);
{ .AddChildren }
HAnimJoint1187.AddChildren([HAnimSegment1188]);
{ .AddChildren }
HAnimJoint1178.AddChildren([HAnimJoint1187]);
{ .AddChildren }
HAnimJoint1169.AddChildren([HAnimJoint1178]);
{ .AddChildren }
HAnimJoint1160.AddChildren([HAnimJoint1169]);
{ .AddChildren }
HAnimJoint987.AddChildren([HAnimJoint1160]);
HAnimJoint1199 := THAnimJointNode.Create;
HAnimJoint1199.NameField := 'l_carpometacarpal_5';
HAnimJoint1199.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimSegment1200 := THAnimSegmentNode.Create;
HAnimSegment1200.NameField := 'l_metacarpal_5';
TouchSensor1201 := TTouchSensorNode.Create;
TouchSensor1201.Description := 'HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5';
{ .AddChildren }
HAnimSegment1200.AddChildren([TouchSensor1201]);
Transform1202 := TTransformNode.Create;
Transform1202.Translation := Vector3(0.1925,0.8066,-0.1036);
Shape1203 := TShapeNode.Create;
Shape1203 := Shape54;
{ .AddChild }
Transform1202.AddChildren([Shape1203]);
{ .AddChildren }
HAnimSegment1200.AddChildren([Transform1202]);
Shape1204 := TShapeNode.Create;
LineSet1205 := TLineSetNode.Create;
LineSet1205.SetVertexCount([2]);
ColorRGBA1206 := TColorRGBANode.Create;
ColorRGBA1206 := ColorRGBA60;
{ .SetColor }
LineSet1205.Color := ColorRGBA1206;
Coordinate1207 := TCoordinateNode.Create;
Coordinate1207.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ .SetCoord }
LineSet1205.Coord := Coordinate1207;
{ .SetGeometry }
Shape1204.Geometry := LineSet1205;
{ .AddChildren }
HAnimSegment1200.AddChildren([Shape1204]);
{ .AddChildren }
HAnimJoint1199.AddChildren([HAnimSegment1200]);
HAnimJoint1208 := THAnimJointNode.Create;
HAnimJoint1208.NameField := 'l_metacarpophalangeal_5';
HAnimJoint1208.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimSegment1209 := THAnimSegmentNode.Create;
HAnimSegment1209.NameField := 'l_carpal_proximal_phalanx_5';
TouchSensor1210 := TTouchSensorNode.Create;
TouchSensor1210.Description := 'HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5';
{ .AddChildren }
HAnimSegment1209.AddChildren([TouchSensor1210]);
Transform1211 := TTransformNode.Create;
Transform1211.Translation := Vector3(0.1925,0.7866,-0.1036);
Shape1212 := TShapeNode.Create;
Shape1212 := Shape54;
{ .AddChild }
Transform1211.AddChildren([Shape1212]);
{ .AddChildren }
HAnimSegment1209.AddChildren([Transform1211]);
Shape1213 := TShapeNode.Create;
LineSet1214 := TLineSetNode.Create;
LineSet1214.SetVertexCount([2]);
ColorRGBA1215 := TColorRGBANode.Create;
ColorRGBA1215 := ColorRGBA60;
{ .SetColor }
LineSet1214.Color := ColorRGBA1215;
Coordinate1216 := TCoordinateNode.Create;
Coordinate1216.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ .SetCoord }
LineSet1214.Coord := Coordinate1216;
{ .SetGeometry }
Shape1213.Geometry := LineSet1214;
{ .AddChildren }
HAnimSegment1209.AddChildren([Shape1213]);
{ .AddChildren }
HAnimJoint1208.AddChildren([HAnimSegment1209]);
HAnimJoint1217 := THAnimJointNode.Create;
HAnimJoint1217.NameField := 'l_carpal_proximal_interphalangeal_5';
HAnimJoint1217.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimSegment1218 := THAnimSegmentNode.Create;
HAnimSegment1218.NameField := 'l_carpal_middle_phalanx_5';
TouchSensor1219 := TTouchSensorNode.Create;
TouchSensor1219.Description := 'HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5';
{ .AddChildren }
HAnimSegment1218.AddChildren([TouchSensor1219]);
Transform1220 := TTransformNode.Create;
Transform1220.Translation := Vector3(0.1938,0.7452,-0.1024);
Shape1221 := TShapeNode.Create;
Shape1221 := Shape54;
{ .AddChild }
Transform1220.AddChildren([Shape1221]);
{ .AddChildren }
HAnimSegment1218.AddChildren([Transform1220]);
Shape1222 := TShapeNode.Create;
LineSet1223 := TLineSetNode.Create;
LineSet1223.SetVertexCount([2]);
ColorRGBA1224 := TColorRGBANode.Create;
ColorRGBA1224 := ColorRGBA60;
{ .SetColor }
LineSet1223.Color := ColorRGBA1224;
Coordinate1225 := TCoordinateNode.Create;
Coordinate1225.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ .SetCoord }
LineSet1223.Coord := Coordinate1225;
{ .SetGeometry }
Shape1222.Geometry := LineSet1223;
{ .AddChildren }
HAnimSegment1218.AddChildren([Shape1222]);
{ .AddChildren }
HAnimJoint1217.AddChildren([HAnimSegment1218]);
HAnimJoint1226 := THAnimJointNode.Create;
HAnimJoint1226.NameField := 'l_carpal_distal_interphalangeal_5';
HAnimJoint1226.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimSegment1227 := THAnimSegmentNode.Create;
HAnimSegment1227.NameField := 'l_carpal_distal_phalanx_5';
TouchSensor1228 := TTouchSensorNode.Create;
TouchSensor1228.Description := 'HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5';
{ .AddChildren }
HAnimSegment1227.AddChildren([TouchSensor1228]);
Transform1229 := TTransformNode.Create;
Transform1229.Translation := Vector3(0.1948,0.7277,-0.1017);
Shape1230 := TShapeNode.Create;
Shape1230 := Shape54;
{ .AddChild }
Transform1229.AddChildren([Shape1230]);
{ .AddChildren }
HAnimSegment1227.AddChildren([Transform1229]);
Shape1231 := TShapeNode.Create;
LineSet1232 := TLineSetNode.Create;
LineSet1232.SetVertexCount([2]);
ColorRGBA1233 := TColorRGBANode.Create;
ColorRGBA1233 := ColorRGBA81;
{ .SetColor }
LineSet1232.Color := ColorRGBA1233;
Coordinate1234 := TCoordinateNode.Create;
Coordinate1234.SetPoint([Vector3(0.1948,0.7277,-0.1017),Vector3(0.2014,0.7009,-0.1012)]);
{ .SetCoord }
LineSet1232.Coord := Coordinate1234;
{ .SetGeometry }
Shape1231.Geometry := LineSet1232;
{ .AddChildren }
HAnimSegment1227.AddChildren([Shape1231]);
HAnimSite1235 := THAnimSiteNode.Create;
HAnimSite1235.NameField := 'l_carpal_distal_phalanx_5_pt';
HAnimSite1235.Translation := Vector3(0.2014,0.7009,-0.1012);
TouchSensor1236 := TTouchSensorNode.Create;
TouchSensor1236.Description := 'HAnimSite l_pinky_distal_tip';
{ .AddChildren }
HAnimSite1235.AddChildren([TouchSensor1236]);
Shape1237 := TShapeNode.Create;
Shape1237 := Shape117;
{ .AddChildren }
HAnimSite1235.AddChildren([Shape1237]);
{ .AddChildren }
HAnimSegment1227.AddChildren([HAnimSite1235]);
{ .AddChildren }
HAnimJoint1226.AddChildren([HAnimSegment1227]);
{ .AddChildren }
HAnimJoint1217.AddChildren([HAnimJoint1226]);
{ .AddChildren }
HAnimJoint1208.AddChildren([HAnimJoint1217]);
{ .AddChildren }
HAnimJoint1199.AddChildren([HAnimJoint1208]);
{ .AddChildren }
HAnimJoint987.AddChildren([HAnimJoint1199]);
{ .AddChildren }
HAnimJoint950.AddChildren([HAnimJoint987]);
{ .AddChildren }
HAnimJoint934.AddChildren([HAnimJoint950]);
{ .AddChildren }
HAnimJoint925.AddChildren([HAnimJoint934]);
{ .AddChildren }
HAnimJoint888.AddChildren([HAnimJoint925]);
{ .AddChildren }
HAnimJoint600.AddChildren([HAnimJoint888]);
HAnimJoint1238 := THAnimJointNode.Create;
HAnimJoint1238.NameField := 'r_sternoclavicular';
HAnimJoint1238.Center := Vector3(-0.082,1.4488,-0.0353);
HAnimSegment1239 := THAnimSegmentNode.Create;
HAnimSegment1239.NameField := 'r_clavicle';
TouchSensor1240 := TTouchSensorNode.Create;
TouchSensor1240.Description := 'HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle';
{ .AddChildren }
HAnimSegment1239.AddChildren([TouchSensor1240]);
Transform1241 := TTransformNode.Create;
Transform1241.Translation := Vector3(-0.082,1.4488,-0.0353);
Shape1242 := TShapeNode.Create;
Shape1242 := Shape54;
{ .AddChild }
Transform1241.AddChildren([Shape1242]);
{ .AddChildren }
HAnimSegment1239.AddChildren([Transform1241]);
Shape1243 := TShapeNode.Create;
LineSet1244 := TLineSetNode.Create;
LineSet1244.SetVertexCount([2]);
ColorRGBA1245 := TColorRGBANode.Create;
ColorRGBA1245 := ColorRGBA60;
{ .SetColor }
LineSet1244.Color := ColorRGBA1245;
Coordinate1246 := TCoordinateNode.Create;
Coordinate1246.SetPoint([Vector3(-0.082,1.4488,-0.0353),Vector3(-0.0962,1.4269,-0.0424)]);
{ .SetCoord }
LineSet1244.Coord := Coordinate1246;
{ .SetGeometry }
Shape1243.Geometry := LineSet1244;
{ .AddChildren }
HAnimSegment1239.AddChildren([Shape1243]);
Shape1247 := TShapeNode.Create;
LineSet1248 := TLineSetNode.Create;
LineSet1248.SetVertexCount([2]);
ColorRGBA1249 := TColorRGBANode.Create;
ColorRGBA1249 := ColorRGBA81;
{ .SetColor }
LineSet1248.Color := ColorRGBA1249;
Coordinate1250 := TCoordinateNode.Create;
Coordinate1250.SetPoint([Vector3(-0.082,1.4488,-0.0353),Vector3(-0.0115,1.4943,0.04)]);
{ .SetCoord }
LineSet1248.Coord := Coordinate1250;
{ .SetGeometry }
Shape1247.Geometry := LineSet1248;
{ .AddChildren }
HAnimSegment1239.AddChildren([Shape1247]);
Shape1251 := TShapeNode.Create;
LineSet1252 := TLineSetNode.Create;
LineSet1252.SetVertexCount([2]);
ColorRGBA1253 := TColorRGBANode.Create;
ColorRGBA1253 := ColorRGBA81;
{ .SetColor }
LineSet1252.Color := ColorRGBA1253;
Coordinate1254 := TCoordinateNode.Create;
Coordinate1254.SetPoint([Vector3(-0.082,1.4488,-0.0353),Vector3(-0.1905,1.4791,-0.0431)]);
{ .SetCoord }
LineSet1252.Coord := Coordinate1254;
{ .SetGeometry }
Shape1251.Geometry := LineSet1252;
{ .AddChildren }
HAnimSegment1239.AddChildren([Shape1251]);
Shape1255 := TShapeNode.Create;
LineSet1256 := TLineSetNode.Create;
LineSet1256.SetVertexCount([2]);
ColorRGBA1257 := TColorRGBANode.Create;
ColorRGBA1257 := ColorRGBA81;
{ .SetColor }
LineSet1256.Color := ColorRGBA1257;
Coordinate1258 := TCoordinateNode.Create;
Coordinate1258.SetPoint([Vector3(-0.082,1.4488,-0.0353),Vector3(-0.1626,1.4072,-0.0031)]);
{ .SetCoord }
LineSet1256.Coord := Coordinate1258;
{ .SetGeometry }
Shape1255.Geometry := LineSet1256;
{ .AddChildren }
HAnimSegment1239.AddChildren([Shape1255]);
Shape1259 := TShapeNode.Create;
LineSet1260 := TLineSetNode.Create;
LineSet1260.SetVertexCount([2]);
ColorRGBA1261 := TColorRGBANode.Create;
ColorRGBA1261 := ColorRGBA81;
{ .SetColor }
LineSet1260.Color := ColorRGBA1261;
Coordinate1262 := TCoordinateNode.Create;
Coordinate1262.SetPoint([Vector3(-0.082,1.4488,-0.0353),Vector3(-0.1603,1.4098,-0.0826)]);
{ .SetCoord }
LineSet1260.Coord := Coordinate1262;
{ .SetGeometry }
Shape1259.Geometry := LineSet1260;
{ .AddChildren }
HAnimSegment1239.AddChildren([Shape1259]);
HAnimSite1263 := THAnimSiteNode.Create;
HAnimSite1263.NameField := 'r_clavicle_pt';
HAnimSite1263.Translation := Vector3(-0.0115,1.4943,0.04);
TouchSensor1264 := TTouchSensorNode.Create;
TouchSensor1264.Description := 'HAnimSite r_clavicale_pt';
{ .AddChildren }
HAnimSite1263.AddChildren([TouchSensor1264]);
Shape1265 := TShapeNode.Create;
Shape1265 := Shape117;
{ .AddChildren }
HAnimSite1263.AddChildren([Shape1265]);
{ .AddChildren }
HAnimSegment1239.AddChildren([HAnimSite1263]);
HAnimSite1266 := THAnimSiteNode.Create;
HAnimSite1266.NameField := 'r_acromion_pt';
HAnimSite1266.Translation := Vector3(-0.1905,1.4791,-0.0431);
TouchSensor1267 := TTouchSensorNode.Create;
TouchSensor1267.Description := 'HAnimSite r_acromion_pt';
{ .AddChildren }
HAnimSite1266.AddChildren([TouchSensor1267]);
Shape1268 := TShapeNode.Create;
Shape1268 := Shape117;
{ .AddChildren }
HAnimSite1266.AddChildren([Shape1268]);
{ .AddChildren }
HAnimSegment1239.AddChildren([HAnimSite1266]);
HAnimSite1269 := THAnimSiteNode.Create;
HAnimSite1269.NameField := 'r_axilla_proximal_pt';
HAnimSite1269.Translation := Vector3(-0.1626,1.4072,-0.0031);
TouchSensor1270 := TTouchSensorNode.Create;
TouchSensor1270.Description := 'HAnimSite r_axilla_ant_pt';
{ .AddChildren }
HAnimSite1269.AddChildren([TouchSensor1270]);
Shape1271 := TShapeNode.Create;
Shape1271 := Shape117;
{ .AddChildren }
HAnimSite1269.AddChildren([Shape1271]);
{ .AddChildren }
HAnimSegment1239.AddChildren([HAnimSite1269]);
HAnimSite1272 := THAnimSiteNode.Create;
HAnimSite1272.NameField := 'r_axilla_distal_pt';
HAnimSite1272.Translation := Vector3(-0.1603,1.4098,-0.0826);
TouchSensor1273 := TTouchSensorNode.Create;
TouchSensor1273.Description := 'HAnimSite r_axilla_post_pt';
{ .AddChildren }
HAnimSite1272.AddChildren([TouchSensor1273]);
Shape1274 := TShapeNode.Create;
Shape1274 := Shape117;
{ .AddChildren }
HAnimSite1272.AddChildren([Shape1274]);
{ .AddChildren }
HAnimSegment1239.AddChildren([HAnimSite1272]);
{ .AddChildren }
HAnimJoint1238.AddChildren([HAnimSegment1239]);
HAnimJoint1275 := THAnimJointNode.Create;
HAnimJoint1275.NameField := 'r_acromioclavicular';
HAnimJoint1275.Center := Vector3(-0.0962,1.4269,-0.0424);
HAnimSegment1276 := THAnimSegmentNode.Create;
HAnimSegment1276.NameField := 'r_scapula';
TouchSensor1277 := TTouchSensorNode.Create;
TouchSensor1277.Description := 'HAnimJoint r_acromioclavicular, HAnimSegment r_scapula';
{ .AddChildren }
HAnimSegment1276.AddChildren([TouchSensor1277]);
Transform1278 := TTransformNode.Create;
Transform1278.Translation := Vector3(-0.0962,1.4269,-0.0424);
Shape1279 := TShapeNode.Create;
Shape1279 := Shape54;
{ .AddChild }
Transform1278.AddChildren([Shape1279]);
{ .AddChildren }
HAnimSegment1276.AddChildren([Transform1278]);
Shape1280 := TShapeNode.Create;
LineSet1281 := TLineSetNode.Create;
LineSet1281.SetVertexCount([2]);
ColorRGBA1282 := TColorRGBANode.Create;
ColorRGBA1282 := ColorRGBA60;
{ .SetColor }
LineSet1281.Color := ColorRGBA1282;
Coordinate1283 := TCoordinateNode.Create;
Coordinate1283.SetPoint([Vector3(-0.0962,1.4269,-0.0424),Vector3(-0.2029,1.4376,-0.0387)]);
{ .SetCoord }
LineSet1281.Coord := Coordinate1283;
{ .SetGeometry }
Shape1280.Geometry := LineSet1281;
{ .AddChildren }
HAnimSegment1276.AddChildren([Shape1280]);
{ .AddChildren }
HAnimJoint1275.AddChildren([HAnimSegment1276]);
HAnimJoint1284 := THAnimJointNode.Create;
HAnimJoint1284.NameField := 'r_shoulder';
HAnimJoint1284.Center := Vector3(-0.2029,1.4376,-0.0387);
HAnimSegment1285 := THAnimSegmentNode.Create;
HAnimSegment1285.NameField := 'r_upperarm';
TouchSensor1286 := TTouchSensorNode.Create;
TouchSensor1286.Description := 'HAnimJoint r_shoulder, HAnimSegment r_upperarm';
{ .AddChildren }
HAnimSegment1285.AddChildren([TouchSensor1286]);
Transform1287 := TTransformNode.Create;
Transform1287.Translation := Vector3(-0.2029,1.4376,-0.0387);
Shape1288 := TShapeNode.Create;
Shape1288 := Shape54;
{ .AddChild }
Transform1287.AddChildren([Shape1288]);
{ .AddChildren }
HAnimSegment1285.AddChildren([Transform1287]);
Shape1289 := TShapeNode.Create;
LineSet1290 := TLineSetNode.Create;
LineSet1290.SetVertexCount([2]);
ColorRGBA1291 := TColorRGBANode.Create;
ColorRGBA1291 := ColorRGBA60;
{ .SetColor }
LineSet1290.Color := ColorRGBA1291;
Coordinate1292 := TCoordinateNode.Create;
Coordinate1292.SetPoint([Vector3(-0.2029,1.4376,-0.0387),Vector3(-0.2014,1.1357,-0.0682)]);
{ .SetCoord }
LineSet1290.Coord := Coordinate1292;
{ .SetGeometry }
Shape1289.Geometry := LineSet1290;
{ .AddChildren }
HAnimSegment1285.AddChildren([Shape1289]);
Shape1293 := TShapeNode.Create;
LineSet1294 := TLineSetNode.Create;
LineSet1294.SetVertexCount([2]);
ColorRGBA1295 := TColorRGBANode.Create;
ColorRGBA1295 := ColorRGBA81;
{ .SetColor }
LineSet1294.Color := ColorRGBA1295;
Coordinate1296 := TCoordinateNode.Create;
Coordinate1296.SetPoint([Vector3(-0.2029,1.4376,-0.0387),Vector3(-0.2224,1.1517,-0.1033)]);
{ .SetCoord }
LineSet1294.Coord := Coordinate1296;
{ .SetGeometry }
Shape1293.Geometry := LineSet1294;
{ .AddChildren }
HAnimSegment1285.AddChildren([Shape1293]);
HAnimSite1297 := THAnimSiteNode.Create;
HAnimSite1297.NameField := 'r_humeral_lateral_epicondyle_pt';
HAnimSite1297.Translation := Vector3(-0.2224,1.1517,-0.1033);
TouchSensor1298 := TTouchSensorNode.Create;
TouchSensor1298.Description := 'HAnimSite r_humeral_lateral_epicn_pt';
{ .AddChildren }
HAnimSite1297.AddChildren([TouchSensor1298]);
Shape1299 := TShapeNode.Create;
Shape1299 := Shape117;
{ .AddChildren }
HAnimSite1297.AddChildren([Shape1299]);
{ .AddChildren }
HAnimSegment1285.AddChildren([HAnimSite1297]);
{ .AddChildren }
HAnimJoint1284.AddChildren([HAnimSegment1285]);
HAnimJoint1300 := THAnimJointNode.Create;
HAnimJoint1300.NameField := 'r_elbow';
HAnimJoint1300.Center := Vector3(-0.2014,1.1357,-0.0682);
HAnimSegment1301 := THAnimSegmentNode.Create;
HAnimSegment1301.NameField := 'r_forearm';
TouchSensor1302 := TTouchSensorNode.Create;
TouchSensor1302.Description := 'HAnimJoint r_elbow, HAnimSegment r_forearm';
{ .AddChildren }
HAnimSegment1301.AddChildren([TouchSensor1302]);
Transform1303 := TTransformNode.Create;
Transform1303.Translation := Vector3(-0.2014,1.1357,-0.0682);
Shape1304 := TShapeNode.Create;
Shape1304 := Shape54;
{ .AddChild }
Transform1303.AddChildren([Shape1304]);
{ .AddChildren }
HAnimSegment1301.AddChildren([Transform1303]);
Shape1305 := TShapeNode.Create;
LineSet1306 := TLineSetNode.Create;
LineSet1306.SetVertexCount([2]);
ColorRGBA1307 := TColorRGBANode.Create;
ColorRGBA1307 := ColorRGBA60;
{ .SetColor }
LineSet1306.Color := ColorRGBA1307;
Coordinate1308 := TCoordinateNode.Create;
Coordinate1308.SetPoint([Vector3(-0.2014,1.1357,-0.0682),Vector3(-0.1984,0.8663,-0.0583)]);
{ .SetCoord }
LineSet1306.Coord := Coordinate1308;
{ .SetGeometry }
Shape1305.Geometry := LineSet1306;
{ .AddChildren }
HAnimSegment1301.AddChildren([Shape1305]);
Shape1309 := TShapeNode.Create;
LineSet1310 := TLineSetNode.Create;
LineSet1310.SetVertexCount([2]);
ColorRGBA1311 := TColorRGBANode.Create;
ColorRGBA1311 := ColorRGBA81;
{ .SetColor }
LineSet1310.Color := ColorRGBA1311;
Coordinate1312 := TCoordinateNode.Create;
Coordinate1312.SetPoint([Vector3(-0.2014,1.1357,-0.0682),Vector3(-0.1884,0.8676,-0.036)]);
{ .SetCoord }
LineSet1310.Coord := Coordinate1312;
{ .SetGeometry }
Shape1309.Geometry := LineSet1310;
{ .AddChildren }
HAnimSegment1301.AddChildren([Shape1309]);
Shape1313 := TShapeNode.Create;
LineSet1314 := TLineSetNode.Create;
LineSet1314.SetVertexCount([2]);
ColorRGBA1315 := TColorRGBANode.Create;
ColorRGBA1315 := ColorRGBA81;
{ .SetColor }
LineSet1314.Color := ColorRGBA1315;
Coordinate1316 := TCoordinateNode.Create;
Coordinate1316.SetPoint([Vector3(-0.2014,1.1357,-0.0682),Vector3(-0.1907,1.1405,-0.1065)]);
{ .SetCoord }
LineSet1314.Coord := Coordinate1316;
{ .SetGeometry }
Shape1313.Geometry := LineSet1314;
{ .AddChildren }
HAnimSegment1301.AddChildren([Shape1313]);
Shape1317 := TShapeNode.Create;
LineSet1318 := TLineSetNode.Create;
LineSet1318.SetVertexCount([2]);
ColorRGBA1319 := TColorRGBANode.Create;
ColorRGBA1319 := ColorRGBA81;
{ .SetColor }
LineSet1318.Color := ColorRGBA1319;
Coordinate1320 := TCoordinateNode.Create;
Coordinate1320.SetPoint([Vector3(-0.2014,1.1357,-0.0682),Vector3(-0.168,1.1298,-0.1062)]);
{ .SetCoord }
LineSet1318.Coord := Coordinate1320;
{ .SetGeometry }
Shape1317.Geometry := LineSet1318;
{ .AddChildren }
HAnimSegment1301.AddChildren([Shape1317]);
Shape1321 := TShapeNode.Create;
LineSet1322 := TLineSetNode.Create;
LineSet1322.SetVertexCount([2]);
ColorRGBA1323 := TColorRGBANode.Create;
ColorRGBA1323 := ColorRGBA81;
{ .SetColor }
LineSet1322.Color := ColorRGBA1323;
Coordinate1324 := TCoordinateNode.Create;
Coordinate1324.SetPoint([Vector3(-0.2014,1.1357,-0.0682),Vector3(-0.213,1.1305,-0.1091)]);
{ .SetCoord }
LineSet1322.Coord := Coordinate1324;
{ .SetGeometry }
Shape1321.Geometry := LineSet1322;
{ .AddChildren }
HAnimSegment1301.AddChildren([Shape1321]);
HAnimSite1325 := THAnimSiteNode.Create;
HAnimSite1325.NameField := 'r_radial_styloid_pt';
HAnimSite1325.Translation := Vector3(-0.1884,0.8676,-0.036);
TouchSensor1326 := TTouchSensorNode.Create;
TouchSensor1326.Description := 'HAnimSite r_radial_styloid_pt';
{ .AddChildren }
HAnimSite1325.AddChildren([TouchSensor1326]);
Shape1327 := TShapeNode.Create;
Shape1327 := Shape117;
{ .AddChildren }
HAnimSite1325.AddChildren([Shape1327]);
{ .AddChildren }
HAnimSegment1301.AddChildren([HAnimSite1325]);
HAnimSite1328 := THAnimSiteNode.Create;
HAnimSite1328.NameField := 'r_olecranon_pt';
HAnimSite1328.Translation := Vector3(-0.1907,1.1405,-0.1065);
TouchSensor1329 := TTouchSensorNode.Create;
TouchSensor1329.Description := 'HAnimSite r_olecranon_pt';
{ .AddChildren }
HAnimSite1328.AddChildren([TouchSensor1329]);
Shape1330 := TShapeNode.Create;
Shape1330 := Shape117;
{ .AddChildren }
HAnimSite1328.AddChildren([Shape1330]);
{ .AddChildren }
HAnimSegment1301.AddChildren([HAnimSite1328]);
HAnimSite1331 := THAnimSiteNode.Create;
HAnimSite1331.NameField := 'r_humeral_medial_epicondyle_pt';
HAnimSite1331.Translation := Vector3(-0.168,1.1298,-0.1062);
TouchSensor1332 := TTouchSensorNode.Create;
TouchSensor1332.Description := 'HAnimSite r_humeral_medial_epicn_pt';
{ .AddChildren }
HAnimSite1331.AddChildren([TouchSensor1332]);
Shape1333 := TShapeNode.Create;
Shape1333 := Shape117;
{ .AddChildren }
HAnimSite1331.AddChildren([Shape1333]);
{ .AddChildren }
HAnimSegment1301.AddChildren([HAnimSite1331]);
HAnimSite1334 := THAnimSiteNode.Create;
HAnimSite1334.NameField := 'r_radiale_pt';
HAnimSite1334.Translation := Vector3(-0.213,1.1305,-0.1091);
TouchSensor1335 := TTouchSensorNode.Create;
TouchSensor1335.Description := 'HAnimSite r_radiale_pt';
{ .AddChildren }
HAnimSite1334.AddChildren([TouchSensor1335]);
Shape1336 := TShapeNode.Create;
Shape1336 := Shape117;
{ .AddChildren }
HAnimSite1334.AddChildren([Shape1336]);
{ .AddChildren }
HAnimSegment1301.AddChildren([HAnimSite1334]);
{ .AddChildren }
HAnimJoint1300.AddChildren([HAnimSegment1301]);
HAnimJoint1337 := THAnimJointNode.Create;
HAnimJoint1337.NameField := 'r_radiocarpal';
HAnimJoint1337.Center := Vector3(-0.1984,0.8663,-0.0583);
HAnimSegment1338 := THAnimSegmentNode.Create;
HAnimSegment1338.NameField := 'r_carpal';
TouchSensor1339 := TTouchSensorNode.Create;
TouchSensor1339.Description := 'HAnimJoint r_radiocarpal, HAnimSegment r_carpal';
{ .AddChildren }
HAnimSegment1338.AddChildren([TouchSensor1339]);
Transform1340 := TTransformNode.Create;
Transform1340.Translation := Vector3(-0.1984,0.8663,-0.0583);
Shape1341 := TShapeNode.Create;
Shape1341 := Shape54;
{ .AddChild }
Transform1340.AddChildren([Shape1341]);
{ .AddChildren }
HAnimSegment1338.AddChildren([Transform1340]);
Shape1342 := TShapeNode.Create;
LineSet1343 := TLineSetNode.Create;
LineSet1343.SetVertexCount([2]);
ColorRGBA1344 := TColorRGBANode.Create;
ColorRGBA1344 := ColorRGBA60;
{ .SetColor }
LineSet1343.Color := ColorRGBA1344;
Coordinate1345 := TCoordinateNode.Create;
Coordinate1345.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1924,0.8472,-0.0534)]);
{ .SetCoord }
LineSet1343.Coord := Coordinate1345;
{ .SetGeometry }
Shape1342.Geometry := LineSet1343;
{ .AddChildren }
HAnimSegment1338.AddChildren([Shape1342]);
Shape1346 := TShapeNode.Create;
LineSet1347 := TLineSetNode.Create;
LineSet1347.SetVertexCount([2]);
ColorRGBA1348 := TColorRGBANode.Create;
ColorRGBA1348 := ColorRGBA60;
{ .SetColor }
LineSet1347.Color := ColorRGBA1348;
Coordinate1349 := TCoordinateNode.Create;
Coordinate1349.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1983,0.8024,-0.028)]);
{ .SetCoord }
LineSet1347.Coord := Coordinate1349;
{ .SetGeometry }
Shape1346.Geometry := LineSet1347;
{ .AddChildren }
HAnimSegment1338.AddChildren([Shape1346]);
Shape1350 := TShapeNode.Create;
LineSet1351 := TLineSetNode.Create;
LineSet1351.SetVertexCount([2]);
ColorRGBA1352 := TColorRGBANode.Create;
ColorRGBA1352 := ColorRGBA60;
{ .SetColor }
LineSet1351.Color := ColorRGBA1352;
Coordinate1353 := TCoordinateNode.Create;
Coordinate1353.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1987,0.8029,-0.053)]);
{ .SetCoord }
LineSet1351.Coord := Coordinate1353;
{ .SetGeometry }
Shape1350.Geometry := LineSet1351;
{ .AddChildren }
HAnimSegment1338.AddChildren([Shape1350]);
Shape1354 := TShapeNode.Create;
LineSet1355 := TLineSetNode.Create;
LineSet1355.SetVertexCount([2]);
ColorRGBA1356 := TColorRGBANode.Create;
ColorRGBA1356 := ColorRGBA60;
{ .SetColor }
LineSet1355.Color := ColorRGBA1356;
Coordinate1357 := TCoordinateNode.Create;
Coordinate1357.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1956,0.8019,-0.0794)]);
{ .SetCoord }
LineSet1355.Coord := Coordinate1357;
{ .SetGeometry }
Shape1354.Geometry := LineSet1355;
{ .AddChildren }
HAnimSegment1338.AddChildren([Shape1354]);
Shape1358 := TShapeNode.Create;
LineSet1359 := TLineSetNode.Create;
LineSet1359.SetVertexCount([2]);
ColorRGBA1360 := TColorRGBANode.Create;
ColorRGBA1360 := ColorRGBA60;
{ .SetColor }
LineSet1359.Color := ColorRGBA1360;
Coordinate1361 := TCoordinateNode.Create;
Coordinate1361.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1925,0.8066,-0.1036)]);
{ .SetCoord }
LineSet1359.Coord := Coordinate1361;
{ .SetGeometry }
Shape1358.Geometry := LineSet1359;
{ .AddChildren }
HAnimSegment1338.AddChildren([Shape1358]);
Shape1362 := TShapeNode.Create;
LineSet1363 := TLineSetNode.Create;
LineSet1363.SetVertexCount([2]);
ColorRGBA1364 := TColorRGBANode.Create;
ColorRGBA1364 := ColorRGBA81;
{ .SetColor }
LineSet1363.Color := ColorRGBA1364;
Coordinate1365 := TCoordinateNode.Create;
Coordinate1365.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1977,0.8169,-0.0177)]);
{ .SetCoord }
LineSet1363.Coord := Coordinate1365;
{ .SetGeometry }
Shape1362.Geometry := LineSet1363;
{ .AddChildren }
HAnimSegment1338.AddChildren([Shape1362]);
Shape1366 := TShapeNode.Create;
LineSet1367 := TLineSetNode.Create;
LineSet1367.SetVertexCount([2]);
ColorRGBA1368 := TColorRGBANode.Create;
ColorRGBA1368 := ColorRGBA81;
{ .SetColor }
LineSet1367.Color := ColorRGBA1368;
Coordinate1369 := TCoordinateNode.Create;
Coordinate1369.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.2117,0.8562,-0.0584)]);
{ .SetCoord }
LineSet1367.Coord := Coordinate1369;
{ .SetGeometry }
Shape1366.Geometry := LineSet1367;
{ .AddChildren }
HAnimSegment1338.AddChildren([Shape1366]);
Shape1370 := TShapeNode.Create;
LineSet1371 := TLineSetNode.Create;
LineSet1371.SetVertexCount([2]);
ColorRGBA1372 := TColorRGBANode.Create;
ColorRGBA1372 := ColorRGBA81;
{ .SetColor }
LineSet1371.Color := ColorRGBA1372;
Coordinate1373 := TCoordinateNode.Create;
Coordinate1373.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1929,0.789,-0.1064)]);
{ .SetCoord }
LineSet1371.Coord := Coordinate1373;
{ .SetGeometry }
Shape1370.Geometry := LineSet1371;
{ .AddChildren }
HAnimSegment1338.AddChildren([Shape1370]);
Shape1374 := TShapeNode.Create;
LineSet1375 := TLineSetNode.Create;
LineSet1375.SetVertexCount([2]);
ColorRGBA1376 := TColorRGBANode.Create;
ColorRGBA1376 := ColorRGBA818;
{ .SetColor }
LineSet1375.Color := ColorRGBA1376;
Coordinate1377 := TCoordinateNode.Create;
Coordinate1377.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.3,0.75,0.45)]);
{ .SetCoord }
LineSet1375.Coord := Coordinate1377;
{ .SetGeometry }
Shape1374.Geometry := LineSet1375;
{ .AddChildren }
HAnimSegment1338.AddChildren([Shape1374]);
HAnimSite1378 := THAnimSiteNode.Create;
HAnimSite1378.NameField := 'r_metacarpal_phalanx_2_pt';
HAnimSite1378.Translation := Vector3(-0.1977,0.8169,-0.0177);
TouchSensor1379 := TTouchSensorNode.Create;
TouchSensor1379.Description := 'HAnimSite r_metacarpal_pha2_pt';
{ .AddChildren }
HAnimSite1378.AddChildren([TouchSensor1379]);
Shape1380 := TShapeNode.Create;
Shape1380 := Shape117;
{ .AddChildren }
HAnimSite1378.AddChildren([Shape1380]);
{ .AddChildren }
HAnimSegment1338.AddChildren([HAnimSite1378]);
HAnimSite1381 := THAnimSiteNode.Create;
HAnimSite1381.NameField := 'r_ulnar_styloid_pt';
HAnimSite1381.Translation := Vector3(-0.2117,0.8562,-0.0584);
TouchSensor1382 := TTouchSensorNode.Create;
TouchSensor1382.Description := 'HAnimSite r_ulnar_styloid_pt';
{ .AddChildren }
HAnimSite1381.AddChildren([TouchSensor1382]);
Shape1383 := TShapeNode.Create;
Shape1383 := Shape117;
{ .AddChildren }
HAnimSite1381.AddChildren([Shape1383]);
{ .AddChildren }
HAnimSegment1338.AddChildren([HAnimSite1381]);
HAnimSite1384 := THAnimSiteNode.Create;
HAnimSite1384.NameField := 'r_metacarpal_phalanx_5_pt';
HAnimSite1384.Translation := Vector3(-0.1929,0.789,-0.1064);
TouchSensor1385 := TTouchSensorNode.Create;
TouchSensor1385.Description := 'HAnimSite r_metacarpal_pha5_pt';
{ .AddChildren }
HAnimSite1384.AddChildren([TouchSensor1385]);
Shape1386 := TShapeNode.Create;
Shape1386 := Shape117;
{ .AddChildren }
HAnimSite1384.AddChildren([Shape1386]);
{ .AddChildren }
HAnimSegment1338.AddChildren([HAnimSite1384]);
HAnimSite1387 := THAnimSiteNode.Create;
HAnimSite1387.NameField := 'r_hand_front_view';
HAnimSite1387.Translation := Vector3(-0.3,0.75,0.45);
TouchSensor1388 := TTouchSensorNode.Create;
TouchSensor1388.Description := 'HAnimSite r_hand_front_view';
{ .AddChildren }
HAnimSite1387.AddChildren([TouchSensor1388]);
Shape1389 := TShapeNode.Create;
Shape1389 := Shape117;
{ .AddChildren }
HAnimSite1387.AddChildren([Shape1389]);
Viewpoint1390 := TViewpointNode.Create;
Viewpoint1390.Description := 'right hand front';
Viewpoint1390.Position := Vector3(0,0,0);
Viewpoint1390.CenterOfRotation := Vector3(0,0.7,0);
{ .AddChildren }
HAnimSite1387.AddChildren([Viewpoint1390]);
Anchor1391 := TAnchorNode.Create;
Anchor1391.Description := 'HAnimSite hanim_r_hand_front_view Viewpoint';
Anchor1391.SetUrl(['#hanim_r_hand_front_viewpoint']);
LOD1392 := TLODNode.Create;
LOD1392.ForceTransitions := True;
LOD1392.SetRange([0.04]);
WorldInfo1393 := TWorldInfoNode.Create;
WorldInfo1393.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1392.AddChildren([WorldInfo1393]);
Shape1394 := TShapeNode.Create;
Shape1394 := Shape827;
{ .AddChildren }
LOD1392.AddChildren([Shape1394]);
{ .AddChildren }
Anchor1391.AddChildren([LOD1392]);
{ .AddChildren }
HAnimSite1387.AddChildren([Anchor1391]);
{ .AddChildren }
HAnimSegment1338.AddChildren([HAnimSite1387]);
{ .AddChildren }
HAnimJoint1337.AddChildren([HAnimSegment1338]);
HAnimJoint1395 := THAnimJointNode.Create;
HAnimJoint1395.NameField := 'r_carpometacarpal_1';
HAnimJoint1395.Center := Vector3(-0.1924,0.8472,-0.0534);
HAnimSegment1396 := THAnimSegmentNode.Create;
HAnimSegment1396.NameField := 'r_metacarpal_1';
TouchSensor1397 := TTouchSensorNode.Create;
TouchSensor1397.Description := 'HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1';
{ .AddChildren }
HAnimSegment1396.AddChildren([TouchSensor1397]);
Transform1398 := TTransformNode.Create;
Transform1398.Translation := Vector3(-0.1924,0.8472,-0.0534);
Shape1399 := TShapeNode.Create;
Shape1399 := Shape54;
{ .AddChild }
Transform1398.AddChildren([Shape1399]);
{ .AddChildren }
HAnimSegment1396.AddChildren([Transform1398]);
Shape1400 := TShapeNode.Create;
LineSet1401 := TLineSetNode.Create;
LineSet1401.SetVertexCount([2]);
ColorRGBA1402 := TColorRGBANode.Create;
ColorRGBA1402 := ColorRGBA60;
{ .SetColor }
LineSet1401.Color := ColorRGBA1402;
Coordinate1403 := TCoordinateNode.Create;
Coordinate1403.SetPoint([Vector3(-0.1924,0.8472,-0.0534),Vector3(-0.1951,0.8226,0.0246)]);
{ .SetCoord }
LineSet1401.Coord := Coordinate1403;
{ .SetGeometry }
Shape1400.Geometry := LineSet1401;
{ .AddChildren }
HAnimSegment1396.AddChildren([Shape1400]);
{ .AddChildren }
HAnimJoint1395.AddChildren([HAnimSegment1396]);
HAnimJoint1404 := THAnimJointNode.Create;
HAnimJoint1404.NameField := 'r_metacarpophalangeal_1';
HAnimJoint1404.Center := Vector3(-0.1951,0.8226,0.0246);
HAnimSegment1405 := THAnimSegmentNode.Create;
HAnimSegment1405.NameField := 'r_carpal_proximal_phalanx_1';
TouchSensor1406 := TTouchSensorNode.Create;
TouchSensor1406.Description := 'HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1';
{ .AddChildren }
HAnimSegment1405.AddChildren([TouchSensor1406]);
Transform1407 := TTransformNode.Create;
Transform1407.Translation := Vector3(-0.1951,0.8226,0.0246);
Shape1408 := TShapeNode.Create;
Shape1408 := Shape54;
{ .AddChild }
Transform1407.AddChildren([Shape1408]);
{ .AddChildren }
HAnimSegment1405.AddChildren([Transform1407]);
Shape1409 := TShapeNode.Create;
LineSet1410 := TLineSetNode.Create;
LineSet1410.SetVertexCount([2]);
ColorRGBA1411 := TColorRGBANode.Create;
ColorRGBA1411 := ColorRGBA60;
{ .SetColor }
LineSet1410.Color := ColorRGBA1411;
Coordinate1412 := TCoordinateNode.Create;
Coordinate1412.SetPoint([Vector3(-0.1951,0.8226,0.0246),Vector3(-0.1955,0.8159,0.0464)]);
{ .SetCoord }
LineSet1410.Coord := Coordinate1412;
{ .SetGeometry }
Shape1409.Geometry := LineSet1410;
{ .AddChildren }
HAnimSegment1405.AddChildren([Shape1409]);
{ .AddChildren }
HAnimJoint1404.AddChildren([HAnimSegment1405]);
HAnimJoint1413 := THAnimJointNode.Create;
HAnimJoint1413.NameField := 'r_carpal_interphalangeal_1';
HAnimJoint1413.Center := Vector3(-0.1955,0.8159,0.0464);
HAnimSegment1414 := THAnimSegmentNode.Create;
HAnimSegment1414.NameField := 'r_carpal_distal_phalanx_1';
TouchSensor1415 := TTouchSensorNode.Create;
TouchSensor1415.Description := 'HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1';
{ .AddChildren }
HAnimSegment1414.AddChildren([TouchSensor1415]);
Transform1416 := TTransformNode.Create;
Transform1416.Translation := Vector3(-0.1955,0.8159,0.0464);
Shape1417 := TShapeNode.Create;
Shape1417 := Shape54;
{ .AddChild }
Transform1416.AddChildren([Shape1417]);
{ .AddChildren }
HAnimSegment1414.AddChildren([Transform1416]);
Shape1418 := TShapeNode.Create;
LineSet1419 := TLineSetNode.Create;
LineSet1419.SetVertexCount([2]);
ColorRGBA1420 := TColorRGBANode.Create;
ColorRGBA1420 := ColorRGBA81;
{ .SetColor }
LineSet1419.Color := ColorRGBA1420;
Coordinate1421 := TCoordinateNode.Create;
Coordinate1421.SetPoint([Vector3(-0.1955,0.8159,0.0464),Vector3(-0.1869,0.809,0.082)]);
{ .SetCoord }
LineSet1419.Coord := Coordinate1421;
{ .SetGeometry }
Shape1418.Geometry := LineSet1419;
{ .AddChildren }
HAnimSegment1414.AddChildren([Shape1418]);
HAnimSite1422 := THAnimSiteNode.Create;
HAnimSite1422.NameField := 'r_carpal_distal_phalanx_1_pt';
HAnimSite1422.Translation := Vector3(-0.1869,0.809,0.082);
TouchSensor1423 := TTouchSensorNode.Create;
TouchSensor1423.Description := 'HAnimSite r_thumb_distal_tip';
{ .AddChildren }
HAnimSite1422.AddChildren([TouchSensor1423]);
Shape1424 := TShapeNode.Create;
Shape1424 := Shape117;
{ .AddChildren }
HAnimSite1422.AddChildren([Shape1424]);
{ .AddChildren }
HAnimSegment1414.AddChildren([HAnimSite1422]);
{ .AddChildren }
HAnimJoint1413.AddChildren([HAnimSegment1414]);
{ .AddChildren }
HAnimJoint1404.AddChildren([HAnimJoint1413]);
{ .AddChildren }
HAnimJoint1395.AddChildren([HAnimJoint1404]);
{ .AddChildren }
HAnimJoint1337.AddChildren([HAnimJoint1395]);
HAnimJoint1425 := THAnimJointNode.Create;
HAnimJoint1425.NameField := 'r_carpometacarpal_2';
HAnimJoint1425.Center := Vector3(-0.1983,0.8024,-0.028);
HAnimSegment1426 := THAnimSegmentNode.Create;
HAnimSegment1426.NameField := 'r_metacarpal_2';
TouchSensor1427 := TTouchSensorNode.Create;
TouchSensor1427.Description := 'HAnimJoint r_index0, HAnimSegment r_metacarpal_2';
{ .AddChildren }
HAnimSegment1426.AddChildren([TouchSensor1427]);
Transform1428 := TTransformNode.Create;
Transform1428.Translation := Vector3(-0.1983,0.8024,-0.028);
Shape1429 := TShapeNode.Create;
Shape1429 := Shape54;
{ .AddChild }
Transform1428.AddChildren([Shape1429]);
{ .AddChildren }
HAnimSegment1426.AddChildren([Transform1428]);
Shape1430 := TShapeNode.Create;
LineSet1431 := TLineSetNode.Create;
LineSet1431.SetVertexCount([2]);
ColorRGBA1432 := TColorRGBANode.Create;
ColorRGBA1432 := ColorRGBA60;
{ .SetColor }
LineSet1431.Color := ColorRGBA1432;
Coordinate1433 := TCoordinateNode.Create;
Coordinate1433.SetPoint([Vector3(-0.1983,0.8024,-0.028),Vector3(-0.1983,0.7815,-0.028)]);
{ .SetCoord }
LineSet1431.Coord := Coordinate1433;
{ .SetGeometry }
Shape1430.Geometry := LineSet1431;
{ .AddChildren }
HAnimSegment1426.AddChildren([Shape1430]);
{ .AddChildren }
HAnimJoint1425.AddChildren([HAnimSegment1426]);
HAnimJoint1434 := THAnimJointNode.Create;
HAnimJoint1434.NameField := 'r_metacarpophalangeal_2';
HAnimJoint1434.Center := Vector3(-0.1983,0.7815,-0.028);
HAnimSegment1435 := THAnimSegmentNode.Create;
HAnimSegment1435.NameField := 'r_carpal_proximal_phalanx_2';
TouchSensor1436 := TTouchSensorNode.Create;
TouchSensor1436.Description := 'HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment1435.AddChildren([TouchSensor1436]);
Transform1437 := TTransformNode.Create;
Transform1437.Translation := Vector3(-0.1983,0.7815,-0.028);
Shape1438 := TShapeNode.Create;
Shape1438 := Shape54;
{ .AddChild }
Transform1437.AddChildren([Shape1438]);
{ .AddChildren }
HAnimSegment1435.AddChildren([Transform1437]);
Shape1439 := TShapeNode.Create;
LineSet1440 := TLineSetNode.Create;
LineSet1440.SetVertexCount([2]);
ColorRGBA1441 := TColorRGBANode.Create;
ColorRGBA1441 := ColorRGBA60;
{ .SetColor }
LineSet1440.Color := ColorRGBA1441;
Coordinate1442 := TCoordinateNode.Create;
Coordinate1442.SetPoint([Vector3(-0.1983,0.7815,-0.028),Vector3(-0.2017,0.7363,-0.0248)]);
{ .SetCoord }
LineSet1440.Coord := Coordinate1442;
{ .SetGeometry }
Shape1439.Geometry := LineSet1440;
{ .AddChildren }
HAnimSegment1435.AddChildren([Shape1439]);
{ .AddChildren }
HAnimJoint1434.AddChildren([HAnimSegment1435]);
HAnimJoint1443 := THAnimJointNode.Create;
HAnimJoint1443.NameField := 'r_carpal_proximal_interphalangeal_2';
HAnimJoint1443.Center := Vector3(-0.2017,0.7363,-0.0248);
HAnimSegment1444 := THAnimSegmentNode.Create;
HAnimSegment1444.NameField := 'r_carpal_middle_phalanx_2';
TouchSensor1445 := TTouchSensorNode.Create;
TouchSensor1445.Description := 'HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2';
{ .AddChildren }
HAnimSegment1444.AddChildren([TouchSensor1445]);
Transform1446 := TTransformNode.Create;
Transform1446.Translation := Vector3(-0.2017,0.7363,-0.0248);
Shape1447 := TShapeNode.Create;
Shape1447 := Shape54;
{ .AddChild }
Transform1446.AddChildren([Shape1447]);
{ .AddChildren }
HAnimSegment1444.AddChildren([Transform1446]);
Shape1448 := TShapeNode.Create;
LineSet1449 := TLineSetNode.Create;
LineSet1449.SetVertexCount([2]);
ColorRGBA1450 := TColorRGBANode.Create;
ColorRGBA1450 := ColorRGBA60;
{ .SetColor }
LineSet1449.Color := ColorRGBA1450;
Coordinate1451 := TCoordinateNode.Create;
Coordinate1451.SetPoint([Vector3(-0.2017,0.7363,-0.0248),Vector3(-0.2028,0.7139,-0.0236)]);
{ .SetCoord }
LineSet1449.Coord := Coordinate1451;
{ .SetGeometry }
Shape1448.Geometry := LineSet1449;
{ .AddChildren }
HAnimSegment1444.AddChildren([Shape1448]);
{ .AddChildren }
HAnimJoint1443.AddChildren([HAnimSegment1444]);
HAnimJoint1452 := THAnimJointNode.Create;
HAnimJoint1452.NameField := 'r_carpal_distal_interphalangeal_2';
HAnimJoint1452.Center := Vector3(-0.2028,0.7139,-0.0236);
HAnimSegment1453 := THAnimSegmentNode.Create;
HAnimSegment1453.NameField := 'r_carpal_distal_phalanx_2';
TouchSensor1454 := TTouchSensorNode.Create;
TouchSensor1454.Description := 'HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2';
{ .AddChildren }
HAnimSegment1453.AddChildren([TouchSensor1454]);
Transform1455 := TTransformNode.Create;
Transform1455.Translation := Vector3(-0.2028,0.7139,-0.0236);
Shape1456 := TShapeNode.Create;
Shape1456 := Shape54;
{ .AddChild }
Transform1455.AddChildren([Shape1456]);
{ .AddChildren }
HAnimSegment1453.AddChildren([Transform1455]);
Shape1457 := TShapeNode.Create;
LineSet1458 := TLineSetNode.Create;
LineSet1458.SetVertexCount([2]);
ColorRGBA1459 := TColorRGBANode.Create;
ColorRGBA1459 := ColorRGBA81;
{ .SetColor }
LineSet1458.Color := ColorRGBA1459;
Coordinate1460 := TCoordinateNode.Create;
Coordinate1460.SetPoint([Vector3(-0.2028,0.7139,-0.0236),Vector3(-0.198,0.6883,-0.018)]);
{ .SetCoord }
LineSet1458.Coord := Coordinate1460;
{ .SetGeometry }
Shape1457.Geometry := LineSet1458;
{ .AddChildren }
HAnimSegment1453.AddChildren([Shape1457]);
Shape1461 := TShapeNode.Create;
LineSet1462 := TLineSetNode.Create;
LineSet1462.SetVertexCount([2]);
ColorRGBA1463 := TColorRGBANode.Create;
ColorRGBA1463 := ColorRGBA81;
{ .SetColor }
LineSet1462.Color := ColorRGBA1463;
Coordinate1464 := TCoordinateNode.Create;
Coordinate1464.SetPoint([Vector3(-0.2028,0.7139,-0.0236),Vector3(-0.1941,0.6772,-0.0423)]);
{ .SetCoord }
LineSet1462.Coord := Coordinate1464;
{ .SetGeometry }
Shape1461.Geometry := LineSet1462;
{ .AddChildren }
HAnimSegment1453.AddChildren([Shape1461]);
HAnimSite1465 := THAnimSiteNode.Create;
HAnimSite1465.NameField := 'r_carpal_distal_phalanx_2_pt';
HAnimSite1465.Translation := Vector3(-0.198,0.6883,-0.018);
TouchSensor1466 := TTouchSensorNode.Create;
TouchSensor1466.Description := 'HAnimSite r_index_distal_tip';
{ .AddChildren }
HAnimSite1465.AddChildren([TouchSensor1466]);
Shape1467 := TShapeNode.Create;
Shape1467 := Shape117;
{ .AddChildren }
HAnimSite1465.AddChildren([Shape1467]);
{ .AddChildren }
HAnimSegment1453.AddChildren([HAnimSite1465]);
HAnimSite1468 := THAnimSiteNode.Create;
HAnimSite1468.NameField := 'r_dactylion_pt';
HAnimSite1468.Translation := Vector3(-0.1941,0.6772,-0.0423);
TouchSensor1469 := TTouchSensorNode.Create;
TouchSensor1469.Description := 'HAnimSite r_dactylion_pt';
{ .AddChildren }
HAnimSite1468.AddChildren([TouchSensor1469]);
Shape1470 := TShapeNode.Create;
Shape1470 := Shape117;
{ .AddChildren }
HAnimSite1468.AddChildren([Shape1470]);
{ .AddChildren }
HAnimSegment1453.AddChildren([HAnimSite1468]);
{ .AddChildren }
HAnimJoint1452.AddChildren([HAnimSegment1453]);
{ .AddChildren }
HAnimJoint1443.AddChildren([HAnimJoint1452]);
{ .AddChildren }
HAnimJoint1434.AddChildren([HAnimJoint1443]);
{ .AddChildren }
HAnimJoint1425.AddChildren([HAnimJoint1434]);
{ .AddChildren }
HAnimJoint1337.AddChildren([HAnimJoint1425]);
HAnimJoint1471 := THAnimJointNode.Create;
HAnimJoint1471.NameField := 'r_carpometacarpal_3';
HAnimJoint1471.Center := Vector3(-0.1987,0.8029,-0.053);
HAnimSegment1472 := THAnimSegmentNode.Create;
HAnimSegment1472.NameField := 'r_metacarpal_3';
TouchSensor1473 := TTouchSensorNode.Create;
TouchSensor1473.Description := 'HAnimJoint r_middle0, HAnimSegment r_metacarpal_3';
{ .AddChildren }
HAnimSegment1472.AddChildren([TouchSensor1473]);
Transform1474 := TTransformNode.Create;
Transform1474.Translation := Vector3(-0.1987,0.8029,-0.053);
Shape1475 := TShapeNode.Create;
Shape1475 := Shape54;
{ .AddChild }
Transform1474.AddChildren([Shape1475]);
{ .AddChildren }
HAnimSegment1472.AddChildren([Transform1474]);
Shape1476 := TShapeNode.Create;
LineSet1477 := TLineSetNode.Create;
LineSet1477.SetVertexCount([2]);
ColorRGBA1478 := TColorRGBANode.Create;
ColorRGBA1478 := ColorRGBA60;
{ .SetColor }
LineSet1477.Color := ColorRGBA1478;
Coordinate1479 := TCoordinateNode.Create;
Coordinate1479.SetPoint([Vector3(-0.1987,0.8029,-0.053),Vector3(-0.1987,0.7818,-0.053)]);
{ .SetCoord }
LineSet1477.Coord := Coordinate1479;
{ .SetGeometry }
Shape1476.Geometry := LineSet1477;
{ .AddChildren }
HAnimSegment1472.AddChildren([Shape1476]);
{ .AddChildren }
HAnimJoint1471.AddChildren([HAnimSegment1472]);
HAnimJoint1480 := THAnimJointNode.Create;
HAnimJoint1480.NameField := 'r_metacarpophalangeal_3';
HAnimJoint1480.Center := Vector3(-0.1987,0.7818,-0.053);
HAnimSegment1481 := THAnimSegmentNode.Create;
HAnimSegment1481.NameField := 'r_carpal_proximal_phalanx_3';
TouchSensor1482 := TTouchSensorNode.Create;
TouchSensor1482.Description := 'HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3';
{ .AddChildren }
HAnimSegment1481.AddChildren([TouchSensor1482]);
Transform1483 := TTransformNode.Create;
Transform1483.Translation := Vector3(-0.1987,0.7818,-0.053);
Shape1484 := TShapeNode.Create;
Shape1484 := Shape54;
{ .AddChild }
Transform1483.AddChildren([Shape1484]);
{ .AddChildren }
HAnimSegment1481.AddChildren([Transform1483]);
Shape1485 := TShapeNode.Create;
LineSet1486 := TLineSetNode.Create;
LineSet1486.SetVertexCount([2]);
ColorRGBA1487 := TColorRGBANode.Create;
ColorRGBA1487 := ColorRGBA60;
{ .SetColor }
LineSet1486.Color := ColorRGBA1487;
Coordinate1488 := TCoordinateNode.Create;
Coordinate1488.SetPoint([Vector3(-0.1987,0.7818,-0.053),Vector3(-0.2013,0.7273,-0.0503)]);
{ .SetCoord }
LineSet1486.Coord := Coordinate1488;
{ .SetGeometry }
Shape1485.Geometry := LineSet1486;
{ .AddChildren }
HAnimSegment1481.AddChildren([Shape1485]);
{ .AddChildren }
HAnimJoint1480.AddChildren([HAnimSegment1481]);
HAnimJoint1489 := THAnimJointNode.Create;
HAnimJoint1489.NameField := 'r_carpal_proximal_interphalangeal_3';
HAnimJoint1489.Center := Vector3(-0.2013,0.7273,-0.0503);
HAnimSegment1490 := THAnimSegmentNode.Create;
HAnimSegment1490.NameField := 'r_carpal_middle_phalanx_3';
TouchSensor1491 := TTouchSensorNode.Create;
TouchSensor1491.Description := 'HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3';
{ .AddChildren }
HAnimSegment1490.AddChildren([TouchSensor1491]);
Transform1492 := TTransformNode.Create;
Transform1492.Translation := Vector3(-0.2013,0.7273,-0.0503);
Shape1493 := TShapeNode.Create;
Shape1493 := Shape54;
{ .AddChild }
Transform1492.AddChildren([Shape1493]);
{ .AddChildren }
HAnimSegment1490.AddChildren([Transform1492]);
Shape1494 := TShapeNode.Create;
LineSet1495 := TLineSetNode.Create;
LineSet1495.SetVertexCount([2]);
ColorRGBA1496 := TColorRGBANode.Create;
ColorRGBA1496 := ColorRGBA60;
{ .SetColor }
LineSet1495.Color := ColorRGBA1496;
Coordinate1497 := TCoordinateNode.Create;
Coordinate1497.SetPoint([Vector3(-0.2013,0.7273,-0.0503),Vector3(-0.2026,0.7011,-0.0494)]);
{ .SetCoord }
LineSet1495.Coord := Coordinate1497;
{ .SetGeometry }
Shape1494.Geometry := LineSet1495;
{ .AddChildren }
HAnimSegment1490.AddChildren([Shape1494]);
{ .AddChildren }
HAnimJoint1489.AddChildren([HAnimSegment1490]);
HAnimJoint1498 := THAnimJointNode.Create;
HAnimJoint1498.NameField := 'r_carpal_distal_interphalangeal_3';
HAnimJoint1498.Center := Vector3(-0.2026,0.7011,-0.0494);
HAnimSegment1499 := THAnimSegmentNode.Create;
HAnimSegment1499.NameField := 'r_carpal_distal_phalanx_3';
TouchSensor1500 := TTouchSensorNode.Create;
TouchSensor1500.Description := 'HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3';
{ .AddChildren }
HAnimSegment1499.AddChildren([TouchSensor1500]);
Transform1501 := TTransformNode.Create;
Transform1501.Translation := Vector3(-0.2026,0.7011,-0.0494);
Shape1502 := TShapeNode.Create;
Shape1502 := Shape54;
{ .AddChild }
Transform1501.AddChildren([Shape1502]);
{ .AddChildren }
HAnimSegment1499.AddChildren([Transform1501]);
Shape1503 := TShapeNode.Create;
LineSet1504 := TLineSetNode.Create;
LineSet1504.SetVertexCount([2]);
ColorRGBA1505 := TColorRGBANode.Create;
ColorRGBA1505 := ColorRGBA81;
{ .SetColor }
LineSet1504.Color := ColorRGBA1505;
Coordinate1506 := TCoordinateNode.Create;
Coordinate1506.SetPoint([Vector3(-0.2026,0.7011,-0.0494),Vector3(-0.1969,0.6758,-0.0427)]);
{ .SetCoord }
LineSet1504.Coord := Coordinate1506;
{ .SetGeometry }
Shape1503.Geometry := LineSet1504;
{ .AddChildren }
HAnimSegment1499.AddChildren([Shape1503]);
HAnimSite1507 := THAnimSiteNode.Create;
HAnimSite1507.NameField := 'r_carpal_distal_phalanx_3_pt';
HAnimSite1507.Translation := Vector3(-0.1969,0.6758,-0.0427);
TouchSensor1508 := TTouchSensorNode.Create;
TouchSensor1508.Description := 'HAnimSite r_middle_distal_tip';
{ .AddChildren }
HAnimSite1507.AddChildren([TouchSensor1508]);
Shape1509 := TShapeNode.Create;
Shape1509 := Shape117;
{ .AddChildren }
HAnimSite1507.AddChildren([Shape1509]);
{ .AddChildren }
HAnimSegment1499.AddChildren([HAnimSite1507]);
{ .AddChildren }
HAnimJoint1498.AddChildren([HAnimSegment1499]);
{ .AddChildren }
HAnimJoint1489.AddChildren([HAnimJoint1498]);
{ .AddChildren }
HAnimJoint1480.AddChildren([HAnimJoint1489]);
{ .AddChildren }
HAnimJoint1471.AddChildren([HAnimJoint1480]);
{ .AddChildren }
HAnimJoint1337.AddChildren([HAnimJoint1471]);
HAnimJoint1510 := THAnimJointNode.Create;
HAnimJoint1510.NameField := 'r_carpometacarpal_4';
HAnimJoint1510.Center := Vector3(-0.1956,0.8019,-0.0794);
HAnimSegment1511 := THAnimSegmentNode.Create;
HAnimSegment1511.NameField := 'r_metacarpal_4';
TouchSensor1512 := TTouchSensorNode.Create;
TouchSensor1512.Description := 'HAnimJoint r_ring0, HAnimSegment r_metacarpal_4';
{ .AddChildren }
HAnimSegment1511.AddChildren([TouchSensor1512]);
Transform1513 := TTransformNode.Create;
Transform1513.Translation := Vector3(-0.1956,0.8019,-0.0794);
Shape1514 := TShapeNode.Create;
Shape1514 := Shape54;
{ .AddChild }
Transform1513.AddChildren([Shape1514]);
{ .AddChildren }
HAnimSegment1511.AddChildren([Transform1513]);
Shape1515 := TShapeNode.Create;
LineSet1516 := TLineSetNode.Create;
LineSet1516.SetVertexCount([2]);
ColorRGBA1517 := TColorRGBANode.Create;
ColorRGBA1517 := ColorRGBA60;
{ .SetColor }
LineSet1516.Color := ColorRGBA1517;
Coordinate1518 := TCoordinateNode.Create;
Coordinate1518.SetPoint([Vector3(-0.1956,0.8019,-0.0794),Vector3(-0.1956,0.7815,-0.0794)]);
{ .SetCoord }
LineSet1516.Coord := Coordinate1518;
{ .SetGeometry }
Shape1515.Geometry := LineSet1516;
{ .AddChildren }
HAnimSegment1511.AddChildren([Shape1515]);
{ .AddChildren }
HAnimJoint1510.AddChildren([HAnimSegment1511]);
HAnimJoint1519 := THAnimJointNode.Create;
HAnimJoint1519.NameField := 'r_metacarpophalangeal_4';
HAnimJoint1519.Center := Vector3(-0.1956,0.7815,-0.0794);
HAnimSegment1520 := THAnimSegmentNode.Create;
HAnimSegment1520.NameField := 'r_carpal_proximal_phalanx_4';
TouchSensor1521 := TTouchSensorNode.Create;
TouchSensor1521.Description := 'HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4';
{ .AddChildren }
HAnimSegment1520.AddChildren([TouchSensor1521]);
Transform1522 := TTransformNode.Create;
Transform1522.Translation := Vector3(-0.1956,0.7815,-0.0794);
Shape1523 := TShapeNode.Create;
Shape1523 := Shape54;
{ .AddChild }
Transform1522.AddChildren([Shape1523]);
{ .AddChildren }
HAnimSegment1520.AddChildren([Transform1522]);
Shape1524 := TShapeNode.Create;
LineSet1525 := TLineSetNode.Create;
LineSet1525.SetVertexCount([2]);
ColorRGBA1526 := TColorRGBANode.Create;
ColorRGBA1526 := ColorRGBA60;
{ .SetColor }
LineSet1525.Color := ColorRGBA1526;
Coordinate1527 := TCoordinateNode.Create;
Coordinate1527.SetPoint([Vector3(-0.1956,0.7815,-0.0794),Vector3(-0.1973,0.7287,-0.0777)]);
{ .SetCoord }
LineSet1525.Coord := Coordinate1527;
{ .SetGeometry }
Shape1524.Geometry := LineSet1525;
{ .AddChildren }
HAnimSegment1520.AddChildren([Shape1524]);
{ .AddChildren }
HAnimJoint1519.AddChildren([HAnimSegment1520]);
HAnimJoint1528 := THAnimJointNode.Create;
HAnimJoint1528.NameField := 'r_carpal_proximal_interphalangeal_4';
HAnimJoint1528.Center := Vector3(-0.1973,0.7287,-0.0777);
HAnimSegment1529 := THAnimSegmentNode.Create;
HAnimSegment1529.NameField := 'r_carpal_middle_phalanx_4';
TouchSensor1530 := TTouchSensorNode.Create;
TouchSensor1530.Description := 'HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4';
{ .AddChildren }
HAnimSegment1529.AddChildren([TouchSensor1530]);
Transform1531 := TTransformNode.Create;
Transform1531.Translation := Vector3(-0.1973,0.7287,-0.0777);
Shape1532 := TShapeNode.Create;
Shape1532 := Shape54;
{ .AddChild }
Transform1531.AddChildren([Shape1532]);
{ .AddChildren }
HAnimSegment1529.AddChildren([Transform1531]);
Shape1533 := TShapeNode.Create;
LineSet1534 := TLineSetNode.Create;
LineSet1534.SetVertexCount([2]);
ColorRGBA1535 := TColorRGBANode.Create;
ColorRGBA1535 := ColorRGBA60;
{ .SetColor }
LineSet1534.Color := ColorRGBA1535;
Coordinate1536 := TCoordinateNode.Create;
Coordinate1536.SetPoint([Vector3(-0.1973,0.7287,-0.0777),Vector3(-0.1983,0.7045,-0.0767)]);
{ .SetCoord }
LineSet1534.Coord := Coordinate1536;
{ .SetGeometry }
Shape1533.Geometry := LineSet1534;
{ .AddChildren }
HAnimSegment1529.AddChildren([Shape1533]);
{ .AddChildren }
HAnimJoint1528.AddChildren([HAnimSegment1529]);
HAnimJoint1537 := THAnimJointNode.Create;
HAnimJoint1537.NameField := 'r_carpal_distal_interphalangeal_4';
HAnimJoint1537.Center := Vector3(-0.1983,0.7045,-0.0767);
HAnimSegment1538 := THAnimSegmentNode.Create;
HAnimSegment1538.NameField := 'r_carpal_distal_phalanx_4';
TouchSensor1539 := TTouchSensorNode.Create;
TouchSensor1539.Description := 'HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4';
{ .AddChildren }
HAnimSegment1538.AddChildren([TouchSensor1539]);
Transform1540 := TTransformNode.Create;
Transform1540.Translation := Vector3(-0.1983,0.7045,-0.0767);
Shape1541 := TShapeNode.Create;
Shape1541 := Shape54;
{ .AddChild }
Transform1540.AddChildren([Shape1541]);
{ .AddChildren }
HAnimSegment1538.AddChildren([Transform1540]);
Shape1542 := TShapeNode.Create;
LineSet1543 := TLineSetNode.Create;
LineSet1543.SetVertexCount([2]);
ColorRGBA1544 := TColorRGBANode.Create;
ColorRGBA1544 := ColorRGBA81;
{ .SetColor }
LineSet1543.Color := ColorRGBA1544;
Coordinate1545 := TCoordinateNode.Create;
Coordinate1545.SetPoint([Vector3(-0.1983,0.7045,-0.0767),Vector3(-0.1934,0.6778,-0.0693)]);
{ .SetCoord }
LineSet1543.Coord := Coordinate1545;
{ .SetGeometry }
Shape1542.Geometry := LineSet1543;
{ .AddChildren }
HAnimSegment1538.AddChildren([Shape1542]);
HAnimSite1546 := THAnimSiteNode.Create;
HAnimSite1546.NameField := 'r_carpal_distal_phalanx_4_pt';
HAnimSite1546.Translation := Vector3(-0.1934,0.6778,-0.0693);
TouchSensor1547 := TTouchSensorNode.Create;
TouchSensor1547.Description := 'HAnimSite r_ring_distal_tip';
{ .AddChildren }
HAnimSite1546.AddChildren([TouchSensor1547]);
Shape1548 := TShapeNode.Create;
Shape1548 := Shape117;
{ .AddChildren }
HAnimSite1546.AddChildren([Shape1548]);
{ .AddChildren }
HAnimSegment1538.AddChildren([HAnimSite1546]);
{ .AddChildren }
HAnimJoint1537.AddChildren([HAnimSegment1538]);
{ .AddChildren }
HAnimJoint1528.AddChildren([HAnimJoint1537]);
{ .AddChildren }
HAnimJoint1519.AddChildren([HAnimJoint1528]);
{ .AddChildren }
HAnimJoint1510.AddChildren([HAnimJoint1519]);
{ .AddChildren }
HAnimJoint1337.AddChildren([HAnimJoint1510]);
HAnimJoint1549 := THAnimJointNode.Create;
HAnimJoint1549.NameField := 'r_carpometacarpal_5';
HAnimJoint1549.Center := Vector3(-0.1925,0.8066,-0.1036);
HAnimSegment1550 := THAnimSegmentNode.Create;
HAnimSegment1550.NameField := 'r_metacarpal_5';
TouchSensor1551 := TTouchSensorNode.Create;
TouchSensor1551.Description := 'HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5';
{ .AddChildren }
HAnimSegment1550.AddChildren([TouchSensor1551]);
Transform1552 := TTransformNode.Create;
Transform1552.Translation := Vector3(-0.1925,0.8066,-0.1036);
Shape1553 := TShapeNode.Create;
Shape1553 := Shape54;
{ .AddChild }
Transform1552.AddChildren([Shape1553]);
{ .AddChildren }
HAnimSegment1550.AddChildren([Transform1552]);
Shape1554 := TShapeNode.Create;
LineSet1555 := TLineSetNode.Create;
LineSet1555.SetVertexCount([2]);
ColorRGBA1556 := TColorRGBANode.Create;
ColorRGBA1556 := ColorRGBA60;
{ .SetColor }
LineSet1555.Color := ColorRGBA1556;
Coordinate1557 := TCoordinateNode.Create;
Coordinate1557.SetPoint([Vector3(-0.1925,0.8066,-0.1036),Vector3(-0.1925,0.7866,-0.1036)]);
{ .SetCoord }
LineSet1555.Coord := Coordinate1557;
{ .SetGeometry }
Shape1554.Geometry := LineSet1555;
{ .AddChildren }
HAnimSegment1550.AddChildren([Shape1554]);
{ .AddChildren }
HAnimJoint1549.AddChildren([HAnimSegment1550]);
HAnimJoint1558 := THAnimJointNode.Create;
HAnimJoint1558.NameField := 'r_metacarpophalangeal_5';
HAnimJoint1558.Center := Vector3(-0.1925,0.7866,-0.1036);
HAnimSegment1559 := THAnimSegmentNode.Create;
HAnimSegment1559.NameField := 'r_carpal_proximal_phalanx_5';
TouchSensor1560 := TTouchSensorNode.Create;
TouchSensor1560.Description := 'HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5';
{ .AddChildren }
HAnimSegment1559.AddChildren([TouchSensor1560]);
Transform1561 := TTransformNode.Create;
Transform1561.Translation := Vector3(-0.1925,0.7866,-0.1036);
Shape1562 := TShapeNode.Create;
Shape1562 := Shape54;
{ .AddChild }
Transform1561.AddChildren([Shape1562]);
{ .AddChildren }
HAnimSegment1559.AddChildren([Transform1561]);
Shape1563 := TShapeNode.Create;
LineSet1564 := TLineSetNode.Create;
LineSet1564.SetVertexCount([2]);
ColorRGBA1565 := TColorRGBANode.Create;
ColorRGBA1565 := ColorRGBA60;
{ .SetColor }
LineSet1564.Color := ColorRGBA1565;
Coordinate1566 := TCoordinateNode.Create;
Coordinate1566.SetPoint([Vector3(-0.1925,0.7866,-0.1036),Vector3(-0.1938,0.7452,-0.1024)]);
{ .SetCoord }
LineSet1564.Coord := Coordinate1566;
{ .SetGeometry }
Shape1563.Geometry := LineSet1564;
{ .AddChildren }
HAnimSegment1559.AddChildren([Shape1563]);
{ .AddChildren }
HAnimJoint1558.AddChildren([HAnimSegment1559]);
HAnimJoint1567 := THAnimJointNode.Create;
HAnimJoint1567.NameField := 'r_carpal_proximal_interphalangeal_5';
HAnimJoint1567.Center := Vector3(-0.1938,0.7452,-0.1024);
HAnimSegment1568 := THAnimSegmentNode.Create;
HAnimSegment1568.NameField := 'r_carpal_middle_phalanx_5';
TouchSensor1569 := TTouchSensorNode.Create;
TouchSensor1569.Description := 'HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5';
{ .AddChildren }
HAnimSegment1568.AddChildren([TouchSensor1569]);
Transform1570 := TTransformNode.Create;
Transform1570.Translation := Vector3(-0.1938,0.7452,-0.1024);
Shape1571 := TShapeNode.Create;
Shape1571 := Shape54;
{ .AddChild }
Transform1570.AddChildren([Shape1571]);
{ .AddChildren }
HAnimSegment1568.AddChildren([Transform1570]);
Shape1572 := TShapeNode.Create;
LineSet1573 := TLineSetNode.Create;
LineSet1573.SetVertexCount([2]);
ColorRGBA1574 := TColorRGBANode.Create;
ColorRGBA1574 := ColorRGBA60;
{ .SetColor }
LineSet1573.Color := ColorRGBA1574;
Coordinate1575 := TCoordinateNode.Create;
Coordinate1575.SetPoint([Vector3(-0.1938,0.7452,-0.1024),Vector3(-0.1948,0.7277,-0.1017)]);
{ .SetCoord }
LineSet1573.Coord := Coordinate1575;
{ .SetGeometry }
Shape1572.Geometry := LineSet1573;
{ .AddChildren }
HAnimSegment1568.AddChildren([Shape1572]);
{ .AddChildren }
HAnimJoint1567.AddChildren([HAnimSegment1568]);
HAnimJoint1576 := THAnimJointNode.Create;
HAnimJoint1576.NameField := 'r_carpal_distal_interphalangeal_5';
HAnimJoint1576.Center := Vector3(-0.1948,0.7277,-0.1017);
HAnimSegment1577 := THAnimSegmentNode.Create;
HAnimSegment1577.NameField := 'r_carpal_distal_phalanx_5';
TouchSensor1578 := TTouchSensorNode.Create;
TouchSensor1578.Description := 'HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5';
{ .AddChildren }
HAnimSegment1577.AddChildren([TouchSensor1578]);
Transform1579 := TTransformNode.Create;
Transform1579.Translation := Vector3(-0.1948,0.7277,-0.1017);
Shape1580 := TShapeNode.Create;
Shape1580 := Shape54;
{ .AddChild }
Transform1579.AddChildren([Shape1580]);
{ .AddChildren }
HAnimSegment1577.AddChildren([Transform1579]);
Shape1581 := TShapeNode.Create;
LineSet1582 := TLineSetNode.Create;
LineSet1582.SetVertexCount([2]);
ColorRGBA1583 := TColorRGBANode.Create;
ColorRGBA1583 := ColorRGBA81;
{ .SetColor }
LineSet1582.Color := ColorRGBA1583;
Coordinate1584 := TCoordinateNode.Create;
Coordinate1584.SetPoint([Vector3(-0.1948,0.7277,-0.1017),Vector3(-0.1938,0.7035,-0.0949)]);
{ .SetCoord }
LineSet1582.Coord := Coordinate1584;
{ .SetGeometry }
Shape1581.Geometry := LineSet1582;
{ .AddChildren }
HAnimSegment1577.AddChildren([Shape1581]);
HAnimSite1585 := THAnimSiteNode.Create;
HAnimSite1585.NameField := 'r_carpal_distal_phalanx_5_pt';
HAnimSite1585.Translation := Vector3(-0.1938,0.7035,-0.0949);
TouchSensor1586 := TTouchSensorNode.Create;
TouchSensor1586.Description := 'HAnimSite r_pinky_distal_tip';
{ .AddChildren }
HAnimSite1585.AddChildren([TouchSensor1586]);
Shape1587 := TShapeNode.Create;
Shape1587 := Shape117;
{ .AddChildren }
HAnimSite1585.AddChildren([Shape1587]);
{ .AddChildren }
HAnimSegment1577.AddChildren([HAnimSite1585]);
{ .AddChildren }
HAnimJoint1576.AddChildren([HAnimSegment1577]);
{ .AddChildren }
HAnimJoint1567.AddChildren([HAnimJoint1576]);
{ .AddChildren }
HAnimJoint1558.AddChildren([HAnimJoint1567]);
{ .AddChildren }
HAnimJoint1549.AddChildren([HAnimJoint1558]);
{ .AddChildren }
HAnimJoint1337.AddChildren([HAnimJoint1549]);
{ .AddChildren }
HAnimJoint1300.AddChildren([HAnimJoint1337]);
{ .AddChildren }
HAnimJoint1284.AddChildren([HAnimJoint1300]);
{ .AddChildren }
HAnimJoint1275.AddChildren([HAnimJoint1284]);
{ .AddChildren }
HAnimJoint1238.AddChildren([HAnimJoint1275]);
{ .AddChildren }
HAnimJoint600.AddChildren([HAnimJoint1238]);
{ .AddChildren }
HAnimJoint591.AddChildren([HAnimJoint600]);
{ .AddChildren }
HAnimJoint582.AddChildren([HAnimJoint591]);
{ .AddChildren }
HAnimJoint573.AddChildren([HAnimJoint582]);
{ .AddChildren }
HAnimJoint564.AddChildren([HAnimJoint573]);
{ .AddChildren }
HAnimJoint555.AddChildren([HAnimJoint564]);
{ .AddChildren }
HAnimJoint546.AddChildren([HAnimJoint555]);
{ .AddChildren }
HAnimJoint537.AddChildren([HAnimJoint546]);
{ .AddChildren }
HAnimJoint514.AddChildren([HAnimJoint537]);
{ .AddChildren }
HAnimJoint498.AddChildren([HAnimJoint514]);
{ .AddChildren }
HAnimJoint489.AddChildren([HAnimJoint498]);
{ .AddChildren }
HAnimJoint480.AddChildren([HAnimJoint489]);
{ .AddChildren }
HAnimJoint471.AddChildren([HAnimJoint480]);
{ .AddChildren }
HAnimJoint441.AddChildren([HAnimJoint471]);
{ .AddChildren }
HAnimJoint432.AddChildren([HAnimJoint441]);
{ .AddChildren }
HAnimJoint423.AddChildren([HAnimJoint432]);
{ .AddChildren }
HAnimJoint400.AddChildren([HAnimJoint423]);
{ .AddChildren }
HAnimJoint50.AddChildren([HAnimJoint400]);
{ .AddSkeleton }
HAnimHumanoid41.SetSkeleton([HAnimJoint50]);
HAnimJoint1588 := THAnimJointNode.Create;
HAnimJoint1588 := HAnimJoint50;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1588;
HAnimJoint1589 := THAnimJointNode.Create;
HAnimJoint1589 := HAnimJoint66;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1589;
HAnimJoint1590 := THAnimJointNode.Create;
HAnimJoint1590 := HAnimJoint400;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1590;
HAnimJoint1591 := THAnimJointNode.Create;
HAnimJoint1591 := HAnimJoint423;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1591;
HAnimJoint1592 := THAnimJointNode.Create;
HAnimJoint1592 := HAnimJoint432;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1592;
HAnimJoint1593 := THAnimJointNode.Create;
HAnimJoint1593 := HAnimJoint441;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1593;
HAnimJoint1594 := THAnimJointNode.Create;
HAnimJoint1594 := HAnimJoint471;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1594;
HAnimJoint1595 := THAnimJointNode.Create;
HAnimJoint1595 := HAnimJoint480;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1595;
HAnimJoint1596 := THAnimJointNode.Create;
HAnimJoint1596 := HAnimJoint489;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1596;
HAnimJoint1597 := THAnimJointNode.Create;
HAnimJoint1597 := HAnimJoint498;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1597;
HAnimJoint1598 := THAnimJointNode.Create;
HAnimJoint1598 := HAnimJoint514;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1598;
HAnimJoint1599 := THAnimJointNode.Create;
HAnimJoint1599 := HAnimJoint537;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1599;
HAnimJoint1600 := THAnimJointNode.Create;
HAnimJoint1600 := HAnimJoint546;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1600;
HAnimJoint1601 := THAnimJointNode.Create;
HAnimJoint1601 := HAnimJoint555;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1601;
HAnimJoint1602 := THAnimJointNode.Create;
HAnimJoint1602 := HAnimJoint564;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1602;
HAnimJoint1603 := THAnimJointNode.Create;
HAnimJoint1603 := HAnimJoint573;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1603;
HAnimJoint1604 := THAnimJointNode.Create;
HAnimJoint1604 := HAnimJoint582;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1604;
HAnimJoint1605 := THAnimJointNode.Create;
HAnimJoint1605 := HAnimJoint591;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1605;
HAnimJoint1606 := THAnimJointNode.Create;
HAnimJoint1606 := HAnimJoint600;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1606;
HAnimJoint1607 := THAnimJointNode.Create;
HAnimJoint1607 := HAnimJoint631;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1607;
HAnimJoint1608 := THAnimJointNode.Create;
HAnimJoint1608 := HAnimJoint654;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1608;
HAnimJoint1609 := THAnimJointNode.Create;
HAnimJoint1609 := HAnimJoint663;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1609;
HAnimJoint1610 := THAnimJointNode.Create;
HAnimJoint1610 := HAnimJoint672;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1610;
HAnimJoint1611 := THAnimJointNode.Create;
HAnimJoint1611 := HAnimJoint681;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1611;
HAnimJoint1612 := THAnimJointNode.Create;
HAnimJoint1612 := HAnimJoint690;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1612;
HAnimJoint1613 := THAnimJointNode.Create;
HAnimJoint1613 := HAnimJoint699;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1613;
HAnimJoint1614 := THAnimJointNode.Create;
HAnimJoint1614 := HAnimJoint708;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1614;
HAnimJoint1615 := THAnimJointNode.Create;
HAnimJoint1615 := HAnimJoint869;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1615;
HAnimJoint1616 := THAnimJointNode.Create;
HAnimJoint1616 := HAnimJoint925;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1616;
HAnimJoint1617 := THAnimJointNode.Create;
HAnimJoint1617 := HAnimJoint1275;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1617;
HAnimJoint1618 := THAnimJointNode.Create;
HAnimJoint1618 := HAnimJoint1102;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1618;
HAnimJoint1619 := THAnimJointNode.Create;
HAnimJoint1619 := HAnimJoint1452;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1619;
HAnimJoint1620 := THAnimJointNode.Create;
HAnimJoint1620 := HAnimJoint1148;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1620;
HAnimJoint1621 := THAnimJointNode.Create;
HAnimJoint1621 := HAnimJoint1498;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1621;
HAnimJoint1622 := THAnimJointNode.Create;
HAnimJoint1622 := HAnimJoint1187;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1622;
HAnimJoint1623 := THAnimJointNode.Create;
HAnimJoint1623 := HAnimJoint1537;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1623;
HAnimJoint1624 := THAnimJointNode.Create;
HAnimJoint1624 := HAnimJoint1226;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1624;
HAnimJoint1625 := THAnimJointNode.Create;
HAnimJoint1625 := HAnimJoint1576;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1625;
HAnimJoint1626 := THAnimJointNode.Create;
HAnimJoint1626 := HAnimJoint1063;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1626;
HAnimJoint1627 := THAnimJointNode.Create;
HAnimJoint1627 := HAnimJoint1413;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1627;
HAnimJoint1628 := THAnimJointNode.Create;
HAnimJoint1628 := HAnimJoint1093;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1628;
HAnimJoint1629 := THAnimJointNode.Create;
HAnimJoint1629 := HAnimJoint1443;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1629;
HAnimJoint1630 := THAnimJointNode.Create;
HAnimJoint1630 := HAnimJoint1139;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1630;
HAnimJoint1631 := THAnimJointNode.Create;
HAnimJoint1631 := HAnimJoint1489;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1631;
HAnimJoint1632 := THAnimJointNode.Create;
HAnimJoint1632 := HAnimJoint1178;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1632;
HAnimJoint1633 := THAnimJointNode.Create;
HAnimJoint1633 := HAnimJoint1528;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1633;
HAnimJoint1634 := THAnimJointNode.Create;
HAnimJoint1634 := HAnimJoint1217;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1634;
HAnimJoint1635 := THAnimJointNode.Create;
HAnimJoint1635 := HAnimJoint1567;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1635;
HAnimJoint1636 := THAnimJointNode.Create;
HAnimJoint1636 := HAnimJoint1045;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1636;
HAnimJoint1637 := THAnimJointNode.Create;
HAnimJoint1637 := HAnimJoint1395;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1637;
HAnimJoint1638 := THAnimJointNode.Create;
HAnimJoint1638 := HAnimJoint1075;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1638;
HAnimJoint1639 := THAnimJointNode.Create;
HAnimJoint1639 := HAnimJoint1425;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1639;
HAnimJoint1640 := THAnimJointNode.Create;
HAnimJoint1640 := HAnimJoint1121;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1640;
HAnimJoint1641 := THAnimJointNode.Create;
HAnimJoint1641 := HAnimJoint1471;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1641;
HAnimJoint1642 := THAnimJointNode.Create;
HAnimJoint1642 := HAnimJoint1160;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1642;
HAnimJoint1643 := THAnimJointNode.Create;
HAnimJoint1643 := HAnimJoint1510;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1643;
HAnimJoint1644 := THAnimJointNode.Create;
HAnimJoint1644 := HAnimJoint1199;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1644;
HAnimJoint1645 := THAnimJointNode.Create;
HAnimJoint1645 := HAnimJoint1549;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1645;
HAnimJoint1646 := THAnimJointNode.Create;
HAnimJoint1646 := HAnimJoint950;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1646;
HAnimJoint1647 := THAnimJointNode.Create;
HAnimJoint1647 := HAnimJoint1300;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1647;
HAnimJoint1648 := THAnimJointNode.Create;
HAnimJoint1648 := HAnimJoint811;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1648;
HAnimJoint1649 := THAnimJointNode.Create;
HAnimJoint1649 := HAnimJoint842;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1649;
HAnimJoint1650 := THAnimJointNode.Create;
HAnimJoint1650 := HAnimJoint837;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1650;
HAnimJoint1651 := THAnimJointNode.Create;
HAnimJoint1651 := HAnimJoint864;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1651;
HAnimJoint1652 := THAnimJointNode.Create;
HAnimJoint1652 := HAnimJoint832;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1652;
HAnimJoint1653 := THAnimJointNode.Create;
HAnimJoint1653 := HAnimJoint859;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1653;
HAnimJoint1654 := THAnimJointNode.Create;
HAnimJoint1654 := HAnimJoint146;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1654;
HAnimJoint1655 := THAnimJointNode.Create;
HAnimJoint1655 := HAnimJoint273;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1655;
HAnimJoint1656 := THAnimJointNode.Create;
HAnimJoint1656 := HAnimJoint176;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1656;
HAnimJoint1657 := THAnimJointNode.Create;
HAnimJoint1657 := HAnimJoint303;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1657;
HAnimJoint1658 := THAnimJointNode.Create;
HAnimJoint1658 := HAnimJoint1054;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1658;
HAnimJoint1659 := THAnimJointNode.Create;
HAnimJoint1659 := HAnimJoint1404;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1659;
HAnimJoint1660 := THAnimJointNode.Create;
HAnimJoint1660 := HAnimJoint1084;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1660;
HAnimJoint1661 := THAnimJointNode.Create;
HAnimJoint1661 := HAnimJoint1434;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1661;
HAnimJoint1662 := THAnimJointNode.Create;
HAnimJoint1662 := HAnimJoint1130;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1662;
HAnimJoint1663 := THAnimJointNode.Create;
HAnimJoint1663 := HAnimJoint1480;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1663;
HAnimJoint1664 := THAnimJointNode.Create;
HAnimJoint1664 := HAnimJoint1169;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1664;
HAnimJoint1665 := THAnimJointNode.Create;
HAnimJoint1665 := HAnimJoint1519;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1665;
HAnimJoint1666 := THAnimJointNode.Create;
HAnimJoint1666 := HAnimJoint1208;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1666;
HAnimJoint1667 := THAnimJointNode.Create;
HAnimJoint1667 := HAnimJoint1558;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1667;
HAnimJoint1668 := THAnimJointNode.Create;
HAnimJoint1668 := HAnimJoint231;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1668;
HAnimJoint1669 := THAnimJointNode.Create;
HAnimJoint1669 := HAnimJoint358;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1669;
HAnimJoint1670 := THAnimJointNode.Create;
HAnimJoint1670 := HAnimJoint987;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1670;
HAnimJoint1671 := THAnimJointNode.Create;
HAnimJoint1671 := HAnimJoint1337;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1671;
HAnimJoint1672 := THAnimJointNode.Create;
HAnimJoint1672 := HAnimJoint934;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1672;
HAnimJoint1673 := THAnimJointNode.Create;
HAnimJoint1673 := HAnimJoint1284;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1673;
HAnimJoint1674 := THAnimJointNode.Create;
HAnimJoint1674 := HAnimJoint888;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1674;
HAnimJoint1675 := THAnimJointNode.Create;
HAnimJoint1675 := HAnimJoint1238;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1675;
HAnimJoint1676 := THAnimJointNode.Create;
HAnimJoint1676 := HAnimJoint185;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1676;
HAnimJoint1677 := THAnimJointNode.Create;
HAnimJoint1677 := HAnimJoint312;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1677;
HAnimJoint1678 := THAnimJointNode.Create;
HAnimJoint1678 := HAnimJoint247;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1678;
HAnimJoint1679 := THAnimJointNode.Create;
HAnimJoint1679 := HAnimJoint374;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1679;
HAnimJoint1680 := THAnimJointNode.Create;
HAnimJoint1680 := HAnimJoint222;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1680;
HAnimJoint1681 := THAnimJointNode.Create;
HAnimJoint1681 := HAnimJoint349;
{ .AddJoints }
HAnimHumanoid41.Joints := HAnimJoint1681;
HAnimSegment1682 := THAnimSegmentNode.Create;
HAnimSegment1682 := HAnimSegment67;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1682;
HAnimSegment1683 := THAnimSegmentNode.Create;
HAnimSegment1683 := HAnimSegment709;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1683;
HAnimSegment1684 := THAnimSegmentNode.Create;
HAnimSegment1684 := HAnimSegment870;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1684;
HAnimSegment1685 := THAnimSegmentNode.Create;
HAnimSegment1685 := HAnimSegment700;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1685;
HAnimSegment1686 := THAnimSegmentNode.Create;
HAnimSegment1686 := HAnimSegment691;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1686;
HAnimSegment1687 := THAnimSegmentNode.Create;
HAnimSegment1687 := HAnimSegment682;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1687;
HAnimSegment1688 := THAnimSegmentNode.Create;
HAnimSegment1688 := HAnimSegment673;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1688;
HAnimSegment1689 := THAnimSegmentNode.Create;
HAnimSegment1689 := HAnimSegment664;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1689;
HAnimSegment1690 := THAnimSegmentNode.Create;
HAnimSegment1690 := HAnimSegment655;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1690;
HAnimSegment1691 := THAnimSegmentNode.Create;
HAnimSegment1691 := HAnimSegment632;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1691;
HAnimSegment1692 := THAnimSegmentNode.Create;
HAnimSegment1692 := HAnimSegment601;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1692;
HAnimSegment1693 := THAnimSegmentNode.Create;
HAnimSegment1693 := HAnimSegment592;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1693;
HAnimSegment1694 := THAnimSegmentNode.Create;
HAnimSegment1694 := HAnimSegment583;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1694;
HAnimSegment1695 := THAnimSegmentNode.Create;
HAnimSegment1695 := HAnimSegment574;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1695;
HAnimSegment1696 := THAnimSegmentNode.Create;
HAnimSegment1696 := HAnimSegment565;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1696;
HAnimSegment1697 := THAnimSegmentNode.Create;
HAnimSegment1697 := HAnimSegment556;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1697;
HAnimSegment1698 := THAnimSegmentNode.Create;
HAnimSegment1698 := HAnimSegment547;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1698;
HAnimSegment1699 := THAnimSegmentNode.Create;
HAnimSegment1699 := HAnimSegment538;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1699;
HAnimSegment1700 := THAnimSegmentNode.Create;
HAnimSegment1700 := HAnimSegment515;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1700;
HAnimSegment1701 := THAnimSegmentNode.Create;
HAnimSegment1701 := HAnimSegment499;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1701;
HAnimSegment1702 := THAnimSegmentNode.Create;
HAnimSegment1702 := HAnimSegment490;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1702;
HAnimSegment1703 := THAnimSegmentNode.Create;
HAnimSegment1703 := HAnimSegment481;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1703;
HAnimSegment1704 := THAnimSegmentNode.Create;
HAnimSegment1704 := HAnimSegment472;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1704;
HAnimSegment1705 := THAnimSegmentNode.Create;
HAnimSegment1705 := HAnimSegment442;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1705;
HAnimSegment1706 := THAnimSegmentNode.Create;
HAnimSegment1706 := HAnimSegment433;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1706;
HAnimSegment1707 := THAnimSegmentNode.Create;
HAnimSegment1707 := HAnimSegment424;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1707;
HAnimSegment1708 := THAnimSegmentNode.Create;
HAnimSegment1708 := HAnimSegment401;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1708;
HAnimSegment1709 := THAnimSegmentNode.Create;
HAnimSegment1709 := HAnimSegment51;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1709;
HAnimSegment1710 := THAnimSegmentNode.Create;
HAnimSegment1710 := HAnimSegment177;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1710;
HAnimSegment1711 := THAnimSegmentNode.Create;
HAnimSegment1711 := HAnimSegment304;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1711;
HAnimSegment1712 := THAnimSegmentNode.Create;
HAnimSegment1712 := HAnimSegment988;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1712;
HAnimSegment1713 := THAnimSegmentNode.Create;
HAnimSegment1713 := HAnimSegment1338;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1713;
HAnimSegment1714 := THAnimSegmentNode.Create;
HAnimSegment1714 := HAnimSegment1064;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1714;
HAnimSegment1715 := THAnimSegmentNode.Create;
HAnimSegment1715 := HAnimSegment1414;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1715;
HAnimSegment1716 := THAnimSegmentNode.Create;
HAnimSegment1716 := HAnimSegment1103;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1716;
HAnimSegment1717 := THAnimSegmentNode.Create;
HAnimSegment1717 := HAnimSegment1453;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1717;
HAnimSegment1718 := THAnimSegmentNode.Create;
HAnimSegment1718 := HAnimSegment1149;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1718;
HAnimSegment1719 := THAnimSegmentNode.Create;
HAnimSegment1719 := HAnimSegment1499;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1719;
HAnimSegment1720 := THAnimSegmentNode.Create;
HAnimSegment1720 := HAnimSegment1188;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1720;
HAnimSegment1721 := THAnimSegmentNode.Create;
HAnimSegment1721 := HAnimSegment1538;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1721;
HAnimSegment1722 := THAnimSegmentNode.Create;
HAnimSegment1722 := HAnimSegment1227;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1722;
HAnimSegment1723 := THAnimSegmentNode.Create;
HAnimSegment1723 := HAnimSegment1577;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1723;
HAnimSegment1724 := THAnimSegmentNode.Create;
HAnimSegment1724 := HAnimSegment1094;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1724;
HAnimSegment1725 := THAnimSegmentNode.Create;
HAnimSegment1725 := HAnimSegment1444;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1725;
HAnimSegment1726 := THAnimSegmentNode.Create;
HAnimSegment1726 := HAnimSegment1140;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1726;
HAnimSegment1727 := THAnimSegmentNode.Create;
HAnimSegment1727 := HAnimSegment1490;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1727;
HAnimSegment1728 := THAnimSegmentNode.Create;
HAnimSegment1728 := HAnimSegment1179;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1728;
HAnimSegment1729 := THAnimSegmentNode.Create;
HAnimSegment1729 := HAnimSegment1529;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1729;
HAnimSegment1730 := THAnimSegmentNode.Create;
HAnimSegment1730 := HAnimSegment1218;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1730;
HAnimSegment1731 := THAnimSegmentNode.Create;
HAnimSegment1731 := HAnimSegment1568;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1731;
HAnimSegment1732 := THAnimSegmentNode.Create;
HAnimSegment1732 := HAnimSegment1055;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1732;
HAnimSegment1733 := THAnimSegmentNode.Create;
HAnimSegment1733 := HAnimSegment1405;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1733;
HAnimSegment1734 := THAnimSegmentNode.Create;
HAnimSegment1734 := HAnimSegment1085;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1734;
HAnimSegment1735 := THAnimSegmentNode.Create;
HAnimSegment1735 := HAnimSegment1435;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1735;
HAnimSegment1736 := THAnimSegmentNode.Create;
HAnimSegment1736 := HAnimSegment1131;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1736;
HAnimSegment1737 := THAnimSegmentNode.Create;
HAnimSegment1737 := HAnimSegment1481;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1737;
HAnimSegment1738 := THAnimSegmentNode.Create;
HAnimSegment1738 := HAnimSegment1170;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1738;
HAnimSegment1739 := THAnimSegmentNode.Create;
HAnimSegment1739 := HAnimSegment1520;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1739;
HAnimSegment1740 := THAnimSegmentNode.Create;
HAnimSegment1740 := HAnimSegment1209;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1740;
HAnimSegment1741 := THAnimSegmentNode.Create;
HAnimSegment1741 := HAnimSegment1559;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1741;
HAnimSegment1742 := THAnimSegmentNode.Create;
HAnimSegment1742 := HAnimSegment889;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1742;
HAnimSegment1743 := THAnimSegmentNode.Create;
HAnimSegment1743 := HAnimSegment1239;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1743;
HAnimSegment1744 := THAnimSegmentNode.Create;
HAnimSegment1744 := HAnimSegment812;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1744;
HAnimSegment1745 := THAnimSegmentNode.Create;
HAnimSegment1745 := HAnimSegment843;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1745;
HAnimSegment1746 := THAnimSegmentNode.Create;
HAnimSegment1746 := HAnimSegment838;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1746;
HAnimSegment1747 := THAnimSegmentNode.Create;
HAnimSegment1747 := HAnimSegment865;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1747;
HAnimSegment1748 := THAnimSegmentNode.Create;
HAnimSegment1748 := HAnimSegment833;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1748;
HAnimSegment1749 := THAnimSegmentNode.Create;
HAnimSegment1749 := HAnimSegment860;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1749;
HAnimSegment1750 := THAnimSegmentNode.Create;
HAnimSegment1750 := HAnimSegment951;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1750;
HAnimSegment1751 := THAnimSegmentNode.Create;
HAnimSegment1751 := HAnimSegment1301;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1751;
HAnimSegment1752 := THAnimSegmentNode.Create;
HAnimSegment1752 := HAnimSegment1046;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1752;
HAnimSegment1753 := THAnimSegmentNode.Create;
HAnimSegment1753 := HAnimSegment1396;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1753;
HAnimSegment1754 := THAnimSegmentNode.Create;
HAnimSegment1754 := HAnimSegment1076;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1754;
HAnimSegment1755 := THAnimSegmentNode.Create;
HAnimSegment1755 := HAnimSegment1426;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1755;
HAnimSegment1756 := THAnimSegmentNode.Create;
HAnimSegment1756 := HAnimSegment1122;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1756;
HAnimSegment1757 := THAnimSegmentNode.Create;
HAnimSegment1757 := HAnimSegment1472;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1757;
HAnimSegment1758 := THAnimSegmentNode.Create;
HAnimSegment1758 := HAnimSegment1161;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1758;
HAnimSegment1759 := THAnimSegmentNode.Create;
HAnimSegment1759 := HAnimSegment1511;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1759;
HAnimSegment1760 := THAnimSegmentNode.Create;
HAnimSegment1760 := HAnimSegment1200;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1760;
HAnimSegment1761 := THAnimSegmentNode.Create;
HAnimSegment1761 := HAnimSegment1550;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1761;
HAnimSegment1762 := THAnimSegmentNode.Create;
HAnimSegment1762 := HAnimSegment223;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1762;
HAnimSegment1763 := THAnimSegmentNode.Create;
HAnimSegment1763 := HAnimSegment350;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1763;
HAnimSegment1764 := THAnimSegmentNode.Create;
HAnimSegment1764 := HAnimSegment926;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1764;
HAnimSegment1765 := THAnimSegmentNode.Create;
HAnimSegment1765 := HAnimSegment1276;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1765;
HAnimSegment1766 := THAnimSegmentNode.Create;
HAnimSegment1766 := HAnimSegment186;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1766;
HAnimSegment1767 := THAnimSegmentNode.Create;
HAnimSegment1767 := HAnimSegment313;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1767;
HAnimSegment1768 := THAnimSegmentNode.Create;
HAnimSegment1768 := HAnimSegment248;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1768;
HAnimSegment1769 := THAnimSegmentNode.Create;
HAnimSegment1769 := HAnimSegment375;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1769;
HAnimSegment1770 := THAnimSegmentNode.Create;
HAnimSegment1770 := HAnimSegment232;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1770;
HAnimSegment1771 := THAnimSegmentNode.Create;
HAnimSegment1771 := HAnimSegment359;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1771;
HAnimSegment1772 := THAnimSegmentNode.Create;
HAnimSegment1772 := HAnimSegment147;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1772;
HAnimSegment1773 := THAnimSegmentNode.Create;
HAnimSegment1773 := HAnimSegment274;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1773;
HAnimSegment1774 := THAnimSegmentNode.Create;
HAnimSegment1774 := HAnimSegment935;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1774;
HAnimSegment1775 := THAnimSegmentNode.Create;
HAnimSegment1775 := HAnimSegment1285;
{ .AddSegments }
HAnimHumanoid41.Segments := HAnimSegment1775;
HAnimSite1776 := THAnimSiteNode.Create;
HAnimSite1776 := HAnimSite143;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1776;
HAnimSite1777 := THAnimSiteNode.Create;
HAnimSite1777 := HAnimSite781;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1777;
HAnimSite1778 := THAnimSiteNode.Create;
HAnimSite1778 := HAnimSite784;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1778;
HAnimSite1779 := THAnimSiteNode.Create;
HAnimSite1779 := HAnimSite793;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1779;
HAnimSite1780 := THAnimSiteNode.Create;
HAnimSite1780 := HAnimSite808;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1780;
HAnimSite1781 := THAnimSiteNode.Create;
HAnimSite1781 := HAnimSite625;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1781;
HAnimSite1782 := THAnimSiteNode.Create;
HAnimSite1782 := HAnimSite628;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1782;
HAnimSite1783 := THAnimSiteNode.Create;
HAnimSite1783 := HAnimSite511;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1783;
HAnimSite1784 := THAnimSiteNode.Create;
HAnimSite1784 := HAnimSite468;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1784;
HAnimSite1785 := THAnimSiteNode.Create;
HAnimSite1785 := HAnimSite417;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1785;
HAnimSite1786 := THAnimSiteNode.Create;
HAnimSite1786 := HAnimSite420;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1786;
HAnimSite1787 := THAnimSiteNode.Create;
HAnimSite1787 := HAnimSite916;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1787;
HAnimSite1788 := THAnimSiteNode.Create;
HAnimSite1788 := HAnimSite1266;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1788;
HAnimSite1789 := THAnimSiteNode.Create;
HAnimSite1789 := HAnimSite131;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1789;
HAnimSite1790 := THAnimSiteNode.Create;
HAnimSite1790 := HAnimSite134;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1790;
HAnimSite1791 := THAnimSiteNode.Create;
HAnimSite1791 := HAnimSite922;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1791;
HAnimSite1792 := THAnimSiteNode.Create;
HAnimSite1792 := HAnimSite1272;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1792;
HAnimSite1793 := THAnimSiteNode.Create;
HAnimSite1793 := HAnimSite919;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1793;
HAnimSite1794 := THAnimSiteNode.Create;
HAnimSite1794 := HAnimSite1269;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1794;
HAnimSite1795 := THAnimSiteNode.Create;
HAnimSite1795 := HAnimSite219;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1795;
HAnimSite1796 := THAnimSiteNode.Create;
HAnimSite1796 := HAnimSite346;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1796;
HAnimSite1797 := THAnimSiteNode.Create;
HAnimSite1797 := HAnimSite1072;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1797;
HAnimSite1798 := THAnimSiteNode.Create;
HAnimSite1798 := HAnimSite1422;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1798;
HAnimSite1799 := THAnimSiteNode.Create;
HAnimSite1799 := HAnimSite1115;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1799;
HAnimSite1800 := THAnimSiteNode.Create;
HAnimSite1800 := HAnimSite1465;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1800;
HAnimSite1801 := THAnimSiteNode.Create;
HAnimSite1801 := HAnimSite1157;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1801;
HAnimSite1802 := THAnimSiteNode.Create;
HAnimSite1802 := HAnimSite1507;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1802;
HAnimSite1803 := THAnimSiteNode.Create;
HAnimSite1803 := HAnimSite1196;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1803;
HAnimSite1804 := THAnimSiteNode.Create;
HAnimSite1804 := HAnimSite1546;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1804;
HAnimSite1805 := THAnimSiteNode.Create;
HAnimSite1805 := HAnimSite1235;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1805;
HAnimSite1806 := THAnimSiteNode.Create;
HAnimSite1806 := HAnimSite1585;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1806;
HAnimSite1807 := THAnimSiteNode.Create;
HAnimSite1807 := HAnimSite913;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1807;
HAnimSite1808 := THAnimSiteNode.Create;
HAnimSite1808 := HAnimSite1263;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1808;
HAnimSite1809 := THAnimSiteNode.Create;
HAnimSite1809 := HAnimSite1118;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1809;
HAnimSite1810 := THAnimSiteNode.Create;
HAnimSite1810 := HAnimSite1468;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1810;
HAnimSite1811 := THAnimSiteNode.Create;
HAnimSite1811 := HAnimSite170;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1811;
HAnimSite1812 := THAnimSiteNode.Create;
HAnimSite1812 := HAnimSite297;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1812;
HAnimSite1813 := THAnimSiteNode.Create;
HAnimSite1813 := HAnimSite173;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1813;
HAnimSite1814 := THAnimSiteNode.Create;
HAnimSite1814 := HAnimSite300;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1814;
HAnimSite1815 := THAnimSiteNode.Create;
HAnimSite1815 := HAnimSite264;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1815;
HAnimSite1816 := THAnimSiteNode.Create;
HAnimSite1816 := HAnimSite391;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1816;
HAnimSite1817 := THAnimSiteNode.Create;
HAnimSite1817 := HAnimSite799;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1817;
HAnimSite1818 := THAnimSiteNode.Create;
HAnimSite1818 := HAnimSite805;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1818;
HAnimSite1819 := THAnimSiteNode.Create;
HAnimSite1819 := HAnimSite947;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1819;
HAnimSite1820 := THAnimSiteNode.Create;
HAnimSite1820 := HAnimSite1297;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1820;
HAnimSite1821 := THAnimSiteNode.Create;
HAnimSite1821 := HAnimSite981;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1821;
HAnimSite1822 := THAnimSiteNode.Create;
HAnimSite1822 := HAnimSite1331;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1822;
HAnimSite1823 := THAnimSiteNode.Create;
HAnimSite1823 := HAnimSite115;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1823;
HAnimSite1824 := THAnimSiteNode.Create;
HAnimSite1824 := HAnimSite125;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1824;
HAnimSite1825 := THAnimSiteNode.Create;
HAnimSite1825 := HAnimSite787;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1825;
HAnimSite1826 := THAnimSiteNode.Create;
HAnimSite1826 := HAnimSite790;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1826;
HAnimSite1827 := THAnimSiteNode.Create;
HAnimSite1827 := HAnimSite167;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1827;
HAnimSite1828 := THAnimSiteNode.Create;
HAnimSite1828 := HAnimSite294;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1828;
HAnimSite1829 := THAnimSiteNode.Create;
HAnimSite1829 := HAnimSite210;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1829;
HAnimSite1830 := THAnimSiteNode.Create;
HAnimSite1830 := HAnimSite337;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1830;
HAnimSite1831 := THAnimSiteNode.Create;
HAnimSite1831 := HAnimSite213;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1831;
HAnimSite1832 := THAnimSiteNode.Create;
HAnimSite1832 := HAnimSite340;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1832;
HAnimSite1833 := THAnimSiteNode.Create;
HAnimSite1833 := HAnimSite1028;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1833;
HAnimSite1834 := THAnimSiteNode.Create;
HAnimSite1834 := HAnimSite1378;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1834;
HAnimSite1835 := THAnimSiteNode.Create;
HAnimSite1835 := HAnimSite1034;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1835;
HAnimSite1836 := THAnimSiteNode.Create;
HAnimSite1836 := HAnimSite1384;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1836;
HAnimSite1837 := THAnimSiteNode.Create;
HAnimSite1837 := HAnimSite244;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1837;
HAnimSite1838 := THAnimSiteNode.Create;
HAnimSite1838 := HAnimSite371;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1838;
HAnimSite1839 := THAnimSiteNode.Create;
HAnimSite1839 := HAnimSite267;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1839;
HAnimSite1840 := THAnimSiteNode.Create;
HAnimSite1840 := HAnimSite394;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1840;
HAnimSite1841 := THAnimSiteNode.Create;
HAnimSite1841 := HAnimSite648;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1841;
HAnimSite1842 := THAnimSiteNode.Create;
HAnimSite1842 := HAnimSite651;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1842;
HAnimSite1843 := THAnimSiteNode.Create;
HAnimSite1843 := HAnimSite978;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1843;
HAnimSite1844 := THAnimSiteNode.Create;
HAnimSite1844 := HAnimSite1328;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1844;
HAnimSite1845 := THAnimSiteNode.Create;
HAnimSite1845 := HAnimSite137;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1845;
HAnimSite1846 := THAnimSiteNode.Create;
HAnimSite1846 := HAnimSite140;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1846;
HAnimSite1847 := THAnimSiteNode.Create;
HAnimSite1847 := HAnimSite975;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1847;
HAnimSite1848 := THAnimSiteNode.Create;
HAnimSite1848 := HAnimSite1325;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1848;
HAnimSite1849 := THAnimSiteNode.Create;
HAnimSite1849 := HAnimSite984;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1849;
HAnimSite1850 := THAnimSiteNode.Create;
HAnimSite1850 := HAnimSite1334;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1850;
HAnimSite1851 := THAnimSiteNode.Create;
HAnimSite1851 := HAnimSite462;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1851;
HAnimSite1852 := THAnimSiteNode.Create;
HAnimSite1852 := HAnimSite465;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1852;
HAnimSite1853 := THAnimSiteNode.Create;
HAnimSite1853 := HAnimSite882;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1853;
HAnimSite1854 := THAnimSiteNode.Create;
HAnimSite1854 := HAnimSite885;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1854;
HAnimSite1855 := THAnimSiteNode.Create;
HAnimSite1855 := HAnimSite216;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1855;
HAnimSite1856 := THAnimSiteNode.Create;
HAnimSite1856 := HAnimSite343;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1856;
HAnimSite1857 := THAnimSiteNode.Create;
HAnimSite1857 := HAnimSite270;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1857;
HAnimSite1858 := THAnimSiteNode.Create;
HAnimSite1858 := HAnimSite397;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1858;
HAnimSite1859 := THAnimSiteNode.Create;
HAnimSite1859 := HAnimSite531;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1859;
HAnimSite1860 := THAnimSiteNode.Create;
HAnimSite1860 := HAnimSite534;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1860;
HAnimSite1861 := THAnimSiteNode.Create;
HAnimSite1861 := HAnimSite796;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1861;
HAnimSite1862 := THAnimSiteNode.Create;
HAnimSite1862 := HAnimSite802;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1862;
HAnimSite1863 := THAnimSiteNode.Create;
HAnimSite1863 := HAnimSite122;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1863;
HAnimSite1864 := THAnimSiteNode.Create;
HAnimSite1864 := HAnimSite128;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1864;
HAnimSite1865 := THAnimSiteNode.Create;
HAnimSite1865 := HAnimSite1031;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1865;
HAnimSite1866 := THAnimSiteNode.Create;
HAnimSite1866 := HAnimSite1381;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1866;
HAnimSite1867 := THAnimSiteNode.Create;
HAnimSite1867.NameField := 'l_inclined_view';
HAnimSite1867.Translation := Vector3(1.62,1.05,2.06);
HAnimSite1867.Rotation := Vector4(-0.113,0.993,0.0347,0.671);
TouchSensor1868 := TTouchSensorNode.Create;
TouchSensor1868.Description := 'HAnimSite l_inclined_view';
{ .AddChildren }
HAnimSite1867.AddChildren([TouchSensor1868]);
Shape1869 := TShapeNode.Create;
Shape1869 := Shape117;
{ .AddChildren }
HAnimSite1867.AddChildren([Shape1869]);
Viewpoint1870 := TViewpointNode.Create;
Viewpoint1870.Description := 'left inclined';
Viewpoint1870.Position := Vector3(0,0,0);
{ .AddChildren }
HAnimSite1867.AddChildren([Viewpoint1870]);
Anchor1871 := TAnchorNode.Create;
Anchor1871.Description := 'HAnimSite hanim_l_inclined_view Viewpoint';
Anchor1871.SetUrl(['#hanim_l_inclined_viewpoint']);
LOD1872 := TLODNode.Create;
LOD1872.ForceTransitions := True;
LOD1872.SetRange([0.04]);
WorldInfo1873 := TWorldInfoNode.Create;
WorldInfo1873.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1872.AddChildren([WorldInfo1873]);
Shape1874 := TShapeNode.Create;
Shape1874 := Shape827;
{ .AddChildren }
LOD1872.AddChildren([Shape1874]);
{ .AddChildren }
Anchor1871.AddChildren([LOD1872]);
{ .AddChildren }
HAnimSite1867.AddChildren([Anchor1871]);
{ .SetViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite1867;
HAnimSite1875 := THAnimSiteNode.Create;
HAnimSite1875.NameField := 'r_inclined_view';
HAnimSite1875.Translation := Vector3(-1.62,1.05,2.06);
HAnimSite1875.Rotation := Vector4(-0.113,-0.993,0.0347,0.671);
TouchSensor1876 := TTouchSensorNode.Create;
TouchSensor1876.Description := 'HAnimSite r_inclined_view';
{ .AddChildren }
HAnimSite1875.AddChildren([TouchSensor1876]);
Shape1877 := TShapeNode.Create;
Shape1877 := Shape117;
{ .AddChildren }
HAnimSite1875.AddChildren([Shape1877]);
Viewpoint1878 := TViewpointNode.Create;
Viewpoint1878.Description := 'right inclined';
Viewpoint1878.Position := Vector3(0,0,0);
Viewpoint1878.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite1875.AddChildren([Viewpoint1878]);
Anchor1879 := TAnchorNode.Create;
Anchor1879.Description := 'HAnimSite hanim_r_inclined_view Viewpoint';
Anchor1879.SetUrl(['#hanim_r_inclined_viewpoint']);
LOD1880 := TLODNode.Create;
LOD1880.ForceTransitions := True;
LOD1880.SetRange([0.04]);
WorldInfo1881 := TWorldInfoNode.Create;
WorldInfo1881.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1880.AddChildren([WorldInfo1881]);
Shape1882 := TShapeNode.Create;
Shape1882 := Shape827;
{ .AddChildren }
LOD1880.AddChildren([Shape1882]);
{ .AddChildren }
Anchor1879.AddChildren([LOD1880]);
{ .AddChildren }
HAnimSite1875.AddChildren([Anchor1879]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite1875;
HAnimSite1883 := THAnimSiteNode.Create;
HAnimSite1883.NameField := 'front_view';
HAnimSite1883.Translation := Vector3(0,0.85,2.58);
TouchSensor1884 := TTouchSensorNode.Create;
TouchSensor1884.Description := 'HAnimSite front_view';
{ .AddChildren }
HAnimSite1883.AddChildren([TouchSensor1884]);
Shape1885 := TShapeNode.Create;
Shape1885 := Shape117;
{ .AddChildren }
HAnimSite1883.AddChildren([Shape1885]);
Viewpoint1886 := TViewpointNode.Create;
Viewpoint1886.Description := 'front';
Viewpoint1886.Position := Vector3(0,0,0);
Viewpoint1886.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite1883.AddChildren([Viewpoint1886]);
Anchor1887 := TAnchorNode.Create;
Anchor1887.Description := 'HAnimSite hanim_front_view Viewpoint';
Anchor1887.SetUrl(['#hanim_front_viewpoint']);
LOD1888 := TLODNode.Create;
LOD1888.ForceTransitions := True;
LOD1888.SetRange([0.04]);
WorldInfo1889 := TWorldInfoNode.Create;
WorldInfo1889.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1888.AddChildren([WorldInfo1889]);
Shape1890 := TShapeNode.Create;
Shape1890 := Shape827;
{ .AddChildren }
LOD1888.AddChildren([Shape1890]);
{ .AddChildren }
Anchor1887.AddChildren([LOD1888]);
{ .AddChildren }
HAnimSite1883.AddChildren([Anchor1887]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite1883;
HAnimSite1891 := THAnimSiteNode.Create;
HAnimSite1891.NameField := 'back_view';
HAnimSite1891.Translation := Vector3(0,0.85,-2.58);
HAnimSite1891.Rotation := Vector4(0,1,0,3.14);
TouchSensor1892 := TTouchSensorNode.Create;
TouchSensor1892.Description := 'HAnimSite back_view';
{ .AddChildren }
HAnimSite1891.AddChildren([TouchSensor1892]);
Shape1893 := TShapeNode.Create;
Shape1893 := Shape117;
{ .AddChildren }
HAnimSite1891.AddChildren([Shape1893]);
Viewpoint1894 := TViewpointNode.Create;
Viewpoint1894.Description := 'back';
Viewpoint1894.Position := Vector3(0,0,0);
Viewpoint1894.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite1891.AddChildren([Viewpoint1894]);
Anchor1895 := TAnchorNode.Create;
Anchor1895.Description := 'HAnimSite hanim_back_view Viewpoint';
Anchor1895.SetUrl(['#hanim_back_viewpoint']);
LOD1896 := TLODNode.Create;
LOD1896.ForceTransitions := True;
LOD1896.SetRange([0.04]);
WorldInfo1897 := TWorldInfoNode.Create;
WorldInfo1897.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1896.AddChildren([WorldInfo1897]);
Shape1898 := TShapeNode.Create;
Shape1898 := Shape827;
{ .AddChildren }
LOD1896.AddChildren([Shape1898]);
{ .AddChildren }
Anchor1895.AddChildren([LOD1896]);
{ .AddChildren }
HAnimSite1891.AddChildren([Anchor1895]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite1891;
HAnimSite1899 := THAnimSiteNode.Create;
HAnimSite1899.NameField := 'l_side_view';
HAnimSite1899.Translation := Vector3(2.6,0.854,0);
HAnimSite1899.Rotation := Vector4(0,1,0,1.5708);
TouchSensor1900 := TTouchSensorNode.Create;
TouchSensor1900.Description := 'HAnimSite l_side_view';
{ .AddChildren }
HAnimSite1899.AddChildren([TouchSensor1900]);
Shape1901 := TShapeNode.Create;
Shape1901 := Shape117;
{ .AddChildren }
HAnimSite1899.AddChildren([Shape1901]);
Viewpoint1902 := TViewpointNode.Create;
Viewpoint1902.Description := 'left side';
Viewpoint1902.Position := Vector3(0,0,0);
Viewpoint1902.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite1899.AddChildren([Viewpoint1902]);
Anchor1903 := TAnchorNode.Create;
Anchor1903.Description := 'HAnimSite hanim_l_side_view Viewpoint';
Anchor1903.SetUrl(['#hanim_l_side_viewpoint']);
LOD1904 := TLODNode.Create;
LOD1904.ForceTransitions := True;
LOD1904.SetRange([0.04]);
WorldInfo1905 := TWorldInfoNode.Create;
WorldInfo1905.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1904.AddChildren([WorldInfo1905]);
Shape1906 := TShapeNode.Create;
Shape1906 := Shape827;
{ .AddChildren }
LOD1904.AddChildren([Shape1906]);
{ .AddChildren }
Anchor1903.AddChildren([LOD1904]);
{ .AddChildren }
HAnimSite1899.AddChildren([Anchor1903]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite1899;
HAnimSite1907 := THAnimSiteNode.Create;
HAnimSite1907.NameField := 'Top_view';
HAnimSite1907.Translation := Vector3(0,3.5,0);
HAnimSite1907.Rotation := Vector4(1,0,0,-1.57);
TouchSensor1908 := TTouchSensorNode.Create;
TouchSensor1908.Description := 'HAnimSite Top_view';
{ .AddChildren }
HAnimSite1907.AddChildren([TouchSensor1908]);
Shape1909 := TShapeNode.Create;
Shape1909 := Shape117;
{ .AddChildren }
HAnimSite1907.AddChildren([Shape1909]);
Viewpoint1910 := TViewpointNode.Create;
Viewpoint1910.Description := 'Top';
Viewpoint1910.Position := Vector3(0,0,0);
Viewpoint1910.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite1907.AddChildren([Viewpoint1910]);
Anchor1911 := TAnchorNode.Create;
Anchor1911.Description := 'HAnimSite hanim_Top_view Viewpoint';
Anchor1911.SetUrl(['#hanim_Top_viewpoint']);
LOD1912 := TLODNode.Create;
LOD1912.ForceTransitions := True;
LOD1912.SetRange([0.04]);
WorldInfo1913 := TWorldInfoNode.Create;
WorldInfo1913.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1912.AddChildren([WorldInfo1913]);
Shape1914 := TShapeNode.Create;
Shape1914 := Shape827;
{ .AddChildren }
LOD1912.AddChildren([Shape1914]);
{ .AddChildren }
Anchor1911.AddChildren([LOD1912]);
{ .AddChildren }
HAnimSite1907.AddChildren([Anchor1911]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite1907;
HAnimSite1915 := THAnimSiteNode.Create;
HAnimSite1915.NameField := 'front_close_view';
HAnimSite1915.Translation := Vector3(0,0.854,1.575);
TouchSensor1916 := TTouchSensorNode.Create;
TouchSensor1916.Description := 'HAnimSite front_close_view';
{ .AddChildren }
HAnimSite1915.AddChildren([TouchSensor1916]);
Shape1917 := TShapeNode.Create;
Shape1917 := Shape117;
{ .AddChildren }
HAnimSite1915.AddChildren([Shape1917]);
Viewpoint1918 := TViewpointNode.Create;
Viewpoint1918.Description := 'front close';
Viewpoint1918.Position := Vector3(0,0,0);
Viewpoint1918.CenterOfRotation := Vector3(0,0,1.575);
{ .AddChildren }
HAnimSite1915.AddChildren([Viewpoint1918]);
Anchor1919 := TAnchorNode.Create;
Anchor1919.Description := 'HAnimSite hanim_front_close_view Viewpoint';
Anchor1919.SetUrl(['#hanim_front_close_viewpoint']);
LOD1920 := TLODNode.Create;
LOD1920.ForceTransitions := True;
LOD1920.SetRange([0.04]);
WorldInfo1921 := TWorldInfoNode.Create;
WorldInfo1921.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1920.AddChildren([WorldInfo1921]);
Shape1922 := TShapeNode.Create;
Shape1922 := Shape827;
{ .AddChildren }
LOD1920.AddChildren([Shape1922]);
{ .AddChildren }
Anchor1919.AddChildren([LOD1920]);
{ .AddChildren }
HAnimSite1915.AddChildren([Anchor1919]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite1915;
HAnimSite1923 := THAnimSiteNode.Create;
HAnimSite1923.NameField := 'side_close_view';
HAnimSite1923.Translation := Vector3(1.56,0.854,0);
HAnimSite1923.Rotation := Vector4(0,1,0,1.5708);
TouchSensor1924 := TTouchSensorNode.Create;
TouchSensor1924.Description := 'HAnimSite side_close_view';
{ .AddChildren }
HAnimSite1923.AddChildren([TouchSensor1924]);
Shape1925 := TShapeNode.Create;
Shape1925 := Shape117;
{ .AddChildren }
HAnimSite1923.AddChildren([Shape1925]);
Viewpoint1926 := TViewpointNode.Create;
Viewpoint1926.Description := 'side close';
Viewpoint1926.Position := Vector3(0,0,0);
Viewpoint1926.CenterOfRotation := Vector3(1.6,0,0);
{ .AddChildren }
HAnimSite1923.AddChildren([Viewpoint1926]);
Anchor1927 := TAnchorNode.Create;
Anchor1927.Description := 'HAnimSite hanim_side_close_view Viewpoint';
Anchor1927.SetUrl(['#hanim_side_close_viewpoint']);
LOD1928 := TLODNode.Create;
LOD1928.ForceTransitions := True;
LOD1928.SetRange([0.04]);
WorldInfo1929 := TWorldInfoNode.Create;
WorldInfo1929.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1928.AddChildren([WorldInfo1929]);
Shape1930 := TShapeNode.Create;
Shape1930 := Shape827;
{ .AddChildren }
LOD1928.AddChildren([Shape1930]);
{ .AddChildren }
Anchor1927.AddChildren([LOD1928]);
{ .AddChildren }
HAnimSite1923.AddChildren([Anchor1927]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite1923;
HAnimSite1931 := THAnimSiteNode.Create;
HAnimSite1931.NameField := 'head_front_close_view';
HAnimSite1931.Translation := Vector3(0,1.5,1);
TouchSensor1932 := TTouchSensorNode.Create;
TouchSensor1932.Description := 'HAnimSite head_front_close_view';
{ .AddChildren }
HAnimSite1931.AddChildren([TouchSensor1932]);
Shape1933 := TShapeNode.Create;
Shape1933 := Shape117;
{ .AddChildren }
HAnimSite1931.AddChildren([Shape1933]);
Viewpoint1934 := TViewpointNode.Create;
Viewpoint1934.Description := 'head front close';
Viewpoint1934.Position := Vector3(0,0,0);
Viewpoint1934.CenterOfRotation := Vector3(0,0,1);
{ .AddChildren }
HAnimSite1931.AddChildren([Viewpoint1934]);
Anchor1935 := TAnchorNode.Create;
Anchor1935.Description := 'HAnimSite hanim_head_front_close_view Viewpoint';
Anchor1935.SetUrl(['#hanim_head_front_close_viewpoint']);
LOD1936 := TLODNode.Create;
LOD1936.ForceTransitions := True;
LOD1936.SetRange([0.04]);
WorldInfo1937 := TWorldInfoNode.Create;
WorldInfo1937.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1936.AddChildren([WorldInfo1937]);
Shape1938 := TShapeNode.Create;
Shape1938 := Shape827;
{ .AddChildren }
LOD1936.AddChildren([Shape1938]);
{ .AddChildren }
Anchor1935.AddChildren([LOD1936]);
{ .AddChildren }
HAnimSite1931.AddChildren([Anchor1935]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite1931;
HAnimSite1939 := THAnimSiteNode.Create;
HAnimSite1939.NameField := 'chest_front_close_view';
HAnimSite1939.Translation := Vector3(0,1.2,1);
TouchSensor1940 := TTouchSensorNode.Create;
TouchSensor1940.Description := 'HAnimSite chest_front_close_view';
{ .AddChildren }
HAnimSite1939.AddChildren([TouchSensor1940]);
Shape1941 := TShapeNode.Create;
Shape1941 := Shape117;
{ .AddChildren }
HAnimSite1939.AddChildren([Shape1941]);
Viewpoint1942 := TViewpointNode.Create;
Viewpoint1942.Description := 'chest front close';
Viewpoint1942.Position := Vector3(0,0,0);
Viewpoint1942.CenterOfRotation := Vector3(0,0,1);
{ .AddChildren }
HAnimSite1939.AddChildren([Viewpoint1942]);
Anchor1943 := TAnchorNode.Create;
Anchor1943.Description := 'HAnimSite hanim_chest_front_close_view Viewpoint';
Anchor1943.SetUrl(['#hanim_chest_front_close_viewpoint']);
LOD1944 := TLODNode.Create;
LOD1944.ForceTransitions := True;
LOD1944.SetRange([0.04]);
WorldInfo1945 := TWorldInfoNode.Create;
WorldInfo1945.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1944.AddChildren([WorldInfo1945]);
Shape1946 := TShapeNode.Create;
Shape1946 := Shape827;
{ .AddChildren }
LOD1944.AddChildren([Shape1946]);
{ .AddChildren }
Anchor1943.AddChildren([LOD1944]);
{ .AddChildren }
HAnimSite1939.AddChildren([Anchor1943]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite1939;
HAnimSite1947 := THAnimSiteNode.Create;
HAnimSite1947.NameField := 'pelvis_front_close_view';
HAnimSite1947.Translation := Vector3(0,0.8,1);
TouchSensor1948 := TTouchSensorNode.Create;
TouchSensor1948.Description := 'HAnimSite pelvis_front_close_view';
{ .AddChildren }
HAnimSite1947.AddChildren([TouchSensor1948]);
Shape1949 := TShapeNode.Create;
Shape1949 := Shape117;
{ .AddChildren }
HAnimSite1947.AddChildren([Shape1949]);
Viewpoint1950 := TViewpointNode.Create;
Viewpoint1950.Description := 'pelvis front close';
Viewpoint1950.Position := Vector3(0,0,0);
Viewpoint1950.CenterOfRotation := Vector3(0,0,1);
{ .AddChildren }
HAnimSite1947.AddChildren([Viewpoint1950]);
Anchor1951 := TAnchorNode.Create;
Anchor1951.Description := 'HAnimSite hanim_pelvis_front_close_view Viewpoint';
Anchor1951.SetUrl(['#hanim_pelvis_front_close_viewpoint']);
LOD1952 := TLODNode.Create;
LOD1952.ForceTransitions := True;
LOD1952.SetRange([0.04]);
WorldInfo1953 := TWorldInfoNode.Create;
WorldInfo1953.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1952.AddChildren([WorldInfo1953]);
Shape1954 := TShapeNode.Create;
Shape1954 := Shape827;
{ .AddChildren }
LOD1952.AddChildren([Shape1954]);
{ .AddChildren }
Anchor1951.AddChildren([LOD1952]);
{ .AddChildren }
HAnimSite1947.AddChildren([Anchor1951]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite1947;
HAnimSite1955 := THAnimSiteNode.Create;
HAnimSite1955.NameField := 'knees_front_close_view';
HAnimSite1955.Translation := Vector3(0,0.4,1);
TouchSensor1956 := TTouchSensorNode.Create;
TouchSensor1956.Description := 'HAnimSite knees_front_close_view';
{ .AddChildren }
HAnimSite1955.AddChildren([TouchSensor1956]);
Shape1957 := TShapeNode.Create;
Shape1957 := Shape117;
{ .AddChildren }
HAnimSite1955.AddChildren([Shape1957]);
Viewpoint1958 := TViewpointNode.Create;
Viewpoint1958.Description := 'knees front close';
Viewpoint1958.Position := Vector3(0,0,0);
Viewpoint1958.CenterOfRotation := Vector3(0,0.4,0);
{ .AddChildren }
HAnimSite1955.AddChildren([Viewpoint1958]);
Anchor1959 := TAnchorNode.Create;
Anchor1959.Description := 'HAnimSite hanim_knees_front_close_view Viewpoint';
Anchor1959.SetUrl(['#hanim_knees_front_close_viewpoint']);
LOD1960 := TLODNode.Create;
LOD1960.ForceTransitions := True;
LOD1960.SetRange([0.04]);
WorldInfo1961 := TWorldInfoNode.Create;
WorldInfo1961.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1960.AddChildren([WorldInfo1961]);
Shape1962 := TShapeNode.Create;
Shape1962 := Shape827;
{ .AddChildren }
LOD1960.AddChildren([Shape1962]);
{ .AddChildren }
Anchor1959.AddChildren([LOD1960]);
{ .AddChildren }
HAnimSite1955.AddChildren([Anchor1959]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite1955;
HAnimSite1963 := THAnimSiteNode.Create;
HAnimSite1963.NameField := 'feet_front_close_view';
HAnimSite1963.Translation := Vector3(0,0,1);
TouchSensor1964 := TTouchSensorNode.Create;
TouchSensor1964.Description := 'HAnimSite feet_front_close_view';
{ .AddChildren }
HAnimSite1963.AddChildren([TouchSensor1964]);
Shape1965 := TShapeNode.Create;
Shape1965 := Shape117;
{ .AddChildren }
HAnimSite1963.AddChildren([Shape1965]);
Viewpoint1966 := TViewpointNode.Create;
Viewpoint1966.Description := 'feet front close';
Viewpoint1966.Position := Vector3(0,0,0);
{ .AddChildren }
HAnimSite1963.AddChildren([Viewpoint1966]);
Anchor1967 := TAnchorNode.Create;
Anchor1967.Description := 'HAnimSite hanim_feet_front_close_view Viewpoint';
Anchor1967.SetUrl(['#hanim_feet_front_close_viewpoint']);
LOD1968 := TLODNode.Create;
LOD1968.ForceTransitions := True;
LOD1968.SetRange([0.04]);
WorldInfo1969 := TWorldInfoNode.Create;
WorldInfo1969.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1968.AddChildren([WorldInfo1969]);
Shape1970 := TShapeNode.Create;
Shape1970 := Shape827;
{ .AddChildren }
LOD1968.AddChildren([Shape1970]);
{ .AddChildren }
Anchor1967.AddChildren([LOD1968]);
{ .AddChildren }
HAnimSite1963.AddChildren([Anchor1967]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite1963;
HAnimSite1971 := THAnimSiteNode.Create;
HAnimSite1971.NameField := 'eye_level_view';
HAnimSite1971.Translation := Vector3(0,1.6332,0.0502);
TouchSensor1972 := TTouchSensorNode.Create;
TouchSensor1972.Description := 'HAnimSite eye_level_view';
{ .AddChildren }
HAnimSite1971.AddChildren([TouchSensor1972]);
Shape1973 := TShapeNode.Create;
Shape1973 := Shape117;
{ .AddChildren }
HAnimSite1971.AddChildren([Shape1973]);
Viewpoint1974 := TViewpointNode.Create;
Viewpoint1974.Description := 'eye level looking forward';
Viewpoint1974.Position := Vector3(0,0,0);
Viewpoint1974.Orientation := Vector4(0,1,0,3.141593);
{ .AddChildren }
HAnimSite1971.AddChildren([Viewpoint1974]);
Anchor1975 := TAnchorNode.Create;
Anchor1975.Description := 'HAnimSite hanim_eye_level_view Viewpoint';
Anchor1975.SetUrl(['#hanim_eye_level_viewpoint']);
LOD1976 := TLODNode.Create;
LOD1976.ForceTransitions := True;
LOD1976.SetRange([0.04]);
WorldInfo1977 := TWorldInfoNode.Create;
WorldInfo1977.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1976.AddChildren([WorldInfo1977]);
Shape1978 := TShapeNode.Create;
Shape1978 := Shape827;
{ .AddChildren }
LOD1976.AddChildren([Shape1978]);
{ .AddChildren }
Anchor1975.AddChildren([LOD1976]);
{ .AddChildren }
HAnimSite1971.AddChildren([Anchor1975]);
{ .AddViewpoints }
HAnimHumanoid41.Viewpoints := HAnimSite1971;
HAnimSite1979 := THAnimSiteNode.Create;
HAnimSite1979 := HAnimSite820;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1979;
HAnimSite1980 := THAnimSiteNode.Create;
HAnimSite1980 := HAnimSite851;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1980;
HAnimSite1981 := THAnimSiteNode.Create;
HAnimSite1981 := HAnimSite1037;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1981;
HAnimSite1982 := THAnimSiteNode.Create;
HAnimSite1982 := HAnimSite1387;
{ .AddSites }
HAnimHumanoid41.Sites := HAnimSite1982;
{ .AddChildren }
Group27.AddChildren([HAnimHumanoid41]);
{ .AddGroup }
X3D0.AddChildren([Group27]);
Result := X3D0;
end;
