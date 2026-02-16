function StandardHumanoid: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group11: TGroupNode;
Transform12: TTransformNode;
Shape13: TShapeNode;
IndexedLineSet14: TIndexedLineSetNode;
Coordinate15: TCoordinateNode;
Color16: TColorNode;
Group17: TGroupNode;
Transform18: TTransformNode;
Transform19: TTransformNode;
Shape20: TShapeNode;
Sphere21: TSphereNode;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
LineSet26: TLineSetNode;
ColorRGBA27: TColorRGBANode;
Coordinate28: TCoordinateNode;
Transform29: TTransformNode;
Shape30: TShapeNode;
IndexedFaceSet31: TIndexedFaceSetNode;
ColorRGBA32: TColorRGBANode;
Coordinate33: TCoordinateNode;
Appearance34: TAppearanceNode;
Material35: TMaterialNode;
NavigationInfo36: TNavigationInfoNode;
Viewpoint37: TViewpointNode;
HAnimHumanoid38: THAnimHumanoidNode;
Shape39: TShapeNode;
IndexedFaceSet40: TIndexedFaceSetNode;
Coordinate41: TCoordinateNode;
Color42: TColorNode;
Appearance43: TAppearanceNode;
ImageTexture44: TImageTextureNode;
Material45: TMaterialNode;
Coordinate46: TCoordinateNode;
HAnimJoint47: THAnimJointNode;
HAnimSegment48: THAnimSegmentNode;
Transform49: TTransformNode;
Transform50: TTransformNode;
Shape51: TShapeNode;
Shape52: TShapeNode;
LineSet53: TLineSetNode;
Coordinate54: TCoordinateNode;
ColorRGBA55: TColorRGBANode;
Shape56: TShapeNode;
LineSet57: TLineSetNode;
Coordinate58: TCoordinateNode;
ColorRGBA59: TColorRGBANode;
HAnimJoint60: THAnimJointNode;
HAnimSegment61: THAnimSegmentNode;
Transform62: TTransformNode;
Transform63: TTransformNode;
Shape64: TShapeNode;
Shape65: TShapeNode;
LineSet66: TLineSetNode;
Coordinate67: TCoordinateNode;
ColorRGBA68: TColorRGBANode;
HAnimSite69: THAnimSiteNode;
TouchSensor70: TTouchSensorNode;
Shape71: TShapeNode;
Billboard72: TBillboardNode;
Shape73: TShapeNode;
Text74: TTextNode;
FontStyle75: TFontStyleNode;
HAnimSite76: THAnimSiteNode;
TouchSensor77: TTouchSensorNode;
Shape78: TShapeNode;
Billboard79: TBillboardNode;
Shape80: TShapeNode;
Text81: TTextNode;
FontStyle82: TFontStyleNode;
HAnimSite83: THAnimSiteNode;
TouchSensor84: TTouchSensorNode;
Shape85: TShapeNode;
Billboard86: TBillboardNode;
Shape87: TShapeNode;
Text88: TTextNode;
FontStyle89: TFontStyleNode;
HAnimSite90: THAnimSiteNode;
TouchSensor91: TTouchSensorNode;
Shape92: TShapeNode;
Billboard93: TBillboardNode;
Shape94: TShapeNode;
Text95: TTextNode;
FontStyle96: TFontStyleNode;
HAnimSite97: THAnimSiteNode;
TouchSensor98: TTouchSensorNode;
Shape99: TShapeNode;
Billboard100: TBillboardNode;
Shape101: TShapeNode;
Text102: TTextNode;
FontStyle103: TFontStyleNode;
HAnimSite104: THAnimSiteNode;
TouchSensor105: TTouchSensorNode;
Shape106: TShapeNode;
Billboard107: TBillboardNode;
Shape108: TShapeNode;
Text109: TTextNode;
FontStyle110: TFontStyleNode;
HAnimSite111: THAnimSiteNode;
TouchSensor112: TTouchSensorNode;
Shape113: TShapeNode;
Billboard114: TBillboardNode;
Shape115: TShapeNode;
Text116: TTextNode;
FontStyle117: TFontStyleNode;
HAnimSite118: THAnimSiteNode;
TouchSensor119: TTouchSensorNode;
Shape120: TShapeNode;
Billboard121: TBillboardNode;
Shape122: TShapeNode;
Text123: TTextNode;
FontStyle124: TFontStyleNode;
HAnimSite125: THAnimSiteNode;
TouchSensor126: TTouchSensorNode;
Shape127: TShapeNode;
Billboard128: TBillboardNode;
Shape129: TShapeNode;
Text130: TTextNode;
FontStyle131: TFontStyleNode;
HAnimSite132: THAnimSiteNode;
TouchSensor133: TTouchSensorNode;
Shape134: TShapeNode;
Billboard135: TBillboardNode;
Shape136: TShapeNode;
Text137: TTextNode;
FontStyle138: TFontStyleNode;
Shape139: TShapeNode;
LineSet140: TLineSetNode;
Coordinate141: TCoordinateNode;
ColorRGBA142: TColorRGBANode;
HAnimJoint143: THAnimJointNode;
HAnimSegment144: THAnimSegmentNode;
Transform145: TTransformNode;
Transform146: TTransformNode;
Shape147: TShapeNode;
Shape148: TShapeNode;
LineSet149: TLineSetNode;
Coordinate150: TCoordinateNode;
ColorRGBA151: TColorRGBANode;
HAnimSite152: THAnimSiteNode;
TouchSensor153: TTouchSensorNode;
Shape154: TShapeNode;
Billboard155: TBillboardNode;
Shape156: TShapeNode;
Text157: TTextNode;
FontStyle158: TFontStyleNode;
HAnimSite159: THAnimSiteNode;
TouchSensor160: TTouchSensorNode;
Shape161: TShapeNode;
Billboard162: TBillboardNode;
Shape163: TShapeNode;
Text164: TTextNode;
FontStyle165: TFontStyleNode;
HAnimSite166: THAnimSiteNode;
TouchSensor167: TTouchSensorNode;
Shape168: TShapeNode;
Billboard169: TBillboardNode;
Shape170: TShapeNode;
Text171: TTextNode;
FontStyle172: TFontStyleNode;
HAnimSite173: THAnimSiteNode;
TouchSensor174: TTouchSensorNode;
Shape175: TShapeNode;
Billboard176: TBillboardNode;
Shape177: TShapeNode;
Text178: TTextNode;
FontStyle179: TFontStyleNode;
HAnimJoint180: THAnimJointNode;
HAnimSegment181: THAnimSegmentNode;
Transform182: TTransformNode;
Transform183: TTransformNode;
Shape184: TShapeNode;
Shape185: TShapeNode;
LineSet186: TLineSetNode;
Coordinate187: TCoordinateNode;
ColorRGBA188: TColorRGBANode;
HAnimSite189: THAnimSiteNode;
TouchSensor190: TTouchSensorNode;
Shape191: TShapeNode;
Billboard192: TBillboardNode;
Shape193: TShapeNode;
Text194: TTextNode;
FontStyle195: TFontStyleNode;
HAnimSite196: THAnimSiteNode;
TouchSensor197: TTouchSensorNode;
Shape198: TShapeNode;
Billboard199: TBillboardNode;
Shape200: TShapeNode;
Text201: TTextNode;
FontStyle202: TFontStyleNode;
HAnimSite203: THAnimSiteNode;
TouchSensor204: TTouchSensorNode;
Shape205: TShapeNode;
Billboard206: TBillboardNode;
Shape207: TShapeNode;
Text208: TTextNode;
FontStyle209: TFontStyleNode;
HAnimJoint210: THAnimJointNode;
HAnimSegment211: THAnimSegmentNode;
Transform212: TTransformNode;
Transform213: TTransformNode;
Shape214: TShapeNode;
Shape215: TShapeNode;
LineSet216: TLineSetNode;
Coordinate217: TCoordinateNode;
ColorRGBA218: TColorRGBANode;
HAnimSite219: THAnimSiteNode;
TouchSensor220: TTouchSensorNode;
Shape221: TShapeNode;
Billboard222: TBillboardNode;
Shape223: TShapeNode;
Text224: TTextNode;
FontStyle225: TFontStyleNode;
HAnimSite226: THAnimSiteNode;
TouchSensor227: TTouchSensorNode;
Shape228: TShapeNode;
Billboard229: TBillboardNode;
Shape230: TShapeNode;
Text231: TTextNode;
FontStyle232: TFontStyleNode;
Shape233: TShapeNode;
LineSet234: TLineSetNode;
Coordinate235: TCoordinateNode;
ColorRGBA236: TColorRGBANode;
HAnimJoint237: THAnimJointNode;
HAnimSegment238: THAnimSegmentNode;
Transform239: TTransformNode;
Transform240: TTransformNode;
Shape241: TShapeNode;
Shape242: TShapeNode;
LineSet243: TLineSetNode;
Coordinate244: TCoordinateNode;
ColorRGBA245: TColorRGBANode;
Shape246: TShapeNode;
LineSet247: TLineSetNode;
Coordinate248: TCoordinateNode;
ColorRGBA249: TColorRGBANode;
Shape250: TShapeNode;
LineSet251: TLineSetNode;
Coordinate252: TCoordinateNode;
ColorRGBA253: TColorRGBANode;
HAnimJoint254: THAnimJointNode;
HAnimSegment255: THAnimSegmentNode;
Transform256: TTransformNode;
Transform257: TTransformNode;
Shape258: TShapeNode;
Shape259: TShapeNode;
LineSet260: TLineSetNode;
Coordinate261: TCoordinateNode;
ColorRGBA262: TColorRGBANode;
HAnimJoint263: THAnimJointNode;
HAnimSegment264: THAnimSegmentNode;
Transform265: TTransformNode;
Transform266: TTransformNode;
Shape267: TShapeNode;
Shape268: TShapeNode;
LineSet269: TLineSetNode;
Coordinate270: TCoordinateNode;
ColorRGBA271: TColorRGBANode;
HAnimJoint272: THAnimJointNode;
HAnimSegment273: THAnimSegmentNode;
Transform274: TTransformNode;
Transform275: TTransformNode;
Shape276: TShapeNode;
Shape277: TShapeNode;
LineSet278: TLineSetNode;
Coordinate279: TCoordinateNode;
ColorRGBA280: TColorRGBANode;
HAnimSite281: THAnimSiteNode;
TouchSensor282: TTouchSensorNode;
Shape283: TShapeNode;
Billboard284: TBillboardNode;
Shape285: TShapeNode;
Text286: TTextNode;
FontStyle287: TFontStyleNode;
HAnimJoint288: THAnimJointNode;
HAnimJoint289: THAnimJointNode;
HAnimSegment290: THAnimSegmentNode;
Transform291: TTransformNode;
Transform292: TTransformNode;
Shape293: TShapeNode;
Shape294: TShapeNode;
LineSet295: TLineSetNode;
Coordinate296: TCoordinateNode;
ColorRGBA297: TColorRGBANode;
HAnimJoint298: THAnimJointNode;
HAnimSegment299: THAnimSegmentNode;
Transform300: TTransformNode;
Transform301: TTransformNode;
Shape302: TShapeNode;
Shape303: TShapeNode;
LineSet304: TLineSetNode;
Coordinate305: TCoordinateNode;
ColorRGBA306: TColorRGBANode;
HAnimJoint307: THAnimJointNode;
HAnimSegment308: THAnimSegmentNode;
Transform309: TTransformNode;
Transform310: TTransformNode;
Shape311: TShapeNode;
Shape312: TShapeNode;
LineSet313: TLineSetNode;
Coordinate314: TCoordinateNode;
ColorRGBA315: TColorRGBANode;
HAnimJoint316: THAnimJointNode;
HAnimSegment317: THAnimSegmentNode;
Transform318: TTransformNode;
Transform319: TTransformNode;
Shape320: TShapeNode;
Shape321: TShapeNode;
LineSet322: TLineSetNode;
Coordinate323: TCoordinateNode;
ColorRGBA324: TColorRGBANode;
HAnimJoint325: THAnimJointNode;
HAnimJoint326: THAnimJointNode;
HAnimSegment327: THAnimSegmentNode;
Transform328: TTransformNode;
Transform329: TTransformNode;
Shape330: TShapeNode;
Shape331: TShapeNode;
LineSet332: TLineSetNode;
Coordinate333: TCoordinateNode;
ColorRGBA334: TColorRGBANode;
HAnimJoint335: THAnimJointNode;
HAnimSegment336: THAnimSegmentNode;
Transform337: TTransformNode;
Transform338: TTransformNode;
Shape339: TShapeNode;
Shape340: TShapeNode;
LineSet341: TLineSetNode;
Coordinate342: TCoordinateNode;
ColorRGBA343: TColorRGBANode;
HAnimJoint344: THAnimJointNode;
HAnimSegment345: THAnimSegmentNode;
Transform346: TTransformNode;
Transform347: TTransformNode;
Shape348: TShapeNode;
Shape349: TShapeNode;
LineSet350: TLineSetNode;
Coordinate351: TCoordinateNode;
ColorRGBA352: TColorRGBANode;
HAnimJoint353: THAnimJointNode;
HAnimSegment354: THAnimSegmentNode;
Transform355: TTransformNode;
Transform356: TTransformNode;
Shape357: TShapeNode;
Shape358: TShapeNode;
LineSet359: TLineSetNode;
Coordinate360: TCoordinateNode;
ColorRGBA361: TColorRGBANode;
HAnimJoint362: THAnimJointNode;
HAnimJoint363: THAnimJointNode;
HAnimSegment364: THAnimSegmentNode;
Transform365: TTransformNode;
Transform366: TTransformNode;
Shape367: TShapeNode;
Shape368: TShapeNode;
LineSet369: TLineSetNode;
Coordinate370: TCoordinateNode;
ColorRGBA371: TColorRGBANode;
HAnimJoint372: THAnimJointNode;
HAnimSegment373: THAnimSegmentNode;
Transform374: TTransformNode;
Transform375: TTransformNode;
Shape376: TShapeNode;
Shape377: TShapeNode;
LineSet378: TLineSetNode;
Coordinate379: TCoordinateNode;
ColorRGBA380: TColorRGBANode;
Shape381: TShapeNode;
LineSet382: TLineSetNode;
Coordinate383: TCoordinateNode;
ColorRGBA384: TColorRGBANode;
HAnimJoint385: THAnimJointNode;
HAnimSegment386: THAnimSegmentNode;
Transform387: TTransformNode;
Transform388: TTransformNode;
Shape389: TShapeNode;
Shape390: TShapeNode;
LineSet391: TLineSetNode;
Coordinate392: TCoordinateNode;
ColorRGBA393: TColorRGBANode;
HAnimJoint394: THAnimJointNode;
HAnimSegment395: THAnimSegmentNode;
Transform396: TTransformNode;
Transform397: TTransformNode;
Shape398: TShapeNode;
Shape399: TShapeNode;
LineSet400: TLineSetNode;
Coordinate401: TCoordinateNode;
ColorRGBA402: TColorRGBANode;
HAnimJoint403: THAnimJointNode;
HAnimSegment404: THAnimSegmentNode;
Transform405: TTransformNode;
Transform406: TTransformNode;
Shape407: TShapeNode;
Shape408: TShapeNode;
LineSet409: TLineSetNode;
Coordinate410: TCoordinateNode;
ColorRGBA411: TColorRGBANode;
HAnimJoint412: THAnimJointNode;
HAnimJoint413: THAnimJointNode;
HAnimSegment414: THAnimSegmentNode;
Transform415: TTransformNode;
Transform416: TTransformNode;
Shape417: TShapeNode;
Shape418: TShapeNode;
LineSet419: TLineSetNode;
Coordinate420: TCoordinateNode;
ColorRGBA421: TColorRGBANode;
HAnimJoint422: THAnimJointNode;
HAnimSegment423: THAnimSegmentNode;
Transform424: TTransformNode;
Transform425: TTransformNode;
Shape426: TShapeNode;
Shape427: TShapeNode;
LineSet428: TLineSetNode;
Coordinate429: TCoordinateNode;
ColorRGBA430: TColorRGBANode;
HAnimSite431: THAnimSiteNode;
TouchSensor432: TTouchSensorNode;
Shape433: TShapeNode;
Billboard434: TBillboardNode;
Shape435: TShapeNode;
Text436: TTextNode;
FontStyle437: TFontStyleNode;
HAnimJoint438: THAnimJointNode;
HAnimSegment439: THAnimSegmentNode;
Transform440: TTransformNode;
Transform441: TTransformNode;
Shape442: TShapeNode;
Shape443: TShapeNode;
LineSet444: TLineSetNode;
Coordinate445: TCoordinateNode;
ColorRGBA446: TColorRGBANode;
HAnimJoint447: THAnimJointNode;
HAnimJoint448: THAnimJointNode;
HAnimSegment449: THAnimSegmentNode;
Transform450: TTransformNode;
Transform451: TTransformNode;
Shape452: TShapeNode;
Shape453: TShapeNode;
LineSet454: TLineSetNode;
Coordinate455: TCoordinateNode;
ColorRGBA456: TColorRGBANode;
HAnimSite457: THAnimSiteNode;
TouchSensor458: TTouchSensorNode;
Shape459: TShapeNode;
Billboard460: TBillboardNode;
Shape461: TShapeNode;
Text462: TTextNode;
FontStyle463: TFontStyleNode;
HAnimSite464: THAnimSiteNode;
TouchSensor465: TTouchSensorNode;
Shape466: TShapeNode;
Billboard467: TBillboardNode;
Shape468: TShapeNode;
Text469: TTextNode;
FontStyle470: TFontStyleNode;
HAnimSite471: THAnimSiteNode;
TouchSensor472: TTouchSensorNode;
Shape473: TShapeNode;
Billboard474: TBillboardNode;
Shape475: TShapeNode;
Text476: TTextNode;
FontStyle477: TFontStyleNode;
HAnimSite478: THAnimSiteNode;
TouchSensor479: TTouchSensorNode;
Shape480: TShapeNode;
Billboard481: TBillboardNode;
Shape482: TShapeNode;
Text483: TTextNode;
FontStyle484: TFontStyleNode;
HAnimJoint485: THAnimJointNode;
HAnimSegment486: THAnimSegmentNode;
Transform487: TTransformNode;
Transform488: TTransformNode;
Shape489: TShapeNode;
Shape490: TShapeNode;
LineSet491: TLineSetNode;
Coordinate492: TCoordinateNode;
ColorRGBA493: TColorRGBANode;
HAnimSite494: THAnimSiteNode;
TouchSensor495: TTouchSensorNode;
Shape496: TShapeNode;
Billboard497: TBillboardNode;
Shape498: TShapeNode;
Text499: TTextNode;
FontStyle500: TFontStyleNode;
HAnimSite501: THAnimSiteNode;
TouchSensor502: TTouchSensorNode;
Shape503: TShapeNode;
Billboard504: TBillboardNode;
Shape505: TShapeNode;
Text506: TTextNode;
FontStyle507: TFontStyleNode;
HAnimSite508: THAnimSiteNode;
TouchSensor509: TTouchSensorNode;
Shape510: TShapeNode;
Billboard511: TBillboardNode;
Shape512: TShapeNode;
Text513: TTextNode;
FontStyle514: TFontStyleNode;
HAnimJoint515: THAnimJointNode;
HAnimSegment516: THAnimSegmentNode;
Transform517: TTransformNode;
Transform518: TTransformNode;
Shape519: TShapeNode;
Shape520: TShapeNode;
LineSet521: TLineSetNode;
Coordinate522: TCoordinateNode;
ColorRGBA523: TColorRGBANode;
HAnimSite524: THAnimSiteNode;
TouchSensor525: TTouchSensorNode;
Shape526: TShapeNode;
Billboard527: TBillboardNode;
Shape528: TShapeNode;
Text529: TTextNode;
FontStyle530: TFontStyleNode;
HAnimSite531: THAnimSiteNode;
TouchSensor532: TTouchSensorNode;
Shape533: TShapeNode;
Billboard534: TBillboardNode;
Shape535: TShapeNode;
Text536: TTextNode;
FontStyle537: TFontStyleNode;
Shape538: TShapeNode;
LineSet539: TLineSetNode;
Coordinate540: TCoordinateNode;
ColorRGBA541: TColorRGBANode;
HAnimJoint542: THAnimJointNode;
HAnimSegment543: THAnimSegmentNode;
Transform544: TTransformNode;
Transform545: TTransformNode;
Shape546: TShapeNode;
Shape547: TShapeNode;
LineSet548: TLineSetNode;
Coordinate549: TCoordinateNode;
ColorRGBA550: TColorRGBANode;
Shape551: TShapeNode;
LineSet552: TLineSetNode;
Coordinate553: TCoordinateNode;
ColorRGBA554: TColorRGBANode;
Shape555: TShapeNode;
LineSet556: TLineSetNode;
Coordinate557: TCoordinateNode;
ColorRGBA558: TColorRGBANode;
HAnimJoint559: THAnimJointNode;
HAnimSegment560: THAnimSegmentNode;
Transform561: TTransformNode;
Transform562: TTransformNode;
Shape563: TShapeNode;
Shape564: TShapeNode;
LineSet565: TLineSetNode;
Coordinate566: TCoordinateNode;
ColorRGBA567: TColorRGBANode;
HAnimJoint568: THAnimJointNode;
HAnimSegment569: THAnimSegmentNode;
Transform570: TTransformNode;
Transform571: TTransformNode;
Shape572: TShapeNode;
Shape573: TShapeNode;
LineSet574: TLineSetNode;
Coordinate575: TCoordinateNode;
ColorRGBA576: TColorRGBANode;
HAnimJoint577: THAnimJointNode;
HAnimSegment578: THAnimSegmentNode;
Transform579: TTransformNode;
Transform580: TTransformNode;
Shape581: TShapeNode;
Shape582: TShapeNode;
LineSet583: TLineSetNode;
Coordinate584: TCoordinateNode;
ColorRGBA585: TColorRGBANode;
HAnimSite586: THAnimSiteNode;
TouchSensor587: TTouchSensorNode;
Shape588: TShapeNode;
Billboard589: TBillboardNode;
Shape590: TShapeNode;
Text591: TTextNode;
FontStyle592: TFontStyleNode;
HAnimJoint593: THAnimJointNode;
HAnimJoint594: THAnimJointNode;
HAnimSegment595: THAnimSegmentNode;
Transform596: TTransformNode;
Transform597: TTransformNode;
Shape598: TShapeNode;
Shape599: TShapeNode;
LineSet600: TLineSetNode;
Coordinate601: TCoordinateNode;
ColorRGBA602: TColorRGBANode;
HAnimJoint603: THAnimJointNode;
HAnimSegment604: THAnimSegmentNode;
Transform605: TTransformNode;
Transform606: TTransformNode;
Shape607: TShapeNode;
Shape608: TShapeNode;
LineSet609: TLineSetNode;
Coordinate610: TCoordinateNode;
ColorRGBA611: TColorRGBANode;
HAnimJoint612: THAnimJointNode;
HAnimSegment613: THAnimSegmentNode;
Transform614: TTransformNode;
Transform615: TTransformNode;
Shape616: TShapeNode;
Shape617: TShapeNode;
LineSet618: TLineSetNode;
Coordinate619: TCoordinateNode;
ColorRGBA620: TColorRGBANode;
HAnimJoint621: THAnimJointNode;
HAnimSegment622: THAnimSegmentNode;
Transform623: TTransformNode;
Transform624: TTransformNode;
Shape625: TShapeNode;
Shape626: TShapeNode;
LineSet627: TLineSetNode;
Coordinate628: TCoordinateNode;
ColorRGBA629: TColorRGBANode;
HAnimJoint630: THAnimJointNode;
HAnimJoint631: THAnimJointNode;
HAnimSegment632: THAnimSegmentNode;
Transform633: TTransformNode;
Transform634: TTransformNode;
Shape635: TShapeNode;
Shape636: TShapeNode;
LineSet637: TLineSetNode;
Coordinate638: TCoordinateNode;
ColorRGBA639: TColorRGBANode;
HAnimJoint640: THAnimJointNode;
HAnimSegment641: THAnimSegmentNode;
Transform642: TTransformNode;
Transform643: TTransformNode;
Shape644: TShapeNode;
Shape645: TShapeNode;
LineSet646: TLineSetNode;
Coordinate647: TCoordinateNode;
ColorRGBA648: TColorRGBANode;
HAnimJoint649: THAnimJointNode;
HAnimSegment650: THAnimSegmentNode;
Transform651: TTransformNode;
Transform652: TTransformNode;
Shape653: TShapeNode;
Shape654: TShapeNode;
LineSet655: TLineSetNode;
Coordinate656: TCoordinateNode;
ColorRGBA657: TColorRGBANode;
HAnimJoint658: THAnimJointNode;
HAnimSegment659: THAnimSegmentNode;
Transform660: TTransformNode;
Transform661: TTransformNode;
Shape662: TShapeNode;
Shape663: TShapeNode;
LineSet664: TLineSetNode;
Coordinate665: TCoordinateNode;
ColorRGBA666: TColorRGBANode;
HAnimJoint667: THAnimJointNode;
HAnimJoint668: THAnimJointNode;
HAnimSegment669: THAnimSegmentNode;
Transform670: TTransformNode;
Transform671: TTransformNode;
Shape672: TShapeNode;
Shape673: TShapeNode;
LineSet674: TLineSetNode;
Coordinate675: TCoordinateNode;
ColorRGBA676: TColorRGBANode;
HAnimJoint677: THAnimJointNode;
HAnimSegment678: THAnimSegmentNode;
Transform679: TTransformNode;
Transform680: TTransformNode;
Shape681: TShapeNode;
Shape682: TShapeNode;
LineSet683: TLineSetNode;
Coordinate684: TCoordinateNode;
ColorRGBA685: TColorRGBANode;
Shape686: TShapeNode;
LineSet687: TLineSetNode;
Coordinate688: TCoordinateNode;
ColorRGBA689: TColorRGBANode;
HAnimJoint690: THAnimJointNode;
HAnimSegment691: THAnimSegmentNode;
Transform692: TTransformNode;
Transform693: TTransformNode;
Shape694: TShapeNode;
Shape695: TShapeNode;
LineSet696: TLineSetNode;
Coordinate697: TCoordinateNode;
ColorRGBA698: TColorRGBANode;
HAnimJoint699: THAnimJointNode;
HAnimSegment700: THAnimSegmentNode;
Transform701: TTransformNode;
Transform702: TTransformNode;
Shape703: TShapeNode;
Shape704: TShapeNode;
LineSet705: TLineSetNode;
Coordinate706: TCoordinateNode;
ColorRGBA707: TColorRGBANode;
HAnimJoint708: THAnimJointNode;
HAnimSegment709: THAnimSegmentNode;
Transform710: TTransformNode;
Transform711: TTransformNode;
Shape712: TShapeNode;
Shape713: TShapeNode;
LineSet714: TLineSetNode;
Coordinate715: TCoordinateNode;
ColorRGBA716: TColorRGBANode;
HAnimJoint717: THAnimJointNode;
HAnimJoint718: THAnimJointNode;
HAnimSegment719: THAnimSegmentNode;
Transform720: TTransformNode;
Transform721: TTransformNode;
Shape722: TShapeNode;
Shape723: TShapeNode;
LineSet724: TLineSetNode;
Coordinate725: TCoordinateNode;
ColorRGBA726: TColorRGBANode;
HAnimJoint727: THAnimJointNode;
HAnimSegment728: THAnimSegmentNode;
Transform729: TTransformNode;
Transform730: TTransformNode;
Shape731: TShapeNode;
Shape732: TShapeNode;
LineSet733: TLineSetNode;
Coordinate734: TCoordinateNode;
ColorRGBA735: TColorRGBANode;
HAnimSite736: THAnimSiteNode;
TouchSensor737: TTouchSensorNode;
Shape738: TShapeNode;
Billboard739: TBillboardNode;
Shape740: TShapeNode;
Text741: TTextNode;
FontStyle742: TFontStyleNode;
HAnimJoint743: THAnimJointNode;
HAnimSegment744: THAnimSegmentNode;
Transform745: TTransformNode;
Transform746: TTransformNode;
Shape747: TShapeNode;
Shape748: TShapeNode;
LineSet749: TLineSetNode;
Coordinate750: TCoordinateNode;
ColorRGBA751: TColorRGBANode;
HAnimJoint752: THAnimJointNode;
HAnimJoint753: THAnimJointNode;
HAnimSegment754: THAnimSegmentNode;
Transform755: TTransformNode;
Transform756: TTransformNode;
Shape757: TShapeNode;
Shape758: TShapeNode;
LineSet759: TLineSetNode;
Coordinate760: TCoordinateNode;
ColorRGBA761: TColorRGBANode;
HAnimSite762: THAnimSiteNode;
TouchSensor763: TTouchSensorNode;
Shape764: TShapeNode;
Billboard765: TBillboardNode;
Shape766: TShapeNode;
Text767: TTextNode;
FontStyle768: TFontStyleNode;
HAnimSite769: THAnimSiteNode;
TouchSensor770: TTouchSensorNode;
Shape771: TShapeNode;
Billboard772: TBillboardNode;
Shape773: TShapeNode;
Text774: TTextNode;
FontStyle775: TFontStyleNode;
HAnimSite776: THAnimSiteNode;
TouchSensor777: TTouchSensorNode;
Shape778: TShapeNode;
Billboard779: TBillboardNode;
Shape780: TShapeNode;
Text781: TTextNode;
FontStyle782: TFontStyleNode;
HAnimJoint783: THAnimJointNode;
HAnimSegment784: THAnimSegmentNode;
Transform785: TTransformNode;
Transform786: TTransformNode;
Shape787: TShapeNode;
Shape788: TShapeNode;
LineSet789: TLineSetNode;
Coordinate790: TCoordinateNode;
ColorRGBA791: TColorRGBANode;
HAnimJoint792: THAnimJointNode;
HAnimSegment793: THAnimSegmentNode;
Transform794: TTransformNode;
Transform795: TTransformNode;
Shape796: TShapeNode;
Shape797: TShapeNode;
LineSet798: TLineSetNode;
Coordinate799: TCoordinateNode;
ColorRGBA800: TColorRGBANode;
HAnimJoint801: THAnimJointNode;
HAnimSegment802: THAnimSegmentNode;
Transform803: TTransformNode;
Transform804: TTransformNode;
Shape805: TShapeNode;
Shape806: TShapeNode;
LineSet807: TLineSetNode;
Coordinate808: TCoordinateNode;
ColorRGBA809: TColorRGBANode;
HAnimSite810: THAnimSiteNode;
TouchSensor811: TTouchSensorNode;
Shape812: TShapeNode;
Billboard813: TBillboardNode;
Shape814: TShapeNode;
Text815: TTextNode;
FontStyle816: TFontStyleNode;
HAnimSite817: THAnimSiteNode;
TouchSensor818: TTouchSensorNode;
Shape819: TShapeNode;
Billboard820: TBillboardNode;
Shape821: TShapeNode;
Text822: TTextNode;
FontStyle823: TFontStyleNode;
HAnimSite824: THAnimSiteNode;
TouchSensor825: TTouchSensorNode;
Shape826: TShapeNode;
Billboard827: TBillboardNode;
Shape828: TShapeNode;
Text829: TTextNode;
FontStyle830: TFontStyleNode;
HAnimJoint831: THAnimJointNode;
HAnimSegment832: THAnimSegmentNode;
Transform833: TTransformNode;
Transform834: TTransformNode;
Shape835: TShapeNode;
Shape836: TShapeNode;
LineSet837: TLineSetNode;
Coordinate838: TCoordinateNode;
ColorRGBA839: TColorRGBANode;
HAnimJoint840: THAnimJointNode;
HAnimSegment841: THAnimSegmentNode;
Transform842: TTransformNode;
Transform843: TTransformNode;
Shape844: TShapeNode;
Shape845: TShapeNode;
LineSet846: TLineSetNode;
Coordinate847: TCoordinateNode;
ColorRGBA848: TColorRGBANode;
HAnimJoint849: THAnimJointNode;
HAnimSegment850: THAnimSegmentNode;
Transform851: TTransformNode;
Transform852: TTransformNode;
Shape853: TShapeNode;
Shape854: TShapeNode;
LineSet855: TLineSetNode;
Coordinate856: TCoordinateNode;
ColorRGBA857: TColorRGBANode;
HAnimJoint858: THAnimJointNode;
HAnimSegment859: THAnimSegmentNode;
Transform860: TTransformNode;
Transform861: TTransformNode;
Shape862: TShapeNode;
Shape863: TShapeNode;
LineSet864: TLineSetNode;
Coordinate865: TCoordinateNode;
ColorRGBA866: TColorRGBANode;
HAnimSite867: THAnimSiteNode;
TouchSensor868: TTouchSensorNode;
Shape869: TShapeNode;
Billboard870: TBillboardNode;
Shape871: TShapeNode;
Text872: TTextNode;
FontStyle873: TFontStyleNode;
HAnimJoint874: THAnimJointNode;
HAnimSegment875: THAnimSegmentNode;
Transform876: TTransformNode;
Transform877: TTransformNode;
Shape878: TShapeNode;
Shape879: TShapeNode;
LineSet880: TLineSetNode;
Coordinate881: TCoordinateNode;
ColorRGBA882: TColorRGBANode;
HAnimSite883: THAnimSiteNode;
TouchSensor884: TTouchSensorNode;
Shape885: TShapeNode;
Billboard886: TBillboardNode;
Shape887: TShapeNode;
Text888: TTextNode;
FontStyle889: TFontStyleNode;
HAnimSite890: THAnimSiteNode;
TouchSensor891: TTouchSensorNode;
Shape892: TShapeNode;
Billboard893: TBillboardNode;
Shape894: TShapeNode;
Text895: TTextNode;
FontStyle896: TFontStyleNode;
HAnimJoint897: THAnimJointNode;
HAnimSegment898: THAnimSegmentNode;
Transform899: TTransformNode;
Transform900: TTransformNode;
Shape901: TShapeNode;
Shape902: TShapeNode;
LineSet903: TLineSetNode;
Coordinate904: TCoordinateNode;
ColorRGBA905: TColorRGBANode;
HAnimJoint906: THAnimJointNode;
HAnimSegment907: THAnimSegmentNode;
Transform908: TTransformNode;
Transform909: TTransformNode;
Shape910: TShapeNode;
Shape911: TShapeNode;
LineSet912: TLineSetNode;
Coordinate913: TCoordinateNode;
ColorRGBA914: TColorRGBANode;
HAnimJoint915: THAnimJointNode;
HAnimSegment916: THAnimSegmentNode;
Transform917: TTransformNode;
Transform918: TTransformNode;
Shape919: TShapeNode;
Shape920: TShapeNode;
LineSet921: TLineSetNode;
Coordinate922: TCoordinateNode;
ColorRGBA923: TColorRGBANode;
HAnimSite924: THAnimSiteNode;
TouchSensor925: TTouchSensorNode;
Shape926: TShapeNode;
Billboard927: TBillboardNode;
Shape928: TShapeNode;
Text929: TTextNode;
FontStyle930: TFontStyleNode;
HAnimSite931: THAnimSiteNode;
TouchSensor932: TTouchSensorNode;
Shape933: TShapeNode;
Billboard934: TBillboardNode;
Shape935: TShapeNode;
Text936: TTextNode;
FontStyle937: TFontStyleNode;
HAnimSite938: THAnimSiteNode;
TouchSensor939: TTouchSensorNode;
Shape940: TShapeNode;
Billboard941: TBillboardNode;
Shape942: TShapeNode;
Text943: TTextNode;
FontStyle944: TFontStyleNode;
HAnimSite945: THAnimSiteNode;
TouchSensor946: TTouchSensorNode;
Shape947: TShapeNode;
Billboard948: TBillboardNode;
Shape949: TShapeNode;
Text950: TTextNode;
FontStyle951: TFontStyleNode;
HAnimJoint952: THAnimJointNode;
HAnimSegment953: THAnimSegmentNode;
Transform954: TTransformNode;
Transform955: TTransformNode;
Shape956: TShapeNode;
Shape957: TShapeNode;
LineSet958: TLineSetNode;
Coordinate959: TCoordinateNode;
ColorRGBA960: TColorRGBANode;
HAnimSite961: THAnimSiteNode;
TouchSensor962: TTouchSensorNode;
Shape963: TShapeNode;
Billboard964: TBillboardNode;
Shape965: TShapeNode;
Text966: TTextNode;
FontStyle967: TFontStyleNode;
HAnimJoint968: THAnimJointNode;
HAnimSegment969: THAnimSegmentNode;
Transform970: TTransformNode;
Transform971: TTransformNode;
Shape972: TShapeNode;
Shape973: TShapeNode;
LineSet974: TLineSetNode;
Coordinate975: TCoordinateNode;
ColorRGBA976: TColorRGBANode;
HAnimJoint977: THAnimJointNode;
HAnimSegment978: THAnimSegmentNode;
Transform979: TTransformNode;
Transform980: TTransformNode;
Shape981: TShapeNode;
Shape982: TShapeNode;
LineSet983: TLineSetNode;
Coordinate984: TCoordinateNode;
ColorRGBA985: TColorRGBANode;
HAnimJoint986: THAnimJointNode;
HAnimSegment987: THAnimSegmentNode;
Transform988: TTransformNode;
Transform989: TTransformNode;
Shape990: TShapeNode;
Shape991: TShapeNode;
LineSet992: TLineSetNode;
Coordinate993: TCoordinateNode;
ColorRGBA994: TColorRGBANode;
HAnimJoint995: THAnimJointNode;
HAnimSegment996: THAnimSegmentNode;
Transform997: TTransformNode;
Transform998: TTransformNode;
Shape999: TShapeNode;
Shape1000: TShapeNode;
LineSet1001: TLineSetNode;
Coordinate1002: TCoordinateNode;
ColorRGBA1003: TColorRGBANode;
HAnimSite1004: THAnimSiteNode;
TouchSensor1005: TTouchSensorNode;
Shape1006: TShapeNode;
Billboard1007: TBillboardNode;
Shape1008: TShapeNode;
Text1009: TTextNode;
FontStyle1010: TFontStyleNode;
HAnimSite1011: THAnimSiteNode;
TouchSensor1012: TTouchSensorNode;
Shape1013: TShapeNode;
Billboard1014: TBillboardNode;
Shape1015: TShapeNode;
Text1016: TTextNode;
FontStyle1017: TFontStyleNode;
Shape1018: TShapeNode;
LineSet1019: TLineSetNode;
Coordinate1020: TCoordinateNode;
ColorRGBA1021: TColorRGBANode;
Shape1022: TShapeNode;
LineSet1023: TLineSetNode;
Coordinate1024: TCoordinateNode;
ColorRGBA1025: TColorRGBANode;
HAnimJoint1026: THAnimJointNode;
HAnimSegment1027: THAnimSegmentNode;
Transform1028: TTransformNode;
Transform1029: TTransformNode;
Shape1030: TShapeNode;
Shape1031: TShapeNode;
LineSet1032: TLineSetNode;
Coordinate1033: TCoordinateNode;
ColorRGBA1034: TColorRGBANode;
HAnimSite1035: THAnimSiteNode;
TouchSensor1036: TTouchSensorNode;
Shape1037: TShapeNode;
Billboard1038: TBillboardNode;
Shape1039: TShapeNode;
Text1040: TTextNode;
FontStyle1041: TFontStyleNode;
HAnimSite1042: THAnimSiteNode;
TouchSensor1043: TTouchSensorNode;
Shape1044: TShapeNode;
Billboard1045: TBillboardNode;
Shape1046: TShapeNode;
Text1047: TTextNode;
FontStyle1048: TFontStyleNode;
HAnimJoint1049: THAnimJointNode;
HAnimSegment1050: THAnimSegmentNode;
Transform1051: TTransformNode;
Transform1052: TTransformNode;
Shape1053: TShapeNode;
Shape1054: TShapeNode;
LineSet1055: TLineSetNode;
Coordinate1056: TCoordinateNode;
ColorRGBA1057: TColorRGBANode;
HAnimJoint1058: THAnimJointNode;
HAnimSegment1059: THAnimSegmentNode;
Transform1060: TTransformNode;
Transform1061: TTransformNode;
Shape1062: TShapeNode;
Shape1063: TShapeNode;
LineSet1064: TLineSetNode;
Coordinate1065: TCoordinateNode;
ColorRGBA1066: TColorRGBANode;
HAnimJoint1067: THAnimJointNode;
HAnimSegment1068: THAnimSegmentNode;
Transform1069: TTransformNode;
Transform1070: TTransformNode;
Shape1071: TShapeNode;
Shape1072: TShapeNode;
LineSet1073: TLineSetNode;
Coordinate1074: TCoordinateNode;
ColorRGBA1075: TColorRGBANode;
HAnimJoint1076: THAnimJointNode;
HAnimSegment1077: THAnimSegmentNode;
Transform1078: TTransformNode;
Transform1079: TTransformNode;
Shape1080: TShapeNode;
Shape1081: TShapeNode;
LineSet1082: TLineSetNode;
Coordinate1083: TCoordinateNode;
ColorRGBA1084: TColorRGBANode;
HAnimJoint1085: THAnimJointNode;
HAnimSegment1086: THAnimSegmentNode;
Transform1087: TTransformNode;
Transform1088: TTransformNode;
Shape1089: TShapeNode;
Shape1090: TShapeNode;
LineSet1091: TLineSetNode;
Coordinate1092: TCoordinateNode;
ColorRGBA1093: TColorRGBANode;
HAnimSite1094: THAnimSiteNode;
TouchSensor1095: TTouchSensorNode;
Shape1096: TShapeNode;
Billboard1097: TBillboardNode;
Shape1098: TShapeNode;
Text1099: TTextNode;
FontStyle1100: TFontStyleNode;
HAnimJoint1101: THAnimJointNode;
HAnimSegment1102: THAnimSegmentNode;
Transform1103: TTransformNode;
Transform1104: TTransformNode;
Shape1105: TShapeNode;
Shape1106: TShapeNode;
LineSet1107: TLineSetNode;
Coordinate1108: TCoordinateNode;
ColorRGBA1109: TColorRGBANode;
HAnimJoint1110: THAnimJointNode;
HAnimSegment1111: THAnimSegmentNode;
Transform1112: TTransformNode;
Transform1113: TTransformNode;
Shape1114: TShapeNode;
Shape1115: TShapeNode;
LineSet1116: TLineSetNode;
Coordinate1117: TCoordinateNode;
ColorRGBA1118: TColorRGBANode;
HAnimSite1119: THAnimSiteNode;
TouchSensor1120: TTouchSensorNode;
Shape1121: TShapeNode;
Billboard1122: TBillboardNode;
Shape1123: TShapeNode;
Text1124: TTextNode;
FontStyle1125: TFontStyleNode;
HAnimSite1126: THAnimSiteNode;
TouchSensor1127: TTouchSensorNode;
Shape1128: TShapeNode;
Billboard1129: TBillboardNode;
Shape1130: TShapeNode;
Text1131: TTextNode;
FontStyle1132: TFontStyleNode;
HAnimSite1133: THAnimSiteNode;
TouchSensor1134: TTouchSensorNode;
Shape1135: TShapeNode;
Billboard1136: TBillboardNode;
Shape1137: TShapeNode;
Text1138: TTextNode;
FontStyle1139: TFontStyleNode;
HAnimSite1140: THAnimSiteNode;
TouchSensor1141: TTouchSensorNode;
Shape1142: TShapeNode;
Billboard1143: TBillboardNode;
Shape1144: TShapeNode;
Text1145: TTextNode;
FontStyle1146: TFontStyleNode;
HAnimSite1147: THAnimSiteNode;
TouchSensor1148: TTouchSensorNode;
Shape1149: TShapeNode;
Billboard1150: TBillboardNode;
Shape1151: TShapeNode;
Text1152: TTextNode;
FontStyle1153: TFontStyleNode;
HAnimSite1154: THAnimSiteNode;
TouchSensor1155: TTouchSensorNode;
Shape1156: TShapeNode;
Billboard1157: TBillboardNode;
Shape1158: TShapeNode;
Text1159: TTextNode;
FontStyle1160: TFontStyleNode;
HAnimSite1161: THAnimSiteNode;
TouchSensor1162: TTouchSensorNode;
Shape1163: TShapeNode;
Billboard1164: TBillboardNode;
Shape1165: TShapeNode;
Text1166: TTextNode;
FontStyle1167: TFontStyleNode;
HAnimSite1168: THAnimSiteNode;
TouchSensor1169: TTouchSensorNode;
Shape1170: TShapeNode;
Billboard1171: TBillboardNode;
Shape1172: TShapeNode;
Text1173: TTextNode;
FontStyle1174: TFontStyleNode;
HAnimSite1175: THAnimSiteNode;
TouchSensor1176: TTouchSensorNode;
Shape1177: TShapeNode;
Billboard1178: TBillboardNode;
Shape1179: TShapeNode;
Text1180: TTextNode;
FontStyle1181: TFontStyleNode;
HAnimSite1182: THAnimSiteNode;
TouchSensor1183: TTouchSensorNode;
Shape1184: TShapeNode;
Billboard1185: TBillboardNode;
Shape1186: TShapeNode;
Text1187: TTextNode;
FontStyle1188: TFontStyleNode;
HAnimSite1189: THAnimSiteNode;
TouchSensor1190: TTouchSensorNode;
Shape1191: TShapeNode;
Billboard1192: TBillboardNode;
Shape1193: TShapeNode;
Text1194: TTextNode;
FontStyle1195: TFontStyleNode;
Shape1196: TShapeNode;
LineSet1197: TLineSetNode;
Coordinate1198: TCoordinateNode;
ColorRGBA1199: TColorRGBANode;
Shape1200: TShapeNode;
LineSet1201: TLineSetNode;
Coordinate1202: TCoordinateNode;
ColorRGBA1203: TColorRGBANode;
Shape1204: TShapeNode;
LineSet1205: TLineSetNode;
Coordinate1206: TCoordinateNode;
ColorRGBA1207: TColorRGBANode;
Shape1208: TShapeNode;
LineSet1209: TLineSetNode;
Coordinate1210: TCoordinateNode;
ColorRGBA1211: TColorRGBANode;
Shape1212: TShapeNode;
LineSet1213: TLineSetNode;
Coordinate1214: TCoordinateNode;
ColorRGBA1215: TColorRGBANode;
Shape1216: TShapeNode;
LineSet1217: TLineSetNode;
Coordinate1218: TCoordinateNode;
ColorRGBA1219: TColorRGBANode;
HAnimJoint1220: THAnimJointNode;
HAnimJoint1221: THAnimJointNode;
HAnimJoint1222: THAnimJointNode;
HAnimJoint1223: THAnimJointNode;
HAnimJoint1224: THAnimJointNode;
HAnimJoint1225: THAnimJointNode;
HAnimJoint1226: THAnimJointNode;
HAnimJoint1227: THAnimJointNode;
HAnimSegment1228: THAnimSegmentNode;
Transform1229: TTransformNode;
Transform1230: TTransformNode;
Shape1231: TShapeNode;
Shape1232: TShapeNode;
LineSet1233: TLineSetNode;
Coordinate1234: TCoordinateNode;
ColorRGBA1235: TColorRGBANode;
HAnimSite1236: THAnimSiteNode;
TouchSensor1237: TTouchSensorNode;
Shape1238: TShapeNode;
Billboard1239: TBillboardNode;
Shape1240: TShapeNode;
Text1241: TTextNode;
FontStyle1242: TFontStyleNode;
HAnimSite1243: THAnimSiteNode;
TouchSensor1244: TTouchSensorNode;
Shape1245: TShapeNode;
Billboard1246: TBillboardNode;
Shape1247: TShapeNode;
Text1248: TTextNode;
FontStyle1249: TFontStyleNode;
HAnimSite1250: THAnimSiteNode;
TouchSensor1251: TTouchSensorNode;
Shape1252: TShapeNode;
Billboard1253: TBillboardNode;
Shape1254: TShapeNode;
Text1255: TTextNode;
FontStyle1256: TFontStyleNode;
HAnimSite1257: THAnimSiteNode;
TouchSensor1258: TTouchSensorNode;
Shape1259: TShapeNode;
Billboard1260: TBillboardNode;
Shape1261: TShapeNode;
Text1262: TTextNode;
FontStyle1263: TFontStyleNode;
HAnimSite1264: THAnimSiteNode;
TouchSensor1265: TTouchSensorNode;
Shape1266: TShapeNode;
Billboard1267: TBillboardNode;
Shape1268: TShapeNode;
Text1269: TTextNode;
FontStyle1270: TFontStyleNode;
HAnimJoint1271: THAnimJointNode;
HAnimSegment1272: THAnimSegmentNode;
Transform1273: TTransformNode;
Transform1274: TTransformNode;
Shape1275: TShapeNode;
Shape1276: TShapeNode;
LineSet1277: TLineSetNode;
Coordinate1278: TCoordinateNode;
ColorRGBA1279: TColorRGBANode;
HAnimJoint1280: THAnimJointNode;
HAnimSegment1281: THAnimSegmentNode;
Transform1282: TTransformNode;
Transform1283: TTransformNode;
Shape1284: TShapeNode;
Shape1285: TShapeNode;
LineSet1286: TLineSetNode;
Coordinate1287: TCoordinateNode;
ColorRGBA1288: TColorRGBANode;
HAnimSite1289: THAnimSiteNode;
TouchSensor1290: TTouchSensorNode;
Shape1291: TShapeNode;
Billboard1292: TBillboardNode;
Shape1293: TShapeNode;
Text1294: TTextNode;
FontStyle1295: TFontStyleNode;
HAnimSite1296: THAnimSiteNode;
TouchSensor1297: TTouchSensorNode;
Shape1298: TShapeNode;
Billboard1299: TBillboardNode;
Shape1300: TShapeNode;
Text1301: TTextNode;
FontStyle1302: TFontStyleNode;
HAnimJoint1303: THAnimJointNode;
HAnimSegment1304: THAnimSegmentNode;
Transform1305: TTransformNode;
Transform1306: TTransformNode;
Shape1307: TShapeNode;
Shape1308: TShapeNode;
LineSet1309: TLineSetNode;
Coordinate1310: TCoordinateNode;
ColorRGBA1311: TColorRGBANode;
HAnimSite1312: THAnimSiteNode;
TouchSensor1313: TTouchSensorNode;
Shape1314: TShapeNode;
Billboard1315: TBillboardNode;
Shape1316: TShapeNode;
Text1317: TTextNode;
FontStyle1318: TFontStyleNode;
HAnimSite1319: THAnimSiteNode;
TouchSensor1320: TTouchSensorNode;
Shape1321: TShapeNode;
Billboard1322: TBillboardNode;
Shape1323: TShapeNode;
Text1324: TTextNode;
FontStyle1325: TFontStyleNode;
HAnimSite1326: THAnimSiteNode;
TouchSensor1327: TTouchSensorNode;
Shape1328: TShapeNode;
Billboard1329: TBillboardNode;
Shape1330: TShapeNode;
Text1331: TTextNode;
FontStyle1332: TFontStyleNode;
HAnimSite1333: THAnimSiteNode;
TouchSensor1334: TTouchSensorNode;
Shape1335: TShapeNode;
Billboard1336: TBillboardNode;
Shape1337: TShapeNode;
Text1338: TTextNode;
FontStyle1339: TFontStyleNode;
HAnimJoint1340: THAnimJointNode;
HAnimSegment1341: THAnimSegmentNode;
Transform1342: TTransformNode;
Transform1343: TTransformNode;
Shape1344: TShapeNode;
Shape1345: TShapeNode;
LineSet1346: TLineSetNode;
Coordinate1347: TCoordinateNode;
ColorRGBA1348: TColorRGBANode;
HAnimSite1349: THAnimSiteNode;
TouchSensor1350: TTouchSensorNode;
Shape1351: TShapeNode;
Billboard1352: TBillboardNode;
Shape1353: TShapeNode;
Text1354: TTextNode;
FontStyle1355: TFontStyleNode;
Shape1356: TShapeNode;
LineSet1357: TLineSetNode;
Coordinate1358: TCoordinateNode;
ColorRGBA1359: TColorRGBANode;
Shape1360: TShapeNode;
LineSet1361: TLineSetNode;
Coordinate1362: TCoordinateNode;
ColorRGBA1363: TColorRGBANode;
Shape1364: TShapeNode;
LineSet1365: TLineSetNode;
Coordinate1366: TCoordinateNode;
ColorRGBA1367: TColorRGBANode;
HAnimJoint1368: THAnimJointNode;
HAnimSegment1369: THAnimSegmentNode;
Transform1370: TTransformNode;
Transform1371: TTransformNode;
Shape1372: TShapeNode;
Shape1373: TShapeNode;
LineSet1374: TLineSetNode;
Coordinate1375: TCoordinateNode;
ColorRGBA1376: TColorRGBANode;
HAnimJoint1377: THAnimJointNode;
HAnimSegment1378: THAnimSegmentNode;
Transform1379: TTransformNode;
Transform1380: TTransformNode;
Shape1381: TShapeNode;
Shape1382: TShapeNode;
LineSet1383: TLineSetNode;
Coordinate1384: TCoordinateNode;
ColorRGBA1385: TColorRGBANode;
HAnimJoint1386: THAnimJointNode;
HAnimSegment1387: THAnimSegmentNode;
Transform1388: TTransformNode;
Transform1389: TTransformNode;
Shape1390: TShapeNode;
Shape1391: TShapeNode;
LineSet1392: TLineSetNode;
Coordinate1393: TCoordinateNode;
ColorRGBA1394: TColorRGBANode;
HAnimJoint1395: THAnimJointNode;
HAnimJoint1396: THAnimJointNode;
HAnimSegment1397: THAnimSegmentNode;
Transform1398: TTransformNode;
Transform1399: TTransformNode;
Shape1400: TShapeNode;
Shape1401: TShapeNode;
LineSet1402: TLineSetNode;
Coordinate1403: TCoordinateNode;
ColorRGBA1404: TColorRGBANode;
HAnimJoint1405: THAnimJointNode;
HAnimSegment1406: THAnimSegmentNode;
Transform1407: TTransformNode;
Transform1408: TTransformNode;
Shape1409: TShapeNode;
Shape1410: TShapeNode;
LineSet1411: TLineSetNode;
Coordinate1412: TCoordinateNode;
ColorRGBA1413: TColorRGBANode;
HAnimSite1414: THAnimSiteNode;
TouchSensor1415: TTouchSensorNode;
Shape1416: TShapeNode;
Billboard1417: TBillboardNode;
Shape1418: TShapeNode;
Text1419: TTextNode;
FontStyle1420: TFontStyleNode;
HAnimJoint1421: THAnimJointNode;
HAnimSegment1422: THAnimSegmentNode;
Transform1423: TTransformNode;
Transform1424: TTransformNode;
Shape1425: TShapeNode;
Shape1426: TShapeNode;
LineSet1427: TLineSetNode;
Coordinate1428: TCoordinateNode;
ColorRGBA1429: TColorRGBANode;
HAnimJoint1430: THAnimJointNode;
HAnimSegment1431: THAnimSegmentNode;
Transform1432: TTransformNode;
Transform1433: TTransformNode;
Shape1434: TShapeNode;
Shape1435: TShapeNode;
LineSet1436: TLineSetNode;
Coordinate1437: TCoordinateNode;
ColorRGBA1438: TColorRGBANode;
HAnimJoint1439: THAnimJointNode;
HAnimJoint1440: THAnimJointNode;
HAnimSegment1441: THAnimSegmentNode;
Transform1442: TTransformNode;
Transform1443: TTransformNode;
Shape1444: TShapeNode;
Shape1445: TShapeNode;
LineSet1446: TLineSetNode;
Coordinate1447: TCoordinateNode;
ColorRGBA1448: TColorRGBANode;
HAnimJoint1449: THAnimJointNode;
HAnimSegment1450: THAnimSegmentNode;
Transform1451: TTransformNode;
Transform1452: TTransformNode;
Shape1453: TShapeNode;
Shape1454: TShapeNode;
LineSet1455: TLineSetNode;
Coordinate1456: TCoordinateNode;
ColorRGBA1457: TColorRGBANode;
HAnimSite1458: THAnimSiteNode;
TouchSensor1459: TTouchSensorNode;
Shape1460: TShapeNode;
Billboard1461: TBillboardNode;
Shape1462: TShapeNode;
Text1463: TTextNode;
FontStyle1464: TFontStyleNode;
HAnimJoint1465: THAnimJointNode;
HAnimSegment1466: THAnimSegmentNode;
Transform1467: TTransformNode;
Transform1468: TTransformNode;
Shape1469: TShapeNode;
Shape1470: TShapeNode;
LineSet1471: TLineSetNode;
Coordinate1472: TCoordinateNode;
ColorRGBA1473: TColorRGBANode;
HAnimJoint1474: THAnimJointNode;
HAnimSegment1475: THAnimSegmentNode;
Transform1476: TTransformNode;
Transform1477: TTransformNode;
Shape1478: TShapeNode;
Shape1479: TShapeNode;
LineSet1480: TLineSetNode;
Coordinate1481: TCoordinateNode;
ColorRGBA1482: TColorRGBANode;
HAnimJoint1483: THAnimJointNode;
HAnimJoint1484: THAnimJointNode;
HAnimSegment1485: THAnimSegmentNode;
Transform1486: TTransformNode;
Transform1487: TTransformNode;
Shape1488: TShapeNode;
Shape1489: TShapeNode;
LineSet1490: TLineSetNode;
Coordinate1491: TCoordinateNode;
ColorRGBA1492: TColorRGBANode;
Shape1493: TShapeNode;
LineSet1494: TLineSetNode;
Coordinate1495: TCoordinateNode;
ColorRGBA1496: TColorRGBANode;
HAnimJoint1497: THAnimJointNode;
HAnimSegment1498: THAnimSegmentNode;
Transform1499: TTransformNode;
Transform1500: TTransformNode;
Shape1501: TShapeNode;
Shape1502: TShapeNode;
LineSet1503: TLineSetNode;
Coordinate1504: TCoordinateNode;
ColorRGBA1505: TColorRGBANode;
HAnimJoint1506: THAnimJointNode;
HAnimSegment1507: THAnimSegmentNode;
Transform1508: TTransformNode;
Transform1509: TTransformNode;
Shape1510: TShapeNode;
Shape1511: TShapeNode;
LineSet1512: TLineSetNode;
Coordinate1513: TCoordinateNode;
ColorRGBA1514: TColorRGBANode;
HAnimJoint1515: THAnimJointNode;
HAnimSegment1516: THAnimSegmentNode;
Transform1517: TTransformNode;
Transform1518: TTransformNode;
Shape1519: TShapeNode;
Shape1520: TShapeNode;
LineSet1521: TLineSetNode;
Coordinate1522: TCoordinateNode;
ColorRGBA1523: TColorRGBANode;
HAnimJoint1524: THAnimJointNode;
HAnimJoint1525: THAnimJointNode;
HAnimSegment1526: THAnimSegmentNode;
Transform1527: TTransformNode;
Transform1528: TTransformNode;
Shape1529: TShapeNode;
Shape1530: TShapeNode;
LineSet1531: TLineSetNode;
Coordinate1532: TCoordinateNode;
ColorRGBA1533: TColorRGBANode;
HAnimSite1534: THAnimSiteNode;
TouchSensor1535: TTouchSensorNode;
Shape1536: TShapeNode;
Billboard1537: TBillboardNode;
Shape1538: TShapeNode;
Text1539: TTextNode;
FontStyle1540: TFontStyleNode;
HAnimJoint1541: THAnimJointNode;
HAnimSegment1542: THAnimSegmentNode;
Transform1543: TTransformNode;
Transform1544: TTransformNode;
Shape1545: TShapeNode;
Shape1546: TShapeNode;
LineSet1547: TLineSetNode;
Coordinate1548: TCoordinateNode;
ColorRGBA1549: TColorRGBANode;
HAnimJoint1550: THAnimJointNode;
HAnimSegment1551: THAnimSegmentNode;
Transform1552: TTransformNode;
Transform1553: TTransformNode;
Shape1554: TShapeNode;
Shape1555: TShapeNode;
LineSet1556: TLineSetNode;
Coordinate1557: TCoordinateNode;
ColorRGBA1558: TColorRGBANode;
HAnimJoint1559: THAnimJointNode;
HAnimJoint1560: THAnimJointNode;
HAnimSegment1561: THAnimSegmentNode;
Transform1562: TTransformNode;
Transform1563: TTransformNode;
Shape1564: TShapeNode;
Shape1565: TShapeNode;
LineSet1566: TLineSetNode;
Coordinate1567: TCoordinateNode;
ColorRGBA1568: TColorRGBANode;
HAnimSite1569: THAnimSiteNode;
TouchSensor1570: TTouchSensorNode;
Shape1571: TShapeNode;
Billboard1572: TBillboardNode;
Shape1573: TShapeNode;
Text1574: TTextNode;
FontStyle1575: TFontStyleNode;
HAnimSite1576: THAnimSiteNode;
TouchSensor1577: TTouchSensorNode;
Shape1578: TShapeNode;
Billboard1579: TBillboardNode;
Shape1580: TShapeNode;
Text1581: TTextNode;
FontStyle1582: TFontStyleNode;
HAnimSite1583: THAnimSiteNode;
TouchSensor1584: TTouchSensorNode;
Shape1585: TShapeNode;
Billboard1586: TBillboardNode;
Shape1587: TShapeNode;
Text1588: TTextNode;
FontStyle1589: TFontStyleNode;
HAnimSite1590: THAnimSiteNode;
TouchSensor1591: TTouchSensorNode;
Shape1592: TShapeNode;
Billboard1593: TBillboardNode;
Shape1594: TShapeNode;
Text1595: TTextNode;
FontStyle1596: TFontStyleNode;
HAnimSite1597: THAnimSiteNode;
TouchSensor1598: TTouchSensorNode;
Shape1599: TShapeNode;
Billboard1600: TBillboardNode;
Shape1601: TShapeNode;
Text1602: TTextNode;
FontStyle1603: TFontStyleNode;
HAnimJoint1604: THAnimJointNode;
HAnimSegment1605: THAnimSegmentNode;
Transform1606: TTransformNode;
Transform1607: TTransformNode;
Shape1608: TShapeNode;
Shape1609: TShapeNode;
LineSet1610: TLineSetNode;
Coordinate1611: TCoordinateNode;
ColorRGBA1612: TColorRGBANode;
HAnimJoint1613: THAnimJointNode;
HAnimSegment1614: THAnimSegmentNode;
Transform1615: TTransformNode;
Transform1616: TTransformNode;
Shape1617: TShapeNode;
Shape1618: TShapeNode;
LineSet1619: TLineSetNode;
Coordinate1620: TCoordinateNode;
ColorRGBA1621: TColorRGBANode;
HAnimSite1622: THAnimSiteNode;
TouchSensor1623: TTouchSensorNode;
Shape1624: TShapeNode;
Billboard1625: TBillboardNode;
Shape1626: TShapeNode;
Text1627: TTextNode;
FontStyle1628: TFontStyleNode;
HAnimSite1629: THAnimSiteNode;
TouchSensor1630: TTouchSensorNode;
Shape1631: TShapeNode;
Billboard1632: TBillboardNode;
Shape1633: TShapeNode;
Text1634: TTextNode;
FontStyle1635: TFontStyleNode;
HAnimJoint1636: THAnimJointNode;
HAnimSegment1637: THAnimSegmentNode;
Transform1638: TTransformNode;
Transform1639: TTransformNode;
Shape1640: TShapeNode;
Shape1641: TShapeNode;
LineSet1642: TLineSetNode;
Coordinate1643: TCoordinateNode;
ColorRGBA1644: TColorRGBANode;
HAnimSite1645: THAnimSiteNode;
TouchSensor1646: TTouchSensorNode;
Shape1647: TShapeNode;
Billboard1648: TBillboardNode;
Shape1649: TShapeNode;
Text1650: TTextNode;
FontStyle1651: TFontStyleNode;
HAnimSite1652: THAnimSiteNode;
TouchSensor1653: TTouchSensorNode;
Shape1654: TShapeNode;
Billboard1655: TBillboardNode;
Shape1656: TShapeNode;
Text1657: TTextNode;
FontStyle1658: TFontStyleNode;
HAnimSite1659: THAnimSiteNode;
TouchSensor1660: TTouchSensorNode;
Shape1661: TShapeNode;
Billboard1662: TBillboardNode;
Shape1663: TShapeNode;
Text1664: TTextNode;
FontStyle1665: TFontStyleNode;
HAnimSite1666: THAnimSiteNode;
TouchSensor1667: TTouchSensorNode;
Shape1668: TShapeNode;
Billboard1669: TBillboardNode;
Shape1670: TShapeNode;
Text1671: TTextNode;
FontStyle1672: TFontStyleNode;
HAnimJoint1673: THAnimJointNode;
HAnimSegment1674: THAnimSegmentNode;
Transform1675: TTransformNode;
Transform1676: TTransformNode;
Shape1677: TShapeNode;
Shape1678: TShapeNode;
LineSet1679: TLineSetNode;
Coordinate1680: TCoordinateNode;
ColorRGBA1681: TColorRGBANode;
HAnimSite1682: THAnimSiteNode;
TouchSensor1683: TTouchSensorNode;
Shape1684: TShapeNode;
Billboard1685: TBillboardNode;
Shape1686: TShapeNode;
Text1687: TTextNode;
FontStyle1688: TFontStyleNode;
Shape1689: TShapeNode;
LineSet1690: TLineSetNode;
Coordinate1691: TCoordinateNode;
ColorRGBA1692: TColorRGBANode;
Shape1693: TShapeNode;
LineSet1694: TLineSetNode;
Coordinate1695: TCoordinateNode;
ColorRGBA1696: TColorRGBANode;
Shape1697: TShapeNode;
LineSet1698: TLineSetNode;
Coordinate1699: TCoordinateNode;
ColorRGBA1700: TColorRGBANode;
HAnimJoint1701: THAnimJointNode;
HAnimSegment1702: THAnimSegmentNode;
Transform1703: TTransformNode;
Transform1704: TTransformNode;
Shape1705: TShapeNode;
Shape1706: TShapeNode;
LineSet1707: TLineSetNode;
Coordinate1708: TCoordinateNode;
ColorRGBA1709: TColorRGBANode;
HAnimJoint1710: THAnimJointNode;
HAnimSegment1711: THAnimSegmentNode;
Transform1712: TTransformNode;
Transform1713: TTransformNode;
Shape1714: TShapeNode;
Shape1715: TShapeNode;
LineSet1716: TLineSetNode;
Coordinate1717: TCoordinateNode;
ColorRGBA1718: TColorRGBANode;
HAnimJoint1719: THAnimJointNode;
HAnimSegment1720: THAnimSegmentNode;
Transform1721: TTransformNode;
Transform1722: TTransformNode;
Shape1723: TShapeNode;
Shape1724: TShapeNode;
LineSet1725: TLineSetNode;
Coordinate1726: TCoordinateNode;
ColorRGBA1727: TColorRGBANode;
HAnimJoint1728: THAnimJointNode;
HAnimJoint1729: THAnimJointNode;
HAnimSegment1730: THAnimSegmentNode;
Transform1731: TTransformNode;
Transform1732: TTransformNode;
Shape1733: TShapeNode;
Shape1734: TShapeNode;
LineSet1735: TLineSetNode;
Coordinate1736: TCoordinateNode;
ColorRGBA1737: TColorRGBANode;
HAnimJoint1738: THAnimJointNode;
HAnimSegment1739: THAnimSegmentNode;
Transform1740: TTransformNode;
Transform1741: TTransformNode;
Shape1742: TShapeNode;
Shape1743: TShapeNode;
LineSet1744: TLineSetNode;
Coordinate1745: TCoordinateNode;
ColorRGBA1746: TColorRGBANode;
HAnimSite1747: THAnimSiteNode;
TouchSensor1748: TTouchSensorNode;
Shape1749: TShapeNode;
Billboard1750: TBillboardNode;
Shape1751: TShapeNode;
Text1752: TTextNode;
FontStyle1753: TFontStyleNode;
HAnimJoint1754: THAnimJointNode;
HAnimSegment1755: THAnimSegmentNode;
Transform1756: TTransformNode;
Transform1757: TTransformNode;
Shape1758: TShapeNode;
Shape1759: TShapeNode;
LineSet1760: TLineSetNode;
Coordinate1761: TCoordinateNode;
ColorRGBA1762: TColorRGBANode;
HAnimJoint1763: THAnimJointNode;
HAnimSegment1764: THAnimSegmentNode;
Transform1765: TTransformNode;
Transform1766: TTransformNode;
Shape1767: TShapeNode;
Shape1768: TShapeNode;
LineSet1769: TLineSetNode;
Coordinate1770: TCoordinateNode;
ColorRGBA1771: TColorRGBANode;
HAnimJoint1772: THAnimJointNode;
HAnimJoint1773: THAnimJointNode;
HAnimSegment1774: THAnimSegmentNode;
Transform1775: TTransformNode;
Transform1776: TTransformNode;
Shape1777: TShapeNode;
Shape1778: TShapeNode;
LineSet1779: TLineSetNode;
Coordinate1780: TCoordinateNode;
ColorRGBA1781: TColorRGBANode;
HAnimJoint1782: THAnimJointNode;
HAnimSegment1783: THAnimSegmentNode;
Transform1784: TTransformNode;
Transform1785: TTransformNode;
Shape1786: TShapeNode;
Shape1787: TShapeNode;
LineSet1788: TLineSetNode;
Coordinate1789: TCoordinateNode;
ColorRGBA1790: TColorRGBANode;
HAnimSite1791: THAnimSiteNode;
TouchSensor1792: TTouchSensorNode;
Shape1793: TShapeNode;
Billboard1794: TBillboardNode;
Shape1795: TShapeNode;
Text1796: TTextNode;
FontStyle1797: TFontStyleNode;
HAnimJoint1798: THAnimJointNode;
HAnimSegment1799: THAnimSegmentNode;
Transform1800: TTransformNode;
Transform1801: TTransformNode;
Shape1802: TShapeNode;
Shape1803: TShapeNode;
LineSet1804: TLineSetNode;
Coordinate1805: TCoordinateNode;
ColorRGBA1806: TColorRGBANode;
HAnimJoint1807: THAnimJointNode;
HAnimSegment1808: THAnimSegmentNode;
Transform1809: TTransformNode;
Transform1810: TTransformNode;
Shape1811: TShapeNode;
Shape1812: TShapeNode;
LineSet1813: TLineSetNode;
Coordinate1814: TCoordinateNode;
ColorRGBA1815: TColorRGBANode;
HAnimJoint1816: THAnimJointNode;
HAnimJoint1817: THAnimJointNode;
HAnimSegment1818: THAnimSegmentNode;
Transform1819: TTransformNode;
Transform1820: TTransformNode;
Shape1821: TShapeNode;
Shape1822: TShapeNode;
LineSet1823: TLineSetNode;
Coordinate1824: TCoordinateNode;
ColorRGBA1825: TColorRGBANode;
Shape1826: TShapeNode;
LineSet1827: TLineSetNode;
Coordinate1828: TCoordinateNode;
ColorRGBA1829: TColorRGBANode;
HAnimJoint1830: THAnimJointNode;
HAnimSegment1831: THAnimSegmentNode;
Transform1832: TTransformNode;
Transform1833: TTransformNode;
Shape1834: TShapeNode;
Shape1835: TShapeNode;
LineSet1836: TLineSetNode;
Coordinate1837: TCoordinateNode;
ColorRGBA1838: TColorRGBANode;
HAnimJoint1839: THAnimJointNode;
HAnimSegment1840: THAnimSegmentNode;
Transform1841: TTransformNode;
Transform1842: TTransformNode;
Shape1843: TShapeNode;
Shape1844: TShapeNode;
LineSet1845: TLineSetNode;
Coordinate1846: TCoordinateNode;
ColorRGBA1847: TColorRGBANode;
HAnimJoint1848: THAnimJointNode;
HAnimSegment1849: THAnimSegmentNode;
Transform1850: TTransformNode;
Transform1851: TTransformNode;
Shape1852: TShapeNode;
Shape1853: TShapeNode;
LineSet1854: TLineSetNode;
Coordinate1855: TCoordinateNode;
ColorRGBA1856: TColorRGBANode;
HAnimJoint1857: THAnimJointNode;
HAnimJoint1858: THAnimJointNode;
HAnimSegment1859: THAnimSegmentNode;
Transform1860: TTransformNode;
Transform1861: TTransformNode;
Shape1862: TShapeNode;
Shape1863: TShapeNode;
LineSet1864: TLineSetNode;
Coordinate1865: TCoordinateNode;
ColorRGBA1866: TColorRGBANode;
HAnimSite1867: THAnimSiteNode;
TouchSensor1868: TTouchSensorNode;
Shape1869: TShapeNode;
Billboard1870: TBillboardNode;
Shape1871: TShapeNode;
Text1872: TTextNode;
FontStyle1873: TFontStyleNode;
HAnimJoint1874: THAnimJointNode;
HAnimSegment1875: THAnimSegmentNode;
Transform1876: TTransformNode;
Transform1877: TTransformNode;
Shape1878: TShapeNode;
Shape1879: TShapeNode;
LineSet1880: TLineSetNode;
Coordinate1881: TCoordinateNode;
ColorRGBA1882: TColorRGBANode;
HAnimJoint1883: THAnimJointNode;
HAnimSegment1884: THAnimSegmentNode;
Transform1885: TTransformNode;
Transform1886: TTransformNode;
Shape1887: TShapeNode;
Shape1888: TShapeNode;
LineSet1889: TLineSetNode;
Coordinate1890: TCoordinateNode;
ColorRGBA1891: TColorRGBANode;
HAnimJoint1892: THAnimJointNode;
HAnimJoint1893: THAnimJointNode;
HAnimJoint1894: THAnimJointNode;
HAnimJoint1895: THAnimJointNode;
HAnimJoint1896: THAnimJointNode;
HAnimJoint1897: THAnimJointNode;
HAnimJoint1898: THAnimJointNode;
HAnimJoint1899: THAnimJointNode;
HAnimJoint1900: THAnimJointNode;
HAnimJoint1901: THAnimJointNode;
HAnimJoint1902: THAnimJointNode;
HAnimJoint1903: THAnimJointNode;
HAnimJoint1904: THAnimJointNode;
HAnimJoint1905: THAnimJointNode;
HAnimJoint1906: THAnimJointNode;
HAnimJoint1907: THAnimJointNode;
HAnimJoint1908: THAnimJointNode;
HAnimJoint1909: THAnimJointNode;
HAnimJoint1910: THAnimJointNode;
HAnimJoint1911: THAnimJointNode;
HAnimJoint1912: THAnimJointNode;
HAnimJoint1913: THAnimJointNode;
HAnimJoint1914: THAnimJointNode;
HAnimJoint1915: THAnimJointNode;
HAnimJoint1916: THAnimJointNode;
HAnimJoint1917: THAnimJointNode;
HAnimJoint1918: THAnimJointNode;
HAnimJoint1919: THAnimJointNode;
HAnimJoint1920: THAnimJointNode;
HAnimJoint1921: THAnimJointNode;
HAnimJoint1922: THAnimJointNode;
HAnimJoint1923: THAnimJointNode;
HAnimJoint1924: THAnimJointNode;
HAnimJoint1925: THAnimJointNode;
HAnimJoint1926: THAnimJointNode;
HAnimJoint1927: THAnimJointNode;
HAnimJoint1928: THAnimJointNode;
HAnimJoint1929: THAnimJointNode;
HAnimJoint1930: THAnimJointNode;
HAnimJoint1931: THAnimJointNode;
HAnimJoint1932: THAnimJointNode;
HAnimJoint1933: THAnimJointNode;
HAnimJoint1934: THAnimJointNode;
HAnimJoint1935: THAnimJointNode;
HAnimJoint1936: THAnimJointNode;
HAnimJoint1937: THAnimJointNode;
HAnimJoint1938: THAnimJointNode;
HAnimJoint1939: THAnimJointNode;
HAnimJoint1940: THAnimJointNode;
HAnimJoint1941: THAnimJointNode;
HAnimJoint1942: THAnimJointNode;
HAnimJoint1943: THAnimJointNode;
HAnimJoint1944: THAnimJointNode;
HAnimJoint1945: THAnimJointNode;
HAnimJoint1946: THAnimJointNode;
HAnimJoint1947: THAnimJointNode;
HAnimJoint1948: THAnimJointNode;
HAnimJoint1949: THAnimJointNode;
HAnimJoint1950: THAnimJointNode;
HAnimJoint1951: THAnimJointNode;
HAnimJoint1952: THAnimJointNode;
HAnimJoint1953: THAnimJointNode;
HAnimJoint1954: THAnimJointNode;
HAnimJoint1955: THAnimJointNode;
HAnimJoint1956: THAnimJointNode;
HAnimJoint1957: THAnimJointNode;
HAnimJoint1958: THAnimJointNode;
HAnimJoint1959: THAnimJointNode;
HAnimJoint1960: THAnimJointNode;
HAnimJoint1961: THAnimJointNode;
HAnimJoint1962: THAnimJointNode;
HAnimJoint1963: THAnimJointNode;
HAnimJoint1964: THAnimJointNode;
HAnimJoint1965: THAnimJointNode;
HAnimJoint1966: THAnimJointNode;
HAnimJoint1967: THAnimJointNode;
HAnimJoint1968: THAnimJointNode;
HAnimJoint1969: THAnimJointNode;
HAnimJoint1970: THAnimJointNode;
HAnimJoint1971: THAnimJointNode;
HAnimJoint1972: THAnimJointNode;
HAnimJoint1973: THAnimJointNode;
HAnimJoint1974: THAnimJointNode;
HAnimJoint1975: THAnimJointNode;
HAnimJoint1976: THAnimJointNode;
HAnimJoint1977: THAnimJointNode;
HAnimJoint1978: THAnimJointNode;
HAnimJoint1979: THAnimJointNode;
HAnimJoint1980: THAnimJointNode;
HAnimJoint1981: THAnimJointNode;
HAnimJoint1982: THAnimJointNode;
HAnimJoint1983: THAnimJointNode;
HAnimJoint1984: THAnimJointNode;
HAnimJoint1985: THAnimJointNode;
HAnimJoint1986: THAnimJointNode;
HAnimJoint1987: THAnimJointNode;
HAnimJoint1988: THAnimJointNode;
HAnimJoint1989: THAnimJointNode;
HAnimJoint1990: THAnimJointNode;
HAnimJoint1991: THAnimJointNode;
HAnimJoint1992: THAnimJointNode;
HAnimJoint1993: THAnimJointNode;
HAnimJoint1994: THAnimJointNode;
HAnimJoint1995: THAnimJointNode;
HAnimJoint1996: THAnimJointNode;
HAnimJoint1997: THAnimJointNode;
HAnimJoint1998: THAnimJointNode;
HAnimJoint1999: THAnimJointNode;
HAnimJoint2000: THAnimJointNode;
HAnimJoint2001: THAnimJointNode;
HAnimJoint2002: THAnimJointNode;
HAnimJoint2003: THAnimJointNode;
HAnimJoint2004: THAnimJointNode;
HAnimJoint2005: THAnimJointNode;
HAnimJoint2006: THAnimJointNode;
HAnimJoint2007: THAnimJointNode;
HAnimJoint2008: THAnimJointNode;
HAnimJoint2009: THAnimJointNode;
HAnimJoint2010: THAnimJointNode;
HAnimJoint2011: THAnimJointNode;
HAnimJoint2012: THAnimJointNode;
HAnimJoint2013: THAnimJointNode;
HAnimJoint2014: THAnimJointNode;
HAnimJoint2015: THAnimJointNode;
HAnimJoint2016: THAnimJointNode;
HAnimJoint2017: THAnimJointNode;
HAnimJoint2018: THAnimJointNode;
HAnimJoint2019: THAnimJointNode;
HAnimJoint2020: THAnimJointNode;
HAnimJoint2021: THAnimJointNode;
HAnimJoint2022: THAnimJointNode;
HAnimJoint2023: THAnimJointNode;
HAnimJoint2024: THAnimJointNode;
HAnimJoint2025: THAnimJointNode;
HAnimJoint2026: THAnimJointNode;
HAnimJoint2027: THAnimJointNode;
HAnimJoint2028: THAnimJointNode;
HAnimJoint2029: THAnimJointNode;
HAnimJoint2030: THAnimJointNode;
HAnimJoint2031: THAnimJointNode;
HAnimJoint2032: THAnimJointNode;
HAnimJoint2033: THAnimJointNode;
HAnimJoint2034: THAnimJointNode;
HAnimJoint2035: THAnimJointNode;
HAnimJoint2036: THAnimJointNode;
HAnimJoint2037: THAnimJointNode;
HAnimJoint2038: THAnimJointNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'StandardHumanoid.x3d';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/StandardHumanoid.x3d';
X3D0.Meta['description'] := 'An attempt at a standard LOA-4 skeleton';
X3D0.Meta['generator'] := 'h2.pl';
X3D0.Meta['modified'] := '14 Jan 2023';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['created'] := '9 November 2020';
X3D0.Meta['license'] := '../license.html';
Group11 := TGroupNode.Create;
Transform12 := TTransformNode.Create;
{ DEF for markerfor XYZ axes }
Shape13 := TShapeNode.Create;
{ RGB lines showing XYZ axes }
IndexedLineSet14 := TIndexedLineSetNode.Create;
IndexedLineSet14.SetColorIndex([0,1,2]);
IndexedLineSet14.ColorPerVertex := False;
IndexedLineSet14.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate15 := TCoordinateNode.Create;
Coordinate15.SetPoint([Vector3(0,0,0),Vector3(0.1,0,0),Vector3(0,0.1,0),Vector3(0,0,0.1)]);
{ .SetCoord }
IndexedLineSet14.Coord := Coordinate15;
Color16 := TColorNode.Create;
Color16.SetColor([Vector3(1,0,0),Vector3(0,0.6,0),Vector3(0,0,1)]);
{ .SetColor }
IndexedLineSet14.Color := Color16;
{ .SetGeometry }
Shape13.Geometry := IndexedLineSet14;
{ .AddChild }
Transform12.AddChildren([Shape13]);
{ .AddChildren }
Group11.AddChildren([Transform12]);
Group17 := TGroupNode.Create;
{ DEFS for markers of skeleton joints, segments, and sites }
Transform18 := TTransformNode.Create;
Transform19 := TTransformNode.Create;
Transform19.Translation := Vector3(0,2.1,0);
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
Sphere21.Radius := 0.02;
{ .SetGeometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0,0,0);
{ .SetMaterial }
Appearance22.Material := Material23;
{ .SetAppearance }
Shape20.Appearance := Appearance22;
{ .AddChild }
Transform19.AddChildren([Shape20]);
{ .AddChildren }
Transform18.AddChildren([Transform19]);
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(0,2.05,0);
Shape25 := TShapeNode.Create;
LineSet26 := TLineSetNode.Create;
LineSet26.SetVertexCount([2]);
ColorRGBA27 := TColorRGBANode.Create;
ColorRGBA27.SetColor([Vector4(1,1,0,0),Vector4(1,1,0,0)]);
{ .SetColor }
LineSet26.Color := ColorRGBA27;
Coordinate28 := TCoordinateNode.Create;
Coordinate28.SetPoint([Vector3(-0.05,0,0),Vector3(0.05,0,0)]);
{ .SetCoord }
LineSet26.Coord := Coordinate28;
{ .SetGeometry }
Shape25.Geometry := LineSet26;
{ .AddChild }
Transform24.AddChildren([Shape25]);
{ .AddChildren }
Transform18.AddChildren([Transform24]);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(0,2.1,0);
Shape30 := TShapeNode.Create;
IndexedFaceSet31 := TIndexedFaceSetNode.Create;
IndexedFaceSet31.CreaseAngle := 0.5;
IndexedFaceSet31.Solid := False;
IndexedFaceSet31.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA32 := TColorRGBANode.Create;
ColorRGBA32.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ .SetColor }
IndexedFaceSet31.Color := ColorRGBA32;
Coordinate33 := TCoordinateNode.Create;
Coordinate33.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ .SetCoord }
IndexedFaceSet31.Coord := Coordinate33;
{ .SetGeometry }
Shape30.Geometry := IndexedFaceSet31;
Appearance34 := TAppearanceNode.Create;
Material35 := TMaterialNode.Create;
Material35.DiffuseColor := Vector3(1,1,1);
Material35.Transparency := 1;
{ .SetMaterial }
Appearance34.Material := Material35;
{ .SetAppearance }
Shape30.Appearance := Appearance34;
{ .AddChild }
Transform29.AddChildren([Shape30]);
{ .AddChildren }
Transform18.AddChildren([Transform29]);
{ .AddChildren }
Group17.AddChildren([Transform18]);
{ .AddChildren }
Group11.AddChildren([Group17]);
NavigationInfo36 := TNavigationInfoNode.Create;
NavigationInfo36.Speed := 1.5;
{ .AddChildren }
Group11.AddChildren([NavigationInfo36]);
Viewpoint37 := TViewpointNode.Create;
Viewpoint37.Position := Vector3(0,1,3);
Viewpoint37.CenterOfRotation := Vector3(0,1,0);
Viewpoint37.Description := 'default';
{ .AddChildren }
Group11.AddChildren([Viewpoint37]);
HAnimHumanoid38 := THAnimHumanoidNode.Create;
HAnimHumanoid38.NameField := 'HAnim';
HAnimHumanoid38.SetInfo(['humanoidVersion=2.0']);
HAnimHumanoid38.Version := '2.0';
{ <LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene) }
{ </LOD> }
Shape39 := TShapeNode.Create;
IndexedFaceSet40 := TIndexedFaceSetNode.Create;
IndexedFaceSet40.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet40.CreaseAngle := 3.1;
Coordinate41 := TCoordinateNode.Create;
Coordinate41.SetPoint([Vector3(0,1.77,0),Vector3(0,1.665,0.09),Vector3(-0.033,1.62,0.087),Vector3(0.033,1.62,0.087),Vector3(0,1.55,0.097),Vector3(-0.077,1.64,-0.01),Vector3(-0.0527,1.58,0.015),Vector3(0.077,1.64,-0.01),Vector3(0.0527,1.58,0.015),Vector3(0,1.625,-0.0925),Vector3(-0.03,1.46,0.035),Vector3(0,1.44,0.03),Vector3(0.03,1.46,0.035),Vector3(-0.1135,1.318,0.095),Vector3(0.1135,1.318,0.095),Vector3(0,1.25,0.113),Vector3(-0.087,1.19,0.09),Vector3(-0.0935,1.03,0.075),Vector3(0.087,1.19,0.09),Vector3(0.0935,1.03,0.075),Vector3(-0.1425,1.065,0.0033),Vector3(-0.15,0.9,-0.01),Vector3(0.1425,1.065,0.0033),Vector3(0.15,0.9,-0.01),Vector3(0,1.53,-0.084),Vector3(0.0049,1.1908,-0.1113),Vector3(-0.0773,1.019,-0.12),Vector3(0.0773,1.019,-0.12),Vector3(0.005,1.0915,-0.1091),Vector3(-0.178,1.4825,-0.0625),Vector3(-0.17,1.38,0.007),Vector3(-0.1884,0.8676,-0.036),Vector3(-0.16,1.38,-0.127),Vector3(-0.2,1.1388,-0.08),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.23,1.133,-0.055),Vector3(-0.1977,0.8169,-0.0177),Vector3(-0.1941,0.6772,-0.0423),Vector3(-0.2117,0.8562,-0.0584),Vector3(-0.1929,0.789,-0.1064),Vector3(0.175,1.4825,-0.06),Vector3(0.17,1.38,0.007),Vector3(0.1901,0.8645,-0.0415),Vector3(0.16,1.38,-0.125),Vector3(0.2,1.1388,-0.08),Vector3(0.165,1.1388,-0.04),Vector3(0.244,1.1388,-0.04),Vector3(0.23,1.133,-0.055),Vector3(0.2009,0.8139,-0.0237),Vector3(0.2056,0.6743,-0.0482),Vector3(0.2142,0.8529,-0.0648),Vector3(0.1929,0.786,-0.1122),Vector3(-0.1,0.4913,-0.03),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.165,0.01,0.12),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.09,0.056,0.0125),Vector3(-0.115,0.02,0.122),Vector3(-0.115,0.04,-0.055),Vector3(-0.11,0.011,0.19),Vector3(0.0993,0.4881,-0.0309),Vector3(0.17,0.466,0),Vector3(0.05,0.4867,0),Vector3(0.165,0.01,0.12),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.09,0.056,0.0125),Vector3(0.115,0.02,0.122),Vector3(0.115,0.04,-0.055),Vector3(0.11,0.011,0.19),Vector3(0,0.875,0),Vector3(-0.0646,1.5149,-0.038),Vector3(0.0646,1.5149,-0.038),Vector3(0,1.07225,0.09),Vector3(-0.11,1.427,-0.1375),Vector3(-0.235,1.42,-0.0625),Vector3(0.11,1.427,-0.1375),Vector3(0.235,1.42,-0.0625),Vector3(0,1.41,-0.145),Vector3(0,0.925,0.08),Vector3(-0.087,1.19,-0.09),Vector3(0.087,1.19,-0.09),Vector3(0.172,1.32,-0.03),Vector3(-0.172,1.32,-0.03),Vector3(0.15,1.23,-0.015),Vector3(-0.15,1.23,-0.015),Vector3(0.079,0.92,-0.14),Vector3(0.1,0.9,0.077),Vector3(-0.079,0.92,-0.14),Vector3(-0.1,0.9,0.075),Vector3(0,0.87,0),Vector3(0.171,0.65,0),Vector3(0.02,0.65,0),Vector3(0.1,0.65,-0.08),Vector3(0.1,0.65,0.07),Vector3(-0.171,0.65,0),Vector3(-0.02,0.65,0),Vector3(-0.1,0.65,-0.08),Vector3(-0.1,0.65,0.07),Vector3(0.25,1.27,-0.04),Vector3(0.17,1.27,-0.04),Vector3(0.2,1.27,-0.09),Vector3(0.2,1.27,0.02),Vector3(0.244,1.1388,-0.04),Vector3(0.165,1.1388,-0.04),Vector3(0.2,1.1388,-0.08),Vector3(0.2,1.1388,-0.013),Vector3(0.225,1,-0.01),Vector3(0.225,1,-0.07),Vector3(0.185,1,-0.01),Vector3(0.185,1,-0.07),Vector3(0.2,1.1388,-0.04),Vector3(0.225,0.92,-0.04),Vector3(0.175,0.92,-0.04),Vector3(0.2,0.92,-0.065),Vector3(0.2,0.92,-0.015),Vector3(0.225,0.89,-0.04),Vector3(0.175,0.89,-0.04),Vector3(0.2,0.89,-0.065),Vector3(0.2,0.89,-0.015),Vector3(0.218,0.86,-0.04),Vector3(0.184,0.86,-0.04),Vector3(0.2,0.87,-0.07),Vector3(0.2,0.87,0),Vector3(0.21,0.85,0),Vector3(0.1854,0.85,0),Vector3(0.212,0.84,-0.015),Vector3(0.183,0.84,-0.015),Vector3(0.213,0.835,-0.04),Vector3(0.19,0.835,-0.04),Vector3(0.211,0.835,-0.065),Vector3(0.192,0.835,-0.065),Vector3(0.208,0.84,-0.085),Vector3(0.19,0.84,-0.085),Vector3(0.2,0.84,-0.095),Vector3(0.215,0.82,0),Vector3(0.193,0.815,0.005),Vector3(0.198,0.8,0.012),Vector3(0.21,0.82,0.03),Vector3(0.19,0.82,0.03),Vector3(0.2,0.835,0.039),Vector3(0.212,0.8,0.05),Vector3(0.188,0.8,0.05),Vector3(0.2,0.807,0.057),Vector3(0.2,0.793,0.035),Vector3(0.2,0.774,0.076),Vector3(0.212,0.78,0.07),Vector3(0.188,0.78,0.07),Vector3(0.2,0.785,0.075),Vector3(0.2,0.77,0.062),Vector3(0.215,0.793,-0.015),Vector3(0.187,0.793,-0.015),Vector3(0.2,0.793,-0.005),Vector3(0.215,0.788,-0.04),Vector3(0.187,0.788,-0.04),Vector3(0.215,0.793,-0.065),Vector3(0.187,0.793,-0.065),Vector3(0.21,0.79,-0.085),Vector3(0.19,0.79,-0.085),Vector3(0.2,0.79,-0.095),Vector3(0.19,0.77,-0.0275),Vector3(0.19,0.77,-0.0525),Vector3(0.19,0.78,-0.0775),Vector3(0.212,0.745,-0.015),Vector3(0.188,0.745,-0.02),Vector3(0.2,0.745,-0.0255),Vector3(0.2,0.745,-0.0045),Vector3(0.211,0.72,-0.015),Vector3(0.189,0.72,-0.015),Vector3(0.2,0.72,-0.0252),Vector3(0.2,0.72,-0.0048),Vector3(0.21,0.695,-0.015),Vector3(0.19,0.695,-0.015),Vector3(0.2,0.695,-0.025),Vector3(0.2,0.695,-0.005),Vector3(0.2,0.685,-0.015),Vector3(0.215,0.74,-0.04),Vector3(0.185,0.74,-0.04),Vector3(0.2,0.74,-0.055),Vector3(0.2,0.74,-0.025),Vector3(0.21,0.7142,-0.04),Vector3(0.19,0.7142,-0.04),Vector3(0.2,0.7142,-0.053),Vector3(0.2,0.7142,-0.027),Vector3(0.21,0.68,-0.04),Vector3(0.19,0.68,-0.04),Vector3(0.2,0.68,-0.05),Vector3(0.2,0.68,-0.03),Vector3(0.2,0.67,-0.04),Vector3(0.212,0.74,-0.065),Vector3(0.188,0.74,-0.065),Vector3(0.2,0.74,-0.0756),Vector3(0.2,0.74,-0.0542),Vector3(0.21,0.7177,-0.065),Vector3(0.19,0.7177,-0.065),Vector3(0.2,0.7177,-0.0751),Vector3(0.2,0.7177,-0.0549),Vector3(0.21,0.695,-0.065),Vector3(0.19,0.695,-0.065),Vector3(0.2,0.695,-0.075),Vector3(0.2,0.695,-0.055),Vector3(0.2,0.685,-0.065),Vector3(0.211,0.755,-0.085),Vector3(0.189,0.755,-0.085),Vector3(0.2,0.755,-0.0952),Vector3(0.2,0.755,-0.0748),Vector3(0.21,0.735,-0.085),Vector3(0.19,0.735,-0.085),Vector3(0.2,0.735,-0.0951),Vector3(0.2,0.735,-0.0749),Vector3(0.21,0.72,-0.085),Vector3(0.19,0.72,-0.085),Vector3(0.2,0.72,-0.095),Vector3(0.2,0.72,-0.075),Vector3(0.2,0.71,-0.085),Vector3(-0.23,1.23,-0.04),Vector3(-0.16,1.23,-0.04),Vector3(-0.2,1.235,-0.105),Vector3(-0.2,1.235,0.02),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.2,1.1388,-0.08),Vector3(-0.2,1.1388,0.013),Vector3(-0.225,1,-0.01),Vector3(-0.225,1,-0.07),Vector3(-0.185,1,-0.01),Vector3(-0.185,1,-0.07),Vector3(-0.2,1.1388,-0.04),Vector3(-0.225,0.92,-0.04),Vector3(-0.175,0.92,-0.04),Vector3(-0.2,0.92,-0.065),Vector3(-0.2,0.92,-0.015),Vector3(-0.225,0.89,-0.04),Vector3(-0.175,0.89,-0.04),Vector3(-0.2,0.89,-0.065),Vector3(-0.2,0.89,-0.015),Vector3(-0.218,0.86,-0.04),Vector3(-0.184,0.86,-0.04),Vector3(-0.2,0.87,-0.07),Vector3(-0.2,0.87,0),Vector3(-0.21,0.85,0),Vector3(-0.1854,0.85,0),Vector3(-0.212,0.84,-0.015),Vector3(-0.183,0.84,-0.015),Vector3(-0.213,0.835,-0.04),Vector3(-0.19,0.835,-0.04),Vector3(-0.211,0.835,-0.065),Vector3(-0.192,0.835,-0.065),Vector3(-0.208,0.84,-0.085),Vector3(-0.19,0.84,-0.085),Vector3(-0.2,0.84,-0.095),Vector3(-0.215,0.82,0),Vector3(-0.193,0.815,0.005),Vector3(-0.198,0.8,0.012),Vector3(-0.21,0.82,0.03),Vector3(-0.19,0.82,0.03),Vector3(-0.2,0.835,0.039),Vector3(-0.212,0.8,0.05),Vector3(-0.188,0.8,0.05),Vector3(-0.2,0.807,0.057),Vector3(-0.2,0.793,0.035),Vector3(-0.2,0.774,0.076),Vector3(-0.212,0.78,0.07),Vector3(-0.188,0.78,0.07),Vector3(-0.2,0.785,0.075),Vector3(-0.2,0.77,0.062),Vector3(-0.215,0.793,-0.015),Vector3(-0.187,0.793,-0.015),Vector3(-0.2,0.793,-0.005),Vector3(-0.215,0.788,-0.04),Vector3(-0.187,0.788,-0.04),Vector3(-0.215,0.793,-0.065),Vector3(-0.187,0.793,-0.065),Vector3(-0.21,0.79,-0.085),Vector3(-0.19,0.79,-0.085),Vector3(-0.2,0.79,-0.095),Vector3(-0.19,0.77,-0.0275),Vector3(-0.19,0.77,-0.0525),Vector3(-0.19,0.78,-0.0775),Vector3(-0.212,0.745,-0.015),Vector3(-0.188,0.745,-0.02),Vector3(-0.2,0.745,-0.0255),Vector3(-0.2,0.745,-0.0045),Vector3(-0.211,0.72,-0.015),Vector3(-0.189,0.72,-0.015),Vector3(-0.2,0.72,-0.0252),Vector3(-0.2,0.72,-0.0048),Vector3(-0.21,0.695,-0.015),Vector3(-0.19,0.695,-0.015),Vector3(-0.2,0.695,-0.025),Vector3(-0.2,0.695,-0.005),Vector3(-0.2,0.685,-0.015),Vector3(-0.215,0.74,-0.04),Vector3(-0.185,0.74,-0.04),Vector3(-0.2,0.74,-0.055),Vector3(-0.2,0.74,-0.025),Vector3(-0.21,0.7142,-0.04),Vector3(-0.19,0.7142,-0.04),Vector3(-0.2,0.7142,-0.053),Vector3(-0.2,0.7142,-0.027),Vector3(-0.21,0.68,-0.04),Vector3(-0.19,0.68,-0.04),Vector3(-0.2,0.68,-0.05),Vector3(-0.2,0.68,-0.03),Vector3(-0.2,0.67,-0.04),Vector3(-0.212,0.74,-0.065),Vector3(-0.188,0.74,-0.065),Vector3(-0.2,0.74,-0.0756),Vector3(-0.2,0.74,-0.0542),Vector3(-0.21,0.7177,-0.065),Vector3(-0.19,0.7177,-0.065),Vector3(-0.2,0.7177,-0.0751),Vector3(-0.2,0.7177,-0.0549),Vector3(-0.21,0.695,-0.065),Vector3(-0.19,0.695,-0.065),Vector3(-0.2,0.695,-0.075),Vector3(-0.2,0.695,-0.055),Vector3(-0.2,0.685,-0.065),Vector3(-0.211,0.755,-0.085),Vector3(-0.189,0.755,-0.085),Vector3(-0.2,0.755,-0.0952),Vector3(-0.2,0.755,-0.0748),Vector3(-0.21,0.735,-0.085),Vector3(-0.19,0.735,-0.085),Vector3(-0.2,0.735,-0.0951),Vector3(-0.2,0.735,-0.0749),Vector3(-0.21,0.72,-0.085),Vector3(-0.19,0.72,-0.085),Vector3(-0.2,0.72,-0.095),Vector3(-0.2,0.72,-0.075),Vector3(-0.2,0.71,-0.085),Vector3(0.115,0.466,0.06),Vector3(0.115,0.466,-0.055),Vector3(0.15,0.466,0),Vector3(0.05,0.466,0),Vector3(0.17,0.3,0),Vector3(0.06,0.3,0),Vector3(0.1,0.3,-0.05),Vector3(0.1,0.3,0.05),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.115,0.069,-0.045),Vector3(0.117,0.0975,0.0615),Vector3(0.1375,0.006,-0.03),Vector3(0.095,0.006,-0.03),Vector3(0.115,0.015,-0.045),Vector3(0.115,0.06,0.1),Vector3(0.115,0,0.07),Vector3(0.165,0,0.07),Vector3(0.095,0,0.07),Vector3(0.115,0.04,0.13),Vector3(0.125,0,0.12),Vector3(0.165,0,0.12),Vector3(0.087,0,0.122),Vector3(0.09,0.012,0.188),Vector3(0.11,0.011,0.19),Vector3(0.128,0.011,0.185),Vector3(0.142,0.011,0.178),Vector3(0.154,0.01,0.168),Vector3(-0.115,0.466,0.06),Vector3(-0.115,0.466,-0.055),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.17,0.3,0),Vector3(-0.06,0.3,0),Vector3(-0.1,0.3,-0.05),Vector3(-0.1,0.3,0.05),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.115,0.069,-0.045),Vector3(-0.117,0.0975,0.0615),Vector3(-0.1375,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.115,0.06,0.1),Vector3(-0.115,0,0.07),Vector3(-0.165,0,0.07),Vector3(-0.095,0,0.07),Vector3(-0.115,0.04,0.13),Vector3(-0.125,0,0.12),Vector3(-0.165,0,0.12),Vector3(-0.087,0,0.122),Vector3(-0.09,0.012,0.188),Vector3(-0.11,0.011,0.19),Vector3(-0.128,0.011,0.185),Vector3(-0.142,0.011,0.178),Vector3(-0.154,0.01,0.168)]);
{ .SetCoord }
IndexedFaceSet40.Coord := Coordinate41;
Color42 := TColorNode.Create;
Color42.SetColor([Vector3(1,0,0),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,1)]);
{ .SetColor }
IndexedFaceSet40.Color := Color42;
{ .SetGeometry }
Shape39.Geometry := IndexedFaceSet40;
Appearance43 := TAppearanceNode.Create;
ImageTexture44 := TImageTextureNode.Create;
ImageTexture44.Description := 'Blue Spiral Pattern';
ImageTexture44.SetUrl(['../data/zBlueSpiralBkg2.gif','zBlueSpiralBkg2.gif','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif']);
{ .SetTexture }
Appearance43.Texture := ImageTexture44;
Material45 := TMaterialNode.Create;
Material45.AmbientIntensity := 0.6;
Material45.DiffuseColor := Vector3(1,1,1);
Material45.Shininess := 0.6;
Material45.Transparency := 1;
{ .SetMaterial }
Appearance43.Material := Material45;
{ .SetAppearance }
Shape39.Appearance := Appearance43;
{ .SetSkin }
HAnimHumanoid38.SetSkin([Shape39]);
Coordinate46 := TCoordinateNode.Create;
Coordinate46 := Coordinate41;
{ .SetSkinCoord }
HAnimHumanoid38.SetSkinCoord(Coordinate46);
HAnimJoint47 := THAnimJointNode.Create;
HAnimJoint47.NameField := 'humanoid_root';
HAnimJoint47.Center := Vector3(0,0.824,0.0277);
HAnimJoint47.SetUlimit([0,0,0]);
HAnimJoint47.SetLlimit([0,0,0]);
HAnimSegment48 := THAnimSegmentNode.Create;
HAnimSegment48.NameField := 'sacrum';
Transform49 := TTransformNode.Create;
Transform49.Translation := Vector3(0,0.824,0.0277);
Transform50 := TTransformNode.Create;
{ Empty Transform }
Shape51 := TShapeNode.Create;
Shape51 := Shape20;
{ .AddChild }
Transform50.AddChildren([Shape51]);
{ .AddChildren }
Transform49.AddChildren([Transform50]);
{ .AddChildren }
HAnimSegment48.AddChildren([Transform49]);
Shape52 := TShapeNode.Create;
LineSet53 := TLineSetNode.Create;
LineSet53.SetVertexCount([2]);
Coordinate54 := TCoordinateNode.Create;
Coordinate54.SetPoint([Vector3(0,0.824,0.0277),Vector3(0,0.9149,0.0016)]);
{ .SetCoord }
LineSet53.Coord := Coordinate54;
{ from humanoid_root to sacroiliac vertices 2 }
ColorRGBA55 := TColorRGBANode.Create;
ColorRGBA55 := ColorRGBA27;
{ .SetColor }
LineSet53.Color := ColorRGBA55;
{ .SetGeometry }
Shape52.Geometry := LineSet53;
{ .AddChildren }
HAnimSegment48.AddChildren([Shape52]);
Shape56 := TShapeNode.Create;
LineSet57 := TLineSetNode.Create;
LineSet57.SetVertexCount([2]);
Coordinate58 := TCoordinateNode.Create;
Coordinate58.SetPoint([Vector3(0,0.824,0.0277),Vector3(0.0028,1.0568,-0.0776)]);
{ .SetCoord }
LineSet57.Coord := Coordinate58;
{ from humanoid_root to vl5 vertices 2 }
ColorRGBA59 := TColorRGBANode.Create;
ColorRGBA59 := ColorRGBA27;
{ .SetColor }
LineSet57.Color := ColorRGBA59;
{ .SetGeometry }
Shape56.Geometry := LineSet57;
{ .AddChildren }
HAnimSegment48.AddChildren([Shape56]);
{ .AddChildren }
HAnimJoint47.AddChildren([HAnimSegment48]);
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.NameField := 'sacroiliac';
HAnimJoint60.Center := Vector3(0,0.9149,0.0016);
HAnimJoint60.SetUlimit([0,0,0]);
HAnimJoint60.SetLlimit([0,0,0]);
HAnimSegment61 := THAnimSegmentNode.Create;
HAnimSegment61.NameField := 'pelvis';
Transform62 := TTransformNode.Create;
Transform62.Translation := Vector3(0,0.9149,0.0016);
Transform63 := TTransformNode.Create;
{ Empty Transform }
Shape64 := TShapeNode.Create;
Shape64 := Shape20;
{ .AddChild }
Transform63.AddChildren([Shape64]);
{ .AddChildren }
Transform62.AddChildren([Transform63]);
{ .AddChildren }
HAnimSegment61.AddChildren([Transform62]);
Shape65 := TShapeNode.Create;
LineSet66 := TLineSetNode.Create;
LineSet66.SetVertexCount([2]);
Coordinate67 := TCoordinateNode.Create;
Coordinate67.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0961,0.9124,-0.0001)]);
{ .SetCoord }
LineSet66.Coord := Coordinate67;
{ from sacroiliac to l_hip vertices 2 }
ColorRGBA68 := TColorRGBANode.Create;
ColorRGBA68 := ColorRGBA27;
{ .SetColor }
LineSet66.Color := ColorRGBA68;
{ .SetGeometry }
Shape65.Geometry := LineSet66;
{ .AddChildren }
HAnimSegment61.AddChildren([Shape65]);
HAnimSite69 := THAnimSiteNode.Create;
HAnimSite69.NameField := 'buttocks_standing_wall_contact_point';
TouchSensor70 := TTouchSensorNode.Create;
TouchSensor70.Description := 'HAnimSite 93 buttocks_standing_wall_contact_point';
{ .AddChildren }
HAnimSite69.AddChildren([TouchSensor70]);
Shape71 := TShapeNode.Create;
Shape71 := Shape30;
{ .AddChildren }
HAnimSite69.AddChildren([Shape71]);
Billboard72 := TBillboardNode.Create;
Shape73 := TShapeNode.Create;
Text74 := TTextNode.Create;
Text74.SetText(['93']);
FontStyle75 := TFontStyleNode.Create;
FontStyle75.Size := 0.035;
{ .SetFontStyle }
Text74.FontStyle := FontStyle75;
{ .SetGeometry }
Shape73.Geometry := Text74;
{ .AddChildren }
Billboard72.AddChildren([Shape73]);
{ .AddChildren }
HAnimSite69.AddChildren([Billboard72]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite69]);
HAnimSite76 := THAnimSiteNode.Create;
HAnimSite76.NameField := 'crotch';
HAnimSite76.Translation := Vector3(0.0034,0.8266,0.0257);
TouchSensor77 := TTouchSensorNode.Create;
TouchSensor77.Description := 'HAnimSite 38 crotch';
{ .AddChildren }
HAnimSite76.AddChildren([TouchSensor77]);
Shape78 := TShapeNode.Create;
Shape78 := Shape30;
{ .AddChildren }
HAnimSite76.AddChildren([Shape78]);
Billboard79 := TBillboardNode.Create;
Shape80 := TShapeNode.Create;
Text81 := TTextNode.Create;
Text81.SetText(['38']);
FontStyle82 := TFontStyleNode.Create;
FontStyle82.Size := 0.035;
{ .SetFontStyle }
Text81.FontStyle := FontStyle82;
{ .SetGeometry }
Shape80.Geometry := Text81;
{ .AddChildren }
Billboard79.AddChildren([Shape80]);
{ .AddChildren }
HAnimSite76.AddChildren([Billboard79]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite76]);
HAnimSite83 := THAnimSiteNode.Create;
HAnimSite83.NameField := 'l_asis';
HAnimSite83.Translation := Vector3(0.0925,0.9983,0.1052);
TouchSensor84 := TTouchSensorNode.Create;
TouchSensor84.Description := 'HAnimSite 32 l_asis';
{ .AddChildren }
HAnimSite83.AddChildren([TouchSensor84]);
Shape85 := TShapeNode.Create;
Shape85 := Shape30;
{ .AddChildren }
HAnimSite83.AddChildren([Shape85]);
Billboard86 := TBillboardNode.Create;
Shape87 := TShapeNode.Create;
Text88 := TTextNode.Create;
Text88.SetText(['32']);
FontStyle89 := TFontStyleNode.Create;
FontStyle89.Size := 0.035;
{ .SetFontStyle }
Text88.FontStyle := FontStyle89;
{ .SetGeometry }
Shape87.Geometry := Text88;
{ .AddChildren }
Billboard86.AddChildren([Shape87]);
{ .AddChildren }
HAnimSite83.AddChildren([Billboard86]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite83]);
HAnimSite90 := THAnimSiteNode.Create;
HAnimSite90.NameField := 'l_iliocristale';
HAnimSite90.Translation := Vector3(0.1612,1.0537,0.0008);
TouchSensor91 := TTouchSensorNode.Create;
TouchSensor91.Description := 'HAnimSite 33 l_iliocristale';
{ .AddChildren }
HAnimSite90.AddChildren([TouchSensor91]);
Shape92 := TShapeNode.Create;
Shape92 := Shape30;
{ .AddChildren }
HAnimSite90.AddChildren([Shape92]);
Billboard93 := TBillboardNode.Create;
Shape94 := TShapeNode.Create;
Text95 := TTextNode.Create;
Text95.SetText(['33']);
FontStyle96 := TFontStyleNode.Create;
FontStyle96.Size := 0.035;
{ .SetFontStyle }
Text95.FontStyle := FontStyle96;
{ .SetGeometry }
Shape94.Geometry := Text95;
{ .AddChildren }
Billboard93.AddChildren([Shape94]);
{ .AddChildren }
HAnimSite90.AddChildren([Billboard93]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite90]);
HAnimSite97 := THAnimSiteNode.Create;
HAnimSite97.NameField := 'l_psis';
HAnimSite97.Translation := Vector3(0.0774,1.019,-0.1151);
TouchSensor98 := TTouchSensorNode.Create;
TouchSensor98.Description := 'HAnimSite 34 l_psis';
{ .AddChildren }
HAnimSite97.AddChildren([TouchSensor98]);
Shape99 := TShapeNode.Create;
Shape99 := Shape30;
{ .AddChildren }
HAnimSite97.AddChildren([Shape99]);
Billboard100 := TBillboardNode.Create;
Shape101 := TShapeNode.Create;
Text102 := TTextNode.Create;
Text102.SetText(['34']);
FontStyle103 := TFontStyleNode.Create;
FontStyle103.Size := 0.035;
{ .SetFontStyle }
Text102.FontStyle := FontStyle103;
{ .SetGeometry }
Shape101.Geometry := Text102;
{ .AddChildren }
Billboard100.AddChildren([Shape101]);
{ .AddChildren }
HAnimSite97.AddChildren([Billboard100]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite97]);
HAnimSite104 := THAnimSiteNode.Create;
HAnimSite104.NameField := 'l_trochanterion';
HAnimSite104.Translation := Vector3(0.1677,0.8336,0.0303);
TouchSensor105 := TTouchSensorNode.Create;
TouchSensor105.Description := 'HAnimSite 42 l_trochanterion';
{ .AddChildren }
HAnimSite104.AddChildren([TouchSensor105]);
Shape106 := TShapeNode.Create;
Shape106 := Shape30;
{ .AddChildren }
HAnimSite104.AddChildren([Shape106]);
Billboard107 := TBillboardNode.Create;
Shape108 := TShapeNode.Create;
Text109 := TTextNode.Create;
Text109.SetText(['42']);
FontStyle110 := TFontStyleNode.Create;
FontStyle110.Size := 0.035;
{ .SetFontStyle }
Text109.FontStyle := FontStyle110;
{ .SetGeometry }
Shape108.Geometry := Text109;
{ .AddChildren }
Billboard107.AddChildren([Shape108]);
{ .AddChildren }
HAnimSite104.AddChildren([Billboard107]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite104]);
HAnimSite111 := THAnimSiteNode.Create;
HAnimSite111.NameField := 'r_asis';
HAnimSite111.Translation := Vector3(-0.0887,1.0021,0.1112);
TouchSensor112 := TTouchSensorNode.Create;
TouchSensor112.Description := 'HAnimSite 35 r_asis';
{ .AddChildren }
HAnimSite111.AddChildren([TouchSensor112]);
Shape113 := TShapeNode.Create;
Shape113 := Shape30;
{ .AddChildren }
HAnimSite111.AddChildren([Shape113]);
Billboard114 := TBillboardNode.Create;
Shape115 := TShapeNode.Create;
Text116 := TTextNode.Create;
Text116.SetText(['35']);
FontStyle117 := TFontStyleNode.Create;
FontStyle117.Size := 0.035;
{ .SetFontStyle }
Text116.FontStyle := FontStyle117;
{ .SetGeometry }
Shape115.Geometry := Text116;
{ .AddChildren }
Billboard114.AddChildren([Shape115]);
{ .AddChildren }
HAnimSite111.AddChildren([Billboard114]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite111]);
HAnimSite118 := THAnimSiteNode.Create;
HAnimSite118.NameField := 'r_iliocristale';
HAnimSite118.Translation := Vector3(-0.1525,1.0628,0.0035);
TouchSensor119 := TTouchSensorNode.Create;
TouchSensor119.Description := 'HAnimSite 36 r_iliocristale';
{ .AddChildren }
HAnimSite118.AddChildren([TouchSensor119]);
Shape120 := TShapeNode.Create;
Shape120 := Shape30;
{ .AddChildren }
HAnimSite118.AddChildren([Shape120]);
Billboard121 := TBillboardNode.Create;
Shape122 := TShapeNode.Create;
Text123 := TTextNode.Create;
Text123.SetText(['36']);
FontStyle124 := TFontStyleNode.Create;
FontStyle124.Size := 0.035;
{ .SetFontStyle }
Text123.FontStyle := FontStyle124;
{ .SetGeometry }
Shape122.Geometry := Text123;
{ .AddChildren }
Billboard121.AddChildren([Shape122]);
{ .AddChildren }
HAnimSite118.AddChildren([Billboard121]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite118]);
HAnimSite125 := THAnimSiteNode.Create;
HAnimSite125.NameField := 'r_psis';
HAnimSite125.Translation := Vector3(-0.0716,1.019,-0.1138);
TouchSensor126 := TTouchSensorNode.Create;
TouchSensor126.Description := 'HAnimSite 37 r_psis';
{ .AddChildren }
HAnimSite125.AddChildren([TouchSensor126]);
Shape127 := TShapeNode.Create;
Shape127 := Shape30;
{ .AddChildren }
HAnimSite125.AddChildren([Shape127]);
Billboard128 := TBillboardNode.Create;
Shape129 := TShapeNode.Create;
Text130 := TTextNode.Create;
Text130.SetText(['37']);
FontStyle131 := TFontStyleNode.Create;
FontStyle131.Size := 0.035;
{ .SetFontStyle }
Text130.FontStyle := FontStyle131;
{ .SetGeometry }
Shape129.Geometry := Text130;
{ .AddChildren }
Billboard128.AddChildren([Shape129]);
{ .AddChildren }
HAnimSite125.AddChildren([Billboard128]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite125]);
HAnimSite132 := THAnimSiteNode.Create;
HAnimSite132.NameField := 'r_trochanterion';
HAnimSite132.Translation := Vector3(-0.1689,0.8419,0.0352);
TouchSensor133 := TTouchSensorNode.Create;
TouchSensor133.Description := 'HAnimSite 46 r_trochanterion';
{ .AddChildren }
HAnimSite132.AddChildren([TouchSensor133]);
Shape134 := TShapeNode.Create;
Shape134 := Shape30;
{ .AddChildren }
HAnimSite132.AddChildren([Shape134]);
Billboard135 := TBillboardNode.Create;
Shape136 := TShapeNode.Create;
Text137 := TTextNode.Create;
Text137.SetText(['46']);
FontStyle138 := TFontStyleNode.Create;
FontStyle138.Size := 0.035;
{ .SetFontStyle }
Text137.FontStyle := FontStyle138;
{ .SetGeometry }
Shape136.Geometry := Text137;
{ .AddChildren }
Billboard135.AddChildren([Shape136]);
{ .AddChildren }
HAnimSite132.AddChildren([Billboard135]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite132]);
Shape139 := TShapeNode.Create;
LineSet140 := TLineSetNode.Create;
LineSet140.SetVertexCount([2]);
Coordinate141 := TCoordinateNode.Create;
Coordinate141.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.095,0.9171,0.0029)]);
{ .SetCoord }
LineSet140.Coord := Coordinate141;
{ from sacroiliac to r_hip vertices 2 }
ColorRGBA142 := TColorRGBANode.Create;
ColorRGBA142 := ColorRGBA27;
{ .SetColor }
LineSet140.Color := ColorRGBA142;
{ .SetGeometry }
Shape139.Geometry := LineSet140;
{ .AddChildren }
HAnimSegment61.AddChildren([Shape139]);
{ .AddChildren }
HAnimJoint60.AddChildren([HAnimSegment61]);
HAnimJoint143 := THAnimJointNode.Create;
HAnimJoint143.NameField := 'l_hip';
HAnimJoint143.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimJoint143.SetUlimit([0,0,0]);
HAnimJoint143.SetLlimit([0,0,0]);
HAnimSegment144 := THAnimSegmentNode.Create;
HAnimSegment144.NameField := 'l_thigh';
Transform145 := TTransformNode.Create;
Transform145.Translation := Vector3(0.0961,0.9124,-0.0001);
Transform146 := TTransformNode.Create;
{ Empty Transform }
Shape147 := TShapeNode.Create;
Shape147 := Shape20;
{ .AddChild }
Transform146.AddChildren([Shape147]);
{ .AddChildren }
Transform145.AddChildren([Transform146]);
{ .AddChildren }
HAnimSegment144.AddChildren([Transform145]);
Shape148 := TShapeNode.Create;
LineSet149 := TLineSetNode.Create;
LineSet149.SetVertexCount([2]);
Coordinate150 := TCoordinateNode.Create;
Coordinate150.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.104,0.4867,0.0308)]);
{ .SetCoord }
LineSet149.Coord := Coordinate150;
{ from l_hip to l_knee vertices 2 }
ColorRGBA151 := TColorRGBANode.Create;
ColorRGBA151 := ColorRGBA27;
{ .SetColor }
LineSet149.Color := ColorRGBA151;
{ .SetGeometry }
Shape148.Geometry := LineSet149;
{ .AddChildren }
HAnimSegment144.AddChildren([Shape148]);
HAnimSite152 := THAnimSiteNode.Create;
HAnimSite152.NameField := 'l_femoral_lateral_epicondyles';
HAnimSite152.Translation := Vector3(0.1598,0.4967,0.0297);
TouchSensor153 := TTouchSensorNode.Create;
TouchSensor153.Description := 'HAnimSite 40 l_femoral_lateral_epicondyles';
{ .AddChildren }
HAnimSite152.AddChildren([TouchSensor153]);
Shape154 := TShapeNode.Create;
Shape154 := Shape30;
{ .AddChildren }
HAnimSite152.AddChildren([Shape154]);
Billboard155 := TBillboardNode.Create;
Shape156 := TShapeNode.Create;
Text157 := TTextNode.Create;
Text157.SetText(['40']);
FontStyle158 := TFontStyleNode.Create;
FontStyle158.Size := 0.035;
{ .SetFontStyle }
Text157.FontStyle := FontStyle158;
{ .SetGeometry }
Shape156.Geometry := Text157;
{ .AddChildren }
Billboard155.AddChildren([Shape156]);
{ .AddChildren }
HAnimSite152.AddChildren([Billboard155]);
{ .AddChildren }
HAnimSegment144.AddChildren([HAnimSite152]);
HAnimSite159 := THAnimSiteNode.Create;
HAnimSite159.NameField := 'l_femoral_medial_epicondyles';
HAnimSite159.Translation := Vector3(0.0398,0.4946,0.0303);
TouchSensor160 := TTouchSensorNode.Create;
TouchSensor160.Description := 'HAnimSite 39 l_femoral_medial_epicondyles';
{ .AddChildren }
HAnimSite159.AddChildren([TouchSensor160]);
Shape161 := TShapeNode.Create;
Shape161 := Shape30;
{ .AddChildren }
HAnimSite159.AddChildren([Shape161]);
Billboard162 := TBillboardNode.Create;
Shape163 := TShapeNode.Create;
Text164 := TTextNode.Create;
Text164.SetText(['39']);
FontStyle165 := TFontStyleNode.Create;
FontStyle165.Size := 0.035;
{ .SetFontStyle }
Text164.FontStyle := FontStyle165;
{ .SetGeometry }
Shape163.Geometry := Text164;
{ .AddChildren }
Billboard162.AddChildren([Shape163]);
{ .AddChildren }
HAnimSite159.AddChildren([Billboard162]);
{ .AddChildren }
HAnimSegment144.AddChildren([HAnimSite159]);
HAnimSite166 := THAnimSiteNode.Create;
HAnimSite166.NameField := 'l_knee_crease';
HAnimSite166.Translation := Vector3(0.0993,0.4881,-0.0309);
TouchSensor167 := TTouchSensorNode.Create;
TouchSensor167.Description := 'HAnimSite 90 l_knee_crease';
{ .AddChildren }
HAnimSite166.AddChildren([TouchSensor167]);
Shape168 := TShapeNode.Create;
Shape168 := Shape30;
{ .AddChildren }
HAnimSite166.AddChildren([Shape168]);
Billboard169 := TBillboardNode.Create;
Shape170 := TShapeNode.Create;
Text171 := TTextNode.Create;
Text171.SetText(['90']);
FontStyle172 := TFontStyleNode.Create;
FontStyle172.Size := 0.035;
{ .SetFontStyle }
Text171.FontStyle := FontStyle172;
{ .SetGeometry }
Shape170.Geometry := Text171;
{ .AddChildren }
Billboard169.AddChildren([Shape170]);
{ .AddChildren }
HAnimSite166.AddChildren([Billboard169]);
{ .AddChildren }
HAnimSegment144.AddChildren([HAnimSite166]);
HAnimSite173 := THAnimSiteNode.Create;
HAnimSite173.NameField := 'l_suprapatella';
TouchSensor174 := TTouchSensorNode.Create;
TouchSensor174.Description := 'HAnimSite 41 l_suprapatella';
{ .AddChildren }
HAnimSite173.AddChildren([TouchSensor174]);
Shape175 := TShapeNode.Create;
Shape175 := Shape30;
{ .AddChildren }
HAnimSite173.AddChildren([Shape175]);
Billboard176 := TBillboardNode.Create;
Shape177 := TShapeNode.Create;
Text178 := TTextNode.Create;
Text178.SetText(['41']);
FontStyle179 := TFontStyleNode.Create;
FontStyle179.Size := 0.035;
{ .SetFontStyle }
Text178.FontStyle := FontStyle179;
{ .SetGeometry }
Shape177.Geometry := Text178;
{ .AddChildren }
Billboard176.AddChildren([Shape177]);
{ .AddChildren }
HAnimSite173.AddChildren([Billboard176]);
{ .AddChildren }
HAnimSegment144.AddChildren([HAnimSite173]);
{ .AddChildren }
HAnimJoint143.AddChildren([HAnimSegment144]);
HAnimJoint180 := THAnimJointNode.Create;
HAnimJoint180.NameField := 'l_knee';
HAnimJoint180.Center := Vector3(0.104,0.4867,0.0308);
HAnimJoint180.SetUlimit([0,0,0]);
HAnimJoint180.SetLlimit([0,0,0]);
HAnimSegment181 := THAnimSegmentNode.Create;
HAnimSegment181.NameField := 'l_calf';
Transform182 := TTransformNode.Create;
Transform182.Translation := Vector3(0.104,0.4867,0.0308);
Transform183 := TTransformNode.Create;
{ Empty Transform }
Shape184 := TShapeNode.Create;
Shape184 := Shape20;
{ .AddChild }
Transform183.AddChildren([Shape184]);
{ .AddChildren }
Transform182.AddChildren([Transform183]);
{ .AddChildren }
HAnimSegment181.AddChildren([Transform182]);
Shape185 := TShapeNode.Create;
LineSet186 := TLineSetNode.Create;
LineSet186.SetVertexCount([2]);
Coordinate187 := TCoordinateNode.Create;
Coordinate187.SetPoint([Vector3(0.104,0.4867,0.0308),Vector3(0.1101,0.0656,-0.0736)]);
{ .SetCoord }
LineSet186.Coord := Coordinate187;
{ from l_knee to l_talocrural vertices 2 }
ColorRGBA188 := TColorRGBANode.Create;
ColorRGBA188 := ColorRGBA27;
{ .SetColor }
LineSet186.Color := ColorRGBA188;
{ .SetGeometry }
Shape185.Geometry := LineSet186;
{ .AddChildren }
HAnimSegment181.AddChildren([Shape185]);
HAnimSite189 := THAnimSiteNode.Create;
HAnimSite189.NameField := 'l_lateral_malleolus';
HAnimSite189.Translation := Vector3(0.1308,0.0597,-0.1032);
TouchSensor190 := TTouchSensorNode.Create;
TouchSensor190.Description := 'HAnimSite 49 l_lateral_malleolus';
{ .AddChildren }
HAnimSite189.AddChildren([TouchSensor190]);
Shape191 := TShapeNode.Create;
Shape191 := Shape30;
{ .AddChildren }
HAnimSite189.AddChildren([Shape191]);
Billboard192 := TBillboardNode.Create;
Shape193 := TShapeNode.Create;
Text194 := TTextNode.Create;
Text194.SetText(['49']);
FontStyle195 := TFontStyleNode.Create;
FontStyle195.Size := 0.035;
{ .SetFontStyle }
Text194.FontStyle := FontStyle195;
{ .SetGeometry }
Shape193.Geometry := Text194;
{ .AddChildren }
Billboard192.AddChildren([Shape193]);
{ .AddChildren }
HAnimSite189.AddChildren([Billboard192]);
{ .AddChildren }
HAnimSegment181.AddChildren([HAnimSite189]);
HAnimSite196 := THAnimSiteNode.Create;
HAnimSite196.NameField := 'l_medial_malleolus';
HAnimSite196.Translation := Vector3(0.089,0.0716,-0.0881);
TouchSensor197 := TTouchSensorNode.Create;
TouchSensor197.Description := 'HAnimSite 48 l_medial_malleolus';
{ .AddChildren }
HAnimSite196.AddChildren([TouchSensor197]);
Shape198 := TShapeNode.Create;
Shape198 := Shape30;
{ .AddChildren }
HAnimSite196.AddChildren([Shape198]);
Billboard199 := TBillboardNode.Create;
Shape200 := TShapeNode.Create;
Text201 := TTextNode.Create;
Text201.SetText(['48']);
FontStyle202 := TFontStyleNode.Create;
FontStyle202.Size := 0.035;
{ .SetFontStyle }
Text201.FontStyle := FontStyle202;
{ .SetGeometry }
Shape200.Geometry := Text201;
{ .AddChildren }
Billboard199.AddChildren([Shape200]);
{ .AddChildren }
HAnimSite196.AddChildren([Billboard199]);
{ .AddChildren }
HAnimSegment181.AddChildren([HAnimSite196]);
HAnimSite203 := THAnimSiteNode.Create;
HAnimSite203.NameField := 'l_tibiale';
TouchSensor204 := TTouchSensorNode.Create;
TouchSensor204.Description := 'HAnimSite 47 l_tibiale';
{ .AddChildren }
HAnimSite203.AddChildren([TouchSensor204]);
Shape205 := TShapeNode.Create;
Shape205 := Shape30;
{ .AddChildren }
HAnimSite203.AddChildren([Shape205]);
Billboard206 := TBillboardNode.Create;
Shape207 := TShapeNode.Create;
Text208 := TTextNode.Create;
Text208.SetText(['47']);
FontStyle209 := TFontStyleNode.Create;
FontStyle209.Size := 0.035;
{ .SetFontStyle }
Text208.FontStyle := FontStyle209;
{ .SetGeometry }
Shape207.Geometry := Text208;
{ .AddChildren }
Billboard206.AddChildren([Shape207]);
{ .AddChildren }
HAnimSite203.AddChildren([Billboard206]);
{ .AddChildren }
HAnimSegment181.AddChildren([HAnimSite203]);
{ .AddChildren }
HAnimJoint180.AddChildren([HAnimSegment181]);
HAnimJoint210 := THAnimJointNode.Create;
HAnimJoint210.NameField := 'l_talocrural';
HAnimJoint210.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimJoint210.SetUlimit([0,0,0]);
HAnimJoint210.SetLlimit([0,0,0]);
HAnimSegment211 := THAnimSegmentNode.Create;
HAnimSegment211.NameField := 'l_talus';
Transform212 := TTransformNode.Create;
Transform212.Scale := Vector3(0.15,0.15,0.15);
Transform212.Translation := Vector3(0.08,0.06,-0.025);
Transform212.Rotation := Vector4(1,0,0,-1.57);
{ Transform left foot }
Transform213 := TTransformNode.Create;
{ Empty Transform left foot }
Shape214 := TShapeNode.Create;
Shape214 := Shape20;
{ .AddChild }
Transform213.AddChildren([Shape214]);
{ .AddChildren }
Transform212.AddChildren([Transform213]);
{ .AddChildren }
HAnimSegment211.AddChildren([Transform212]);
Shape215 := TShapeNode.Create;
LineSet216 := TLineSetNode.Create;
LineSet216.SetVertexCount([2]);
Coordinate217 := TCoordinateNode.Create;
Coordinate217.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.0781,0.0283,-0.097)]);
{ .SetCoord }
LineSet216.Coord := Coordinate217;
{ from l_talocrural to l_talocalcaneonavicular vertices 2 }
ColorRGBA218 := TColorRGBANode.Create;
ColorRGBA218 := ColorRGBA27;
{ .SetColor }
LineSet216.Color := ColorRGBA218;
{ .SetGeometry }
Shape215.Geometry := LineSet216;
{ .AddChildren }
HAnimSegment211.AddChildren([Shape215]);
HAnimSite219 := THAnimSiteNode.Create;
HAnimSite219.NameField := 'l_calcaneus_posterior';
HAnimSite219.Translation := Vector3(0.0974,0.0259,-0.1171);
TouchSensor220 := TTouchSensorNode.Create;
TouchSensor220.Description := 'HAnimSite 58 l_calcaneus_posterior';
{ .AddChildren }
HAnimSite219.AddChildren([TouchSensor220]);
Shape221 := TShapeNode.Create;
Shape221 := Shape30;
{ .AddChildren }
HAnimSite219.AddChildren([Shape221]);
Billboard222 := TBillboardNode.Create;
Shape223 := TShapeNode.Create;
Text224 := TTextNode.Create;
Text224.SetText(['58']);
FontStyle225 := TFontStyleNode.Create;
FontStyle225.Size := 0.035;
{ .SetFontStyle }
Text224.FontStyle := FontStyle225;
{ .SetGeometry }
Shape223.Geometry := Text224;
{ .AddChildren }
Billboard222.AddChildren([Shape223]);
{ .AddChildren }
HAnimSite219.AddChildren([Billboard222]);
{ .AddChildren }
HAnimSegment211.AddChildren([HAnimSite219]);
HAnimSite226 := THAnimSiteNode.Create;
HAnimSite226.NameField := 'l_sphyrion';
HAnimSite226.Translation := Vector3(0.089,0.0575,-0.0943);
TouchSensor227 := TTouchSensorNode.Create;
TouchSensor227.Description := 'HAnimSite 50 l_sphyrion';
{ .AddChildren }
HAnimSite226.AddChildren([TouchSensor227]);
Shape228 := TShapeNode.Create;
Shape228 := Shape30;
{ .AddChildren }
HAnimSite226.AddChildren([Shape228]);
Billboard229 := TBillboardNode.Create;
Shape230 := TShapeNode.Create;
Text231 := TTextNode.Create;
Text231.SetText(['50']);
FontStyle232 := TFontStyleNode.Create;
FontStyle232.Size := 0.035;
{ .SetFontStyle }
Text231.FontStyle := FontStyle232;
{ .SetGeometry }
Shape230.Geometry := Text231;
{ .AddChildren }
Billboard229.AddChildren([Shape230]);
{ .AddChildren }
HAnimSite226.AddChildren([Billboard229]);
{ .AddChildren }
HAnimSegment211.AddChildren([HAnimSite226]);
Shape233 := TShapeNode.Create;
LineSet234 := TLineSetNode.Create;
LineSet234.SetVertexCount([2]);
Coordinate235 := TCoordinateNode.Create;
Coordinate235.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.0889,0.0494,-0.1278)]);
{ .SetCoord }
LineSet234.Coord := Coordinate235;
{ from l_talocrural to l_calcaneocuboid vertices 2 }
ColorRGBA236 := TColorRGBANode.Create;
ColorRGBA236 := ColorRGBA27;
{ .SetColor }
LineSet234.Color := ColorRGBA236;
{ .SetGeometry }
Shape233.Geometry := LineSet234;
{ .AddChildren }
HAnimSegment211.AddChildren([Shape233]);
{ .AddChildren }
HAnimJoint210.AddChildren([HAnimSegment211]);
HAnimJoint237 := THAnimJointNode.Create;
HAnimJoint237.NameField := 'l_talocalcaneonavicular';
HAnimJoint237.Center := Vector3(0.0781,0.0283,-0.097);
HAnimJoint237.SetUlimit([0,0,0]);
HAnimJoint237.SetLlimit([0,0,0]);
HAnimSegment238 := THAnimSegmentNode.Create;
HAnimSegment238.NameField := 'l_navicular';
Transform239 := TTransformNode.Create;
Transform239.Translation := Vector3(0.0781,0.0283,-0.097);
Transform240 := TTransformNode.Create;
{ Empty Transform }
Shape241 := TShapeNode.Create;
Shape241 := Shape20;
{ .AddChild }
Transform240.AddChildren([Shape241]);
{ .AddChildren }
Transform239.AddChildren([Transform240]);
{ .AddChildren }
HAnimSegment238.AddChildren([Transform239]);
Shape242 := TShapeNode.Create;
LineSet243 := TLineSetNode.Create;
LineSet243.SetVertexCount([2]);
Coordinate244 := TCoordinateNode.Create;
Coordinate244.SetPoint([Vector3(0.0781,0.0283,-0.097),Vector3(0.0672,0.0235,-0.0835)]);
{ .SetCoord }
LineSet243.Coord := Coordinate244;
{ from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2 }
ColorRGBA245 := TColorRGBANode.Create;
ColorRGBA245 := ColorRGBA27;
{ .SetColor }
LineSet243.Color := ColorRGBA245;
{ .SetGeometry }
Shape242.Geometry := LineSet243;
{ .AddChildren }
HAnimSegment238.AddChildren([Shape242]);
Shape246 := TShapeNode.Create;
LineSet247 := TLineSetNode.Create;
LineSet247.SetVertexCount([2]);
Coordinate248 := TCoordinateNode.Create;
Coordinate248.SetPoint([Vector3(0.0781,0.0283,-0.097),Vector3(0.0812,0.025,-0.0805)]);
{ .SetCoord }
LineSet247.Coord := Coordinate248;
{ from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2 }
ColorRGBA249 := TColorRGBANode.Create;
ColorRGBA249 := ColorRGBA27;
{ .SetColor }
LineSet247.Color := ColorRGBA249;
{ .SetGeometry }
Shape246.Geometry := LineSet247;
{ .AddChildren }
HAnimSegment238.AddChildren([Shape246]);
Shape250 := TShapeNode.Create;
LineSet251 := TLineSetNode.Create;
LineSet251.SetVertexCount([2]);
Coordinate252 := TCoordinateNode.Create;
Coordinate252.SetPoint([Vector3(0.0781,0.0283,-0.097),Vector3(0.0928,0.0248,-0.0821)]);
{ .SetCoord }
LineSet251.Coord := Coordinate252;
{ from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2 }
ColorRGBA253 := TColorRGBANode.Create;
ColorRGBA253 := ColorRGBA27;
{ .SetColor }
LineSet251.Color := ColorRGBA253;
{ .SetGeometry }
Shape250.Geometry := LineSet251;
{ .AddChildren }
HAnimSegment238.AddChildren([Shape250]);
{ .AddChildren }
HAnimJoint237.AddChildren([HAnimSegment238]);
HAnimJoint254 := THAnimJointNode.Create;
HAnimJoint254.NameField := 'l_cuneonavicular_1';
HAnimJoint254.Center := Vector3(0.0672,0.0235,-0.0835);
HAnimJoint254.SetUlimit([0,0,0]);
HAnimJoint254.SetLlimit([0,0,0]);
HAnimSegment255 := THAnimSegmentNode.Create;
HAnimSegment255.NameField := 'l_cuneiform_1';
Transform256 := TTransformNode.Create;
Transform256.Translation := Vector3(0.0672,0.0235,-0.0835);
Transform257 := TTransformNode.Create;
{ Empty Transform }
Shape258 := TShapeNode.Create;
Shape258 := Shape20;
{ .AddChild }
Transform257.AddChildren([Shape258]);
{ .AddChildren }
Transform256.AddChildren([Transform257]);
{ .AddChildren }
HAnimSegment255.AddChildren([Transform256]);
Shape259 := TShapeNode.Create;
LineSet260 := TLineSetNode.Create;
LineSet260.SetVertexCount([2]);
Coordinate261 := TCoordinateNode.Create;
Coordinate261.SetPoint([Vector3(0.0672,0.0235,-0.0835),Vector3(0.0644,0.0147,-0.0577)]);
{ .SetCoord }
LineSet260.Coord := Coordinate261;
{ from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2 }
ColorRGBA262 := TColorRGBANode.Create;
ColorRGBA262 := ColorRGBA27;
{ .SetColor }
LineSet260.Color := ColorRGBA262;
{ .SetGeometry }
Shape259.Geometry := LineSet260;
{ .AddChildren }
HAnimSegment255.AddChildren([Shape259]);
{ .AddChildren }
HAnimJoint254.AddChildren([HAnimSegment255]);
HAnimJoint263 := THAnimJointNode.Create;
HAnimJoint263.NameField := 'l_tarsometatarsal_1';
HAnimJoint263.Center := Vector3(0.0644,0.0147,-0.0577);
HAnimJoint263.SetUlimit([0,0,0]);
HAnimJoint263.SetLlimit([0,0,0]);
HAnimSegment264 := THAnimSegmentNode.Create;
HAnimSegment264.NameField := 'l_metatarsal_1';
Transform265 := TTransformNode.Create;
Transform265.Translation := Vector3(0.0644,0.0147,-0.0577);
Transform266 := TTransformNode.Create;
{ Empty Transform }
Shape267 := TShapeNode.Create;
Shape267 := Shape20;
{ .AddChild }
Transform266.AddChildren([Shape267]);
{ .AddChildren }
Transform265.AddChildren([Transform266]);
{ .AddChildren }
HAnimSegment264.AddChildren([Transform265]);
Shape268 := TShapeNode.Create;
LineSet269 := TLineSetNode.Create;
LineSet269.SetVertexCount([2]);
Coordinate270 := TCoordinateNode.Create;
Coordinate270.SetPoint([Vector3(0.0644,0.0147,-0.0577),Vector3(0.0619,0.0059,-0.0083)]);
{ .SetCoord }
LineSet269.Coord := Coordinate270;
{ from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2 }
ColorRGBA271 := TColorRGBANode.Create;
ColorRGBA271 := ColorRGBA27;
{ .SetColor }
LineSet269.Color := ColorRGBA271;
{ .SetGeometry }
Shape268.Geometry := LineSet269;
{ .AddChildren }
HAnimSegment264.AddChildren([Shape268]);
{ .AddChildren }
HAnimJoint263.AddChildren([HAnimSegment264]);
HAnimJoint272 := THAnimJointNode.Create;
HAnimJoint272.NameField := 'l_metatarsophalangeal_1';
HAnimJoint272.Center := Vector3(0.0619,0.0059,-0.0083);
HAnimJoint272.SetUlimit([0,0,0]);
HAnimJoint272.SetLlimit([0,0,0]);
HAnimSegment273 := THAnimSegmentNode.Create;
HAnimSegment273.NameField := 'l_tarsal_proximal_phalanx_1';
Transform274 := TTransformNode.Create;
Transform274.Translation := Vector3(0.0619,0.0059,-0.0083);
Transform275 := TTransformNode.Create;
{ Empty Transform }
Shape276 := TShapeNode.Create;
Shape276 := Shape20;
{ .AddChild }
Transform275.AddChildren([Shape276]);
{ .AddChildren }
Transform274.AddChildren([Transform275]);
{ .AddChildren }
HAnimSegment273.AddChildren([Transform274]);
Shape277 := TShapeNode.Create;
LineSet278 := TLineSetNode.Create;
LineSet278.SetVertexCount([2]);
Coordinate279 := TCoordinateNode.Create;
Coordinate279.SetPoint([Vector3(0.0619,0.0059,-0.0083),Vector3(0.0619,0.0059,-0.0083)]);
{ .SetCoord }
LineSet278.Coord := Coordinate279;
{ from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2 }
ColorRGBA280 := TColorRGBANode.Create;
ColorRGBA280 := ColorRGBA27;
{ .SetColor }
LineSet278.Color := ColorRGBA280;
{ .SetGeometry }
Shape277.Geometry := LineSet278;
{ .AddChildren }
HAnimSegment273.AddChildren([Shape277]);
HAnimSite281 := THAnimSiteNode.Create;
HAnimSite281.NameField := 'l_metatarsal_phalanx_1';
TouchSensor282 := TTouchSensorNode.Create;
TouchSensor282.Description := 'HAnimSite 55 l_metatarsal_phalanx_1';
{ .AddChildren }
HAnimSite281.AddChildren([TouchSensor282]);
Shape283 := TShapeNode.Create;
Shape283 := Shape30;
{ .AddChildren }
HAnimSite281.AddChildren([Shape283]);
Billboard284 := TBillboardNode.Create;
Shape285 := TShapeNode.Create;
Text286 := TTextNode.Create;
Text286.SetText(['55']);
FontStyle287 := TFontStyleNode.Create;
FontStyle287.Size := 0.035;
{ .SetFontStyle }
Text286.FontStyle := FontStyle287;
{ .SetGeometry }
Shape285.Geometry := Text286;
{ .AddChildren }
Billboard284.AddChildren([Shape285]);
{ .AddChildren }
HAnimSite281.AddChildren([Billboard284]);
{ .AddChildren }
HAnimSegment273.AddChildren([HAnimSite281]);
{ .AddChildren }
HAnimJoint272.AddChildren([HAnimSegment273]);
HAnimJoint288 := THAnimJointNode.Create;
HAnimJoint288.NameField := 'l_tarsal_interphalangeal_1';
HAnimJoint288.SetUlimit([0,0,0]);
HAnimJoint288.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint272.AddChildren([HAnimJoint288]);
{ .AddChildren }
HAnimJoint263.AddChildren([HAnimJoint272]);
{ .AddChildren }
HAnimJoint254.AddChildren([HAnimJoint263]);
{ .AddChildren }
HAnimJoint237.AddChildren([HAnimJoint254]);
HAnimJoint289 := THAnimJointNode.Create;
HAnimJoint289.NameField := 'l_cuneonavicular_2';
HAnimJoint289.Center := Vector3(0.0812,0.025,-0.0805);
HAnimJoint289.SetUlimit([0,0,0]);
HAnimJoint289.SetLlimit([0,0,0]);
HAnimSegment290 := THAnimSegmentNode.Create;
HAnimSegment290.NameField := 'l_cuneiform_2';
Transform291 := TTransformNode.Create;
Transform291.Translation := Vector3(0.0812,0.025,-0.0805);
Transform292 := TTransformNode.Create;
{ Empty Transform }
Shape293 := TShapeNode.Create;
Shape293 := Shape20;
{ .AddChild }
Transform292.AddChildren([Shape293]);
{ .AddChildren }
Transform291.AddChildren([Transform292]);
{ .AddChildren }
HAnimSegment290.AddChildren([Transform291]);
Shape294 := TShapeNode.Create;
LineSet295 := TLineSetNode.Create;
LineSet295.SetVertexCount([2]);
Coordinate296 := TCoordinateNode.Create;
Coordinate296.SetPoint([Vector3(0.0812,0.025,-0.0805),Vector3(0.08,0.0175,-0.0608)]);
{ .SetCoord }
LineSet295.Coord := Coordinate296;
{ from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2 }
ColorRGBA297 := TColorRGBANode.Create;
ColorRGBA297 := ColorRGBA27;
{ .SetColor }
LineSet295.Color := ColorRGBA297;
{ .SetGeometry }
Shape294.Geometry := LineSet295;
{ .AddChildren }
HAnimSegment290.AddChildren([Shape294]);
{ .AddChildren }
HAnimJoint289.AddChildren([HAnimSegment290]);
HAnimJoint298 := THAnimJointNode.Create;
HAnimJoint298.NameField := 'l_tarsometatarsal_2';
HAnimJoint298.Center := Vector3(0.08,0.0175,-0.0608);
HAnimJoint298.SetUlimit([0,0,0]);
HAnimJoint298.SetLlimit([0,0,0]);
HAnimSegment299 := THAnimSegmentNode.Create;
HAnimSegment299.NameField := 'l_metatarsal_2';
Transform300 := TTransformNode.Create;
Transform300.Translation := Vector3(0.08,0.0175,-0.0608);
Transform301 := TTransformNode.Create;
{ Empty Transform }
Shape302 := TShapeNode.Create;
Shape302 := Shape20;
{ .AddChild }
Transform301.AddChildren([Shape302]);
{ .AddChildren }
Transform300.AddChildren([Transform301]);
{ .AddChildren }
HAnimSegment299.AddChildren([Transform300]);
Shape303 := TShapeNode.Create;
LineSet304 := TLineSetNode.Create;
LineSet304.SetVertexCount([2]);
Coordinate305 := TCoordinateNode.Create;
Coordinate305.SetPoint([Vector3(0.08,0.0175,-0.0608),Vector3(0.0824,0.0064,-0.004)]);
{ .SetCoord }
LineSet304.Coord := Coordinate305;
{ from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2 }
ColorRGBA306 := TColorRGBANode.Create;
ColorRGBA306 := ColorRGBA27;
{ .SetColor }
LineSet304.Color := ColorRGBA306;
{ .SetGeometry }
Shape303.Geometry := LineSet304;
{ .AddChildren }
HAnimSegment299.AddChildren([Shape303]);
{ .AddChildren }
HAnimJoint298.AddChildren([HAnimSegment299]);
HAnimJoint307 := THAnimJointNode.Create;
HAnimJoint307.NameField := 'l_metatarsophalangeal_2';
HAnimJoint307.Center := Vector3(0.0824,0.0064,-0.004);
HAnimJoint307.SetUlimit([0,0,0]);
HAnimJoint307.SetLlimit([0,0,0]);
HAnimSegment308 := THAnimSegmentNode.Create;
HAnimSegment308.NameField := 'l_tarsal_proximal_phalanx_2';
Transform309 := TTransformNode.Create;
Transform309.Translation := Vector3(0.0824,0.0064,-0.004);
Transform310 := TTransformNode.Create;
{ Empty Transform }
Shape311 := TShapeNode.Create;
Shape311 := Shape20;
{ .AddChild }
Transform310.AddChildren([Shape311]);
{ .AddChildren }
Transform309.AddChildren([Transform310]);
{ .AddChildren }
HAnimSegment308.AddChildren([Transform309]);
Shape312 := TShapeNode.Create;
LineSet313 := TLineSetNode.Create;
LineSet313.SetVertexCount([2]);
Coordinate314 := TCoordinateNode.Create;
Coordinate314.SetPoint([Vector3(0.0824,0.0064,-0.004),Vector3(0.0841,0.0041,0.0121)]);
{ .SetCoord }
LineSet313.Coord := Coordinate314;
{ from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2 }
ColorRGBA315 := TColorRGBANode.Create;
ColorRGBA315 := ColorRGBA27;
{ .SetColor }
LineSet313.Color := ColorRGBA315;
{ .SetGeometry }
Shape312.Geometry := LineSet313;
{ .AddChildren }
HAnimSegment308.AddChildren([Shape312]);
{ .AddChildren }
HAnimJoint307.AddChildren([HAnimSegment308]);
HAnimJoint316 := THAnimJointNode.Create;
HAnimJoint316.NameField := 'l_tarsal_proximal_interphalangeal_2';
HAnimJoint316.Center := Vector3(0.0841,0.0041,0.0121);
HAnimJoint316.SetUlimit([0,0,0]);
HAnimJoint316.SetLlimit([0,0,0]);
HAnimSegment317 := THAnimSegmentNode.Create;
HAnimSegment317.NameField := 'l_tarsal_middle_phalanx_2';
Transform318 := TTransformNode.Create;
Transform318.Translation := Vector3(0.0841,0.0041,0.0121);
Transform319 := TTransformNode.Create;
{ Empty Transform }
Shape320 := TShapeNode.Create;
Shape320 := Shape20;
{ .AddChild }
Transform319.AddChildren([Shape320]);
{ .AddChildren }
Transform318.AddChildren([Transform319]);
{ .AddChildren }
HAnimSegment317.AddChildren([Transform318]);
Shape321 := TShapeNode.Create;
LineSet322 := TLineSetNode.Create;
LineSet322.SetVertexCount([2]);
Coordinate323 := TCoordinateNode.Create;
Coordinate323.SetPoint([Vector3(0.0841,0.0041,0.0121),Vector3(0.0841,0.0013,0.0216)]);
{ .SetCoord }
LineSet322.Coord := Coordinate323;
{ from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2 }
ColorRGBA324 := TColorRGBANode.Create;
ColorRGBA324 := ColorRGBA27;
{ .SetColor }
LineSet322.Color := ColorRGBA324;
{ .SetGeometry }
Shape321.Geometry := LineSet322;
{ .AddChildren }
HAnimSegment317.AddChildren([Shape321]);
{ .AddChildren }
HAnimJoint316.AddChildren([HAnimSegment317]);
HAnimJoint325 := THAnimJointNode.Create;
HAnimJoint325.NameField := 'l_tarsal_distal_interphalangeal_2';
HAnimJoint325.Center := Vector3(0.0841,0.0013,0.0216);
HAnimJoint325.SetUlimit([0,0,0]);
HAnimJoint325.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint316.AddChildren([HAnimJoint325]);
{ .AddChildren }
HAnimJoint307.AddChildren([HAnimJoint316]);
{ .AddChildren }
HAnimJoint298.AddChildren([HAnimJoint307]);
{ .AddChildren }
HAnimJoint289.AddChildren([HAnimJoint298]);
{ .AddChildren }
HAnimJoint237.AddChildren([HAnimJoint289]);
HAnimJoint326 := THAnimJointNode.Create;
HAnimJoint326.NameField := 'l_cuneonavicular_3';
HAnimJoint326.Center := Vector3(0.0928,0.0248,-0.0821);
HAnimJoint326.SetUlimit([0,0,0]);
HAnimJoint326.SetLlimit([0,0,0]);
HAnimSegment327 := THAnimSegmentNode.Create;
HAnimSegment327.NameField := 'l_cuneiform_3';
Transform328 := TTransformNode.Create;
Transform328.Translation := Vector3(0.0928,0.0248,-0.0821);
Transform329 := TTransformNode.Create;
{ Empty Transform }
Shape330 := TShapeNode.Create;
Shape330 := Shape20;
{ .AddChild }
Transform329.AddChildren([Shape330]);
{ .AddChildren }
Transform328.AddChildren([Transform329]);
{ .AddChildren }
HAnimSegment327.AddChildren([Transform328]);
Shape331 := TShapeNode.Create;
LineSet332 := TLineSetNode.Create;
LineSet332.SetVertexCount([2]);
Coordinate333 := TCoordinateNode.Create;
Coordinate333.SetPoint([Vector3(0.0928,0.0248,-0.0821),Vector3(0.0944,0.0175,-0.0625)]);
{ .SetCoord }
LineSet332.Coord := Coordinate333;
{ from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2 }
ColorRGBA334 := TColorRGBANode.Create;
ColorRGBA334 := ColorRGBA27;
{ .SetColor }
LineSet332.Color := ColorRGBA334;
{ .SetGeometry }
Shape331.Geometry := LineSet332;
{ .AddChildren }
HAnimSegment327.AddChildren([Shape331]);
{ .AddChildren }
HAnimJoint326.AddChildren([HAnimSegment327]);
HAnimJoint335 := THAnimJointNode.Create;
HAnimJoint335.NameField := 'l_tarsometatarsal_3';
HAnimJoint335.Center := Vector3(0.0944,0.0175,-0.0625);
HAnimJoint335.SetUlimit([0,0,0]);
HAnimJoint335.SetLlimit([0,0,0]);
HAnimSegment336 := THAnimSegmentNode.Create;
HAnimSegment336.NameField := 'l_metatarsal_3';
Transform337 := TTransformNode.Create;
Transform337.Translation := Vector3(0.0944,0.0175,-0.0625);
Transform338 := TTransformNode.Create;
{ Empty Transform }
Shape339 := TShapeNode.Create;
Shape339 := Shape20;
{ .AddChild }
Transform338.AddChildren([Shape339]);
{ .AddChildren }
Transform337.AddChildren([Transform338]);
{ .AddChildren }
HAnimSegment336.AddChildren([Transform337]);
Shape340 := TShapeNode.Create;
LineSet341 := TLineSetNode.Create;
LineSet341.SetVertexCount([2]);
Coordinate342 := TCoordinateNode.Create;
Coordinate342.SetPoint([Vector3(0.0944,0.0175,-0.0625),Vector3(0.0963,0.0065,-0.0065)]);
{ .SetCoord }
LineSet341.Coord := Coordinate342;
{ from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2 }
ColorRGBA343 := TColorRGBANode.Create;
ColorRGBA343 := ColorRGBA27;
{ .SetColor }
LineSet341.Color := ColorRGBA343;
{ .SetGeometry }
Shape340.Geometry := LineSet341;
{ .AddChildren }
HAnimSegment336.AddChildren([Shape340]);
{ .AddChildren }
HAnimJoint335.AddChildren([HAnimSegment336]);
HAnimJoint344 := THAnimJointNode.Create;
HAnimJoint344.NameField := 'l_metatarsophalangeal_3';
HAnimJoint344.Center := Vector3(0.0963,0.0065,-0.0065);
HAnimJoint344.SetUlimit([0,0,0]);
HAnimJoint344.SetLlimit([0,0,0]);
HAnimSegment345 := THAnimSegmentNode.Create;
HAnimSegment345.NameField := 'l_tarsal_proximal_phalanx_3';
Transform346 := TTransformNode.Create;
Transform346.Translation := Vector3(0.0963,0.0065,-0.0065);
Transform347 := TTransformNode.Create;
{ Empty Transform }
Shape348 := TShapeNode.Create;
Shape348 := Shape20;
{ .AddChild }
Transform347.AddChildren([Shape348]);
{ .AddChildren }
Transform346.AddChildren([Transform347]);
{ .AddChildren }
HAnimSegment345.AddChildren([Transform346]);
Shape349 := TShapeNode.Create;
LineSet350 := TLineSetNode.Create;
LineSet350.SetVertexCount([2]);
Coordinate351 := TCoordinateNode.Create;
Coordinate351.SetPoint([Vector3(0.0963,0.0065,-0.0065),Vector3(0.0987,0.0034,0.0086)]);
{ .SetCoord }
LineSet350.Coord := Coordinate351;
{ from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2 }
ColorRGBA352 := TColorRGBANode.Create;
ColorRGBA352 := ColorRGBA27;
{ .SetColor }
LineSet350.Color := ColorRGBA352;
{ .SetGeometry }
Shape349.Geometry := LineSet350;
{ .AddChildren }
HAnimSegment345.AddChildren([Shape349]);
{ .AddChildren }
HAnimJoint344.AddChildren([HAnimSegment345]);
HAnimJoint353 := THAnimJointNode.Create;
HAnimJoint353.NameField := 'l_tarsal_proximal_interphalangeal_3';
HAnimJoint353.Center := Vector3(0.0987,0.0034,0.0086);
HAnimJoint353.SetUlimit([0,0,0]);
HAnimJoint353.SetLlimit([0,0,0]);
HAnimSegment354 := THAnimSegmentNode.Create;
HAnimSegment354.NameField := 'l_tarsal_middle_phalanx_3';
Transform355 := TTransformNode.Create;
Transform355.Translation := Vector3(0.0987,0.0034,0.0086);
Transform356 := TTransformNode.Create;
{ Empty Transform }
Shape357 := TShapeNode.Create;
Shape357 := Shape20;
{ .AddChild }
Transform356.AddChildren([Shape357]);
{ .AddChildren }
Transform355.AddChildren([Transform356]);
{ .AddChildren }
HAnimSegment354.AddChildren([Transform355]);
Shape358 := TShapeNode.Create;
LineSet359 := TLineSetNode.Create;
LineSet359.SetVertexCount([2]);
Coordinate360 := TCoordinateNode.Create;
Coordinate360.SetPoint([Vector3(0.0987,0.0034,0.0086),Vector3(0.1002,0.0013,0.0178)]);
{ .SetCoord }
LineSet359.Coord := Coordinate360;
{ from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2 }
ColorRGBA361 := TColorRGBANode.Create;
ColorRGBA361 := ColorRGBA27;
{ .SetColor }
LineSet359.Color := ColorRGBA361;
{ .SetGeometry }
Shape358.Geometry := LineSet359;
{ .AddChildren }
HAnimSegment354.AddChildren([Shape358]);
{ .AddChildren }
HAnimJoint353.AddChildren([HAnimSegment354]);
HAnimJoint362 := THAnimJointNode.Create;
HAnimJoint362.NameField := 'l_tarsal_distal_interphalangeal_3';
HAnimJoint362.Center := Vector3(0.1002,0.0013,0.0178);
HAnimJoint362.SetUlimit([0,0,0]);
HAnimJoint362.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint353.AddChildren([HAnimJoint362]);
{ .AddChildren }
HAnimJoint344.AddChildren([HAnimJoint353]);
{ .AddChildren }
HAnimJoint335.AddChildren([HAnimJoint344]);
{ .AddChildren }
HAnimJoint326.AddChildren([HAnimJoint335]);
{ .AddChildren }
HAnimJoint237.AddChildren([HAnimJoint326]);
{ .AddChildren }
HAnimJoint210.AddChildren([HAnimJoint237]);
HAnimJoint363 := THAnimJointNode.Create;
HAnimJoint363.NameField := 'l_calcaneocuboid';
HAnimJoint363.Center := Vector3(0.0889,0.0494,-0.1278);
HAnimJoint363.SetUlimit([0,0,0]);
HAnimJoint363.SetLlimit([0,0,0]);
HAnimSegment364 := THAnimSegmentNode.Create;
HAnimSegment364.NameField := 'l_calcaneus';
Transform365 := TTransformNode.Create;
Transform365.Translation := Vector3(0.0889,0.0494,-0.1278);
Transform366 := TTransformNode.Create;
{ Empty Transform }
Shape367 := TShapeNode.Create;
Shape367 := Shape20;
{ .AddChild }
Transform366.AddChildren([Shape367]);
{ .AddChildren }
Transform365.AddChildren([Transform366]);
{ .AddChildren }
HAnimSegment364.AddChildren([Transform365]);
Shape368 := TShapeNode.Create;
LineSet369 := TLineSetNode.Create;
LineSet369.SetVertexCount([2]);
Coordinate370 := TCoordinateNode.Create;
Coordinate370.SetPoint([Vector3(0.0889,0.0494,-0.1278),Vector3(0.1105,0.0267,-0.0998)]);
{ .SetCoord }
LineSet369.Coord := Coordinate370;
{ from l_calcaneocuboid to l_transversetarsal vertices 2 }
ColorRGBA371 := TColorRGBANode.Create;
ColorRGBA371 := ColorRGBA27;
{ .SetColor }
LineSet369.Color := ColorRGBA371;
{ .SetGeometry }
Shape368.Geometry := LineSet369;
{ .AddChildren }
HAnimSegment364.AddChildren([Shape368]);
{ .AddChildren }
HAnimJoint363.AddChildren([HAnimSegment364]);
HAnimJoint372 := THAnimJointNode.Create;
HAnimJoint372.NameField := 'l_transversetarsal';
HAnimJoint372.Center := Vector3(0.1105,0.0267,-0.0998);
HAnimJoint372.SetUlimit([0,0,0]);
HAnimJoint372.SetLlimit([0,0,0]);
HAnimSegment373 := THAnimSegmentNode.Create;
HAnimSegment373.NameField := 'l_cuboid';
Transform374 := TTransformNode.Create;
Transform374.Translation := Vector3(0.1105,0.0267,-0.0998);
Transform375 := TTransformNode.Create;
{ Empty Transform }
Shape376 := TShapeNode.Create;
Shape376 := Shape20;
{ .AddChild }
Transform375.AddChildren([Shape376]);
{ .AddChildren }
Transform374.AddChildren([Transform375]);
{ .AddChildren }
HAnimSegment373.AddChildren([Transform374]);
Shape377 := TShapeNode.Create;
LineSet378 := TLineSetNode.Create;
LineSet378.SetVertexCount([2]);
Coordinate379 := TCoordinateNode.Create;
Coordinate379.SetPoint([Vector3(0.1105,0.0267,-0.0998),Vector3(0.1063,0.016,-0.0634)]);
{ .SetCoord }
LineSet378.Coord := Coordinate379;
{ from l_transversetarsal to l_tarsometatarsal_4 vertices 2 }
ColorRGBA380 := TColorRGBANode.Create;
ColorRGBA380 := ColorRGBA27;
{ .SetColor }
LineSet378.Color := ColorRGBA380;
{ .SetGeometry }
Shape377.Geometry := LineSet378;
{ .AddChildren }
HAnimSegment373.AddChildren([Shape377]);
Shape381 := TShapeNode.Create;
LineSet382 := TLineSetNode.Create;
LineSet382.SetVertexCount([2]);
Coordinate383 := TCoordinateNode.Create;
Coordinate383.SetPoint([Vector3(0.1105,0.0267,-0.0998),Vector3(0.1206,0.0124,-0.0671)]);
{ .SetCoord }
LineSet382.Coord := Coordinate383;
{ from l_transversetarsal to l_tarsometatarsal_5 vertices 2 }
ColorRGBA384 := TColorRGBANode.Create;
ColorRGBA384 := ColorRGBA27;
{ .SetColor }
LineSet382.Color := ColorRGBA384;
{ .SetGeometry }
Shape381.Geometry := LineSet382;
{ .AddChildren }
HAnimSegment373.AddChildren([Shape381]);
{ .AddChildren }
HAnimJoint372.AddChildren([HAnimSegment373]);
HAnimJoint385 := THAnimJointNode.Create;
HAnimJoint385.NameField := 'l_tarsometatarsal_4';
HAnimJoint385.Center := Vector3(0.1063,0.016,-0.0634);
HAnimJoint385.SetUlimit([0,0,0]);
HAnimJoint385.SetLlimit([0,0,0]);
HAnimSegment386 := THAnimSegmentNode.Create;
HAnimSegment386.NameField := 'l_metatarsal_4';
Transform387 := TTransformNode.Create;
Transform387.Translation := Vector3(0.1063,0.016,-0.0634);
Transform388 := TTransformNode.Create;
{ Empty Transform }
Shape389 := TShapeNode.Create;
Shape389 := Shape20;
{ .AddChild }
Transform388.AddChildren([Shape389]);
{ .AddChildren }
Transform387.AddChildren([Transform388]);
{ .AddChildren }
HAnimSegment386.AddChildren([Transform387]);
Shape390 := TShapeNode.Create;
LineSet391 := TLineSetNode.Create;
LineSet391.SetVertexCount([2]);
Coordinate392 := TCoordinateNode.Create;
Coordinate392.SetPoint([Vector3(0.1063,0.016,-0.0634),Vector3(0.1097,0.0058,-0.0107)]);
{ .SetCoord }
LineSet391.Coord := Coordinate392;
{ from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2 }
ColorRGBA393 := TColorRGBANode.Create;
ColorRGBA393 := ColorRGBA27;
{ .SetColor }
LineSet391.Color := ColorRGBA393;
{ .SetGeometry }
Shape390.Geometry := LineSet391;
{ .AddChildren }
HAnimSegment386.AddChildren([Shape390]);
{ .AddChildren }
HAnimJoint385.AddChildren([HAnimSegment386]);
HAnimJoint394 := THAnimJointNode.Create;
HAnimJoint394.NameField := 'l_metatarsophalangeal_4';
HAnimJoint394.Center := Vector3(0.1097,0.0058,-0.0107);
HAnimJoint394.SetUlimit([0,0,0]);
HAnimJoint394.SetLlimit([0,0,0]);
HAnimSegment395 := THAnimSegmentNode.Create;
HAnimSegment395.NameField := 'l_tarsal_proximal_phalanx_4';
Transform396 := TTransformNode.Create;
Transform396.Translation := Vector3(0.1097,0.0058,-0.0107);
Transform397 := TTransformNode.Create;
{ Empty Transform }
Shape398 := TShapeNode.Create;
Shape398 := Shape20;
{ .AddChild }
Transform397.AddChildren([Shape398]);
{ .AddChildren }
Transform396.AddChildren([Transform397]);
{ .AddChildren }
HAnimSegment395.AddChildren([Transform396]);
Shape399 := TShapeNode.Create;
LineSet400 := TLineSetNode.Create;
LineSet400.SetVertexCount([2]);
Coordinate401 := TCoordinateNode.Create;
Coordinate401.SetPoint([Vector3(0.1097,0.0058,-0.0107),Vector3(0.114,0.0037,0.0044)]);
{ .SetCoord }
LineSet400.Coord := Coordinate401;
{ from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2 }
ColorRGBA402 := TColorRGBANode.Create;
ColorRGBA402 := ColorRGBA27;
{ .SetColor }
LineSet400.Color := ColorRGBA402;
{ .SetGeometry }
Shape399.Geometry := LineSet400;
{ .AddChildren }
HAnimSegment395.AddChildren([Shape399]);
{ .AddChildren }
HAnimJoint394.AddChildren([HAnimSegment395]);
HAnimJoint403 := THAnimJointNode.Create;
HAnimJoint403.NameField := 'l_tarsal_proximal_interphalangeal_4';
HAnimJoint403.Center := Vector3(0.114,0.0037,0.0044);
HAnimJoint403.SetUlimit([0,0,0]);
HAnimJoint403.SetLlimit([0,0,0]);
HAnimSegment404 := THAnimSegmentNode.Create;
HAnimSegment404.NameField := 'l_tarsal_middle_phalanx_4';
Transform405 := TTransformNode.Create;
Transform405.Translation := Vector3(0.114,0.0037,0.0044);
Transform406 := TTransformNode.Create;
{ Empty Transform }
Shape407 := TShapeNode.Create;
Shape407 := Shape20;
{ .AddChild }
Transform406.AddChildren([Shape407]);
{ .AddChildren }
Transform405.AddChildren([Transform406]);
{ .AddChildren }
HAnimSegment404.AddChildren([Transform405]);
Shape408 := TShapeNode.Create;
LineSet409 := TLineSetNode.Create;
LineSet409.SetVertexCount([2]);
Coordinate410 := TCoordinateNode.Create;
Coordinate410.SetPoint([Vector3(0.114,0.0037,0.0044),Vector3(0.1155,0.0008,0.0118)]);
{ .SetCoord }
LineSet409.Coord := Coordinate410;
{ from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2 }
ColorRGBA411 := TColorRGBANode.Create;
ColorRGBA411 := ColorRGBA27;
{ .SetColor }
LineSet409.Color := ColorRGBA411;
{ .SetGeometry }
Shape408.Geometry := LineSet409;
{ .AddChildren }
HAnimSegment404.AddChildren([Shape408]);
{ .AddChildren }
HAnimJoint403.AddChildren([HAnimSegment404]);
HAnimJoint412 := THAnimJointNode.Create;
HAnimJoint412.NameField := 'l_tarsal_distal_interphalangeal_4';
HAnimJoint412.Center := Vector3(0.1155,0.0008,0.0118);
HAnimJoint412.SetUlimit([0,0,0]);
HAnimJoint412.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint403.AddChildren([HAnimJoint412]);
{ .AddChildren }
HAnimJoint394.AddChildren([HAnimJoint403]);
{ .AddChildren }
HAnimJoint385.AddChildren([HAnimJoint394]);
{ .AddChildren }
HAnimJoint372.AddChildren([HAnimJoint385]);
HAnimJoint413 := THAnimJointNode.Create;
HAnimJoint413.NameField := 'l_tarsometatarsal_5';
HAnimJoint413.Center := Vector3(0.1206,0.0124,-0.0671);
HAnimJoint413.SetUlimit([0,0,0]);
HAnimJoint413.SetLlimit([0,0,0]);
HAnimSegment414 := THAnimSegmentNode.Create;
HAnimSegment414.NameField := 'l_metatarsal_5';
Transform415 := TTransformNode.Create;
Transform415.Translation := Vector3(0.1206,0.0124,-0.0671);
Transform416 := TTransformNode.Create;
{ Empty Transform }
Shape417 := TShapeNode.Create;
Shape417 := Shape20;
{ .AddChild }
Transform416.AddChildren([Shape417]);
{ .AddChildren }
Transform415.AddChildren([Transform416]);
{ .AddChildren }
HAnimSegment414.AddChildren([Transform415]);
Shape418 := TShapeNode.Create;
LineSet419 := TLineSetNode.Create;
LineSet419.SetVertexCount([2]);
Coordinate420 := TCoordinateNode.Create;
Coordinate420.SetPoint([Vector3(0.1206,0.0124,-0.0671),Vector3(0.1239,0.0051,-0.0153)]);
{ .SetCoord }
LineSet419.Coord := Coordinate420;
{ from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2 }
ColorRGBA421 := TColorRGBANode.Create;
ColorRGBA421 := ColorRGBA27;
{ .SetColor }
LineSet419.Color := ColorRGBA421;
{ .SetGeometry }
Shape418.Geometry := LineSet419;
{ .AddChildren }
HAnimSegment414.AddChildren([Shape418]);
{ .AddChildren }
HAnimJoint413.AddChildren([HAnimSegment414]);
HAnimJoint422 := THAnimJointNode.Create;
HAnimJoint422.NameField := 'l_metatarsophalangeal_5';
HAnimJoint422.Center := Vector3(0.1239,0.0051,-0.0153);
HAnimJoint422.SetUlimit([0,0,0]);
HAnimJoint422.SetLlimit([0,0,0]);
HAnimSegment423 := THAnimSegmentNode.Create;
HAnimSegment423.NameField := 'l_tarsal_proximal_phalanx_5';
Transform424 := TTransformNode.Create;
Transform424.Translation := Vector3(0.1239,0.0051,-0.0153);
Transform425 := TTransformNode.Create;
{ Empty Transform }
Shape426 := TShapeNode.Create;
Shape426 := Shape20;
{ .AddChild }
Transform425.AddChildren([Shape426]);
{ .AddChildren }
Transform424.AddChildren([Transform425]);
{ .AddChildren }
HAnimSegment423.AddChildren([Transform424]);
Shape427 := TShapeNode.Create;
LineSet428 := TLineSetNode.Create;
LineSet428.SetVertexCount([2]);
Coordinate429 := TCoordinateNode.Create;
Coordinate429.SetPoint([Vector3(0.1239,0.0051,-0.0153),Vector3(0.1262,0.0023,-0.0077)]);
{ .SetCoord }
LineSet428.Coord := Coordinate429;
{ from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2 }
ColorRGBA430 := TColorRGBANode.Create;
ColorRGBA430 := ColorRGBA27;
{ .SetColor }
LineSet428.Color := ColorRGBA430;
{ .SetGeometry }
Shape427.Geometry := LineSet428;
{ .AddChildren }
HAnimSegment423.AddChildren([Shape427]);
HAnimSite431 := THAnimSiteNode.Create;
HAnimSite431.NameField := 'l_metatarsal_phalanx_5';
TouchSensor432 := TTouchSensorNode.Create;
TouchSensor432.Description := 'HAnimSite 56 l_metatarsal_phalanx_5';
{ .AddChildren }
HAnimSite431.AddChildren([TouchSensor432]);
Shape433 := TShapeNode.Create;
Shape433 := Shape30;
{ .AddChildren }
HAnimSite431.AddChildren([Shape433]);
Billboard434 := TBillboardNode.Create;
Shape435 := TShapeNode.Create;
Text436 := TTextNode.Create;
Text436.SetText(['56']);
FontStyle437 := TFontStyleNode.Create;
FontStyle437.Size := 0.035;
{ .SetFontStyle }
Text436.FontStyle := FontStyle437;
{ .SetGeometry }
Shape435.Geometry := Text436;
{ .AddChildren }
Billboard434.AddChildren([Shape435]);
{ .AddChildren }
HAnimSite431.AddChildren([Billboard434]);
{ .AddChildren }
HAnimSegment423.AddChildren([HAnimSite431]);
{ .AddChildren }
HAnimJoint422.AddChildren([HAnimSegment423]);
HAnimJoint438 := THAnimJointNode.Create;
HAnimJoint438.NameField := 'l_tarsal_proximal_interphalangeal_5';
HAnimJoint438.Center := Vector3(0.1262,0.0023,-0.0077);
HAnimJoint438.SetUlimit([0,0,0]);
HAnimJoint438.SetLlimit([0,0,0]);
HAnimSegment439 := THAnimSegmentNode.Create;
HAnimSegment439.NameField := 'l_tarsal_middle_phalanx_5';
Transform440 := TTransformNode.Create;
Transform440.Translation := Vector3(0.1262,0.0023,-0.0077);
Transform441 := TTransformNode.Create;
{ Empty Transform }
Shape442 := TShapeNode.Create;
Shape442 := Shape20;
{ .AddChild }
Transform441.AddChildren([Shape442]);
{ .AddChildren }
Transform440.AddChildren([Transform441]);
{ .AddChildren }
HAnimSegment439.AddChildren([Transform440]);
Shape443 := TShapeNode.Create;
LineSet444 := TLineSetNode.Create;
LineSet444.SetVertexCount([2]);
Coordinate445 := TCoordinateNode.Create;
Coordinate445.SetPoint([Vector3(0.1262,0.0023,-0.0077),Vector3(0.1271,0,0)]);
{ .SetCoord }
LineSet444.Coord := Coordinate445;
{ from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2 }
ColorRGBA446 := TColorRGBANode.Create;
ColorRGBA446 := ColorRGBA27;
{ .SetColor }
LineSet444.Color := ColorRGBA446;
{ .SetGeometry }
Shape443.Geometry := LineSet444;
{ .AddChildren }
HAnimSegment439.AddChildren([Shape443]);
{ .AddChildren }
HAnimJoint438.AddChildren([HAnimSegment439]);
HAnimJoint447 := THAnimJointNode.Create;
HAnimJoint447.NameField := 'l_tarsal_distal_interphalangeal_5';
HAnimJoint447.Center := Vector3(0.1271,0,0);
HAnimJoint447.SetUlimit([0,0,0]);
HAnimJoint447.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint438.AddChildren([HAnimJoint447]);
{ .AddChildren }
HAnimJoint422.AddChildren([HAnimJoint438]);
{ .AddChildren }
HAnimJoint413.AddChildren([HAnimJoint422]);
{ .AddChildren }
HAnimJoint372.AddChildren([HAnimJoint413]);
{ .AddChildren }
HAnimJoint363.AddChildren([HAnimJoint372]);
{ .AddChildren }
HAnimJoint210.AddChildren([HAnimJoint363]);
{ .AddChildren }
HAnimJoint180.AddChildren([HAnimJoint210]);
{ .AddChildren }
HAnimJoint143.AddChildren([HAnimJoint180]);
{ .AddChildren }
HAnimJoint60.AddChildren([HAnimJoint143]);
HAnimJoint448 := THAnimJointNode.Create;
HAnimJoint448.NameField := 'r_hip';
HAnimJoint448.Center := Vector3(-0.095,0.9171,0.0029);
HAnimJoint448.SetUlimit([0,0,0]);
HAnimJoint448.SetLlimit([0,0,0]);
HAnimSegment449 := THAnimSegmentNode.Create;
HAnimSegment449.NameField := 'r_thigh';
Transform450 := TTransformNode.Create;
Transform450.Translation := Vector3(-0.095,0.9171,0.0029);
Transform451 := TTransformNode.Create;
{ Empty Transform }
Shape452 := TShapeNode.Create;
Shape452 := Shape20;
{ .AddChild }
Transform451.AddChildren([Shape452]);
{ .AddChildren }
Transform450.AddChildren([Transform451]);
{ .AddChildren }
HAnimSegment449.AddChildren([Transform450]);
Shape453 := TShapeNode.Create;
LineSet454 := TLineSetNode.Create;
LineSet454.SetVertexCount([2]);
Coordinate455 := TCoordinateNode.Create;
Coordinate455.SetPoint([Vector3(-0.095,0.9171,0.0029),Vector3(-0.0867,0.4913,0.0318)]);
{ .SetCoord }
LineSet454.Coord := Coordinate455;
{ from r_hip to r_knee vertices 2 }
ColorRGBA456 := TColorRGBANode.Create;
ColorRGBA456 := ColorRGBA27;
{ .SetColor }
LineSet454.Color := ColorRGBA456;
{ .SetGeometry }
Shape453.Geometry := LineSet454;
{ .AddChildren }
HAnimSegment449.AddChildren([Shape453]);
HAnimSite457 := THAnimSiteNode.Create;
HAnimSite457.NameField := 'r_femoral_lateral_epicondyles';
HAnimSite457.Translation := Vector3(-0.1421,0.4992,0.031);
TouchSensor458 := TTouchSensorNode.Create;
TouchSensor458.Description := 'HAnimSite 44 r_femoral_lateral_epicondyles';
{ .AddChildren }
HAnimSite457.AddChildren([TouchSensor458]);
Shape459 := TShapeNode.Create;
Shape459 := Shape30;
{ .AddChildren }
HAnimSite457.AddChildren([Shape459]);
Billboard460 := TBillboardNode.Create;
Shape461 := TShapeNode.Create;
Text462 := TTextNode.Create;
Text462.SetText(['44']);
FontStyle463 := TFontStyleNode.Create;
FontStyle463.Size := 0.035;
{ .SetFontStyle }
Text462.FontStyle := FontStyle463;
{ .SetGeometry }
Shape461.Geometry := Text462;
{ .AddChildren }
Billboard460.AddChildren([Shape461]);
{ .AddChildren }
HAnimSite457.AddChildren([Billboard460]);
{ .AddChildren }
HAnimSegment449.AddChildren([HAnimSite457]);
HAnimSite464 := THAnimSiteNode.Create;
HAnimSite464.NameField := 'r_femoral_medial_epicondyles';
HAnimSite464.Translation := Vector3(-0.0221,0.5014,0.0289);
TouchSensor465 := TTouchSensorNode.Create;
TouchSensor465.Description := 'HAnimSite 43 r_femoral_medial_epicondyles';
{ .AddChildren }
HAnimSite464.AddChildren([TouchSensor465]);
Shape466 := TShapeNode.Create;
Shape466 := Shape30;
{ .AddChildren }
HAnimSite464.AddChildren([Shape466]);
Billboard467 := TBillboardNode.Create;
Shape468 := TShapeNode.Create;
Text469 := TTextNode.Create;
Text469.SetText(['43']);
FontStyle470 := TFontStyleNode.Create;
FontStyle470.Size := 0.035;
{ .SetFontStyle }
Text469.FontStyle := FontStyle470;
{ .SetGeometry }
Shape468.Geometry := Text469;
{ .AddChildren }
Billboard467.AddChildren([Shape468]);
{ .AddChildren }
HAnimSite464.AddChildren([Billboard467]);
{ .AddChildren }
HAnimSegment449.AddChildren([HAnimSite464]);
HAnimSite471 := THAnimSiteNode.Create;
HAnimSite471.NameField := 'r_knee_crease';
HAnimSite471.Translation := Vector3(-0.0825,0.4932,-0.0326);
TouchSensor472 := TTouchSensorNode.Create;
TouchSensor472.Description := 'HAnimSite 91 r_knee_crease';
{ .AddChildren }
HAnimSite471.AddChildren([TouchSensor472]);
Shape473 := TShapeNode.Create;
Shape473 := Shape30;
{ .AddChildren }
HAnimSite471.AddChildren([Shape473]);
Billboard474 := TBillboardNode.Create;
Shape475 := TShapeNode.Create;
Text476 := TTextNode.Create;
Text476.SetText(['91']);
FontStyle477 := TFontStyleNode.Create;
FontStyle477.Size := 0.035;
{ .SetFontStyle }
Text476.FontStyle := FontStyle477;
{ .SetGeometry }
Shape475.Geometry := Text476;
{ .AddChildren }
Billboard474.AddChildren([Shape475]);
{ .AddChildren }
HAnimSite471.AddChildren([Billboard474]);
{ .AddChildren }
HAnimSegment449.AddChildren([HAnimSite471]);
HAnimSite478 := THAnimSiteNode.Create;
HAnimSite478.NameField := 'r_suprapatella';
TouchSensor479 := TTouchSensorNode.Create;
TouchSensor479.Description := 'HAnimSite 45 r_suprapatella';
{ .AddChildren }
HAnimSite478.AddChildren([TouchSensor479]);
Shape480 := TShapeNode.Create;
Shape480 := Shape30;
{ .AddChildren }
HAnimSite478.AddChildren([Shape480]);
Billboard481 := TBillboardNode.Create;
Shape482 := TShapeNode.Create;
Text483 := TTextNode.Create;
Text483.SetText(['45']);
FontStyle484 := TFontStyleNode.Create;
FontStyle484.Size := 0.035;
{ .SetFontStyle }
Text483.FontStyle := FontStyle484;
{ .SetGeometry }
Shape482.Geometry := Text483;
{ .AddChildren }
Billboard481.AddChildren([Shape482]);
{ .AddChildren }
HAnimSite478.AddChildren([Billboard481]);
{ .AddChildren }
HAnimSegment449.AddChildren([HAnimSite478]);
{ .AddChildren }
HAnimJoint448.AddChildren([HAnimSegment449]);
HAnimJoint485 := THAnimJointNode.Create;
HAnimJoint485.NameField := 'r_knee';
HAnimJoint485.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimJoint485.SetUlimit([0,0,0]);
HAnimJoint485.SetLlimit([0,0,0]);
HAnimSegment486 := THAnimSegmentNode.Create;
HAnimSegment486.NameField := 'r_calf';
Transform487 := TTransformNode.Create;
Transform487.Translation := Vector3(-0.0867,0.4913,0.0318);
Transform488 := TTransformNode.Create;
{ Empty Transform }
Shape489 := TShapeNode.Create;
Shape489 := Shape20;
{ .AddChild }
Transform488.AddChildren([Shape489]);
{ .AddChildren }
Transform487.AddChildren([Transform488]);
{ .AddChildren }
HAnimSegment486.AddChildren([Transform487]);
Shape490 := TShapeNode.Create;
LineSet491 := TLineSetNode.Create;
LineSet491.SetVertexCount([2]);
Coordinate492 := TCoordinateNode.Create;
Coordinate492.SetPoint([Vector3(-0.0867,0.4913,0.0318),Vector3(-0.0801,0.0712,-0.0766)]);
{ .SetCoord }
LineSet491.Coord := Coordinate492;
{ from r_knee to r_talocrural vertices 2 }
ColorRGBA493 := TColorRGBANode.Create;
ColorRGBA493 := ColorRGBA27;
{ .SetColor }
LineSet491.Color := ColorRGBA493;
{ .SetGeometry }
Shape490.Geometry := LineSet491;
{ .AddChildren }
HAnimSegment486.AddChildren([Shape490]);
HAnimSite494 := THAnimSiteNode.Create;
HAnimSite494.NameField := 'r_lateral_malleolus';
HAnimSite494.Translation := Vector3(-0.1006,0.0658,-0.1075);
TouchSensor495 := TTouchSensorNode.Create;
TouchSensor495.Description := 'HAnimSite 53 r_lateral_malleolus';
{ .AddChildren }
HAnimSite494.AddChildren([TouchSensor495]);
Shape496 := TShapeNode.Create;
Shape496 := Shape30;
{ .AddChildren }
HAnimSite494.AddChildren([Shape496]);
Billboard497 := TBillboardNode.Create;
Shape498 := TShapeNode.Create;
Text499 := TTextNode.Create;
Text499.SetText(['53']);
FontStyle500 := TFontStyleNode.Create;
FontStyle500.Size := 0.035;
{ .SetFontStyle }
Text499.FontStyle := FontStyle500;
{ .SetGeometry }
Shape498.Geometry := Text499;
{ .AddChildren }
Billboard497.AddChildren([Shape498]);
{ .AddChildren }
HAnimSite494.AddChildren([Billboard497]);
{ .AddChildren }
HAnimSegment486.AddChildren([HAnimSite494]);
HAnimSite501 := THAnimSiteNode.Create;
HAnimSite501.NameField := 'r_medial_malleolus';
HAnimSite501.Translation := Vector3(-0.0591,0.076,-0.0928);
TouchSensor502 := TTouchSensorNode.Create;
TouchSensor502.Description := 'HAnimSite 52 r_medial_malleolus';
{ .AddChildren }
HAnimSite501.AddChildren([TouchSensor502]);
Shape503 := TShapeNode.Create;
Shape503 := Shape30;
{ .AddChildren }
HAnimSite501.AddChildren([Shape503]);
Billboard504 := TBillboardNode.Create;
Shape505 := TShapeNode.Create;
Text506 := TTextNode.Create;
Text506.SetText(['52']);
FontStyle507 := TFontStyleNode.Create;
FontStyle507.Size := 0.035;
{ .SetFontStyle }
Text506.FontStyle := FontStyle507;
{ .SetGeometry }
Shape505.Geometry := Text506;
{ .AddChildren }
Billboard504.AddChildren([Shape505]);
{ .AddChildren }
HAnimSite501.AddChildren([Billboard504]);
{ .AddChildren }
HAnimSegment486.AddChildren([HAnimSite501]);
HAnimSite508 := THAnimSiteNode.Create;
HAnimSite508.NameField := 'r_tibiale';
TouchSensor509 := TTouchSensorNode.Create;
TouchSensor509.Description := 'HAnimSite 51 r_tibiale';
{ .AddChildren }
HAnimSite508.AddChildren([TouchSensor509]);
Shape510 := TShapeNode.Create;
Shape510 := Shape30;
{ .AddChildren }
HAnimSite508.AddChildren([Shape510]);
Billboard511 := TBillboardNode.Create;
Shape512 := TShapeNode.Create;
Text513 := TTextNode.Create;
Text513.SetText(['51']);
FontStyle514 := TFontStyleNode.Create;
FontStyle514.Size := 0.035;
{ .SetFontStyle }
Text513.FontStyle := FontStyle514;
{ .SetGeometry }
Shape512.Geometry := Text513;
{ .AddChildren }
Billboard511.AddChildren([Shape512]);
{ .AddChildren }
HAnimSite508.AddChildren([Billboard511]);
{ .AddChildren }
HAnimSegment486.AddChildren([HAnimSite508]);
{ .AddChildren }
HAnimJoint485.AddChildren([HAnimSegment486]);
HAnimJoint515 := THAnimJointNode.Create;
HAnimJoint515.NameField := 'r_talocrural';
HAnimJoint515.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimJoint515.SetUlimit([0,0,0]);
HAnimJoint515.SetLlimit([0,0,0]);
HAnimSegment516 := THAnimSegmentNode.Create;
HAnimSegment516.NameField := 'r_talus';
Transform517 := TTransformNode.Create;
Transform517.Scale := Vector3(0.15,0.15,0.15);
Transform517.Translation := Vector3(-0.05,0.06,-0.025);
Transform517.Rotation := Vector4(1,0,0,-1.57);
{ Transform right foot }
Transform518 := TTransformNode.Create;
{ Empty Transform right foot }
Shape519 := TShapeNode.Create;
Shape519 := Shape20;
{ .AddChild }
Transform518.AddChildren([Shape519]);
{ .AddChildren }
Transform517.AddChildren([Transform518]);
{ .AddChildren }
HAnimSegment516.AddChildren([Transform517]);
Shape520 := TShapeNode.Create;
LineSet521 := TLineSetNode.Create;
LineSet521.SetVertexCount([2]);
Coordinate522 := TCoordinateNode.Create;
Coordinate522.SetPoint([Vector3(-0.0801,0.0712,-0.0766),Vector3(-0.0781,0.0283,-0.097)]);
{ .SetCoord }
LineSet521.Coord := Coordinate522;
{ from r_talocrural to r_talocalcaneonavicular vertices 2 }
ColorRGBA523 := TColorRGBANode.Create;
ColorRGBA523 := ColorRGBA27;
{ .SetColor }
LineSet521.Color := ColorRGBA523;
{ .SetGeometry }
Shape520.Geometry := LineSet521;
{ .AddChildren }
HAnimSegment516.AddChildren([Shape520]);
HAnimSite524 := THAnimSiteNode.Create;
HAnimSite524.NameField := 'r_calcaneus_posterior';
HAnimSite524.Translation := Vector3(-0.0692,0.0297,-0.1221);
TouchSensor525 := TTouchSensorNode.Create;
TouchSensor525.Description := 'HAnimSite 62 r_calcaneus_posterior';
{ .AddChildren }
HAnimSite524.AddChildren([TouchSensor525]);
Shape526 := TShapeNode.Create;
Shape526 := Shape30;
{ .AddChildren }
HAnimSite524.AddChildren([Shape526]);
Billboard527 := TBillboardNode.Create;
Shape528 := TShapeNode.Create;
Text529 := TTextNode.Create;
Text529.SetText(['62']);
FontStyle530 := TFontStyleNode.Create;
FontStyle530.Size := 0.035;
{ .SetFontStyle }
Text529.FontStyle := FontStyle530;
{ .SetGeometry }
Shape528.Geometry := Text529;
{ .AddChildren }
Billboard527.AddChildren([Shape528]);
{ .AddChildren }
HAnimSite524.AddChildren([Billboard527]);
{ .AddChildren }
HAnimSegment516.AddChildren([HAnimSite524]);
HAnimSite531 := THAnimSiteNode.Create;
HAnimSite531.NameField := 'r_sphyrion';
HAnimSite531.Translation := Vector3(-0.0603,0.061,-0.1002);
TouchSensor532 := TTouchSensorNode.Create;
TouchSensor532.Description := 'HAnimSite 54 r_sphyrion';
{ .AddChildren }
HAnimSite531.AddChildren([TouchSensor532]);
Shape533 := TShapeNode.Create;
Shape533 := Shape30;
{ .AddChildren }
HAnimSite531.AddChildren([Shape533]);
Billboard534 := TBillboardNode.Create;
Shape535 := TShapeNode.Create;
Text536 := TTextNode.Create;
Text536.SetText(['54']);
FontStyle537 := TFontStyleNode.Create;
FontStyle537.Size := 0.035;
{ .SetFontStyle }
Text536.FontStyle := FontStyle537;
{ .SetGeometry }
Shape535.Geometry := Text536;
{ .AddChildren }
Billboard534.AddChildren([Shape535]);
{ .AddChildren }
HAnimSite531.AddChildren([Billboard534]);
{ .AddChildren }
HAnimSegment516.AddChildren([HAnimSite531]);
Shape538 := TShapeNode.Create;
LineSet539 := TLineSetNode.Create;
LineSet539.SetVertexCount([2]);
Coordinate540 := TCoordinateNode.Create;
Coordinate540.SetPoint([Vector3(-0.0801,0.0712,-0.0766),Vector3(-0.0889,0.0494,-0.1278)]);
{ .SetCoord }
LineSet539.Coord := Coordinate540;
{ from r_talocrural to r_calcaneocuboid vertices 2 }
ColorRGBA541 := TColorRGBANode.Create;
ColorRGBA541 := ColorRGBA27;
{ .SetColor }
LineSet539.Color := ColorRGBA541;
{ .SetGeometry }
Shape538.Geometry := LineSet539;
{ .AddChildren }
HAnimSegment516.AddChildren([Shape538]);
{ .AddChildren }
HAnimJoint515.AddChildren([HAnimSegment516]);
HAnimJoint542 := THAnimJointNode.Create;
HAnimJoint542.NameField := 'r_talocalcaneonavicular';
HAnimJoint542.Center := Vector3(-0.0781,0.0283,-0.097);
HAnimJoint542.SetUlimit([0,0,0]);
HAnimJoint542.SetLlimit([0,0,0]);
HAnimSegment543 := THAnimSegmentNode.Create;
HAnimSegment543.NameField := 'r_navicular';
Transform544 := TTransformNode.Create;
Transform544.Translation := Vector3(-0.0781,0.0283,-0.097);
Transform545 := TTransformNode.Create;
{ Empty Transform }
Shape546 := TShapeNode.Create;
Shape546 := Shape20;
{ .AddChild }
Transform545.AddChildren([Shape546]);
{ .AddChildren }
Transform544.AddChildren([Transform545]);
{ .AddChildren }
HAnimSegment543.AddChildren([Transform544]);
Shape547 := TShapeNode.Create;
LineSet548 := TLineSetNode.Create;
LineSet548.SetVertexCount([2]);
Coordinate549 := TCoordinateNode.Create;
Coordinate549.SetPoint([Vector3(-0.0781,0.0283,-0.097),Vector3(-0.0672,0.0235,-0.0835)]);
{ .SetCoord }
LineSet548.Coord := Coordinate549;
{ from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2 }
ColorRGBA550 := TColorRGBANode.Create;
ColorRGBA550 := ColorRGBA27;
{ .SetColor }
LineSet548.Color := ColorRGBA550;
{ .SetGeometry }
Shape547.Geometry := LineSet548;
{ .AddChildren }
HAnimSegment543.AddChildren([Shape547]);
Shape551 := TShapeNode.Create;
LineSet552 := TLineSetNode.Create;
LineSet552.SetVertexCount([2]);
Coordinate553 := TCoordinateNode.Create;
Coordinate553.SetPoint([Vector3(-0.0781,0.0283,-0.097),Vector3(-0.0812,0.025,-0.0805)]);
{ .SetCoord }
LineSet552.Coord := Coordinate553;
{ from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2 }
ColorRGBA554 := TColorRGBANode.Create;
ColorRGBA554 := ColorRGBA27;
{ .SetColor }
LineSet552.Color := ColorRGBA554;
{ .SetGeometry }
Shape551.Geometry := LineSet552;
{ .AddChildren }
HAnimSegment543.AddChildren([Shape551]);
Shape555 := TShapeNode.Create;
LineSet556 := TLineSetNode.Create;
LineSet556.SetVertexCount([2]);
Coordinate557 := TCoordinateNode.Create;
Coordinate557.SetPoint([Vector3(-0.0781,0.0283,-0.097),Vector3(-0.0928,0.0248,-0.0821)]);
{ .SetCoord }
LineSet556.Coord := Coordinate557;
{ from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2 }
ColorRGBA558 := TColorRGBANode.Create;
ColorRGBA558 := ColorRGBA27;
{ .SetColor }
LineSet556.Color := ColorRGBA558;
{ .SetGeometry }
Shape555.Geometry := LineSet556;
{ .AddChildren }
HAnimSegment543.AddChildren([Shape555]);
{ .AddChildren }
HAnimJoint542.AddChildren([HAnimSegment543]);
HAnimJoint559 := THAnimJointNode.Create;
HAnimJoint559.NameField := 'r_cuneonavicular_1';
HAnimJoint559.Center := Vector3(-0.0672,0.0235,-0.0835);
HAnimJoint559.SetUlimit([0,0,0]);
HAnimJoint559.SetLlimit([0,0,0]);
HAnimSegment560 := THAnimSegmentNode.Create;
HAnimSegment560.NameField := 'r_cuneiform_1';
Transform561 := TTransformNode.Create;
Transform561.Translation := Vector3(-0.0672,0.0235,-0.0835);
Transform562 := TTransformNode.Create;
{ Empty Transform }
Shape563 := TShapeNode.Create;
Shape563 := Shape20;
{ .AddChild }
Transform562.AddChildren([Shape563]);
{ .AddChildren }
Transform561.AddChildren([Transform562]);
{ .AddChildren }
HAnimSegment560.AddChildren([Transform561]);
Shape564 := TShapeNode.Create;
LineSet565 := TLineSetNode.Create;
LineSet565.SetVertexCount([2]);
Coordinate566 := TCoordinateNode.Create;
Coordinate566.SetPoint([Vector3(-0.0672,0.0235,-0.0835),Vector3(-0.0644,0.0147,-0.0577)]);
{ .SetCoord }
LineSet565.Coord := Coordinate566;
{ from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2 }
ColorRGBA567 := TColorRGBANode.Create;
ColorRGBA567 := ColorRGBA27;
{ .SetColor }
LineSet565.Color := ColorRGBA567;
{ .SetGeometry }
Shape564.Geometry := LineSet565;
{ .AddChildren }
HAnimSegment560.AddChildren([Shape564]);
{ .AddChildren }
HAnimJoint559.AddChildren([HAnimSegment560]);
HAnimJoint568 := THAnimJointNode.Create;
HAnimJoint568.NameField := 'r_tarsometatarsal_1';
HAnimJoint568.Center := Vector3(-0.0644,0.0147,-0.0577);
HAnimJoint568.SetUlimit([0,0,0]);
HAnimJoint568.SetLlimit([0,0,0]);
HAnimSegment569 := THAnimSegmentNode.Create;
HAnimSegment569.NameField := 'r_metatarsal_1';
Transform570 := TTransformNode.Create;
Transform570.Translation := Vector3(-0.0644,0.0147,-0.0577);
Transform571 := TTransformNode.Create;
{ Empty Transform }
Shape572 := TShapeNode.Create;
Shape572 := Shape20;
{ .AddChild }
Transform571.AddChildren([Shape572]);
{ .AddChildren }
Transform570.AddChildren([Transform571]);
{ .AddChildren }
HAnimSegment569.AddChildren([Transform570]);
Shape573 := TShapeNode.Create;
LineSet574 := TLineSetNode.Create;
LineSet574.SetVertexCount([2]);
Coordinate575 := TCoordinateNode.Create;
Coordinate575.SetPoint([Vector3(-0.0644,0.0147,-0.0577),Vector3(-0.0619,0.0059,-0.0083)]);
{ .SetCoord }
LineSet574.Coord := Coordinate575;
{ from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2 }
ColorRGBA576 := TColorRGBANode.Create;
ColorRGBA576 := ColorRGBA27;
{ .SetColor }
LineSet574.Color := ColorRGBA576;
{ .SetGeometry }
Shape573.Geometry := LineSet574;
{ .AddChildren }
HAnimSegment569.AddChildren([Shape573]);
{ .AddChildren }
HAnimJoint568.AddChildren([HAnimSegment569]);
HAnimJoint577 := THAnimJointNode.Create;
HAnimJoint577.NameField := 'r_metatarsophalangeal_1';
HAnimJoint577.Center := Vector3(-0.0619,0.0059,-0.0083);
HAnimJoint577.SetUlimit([0,0,0]);
HAnimJoint577.SetLlimit([0,0,0]);
HAnimSegment578 := THAnimSegmentNode.Create;
HAnimSegment578.NameField := 'r_tarsal_proximal_phalanx_1';
Transform579 := TTransformNode.Create;
Transform579.Translation := Vector3(-0.0619,0.0059,-0.0083);
Transform580 := TTransformNode.Create;
{ Empty Transform }
Shape581 := TShapeNode.Create;
Shape581 := Shape20;
{ .AddChild }
Transform580.AddChildren([Shape581]);
{ .AddChildren }
Transform579.AddChildren([Transform580]);
{ .AddChildren }
HAnimSegment578.AddChildren([Transform579]);
Shape582 := TShapeNode.Create;
LineSet583 := TLineSetNode.Create;
LineSet583.SetVertexCount([2]);
Coordinate584 := TCoordinateNode.Create;
Coordinate584.SetPoint([Vector3(-0.0619,0.0059,-0.0083),Vector3(-0.0619,0.0059,-0.0083)]);
{ .SetCoord }
LineSet583.Coord := Coordinate584;
{ from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2 }
ColorRGBA585 := TColorRGBANode.Create;
ColorRGBA585 := ColorRGBA27;
{ .SetColor }
LineSet583.Color := ColorRGBA585;
{ .SetGeometry }
Shape582.Geometry := LineSet583;
{ .AddChildren }
HAnimSegment578.AddChildren([Shape582]);
HAnimSite586 := THAnimSiteNode.Create;
HAnimSite586.NameField := 'r_metatarsal_phalanx_1';
TouchSensor587 := TTouchSensorNode.Create;
TouchSensor587.Description := 'HAnimSite 59 r_metatarsal_phalanx_1';
{ .AddChildren }
HAnimSite586.AddChildren([TouchSensor587]);
Shape588 := TShapeNode.Create;
Shape588 := Shape30;
{ .AddChildren }
HAnimSite586.AddChildren([Shape588]);
Billboard589 := TBillboardNode.Create;
Shape590 := TShapeNode.Create;
Text591 := TTextNode.Create;
Text591.SetText(['59']);
FontStyle592 := TFontStyleNode.Create;
FontStyle592.Size := 0.035;
{ .SetFontStyle }
Text591.FontStyle := FontStyle592;
{ .SetGeometry }
Shape590.Geometry := Text591;
{ .AddChildren }
Billboard589.AddChildren([Shape590]);
{ .AddChildren }
HAnimSite586.AddChildren([Billboard589]);
{ .AddChildren }
HAnimSegment578.AddChildren([HAnimSite586]);
{ .AddChildren }
HAnimJoint577.AddChildren([HAnimSegment578]);
HAnimJoint593 := THAnimJointNode.Create;
HAnimJoint593.NameField := 'r_tarsal_interphalangeal_1';
HAnimJoint593.SetUlimit([0,0,0]);
HAnimJoint593.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint577.AddChildren([HAnimJoint593]);
{ .AddChildren }
HAnimJoint568.AddChildren([HAnimJoint577]);
{ .AddChildren }
HAnimJoint559.AddChildren([HAnimJoint568]);
{ .AddChildren }
HAnimJoint542.AddChildren([HAnimJoint559]);
HAnimJoint594 := THAnimJointNode.Create;
HAnimJoint594.NameField := 'r_cuneonavicular_2';
HAnimJoint594.Center := Vector3(-0.0812,0.025,-0.0805);
HAnimJoint594.SetUlimit([0,0,0]);
HAnimJoint594.SetLlimit([0,0,0]);
HAnimSegment595 := THAnimSegmentNode.Create;
HAnimSegment595.NameField := 'r_cuneiform_2';
Transform596 := TTransformNode.Create;
Transform596.Translation := Vector3(-0.0812,0.025,-0.0805);
Transform597 := TTransformNode.Create;
{ Empty Transform }
Shape598 := TShapeNode.Create;
Shape598 := Shape20;
{ .AddChild }
Transform597.AddChildren([Shape598]);
{ .AddChildren }
Transform596.AddChildren([Transform597]);
{ .AddChildren }
HAnimSegment595.AddChildren([Transform596]);
Shape599 := TShapeNode.Create;
LineSet600 := TLineSetNode.Create;
LineSet600.SetVertexCount([2]);
Coordinate601 := TCoordinateNode.Create;
Coordinate601.SetPoint([Vector3(-0.0812,0.025,-0.0805),Vector3(-0.08,0.0175,-0.0608)]);
{ .SetCoord }
LineSet600.Coord := Coordinate601;
{ from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2 }
ColorRGBA602 := TColorRGBANode.Create;
ColorRGBA602 := ColorRGBA27;
{ .SetColor }
LineSet600.Color := ColorRGBA602;
{ .SetGeometry }
Shape599.Geometry := LineSet600;
{ .AddChildren }
HAnimSegment595.AddChildren([Shape599]);
{ .AddChildren }
HAnimJoint594.AddChildren([HAnimSegment595]);
HAnimJoint603 := THAnimJointNode.Create;
HAnimJoint603.NameField := 'r_tarsometatarsal_2';
HAnimJoint603.Center := Vector3(-0.08,0.0175,-0.0608);
HAnimJoint603.SetUlimit([0,0,0]);
HAnimJoint603.SetLlimit([0,0,0]);
HAnimSegment604 := THAnimSegmentNode.Create;
HAnimSegment604.NameField := 'r_metatarsal_2';
Transform605 := TTransformNode.Create;
Transform605.Translation := Vector3(-0.08,0.0175,-0.0608);
Transform606 := TTransformNode.Create;
{ Empty Transform }
Shape607 := TShapeNode.Create;
Shape607 := Shape20;
{ .AddChild }
Transform606.AddChildren([Shape607]);
{ .AddChildren }
Transform605.AddChildren([Transform606]);
{ .AddChildren }
HAnimSegment604.AddChildren([Transform605]);
Shape608 := TShapeNode.Create;
LineSet609 := TLineSetNode.Create;
LineSet609.SetVertexCount([2]);
Coordinate610 := TCoordinateNode.Create;
Coordinate610.SetPoint([Vector3(-0.08,0.0175,-0.0608),Vector3(-0.0823,0.0064,-0.004)]);
{ .SetCoord }
LineSet609.Coord := Coordinate610;
{ from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2 }
ColorRGBA611 := TColorRGBANode.Create;
ColorRGBA611 := ColorRGBA27;
{ .SetColor }
LineSet609.Color := ColorRGBA611;
{ .SetGeometry }
Shape608.Geometry := LineSet609;
{ .AddChildren }
HAnimSegment604.AddChildren([Shape608]);
{ .AddChildren }
HAnimJoint603.AddChildren([HAnimSegment604]);
HAnimJoint612 := THAnimJointNode.Create;
HAnimJoint612.NameField := 'r_metatarsophalangeal_2';
HAnimJoint612.Center := Vector3(-0.0823,0.0064,-0.004);
HAnimJoint612.SetUlimit([0,0,0]);
HAnimJoint612.SetLlimit([0,0,0]);
HAnimSegment613 := THAnimSegmentNode.Create;
HAnimSegment613.NameField := 'r_tarsal_proximal_phalanx_2';
Transform614 := TTransformNode.Create;
Transform614.Translation := Vector3(-0.0823,0.0064,-0.004);
Transform615 := TTransformNode.Create;
{ Empty Transform }
Shape616 := TShapeNode.Create;
Shape616 := Shape20;
{ .AddChild }
Transform615.AddChildren([Shape616]);
{ .AddChildren }
Transform614.AddChildren([Transform615]);
{ .AddChildren }
HAnimSegment613.AddChildren([Transform614]);
Shape617 := TShapeNode.Create;
LineSet618 := TLineSetNode.Create;
LineSet618.SetVertexCount([2]);
Coordinate619 := TCoordinateNode.Create;
Coordinate619.SetPoint([Vector3(-0.0823,0.0064,-0.004),Vector3(-0.0841,0.0041,0.0121)]);
{ .SetCoord }
LineSet618.Coord := Coordinate619;
{ from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2 }
ColorRGBA620 := TColorRGBANode.Create;
ColorRGBA620 := ColorRGBA27;
{ .SetColor }
LineSet618.Color := ColorRGBA620;
{ .SetGeometry }
Shape617.Geometry := LineSet618;
{ .AddChildren }
HAnimSegment613.AddChildren([Shape617]);
{ .AddChildren }
HAnimJoint612.AddChildren([HAnimSegment613]);
HAnimJoint621 := THAnimJointNode.Create;
HAnimJoint621.NameField := 'r_tarsal_proximal_interphalangeal_2';
HAnimJoint621.Center := Vector3(-0.0841,0.0041,0.0121);
HAnimJoint621.SetUlimit([0,0,0]);
HAnimJoint621.SetLlimit([0,0,0]);
HAnimSegment622 := THAnimSegmentNode.Create;
HAnimSegment622.NameField := 'r_tarsal_middle_phalanx_2';
Transform623 := TTransformNode.Create;
Transform623.Translation := Vector3(-0.0841,0.0041,0.0121);
Transform624 := TTransformNode.Create;
{ Empty Transform }
Shape625 := TShapeNode.Create;
Shape625 := Shape20;
{ .AddChild }
Transform624.AddChildren([Shape625]);
{ .AddChildren }
Transform623.AddChildren([Transform624]);
{ .AddChildren }
HAnimSegment622.AddChildren([Transform623]);
Shape626 := TShapeNode.Create;
LineSet627 := TLineSetNode.Create;
LineSet627.SetVertexCount([2]);
Coordinate628 := TCoordinateNode.Create;
Coordinate628.SetPoint([Vector3(-0.0841,0.0041,0.0121),Vector3(-0.0841,0.0013,0.0216)]);
{ .SetCoord }
LineSet627.Coord := Coordinate628;
{ from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2 }
ColorRGBA629 := TColorRGBANode.Create;
ColorRGBA629 := ColorRGBA27;
{ .SetColor }
LineSet627.Color := ColorRGBA629;
{ .SetGeometry }
Shape626.Geometry := LineSet627;
{ .AddChildren }
HAnimSegment622.AddChildren([Shape626]);
{ .AddChildren }
HAnimJoint621.AddChildren([HAnimSegment622]);
HAnimJoint630 := THAnimJointNode.Create;
HAnimJoint630.NameField := 'r_tarsal_distal_interphalangeal_2';
HAnimJoint630.Center := Vector3(-0.0841,0.0013,0.0216);
HAnimJoint630.SetUlimit([0,0,0]);
HAnimJoint630.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint621.AddChildren([HAnimJoint630]);
{ .AddChildren }
HAnimJoint612.AddChildren([HAnimJoint621]);
{ .AddChildren }
HAnimJoint603.AddChildren([HAnimJoint612]);
{ .AddChildren }
HAnimJoint594.AddChildren([HAnimJoint603]);
{ .AddChildren }
HAnimJoint542.AddChildren([HAnimJoint594]);
HAnimJoint631 := THAnimJointNode.Create;
HAnimJoint631.NameField := 'r_cuneonavicular_3';
HAnimJoint631.Center := Vector3(-0.0928,0.0248,-0.0821);
HAnimJoint631.SetUlimit([0,0,0]);
HAnimJoint631.SetLlimit([0,0,0]);
HAnimSegment632 := THAnimSegmentNode.Create;
HAnimSegment632.NameField := 'r_cuneiform_3';
Transform633 := TTransformNode.Create;
Transform633.Translation := Vector3(-0.0928,0.0248,-0.0821);
Transform634 := TTransformNode.Create;
{ Empty Transform }
Shape635 := TShapeNode.Create;
Shape635 := Shape20;
{ .AddChild }
Transform634.AddChildren([Shape635]);
{ .AddChildren }
Transform633.AddChildren([Transform634]);
{ .AddChildren }
HAnimSegment632.AddChildren([Transform633]);
Shape636 := TShapeNode.Create;
LineSet637 := TLineSetNode.Create;
LineSet637.SetVertexCount([2]);
Coordinate638 := TCoordinateNode.Create;
Coordinate638.SetPoint([Vector3(-0.0928,0.0248,-0.0821),Vector3(-0.0944,0.0175,-0.0625)]);
{ .SetCoord }
LineSet637.Coord := Coordinate638;
{ from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2 }
ColorRGBA639 := TColorRGBANode.Create;
ColorRGBA639 := ColorRGBA27;
{ .SetColor }
LineSet637.Color := ColorRGBA639;
{ .SetGeometry }
Shape636.Geometry := LineSet637;
{ .AddChildren }
HAnimSegment632.AddChildren([Shape636]);
{ .AddChildren }
HAnimJoint631.AddChildren([HAnimSegment632]);
HAnimJoint640 := THAnimJointNode.Create;
HAnimJoint640.NameField := 'r_tarsometatarsal_3';
HAnimJoint640.Center := Vector3(-0.0944,0.0175,-0.0625);
HAnimJoint640.SetUlimit([0,0,0]);
HAnimJoint640.SetLlimit([0,0,0]);
HAnimSegment641 := THAnimSegmentNode.Create;
HAnimSegment641.NameField := 'r_metatarsal_3';
Transform642 := TTransformNode.Create;
Transform642.Translation := Vector3(-0.0944,0.0175,-0.0625);
Transform643 := TTransformNode.Create;
{ Empty Transform }
Shape644 := TShapeNode.Create;
Shape644 := Shape20;
{ .AddChild }
Transform643.AddChildren([Shape644]);
{ .AddChildren }
Transform642.AddChildren([Transform643]);
{ .AddChildren }
HAnimSegment641.AddChildren([Transform642]);
Shape645 := TShapeNode.Create;
LineSet646 := TLineSetNode.Create;
LineSet646.SetVertexCount([2]);
Coordinate647 := TCoordinateNode.Create;
Coordinate647.SetPoint([Vector3(-0.0944,0.0175,-0.0625),Vector3(-0.0963,0.0065,-0.0065)]);
{ .SetCoord }
LineSet646.Coord := Coordinate647;
{ from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2 }
ColorRGBA648 := TColorRGBANode.Create;
ColorRGBA648 := ColorRGBA27;
{ .SetColor }
LineSet646.Color := ColorRGBA648;
{ .SetGeometry }
Shape645.Geometry := LineSet646;
{ .AddChildren }
HAnimSegment641.AddChildren([Shape645]);
{ .AddChildren }
HAnimJoint640.AddChildren([HAnimSegment641]);
HAnimJoint649 := THAnimJointNode.Create;
HAnimJoint649.NameField := 'r_metatarsophalangeal_3';
HAnimJoint649.Center := Vector3(-0.0963,0.0065,-0.0065);
HAnimJoint649.SetUlimit([0,0,0]);
HAnimJoint649.SetLlimit([0,0,0]);
HAnimSegment650 := THAnimSegmentNode.Create;
HAnimSegment650.NameField := 'r_tarsal_proximal_phalanx_3';
Transform651 := TTransformNode.Create;
Transform651.Translation := Vector3(-0.0963,0.0065,-0.0065);
Transform652 := TTransformNode.Create;
{ Empty Transform }
Shape653 := TShapeNode.Create;
Shape653 := Shape20;
{ .AddChild }
Transform652.AddChildren([Shape653]);
{ .AddChildren }
Transform651.AddChildren([Transform652]);
{ .AddChildren }
HAnimSegment650.AddChildren([Transform651]);
Shape654 := TShapeNode.Create;
LineSet655 := TLineSetNode.Create;
LineSet655.SetVertexCount([2]);
Coordinate656 := TCoordinateNode.Create;
Coordinate656.SetPoint([Vector3(-0.0963,0.0065,-0.0065),Vector3(-0.0987,0.0034,0.0086)]);
{ .SetCoord }
LineSet655.Coord := Coordinate656;
{ from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2 }
ColorRGBA657 := TColorRGBANode.Create;
ColorRGBA657 := ColorRGBA27;
{ .SetColor }
LineSet655.Color := ColorRGBA657;
{ .SetGeometry }
Shape654.Geometry := LineSet655;
{ .AddChildren }
HAnimSegment650.AddChildren([Shape654]);
{ .AddChildren }
HAnimJoint649.AddChildren([HAnimSegment650]);
HAnimJoint658 := THAnimJointNode.Create;
HAnimJoint658.NameField := 'r_tarsal_proximal_interphalangeal_3';
HAnimJoint658.Center := Vector3(-0.0987,0.0034,0.0086);
HAnimJoint658.SetUlimit([0,0,0]);
HAnimJoint658.SetLlimit([0,0,0]);
HAnimSegment659 := THAnimSegmentNode.Create;
HAnimSegment659.NameField := 'r_tarsal_middle_phalanx_3';
Transform660 := TTransformNode.Create;
Transform660.Translation := Vector3(-0.0987,0.0034,0.0086);
Transform661 := TTransformNode.Create;
{ Empty Transform }
Shape662 := TShapeNode.Create;
Shape662 := Shape20;
{ .AddChild }
Transform661.AddChildren([Shape662]);
{ .AddChildren }
Transform660.AddChildren([Transform661]);
{ .AddChildren }
HAnimSegment659.AddChildren([Transform660]);
Shape663 := TShapeNode.Create;
LineSet664 := TLineSetNode.Create;
LineSet664.SetVertexCount([2]);
Coordinate665 := TCoordinateNode.Create;
Coordinate665.SetPoint([Vector3(-0.0987,0.0034,0.0086),Vector3(-0.1002,0.0013,0.0178)]);
{ .SetCoord }
LineSet664.Coord := Coordinate665;
{ from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2 }
ColorRGBA666 := TColorRGBANode.Create;
ColorRGBA666 := ColorRGBA27;
{ .SetColor }
LineSet664.Color := ColorRGBA666;
{ .SetGeometry }
Shape663.Geometry := LineSet664;
{ .AddChildren }
HAnimSegment659.AddChildren([Shape663]);
{ .AddChildren }
HAnimJoint658.AddChildren([HAnimSegment659]);
HAnimJoint667 := THAnimJointNode.Create;
HAnimJoint667.NameField := 'r_tarsal_distal_interphalangeal_3';
HAnimJoint667.Center := Vector3(-0.1002,0.0013,0.0178);
HAnimJoint667.SetUlimit([0,0,0]);
HAnimJoint667.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint658.AddChildren([HAnimJoint667]);
{ .AddChildren }
HAnimJoint649.AddChildren([HAnimJoint658]);
{ .AddChildren }
HAnimJoint640.AddChildren([HAnimJoint649]);
{ .AddChildren }
HAnimJoint631.AddChildren([HAnimJoint640]);
{ .AddChildren }
HAnimJoint542.AddChildren([HAnimJoint631]);
{ .AddChildren }
HAnimJoint515.AddChildren([HAnimJoint542]);
HAnimJoint668 := THAnimJointNode.Create;
HAnimJoint668.NameField := 'r_calcaneocuboid';
HAnimJoint668.Center := Vector3(-0.0889,0.0494,-0.1278);
HAnimJoint668.SetUlimit([0,0,0]);
HAnimJoint668.SetLlimit([0,0,0]);
HAnimSegment669 := THAnimSegmentNode.Create;
HAnimSegment669.NameField := 'r_calcaneus';
Transform670 := TTransformNode.Create;
Transform670.Translation := Vector3(-0.0889,0.0494,-0.1278);
Transform671 := TTransformNode.Create;
{ Empty Transform }
Shape672 := TShapeNode.Create;
Shape672 := Shape20;
{ .AddChild }
Transform671.AddChildren([Shape672]);
{ .AddChildren }
Transform670.AddChildren([Transform671]);
{ .AddChildren }
HAnimSegment669.AddChildren([Transform670]);
Shape673 := TShapeNode.Create;
LineSet674 := TLineSetNode.Create;
LineSet674.SetVertexCount([2]);
Coordinate675 := TCoordinateNode.Create;
Coordinate675.SetPoint([Vector3(-0.0889,0.0494,-0.1278),Vector3(-0.1105,0.0267,-0.0998)]);
{ .SetCoord }
LineSet674.Coord := Coordinate675;
{ from r_calcaneocuboid to r_transversetarsal vertices 2 }
ColorRGBA676 := TColorRGBANode.Create;
ColorRGBA676 := ColorRGBA27;
{ .SetColor }
LineSet674.Color := ColorRGBA676;
{ .SetGeometry }
Shape673.Geometry := LineSet674;
{ .AddChildren }
HAnimSegment669.AddChildren([Shape673]);
{ .AddChildren }
HAnimJoint668.AddChildren([HAnimSegment669]);
HAnimJoint677 := THAnimJointNode.Create;
HAnimJoint677.NameField := 'r_transversetarsal';
HAnimJoint677.Center := Vector3(-0.1105,0.0267,-0.0998);
HAnimJoint677.SetUlimit([0,0,0]);
HAnimJoint677.SetLlimit([0,0,0]);
HAnimSegment678 := THAnimSegmentNode.Create;
HAnimSegment678.NameField := 'r_cuboid';
Transform679 := TTransformNode.Create;
Transform679.Translation := Vector3(-0.1105,0.0267,-0.0998);
Transform680 := TTransformNode.Create;
{ Empty Transform }
Shape681 := TShapeNode.Create;
Shape681 := Shape20;
{ .AddChild }
Transform680.AddChildren([Shape681]);
{ .AddChildren }
Transform679.AddChildren([Transform680]);
{ .AddChildren }
HAnimSegment678.AddChildren([Transform679]);
Shape682 := TShapeNode.Create;
LineSet683 := TLineSetNode.Create;
LineSet683.SetVertexCount([2]);
Coordinate684 := TCoordinateNode.Create;
Coordinate684.SetPoint([Vector3(-0.1105,0.0267,-0.0998),Vector3(-0.1063,0.016,-0.0634)]);
{ .SetCoord }
LineSet683.Coord := Coordinate684;
{ from r_transversetarsal to r_tarsometatarsal_4 vertices 2 }
ColorRGBA685 := TColorRGBANode.Create;
ColorRGBA685 := ColorRGBA27;
{ .SetColor }
LineSet683.Color := ColorRGBA685;
{ .SetGeometry }
Shape682.Geometry := LineSet683;
{ .AddChildren }
HAnimSegment678.AddChildren([Shape682]);
Shape686 := TShapeNode.Create;
LineSet687 := TLineSetNode.Create;
LineSet687.SetVertexCount([2]);
Coordinate688 := TCoordinateNode.Create;
Coordinate688.SetPoint([Vector3(-0.1105,0.0267,-0.0998),Vector3(-0.1206,0.0124,-0.0671)]);
{ .SetCoord }
LineSet687.Coord := Coordinate688;
{ from r_transversetarsal to r_tarsometatarsal_5 vertices 2 }
ColorRGBA689 := TColorRGBANode.Create;
ColorRGBA689 := ColorRGBA27;
{ .SetColor }
LineSet687.Color := ColorRGBA689;
{ .SetGeometry }
Shape686.Geometry := LineSet687;
{ .AddChildren }
HAnimSegment678.AddChildren([Shape686]);
{ .AddChildren }
HAnimJoint677.AddChildren([HAnimSegment678]);
HAnimJoint690 := THAnimJointNode.Create;
HAnimJoint690.NameField := 'r_tarsometatarsal_4';
HAnimJoint690.Center := Vector3(-0.1063,0.016,-0.0634);
HAnimJoint690.SetUlimit([0,0,0]);
HAnimJoint690.SetLlimit([0,0,0]);
HAnimSegment691 := THAnimSegmentNode.Create;
HAnimSegment691.NameField := 'r_metatarsal_4';
Transform692 := TTransformNode.Create;
Transform692.Translation := Vector3(-0.1063,0.016,-0.0634);
Transform693 := TTransformNode.Create;
{ Empty Transform }
Shape694 := TShapeNode.Create;
Shape694 := Shape20;
{ .AddChild }
Transform693.AddChildren([Shape694]);
{ .AddChildren }
Transform692.AddChildren([Transform693]);
{ .AddChildren }
HAnimSegment691.AddChildren([Transform692]);
Shape695 := TShapeNode.Create;
LineSet696 := TLineSetNode.Create;
LineSet696.SetVertexCount([2]);
Coordinate697 := TCoordinateNode.Create;
Coordinate697.SetPoint([Vector3(-0.1063,0.016,-0.0634),Vector3(-0.1097,0.0058,-0.0107)]);
{ .SetCoord }
LineSet696.Coord := Coordinate697;
{ from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2 }
ColorRGBA698 := TColorRGBANode.Create;
ColorRGBA698 := ColorRGBA27;
{ .SetColor }
LineSet696.Color := ColorRGBA698;
{ .SetGeometry }
Shape695.Geometry := LineSet696;
{ .AddChildren }
HAnimSegment691.AddChildren([Shape695]);
{ .AddChildren }
HAnimJoint690.AddChildren([HAnimSegment691]);
HAnimJoint699 := THAnimJointNode.Create;
HAnimJoint699.NameField := 'r_metatarsophalangeal_4';
HAnimJoint699.Center := Vector3(-0.1097,0.0058,-0.0107);
HAnimJoint699.SetUlimit([0,0,0]);
HAnimJoint699.SetLlimit([0,0,0]);
HAnimSegment700 := THAnimSegmentNode.Create;
HAnimSegment700.NameField := 'r_tarsal_proximal_phalanx_4';
Transform701 := TTransformNode.Create;
Transform701.Translation := Vector3(-0.1097,0.0058,-0.0107);
Transform702 := TTransformNode.Create;
{ Empty Transform }
Shape703 := TShapeNode.Create;
Shape703 := Shape20;
{ .AddChild }
Transform702.AddChildren([Shape703]);
{ .AddChildren }
Transform701.AddChildren([Transform702]);
{ .AddChildren }
HAnimSegment700.AddChildren([Transform701]);
Shape704 := TShapeNode.Create;
LineSet705 := TLineSetNode.Create;
LineSet705.SetVertexCount([2]);
Coordinate706 := TCoordinateNode.Create;
Coordinate706.SetPoint([Vector3(-0.1097,0.0058,-0.0107),Vector3(-0.114,0.0037,0.0044)]);
{ .SetCoord }
LineSet705.Coord := Coordinate706;
{ from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2 }
ColorRGBA707 := TColorRGBANode.Create;
ColorRGBA707 := ColorRGBA27;
{ .SetColor }
LineSet705.Color := ColorRGBA707;
{ .SetGeometry }
Shape704.Geometry := LineSet705;
{ .AddChildren }
HAnimSegment700.AddChildren([Shape704]);
{ .AddChildren }
HAnimJoint699.AddChildren([HAnimSegment700]);
HAnimJoint708 := THAnimJointNode.Create;
HAnimJoint708.NameField := 'r_tarsal_proximal_interphalangeal_4';
HAnimJoint708.Center := Vector3(-0.114,0.0037,0.0044);
HAnimJoint708.SetUlimit([0,0,0]);
HAnimJoint708.SetLlimit([0,0,0]);
HAnimSegment709 := THAnimSegmentNode.Create;
HAnimSegment709.NameField := 'r_tarsal_middle_phalanx_4';
Transform710 := TTransformNode.Create;
Transform710.Translation := Vector3(-0.114,0.0037,0.0044);
Transform711 := TTransformNode.Create;
{ Empty Transform }
Shape712 := TShapeNode.Create;
Shape712 := Shape20;
{ .AddChild }
Transform711.AddChildren([Shape712]);
{ .AddChildren }
Transform710.AddChildren([Transform711]);
{ .AddChildren }
HAnimSegment709.AddChildren([Transform710]);
Shape713 := TShapeNode.Create;
LineSet714 := TLineSetNode.Create;
LineSet714.SetVertexCount([2]);
Coordinate715 := TCoordinateNode.Create;
Coordinate715.SetPoint([Vector3(-0.114,0.0037,0.0044),Vector3(-0.1155,0.0008,0.0118)]);
{ .SetCoord }
LineSet714.Coord := Coordinate715;
{ from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2 }
ColorRGBA716 := TColorRGBANode.Create;
ColorRGBA716 := ColorRGBA27;
{ .SetColor }
LineSet714.Color := ColorRGBA716;
{ .SetGeometry }
Shape713.Geometry := LineSet714;
{ .AddChildren }
HAnimSegment709.AddChildren([Shape713]);
{ .AddChildren }
HAnimJoint708.AddChildren([HAnimSegment709]);
HAnimJoint717 := THAnimJointNode.Create;
HAnimJoint717.NameField := 'r_tarsal_distal_interphalangeal_4';
HAnimJoint717.Center := Vector3(-0.1155,0.0008,0.0118);
HAnimJoint717.SetUlimit([0,0,0]);
HAnimJoint717.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint708.AddChildren([HAnimJoint717]);
{ .AddChildren }
HAnimJoint699.AddChildren([HAnimJoint708]);
{ .AddChildren }
HAnimJoint690.AddChildren([HAnimJoint699]);
{ .AddChildren }
HAnimJoint677.AddChildren([HAnimJoint690]);
HAnimJoint718 := THAnimJointNode.Create;
HAnimJoint718.NameField := 'r_tarsometatarsal_5';
HAnimJoint718.Center := Vector3(-0.1206,0.0124,-0.0671);
HAnimJoint718.SetUlimit([0,0,0]);
HAnimJoint718.SetLlimit([0,0,0]);
HAnimSegment719 := THAnimSegmentNode.Create;
HAnimSegment719.NameField := 'r_metatarsal_5';
Transform720 := TTransformNode.Create;
Transform720.Translation := Vector3(-0.1206,0.0124,-0.0671);
Transform721 := TTransformNode.Create;
{ Empty Transform }
Shape722 := TShapeNode.Create;
Shape722 := Shape20;
{ .AddChild }
Transform721.AddChildren([Shape722]);
{ .AddChildren }
Transform720.AddChildren([Transform721]);
{ .AddChildren }
HAnimSegment719.AddChildren([Transform720]);
Shape723 := TShapeNode.Create;
LineSet724 := TLineSetNode.Create;
LineSet724.SetVertexCount([2]);
Coordinate725 := TCoordinateNode.Create;
Coordinate725.SetPoint([Vector3(-0.1206,0.0124,-0.0671),Vector3(-0.1239,0.0051,-0.0153)]);
{ .SetCoord }
LineSet724.Coord := Coordinate725;
{ from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2 }
ColorRGBA726 := TColorRGBANode.Create;
ColorRGBA726 := ColorRGBA27;
{ .SetColor }
LineSet724.Color := ColorRGBA726;
{ .SetGeometry }
Shape723.Geometry := LineSet724;
{ .AddChildren }
HAnimSegment719.AddChildren([Shape723]);
{ .AddChildren }
HAnimJoint718.AddChildren([HAnimSegment719]);
HAnimJoint727 := THAnimJointNode.Create;
HAnimJoint727.NameField := 'r_metatarsophalangeal_5';
HAnimJoint727.Center := Vector3(-0.1239,0.0051,-0.0153);
HAnimJoint727.SetUlimit([0,0,0]);
HAnimJoint727.SetLlimit([0,0,0]);
HAnimSegment728 := THAnimSegmentNode.Create;
HAnimSegment728.NameField := 'r_tarsal_proximal_phalanx_5';
Transform729 := TTransformNode.Create;
Transform729.Translation := Vector3(-0.1239,0.0051,-0.0153);
Transform730 := TTransformNode.Create;
{ Empty Transform }
Shape731 := TShapeNode.Create;
Shape731 := Shape20;
{ .AddChild }
Transform730.AddChildren([Shape731]);
{ .AddChildren }
Transform729.AddChildren([Transform730]);
{ .AddChildren }
HAnimSegment728.AddChildren([Transform729]);
Shape732 := TShapeNode.Create;
LineSet733 := TLineSetNode.Create;
LineSet733.SetVertexCount([2]);
Coordinate734 := TCoordinateNode.Create;
Coordinate734.SetPoint([Vector3(-0.1239,0.0051,-0.0153),Vector3(-0.1262,0.0023,-0.0077)]);
{ .SetCoord }
LineSet733.Coord := Coordinate734;
{ from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2 }
ColorRGBA735 := TColorRGBANode.Create;
ColorRGBA735 := ColorRGBA27;
{ .SetColor }
LineSet733.Color := ColorRGBA735;
{ .SetGeometry }
Shape732.Geometry := LineSet733;
{ .AddChildren }
HAnimSegment728.AddChildren([Shape732]);
HAnimSite736 := THAnimSiteNode.Create;
HAnimSite736.NameField := 'r_metatarsal_phalanx_5';
TouchSensor737 := TTouchSensorNode.Create;
TouchSensor737.Description := 'HAnimSite 60 r_metatarsal_phalanx_5';
{ .AddChildren }
HAnimSite736.AddChildren([TouchSensor737]);
Shape738 := TShapeNode.Create;
Shape738 := Shape30;
{ .AddChildren }
HAnimSite736.AddChildren([Shape738]);
Billboard739 := TBillboardNode.Create;
Shape740 := TShapeNode.Create;
Text741 := TTextNode.Create;
Text741.SetText(['60']);
FontStyle742 := TFontStyleNode.Create;
FontStyle742.Size := 0.035;
{ .SetFontStyle }
Text741.FontStyle := FontStyle742;
{ .SetGeometry }
Shape740.Geometry := Text741;
{ .AddChildren }
Billboard739.AddChildren([Shape740]);
{ .AddChildren }
HAnimSite736.AddChildren([Billboard739]);
{ .AddChildren }
HAnimSegment728.AddChildren([HAnimSite736]);
{ .AddChildren }
HAnimJoint727.AddChildren([HAnimSegment728]);
HAnimJoint743 := THAnimJointNode.Create;
HAnimJoint743.NameField := 'r_tarsal_proximal_interphalangeal_5';
HAnimJoint743.Center := Vector3(-0.1262,0.0023,-0.0077);
HAnimJoint743.SetUlimit([0,0,0]);
HAnimJoint743.SetLlimit([0,0,0]);
HAnimSegment744 := THAnimSegmentNode.Create;
HAnimSegment744.NameField := 'r_tarsal_middle_phalanx_5';
Transform745 := TTransformNode.Create;
Transform745.Translation := Vector3(-0.1262,0.0023,-0.0077);
Transform746 := TTransformNode.Create;
{ Empty Transform }
Shape747 := TShapeNode.Create;
Shape747 := Shape20;
{ .AddChild }
Transform746.AddChildren([Shape747]);
{ .AddChildren }
Transform745.AddChildren([Transform746]);
{ .AddChildren }
HAnimSegment744.AddChildren([Transform745]);
Shape748 := TShapeNode.Create;
LineSet749 := TLineSetNode.Create;
LineSet749.SetVertexCount([2]);
Coordinate750 := TCoordinateNode.Create;
Coordinate750.SetPoint([Vector3(-0.1262,0.0023,-0.0077),Vector3(-0.1271,0,0)]);
{ .SetCoord }
LineSet749.Coord := Coordinate750;
{ from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2 }
ColorRGBA751 := TColorRGBANode.Create;
ColorRGBA751 := ColorRGBA27;
{ .SetColor }
LineSet749.Color := ColorRGBA751;
{ .SetGeometry }
Shape748.Geometry := LineSet749;
{ .AddChildren }
HAnimSegment744.AddChildren([Shape748]);
{ .AddChildren }
HAnimJoint743.AddChildren([HAnimSegment744]);
HAnimJoint752 := THAnimJointNode.Create;
HAnimJoint752.NameField := 'r_tarsal_distal_interphalangeal_5';
HAnimJoint752.Center := Vector3(-0.1271,0,0);
HAnimJoint752.SetUlimit([0,0,0]);
HAnimJoint752.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint743.AddChildren([HAnimJoint752]);
{ .AddChildren }
HAnimJoint727.AddChildren([HAnimJoint743]);
{ .AddChildren }
HAnimJoint718.AddChildren([HAnimJoint727]);
{ .AddChildren }
HAnimJoint677.AddChildren([HAnimJoint718]);
{ .AddChildren }
HAnimJoint668.AddChildren([HAnimJoint677]);
{ .AddChildren }
HAnimJoint515.AddChildren([HAnimJoint668]);
{ .AddChildren }
HAnimJoint485.AddChildren([HAnimJoint515]);
{ .AddChildren }
HAnimJoint448.AddChildren([HAnimJoint485]);
{ .AddChildren }
HAnimJoint60.AddChildren([HAnimJoint448]);
{ .AddChildren }
HAnimJoint47.AddChildren([HAnimJoint60]);
HAnimJoint753 := THAnimJointNode.Create;
HAnimJoint753.NameField := 'vl5';
HAnimJoint753.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimJoint753.SetUlimit([0,0,0]);
HAnimJoint753.SetLlimit([0,0,0]);
HAnimSegment754 := THAnimSegmentNode.Create;
HAnimSegment754.NameField := 'l5';
Transform755 := TTransformNode.Create;
Transform755.Translation := Vector3(0.0028,1.0568,-0.0776);
Transform756 := TTransformNode.Create;
{ Empty Transform }
Shape757 := TShapeNode.Create;
Shape757 := Shape20;
{ .AddChild }
Transform756.AddChildren([Shape757]);
{ .AddChildren }
Transform755.AddChildren([Transform756]);
{ .AddChildren }
HAnimSegment754.AddChildren([Transform755]);
Shape758 := TShapeNode.Create;
LineSet759 := TLineSetNode.Create;
LineSet759.SetVertexCount([2]);
Coordinate760 := TCoordinateNode.Create;
Coordinate760.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0035,1.0925,-0.0787)]);
{ .SetCoord }
LineSet759.Coord := Coordinate760;
{ from vl5 to vl4 vertices 2 }
ColorRGBA761 := TColorRGBANode.Create;
ColorRGBA761 := ColorRGBA27;
{ .SetColor }
LineSet759.Color := ColorRGBA761;
{ .SetGeometry }
Shape758.Geometry := LineSet759;
{ .AddChildren }
HAnimSegment754.AddChildren([Shape758]);
HAnimSite762 := THAnimSiteNode.Create;
HAnimSite762.NameField := 'navel';
HAnimSite762.Translation := Vector3(0.0069,1.0966,0.1017);
TouchSensor763 := TTouchSensorNode.Create;
TouchSensor763.Description := 'HAnimSite 84 navel';
{ .AddChildren }
HAnimSite762.AddChildren([TouchSensor763]);
Shape764 := TShapeNode.Create;
Shape764 := Shape30;
{ .AddChildren }
HAnimSite762.AddChildren([Shape764]);
Billboard765 := TBillboardNode.Create;
Shape766 := TShapeNode.Create;
Text767 := TTextNode.Create;
Text767.SetText(['84']);
FontStyle768 := TFontStyleNode.Create;
FontStyle768.Size := 0.035;
{ .SetFontStyle }
Text767.FontStyle := FontStyle768;
{ .SetGeometry }
Shape766.Geometry := Text767;
{ .AddChildren }
Billboard765.AddChildren([Shape766]);
{ .AddChildren }
HAnimSite762.AddChildren([Billboard765]);
{ .AddChildren }
HAnimSegment754.AddChildren([HAnimSite762]);
HAnimSite769 := THAnimSiteNode.Create;
HAnimSite769.NameField := 'waist_preferred_anterior';
TouchSensor770 := TTouchSensorNode.Create;
TouchSensor770.Description := 'HAnimSite 26 waist_preferred_anterior';
{ .AddChildren }
HAnimSite769.AddChildren([TouchSensor770]);
Shape771 := TShapeNode.Create;
Shape771 := Shape30;
{ .AddChildren }
HAnimSite769.AddChildren([Shape771]);
Billboard772 := TBillboardNode.Create;
Shape773 := TShapeNode.Create;
Text774 := TTextNode.Create;
Text774.SetText(['26']);
FontStyle775 := TFontStyleNode.Create;
FontStyle775.Size := 0.035;
{ .SetFontStyle }
Text774.FontStyle := FontStyle775;
{ .SetGeometry }
Shape773.Geometry := Text774;
{ .AddChildren }
Billboard772.AddChildren([Shape773]);
{ .AddChildren }
HAnimSite769.AddChildren([Billboard772]);
{ .AddChildren }
HAnimSegment754.AddChildren([HAnimSite769]);
HAnimSite776 := THAnimSiteNode.Create;
HAnimSite776.NameField := 'waist_preferred_posterior';
HAnimSite776.Translation := Vector3(0.29,1.0915,-0.1091);
TouchSensor777 := TTouchSensorNode.Create;
TouchSensor777.Description := 'HAnimSite 27 waist_preferred_posterior';
{ .AddChildren }
HAnimSite776.AddChildren([TouchSensor777]);
Shape778 := TShapeNode.Create;
Shape778 := Shape30;
{ .AddChildren }
HAnimSite776.AddChildren([Shape778]);
Billboard779 := TBillboardNode.Create;
Shape780 := TShapeNode.Create;
Text781 := TTextNode.Create;
Text781.SetText(['27']);
FontStyle782 := TFontStyleNode.Create;
FontStyle782.Size := 0.035;
{ .SetFontStyle }
Text781.FontStyle := FontStyle782;
{ .SetGeometry }
Shape780.Geometry := Text781;
{ .AddChildren }
Billboard779.AddChildren([Shape780]);
{ .AddChildren }
HAnimSite776.AddChildren([Billboard779]);
{ .AddChildren }
HAnimSegment754.AddChildren([HAnimSite776]);
{ .AddChildren }
HAnimJoint753.AddChildren([HAnimSegment754]);
HAnimJoint783 := THAnimJointNode.Create;
HAnimJoint783.NameField := 'vl4';
HAnimJoint783.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimJoint783.SetUlimit([0,0,0]);
HAnimJoint783.SetLlimit([0,0,0]);
HAnimSegment784 := THAnimSegmentNode.Create;
HAnimSegment784.NameField := 'l4';
Transform785 := TTransformNode.Create;
Transform785.Translation := Vector3(0.0035,1.0925,-0.0787);
Transform786 := TTransformNode.Create;
{ Empty Transform }
Shape787 := TShapeNode.Create;
Shape787 := Shape20;
{ .AddChild }
Transform786.AddChildren([Shape787]);
{ .AddChildren }
Transform785.AddChildren([Transform786]);
{ .AddChildren }
HAnimSegment784.AddChildren([Transform785]);
Shape788 := TShapeNode.Create;
LineSet789 := TLineSetNode.Create;
LineSet789.SetVertexCount([2]);
Coordinate790 := TCoordinateNode.Create;
Coordinate790.SetPoint([Vector3(0.0035,1.0925,-0.0787),Vector3(0.0041,1.1276,-0.0796)]);
{ .SetCoord }
LineSet789.Coord := Coordinate790;
{ from vl4 to vl3 vertices 2 }
ColorRGBA791 := TColorRGBANode.Create;
ColorRGBA791 := ColorRGBA27;
{ .SetColor }
LineSet789.Color := ColorRGBA791;
{ .SetGeometry }
Shape788.Geometry := LineSet789;
{ .AddChildren }
HAnimSegment784.AddChildren([Shape788]);
{ .AddChildren }
HAnimJoint783.AddChildren([HAnimSegment784]);
HAnimJoint792 := THAnimJointNode.Create;
HAnimJoint792.NameField := 'vl3';
HAnimJoint792.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimJoint792.SetUlimit([0,0,0]);
HAnimJoint792.SetLlimit([0,0,0]);
HAnimSegment793 := THAnimSegmentNode.Create;
HAnimSegment793.NameField := 'l3';
Transform794 := TTransformNode.Create;
Transform794.Translation := Vector3(0.0041,1.1276,-0.0796);
Transform795 := TTransformNode.Create;
{ Empty Transform }
Shape796 := TShapeNode.Create;
Shape796 := Shape20;
{ .AddChild }
Transform795.AddChildren([Shape796]);
{ .AddChildren }
Transform794.AddChildren([Transform795]);
{ .AddChildren }
HAnimSegment793.AddChildren([Transform794]);
Shape797 := TShapeNode.Create;
LineSet798 := TLineSetNode.Create;
LineSet798.SetVertexCount([2]);
Coordinate799 := TCoordinateNode.Create;
Coordinate799.SetPoint([Vector3(0.0041,1.1276,-0.0796),Vector3(0.0045,1.1546,-0.08)]);
{ .SetCoord }
LineSet798.Coord := Coordinate799;
{ from vl3 to vl2 vertices 2 }
ColorRGBA800 := TColorRGBANode.Create;
ColorRGBA800 := ColorRGBA27;
{ .SetColor }
LineSet798.Color := ColorRGBA800;
{ .SetGeometry }
Shape797.Geometry := LineSet798;
{ .AddChildren }
HAnimSegment793.AddChildren([Shape797]);
{ .AddChildren }
HAnimJoint792.AddChildren([HAnimSegment793]);
HAnimJoint801 := THAnimJointNode.Create;
HAnimJoint801.NameField := 'vl2';
HAnimJoint801.Center := Vector3(0.0045,1.1546,-0.08);
HAnimJoint801.SetUlimit([0,0,0]);
HAnimJoint801.SetLlimit([0,0,0]);
HAnimSegment802 := THAnimSegmentNode.Create;
HAnimSegment802.NameField := 'l2';
Transform803 := TTransformNode.Create;
Transform803.Translation := Vector3(0.0045,1.1546,-0.08);
Transform804 := TTransformNode.Create;
{ Empty Transform }
Shape805 := TShapeNode.Create;
Shape805 := Shape20;
{ .AddChild }
Transform804.AddChildren([Shape805]);
{ .AddChildren }
Transform803.AddChildren([Transform804]);
{ .AddChildren }
HAnimSegment802.AddChildren([Transform803]);
Shape806 := TShapeNode.Create;
LineSet807 := TLineSetNode.Create;
LineSet807.SetVertexCount([2]);
Coordinate808 := TCoordinateNode.Create;
Coordinate808.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0048,1.1912,-0.0805)]);
{ .SetCoord }
LineSet807.Coord := Coordinate808;
{ from vl2 to vl1 vertices 2 }
ColorRGBA809 := TColorRGBANode.Create;
ColorRGBA809 := ColorRGBA27;
{ .SetColor }
LineSet807.Color := ColorRGBA809;
{ .SetGeometry }
Shape806.Geometry := LineSet807;
{ .AddChildren }
HAnimSegment802.AddChildren([Shape806]);
HAnimSite810 := THAnimSiteNode.Create;
HAnimSite810.NameField := 'l_rib10';
HAnimSite810.Translation := Vector3(0.0871,1.1925,0.0992);
TouchSensor811 := TTouchSensorNode.Create;
TouchSensor811.Description := 'HAnimSite 28 l_rib10';
{ .AddChildren }
HAnimSite810.AddChildren([TouchSensor811]);
Shape812 := TShapeNode.Create;
Shape812 := Shape30;
{ .AddChildren }
HAnimSite810.AddChildren([Shape812]);
Billboard813 := TBillboardNode.Create;
Shape814 := TShapeNode.Create;
Text815 := TTextNode.Create;
Text815.SetText(['28']);
FontStyle816 := TFontStyleNode.Create;
FontStyle816.Size := 0.035;
{ .SetFontStyle }
Text815.FontStyle := FontStyle816;
{ .SetGeometry }
Shape814.Geometry := Text815;
{ .AddChildren }
Billboard813.AddChildren([Shape814]);
{ .AddChildren }
HAnimSite810.AddChildren([Billboard813]);
{ .AddChildren }
HAnimSegment802.AddChildren([HAnimSite810]);
HAnimSite817 := THAnimSiteNode.Create;
HAnimSite817.NameField := 'r_rib10';
HAnimSite817.Translation := Vector3(-0.0711,1.1941,0.1016);
TouchSensor818 := TTouchSensorNode.Create;
TouchSensor818.Description := 'HAnimSite 30 r_rib10';
{ .AddChildren }
HAnimSite817.AddChildren([TouchSensor818]);
Shape819 := TShapeNode.Create;
Shape819 := Shape30;
{ .AddChildren }
HAnimSite817.AddChildren([Shape819]);
Billboard820 := TBillboardNode.Create;
Shape821 := TShapeNode.Create;
Text822 := TTextNode.Create;
Text822.SetText(['30']);
FontStyle823 := TFontStyleNode.Create;
FontStyle823.Size := 0.035;
{ .SetFontStyle }
Text822.FontStyle := FontStyle823;
{ .SetGeometry }
Shape821.Geometry := Text822;
{ .AddChildren }
Billboard820.AddChildren([Shape821]);
{ .AddChildren }
HAnimSite817.AddChildren([Billboard820]);
{ .AddChildren }
HAnimSegment802.AddChildren([HAnimSite817]);
HAnimSite824 := THAnimSiteNode.Create;
HAnimSite824.NameField := 'spine_2_middle_back';
TouchSensor825 := TTouchSensorNode.Create;
TouchSensor825.Description := 'HAnimSite spine_2_middle_back';
{ .AddChildren }
HAnimSite824.AddChildren([TouchSensor825]);
Shape826 := TShapeNode.Create;
Shape826 := Shape30;
{ .AddChildren }
HAnimSite824.AddChildren([Shape826]);
Billboard827 := TBillboardNode.Create;
Shape828 := TShapeNode.Create;
Text829 := TTextNode.Create;
Text829.SetText(['']);
FontStyle830 := TFontStyleNode.Create;
FontStyle830.Size := 0.035;
{ .SetFontStyle }
Text829.FontStyle := FontStyle830;
{ .SetGeometry }
Shape828.Geometry := Text829;
{ .AddChildren }
Billboard827.AddChildren([Shape828]);
{ .AddChildren }
HAnimSite824.AddChildren([Billboard827]);
{ .AddChildren }
HAnimSegment802.AddChildren([HAnimSite824]);
{ .AddChildren }
HAnimJoint801.AddChildren([HAnimSegment802]);
HAnimJoint831 := THAnimJointNode.Create;
HAnimJoint831.NameField := 'vl1';
HAnimJoint831.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimJoint831.SetUlimit([0,0,0]);
HAnimJoint831.SetLlimit([0,0,0]);
HAnimSegment832 := THAnimSegmentNode.Create;
HAnimSegment832.NameField := 'l1';
Transform833 := TTransformNode.Create;
Transform833.Translation := Vector3(0.0048,1.1912,-0.0805);
Transform834 := TTransformNode.Create;
{ Empty Transform }
Shape835 := TShapeNode.Create;
Shape835 := Shape20;
{ .AddChild }
Transform834.AddChildren([Shape835]);
{ .AddChildren }
Transform833.AddChildren([Transform834]);
{ .AddChildren }
HAnimSegment832.AddChildren([Transform833]);
Shape836 := TShapeNode.Create;
LineSet837 := TLineSetNode.Create;
LineSet837.SetVertexCount([2]);
Coordinate838 := TCoordinateNode.Create;
Coordinate838.SetPoint([Vector3(0.0048,1.1912,-0.0805),Vector3(0.0051,1.2278,-0.0808)]);
{ .SetCoord }
LineSet837.Coord := Coordinate838;
{ from vl1 to vt12 vertices 2 }
ColorRGBA839 := TColorRGBANode.Create;
ColorRGBA839 := ColorRGBA27;
{ .SetColor }
LineSet837.Color := ColorRGBA839;
{ .SetGeometry }
Shape836.Geometry := LineSet837;
{ .AddChildren }
HAnimSegment832.AddChildren([Shape836]);
{ .AddChildren }
HAnimJoint831.AddChildren([HAnimSegment832]);
HAnimJoint840 := THAnimJointNode.Create;
HAnimJoint840.NameField := 'vt12';
HAnimJoint840.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimJoint840.SetUlimit([0,0,0]);
HAnimJoint840.SetLlimit([0,0,0]);
HAnimSegment841 := THAnimSegmentNode.Create;
HAnimSegment841.NameField := 't12';
Transform842 := TTransformNode.Create;
Transform842.Translation := Vector3(0.0051,1.2278,-0.0808);
Transform843 := TTransformNode.Create;
{ Empty Transform }
Shape844 := TShapeNode.Create;
Shape844 := Shape20;
{ .AddChild }
Transform843.AddChildren([Shape844]);
{ .AddChildren }
Transform842.AddChildren([Transform843]);
{ .AddChildren }
HAnimSegment841.AddChildren([Transform842]);
Shape845 := TShapeNode.Create;
LineSet846 := TLineSetNode.Create;
LineSet846.SetVertexCount([2]);
Coordinate847 := TCoordinateNode.Create;
Coordinate847.SetPoint([Vector3(0.0051,1.2278,-0.0808),Vector3(0.0053,1.2679,-0.081)]);
{ .SetCoord }
LineSet846.Coord := Coordinate847;
{ from vt12 to vt11 vertices 2 }
ColorRGBA848 := TColorRGBANode.Create;
ColorRGBA848 := ColorRGBA27;
{ .SetColor }
LineSet846.Color := ColorRGBA848;
{ .SetGeometry }
Shape845.Geometry := LineSet846;
{ .AddChildren }
HAnimSegment841.AddChildren([Shape845]);
{ .AddChildren }
HAnimJoint840.AddChildren([HAnimSegment841]);
HAnimJoint849 := THAnimJointNode.Create;
HAnimJoint849.NameField := 'vt11';
HAnimJoint849.Center := Vector3(0.0053,1.2679,-0.081);
HAnimJoint849.SetUlimit([0,0,0]);
HAnimJoint849.SetLlimit([0,0,0]);
HAnimSegment850 := THAnimSegmentNode.Create;
HAnimSegment850.NameField := 't11';
Transform851 := TTransformNode.Create;
Transform851.Translation := Vector3(0.0053,1.2679,-0.081);
Transform852 := TTransformNode.Create;
{ Empty Transform }
Shape853 := TShapeNode.Create;
Shape853 := Shape20;
{ .AddChild }
Transform852.AddChildren([Shape853]);
{ .AddChildren }
Transform851.AddChildren([Transform852]);
{ .AddChildren }
HAnimSegment850.AddChildren([Transform851]);
Shape854 := TShapeNode.Create;
LineSet855 := TLineSetNode.Create;
LineSet855.SetVertexCount([2]);
Coordinate856 := TCoordinateNode.Create;
Coordinate856.SetPoint([Vector3(0.0053,1.2679,-0.081),Vector3(0.0056,1.2848,-0.0822)]);
{ .SetCoord }
LineSet855.Coord := Coordinate856;
{ from vt11 to vt10 vertices 2 }
ColorRGBA857 := TColorRGBANode.Create;
ColorRGBA857 := ColorRGBA27;
{ .SetColor }
LineSet855.Color := ColorRGBA857;
{ .SetGeometry }
Shape854.Geometry := LineSet855;
{ .AddChildren }
HAnimSegment850.AddChildren([Shape854]);
{ .AddChildren }
HAnimJoint849.AddChildren([HAnimSegment850]);
HAnimJoint858 := THAnimJointNode.Create;
HAnimJoint858.NameField := 'vt10';
HAnimJoint858.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimJoint858.SetUlimit([0,0,0]);
HAnimJoint858.SetLlimit([0,0,0]);
HAnimSegment859 := THAnimSegmentNode.Create;
HAnimSegment859.NameField := 't10';
Transform860 := TTransformNode.Create;
Transform860.Translation := Vector3(0.0056,1.2848,-0.0822);
Transform861 := TTransformNode.Create;
{ Empty Transform }
Shape862 := TShapeNode.Create;
Shape862 := Shape20;
{ .AddChild }
Transform861.AddChildren([Shape862]);
{ .AddChildren }
Transform860.AddChildren([Transform861]);
{ .AddChildren }
HAnimSegment859.AddChildren([Transform860]);
Shape863 := TShapeNode.Create;
LineSet864 := TLineSetNode.Create;
LineSet864.SetVertexCount([2]);
Coordinate865 := TCoordinateNode.Create;
Coordinate865.SetPoint([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0057,1.3126,-0.0838)]);
{ .SetCoord }
LineSet864.Coord := Coordinate865;
{ from vt10 to vt9 vertices 2 }
ColorRGBA866 := TColorRGBANode.Create;
ColorRGBA866 := ColorRGBA27;
{ .SetColor }
LineSet864.Color := ColorRGBA866;
{ .SetGeometry }
Shape863.Geometry := LineSet864;
{ .AddChildren }
HAnimSegment859.AddChildren([Shape863]);
HAnimSite867 := THAnimSiteNode.Create;
HAnimSite867.NameField := 'substernale';
HAnimSite867.Translation := Vector3(0.0085,1.2995,0.1147);
TouchSensor868 := TTouchSensorNode.Create;
TouchSensor868.Description := 'HAnimSite 13 substernale';
{ .AddChildren }
HAnimSite867.AddChildren([TouchSensor868]);
Shape869 := TShapeNode.Create;
Shape869 := Shape30;
{ .AddChildren }
HAnimSite867.AddChildren([Shape869]);
Billboard870 := TBillboardNode.Create;
Shape871 := TShapeNode.Create;
Text872 := TTextNode.Create;
Text872.SetText(['13']);
FontStyle873 := TFontStyleNode.Create;
FontStyle873.Size := 0.035;
{ .SetFontStyle }
Text872.FontStyle := FontStyle873;
{ .SetGeometry }
Shape871.Geometry := Text872;
{ .AddChildren }
Billboard870.AddChildren([Shape871]);
{ .AddChildren }
HAnimSite867.AddChildren([Billboard870]);
{ .AddChildren }
HAnimSegment859.AddChildren([HAnimSite867]);
{ .AddChildren }
HAnimJoint858.AddChildren([HAnimSegment859]);
HAnimJoint874 := THAnimJointNode.Create;
HAnimJoint874.NameField := 'vt9';
HAnimJoint874.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimJoint874.SetUlimit([0,0,0]);
HAnimJoint874.SetLlimit([0,0,0]);
HAnimSegment875 := THAnimSegmentNode.Create;
HAnimSegment875.NameField := 't9';
Transform876 := TTransformNode.Create;
Transform876.Translation := Vector3(0.0057,1.3126,-0.0838);
Transform877 := TTransformNode.Create;
{ Empty Transform }
Shape878 := TShapeNode.Create;
Shape878 := Shape20;
{ .AddChild }
Transform877.AddChildren([Shape878]);
{ .AddChildren }
Transform876.AddChildren([Transform877]);
{ .AddChildren }
HAnimSegment875.AddChildren([Transform876]);
Shape879 := TShapeNode.Create;
LineSet880 := TLineSetNode.Create;
LineSet880.SetVertexCount([2]);
Coordinate881 := TCoordinateNode.Create;
Coordinate881.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(0.0057,1.3382,-0.0845)]);
{ .SetCoord }
LineSet880.Coord := Coordinate881;
{ from vt9 to vt8 vertices 2 }
ColorRGBA882 := TColorRGBANode.Create;
ColorRGBA882 := ColorRGBA27;
{ .SetColor }
LineSet880.Color := ColorRGBA882;
{ .SetGeometry }
Shape879.Geometry := LineSet880;
{ .AddChildren }
HAnimSegment875.AddChildren([Shape879]);
HAnimSite883 := THAnimSiteNode.Create;
HAnimSite883.NameField := 'l_thelion';
HAnimSite883.Translation := Vector3(0.0918,1.3382,0.1192);
TouchSensor884 := TTouchSensorNode.Create;
TouchSensor884.Description := 'HAnimSite 29 l_thelion';
{ .AddChildren }
HAnimSite883.AddChildren([TouchSensor884]);
Shape885 := TShapeNode.Create;
Shape885 := Shape30;
{ .AddChildren }
HAnimSite883.AddChildren([Shape885]);
Billboard886 := TBillboardNode.Create;
Shape887 := TShapeNode.Create;
Text888 := TTextNode.Create;
Text888.SetText(['29']);
FontStyle889 := TFontStyleNode.Create;
FontStyle889.Size := 0.035;
{ .SetFontStyle }
Text888.FontStyle := FontStyle889;
{ .SetGeometry }
Shape887.Geometry := Text888;
{ .AddChildren }
Billboard886.AddChildren([Shape887]);
{ .AddChildren }
HAnimSite883.AddChildren([Billboard886]);
{ .AddChildren }
HAnimSegment875.AddChildren([HAnimSite883]);
HAnimSite890 := THAnimSiteNode.Create;
HAnimSite890.NameField := 'r_thelion';
HAnimSite890.Translation := Vector3(-0.0736,1.3385,0.1217);
TouchSensor891 := TTouchSensorNode.Create;
TouchSensor891.Description := 'HAnimSite 31 r_thelion';
{ .AddChildren }
HAnimSite890.AddChildren([TouchSensor891]);
Shape892 := TShapeNode.Create;
Shape892 := Shape30;
{ .AddChildren }
HAnimSite890.AddChildren([Shape892]);
Billboard893 := TBillboardNode.Create;
Shape894 := TShapeNode.Create;
Text895 := TTextNode.Create;
Text895.SetText(['31']);
FontStyle896 := TFontStyleNode.Create;
FontStyle896.Size := 0.035;
{ .SetFontStyle }
Text895.FontStyle := FontStyle896;
{ .SetGeometry }
Shape894.Geometry := Text895;
{ .AddChildren }
Billboard893.AddChildren([Shape894]);
{ .AddChildren }
HAnimSite890.AddChildren([Billboard893]);
{ .AddChildren }
HAnimSegment875.AddChildren([HAnimSite890]);
{ .AddChildren }
HAnimJoint874.AddChildren([HAnimSegment875]);
HAnimJoint897 := THAnimJointNode.Create;
HAnimJoint897.NameField := 'vt8';
HAnimJoint897.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimJoint897.SetUlimit([0,0,0]);
HAnimJoint897.SetLlimit([0,0,0]);
HAnimSegment898 := THAnimSegmentNode.Create;
HAnimSegment898.NameField := 't8';
Transform899 := TTransformNode.Create;
Transform899.Translation := Vector3(0.0057,1.3382,-0.0845);
Transform900 := TTransformNode.Create;
{ Empty Transform }
Shape901 := TShapeNode.Create;
Shape901 := Shape20;
{ .AddChild }
Transform900.AddChildren([Shape901]);
{ .AddChildren }
Transform899.AddChildren([Transform900]);
{ .AddChildren }
HAnimSegment898.AddChildren([Transform899]);
Shape902 := TShapeNode.Create;
LineSet903 := TLineSetNode.Create;
LineSet903.SetVertexCount([2]);
Coordinate904 := TCoordinateNode.Create;
Coordinate904.SetPoint([Vector3(0.0057,1.3382,-0.0845),Vector3(0.0058,1.3625,-0.0833)]);
{ .SetCoord }
LineSet903.Coord := Coordinate904;
{ from vt8 to vt7 vertices 2 }
ColorRGBA905 := TColorRGBANode.Create;
ColorRGBA905 := ColorRGBA27;
{ .SetColor }
LineSet903.Color := ColorRGBA905;
{ .SetGeometry }
Shape902.Geometry := LineSet903;
{ .AddChildren }
HAnimSegment898.AddChildren([Shape902]);
{ .AddChildren }
HAnimJoint897.AddChildren([HAnimSegment898]);
HAnimJoint906 := THAnimJointNode.Create;
HAnimJoint906.NameField := 'vt7';
HAnimJoint906.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimJoint906.SetUlimit([0,0,0]);
HAnimJoint906.SetLlimit([0,0,0]);
HAnimSegment907 := THAnimSegmentNode.Create;
HAnimSegment907.NameField := 't7';
Transform908 := TTransformNode.Create;
Transform908.Translation := Vector3(0.0058,1.3625,-0.0833);
Transform909 := TTransformNode.Create;
{ Empty Transform }
Shape910 := TShapeNode.Create;
Shape910 := Shape20;
{ .AddChild }
Transform909.AddChildren([Shape910]);
{ .AddChildren }
Transform908.AddChildren([Transform909]);
{ .AddChildren }
HAnimSegment907.AddChildren([Transform908]);
Shape911 := TShapeNode.Create;
LineSet912 := TLineSetNode.Create;
LineSet912.SetVertexCount([2]);
Coordinate913 := TCoordinateNode.Create;
Coordinate913.SetPoint([Vector3(0.0058,1.3625,-0.0833),Vector3(0.0059,1.3866,-0.08)]);
{ .SetCoord }
LineSet912.Coord := Coordinate913;
{ from vt7 to vt6 vertices 2 }
ColorRGBA914 := TColorRGBANode.Create;
ColorRGBA914 := ColorRGBA27;
{ .SetColor }
LineSet912.Color := ColorRGBA914;
{ .SetGeometry }
Shape911.Geometry := LineSet912;
{ .AddChildren }
HAnimSegment907.AddChildren([Shape911]);
{ .AddChildren }
HAnimJoint906.AddChildren([HAnimSegment907]);
HAnimJoint915 := THAnimJointNode.Create;
HAnimJoint915.NameField := 'vt6';
HAnimJoint915.Center := Vector3(0.0059,1.3866,-0.08);
HAnimJoint915.SetUlimit([0,0,0]);
HAnimJoint915.SetLlimit([0,0,0]);
HAnimSegment916 := THAnimSegmentNode.Create;
HAnimSegment916.NameField := 't6';
Transform917 := TTransformNode.Create;
Transform917.Translation := Vector3(0.0059,1.3866,-0.08);
Transform918 := TTransformNode.Create;
{ Empty Transform }
Shape919 := TShapeNode.Create;
Shape919 := Shape20;
{ .AddChild }
Transform918.AddChildren([Shape919]);
{ .AddChildren }
Transform917.AddChildren([Transform918]);
{ .AddChildren }
HAnimSegment916.AddChildren([Transform917]);
Shape920 := TShapeNode.Create;
LineSet921 := TLineSetNode.Create;
LineSet921.SetVertexCount([2]);
Coordinate922 := TCoordinateNode.Create;
Coordinate922.SetPoint([Vector3(0.0059,1.3866,-0.08),Vector3(0.006,1.4102,-0.0745)]);
{ .SetCoord }
LineSet921.Coord := Coordinate922;
{ from vt6 to vt5 vertices 2 }
ColorRGBA923 := TColorRGBANode.Create;
ColorRGBA923 := ColorRGBA27;
{ .SetColor }
LineSet921.Color := ColorRGBA923;
{ .SetGeometry }
Shape920.Geometry := LineSet921;
{ .AddChildren }
HAnimSegment916.AddChildren([Shape920]);
HAnimSite924 := THAnimSiteNode.Create;
HAnimSite924.NameField := 'l_chest_midsagittal_plane';
TouchSensor925 := TTouchSensorNode.Create;
TouchSensor925.Description := 'HAnimSite 94 l_chest_midsagittal_plane';
{ .AddChildren }
HAnimSite924.AddChildren([TouchSensor925]);
Shape926 := TShapeNode.Create;
Shape926 := Shape30;
{ .AddChildren }
HAnimSite924.AddChildren([Shape926]);
Billboard927 := TBillboardNode.Create;
Shape928 := TShapeNode.Create;
Text929 := TTextNode.Create;
Text929.SetText(['94']);
FontStyle930 := TFontStyleNode.Create;
FontStyle930.Size := 0.035;
{ .SetFontStyle }
Text929.FontStyle := FontStyle930;
{ .SetGeometry }
Shape928.Geometry := Text929;
{ .AddChildren }
Billboard927.AddChildren([Shape928]);
{ .AddChildren }
HAnimSite924.AddChildren([Billboard927]);
{ .AddChildren }
HAnimSegment916.AddChildren([HAnimSite924]);
HAnimSite931 := THAnimSiteNode.Create;
HAnimSite931.NameField := 'mesosternale';
TouchSensor932 := TTouchSensorNode.Create;
TouchSensor932.Description := 'HAnimSite 88 mesosternale';
{ .AddChildren }
HAnimSite931.AddChildren([TouchSensor932]);
Shape933 := TShapeNode.Create;
Shape933 := Shape30;
{ .AddChildren }
HAnimSite931.AddChildren([Shape933]);
Billboard934 := TBillboardNode.Create;
Shape935 := TShapeNode.Create;
Text936 := TTextNode.Create;
Text936.SetText(['88']);
FontStyle937 := TFontStyleNode.Create;
FontStyle937.Size := 0.035;
{ .SetFontStyle }
Text936.FontStyle := FontStyle937;
{ .SetGeometry }
Shape935.Geometry := Text936;
{ .AddChildren }
Billboard934.AddChildren([Shape935]);
{ .AddChildren }
HAnimSite931.AddChildren([Billboard934]);
{ .AddChildren }
HAnimSegment916.AddChildren([HAnimSite931]);
HAnimSite938 := THAnimSiteNode.Create;
HAnimSite938.NameField := 'r_chest_midsagittal_plane';
TouchSensor939 := TTouchSensorNode.Create;
TouchSensor939.Description := 'HAnimSite 95 r_chest_midsagittal_plane';
{ .AddChildren }
HAnimSite938.AddChildren([TouchSensor939]);
Shape940 := TShapeNode.Create;
Shape940 := Shape30;
{ .AddChildren }
HAnimSite938.AddChildren([Shape940]);
Billboard941 := TBillboardNode.Create;
Shape942 := TShapeNode.Create;
Text943 := TTextNode.Create;
Text943.SetText(['95']);
FontStyle944 := TFontStyleNode.Create;
FontStyle944.Size := 0.035;
{ .SetFontStyle }
Text943.FontStyle := FontStyle944;
{ .SetGeometry }
Shape942.Geometry := Text943;
{ .AddChildren }
Billboard941.AddChildren([Shape942]);
{ .AddChildren }
HAnimSite938.AddChildren([Billboard941]);
{ .AddChildren }
HAnimSegment916.AddChildren([HAnimSite938]);
HAnimSite945 := THAnimSiteNode.Create;
HAnimSite945.NameField := 'rear_center_midsagittal_plane';
TouchSensor946 := TTouchSensorNode.Create;
TouchSensor946.Description := 'HAnimSite 92 rear_center_midsagittal_plane';
{ .AddChildren }
HAnimSite945.AddChildren([TouchSensor946]);
Shape947 := TShapeNode.Create;
Shape947 := Shape30;
{ .AddChildren }
HAnimSite945.AddChildren([Shape947]);
Billboard948 := TBillboardNode.Create;
Shape949 := TShapeNode.Create;
Text950 := TTextNode.Create;
Text950.SetText(['92']);
FontStyle951 := TFontStyleNode.Create;
FontStyle951.Size := 0.035;
{ .SetFontStyle }
Text950.FontStyle := FontStyle951;
{ .SetGeometry }
Shape949.Geometry := Text950;
{ .AddChildren }
Billboard948.AddChildren([Shape949]);
{ .AddChildren }
HAnimSite945.AddChildren([Billboard948]);
{ .AddChildren }
HAnimSegment916.AddChildren([HAnimSite945]);
{ .AddChildren }
HAnimJoint915.AddChildren([HAnimSegment916]);
HAnimJoint952 := THAnimJointNode.Create;
HAnimJoint952.NameField := 'vt5';
HAnimJoint952.Center := Vector3(0.006,1.4102,-0.0745);
HAnimJoint952.SetUlimit([0,0,0]);
HAnimJoint952.SetLlimit([0,0,0]);
HAnimSegment953 := THAnimSegmentNode.Create;
HAnimSegment953.NameField := 't5';
Transform954 := TTransformNode.Create;
Transform954.Translation := Vector3(0.006,1.4102,-0.0745);
Transform955 := TTransformNode.Create;
{ Empty Transform }
Shape956 := TShapeNode.Create;
Shape956 := Shape20;
{ .AddChild }
Transform955.AddChildren([Shape956]);
{ .AddChildren }
Transform954.AddChildren([Transform955]);
{ .AddChildren }
HAnimSegment953.AddChildren([Transform954]);
Shape957 := TShapeNode.Create;
LineSet958 := TLineSetNode.Create;
LineSet958.SetVertexCount([2]);
Coordinate959 := TCoordinateNode.Create;
Coordinate959.SetPoint([Vector3(0.006,1.4102,-0.0745),Vector3(0.0061,1.432,-0.0675)]);
{ .SetCoord }
LineSet958.Coord := Coordinate959;
{ from vt5 to vt4 vertices 2 }
ColorRGBA960 := TColorRGBANode.Create;
ColorRGBA960 := ColorRGBA27;
{ .SetColor }
LineSet958.Color := ColorRGBA960;
{ .SetGeometry }
Shape957.Geometry := LineSet958;
{ .AddChildren }
HAnimSegment953.AddChildren([Shape957]);
HAnimSite961 := THAnimSiteNode.Create;
HAnimSite961.NameField := 'spine_1_middle_back';
TouchSensor962 := TTouchSensorNode.Create;
TouchSensor962.Description := 'HAnimSite 24 spine_1_middle_back';
{ .AddChildren }
HAnimSite961.AddChildren([TouchSensor962]);
Shape963 := TShapeNode.Create;
Shape963 := Shape30;
{ .AddChildren }
HAnimSite961.AddChildren([Shape963]);
Billboard964 := TBillboardNode.Create;
Shape965 := TShapeNode.Create;
Text966 := TTextNode.Create;
Text966.SetText(['24']);
FontStyle967 := TFontStyleNode.Create;
FontStyle967.Size := 0.035;
{ .SetFontStyle }
Text966.FontStyle := FontStyle967;
{ .SetGeometry }
Shape965.Geometry := Text966;
{ .AddChildren }
Billboard964.AddChildren([Shape965]);
{ .AddChildren }
HAnimSite961.AddChildren([Billboard964]);
{ .AddChildren }
HAnimSegment953.AddChildren([HAnimSite961]);
{ .AddChildren }
HAnimJoint952.AddChildren([HAnimSegment953]);
HAnimJoint968 := THAnimJointNode.Create;
HAnimJoint968.NameField := 'vt4';
HAnimJoint968.Center := Vector3(0.0061,1.432,-0.0675);
HAnimJoint968.SetUlimit([0,0,0]);
HAnimJoint968.SetLlimit([0,0,0]);
HAnimSegment969 := THAnimSegmentNode.Create;
HAnimSegment969.NameField := 't4';
Transform970 := TTransformNode.Create;
Transform970.Translation := Vector3(0.0061,1.432,-0.0675);
Transform971 := TTransformNode.Create;
{ Empty Transform }
Shape972 := TShapeNode.Create;
Shape972 := Shape20;
{ .AddChild }
Transform971.AddChildren([Shape972]);
{ .AddChildren }
Transform970.AddChildren([Transform971]);
{ .AddChildren }
HAnimSegment969.AddChildren([Transform970]);
Shape973 := TShapeNode.Create;
LineSet974 := TLineSetNode.Create;
LineSet974.SetVertexCount([2]);
Coordinate975 := TCoordinateNode.Create;
Coordinate975.SetPoint([Vector3(0.0061,1.432,-0.0675),Vector3(0.0062,1.4583,-0.057)]);
{ .SetCoord }
LineSet974.Coord := Coordinate975;
{ from vt4 to vt3 vertices 2 }
ColorRGBA976 := TColorRGBANode.Create;
ColorRGBA976 := ColorRGBA27;
{ .SetColor }
LineSet974.Color := ColorRGBA976;
{ .SetGeometry }
Shape973.Geometry := LineSet974;
{ .AddChildren }
HAnimSegment969.AddChildren([Shape973]);
{ .AddChildren }
HAnimJoint968.AddChildren([HAnimSegment969]);
HAnimJoint977 := THAnimJointNode.Create;
HAnimJoint977.NameField := 'vt3';
HAnimJoint977.Center := Vector3(0.0062,1.4583,-0.057);
HAnimJoint977.SetUlimit([0,0,0]);
HAnimJoint977.SetLlimit([0,0,0]);
HAnimSegment978 := THAnimSegmentNode.Create;
HAnimSegment978.NameField := 't3';
Transform979 := TTransformNode.Create;
Transform979.Translation := Vector3(0.0062,1.4583,-0.057);
Transform980 := TTransformNode.Create;
{ Empty Transform }
Shape981 := TShapeNode.Create;
Shape981 := Shape20;
{ .AddChild }
Transform980.AddChildren([Shape981]);
{ .AddChildren }
Transform979.AddChildren([Transform980]);
{ .AddChildren }
HAnimSegment978.AddChildren([Transform979]);
Shape982 := TShapeNode.Create;
LineSet983 := TLineSetNode.Create;
LineSet983.SetVertexCount([2]);
Coordinate984 := TCoordinateNode.Create;
Coordinate984.SetPoint([Vector3(0.0062,1.4583,-0.057),Vector3(0.0063,1.4761,-0.0484)]);
{ .SetCoord }
LineSet983.Coord := Coordinate984;
{ from vt3 to vt2 vertices 2 }
ColorRGBA985 := TColorRGBANode.Create;
ColorRGBA985 := ColorRGBA27;
{ .SetColor }
LineSet983.Color := ColorRGBA985;
{ .SetGeometry }
Shape982.Geometry := LineSet983;
{ .AddChildren }
HAnimSegment978.AddChildren([Shape982]);
{ .AddChildren }
HAnimJoint977.AddChildren([HAnimSegment978]);
HAnimJoint986 := THAnimJointNode.Create;
HAnimJoint986.NameField := 'vt2';
HAnimJoint986.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimJoint986.SetUlimit([0,0,0]);
HAnimJoint986.SetLlimit([0,0,0]);
HAnimSegment987 := THAnimSegmentNode.Create;
HAnimSegment987.NameField := 't2';
Transform988 := TTransformNode.Create;
Transform988.Translation := Vector3(0.0063,1.4761,-0.0484);
Transform989 := TTransformNode.Create;
{ Empty Transform }
Shape990 := TShapeNode.Create;
Shape990 := Shape20;
{ .AddChild }
Transform989.AddChildren([Shape990]);
{ .AddChildren }
Transform988.AddChildren([Transform989]);
{ .AddChildren }
HAnimSegment987.AddChildren([Transform988]);
Shape991 := TShapeNode.Create;
LineSet992 := TLineSetNode.Create;
LineSet992.SetVertexCount([2]);
Coordinate993 := TCoordinateNode.Create;
Coordinate993.SetPoint([Vector3(0.0063,1.4761,-0.0484),Vector3(0.0065,1.4951,-0.0387)]);
{ .SetCoord }
LineSet992.Coord := Coordinate993;
{ from vt2 to vt1 vertices 2 }
ColorRGBA994 := TColorRGBANode.Create;
ColorRGBA994 := ColorRGBA27;
{ .SetColor }
LineSet992.Color := ColorRGBA994;
{ .SetGeometry }
Shape991.Geometry := LineSet992;
{ .AddChildren }
HAnimSegment987.AddChildren([Shape991]);
{ .AddChildren }
HAnimJoint986.AddChildren([HAnimSegment987]);
HAnimJoint995 := THAnimJointNode.Create;
HAnimJoint995.NameField := 'vt1';
HAnimJoint995.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimJoint995.SetUlimit([0,0,0]);
HAnimJoint995.SetLlimit([0,0,0]);
HAnimSegment996 := THAnimSegmentNode.Create;
HAnimSegment996.NameField := 't1';
Transform997 := TTransformNode.Create;
Transform997.Translation := Vector3(0.0065,1.4951,-0.0387);
Transform998 := TTransformNode.Create;
{ Empty Transform }
Shape999 := TShapeNode.Create;
Shape999 := Shape20;
{ .AddChild }
Transform998.AddChildren([Shape999]);
{ .AddChildren }
Transform997.AddChildren([Transform998]);
{ .AddChildren }
HAnimSegment996.AddChildren([Transform997]);
Shape1000 := TShapeNode.Create;
LineSet1001 := TLineSetNode.Create;
LineSet1001.SetVertexCount([2]);
Coordinate1002 := TCoordinateNode.Create;
Coordinate1002.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0066,1.5132,-0.0301)]);
{ .SetCoord }
LineSet1001.Coord := Coordinate1002;
{ from vt1 to vc7 vertices 2 }
ColorRGBA1003 := TColorRGBANode.Create;
ColorRGBA1003 := ColorRGBA27;
{ .SetColor }
LineSet1001.Color := ColorRGBA1003;
{ .SetGeometry }
Shape1000.Geometry := LineSet1001;
{ .AddChildren }
HAnimSegment996.AddChildren([Shape1000]);
HAnimSite1004 := THAnimSiteNode.Create;
HAnimSite1004.NameField := 'cervicale';
HAnimSite1004.Translation := Vector3(0.0064,1.52,-0.0815);
TouchSensor1005 := TTouchSensorNode.Create;
TouchSensor1005.Description := 'HAnimSite 10 cervicale';
{ .AddChildren }
HAnimSite1004.AddChildren([TouchSensor1005]);
Shape1006 := TShapeNode.Create;
Shape1006 := Shape30;
{ .AddChildren }
HAnimSite1004.AddChildren([Shape1006]);
Billboard1007 := TBillboardNode.Create;
Shape1008 := TShapeNode.Create;
Text1009 := TTextNode.Create;
Text1009.SetText(['10']);
FontStyle1010 := TFontStyleNode.Create;
FontStyle1010.Size := 0.035;
{ .SetFontStyle }
Text1009.FontStyle := FontStyle1010;
{ .SetGeometry }
Shape1008.Geometry := Text1009;
{ .AddChildren }
Billboard1007.AddChildren([Shape1008]);
{ .AddChildren }
HAnimSite1004.AddChildren([Billboard1007]);
{ .AddChildren }
HAnimSegment996.AddChildren([HAnimSite1004]);
HAnimSite1011 := THAnimSiteNode.Create;
HAnimSite1011.NameField := 'suprasternale';
HAnimSite1011.Translation := Vector3(0.0084,1.4714,0.0551);
TouchSensor1012 := TTouchSensorNode.Create;
TouchSensor1012.Description := 'HAnimSite 12 suprasternale';
{ .AddChildren }
HAnimSite1011.AddChildren([TouchSensor1012]);
Shape1013 := TShapeNode.Create;
Shape1013 := Shape30;
{ .AddChildren }
HAnimSite1011.AddChildren([Shape1013]);
Billboard1014 := TBillboardNode.Create;
Shape1015 := TShapeNode.Create;
Text1016 := TTextNode.Create;
Text1016.SetText(['12']);
FontStyle1017 := TFontStyleNode.Create;
FontStyle1017.Size := 0.035;
{ .SetFontStyle }
Text1016.FontStyle := FontStyle1017;
{ .SetGeometry }
Shape1015.Geometry := Text1016;
{ .AddChildren }
Billboard1014.AddChildren([Shape1015]);
{ .AddChildren }
HAnimSite1011.AddChildren([Billboard1014]);
{ .AddChildren }
HAnimSegment996.AddChildren([HAnimSite1011]);
Shape1018 := TShapeNode.Create;
LineSet1019 := TLineSetNode.Create;
LineSet1019.SetVertexCount([2]);
Coordinate1020 := TCoordinateNode.Create;
Coordinate1020.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.082,1.4488,-0.0353)]);
{ .SetCoord }
LineSet1019.Coord := Coordinate1020;
{ from vt1 to l_sternoclavicular vertices 2 }
ColorRGBA1021 := TColorRGBANode.Create;
ColorRGBA1021 := ColorRGBA27;
{ .SetColor }
LineSet1019.Color := ColorRGBA1021;
{ .SetGeometry }
Shape1018.Geometry := LineSet1019;
{ .AddChildren }
HAnimSegment996.AddChildren([Shape1018]);
Shape1022 := TShapeNode.Create;
LineSet1023 := TLineSetNode.Create;
LineSet1023.SetVertexCount([2]);
Coordinate1024 := TCoordinateNode.Create;
Coordinate1024.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(-0.0694,1.46,-0.033)]);
{ .SetCoord }
LineSet1023.Coord := Coordinate1024;
{ from vt1 to r_sternoclavicular vertices 2 }
ColorRGBA1025 := TColorRGBANode.Create;
ColorRGBA1025 := ColorRGBA27;
{ .SetColor }
LineSet1023.Color := ColorRGBA1025;
{ .SetGeometry }
Shape1022.Geometry := LineSet1023;
{ .AddChildren }
HAnimSegment996.AddChildren([Shape1022]);
{ .AddChildren }
HAnimJoint995.AddChildren([HAnimSegment996]);
HAnimJoint1026 := THAnimJointNode.Create;
HAnimJoint1026.NameField := 'vc7';
HAnimJoint1026.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimJoint1026.SetUlimit([0,0,0]);
HAnimJoint1026.SetLlimit([0,0,0]);
HAnimSegment1027 := THAnimSegmentNode.Create;
HAnimSegment1027.NameField := 'c7';
Transform1028 := TTransformNode.Create;
Transform1028.Translation := Vector3(0.0066,1.5132,-0.0301);
Transform1029 := TTransformNode.Create;
{ Empty Transform }
Shape1030 := TShapeNode.Create;
Shape1030 := Shape20;
{ .AddChild }
Transform1029.AddChildren([Shape1030]);
{ .AddChildren }
Transform1028.AddChildren([Transform1029]);
{ .AddChildren }
HAnimSegment1027.AddChildren([Transform1028]);
Shape1031 := TShapeNode.Create;
LineSet1032 := TLineSetNode.Create;
LineSet1032.SetVertexCount([2]);
Coordinate1033 := TCoordinateNode.Create;
Coordinate1033.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(0.0066,1.5357,-0.0143)]);
{ .SetCoord }
LineSet1032.Coord := Coordinate1033;
{ from vc7 to vc6 vertices 2 }
ColorRGBA1034 := TColorRGBANode.Create;
ColorRGBA1034 := ColorRGBA27;
{ .SetColor }
LineSet1032.Color := ColorRGBA1034;
{ .SetGeometry }
Shape1031.Geometry := LineSet1032;
{ .AddChildren }
HAnimSegment1027.AddChildren([Shape1031]);
HAnimSite1035 := THAnimSiteNode.Create;
HAnimSite1035.NameField := 'l_neck_base';
HAnimSite1035.Translation := Vector3(0.0646,1.5141,-0.038);
TouchSensor1036 := TTouchSensorNode.Create;
TouchSensor1036.Description := 'HAnimSite 82 l_neck_base';
{ .AddChildren }
HAnimSite1035.AddChildren([TouchSensor1036]);
Shape1037 := TShapeNode.Create;
Shape1037 := Shape30;
{ .AddChildren }
HAnimSite1035.AddChildren([Shape1037]);
Billboard1038 := TBillboardNode.Create;
Shape1039 := TShapeNode.Create;
Text1040 := TTextNode.Create;
Text1040.SetText(['82']);
FontStyle1041 := TFontStyleNode.Create;
FontStyle1041.Size := 0.035;
{ .SetFontStyle }
Text1040.FontStyle := FontStyle1041;
{ .SetGeometry }
Shape1039.Geometry := Text1040;
{ .AddChildren }
Billboard1038.AddChildren([Shape1039]);
{ .AddChildren }
HAnimSite1035.AddChildren([Billboard1038]);
{ .AddChildren }
HAnimSegment1027.AddChildren([HAnimSite1035]);
HAnimSite1042 := THAnimSiteNode.Create;
HAnimSite1042.NameField := 'r_neck_base';
HAnimSite1042.Translation := Vector3(-0.0419,1.5149,-0.022);
TouchSensor1043 := TTouchSensorNode.Create;
TouchSensor1043.Description := 'HAnimSite 83 r_neck_base';
{ .AddChildren }
HAnimSite1042.AddChildren([TouchSensor1043]);
Shape1044 := TShapeNode.Create;
Shape1044 := Shape30;
{ .AddChildren }
HAnimSite1042.AddChildren([Shape1044]);
Billboard1045 := TBillboardNode.Create;
Shape1046 := TShapeNode.Create;
Text1047 := TTextNode.Create;
Text1047.SetText(['83']);
FontStyle1048 := TFontStyleNode.Create;
FontStyle1048.Size := 0.035;
{ .SetFontStyle }
Text1047.FontStyle := FontStyle1048;
{ .SetGeometry }
Shape1046.Geometry := Text1047;
{ .AddChildren }
Billboard1045.AddChildren([Shape1046]);
{ .AddChildren }
HAnimSite1042.AddChildren([Billboard1045]);
{ .AddChildren }
HAnimSegment1027.AddChildren([HAnimSite1042]);
{ .AddChildren }
HAnimJoint1026.AddChildren([HAnimSegment1027]);
HAnimJoint1049 := THAnimJointNode.Create;
HAnimJoint1049.NameField := 'vc6';
HAnimJoint1049.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimJoint1049.SetUlimit([0,0,0]);
HAnimJoint1049.SetLlimit([0,0,0]);
HAnimSegment1050 := THAnimSegmentNode.Create;
HAnimSegment1050.NameField := 'c6';
Transform1051 := TTransformNode.Create;
Transform1051.Translation := Vector3(0.0066,1.5357,-0.0143);
Transform1052 := TTransformNode.Create;
{ Empty Transform }
Shape1053 := TShapeNode.Create;
Shape1053 := Shape20;
{ .AddChild }
Transform1052.AddChildren([Shape1053]);
{ .AddChildren }
Transform1051.AddChildren([Transform1052]);
{ .AddChildren }
HAnimSegment1050.AddChildren([Transform1051]);
Shape1054 := TShapeNode.Create;
LineSet1055 := TLineSetNode.Create;
LineSet1055.SetVertexCount([2]);
Coordinate1056 := TCoordinateNode.Create;
Coordinate1056.SetPoint([Vector3(0.0066,1.5357,-0.0143),Vector3(0.0066,1.552,-0.0082)]);
{ .SetCoord }
LineSet1055.Coord := Coordinate1056;
{ from vc6 to vc5 vertices 2 }
ColorRGBA1057 := TColorRGBANode.Create;
ColorRGBA1057 := ColorRGBA27;
{ .SetColor }
LineSet1055.Color := ColorRGBA1057;
{ .SetGeometry }
Shape1054.Geometry := LineSet1055;
{ .AddChildren }
HAnimSegment1050.AddChildren([Shape1054]);
{ .AddChildren }
HAnimJoint1049.AddChildren([HAnimSegment1050]);
HAnimJoint1058 := THAnimJointNode.Create;
HAnimJoint1058.NameField := 'vc5';
HAnimJoint1058.Center := Vector3(0.0066,1.552,-0.0082);
HAnimJoint1058.SetUlimit([0,0,0]);
HAnimJoint1058.SetLlimit([0,0,0]);
HAnimSegment1059 := THAnimSegmentNode.Create;
HAnimSegment1059.NameField := 'c5';
Transform1060 := TTransformNode.Create;
Transform1060.Translation := Vector3(0.0066,1.552,-0.0082);
Transform1061 := TTransformNode.Create;
{ Empty Transform }
Shape1062 := TShapeNode.Create;
Shape1062 := Shape20;
{ .AddChild }
Transform1061.AddChildren([Shape1062]);
{ .AddChildren }
Transform1060.AddChildren([Transform1061]);
{ .AddChildren }
HAnimSegment1059.AddChildren([Transform1060]);
Shape1063 := TShapeNode.Create;
LineSet1064 := TLineSetNode.Create;
LineSet1064.SetVertexCount([2]);
Coordinate1065 := TCoordinateNode.Create;
Coordinate1065.SetPoint([Vector3(0.0066,1.552,-0.0082),Vector3(0.0066,1.5662,-0.0084)]);
{ .SetCoord }
LineSet1064.Coord := Coordinate1065;
{ from vc5 to vc4 vertices 2 }
ColorRGBA1066 := TColorRGBANode.Create;
ColorRGBA1066 := ColorRGBA27;
{ .SetColor }
LineSet1064.Color := ColorRGBA1066;
{ .SetGeometry }
Shape1063.Geometry := LineSet1064;
{ .AddChildren }
HAnimSegment1059.AddChildren([Shape1063]);
{ .AddChildren }
HAnimJoint1058.AddChildren([HAnimSegment1059]);
HAnimJoint1067 := THAnimJointNode.Create;
HAnimJoint1067.NameField := 'vc4';
HAnimJoint1067.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimJoint1067.SetUlimit([0,0,0]);
HAnimJoint1067.SetLlimit([0,0,0]);
HAnimSegment1068 := THAnimSegmentNode.Create;
HAnimSegment1068.NameField := 'c4';
Transform1069 := TTransformNode.Create;
Transform1069.Translation := Vector3(0.0066,1.5662,-0.0084);
Transform1070 := TTransformNode.Create;
{ Empty Transform }
Shape1071 := TShapeNode.Create;
Shape1071 := Shape20;
{ .AddChild }
Transform1070.AddChildren([Shape1071]);
{ .AddChildren }
Transform1069.AddChildren([Transform1070]);
{ .AddChildren }
HAnimSegment1068.AddChildren([Transform1069]);
Shape1072 := TShapeNode.Create;
LineSet1073 := TLineSetNode.Create;
LineSet1073.SetVertexCount([2]);
Coordinate1074 := TCoordinateNode.Create;
Coordinate1074.SetPoint([Vector3(0.0066,1.5662,-0.0084),Vector3(0.0066,1.58,-0.0103)]);
{ .SetCoord }
LineSet1073.Coord := Coordinate1074;
{ from vc4 to vc3 vertices 2 }
ColorRGBA1075 := TColorRGBANode.Create;
ColorRGBA1075 := ColorRGBA27;
{ .SetColor }
LineSet1073.Color := ColorRGBA1075;
{ .SetGeometry }
Shape1072.Geometry := LineSet1073;
{ .AddChildren }
HAnimSegment1068.AddChildren([Shape1072]);
{ .AddChildren }
HAnimJoint1067.AddChildren([HAnimSegment1068]);
HAnimJoint1076 := THAnimJointNode.Create;
HAnimJoint1076.NameField := 'vc3';
HAnimJoint1076.Center := Vector3(0.0066,1.58,-0.0103);
HAnimJoint1076.SetUlimit([0,0,0]);
HAnimJoint1076.SetLlimit([0,0,0]);
HAnimSegment1077 := THAnimSegmentNode.Create;
HAnimSegment1077.NameField := 'c3';
Transform1078 := TTransformNode.Create;
Transform1078.Translation := Vector3(0.0066,1.58,-0.0103);
Transform1079 := TTransformNode.Create;
{ Empty Transform }
Shape1080 := TShapeNode.Create;
Shape1080 := Shape20;
{ .AddChild }
Transform1079.AddChildren([Shape1080]);
{ .AddChildren }
Transform1078.AddChildren([Transform1079]);
{ .AddChildren }
HAnimSegment1077.AddChildren([Transform1078]);
Shape1081 := TShapeNode.Create;
LineSet1082 := TLineSetNode.Create;
LineSet1082.SetVertexCount([2]);
Coordinate1083 := TCoordinateNode.Create;
Coordinate1083.SetPoint([Vector3(0.0066,1.58,-0.0103),Vector3(0.0066,1.5928,-0.0103)]);
{ .SetCoord }
LineSet1082.Coord := Coordinate1083;
{ from vc3 to vc2 vertices 2 }
ColorRGBA1084 := TColorRGBANode.Create;
ColorRGBA1084 := ColorRGBA27;
{ .SetColor }
LineSet1082.Color := ColorRGBA1084;
{ .SetGeometry }
Shape1081.Geometry := LineSet1082;
{ .AddChildren }
HAnimSegment1077.AddChildren([Shape1081]);
{ .AddChildren }
HAnimJoint1076.AddChildren([HAnimSegment1077]);
HAnimJoint1085 := THAnimJointNode.Create;
HAnimJoint1085.NameField := 'vc2';
HAnimJoint1085.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimJoint1085.SetUlimit([0,0,0]);
HAnimJoint1085.SetLlimit([0,0,0]);
HAnimSegment1086 := THAnimSegmentNode.Create;
HAnimSegment1086.NameField := 'c2';
Transform1087 := TTransformNode.Create;
Transform1087.Translation := Vector3(0.0066,1.5928,-0.0103);
Transform1088 := TTransformNode.Create;
{ Empty Transform }
Shape1089 := TShapeNode.Create;
Shape1089 := Shape20;
{ .AddChild }
Transform1088.AddChildren([Shape1089]);
{ .AddChildren }
Transform1087.AddChildren([Transform1088]);
{ .AddChildren }
HAnimSegment1086.AddChildren([Transform1087]);
Shape1090 := TShapeNode.Create;
LineSet1091 := TLineSetNode.Create;
LineSet1091.SetVertexCount([2]);
Coordinate1092 := TCoordinateNode.Create;
Coordinate1092.SetPoint([Vector3(0.0066,1.5928,-0.0103),Vector3(0.0066,1.6144,-0.0034)]);
{ .SetCoord }
LineSet1091.Coord := Coordinate1092;
{ from vc2 to vc1 vertices 2 }
ColorRGBA1093 := TColorRGBANode.Create;
ColorRGBA1093 := ColorRGBA27;
{ .SetColor }
LineSet1091.Color := ColorRGBA1093;
{ .SetGeometry }
Shape1090.Geometry := LineSet1091;
{ .AddChildren }
HAnimSegment1086.AddChildren([Shape1090]);
HAnimSite1094 := THAnimSiteNode.Create;
HAnimSite1094.NameField := 'adams_apple';
TouchSensor1095 := TTouchSensorNode.Create;
TouchSensor1095.Description := 'HAnimSite 11 adams_apple';
{ .AddChildren }
HAnimSite1094.AddChildren([TouchSensor1095]);
Shape1096 := TShapeNode.Create;
Shape1096 := Shape30;
{ .AddChildren }
HAnimSite1094.AddChildren([Shape1096]);
Billboard1097 := TBillboardNode.Create;
Shape1098 := TShapeNode.Create;
Text1099 := TTextNode.Create;
Text1099.SetText(['11']);
FontStyle1100 := TFontStyleNode.Create;
FontStyle1100.Size := 0.035;
{ .SetFontStyle }
Text1099.FontStyle := FontStyle1100;
{ .SetGeometry }
Shape1098.Geometry := Text1099;
{ .AddChildren }
Billboard1097.AddChildren([Shape1098]);
{ .AddChildren }
HAnimSite1094.AddChildren([Billboard1097]);
{ .AddChildren }
HAnimSegment1086.AddChildren([HAnimSite1094]);
{ .AddChildren }
HAnimJoint1085.AddChildren([HAnimSegment1086]);
HAnimJoint1101 := THAnimJointNode.Create;
HAnimJoint1101.NameField := 'vc1';
HAnimJoint1101.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimJoint1101.SetUlimit([0,0,0]);
HAnimJoint1101.SetLlimit([0,0,0]);
HAnimSegment1102 := THAnimSegmentNode.Create;
HAnimSegment1102.NameField := 'c1';
Transform1103 := TTransformNode.Create;
Transform1103.Translation := Vector3(0.0066,1.6144,-0.0034);
Transform1104 := TTransformNode.Create;
{ Empty Transform }
Shape1105 := TShapeNode.Create;
Shape1105 := Shape20;
{ .AddChild }
Transform1104.AddChildren([Shape1105]);
{ .AddChildren }
Transform1103.AddChildren([Transform1104]);
{ .AddChildren }
HAnimSegment1102.AddChildren([Transform1103]);
Shape1106 := TShapeNode.Create;
LineSet1107 := TLineSetNode.Create;
LineSet1107.SetVertexCount([2]);
Coordinate1108 := TCoordinateNode.Create;
Coordinate1108.SetPoint([Vector3(0.0066,1.6144,-0.0034),Vector3(0.0044,1.6209,0.0236)]);
{ .SetCoord }
LineSet1107.Coord := Coordinate1108;
{ from vc1 to skullbase vertices 2 }
ColorRGBA1109 := TColorRGBANode.Create;
ColorRGBA1109 := ColorRGBA27;
{ .SetColor }
LineSet1107.Color := ColorRGBA1109;
{ .SetGeometry }
Shape1106.Geometry := LineSet1107;
{ .AddChildren }
HAnimSegment1102.AddChildren([Shape1106]);
{ .AddChildren }
HAnimJoint1101.AddChildren([HAnimSegment1102]);
HAnimJoint1110 := THAnimJointNode.Create;
HAnimJoint1110.NameField := 'skullbase';
HAnimJoint1110.Center := Vector3(0.0044,1.6209,0.0236);
HAnimJoint1110.SetUlimit([0,0,0]);
HAnimJoint1110.SetLlimit([0,0,0]);
HAnimSegment1111 := THAnimSegmentNode.Create;
HAnimSegment1111.NameField := 'skull';
Transform1112 := TTransformNode.Create;
Transform1112.Translation := Vector3(0.0044,1.6209,0.0236);
Transform1113 := TTransformNode.Create;
{ Empty Transform }
Shape1114 := TShapeNode.Create;
Shape1114 := Shape20;
{ .AddChild }
Transform1113.AddChildren([Shape1114]);
{ .AddChildren }
Transform1112.AddChildren([Transform1113]);
{ .AddChildren }
HAnimSegment1111.AddChildren([Transform1112]);
Shape1115 := TShapeNode.Create;
LineSet1116 := TLineSetNode.Create;
LineSet1116.SetVertexCount([2]);
Coordinate1117 := TCoordinateNode.Create;
Coordinate1117.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0503,1.4157,-0.0689)]);
{ .SetCoord }
LineSet1116.Coord := Coordinate1117;
{ from skullbase to l_eyelid_joint vertices 2 }
ColorRGBA1118 := TColorRGBANode.Create;
ColorRGBA1118 := ColorRGBA27;
{ .SetColor }
LineSet1116.Color := ColorRGBA1118;
{ .SetGeometry }
Shape1115.Geometry := LineSet1116;
{ .AddChildren }
HAnimSegment1111.AddChildren([Shape1115]);
HAnimSite1119 := THAnimSiteNode.Create;
HAnimSite1119.NameField := 'glabella';
TouchSensor1120 := TTouchSensorNode.Create;
TouchSensor1120.Description := 'HAnimSite 1 glabella';
{ .AddChildren }
HAnimSite1119.AddChildren([TouchSensor1120]);
Shape1121 := TShapeNode.Create;
Shape1121 := Shape30;
{ .AddChildren }
HAnimSite1119.AddChildren([Shape1121]);
Billboard1122 := TBillboardNode.Create;
Shape1123 := TShapeNode.Create;
Text1124 := TTextNode.Create;
Text1124.SetText(['1']);
FontStyle1125 := TFontStyleNode.Create;
FontStyle1125.Size := 0.035;
{ .SetFontStyle }
Text1124.FontStyle := FontStyle1125;
{ .SetGeometry }
Shape1123.Geometry := Text1124;
{ .AddChildren }
Billboard1122.AddChildren([Shape1123]);
{ .AddChildren }
HAnimSite1119.AddChildren([Billboard1122]);
{ .AddChildren }
HAnimSegment1111.AddChildren([HAnimSite1119]);
HAnimSite1126 := THAnimSiteNode.Create;
HAnimSite1126.NameField := 'l_ectocanthus';
TouchSensor1127 := TTouchSensorNode.Create;
TouchSensor1127.Description := 'HAnimSite 85 l_ectocanthus';
{ .AddChildren }
HAnimSite1126.AddChildren([TouchSensor1127]);
Shape1128 := TShapeNode.Create;
Shape1128 := Shape30;
{ .AddChildren }
HAnimSite1126.AddChildren([Shape1128]);
Billboard1129 := TBillboardNode.Create;
Shape1130 := TShapeNode.Create;
Text1131 := TTextNode.Create;
Text1131.SetText(['85']);
FontStyle1132 := TFontStyleNode.Create;
FontStyle1132.Size := 0.035;
{ .SetFontStyle }
Text1131.FontStyle := FontStyle1132;
{ .SetGeometry }
Shape1130.Geometry := Text1131;
{ .AddChildren }
Billboard1129.AddChildren([Shape1130]);
{ .AddChildren }
HAnimSite1126.AddChildren([Billboard1129]);
{ .AddChildren }
HAnimSegment1111.AddChildren([HAnimSite1126]);
HAnimSite1133 := THAnimSiteNode.Create;
HAnimSite1133.NameField := 'l_infraorbitale';
HAnimSite1133.Translation := Vector3(0.0341,1.6171,0.0752);
TouchSensor1134 := TTouchSensorNode.Create;
TouchSensor1134.Description := 'HAnimSite 3 l_infraorbitale';
{ .AddChildren }
HAnimSite1133.AddChildren([TouchSensor1134]);
Shape1135 := TShapeNode.Create;
Shape1135 := Shape30;
{ .AddChildren }
HAnimSite1133.AddChildren([Shape1135]);
Billboard1136 := TBillboardNode.Create;
Shape1137 := TShapeNode.Create;
Text1138 := TTextNode.Create;
Text1138.SetText(['3']);
FontStyle1139 := TFontStyleNode.Create;
FontStyle1139.Size := 0.035;
{ .SetFontStyle }
Text1138.FontStyle := FontStyle1139;
{ .SetGeometry }
Shape1137.Geometry := Text1138;
{ .AddChildren }
Billboard1136.AddChildren([Shape1137]);
{ .AddChildren }
HAnimSite1133.AddChildren([Billboard1136]);
{ .AddChildren }
HAnimSegment1111.AddChildren([HAnimSite1133]);
HAnimSite1140 := THAnimSiteNode.Create;
HAnimSite1140.NameField := 'l_tragion';
HAnimSite1140.Translation := Vector3(0.0739,1.6348,0.0282);
TouchSensor1141 := TTouchSensorNode.Create;
TouchSensor1141.Description := 'HAnimSite 4 l_tragion';
{ .AddChildren }
HAnimSite1140.AddChildren([TouchSensor1141]);
Shape1142 := TShapeNode.Create;
Shape1142 := Shape30;
{ .AddChildren }
HAnimSite1140.AddChildren([Shape1142]);
Billboard1143 := TBillboardNode.Create;
Shape1144 := TShapeNode.Create;
Text1145 := TTextNode.Create;
Text1145.SetText(['4']);
FontStyle1146 := TFontStyleNode.Create;
FontStyle1146.Size := 0.035;
{ .SetFontStyle }
Text1145.FontStyle := FontStyle1146;
{ .SetGeometry }
Shape1144.Geometry := Text1145;
{ .AddChildren }
Billboard1143.AddChildren([Shape1144]);
{ .AddChildren }
HAnimSite1140.AddChildren([Billboard1143]);
{ .AddChildren }
HAnimSegment1111.AddChildren([HAnimSite1140]);
HAnimSite1147 := THAnimSiteNode.Create;
HAnimSite1147.NameField := 'nuchale';
HAnimSite1147.Translation := Vector3(0.0039,1.5972,-0.0796);
TouchSensor1148 := TTouchSensorNode.Create;
TouchSensor1148.Description := 'HAnimSite 81 nuchale';
{ .AddChildren }
HAnimSite1147.AddChildren([TouchSensor1148]);
Shape1149 := TShapeNode.Create;
Shape1149 := Shape30;
{ .AddChildren }
HAnimSite1147.AddChildren([Shape1149]);
Billboard1150 := TBillboardNode.Create;
Shape1151 := TShapeNode.Create;
Text1152 := TTextNode.Create;
Text1152.SetText(['81']);
FontStyle1153 := TFontStyleNode.Create;
FontStyle1153.Size := 0.035;
{ .SetFontStyle }
Text1152.FontStyle := FontStyle1153;
{ .SetGeometry }
Shape1151.Geometry := Text1152;
{ .AddChildren }
Billboard1150.AddChildren([Shape1151]);
{ .AddChildren }
HAnimSite1147.AddChildren([Billboard1150]);
{ .AddChildren }
HAnimSegment1111.AddChildren([HAnimSite1147]);
HAnimSite1154 := THAnimSiteNode.Create;
HAnimSite1154.NameField := 'opisthocranion';
TouchSensor1155 := TTouchSensorNode.Create;
TouchSensor1155.Description := 'HAnimSite 89 opisthocranion';
{ .AddChildren }
HAnimSite1154.AddChildren([TouchSensor1155]);
Shape1156 := TShapeNode.Create;
Shape1156 := Shape30;
{ .AddChildren }
HAnimSite1154.AddChildren([Shape1156]);
Billboard1157 := TBillboardNode.Create;
Shape1158 := TShapeNode.Create;
Text1159 := TTextNode.Create;
Text1159.SetText(['89']);
FontStyle1160 := TFontStyleNode.Create;
FontStyle1160.Size := 0.035;
{ .SetFontStyle }
Text1159.FontStyle := FontStyle1160;
{ .SetGeometry }
Shape1158.Geometry := Text1159;
{ .AddChildren }
Billboard1157.AddChildren([Shape1158]);
{ .AddChildren }
HAnimSite1154.AddChildren([Billboard1157]);
{ .AddChildren }
HAnimSegment1111.AddChildren([HAnimSite1154]);
HAnimSite1161 := THAnimSiteNode.Create;
HAnimSite1161.NameField := 'r_ectocanthus';
TouchSensor1162 := TTouchSensorNode.Create;
TouchSensor1162.Description := 'HAnimSite 86 r_ectocanthus';
{ .AddChildren }
HAnimSite1161.AddChildren([TouchSensor1162]);
Shape1163 := TShapeNode.Create;
Shape1163 := Shape30;
{ .AddChildren }
HAnimSite1161.AddChildren([Shape1163]);
Billboard1164 := TBillboardNode.Create;
Shape1165 := TShapeNode.Create;
Text1166 := TTextNode.Create;
Text1166.SetText(['86']);
FontStyle1167 := TFontStyleNode.Create;
FontStyle1167.Size := 0.035;
{ .SetFontStyle }
Text1166.FontStyle := FontStyle1167;
{ .SetGeometry }
Shape1165.Geometry := Text1166;
{ .AddChildren }
Billboard1164.AddChildren([Shape1165]);
{ .AddChildren }
HAnimSite1161.AddChildren([Billboard1164]);
{ .AddChildren }
HAnimSegment1111.AddChildren([HAnimSite1161]);
HAnimSite1168 := THAnimSiteNode.Create;
HAnimSite1168.NameField := 'r_infraorbitale';
HAnimSite1168.Translation := Vector3(-0.0237,1.6171,0.0752);
TouchSensor1169 := TTouchSensorNode.Create;
TouchSensor1169.Description := 'HAnimSite 6 r_infraorbitale';
{ .AddChildren }
HAnimSite1168.AddChildren([TouchSensor1169]);
Shape1170 := TShapeNode.Create;
Shape1170 := Shape30;
{ .AddChildren }
HAnimSite1168.AddChildren([Shape1170]);
Billboard1171 := TBillboardNode.Create;
Shape1172 := TShapeNode.Create;
Text1173 := TTextNode.Create;
Text1173.SetText(['6']);
FontStyle1174 := TFontStyleNode.Create;
FontStyle1174.Size := 0.035;
{ .SetFontStyle }
Text1173.FontStyle := FontStyle1174;
{ .SetGeometry }
Shape1172.Geometry := Text1173;
{ .AddChildren }
Billboard1171.AddChildren([Shape1172]);
{ .AddChildren }
HAnimSite1168.AddChildren([Billboard1171]);
{ .AddChildren }
HAnimSegment1111.AddChildren([HAnimSite1168]);
HAnimSite1175 := THAnimSiteNode.Create;
HAnimSite1175.NameField := 'r_tragion';
HAnimSite1175.Translation := Vector3(-0.0646,1.6347,0.0302);
TouchSensor1176 := TTouchSensorNode.Create;
TouchSensor1176.Description := 'HAnimSite 7 r_tragion';
{ .AddChildren }
HAnimSite1175.AddChildren([TouchSensor1176]);
Shape1177 := TShapeNode.Create;
Shape1177 := Shape30;
{ .AddChildren }
HAnimSite1175.AddChildren([Shape1177]);
Billboard1178 := TBillboardNode.Create;
Shape1179 := TShapeNode.Create;
Text1180 := TTextNode.Create;
Text1180.SetText(['7']);
FontStyle1181 := TFontStyleNode.Create;
FontStyle1181.Size := 0.035;
{ .SetFontStyle }
Text1180.FontStyle := FontStyle1181;
{ .SetGeometry }
Shape1179.Geometry := Text1180;
{ .AddChildren }
Billboard1178.AddChildren([Shape1179]);
{ .AddChildren }
HAnimSite1175.AddChildren([Billboard1178]);
{ .AddChildren }
HAnimSegment1111.AddChildren([HAnimSite1175]);
HAnimSite1182 := THAnimSiteNode.Create;
HAnimSite1182.NameField := 'sellion';
HAnimSite1182.Translation := Vector3(0.0058,1.6316,0.0852);
TouchSensor1183 := TTouchSensorNode.Create;
TouchSensor1183.Description := 'HAnimSite 2 sellion';
{ .AddChildren }
HAnimSite1182.AddChildren([TouchSensor1183]);
Shape1184 := TShapeNode.Create;
Shape1184 := Shape30;
{ .AddChildren }
HAnimSite1182.AddChildren([Shape1184]);
Billboard1185 := TBillboardNode.Create;
Shape1186 := TShapeNode.Create;
Text1187 := TTextNode.Create;
Text1187.SetText(['2']);
FontStyle1188 := TFontStyleNode.Create;
FontStyle1188.Size := 0.035;
{ .SetFontStyle }
Text1187.FontStyle := FontStyle1188;
{ .SetGeometry }
Shape1186.Geometry := Text1187;
{ .AddChildren }
Billboard1185.AddChildren([Shape1186]);
{ .AddChildren }
HAnimSite1182.AddChildren([Billboard1185]);
{ .AddChildren }
HAnimSegment1111.AddChildren([HAnimSite1182]);
HAnimSite1189 := THAnimSiteNode.Create;
HAnimSite1189.NameField := 'skull_vertex';
HAnimSite1189.Translation := Vector3(0.005,1.7504,0.0055);
TouchSensor1190 := TTouchSensorNode.Create;
TouchSensor1190.Description := 'HAnimSite 0 skull_vertex';
{ .AddChildren }
HAnimSite1189.AddChildren([TouchSensor1190]);
Shape1191 := TShapeNode.Create;
Shape1191 := Shape30;
{ .AddChildren }
HAnimSite1189.AddChildren([Shape1191]);
Billboard1192 := TBillboardNode.Create;
Shape1193 := TShapeNode.Create;
Text1194 := TTextNode.Create;
Text1194.SetText(['0']);
FontStyle1195 := TFontStyleNode.Create;
FontStyle1195.Size := 0.035;
{ .SetFontStyle }
Text1194.FontStyle := FontStyle1195;
{ .SetGeometry }
Shape1193.Geometry := Text1194;
{ .AddChildren }
Billboard1192.AddChildren([Shape1193]);
{ .AddChildren }
HAnimSite1189.AddChildren([Billboard1192]);
{ .AddChildren }
HAnimSegment1111.AddChildren([HAnimSite1189]);
Shape1196 := TShapeNode.Create;
LineSet1197 := TLineSetNode.Create;
LineSet1197.SetVertexCount([2]);
Coordinate1198 := TCoordinateNode.Create;
Coordinate1198.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0507,1.4157,-0.0689)]);
{ .SetCoord }
LineSet1197.Coord := Coordinate1198;
{ from skullbase to r_eyelid_joint vertices 2 }
ColorRGBA1199 := TColorRGBANode.Create;
ColorRGBA1199 := ColorRGBA27;
{ .SetColor }
LineSet1197.Color := ColorRGBA1199;
{ .SetGeometry }
Shape1196.Geometry := LineSet1197;
{ .AddChildren }
HAnimSegment1111.AddChildren([Shape1196]);
Shape1200 := TShapeNode.Create;
LineSet1201 := TLineSetNode.Create;
LineSet1201.SetVertexCount([2]);
Coordinate1202 := TCoordinateNode.Create;
Coordinate1202.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0479,1.3963,-0.0188)]);
{ .SetCoord }
LineSet1201.Coord := Coordinate1202;
{ from skullbase to l_eyeball_joint vertices 2 }
ColorRGBA1203 := TColorRGBANode.Create;
ColorRGBA1203 := ColorRGBA27;
{ .SetColor }
LineSet1201.Color := ColorRGBA1203;
{ .SetGeometry }
Shape1200.Geometry := LineSet1201;
{ .AddChildren }
HAnimSegment1111.AddChildren([Shape1200]);
Shape1204 := TShapeNode.Create;
LineSet1205 := TLineSetNode.Create;
LineSet1205.SetVertexCount([2]);
Coordinate1206 := TCoordinateNode.Create;
Coordinate1206.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0483,1.3963,-0.0188)]);
{ .SetCoord }
LineSet1205.Coord := Coordinate1206;
{ from skullbase to r_eyeball_joint vertices 2 }
ColorRGBA1207 := TColorRGBANode.Create;
ColorRGBA1207 := ColorRGBA27;
{ .SetColor }
LineSet1205.Color := ColorRGBA1207;
{ .SetGeometry }
Shape1204.Geometry := LineSet1205;
{ .AddChildren }
HAnimSegment1111.AddChildren([Shape1204]);
Shape1208 := TShapeNode.Create;
LineSet1209 := TLineSetNode.Create;
LineSet1209.SetVertexCount([2]);
Coordinate1210 := TCoordinateNode.Create;
Coordinate1210.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0216,1.4053,0.0051)]);
{ .SetCoord }
LineSet1209.Coord := Coordinate1210;
{ from skullbase to l_eyebrow_joint vertices 2 }
ColorRGBA1211 := TColorRGBANode.Create;
ColorRGBA1211 := ColorRGBA27;
{ .SetColor }
LineSet1209.Color := ColorRGBA1211;
{ .SetGeometry }
Shape1208.Geometry := LineSet1209;
{ .AddChildren }
HAnimSegment1111.AddChildren([Shape1208]);
Shape1212 := TShapeNode.Create;
LineSet1213 := TLineSetNode.Create;
LineSet1213.SetVertexCount([2]);
Coordinate1214 := TCoordinateNode.Create;
Coordinate1214.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0219,1.4053,0.0051)]);
{ .SetCoord }
LineSet1213.Coord := Coordinate1214;
{ from skullbase to r_eyebrow_joint vertices 2 }
ColorRGBA1215 := TColorRGBANode.Create;
ColorRGBA1215 := ColorRGBA27;
{ .SetColor }
LineSet1213.Color := ColorRGBA1215;
{ .SetGeometry }
Shape1212.Geometry := LineSet1213;
{ .AddChildren }
HAnimSegment1111.AddChildren([Shape1212]);
Shape1216 := TShapeNode.Create;
LineSet1217 := TLineSetNode.Create;
LineSet1217.SetVertexCount([2]);
Coordinate1218 := TCoordinateNode.Create;
Coordinate1218.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0002,1.3043,-0.0865)]);
{ .SetCoord }
LineSet1217.Coord := Coordinate1218;
{ from skullbase to temporomandibular vertices 2 }
ColorRGBA1219 := TColorRGBANode.Create;
ColorRGBA1219 := ColorRGBA27;
{ .SetColor }
LineSet1217.Color := ColorRGBA1219;
{ .SetGeometry }
Shape1216.Geometry := LineSet1217;
{ .AddChildren }
HAnimSegment1111.AddChildren([Shape1216]);
{ .AddChildren }
HAnimJoint1110.AddChildren([HAnimSegment1111]);
HAnimJoint1220 := THAnimJointNode.Create;
HAnimJoint1220.NameField := 'l_eyelid_joint';
HAnimJoint1220.Center := Vector3(0.0503,1.4157,-0.0689);
HAnimJoint1220.SetUlimit([0,0,0]);
HAnimJoint1220.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1110.AddChildren([HAnimJoint1220]);
HAnimJoint1221 := THAnimJointNode.Create;
HAnimJoint1221.NameField := 'r_eyelid_joint';
HAnimJoint1221.Center := Vector3(-0.0507,1.4157,-0.0689);
HAnimJoint1221.SetUlimit([0,0,0]);
HAnimJoint1221.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1110.AddChildren([HAnimJoint1221]);
HAnimJoint1222 := THAnimJointNode.Create;
HAnimJoint1222.NameField := 'l_eyeball_joint';
HAnimJoint1222.Center := Vector3(0.0479,1.3963,-0.0188);
HAnimJoint1222.SetUlimit([0,0,0]);
HAnimJoint1222.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1110.AddChildren([HAnimJoint1222]);
HAnimJoint1223 := THAnimJointNode.Create;
HAnimJoint1223.NameField := 'r_eyeball_joint';
HAnimJoint1223.Center := Vector3(-0.0483,1.3963,-0.0188);
HAnimJoint1223.SetUlimit([0,0,0]);
HAnimJoint1223.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1110.AddChildren([HAnimJoint1223]);
HAnimJoint1224 := THAnimJointNode.Create;
HAnimJoint1224.NameField := 'l_eyebrow_joint';
HAnimJoint1224.Center := Vector3(0.0216,1.4053,0.0051);
HAnimJoint1224.SetUlimit([0,0,0]);
HAnimJoint1224.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1110.AddChildren([HAnimJoint1224]);
HAnimJoint1225 := THAnimJointNode.Create;
HAnimJoint1225.NameField := 'r_eyebrow_joint';
HAnimJoint1225.Center := Vector3(-0.0219,1.4053,0.0051);
HAnimJoint1225.SetUlimit([0,0,0]);
HAnimJoint1225.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1110.AddChildren([HAnimJoint1225]);
HAnimJoint1226 := THAnimJointNode.Create;
HAnimJoint1226.NameField := 'temporomandibular';
HAnimJoint1226.Center := Vector3(-0.0002,1.3043,-0.0865);
HAnimJoint1226.SetUlimit([0,0,0]);
HAnimJoint1226.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1110.AddChildren([HAnimJoint1226]);
{ .AddChildren }
HAnimJoint1101.AddChildren([HAnimJoint1110]);
{ .AddChildren }
HAnimJoint1085.AddChildren([HAnimJoint1101]);
{ .AddChildren }
HAnimJoint1076.AddChildren([HAnimJoint1085]);
{ .AddChildren }
HAnimJoint1067.AddChildren([HAnimJoint1076]);
{ .AddChildren }
HAnimJoint1058.AddChildren([HAnimJoint1067]);
{ .AddChildren }
HAnimJoint1049.AddChildren([HAnimJoint1058]);
{ .AddChildren }
HAnimJoint1026.AddChildren([HAnimJoint1049]);
{ .AddChildren }
HAnimJoint995.AddChildren([HAnimJoint1026]);
HAnimJoint1227 := THAnimJointNode.Create;
HAnimJoint1227.NameField := 'l_sternoclavicular';
HAnimJoint1227.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint1227.SetUlimit([0,0,0]);
HAnimJoint1227.SetLlimit([0,0,0]);
HAnimSegment1228 := THAnimSegmentNode.Create;
HAnimSegment1228.NameField := 'l_clavicle';
Transform1229 := TTransformNode.Create;
Transform1229.Translation := Vector3(0.082,1.4488,-0.0353);
Transform1230 := TTransformNode.Create;
{ Empty Transform }
Shape1231 := TShapeNode.Create;
Shape1231 := Shape20;
{ .AddChild }
Transform1230.AddChildren([Shape1231]);
{ .AddChildren }
Transform1229.AddChildren([Transform1230]);
{ .AddChildren }
HAnimSegment1228.AddChildren([Transform1229]);
Shape1232 := TShapeNode.Create;
LineSet1233 := TLineSetNode.Create;
LineSet1233.SetVertexCount([2]);
Coordinate1234 := TCoordinateNode.Create;
Coordinate1234.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ .SetCoord }
LineSet1233.Coord := Coordinate1234;
{ from l_sternoclavicular to l_acromioclavicular vertices 2 }
ColorRGBA1235 := TColorRGBANode.Create;
ColorRGBA1235 := ColorRGBA27;
{ .SetColor }
LineSet1233.Color := ColorRGBA1235;
{ .SetGeometry }
Shape1232.Geometry := LineSet1233;
{ .AddChildren }
HAnimSegment1228.AddChildren([Shape1232]);
HAnimSite1236 := THAnimSiteNode.Create;
HAnimSite1236.NameField := 'l_acromion';
HAnimSite1236.Translation := Vector3(0.2032,1.476,-0.049);
TouchSensor1237 := TTouchSensorNode.Create;
TouchSensor1237.Description := 'HAnimSite 15 l_acromion';
{ .AddChildren }
HAnimSite1236.AddChildren([TouchSensor1237]);
Shape1238 := TShapeNode.Create;
Shape1238 := Shape30;
{ .AddChildren }
HAnimSite1236.AddChildren([Shape1238]);
Billboard1239 := TBillboardNode.Create;
Shape1240 := TShapeNode.Create;
Text1241 := TTextNode.Create;
Text1241.SetText(['15']);
FontStyle1242 := TFontStyleNode.Create;
FontStyle1242.Size := 0.035;
{ .SetFontStyle }
Text1241.FontStyle := FontStyle1242;
{ .SetGeometry }
Shape1240.Geometry := Text1241;
{ .AddChildren }
Billboard1239.AddChildren([Shape1240]);
{ .AddChildren }
HAnimSite1236.AddChildren([Billboard1239]);
{ .AddChildren }
HAnimSegment1228.AddChildren([HAnimSite1236]);
HAnimSite1243 := THAnimSiteNode.Create;
HAnimSite1243.NameField := 'l_axilla_distal';
HAnimSite1243.Translation := Vector3(0.1706,1.4072,-0.0875);
TouchSensor1244 := TTouchSensorNode.Create;
TouchSensor1244.Description := 'HAnimSite 17 l_axilla_distal';
{ .AddChildren }
HAnimSite1243.AddChildren([TouchSensor1244]);
Shape1245 := TShapeNode.Create;
Shape1245 := Shape30;
{ .AddChildren }
HAnimSite1243.AddChildren([Shape1245]);
Billboard1246 := TBillboardNode.Create;
Shape1247 := TShapeNode.Create;
Text1248 := TTextNode.Create;
Text1248.SetText(['17']);
FontStyle1249 := TFontStyleNode.Create;
FontStyle1249.Size := 0.035;
{ .SetFontStyle }
Text1248.FontStyle := FontStyle1249;
{ .SetGeometry }
Shape1247.Geometry := Text1248;
{ .AddChildren }
Billboard1246.AddChildren([Shape1247]);
{ .AddChildren }
HAnimSite1243.AddChildren([Billboard1246]);
{ .AddChildren }
HAnimSegment1228.AddChildren([HAnimSite1243]);
HAnimSite1250 := THAnimSiteNode.Create;
HAnimSite1250.NameField := 'l_axilla_posterior_folds';
TouchSensor1251 := TTouchSensorNode.Create;
TouchSensor1251.Description := 'HAnimSite 18 l_axilla_posterior_folds';
{ .AddChildren }
HAnimSite1250.AddChildren([TouchSensor1251]);
Shape1252 := TShapeNode.Create;
Shape1252 := Shape30;
{ .AddChildren }
HAnimSite1250.AddChildren([Shape1252]);
Billboard1253 := TBillboardNode.Create;
Shape1254 := TShapeNode.Create;
Text1255 := TTextNode.Create;
Text1255.SetText(['18']);
FontStyle1256 := TFontStyleNode.Create;
FontStyle1256.Size := 0.035;
{ .SetFontStyle }
Text1255.FontStyle := FontStyle1256;
{ .SetGeometry }
Shape1254.Geometry := Text1255;
{ .AddChildren }
Billboard1253.AddChildren([Shape1254]);
{ .AddChildren }
HAnimSite1250.AddChildren([Billboard1253]);
{ .AddChildren }
HAnimSegment1228.AddChildren([HAnimSite1250]);
HAnimSite1257 := THAnimSiteNode.Create;
HAnimSite1257.NameField := 'l_axilla_proximal';
HAnimSite1257.Translation := Vector3(0.1777,1.4065,-0.0075);
TouchSensor1258 := TTouchSensorNode.Create;
TouchSensor1258.Description := 'HAnimSite 16 l_axilla_proximal';
{ .AddChildren }
HAnimSite1257.AddChildren([TouchSensor1258]);
Shape1259 := TShapeNode.Create;
Shape1259 := Shape30;
{ .AddChildren }
HAnimSite1257.AddChildren([Shape1259]);
Billboard1260 := TBillboardNode.Create;
Shape1261 := TShapeNode.Create;
Text1262 := TTextNode.Create;
Text1262.SetText(['16']);
FontStyle1263 := TFontStyleNode.Create;
FontStyle1263.Size := 0.035;
{ .SetFontStyle }
Text1262.FontStyle := FontStyle1263;
{ .SetGeometry }
Shape1261.Geometry := Text1262;
{ .AddChildren }
Billboard1260.AddChildren([Shape1261]);
{ .AddChildren }
HAnimSite1257.AddChildren([Billboard1260]);
{ .AddChildren }
HAnimSegment1228.AddChildren([HAnimSite1257]);
HAnimSite1264 := THAnimSiteNode.Create;
HAnimSite1264.NameField := 'l_clavicale';
HAnimSite1264.Translation := Vector3(0.0271,1.4943,0.0394);
TouchSensor1265 := TTouchSensorNode.Create;
TouchSensor1265.Description := 'HAnimSite 14 l_clavicale';
{ .AddChildren }
HAnimSite1264.AddChildren([TouchSensor1265]);
Shape1266 := TShapeNode.Create;
Shape1266 := Shape30;
{ .AddChildren }
HAnimSite1264.AddChildren([Shape1266]);
Billboard1267 := TBillboardNode.Create;
Shape1268 := TShapeNode.Create;
Text1269 := TTextNode.Create;
Text1269.SetText(['14']);
FontStyle1270 := TFontStyleNode.Create;
FontStyle1270.Size := 0.035;
{ .SetFontStyle }
Text1269.FontStyle := FontStyle1270;
{ .SetGeometry }
Shape1268.Geometry := Text1269;
{ .AddChildren }
Billboard1267.AddChildren([Shape1268]);
{ .AddChildren }
HAnimSite1264.AddChildren([Billboard1267]);
{ .AddChildren }
HAnimSegment1228.AddChildren([HAnimSite1264]);
{ .AddChildren }
HAnimJoint1227.AddChildren([HAnimSegment1228]);
HAnimJoint1271 := THAnimJointNode.Create;
HAnimJoint1271.NameField := 'l_acromioclavicular';
HAnimJoint1271.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint1271.SetUlimit([0,0,0]);
HAnimJoint1271.SetLlimit([0,0,0]);
HAnimSegment1272 := THAnimSegmentNode.Create;
HAnimSegment1272.NameField := 'l_scapula';
Transform1273 := TTransformNode.Create;
Transform1273.Translation := Vector3(0.0962,1.4269,-0.0424);
Transform1274 := TTransformNode.Create;
{ Empty Transform }
Shape1275 := TShapeNode.Create;
Shape1275 := Shape20;
{ .AddChild }
Transform1274.AddChildren([Shape1275]);
{ .AddChildren }
Transform1273.AddChildren([Transform1274]);
{ .AddChildren }
HAnimSegment1272.AddChildren([Transform1273]);
Shape1276 := TShapeNode.Create;
LineSet1277 := TLineSetNode.Create;
LineSet1277.SetVertexCount([2]);
Coordinate1278 := TCoordinateNode.Create;
Coordinate1278.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2029,1.4376,-0.0387)]);
{ .SetCoord }
LineSet1277.Coord := Coordinate1278;
{ from l_acromioclavicular to l_shoulder vertices 2 }
ColorRGBA1279 := TColorRGBANode.Create;
ColorRGBA1279 := ColorRGBA27;
{ .SetColor }
LineSet1277.Color := ColorRGBA1279;
{ .SetGeometry }
Shape1276.Geometry := LineSet1277;
{ .AddChildren }
HAnimSegment1272.AddChildren([Shape1276]);
{ .AddChildren }
HAnimJoint1271.AddChildren([HAnimSegment1272]);
HAnimJoint1280 := THAnimJointNode.Create;
HAnimJoint1280.NameField := 'l_shoulder';
HAnimJoint1280.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimJoint1280.SetUlimit([0,0,0]);
HAnimJoint1280.SetLlimit([0,0,0]);
HAnimSegment1281 := THAnimSegmentNode.Create;
HAnimSegment1281.NameField := 'l_upperarm';
Transform1282 := TTransformNode.Create;
Transform1282.Translation := Vector3(0.2029,1.4376,-0.0387);
Transform1283 := TTransformNode.Create;
{ Empty Transform }
Shape1284 := TShapeNode.Create;
Shape1284 := Shape20;
{ .AddChild }
Transform1283.AddChildren([Shape1284]);
{ .AddChildren }
Transform1282.AddChildren([Transform1283]);
{ .AddChildren }
HAnimSegment1281.AddChildren([Transform1282]);
Shape1285 := TShapeNode.Create;
LineSet1286 := TLineSetNode.Create;
LineSet1286.SetVertexCount([2]);
Coordinate1287 := TCoordinateNode.Create;
Coordinate1287.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.2014,1.1357,-0.0682)]);
{ .SetCoord }
LineSet1286.Coord := Coordinate1287;
{ from l_shoulder to l_elbow vertices 2 }
ColorRGBA1288 := TColorRGBANode.Create;
ColorRGBA1288 := ColorRGBA27;
{ .SetColor }
LineSet1286.Color := ColorRGBA1288;
{ .SetGeometry }
Shape1285.Geometry := LineSet1286;
{ .AddChildren }
HAnimSegment1281.AddChildren([Shape1285]);
HAnimSite1289 := THAnimSiteNode.Create;
HAnimSite1289.NameField := 'l_bideltoid';
TouchSensor1290 := TTouchSensorNode.Create;
TouchSensor1290.Description := 'HAnimSite 96 l_bideltoid';
{ .AddChildren }
HAnimSite1289.AddChildren([TouchSensor1290]);
Shape1291 := TShapeNode.Create;
Shape1291 := Shape30;
{ .AddChildren }
HAnimSite1289.AddChildren([Shape1291]);
Billboard1292 := TBillboardNode.Create;
Shape1293 := TShapeNode.Create;
Text1294 := TTextNode.Create;
Text1294.SetText(['96']);
FontStyle1295 := TFontStyleNode.Create;
FontStyle1295.Size := 0.035;
{ .SetFontStyle }
Text1294.FontStyle := FontStyle1295;
{ .SetGeometry }
Shape1293.Geometry := Text1294;
{ .AddChildren }
Billboard1292.AddChildren([Shape1293]);
{ .AddChildren }
HAnimSite1289.AddChildren([Billboard1292]);
{ .AddChildren }
HAnimSegment1281.AddChildren([HAnimSite1289]);
HAnimSite1296 := THAnimSiteNode.Create;
HAnimSite1296.NameField := 'l_humeral_lateral_epicondyles';
HAnimSite1296.Translation := Vector3(0.228,1.1482,-0.11);
TouchSensor1297 := TTouchSensorNode.Create;
TouchSensor1297.Description := 'HAnimSite 63 l_humeral_lateral_epicondyles';
{ .AddChildren }
HAnimSite1296.AddChildren([TouchSensor1297]);
Shape1298 := TShapeNode.Create;
Shape1298 := Shape30;
{ .AddChildren }
HAnimSite1296.AddChildren([Shape1298]);
Billboard1299 := TBillboardNode.Create;
Shape1300 := TShapeNode.Create;
Text1301 := TTextNode.Create;
Text1301.SetText(['63']);
FontStyle1302 := TFontStyleNode.Create;
FontStyle1302.Size := 0.035;
{ .SetFontStyle }
Text1301.FontStyle := FontStyle1302;
{ .SetGeometry }
Shape1300.Geometry := Text1301;
{ .AddChildren }
Billboard1299.AddChildren([Shape1300]);
{ .AddChildren }
HAnimSite1296.AddChildren([Billboard1299]);
{ .AddChildren }
HAnimSegment1281.AddChildren([HAnimSite1296]);
{ .AddChildren }
HAnimJoint1280.AddChildren([HAnimSegment1281]);
HAnimJoint1303 := THAnimJointNode.Create;
HAnimJoint1303.NameField := 'l_elbow';
HAnimJoint1303.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimJoint1303.SetUlimit([0,0,0]);
HAnimJoint1303.SetLlimit([0,0,0]);
HAnimSegment1304 := THAnimSegmentNode.Create;
HAnimSegment1304.NameField := 'l_forearm';
Transform1305 := TTransformNode.Create;
Transform1305.Translation := Vector3(0.2014,1.1357,-0.0682);
Transform1306 := TTransformNode.Create;
{ Empty Transform }
Shape1307 := TShapeNode.Create;
Shape1307 := Shape20;
{ .AddChild }
Transform1306.AddChildren([Shape1307]);
{ .AddChildren }
Transform1305.AddChildren([Transform1306]);
{ .AddChildren }
HAnimSegment1304.AddChildren([Transform1305]);
Shape1308 := TShapeNode.Create;
LineSet1309 := TLineSetNode.Create;
LineSet1309.SetVertexCount([2]);
Coordinate1310 := TCoordinateNode.Create;
Coordinate1310.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1984,0.8663,-0.0583)]);
{ .SetCoord }
LineSet1309.Coord := Coordinate1310;
{ from l_elbow to l_radiocarpal vertices 2 }
ColorRGBA1311 := TColorRGBANode.Create;
ColorRGBA1311 := ColorRGBA27;
{ .SetColor }
LineSet1309.Color := ColorRGBA1311;
{ .SetGeometry }
Shape1308.Geometry := LineSet1309;
{ .AddChildren }
HAnimSegment1304.AddChildren([Shape1308]);
HAnimSite1312 := THAnimSiteNode.Create;
HAnimSite1312.NameField := 'l_humeral_medial_epicondyles';
HAnimSite1312.Translation := Vector3(0.1735,1.1272,-0.1113);
TouchSensor1313 := TTouchSensorNode.Create;
TouchSensor1313.Description := 'HAnimSite 64 l_humeral_medial_epicondyles';
{ .AddChildren }
HAnimSite1312.AddChildren([TouchSensor1313]);
Shape1314 := TShapeNode.Create;
Shape1314 := Shape30;
{ .AddChildren }
HAnimSite1312.AddChildren([Shape1314]);
Billboard1315 := TBillboardNode.Create;
Shape1316 := TShapeNode.Create;
Text1317 := TTextNode.Create;
Text1317.SetText(['64']);
FontStyle1318 := TFontStyleNode.Create;
FontStyle1318.Size := 0.035;
{ .SetFontStyle }
Text1317.FontStyle := FontStyle1318;
{ .SetGeometry }
Shape1316.Geometry := Text1317;
{ .AddChildren }
Billboard1315.AddChildren([Shape1316]);
{ .AddChildren }
HAnimSite1312.AddChildren([Billboard1315]);
{ .AddChildren }
HAnimSegment1304.AddChildren([HAnimSite1312]);
HAnimSite1319 := THAnimSiteNode.Create;
HAnimSite1319.NameField := 'l_olecranon';
HAnimSite1319.Translation := Vector3(-0.1962,1.1375,-0.1123);
TouchSensor1320 := TTouchSensorNode.Create;
TouchSensor1320.Description := 'HAnimSite 65 l_olecranon';
{ .AddChildren }
HAnimSite1319.AddChildren([TouchSensor1320]);
Shape1321 := TShapeNode.Create;
Shape1321 := Shape30;
{ .AddChildren }
HAnimSite1319.AddChildren([Shape1321]);
Billboard1322 := TBillboardNode.Create;
Shape1323 := TShapeNode.Create;
Text1324 := TTextNode.Create;
Text1324.SetText(['65']);
FontStyle1325 := TFontStyleNode.Create;
FontStyle1325.Size := 0.035;
{ .SetFontStyle }
Text1324.FontStyle := FontStyle1325;
{ .SetGeometry }
Shape1323.Geometry := Text1324;
{ .AddChildren }
Billboard1322.AddChildren([Shape1323]);
{ .AddChildren }
HAnimSite1319.AddChildren([Billboard1322]);
{ .AddChildren }
HAnimSegment1304.AddChildren([HAnimSite1319]);
HAnimSite1326 := THAnimSiteNode.Create;
HAnimSite1326.NameField := 'l_radial_styloid';
HAnimSite1326.Translation := Vector3(0.1901,0.8645,-0.0415);
TouchSensor1327 := TTouchSensorNode.Create;
TouchSensor1327.Description := 'HAnimSite 71 l_radial_styloid';
{ .AddChildren }
HAnimSite1326.AddChildren([TouchSensor1327]);
Shape1328 := TShapeNode.Create;
Shape1328 := Shape30;
{ .AddChildren }
HAnimSite1326.AddChildren([Shape1328]);
Billboard1329 := TBillboardNode.Create;
Shape1330 := TShapeNode.Create;
Text1331 := TTextNode.Create;
Text1331.SetText(['71']);
FontStyle1332 := TFontStyleNode.Create;
FontStyle1332.Size := 0.035;
{ .SetFontStyle }
Text1331.FontStyle := FontStyle1332;
{ .SetGeometry }
Shape1330.Geometry := Text1331;
{ .AddChildren }
Billboard1329.AddChildren([Shape1330]);
{ .AddChildren }
HAnimSite1326.AddChildren([Billboard1329]);
{ .AddChildren }
HAnimSegment1304.AddChildren([HAnimSite1326]);
HAnimSite1333 := THAnimSiteNode.Create;
HAnimSite1333.NameField := 'l_radiale';
HAnimSite1333.Translation := Vector3(0.2182,1.1212,-0.1167);
TouchSensor1334 := TTouchSensorNode.Create;
TouchSensor1334.Description := 'HAnimSite 69 l_radiale';
{ .AddChildren }
HAnimSite1333.AddChildren([TouchSensor1334]);
Shape1335 := TShapeNode.Create;
Shape1335 := Shape30;
{ .AddChildren }
HAnimSite1333.AddChildren([Shape1335]);
Billboard1336 := TBillboardNode.Create;
Shape1337 := TShapeNode.Create;
Text1338 := TTextNode.Create;
Text1338.SetText(['69']);
FontStyle1339 := TFontStyleNode.Create;
FontStyle1339.Size := 0.035;
{ .SetFontStyle }
Text1338.FontStyle := FontStyle1339;
{ .SetGeometry }
Shape1337.Geometry := Text1338;
{ .AddChildren }
Billboard1336.AddChildren([Shape1337]);
{ .AddChildren }
HAnimSite1333.AddChildren([Billboard1336]);
{ .AddChildren }
HAnimSegment1304.AddChildren([HAnimSite1333]);
{ .AddChildren }
HAnimJoint1303.AddChildren([HAnimSegment1304]);
HAnimJoint1340 := THAnimJointNode.Create;
HAnimJoint1340.NameField := 'l_radiocarpal';
HAnimJoint1340.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimJoint1340.SetUlimit([0,0,0]);
HAnimJoint1340.SetLlimit([0,0,0]);
HAnimSegment1341 := THAnimSegmentNode.Create;
HAnimSegment1341.NameField := 'l_carpal';
Transform1342 := TTransformNode.Create;
Transform1342.Scale := Vector3(0.2,0.2,0.2);
Transform1342.Translation := Vector3(0.2,0.85,-0.05);
Transform1342.Rotation := Vector4(0,0,1,-3.14);
{ Transform left hand }
Transform1343 := TTransformNode.Create;
Transform1343.Rotation := Vector4(0,1,0,-1.57);
{ Transform left hand }
Shape1344 := TShapeNode.Create;
Shape1344 := Shape20;
{ .AddChild }
Transform1343.AddChildren([Shape1344]);
{ .AddChildren }
Transform1342.AddChildren([Transform1343]);
{ .AddChildren }
HAnimSegment1341.AddChildren([Transform1342]);
Shape1345 := TShapeNode.Create;
LineSet1346 := TLineSetNode.Create;
LineSet1346.SetVertexCount([2]);
Coordinate1347 := TCoordinateNode.Create;
Coordinate1347.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1811,0.6975,-0.0826)]);
{ .SetCoord }
LineSet1346.Coord := Coordinate1347;
{ from l_radiocarpal to l_midcarpal_1 vertices 2 }
ColorRGBA1348 := TColorRGBANode.Create;
ColorRGBA1348 := ColorRGBA27;
{ .SetColor }
LineSet1346.Color := ColorRGBA1348;
{ .SetGeometry }
Shape1345.Geometry := LineSet1346;
{ .AddChildren }
HAnimSegment1341.AddChildren([Shape1345]);
HAnimSite1349 := THAnimSiteNode.Create;
HAnimSite1349.NameField := 'l_ulnar_styloid';
HAnimSite1349.Translation := Vector3(-0.2142,0.8529,-0.0648);
TouchSensor1350 := TTouchSensorNode.Create;
TouchSensor1350.Description := 'HAnimSite 70 l_ulnar_styloid';
{ .AddChildren }
HAnimSite1349.AddChildren([TouchSensor1350]);
Shape1351 := TShapeNode.Create;
Shape1351 := Shape30;
{ .AddChildren }
HAnimSite1349.AddChildren([Shape1351]);
Billboard1352 := TBillboardNode.Create;
Shape1353 := TShapeNode.Create;
Text1354 := TTextNode.Create;
Text1354.SetText(['70']);
FontStyle1355 := TFontStyleNode.Create;
FontStyle1355.Size := 0.035;
{ .SetFontStyle }
Text1354.FontStyle := FontStyle1355;
{ .SetGeometry }
Shape1353.Geometry := Text1354;
{ .AddChildren }
Billboard1352.AddChildren([Shape1353]);
{ .AddChildren }
HAnimSite1349.AddChildren([Billboard1352]);
{ .AddChildren }
HAnimSegment1341.AddChildren([HAnimSite1349]);
Shape1356 := TShapeNode.Create;
LineSet1357 := TLineSetNode.Create;
LineSet1357.SetVertexCount([2]);
Coordinate1358 := TCoordinateNode.Create;
Coordinate1358.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1811,0.6984,-0.0935)]);
{ .SetCoord }
LineSet1357.Coord := Coordinate1358;
{ from l_radiocarpal to l_midcarpal_2 vertices 2 }
ColorRGBA1359 := TColorRGBANode.Create;
ColorRGBA1359 := ColorRGBA27;
{ .SetColor }
LineSet1357.Color := ColorRGBA1359;
{ .SetGeometry }
Shape1356.Geometry := LineSet1357;
{ .AddChildren }
HAnimSegment1341.AddChildren([Shape1356]);
Shape1360 := TShapeNode.Create;
LineSet1361 := TLineSetNode.Create;
LineSet1361.SetVertexCount([2]);
Coordinate1362 := TCoordinateNode.Create;
Coordinate1362.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1809,0.7,-0.1067)]);
{ .SetCoord }
LineSet1361.Coord := Coordinate1362;
{ from l_radiocarpal to l_midcarpal_3 vertices 2 }
ColorRGBA1363 := TColorRGBANode.Create;
ColorRGBA1363 := ColorRGBA27;
{ .SetColor }
LineSet1361.Color := ColorRGBA1363;
{ .SetGeometry }
Shape1360.Geometry := LineSet1361;
{ .AddChildren }
HAnimSegment1341.AddChildren([Shape1360]);
Shape1364 := TShapeNode.Create;
LineSet1365 := TLineSetNode.Create;
LineSet1365.SetVertexCount([2]);
Coordinate1366 := TCoordinateNode.Create;
Coordinate1366.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1809,0.6973,-0.1276)]);
{ .SetCoord }
LineSet1365.Coord := Coordinate1366;
{ from l_radiocarpal to l_midcarpal_4_5 vertices 2 }
ColorRGBA1367 := TColorRGBANode.Create;
ColorRGBA1367 := ColorRGBA27;
{ .SetColor }
LineSet1365.Color := ColorRGBA1367;
{ .SetGeometry }
Shape1364.Geometry := LineSet1365;
{ .AddChildren }
HAnimSegment1341.AddChildren([Shape1364]);
{ .AddChildren }
HAnimJoint1340.AddChildren([HAnimSegment1341]);
HAnimJoint1368 := THAnimJointNode.Create;
HAnimJoint1368.NameField := 'l_midcarpal_1';
HAnimJoint1368.Center := Vector3(0.1811,0.6975,-0.0826);
HAnimJoint1368.SetUlimit([0,0,0]);
HAnimJoint1368.SetLlimit([0,0,0]);
HAnimSegment1369 := THAnimSegmentNode.Create;
HAnimSegment1369.NameField := 'l_trapezium';
Transform1370 := TTransformNode.Create;
Transform1370.Translation := Vector3(0.1811,0.6975,-0.0826);
Transform1371 := TTransformNode.Create;
{ Empty Transform }
Shape1372 := TShapeNode.Create;
Shape1372 := Shape20;
{ .AddChild }
Transform1371.AddChildren([Shape1372]);
{ .AddChildren }
Transform1370.AddChildren([Transform1371]);
{ .AddChildren }
HAnimSegment1369.AddChildren([Transform1370]);
Shape1373 := TShapeNode.Create;
LineSet1374 := TLineSetNode.Create;
LineSet1374.SetVertexCount([2]);
Coordinate1375 := TCoordinateNode.Create;
Coordinate1375.SetPoint([Vector3(0.1811,0.6975,-0.0826),Vector3(0.1924,0.8472,-0.0534)]);
{ .SetCoord }
LineSet1374.Coord := Coordinate1375;
{ from l_midcarpal_1 to l_carpometacarpal_1 vertices 2 }
ColorRGBA1376 := TColorRGBANode.Create;
ColorRGBA1376 := ColorRGBA27;
{ .SetColor }
LineSet1374.Color := ColorRGBA1376;
{ .SetGeometry }
Shape1373.Geometry := LineSet1374;
{ .AddChildren }
HAnimSegment1369.AddChildren([Shape1373]);
{ .AddChildren }
HAnimJoint1368.AddChildren([HAnimSegment1369]);
HAnimJoint1377 := THAnimJointNode.Create;
HAnimJoint1377.NameField := 'l_carpometacarpal_1';
HAnimJoint1377.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint1377.SetUlimit([0,0,0]);
HAnimJoint1377.SetLlimit([0,0,0]);
HAnimSegment1378 := THAnimSegmentNode.Create;
HAnimSegment1378.NameField := 'l_metacarpal_1';
Transform1379 := TTransformNode.Create;
Transform1379.Translation := Vector3(0.1924,0.8472,-0.0534);
Transform1380 := TTransformNode.Create;
{ Empty Transform }
Shape1381 := TShapeNode.Create;
Shape1381 := Shape20;
{ .AddChild }
Transform1380.AddChildren([Shape1381]);
{ .AddChildren }
Transform1379.AddChildren([Transform1380]);
{ .AddChildren }
HAnimSegment1378.AddChildren([Transform1379]);
Shape1382 := TShapeNode.Create;
LineSet1383 := TLineSetNode.Create;
LineSet1383.SetVertexCount([2]);
Coordinate1384 := TCoordinateNode.Create;
Coordinate1384.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ .SetCoord }
LineSet1383.Coord := Coordinate1384;
{ from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2 }
ColorRGBA1385 := TColorRGBANode.Create;
ColorRGBA1385 := ColorRGBA27;
{ .SetColor }
LineSet1383.Color := ColorRGBA1385;
{ .SetGeometry }
Shape1382.Geometry := LineSet1383;
{ .AddChildren }
HAnimSegment1378.AddChildren([Shape1382]);
{ .AddChildren }
HAnimJoint1377.AddChildren([HAnimSegment1378]);
HAnimJoint1386 := THAnimJointNode.Create;
HAnimJoint1386.NameField := 'l_metacarpophalangeal_1';
HAnimJoint1386.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint1386.SetUlimit([0,0,0]);
HAnimJoint1386.SetLlimit([0,0,0]);
HAnimSegment1387 := THAnimSegmentNode.Create;
HAnimSegment1387.NameField := 'l_carpal_proximal_phalanx_1';
Transform1388 := TTransformNode.Create;
Transform1388.Translation := Vector3(0.1951,0.8226,0.0246);
Transform1389 := TTransformNode.Create;
{ Empty Transform }
Shape1390 := TShapeNode.Create;
Shape1390 := Shape20;
{ .AddChild }
Transform1389.AddChildren([Shape1390]);
{ .AddChildren }
Transform1388.AddChildren([Transform1389]);
{ .AddChildren }
HAnimSegment1387.AddChildren([Transform1388]);
Shape1391 := TShapeNode.Create;
LineSet1392 := TLineSetNode.Create;
LineSet1392.SetVertexCount([2]);
Coordinate1393 := TCoordinateNode.Create;
Coordinate1393.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ .SetCoord }
LineSet1392.Coord := Coordinate1393;
{ from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2 }
ColorRGBA1394 := TColorRGBANode.Create;
ColorRGBA1394 := ColorRGBA27;
{ .SetColor }
LineSet1392.Color := ColorRGBA1394;
{ .SetGeometry }
Shape1391.Geometry := LineSet1392;
{ .AddChildren }
HAnimSegment1387.AddChildren([Shape1391]);
{ .AddChildren }
HAnimJoint1386.AddChildren([HAnimSegment1387]);
HAnimJoint1395 := THAnimJointNode.Create;
HAnimJoint1395.NameField := 'l_carpal_interphalangeal_1';
HAnimJoint1395.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint1395.SetUlimit([0,0,0]);
HAnimJoint1395.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1386.AddChildren([HAnimJoint1395]);
{ .AddChildren }
HAnimJoint1377.AddChildren([HAnimJoint1386]);
{ .AddChildren }
HAnimJoint1368.AddChildren([HAnimJoint1377]);
{ .AddChildren }
HAnimJoint1340.AddChildren([HAnimJoint1368]);
HAnimJoint1396 := THAnimJointNode.Create;
HAnimJoint1396.NameField := 'l_midcarpal_2';
HAnimJoint1396.Center := Vector3(0.1811,0.6984,-0.0935);
HAnimJoint1396.SetUlimit([0,0,0]);
HAnimJoint1396.SetLlimit([0,0,0]);
HAnimSegment1397 := THAnimSegmentNode.Create;
HAnimSegment1397.NameField := 'l_trapezoid';
Transform1398 := TTransformNode.Create;
Transform1398.Translation := Vector3(0.1811,0.6984,-0.0935);
Transform1399 := TTransformNode.Create;
{ Empty Transform }
Shape1400 := TShapeNode.Create;
Shape1400 := Shape20;
{ .AddChild }
Transform1399.AddChildren([Shape1400]);
{ .AddChildren }
Transform1398.AddChildren([Transform1399]);
{ .AddChildren }
HAnimSegment1397.AddChildren([Transform1398]);
Shape1401 := TShapeNode.Create;
LineSet1402 := TLineSetNode.Create;
LineSet1402.SetVertexCount([2]);
Coordinate1403 := TCoordinateNode.Create;
Coordinate1403.SetPoint([Vector3(0.1811,0.6984,-0.0935),Vector3(0.1983,0.8024,-0.028)]);
{ .SetCoord }
LineSet1402.Coord := Coordinate1403;
{ from l_midcarpal_2 to l_carpometacarpal_2 vertices 2 }
ColorRGBA1404 := TColorRGBANode.Create;
ColorRGBA1404 := ColorRGBA27;
{ .SetColor }
LineSet1402.Color := ColorRGBA1404;
{ .SetGeometry }
Shape1401.Geometry := LineSet1402;
{ .AddChildren }
HAnimSegment1397.AddChildren([Shape1401]);
{ .AddChildren }
HAnimJoint1396.AddChildren([HAnimSegment1397]);
HAnimJoint1405 := THAnimJointNode.Create;
HAnimJoint1405.NameField := 'l_carpometacarpal_2';
HAnimJoint1405.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint1405.SetUlimit([0,0,0]);
HAnimJoint1405.SetLlimit([0,0,0]);
HAnimSegment1406 := THAnimSegmentNode.Create;
HAnimSegment1406.NameField := 'l_metacarpal_2';
Transform1407 := TTransformNode.Create;
Transform1407.Translation := Vector3(0.1983,0.8024,-0.028);
Transform1408 := TTransformNode.Create;
{ Empty Transform }
Shape1409 := TShapeNode.Create;
Shape1409 := Shape20;
{ .AddChild }
Transform1408.AddChildren([Shape1409]);
{ .AddChildren }
Transform1407.AddChildren([Transform1408]);
{ .AddChildren }
HAnimSegment1406.AddChildren([Transform1407]);
Shape1410 := TShapeNode.Create;
LineSet1411 := TLineSetNode.Create;
LineSet1411.SetVertexCount([2]);
Coordinate1412 := TCoordinateNode.Create;
Coordinate1412.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ .SetCoord }
LineSet1411.Coord := Coordinate1412;
{ from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2 }
ColorRGBA1413 := TColorRGBANode.Create;
ColorRGBA1413 := ColorRGBA27;
{ .SetColor }
LineSet1411.Color := ColorRGBA1413;
{ .SetGeometry }
Shape1410.Geometry := LineSet1411;
{ .AddChildren }
HAnimSegment1406.AddChildren([Shape1410]);
HAnimSite1414 := THAnimSiteNode.Create;
HAnimSite1414.NameField := 'l_metacarpal_phalanx_2';
HAnimSite1414.Translation := Vector3(0.2009,0.8139,-0.0237);
TouchSensor1415 := TTouchSensorNode.Create;
TouchSensor1415.Description := 'HAnimSite 75 l_metacarpal_phalanx_2';
{ .AddChildren }
HAnimSite1414.AddChildren([TouchSensor1415]);
Shape1416 := TShapeNode.Create;
Shape1416 := Shape30;
{ .AddChildren }
HAnimSite1414.AddChildren([Shape1416]);
Billboard1417 := TBillboardNode.Create;
Shape1418 := TShapeNode.Create;
Text1419 := TTextNode.Create;
Text1419.SetText(['75']);
FontStyle1420 := TFontStyleNode.Create;
FontStyle1420.Size := 0.035;
{ .SetFontStyle }
Text1419.FontStyle := FontStyle1420;
{ .SetGeometry }
Shape1418.Geometry := Text1419;
{ .AddChildren }
Billboard1417.AddChildren([Shape1418]);
{ .AddChildren }
HAnimSite1414.AddChildren([Billboard1417]);
{ .AddChildren }
HAnimSegment1406.AddChildren([HAnimSite1414]);
{ .AddChildren }
HAnimJoint1405.AddChildren([HAnimSegment1406]);
HAnimJoint1421 := THAnimJointNode.Create;
HAnimJoint1421.NameField := 'l_metacarpophalangeal_2';
HAnimJoint1421.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint1421.SetUlimit([0,0,0]);
HAnimJoint1421.SetLlimit([0,0,0]);
HAnimSegment1422 := THAnimSegmentNode.Create;
HAnimSegment1422.NameField := 'l_carpal_proximal_phalanx_2';
Transform1423 := TTransformNode.Create;
Transform1423.Translation := Vector3(0.1983,0.7815,-0.028);
Transform1424 := TTransformNode.Create;
{ Empty Transform }
Shape1425 := TShapeNode.Create;
Shape1425 := Shape20;
{ .AddChild }
Transform1424.AddChildren([Shape1425]);
{ .AddChildren }
Transform1423.AddChildren([Transform1424]);
{ .AddChildren }
HAnimSegment1422.AddChildren([Transform1423]);
Shape1426 := TShapeNode.Create;
LineSet1427 := TLineSetNode.Create;
LineSet1427.SetVertexCount([2]);
Coordinate1428 := TCoordinateNode.Create;
Coordinate1428.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ .SetCoord }
LineSet1427.Coord := Coordinate1428;
{ from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2 }
ColorRGBA1429 := TColorRGBANode.Create;
ColorRGBA1429 := ColorRGBA27;
{ .SetColor }
LineSet1427.Color := ColorRGBA1429;
{ .SetGeometry }
Shape1426.Geometry := LineSet1427;
{ .AddChildren }
HAnimSegment1422.AddChildren([Shape1426]);
{ .AddChildren }
HAnimJoint1421.AddChildren([HAnimSegment1422]);
HAnimJoint1430 := THAnimJointNode.Create;
HAnimJoint1430.NameField := 'l_carpal_proximal_interphalangeal_2';
HAnimJoint1430.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint1430.SetUlimit([0,0,0]);
HAnimJoint1430.SetLlimit([0,0,0]);
HAnimSegment1431 := THAnimSegmentNode.Create;
HAnimSegment1431.NameField := 'l_carpal_middle_phalanx_2';
Transform1432 := TTransformNode.Create;
Transform1432.Translation := Vector3(0.2017,0.7363,-0.0248);
Transform1433 := TTransformNode.Create;
{ Empty Transform }
Shape1434 := TShapeNode.Create;
Shape1434 := Shape20;
{ .AddChild }
Transform1433.AddChildren([Shape1434]);
{ .AddChildren }
Transform1432.AddChildren([Transform1433]);
{ .AddChildren }
HAnimSegment1431.AddChildren([Transform1432]);
Shape1435 := TShapeNode.Create;
LineSet1436 := TLineSetNode.Create;
LineSet1436.SetVertexCount([2]);
Coordinate1437 := TCoordinateNode.Create;
Coordinate1437.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ .SetCoord }
LineSet1436.Coord := Coordinate1437;
{ from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2 }
ColorRGBA1438 := TColorRGBANode.Create;
ColorRGBA1438 := ColorRGBA27;
{ .SetColor }
LineSet1436.Color := ColorRGBA1438;
{ .SetGeometry }
Shape1435.Geometry := LineSet1436;
{ .AddChildren }
HAnimSegment1431.AddChildren([Shape1435]);
{ .AddChildren }
HAnimJoint1430.AddChildren([HAnimSegment1431]);
HAnimJoint1439 := THAnimJointNode.Create;
HAnimJoint1439.NameField := 'l_carpal_distal_interphalangeal_2';
HAnimJoint1439.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint1439.SetUlimit([0,0,0]);
HAnimJoint1439.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1430.AddChildren([HAnimJoint1439]);
{ .AddChildren }
HAnimJoint1421.AddChildren([HAnimJoint1430]);
{ .AddChildren }
HAnimJoint1405.AddChildren([HAnimJoint1421]);
{ .AddChildren }
HAnimJoint1396.AddChildren([HAnimJoint1405]);
{ .AddChildren }
HAnimJoint1340.AddChildren([HAnimJoint1396]);
HAnimJoint1440 := THAnimJointNode.Create;
HAnimJoint1440.NameField := 'l_midcarpal_3';
HAnimJoint1440.Center := Vector3(0.1809,0.7,-0.1067);
HAnimJoint1440.SetUlimit([0,0,0]);
HAnimJoint1440.SetLlimit([0,0,0]);
HAnimSegment1441 := THAnimSegmentNode.Create;
HAnimSegment1441.NameField := 'l_capitate';
Transform1442 := TTransformNode.Create;
Transform1442.Translation := Vector3(0.1809,0.7,-0.1067);
Transform1443 := TTransformNode.Create;
{ Empty Transform }
Shape1444 := TShapeNode.Create;
Shape1444 := Shape20;
{ .AddChild }
Transform1443.AddChildren([Shape1444]);
{ .AddChildren }
Transform1442.AddChildren([Transform1443]);
{ .AddChildren }
HAnimSegment1441.AddChildren([Transform1442]);
Shape1445 := TShapeNode.Create;
LineSet1446 := TLineSetNode.Create;
LineSet1446.SetVertexCount([2]);
Coordinate1447 := TCoordinateNode.Create;
Coordinate1447.SetPoint([Vector3(0.1809,0.7,-0.1067),Vector3(0.1987,0.8029,-0.053)]);
{ .SetCoord }
LineSet1446.Coord := Coordinate1447;
{ from l_midcarpal_3 to l_carpometacarpal_3 vertices 2 }
ColorRGBA1448 := TColorRGBANode.Create;
ColorRGBA1448 := ColorRGBA27;
{ .SetColor }
LineSet1446.Color := ColorRGBA1448;
{ .SetGeometry }
Shape1445.Geometry := LineSet1446;
{ .AddChildren }
HAnimSegment1441.AddChildren([Shape1445]);
{ .AddChildren }
HAnimJoint1440.AddChildren([HAnimSegment1441]);
HAnimJoint1449 := THAnimJointNode.Create;
HAnimJoint1449.NameField := 'l_carpometacarpal_3';
HAnimJoint1449.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint1449.SetUlimit([0,0,0]);
HAnimJoint1449.SetLlimit([0,0,0]);
HAnimSegment1450 := THAnimSegmentNode.Create;
HAnimSegment1450.NameField := 'l_metacarpal_3';
Transform1451 := TTransformNode.Create;
Transform1451.Translation := Vector3(0.1987,0.8029,-0.053);
Transform1452 := TTransformNode.Create;
{ Empty Transform }
Shape1453 := TShapeNode.Create;
Shape1453 := Shape20;
{ .AddChild }
Transform1452.AddChildren([Shape1453]);
{ .AddChildren }
Transform1451.AddChildren([Transform1452]);
{ .AddChildren }
HAnimSegment1450.AddChildren([Transform1451]);
Shape1454 := TShapeNode.Create;
LineSet1455 := TLineSetNode.Create;
LineSet1455.SetVertexCount([2]);
Coordinate1456 := TCoordinateNode.Create;
Coordinate1456.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ .SetCoord }
LineSet1455.Coord := Coordinate1456;
{ from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2 }
ColorRGBA1457 := TColorRGBANode.Create;
ColorRGBA1457 := ColorRGBA27;
{ .SetColor }
LineSet1455.Color := ColorRGBA1457;
{ .SetGeometry }
Shape1454.Geometry := LineSet1455;
{ .AddChildren }
HAnimSegment1450.AddChildren([Shape1454]);
HAnimSite1458 := THAnimSiteNode.Create;
HAnimSite1458.NameField := 'l_metacarpal_phalanx_3';
TouchSensor1459 := TTouchSensorNode.Create;
TouchSensor1459.Description := 'HAnimSite 76 l_metacarpal_phalanx_3';
{ .AddChildren }
HAnimSite1458.AddChildren([TouchSensor1459]);
Shape1460 := TShapeNode.Create;
Shape1460 := Shape30;
{ .AddChildren }
HAnimSite1458.AddChildren([Shape1460]);
Billboard1461 := TBillboardNode.Create;
Shape1462 := TShapeNode.Create;
Text1463 := TTextNode.Create;
Text1463.SetText(['76']);
FontStyle1464 := TFontStyleNode.Create;
FontStyle1464.Size := 0.035;
{ .SetFontStyle }
Text1463.FontStyle := FontStyle1464;
{ .SetGeometry }
Shape1462.Geometry := Text1463;
{ .AddChildren }
Billboard1461.AddChildren([Shape1462]);
{ .AddChildren }
HAnimSite1458.AddChildren([Billboard1461]);
{ .AddChildren }
HAnimSegment1450.AddChildren([HAnimSite1458]);
{ .AddChildren }
HAnimJoint1449.AddChildren([HAnimSegment1450]);
HAnimJoint1465 := THAnimJointNode.Create;
HAnimJoint1465.NameField := 'l_metacarpophalangeal_3';
HAnimJoint1465.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint1465.SetUlimit([0,0,0]);
HAnimJoint1465.SetLlimit([0,0,0]);
HAnimSegment1466 := THAnimSegmentNode.Create;
HAnimSegment1466.NameField := 'l_carpal_proximal_phalanx_3';
Transform1467 := TTransformNode.Create;
Transform1467.Translation := Vector3(0.1987,0.7818,-0.053);
Transform1468 := TTransformNode.Create;
{ Empty Transform }
Shape1469 := TShapeNode.Create;
Shape1469 := Shape20;
{ .AddChild }
Transform1468.AddChildren([Shape1469]);
{ .AddChildren }
Transform1467.AddChildren([Transform1468]);
{ .AddChildren }
HAnimSegment1466.AddChildren([Transform1467]);
Shape1470 := TShapeNode.Create;
LineSet1471 := TLineSetNode.Create;
LineSet1471.SetVertexCount([2]);
Coordinate1472 := TCoordinateNode.Create;
Coordinate1472.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ .SetCoord }
LineSet1471.Coord := Coordinate1472;
{ from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2 }
ColorRGBA1473 := TColorRGBANode.Create;
ColorRGBA1473 := ColorRGBA27;
{ .SetColor }
LineSet1471.Color := ColorRGBA1473;
{ .SetGeometry }
Shape1470.Geometry := LineSet1471;
{ .AddChildren }
HAnimSegment1466.AddChildren([Shape1470]);
{ .AddChildren }
HAnimJoint1465.AddChildren([HAnimSegment1466]);
HAnimJoint1474 := THAnimJointNode.Create;
HAnimJoint1474.NameField := 'l_carpal_proximal_interphalangeal_3';
HAnimJoint1474.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint1474.SetUlimit([0,0,0]);
HAnimJoint1474.SetLlimit([0,0,0]);
HAnimSegment1475 := THAnimSegmentNode.Create;
HAnimSegment1475.NameField := 'l_carpal_middle_phalanx_3';
Transform1476 := TTransformNode.Create;
Transform1476.Translation := Vector3(0.2013,0.7273,-0.0503);
Transform1477 := TTransformNode.Create;
{ Empty Transform }
Shape1478 := TShapeNode.Create;
Shape1478 := Shape20;
{ .AddChild }
Transform1477.AddChildren([Shape1478]);
{ .AddChildren }
Transform1476.AddChildren([Transform1477]);
{ .AddChildren }
HAnimSegment1475.AddChildren([Transform1476]);
Shape1479 := TShapeNode.Create;
LineSet1480 := TLineSetNode.Create;
LineSet1480.SetVertexCount([2]);
Coordinate1481 := TCoordinateNode.Create;
Coordinate1481.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ .SetCoord }
LineSet1480.Coord := Coordinate1481;
{ from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2 }
ColorRGBA1482 := TColorRGBANode.Create;
ColorRGBA1482 := ColorRGBA27;
{ .SetColor }
LineSet1480.Color := ColorRGBA1482;
{ .SetGeometry }
Shape1479.Geometry := LineSet1480;
{ .AddChildren }
HAnimSegment1475.AddChildren([Shape1479]);
{ .AddChildren }
HAnimJoint1474.AddChildren([HAnimSegment1475]);
HAnimJoint1483 := THAnimJointNode.Create;
HAnimJoint1483.NameField := 'l_carpal_distal_interphalangeal_3';
HAnimJoint1483.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint1483.SetUlimit([0,0,0]);
HAnimJoint1483.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1474.AddChildren([HAnimJoint1483]);
{ .AddChildren }
HAnimJoint1465.AddChildren([HAnimJoint1474]);
{ .AddChildren }
HAnimJoint1449.AddChildren([HAnimJoint1465]);
{ .AddChildren }
HAnimJoint1440.AddChildren([HAnimJoint1449]);
{ .AddChildren }
HAnimJoint1340.AddChildren([HAnimJoint1440]);
HAnimJoint1484 := THAnimJointNode.Create;
HAnimJoint1484.NameField := 'l_midcarpal_4_5';
HAnimJoint1484.Center := Vector3(0.1809,0.6973,-0.1276);
HAnimJoint1484.SetUlimit([0,0,0]);
HAnimJoint1484.SetLlimit([0,0,0]);
HAnimSegment1485 := THAnimSegmentNode.Create;
HAnimSegment1485.NameField := 'l_hamate';
Transform1486 := TTransformNode.Create;
Transform1486.Translation := Vector3(0.1809,0.6973,-0.1276);
Transform1487 := TTransformNode.Create;
{ Empty Transform }
Shape1488 := TShapeNode.Create;
Shape1488 := Shape20;
{ .AddChild }
Transform1487.AddChildren([Shape1488]);
{ .AddChildren }
Transform1486.AddChildren([Transform1487]);
{ .AddChildren }
HAnimSegment1485.AddChildren([Transform1486]);
Shape1489 := TShapeNode.Create;
LineSet1490 := TLineSetNode.Create;
LineSet1490.SetVertexCount([2]);
Coordinate1491 := TCoordinateNode.Create;
Coordinate1491.SetPoint([Vector3(0.1809,0.6973,-0.1276),Vector3(0.1956,0.8019,-0.0794)]);
{ .SetCoord }
LineSet1490.Coord := Coordinate1491;
{ from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2 }
ColorRGBA1492 := TColorRGBANode.Create;
ColorRGBA1492 := ColorRGBA27;
{ .SetColor }
LineSet1490.Color := ColorRGBA1492;
{ .SetGeometry }
Shape1489.Geometry := LineSet1490;
{ .AddChildren }
HAnimSegment1485.AddChildren([Shape1489]);
Shape1493 := TShapeNode.Create;
LineSet1494 := TLineSetNode.Create;
LineSet1494.SetVertexCount([2]);
Coordinate1495 := TCoordinateNode.Create;
Coordinate1495.SetPoint([Vector3(0.1809,0.6973,-0.1276),Vector3(0.1925,0.8066,-0.1036)]);
{ .SetCoord }
LineSet1494.Coord := Coordinate1495;
{ from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2 }
ColorRGBA1496 := TColorRGBANode.Create;
ColorRGBA1496 := ColorRGBA27;
{ .SetColor }
LineSet1494.Color := ColorRGBA1496;
{ .SetGeometry }
Shape1493.Geometry := LineSet1494;
{ .AddChildren }
HAnimSegment1485.AddChildren([Shape1493]);
{ .AddChildren }
HAnimJoint1484.AddChildren([HAnimSegment1485]);
HAnimJoint1497 := THAnimJointNode.Create;
HAnimJoint1497.NameField := 'l_carpometacarpal_4';
HAnimJoint1497.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint1497.SetUlimit([0,0,0]);
HAnimJoint1497.SetLlimit([0,0,0]);
HAnimSegment1498 := THAnimSegmentNode.Create;
HAnimSegment1498.NameField := 'l_metacarpal_4';
Transform1499 := TTransformNode.Create;
Transform1499.Translation := Vector3(0.1956,0.8019,-0.0794);
Transform1500 := TTransformNode.Create;
{ Empty Transform }
Shape1501 := TShapeNode.Create;
Shape1501 := Shape20;
{ .AddChild }
Transform1500.AddChildren([Shape1501]);
{ .AddChildren }
Transform1499.AddChildren([Transform1500]);
{ .AddChildren }
HAnimSegment1498.AddChildren([Transform1499]);
Shape1502 := TShapeNode.Create;
LineSet1503 := TLineSetNode.Create;
LineSet1503.SetVertexCount([2]);
Coordinate1504 := TCoordinateNode.Create;
Coordinate1504.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ .SetCoord }
LineSet1503.Coord := Coordinate1504;
{ from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2 }
ColorRGBA1505 := TColorRGBANode.Create;
ColorRGBA1505 := ColorRGBA27;
{ .SetColor }
LineSet1503.Color := ColorRGBA1505;
{ .SetGeometry }
Shape1502.Geometry := LineSet1503;
{ .AddChildren }
HAnimSegment1498.AddChildren([Shape1502]);
{ .AddChildren }
HAnimJoint1497.AddChildren([HAnimSegment1498]);
HAnimJoint1506 := THAnimJointNode.Create;
HAnimJoint1506.NameField := 'l_metacarpophalangeal_4';
HAnimJoint1506.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint1506.SetUlimit([0,0,0]);
HAnimJoint1506.SetLlimit([0,0,0]);
HAnimSegment1507 := THAnimSegmentNode.Create;
HAnimSegment1507.NameField := 'l_carpal_proximal_phalanx_4';
Transform1508 := TTransformNode.Create;
Transform1508.Translation := Vector3(0.1956,0.7815,-0.0794);
Transform1509 := TTransformNode.Create;
{ Empty Transform }
Shape1510 := TShapeNode.Create;
Shape1510 := Shape20;
{ .AddChild }
Transform1509.AddChildren([Shape1510]);
{ .AddChildren }
Transform1508.AddChildren([Transform1509]);
{ .AddChildren }
HAnimSegment1507.AddChildren([Transform1508]);
Shape1511 := TShapeNode.Create;
LineSet1512 := TLineSetNode.Create;
LineSet1512.SetVertexCount([2]);
Coordinate1513 := TCoordinateNode.Create;
Coordinate1513.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ .SetCoord }
LineSet1512.Coord := Coordinate1513;
{ from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2 }
ColorRGBA1514 := TColorRGBANode.Create;
ColorRGBA1514 := ColorRGBA27;
{ .SetColor }
LineSet1512.Color := ColorRGBA1514;
{ .SetGeometry }
Shape1511.Geometry := LineSet1512;
{ .AddChildren }
HAnimSegment1507.AddChildren([Shape1511]);
{ .AddChildren }
HAnimJoint1506.AddChildren([HAnimSegment1507]);
HAnimJoint1515 := THAnimJointNode.Create;
HAnimJoint1515.NameField := 'l_carpal_proximal_interphalangeal_4';
HAnimJoint1515.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint1515.SetUlimit([0,0,0]);
HAnimJoint1515.SetLlimit([0,0,0]);
HAnimSegment1516 := THAnimSegmentNode.Create;
HAnimSegment1516.NameField := 'l_carpal_middle_phalanx_4';
Transform1517 := TTransformNode.Create;
Transform1517.Translation := Vector3(0.1973,0.7287,-0.0777);
Transform1518 := TTransformNode.Create;
{ Empty Transform }
Shape1519 := TShapeNode.Create;
Shape1519 := Shape20;
{ .AddChild }
Transform1518.AddChildren([Shape1519]);
{ .AddChildren }
Transform1517.AddChildren([Transform1518]);
{ .AddChildren }
HAnimSegment1516.AddChildren([Transform1517]);
Shape1520 := TShapeNode.Create;
LineSet1521 := TLineSetNode.Create;
LineSet1521.SetVertexCount([2]);
Coordinate1522 := TCoordinateNode.Create;
Coordinate1522.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ .SetCoord }
LineSet1521.Coord := Coordinate1522;
{ from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2 }
ColorRGBA1523 := TColorRGBANode.Create;
ColorRGBA1523 := ColorRGBA27;
{ .SetColor }
LineSet1521.Color := ColorRGBA1523;
{ .SetGeometry }
Shape1520.Geometry := LineSet1521;
{ .AddChildren }
HAnimSegment1516.AddChildren([Shape1520]);
{ .AddChildren }
HAnimJoint1515.AddChildren([HAnimSegment1516]);
HAnimJoint1524 := THAnimJointNode.Create;
HAnimJoint1524.NameField := 'l_carpal_distal_interphalangeal_4';
HAnimJoint1524.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint1524.SetUlimit([0,0,0]);
HAnimJoint1524.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1515.AddChildren([HAnimJoint1524]);
{ .AddChildren }
HAnimJoint1506.AddChildren([HAnimJoint1515]);
{ .AddChildren }
HAnimJoint1497.AddChildren([HAnimJoint1506]);
{ .AddChildren }
HAnimJoint1484.AddChildren([HAnimJoint1497]);
HAnimJoint1525 := THAnimJointNode.Create;
HAnimJoint1525.NameField := 'l_carpometacarpal_5';
HAnimJoint1525.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint1525.SetUlimit([0,0,0]);
HAnimJoint1525.SetLlimit([0,0,0]);
HAnimSegment1526 := THAnimSegmentNode.Create;
HAnimSegment1526.NameField := 'l_metacarpal_5';
Transform1527 := TTransformNode.Create;
Transform1527.Translation := Vector3(0.1925,0.8066,-0.1036);
Transform1528 := TTransformNode.Create;
{ Empty Transform }
Shape1529 := TShapeNode.Create;
Shape1529 := Shape20;
{ .AddChild }
Transform1528.AddChildren([Shape1529]);
{ .AddChildren }
Transform1527.AddChildren([Transform1528]);
{ .AddChildren }
HAnimSegment1526.AddChildren([Transform1527]);
Shape1530 := TShapeNode.Create;
LineSet1531 := TLineSetNode.Create;
LineSet1531.SetVertexCount([2]);
Coordinate1532 := TCoordinateNode.Create;
Coordinate1532.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ .SetCoord }
LineSet1531.Coord := Coordinate1532;
{ from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2 }
ColorRGBA1533 := TColorRGBANode.Create;
ColorRGBA1533 := ColorRGBA27;
{ .SetColor }
LineSet1531.Color := ColorRGBA1533;
{ .SetGeometry }
Shape1530.Geometry := LineSet1531;
{ .AddChildren }
HAnimSegment1526.AddChildren([Shape1530]);
HAnimSite1534 := THAnimSiteNode.Create;
HAnimSite1534.NameField := 'l_metacarpal_phalanx_5';
HAnimSite1534.Translation := Vector3(0.1929,0.786,-0.1122);
TouchSensor1535 := TTouchSensorNode.Create;
TouchSensor1535.Description := 'HAnimSite 77 l_metacarpal_phalanx_5';
{ .AddChildren }
HAnimSite1534.AddChildren([TouchSensor1535]);
Shape1536 := TShapeNode.Create;
Shape1536 := Shape30;
{ .AddChildren }
HAnimSite1534.AddChildren([Shape1536]);
Billboard1537 := TBillboardNode.Create;
Shape1538 := TShapeNode.Create;
Text1539 := TTextNode.Create;
Text1539.SetText(['77']);
FontStyle1540 := TFontStyleNode.Create;
FontStyle1540.Size := 0.035;
{ .SetFontStyle }
Text1539.FontStyle := FontStyle1540;
{ .SetGeometry }
Shape1538.Geometry := Text1539;
{ .AddChildren }
Billboard1537.AddChildren([Shape1538]);
{ .AddChildren }
HAnimSite1534.AddChildren([Billboard1537]);
{ .AddChildren }
HAnimSegment1526.AddChildren([HAnimSite1534]);
{ .AddChildren }
HAnimJoint1525.AddChildren([HAnimSegment1526]);
HAnimJoint1541 := THAnimJointNode.Create;
HAnimJoint1541.NameField := 'l_metacarpophalangeal_5';
HAnimJoint1541.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint1541.SetUlimit([0,0,0]);
HAnimJoint1541.SetLlimit([0,0,0]);
HAnimSegment1542 := THAnimSegmentNode.Create;
HAnimSegment1542.NameField := 'l_carpal_proximal_phalanx_5';
Transform1543 := TTransformNode.Create;
Transform1543.Translation := Vector3(0.1925,0.7866,-0.1036);
Transform1544 := TTransformNode.Create;
{ Empty Transform }
Shape1545 := TShapeNode.Create;
Shape1545 := Shape20;
{ .AddChild }
Transform1544.AddChildren([Shape1545]);
{ .AddChildren }
Transform1543.AddChildren([Transform1544]);
{ .AddChildren }
HAnimSegment1542.AddChildren([Transform1543]);
Shape1546 := TShapeNode.Create;
LineSet1547 := TLineSetNode.Create;
LineSet1547.SetVertexCount([2]);
Coordinate1548 := TCoordinateNode.Create;
Coordinate1548.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ .SetCoord }
LineSet1547.Coord := Coordinate1548;
{ from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2 }
ColorRGBA1549 := TColorRGBANode.Create;
ColorRGBA1549 := ColorRGBA27;
{ .SetColor }
LineSet1547.Color := ColorRGBA1549;
{ .SetGeometry }
Shape1546.Geometry := LineSet1547;
{ .AddChildren }
HAnimSegment1542.AddChildren([Shape1546]);
{ .AddChildren }
HAnimJoint1541.AddChildren([HAnimSegment1542]);
HAnimJoint1550 := THAnimJointNode.Create;
HAnimJoint1550.NameField := 'l_carpal_proximal_interphalangeal_5';
HAnimJoint1550.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint1550.SetUlimit([0,0,0]);
HAnimJoint1550.SetLlimit([0,0,0]);
HAnimSegment1551 := THAnimSegmentNode.Create;
HAnimSegment1551.NameField := 'l_carpal_middle_phalanx_5';
Transform1552 := TTransformNode.Create;
Transform1552.Translation := Vector3(0.1938,0.7452,-0.1024);
Transform1553 := TTransformNode.Create;
{ Empty Transform }
Shape1554 := TShapeNode.Create;
Shape1554 := Shape20;
{ .AddChild }
Transform1553.AddChildren([Shape1554]);
{ .AddChildren }
Transform1552.AddChildren([Transform1553]);
{ .AddChildren }
HAnimSegment1551.AddChildren([Transform1552]);
Shape1555 := TShapeNode.Create;
LineSet1556 := TLineSetNode.Create;
LineSet1556.SetVertexCount([2]);
Coordinate1557 := TCoordinateNode.Create;
Coordinate1557.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ .SetCoord }
LineSet1556.Coord := Coordinate1557;
{ from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2 }
ColorRGBA1558 := TColorRGBANode.Create;
ColorRGBA1558 := ColorRGBA27;
{ .SetColor }
LineSet1556.Color := ColorRGBA1558;
{ .SetGeometry }
Shape1555.Geometry := LineSet1556;
{ .AddChildren }
HAnimSegment1551.AddChildren([Shape1555]);
{ .AddChildren }
HAnimJoint1550.AddChildren([HAnimSegment1551]);
HAnimJoint1559 := THAnimJointNode.Create;
HAnimJoint1559.NameField := 'l_carpal_distal_interphalangeal_5';
HAnimJoint1559.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint1559.SetUlimit([0,0,0]);
HAnimJoint1559.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1550.AddChildren([HAnimJoint1559]);
{ .AddChildren }
HAnimJoint1541.AddChildren([HAnimJoint1550]);
{ .AddChildren }
HAnimJoint1525.AddChildren([HAnimJoint1541]);
{ .AddChildren }
HAnimJoint1484.AddChildren([HAnimJoint1525]);
{ .AddChildren }
HAnimJoint1340.AddChildren([HAnimJoint1484]);
{ .AddChildren }
HAnimJoint1303.AddChildren([HAnimJoint1340]);
{ .AddChildren }
HAnimJoint1280.AddChildren([HAnimJoint1303]);
{ .AddChildren }
HAnimJoint1271.AddChildren([HAnimJoint1280]);
{ .AddChildren }
HAnimJoint1227.AddChildren([HAnimJoint1271]);
{ .AddChildren }
HAnimJoint995.AddChildren([HAnimJoint1227]);
HAnimJoint1560 := THAnimJointNode.Create;
HAnimJoint1560.NameField := 'r_sternoclavicular';
HAnimJoint1560.Center := Vector3(-0.0694,1.46,-0.033);
HAnimJoint1560.SetUlimit([0,0,0]);
HAnimJoint1560.SetLlimit([0,0,0]);
HAnimSegment1561 := THAnimSegmentNode.Create;
HAnimSegment1561.NameField := 'r_clavicle';
Transform1562 := TTransformNode.Create;
Transform1562.Translation := Vector3(-0.0694,1.46,-0.033);
Transform1563 := TTransformNode.Create;
{ Empty Transform }
Shape1564 := TShapeNode.Create;
Shape1564 := Shape20;
{ .AddChild }
Transform1563.AddChildren([Shape1564]);
{ .AddChildren }
Transform1562.AddChildren([Transform1563]);
{ .AddChildren }
HAnimSegment1561.AddChildren([Transform1562]);
Shape1565 := TShapeNode.Create;
LineSet1566 := TLineSetNode.Create;
LineSet1566.SetVertexCount([2]);
Coordinate1567 := TCoordinateNode.Create;
Coordinate1567.SetPoint([Vector3(-0.0694,1.46,-0.033),Vector3(-0.0836,1.4281,-0.0401)]);
{ .SetCoord }
LineSet1566.Coord := Coordinate1567;
{ from r_sternoclavicular to r_acromioclavicular vertices 2 }
ColorRGBA1568 := TColorRGBANode.Create;
ColorRGBA1568 := ColorRGBA27;
{ .SetColor }
LineSet1566.Color := ColorRGBA1568;
{ .SetGeometry }
Shape1565.Geometry := LineSet1566;
{ .AddChildren }
HAnimSegment1561.AddChildren([Shape1565]);
HAnimSite1569 := THAnimSiteNode.Create;
HAnimSite1569.NameField := 'r_acromion';
HAnimSite1569.Translation := Vector3(-0.1905,1.4791,-0.0431);
TouchSensor1570 := TTouchSensorNode.Create;
TouchSensor1570.Description := 'HAnimSite 20 r_acromion';
{ .AddChildren }
HAnimSite1569.AddChildren([TouchSensor1570]);
Shape1571 := TShapeNode.Create;
Shape1571 := Shape30;
{ .AddChildren }
HAnimSite1569.AddChildren([Shape1571]);
Billboard1572 := TBillboardNode.Create;
Shape1573 := TShapeNode.Create;
Text1574 := TTextNode.Create;
Text1574.SetText(['20']);
FontStyle1575 := TFontStyleNode.Create;
FontStyle1575.Size := 0.035;
{ .SetFontStyle }
Text1574.FontStyle := FontStyle1575;
{ .SetGeometry }
Shape1573.Geometry := Text1574;
{ .AddChildren }
Billboard1572.AddChildren([Shape1573]);
{ .AddChildren }
HAnimSite1569.AddChildren([Billboard1572]);
{ .AddChildren }
HAnimSegment1561.AddChildren([HAnimSite1569]);
HAnimSite1576 := THAnimSiteNode.Create;
HAnimSite1576.NameField := 'r_axilla_distal';
HAnimSite1576.Translation := Vector3(-0.1603,1.4098,-0.0826);
TouchSensor1577 := TTouchSensorNode.Create;
TouchSensor1577.Description := 'HAnimSite 22 r_axilla_distal';
{ .AddChildren }
HAnimSite1576.AddChildren([TouchSensor1577]);
Shape1578 := TShapeNode.Create;
Shape1578 := Shape30;
{ .AddChildren }
HAnimSite1576.AddChildren([Shape1578]);
Billboard1579 := TBillboardNode.Create;
Shape1580 := TShapeNode.Create;
Text1581 := TTextNode.Create;
Text1581.SetText(['22']);
FontStyle1582 := TFontStyleNode.Create;
FontStyle1582.Size := 0.035;
{ .SetFontStyle }
Text1581.FontStyle := FontStyle1582;
{ .SetGeometry }
Shape1580.Geometry := Text1581;
{ .AddChildren }
Billboard1579.AddChildren([Shape1580]);
{ .AddChildren }
HAnimSite1576.AddChildren([Billboard1579]);
{ .AddChildren }
HAnimSegment1561.AddChildren([HAnimSite1576]);
HAnimSite1583 := THAnimSiteNode.Create;
HAnimSite1583.NameField := 'r_axilla_posterior_folds';
TouchSensor1584 := TTouchSensorNode.Create;
TouchSensor1584.Description := 'HAnimSite 23 r_axilla_posterior_folds';
{ .AddChildren }
HAnimSite1583.AddChildren([TouchSensor1584]);
Shape1585 := TShapeNode.Create;
Shape1585 := Shape30;
{ .AddChildren }
HAnimSite1583.AddChildren([Shape1585]);
Billboard1586 := TBillboardNode.Create;
Shape1587 := TShapeNode.Create;
Text1588 := TTextNode.Create;
Text1588.SetText(['23']);
FontStyle1589 := TFontStyleNode.Create;
FontStyle1589.Size := 0.035;
{ .SetFontStyle }
Text1588.FontStyle := FontStyle1589;
{ .SetGeometry }
Shape1587.Geometry := Text1588;
{ .AddChildren }
Billboard1586.AddChildren([Shape1587]);
{ .AddChildren }
HAnimSite1583.AddChildren([Billboard1586]);
{ .AddChildren }
HAnimSegment1561.AddChildren([HAnimSite1583]);
HAnimSite1590 := THAnimSiteNode.Create;
HAnimSite1590.NameField := 'r_axilla_proximal';
HAnimSite1590.Translation := Vector3(-0.1626,1.4072,-0.0031);
TouchSensor1591 := TTouchSensorNode.Create;
TouchSensor1591.Description := 'HAnimSite 21 r_axilla_proximal';
{ .AddChildren }
HAnimSite1590.AddChildren([TouchSensor1591]);
Shape1592 := TShapeNode.Create;
Shape1592 := Shape30;
{ .AddChildren }
HAnimSite1590.AddChildren([Shape1592]);
Billboard1593 := TBillboardNode.Create;
Shape1594 := TShapeNode.Create;
Text1595 := TTextNode.Create;
Text1595.SetText(['21']);
FontStyle1596 := TFontStyleNode.Create;
FontStyle1596.Size := 0.035;
{ .SetFontStyle }
Text1595.FontStyle := FontStyle1596;
{ .SetGeometry }
Shape1594.Geometry := Text1595;
{ .AddChildren }
Billboard1593.AddChildren([Shape1594]);
{ .AddChildren }
HAnimSite1590.AddChildren([Billboard1593]);
{ .AddChildren }
HAnimSegment1561.AddChildren([HAnimSite1590]);
HAnimSite1597 := THAnimSiteNode.Create;
HAnimSite1597.NameField := 'r_clavicale';
HAnimSite1597.Translation := Vector3(-0.0115,1.4943,0.04);
TouchSensor1598 := TTouchSensorNode.Create;
TouchSensor1598.Description := 'HAnimSite 19 r_clavicale';
{ .AddChildren }
HAnimSite1597.AddChildren([TouchSensor1598]);
Shape1599 := TShapeNode.Create;
Shape1599 := Shape30;
{ .AddChildren }
HAnimSite1597.AddChildren([Shape1599]);
Billboard1600 := TBillboardNode.Create;
Shape1601 := TShapeNode.Create;
Text1602 := TTextNode.Create;
Text1602.SetText(['19']);
FontStyle1603 := TFontStyleNode.Create;
FontStyle1603.Size := 0.035;
{ .SetFontStyle }
Text1602.FontStyle := FontStyle1603;
{ .SetGeometry }
Shape1601.Geometry := Text1602;
{ .AddChildren }
Billboard1600.AddChildren([Shape1601]);
{ .AddChildren }
HAnimSite1597.AddChildren([Billboard1600]);
{ .AddChildren }
HAnimSegment1561.AddChildren([HAnimSite1597]);
{ .AddChildren }
HAnimJoint1560.AddChildren([HAnimSegment1561]);
HAnimJoint1604 := THAnimJointNode.Create;
HAnimJoint1604.NameField := 'r_acromioclavicular';
HAnimJoint1604.Center := Vector3(-0.0836,1.4281,-0.0401);
HAnimJoint1604.SetUlimit([0,0,0]);
HAnimJoint1604.SetLlimit([0,0,0]);
HAnimSegment1605 := THAnimSegmentNode.Create;
HAnimSegment1605.NameField := 'r_scapula';
Transform1606 := TTransformNode.Create;
Transform1606.Translation := Vector3(-0.0836,1.4281,-0.0401);
Transform1607 := TTransformNode.Create;
{ Empty Transform }
Shape1608 := TShapeNode.Create;
Shape1608 := Shape20;
{ .AddChild }
Transform1607.AddChildren([Shape1608]);
{ .AddChildren }
Transform1606.AddChildren([Transform1607]);
{ .AddChildren }
HAnimSegment1605.AddChildren([Transform1606]);
Shape1609 := TShapeNode.Create;
LineSet1610 := TLineSetNode.Create;
LineSet1610.SetVertexCount([2]);
Coordinate1611 := TCoordinateNode.Create;
Coordinate1611.SetPoint([Vector3(-0.0836,1.4281,-0.0401),Vector3(-0.1907,1.4407,-0.0325)]);
{ .SetCoord }
LineSet1610.Coord := Coordinate1611;
{ from r_acromioclavicular to r_shoulder vertices 2 }
ColorRGBA1612 := TColorRGBANode.Create;
ColorRGBA1612 := ColorRGBA27;
{ .SetColor }
LineSet1610.Color := ColorRGBA1612;
{ .SetGeometry }
Shape1609.Geometry := LineSet1610;
{ .AddChildren }
HAnimSegment1605.AddChildren([Shape1609]);
{ .AddChildren }
HAnimJoint1604.AddChildren([HAnimSegment1605]);
HAnimJoint1613 := THAnimJointNode.Create;
HAnimJoint1613.NameField := 'r_shoulder';
HAnimJoint1613.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimJoint1613.SetUlimit([0,0,0]);
HAnimJoint1613.SetLlimit([0,0,0]);
HAnimSegment1614 := THAnimSegmentNode.Create;
HAnimSegment1614.NameField := 'r_upperarm';
Transform1615 := TTransformNode.Create;
Transform1615.Translation := Vector3(-0.1907,1.4407,-0.0325);
Transform1616 := TTransformNode.Create;
{ Empty Transform }
Shape1617 := TShapeNode.Create;
Shape1617 := Shape20;
{ .AddChild }
Transform1616.AddChildren([Shape1617]);
{ .AddChildren }
Transform1615.AddChildren([Transform1616]);
{ .AddChildren }
HAnimSegment1614.AddChildren([Transform1615]);
Shape1618 := TShapeNode.Create;
LineSet1619 := TLineSetNode.Create;
LineSet1619.SetVertexCount([2]);
Coordinate1620 := TCoordinateNode.Create;
Coordinate1620.SetPoint([Vector3(-0.1907,1.4407,-0.0325),Vector3(-0.1949,1.1388,-0.062)]);
{ .SetCoord }
LineSet1619.Coord := Coordinate1620;
{ from r_shoulder to r_elbow vertices 2 }
ColorRGBA1621 := TColorRGBANode.Create;
ColorRGBA1621 := ColorRGBA27;
{ .SetColor }
LineSet1619.Color := ColorRGBA1621;
{ .SetGeometry }
Shape1618.Geometry := LineSet1619;
{ .AddChildren }
HAnimSegment1614.AddChildren([Shape1618]);
HAnimSite1622 := THAnimSiteNode.Create;
HAnimSite1622.NameField := 'r_bideltoid';
TouchSensor1623 := TTouchSensorNode.Create;
TouchSensor1623.Description := 'HAnimSite 97 r_bideltoid';
{ .AddChildren }
HAnimSite1622.AddChildren([TouchSensor1623]);
Shape1624 := TShapeNode.Create;
Shape1624 := Shape30;
{ .AddChildren }
HAnimSite1622.AddChildren([Shape1624]);
Billboard1625 := TBillboardNode.Create;
Shape1626 := TShapeNode.Create;
Text1627 := TTextNode.Create;
Text1627.SetText(['97']);
FontStyle1628 := TFontStyleNode.Create;
FontStyle1628.Size := 0.035;
{ .SetFontStyle }
Text1627.FontStyle := FontStyle1628;
{ .SetGeometry }
Shape1626.Geometry := Text1627;
{ .AddChildren }
Billboard1625.AddChildren([Shape1626]);
{ .AddChildren }
HAnimSite1622.AddChildren([Billboard1625]);
{ .AddChildren }
HAnimSegment1614.AddChildren([HAnimSite1622]);
HAnimSite1629 := THAnimSiteNode.Create;
HAnimSite1629.NameField := 'r_humeral_lateral_epicondyles';
HAnimSite1629.Translation := Vector3(-0.2224,1.1517,-0.1033);
TouchSensor1630 := TTouchSensorNode.Create;
TouchSensor1630.Description := 'HAnimSite 66 r_humeral_lateral_epicondyles';
{ .AddChildren }
HAnimSite1629.AddChildren([TouchSensor1630]);
Shape1631 := TShapeNode.Create;
Shape1631 := Shape30;
{ .AddChildren }
HAnimSite1629.AddChildren([Shape1631]);
Billboard1632 := TBillboardNode.Create;
Shape1633 := TShapeNode.Create;
Text1634 := TTextNode.Create;
Text1634.SetText(['66']);
FontStyle1635 := TFontStyleNode.Create;
FontStyle1635.Size := 0.035;
{ .SetFontStyle }
Text1634.FontStyle := FontStyle1635;
{ .SetGeometry }
Shape1633.Geometry := Text1634;
{ .AddChildren }
Billboard1632.AddChildren([Shape1633]);
{ .AddChildren }
HAnimSite1629.AddChildren([Billboard1632]);
{ .AddChildren }
HAnimSegment1614.AddChildren([HAnimSite1629]);
{ .AddChildren }
HAnimJoint1613.AddChildren([HAnimSegment1614]);
HAnimJoint1636 := THAnimJointNode.Create;
HAnimJoint1636.NameField := 'r_elbow';
HAnimJoint1636.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimJoint1636.SetUlimit([0,0,0]);
HAnimJoint1636.SetLlimit([0,0,0]);
HAnimSegment1637 := THAnimSegmentNode.Create;
HAnimSegment1637.NameField := 'r_forearm';
Transform1638 := TTransformNode.Create;
Transform1638.Translation := Vector3(-0.1949,1.1388,-0.062);
Transform1639 := TTransformNode.Create;
{ Empty Transform }
Shape1640 := TShapeNode.Create;
Shape1640 := Shape20;
{ .AddChild }
Transform1639.AddChildren([Shape1640]);
{ .AddChildren }
Transform1638.AddChildren([Transform1639]);
{ .AddChildren }
HAnimSegment1637.AddChildren([Transform1638]);
Shape1641 := TShapeNode.Create;
LineSet1642 := TLineSetNode.Create;
LineSet1642.SetVertexCount([2]);
Coordinate1643 := TCoordinateNode.Create;
Coordinate1643.SetPoint([Vector3(-0.1949,1.1388,-0.062),Vector3(-0.1959,0.8694,-0.0521)]);
{ .SetCoord }
LineSet1642.Coord := Coordinate1643;
{ from r_elbow to r_radiocarpal vertices 2 }
ColorRGBA1644 := TColorRGBANode.Create;
ColorRGBA1644 := ColorRGBA27;
{ .SetColor }
LineSet1642.Color := ColorRGBA1644;
{ .SetGeometry }
Shape1641.Geometry := LineSet1642;
{ .AddChildren }
HAnimSegment1637.AddChildren([Shape1641]);
HAnimSite1645 := THAnimSiteNode.Create;
HAnimSite1645.NameField := 'r_humeral_medial_epicondyles';
HAnimSite1645.Translation := Vector3(-0.168,1.1298,-0.1062);
TouchSensor1646 := TTouchSensorNode.Create;
TouchSensor1646.Description := 'HAnimSite 67 r_humeral_medial_epicondyles';
{ .AddChildren }
HAnimSite1645.AddChildren([TouchSensor1646]);
Shape1647 := TShapeNode.Create;
Shape1647 := Shape30;
{ .AddChildren }
HAnimSite1645.AddChildren([Shape1647]);
Billboard1648 := TBillboardNode.Create;
Shape1649 := TShapeNode.Create;
Text1650 := TTextNode.Create;
Text1650.SetText(['67']);
FontStyle1651 := TFontStyleNode.Create;
FontStyle1651.Size := 0.035;
{ .SetFontStyle }
Text1650.FontStyle := FontStyle1651;
{ .SetGeometry }
Shape1649.Geometry := Text1650;
{ .AddChildren }
Billboard1648.AddChildren([Shape1649]);
{ .AddChildren }
HAnimSite1645.AddChildren([Billboard1648]);
{ .AddChildren }
HAnimSegment1637.AddChildren([HAnimSite1645]);
HAnimSite1652 := THAnimSiteNode.Create;
HAnimSite1652.NameField := 'r_olecranon';
HAnimSite1652.Translation := Vector3(-0.1907,1.1405,-0.1065);
TouchSensor1653 := TTouchSensorNode.Create;
TouchSensor1653.Description := 'HAnimSite 68 r_olecranon';
{ .AddChildren }
HAnimSite1652.AddChildren([TouchSensor1653]);
Shape1654 := TShapeNode.Create;
Shape1654 := Shape30;
{ .AddChildren }
HAnimSite1652.AddChildren([Shape1654]);
Billboard1655 := TBillboardNode.Create;
Shape1656 := TShapeNode.Create;
Text1657 := TTextNode.Create;
Text1657.SetText(['68']);
FontStyle1658 := TFontStyleNode.Create;
FontStyle1658.Size := 0.035;
{ .SetFontStyle }
Text1657.FontStyle := FontStyle1658;
{ .SetGeometry }
Shape1656.Geometry := Text1657;
{ .AddChildren }
Billboard1655.AddChildren([Shape1656]);
{ .AddChildren }
HAnimSite1652.AddChildren([Billboard1655]);
{ .AddChildren }
HAnimSegment1637.AddChildren([HAnimSite1652]);
HAnimSite1659 := THAnimSiteNode.Create;
HAnimSite1659.NameField := 'r_radial_styloid';
HAnimSite1659.Translation := Vector3(-0.1884,0.8676,-0.036);
TouchSensor1660 := TTouchSensorNode.Create;
TouchSensor1660.Description := 'HAnimSite 74 r_radial_styloid';
{ .AddChildren }
HAnimSite1659.AddChildren([TouchSensor1660]);
Shape1661 := TShapeNode.Create;
Shape1661 := Shape30;
{ .AddChildren }
HAnimSite1659.AddChildren([Shape1661]);
Billboard1662 := TBillboardNode.Create;
Shape1663 := TShapeNode.Create;
Text1664 := TTextNode.Create;
Text1664.SetText(['74']);
FontStyle1665 := TFontStyleNode.Create;
FontStyle1665.Size := 0.035;
{ .SetFontStyle }
Text1664.FontStyle := FontStyle1665;
{ .SetGeometry }
Shape1663.Geometry := Text1664;
{ .AddChildren }
Billboard1662.AddChildren([Shape1663]);
{ .AddChildren }
HAnimSite1659.AddChildren([Billboard1662]);
{ .AddChildren }
HAnimSegment1637.AddChildren([HAnimSite1659]);
HAnimSite1666 := THAnimSiteNode.Create;
HAnimSite1666.NameField := 'r_radiale';
HAnimSite1666.Translation := Vector3(-0.213,1.1305,-0.1091);
TouchSensor1667 := TTouchSensorNode.Create;
TouchSensor1667.Description := 'HAnimSite 72 r_radiale';
{ .AddChildren }
HAnimSite1666.AddChildren([TouchSensor1667]);
Shape1668 := TShapeNode.Create;
Shape1668 := Shape30;
{ .AddChildren }
HAnimSite1666.AddChildren([Shape1668]);
Billboard1669 := TBillboardNode.Create;
Shape1670 := TShapeNode.Create;
Text1671 := TTextNode.Create;
Text1671.SetText(['72']);
FontStyle1672 := TFontStyleNode.Create;
FontStyle1672.Size := 0.035;
{ .SetFontStyle }
Text1671.FontStyle := FontStyle1672;
{ .SetGeometry }
Shape1670.Geometry := Text1671;
{ .AddChildren }
Billboard1669.AddChildren([Shape1670]);
{ .AddChildren }
HAnimSite1666.AddChildren([Billboard1669]);
{ .AddChildren }
HAnimSegment1637.AddChildren([HAnimSite1666]);
{ .AddChildren }
HAnimJoint1636.AddChildren([HAnimSegment1637]);
HAnimJoint1673 := THAnimJointNode.Create;
HAnimJoint1673.NameField := 'r_radiocarpal';
HAnimJoint1673.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimJoint1673.SetUlimit([0,0,0]);
HAnimJoint1673.SetLlimit([0,0,0]);
HAnimSegment1674 := THAnimSegmentNode.Create;
HAnimSegment1674.NameField := 'r_carpal';
Transform1675 := TTransformNode.Create;
Transform1675.Scale := Vector3(0.2,0.2,0.2);
Transform1675.Translation := Vector3(-0.2,0.85,-0.05);
Transform1675.Rotation := Vector4(0,0,1,-3.14);
{ Transform right hand }
Transform1676 := TTransformNode.Create;
Transform1676.Rotation := Vector4(0,1,0,1.57);
{ Transform right hand }
Shape1677 := TShapeNode.Create;
Shape1677 := Shape20;
{ .AddChild }
Transform1676.AddChildren([Shape1677]);
{ .AddChildren }
Transform1675.AddChildren([Transform1676]);
{ .AddChildren }
HAnimSegment1674.AddChildren([Transform1675]);
Shape1678 := TShapeNode.Create;
LineSet1679 := TLineSetNode.Create;
LineSet1679.SetVertexCount([2]);
Coordinate1680 := TCoordinateNode.Create;
Coordinate1680.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1811,0.6975,-0.0826)]);
{ .SetCoord }
LineSet1679.Coord := Coordinate1680;
{ from r_radiocarpal to r_midcarpal_1 vertices 2 }
ColorRGBA1681 := TColorRGBANode.Create;
ColorRGBA1681 := ColorRGBA27;
{ .SetColor }
LineSet1679.Color := ColorRGBA1681;
{ .SetGeometry }
Shape1678.Geometry := LineSet1679;
{ .AddChildren }
HAnimSegment1674.AddChildren([Shape1678]);
HAnimSite1682 := THAnimSiteNode.Create;
HAnimSite1682.NameField := 'r_ulnar_styloid';
HAnimSite1682.Translation := Vector3(-0.2117,0.8562,-0.0584);
TouchSensor1683 := TTouchSensorNode.Create;
TouchSensor1683.Description := 'HAnimSite 73 r_ulnar_styloid';
{ .AddChildren }
HAnimSite1682.AddChildren([TouchSensor1683]);
Shape1684 := TShapeNode.Create;
Shape1684 := Shape30;
{ .AddChildren }
HAnimSite1682.AddChildren([Shape1684]);
Billboard1685 := TBillboardNode.Create;
Shape1686 := TShapeNode.Create;
Text1687 := TTextNode.Create;
Text1687.SetText(['73']);
FontStyle1688 := TFontStyleNode.Create;
FontStyle1688.Size := 0.035;
{ .SetFontStyle }
Text1687.FontStyle := FontStyle1688;
{ .SetGeometry }
Shape1686.Geometry := Text1687;
{ .AddChildren }
Billboard1685.AddChildren([Shape1686]);
{ .AddChildren }
HAnimSite1682.AddChildren([Billboard1685]);
{ .AddChildren }
HAnimSegment1674.AddChildren([HAnimSite1682]);
Shape1689 := TShapeNode.Create;
LineSet1690 := TLineSetNode.Create;
LineSet1690.SetVertexCount([2]);
Coordinate1691 := TCoordinateNode.Create;
Coordinate1691.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1811,0.6984,-0.0935)]);
{ .SetCoord }
LineSet1690.Coord := Coordinate1691;
{ from r_radiocarpal to r_midcarpal_2 vertices 2 }
ColorRGBA1692 := TColorRGBANode.Create;
ColorRGBA1692 := ColorRGBA27;
{ .SetColor }
LineSet1690.Color := ColorRGBA1692;
{ .SetGeometry }
Shape1689.Geometry := LineSet1690;
{ .AddChildren }
HAnimSegment1674.AddChildren([Shape1689]);
Shape1693 := TShapeNode.Create;
LineSet1694 := TLineSetNode.Create;
LineSet1694.SetVertexCount([2]);
Coordinate1695 := TCoordinateNode.Create;
Coordinate1695.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1809,0.7,-0.1067)]);
{ .SetCoord }
LineSet1694.Coord := Coordinate1695;
{ from r_radiocarpal to r_midcarpal_3 vertices 2 }
ColorRGBA1696 := TColorRGBANode.Create;
ColorRGBA1696 := ColorRGBA27;
{ .SetColor }
LineSet1694.Color := ColorRGBA1696;
{ .SetGeometry }
Shape1693.Geometry := LineSet1694;
{ .AddChildren }
HAnimSegment1674.AddChildren([Shape1693]);
Shape1697 := TShapeNode.Create;
LineSet1698 := TLineSetNode.Create;
LineSet1698.SetVertexCount([2]);
Coordinate1699 := TCoordinateNode.Create;
Coordinate1699.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1809,0.6973,-0.1276)]);
{ .SetCoord }
LineSet1698.Coord := Coordinate1699;
{ from r_radiocarpal to r_midcarpal_4_5 vertices 2 }
ColorRGBA1700 := TColorRGBANode.Create;
ColorRGBA1700 := ColorRGBA27;
{ .SetColor }
LineSet1698.Color := ColorRGBA1700;
{ .SetGeometry }
Shape1697.Geometry := LineSet1698;
{ .AddChildren }
HAnimSegment1674.AddChildren([Shape1697]);
{ .AddChildren }
HAnimJoint1673.AddChildren([HAnimSegment1674]);
HAnimJoint1701 := THAnimJointNode.Create;
HAnimJoint1701.NameField := 'r_midcarpal_1';
HAnimJoint1701.Center := Vector3(-0.1811,0.6975,-0.0826);
HAnimJoint1701.SetUlimit([0,0,0]);
HAnimJoint1701.SetLlimit([0,0,0]);
HAnimSegment1702 := THAnimSegmentNode.Create;
HAnimSegment1702.NameField := 'r_trapezium';
Transform1703 := TTransformNode.Create;
Transform1703.Translation := Vector3(-0.1811,0.6975,-0.0826);
Transform1704 := TTransformNode.Create;
{ Empty Transform }
Shape1705 := TShapeNode.Create;
Shape1705 := Shape20;
{ .AddChild }
Transform1704.AddChildren([Shape1705]);
{ .AddChildren }
Transform1703.AddChildren([Transform1704]);
{ .AddChildren }
HAnimSegment1702.AddChildren([Transform1703]);
Shape1706 := TShapeNode.Create;
LineSet1707 := TLineSetNode.Create;
LineSet1707.SetVertexCount([2]);
Coordinate1708 := TCoordinateNode.Create;
Coordinate1708.SetPoint([Vector3(-0.1811,0.6975,-0.0826),Vector3(-0.1899,0.8502,-0.0473)]);
{ .SetCoord }
LineSet1707.Coord := Coordinate1708;
{ from r_midcarpal_1 to r_carpometacarpal_1 vertices 2 }
ColorRGBA1709 := TColorRGBANode.Create;
ColorRGBA1709 := ColorRGBA27;
{ .SetColor }
LineSet1707.Color := ColorRGBA1709;
{ .SetGeometry }
Shape1706.Geometry := LineSet1707;
{ .AddChildren }
HAnimSegment1702.AddChildren([Shape1706]);
{ .AddChildren }
HAnimJoint1701.AddChildren([HAnimSegment1702]);
HAnimJoint1710 := THAnimJointNode.Create;
HAnimJoint1710.NameField := 'r_carpometacarpal_1';
HAnimJoint1710.Center := Vector3(-0.1899,0.8502,-0.0473);
HAnimJoint1710.SetUlimit([0,0,0]);
HAnimJoint1710.SetLlimit([0,0,0]);
HAnimSegment1711 := THAnimSegmentNode.Create;
HAnimSegment1711.NameField := 'r_metacarpal_1';
Transform1712 := TTransformNode.Create;
Transform1712.Translation := Vector3(-0.1899,0.8502,-0.0473);
Transform1713 := TTransformNode.Create;
{ Empty Transform }
Shape1714 := TShapeNode.Create;
Shape1714 := Shape20;
{ .AddChild }
Transform1713.AddChildren([Shape1714]);
{ .AddChildren }
Transform1712.AddChildren([Transform1713]);
{ .AddChildren }
HAnimSegment1711.AddChildren([Transform1712]);
Shape1715 := TShapeNode.Create;
LineSet1716 := TLineSetNode.Create;
LineSet1716.SetVertexCount([2]);
Coordinate1717 := TCoordinateNode.Create;
Coordinate1717.SetPoint([Vector3(-0.1899,0.8502,-0.0473),Vector3(-0.1874,0.8256,0.0306)]);
{ .SetCoord }
LineSet1716.Coord := Coordinate1717;
{ from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2 }
ColorRGBA1718 := TColorRGBANode.Create;
ColorRGBA1718 := ColorRGBA27;
{ .SetColor }
LineSet1716.Color := ColorRGBA1718;
{ .SetGeometry }
Shape1715.Geometry := LineSet1716;
{ .AddChildren }
HAnimSegment1711.AddChildren([Shape1715]);
{ .AddChildren }
HAnimJoint1710.AddChildren([HAnimSegment1711]);
HAnimJoint1719 := THAnimJointNode.Create;
HAnimJoint1719.NameField := 'r_metacarpophalangeal_1';
HAnimJoint1719.Center := Vector3(-0.1874,0.8256,0.0306);
HAnimJoint1719.SetUlimit([0,0,0]);
HAnimJoint1719.SetLlimit([0,0,0]);
HAnimSegment1720 := THAnimSegmentNode.Create;
HAnimSegment1720.NameField := 'r_carpal_proximal_phalanx_1';
Transform1721 := TTransformNode.Create;
Transform1721.Translation := Vector3(-0.1874,0.8256,0.0306);
Transform1722 := TTransformNode.Create;
{ Empty Transform }
Shape1723 := TShapeNode.Create;
Shape1723 := Shape20;
{ .AddChild }
Transform1722.AddChildren([Shape1723]);
{ .AddChildren }
Transform1721.AddChildren([Transform1722]);
{ .AddChildren }
HAnimSegment1720.AddChildren([Transform1721]);
Shape1724 := TShapeNode.Create;
LineSet1725 := TLineSetNode.Create;
LineSet1725.SetVertexCount([2]);
Coordinate1726 := TCoordinateNode.Create;
Coordinate1726.SetPoint([Vector3(-0.1874,0.8256,0.0306),Vector3(-0.1864,0.819,0.0506)]);
{ .SetCoord }
LineSet1725.Coord := Coordinate1726;
{ from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2 }
ColorRGBA1727 := TColorRGBANode.Create;
ColorRGBA1727 := ColorRGBA27;
{ .SetColor }
LineSet1725.Color := ColorRGBA1727;
{ .SetGeometry }
Shape1724.Geometry := LineSet1725;
{ .AddChildren }
HAnimSegment1720.AddChildren([Shape1724]);
{ .AddChildren }
HAnimJoint1719.AddChildren([HAnimSegment1720]);
HAnimJoint1728 := THAnimJointNode.Create;
HAnimJoint1728.NameField := 'r_carpal_interphalangeal_1';
HAnimJoint1728.Center := Vector3(-0.1864,0.819,0.0506);
HAnimJoint1728.SetUlimit([0,0,0]);
HAnimJoint1728.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1719.AddChildren([HAnimJoint1728]);
{ .AddChildren }
HAnimJoint1710.AddChildren([HAnimJoint1719]);
{ .AddChildren }
HAnimJoint1701.AddChildren([HAnimJoint1710]);
{ .AddChildren }
HAnimJoint1673.AddChildren([HAnimJoint1701]);
HAnimJoint1729 := THAnimJointNode.Create;
HAnimJoint1729.NameField := 'r_midcarpal_2';
HAnimJoint1729.Center := Vector3(-0.1811,0.6984,-0.0935);
HAnimJoint1729.SetUlimit([0,0,0]);
HAnimJoint1729.SetLlimit([0,0,0]);
HAnimSegment1730 := THAnimSegmentNode.Create;
HAnimSegment1730.NameField := 'r_trapezoid';
Transform1731 := TTransformNode.Create;
Transform1731.Translation := Vector3(-0.1811,0.6984,-0.0935);
Transform1732 := TTransformNode.Create;
{ Empty Transform }
Shape1733 := TShapeNode.Create;
Shape1733 := Shape20;
{ .AddChild }
Transform1732.AddChildren([Shape1733]);
{ .AddChildren }
Transform1731.AddChildren([Transform1732]);
{ .AddChildren }
HAnimSegment1730.AddChildren([Transform1731]);
Shape1734 := TShapeNode.Create;
LineSet1735 := TLineSetNode.Create;
LineSet1735.SetVertexCount([2]);
Coordinate1736 := TCoordinateNode.Create;
Coordinate1736.SetPoint([Vector3(-0.1811,0.6984,-0.0935),Vector3(-0.1961,0.8055,-0.0218)]);
{ .SetCoord }
LineSet1735.Coord := Coordinate1736;
{ from r_midcarpal_2 to r_carpometacarpal_2 vertices 2 }
ColorRGBA1737 := TColorRGBANode.Create;
ColorRGBA1737 := ColorRGBA27;
{ .SetColor }
LineSet1735.Color := ColorRGBA1737;
{ .SetGeometry }
Shape1734.Geometry := LineSet1735;
{ .AddChildren }
HAnimSegment1730.AddChildren([Shape1734]);
{ .AddChildren }
HAnimJoint1729.AddChildren([HAnimSegment1730]);
HAnimJoint1738 := THAnimJointNode.Create;
HAnimJoint1738.NameField := 'r_carpometacarpal_2';
HAnimJoint1738.Center := Vector3(-0.1961,0.8055,-0.0218);
HAnimJoint1738.SetUlimit([0,0,0]);
HAnimJoint1738.SetLlimit([0,0,0]);
HAnimSegment1739 := THAnimSegmentNode.Create;
HAnimSegment1739.NameField := 'r_metacarpal_2';
Transform1740 := TTransformNode.Create;
Transform1740.Translation := Vector3(-0.1961,0.8055,-0.0218);
Transform1741 := TTransformNode.Create;
{ Empty Transform }
Shape1742 := TShapeNode.Create;
Shape1742 := Shape20;
{ .AddChild }
Transform1741.AddChildren([Shape1742]);
{ .AddChildren }
Transform1740.AddChildren([Transform1741]);
{ .AddChildren }
HAnimSegment1739.AddChildren([Transform1740]);
Shape1743 := TShapeNode.Create;
LineSet1744 := TLineSetNode.Create;
LineSet1744.SetVertexCount([2]);
Coordinate1745 := TCoordinateNode.Create;
Coordinate1745.SetPoint([Vector3(-0.1961,0.8055,-0.0218),Vector3(-0.1961,0.7846,-0.0218)]);
{ .SetCoord }
LineSet1744.Coord := Coordinate1745;
{ from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2 }
ColorRGBA1746 := TColorRGBANode.Create;
ColorRGBA1746 := ColorRGBA27;
{ .SetColor }
LineSet1744.Color := ColorRGBA1746;
{ .SetGeometry }
Shape1743.Geometry := LineSet1744;
{ .AddChildren }
HAnimSegment1739.AddChildren([Shape1743]);
HAnimSite1747 := THAnimSiteNode.Create;
HAnimSite1747.NameField := 'r_metacarpal_phalanx_2';
HAnimSite1747.Translation := Vector3(-0.1977,0.8169,-0.0177);
TouchSensor1748 := TTouchSensorNode.Create;
TouchSensor1748.Description := 'HAnimSite 78 r_metacarpal_phalanx_2';
{ .AddChildren }
HAnimSite1747.AddChildren([TouchSensor1748]);
Shape1749 := TShapeNode.Create;
Shape1749 := Shape30;
{ .AddChildren }
HAnimSite1747.AddChildren([Shape1749]);
Billboard1750 := TBillboardNode.Create;
Shape1751 := TShapeNode.Create;
Text1752 := TTextNode.Create;
Text1752.SetText(['78']);
FontStyle1753 := TFontStyleNode.Create;
FontStyle1753.Size := 0.035;
{ .SetFontStyle }
Text1752.FontStyle := FontStyle1753;
{ .SetGeometry }
Shape1751.Geometry := Text1752;
{ .AddChildren }
Billboard1750.AddChildren([Shape1751]);
{ .AddChildren }
HAnimSite1747.AddChildren([Billboard1750]);
{ .AddChildren }
HAnimSegment1739.AddChildren([HAnimSite1747]);
{ .AddChildren }
HAnimJoint1738.AddChildren([HAnimSegment1739]);
HAnimJoint1754 := THAnimJointNode.Create;
HAnimJoint1754.NameField := 'r_metacarpophalangeal_2';
HAnimJoint1754.Center := Vector3(-0.1961,0.7846,-0.0218);
HAnimJoint1754.SetUlimit([0,0,0]);
HAnimJoint1754.SetLlimit([0,0,0]);
HAnimSegment1755 := THAnimSegmentNode.Create;
HAnimSegment1755.NameField := 'r_carpal_proximal_phalanx_2';
Transform1756 := TTransformNode.Create;
Transform1756.Translation := Vector3(-0.1961,0.7846,-0.0218);
Transform1757 := TTransformNode.Create;
{ Empty Transform }
Shape1758 := TShapeNode.Create;
Shape1758 := Shape20;
{ .AddChild }
Transform1757.AddChildren([Shape1758]);
{ .AddChildren }
Transform1756.AddChildren([Transform1757]);
{ .AddChildren }
HAnimSegment1755.AddChildren([Transform1756]);
Shape1759 := TShapeNode.Create;
LineSet1760 := TLineSetNode.Create;
LineSet1760.SetVertexCount([2]);
Coordinate1761 := TCoordinateNode.Create;
Coordinate1761.SetPoint([Vector3(-0.1961,0.7846,-0.0218),Vector3(-0.1954,0.7393,-0.0185)]);
{ .SetCoord }
LineSet1760.Coord := Coordinate1761;
{ from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2 }
ColorRGBA1762 := TColorRGBANode.Create;
ColorRGBA1762 := ColorRGBA27;
{ .SetColor }
LineSet1760.Color := ColorRGBA1762;
{ .SetGeometry }
Shape1759.Geometry := LineSet1760;
{ .AddChildren }
HAnimSegment1755.AddChildren([Shape1759]);
{ .AddChildren }
HAnimJoint1754.AddChildren([HAnimSegment1755]);
HAnimJoint1763 := THAnimJointNode.Create;
HAnimJoint1763.NameField := 'r_carpal_proximal_interphalangeal_2';
HAnimJoint1763.Center := Vector3(-0.1954,0.7393,-0.0185);
HAnimJoint1763.SetUlimit([0,0,0]);
HAnimJoint1763.SetLlimit([0,0,0]);
HAnimSegment1764 := THAnimSegmentNode.Create;
HAnimSegment1764.NameField := 'r_carpal_middle_phalanx_2';
Transform1765 := TTransformNode.Create;
Transform1765.Translation := Vector3(-0.1954,0.7393,-0.0185);
Transform1766 := TTransformNode.Create;
{ Empty Transform }
Shape1767 := TShapeNode.Create;
Shape1767 := Shape20;
{ .AddChild }
Transform1766.AddChildren([Shape1767]);
{ .AddChildren }
Transform1765.AddChildren([Transform1766]);
{ .AddChildren }
HAnimSegment1764.AddChildren([Transform1765]);
Shape1768 := TShapeNode.Create;
LineSet1769 := TLineSetNode.Create;
LineSet1769.SetVertexCount([2]);
Coordinate1770 := TCoordinateNode.Create;
Coordinate1770.SetPoint([Vector3(-0.1954,0.7393,-0.0185),Vector3(-0.1945,0.7169,-0.0173)]);
{ .SetCoord }
LineSet1769.Coord := Coordinate1770;
{ from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2 }
ColorRGBA1771 := TColorRGBANode.Create;
ColorRGBA1771 := ColorRGBA27;
{ .SetColor }
LineSet1769.Color := ColorRGBA1771;
{ .SetGeometry }
Shape1768.Geometry := LineSet1769;
{ .AddChildren }
HAnimSegment1764.AddChildren([Shape1768]);
{ .AddChildren }
HAnimJoint1763.AddChildren([HAnimSegment1764]);
HAnimJoint1772 := THAnimJointNode.Create;
HAnimJoint1772.NameField := 'r_carpal_distal_interphalangeal_2';
HAnimJoint1772.Center := Vector3(-0.1945,0.7169,-0.0173);
HAnimJoint1772.SetUlimit([0,0,0]);
HAnimJoint1772.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1763.AddChildren([HAnimJoint1772]);
{ .AddChildren }
HAnimJoint1754.AddChildren([HAnimJoint1763]);
{ .AddChildren }
HAnimJoint1738.AddChildren([HAnimJoint1754]);
{ .AddChildren }
HAnimJoint1729.AddChildren([HAnimJoint1738]);
{ .AddChildren }
HAnimJoint1673.AddChildren([HAnimJoint1729]);
HAnimJoint1773 := THAnimJointNode.Create;
HAnimJoint1773.NameField := 'r_midcarpal_3';
HAnimJoint1773.Center := Vector3(-0.1809,0.7,-0.1067);
HAnimJoint1773.SetUlimit([0,0,0]);
HAnimJoint1773.SetLlimit([0,0,0]);
HAnimSegment1774 := THAnimSegmentNode.Create;
HAnimSegment1774.NameField := 'r_capitate';
Transform1775 := TTransformNode.Create;
Transform1775.Translation := Vector3(-0.1809,0.7,-0.1067);
Transform1776 := TTransformNode.Create;
{ Empty Transform }
Shape1777 := TShapeNode.Create;
Shape1777 := Shape20;
{ .AddChild }
Transform1776.AddChildren([Shape1777]);
{ .AddChildren }
Transform1775.AddChildren([Transform1776]);
{ .AddChildren }
HAnimSegment1774.AddChildren([Transform1775]);
Shape1778 := TShapeNode.Create;
LineSet1779 := TLineSetNode.Create;
LineSet1779.SetVertexCount([2]);
Coordinate1780 := TCoordinateNode.Create;
Coordinate1780.SetPoint([Vector3(-0.1809,0.7,-0.1067),Vector3(-0.1972,0.806,-0.0468)]);
{ .SetCoord }
LineSet1779.Coord := Coordinate1780;
{ from r_midcarpal_3 to r_carpometacarpal_3 vertices 2 }
ColorRGBA1781 := TColorRGBANode.Create;
ColorRGBA1781 := ColorRGBA27;
{ .SetColor }
LineSet1779.Color := ColorRGBA1781;
{ .SetGeometry }
Shape1778.Geometry := LineSet1779;
{ .AddChildren }
HAnimSegment1774.AddChildren([Shape1778]);
{ .AddChildren }
HAnimJoint1773.AddChildren([HAnimSegment1774]);
HAnimJoint1782 := THAnimJointNode.Create;
HAnimJoint1782.NameField := 'r_carpometacarpal_3';
HAnimJoint1782.Center := Vector3(-0.1972,0.806,-0.0468);
HAnimJoint1782.SetUlimit([0,0,0]);
HAnimJoint1782.SetLlimit([0,0,0]);
HAnimSegment1783 := THAnimSegmentNode.Create;
HAnimSegment1783.NameField := 'r_metacarpal_3';
Transform1784 := TTransformNode.Create;
Transform1784.Translation := Vector3(-0.1972,0.806,-0.0468);
Transform1785 := TTransformNode.Create;
{ Empty Transform }
Shape1786 := TShapeNode.Create;
Shape1786 := Shape20;
{ .AddChild }
Transform1785.AddChildren([Shape1786]);
{ .AddChildren }
Transform1784.AddChildren([Transform1785]);
{ .AddChildren }
HAnimSegment1783.AddChildren([Transform1784]);
Shape1787 := TShapeNode.Create;
LineSet1788 := TLineSetNode.Create;
LineSet1788.SetVertexCount([2]);
Coordinate1789 := TCoordinateNode.Create;
Coordinate1789.SetPoint([Vector3(-0.1972,0.806,-0.0468),Vector3(-0.1972,0.7849,-0.0468)]);
{ .SetCoord }
LineSet1788.Coord := Coordinate1789;
{ from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2 }
ColorRGBA1790 := TColorRGBANode.Create;
ColorRGBA1790 := ColorRGBA27;
{ .SetColor }
LineSet1788.Color := ColorRGBA1790;
{ .SetGeometry }
Shape1787.Geometry := LineSet1788;
{ .AddChildren }
HAnimSegment1783.AddChildren([Shape1787]);
HAnimSite1791 := THAnimSiteNode.Create;
HAnimSite1791.NameField := 'r_metacarpal_phalanx_3';
TouchSensor1792 := TTouchSensorNode.Create;
TouchSensor1792.Description := 'HAnimSite 79 r_metacarpal_phalanx_3';
{ .AddChildren }
HAnimSite1791.AddChildren([TouchSensor1792]);
Shape1793 := TShapeNode.Create;
Shape1793 := Shape30;
{ .AddChildren }
HAnimSite1791.AddChildren([Shape1793]);
Billboard1794 := TBillboardNode.Create;
Shape1795 := TShapeNode.Create;
Text1796 := TTextNode.Create;
Text1796.SetText(['79']);
FontStyle1797 := TFontStyleNode.Create;
FontStyle1797.Size := 0.035;
{ .SetFontStyle }
Text1796.FontStyle := FontStyle1797;
{ .SetGeometry }
Shape1795.Geometry := Text1796;
{ .AddChildren }
Billboard1794.AddChildren([Shape1795]);
{ .AddChildren }
HAnimSite1791.AddChildren([Billboard1794]);
{ .AddChildren }
HAnimSegment1783.AddChildren([HAnimSite1791]);
{ .AddChildren }
HAnimJoint1782.AddChildren([HAnimSegment1783]);
HAnimJoint1798 := THAnimJointNode.Create;
HAnimJoint1798.NameField := 'r_metacarpophalangeal_3';
HAnimJoint1798.Center := Vector3(-0.1972,0.7849,-0.0468);
HAnimJoint1798.SetUlimit([0,0,0]);
HAnimJoint1798.SetLlimit([0,0,0]);
HAnimSegment1799 := THAnimSegmentNode.Create;
HAnimSegment1799.NameField := 'r_carpal_proximal_phalanx_3';
Transform1800 := TTransformNode.Create;
Transform1800.Translation := Vector3(-0.1972,0.7849,-0.0468);
Transform1801 := TTransformNode.Create;
{ Empty Transform }
Shape1802 := TShapeNode.Create;
Shape1802 := Shape20;
{ .AddChild }
Transform1801.AddChildren([Shape1802]);
{ .AddChildren }
Transform1800.AddChildren([Transform1801]);
{ .AddChildren }
HAnimSegment1799.AddChildren([Transform1800]);
Shape1803 := TShapeNode.Create;
LineSet1804 := TLineSetNode.Create;
LineSet1804.SetVertexCount([2]);
Coordinate1805 := TCoordinateNode.Create;
Coordinate1805.SetPoint([Vector3(-0.1972,0.7849,-0.0468),Vector3(-0.195,0.7304,-0.0441)]);
{ .SetCoord }
LineSet1804.Coord := Coordinate1805;
{ from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2 }
ColorRGBA1806 := TColorRGBANode.Create;
ColorRGBA1806 := ColorRGBA27;
{ .SetColor }
LineSet1804.Color := ColorRGBA1806;
{ .SetGeometry }
Shape1803.Geometry := LineSet1804;
{ .AddChildren }
HAnimSegment1799.AddChildren([Shape1803]);
{ .AddChildren }
HAnimJoint1798.AddChildren([HAnimSegment1799]);
HAnimJoint1807 := THAnimJointNode.Create;
HAnimJoint1807.NameField := 'r_carpal_proximal_interphalangeal_3';
HAnimJoint1807.Center := Vector3(-0.195,0.7304,-0.0441);
HAnimJoint1807.SetUlimit([0,0,0]);
HAnimJoint1807.SetLlimit([0,0,0]);
HAnimSegment1808 := THAnimSegmentNode.Create;
HAnimSegment1808.NameField := 'r_carpal_middle_phalanx_3';
Transform1809 := TTransformNode.Create;
Transform1809.Translation := Vector3(-0.195,0.7304,-0.0441);
Transform1810 := TTransformNode.Create;
{ Empty Transform }
Shape1811 := TShapeNode.Create;
Shape1811 := Shape20;
{ .AddChild }
Transform1810.AddChildren([Shape1811]);
{ .AddChildren }
Transform1809.AddChildren([Transform1810]);
{ .AddChildren }
HAnimSegment1808.AddChildren([Transform1809]);
Shape1812 := TShapeNode.Create;
LineSet1813 := TLineSetNode.Create;
LineSet1813.SetVertexCount([2]);
Coordinate1814 := TCoordinateNode.Create;
Coordinate1814.SetPoint([Vector3(-0.195,0.7304,-0.0441),Vector3(-0.1939,0.7042,-0.0432)]);
{ .SetCoord }
LineSet1813.Coord := Coordinate1814;
{ from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2 }
ColorRGBA1815 := TColorRGBANode.Create;
ColorRGBA1815 := ColorRGBA27;
{ .SetColor }
LineSet1813.Color := ColorRGBA1815;
{ .SetGeometry }
Shape1812.Geometry := LineSet1813;
{ .AddChildren }
HAnimSegment1808.AddChildren([Shape1812]);
{ .AddChildren }
HAnimJoint1807.AddChildren([HAnimSegment1808]);
HAnimJoint1816 := THAnimJointNode.Create;
HAnimJoint1816.NameField := 'r_carpal_distal_interphalangeal_3';
HAnimJoint1816.Center := Vector3(-0.1939,0.7042,-0.0432);
HAnimJoint1816.SetUlimit([0,0,0]);
HAnimJoint1816.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1807.AddChildren([HAnimJoint1816]);
{ .AddChildren }
HAnimJoint1798.AddChildren([HAnimJoint1807]);
{ .AddChildren }
HAnimJoint1782.AddChildren([HAnimJoint1798]);
{ .AddChildren }
HAnimJoint1773.AddChildren([HAnimJoint1782]);
{ .AddChildren }
HAnimJoint1673.AddChildren([HAnimJoint1773]);
HAnimJoint1817 := THAnimJointNode.Create;
HAnimJoint1817.NameField := 'r_midcarpal_4_5';
HAnimJoint1817.Center := Vector3(-0.1809,0.6973,-0.1276);
HAnimJoint1817.SetUlimit([0,0,0]);
HAnimJoint1817.SetLlimit([0,0,0]);
HAnimSegment1818 := THAnimSegmentNode.Create;
HAnimSegment1818.NameField := 'r_hamate';
Transform1819 := TTransformNode.Create;
Transform1819.Translation := Vector3(-0.1809,0.6973,-0.1276);
Transform1820 := TTransformNode.Create;
{ Empty Transform }
Shape1821 := TShapeNode.Create;
Shape1821 := Shape20;
{ .AddChild }
Transform1820.AddChildren([Shape1821]);
{ .AddChildren }
Transform1819.AddChildren([Transform1820]);
{ .AddChildren }
HAnimSegment1818.AddChildren([Transform1819]);
Shape1822 := TShapeNode.Create;
LineSet1823 := TLineSetNode.Create;
LineSet1823.SetVertexCount([2]);
Coordinate1824 := TCoordinateNode.Create;
Coordinate1824.SetPoint([Vector3(-0.1809,0.6973,-0.1276),Vector3(-0.1951,0.8049,-0.0732)]);
{ .SetCoord }
LineSet1823.Coord := Coordinate1824;
{ from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2 }
ColorRGBA1825 := TColorRGBANode.Create;
ColorRGBA1825 := ColorRGBA27;
{ .SetColor }
LineSet1823.Color := ColorRGBA1825;
{ .SetGeometry }
Shape1822.Geometry := LineSet1823;
{ .AddChildren }
HAnimSegment1818.AddChildren([Shape1822]);
Shape1826 := TShapeNode.Create;
LineSet1827 := TLineSetNode.Create;
LineSet1827.SetVertexCount([2]);
Coordinate1828 := TCoordinateNode.Create;
Coordinate1828.SetPoint([Vector3(-0.1809,0.6973,-0.1276),Vector3(-0.1926,0.8096,-0.0975)]);
{ .SetCoord }
LineSet1827.Coord := Coordinate1828;
{ from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2 }
ColorRGBA1829 := TColorRGBANode.Create;
ColorRGBA1829 := ColorRGBA27;
{ .SetColor }
LineSet1827.Color := ColorRGBA1829;
{ .SetGeometry }
Shape1826.Geometry := LineSet1827;
{ .AddChildren }
HAnimSegment1818.AddChildren([Shape1826]);
{ .AddChildren }
HAnimJoint1817.AddChildren([HAnimSegment1818]);
HAnimJoint1830 := THAnimJointNode.Create;
HAnimJoint1830.NameField := 'r_carpometacarpal_4';
HAnimJoint1830.Center := Vector3(-0.1951,0.8049,-0.0732);
HAnimJoint1830.SetUlimit([0,0,0]);
HAnimJoint1830.SetLlimit([0,0,0]);
HAnimSegment1831 := THAnimSegmentNode.Create;
HAnimSegment1831.NameField := 'r_metacarpal_4';
Transform1832 := TTransformNode.Create;
Transform1832.Translation := Vector3(-0.1951,0.8049,-0.0732);
Transform1833 := TTransformNode.Create;
{ Empty Transform }
Shape1834 := TShapeNode.Create;
Shape1834 := Shape20;
{ .AddChild }
Transform1833.AddChildren([Shape1834]);
{ .AddChildren }
Transform1832.AddChildren([Transform1833]);
{ .AddChildren }
HAnimSegment1831.AddChildren([Transform1832]);
Shape1835 := TShapeNode.Create;
LineSet1836 := TLineSetNode.Create;
LineSet1836.SetVertexCount([2]);
Coordinate1837 := TCoordinateNode.Create;
Coordinate1837.SetPoint([Vector3(-0.1951,0.8049,-0.0732),Vector3(-0.1951,0.7845,-0.0732)]);
{ .SetCoord }
LineSet1836.Coord := Coordinate1837;
{ from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2 }
ColorRGBA1838 := TColorRGBANode.Create;
ColorRGBA1838 := ColorRGBA27;
{ .SetColor }
LineSet1836.Color := ColorRGBA1838;
{ .SetGeometry }
Shape1835.Geometry := LineSet1836;
{ .AddChildren }
HAnimSegment1831.AddChildren([Shape1835]);
{ .AddChildren }
HAnimJoint1830.AddChildren([HAnimSegment1831]);
HAnimJoint1839 := THAnimJointNode.Create;
HAnimJoint1839.NameField := 'r_metacarpophalangeal_4';
HAnimJoint1839.Center := Vector3(-0.1951,0.7845,-0.0732);
HAnimJoint1839.SetUlimit([0,0,0]);
HAnimJoint1839.SetLlimit([0,0,0]);
HAnimSegment1840 := THAnimSegmentNode.Create;
HAnimSegment1840.NameField := 'r_carpal_proximal_phalanx_4';
Transform1841 := TTransformNode.Create;
Transform1841.Translation := Vector3(-0.1951,0.7845,-0.0732);
Transform1842 := TTransformNode.Create;
{ Empty Transform }
Shape1843 := TShapeNode.Create;
Shape1843 := Shape20;
{ .AddChild }
Transform1842.AddChildren([Shape1843]);
{ .AddChildren }
Transform1841.AddChildren([Transform1842]);
{ .AddChildren }
HAnimSegment1840.AddChildren([Transform1841]);
Shape1844 := TShapeNode.Create;
LineSet1845 := TLineSetNode.Create;
LineSet1845.SetVertexCount([2]);
Coordinate1846 := TCoordinateNode.Create;
Coordinate1846.SetPoint([Vector3(-0.1951,0.7845,-0.0732),Vector3(-0.192,0.7318,-0.0716)]);
{ .SetCoord }
LineSet1845.Coord := Coordinate1846;
{ from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2 }
ColorRGBA1847 := TColorRGBANode.Create;
ColorRGBA1847 := ColorRGBA27;
{ .SetColor }
LineSet1845.Color := ColorRGBA1847;
{ .SetGeometry }
Shape1844.Geometry := LineSet1845;
{ .AddChildren }
HAnimSegment1840.AddChildren([Shape1844]);
{ .AddChildren }
HAnimJoint1839.AddChildren([HAnimSegment1840]);
HAnimJoint1848 := THAnimJointNode.Create;
HAnimJoint1848.NameField := 'r_carpal_proximal_interphalangeal_4';
HAnimJoint1848.Center := Vector3(-0.192,0.7318,-0.0716);
HAnimJoint1848.SetUlimit([0,0,0]);
HAnimJoint1848.SetLlimit([0,0,0]);
HAnimSegment1849 := THAnimSegmentNode.Create;
HAnimSegment1849.NameField := 'r_carpal_middle_phalanx_4';
Transform1850 := TTransformNode.Create;
Transform1850.Translation := Vector3(-0.192,0.7318,-0.0716);
Transform1851 := TTransformNode.Create;
{ Empty Transform }
Shape1852 := TShapeNode.Create;
Shape1852 := Shape20;
{ .AddChild }
Transform1851.AddChildren([Shape1852]);
{ .AddChildren }
Transform1850.AddChildren([Transform1851]);
{ .AddChildren }
HAnimSegment1849.AddChildren([Transform1850]);
Shape1853 := TShapeNode.Create;
LineSet1854 := TLineSetNode.Create;
LineSet1854.SetVertexCount([2]);
Coordinate1855 := TCoordinateNode.Create;
Coordinate1855.SetPoint([Vector3(-0.192,0.7318,-0.0716),Vector3(-0.1908,0.7077,-0.0706)]);
{ .SetCoord }
LineSet1854.Coord := Coordinate1855;
{ from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2 }
ColorRGBA1856 := TColorRGBANode.Create;
ColorRGBA1856 := ColorRGBA27;
{ .SetColor }
LineSet1854.Color := ColorRGBA1856;
{ .SetGeometry }
Shape1853.Geometry := LineSet1854;
{ .AddChildren }
HAnimSegment1849.AddChildren([Shape1853]);
{ .AddChildren }
HAnimJoint1848.AddChildren([HAnimSegment1849]);
HAnimJoint1857 := THAnimJointNode.Create;
HAnimJoint1857.NameField := 'r_carpal_distal_interphalangeal_4';
HAnimJoint1857.Center := Vector3(-0.1908,0.7077,-0.0706);
HAnimJoint1857.SetUlimit([0,0,0]);
HAnimJoint1857.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1848.AddChildren([HAnimJoint1857]);
{ .AddChildren }
HAnimJoint1839.AddChildren([HAnimJoint1848]);
{ .AddChildren }
HAnimJoint1830.AddChildren([HAnimJoint1839]);
{ .AddChildren }
HAnimJoint1817.AddChildren([HAnimJoint1830]);
HAnimJoint1858 := THAnimJointNode.Create;
HAnimJoint1858.NameField := 'r_carpometacarpal_5';
HAnimJoint1858.Center := Vector3(-0.1926,0.8096,-0.0975);
HAnimJoint1858.SetUlimit([0,0,0]);
HAnimJoint1858.SetLlimit([0,0,0]);
HAnimSegment1859 := THAnimSegmentNode.Create;
HAnimSegment1859.NameField := 'r_metacarpal_5';
Transform1860 := TTransformNode.Create;
Transform1860.Translation := Vector3(-0.1926,0.8096,-0.0975);
Transform1861 := TTransformNode.Create;
{ Empty Transform }
Shape1862 := TShapeNode.Create;
Shape1862 := Shape20;
{ .AddChild }
Transform1861.AddChildren([Shape1862]);
{ .AddChildren }
Transform1860.AddChildren([Transform1861]);
{ .AddChildren }
HAnimSegment1859.AddChildren([Transform1860]);
Shape1863 := TShapeNode.Create;
LineSet1864 := TLineSetNode.Create;
LineSet1864.SetVertexCount([2]);
Coordinate1865 := TCoordinateNode.Create;
Coordinate1865.SetPoint([Vector3(-0.1926,0.8096,-0.0975),Vector3(-0.1926,0.7896,-0.0975)]);
{ .SetCoord }
LineSet1864.Coord := Coordinate1865;
{ from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2 }
ColorRGBA1866 := TColorRGBANode.Create;
ColorRGBA1866 := ColorRGBA27;
{ .SetColor }
LineSet1864.Color := ColorRGBA1866;
{ .SetGeometry }
Shape1863.Geometry := LineSet1864;
{ .AddChildren }
HAnimSegment1859.AddChildren([Shape1863]);
HAnimSite1867 := THAnimSiteNode.Create;
HAnimSite1867.NameField := 'r_metacarpal_phalanx_5';
HAnimSite1867.Translation := Vector3(-0.1929,0.789,-0.1064);
TouchSensor1868 := TTouchSensorNode.Create;
TouchSensor1868.Description := 'HAnimSite 80 r_metacarpal_phalanx_5';
{ .AddChildren }
HAnimSite1867.AddChildren([TouchSensor1868]);
Shape1869 := TShapeNode.Create;
Shape1869 := Shape30;
{ .AddChildren }
HAnimSite1867.AddChildren([Shape1869]);
Billboard1870 := TBillboardNode.Create;
Shape1871 := TShapeNode.Create;
Text1872 := TTextNode.Create;
Text1872.SetText(['80']);
FontStyle1873 := TFontStyleNode.Create;
FontStyle1873.Size := 0.035;
{ .SetFontStyle }
Text1872.FontStyle := FontStyle1873;
{ .SetGeometry }
Shape1871.Geometry := Text1872;
{ .AddChildren }
Billboard1870.AddChildren([Shape1871]);
{ .AddChildren }
HAnimSite1867.AddChildren([Billboard1870]);
{ .AddChildren }
HAnimSegment1859.AddChildren([HAnimSite1867]);
{ .AddChildren }
HAnimJoint1858.AddChildren([HAnimSegment1859]);
HAnimJoint1874 := THAnimJointNode.Create;
HAnimJoint1874.NameField := 'r_metacarpophalangeal_5';
HAnimJoint1874.Center := Vector3(-0.1926,0.7896,-0.0975);
HAnimJoint1874.SetUlimit([0,0,0]);
HAnimJoint1874.SetLlimit([0,0,0]);
HAnimSegment1875 := THAnimSegmentNode.Create;
HAnimSegment1875.NameField := 'r_carpal_proximal_phalanx_5';
Transform1876 := TTransformNode.Create;
Transform1876.Translation := Vector3(-0.1926,0.7896,-0.0975);
Transform1877 := TTransformNode.Create;
{ Empty Transform }
Shape1878 := TShapeNode.Create;
Shape1878 := Shape20;
{ .AddChild }
Transform1877.AddChildren([Shape1878]);
{ .AddChildren }
Transform1876.AddChildren([Transform1877]);
{ .AddChildren }
HAnimSegment1875.AddChildren([Transform1876]);
Shape1879 := TShapeNode.Create;
LineSet1880 := TLineSetNode.Create;
LineSet1880.SetVertexCount([2]);
Coordinate1881 := TCoordinateNode.Create;
Coordinate1881.SetPoint([Vector3(-0.1926,0.7896,-0.0975),Vector3(-0.1902,0.7483,-0.0963)]);
{ .SetCoord }
LineSet1880.Coord := Coordinate1881;
{ from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2 }
ColorRGBA1882 := TColorRGBANode.Create;
ColorRGBA1882 := ColorRGBA27;
{ .SetColor }
LineSet1880.Color := ColorRGBA1882;
{ .SetGeometry }
Shape1879.Geometry := LineSet1880;
{ .AddChildren }
HAnimSegment1875.AddChildren([Shape1879]);
{ .AddChildren }
HAnimJoint1874.AddChildren([HAnimSegment1875]);
HAnimJoint1883 := THAnimJointNode.Create;
HAnimJoint1883.NameField := 'r_carpal_proximal_interphalangeal_5';
HAnimJoint1883.Center := Vector3(-0.1902,0.7483,-0.0963);
HAnimJoint1883.SetUlimit([0,0,0]);
HAnimJoint1883.SetLlimit([0,0,0]);
HAnimSegment1884 := THAnimSegmentNode.Create;
HAnimSegment1884.NameField := 'r_carpal_middle_phalanx_5';
Transform1885 := TTransformNode.Create;
Transform1885.Translation := Vector3(-0.1902,0.7483,-0.0963);
Transform1886 := TTransformNode.Create;
{ Empty Transform }
Shape1887 := TShapeNode.Create;
Shape1887 := Shape20;
{ .AddChild }
Transform1886.AddChildren([Shape1887]);
{ .AddChildren }
Transform1885.AddChildren([Transform1886]);
{ .AddChildren }
HAnimSegment1884.AddChildren([Transform1885]);
Shape1888 := TShapeNode.Create;
LineSet1889 := TLineSetNode.Create;
LineSet1889.SetVertexCount([2]);
Coordinate1890 := TCoordinateNode.Create;
Coordinate1890.SetPoint([Vector3(-0.1902,0.7483,-0.0963),Vector3(-0.1908,0.754,-0.096)]);
{ .SetCoord }
LineSet1889.Coord := Coordinate1890;
{ from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2 }
ColorRGBA1891 := TColorRGBANode.Create;
ColorRGBA1891 := ColorRGBA27;
{ .SetColor }
LineSet1889.Color := ColorRGBA1891;
{ .SetGeometry }
Shape1888.Geometry := LineSet1889;
{ .AddChildren }
HAnimSegment1884.AddChildren([Shape1888]);
{ .AddChildren }
HAnimJoint1883.AddChildren([HAnimSegment1884]);
HAnimJoint1892 := THAnimJointNode.Create;
HAnimJoint1892.NameField := 'r_carpal_distal_interphalangeal_5';
HAnimJoint1892.Center := Vector3(-0.1908,0.754,-0.096);
HAnimJoint1892.SetUlimit([0,0,0]);
HAnimJoint1892.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1883.AddChildren([HAnimJoint1892]);
{ .AddChildren }
HAnimJoint1874.AddChildren([HAnimJoint1883]);
{ .AddChildren }
HAnimJoint1858.AddChildren([HAnimJoint1874]);
{ .AddChildren }
HAnimJoint1817.AddChildren([HAnimJoint1858]);
{ .AddChildren }
HAnimJoint1673.AddChildren([HAnimJoint1817]);
{ .AddChildren }
HAnimJoint1636.AddChildren([HAnimJoint1673]);
{ .AddChildren }
HAnimJoint1613.AddChildren([HAnimJoint1636]);
{ .AddChildren }
HAnimJoint1604.AddChildren([HAnimJoint1613]);
{ .AddChildren }
HAnimJoint1560.AddChildren([HAnimJoint1604]);
{ .AddChildren }
HAnimJoint995.AddChildren([HAnimJoint1560]);
{ .AddChildren }
HAnimJoint986.AddChildren([HAnimJoint995]);
{ .AddChildren }
HAnimJoint977.AddChildren([HAnimJoint986]);
{ .AddChildren }
HAnimJoint968.AddChildren([HAnimJoint977]);
{ .AddChildren }
HAnimJoint952.AddChildren([HAnimJoint968]);
{ .AddChildren }
HAnimJoint915.AddChildren([HAnimJoint952]);
{ .AddChildren }
HAnimJoint906.AddChildren([HAnimJoint915]);
{ .AddChildren }
HAnimJoint897.AddChildren([HAnimJoint906]);
{ .AddChildren }
HAnimJoint874.AddChildren([HAnimJoint897]);
{ .AddChildren }
HAnimJoint858.AddChildren([HAnimJoint874]);
{ .AddChildren }
HAnimJoint849.AddChildren([HAnimJoint858]);
{ .AddChildren }
HAnimJoint840.AddChildren([HAnimJoint849]);
{ .AddChildren }
HAnimJoint831.AddChildren([HAnimJoint840]);
{ .AddChildren }
HAnimJoint801.AddChildren([HAnimJoint831]);
{ .AddChildren }
HAnimJoint792.AddChildren([HAnimJoint801]);
{ .AddChildren }
HAnimJoint783.AddChildren([HAnimJoint792]);
{ .AddChildren }
HAnimJoint753.AddChildren([HAnimJoint783]);
{ .AddChildren }
HAnimJoint47.AddChildren([HAnimJoint753]);
{ .AddSkeleton }
HAnimHumanoid38.SetSkeleton([HAnimJoint47]);
HAnimJoint1893 := THAnimJointNode.Create;
HAnimJoint1893 := HAnimJoint47;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1893;
HAnimJoint1894 := THAnimJointNode.Create;
HAnimJoint1894 := HAnimJoint60;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1894;
HAnimJoint1895 := THAnimJointNode.Create;
HAnimJoint1895 := HAnimJoint143;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1895;
HAnimJoint1896 := THAnimJointNode.Create;
HAnimJoint1896 := HAnimJoint180;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1896;
HAnimJoint1897 := THAnimJointNode.Create;
HAnimJoint1897 := HAnimJoint210;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1897;
HAnimJoint1898 := THAnimJointNode.Create;
HAnimJoint1898 := HAnimJoint237;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1898;
HAnimJoint1899 := THAnimJointNode.Create;
HAnimJoint1899 := HAnimJoint254;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1899;
HAnimJoint1900 := THAnimJointNode.Create;
HAnimJoint1900 := HAnimJoint263;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1900;
HAnimJoint1901 := THAnimJointNode.Create;
HAnimJoint1901 := HAnimJoint272;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1901;
HAnimJoint1902 := THAnimJointNode.Create;
HAnimJoint1902 := HAnimJoint288;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1902;
HAnimJoint1903 := THAnimJointNode.Create;
HAnimJoint1903 := HAnimJoint289;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1903;
HAnimJoint1904 := THAnimJointNode.Create;
HAnimJoint1904 := HAnimJoint298;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1904;
HAnimJoint1905 := THAnimJointNode.Create;
HAnimJoint1905 := HAnimJoint307;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1905;
HAnimJoint1906 := THAnimJointNode.Create;
HAnimJoint1906 := HAnimJoint316;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1906;
HAnimJoint1907 := THAnimJointNode.Create;
HAnimJoint1907 := HAnimJoint325;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1907;
HAnimJoint1908 := THAnimJointNode.Create;
HAnimJoint1908 := HAnimJoint326;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1908;
HAnimJoint1909 := THAnimJointNode.Create;
HAnimJoint1909 := HAnimJoint335;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1909;
HAnimJoint1910 := THAnimJointNode.Create;
HAnimJoint1910 := HAnimJoint344;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1910;
HAnimJoint1911 := THAnimJointNode.Create;
HAnimJoint1911 := HAnimJoint353;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1911;
HAnimJoint1912 := THAnimJointNode.Create;
HAnimJoint1912 := HAnimJoint362;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1912;
HAnimJoint1913 := THAnimJointNode.Create;
HAnimJoint1913 := HAnimJoint363;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1913;
HAnimJoint1914 := THAnimJointNode.Create;
HAnimJoint1914 := HAnimJoint372;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1914;
HAnimJoint1915 := THAnimJointNode.Create;
HAnimJoint1915 := HAnimJoint385;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1915;
HAnimJoint1916 := THAnimJointNode.Create;
HAnimJoint1916 := HAnimJoint394;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1916;
HAnimJoint1917 := THAnimJointNode.Create;
HAnimJoint1917 := HAnimJoint403;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1917;
HAnimJoint1918 := THAnimJointNode.Create;
HAnimJoint1918 := HAnimJoint412;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1918;
HAnimJoint1919 := THAnimJointNode.Create;
HAnimJoint1919 := HAnimJoint413;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1919;
HAnimJoint1920 := THAnimJointNode.Create;
HAnimJoint1920 := HAnimJoint422;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1920;
HAnimJoint1921 := THAnimJointNode.Create;
HAnimJoint1921 := HAnimJoint438;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1921;
HAnimJoint1922 := THAnimJointNode.Create;
HAnimJoint1922 := HAnimJoint447;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1922;
HAnimJoint1923 := THAnimJointNode.Create;
HAnimJoint1923 := HAnimJoint448;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1923;
HAnimJoint1924 := THAnimJointNode.Create;
HAnimJoint1924 := HAnimJoint485;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1924;
HAnimJoint1925 := THAnimJointNode.Create;
HAnimJoint1925 := HAnimJoint515;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1925;
HAnimJoint1926 := THAnimJointNode.Create;
HAnimJoint1926 := HAnimJoint542;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1926;
HAnimJoint1927 := THAnimJointNode.Create;
HAnimJoint1927 := HAnimJoint559;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1927;
HAnimJoint1928 := THAnimJointNode.Create;
HAnimJoint1928 := HAnimJoint568;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1928;
HAnimJoint1929 := THAnimJointNode.Create;
HAnimJoint1929 := HAnimJoint577;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1929;
HAnimJoint1930 := THAnimJointNode.Create;
HAnimJoint1930 := HAnimJoint593;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1930;
HAnimJoint1931 := THAnimJointNode.Create;
HAnimJoint1931 := HAnimJoint594;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1931;
HAnimJoint1932 := THAnimJointNode.Create;
HAnimJoint1932 := HAnimJoint603;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1932;
HAnimJoint1933 := THAnimJointNode.Create;
HAnimJoint1933 := HAnimJoint612;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1933;
HAnimJoint1934 := THAnimJointNode.Create;
HAnimJoint1934 := HAnimJoint621;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1934;
HAnimJoint1935 := THAnimJointNode.Create;
HAnimJoint1935 := HAnimJoint630;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1935;
HAnimJoint1936 := THAnimJointNode.Create;
HAnimJoint1936 := HAnimJoint631;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1936;
HAnimJoint1937 := THAnimJointNode.Create;
HAnimJoint1937 := HAnimJoint640;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1937;
HAnimJoint1938 := THAnimJointNode.Create;
HAnimJoint1938 := HAnimJoint649;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1938;
HAnimJoint1939 := THAnimJointNode.Create;
HAnimJoint1939 := HAnimJoint658;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1939;
HAnimJoint1940 := THAnimJointNode.Create;
HAnimJoint1940 := HAnimJoint667;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1940;
HAnimJoint1941 := THAnimJointNode.Create;
HAnimJoint1941 := HAnimJoint668;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1941;
HAnimJoint1942 := THAnimJointNode.Create;
HAnimJoint1942 := HAnimJoint677;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1942;
HAnimJoint1943 := THAnimJointNode.Create;
HAnimJoint1943 := HAnimJoint690;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1943;
HAnimJoint1944 := THAnimJointNode.Create;
HAnimJoint1944 := HAnimJoint699;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1944;
HAnimJoint1945 := THAnimJointNode.Create;
HAnimJoint1945 := HAnimJoint708;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1945;
HAnimJoint1946 := THAnimJointNode.Create;
HAnimJoint1946 := HAnimJoint717;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1946;
HAnimJoint1947 := THAnimJointNode.Create;
HAnimJoint1947 := HAnimJoint718;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1947;
HAnimJoint1948 := THAnimJointNode.Create;
HAnimJoint1948 := HAnimJoint727;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1948;
HAnimJoint1949 := THAnimJointNode.Create;
HAnimJoint1949 := HAnimJoint743;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1949;
HAnimJoint1950 := THAnimJointNode.Create;
HAnimJoint1950 := HAnimJoint752;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1950;
HAnimJoint1951 := THAnimJointNode.Create;
HAnimJoint1951 := HAnimJoint753;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1951;
HAnimJoint1952 := THAnimJointNode.Create;
HAnimJoint1952 := HAnimJoint783;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1952;
HAnimJoint1953 := THAnimJointNode.Create;
HAnimJoint1953 := HAnimJoint792;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1953;
HAnimJoint1954 := THAnimJointNode.Create;
HAnimJoint1954 := HAnimJoint801;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1954;
HAnimJoint1955 := THAnimJointNode.Create;
HAnimJoint1955 := HAnimJoint831;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1955;
HAnimJoint1956 := THAnimJointNode.Create;
HAnimJoint1956 := HAnimJoint840;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1956;
HAnimJoint1957 := THAnimJointNode.Create;
HAnimJoint1957 := HAnimJoint849;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1957;
HAnimJoint1958 := THAnimJointNode.Create;
HAnimJoint1958 := HAnimJoint858;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1958;
HAnimJoint1959 := THAnimJointNode.Create;
HAnimJoint1959 := HAnimJoint874;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1959;
HAnimJoint1960 := THAnimJointNode.Create;
HAnimJoint1960 := HAnimJoint897;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1960;
HAnimJoint1961 := THAnimJointNode.Create;
HAnimJoint1961 := HAnimJoint906;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1961;
HAnimJoint1962 := THAnimJointNode.Create;
HAnimJoint1962 := HAnimJoint915;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1962;
HAnimJoint1963 := THAnimJointNode.Create;
HAnimJoint1963 := HAnimJoint952;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1963;
HAnimJoint1964 := THAnimJointNode.Create;
HAnimJoint1964 := HAnimJoint968;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1964;
HAnimJoint1965 := THAnimJointNode.Create;
HAnimJoint1965 := HAnimJoint977;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1965;
HAnimJoint1966 := THAnimJointNode.Create;
HAnimJoint1966 := HAnimJoint986;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1966;
HAnimJoint1967 := THAnimJointNode.Create;
HAnimJoint1967 := HAnimJoint995;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1967;
HAnimJoint1968 := THAnimJointNode.Create;
HAnimJoint1968 := HAnimJoint1026;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1968;
HAnimJoint1969 := THAnimJointNode.Create;
HAnimJoint1969 := HAnimJoint1049;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1969;
HAnimJoint1970 := THAnimJointNode.Create;
HAnimJoint1970 := HAnimJoint1058;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1970;
HAnimJoint1971 := THAnimJointNode.Create;
HAnimJoint1971 := HAnimJoint1067;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1971;
HAnimJoint1972 := THAnimJointNode.Create;
HAnimJoint1972 := HAnimJoint1076;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1972;
HAnimJoint1973 := THAnimJointNode.Create;
HAnimJoint1973 := HAnimJoint1085;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1973;
HAnimJoint1974 := THAnimJointNode.Create;
HAnimJoint1974 := HAnimJoint1101;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1974;
HAnimJoint1975 := THAnimJointNode.Create;
HAnimJoint1975 := HAnimJoint1110;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1975;
HAnimJoint1976 := THAnimJointNode.Create;
HAnimJoint1976 := HAnimJoint1220;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1976;
HAnimJoint1977 := THAnimJointNode.Create;
HAnimJoint1977 := HAnimJoint1221;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1977;
HAnimJoint1978 := THAnimJointNode.Create;
HAnimJoint1978 := HAnimJoint1222;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1978;
HAnimJoint1979 := THAnimJointNode.Create;
HAnimJoint1979 := HAnimJoint1223;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1979;
HAnimJoint1980 := THAnimJointNode.Create;
HAnimJoint1980 := HAnimJoint1224;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1980;
HAnimJoint1981 := THAnimJointNode.Create;
HAnimJoint1981 := HAnimJoint1225;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1981;
HAnimJoint1982 := THAnimJointNode.Create;
HAnimJoint1982 := HAnimJoint1226;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1982;
HAnimJoint1983 := THAnimJointNode.Create;
HAnimJoint1983 := HAnimJoint1227;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1983;
HAnimJoint1984 := THAnimJointNode.Create;
HAnimJoint1984 := HAnimJoint1271;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1984;
HAnimJoint1985 := THAnimJointNode.Create;
HAnimJoint1985 := HAnimJoint1280;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1985;
HAnimJoint1986 := THAnimJointNode.Create;
HAnimJoint1986 := HAnimJoint1303;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1986;
HAnimJoint1987 := THAnimJointNode.Create;
HAnimJoint1987 := HAnimJoint1340;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1987;
HAnimJoint1988 := THAnimJointNode.Create;
HAnimJoint1988 := HAnimJoint1368;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1988;
HAnimJoint1989 := THAnimJointNode.Create;
HAnimJoint1989 := HAnimJoint1377;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1989;
HAnimJoint1990 := THAnimJointNode.Create;
HAnimJoint1990 := HAnimJoint1386;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1990;
HAnimJoint1991 := THAnimJointNode.Create;
HAnimJoint1991 := HAnimJoint1395;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1991;
HAnimJoint1992 := THAnimJointNode.Create;
HAnimJoint1992 := HAnimJoint1396;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1992;
HAnimJoint1993 := THAnimJointNode.Create;
HAnimJoint1993 := HAnimJoint1405;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1993;
HAnimJoint1994 := THAnimJointNode.Create;
HAnimJoint1994 := HAnimJoint1421;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1994;
HAnimJoint1995 := THAnimJointNode.Create;
HAnimJoint1995 := HAnimJoint1430;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1995;
HAnimJoint1996 := THAnimJointNode.Create;
HAnimJoint1996 := HAnimJoint1439;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1996;
HAnimJoint1997 := THAnimJointNode.Create;
HAnimJoint1997 := HAnimJoint1440;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1997;
HAnimJoint1998 := THAnimJointNode.Create;
HAnimJoint1998 := HAnimJoint1449;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1998;
HAnimJoint1999 := THAnimJointNode.Create;
HAnimJoint1999 := HAnimJoint1465;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1999;
HAnimJoint2000 := THAnimJointNode.Create;
HAnimJoint2000 := HAnimJoint1474;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2000;
HAnimJoint2001 := THAnimJointNode.Create;
HAnimJoint2001 := HAnimJoint1483;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2001;
HAnimJoint2002 := THAnimJointNode.Create;
HAnimJoint2002 := HAnimJoint1484;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2002;
HAnimJoint2003 := THAnimJointNode.Create;
HAnimJoint2003 := HAnimJoint1497;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2003;
HAnimJoint2004 := THAnimJointNode.Create;
HAnimJoint2004 := HAnimJoint1506;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2004;
HAnimJoint2005 := THAnimJointNode.Create;
HAnimJoint2005 := HAnimJoint1515;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2005;
HAnimJoint2006 := THAnimJointNode.Create;
HAnimJoint2006 := HAnimJoint1524;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2006;
HAnimJoint2007 := THAnimJointNode.Create;
HAnimJoint2007 := HAnimJoint1525;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2007;
HAnimJoint2008 := THAnimJointNode.Create;
HAnimJoint2008 := HAnimJoint1541;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2008;
HAnimJoint2009 := THAnimJointNode.Create;
HAnimJoint2009 := HAnimJoint1550;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2009;
HAnimJoint2010 := THAnimJointNode.Create;
HAnimJoint2010 := HAnimJoint1559;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2010;
HAnimJoint2011 := THAnimJointNode.Create;
HAnimJoint2011 := HAnimJoint1560;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2011;
HAnimJoint2012 := THAnimJointNode.Create;
HAnimJoint2012 := HAnimJoint1604;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2012;
HAnimJoint2013 := THAnimJointNode.Create;
HAnimJoint2013 := HAnimJoint1613;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2013;
HAnimJoint2014 := THAnimJointNode.Create;
HAnimJoint2014 := HAnimJoint1636;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2014;
HAnimJoint2015 := THAnimJointNode.Create;
HAnimJoint2015 := HAnimJoint1673;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2015;
HAnimJoint2016 := THAnimJointNode.Create;
HAnimJoint2016 := HAnimJoint1701;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2016;
HAnimJoint2017 := THAnimJointNode.Create;
HAnimJoint2017 := HAnimJoint1710;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2017;
HAnimJoint2018 := THAnimJointNode.Create;
HAnimJoint2018 := HAnimJoint1719;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2018;
HAnimJoint2019 := THAnimJointNode.Create;
HAnimJoint2019 := HAnimJoint1728;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2019;
HAnimJoint2020 := THAnimJointNode.Create;
HAnimJoint2020 := HAnimJoint1729;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2020;
HAnimJoint2021 := THAnimJointNode.Create;
HAnimJoint2021 := HAnimJoint1738;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2021;
HAnimJoint2022 := THAnimJointNode.Create;
HAnimJoint2022 := HAnimJoint1754;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2022;
HAnimJoint2023 := THAnimJointNode.Create;
HAnimJoint2023 := HAnimJoint1763;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2023;
HAnimJoint2024 := THAnimJointNode.Create;
HAnimJoint2024 := HAnimJoint1772;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2024;
HAnimJoint2025 := THAnimJointNode.Create;
HAnimJoint2025 := HAnimJoint1773;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2025;
HAnimJoint2026 := THAnimJointNode.Create;
HAnimJoint2026 := HAnimJoint1782;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2026;
HAnimJoint2027 := THAnimJointNode.Create;
HAnimJoint2027 := HAnimJoint1798;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2027;
HAnimJoint2028 := THAnimJointNode.Create;
HAnimJoint2028 := HAnimJoint1807;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2028;
HAnimJoint2029 := THAnimJointNode.Create;
HAnimJoint2029 := HAnimJoint1816;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2029;
HAnimJoint2030 := THAnimJointNode.Create;
HAnimJoint2030 := HAnimJoint1817;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2030;
HAnimJoint2031 := THAnimJointNode.Create;
HAnimJoint2031 := HAnimJoint1830;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2031;
HAnimJoint2032 := THAnimJointNode.Create;
HAnimJoint2032 := HAnimJoint1839;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2032;
HAnimJoint2033 := THAnimJointNode.Create;
HAnimJoint2033 := HAnimJoint1848;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2033;
HAnimJoint2034 := THAnimJointNode.Create;
HAnimJoint2034 := HAnimJoint1857;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2034;
HAnimJoint2035 := THAnimJointNode.Create;
HAnimJoint2035 := HAnimJoint1858;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2035;
HAnimJoint2036 := THAnimJointNode.Create;
HAnimJoint2036 := HAnimJoint1874;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2036;
HAnimJoint2037 := THAnimJointNode.Create;
HAnimJoint2037 := HAnimJoint1883;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2037;
HAnimJoint2038 := THAnimJointNode.Create;
HAnimJoint2038 := HAnimJoint1892;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint2038;
{ .AddChildren }
Group11.AddChildren([HAnimHumanoid38]);
{ .AddGroup }
X3D0.AddChildren([Group11]);
Result := X3D0;
end;
