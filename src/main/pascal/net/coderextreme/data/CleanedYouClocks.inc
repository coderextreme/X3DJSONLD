function CleanedYouClocks: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group13: TGroupNode;
LayerSet14: TLayerSetNode;
Layer15: TLayerNode;
Viewpoint16: TViewpointNode;
TimeSensor17: TTimeSensorNode;
TimeSensor18: TTimeSensorNode;
TimeSensor19: TTimeSensorNode;
TimeSensor20: TTimeSensorNode;
TimeSensor21: TTimeSensorNode;
TimeSensor22: TTimeSensorNode;
TimeSensor23: TTimeSensorNode;
TimeSensor24: TTimeSensorNode;
TimeSensor25: TTimeSensorNode;
TimeSensor26: TTimeSensorNode;
TimeSensor27: TTimeSensorNode;
TimeSensor28: TTimeSensorNode;
TimeSensor29: TTimeSensorNode;
TimeSensor30: TTimeSensorNode;
TimeSensor31: TTimeSensorNode;
TimeSensor32: TTimeSensorNode;
TimeSensor33: TTimeSensorNode;
TimeSensor34: TTimeSensorNode;
TimeSensor35: TTimeSensorNode;
TimeSensor36: TTimeSensorNode;
TimeSensor37: TTimeSensorNode;
TimeSensor38: TTimeSensorNode;
TimeSensor39: TTimeSensorNode;
TimeSensor40: TTimeSensorNode;
TimeSensor41: TTimeSensorNode;
TimeSensor42: TTimeSensorNode;
TimeSensor43: TTimeSensorNode;
TimeSensor44: TTimeSensorNode;
TimeSensor45: TTimeSensorNode;
TimeSensor46: TTimeSensorNode;
TimeSensor47: TTimeSensorNode;
TimeSensor48: TTimeSensorNode;
TimeSensor49: TTimeSensorNode;
TimeSensor50: TTimeSensorNode;
TimeSensor51: TTimeSensorNode;
TimeSensor52: TTimeSensorNode;
TimeSensor53: TTimeSensorNode;
TimeSensor54: TTimeSensorNode;
ScalarInterpolator55: TScalarInterpolatorNode;
ScalarInterpolator56: TScalarInterpolatorNode;
ScalarInterpolator57: TScalarInterpolatorNode;
ScalarInterpolator58: TScalarInterpolatorNode;
ScalarInterpolator59: TScalarInterpolatorNode;
ScalarInterpolator60: TScalarInterpolatorNode;
ScalarInterpolator61: TScalarInterpolatorNode;
ScalarInterpolator62: TScalarInterpolatorNode;
ScalarInterpolator63: TScalarInterpolatorNode;
ScalarInterpolator64: TScalarInterpolatorNode;
ScalarInterpolator65: TScalarInterpolatorNode;
ScalarInterpolator66: TScalarInterpolatorNode;
ScalarInterpolator67: TScalarInterpolatorNode;
ScalarInterpolator68: TScalarInterpolatorNode;
ScalarInterpolator69: TScalarInterpolatorNode;
ScalarInterpolator70: TScalarInterpolatorNode;
ScalarInterpolator71: TScalarInterpolatorNode;
ScalarInterpolator72: TScalarInterpolatorNode;
ScalarInterpolator73: TScalarInterpolatorNode;
ScalarInterpolator74: TScalarInterpolatorNode;
ScalarInterpolator75: TScalarInterpolatorNode;
ScalarInterpolator76: TScalarInterpolatorNode;
ScalarInterpolator77: TScalarInterpolatorNode;
ScalarInterpolator78: TScalarInterpolatorNode;
ScalarInterpolator79: TScalarInterpolatorNode;
ScalarInterpolator80: TScalarInterpolatorNode;
ScalarInterpolator81: TScalarInterpolatorNode;
ScalarInterpolator82: TScalarInterpolatorNode;
ScalarInterpolator83: TScalarInterpolatorNode;
ScalarInterpolator84: TScalarInterpolatorNode;
Transform85: TTransformNode;
HAnimHumanoid86: THAnimHumanoidNode;
HAnimJoint87: THAnimJointNode;
HAnimSegment88: THAnimSegmentNode;
HAnimJoint89: THAnimJointNode;
HAnimSegment90: THAnimSegmentNode;
WorldInfo91: TWorldInfoNode;
Background92: TBackgroundNode;
NavigationInfo93: TNavigationInfoNode;
HAnimSegment94: THAnimSegmentNode;
Transform95: TTransformNode;
Shape96: TShapeNode;
Appearance97: TAppearanceNode;
Material98: TMaterialNode;
ImageTexture99: TImageTextureNode;
IndexedFaceSet100: TIndexedFaceSetNode;
TextureCoordinate101: TTextureCoordinateNode;
Coordinate102: TCoordinateNode;
Coordinate103: TCoordinateNode;
HAnimDisplacer104: THAnimDisplacerNode;
HAnimDisplacer105: THAnimDisplacerNode;
HAnimDisplacer106: THAnimDisplacerNode;
HAnimDisplacer107: THAnimDisplacerNode;
HAnimDisplacer108: THAnimDisplacerNode;
HAnimDisplacer109: THAnimDisplacerNode;
HAnimSegment110: THAnimSegmentNode;
HAnimSegment111: THAnimSegmentNode;
HAnimSegment112: THAnimSegmentNode;
HAnimSegment113: THAnimSegmentNode;
HAnimDisplacer114: THAnimDisplacerNode;
HAnimSegment115: THAnimSegmentNode;
Transform116: TTransformNode;
Shape117: TShapeNode;
Appearance118: TAppearanceNode;
IndexedFaceSet119: TIndexedFaceSetNode;
TextureCoordinate120: TTextureCoordinateNode;
Coordinate121: TCoordinateNode;
Coordinate122: TCoordinateNode;
HAnimDisplacer123: THAnimDisplacerNode;
HAnimDisplacer124: THAnimDisplacerNode;
HAnimDisplacer125: THAnimDisplacerNode;
HAnimDisplacer126: THAnimDisplacerNode;
HAnimDisplacer127: THAnimDisplacerNode;
HAnimDisplacer128: THAnimDisplacerNode;
HAnimDisplacer129: THAnimDisplacerNode;
HAnimDisplacer130: THAnimDisplacerNode;
HAnimDisplacer131: THAnimDisplacerNode;
HAnimDisplacer132: THAnimDisplacerNode;
HAnimDisplacer133: THAnimDisplacerNode;
HAnimDisplacer134: THAnimDisplacerNode;
HAnimDisplacer135: THAnimDisplacerNode;
HAnimSegment136: THAnimSegmentNode;
Transform137: TTransformNode;
Shape138: TShapeNode;
Appearance139: TAppearanceNode;
IndexedFaceSet140: TIndexedFaceSetNode;
TextureCoordinate141: TTextureCoordinateNode;
Coordinate142: TCoordinateNode;
Coordinate143: TCoordinateNode;
HAnimDisplacer144: THAnimDisplacerNode;
HAnimDisplacer145: THAnimDisplacerNode;
HAnimDisplacer146: THAnimDisplacerNode;
HAnimDisplacer147: THAnimDisplacerNode;
HAnimDisplacer148: THAnimDisplacerNode;
HAnimDisplacer149: THAnimDisplacerNode;
HAnimDisplacer150: THAnimDisplacerNode;
HAnimDisplacer151: THAnimDisplacerNode;
HAnimDisplacer152: THAnimDisplacerNode;
HAnimDisplacer153: THAnimDisplacerNode;
HAnimDisplacer154: THAnimDisplacerNode;
HAnimDisplacer155: THAnimDisplacerNode;
HAnimDisplacer156: THAnimDisplacerNode;
HAnimDisplacer157: THAnimDisplacerNode;
HAnimDisplacer158: THAnimDisplacerNode;
HAnimSegment159: THAnimSegmentNode;
Transform160: TTransformNode;
Shape161: TShapeNode;
Appearance162: TAppearanceNode;
IndexedFaceSet163: TIndexedFaceSetNode;
TextureCoordinate164: TTextureCoordinateNode;
Coordinate165: TCoordinateNode;
Coordinate166: TCoordinateNode;
HAnimDisplacer167: THAnimDisplacerNode;
HAnimDisplacer168: THAnimDisplacerNode;
HAnimSegment169: THAnimSegmentNode;
Transform170: TTransformNode;
Shape171: TShapeNode;
Appearance172: TAppearanceNode;
IndexedFaceSet173: TIndexedFaceSetNode;
TextureCoordinate174: TTextureCoordinateNode;
Coordinate175: TCoordinateNode;
Coordinate176: TCoordinateNode;
HAnimDisplacer177: THAnimDisplacerNode;
HAnimDisplacer178: THAnimDisplacerNode;
HAnimDisplacer179: THAnimDisplacerNode;
HAnimDisplacer180: THAnimDisplacerNode;
HAnimSegment181: THAnimSegmentNode;
Transform182: TTransformNode;
Shape183: TShapeNode;
Appearance184: TAppearanceNode;
IndexedFaceSet185: TIndexedFaceSetNode;
TextureCoordinate186: TTextureCoordinateNode;
Coordinate187: TCoordinateNode;
Coordinate188: TCoordinateNode;
HAnimDisplacer189: THAnimDisplacerNode;
HAnimDisplacer190: THAnimDisplacerNode;
HAnimDisplacer191: THAnimDisplacerNode;
HAnimDisplacer192: THAnimDisplacerNode;
HAnimDisplacer193: THAnimDisplacerNode;
HAnimDisplacer194: THAnimDisplacerNode;
HAnimDisplacer195: THAnimDisplacerNode;
HAnimDisplacer196: THAnimDisplacerNode;
HAnimDisplacer197: THAnimDisplacerNode;
HAnimDisplacer198: THAnimDisplacerNode;
HAnimDisplacer199: THAnimDisplacerNode;
HAnimDisplacer200: THAnimDisplacerNode;
HAnimDisplacer201: THAnimDisplacerNode;
HAnimDisplacer202: THAnimDisplacerNode;
HAnimDisplacer203: THAnimDisplacerNode;
HAnimDisplacer204: THAnimDisplacerNode;
HAnimSegment205: THAnimSegmentNode;
Transform206: TTransformNode;
Shape207: TShapeNode;
Appearance208: TAppearanceNode;
IndexedFaceSet209: TIndexedFaceSetNode;
TextureCoordinate210: TTextureCoordinateNode;
Coordinate211: TCoordinateNode;
Coordinate212: TCoordinateNode;
HAnimDisplacer213: THAnimDisplacerNode;
HAnimDisplacer214: THAnimDisplacerNode;
HAnimDisplacer215: THAnimDisplacerNode;
HAnimDisplacer216: THAnimDisplacerNode;
HAnimSegment217: THAnimSegmentNode;
Transform218: TTransformNode;
Shape219: TShapeNode;
Appearance220: TAppearanceNode;
IndexedFaceSet221: TIndexedFaceSetNode;
TextureCoordinate222: TTextureCoordinateNode;
Coordinate223: TCoordinateNode;
Coordinate224: TCoordinateNode;
HAnimSegment225: THAnimSegmentNode;
Transform226: TTransformNode;
Shape227: TShapeNode;
Appearance228: TAppearanceNode;
IndexedFaceSet229: TIndexedFaceSetNode;
TextureCoordinate230: TTextureCoordinateNode;
Coordinate231: TCoordinateNode;
Coordinate232: TCoordinateNode;
HAnimDisplacer233: THAnimDisplacerNode;
HAnimDisplacer234: THAnimDisplacerNode;
HAnimDisplacer235: THAnimDisplacerNode;
HAnimDisplacer236: THAnimDisplacerNode;
HAnimSegment237: THAnimSegmentNode;
Transform238: TTransformNode;
Shape239: TShapeNode;
Appearance240: TAppearanceNode;
IndexedFaceSet241: TIndexedFaceSetNode;
TextureCoordinate242: TTextureCoordinateNode;
Coordinate243: TCoordinateNode;
Coordinate244: TCoordinateNode;
HAnimDisplacer245: THAnimDisplacerNode;
HAnimDisplacer246: THAnimDisplacerNode;
HAnimSegment247: THAnimSegmentNode;
Transform248: TTransformNode;
Shape249: TShapeNode;
Appearance250: TAppearanceNode;
IndexedFaceSet251: TIndexedFaceSetNode;
TextureCoordinate252: TTextureCoordinateNode;
Coordinate253: TCoordinateNode;
Coordinate254: TCoordinateNode;
HAnimDisplacer255: THAnimDisplacerNode;
HAnimDisplacer256: THAnimDisplacerNode;
HAnimDisplacer257: THAnimDisplacerNode;
HAnimDisplacer258: THAnimDisplacerNode;
HAnimDisplacer259: THAnimDisplacerNode;
HAnimDisplacer260: THAnimDisplacerNode;
HAnimDisplacer261: THAnimDisplacerNode;
HAnimDisplacer262: THAnimDisplacerNode;
HAnimSegment263: THAnimSegmentNode;
Transform264: TTransformNode;
Shape265: TShapeNode;
Appearance266: TAppearanceNode;
IndexedFaceSet267: TIndexedFaceSetNode;
TextureCoordinate268: TTextureCoordinateNode;
Coordinate269: TCoordinateNode;
Coordinate270: TCoordinateNode;
HAnimDisplacer271: THAnimDisplacerNode;
HAnimDisplacer272: THAnimDisplacerNode;
HAnimDisplacer273: THAnimDisplacerNode;
HAnimDisplacer274: THAnimDisplacerNode;
HAnimDisplacer275: THAnimDisplacerNode;
HAnimDisplacer276: THAnimDisplacerNode;
HAnimDisplacer277: THAnimDisplacerNode;
HAnimDisplacer278: THAnimDisplacerNode;
HAnimDisplacer279: THAnimDisplacerNode;
HAnimDisplacer280: THAnimDisplacerNode;
HAnimDisplacer281: THAnimDisplacerNode;
HAnimDisplacer282: THAnimDisplacerNode;
HAnimDisplacer283: THAnimDisplacerNode;
HAnimDisplacer284: THAnimDisplacerNode;
HAnimDisplacer285: THAnimDisplacerNode;
HAnimSegment286: THAnimSegmentNode;
Transform287: TTransformNode;
Shape288: TShapeNode;
Appearance289: TAppearanceNode;
IndexedFaceSet290: TIndexedFaceSetNode;
TextureCoordinate291: TTextureCoordinateNode;
Coordinate292: TCoordinateNode;
Coordinate293: TCoordinateNode;
HAnimDisplacer294: THAnimDisplacerNode;
HAnimDisplacer295: THAnimDisplacerNode;
HAnimDisplacer296: THAnimDisplacerNode;
HAnimDisplacer297: THAnimDisplacerNode;
HAnimDisplacer298: THAnimDisplacerNode;
HAnimDisplacer299: THAnimDisplacerNode;
HAnimDisplacer300: THAnimDisplacerNode;
HAnimDisplacer301: THAnimDisplacerNode;
HAnimDisplacer302: THAnimDisplacerNode;
HAnimDisplacer303: THAnimDisplacerNode;
HAnimDisplacer304: THAnimDisplacerNode;
HAnimDisplacer305: THAnimDisplacerNode;
HAnimDisplacer306: THAnimDisplacerNode;
HAnimSegment307: THAnimSegmentNode;
Transform308: TTransformNode;
Shape309: TShapeNode;
Appearance310: TAppearanceNode;
IndexedFaceSet311: TIndexedFaceSetNode;
TextureCoordinate312: TTextureCoordinateNode;
Coordinate313: TCoordinateNode;
Coordinate314: TCoordinateNode;
HAnimDisplacer315: THAnimDisplacerNode;
HAnimDisplacer316: THAnimDisplacerNode;
HAnimDisplacer317: THAnimDisplacerNode;
HAnimDisplacer318: THAnimDisplacerNode;
HAnimSegment319: THAnimSegmentNode;
Transform320: TTransformNode;
Shape321: TShapeNode;
Appearance322: TAppearanceNode;
IndexedFaceSet323: TIndexedFaceSetNode;
TextureCoordinate324: TTextureCoordinateNode;
Coordinate325: TCoordinateNode;
Coordinate326: TCoordinateNode;
HAnimDisplacer327: THAnimDisplacerNode;
HAnimDisplacer328: THAnimDisplacerNode;
HAnimDisplacer329: THAnimDisplacerNode;
HAnimSegment330: THAnimSegmentNode;
Transform331: TTransformNode;
Shape332: TShapeNode;
Appearance333: TAppearanceNode;
IndexedFaceSet334: TIndexedFaceSetNode;
TextureCoordinate335: TTextureCoordinateNode;
Coordinate336: TCoordinateNode;
Coordinate337: TCoordinateNode;
HAnimDisplacer338: THAnimDisplacerNode;
HAnimDisplacer339: THAnimDisplacerNode;
HAnimSegment340: THAnimSegmentNode;
Transform341: TTransformNode;
Shape342: TShapeNode;
Appearance343: TAppearanceNode;
IndexedFaceSet344: TIndexedFaceSetNode;
TextureCoordinate345: TTextureCoordinateNode;
Coordinate346: TCoordinateNode;
Coordinate347: TCoordinateNode;
HAnimDisplacer348: THAnimDisplacerNode;
HAnimDisplacer349: THAnimDisplacerNode;
HAnimDisplacer350: THAnimDisplacerNode;
HAnimDisplacer351: THAnimDisplacerNode;
HAnimDisplacer352: THAnimDisplacerNode;
HAnimDisplacer353: THAnimDisplacerNode;
HAnimDisplacer354: THAnimDisplacerNode;
HAnimDisplacer355: THAnimDisplacerNode;
HAnimDisplacer356: THAnimDisplacerNode;
HAnimDisplacer357: THAnimDisplacerNode;
HAnimDisplacer358: THAnimDisplacerNode;
HAnimSegment359: THAnimSegmentNode;
Transform360: TTransformNode;
Shape361: TShapeNode;
Appearance362: TAppearanceNode;
IndexedFaceSet363: TIndexedFaceSetNode;
TextureCoordinate364: TTextureCoordinateNode;
Coordinate365: TCoordinateNode;
Coordinate366: TCoordinateNode;
HAnimDisplacer367: THAnimDisplacerNode;
HAnimDisplacer368: THAnimDisplacerNode;
HAnimDisplacer369: THAnimDisplacerNode;
HAnimDisplacer370: THAnimDisplacerNode;
HAnimDisplacer371: THAnimDisplacerNode;
HAnimDisplacer372: THAnimDisplacerNode;
HAnimDisplacer373: THAnimDisplacerNode;
HAnimDisplacer374: THAnimDisplacerNode;
HAnimDisplacer375: THAnimDisplacerNode;
HAnimDisplacer376: THAnimDisplacerNode;
HAnimDisplacer377: THAnimDisplacerNode;
HAnimDisplacer378: THAnimDisplacerNode;
HAnimDisplacer379: THAnimDisplacerNode;
HAnimSegment380: THAnimSegmentNode;
Transform381: TTransformNode;
Shape382: TShapeNode;
Appearance383: TAppearanceNode;
IndexedFaceSet384: TIndexedFaceSetNode;
TextureCoordinate385: TTextureCoordinateNode;
Coordinate386: TCoordinateNode;
Coordinate387: TCoordinateNode;
HAnimDisplacer388: THAnimDisplacerNode;
HAnimDisplacer389: THAnimDisplacerNode;
HAnimDisplacer390: THAnimDisplacerNode;
HAnimDisplacer391: THAnimDisplacerNode;
HAnimDisplacer392: THAnimDisplacerNode;
HAnimDisplacer393: THAnimDisplacerNode;
HAnimDisplacer394: THAnimDisplacerNode;
HAnimDisplacer395: THAnimDisplacerNode;
HAnimDisplacer396: THAnimDisplacerNode;
HAnimDisplacer397: THAnimDisplacerNode;
HAnimDisplacer398: THAnimDisplacerNode;
HAnimDisplacer399: THAnimDisplacerNode;
HAnimSegment400: THAnimSegmentNode;
HAnimDisplacer401: THAnimDisplacerNode;
HAnimSegment402: THAnimSegmentNode;
Transform403: TTransformNode;
Shape404: TShapeNode;
Appearance405: TAppearanceNode;
IndexedFaceSet406: TIndexedFaceSetNode;
TextureCoordinate407: TTextureCoordinateNode;
Coordinate408: TCoordinateNode;
Coordinate409: TCoordinateNode;
HAnimSegment410: THAnimSegmentNode;
Transform411: TTransformNode;
Shape412: TShapeNode;
Appearance413: TAppearanceNode;
IndexedFaceSet414: TIndexedFaceSetNode;
TextureCoordinate415: TTextureCoordinateNode;
Coordinate416: TCoordinateNode;
Coordinate417: TCoordinateNode;
HAnimSegment418: THAnimSegmentNode;
Transform419: TTransformNode;
Shape420: TShapeNode;
Appearance421: TAppearanceNode;
IndexedFaceSet422: TIndexedFaceSetNode;
TextureCoordinate423: TTextureCoordinateNode;
Coordinate424: TCoordinateNode;
Coordinate425: TCoordinateNode;
HAnimDisplacer426: THAnimDisplacerNode;
HAnimDisplacer427: THAnimDisplacerNode;
HAnimDisplacer428: THAnimDisplacerNode;
HAnimDisplacer429: THAnimDisplacerNode;
HAnimDisplacer430: THAnimDisplacerNode;
HAnimDisplacer431: THAnimDisplacerNode;
HAnimDisplacer432: THAnimDisplacerNode;
HAnimDisplacer433: THAnimDisplacerNode;
HAnimDisplacer434: THAnimDisplacerNode;
HAnimDisplacer435: THAnimDisplacerNode;
HAnimSegment436: THAnimSegmentNode;
Transform437: TTransformNode;
Shape438: TShapeNode;
Appearance439: TAppearanceNode;
IndexedFaceSet440: TIndexedFaceSetNode;
TextureCoordinate441: TTextureCoordinateNode;
Coordinate442: TCoordinateNode;
Coordinate443: TCoordinateNode;
HAnimDisplacer444: THAnimDisplacerNode;
HAnimSegment445: THAnimSegmentNode;
Transform446: TTransformNode;
Shape447: TShapeNode;
Appearance448: TAppearanceNode;
IndexedFaceSet449: TIndexedFaceSetNode;
TextureCoordinate450: TTextureCoordinateNode;
Coordinate451: TCoordinateNode;
Coordinate452: TCoordinateNode;
HAnimDisplacer453: THAnimDisplacerNode;
HAnimDisplacer454: THAnimDisplacerNode;
HAnimDisplacer455: THAnimDisplacerNode;
HAnimDisplacer456: THAnimDisplacerNode;
HAnimDisplacer457: THAnimDisplacerNode;
HAnimDisplacer458: THAnimDisplacerNode;
HAnimSegment459: THAnimSegmentNode;
Transform460: TTransformNode;
Shape461: TShapeNode;
Appearance462: TAppearanceNode;
IndexedFaceSet463: TIndexedFaceSetNode;
TextureCoordinate464: TTextureCoordinateNode;
Coordinate465: TCoordinateNode;
Coordinate466: TCoordinateNode;
HAnimDisplacer467: THAnimDisplacerNode;
HAnimDisplacer468: THAnimDisplacerNode;
HAnimDisplacer469: THAnimDisplacerNode;
HAnimDisplacer470: THAnimDisplacerNode;
HAnimSegment471: THAnimSegmentNode;
Transform472: TTransformNode;
Shape473: TShapeNode;
Appearance474: TAppearanceNode;
IndexedFaceSet475: TIndexedFaceSetNode;
TextureCoordinate476: TTextureCoordinateNode;
Coordinate477: TCoordinateNode;
Coordinate478: TCoordinateNode;
HAnimDisplacer479: THAnimDisplacerNode;
HAnimDisplacer480: THAnimDisplacerNode;
HAnimDisplacer481: THAnimDisplacerNode;
HAnimDisplacer482: THAnimDisplacerNode;
HAnimDisplacer483: THAnimDisplacerNode;
HAnimDisplacer484: THAnimDisplacerNode;
HAnimDisplacer485: THAnimDisplacerNode;
HAnimDisplacer486: THAnimDisplacerNode;
HAnimDisplacer487: THAnimDisplacerNode;
HAnimDisplacer488: THAnimDisplacerNode;
HAnimSegment489: THAnimSegmentNode;
Transform490: TTransformNode;
Shape491: TShapeNode;
Appearance492: TAppearanceNode;
IndexedFaceSet493: TIndexedFaceSetNode;
TextureCoordinate494: TTextureCoordinateNode;
Coordinate495: TCoordinateNode;
Coordinate496: TCoordinateNode;
HAnimDisplacer497: THAnimDisplacerNode;
HAnimDisplacer498: THAnimDisplacerNode;
HAnimDisplacer499: THAnimDisplacerNode;
HAnimDisplacer500: THAnimDisplacerNode;
HAnimDisplacer501: THAnimDisplacerNode;
HAnimSegment502: THAnimSegmentNode;
Transform503: TTransformNode;
Shape504: TShapeNode;
Appearance505: TAppearanceNode;
IndexedFaceSet506: TIndexedFaceSetNode;
TextureCoordinate507: TTextureCoordinateNode;
Coordinate508: TCoordinateNode;
Coordinate509: TCoordinateNode;
HAnimDisplacer510: THAnimDisplacerNode;
HAnimDisplacer511: THAnimDisplacerNode;
HAnimDisplacer512: THAnimDisplacerNode;
HAnimDisplacer513: THAnimDisplacerNode;
HAnimDisplacer514: THAnimDisplacerNode;
HAnimDisplacer515: THAnimDisplacerNode;
HAnimDisplacer516: THAnimDisplacerNode;
HAnimDisplacer517: THAnimDisplacerNode;
HAnimDisplacer518: THAnimDisplacerNode;
HAnimDisplacer519: THAnimDisplacerNode;
HAnimDisplacer520: THAnimDisplacerNode;
HAnimDisplacer521: THAnimDisplacerNode;
HAnimDisplacer522: THAnimDisplacerNode;
HAnimDisplacer523: THAnimDisplacerNode;
HAnimDisplacer524: THAnimDisplacerNode;
HAnimDisplacer525: THAnimDisplacerNode;
HAnimSegment526: THAnimSegmentNode;
Transform527: TTransformNode;
Shape528: TShapeNode;
Appearance529: TAppearanceNode;
IndexedFaceSet530: TIndexedFaceSetNode;
TextureCoordinate531: TTextureCoordinateNode;
Coordinate532: TCoordinateNode;
Coordinate533: TCoordinateNode;
HAnimDisplacer534: THAnimDisplacerNode;
HAnimDisplacer535: THAnimDisplacerNode;
HAnimDisplacer536: THAnimDisplacerNode;
HAnimDisplacer537: THAnimDisplacerNode;
HAnimSegment538: THAnimSegmentNode;
Transform539: TTransformNode;
Shape540: TShapeNode;
Appearance541: TAppearanceNode;
IndexedFaceSet542: TIndexedFaceSetNode;
TextureCoordinate543: TTextureCoordinateNode;
Coordinate544: TCoordinateNode;
Coordinate545: TCoordinateNode;
HAnimSegment546: THAnimSegmentNode;
Transform547: TTransformNode;
Shape548: TShapeNode;
Appearance549: TAppearanceNode;
IndexedFaceSet550: TIndexedFaceSetNode;
TextureCoordinate551: TTextureCoordinateNode;
Coordinate552: TCoordinateNode;
Coordinate553: TCoordinateNode;
HAnimDisplacer554: THAnimDisplacerNode;
HAnimDisplacer555: THAnimDisplacerNode;
HAnimDisplacer556: THAnimDisplacerNode;
HAnimDisplacer557: THAnimDisplacerNode;
HAnimDisplacer558: THAnimDisplacerNode;
HAnimSegment559: THAnimSegmentNode;
Transform560: TTransformNode;
Shape561: TShapeNode;
Appearance562: TAppearanceNode;
IndexedFaceSet563: TIndexedFaceSetNode;
TextureCoordinate564: TTextureCoordinateNode;
Coordinate565: TCoordinateNode;
Coordinate566: TCoordinateNode;
HAnimDisplacer567: THAnimDisplacerNode;
HAnimDisplacer568: THAnimDisplacerNode;
HAnimDisplacer569: THAnimDisplacerNode;
HAnimSegment570: THAnimSegmentNode;
Transform571: TTransformNode;
Shape572: TShapeNode;
Appearance573: TAppearanceNode;
IndexedFaceSet574: TIndexedFaceSetNode;
TextureCoordinate575: TTextureCoordinateNode;
Coordinate576: TCoordinateNode;
Coordinate577: TCoordinateNode;
HAnimDisplacer578: THAnimDisplacerNode;
HAnimDisplacer579: THAnimDisplacerNode;
HAnimDisplacer580: THAnimDisplacerNode;
HAnimDisplacer581: THAnimDisplacerNode;
HAnimDisplacer582: THAnimDisplacerNode;
HAnimDisplacer583: THAnimDisplacerNode;
HAnimDisplacer584: THAnimDisplacerNode;
HAnimSegment585: THAnimSegmentNode;
Transform586: TTransformNode;
Shape587: TShapeNode;
Appearance588: TAppearanceNode;
IndexedFaceSet589: TIndexedFaceSetNode;
TextureCoordinate590: TTextureCoordinateNode;
Coordinate591: TCoordinateNode;
Coordinate592: TCoordinateNode;
HAnimDisplacer593: THAnimDisplacerNode;
HAnimDisplacer594: THAnimDisplacerNode;
HAnimDisplacer595: THAnimDisplacerNode;
HAnimDisplacer596: THAnimDisplacerNode;
HAnimDisplacer597: THAnimDisplacerNode;
HAnimDisplacer598: THAnimDisplacerNode;
HAnimDisplacer599: THAnimDisplacerNode;
HAnimDisplacer600: THAnimDisplacerNode;
HAnimDisplacer601: THAnimDisplacerNode;
HAnimDisplacer602: THAnimDisplacerNode;
HAnimDisplacer603: THAnimDisplacerNode;
HAnimDisplacer604: THAnimDisplacerNode;
HAnimDisplacer605: THAnimDisplacerNode;
HAnimDisplacer606: THAnimDisplacerNode;
HAnimSegment607: THAnimSegmentNode;
Transform608: TTransformNode;
Shape609: TShapeNode;
Appearance610: TAppearanceNode;
IndexedFaceSet611: TIndexedFaceSetNode;
TextureCoordinate612: TTextureCoordinateNode;
Coordinate613: TCoordinateNode;
Coordinate614: TCoordinateNode;
HAnimDisplacer615: THAnimDisplacerNode;
HAnimDisplacer616: THAnimDisplacerNode;
HAnimDisplacer617: THAnimDisplacerNode;
HAnimDisplacer618: THAnimDisplacerNode;
HAnimDisplacer619: THAnimDisplacerNode;
HAnimDisplacer620: THAnimDisplacerNode;
HAnimDisplacer621: THAnimDisplacerNode;
HAnimDisplacer622: THAnimDisplacerNode;
HAnimDisplacer623: THAnimDisplacerNode;
HAnimDisplacer624: THAnimDisplacerNode;
HAnimDisplacer625: THAnimDisplacerNode;
HAnimDisplacer626: THAnimDisplacerNode;
HAnimDisplacer627: THAnimDisplacerNode;
HAnimSegment628: THAnimSegmentNode;
Transform629: TTransformNode;
Shape630: TShapeNode;
Appearance631: TAppearanceNode;
IndexedFaceSet632: TIndexedFaceSetNode;
TextureCoordinate633: TTextureCoordinateNode;
Coordinate634: TCoordinateNode;
Coordinate635: TCoordinateNode;
HAnimDisplacer636: THAnimDisplacerNode;
HAnimDisplacer637: THAnimDisplacerNode;
HAnimDisplacer638: THAnimDisplacerNode;
HAnimDisplacer639: THAnimDisplacerNode;
HAnimSegment640: THAnimSegmentNode;
Transform641: TTransformNode;
Shape642: TShapeNode;
Appearance643: TAppearanceNode;
IndexedFaceSet644: TIndexedFaceSetNode;
TextureCoordinate645: TTextureCoordinateNode;
Coordinate646: TCoordinateNode;
Coordinate647: TCoordinateNode;
HAnimDisplacer648: THAnimDisplacerNode;
HAnimDisplacer649: THAnimDisplacerNode;
HAnimDisplacer650: THAnimDisplacerNode;
HAnimSegment651: THAnimSegmentNode;
Transform652: TTransformNode;
Shape653: TShapeNode;
Appearance654: TAppearanceNode;
IndexedFaceSet655: TIndexedFaceSetNode;
TextureCoordinate656: TTextureCoordinateNode;
Coordinate657: TCoordinateNode;
Coordinate658: TCoordinateNode;
HAnimDisplacer659: THAnimDisplacerNode;
HAnimDisplacer660: THAnimDisplacerNode;
HAnimDisplacer661: THAnimDisplacerNode;
HAnimSegment662: THAnimSegmentNode;
Transform663: TTransformNode;
Shape664: TShapeNode;
Appearance665: TAppearanceNode;
IndexedFaceSet666: TIndexedFaceSetNode;
TextureCoordinate667: TTextureCoordinateNode;
Coordinate668: TCoordinateNode;
Coordinate669: TCoordinateNode;
HAnimDisplacer670: THAnimDisplacerNode;
HAnimDisplacer671: THAnimDisplacerNode;
HAnimDisplacer672: THAnimDisplacerNode;
HAnimDisplacer673: THAnimDisplacerNode;
HAnimDisplacer674: THAnimDisplacerNode;
HAnimDisplacer675: THAnimDisplacerNode;
HAnimDisplacer676: THAnimDisplacerNode;
HAnimDisplacer677: THAnimDisplacerNode;
HAnimDisplacer678: THAnimDisplacerNode;
HAnimDisplacer679: THAnimDisplacerNode;
HAnimDisplacer680: THAnimDisplacerNode;
HAnimSegment681: THAnimSegmentNode;
Transform682: TTransformNode;
Shape683: TShapeNode;
Appearance684: TAppearanceNode;
IndexedFaceSet685: TIndexedFaceSetNode;
TextureCoordinate686: TTextureCoordinateNode;
Coordinate687: TCoordinateNode;
Coordinate688: TCoordinateNode;
HAnimDisplacer689: THAnimDisplacerNode;
HAnimDisplacer690: THAnimDisplacerNode;
HAnimDisplacer691: THAnimDisplacerNode;
HAnimDisplacer692: THAnimDisplacerNode;
HAnimDisplacer693: THAnimDisplacerNode;
HAnimDisplacer694: THAnimDisplacerNode;
HAnimDisplacer695: THAnimDisplacerNode;
HAnimDisplacer696: THAnimDisplacerNode;
HAnimDisplacer697: THAnimDisplacerNode;
HAnimDisplacer698: THAnimDisplacerNode;
HAnimDisplacer699: THAnimDisplacerNode;
HAnimSegment700: THAnimSegmentNode;
Transform701: TTransformNode;
Shape702: TShapeNode;
Appearance703: TAppearanceNode;
IndexedFaceSet704: TIndexedFaceSetNode;
TextureCoordinate705: TTextureCoordinateNode;
Coordinate706: TCoordinateNode;
Coordinate707: TCoordinateNode;
HAnimDisplacer708: THAnimDisplacerNode;
HAnimDisplacer709: THAnimDisplacerNode;
HAnimDisplacer710: THAnimDisplacerNode;
HAnimDisplacer711: THAnimDisplacerNode;
HAnimDisplacer712: THAnimDisplacerNode;
HAnimDisplacer713: THAnimDisplacerNode;
HAnimDisplacer714: THAnimDisplacerNode;
HAnimDisplacer715: THAnimDisplacerNode;
HAnimDisplacer716: THAnimDisplacerNode;
HAnimDisplacer717: THAnimDisplacerNode;
HAnimDisplacer718: THAnimDisplacerNode;
HAnimSegment719: THAnimSegmentNode;
Transform720: TTransformNode;
Shape721: TShapeNode;
Appearance722: TAppearanceNode;
IndexedFaceSet723: TIndexedFaceSetNode;
TextureCoordinate724: TTextureCoordinateNode;
Coordinate725: TCoordinateNode;
Coordinate726: TCoordinateNode;
HAnimDisplacer727: THAnimDisplacerNode;
HAnimDisplacer728: THAnimDisplacerNode;
HAnimDisplacer729: THAnimDisplacerNode;
HAnimSegment730: THAnimSegmentNode;
Transform731: TTransformNode;
Shape732: TShapeNode;
Appearance733: TAppearanceNode;
IndexedFaceSet734: TIndexedFaceSetNode;
TextureCoordinate735: TTextureCoordinateNode;
Coordinate736: TCoordinateNode;
Coordinate737: TCoordinateNode;
HAnimDisplacer738: THAnimDisplacerNode;
HAnimDisplacer739: THAnimDisplacerNode;
HAnimDisplacer740: THAnimDisplacerNode;
HAnimDisplacer741: THAnimDisplacerNode;
HAnimDisplacer742: THAnimDisplacerNode;
HAnimDisplacer743: THAnimDisplacerNode;
HAnimDisplacer744: THAnimDisplacerNode;
HAnimDisplacer745: THAnimDisplacerNode;
HAnimDisplacer746: THAnimDisplacerNode;
HAnimDisplacer747: THAnimDisplacerNode;
HAnimDisplacer748: THAnimDisplacerNode;
HAnimDisplacer749: THAnimDisplacerNode;
HAnimDisplacer750: THAnimDisplacerNode;
HAnimDisplacer751: THAnimDisplacerNode;
HAnimJoint752: THAnimJointNode;
HAnimJoint753: THAnimJointNode;
WorldInfo1090: TWorldInfoNode;
Layer1091: TLayerNode;
Viewpoint1092: TViewpointNode;
ProtoDeclare1093: TProtoDeclareNode;
ProtoInterface1094: TProtoInterfaceNode;
field1095: TfieldNode;
field1096: TfieldNode;
field1097: TfieldNode;
field1098: TfieldNode;
field1099: TfieldNode;
field1100: TfieldNode;
field1101: TfieldNode;
field1102: TfieldNode;
field1103: TfieldNode;
field1104: TfieldNode;
field1105: TfieldNode;
ProtoBody1106: TProtoBodyNode;
Group1107: TGroupNode;
Transform1108: TTransformNode;
IS1109: TISNode;
connect1110: TconnectNode;
TouchSensor1111: TTouchSensorNode;
IS1112: TISNode;
connect1113: TconnectNode;
Transform1114: TTransformNode;
IS1115: TISNode;
connect1116: TconnectNode;
Shape1117: TShapeNode;
Appearance1118: TAppearanceNode;
Material1119: TMaterialNode;
Text1120: TTextNode;
IS1121: TISNode;
connect1122: TconnectNode;
FontStyle1123: TFontStyleNode;
IS1124: TISNode;
connect1125: TconnectNode;
connect1126: TconnectNode;
Transform1127: TTransformNode;
Switch1128: TSwitchNode;
Shape1129: TShapeNode;
Appearance1130: TAppearanceNode;
Material1131: TMaterialNode;
Rectangle2D1132: TRectangle2DNode;
IS1133: TISNode;
connect1134: TconnectNode;
Shape1135: TShapeNode;
Appearance1136: TAppearanceNode;
Material1137: TMaterialNode;
Rectangle2D1138: TRectangle2DNode;
IS1139: TISNode;
connect1140: TconnectNode;
TimeTrigger1141: TTimeTriggerNode;
IS1142: TISNode;
connect1143: TconnectNode;
TimeTrigger1144: TTimeTriggerNode;
IS1145: TISNode;
connect1146: TconnectNode;
BooleanFilter1147: TBooleanFilterNode;
IS1148: TISNode;
connect1149: TconnectNode;
BooleanFilter1150: TBooleanFilterNode;
BooleanSequencer1151: TBooleanSequencerNode;
IntegerSequencer1152: TIntegerSequencerNode;
IntegerSequencer1153: TIntegerSequencerNode;
IS1154: TISNode;
connect1155: TconnectNode;
ProximitySensor1164: TProximitySensorNode;
ProtoInstance1165: TProtoInstanceNode;
fieldValue1166: TfieldValueNode;
fieldValue1167: TfieldValueNode;
fieldValue1168: TfieldValueNode;
fieldValue1169: TfieldValueNode;
fieldValue1170: TfieldValueNode;
fieldValue1171: TfieldValueNode;
fieldValue1172: TfieldValueNode;
ProtoInstance1177: TProtoInstanceNode;
fieldValue1178: TfieldValueNode;
fieldValue1179: TfieldValueNode;
fieldValue1180: TfieldValueNode;
fieldValue1181: TfieldValueNode;
fieldValue1182: TfieldValueNode;
fieldValue1183: TfieldValueNode;
fieldValue1184: TfieldValueNode;
ProtoInstance1189: TProtoInstanceNode;
fieldValue1190: TfieldValueNode;
fieldValue1191: TfieldValueNode;
fieldValue1192: TfieldValueNode;
fieldValue1193: TfieldValueNode;
fieldValue1194: TfieldValueNode;
fieldValue1195: TfieldValueNode;
fieldValue1196: TfieldValueNode;
ProtoInstance1201: TProtoInstanceNode;
fieldValue1202: TfieldValueNode;
fieldValue1203: TfieldValueNode;
fieldValue1204: TfieldValueNode;
fieldValue1205: TfieldValueNode;
fieldValue1206: TfieldValueNode;
fieldValue1207: TfieldValueNode;
fieldValue1208: TfieldValueNode;
ProtoInstance1213: TProtoInstanceNode;
fieldValue1214: TfieldValueNode;
fieldValue1215: TfieldValueNode;
fieldValue1216: TfieldValueNode;
fieldValue1217: TfieldValueNode;
fieldValue1218: TfieldValueNode;
fieldValue1219: TfieldValueNode;
fieldValue1220: TfieldValueNode;
ProtoInstance1225: TProtoInstanceNode;
fieldValue1226: TfieldValueNode;
fieldValue1227: TfieldValueNode;
fieldValue1228: TfieldValueNode;
fieldValue1229: TfieldValueNode;
fieldValue1230: TfieldValueNode;
fieldValue1231: TfieldValueNode;
fieldValue1232: TfieldValueNode;
ProtoInstance1237: TProtoInstanceNode;
fieldValue1238: TfieldValueNode;
fieldValue1239: TfieldValueNode;
fieldValue1240: TfieldValueNode;
fieldValue1241: TfieldValueNode;
fieldValue1242: TfieldValueNode;
fieldValue1243: TfieldValueNode;
fieldValue1244: TfieldValueNode;
ProtoInstance1249: TProtoInstanceNode;
fieldValue1250: TfieldValueNode;
fieldValue1251: TfieldValueNode;
fieldValue1252: TfieldValueNode;
fieldValue1253: TfieldValueNode;
fieldValue1254: TfieldValueNode;
fieldValue1255: TfieldValueNode;
fieldValue1256: TfieldValueNode;
ProtoInstance1261: TProtoInstanceNode;
fieldValue1262: TfieldValueNode;
fieldValue1263: TfieldValueNode;
fieldValue1264: TfieldValueNode;
fieldValue1265: TfieldValueNode;
fieldValue1266: TfieldValueNode;
fieldValue1267: TfieldValueNode;
fieldValue1268: TfieldValueNode;
ProtoInstance1273: TProtoInstanceNode;
fieldValue1274: TfieldValueNode;
fieldValue1275: TfieldValueNode;
fieldValue1276: TfieldValueNode;
fieldValue1277: TfieldValueNode;
fieldValue1278: TfieldValueNode;
fieldValue1279: TfieldValueNode;
fieldValue1280: TfieldValueNode;
ProtoInstance1285: TProtoInstanceNode;
fieldValue1286: TfieldValueNode;
fieldValue1287: TfieldValueNode;
fieldValue1288: TfieldValueNode;
fieldValue1289: TfieldValueNode;
fieldValue1290: TfieldValueNode;
fieldValue1291: TfieldValueNode;
fieldValue1292: TfieldValueNode;
ProtoInstance1297: TProtoInstanceNode;
fieldValue1298: TfieldValueNode;
fieldValue1299: TfieldValueNode;
fieldValue1300: TfieldValueNode;
fieldValue1301: TfieldValueNode;
fieldValue1302: TfieldValueNode;
fieldValue1303: TfieldValueNode;
fieldValue1304: TfieldValueNode;
ProtoInstance1309: TProtoInstanceNode;
fieldValue1310: TfieldValueNode;
fieldValue1311: TfieldValueNode;
fieldValue1312: TfieldValueNode;
fieldValue1313: TfieldValueNode;
fieldValue1314: TfieldValueNode;
fieldValue1315: TfieldValueNode;
fieldValue1316: TfieldValueNode;
ProtoInstance1321: TProtoInstanceNode;
fieldValue1322: TfieldValueNode;
fieldValue1323: TfieldValueNode;
fieldValue1324: TfieldValueNode;
fieldValue1325: TfieldValueNode;
fieldValue1326: TfieldValueNode;
fieldValue1327: TfieldValueNode;
fieldValue1328: TfieldValueNode;
ProtoInstance1333: TProtoInstanceNode;
fieldValue1334: TfieldValueNode;
fieldValue1335: TfieldValueNode;
fieldValue1336: TfieldValueNode;
fieldValue1337: TfieldValueNode;
fieldValue1338: TfieldValueNode;
fieldValue1339: TfieldValueNode;
fieldValue1340: TfieldValueNode;
ProtoInstance1345: TProtoInstanceNode;
fieldValue1346: TfieldValueNode;
fieldValue1347: TfieldValueNode;
fieldValue1348: TfieldValueNode;
fieldValue1349: TfieldValueNode;
fieldValue1350: TfieldValueNode;
fieldValue1351: TfieldValueNode;
fieldValue1352: TfieldValueNode;
ProtoInstance1357: TProtoInstanceNode;
fieldValue1358: TfieldValueNode;
fieldValue1359: TfieldValueNode;
fieldValue1360: TfieldValueNode;
fieldValue1361: TfieldValueNode;
fieldValue1362: TfieldValueNode;
fieldValue1363: TfieldValueNode;
fieldValue1364: TfieldValueNode;
ProtoInstance1369: TProtoInstanceNode;
fieldValue1370: TfieldValueNode;
fieldValue1371: TfieldValueNode;
fieldValue1372: TfieldValueNode;
fieldValue1373: TfieldValueNode;
fieldValue1374: TfieldValueNode;
fieldValue1375: TfieldValueNode;
fieldValue1376: TfieldValueNode;
ProtoInstance1381: TProtoInstanceNode;
fieldValue1382: TfieldValueNode;
fieldValue1383: TfieldValueNode;
fieldValue1384: TfieldValueNode;
fieldValue1385: TfieldValueNode;
fieldValue1386: TfieldValueNode;
fieldValue1387: TfieldValueNode;
fieldValue1388: TfieldValueNode;
ProtoInstance1393: TProtoInstanceNode;
fieldValue1394: TfieldValueNode;
fieldValue1395: TfieldValueNode;
fieldValue1396: TfieldValueNode;
fieldValue1397: TfieldValueNode;
fieldValue1398: TfieldValueNode;
fieldValue1399: TfieldValueNode;
fieldValue1400: TfieldValueNode;
ProtoInstance1405: TProtoInstanceNode;
fieldValue1406: TfieldValueNode;
fieldValue1407: TfieldValueNode;
fieldValue1408: TfieldValueNode;
fieldValue1409: TfieldValueNode;
fieldValue1410: TfieldValueNode;
fieldValue1411: TfieldValueNode;
fieldValue1412: TfieldValueNode;
ProtoInstance1417: TProtoInstanceNode;
fieldValue1418: TfieldValueNode;
fieldValue1419: TfieldValueNode;
fieldValue1420: TfieldValueNode;
fieldValue1421: TfieldValueNode;
fieldValue1422: TfieldValueNode;
fieldValue1423: TfieldValueNode;
fieldValue1424: TfieldValueNode;
ProtoInstance1429: TProtoInstanceNode;
fieldValue1430: TfieldValueNode;
fieldValue1431: TfieldValueNode;
fieldValue1432: TfieldValueNode;
fieldValue1433: TfieldValueNode;
fieldValue1434: TfieldValueNode;
fieldValue1435: TfieldValueNode;
fieldValue1436: TfieldValueNode;
ProtoInstance1441: TProtoInstanceNode;
fieldValue1442: TfieldValueNode;
fieldValue1443: TfieldValueNode;
fieldValue1444: TfieldValueNode;
fieldValue1445: TfieldValueNode;
fieldValue1446: TfieldValueNode;
fieldValue1447: TfieldValueNode;
fieldValue1448: TfieldValueNode;
ProtoInstance1453: TProtoInstanceNode;
fieldValue1454: TfieldValueNode;
fieldValue1455: TfieldValueNode;
fieldValue1456: TfieldValueNode;
fieldValue1457: TfieldValueNode;
fieldValue1458: TfieldValueNode;
fieldValue1459: TfieldValueNode;
fieldValue1460: TfieldValueNode;
ProtoInstance1465: TProtoInstanceNode;
fieldValue1466: TfieldValueNode;
fieldValue1467: TfieldValueNode;
fieldValue1468: TfieldValueNode;
fieldValue1469: TfieldValueNode;
fieldValue1470: TfieldValueNode;
fieldValue1471: TfieldValueNode;
fieldValue1472: TfieldValueNode;
ProtoInstance1477: TProtoInstanceNode;
fieldValue1478: TfieldValueNode;
fieldValue1479: TfieldValueNode;
fieldValue1480: TfieldValueNode;
fieldValue1481: TfieldValueNode;
fieldValue1482: TfieldValueNode;
fieldValue1483: TfieldValueNode;
fieldValue1484: TfieldValueNode;
ProtoInstance1489: TProtoInstanceNode;
fieldValue1490: TfieldValueNode;
fieldValue1491: TfieldValueNode;
fieldValue1492: TfieldValueNode;
fieldValue1493: TfieldValueNode;
fieldValue1494: TfieldValueNode;
fieldValue1495: TfieldValueNode;
fieldValue1496: TfieldValueNode;
ProtoInstance1501: TProtoInstanceNode;
fieldValue1502: TfieldValueNode;
fieldValue1503: TfieldValueNode;
fieldValue1504: TfieldValueNode;
fieldValue1505: TfieldValueNode;
fieldValue1506: TfieldValueNode;
fieldValue1507: TfieldValueNode;
fieldValue1508: TfieldValueNode;
ProtoInstance1513: TProtoInstanceNode;
fieldValue1514: TfieldValueNode;
fieldValue1515: TfieldValueNode;
fieldValue1516: TfieldValueNode;
fieldValue1517: TfieldValueNode;
fieldValue1518: TfieldValueNode;
fieldValue1519: TfieldValueNode;
fieldValue1520: TfieldValueNode;
ProtoInstance1525: TProtoInstanceNode;
fieldValue1526: TfieldValueNode;
fieldValue1527: TfieldValueNode;
fieldValue1528: TfieldValueNode;
fieldValue1529: TfieldValueNode;
fieldValue1530: TfieldValueNode;
fieldValue1531: TfieldValueNode;
fieldValue1532: TfieldValueNode;
ProtoInstance1538: TProtoInstanceNode;
fieldValue1539: TfieldValueNode;
fieldValue1540: TfieldValueNode;
fieldValue1541: TfieldValueNode;
fieldValue1542: TfieldValueNode;
fieldValue1543: TfieldValueNode;
fieldValue1544: TfieldValueNode;
fieldValue1545: TfieldValueNode;
ProtoInstance1552: TProtoInstanceNode;
fieldValue1553: TfieldValueNode;
fieldValue1554: TfieldValueNode;
fieldValue1555: TfieldValueNode;
fieldValue1556: TfieldValueNode;
fieldValue1557: TfieldValueNode;
fieldValue1558: TfieldValueNode;
fieldValue1559: TfieldValueNode;
ProtoInstance1567: TProtoInstanceNode;
fieldValue1568: TfieldValueNode;
fieldValue1569: TfieldValueNode;
fieldValue1570: TfieldValueNode;
fieldValue1571: TfieldValueNode;
fieldValue1572: TfieldValueNode;
fieldValue1573: TfieldValueNode;
fieldValue1574: TfieldValueNode;
ProtoInstance1585: TProtoInstanceNode;
fieldValue1586: TfieldValueNode;
fieldValue1587: TfieldValueNode;
fieldValue1588: TfieldValueNode;
fieldValue1589: TfieldValueNode;
fieldValue1590: TfieldValueNode;
fieldValue1591: TfieldValueNode;
fieldValue1592: TfieldValueNode;
ProtoInstance1600: TProtoInstanceNode;
fieldValue1601: TfieldValueNode;
fieldValue1602: TfieldValueNode;
fieldValue1603: TfieldValueNode;
fieldValue1604: TfieldValueNode;
fieldValue1605: TfieldValueNode;
fieldValue1606: TfieldValueNode;
fieldValue1607: TfieldValueNode;
ProtoInstance1614: TProtoInstanceNode;
fieldValue1615: TfieldValueNode;
fieldValue1616: TfieldValueNode;
fieldValue1617: TfieldValueNode;
fieldValue1618: TfieldValueNode;
fieldValue1619: TfieldValueNode;
fieldValue1620: TfieldValueNode;
fieldValue1621: TfieldValueNode;
ProtoInstance1627: TProtoInstanceNode;
fieldValue1628: TfieldValueNode;
fieldValue1629: TfieldValueNode;
fieldValue1630: TfieldValueNode;
fieldValue1631: TfieldValueNode;
fieldValue1632: TfieldValueNode;
fieldValue1633: TfieldValueNode;
fieldValue1634: TfieldValueNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Components['Grouping'] := 1;
X3D0.Components['Layering'] := 1;
X3D0.Components['Text'] := 1;
X3D0.Meta['title'] := 'ManyClocks.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/ManyClocks.x3d';
X3D0.Meta['description'] := 'X3D scene with multiple facial animations controlled by a multi-selection menu';
X3D0.Meta['created'] := '12 December 2024';
X3D0.Meta['modified'] := '13 December 2024';
X3D0.Meta['creator'] := 'John Carlson, Joe Williams, Gyu Ri Cho, Hyun Ho Chu, Min Joo Lee, Yujin Jung';
Group13 := TGroupNode.Create;
LayerSet14 := TLayerSetNode.Create;
LayerSet14.ActiveLayer := 1;
LayerSet14.SetOrder([1,2]);
Layer15 := TLayerNode.Create;
Layer15.Pickable := True;
Layer15.SetObjectType(['ALL']);
Viewpoint16 := TViewpointNode.Create;
Viewpoint16.Description := 'Initial View';
Viewpoint16.Position := Vector3(0,20,110);
{ .AddChildren }
Layer15.AddChildren([Viewpoint16]);
TimeSensor17 := TTimeSensorNode.Create;
TimeSensor17.CycleInterval := 0.01;
{ .AddChildren }
Layer15.AddChildren([TimeSensor17]);
TimeSensor18 := TTimeSensorNode.Create;
TimeSensor18.CycleInterval := 0.99;
TimeSensor18.Loop := True;
TimeSensor18.Enabled := False;
{ .AddChildren }
Layer15.AddChildren([TimeSensor18]);
TimeSensor19 := TTimeSensorNode.Create;
TimeSensor19.CycleInterval := 0.99;
TimeSensor19.Loop := True;
TimeSensor19.Enabled := False;
{ .AddChildren }
Layer15.AddChildren([TimeSensor19]);
TimeSensor20 := TTimeSensorNode.Create;
TimeSensor20.CycleInterval := 0.99;
TimeSensor20.Loop := True;
TimeSensor20.Enabled := False;
{ .AddChildren }
Layer15.AddChildren([TimeSensor20]);
TimeSensor21 := TTimeSensorNode.Create;
TimeSensor21.CycleInterval := 0.99;
TimeSensor21.Loop := True;
TimeSensor21.Enabled := False;
{ .AddChildren }
Layer15.AddChildren([TimeSensor21]);
TimeSensor22 := TTimeSensorNode.Create;
TimeSensor22.CycleInterval := 0.99;
TimeSensor22.Loop := True;
TimeSensor22.Enabled := False;
{ .AddChildren }
Layer15.AddChildren([TimeSensor22]);
TimeSensor23 := TTimeSensorNode.Create;
TimeSensor23.CycleInterval := 0.99;
TimeSensor23.Loop := True;
TimeSensor23.Enabled := False;
{ .AddChildren }
Layer15.AddChildren([TimeSensor23]);
TimeSensor24 := TTimeSensorNode.Create;
TimeSensor24.CycleInterval := 0.99;
TimeSensor24.Loop := True;
TimeSensor24.Enabled := False;
{ .AddChildren }
Layer15.AddChildren([TimeSensor24]);
TimeSensor25 := TTimeSensorNode.Create;
TimeSensor25.CycleInterval := 0.99;
TimeSensor25.Enabled := False;
TimeSensor25.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor25]);
TimeSensor26 := TTimeSensorNode.Create;
TimeSensor26.CycleInterval := 0.99;
TimeSensor26.Enabled := False;
TimeSensor26.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor26]);
TimeSensor27 := TTimeSensorNode.Create;
TimeSensor27.CycleInterval := 0.99;
TimeSensor27.Enabled := False;
TimeSensor27.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor27]);
TimeSensor28 := TTimeSensorNode.Create;
TimeSensor28.CycleInterval := 0.99;
TimeSensor28.Enabled := False;
TimeSensor28.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor28]);
TimeSensor29 := TTimeSensorNode.Create;
TimeSensor29.CycleInterval := 0.99;
TimeSensor29.Enabled := False;
TimeSensor29.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor29]);
TimeSensor30 := TTimeSensorNode.Create;
TimeSensor30.CycleInterval := 0.99;
TimeSensor30.Enabled := False;
TimeSensor30.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor30]);
TimeSensor31 := TTimeSensorNode.Create;
TimeSensor31.CycleInterval := 0.99;
TimeSensor31.Enabled := False;
TimeSensor31.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor31]);
TimeSensor32 := TTimeSensorNode.Create;
TimeSensor32.CycleInterval := 0.99;
TimeSensor32.Enabled := False;
TimeSensor32.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor32]);
TimeSensor33 := TTimeSensorNode.Create;
TimeSensor33.CycleInterval := 0.99;
TimeSensor33.Enabled := False;
TimeSensor33.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor33]);
TimeSensor34 := TTimeSensorNode.Create;
TimeSensor34.CycleInterval := 0.99;
TimeSensor34.Enabled := False;
TimeSensor34.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor34]);
TimeSensor35 := TTimeSensorNode.Create;
TimeSensor35.CycleInterval := 0.99;
TimeSensor35.Enabled := False;
TimeSensor35.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor35]);
TimeSensor36 := TTimeSensorNode.Create;
TimeSensor36.CycleInterval := 0.99;
TimeSensor36.Enabled := False;
TimeSensor36.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor36]);
TimeSensor37 := TTimeSensorNode.Create;
TimeSensor37.CycleInterval := 0.99;
TimeSensor37.Enabled := False;
TimeSensor37.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor37]);
TimeSensor38 := TTimeSensorNode.Create;
TimeSensor38.CycleInterval := 0.99;
TimeSensor38.Enabled := False;
TimeSensor38.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor38]);
TimeSensor39 := TTimeSensorNode.Create;
TimeSensor39.CycleInterval := 0.99;
TimeSensor39.Enabled := False;
TimeSensor39.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor39]);
TimeSensor40 := TTimeSensorNode.Create;
TimeSensor40.CycleInterval := 0.99;
TimeSensor40.Enabled := False;
TimeSensor40.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor40]);
TimeSensor41 := TTimeSensorNode.Create;
TimeSensor41.CycleInterval := 0.99;
TimeSensor41.Enabled := False;
TimeSensor41.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor41]);
TimeSensor42 := TTimeSensorNode.Create;
TimeSensor42.CycleInterval := 0.99;
TimeSensor42.Enabled := False;
TimeSensor42.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor42]);
TimeSensor43 := TTimeSensorNode.Create;
TimeSensor43.CycleInterval := 0.99;
TimeSensor43.Enabled := False;
TimeSensor43.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor43]);
TimeSensor44 := TTimeSensorNode.Create;
TimeSensor44.CycleInterval := 0.99;
TimeSensor44.Enabled := False;
TimeSensor44.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor44]);
TimeSensor45 := TTimeSensorNode.Create;
TimeSensor45.CycleInterval := 0.99;
TimeSensor45.Enabled := False;
TimeSensor45.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor45]);
TimeSensor46 := TTimeSensorNode.Create;
TimeSensor46.CycleInterval := 0.99;
TimeSensor46.Enabled := False;
TimeSensor46.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor46]);
TimeSensor47 := TTimeSensorNode.Create;
TimeSensor47.CycleInterval := 0.99;
TimeSensor47.Enabled := False;
TimeSensor47.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor47]);
TimeSensor48 := TTimeSensorNode.Create;
TimeSensor48.CycleInterval := 0.99;
TimeSensor48.Enabled := False;
TimeSensor48.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor48]);
TimeSensor49 := TTimeSensorNode.Create;
TimeSensor49.CycleInterval := 0.99;
TimeSensor49.Enabled := False;
TimeSensor49.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor49]);
TimeSensor50 := TTimeSensorNode.Create;
TimeSensor50.CycleInterval := 0.99;
TimeSensor50.Enabled := False;
TimeSensor50.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor50]);
TimeSensor51 := TTimeSensorNode.Create;
TimeSensor51.CycleInterval := 0.99;
TimeSensor51.Enabled := False;
TimeSensor51.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor51]);
TimeSensor52 := TTimeSensorNode.Create;
TimeSensor52.CycleInterval := 0.99;
TimeSensor52.Enabled := False;
TimeSensor52.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor52]);
TimeSensor53 := TTimeSensorNode.Create;
TimeSensor53.CycleInterval := 0.99;
TimeSensor53.Enabled := False;
TimeSensor53.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor53]);
TimeSensor54 := TTimeSensorNode.Create;
TimeSensor54.CycleInterval := 0.99;
TimeSensor54.Enabled := False;
TimeSensor54.Loop := True;
{ .AddChildren }
Layer15.AddChildren([TimeSensor54]);
ScalarInterpolator55 := TScalarInterpolatorNode.Create;
ScalarInterpolator55.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator55.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator55]);
ScalarInterpolator56 := TScalarInterpolatorNode.Create;
ScalarInterpolator56.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator56.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator56]);
ScalarInterpolator57 := TScalarInterpolatorNode.Create;
ScalarInterpolator57.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator57.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator57]);
ScalarInterpolator58 := TScalarInterpolatorNode.Create;
ScalarInterpolator58.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator58.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator58]);
ScalarInterpolator59 := TScalarInterpolatorNode.Create;
ScalarInterpolator59.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator59.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator59]);
ScalarInterpolator60 := TScalarInterpolatorNode.Create;
ScalarInterpolator60.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator60.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator60]);
ScalarInterpolator61 := TScalarInterpolatorNode.Create;
ScalarInterpolator61.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator61.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator61]);
ScalarInterpolator62 := TScalarInterpolatorNode.Create;
ScalarInterpolator62.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator62.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator62]);
ScalarInterpolator63 := TScalarInterpolatorNode.Create;
ScalarInterpolator63.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator63.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator63]);
ScalarInterpolator64 := TScalarInterpolatorNode.Create;
ScalarInterpolator64.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator64.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator64]);
ScalarInterpolator65 := TScalarInterpolatorNode.Create;
ScalarInterpolator65.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator65.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator65]);
ScalarInterpolator66 := TScalarInterpolatorNode.Create;
ScalarInterpolator66.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator66.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator66]);
ScalarInterpolator67 := TScalarInterpolatorNode.Create;
ScalarInterpolator67.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator67.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator67]);
ScalarInterpolator68 := TScalarInterpolatorNode.Create;
ScalarInterpolator68.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator68.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator68]);
ScalarInterpolator69 := TScalarInterpolatorNode.Create;
ScalarInterpolator69.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator69.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator69]);
ScalarInterpolator70 := TScalarInterpolatorNode.Create;
ScalarInterpolator70.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator70.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator70]);
ScalarInterpolator71 := TScalarInterpolatorNode.Create;
ScalarInterpolator71.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator71.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator71]);
ScalarInterpolator72 := TScalarInterpolatorNode.Create;
ScalarInterpolator72.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator72.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator72]);
ScalarInterpolator73 := TScalarInterpolatorNode.Create;
ScalarInterpolator73.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator73.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator73]);
ScalarInterpolator74 := TScalarInterpolatorNode.Create;
ScalarInterpolator74.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator74.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator74]);
ScalarInterpolator75 := TScalarInterpolatorNode.Create;
ScalarInterpolator75.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator75.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator75]);
ScalarInterpolator76 := TScalarInterpolatorNode.Create;
ScalarInterpolator76.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator76.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator76]);
ScalarInterpolator77 := TScalarInterpolatorNode.Create;
ScalarInterpolator77.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator77.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator77]);
ScalarInterpolator78 := TScalarInterpolatorNode.Create;
ScalarInterpolator78.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator78.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator78]);
ScalarInterpolator79 := TScalarInterpolatorNode.Create;
ScalarInterpolator79.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator79.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator79]);
ScalarInterpolator80 := TScalarInterpolatorNode.Create;
ScalarInterpolator80.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator80.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator80]);
ScalarInterpolator81 := TScalarInterpolatorNode.Create;
ScalarInterpolator81.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator81.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator81]);
ScalarInterpolator82 := TScalarInterpolatorNode.Create;
ScalarInterpolator82.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator82.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator82]);
ScalarInterpolator83 := TScalarInterpolatorNode.Create;
ScalarInterpolator83.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator83.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator83]);
ScalarInterpolator84 := TScalarInterpolatorNode.Create;
ScalarInterpolator84.SetKey([0,0.25,0.5,0.75,1]);
ScalarInterpolator84.SetKeyValue([0,0.5,1,0.5,0]);
{ .AddChildren }
Layer15.AddChildren([ScalarInterpolator84]);
Transform85 := TTransformNode.Create;
Transform85.Translation := Vector3(-37,-20,0);
Transform85.Scale := Vector3(2,2,2);
HAnimHumanoid86 := THAnimHumanoidNode.Create;
HAnimHumanoid86.NameField := 'humanoid';
HAnimHumanoid86.Version := '2.0';
HAnimJoint87 := THAnimJointNode.Create;
HAnimJoint87.NameField := 'humanoid_root';
HAnimJoint87.SetUlimit([0,0,0]);
HAnimJoint87.SetLlimit([0,0,0]);
HAnimSegment88 := THAnimSegmentNode.Create;
HAnimSegment88.NameField := 'sacrum';
{ .AddChildren }
HAnimJoint87.AddChildren([HAnimSegment88]);
HAnimJoint89 := THAnimJointNode.Create;
HAnimJoint89.NameField := 'skullbase';
HAnimJoint89.SetUlimit([0,0,0]);
HAnimJoint89.SetLlimit([0,0,0]);
HAnimSegment90 := THAnimSegmentNode.Create;
HAnimSegment90.NameField := 'sacrum';
WorldInfo91 := TWorldInfoNode.Create;
WorldInfo91.Title := 'CleanedYouClocks.x3d';
{ .AddChildren }
HAnimSegment90.AddChildren([WorldInfo91]);
Background92 := TBackgroundNode.Create;
Background92.SetSkyColor([Vector3(0.8,0.9,1)]);
{ .AddChildren }
HAnimSegment90.AddChildren([Background92]);
NavigationInfo93 := TNavigationInfoNode.Create;
NavigationInfo93.SetType(['EXAMINE']);
{ .AddChildren }
HAnimSegment90.AddChildren([NavigationInfo93]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment90]);
HAnimSegment94 := THAnimSegmentNode.Create;
HAnimSegment94.NameField := 'lower_teeth';
Transform95 := TTransformNode.Create;
Transform95.Translation := Vector3(0,8.43,11.43);
Shape96 := TShapeNode.Create;
Appearance97 := TAppearanceNode.Create;
Material98 := TMaterialNode.Create;
Material98.AmbientIntensity := 1;
Material98.DiffuseColor := Vector3(0.588,0.588,0.588);
Material98.Shininess := 0.145;
{ .SetMaterial }
Appearance97.Material := Material98;
ImageTexture99 := TImageTextureNode.Create;
ImageTexture99.SetUrl(['../data/JinImageAtlas.jpg','JinImageAtlas.jpg','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/FacialAnimation/JinImageAtlas.jpg']);
{ .SetTexture }
Appearance97.Texture := ImageTexture99;
{ .SetAppearance }
Shape96.Appearance := Appearance97;
IndexedFaceSet100 := TIndexedFaceSetNode.Create;
IndexedFaceSet100.SetCoordIndex([0,521,265,-1,265,524,0,-1,1,525,265,-1,265,521,1,-1,4,523,265,-1,265,525,4,-1,3,524,265,-1,265,523,3,-1,2,522,266,-1,266,526,2,-1,23,558,266,-1,266,522,23,-1,24,551,266,-1,266,558,24,-1,5,526,266,-1,266,551,5,-1,3,523,267,-1,267,528,3,-1,4,529,267,-1,267,523,4,-1,7,527,267,-1,267,529,7,-1,6,528,267,-1,267,527,6,-1,5,551,268,-1,268,530,5,-1,24,559,268,-1,268,551,24,-1,25,552,268,-1,268,559,25,-1,8,530,268,-1,268,552,8,-1,6,527,269,-1,269,532,6,-1,7,533,269,-1,269,527,7,-1,10,531,269,-1,269,533,10,-1,9,532,269,-1,269,531,9,-1,8,552,270,-1,270,534,8,-1,25,560,270,-1,270,552,25,-1,26,553,270,-1,270,560,26,-1,11,534,270,-1,270,553,11,-1,9,531,271,-1,271,536,9,-1,10,537,271,-1,271,531,10,-1,13,535,271,-1,271,537,13,-1,12,536,271,-1,271,535,12,-1,11,553,272,-1,272,538,11,-1,26,561,272,-1,272,553,26,-1,27,554,272,-1,272,561,27,-1,14,538,272,-1,272,554,14,-1,12,535,273,-1,273,540,12,-1,13,541,273,-1,273,535,13,-1,16,539,273,-1,273,541,16,-1,15,540,273,-1,273,539,15,-1,14,554,274,-1,274,542,14,-1,27,562,274,-1,274,554,27,-1,28,555,274,-1,274,562,28,-1,17,542,274,-1,274,555,17,-1,15,539,275,-1,275,544,15,-1,16,545,275,-1,275,539,16,-1,19,543,275,-1,275,545,19,-1,18,544,275,-1,275,543,18,-1,17,555,276,-1,276,546,17,-1,28,563,276,-1,276,555,28,-1,29,556,276,-1,276,563,29,-1,20,546,276,-1,276,556,20,-1,18,543,277,-1,277,548,18,-1,19,549,277,-1,277,543,19,-1,21,547,277,-1,277,549,21,-1,160,548,277,-1,277,547,160,-1,20,556,278,-1,278,550,20,-1,29,564,278,-1,278,556,29,-1,30,557,278,-1,278,564,30,-1,22,550,278,-1,278,557,22,-1,2,526,279,-1,279,580,2,-1,5,581,279,-1,279,526,5,-1,33,565,279,-1,279,581,33,-1,32,580,279,-1,279,565,32,-1,5,530,280,-1,280,581,5,-1,8,582,280,-1,280,530,8,-1,34,566,280,-1,280,582,34,-1,33,581,280,-1,280,566,33,-1,8,534,281,-1,281,582,8,-1,11,583,281,-1,281,534,11,-1,35,567,281,-1,281,583,35,-1,34,582,281,-1,281,567,34,-1,11,538,282,-1,282,583,11,-1,14,584,282,-1,282,538,14,-1,36,568,282,-1,282,584,36,-1,35,583,282,-1,282,568,35,-1,14,542,283,-1,283,584,14,-1,17,585,283,-1,283,542,17,-1,37,569,283,-1,283,585,37,-1,36,584,283,-1,283,569,36,-1,17,546,284,-1,284,585,17,-1,20,586,284,-1,284,546,20,-1,38,570,284,-1,284,586,38,-1,37,585,284,-1,284,570,37,-1,20,550,285,-1,285,586,20,-1,22,587,285,-1,285,550,22,-1,168,571,285,-1,285,587,168,-1,38,586,285,-1,285,571,38,-1,21,549,286,-1,286,839,21,-1,19,588,286,-1,286,549,19,-1,39,572,286,-1,286,588,39,-1,170,839,286,-1,286,572,170,-1,19,545,287,-1,287,588,19,-1,16,589,287,-1,287,545,16,-1,40,573,287,-1,287,589,40,-1,39,588,287,-1,287,573,39,-1,16,541,288,-1,288,589,16,-1,13,590,288,-1,288,541,13,-1,41,574,288,-1,288,590,41,-1,40,589,288,-1,288,574,40,-1,13,537,289,-1,289,590,13,-1,10,591,289,-1,289,537,10,-1,42,575,289,-1,289,591,42,-1,41,590,289,-1,289,575,41,-1,10,533,290,-1,290,591,10,-1,7,592,290,-1,290,533,7,-1,43,576,290,-1,290,592,43,-1,42,591,290,-1,290,576,42,-1,7,529,291,-1,291,592,7,-1,4,593,291,-1,291,529,4,-1,44,577,291,-1,291,593,44,-1,43,592,291,-1,291,577,43,-1,4,525,292,-1,292,593,4,-1,1,579,292,-1,292,525,1,-1,31,578,292,-1,292,579,31,-1,44,593,292,-1,292,578,44,-1,24,558,293,-1,293,595,24,-1,23,594,293,-1,293,558,23,-1,45,595,293,-1,293,594,45,-1,25,559,294,-1,294,596,25,-1,24,595,294,-1,294,559,24,-1,45,596,294,-1,294,595,45,-1,26,560,295,-1,295,597,26,-1,25,596,295,-1,295,560,25,-1,45,597,295,-1,295,596,45,-1,27,561,296,-1,296,598,27,-1,26,597,296,-1,296,561,26,-1,45,598,296,-1,296,597,45,-1,28,562,297,-1,297,599,28,-1,27,598,297,-1,297,562,27,-1,45,599,297,-1,297,598,45,-1,29,563,298,-1,298,600,29,-1,28,599,298,-1,298,563,28,-1,45,600,298,-1,298,599,45,-1,30,564,299,-1,299,601,30,-1,29,600,299,-1,299,564,29,-1,45,601,299,-1,299,600,45,-1,75,667,300,-1,300,670,75,-1,76,668,300,-1,300,667,76,-1,77,669,300,-1,300,668,77,-1,78,670,300,-1,300,669,78,-1,79,675,301,-1,301,678,79,-1,80,676,301,-1,301,675,80,-1,81,677,301,-1,301,676,81,-1,82,678,301,-1,301,677,82,-1,83,683,302,-1,302,686,83,-1,84,684,302,-1,302,683,84,-1,85,685,302,-1,302,684,85,-1,86,686,302,-1,302,685,86,-1,87,691,303,-1,303,694,87,-1,88,692,303,-1,303,691,88,-1,89,693,303,-1,303,692,89,-1,90,694,303,-1,303,693,90,-1,91,699,304,-1,304,702,91,-1,92,700,304,-1,304,699,92,-1,93,701,304,-1,304,700,93,-1,94,702,304,-1,304,701,94,-1,95,707,305,-1,305,710,95,-1,96,708,305,-1,305,707,96,-1,97,709,305,-1,305,708,97,-1,98,710,305,-1,305,709,98,-1,99,715,306,-1,306,718,99,-1,100,716,306,-1,306,715,100,-1,101,717,306,-1,306,716,101,-1,102,718,306,-1,306,717,102,-1,32,565,307,-1,307,609,32,-1,33,610,307,-1,307,565,33,-1,104,752,307,-1,307,610,104,-1,103,609,307,-1,307,752,103,-1,33,603,308,-1,308,610,33,-1,44,611,308,-1,308,603,44,-1,105,753,308,-1,308,611,105,-1,104,610,308,-1,308,753,104,-1,44,578,309,-1,309,611,44,-1,31,612,309,-1,309,578,31,-1,106,754,309,-1,309,612,106,-1,105,611,309,-1,309,754,105,-1,31,602,310,-1,310,612,31,-1,32,609,310,-1,310,602,32,-1,103,755,310,-1,310,609,103,-1,106,612,310,-1,310,755,106,-1,38,571,311,-1,311,617,38,-1,168,618,311,-1,311,571,168,-1,108,756,311,-1,311,618,108,-1,107,617,311,-1,311,756,107,-1,168,900,312,-1,312,618,168,-1,170,619,312,-1,312,900,170,-1,109,757,312,-1,312,619,109,-1,108,618,312,-1,312,757,108,-1,170,572,313,-1,313,619,170,-1,39,620,313,-1,313,572,39,-1,110,758,313,-1,313,620,110,-1,109,619,313,-1,313,758,109,-1,39,604,314,-1,314,620,39,-1,38,617,314,-1,314,604,38,-1,107,759,314,-1,314,617,107,-1,110,620,314,-1,314,759,110,-1,39,573,315,-1,315,625,39,-1,40,626,315,-1,315,573,40,-1,112,760,315,-1,315,626,112,-1,111,625,315,-1,315,760,111,-1,40,605,316,-1,316,626,40,-1,37,627,316,-1,316,605,37,-1,113,761,316,-1,316,627,113,-1,112,626,316,-1,316,761,112,-1,37,570,317,-1,317,627,37,-1,38,628,317,-1,317,570,38,-1,114,762,317,-1,317,628,114,-1,113,627,317,-1,317,762,113,-1,38,604,318,-1,318,628,38,-1,39,625,318,-1,318,604,39,-1,111,763,318,-1,318,625,111,-1,114,628,318,-1,318,763,114,-1,40,574,319,-1,319,633,40,-1,41,634,319,-1,319,574,41,-1,116,764,319,-1,319,634,116,-1,115,633,319,-1,319,764,115,-1,41,606,320,-1,320,634,41,-1,36,635,320,-1,320,606,36,-1,117,765,320,-1,320,635,117,-1,116,634,320,-1,320,765,116,-1,36,569,321,-1,321,635,36,-1,37,636,321,-1,321,569,37,-1,118,766,321,-1,321,636,118,-1,117,635,321,-1,321,766,117,-1,37,605,322,-1,322,636,37,-1,40,633,322,-1,322,605,40,-1,115,767,322,-1,322,633,115,-1,118,636,322,-1,322,767,118,-1,41,575,323,-1,323,641,41,-1,42,642,323,-1,323,575,42,-1,120,768,323,-1,323,642,120,-1,119,641,323,-1,323,768,119,-1,42,607,324,-1,324,642,42,-1,35,643,324,-1,324,607,35,-1,121,769,324,-1,324,643,121,-1,120,642,324,-1,324,769,120,-1,35,568,325,-1,325,643,35,-1,36,644,325,-1,325,568,36,-1,122,770,325,-1,325,644,122,-1,121,643,325,-1,325,770,121,-1,36,606,326,-1,326,644,36,-1,41,641,326,-1,326,606,41,-1,119,771,326,-1,326,641,119,-1,122,644,326,-1,326,771,122,-1,42,576,327,-1,327,649,42,-1,43,650,327,-1,327,576,43,-1,124,772,327,-1,327,650,124,-1,123,649,327,-1,327,772,123,-1,43,608,328,-1,328,650,43,-1,34,651,328,-1,328,608,34,-1,125,773,328,-1,328,651,125,-1,124,650,328,-1,328,773,124,-1,34,567,329,-1,329,651,34,-1,35,652,329,-1,329,567,35,-1,126,774,329,-1,329,652,126,-1,125,651,329,-1,329,774,125,-1,35,607,330,-1,330,652,35,-1,42,649,330,-1,330,607,42,-1,123,775,330,-1,330,649,123,-1,126,652,330,-1,330,775,126,-1,43,577,331,-1,331,657,43,-1,44,658,331,-1,331,577,44,-1,128,776,331,-1,331,658,128,-1,127,657,331,-1,331,776,127,-1,44,603,332,-1,332,658,44,-1,33,659,332,-1,332,603,33,-1,129,777,332,-1,332,659,129,-1,128,658,332,-1,332,777,128,-1,33,566,333,-1,333,659,33,-1,34,660,333,-1,333,566,34,-1,130,778,333,-1,333,660,130,-1,129,659,333,-1,333,778,129,-1,34,608,334,-1,334,660,34,-1,43,657,334,-1,334,608,43,-1,127,779,334,-1,334,657,127,-1,130,660,334,-1,334,779,130,-1,45,594,335,-1,335,953,45,-1,23,666,335,-1,335,594,23,-1,131,780,335,-1,335,666,131,-1,234,953,335,-1,335,780,234,-1,46,613,336,-1,336,671,46,-1,47,672,336,-1,336,613,47,-1,76,667,336,-1,336,672,76,-1,75,671,336,-1,336,667,75,-1,47,614,337,-1,337,672,47,-1,48,673,337,-1,337,614,48,-1,77,668,337,-1,337,673,77,-1,76,672,337,-1,337,668,76,-1,48,615,338,-1,338,673,48,-1,49,674,338,-1,338,615,49,-1,78,669,338,-1,338,674,78,-1,77,673,338,-1,338,669,77,-1,49,616,339,-1,339,674,49,-1,46,671,339,-1,339,616,46,-1,75,670,339,-1,339,671,75,-1,78,674,339,-1,339,670,78,-1,50,621,340,-1,340,679,50,-1,51,680,340,-1,340,621,51,-1,80,675,340,-1,340,680,80,-1,79,679,340,-1,340,675,79,-1,51,622,341,-1,341,680,51,-1,52,681,341,-1,341,622,52,-1,81,676,341,-1,341,681,81,-1,80,680,341,-1,341,676,80,-1,52,623,342,-1,342,681,52,-1,53,682,342,-1,342,623,53,-1,82,677,342,-1,342,682,82,-1,81,681,342,-1,342,677,81,-1,53,624,343,-1,343,682,53,-1,50,679,343,-1,343,624,50,-1,79,678,343,-1,343,679,79,-1,82,682,343,-1,343,678,82,-1,54,629,344,-1,344,687,54,-1,55,688,344,-1,344,629,55,-1,84,683,344,-1,344,688,84,-1,83,687,344,-1,344,683,83,-1,55,630,345,-1,345,688,55,-1,56,689,345,-1,345,630,56,-1,85,684,345,-1,345,689,85,-1,84,688,345,-1,345,684,84,-1,56,631,346,-1,346,689,56,-1,57,690,346,-1,346,631,57,-1,86,685,346,-1,346,690,86,-1,85,689,346,-1,346,685,85,-1,57,632,347,-1,347,690,57,-1,54,687,347,-1,347,632,54,-1,83,686,347,-1,347,687,83,-1,86,690,347,-1,347,686,86,-1,58,637,348,-1,348,695,58,-1,59,696,348,-1,348,637,59,-1,88,691,348,-1,348,696,88,-1,87,695,348,-1,348,691,87,-1,59,638,349,-1,349,696,59,-1,60,697,349,-1,349,638,60,-1,89,692,349,-1,349,697,89,-1,88,696,349,-1,349,692,88,-1,60,639,350,-1,350,697,60,-1,61,698,350,-1,350,639,61,-1,90,693,350,-1,350,698,90,-1,89,697,350,-1,350,693,89,-1,61,640,351,-1,351,698,61,-1,58,695,351,-1,351,640,58,-1,87,694,351,-1,351,695,87,-1,90,698,351,-1,351,694,90,-1,62,645,352,-1,352,703,62,-1,63,704,352,-1,352,645,63,-1,92,699,352,-1,352,704,92,-1,91,703,352,-1,352,699,91,-1,63,646,353,-1,353,704,63,-1,64,705,353,-1,353,646,64,-1,93,700,353,-1,353,705,93,-1,92,704,353,-1,353,700,92,-1,64,647,354,-1,354,705,64,-1,65,706,354,-1,354,647,65,-1,94,701,354,-1,354,706,94,-1,93,705,354,-1,354,701,93,-1,65,648,355,-1,355,706,65,-1,62,703,355,-1,355,648,62,-1,91,702,355,-1,355,703,91,-1,94,706,355,-1,355,702,94,-1,66,653,356,-1,356,711,66,-1,67,712,356,-1,356,653,67,-1,96,707,356,-1,356,712,96,-1,95,711,356,-1,356,707,95,-1,67,654,357,-1,357,712,67,-1,68,713,357,-1,357,654,68,-1,97,708,357,-1,357,713,97,-1,96,712,357,-1,357,708,96,-1,68,655,358,-1,358,713,68,-1,69,714,358,-1,358,655,69,-1,98,709,358,-1,358,714,98,-1,97,713,358,-1,358,709,97,-1,69,656,359,-1,359,714,69,-1,66,711,359,-1,359,656,66,-1,95,710,359,-1,359,711,95,-1,98,714,359,-1,359,710,98,-1,70,661,360,-1,360,719,70,-1,71,720,360,-1,360,661,71,-1,100,715,360,-1,360,720,100,-1,99,719,360,-1,360,715,99,-1,71,662,361,-1,361,720,71,-1,72,721,361,-1,361,662,72,-1,101,716,361,-1,361,721,101,-1,100,720,361,-1,361,716,100,-1,72,663,362,-1,362,721,72,-1,73,722,362,-1,362,663,73,-1,102,717,362,-1,362,722,102,-1,101,721,362,-1,362,717,101,-1,73,664,363,-1,363,722,73,-1,70,719,363,-1,363,664,70,-1,99,718,363,-1,363,719,99,-1,102,722,363,-1,363,718,102,-1,104,724,364,-1,364,752,104,-1,47,613,364,-1,364,724,47,-1,46,723,364,-1,364,613,46,-1,103,752,364,-1,364,723,103,-1,105,725,365,-1,365,753,105,-1,48,614,365,-1,365,725,48,-1,47,724,365,-1,365,614,47,-1,104,753,365,-1,365,724,104,-1,106,726,366,-1,366,754,106,-1,49,615,366,-1,366,726,49,-1,48,725,366,-1,366,615,48,-1,105,754,366,-1,366,725,105,-1,103,723,367,-1,367,755,103,-1,46,616,367,-1,367,723,46,-1,49,726,367,-1,367,616,49,-1,106,755,367,-1,367,726,106,-1,108,728,368,-1,368,756,108,-1,51,621,368,-1,368,728,51,-1,50,727,368,-1,368,621,50,-1,107,756,368,-1,368,727,107,-1,109,729,369,-1,369,757,109,-1,52,622,369,-1,369,729,52,-1,51,728,369,-1,369,622,51,-1,108,757,369,-1,369,728,108,-1,110,730,370,-1,370,758,110,-1,53,623,370,-1,370,730,53,-1,52,729,370,-1,370,623,52,-1,109,758,370,-1,370,729,109,-1,107,727,371,-1,371,759,107,-1,50,624,371,-1,371,727,50,-1,53,730,371,-1,371,624,53,-1,110,759,371,-1,371,730,110,-1,112,732,372,-1,372,760,112,-1,55,629,372,-1,372,732,55,-1,54,731,372,-1,372,629,54,-1,111,760,372,-1,372,731,111,-1,113,733,373,-1,373,761,113,-1,56,630,373,-1,373,733,56,-1,55,732,373,-1,373,630,55,-1,112,761,373,-1,373,732,112,-1,114,734,374,-1,374,762,114,-1,57,631,374,-1,374,734,57,-1,56,733,374,-1,374,631,56,-1,113,762,374,-1,374,733,113,-1,111,731,375,-1,375,763,111,-1,54,632,375,-1,375,731,54,-1,57,734,375,-1,375,632,57,-1,114,763,375,-1,375,734,114,-1,116,736,376,-1,376,764,116,-1,59,637,376,-1,376,736,59,-1,58,735,376,-1,376,637,58,-1,115,764,376,-1,376,735,115,-1,117,737,377,-1,377,765,117,-1,60,638,377,-1,377,737,60,-1,59,736,377,-1,377,638,59,-1,116,765,377,-1,377,736,116,-1,118,738,378,-1,378,766,118,-1,61,639,378,-1,378,738,61,-1,60,737,378,-1,378,639,60,-1,117,766,378,-1,378,737,117,-1,115,735,379,-1,379,767,115,-1,58,640,379,-1,379,735,58,-1,61,738,379,-1,379,640,61,-1,118,767,379,-1,379,738,118,-1,120,740,380,-1,380,768,120,-1,63,645,380,-1,380,740,63,-1,62,739,380,-1,380,645,62,-1,119,768,380,-1,380,739,119,-1,121,741,381,-1,381,769,121,-1,64,646,381,-1,381,741,64,-1,63,740,381,-1,381,646,63,-1,120,769,381,-1,381,740,120,-1,122,742,382,-1,382,770,122,-1,65,647,382,-1,382,742,65,-1,64,741,382,-1,382,647,64,-1,121,770,382,-1,382,741,121,-1,119,739,383,-1,383,771,119,-1,62,648,383,-1,383,739,62,-1,65,742,383,-1,383,648,65,-1,122,771,383,-1,383,742,122,-1,124,744,384,-1,384,772,124,-1,67,653,384,-1,384,744,67,-1,66,743,384,-1,384,653,66,-1,123,772,384,-1,384,743,123,-1,125,745,385,-1,385,773,125,-1,68,654,385,-1,385,745,68,-1,67,744,385,-1,385,654,67,-1,124,773,385,-1,385,744,124,-1,126,746,386,-1,386,774,126,-1,69,655,386,-1,386,746,69,-1,68,745,386,-1,386,655,68,-1,125,774,386,-1,386,745,125,-1,123,743,387,-1,387,775,123,-1,66,656,387,-1,387,743,66,-1,69,746,387,-1,387,656,69,-1,126,775,387,-1,387,746,126,-1,128,748,388,-1,388,776,128,-1,71,661,388,-1,388,748,71,-1,70,747,388,-1,388,661,70,-1,127,776,388,-1,388,747,127,-1,129,749,389,-1,389,777,129,-1,72,662,389,-1,389,749,72,-1,71,748,389,-1,389,662,71,-1,128,777,389,-1,389,748,128,-1,130,750,390,-1,390,778,130,-1,73,663,390,-1,390,750,73,-1,72,749,390,-1,390,663,72,-1,129,778,390,-1,390,749,129,-1,127,747,391,-1,391,779,127,-1,70,664,391,-1,391,747,70,-1,73,750,391,-1,391,664,73,-1,130,779,391,-1,391,750,130,-1,131,751,392,-1,392,780,131,-1,74,665,392,-1,392,751,74,-1,264,1040,392,-1,392,665,264,-1,234,780,392,-1,392,1040,234,-1,132,784,393,-1,393,781,132,-1,135,783,393,-1,393,784,135,-1,134,782,393,-1,393,783,134,-1,133,781,393,-1,393,782,133,-1,136,788,394,-1,394,785,136,-1,139,787,394,-1,394,788,139,-1,138,786,394,-1,394,787,138,-1,137,785,394,-1,394,786,137,-1,135,791,395,-1,395,783,135,-1,141,790,395,-1,395,791,141,-1,140,789,395,-1,395,790,140,-1,134,783,395,-1,395,789,134,-1,139,794,396,-1,396,787,139,-1,143,793,396,-1,396,794,143,-1,142,792,396,-1,396,793,142,-1,138,787,396,-1,396,792,138,-1,141,797,397,-1,397,790,141,-1,145,796,397,-1,397,797,145,-1,144,795,397,-1,397,796,144,-1,140,790,397,-1,397,795,140,-1,143,800,398,-1,398,793,143,-1,147,799,398,-1,398,800,147,-1,146,798,398,-1,398,799,146,-1,142,793,398,-1,398,798,142,-1,145,803,399,-1,399,796,145,-1,149,802,399,-1,399,803,149,-1,148,801,399,-1,399,802,148,-1,144,796,399,-1,399,801,144,-1,147,806,400,-1,400,799,147,-1,151,805,400,-1,400,806,151,-1,150,804,400,-1,400,805,150,-1,146,799,400,-1,400,804,146,-1,149,809,401,-1,401,802,149,-1,153,808,401,-1,401,809,153,-1,152,807,401,-1,401,808,152,-1,148,802,401,-1,401,807,148,-1,151,812,402,-1,402,805,151,-1,155,811,402,-1,402,812,155,-1,154,810,402,-1,402,811,154,-1,150,805,402,-1,402,810,150,-1,153,815,403,-1,403,808,153,-1,157,814,403,-1,403,815,157,-1,156,813,403,-1,403,814,156,-1,152,808,403,-1,403,813,152,-1,155,818,404,-1,404,811,155,-1,159,817,404,-1,404,818,159,-1,158,816,404,-1,404,817,158,-1,154,811,404,-1,404,816,154,-1,157,820,405,-1,405,814,157,-1,160,547,405,-1,405,820,160,-1,21,819,405,-1,405,547,21,-1,156,814,405,-1,405,819,156,-1,159,822,406,-1,406,817,159,-1,22,557,406,-1,406,822,22,-1,30,821,406,-1,406,557,30,-1,158,817,406,-1,406,821,158,-1,136,825,407,-1,407,788,136,-1,162,824,407,-1,407,825,162,-1,161,823,407,-1,407,824,161,-1,139,788,407,-1,407,823,139,-1,139,823,408,-1,408,794,139,-1,161,827,408,-1,408,823,161,-1,163,826,408,-1,408,827,163,-1,143,794,408,-1,408,826,143,-1,143,826,409,-1,409,800,143,-1,163,829,409,-1,409,826,163,-1,164,828,409,-1,409,829,164,-1,147,800,409,-1,409,828,147,-1,147,828,410,-1,410,806,147,-1,164,831,410,-1,410,828,164,-1,165,830,410,-1,410,831,165,-1,151,806,410,-1,410,830,151,-1,151,830,411,-1,411,812,151,-1,165,833,411,-1,411,830,165,-1,166,832,411,-1,411,833,166,-1,155,812,411,-1,411,832,155,-1,155,832,412,-1,412,818,155,-1,166,835,412,-1,412,832,166,-1,167,834,412,-1,412,835,167,-1,159,818,412,-1,412,834,159,-1,159,834,413,-1,413,822,159,-1,167,836,413,-1,413,834,167,-1,168,587,413,-1,413,836,168,-1,22,822,413,-1,413,587,22,-1,21,839,414,-1,414,819,21,-1,170,838,414,-1,414,839,170,-1,169,837,414,-1,414,838,169,-1,156,819,414,-1,414,837,156,-1,156,837,415,-1,415,813,156,-1,169,841,415,-1,415,837,169,-1,171,840,415,-1,415,841,171,-1,152,813,415,-1,415,840,152,-1,152,840,416,-1,416,807,152,-1,171,843,416,-1,416,840,171,-1,172,842,416,-1,416,843,172,-1,148,807,416,-1,416,842,148,-1,148,842,417,-1,417,801,148,-1,172,845,417,-1,417,842,172,-1,173,844,417,-1,417,845,173,-1,144,801,417,-1,417,844,144,-1,144,844,418,-1,418,795,144,-1,173,847,418,-1,418,844,173,-1,174,846,418,-1,418,847,174,-1,140,795,418,-1,418,846,140,-1,140,846,419,-1,419,789,140,-1,174,849,419,-1,419,846,174,-1,175,848,419,-1,419,849,175,-1,134,789,419,-1,419,848,134,-1,134,848,420,-1,420,782,134,-1,175,851,420,-1,420,848,175,-1,176,850,420,-1,420,851,176,-1,133,782,420,-1,420,850,133,-1,138,853,421,-1,421,786,138,-1,45,852,421,-1,421,853,45,-1,137,786,421,-1,421,852,137,-1,142,854,422,-1,422,792,142,-1,45,853,422,-1,422,854,45,-1,138,792,422,-1,422,853,138,-1,146,855,423,-1,423,798,146,-1,45,854,423,-1,423,855,45,-1,142,798,423,-1,423,854,142,-1,150,856,424,-1,424,804,150,-1,45,855,424,-1,424,856,45,-1,146,804,424,-1,424,855,146,-1,154,857,425,-1,425,810,154,-1,45,856,425,-1,425,857,45,-1,150,810,425,-1,425,856,150,-1,158,858,426,-1,426,816,158,-1,45,857,426,-1,426,858,45,-1,154,816,426,-1,426,857,154,-1,30,601,427,-1,427,821,30,-1,45,858,427,-1,427,601,45,-1,158,821,427,-1,427,858,158,-1,177,862,428,-1,428,859,177,-1,180,861,428,-1,428,862,180,-1,179,860,428,-1,428,861,179,-1,178,859,428,-1,428,860,178,-1,181,866,429,-1,429,863,181,-1,184,865,429,-1,429,866,184,-1,183,864,429,-1,429,865,183,-1,182,863,429,-1,429,864,182,-1,185,870,430,-1,430,867,185,-1,188,869,430,-1,430,870,188,-1,187,868,430,-1,430,869,187,-1,186,867,430,-1,430,868,186,-1,189,874,431,-1,431,871,189,-1,192,873,431,-1,431,874,192,-1,191,872,431,-1,431,873,191,-1,190,871,431,-1,431,872,190,-1,193,878,432,-1,432,875,193,-1,196,877,432,-1,432,878,196,-1,195,876,432,-1,432,877,195,-1,194,875,432,-1,432,876,194,-1,197,882,433,-1,433,879,197,-1,200,881,433,-1,433,882,200,-1,199,880,433,-1,433,881,199,-1,198,879,433,-1,433,880,198,-1,201,886,434,-1,434,883,201,-1,204,885,434,-1,434,886,204,-1,203,884,434,-1,434,885,203,-1,202,883,434,-1,434,884,202,-1,162,889,435,-1,435,824,162,-1,206,888,435,-1,435,889,206,-1,205,887,435,-1,435,888,205,-1,161,824,435,-1,435,887,161,-1,161,887,436,-1,436,890,161,-1,205,892,436,-1,436,887,205,-1,207,891,436,-1,436,892,207,-1,175,890,436,-1,436,891,175,-1,175,891,437,-1,437,851,175,-1,207,894,437,-1,437,891,207,-1,208,893,437,-1,437,894,208,-1,176,851,437,-1,437,893,176,-1,176,893,438,-1,438,895,176,-1,208,896,438,-1,438,893,208,-1,206,889,438,-1,438,896,206,-1,162,895,438,-1,438,889,162,-1,167,899,439,-1,439,836,167,-1,210,898,439,-1,439,899,210,-1,209,897,439,-1,439,898,209,-1,168,836,439,-1,439,897,168,-1,168,897,440,-1,440,900,168,-1,209,902,440,-1,440,897,209,-1,211,901,440,-1,440,902,211,-1,170,900,440,-1,440,901,170,-1,170,901,441,-1,441,838,170,-1,211,904,441,-1,441,901,211,-1,212,903,441,-1,441,904,212,-1,169,838,441,-1,441,903,169,-1,169,903,442,-1,442,905,169,-1,212,906,442,-1,442,903,212,-1,210,899,442,-1,442,906,210,-1,167,905,442,-1,442,899,167,-1,169,909,443,-1,443,841,169,-1,214,908,443,-1,443,909,214,-1,213,907,443,-1,443,908,213,-1,171,841,443,-1,443,907,171,-1,171,907,444,-1,444,910,171,-1,213,912,444,-1,444,907,213,-1,215,911,444,-1,444,912,215,-1,166,910,444,-1,444,911,166,-1,166,911,445,-1,445,835,166,-1,215,914,445,-1,445,911,215,-1,216,913,445,-1,445,914,216,-1,167,835,445,-1,445,913,167,-1,167,913,446,-1,446,905,167,-1,216,915,446,-1,446,913,216,-1,214,909,446,-1,446,915,214,-1,169,905,446,-1,446,909,169,-1,171,918,447,-1,447,843,171,-1,218,917,447,-1,447,918,218,-1,217,916,447,-1,447,917,217,-1,172,843,447,-1,447,916,172,-1,172,916,448,-1,448,919,172,-1,217,921,448,-1,448,916,217,-1,219,920,448,-1,448,921,219,-1,165,919,448,-1,448,920,165,-1,165,920,449,-1,449,833,165,-1,219,923,449,-1,449,920,219,-1,220,922,449,-1,449,923,220,-1,166,833,449,-1,449,922,166,-1,166,922,450,-1,450,910,166,-1,220,924,450,-1,450,922,220,-1,218,918,450,-1,450,924,218,-1,171,910,450,-1,450,918,171,-1,172,927,451,-1,451,845,172,-1,222,926,451,-1,451,927,222,-1,221,925,451,-1,451,926,221,-1,173,845,451,-1,451,925,173,-1,173,925,452,-1,452,928,173,-1,221,930,452,-1,452,925,221,-1,223,929,452,-1,452,930,223,-1,164,928,452,-1,452,929,164,-1,164,929,453,-1,453,831,164,-1,223,932,453,-1,453,929,223,-1,224,931,453,-1,453,932,224,-1,165,831,453,-1,453,931,165,-1,165,931,454,-1,454,919,165,-1,224,933,454,-1,454,931,224,-1,222,927,454,-1,454,933,222,-1,172,919,454,-1,454,927,172,-1,173,936,455,-1,455,847,173,-1,226,935,455,-1,455,936,226,-1,225,934,455,-1,455,935,225,-1,174,847,455,-1,455,934,174,-1,174,934,456,-1,456,937,174,-1,225,939,456,-1,456,934,225,-1,227,938,456,-1,456,939,227,-1,163,937,456,-1,456,938,163,-1,163,938,457,-1,457,829,163,-1,227,941,457,-1,457,938,227,-1,228,940,457,-1,457,941,228,-1,164,829,457,-1,457,940,164,-1,164,940,458,-1,458,928,164,-1,228,942,458,-1,458,940,228,-1,226,936,458,-1,458,942,226,-1,173,928,458,-1,458,936,173,-1,174,945,459,-1,459,849,174,-1,230,944,459,-1,459,945,230,-1,229,943,459,-1,459,944,229,-1,175,849,459,-1,459,943,175,-1,175,943,460,-1,460,890,175,-1,229,947,460,-1,460,943,229,-1,231,946,460,-1,460,947,231,-1,161,890,460,-1,460,946,161,-1,161,946,461,-1,461,827,161,-1,231,949,461,-1,461,946,231,-1,232,948,461,-1,461,949,232,-1,163,827,461,-1,461,948,163,-1,163,948,462,-1,462,937,163,-1,232,950,462,-1,462,948,232,-1,230,945,462,-1,462,950,230,-1,174,937,462,-1,462,945,174,-1,45,953,463,-1,463,852,45,-1,234,952,463,-1,463,953,234,-1,233,951,463,-1,463,952,233,-1,137,852,463,-1,463,951,137,-1,235,956,464,-1,464,954,235,-1,177,859,464,-1,464,956,177,-1,178,955,464,-1,464,859,178,-1,236,954,464,-1,464,955,236,-1,236,955,465,-1,465,957,236,-1,178,860,465,-1,465,955,178,-1,179,958,465,-1,465,860,179,-1,237,957,465,-1,465,958,237,-1,237,958,466,-1,466,959,237,-1,179,861,466,-1,466,958,179,-1,180,960,466,-1,466,861,180,-1,238,959,466,-1,466,960,238,-1,238,960,467,-1,467,961,238,-1,180,862,467,-1,467,960,180,-1,177,956,467,-1,467,862,177,-1,235,961,467,-1,467,956,235,-1,239,964,468,-1,468,962,239,-1,181,863,468,-1,468,964,181,-1,182,963,468,-1,468,863,182,-1,240,962,468,-1,468,963,240,-1,240,963,469,-1,469,965,240,-1,182,864,469,-1,469,963,182,-1,183,966,469,-1,469,864,183,-1,241,965,469,-1,469,966,241,-1,241,966,470,-1,470,967,241,-1,183,865,470,-1,470,966,183,-1,184,968,470,-1,470,865,184,-1,242,967,470,-1,470,968,242,-1,242,968,471,-1,471,969,242,-1,184,866,471,-1,471,968,184,-1,181,964,471,-1,471,866,181,-1,239,969,471,-1,471,964,239,-1,243,972,472,-1,472,970,243,-1,185,867,472,-1,472,972,185,-1,186,971,472,-1,472,867,186,-1,244,970,472,-1,472,971,244,-1,244,971,473,-1,473,973,244,-1,186,868,473,-1,473,971,186,-1,187,974,473,-1,473,868,187,-1,245,973,473,-1,473,974,245,-1,245,974,474,-1,474,975,245,-1,187,869,474,-1,474,974,187,-1,188,976,474,-1,474,869,188,-1,246,975,474,-1,474,976,246,-1,246,976,475,-1,475,977,246,-1,188,870,475,-1,475,976,188,-1,185,972,475,-1,475,870,185,-1,243,977,475,-1,475,972,243,-1,247,980,476,-1,476,978,247,-1,189,871,476,-1,476,980,189,-1,190,979,476,-1,476,871,190,-1,248,978,476,-1,476,979,248,-1,248,979,477,-1,477,981,248,-1,190,872,477,-1,477,979,190,-1,191,982,477,-1,477,872,191,-1,249,981,477,-1,477,982,249,-1,249,982,478,-1,478,983,249,-1,191,873,478,-1,478,982,191,-1,192,984,478,-1,478,873,192,-1,250,983,478,-1,478,984,250,-1,250,984,479,-1,479,985,250,-1,192,874,479,-1,479,984,192,-1,189,980,479,-1,479,874,189,-1,247,985,479,-1,479,980,247,-1,251,988,480,-1,480,986,251,-1,193,875,480,-1,480,988,193,-1,194,987,480,-1,480,875,194,-1,252,986,480,-1,480,987,252,-1,252,987,481,-1,481,989,252,-1,194,876,481,-1,481,987,194,-1,195,990,481,-1,481,876,195,-1,253,989,481,-1,481,990,253,-1,253,990,482,-1,482,991,253,-1,195,877,482,-1,482,990,195,-1,196,992,482,-1,482,877,196,-1,254,991,482,-1,482,992,254,-1,254,992,483,-1,483,993,254,-1,196,878,483,-1,483,992,196,-1,193,988,483,-1,483,878,193,-1,251,993,483,-1,483,988,251,-1,255,996,484,-1,484,994,255,-1,197,879,484,-1,484,996,197,-1,198,995,484,-1,484,879,198,-1,256,994,484,-1,484,995,256,-1,256,995,485,-1,485,997,256,-1,198,880,485,-1,485,995,198,-1,199,998,485,-1,485,880,199,-1,257,997,485,-1,485,998,257,-1,257,998,486,-1,486,999,257,-1,199,881,486,-1,486,998,199,-1,200,1000,486,-1,486,881,200,-1,258,999,486,-1,486,1000,258,-1,258,1000,487,-1,487,1001,258,-1,200,882,487,-1,487,1000,200,-1,197,996,487,-1,487,882,197,-1,255,1001,487,-1,487,996,255,-1,259,1004,488,-1,488,1002,259,-1,201,883,488,-1,488,1004,201,-1,202,1003,488,-1,488,883,202,-1,260,1002,488,-1,488,1003,260,-1,260,1003,489,-1,489,1005,260,-1,202,884,489,-1,489,1003,202,-1,203,1006,489,-1,489,884,203,-1,261,1005,489,-1,489,1006,261,-1,261,1006,490,-1,490,1007,261,-1,203,885,490,-1,490,1006,203,-1,204,1008,490,-1,490,885,204,-1,262,1007,490,-1,490,1008,262,-1,262,1008,491,-1,491,1009,262,-1,204,886,491,-1,491,1008,204,-1,201,1004,491,-1,491,886,201,-1,259,1009,491,-1,491,1004,259,-1,205,888,492,-1,492,1010,205,-1,206,1011,492,-1,492,888,206,-1,235,954,492,-1,492,1011,235,-1,236,1010,492,-1,492,954,236,-1,207,892,493,-1,493,1012,207,-1,205,1010,493,-1,493,892,205,-1,236,957,493,-1,493,1010,236,-1,237,1012,493,-1,493,957,237,-1,208,894,494,-1,494,1013,208,-1,207,1012,494,-1,494,894,207,-1,237,959,494,-1,494,1012,237,-1,238,1013,494,-1,494,959,238,-1,206,896,495,-1,495,1011,206,-1,208,1013,495,-1,495,896,208,-1,238,961,495,-1,495,1013,238,-1,235,1011,495,-1,495,961,235,-1,209,898,496,-1,496,1014,209,-1,210,1015,496,-1,496,898,210,-1,239,962,496,-1,496,1015,239,-1,240,1014,496,-1,496,962,240,-1,211,902,497,-1,497,1016,211,-1,209,1014,497,-1,497,902,209,-1,240,965,497,-1,497,1014,240,-1,241,1016,497,-1,497,965,241,-1,212,904,498,-1,498,1017,212,-1,211,1016,498,-1,498,904,211,-1,241,967,498,-1,498,1016,241,-1,242,1017,498,-1,498,967,242,-1,210,906,499,-1,499,1015,210,-1,212,1017,499,-1,499,906,212,-1,242,969,499,-1,499,1017,242,-1,239,1015,499,-1,499,969,239,-1,213,908,500,-1,500,1018,213,-1,214,1019,500,-1,500,908,214,-1,243,970,500,-1,500,1019,243,-1,244,1018,500,-1,500,970,244,-1,215,912,501,-1,501,1020,215,-1,213,1018,501,-1,501,912,213,-1,244,973,501,-1,501,1018,244,-1,245,1020,501,-1,501,973,245,-1,216,914,502,-1,502,1021,216,-1,215,1020,502,-1,502,914,215,-1,245,975,502,-1,502,1020,245,-1,246,1021,502,-1,502,975,246,-1,214,915,503,-1,503,1019,214,-1,216,1021,503,-1,503,915,216,-1,246,977,503,-1,503,1021,246,-1,243,1019,503,-1,503,977,243,-1,217,917,504,-1,504,1022,217,-1,218,1023,504,-1,504,917,218,-1,247,978,504,-1,504,1023,247,-1,248,1022,504,-1,504,978,248,-1,219,921,505,-1,505,1024,219,-1,217,1022,505,-1,505,921,217,-1,248,981,505,-1,505,1022,248,-1,249,1024,505,-1,505,981,249,-1,220,923,506,-1,506,1025,220,-1,219,1024,506,-1,506,923,219,-1,249,983,506,-1,506,1024,249,-1,250,1025,506,-1,506,983,250,-1,218,924,507,-1,507,1023,218,-1,220,1025,507,-1,507,924,220,-1,250,985,507,-1,507,1025,250,-1,247,1023,507,-1,507,985,247,-1,221,926,508,-1,508,1026,221,-1,222,1027,508,-1,508,926,222,-1,251,986,508,-1,508,1027,251,-1,252,1026,508,-1,508,986,252,-1,223,930,509,-1,509,1028,223,-1,221,1026,509,-1,509,930,221,-1,252,989,509,-1,509,1026,252,-1,253,1028,509,-1,509,989,253,-1,224,932,510,-1,510,1029,224,-1,223,1028,510,-1,510,932,223,-1,253,991,510,-1,510,1028,253,-1,254,1029,510,-1,510,991,254,-1,222,933,511,-1,511,1027,222,-1,224,1029,511,-1,511,933,224,-1,254,993,511,-1,511,1029,254,-1,251,1027,511,-1,511,993,251,-1,225,935,512,-1,512,1030,225,-1,226,1031,512,-1,512,935,226,-1,255,994,512,-1,512,1031,255,-1,256,1030,512,-1,512,994,256,-1,227,939,513,-1,513,1032,227,-1,225,1030,513,-1,513,939,225,-1,256,997,513,-1,513,1030,256,-1,257,1032,513,-1,513,997,257,-1,228,941,514,-1,514,1033,228,-1,227,1032,514,-1,514,941,227,-1,257,999,514,-1,514,1032,257,-1,258,1033,514,-1,514,999,258,-1,226,942,515,-1,515,1031,226,-1,228,1033,515,-1,515,942,228,-1,258,1001,515,-1,515,1033,258,-1,255,1031,515,-1,515,1001,255,-1,229,944,516,-1,516,1034,229,-1,230,1035,516,-1,516,944,230,-1,259,1002,516,-1,516,1035,259,-1,260,1034,516,-1,516,1002,260,-1,231,947,517,-1,517,1036,231,-1,229,1034,517,-1,517,947,229,-1,260,1005,517,-1,517,1034,260,-1,261,1036,517,-1,517,1005,261,-1,232,949,518,-1,518,1037,232,-1,231,1036,518,-1,518,949,231,-1,261,1007,518,-1,518,1036,261,-1,262,1037,518,-1,518,1007,262,-1,230,950,519,-1,519,1035,230,-1,232,1037,519,-1,519,950,232,-1,262,1009,519,-1,519,1037,262,-1,259,1035,519,-1,519,1009,259,-1,233,952,520,-1,520,1038,233,-1,234,1040,520,-1,520,952,234,-1,264,1039,520,-1,520,1040,264,-1,263,1038,520,-1,520,1039,263,-1]);
IndexedFaceSet100.CreaseAngle := 3.14159;
IndexedFaceSet100.Solid := False;
IndexedFaceSet100.SetTexCoordIndex([0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,6,7,2,-1,2,5,6,-1,8,3,2,-1,2,7,8,-1,9,10,11,-1,11,12,9,-1,13,14,11,-1,11,10,13,-1,15,16,11,-1,11,14,15,-1,17,12,11,-1,11,16,17,-1,8,7,18,-1,18,19,8,-1,6,20,18,-1,18,7,6,-1,21,22,18,-1,18,20,21,-1,23,19,18,-1,18,22,23,-1,17,16,24,-1,24,25,17,-1,15,26,24,-1,24,16,15,-1,27,28,24,-1,24,26,27,-1,29,25,24,-1,24,28,29,-1,23,22,30,-1,30,31,23,-1,21,32,30,-1,30,22,21,-1,33,34,30,-1,30,32,33,-1,35,31,30,-1,30,34,35,-1,29,28,36,-1,36,37,29,-1,27,38,36,-1,36,28,27,-1,39,40,36,-1,36,38,39,-1,41,37,36,-1,36,40,41,-1,35,34,42,-1,42,43,35,-1,33,44,42,-1,42,34,33,-1,45,46,42,-1,42,44,45,-1,47,43,42,-1,42,46,47,-1,41,40,48,-1,48,87,41,-1,39,88,48,-1,48,40,39,-1,145,146,48,-1,48,88,145,-1,147,87,48,-1,48,146,147,-1,47,46,148,-1,148,149,47,-1,45,150,148,-1,148,46,45,-1,151,152,148,-1,148,150,151,-1,153,149,148,-1,148,152,153,-1,147,146,154,-1,154,155,147,-1,145,156,154,-1,154,146,145,-1,157,158,154,-1,154,156,157,-1,159,155,154,-1,154,158,159,-1,153,152,160,-1,160,161,153,-1,151,162,160,-1,160,152,151,-1,163,164,160,-1,160,162,163,-1,165,161,160,-1,160,164,165,-1,159,158,166,-1,166,167,159,-1,157,168,166,-1,166,158,157,-1,169,170,166,-1,166,168,169,-1,171,167,166,-1,166,170,171,-1,165,164,172,-1,172,173,165,-1,163,174,172,-1,172,164,163,-1,175,176,172,-1,172,174,175,-1,177,173,172,-1,172,176,177,-1,171,170,178,-1,178,179,171,-1,169,180,178,-1,178,170,169,-1,181,182,178,-1,178,180,181,-1,183,179,178,-1,178,182,183,-1,9,12,184,-1,184,185,9,-1,17,186,184,-1,184,12,17,-1,187,188,184,-1,184,186,187,-1,189,185,184,-1,184,188,189,-1,17,25,190,-1,190,186,17,-1,29,191,190,-1,190,25,29,-1,192,193,190,-1,190,191,192,-1,187,186,190,-1,190,193,187,-1,29,37,194,-1,194,191,29,-1,41,195,194,-1,194,37,41,-1,262,263,194,-1,194,195,262,-1,192,191,194,-1,194,263,192,-1,41,87,292,-1,292,195,41,-1,147,293,292,-1,292,87,147,-1,294,295,292,-1,292,293,294,-1,262,195,292,-1,292,295,262,-1,147,155,296,-1,296,293,147,-1,159,297,296,-1,296,155,159,-1,298,299,296,-1,296,297,298,-1,294,293,296,-1,296,299,294,-1,159,167,300,-1,300,297,159,-1,171,301,300,-1,300,167,171,-1,302,303,300,-1,300,301,302,-1,298,297,300,-1,300,303,298,-1,171,179,304,-1,304,301,171,-1,183,305,304,-1,304,179,183,-1,306,307,304,-1,304,305,306,-1,302,301,304,-1,304,307,302,-1,175,174,308,-1,308,309,175,-1,163,310,308,-1,308,174,163,-1,311,312,308,-1,308,310,311,-1,313,309,308,-1,308,312,313,-1,163,162,314,-1,314,310,163,-1,151,315,314,-1,314,162,151,-1,316,317,314,-1,314,315,316,-1,311,310,314,-1,314,317,311,-1,151,150,318,-1,318,315,151,-1,45,319,318,-1,318,150,45,-1,320,321,318,-1,318,319,320,-1,316,315,318,-1,318,321,316,-1,45,44,322,-1,322,319,45,-1,33,323,322,-1,322,44,33,-1,324,325,322,-1,322,323,324,-1,320,319,322,-1,322,325,320,-1,33,32,326,-1,326,323,33,-1,21,327,326,-1,326,32,21,-1,328,364,326,-1,326,327,328,-1,324,323,326,-1,326,364,324,-1,21,20,421,-1,421,327,21,-1,6,422,421,-1,421,20,6,-1,423,424,421,-1,421,422,423,-1,328,327,421,-1,421,424,328,-1,6,5,425,-1,425,422,6,-1,4,426,425,-1,425,5,4,-1,427,428,425,-1,425,426,427,-1,423,422,425,-1,425,428,423,-1,15,14,429,-1,429,430,15,-1,13,431,429,-1,429,14,13,-1,432,430,429,-1,429,431,432,-1,27,26,433,-1,433,434,27,-1,15,430,433,-1,433,26,15,-1,432,434,433,-1,433,430,432,-1,39,38,435,-1,435,436,39,-1,27,434,435,-1,435,38,27,-1,432,436,435,-1,435,434,432,-1,145,88,437,-1,437,438,145,-1,39,436,437,-1,437,88,39,-1,432,438,437,-1,437,436,432,-1,157,156,439,-1,439,440,157,-1,145,438,439,-1,439,156,145,-1,432,440,439,-1,439,438,432,-1,169,168,441,-1,441,442,169,-1,157,440,441,-1,441,168,157,-1,432,442,441,-1,441,440,432,-1,181,180,443,-1,443,444,181,-1,169,442,443,-1,443,180,169,-1,432,444,443,-1,443,442,432,-1,49,50,51,-1,51,52,49,-1,53,54,51,-1,51,50,53,-1,55,56,51,-1,51,54,55,-1,57,52,51,-1,51,56,57,-1,58,59,60,-1,60,61,58,-1,62,63,60,-1,60,59,62,-1,64,65,60,-1,60,63,64,-1,66,61,60,-1,60,65,66,-1,67,68,69,-1,69,70,67,-1,71,72,69,-1,69,68,71,-1,73,74,69,-1,69,72,73,-1,75,70,69,-1,69,74,75,-1,76,77,78,-1,78,79,76,-1,80,81,78,-1,78,77,80,-1,82,83,78,-1,78,81,82,-1,84,79,78,-1,78,83,84,-1,85,86,89,-1,89,90,85,-1,91,92,89,-1,89,86,91,-1,93,94,89,-1,89,92,93,-1,95,90,89,-1,89,94,95,-1,96,97,98,-1,98,99,96,-1,100,101,98,-1,98,97,100,-1,102,103,98,-1,98,101,102,-1,104,99,98,-1,98,103,104,-1,105,106,107,-1,107,108,105,-1,109,110,107,-1,107,106,109,-1,111,112,107,-1,107,110,111,-1,113,108,107,-1,107,112,113,-1,114,115,116,-1,116,117,114,-1,118,119,116,-1,116,115,118,-1,120,121,116,-1,116,119,120,-1,122,117,116,-1,116,121,122,-1,118,123,124,-1,124,119,118,-1,125,126,124,-1,124,123,125,-1,127,128,124,-1,124,126,127,-1,120,119,124,-1,124,128,120,-1,125,129,130,-1,130,126,125,-1,131,132,130,-1,130,129,131,-1,133,134,130,-1,130,132,133,-1,127,126,130,-1,130,134,127,-1,131,135,136,-1,136,132,131,-1,114,117,136,-1,136,135,114,-1,122,137,136,-1,136,117,122,-1,133,132,136,-1,136,137,133,-1,138,139,140,-1,140,141,138,-1,142,143,140,-1,140,139,142,-1,144,196,140,-1,140,143,144,-1,197,141,140,-1,140,196,197,-1,142,198,199,-1,199,143,142,-1,200,201,199,-1,199,198,200,-1,202,203,199,-1,199,201,202,-1,144,143,199,-1,199,203,144,-1,200,204,205,-1,205,201,200,-1,206,207,205,-1,205,204,206,-1,208,209,205,-1,205,207,208,-1,202,201,205,-1,205,209,202,-1,206,210,211,-1,211,207,206,-1,138,141,211,-1,211,210,138,-1,197,212,211,-1,211,141,197,-1,208,207,211,-1,211,212,208,-1,206,213,214,-1,214,215,206,-1,216,217,214,-1,214,213,216,-1,218,219,214,-1,214,217,218,-1,220,215,214,-1,214,219,220,-1,216,221,222,-1,222,217,216,-1,223,224,222,-1,222,221,223,-1,225,226,222,-1,222,224,225,-1,218,217,222,-1,222,226,218,-1,223,227,228,-1,228,224,223,-1,138,229,228,-1,228,227,138,-1,230,231,228,-1,228,229,230,-1,225,224,228,-1,228,231,225,-1,138,210,232,-1,232,229,138,-1,206,215,232,-1,232,210,206,-1,220,233,232,-1,232,215,220,-1,230,229,232,-1,232,233,230,-1,216,234,235,-1,235,236,216,-1,237,238,235,-1,235,234,237,-1,239,240,235,-1,235,238,239,-1,241,236,235,-1,235,240,241,-1,237,242,243,-1,243,238,237,-1,244,245,243,-1,243,242,244,-1,246,247,243,-1,243,245,246,-1,239,238,243,-1,243,247,239,-1,244,248,249,-1,249,245,244,-1,223,250,249,-1,249,248,223,-1,251,252,249,-1,249,250,251,-1,246,245,249,-1,249,252,246,-1,223,221,253,-1,253,250,223,-1,216,236,253,-1,253,221,216,-1,241,254,253,-1,253,236,241,-1,251,250,253,-1,253,254,251,-1,237,255,256,-1,256,257,237,-1,258,259,256,-1,256,255,258,-1,260,261,256,-1,256,259,260,-1,264,257,256,-1,256,261,264,-1,258,265,266,-1,266,259,258,-1,267,268,266,-1,266,265,267,-1,269,270,266,-1,266,268,269,-1,260,259,266,-1,266,270,260,-1,267,271,272,-1,272,268,267,-1,244,273,272,-1,272,271,244,-1,274,275,272,-1,272,273,274,-1,269,268,272,-1,272,275,269,-1,244,242,276,-1,276,273,244,-1,237,257,276,-1,276,242,237,-1,264,277,276,-1,276,257,264,-1,274,273,276,-1,276,277,274,-1,258,278,279,-1,279,280,258,-1,281,282,279,-1,279,278,281,-1,283,284,279,-1,279,282,283,-1,285,280,279,-1,279,284,285,-1,281,286,287,-1,287,282,281,-1,288,289,287,-1,287,286,288,-1,290,291,287,-1,287,289,290,-1,283,282,287,-1,287,291,283,-1,288,329,330,-1,330,289,288,-1,267,331,330,-1,330,329,267,-1,332,333,330,-1,330,331,332,-1,290,289,330,-1,330,333,290,-1,267,265,334,-1,334,331,267,-1,258,280,334,-1,334,265,258,-1,285,335,334,-1,334,280,285,-1,332,331,334,-1,334,335,332,-1,281,336,337,-1,337,338,281,-1,125,339,337,-1,337,336,125,-1,340,341,337,-1,337,339,340,-1,342,338,337,-1,337,341,342,-1,125,123,343,-1,343,339,125,-1,118,344,343,-1,343,123,118,-1,345,346,343,-1,343,344,345,-1,340,339,343,-1,343,346,340,-1,118,347,348,-1,348,344,118,-1,288,349,348,-1,348,347,288,-1,350,351,348,-1,348,349,350,-1,345,344,348,-1,348,351,345,-1,288,286,352,-1,352,349,288,-1,281,338,352,-1,352,286,281,-1,342,353,352,-1,352,338,342,-1,350,349,352,-1,352,353,350,-1,432,431,445,-1,445,446,432,-1,13,447,445,-1,445,431,13,-1,448,449,445,-1,445,447,448,-1,450,446,445,-1,445,449,450,-1,354,355,356,-1,356,357,354,-1,358,359,356,-1,356,355,358,-1,53,50,356,-1,356,359,53,-1,49,357,356,-1,356,50,49,-1,358,360,361,-1,361,359,358,-1,362,363,361,-1,361,360,362,-1,55,54,361,-1,361,363,55,-1,53,359,361,-1,361,54,53,-1,362,365,366,-1,366,363,362,-1,367,368,366,-1,366,365,367,-1,57,56,366,-1,366,368,57,-1,55,363,366,-1,366,56,55,-1,367,369,370,-1,370,368,367,-1,354,357,370,-1,370,369,354,-1,49,52,370,-1,370,357,49,-1,57,368,370,-1,370,52,57,-1,371,372,373,-1,373,374,371,-1,375,376,373,-1,373,372,375,-1,62,59,373,-1,373,376,62,-1,58,374,373,-1,373,59,58,-1,375,377,378,-1,378,376,375,-1,379,380,378,-1,378,377,379,-1,64,63,378,-1,378,380,64,-1,62,376,378,-1,378,63,62,-1,379,381,382,-1,382,380,379,-1,383,384,382,-1,382,381,383,-1,66,65,382,-1,382,384,66,-1,64,380,382,-1,382,65,64,-1,383,385,386,-1,386,384,383,-1,371,374,386,-1,386,385,371,-1,58,61,386,-1,386,374,58,-1,66,384,386,-1,386,61,66,-1,387,388,389,-1,389,390,387,-1,391,392,389,-1,389,388,391,-1,71,68,389,-1,389,392,71,-1,67,390,389,-1,389,68,67,-1,391,393,394,-1,394,392,391,-1,395,396,394,-1,394,393,395,-1,73,72,394,-1,394,396,73,-1,71,392,394,-1,394,72,71,-1,395,397,398,-1,398,396,395,-1,399,400,398,-1,398,397,399,-1,75,74,398,-1,398,400,75,-1,73,396,398,-1,398,74,73,-1,399,401,402,-1,402,400,399,-1,387,390,402,-1,402,401,387,-1,67,70,402,-1,402,390,67,-1,75,400,402,-1,402,70,75,-1,403,404,405,-1,405,406,403,-1,407,408,405,-1,405,404,407,-1,80,77,405,-1,405,408,80,-1,76,406,405,-1,405,77,76,-1,407,409,410,-1,410,408,407,-1,411,412,410,-1,410,409,411,-1,82,81,410,-1,410,412,82,-1,80,408,410,-1,410,81,80,-1,411,413,414,-1,414,412,411,-1,415,416,414,-1,414,413,415,-1,84,83,414,-1,414,416,84,-1,82,412,414,-1,414,83,82,-1,415,417,418,-1,418,416,415,-1,403,406,418,-1,418,417,403,-1,76,79,418,-1,418,406,76,-1,84,416,418,-1,418,79,84,-1,419,420,457,-1,457,458,419,-1,459,460,457,-1,457,420,459,-1,91,86,457,-1,457,460,91,-1,85,458,457,-1,457,86,85,-1,459,461,462,-1,462,460,459,-1,463,464,462,-1,462,461,463,-1,93,92,462,-1,462,464,93,-1,91,460,462,-1,462,92,91,-1,463,465,466,-1,466,464,463,-1,467,468,466,-1,466,465,467,-1,95,94,466,-1,466,468,95,-1,93,464,466,-1,466,94,93,-1,467,469,470,-1,470,468,467,-1,419,458,470,-1,470,469,419,-1,85,90,470,-1,470,458,85,-1,95,468,470,-1,470,90,95,-1,471,472,473,-1,473,474,471,-1,475,476,473,-1,473,472,475,-1,100,97,473,-1,473,476,100,-1,96,474,473,-1,473,97,96,-1,475,477,478,-1,478,476,475,-1,479,480,478,-1,478,477,479,-1,102,101,478,-1,478,480,102,-1,100,476,478,-1,478,101,100,-1,479,481,482,-1,482,480,479,-1,483,484,482,-1,482,481,483,-1,104,103,482,-1,482,484,104,-1,102,480,482,-1,482,103,102,-1,483,485,486,-1,486,484,483,-1,471,474,486,-1,486,485,471,-1,96,99,486,-1,486,474,96,-1,104,484,486,-1,486,99,104,-1,487,488,489,-1,489,490,487,-1,491,493,489,-1,489,488,491,-1,109,106,489,-1,489,493,109,-1,105,490,489,-1,489,106,105,-1,491,494,495,-1,495,493,491,-1,496,497,495,-1,495,494,496,-1,111,110,495,-1,495,497,111,-1,109,493,495,-1,495,110,109,-1,496,498,499,-1,499,497,496,-1,500,501,499,-1,499,498,500,-1,113,112,499,-1,499,501,113,-1,111,497,499,-1,499,112,111,-1,500,502,503,-1,503,501,500,-1,487,490,503,-1,503,502,487,-1,105,108,503,-1,503,490,105,-1,113,501,503,-1,503,108,113,-1,120,504,505,-1,505,121,120,-1,358,355,505,-1,505,504,358,-1,354,506,505,-1,505,355,354,-1,122,121,505,-1,505,506,122,-1,127,507,508,-1,508,128,127,-1,362,360,508,-1,508,507,362,-1,358,504,508,-1,508,360,358,-1,120,128,508,-1,508,504,120,-1,133,509,510,-1,510,134,133,-1,367,365,510,-1,510,509,367,-1,362,507,510,-1,510,365,362,-1,127,134,510,-1,510,507,127,-1,122,506,511,-1,511,137,122,-1,354,369,511,-1,511,506,354,-1,367,509,511,-1,511,369,367,-1,133,137,511,-1,511,509,133,-1,144,512,513,-1,513,196,144,-1,375,372,513,-1,513,512,375,-1,371,514,513,-1,513,372,371,-1,197,196,513,-1,513,514,197,-1,202,515,516,-1,516,203,202,-1,379,377,516,-1,516,515,379,-1,375,512,516,-1,516,377,375,-1,144,203,516,-1,516,512,144,-1,208,517,518,-1,518,209,208,-1,383,381,518,-1,518,517,383,-1,379,515,518,-1,518,381,379,-1,202,209,518,-1,518,515,202,-1,197,514,519,-1,519,212,197,-1,371,385,519,-1,519,514,371,-1,383,517,519,-1,519,385,383,-1,208,212,519,-1,519,517,208,-1,218,520,521,-1,521,219,218,-1,391,388,521,-1,521,520,391,-1,387,522,521,-1,521,388,387,-1,220,219,521,-1,521,522,220,-1,225,523,524,-1,524,226,225,-1,395,393,524,-1,524,523,395,-1,391,520,524,-1,524,393,391,-1,218,226,524,-1,524,520,218,-1,230,525,526,-1,526,231,230,-1,399,397,526,-1,526,525,399,-1,395,523,526,-1,526,397,395,-1,225,231,526,-1,526,523,225,-1,220,522,527,-1,527,233,220,-1,387,401,527,-1,527,522,387,-1,399,525,527,-1,527,401,399,-1,230,233,527,-1,527,525,230,-1,239,528,529,-1,529,240,239,-1,407,404,529,-1,529,528,407,-1,403,530,529,-1,529,404,403,-1,241,240,529,-1,529,530,241,-1,246,531,532,-1,532,247,246,-1,411,409,532,-1,532,531,411,-1,407,528,532,-1,532,409,407,-1,239,247,532,-1,532,528,239,-1,251,533,534,-1,534,252,251,-1,415,413,534,-1,534,533,415,-1,411,531,534,-1,534,413,411,-1,246,252,534,-1,534,531,246,-1,241,530,535,-1,535,254,241,-1,403,417,535,-1,535,530,403,-1,415,533,535,-1,535,417,415,-1,251,254,535,-1,535,533,251,-1,260,536,537,-1,537,261,260,-1,459,420,537,-1,537,536,459,-1,419,538,537,-1,537,420,419,-1,264,261,537,-1,537,538,264,-1,269,539,540,-1,540,270,269,-1,463,461,540,-1,540,539,463,-1,459,536,540,-1,540,461,459,-1,260,270,540,-1,540,536,260,-1,274,541,542,-1,542,275,274,-1,467,465,542,-1,542,541,467,-1,463,539,542,-1,542,465,463,-1,269,275,542,-1,542,539,269,-1,264,538,543,-1,543,277,264,-1,419,469,543,-1,543,538,419,-1,467,541,543,-1,543,469,467,-1,274,277,543,-1,543,541,274,-1,283,544,545,-1,545,284,283,-1,475,472,545,-1,545,544,475,-1,471,546,545,-1,545,472,471,-1,285,284,545,-1,545,546,285,-1,290,547,548,-1,548,291,290,-1,479,477,548,-1,548,547,479,-1,475,544,548,-1,548,477,475,-1,283,291,548,-1,548,544,283,-1,332,598,600,-1,600,333,332,-1,483,481,600,-1,600,598,483,-1,479,547,600,-1,600,481,479,-1,290,333,600,-1,600,547,290,-1,285,546,602,-1,602,335,285,-1,471,485,602,-1,602,546,471,-1,483,598,602,-1,602,485,483,-1,332,335,602,-1,602,598,332,-1,340,604,606,-1,606,341,340,-1,491,488,606,-1,606,604,491,-1,487,609,606,-1,606,488,487,-1,342,341,606,-1,606,609,342,-1,345,616,642,-1,642,346,345,-1,496,494,642,-1,642,616,496,-1,491,604,642,-1,642,494,491,-1,340,346,642,-1,642,604,340,-1,350,643,644,-1,644,351,350,-1,500,498,644,-1,644,643,500,-1,496,616,644,-1,644,498,496,-1,345,351,644,-1,644,616,345,-1,342,609,645,-1,645,353,342,-1,487,502,645,-1,645,609,487,-1,500,643,645,-1,645,502,500,-1,350,353,645,-1,645,643,350,-1,448,451,452,-1,452,449,448,-1,453,454,452,-1,452,451,453,-1,455,456,452,-1,452,454,455,-1,450,449,452,-1,452,456,450,-1,492,549,550,-1,550,551,492,-1,552,553,550,-1,550,549,552,-1,554,555,550,-1,550,553,554,-1,556,551,550,-1,550,555,556,-1,557,558,559,-1,559,560,557,-1,561,562,559,-1,559,558,561,-1,563,564,559,-1,559,562,563,-1,565,560,559,-1,559,564,565,-1,552,566,567,-1,567,553,552,-1,568,569,567,-1,567,566,568,-1,570,571,567,-1,567,569,570,-1,554,553,567,-1,567,571,554,-1,561,572,573,-1,573,562,561,-1,574,575,573,-1,573,572,574,-1,576,577,573,-1,573,575,576,-1,563,562,573,-1,573,577,563,-1,568,578,579,-1,579,569,568,-1,580,581,579,-1,579,578,580,-1,582,583,579,-1,579,581,582,-1,570,569,579,-1,579,583,570,-1,574,584,585,-1,585,575,574,-1,586,587,585,-1,585,584,586,-1,588,589,585,-1,585,587,588,-1,576,575,585,-1,585,589,576,-1,580,590,591,-1,591,581,580,-1,592,593,591,-1,591,590,592,-1,594,595,591,-1,591,593,594,-1,582,581,591,-1,591,595,582,-1,586,596,597,-1,597,587,586,-1,599,601,597,-1,597,596,599,-1,603,605,597,-1,597,601,603,-1,588,587,597,-1,597,605,588,-1,592,607,608,-1,608,593,592,-1,610,611,608,-1,608,607,610,-1,612,613,608,-1,608,611,612,-1,594,593,608,-1,608,613,594,-1,599,614,615,-1,615,601,599,-1,617,618,615,-1,615,614,617,-1,619,620,615,-1,615,618,619,-1,603,601,615,-1,615,620,603,-1,610,621,622,-1,622,611,610,-1,623,624,622,-1,622,621,623,-1,625,626,622,-1,622,624,625,-1,612,611,622,-1,622,626,612,-1,617,627,628,-1,628,618,617,-1,629,630,628,-1,628,627,629,-1,631,632,628,-1,628,630,631,-1,619,618,628,-1,628,632,619,-1,623,633,634,-1,634,624,623,-1,177,176,634,-1,634,633,177,-1,175,635,634,-1,634,176,175,-1,625,624,634,-1,634,635,625,-1,629,636,637,-1,637,630,629,-1,183,182,637,-1,637,636,183,-1,181,638,637,-1,637,182,181,-1,631,630,637,-1,637,638,631,-1,557,639,640,-1,640,558,557,-1,641,707,640,-1,640,639,641,-1,708,793,640,-1,640,707,708,-1,561,558,640,-1,640,793,561,-1,561,793,822,-1,822,572,561,-1,708,823,822,-1,822,793,708,-1,824,825,822,-1,822,823,824,-1,574,572,822,-1,822,825,574,-1,574,825,826,-1,826,584,574,-1,824,827,826,-1,826,825,824,-1,828,829,826,-1,826,827,828,-1,586,584,826,-1,826,829,586,-1,586,829,830,-1,830,596,586,-1,828,831,830,-1,830,829,828,-1,832,833,830,-1,830,831,832,-1,599,596,830,-1,830,833,599,-1,599,833,834,-1,834,614,599,-1,832,835,834,-1,834,833,832,-1,836,837,834,-1,834,835,836,-1,617,614,834,-1,834,837,617,-1,617,837,838,-1,838,627,617,-1,836,839,838,-1,838,837,836,-1,840,841,838,-1,838,839,840,-1,629,627,838,-1,838,841,629,-1,629,841,842,-1,842,636,629,-1,840,843,842,-1,842,841,840,-1,306,305,842,-1,842,843,306,-1,183,636,842,-1,842,305,183,-1,175,309,844,-1,844,635,175,-1,313,845,844,-1,844,309,313,-1,846,847,844,-1,844,845,846,-1,625,635,844,-1,844,847,625,-1,625,847,848,-1,848,626,625,-1,846,849,848,-1,848,847,846,-1,850,851,848,-1,848,849,850,-1,612,626,848,-1,848,851,612,-1,612,851,852,-1,852,613,612,-1,850,853,852,-1,852,851,850,-1,854,855,852,-1,852,853,854,-1,594,613,852,-1,852,855,594,-1,594,855,856,-1,856,595,594,-1,854,857,856,-1,856,855,854,-1,858,859,856,-1,856,857,858,-1,582,595,856,-1,856,859,582,-1,582,859,860,-1,860,583,582,-1,858,861,860,-1,860,859,858,-1,862,863,860,-1,860,861,862,-1,570,583,860,-1,860,863,570,-1,570,863,864,-1,864,571,570,-1,862,865,864,-1,864,863,862,-1,866,867,864,-1,864,865,866,-1,554,571,864,-1,864,867,554,-1,554,867,868,-1,868,555,554,-1,866,869,868,-1,868,867,866,-1,871,872,868,-1,868,869,871,-1,556,555,868,-1,868,872,556,-1,563,874,875,-1,875,564,563,-1,432,877,875,-1,875,874,432,-1,565,564,875,-1,875,877,565,-1,576,878,880,-1,880,577,576,-1,432,874,880,-1,880,878,432,-1,563,577,880,-1,880,874,563,-1,588,881,883,-1,883,589,588,-1,432,878,883,-1,883,881,432,-1,576,589,883,-1,883,878,576,-1,603,884,885,-1,885,605,603,-1,432,881,885,-1,885,884,432,-1,588,605,885,-1,885,881,588,-1,619,887,888,-1,888,620,619,-1,432,884,888,-1,888,887,432,-1,603,620,888,-1,888,884,603,-1,631,889,890,-1,890,632,631,-1,432,887,890,-1,890,889,432,-1,619,632,890,-1,890,887,619,-1,181,444,891,-1,891,638,181,-1,432,889,891,-1,891,444,432,-1,631,638,891,-1,891,889,631,-1,646,647,648,-1,648,649,646,-1,650,651,648,-1,648,647,650,-1,652,653,648,-1,648,651,652,-1,654,649,648,-1,648,653,654,-1,655,656,657,-1,657,658,655,-1,659,660,657,-1,657,656,659,-1,661,662,657,-1,657,660,661,-1,663,658,657,-1,657,662,663,-1,664,665,666,-1,666,667,664,-1,668,669,666,-1,666,665,668,-1,670,671,666,-1,666,669,670,-1,672,667,666,-1,666,671,672,-1,673,674,675,-1,675,676,673,-1,677,678,675,-1,675,674,677,-1,679,680,675,-1,675,678,679,-1,681,676,675,-1,675,680,681,-1,682,683,684,-1,684,685,682,-1,686,687,684,-1,684,683,686,-1,688,689,684,-1,684,687,688,-1,690,685,684,-1,684,689,690,-1,691,692,693,-1,693,694,691,-1,695,696,693,-1,693,692,695,-1,697,698,693,-1,693,696,697,-1,699,694,693,-1,693,698,699,-1,700,701,702,-1,702,703,700,-1,704,705,702,-1,702,701,704,-1,706,709,702,-1,702,705,706,-1,710,703,702,-1,702,709,710,-1,711,712,713,-1,713,714,711,-1,715,716,713,-1,713,712,715,-1,717,718,713,-1,713,716,717,-1,719,714,713,-1,713,718,719,-1,719,718,720,-1,720,721,719,-1,717,722,720,-1,720,718,717,-1,723,724,720,-1,720,722,723,-1,725,721,720,-1,720,724,725,-1,725,724,726,-1,726,727,725,-1,723,728,726,-1,726,724,723,-1,729,730,726,-1,726,728,729,-1,731,727,726,-1,726,730,731,-1,731,730,732,-1,732,733,731,-1,729,734,732,-1,732,730,729,-1,715,712,732,-1,732,734,715,-1,711,733,732,-1,732,712,711,-1,735,736,737,-1,737,738,735,-1,739,740,737,-1,737,736,739,-1,741,742,737,-1,737,740,741,-1,142,738,737,-1,737,742,142,-1,142,742,743,-1,743,198,142,-1,741,744,743,-1,743,742,741,-1,745,746,743,-1,743,744,745,-1,200,198,743,-1,743,746,200,-1,200,746,747,-1,747,748,200,-1,745,749,747,-1,747,746,745,-1,750,751,747,-1,747,749,750,-1,752,748,747,-1,747,751,752,-1,752,751,753,-1,753,754,752,-1,750,755,753,-1,753,751,750,-1,739,736,753,-1,753,755,739,-1,735,754,753,-1,753,736,735,-1,752,756,757,-1,757,758,752,-1,759,760,757,-1,757,756,759,-1,761,762,757,-1,757,760,761,-1,763,758,757,-1,757,762,763,-1,763,762,764,-1,764,765,763,-1,761,766,764,-1,764,762,761,-1,767,768,764,-1,764,766,767,-1,769,765,764,-1,764,768,769,-1,769,768,770,-1,770,771,769,-1,767,772,770,-1,770,768,767,-1,773,774,770,-1,770,772,773,-1,735,771,770,-1,770,774,735,-1,735,774,775,-1,775,754,735,-1,773,776,775,-1,775,774,773,-1,759,756,775,-1,775,776,759,-1,752,754,775,-1,775,756,752,-1,763,777,778,-1,778,779,763,-1,780,781,778,-1,778,777,780,-1,782,783,778,-1,778,781,782,-1,784,779,778,-1,778,783,784,-1,784,783,785,-1,785,786,784,-1,782,787,785,-1,785,783,782,-1,788,789,785,-1,785,787,788,-1,790,786,785,-1,785,789,790,-1,790,789,791,-1,791,792,790,-1,788,794,791,-1,791,789,788,-1,795,796,791,-1,791,794,795,-1,769,792,791,-1,791,796,769,-1,769,796,797,-1,797,765,769,-1,795,798,797,-1,797,796,795,-1,780,777,797,-1,797,798,780,-1,763,765,797,-1,797,777,763,-1,784,799,800,-1,800,801,784,-1,802,803,800,-1,800,799,802,-1,804,805,800,-1,800,803,804,-1,806,801,800,-1,800,805,806,-1,806,805,807,-1,807,808,806,-1,804,809,807,-1,807,805,804,-1,810,811,807,-1,807,809,810,-1,812,808,807,-1,807,811,812,-1,812,811,813,-1,813,814,812,-1,810,815,813,-1,813,811,810,-1,816,817,813,-1,813,815,816,-1,790,814,813,-1,813,817,790,-1,790,817,818,-1,818,786,790,-1,816,819,818,-1,818,817,816,-1,802,799,818,-1,818,819,802,-1,784,786,818,-1,818,799,784,-1,806,820,821,-1,821,870,806,-1,873,876,821,-1,821,820,873,-1,879,882,821,-1,821,876,879,-1,886,870,821,-1,821,882,886,-1,886,882,900,-1,900,901,886,-1,879,902,900,-1,900,882,879,-1,903,904,900,-1,900,902,903,-1,905,901,900,-1,900,904,905,-1,905,904,906,-1,906,907,905,-1,903,908,906,-1,906,904,903,-1,909,910,906,-1,906,908,909,-1,812,907,906,-1,906,910,812,-1,812,910,911,-1,911,808,812,-1,909,912,911,-1,911,910,909,-1,873,820,911,-1,911,912,873,-1,806,808,911,-1,911,820,806,-1,886,913,914,-1,914,915,886,-1,916,917,914,-1,914,913,916,-1,918,919,914,-1,914,917,918,-1,725,915,914,-1,914,919,725,-1,725,919,920,-1,920,721,725,-1,918,921,920,-1,920,919,918,-1,922,923,920,-1,920,921,922,-1,719,721,920,-1,920,923,719,-1,719,923,924,-1,924,925,719,-1,922,926,924,-1,924,923,922,-1,927,928,924,-1,924,926,927,-1,905,925,924,-1,924,928,905,-1,905,928,929,-1,929,901,905,-1,927,930,929,-1,929,928,927,-1,916,913,929,-1,929,930,916,-1,886,901,929,-1,929,913,886,-1,432,446,892,-1,892,877,432,-1,450,893,892,-1,892,446,450,-1,894,895,892,-1,892,893,894,-1,565,877,892,-1,892,895,565,-1,931,932,933,-1,933,934,931,-1,646,649,933,-1,933,932,646,-1,654,935,933,-1,933,649,654,-1,936,934,933,-1,933,935,936,-1,936,935,937,-1,937,938,936,-1,654,653,937,-1,937,935,654,-1,652,939,937,-1,937,653,652,-1,940,938,937,-1,937,939,940,-1,940,939,941,-1,941,942,940,-1,652,651,941,-1,941,939,652,-1,650,943,941,-1,941,651,650,-1,944,942,941,-1,941,943,944,-1,944,943,945,-1,945,946,944,-1,650,647,945,-1,945,943,650,-1,646,932,945,-1,945,647,646,-1,931,946,945,-1,945,932,931,-1,947,948,949,-1,949,950,947,-1,655,658,949,-1,949,948,655,-1,663,951,949,-1,949,658,663,-1,952,950,949,-1,949,951,952,-1,952,951,953,-1,953,954,952,-1,663,662,953,-1,953,951,663,-1,661,955,953,-1,953,662,661,-1,956,954,953,-1,953,955,956,-1,956,955,957,-1,957,958,956,-1,661,660,957,-1,957,955,661,-1,659,959,957,-1,957,660,659,-1,960,958,957,-1,957,959,960,-1,960,959,961,-1,961,962,960,-1,659,656,961,-1,961,959,659,-1,655,948,961,-1,961,656,655,-1,947,962,961,-1,961,948,947,-1,963,964,965,-1,965,966,963,-1,664,667,965,-1,965,964,664,-1,672,967,965,-1,965,667,672,-1,968,966,965,-1,965,967,968,-1,968,967,969,-1,969,970,968,-1,672,671,969,-1,969,967,672,-1,670,971,969,-1,969,671,670,-1,972,970,969,-1,969,971,972,-1,972,971,973,-1,973,974,972,-1,670,669,973,-1,973,971,670,-1,668,975,973,-1,973,669,668,-1,976,974,973,-1,973,975,976,-1,976,975,977,-1,977,978,976,-1,668,665,977,-1,977,975,668,-1,664,964,977,-1,977,665,664,-1,963,978,977,-1,977,964,963,-1,979,980,981,-1,981,982,979,-1,673,676,981,-1,981,980,673,-1,681,983,981,-1,981,676,681,-1,984,982,981,-1,981,983,984,-1,984,983,985,-1,985,986,984,-1,681,680,985,-1,985,983,681,-1,679,987,985,-1,985,680,679,-1,988,986,985,-1,985,987,988,-1,988,987,989,-1,989,990,988,-1,679,678,989,-1,989,987,679,-1,677,991,989,-1,989,678,677,-1,992,990,989,-1,989,991,992,-1,992,991,993,-1,993,994,992,-1,677,674,993,-1,993,991,677,-1,673,980,993,-1,993,674,673,-1,979,994,993,-1,993,980,979,-1,995,996,997,-1,997,998,995,-1,682,685,997,-1,997,996,682,-1,690,999,997,-1,997,685,690,-1,1000,998,997,-1,997,999,1000,-1,1000,999,1001,-1,1001,1002,1000,-1,690,689,1001,-1,1001,999,690,-1,688,1003,1001,-1,1001,689,688,-1,1004,1002,1001,-1,1001,1003,1004,-1,1004,1003,1005,-1,1005,1006,1004,-1,688,687,1005,-1,1005,1003,688,-1,686,1007,1005,-1,1005,687,686,-1,1008,1006,1005,-1,1005,1007,1008,-1,1008,1007,1009,-1,1009,1010,1008,-1,686,683,1009,-1,1009,1007,686,-1,682,996,1009,-1,1009,683,682,-1,995,1010,1009,-1,1009,996,995,-1,1011,1012,1013,-1,1013,1014,1011,-1,691,694,1013,-1,1013,1012,691,-1,699,1015,1013,-1,1013,694,699,-1,1016,1014,1013,-1,1013,1015,1016,-1,1016,1015,1017,-1,1017,1018,1016,-1,699,698,1017,-1,1017,1015,699,-1,697,1019,1017,-1,1017,698,697,-1,1020,1018,1017,-1,1017,1019,1020,-1,1020,1019,1021,-1,1021,1022,1020,-1,697,696,1021,-1,1021,1019,697,-1,695,1023,1021,-1,1021,696,695,-1,1024,1022,1021,-1,1021,1023,1024,-1,1024,1023,1025,-1,1025,1026,1024,-1,695,692,1025,-1,1025,1023,695,-1,691,1012,1025,-1,1025,692,691,-1,1011,1026,1025,-1,1025,1012,1011,-1,1027,1028,1029,-1,1029,1030,1027,-1,700,703,1029,-1,1029,1028,700,-1,710,1031,1029,-1,1029,703,710,-1,1032,1030,1029,-1,1029,1031,1032,-1,1032,1031,1033,-1,1033,1034,1032,-1,710,709,1033,-1,1033,1031,710,-1,706,1035,1033,-1,1033,709,706,-1,1036,1034,1033,-1,1033,1035,1036,-1,1036,1035,1037,-1,1037,1038,1036,-1,706,705,1037,-1,1037,1035,706,-1,704,1039,1037,-1,1037,705,704,-1,1040,1038,1037,-1,1037,1039,1040,-1,1040,1039,1041,-1,1041,1042,1040,-1,704,701,1041,-1,1041,1039,704,-1,700,1028,1041,-1,1041,701,700,-1,1027,1042,1041,-1,1041,1028,1027,-1,717,716,1043,-1,1043,1044,717,-1,715,1045,1043,-1,1043,716,715,-1,931,934,1043,-1,1043,1045,931,-1,936,1044,1043,-1,1043,934,936,-1,723,722,1046,-1,1046,1047,723,-1,717,1044,1046,-1,1046,722,717,-1,936,938,1046,-1,1046,1044,936,-1,940,1047,1046,-1,1046,938,940,-1,729,728,1048,-1,1048,1049,729,-1,723,1047,1048,-1,1048,728,723,-1,940,942,1048,-1,1048,1047,940,-1,944,1049,1048,-1,1048,942,944,-1,715,734,1050,-1,1050,1045,715,-1,729,1049,1050,-1,1050,734,729,-1,944,946,1050,-1,1050,1049,944,-1,931,1045,1050,-1,1050,946,931,-1,741,740,1051,-1,1051,1052,741,-1,739,1053,1051,-1,1051,740,739,-1,947,950,1051,-1,1051,1053,947,-1,952,1052,1051,-1,1051,950,952,-1,745,744,1054,-1,1054,1055,745,-1,741,1052,1054,-1,1054,744,741,-1,952,954,1054,-1,1054,1052,952,-1,956,1055,1054,-1,1054,954,956,-1,750,749,1056,-1,1056,1057,750,-1,745,1055,1056,-1,1056,749,745,-1,956,958,1056,-1,1056,1055,956,-1,960,1057,1056,-1,1056,958,960,-1,739,755,1058,-1,1058,1053,739,-1,750,1057,1058,-1,1058,755,750,-1,960,962,1058,-1,1058,1057,960,-1,947,1053,1058,-1,1058,962,947,-1,761,760,1059,-1,1059,1060,761,-1,759,1061,1059,-1,1059,760,759,-1,963,966,1059,-1,1059,1061,963,-1,968,1060,1059,-1,1059,966,968,-1,767,766,1062,-1,1062,1063,767,-1,761,1060,1062,-1,1062,766,761,-1,968,970,1062,-1,1062,1060,968,-1,972,1063,1062,-1,1062,970,972,-1,773,772,1064,-1,1064,1065,773,-1,767,1063,1064,-1,1064,772,767,-1,972,974,1064,-1,1064,1063,972,-1,976,1065,1064,-1,1064,974,976,-1,759,776,1066,-1,1066,1061,759,-1,773,1065,1066,-1,1066,776,773,-1,976,978,1066,-1,1066,1065,976,-1,963,1061,1066,-1,1066,978,963,-1,782,781,1067,-1,1067,1068,782,-1,780,1069,1067,-1,1067,781,780,-1,979,982,1067,-1,1067,1069,979,-1,984,1068,1067,-1,1067,982,984,-1,788,787,1070,-1,1070,1071,788,-1,782,1068,1070,-1,1070,787,782,-1,984,986,1070,-1,1070,1068,984,-1,988,1071,1070,-1,1070,986,988,-1,795,794,1072,-1,1072,1073,795,-1,788,1071,1072,-1,1072,794,788,-1,988,990,1072,-1,1072,1071,988,-1,992,1073,1072,-1,1072,990,992,-1,780,798,1074,-1,1074,1069,780,-1,795,1073,1074,-1,1074,798,795,-1,992,994,1074,-1,1074,1073,992,-1,979,1069,1074,-1,1074,994,979,-1,804,803,1075,-1,1075,1076,804,-1,802,1077,1075,-1,1075,803,802,-1,995,998,1075,-1,1075,1077,995,-1,1000,1076,1075,-1,1075,998,1000,-1,810,809,1078,-1,1078,1079,810,-1,804,1076,1078,-1,1078,809,804,-1,1000,1002,1078,-1,1078,1076,1000,-1,1004,1079,1078,-1,1078,1002,1004,-1,816,815,1080,-1,1080,1081,816,-1,810,1079,1080,-1,1080,815,810,-1,1004,1006,1080,-1,1080,1079,1004,-1,1008,1081,1080,-1,1080,1006,1008,-1,802,819,1082,-1,1082,1077,802,-1,816,1081,1082,-1,1082,819,816,-1,1008,1010,1082,-1,1082,1081,1008,-1,995,1077,1082,-1,1082,1010,995,-1,879,876,1083,-1,1083,1084,879,-1,873,1085,1083,-1,1083,876,873,-1,1011,1014,1083,-1,1083,1085,1011,-1,1016,1084,1083,-1,1083,1014,1016,-1,903,902,1086,-1,1086,1087,903,-1,879,1084,1086,-1,1086,902,879,-1,1016,1018,1086,-1,1086,1084,1016,-1,1020,1087,1086,-1,1086,1018,1020,-1,909,908,1088,-1,1088,1089,909,-1,903,1087,1088,-1,1088,908,903,-1,1020,1022,1088,-1,1088,1087,1020,-1,1024,1089,1088,-1,1088,1022,1024,-1,873,912,1090,-1,1090,1085,873,-1,909,1089,1090,-1,1090,912,909,-1,1024,1026,1090,-1,1090,1089,1024,-1,1011,1085,1090,-1,1090,1026,1011,-1,918,917,1091,-1,1091,1092,918,-1,916,1093,1091,-1,1091,917,916,-1,1027,1030,1091,-1,1091,1093,1027,-1,1032,1092,1091,-1,1091,1030,1032,-1,922,921,1094,-1,1094,1095,922,-1,918,1092,1094,-1,1094,921,918,-1,1032,1034,1094,-1,1094,1092,1032,-1,1036,1095,1094,-1,1094,1034,1036,-1,927,926,1096,-1,1096,1097,927,-1,922,1095,1096,-1,1096,926,922,-1,1036,1038,1096,-1,1096,1095,1036,-1,1040,1097,1096,-1,1096,1038,1040,-1,916,930,1098,-1,1098,1093,916,-1,927,1097,1098,-1,1098,930,927,-1,1040,1042,1098,-1,1098,1097,1040,-1,1027,1093,1098,-1,1098,1042,1027,-1,894,893,896,-1,896,897,894,-1,450,456,896,-1,896,893,450,-1,455,898,896,-1,896,456,455,-1,899,897,896,-1,896,898,899,-1]);
TextureCoordinate101 := TTextureCoordinateNode.Create;
TextureCoordinate101.SetPoint([Vector2(0.8538,0.2675),Vector2(0.8565,0.2503),Vector2(0.8695,0.2562),Vector2(0.8668,0.2734),Vector2(0.8588,0.2367),Vector2(0.8717,0.2426),Vector2(0.8844,0.2483),Vector2(0.8823,0.262),Vector2(0.8795,0.2792),Vector2(0.8612,0.228),Vector2(0.861,0.2289),Vector2(0.8725,0.2388),Vector2(0.8732,0.2346),Vector2(0.8609,0.2296),Vector2(0.8708,0.2419),Vector2(0.8804,0.2515),Vector2(0.8838,0.2475),Vector2(0.8849,0.2408),Vector2(0.8946,0.2676),Vector2(0.8919,0.2848),Vector2(0.8968,0.254),Vector2(0.9087,0.2594),Vector2(0.9065,0.273),Vector2(0.9038,0.2902),Vector2(0.8949,0.2538),Vector2(0.8961,0.2462),Vector2(0.891,0.2586),Vector2(0.9,0.2623),Vector2(0.9058,0.2587),Vector2(0.907,0.2511),Vector2(0.9179,0.2782),Vector2(0.9152,0.2954),Vector2(0.9201,0.2645),Vector2(0.9312,0.2696),Vector2(0.9291,0.2832),Vector2(0.9264,0.3004),Vector2(0.9164,0.2635),Vector2(0.9176,0.2559),Vector2(0.9106,0.2675),Vector2(0.9189,0.2709),Vector2(0.9269,0.2683),Vector2(0.9281,0.2607),Vector2(0.9402,0.2883),Vector2(0.9375,0.3055),Vector2(0.9423,0.2746),Vector2(0.9521,0.2791),Vector2(0.95,0.2928),Vector2(0.9473,0.3099),Vector2(0.9377,0.2732),Vector2(0.8588,0.145),Vector2(0.8655,0.1406),Vector2(0.8654,0.1406),Vector2(0.8563,0.1466),Vector2(0.8722,0.1362),Vector2(0.8746,0.1346),Vector2(0.8723,0.1362),Vector2(0.8654,0.1407),Vector2(0.8585,0.1452),Vector2(0.9628,0.0768),Vector2(0.9627,0.07687),Vector2(0.9643,0.07584),Vector2(0.9639,0.0761),Vector2(0.9633,0.07644),Vector2(0.9646,0.07558),Vector2(0.9658,0.07486),Vector2(0.9658,0.07481),Vector2(0.9651,0.07527),Vector2(0.9636,0.07627),Vector2(0.9625,0.077),Vector2(0.961,0.07797),Vector2(0.963,0.07668),Vector2(0.9607,0.0782),Vector2(0.9591,0.07925),Vector2(0.9585,0.07964),Vector2(0.9595,0.07893),Vector2(0.9614,0.07775),Vector2(0.9566,0.08085),Vector2(0.9537,0.08276),Vector2(0.9524,0.08361),Vector2(0.9567,0.08081),Vector2(0.9502,0.08508),Vector2(0.9481,0.08642),Vector2(0.9483,0.08632),Vector2(0.9511,0.08447),Vector2(0.9546,0.0822),Vector2(0.9423,0.09027),Vector2(0.9364,0.0941),Vector2(0.939,0.2656),Vector2(0.9302,0.2764),Vector2(0.9351,0.09494),Vector2(0.9434,0.08949),Vector2(0.9299,0.09835),Vector2(0.9268,0.1004),Vector2(0.928,0.09963),Vector2(0.9339,0.09577),Vector2(0.9404,0.0915),Vector2(0.9197,0.1051),Vector2(0.9139,0.1089),Vector2(0.9127,0.1096),Vector2(0.9208,0.1043),Vector2(0.9076,0.113),Vector2(0.9047,0.1149),Vector2(0.906,0.1141),Vector2(0.9116,0.1104),Vector2(0.9178,0.1063),Vector2(0.8968,0.1201),Vector2(0.8904,0.1243),Vector2(0.8898,0.1247),Vector2(0.8985,0.119),Vector2(0.8837,0.1287),Vector2(0.8812,0.1303),Vector2(0.8831,0.1291),Vector2(0.8892,0.125),Vector2(0.8957,0.1208),Vector2(0.8485,0.1053),Vector2(0.8608,0.09748),Vector2(0.8609,0.09813),Vector2(0.8517,0.1042),Vector2(0.8729,0.08952),Vector2(0.87,0.09212),Vector2(0.8707,0.098),Vector2(0.8615,0.104),Vector2(0.8523,0.11),Vector2(0.8733,0.08954),Vector2(0.8733,0.08999),Vector2(0.8734,0.08866),Vector2(0.8703,0.09196),Vector2(0.8709,0.09783),Vector2(0.8739,0.09587),Vector2(0.8605,0.09651),Vector2(0.8607,0.09825),Vector2(0.8476,0.1047),Vector2(0.8512,0.1045),Vector2(0.8518,0.1104),Vector2(0.8613,0.1041),Vector2(0.8482,0.1055),Vector2(0.8483,0.1064),Vector2(0.8489,0.1122),Vector2(0.9565,0.03469),Vector2(0.9569,0.03447),Vector2(0.9571,0.03505),Vector2(0.9573,0.03487),Vector2(0.9576,0.03398),Vector2(0.9581,0.0344),Vector2(0.9588,0.04024),Vector2(0.9372,0.2791),Vector2(0.9473,0.2775),Vector2(0.9485,0.27),Vector2(0.9574,0.2961),Vector2(0.9547,0.3133),Vector2(0.9595,0.2824),Vector2(0.9647,0.2848),Vector2(0.9626,0.2985),Vector2(0.9599,0.3157),Vector2(0.9541,0.2806),Vector2(0.9554,0.2731),Vector2(0.9452,0.2832),Vector2(0.9475,0.2838),Vector2(0.9588,0.2828),Vector2(0.9601,0.2752),Vector2(0.9662,0.3001),Vector2(0.9635,0.3173),Vector2(0.9682,0.2864),Vector2(0.9704,0.2874),Vector2(0.9684,0.3011),Vector2(0.9657,0.3183),Vector2(0.9621,0.2842),Vector2(0.9633,0.2767),Vector2(0.9525,0.2865),Vector2(0.9522,0.286),Vector2(0.9641,0.2852),Vector2(0.9654,0.2776),Vector2(0.9695,0.3016),Vector2(0.9668,0.3188),Vector2(0.9716,0.2879),Vector2(0.9719,0.2881),Vector2(0.9698,0.3017),Vector2(0.9671,0.3189),Vector2(0.9651,0.2856),Vector2(0.9663,0.2781),Vector2(0.9553,0.2877),Vector2(0.9533,0.2865),Vector2(0.9653,0.2857),Vector2(0.9666,0.2782),Vector2(0.8735,0.2332),Vector2(0.8615,0.2278),Vector2(0.8853,0.2386),Vector2(0.8855,0.2385),Vector2(0.8737,0.2331),Vector2(0.8617,0.2279),Vector2(0.8966,0.2437),Vector2(0.9074,0.2486),Vector2(0.9077,0.2486),Vector2(0.8966,0.2436),Vector2(0.918,0.2534),Vector2(0.9286,0.2582),Vector2(0.9578,0.04088),Vector2(0.958,0.04071),Vector2(0.9601,0.03258),Vector2(0.9601,0.03303),Vector2(0.9623,0.03036),Vector2(0.962,0.03185),Vector2(0.9626,0.03775),Vector2(0.9608,0.0389),Vector2(0.9621,0.02986),Vector2(0.9621,0.03172),Vector2(0.961,0.03123),Vector2(0.9611,0.03243),Vector2(0.9617,0.03833),Vector2(0.9627,0.03763),Vector2(0.959,0.03329),Vector2(0.9591,0.03374),Vector2(0.9597,0.03961),Vector2(0.9587,0.03209),Vector2(0.9588,0.03395),Vector2(0.9602,0.03299),Vector2(0.9553,0.03494),Vector2(0.9561,0.03568),Vector2(0.9567,0.04158),Vector2(0.9593,0.03985),Vector2(0.9608,0.03889),Vector2(0.9536,0.03683),Vector2(0.9537,0.03728),Vector2(0.9511,0.03821),Vector2(0.9526,0.03799),Vector2(0.9533,0.04383),Vector2(0.9543,0.04315),Vector2(0.9538,0.03649),Vector2(0.954,0.03708),Vector2(0.9566,0.03538),Vector2(0.9572,0.04122),Vector2(0.9547,0.04291),Vector2(0.9591,0.03374),Vector2(0.9597,0.03962),Vector2(0.9498,0.03795),Vector2(0.9498,0.0398),Vector2(0.9539,0.03715),Vector2(0.9428,0.04312),Vector2(0.9448,0.04312),Vector2(0.9454,0.049),Vector2(0.9504,0.04569),Vector2(0.9545,0.04305),Vector2(0.9418,0.04459),Vector2(0.9418,0.04503),Vector2(0.9394,0.04587),Vector2(0.9419,0.04501),Vector2(0.9426,0.05085),Vector2(0.9425,0.05089),Vector2(0.9455,0.04192),Vector2(0.9457,0.04253),Vector2(0.9505,0.03936),Vector2(0.9512,0.04521),Vector2(0.9464,0.04837),Vector2(0.9537,0.03729),Vector2(0.9543,0.04317),Vector2(0.9323,0.04942),Vector2(0.9324,0.05124),Vector2(0.9404,0.04599),Vector2(0.9208,0.05759),Vector2(0.9234,0.05711),Vector2(0.9241,0.06299),Vector2(0.933,0.05713),Vector2(0.9288,0.2582),Vector2(0.9181,0.2533),Vector2(0.941,0.05188),Vector2(0.9191,0.05948),Vector2(0.9191,0.05992),Vector2(0.9174,0.06032),Vector2(0.9205,0.05901),Vector2(0.9212,0.06486),Vector2(0.9198,0.06578),Vector2(0.9285,0.05309),Vector2(0.9286,0.05372),Vector2(0.9376,0.04782),Vector2(0.9383,0.05368),Vector2(0.9293,0.05958),Vector2(0.9418,0.04505),Vector2(0.9425,0.05092),Vector2(0.9096,0.06429),Vector2(0.9097,0.06609),Vector2(0.9178,0.06084),Vector2(0.898,0.07251),Vector2(0.9009,0.07189),Vector2(0.9015,0.07775),Vector2(0.9104,0.07197),Vector2(0.9184,0.06672),Vector2(0.897,0.07396),Vector2(0.8971,0.0744),Vector2(0.8957,0.07454),Vector2(0.8988,0.07329),Vector2(0.8994,0.07915),Vector2(0.8977,0.08026),Vector2(0.9395,0.2632),Vector2(0.9491,0.2676),Vector2(0.9503,0.268),Vector2(0.9396,0.2631),Vector2(0.956,0.2707),Vector2(0.9607,0.2728),Vector2(0.9617,0.2731),Vector2(0.9562,0.2706),Vector2(0.964,0.2743),Vector2(0.966,0.2752),Vector2(0.9669,0.2755),Vector2(0.9643,0.2743),Vector2(0.967,0.2757),Vector2(0.9672,0.2758),Vector2(0.968,0.276),Vector2(0.9673,0.2757),Vector2(0.9723,0.2813),Vector2(0.9726,0.2814),Vector2(0.9712,0.2808),Vector2(0.9713,0.2778),Vector2(0.9724,0.2788),Vector2(0.9726,0.2784),Vector2(0.969,0.2798),Vector2(0.9655,0.2782),Vector2(0.9658,0.2753),Vector2(0.9691,0.2773),Vector2(0.9603,0.2758),Vector2(0.953,0.2725),Vector2(0.9536,0.2698),Vector2(0.9604,0.2733),Vector2(0.9431,0.268),Vector2(0.9321,0.263),Vector2(0.9321,0.2601),Vector2(0.9433,0.2656),Vector2(0.921,0.258),Vector2(0.9096,0.2528),Vector2(0.91,0.25),Vector2(0.9064,0.06758),Vector2(0.9065,0.06824),Vector2(0.915,0.06265),Vector2(0.9156,0.06852),Vector2(0.9071,0.0741),Vector2(0.9191,0.05993),Vector2(0.9198,0.06581),Vector2(0.8858,0.07988),Vector2(0.886,0.08166),Vector2(0.8949,0.07579),Vector2(0.8766,0.0878),Vector2(0.8773,0.09366),Vector2(0.8866,0.08753),Vector2(0.8956,0.08167),Vector2(0.8733,0.08998),Vector2(0.8759,0.08826),Vector2(0.8766,0.09412),Vector2(0.874,0.09584),Vector2(0.8843,0.08206),Vector2(0.8844,0.08273),Vector2(0.8932,0.07693),Vector2(0.8938,0.08281),Vector2(0.885,0.0886),Vector2(0.897,0.07442),Vector2(0.8977,0.0803),Vector2(0.8558,0.1414),Vector2(0.865,0.1354),Vector2(0.8655,0.1406),Vector2(0.8565,0.1465),Vector2(0.8741,0.1294),Vector2(0.8745,0.1347),Vector2(0.8773,0.1273),Vector2(0.8777,0.1326),Vector2(0.8743,0.1293),Vector2(0.8748,0.1345),Vector2(0.9212,0.2555),Vector2(0.8648,0.1355),Vector2(0.8653,0.1407),Vector2(0.8553,0.1417),Vector2(0.856,0.1469),Vector2(0.8524,0.1436),Vector2(0.8531,0.1487),Vector2(0.9616,0.07203),Vector2(0.9614,0.07218),Vector2(0.9621,0.07728),Vector2(0.9622,0.07716),Vector2(0.9623,0.07156),Vector2(0.963,0.07669),Vector2(0.9642,0.0703),Vector2(0.9648,0.0755),Vector2(0.9659,0.06921),Vector2(0.9663,0.07448),Vector2(0.966,0.06912),Vector2(0.9665,0.0744),Vector2(0.965,0.06979),Vector2(0.9655,0.07505),Vector2(0.9632,0.071),Vector2(0.9637,0.07619),Vector2(0.9641,0.07036),Vector2(0.9626,0.07134),Vector2(0.9631,0.07662),Vector2(0.9646,0.07564),Vector2(0.9601,0.07303),Vector2(0.9606,0.07827),Vector2(0.9578,0.07453),Vector2(0.9584,0.0797),Vector2(0.9568,0.07515),Vector2(0.9575,0.08026),Vector2(0.9583,0.07421),Vector2(0.959,0.07932),Vector2(0.9608,0.07255),Vector2(0.9614,0.0777),Vector2(0.9631,0.07102),Vector2(0.9637,0.07623),Vector2(0.9578,0.07453),Vector2(0.9538,0.07716),Vector2(0.9542,0.08242),Vector2(0.9582,0.07982),Vector2(0.9488,0.08042),Vector2(0.9493,0.08562),Vector2(0.946,0.08225),Vector2(0.9466,0.0874),Vector2(0.9461,0.08217),Vector2(0.9468,0.08728),Vector2(0.9499,0.07968),Vector2(0.9506,0.08481),Vector2(0.9547,0.07656),Vector2(0.9553,0.08173),Vector2(0.9577,0.07459),Vector2(0.9582,0.07983),Vector2(0.9444,0.08332),Vector2(0.9364,0.08856),Vector2(0.8978,0.2474),Vector2(0.8855,0.2418),Vector2(0.886,0.2391),Vector2(0.8981,0.245),Vector2(0.8729,0.2361),Vector2(0.8601,0.2303),Vector2(0.8608,0.2283),Vector2(0.8734,0.2338),Vector2(0.8678,0.2399),Vector2(0.8732,0.2455),Vector2(0.8624,0.2325),Vector2(0.8665,0.2349),Vector2(0.8823,0.2528),Vector2(0.8859,0.2529),Vector2(0.8966,0.2592),Vector2(0.8982,0.2585),Vector2(0.9109,0.2657),Vector2(0.91,0.2638),Vector2(0.9218,0.2707),Vector2(0.9168,0.2669),Vector2(0.9271,0.2731),Vector2(0.9199,0.2683),Vector2(0.9291,0.274),Vector2(0.9206,0.2686),Vector2(0.8607,0.2295),Vector2(0.8606,0.2296),Vector2(0.8609,0.2293),Vector2(0.8616,0.2252),Vector2(0.8614,0.2253),Vector2(0.8613,0.2253),Vector2(0.8633,0.2144),Vector2(0.8631,0.2144),Vector2(0.8655,0.2002),Vector2(0.8653,0.2001),Vector2(0.8653,0.2001),Vector2(0.863,0.2144),Vector2(0.9369,0.09379),Vector2(0.9448,0.0886),Vector2(0.9275,0.09438),Vector2(0.9281,0.09955),Vector2(0.9233,0.09714),Vector2(0.924,0.1023),Vector2(0.9247,0.0962),Vector2(0.9254,0.1013),Vector2(0.9328,0.09093),Vector2(0.9334,0.09609),Vector2(0.9417,0.08506),Vector2(0.9422,0.09028),Vector2(0.9459,0.08234),Vector2(0.9463,0.08761),Vector2(0.9217,0.09816),Vector2(0.9138,0.1034),Vector2(0.9143,0.1086),Vector2(0.9222,0.1034),Vector2(0.905,0.1091),Vector2(0.9057,0.1143),Vector2(0.9012,0.1116),Vector2(0.9019,0.1167),Vector2(0.9029,0.1105),Vector2(0.9036,0.1156),Vector2(0.9106,0.1055),Vector2(0.9112,0.1107),Vector2(0.919,0.09993),Vector2(0.9195,0.1052),Vector2(0.9231,0.09725),Vector2(0.9236,0.1025),Vector2(0.899,0.1131),Vector2(0.8901,0.1189),Vector2(0.8906,0.1241),Vector2(0.8994,0.1184),Vector2(0.8808,0.125),Vector2(0.8538,0.2675),Vector2(0.8814,0.1302),Vector2(0.8775,0.1272),Vector2(0.8782,0.1323),Vector2(0.8801,0.1255),Vector2(0.8807,0.1306),Vector2(0.8885,0.12),Vector2(0.889,0.1252),Vector2(0.8972,0.1142),Vector2(0.8977,0.1195),Vector2(0.901,0.1117),Vector2(0.9015,0.117),Vector2(0.8724,0.1138),Vector2(0.8633,0.1198),Vector2(0.8541,0.1258),Vector2(0.8726,0.1136),Vector2(0.8756,0.1117),Vector2(0.8535,0.1262),Vector2(0.8631,0.1199),Vector2(0.8507,0.128),Vector2(0.9605,0.05602),Vector2(0.9596,0.05665),Vector2(0.9598,0.05649),Vector2(0.9642,0.05358),Vector2(0.9625,0.05471),Vector2(0.9634,0.05417),Vector2(0.9644,0.05348),Vector2(0.9614,0.05542),Vector2(0.9584,0.05741),Vector2(0.961,0.0557),Vector2(0.9625,0.05473),Vector2(0.9551,0.05961),Vector2(0.9561,0.05895),Vector2(0.959,0.05701),Vector2(0.9565,0.05868),Vector2(0.9614,0.05543),Vector2(0.9471,0.06482),Vector2(0.9521,0.06153),Vector2(0.9561,0.05889),Vector2(0.9443,0.06663),Vector2(0.9442,0.06669),Vector2(0.9529,0.061),Vector2(0.9481,0.06414),Vector2(0.956,0.05898),Vector2(0.9258,0.0788),Vector2(0.9347,0.07295),Vector2(0.9427,0.0677),Vector2(0.923,0.08066),Vector2(0.9215,0.08158),Vector2(0.94,0.06948),Vector2(0.931,0.07537),Vector2(0.9442,0.06673),Vector2(0.9033,0.09355),Vector2(0.9121,0.08778),Vector2(0.9201,0.08254),Vector2(0.9012,0.09495),Vector2(0.8995,0.09606),Vector2(0.8668,0.2734),Vector2(0.8695,0.2562),Vector2(0.8565,0.2503),Vector2(0.8795,0.2792),Vector2(0.8823,0.262),Vector2(0.8844,0.2483),Vector2(0.8717,0.2426),Vector2(0.8588,0.2367),Vector2(0.8612,0.228),Vector2(0.8732,0.2346),Vector2(0.8725,0.2388),Vector2(0.861,0.2289),Vector2(0.8849,0.2408),Vector2(0.8838,0.2475),Vector2(0.8804,0.2515),Vector2(0.8708,0.2419),Vector2(0.8609,0.2296),Vector2(0.8919,0.2848),Vector2(0.8946,0.2676),Vector2(0.9038,0.2902),Vector2(0.9065,0.273),Vector2(0.9087,0.2594),Vector2(0.8968,0.254),Vector2(0.8961,0.2462),Vector2(0.8949,0.2538),Vector2(0.907,0.2511),Vector2(0.9058,0.2587),Vector2(0.9,0.2623),Vector2(0.891,0.2586),Vector2(0.9152,0.2954),Vector2(0.9179,0.2782),Vector2(0.9264,0.3004),Vector2(0.9291,0.2832),Vector2(0.9312,0.2696),Vector2(0.9201,0.2645),Vector2(0.9176,0.2559),Vector2(0.9164,0.2635),Vector2(0.9281,0.2607),Vector2(0.9269,0.2683),Vector2(0.9189,0.2709),Vector2(0.9106,0.2675),Vector2(0.9375,0.3055),Vector2(0.9402,0.2883),Vector2(0.9473,0.3099),Vector2(0.95,0.2928),Vector2(0.9521,0.2791),Vector2(0.9423,0.2746),Vector2(0.939,0.2656),Vector2(0.9377,0.2732),Vector2(0.9174,0.08433),Vector2(0.9485,0.27),Vector2(0.9089,0.0899),Vector2(0.9473,0.2775),Vector2(0.9215,0.08163),Vector2(0.9372,0.2791),Vector2(0.879,0.1095),Vector2(0.9302,0.2764),Vector2(0.8884,0.1033),Vector2(0.9547,0.3133),Vector2(0.9574,0.2961),Vector2(0.8973,0.09749),Vector2(0.9599,0.3157),Vector2(0.9626,0.2985),Vector2(0.9647,0.2848),Vector2(0.9595,0.2824),Vector2(0.9554,0.2731),Vector2(0.9541,0.2806),Vector2(0.8783,0.1099),Vector2(0.9601,0.2752),Vector2(0.9588,0.2828),Vector2(0.9475,0.2838),Vector2(0.9452,0.2832),Vector2(0.9635,0.3173),Vector2(0.9662,0.3001),Vector2(0.9657,0.3183),Vector2(0.9684,0.3011),Vector2(0.9704,0.2874),Vector2(0.9682,0.2864),Vector2(0.9633,0.2767),Vector2(0.9621,0.2842),Vector2(0.9654,0.2776),Vector2(0.9641,0.2852),Vector2(0.9522,0.286),Vector2(0.9525,0.2865),Vector2(0.9668,0.3188),Vector2(0.9695,0.3016),Vector2(0.9716,0.2879),Vector2(0.9663,0.2781),Vector2(0.9651,0.2856),Vector2(0.9553,0.2877),Vector2(0.8615,0.2278),Vector2(0.8735,0.2332),Vector2(0.8617,0.2279),Vector2(0.8757,0.1116),Vector2(0.8956,0.09862),Vector2(0.8867,0.1044),Vector2(0.8994,0.09611),Vector2(0.8588,0.145),Vector2(0.8563,0.1466),Vector2(0.8654,0.1406),Vector2(0.8655,0.1406),Vector2(0.8585,0.1452),Vector2(0.8654,0.1407),Vector2(0.8723,0.1362),Vector2(0.8746,0.1346),Vector2(0.8722,0.1362),Vector2(0.9628,0.0768),Vector2(0.9639,0.0761),Vector2(0.9643,0.07584),Vector2(0.9627,0.07687),Vector2(0.9651,0.07527),Vector2(0.9658,0.07481),Vector2(0.9658,0.07486),Vector2(0.9646,0.07558),Vector2(0.9633,0.07644),Vector2(0.9636,0.07627),Vector2(0.963,0.07668),Vector2(0.961,0.07797),Vector2(0.9625,0.077),Vector2(0.9614,0.07775),Vector2(0.9595,0.07893),Vector2(0.9585,0.07964),Vector2(0.9591,0.07925),Vector2(0.9607,0.0782),Vector2(0.9566,0.08085),Vector2(0.9567,0.08081),Vector2(0.9524,0.08361),Vector2(0.9537,0.08276),Vector2(0.9546,0.0822),Vector2(0.9511,0.08447),Vector2(0.9483,0.08632),Vector2(0.9481,0.08642),Vector2(0.9502,0.08508),Vector2(0.9423,0.09027),Vector2(0.9434,0.08949),Vector2(0.9351,0.09494),Vector2(0.9364,0.0941),Vector2(0.9404,0.0915),Vector2(0.9339,0.09577),Vector2(0.928,0.09963),Vector2(0.9268,0.1004),Vector2(0.9299,0.09835),Vector2(0.9197,0.1051),Vector2(0.9208,0.1043),Vector2(0.9127,0.1096),Vector2(0.9139,0.1089),Vector2(0.9178,0.1063),Vector2(0.9116,0.1104),Vector2(0.906,0.1141),Vector2(0.9047,0.1149),Vector2(0.9076,0.113),Vector2(0.8968,0.1201),Vector2(0.8985,0.119),Vector2(0.8898,0.1247),Vector2(0.8904,0.1243),Vector2(0.8957,0.1208),Vector2(0.8892,0.125),Vector2(0.8831,0.1291),Vector2(0.8737,0.2331),Vector2(0.8855,0.2385),Vector2(0.8812,0.1303),Vector2(0.8837,0.1287),Vector2(0.8485,0.1053),Vector2(0.8517,0.1042),Vector2(0.8609,0.09813),Vector2(0.8608,0.09748),Vector2(0.8523,0.11),Vector2(0.8615,0.104),Vector2(0.8707,0.098),Vector2(0.87,0.09212),Vector2(0.8729,0.08952),Vector2(0.8733,0.08999),Vector2(0.8733,0.08954),Vector2(0.8739,0.09587),Vector2(0.8709,0.09783),Vector2(0.8703,0.09196),Vector2(0.8734,0.08866),Vector2(0.8607,0.09825),Vector2(0.8605,0.09651),Vector2(0.8613,0.1041),Vector2(0.8518,0.1104),Vector2(0.8512,0.1045),Vector2(0.8476,0.1047),Vector2(0.8483,0.1064),Vector2(0.8482,0.1055),Vector2(0.8489,0.1122),Vector2(0.9565,0.03469),Vector2(0.9573,0.03487),Vector2(0.9571,0.03505),Vector2(0.9569,0.03447),Vector2(0.958,0.04071),Vector2(0.9578,0.04088),Vector2(0.9588,0.04024),Vector2(0.9581,0.0344),Vector2(0.9601,0.03303),Vector2(0.9608,0.0389),Vector2(0.9626,0.03775),Vector2(0.962,0.03185),Vector2(0.9621,0.03172),Vector2(0.9621,0.02986),Vector2(0.9627,0.03763),Vector2(0.9617,0.03833),Vector2(0.9611,0.03243),Vector2(0.961,0.03123),Vector2(0.9591,0.03374),Vector2(0.959,0.03329),Vector2(0.9597,0.03961),Vector2(0.9602,0.03299),Vector2(0.9588,0.03395),Vector2(0.9587,0.03209),Vector2(0.9608,0.03889),Vector2(0.9593,0.03985),Vector2(0.9567,0.04158),Vector2(0.9561,0.03568),Vector2(0.9553,0.03494),Vector2(0.9537,0.03728),Vector2(0.9536,0.03683),Vector2(0.9543,0.04315),Vector2(0.9533,0.04383),Vector2(0.9526,0.03799),Vector2(0.9511,0.03821),Vector2(0.954,0.03708),Vector2(0.9538,0.03649),Vector2(0.9547,0.04291),Vector2(0.9572,0.04122),Vector2(0.9566,0.03538),Vector2(0.9591,0.03374),Vector2(0.9597,0.03962),Vector2(0.9539,0.03715),Vector2(0.9498,0.0398),Vector2(0.9498,0.03795),Vector2(0.9545,0.04305),Vector2(0.9504,0.04569),Vector2(0.9454,0.049),Vector2(0.9448,0.04312),Vector2(0.9428,0.04312),Vector2(0.9418,0.04503),Vector2(0.9418,0.04459),Vector2(0.9425,0.05089),Vector2(0.9426,0.05085),Vector2(0.9419,0.04501),Vector2(0.9394,0.04587),Vector2(0.9457,0.04253),Vector2(0.9455,0.04192),Vector2(0.8853,0.2386),Vector2(0.9464,0.04837),Vector2(0.9512,0.04521),Vector2(0.9505,0.03936),Vector2(0.9537,0.03729),Vector2(0.9543,0.04317),Vector2(0.9404,0.04599),Vector2(0.9324,0.05124),Vector2(0.9323,0.04942),Vector2(0.941,0.05188),Vector2(0.933,0.05713),Vector2(0.9241,0.06299),Vector2(0.9234,0.05711),Vector2(0.9208,0.05759),Vector2(0.9191,0.05992),Vector2(0.9191,0.05948),Vector2(0.9198,0.06578),Vector2(0.9212,0.06486),Vector2(0.9205,0.05901),Vector2(0.9174,0.06032),Vector2(0.9286,0.05372),Vector2(0.9285,0.05309),Vector2(0.9293,0.05958),Vector2(0.9383,0.05368),Vector2(0.9376,0.04782),Vector2(0.9418,0.04505),Vector2(0.9425,0.05092),Vector2(0.9178,0.06084),Vector2(0.9097,0.06609),Vector2(0.8966,0.2437),Vector2(0.8966,0.2436),Vector2(0.9077,0.2486),Vector2(0.9074,0.2486),Vector2(0.918,0.2534),Vector2(0.9181,0.2533),Vector2(0.9288,0.2582),Vector2(0.9286,0.2582),Vector2(0.9395,0.2632),Vector2(0.9396,0.2631),Vector2(0.9503,0.268),Vector2(0.9491,0.2676),Vector2(0.956,0.2707),Vector2(0.9562,0.2706),Vector2(0.9617,0.2731),Vector2(0.9607,0.2728),Vector2(0.964,0.2743),Vector2(0.9643,0.2743),Vector2(0.9669,0.2755),Vector2(0.966,0.2752),Vector2(0.967,0.2757),Vector2(0.9673,0.2757),Vector2(0.9723,0.2813),Vector2(0.9724,0.2788),Vector2(0.9713,0.2778),Vector2(0.9712,0.2808),Vector2(0.969,0.2798),Vector2(0.9691,0.2773),Vector2(0.9658,0.2753),Vector2(0.9655,0.2782),Vector2(0.9603,0.2758),Vector2(0.9604,0.2733),Vector2(0.9536,0.2698),Vector2(0.953,0.2725),Vector2(0.9431,0.268),Vector2(0.9433,0.2656),Vector2(0.9321,0.2601),Vector2(0.9321,0.263),Vector2(0.921,0.258),Vector2(0.9212,0.2555),Vector2(0.91,0.25),Vector2(0.9096,0.2528),Vector2(0.8978,0.2474),Vector2(0.8981,0.245),Vector2(0.886,0.2391),Vector2(0.8855,0.2418),Vector2(0.8729,0.2361),Vector2(0.8734,0.2338),Vector2(0.9096,0.06429),Vector2(0.8608,0.2283),Vector2(0.8601,0.2303),Vector2(0.9184,0.06672),Vector2(0.8732,0.2455),Vector2(0.8678,0.2399),Vector2(0.9104,0.07197),Vector2(0.8624,0.2325),Vector2(0.8859,0.2529),Vector2(0.9015,0.07775),Vector2(0.8823,0.2528),Vector2(0.8982,0.2585),Vector2(0.9009,0.07189),Vector2(0.8966,0.2592),Vector2(0.91,0.2638),Vector2(0.9109,0.2657),Vector2(0.898,0.07251),Vector2(0.9168,0.2669),Vector2(0.9218,0.2707),Vector2(0.9199,0.2683),Vector2(0.9271,0.2731),Vector2(0.9291,0.274),Vector2(0.8607,0.2295),Vector2(0.8614,0.2253),Vector2(0.8616,0.2252),Vector2(0.8609,0.2293),Vector2(0.8631,0.2144),Vector2(0.8633,0.2144),Vector2(0.8653,0.2001),Vector2(0.8655,0.2002),Vector2(0.8971,0.0744),Vector2(0.897,0.07396),Vector2(0.8977,0.08026),Vector2(0.8994,0.07915),Vector2(0.8988,0.07329),Vector2(0.8957,0.07454),Vector2(0.9065,0.06824),Vector2(0.9064,0.06758),Vector2(0.9071,0.0741),Vector2(0.9156,0.06852),Vector2(0.915,0.06265),Vector2(0.9191,0.05993),Vector2(0.9198,0.06581),Vector2(0.8949,0.07579),Vector2(0.886,0.08166),Vector2(0.8858,0.07988),Vector2(0.8956,0.08167),Vector2(0.8866,0.08753),Vector2(0.8773,0.09366),Vector2(0.8766,0.0878),Vector2(0.8733,0.08998),Vector2(0.874,0.09584),Vector2(0.8766,0.09412),Vector2(0.8759,0.08826),Vector2(0.8844,0.08273),Vector2(0.8843,0.08206),Vector2(0.885,0.0886),Vector2(0.8938,0.08281),Vector2(0.8932,0.07693),Vector2(0.897,0.07442),Vector2(0.8977,0.0803),Vector2(0.8558,0.1414),Vector2(0.8565,0.1465),Vector2(0.8655,0.1406),Vector2(0.865,0.1354),Vector2(0.8745,0.1347),Vector2(0.8741,0.1294),Vector2(0.8777,0.1326),Vector2(0.8773,0.1273),Vector2(0.8748,0.1345),Vector2(0.8743,0.1293),Vector2(0.8653,0.1407),Vector2(0.8648,0.1355),Vector2(0.856,0.1469),Vector2(0.8553,0.1417),Vector2(0.8531,0.1487),Vector2(0.8524,0.1436),Vector2(0.9616,0.07203),Vector2(0.9622,0.07716),Vector2(0.9621,0.07728),Vector2(0.9614,0.07218),Vector2(0.963,0.07669),Vector2(0.9623,0.07156),Vector2(0.9648,0.0755),Vector2(0.9642,0.0703),Vector2(0.9663,0.07448),Vector2(0.9659,0.06921),Vector2(0.9665,0.0744),Vector2(0.966,0.06912),Vector2(0.9655,0.07505),Vector2(0.965,0.06979),Vector2(0.9637,0.07619),Vector2(0.9632,0.071),Vector2(0.9641,0.07036),Vector2(0.9646,0.07564),Vector2(0.9631,0.07662),Vector2(0.9626,0.07134),Vector2(0.9606,0.07827),Vector2(0.9601,0.07303),Vector2(0.9584,0.0797),Vector2(0.9578,0.07453),Vector2(0.9575,0.08026),Vector2(0.9568,0.07515),Vector2(0.959,0.07932),Vector2(0.9583,0.07421),Vector2(0.9614,0.0777),Vector2(0.9608,0.07255),Vector2(0.9637,0.07623),Vector2(0.9631,0.07102),Vector2(0.9578,0.07453),Vector2(0.9582,0.07982),Vector2(0.9542,0.08242),Vector2(0.9538,0.07716),Vector2(0.9493,0.08562),Vector2(0.9488,0.08042),Vector2(0.9466,0.0874),Vector2(0.946,0.08225),Vector2(0.9468,0.08728),Vector2(0.9461,0.08217),Vector2(0.9506,0.08481),Vector2(0.9499,0.07968),Vector2(0.9553,0.08173),Vector2(0.9547,0.07656),Vector2(0.9582,0.07983),Vector2(0.9577,0.07459),Vector2(0.9444,0.08332),Vector2(0.9448,0.0886),Vector2(0.9369,0.09379),Vector2(0.9364,0.08856),Vector2(0.9281,0.09955),Vector2(0.9275,0.09438),Vector2(0.924,0.1023),Vector2(0.9233,0.09714),Vector2(0.9254,0.1013),Vector2(0.9247,0.0962),Vector2(0.9334,0.09609),Vector2(0.9328,0.09093),Vector2(0.9422,0.09028),Vector2(0.9417,0.08506),Vector2(0.9463,0.08761),Vector2(0.9459,0.08234),Vector2(0.9217,0.09816),Vector2(0.9222,0.1034),Vector2(0.9143,0.1086),Vector2(0.9138,0.1034),Vector2(0.9057,0.1143),Vector2(0.905,0.1091),Vector2(0.9019,0.1167),Vector2(0.9012,0.1116),Vector2(0.9036,0.1156),Vector2(0.9029,0.1105),Vector2(0.9112,0.1107),Vector2(0.9106,0.1055),Vector2(0.9195,0.1052),Vector2(0.919,0.09993),Vector2(0.9236,0.1025),Vector2(0.9231,0.09725),Vector2(0.899,0.1131),Vector2(0.8994,0.1184),Vector2(0.8906,0.1241),Vector2(0.8901,0.1189),Vector2(0.8814,0.1302),Vector2(0.8808,0.125),Vector2(0.8782,0.1323),Vector2(0.8775,0.1272),Vector2(0.8807,0.1306),Vector2(0.8801,0.1255),Vector2(0.889,0.1252),Vector2(0.8885,0.12),Vector2(0.8977,0.1195),Vector2(0.8972,0.1142),Vector2(0.9015,0.117),Vector2(0.901,0.1117),Vector2(0.8633,0.1198),Vector2(0.8724,0.1138),Vector2(0.8541,0.1258),Vector2(0.8756,0.1117),Vector2(0.8726,0.1136),Vector2(0.8631,0.1199),Vector2(0.8535,0.1262),Vector2(0.8507,0.128),Vector2(0.9596,0.05665),Vector2(0.9605,0.05602),Vector2(0.9598,0.05649),Vector2(0.9625,0.05471),Vector2(0.9642,0.05358),Vector2(0.9644,0.05348),Vector2(0.9634,0.05417),Vector2(0.9614,0.05542),Vector2(0.961,0.0557),Vector2(0.9584,0.05741),Vector2(0.9625,0.05473),Vector2(0.9561,0.05895),Vector2(0.9551,0.05961),Vector2(0.9565,0.05868),Vector2(0.959,0.05701),Vector2(0.9614,0.05543),Vector2(0.9521,0.06153),Vector2(0.9471,0.06482),Vector2(0.9561,0.05889),Vector2(0.9442,0.06669),Vector2(0.9443,0.06663),Vector2(0.9481,0.06414),Vector2(0.9529,0.061),Vector2(0.956,0.05898),Vector2(0.9347,0.07295),Vector2(0.9258,0.0788),Vector2(0.9427,0.0677),Vector2(0.9215,0.08158),Vector2(0.923,0.08066),Vector2(0.931,0.07537),Vector2(0.94,0.06948),Vector2(0.9442,0.06673),Vector2(0.9121,0.08778),Vector2(0.9033,0.09356),Vector2(0.9201,0.08254),Vector2(0.8995,0.09606),Vector2(0.9012,0.09495),Vector2(0.9089,0.0899),Vector2(0.9174,0.08433),Vector2(0.9215,0.08163),Vector2(0.8884,0.1033),Vector2(0.879,0.1095),Vector2(0.8973,0.09749),Vector2(0.8757,0.1116),Vector2(0.8783,0.1099),Vector2(0.8867,0.1044),Vector2(0.8956,0.09862),Vector2(0.8994,0.09611)]);
{ .SetTexCoord }
IndexedFaceSet100.TexCoord := TextureCoordinate101;
Coordinate102 := TCoordinateNode.Create;
Coordinate102.SetPoint([Vector3(2.49,-0.346,-1.665),Vector3(2.488,0.1468,-1.593),Vector3(1.904,0.2897,-1.545),Vector3(2.499,-0.444,-0.9669),Vector3(2.786,0.06917,-0.9244),Vector3(2.157,0.2012,-0.9269),Vector3(2.398,-0.5365,-0.3089),Vector3(2.674,-0.03385,-0.1909),Vector3(2.131,0.1021,-0.2568),Vector3(2.124,-0.6222,0.3018),Vector3(2.368,-0.1295,0.4901),Vector3(2.006,0.01241,0.3815),Vector3(1.712,-0.7021,0.7777),Vector3(1.909,-0.2185,1.124),Vector3(1.713,-0.0744,0.9995),Vector3(1.197,-0.75,1.101),Vector3(1.335,-0.2719,1.504),Vector3(1.253,-0.1234,1.348),Vector3(0.6088,-0.7719,1.344),Vector3(0.679,-0.2963,1.678),Vector3(0.6546,-0.1459,1.508),Vector3(0,-0.3025,1.722),Vector3(0,-0.151,1.545),Vector3(1.901,0.2634,-1.551),Vector3(1.93,0.0002013,-1.034),Vector3(1.906,-0.1155,-0.4374),Vector3(1.794,-0.1957,0.1341),Vector3(1.533,-0.2733,0.6859),Vector3(1.121,-0.3171,0.9981),Vector3(0.5859,-0.3372,1.141),Vector3(0,-0.3419,1.174),Vector3(2.405,0.2839,-1.554),Vector3(1.988,0.293,-1.533),Vector3(2.213,0.2428,-0.9146),Vector3(2.185,0.1482,-0.2411),Vector3(2.054,0.05845,0.3977),Vector3(1.749,-0.03285,1.048),Vector3(1.275,-0.08119,1.392),Vector3(0.6617,-0.1034,1.55),Vector3(0.6764,-0.1281,1.683),Vector3(1.33,-0.1046,1.516),Vector3(1.895,-0.05298,1.148),Vector3(2.345,0.03838,0.4979),Vector3(2.642,0.1326,-0.1729),Vector3(2.743,0.2346,-0.899),Vector3(0,0.2369,-1.479),Vector3(2.23,0.7878,-1.476),Vector3(2.257,0.7123,-0.9376),Vector3(2.702,0.7112,-0.9303),Vector3(2.682,0.79,-1.491),Vector3(0.5807,0.3499,1.642),Vector3(0.08538,0.3469,1.663),Vector3(0.08698,0.3321,1.769),Vector3(0.5887,0.3357,1.743),Vector3(0.7603,0.3393,1.717),Vector3(1.244,0.3562,1.597),Vector3(1.21,0.3696,1.502),Vector3(0.7458,0.3532,1.619),Vector3(1.402,0.3657,1.53),Vector3(1.811,0.4028,1.265),Vector3(1.714,0.4139,1.186),Vector3(1.351,0.3785,1.438),Vector3(1.943,0.4212,1.134),Vector3(2.266,0.491,0.6374),Vector3(2.054,0.5025,0.5555),Vector3(1.813,0.4322,1.056),Vector3(2.365,0.5149,0.4677),Vector3(2.572,0.5841,-0.02519),Vector3(2.216,0.5928,-0.08726),Vector3(2.106,0.526,0.3881),Vector3(2.626,0.6092,-0.204),Vector3(2.692,0.6845,-0.7402),Vector3(2.26,0.6874,-0.7606),Vector3(2.233,0.6163,-0.2546),Vector3(1.901,0.7339,-1.485),Vector3(2.295,0.8405,-1.396),Vector3(2.314,0.7849,-1),Vector3(2.638,0.7846,-0.9984),Vector3(2.623,0.8416,-1.404),Vector3(0.5147,0.4098,1.67),Vector3(0.153,0.4075,1.686),Vector3(0.1549,0.3975,1.757),Vector3(0.5193,0.4001,1.739),Vector3(0.8237,0.4065,1.694),Vector3(1.172,0.4186,1.607),Vector3(1.152,0.4277,1.542),Vector3(0.8114,0.4157,1.627),Vector3(1.449,0.4354,1.488),Vector3(1.739,0.4621,1.298),Vector3(1.679,0.4699,1.242),Vector3(1.409,0.4439,1.427),Vector3(1.968,0.4948,1.064),Vector3(2.192,0.5458,0.7013),Vector3(2.053,0.5539,0.6439),Vector3(1.864,0.5026,1.009),Vector3(2.357,0.5884,0.3984),Vector3(2.494,0.6385,0.0419),Vector3(2.251,0.6451,-0.005292),Vector3(2.157,0.5961,0.3436),Vector3(2.581,0.683,-0.275),Vector3(2.623,0.7373,-0.6614),Vector3(2.316,0.74,-0.6806),Vector3(2.291,0.6875,-0.3073),Vector3(2.228,0.4099,-1.53),Vector3(2.256,0.334,-0.9894),Vector3(2.704,0.3329,-0.9821),Vector3(2.683,0.4121,-1.546),Vector3(0.582,-0.02776,1.586),Vector3(0.08377,-0.03077,1.607),Vector3(0.08547,-0.04648,1.719),Vector3(0.5905,-0.04281,1.693),Vector3(0.7592,-0.03927,1.668),Vector3(1.246,-0.02229,1.547),Vector3(1.21,-0.00807,1.445),Vector3(0.7438,-0.02453,1.563),Vector3(1.402,-0.01297,1.48),Vector3(1.815,0.02459,1.213),Vector3(1.713,0.03626,1.13),Vector3(1.348,0.0006513,1.383),Vector3(1.945,0.04273,1.084),Vector3(2.27,0.1129,0.5843),Vector3(2.052,0.1247,0.5001),Vector3(1.81,0.05413,1.003),Vector3(2.367,0.1364,0.4167),Vector3(2.575,0.2061,-0.07931),Vector3(2.214,0.215,-0.1423),Vector3(2.104,0.1478,0.3357),Vector3(2.628,0.2309,-0.2555),Vector3(2.694,0.3066,-0.7946),Vector3(2.258,0.3095,-0.8152),Vector3(2.231,0.238,-0.3065),Vector3(1.901,0.3337,-1.541),Vector3(-2.49,-0.346,-1.665),Vector3(-2.488,0.1468,-1.593),Vector3(-2.786,0.06917,-0.9244),Vector3(-2.499,-0.444,-0.9669),Vector3(-1.904,0.2897,-1.545),Vector3(-1.901,0.2634,-1.551),Vector3(-1.93,0.0002014,-1.034),Vector3(-2.157,0.2012,-0.9269),Vector3(-2.674,-0.03385,-0.1909),Vector3(-2.398,-0.5365,-0.3089),Vector3(-1.906,-0.1155,-0.4374),Vector3(-2.131,0.1021,-0.2568),Vector3(-2.368,-0.1295,0.4901),Vector3(-2.124,-0.6222,0.3018),Vector3(-1.794,-0.1957,0.1341),Vector3(-2.006,0.01241,0.3815),Vector3(-1.909,-0.2185,1.124),Vector3(-1.712,-0.7021,0.7777),Vector3(-1.533,-0.2733,0.6859),Vector3(-1.713,-0.0744,0.9995),Vector3(-1.335,-0.2719,1.504),Vector3(-1.197,-0.75,1.101),Vector3(-1.121,-0.3171,0.9981),Vector3(-1.253,-0.1234,1.348),Vector3(-0.679,-0.2963,1.678),Vector3(-0.6088,-0.7719,1.344),Vector3(-0.5859,-0.3372,1.141),Vector3(-0.6546,-0.1459,1.508),Vector3(0,-0.7775,1.407),Vector3(-2.213,0.2428,-0.9146),Vector3(-1.988,0.293,-1.533),Vector3(-2.185,0.1482,-0.2411),Vector3(-2.054,0.05845,0.3977),Vector3(-1.749,-0.03285,1.048),Vector3(-1.275,-0.08119,1.392),Vector3(-0.6617,-0.1034,1.55),Vector3(0,-0.1079,1.582),Vector3(-0.6764,-0.1281,1.683),Vector3(0,-0.1336,1.722),Vector3(-1.33,-0.1046,1.516),Vector3(-1.895,-0.05298,1.148),Vector3(-2.345,0.03838,0.4979),Vector3(-2.642,0.1326,-0.1729),Vector3(-2.743,0.2346,-0.899),Vector3(-2.405,0.2839,-1.554),Vector3(-2.295,0.8405,-1.396),Vector3(-2.314,0.7849,-1),Vector3(-2.638,0.7846,-0.9984),Vector3(-2.623,0.8416,-1.404),Vector3(-0.5147,0.4098,1.67),Vector3(-0.153,0.4075,1.686),Vector3(-0.1549,0.3975,1.757),Vector3(-0.5193,0.4001,1.739),Vector3(-0.8237,0.4065,1.694),Vector3(-1.172,0.4186,1.607),Vector3(-1.152,0.4277,1.542),Vector3(-0.8114,0.4157,1.627),Vector3(-1.449,0.4354,1.488),Vector3(-1.739,0.4621,1.298),Vector3(-1.679,0.4699,1.242),Vector3(-1.409,0.4439,1.427),Vector3(-1.968,0.4948,1.064),Vector3(-2.192,0.5458,0.7013),Vector3(-2.053,0.5539,0.6439),Vector3(-1.864,0.5026,1.009),Vector3(-2.357,0.5884,0.3984),Vector3(-2.494,0.6385,0.0419),Vector3(-2.251,0.6451,-0.005292),Vector3(-2.157,0.5961,0.3436),Vector3(-2.581,0.683,-0.275),Vector3(-2.623,0.7373,-0.6614),Vector3(-2.316,0.74,-0.6806),Vector3(-2.291,0.6875,-0.3073),Vector3(-2.256,0.334,-0.9894),Vector3(-2.228,0.4099,-1.53),Vector3(-2.704,0.3329,-0.9821),Vector3(-2.683,0.4121,-1.546),Vector3(-0.08377,-0.03077,1.607),Vector3(-0.582,-0.02776,1.586),Vector3(-0.08547,-0.04648,1.719),Vector3(-0.5905,-0.04281,1.693),Vector3(-1.246,-0.02229,1.547),Vector3(-0.7592,-0.03927,1.668),Vector3(-1.21,-0.00807,1.445),Vector3(-0.7438,-0.02453,1.563),Vector3(-1.815,0.02459,1.213),Vector3(-1.402,-0.01297,1.48),Vector3(-1.713,0.03626,1.13),Vector3(-1.348,0.0006513,1.383),Vector3(-2.27,0.1129,0.5843),Vector3(-1.945,0.04273,1.084),Vector3(-2.052,0.1247,0.5001),Vector3(-1.81,0.05413,1.003),Vector3(-2.575,0.2061,-0.07931),Vector3(-2.367,0.1364,0.4167),Vector3(-2.214,0.215,-0.1423),Vector3(-2.104,0.1478,0.3357),Vector3(-2.694,0.3066,-0.7946),Vector3(-2.628,0.2309,-0.2555),Vector3(-2.258,0.3095,-0.8152),Vector3(-2.231,0.238,-0.3065),Vector3(-1.901,0.3337,-1.541),Vector3(0,0.3834,-1.651),Vector3(-2.23,0.7878,-1.476),Vector3(-2.257,0.7123,-0.9376),Vector3(-2.702,0.7112,-0.9303),Vector3(-2.682,0.79,-1.491),Vector3(-0.5807,0.3499,1.642),Vector3(-0.08538,0.3469,1.663),Vector3(-0.08698,0.3321,1.769),Vector3(-0.5887,0.3357,1.743),Vector3(-0.7603,0.3393,1.717),Vector3(-1.244,0.3562,1.597),Vector3(-1.21,0.3696,1.502),Vector3(-0.7458,0.3532,1.619),Vector3(-1.402,0.3657,1.53),Vector3(-1.811,0.4028,1.265),Vector3(-1.714,0.4139,1.186),Vector3(-1.351,0.3785,1.438),Vector3(-1.943,0.4212,1.134),Vector3(-2.266,0.491,0.6374),Vector3(-2.054,0.5025,0.5555),Vector3(-1.813,0.4322,1.056),Vector3(-2.365,0.5149,0.4677),Vector3(-2.572,0.5841,-0.02519),Vector3(-2.216,0.5928,-0.08726),Vector3(-2.106,0.526,0.3881),Vector3(-2.626,0.6092,-0.204),Vector3(-2.692,0.6845,-0.7402),Vector3(-2.26,0.6874,-0.7606),Vector3(-2.233,0.6163,-0.2546),Vector3(-1.901,0.7339,-1.485),Vector3(0,0.7348,-1.492),Vector3(2.792,-0.12,-1.345),Vector3(2.142,0.1908,-1.295),Vector3(2.754,-0.2268,-0.5846),Vector3(2.151,0.01335,-0.6048),Vector3(2.546,-0.3259,0.1205),Vector3(2.083,-0.07765,0.04301),Vector3(2.157,-0.4204,0.7935),Vector3(1.879,-0.1684,0.689),Vector3(1.636,-0.4934,1.191),Vector3(1.501,-0.238,1.185),Vector3(1.014,-0.5308,1.507),Vector3(0.9654,-0.2718,1.425),Vector3(0.3407,-0.5451,1.681),Vector3(0.3302,-0.2846,1.516),Vector3(2.154,0.2911,-1.276),Vector3(2.162,0.1932,-0.579),Vector3(2.094,0.102,0.07051),Vector3(1.889,0.01079,0.7195),Vector3(1.508,-0.05933,1.219),Vector3(0.9686,-0.09341,1.461),Vector3(0.3311,-0.1062,1.552),Vector3(0.3399,-0.1836,1.72),Vector3(1.011,-0.1695,1.62),Vector3(1.63,-0.1323,1.355),Vector3(2.148,-0.05961,0.8372),Vector3(2.536,0.03458,0.1667),Vector3(2.743,0.1333,-0.5359),Vector3(2.781,0.2391,-1.289),Vector3(1.428,0.1563,-1.429),Vector3(1.434,-0.01467,-0.9757),Vector3(1.388,-0.07533,-0.5439),Vector3(1.253,-0.1358,-0.1132),Vector3(1.001,-0.1822,0.2172),Vector3(0.6436,-0.2048,0.3777),Vector3(0.2202,-0.2133,0.4382),Vector3(2.468,0.8129,-1.2),Vector3(0.3355,0.4037,1.713),Vector3(0.9899,0.4171,1.618),Vector3(1.569,0.4528,1.364),Vector3(2.019,0.5243,0.8547),Vector3(2.315,0.617,0.1947),Vector3(2.453,0.7119,-0.4811),Vector3(2.166,0.3011,-1.269),Vector3(2.484,0.2498,-0.9033),Vector3(2.769,0.3019,-1.274),Vector3(2.452,0.3533,-1.64),Vector3(0.332,-0.09714,1.566),Vector3(0.0005066,-0.1099,1.657),Vector3(0.3389,-0.1181,1.716),Vector3(0.6704,-0.1054,1.625),Vector3(1.007,-0.1041,1.616),Vector3(1.308,-0.08306,1.466),Vector3(0.9723,-0.08433,1.475),Vector3(0.6714,-0.1054,1.625),Vector3(1.622,-0.06717,1.353),Vector3(1.829,-0.03411,1.118),Vector3(1.516,-0.04993,1.23),Vector3(1.309,-0.08299,1.466),Vector3(2.138,0.005099,0.8386),Vector3(2.208,0.05989,0.4486),Vector3(1.9,0.02077,0.727),Vector3(1.83,-0.03402,1.117),Vector3(2.524,0.09887,0.171),Vector3(2.422,0.1513,-0.2023),Vector3(2.106,0.1124,0.07454),Vector3(2.209,0.05998,0.4479),Vector3(2.731,0.1972,-0.5289),Vector3(2.484,0.2497,-0.9026),Vector3(2.174,0.2039,-0.5768),Vector3(2.422,0.1514,-0.2032),Vector3(1.061,0.3095,-1.659),Vector3(2.173,0.8125,-1.197),Vector3(2.483,0.762,-0.8372),Vector3(2.763,0.8133,-1.203),Vector3(2.452,0.8638,-1.563),Vector3(0.3324,0.4128,1.648),Vector3(0.006795,0.4015,1.729),Vector3(0.3385,0.3946,1.778),Vector3(0.6641,0.4059,1.697),Vector3(1.005,0.4086,1.678),Vector3(1.302,0.4281,1.54),Vector3(0.9747,0.4257,1.557),Vector3(0.6778,0.4062,1.695),Vector3(1.616,0.4453,1.417),Vector3(1.823,0.4767,1.194),Vector3(1.522,0.4603,1.31),Vector3(1.315,0.4289,1.534),Vector3(2.13,0.517,0.9063),Vector3(2.205,0.5706,0.5253),Vector3(1.908,0.5315,0.8031),Vector3(1.833,0.478,1.184),Vector3(2.516,0.6105,0.241),Vector3(2.419,0.6619,-0.1246),Vector3(2.114,0.6235,0.1483),Vector3(2.211,0.5722,0.5139),Vector3(2.724,0.7087,-0.4577),Vector3(2.483,0.7602,-0.8248),Vector3(2.181,0.7152,-0.5044),Vector3(2.422,0.6636,-0.1373),Vector3(2.167,0.5622,-1.232),Vector3(2.484,0.511,-0.8673),Vector3(2.768,0.563,-1.238),Vector3(2.452,0.6143,-1.603),Vector3(0.3321,0.1635,1.607),Vector3(0.00152,0.1512,1.694),Vector3(0.3388,0.1434,1.749),Vector3(0.6694,0.1557,1.662),Vector3(1.007,0.1575,1.649),Vector3(1.307,0.178,1.503),Vector3(0.9732,0.1763,1.515),Vector3(0.6725,0.1557,1.662),Vector3(1.62,0.1943,1.387),Vector3(1.828,0.2269,1.155),Vector3(1.518,0.2108,1.27),Vector3(1.311,0.1782,1.502),Vector3(2.135,0.2664,0.8739),Vector3(2.208,0.3209,0.4857),Vector3(1.903,0.2817,0.7651),Vector3(1.83,0.2271,1.153),Vector3(2.522,0.36,0.2072),Vector3(2.421,0.4123,-0.1648),Vector3(2.108,0.3734,0.1118),Vector3(2.209,0.3212,0.4837),Vector3(2.729,0.4583,-0.4924),Vector3(2.484,0.5107,-0.8651),Vector3(2.176,0.465,-0.54),Vector3(2.422,0.4127,-0.1673),Vector3(1.061,0.5794,-1.621),Vector3(-2.792,-0.12,-1.345),Vector3(-2.142,0.1908,-1.295),Vector3(-2.754,-0.2268,-0.5846),Vector3(-2.151,0.01335,-0.6048),Vector3(-2.546,-0.3259,0.1205),Vector3(-2.083,-0.07765,0.04301),Vector3(-2.157,-0.4204,0.7935),Vector3(-1.879,-0.1684,0.689),Vector3(-1.636,-0.4934,1.191),Vector3(-1.501,-0.238,1.185),Vector3(-1.014,-0.5308,1.507),Vector3(-0.9654,-0.2718,1.425),Vector3(-0.3407,-0.5451,1.681),Vector3(-0.3302,-0.2846,1.516),Vector3(-2.154,0.2911,-1.276),Vector3(-2.162,0.1932,-0.579),Vector3(-2.094,0.102,0.07051),Vector3(-1.889,0.01079,0.7195),Vector3(-1.508,-0.05933,1.219),Vector3(-0.9686,-0.09341,1.461),Vector3(-0.3311,-0.1062,1.552),Vector3(-0.3399,-0.1836,1.72),Vector3(-1.011,-0.1695,1.62),Vector3(-1.63,-0.1323,1.355),Vector3(-2.148,-0.05961,0.8372),Vector3(-2.536,0.03458,0.1667),Vector3(-2.743,0.1333,-0.5359),Vector3(-2.781,0.2391,-1.289),Vector3(-1.428,0.1563,-1.429),Vector3(-1.434,-0.01467,-0.9757),Vector3(-1.388,-0.07533,-0.5439),Vector3(-1.253,-0.1358,-0.1132),Vector3(-1.001,-0.1822,0.2172),Vector3(-0.6436,-0.2048,0.3777),Vector3(-0.2202,-0.2133,0.4382),Vector3(-2.468,0.8129,-1.2),Vector3(-0.3355,0.4037,1.713),Vector3(-0.9899,0.4171,1.618),Vector3(-1.569,0.4528,1.364),Vector3(-2.019,0.5243,0.8547),Vector3(-2.315,0.617,0.1947),Vector3(-2.453,0.7119,-0.4811),Vector3(-2.166,0.3011,-1.269),Vector3(-2.484,0.2498,-0.9033),Vector3(-2.769,0.3019,-1.274),Vector3(-2.452,0.3533,-1.64),Vector3(-0.332,-0.09714,1.566),Vector3(-0.0005066,-0.1099,1.657),Vector3(-0.3389,-0.1181,1.716),Vector3(-0.6704,-0.1054,1.625),Vector3(-1.007,-0.1041,1.616),Vector3(-1.308,-0.08306,1.466),Vector3(-0.9723,-0.08433,1.475),Vector3(-0.6714,-0.1054,1.625),Vector3(-1.622,-0.06717,1.353),Vector3(-1.829,-0.03411,1.118),Vector3(-1.516,-0.04993,1.23),Vector3(-1.309,-0.08299,1.466),Vector3(-2.138,0.005099,0.8386),Vector3(-2.208,0.05989,0.4486),Vector3(-1.9,0.02077,0.727),Vector3(-1.83,-0.03402,1.117),Vector3(-2.524,0.09887,0.171),Vector3(-2.422,0.1513,-0.2023),Vector3(-2.106,0.1124,0.07454),Vector3(-2.209,0.05998,0.4479),Vector3(-2.731,0.1972,-0.5289),Vector3(-2.484,0.2497,-0.9026),Vector3(-2.174,0.2039,-0.5768),Vector3(-2.422,0.1514,-0.2032),Vector3(-1.061,0.3095,-1.659),Vector3(-2.173,0.8125,-1.197),Vector3(-2.483,0.762,-0.8372),Vector3(-2.763,0.8133,-1.203),Vector3(-2.452,0.8638,-1.563),Vector3(-0.3324,0.4128,1.648),Vector3(-0.006795,0.4015,1.729),Vector3(-0.3385,0.3946,1.778),Vector3(-0.6641,0.4059,1.697),Vector3(-1.005,0.4086,1.678),Vector3(-1.302,0.4281,1.54),Vector3(-0.9747,0.4257,1.557),Vector3(-0.6778,0.4062,1.695),Vector3(-1.616,0.4453,1.417),Vector3(-1.823,0.4767,1.194),Vector3(-1.522,0.4603,1.31),Vector3(-1.315,0.4289,1.534),Vector3(-2.13,0.517,0.9063),Vector3(-2.205,0.5706,0.5253),Vector3(-1.908,0.5315,0.8031),Vector3(-1.833,0.478,1.184),Vector3(-2.516,0.6105,0.241),Vector3(-2.419,0.6619,-0.1246),Vector3(-2.114,0.6235,0.1483),Vector3(-2.211,0.5722,0.5139),Vector3(-2.724,0.7087,-0.4577),Vector3(-2.483,0.7602,-0.8248),Vector3(-2.181,0.7152,-0.5044),Vector3(-2.422,0.6636,-0.1373),Vector3(-2.167,0.5622,-1.232),Vector3(-2.484,0.511,-0.8673),Vector3(-2.768,0.563,-1.238),Vector3(-2.452,0.6143,-1.603),Vector3(-0.3321,0.1635,1.607),Vector3(-0.00152,0.1512,1.694),Vector3(-0.3388,0.1434,1.749),Vector3(-0.6694,0.1557,1.662),Vector3(-1.007,0.1575,1.649),Vector3(-1.307,0.178,1.503),Vector3(-0.9732,0.1763,1.515),Vector3(-0.6725,0.1557,1.662),Vector3(-1.62,0.1943,1.387),Vector3(-1.828,0.2269,1.155),Vector3(-1.518,0.2108,1.27),Vector3(-1.311,0.1782,1.502),Vector3(-2.135,0.2664,0.8739),Vector3(-2.208,0.3209,0.4857),Vector3(-1.903,0.2817,0.7651),Vector3(-1.83,0.2271,1.153),Vector3(-2.522,0.36,0.2072),Vector3(-2.421,0.4123,-0.1648),Vector3(-2.108,0.3734,0.1118),Vector3(-2.209,0.3212,0.4837),Vector3(-2.729,0.4583,-0.4924),Vector3(-2.484,0.5107,-0.8651),Vector3(-2.176,0.465,-0.54),Vector3(-2.422,0.4127,-0.1673),Vector3(-1.061,0.5794,-1.621),Vector3(2.49,-0.07094,-1.626),Vector3(1.901,0.2752,-1.55),Vector3(2.789,-0.1743,-0.9587),Vector3(2.502,-0.3954,-1.313),Vector3(2.79,0.1233,-1.309),Vector3(2.145,0.2664,-1.283),Vector3(2.677,-0.2774,-0.2243),Vector3(2.468,-0.4911,-0.6317),Vector3(2.751,0.01671,-0.5509),Vector3(2.154,0.1483,-0.5857),Vector3(2.371,-0.3732,0.4573),Vector3(2.281,-0.5799,0.00001332),Vector3(2.544,-0.08225,0.1536),Vector3(2.085,0.05721,0.06252),Vector3(1.911,-0.4622,0.9992),Vector3(1.933,-0.6646,0.603),Vector3(2.155,-0.1767,0.826),Vector3(1.881,-0.03364,0.7093),Vector3(1.336,-0.5157,1.362),Vector3(1.466,-0.73,0.946),Vector3(1.634,-0.2497,1.345),Vector3(1.503,-0.1034,1.206),Vector3(0.6794,-0.5402,1.623),Vector3(0.9086,-0.7635,1.235),Vector3(1.013,-0.287,1.611),Vector3(0.9662,-0.1373,1.447),Vector3(0,-0.5464,1.691),Vector3(0.3053,-0.7763,1.398),Vector3(0.3405,-0.3012,1.712),Vector3(0.3304,-0.15,1.538),Vector3(2.154,0.08114,-0.9441),Vector3(2.128,-0.03282,-0.2761),Vector3(2.003,-0.1224,0.3617),Vector3(1.711,-0.2091,0.9787),Vector3(1.252,-0.258,1.327),Vector3(0.6541,-0.2804,1.486),Vector3(0,-0.2855,1.523),Vector3(1.963,0.1317,-1.336),Vector3(1.972,-0.08361,-0.7101),Vector3(1.909,-0.167,-0.1163),Vector3(1.722,-0.2502,0.4758),Vector3(1.376,-0.314,0.9301),Vector3(0.8849,-0.345,1.151),Vector3(0.3027,-0.3567,1.234),Vector3(2.162,0.2932,-1.271),Vector3(2.171,0.1958,-0.5782),Vector3(2.102,0.1044,0.07263),Vector3(1.897,0.01291,0.7241),Vector3(1.514,-0.05759,1.226),Vector3(0.9712,-0.0919,1.47),Vector3(0.3317,-0.1047,1.561),Vector3(0.3392,-0.14,1.717),Vector3(1.009,-0.126,1.617),Vector3(1.625,-0.08896,1.353),Vector3(2.141,-0.01654,0.8378),Vector3(2.528,0.07737,0.1693),Vector3(2.734,0.1758,-0.5314),Vector3(2.773,0.2808,-1.279),Vector3(2.481,0.25,-1.57),Vector3(1.912,0.2936,-1.537),Vector3(2.166,0.2411,-0.9202),Vector3(2.14,0.1469,-0.2495),Vector3(2.014,0.05701,0.3904),Vector3(1.72,-0.03018,1.011),Vector3(1.257,-0.07947,1.362),Vector3(0.656,-0.102,1.523),Vector3(0,-0.1072,1.559),Vector3(0.6776,-0.1788,1.686),Vector3(1.331,-0.1545,1.512),Vector3(1.903,-0.1013,1.134),Vector3(2.361,-0.01256,0.5023),Vector3(2.666,0.08285,-0.1769),Vector3(2.778,0.1855,-0.9075),Vector3(1.153,0.2636,-1.602),Vector3(1.256,0.07775,-1.259),Vector3(1.241,-0.003568,-0.8708),Vector3(1.167,-0.05593,-0.498),Vector3(0.9965,-0.106,-0.1419),Vector3(0.7287,-0.1347,0.06276),Vector3(0.3811,-0.1479,0.1564),Vector3(0,-0.151,0.1785),Vector3(2.197,0.294,-1.54),Vector3(2.484,0.2443,-0.9037),Vector3(0.6709,-0.1108,1.624),Vector3(1.309,-0.08845,1.465),Vector3(1.83,-0.03947,1.117),Vector3(2.209,0.05452,0.4475),Vector3(2.422,0.146,-0.2035),Vector3(2.227,0.3392,-1.54),Vector3(2.255,0.2632,-0.9991),Vector3(2.704,0.2622,-0.9918),Vector3(2.684,0.3414,-1.556),Vector3(2.169,0.75,-1.206),Vector3(2.484,0.6989,-0.8424),Vector3(2.766,0.7507,-1.211),Vector3(2.452,0.8018,-1.575),Vector3(0.5823,-0.09826,1.574),Vector3(0.08337,-0.1013,1.596),Vector3(0.08511,-0.1174,1.71),Vector3(0.591,-0.1137,1.684),Vector3(0.3323,0.3508,1.635),Vector3(0.003092,0.3389,1.72),Vector3(0.3387,0.3315,1.773),Vector3(0.6678,0.3434,1.688),Vector3(0.7589,-0.1101,1.659),Vector3(1.247,-0.09314,1.538),Vector3(1.21,-0.07857,1.434),Vector3(0.7432,-0.09504,1.552),Vector3(1.006,0.3455,1.673),Vector3(1.306,0.3656,1.53),Vector3(0.9738,0.3637,1.544),Vector3(0.6741,0.3435,1.688),Vector3(1.402,-0.08385,1.472),Vector3(1.816,-0.04618,1.204),Vector3(1.712,-0.03426,1.119),Vector3(1.347,-0.06991,1.373),Vector3(1.618,0.3823,1.412),Vector3(1.826,0.4144,1.183),Vector3(1.52,0.3982,1.298),Vector3(1.312,0.366,1.527),Vector3(1.946,-0.02806,1.075),Vector3(2.271,0.04218,0.5746),Vector3(2.051,0.05412,0.4896),Vector3(1.809,-0.0165,0.9923),Vector3(2.133,0.4542,0.8992),Vector3(2.207,0.5084,0.5133),Vector3(1.905,0.4692,0.7925),Vector3(1.831,0.415,1.178),Vector3(2.368,0.06568,0.4073),Vector3(2.576,0.1355,-0.08942),Vector3(2.214,0.1443,-0.1527),Vector3(2.103,0.07712,0.3259),Vector3(2.52,0.5478,0.2331),Vector3(2.421,0.5998,-0.1369),Vector3(2.11,0.5611,0.1386),Vector3(2.209,0.5091,0.5086),Vector3(2.628,0.1601,-0.265),Vector3(2.695,0.236,-0.8048),Vector3(2.257,0.2389,-0.8255),Vector3(2.231,0.1673,-0.3162),Vector3(2.728,0.646,-0.4662),Vector3(2.483,0.6982,-0.8372),Vector3(2.178,0.6527,-0.5135),Vector3(2.422,0.6006,-0.1425),Vector3(0.9505,0.7345,-1.49),Vector3(1.901,0.2678,-1.551),Vector3(2.249,0.8126,-1.198),Vector3(2.479,0.775,-0.9302),Vector3(2.687,0.8132,-1.202),Vector3(2.456,0.8508,-1.47),Vector3(2.233,0.85,-1.464),Vector3(2.26,0.7752,-0.9315),Vector3(2.699,0.7742,-0.9243),Vector3(2.679,0.8522,-1.48),Vector3(0.3333,0.4102,1.667),Vector3(0.09134,0.4021,1.725),Vector3(0.3376,0.3972,1.759),Vector3(0.5796,0.4054,1.701),Vector3(0.5782,0.412,1.654),Vector3(0.08821,0.4091,1.675),Vector3(0.08971,0.3951,1.774),Vector3(0.5857,0.3987,1.749),Vector3(1.001,0.4111,1.661),Vector3(1.222,0.4253,1.56),Vector3(0.9791,0.4232,1.574),Vector3(0.7581,0.409,1.675),Vector3(0.7626,0.4024,1.722),Vector3(1.24,0.4191,1.604),Vector3(1.208,0.4316,1.514),Vector3(0.749,0.4154,1.63),Vector3(1.602,0.4474,1.402),Vector3(1.757,0.4705,1.238),Vector3(1.536,0.4582,1.325),Vector3(1.381,0.4351,1.49),Vector3(1.402,0.4288,1.534),Vector3(1.806,0.4655,1.274),Vector3(1.713,0.476,1.199),Vector3(1.355,0.4409,1.448),Vector3(2.1,0.519,0.8923),Vector3(2.158,0.5587,0.6097),Vector3(1.938,0.5296,0.8171),Vector3(1.881,0.4899,1.1),Vector3(1.942,0.4843,1.139),Vector3(2.262,0.5534,0.6474),Vector3(2.056,0.5646,0.5678),Vector3(1.816,0.4949,1.064),Vector3(2.464,0.6122,0.2289),Vector3(2.393,0.6503,-0.04252),Vector3(2.166,0.6218,0.1605),Vector3(2.237,0.5837,0.4319),Vector3(2.364,0.5779,0.4731),Vector3(2.568,0.6464,-0.01431),Vector3(2.218,0.6549,-0.07527),Vector3(2.11,0.5889,0.3951),Vector3(2.654,0.7095,-0.4638),Vector3(2.475,0.7478,-0.7365),Vector3(2.252,0.7144,-0.4984),Vector3(2.43,0.676,-0.2256),Vector3(2.624,0.6722,-0.1983),Vector3(2.689,0.7467,-0.7288),Vector3(2.262,0.7496,-0.7489),Vector3(2.236,0.6792,-0.2482),Vector3(2.228,0.6003,-1.503),Vector3(2.256,0.5244,-0.9629),Vector3(2.703,0.5234,-0.9556),Vector3(2.683,0.6025,-1.519),Vector3(0.5817,0.1625,1.614),Vector3(0.08417,0.1595,1.635),Vector3(0.08583,0.1441,1.744),Vector3(0.5901,0.1478,1.718),Vector3(0.7594,0.1513,1.693),Vector3(1.246,0.1683,1.572),Vector3(1.21,0.1822,1.474),Vector3(0.7444,0.1657,1.591),Vector3(1.401,0.1776,1.506),Vector3(1.813,0.2151,1.239),Vector3(1.713,0.2265,1.158),Vector3(1.349,0.1909,1.411),Vector3(1.944,0.2332,1.11),Vector3(2.268,0.3033,0.6108),Vector3(2.053,0.315,0.5275),Vector3(1.811,0.2445,1.03),Vector3(2.366,0.3269,0.4429),Vector3(2.574,0.3965,-0.05237),Vector3(2.215,0.4053,-0.115),Vector3(2.104,0.3382,0.3624),Vector3(2.627,0.4213,-0.2291),Vector3(2.693,0.497,-0.7676),Vector3(2.258,0.4999,-0.7881),Vector3(2.232,0.4285,-0.28),Vector3(1.901,0.507,-1.517),Vector3(2.167,0.3718,-1.259),Vector3(2.484,0.3205,-0.8937),Vector3(2.769,0.3726,-1.265),Vector3(2.452,0.4239,-1.63),Vector3(0.332,-0.0267,1.578),Vector3(0.001013,-0.03918,1.667),Vector3(0.3389,-0.04721,1.724),Vector3(0.6699,-0.03473,1.635),Vector3(1.007,-0.03319,1.624),Vector3(1.308,-0.01239,1.476),Vector3(0.9727,-0.01389,1.487),Vector3(0.672,-0.03468,1.635),Vector3(1.621,0.003701,1.362),Vector3(1.829,0.03652,1.128),Vector3(1.517,0.02057,1.242),Vector3(1.31,-0.01226,1.475),Vector3(2.137,0.07588,0.8478),Vector3(2.208,0.1305,0.4587),Vector3(1.901,0.09136,0.7376),Vector3(1.83,0.0367,1.127),Vector3(2.523,0.1696,0.1807),Vector3(2.421,0.2219,-0.192),Vector3(2.107,0.1831,0.08474),Vector3(2.209,0.1307,0.4574),Vector3(2.73,0.2679,-0.5191),Vector3(2.484,0.3203,-0.8922),Vector3(2.175,0.2746,-0.5668),Vector3(2.422,0.2222,-0.1937),Vector3(1.061,0.3846,-1.648),Vector3(-2.49,-0.07094,-1.626),Vector3(-2.79,0.1233,-1.309),Vector3(-2.789,-0.1743,-0.9587),Vector3(-2.502,-0.3954,-1.313),Vector3(-1.901,0.2752,-1.55),Vector3(-1.963,0.1317,-1.336),Vector3(-2.154,0.08114,-0.9441),Vector3(-2.145,0.2664,-1.283),Vector3(-2.751,0.01671,-0.5509),Vector3(-2.677,-0.2774,-0.2243),Vector3(-2.468,-0.4911,-0.6317),Vector3(-1.972,-0.08361,-0.7101),Vector3(-2.128,-0.03282,-0.2761),Vector3(-2.154,0.1483,-0.5857),Vector3(-2.544,-0.08225,0.1536),Vector3(-2.371,-0.3732,0.4573),Vector3(-2.281,-0.5799,0.00001332),Vector3(-1.909,-0.167,-0.1163),Vector3(-2.003,-0.1224,0.3617),Vector3(-2.085,0.05721,0.06252),Vector3(-2.155,-0.1767,0.826),Vector3(-1.911,-0.4622,0.9992),Vector3(-1.933,-0.6646,0.603),Vector3(-1.722,-0.2502,0.4758),Vector3(-1.711,-0.2091,0.9787),Vector3(-1.881,-0.03364,0.7093),Vector3(-1.634,-0.2497,1.345),Vector3(-1.336,-0.5157,1.362),Vector3(-1.466,-0.73,0.946),Vector3(-1.376,-0.314,0.9301),Vector3(-1.252,-0.258,1.327),Vector3(-1.503,-0.1034,1.206),Vector3(-1.013,-0.287,1.611),Vector3(-0.6794,-0.5402,1.623),Vector3(-0.9086,-0.7635,1.235),Vector3(-0.8849,-0.345,1.151),Vector3(-0.6541,-0.2804,1.486),Vector3(-0.9662,-0.1373,1.447),Vector3(-0.3405,-0.3012,1.712),Vector3(-0.3053,-0.7763,1.398),Vector3(-0.3027,-0.3567,1.234),Vector3(-0.3304,-0.15,1.538),Vector3(-2.166,0.2411,-0.9202),Vector3(-2.162,0.2932,-1.271),Vector3(-1.912,0.2936,-1.537),Vector3(-2.14,0.1469,-0.2495),Vector3(-2.171,0.1958,-0.5782),Vector3(-2.014,0.05701,0.3904),Vector3(-2.102,0.1044,0.07263),Vector3(-1.72,-0.03018,1.011),Vector3(-1.897,0.01291,0.7241),Vector3(-1.257,-0.07947,1.362),Vector3(-1.514,-0.05759,1.226),Vector3(-0.656,-0.102,1.523),Vector3(-0.9712,-0.0919,1.47),Vector3(-0.3317,-0.1047,1.561),Vector3(-0.6776,-0.1788,1.686),Vector3(-0.3392,-0.14,1.717),Vector3(0,-0.185,1.73),Vector3(-1.331,-0.1545,1.512),Vector3(-1.009,-0.126,1.617),Vector3(-1.903,-0.1013,1.134),Vector3(-1.625,-0.08896,1.353),Vector3(-2.361,-0.01256,0.5023),Vector3(-2.141,-0.01654,0.8378),Vector3(-2.666,0.08285,-0.1769),Vector3(-2.528,0.07737,0.1693),Vector3(-2.778,0.1855,-0.9075),Vector3(-2.734,0.1758,-0.5314),Vector3(-2.481,0.25,-1.57),Vector3(-2.773,0.2808,-1.279),Vector3(-1.153,0.2636,-1.602),Vector3(-1.256,0.07775,-1.259),Vector3(-1.241,-0.003568,-0.8708),Vector3(-1.167,-0.05593,-0.498),Vector3(-0.9965,-0.106,-0.1419),Vector3(-0.7287,-0.1347,0.06276),Vector3(-0.3811,-0.1479,0.1564),Vector3(-2.249,0.8126,-1.198),Vector3(-2.479,0.775,-0.9302),Vector3(-2.687,0.8132,-1.202),Vector3(-2.456,0.8508,-1.47),Vector3(-0.3333,0.4102,1.667),Vector3(-0.09134,0.4021,1.725),Vector3(-0.3376,0.3972,1.759),Vector3(-0.5796,0.4054,1.701),Vector3(-1.001,0.4111,1.661),Vector3(-1.222,0.4253,1.56),Vector3(-0.9791,0.4232,1.574),Vector3(-0.7581,0.409,1.675),Vector3(-1.602,0.4474,1.402),Vector3(-1.757,0.4705,1.238),Vector3(-1.536,0.4582,1.325),Vector3(-1.381,0.4351,1.49),Vector3(-2.1,0.519,0.8923),Vector3(-2.158,0.5587,0.6097),Vector3(-1.938,0.5296,0.8171),Vector3(-1.881,0.4899,1.1),Vector3(-2.464,0.6122,0.2289),Vector3(-2.393,0.6503,-0.04252),Vector3(-2.166,0.6218,0.1605),Vector3(-2.237,0.5837,0.4319),Vector3(-2.654,0.7095,-0.4638),Vector3(-2.475,0.7478,-0.7365),Vector3(-2.252,0.7144,-0.4984),Vector3(-2.43,0.676,-0.2256),Vector3(-2.255,0.2632,-0.9991),Vector3(-2.167,0.3718,-1.259),Vector3(-2.227,0.3392,-1.54),Vector3(-2.484,0.2443,-0.9037),Vector3(-2.704,0.2622,-0.9918),Vector3(-2.484,0.3205,-0.8937),Vector3(-2.684,0.3414,-1.556),Vector3(-2.769,0.3726,-1.265),Vector3(-2.197,0.294,-1.54),Vector3(-2.452,0.4239,-1.63),Vector3(-0.08337,-0.1013,1.596),Vector3(-0.332,-0.0267,1.578),Vector3(-0.5823,-0.09826,1.574),Vector3(0,-0.1153,1.656),Vector3(-0.08511,-0.1174,1.71),Vector3(-0.001013,-0.03918,1.667),Vector3(-0.591,-0.1137,1.684),Vector3(-0.3389,-0.04721,1.724),Vector3(-0.6709,-0.1108,1.624),Vector3(-0.6699,-0.03473,1.635),Vector3(-1.247,-0.09314,1.538),Vector3(-1.007,-0.03319,1.624),Vector3(-0.7589,-0.1101,1.659),Vector3(-1.309,-0.08845,1.465),Vector3(-1.21,-0.07857,1.434),Vector3(-1.308,-0.01239,1.476),Vector3(-0.7432,-0.09504,1.552),Vector3(-0.9727,-0.01389,1.487),Vector3(-0.672,-0.03468,1.635),Vector3(-1.816,-0.04618,1.204),Vector3(-1.621,0.003701,1.362),Vector3(-1.402,-0.08385,1.472),Vector3(-1.83,-0.03947,1.117),Vector3(-1.712,-0.03426,1.119),Vector3(-1.829,0.03652,1.128),Vector3(-1.347,-0.06991,1.373),Vector3(-1.517,0.02057,1.242),Vector3(-1.31,-0.01226,1.475),Vector3(-2.271,0.04218,0.5746),Vector3(-2.137,0.07588,0.8478),Vector3(-1.946,-0.02806,1.075),Vector3(-2.209,0.05452,0.4475),Vector3(-2.051,0.05412,0.4896),Vector3(-2.208,0.1305,0.4587),Vector3(-1.809,-0.0165,0.9923),Vector3(-1.901,0.09136,0.7376),Vector3(-1.83,0.0367,1.127),Vector3(-2.576,0.1355,-0.08942),Vector3(-2.523,0.1696,0.1807),Vector3(-2.368,0.06568,0.4073),Vector3(-2.422,0.146,-0.2035),Vector3(-2.214,0.1443,-0.1527),Vector3(-2.421,0.2219,-0.192),Vector3(-2.103,0.07712,0.3259),Vector3(-2.107,0.1831,0.08474),Vector3(-2.209,0.1307,0.4574),Vector3(-2.695,0.236,-0.8048),Vector3(-2.73,0.2679,-0.5191),Vector3(-2.628,0.1601,-0.265),Vector3(-2.257,0.2389,-0.8255),Vector3(-2.484,0.3203,-0.8922),Vector3(-2.231,0.1673,-0.3162),Vector3(-2.175,0.2746,-0.5668),Vector3(-2.422,0.2222,-0.1937),Vector3(-1.901,0.2678,-1.551),Vector3(-1.061,0.3846,-1.648),Vector3(0,0.3076,-1.662),Vector3(-2.169,0.75,-1.206),Vector3(-2.26,0.7752,-0.9315),Vector3(-2.233,0.85,-1.464),Vector3(-2.484,0.6989,-0.8424),Vector3(-2.699,0.7742,-0.9243),Vector3(-2.766,0.7507,-1.211),Vector3(-2.679,0.8522,-1.48),Vector3(-2.452,0.8018,-1.575),Vector3(-0.3323,0.3508,1.635),Vector3(-0.08821,0.4091,1.675),Vector3(-0.5782,0.412,1.654),Vector3(-0.003092,0.3389,1.72),Vector3(-0.08971,0.3951,1.774),Vector3(-0.3387,0.3315,1.773),Vector3(-0.5857,0.3987,1.749),Vector3(-0.6678,0.3434,1.688),Vector3(-1.006,0.3455,1.673),Vector3(-1.24,0.4191,1.604),Vector3(-0.7626,0.4024,1.722),Vector3(-1.306,0.3656,1.53),Vector3(-1.208,0.4316,1.514),Vector3(-0.9738,0.3637,1.544),Vector3(-0.749,0.4154,1.63),Vector3(-0.6741,0.3435,1.688),Vector3(-1.618,0.3823,1.412),Vector3(-1.806,0.4655,1.274),Vector3(-1.402,0.4288,1.534),Vector3(-1.826,0.4144,1.183),Vector3(-1.713,0.476,1.199),Vector3(-1.52,0.3982,1.298),Vector3(-1.355,0.4409,1.448),Vector3(-1.312,0.366,1.527),Vector3(-2.133,0.4542,0.8992),Vector3(-2.262,0.5534,0.6474),Vector3(-1.942,0.4843,1.139),Vector3(-2.207,0.5084,0.5133),Vector3(-2.056,0.5646,0.5678),Vector3(-1.905,0.4692,0.7925),Vector3(-1.816,0.4949,1.064),Vector3(-1.831,0.415,1.178),Vector3(-2.52,0.5478,0.2331),Vector3(-2.568,0.6464,-0.01431),Vector3(-2.364,0.5779,0.4731),Vector3(-2.421,0.5998,-0.1369),Vector3(-2.218,0.6549,-0.07527),Vector3(-2.11,0.5611,0.1386),Vector3(-2.11,0.5889,0.3951),Vector3(-2.209,0.5091,0.5086),Vector3(-2.728,0.646,-0.4662),Vector3(-2.689,0.7467,-0.7288),Vector3(-2.624,0.6722,-0.1983),Vector3(-2.483,0.6982,-0.8372),Vector3(-2.262,0.7496,-0.7489),Vector3(-2.178,0.6527,-0.5135),Vector3(-2.236,0.6792,-0.2482),Vector3(-2.422,0.6006,-0.1425),Vector3(-2.256,0.5244,-0.9629),Vector3(-2.228,0.6003,-1.503),Vector3(-2.703,0.5234,-0.9556),Vector3(-2.683,0.6025,-1.519),Vector3(-0.08417,0.1595,1.635),Vector3(-0.5817,0.1625,1.614),Vector3(-0.08583,0.1441,1.744),Vector3(-0.5901,0.1478,1.718),Vector3(-1.246,0.1683,1.572),Vector3(-0.7594,0.1513,1.693),Vector3(-1.21,0.1822,1.474),Vector3(-0.7444,0.1657,1.591),Vector3(-1.813,0.2151,1.239),Vector3(-1.401,0.1776,1.506),Vector3(-1.713,0.2265,1.158),Vector3(-1.349,0.1909,1.411),Vector3(-2.268,0.3033,0.6108),Vector3(-1.944,0.2332,1.11),Vector3(-2.053,0.315,0.5275),Vector3(-1.811,0.2445,1.03),Vector3(-2.574,0.3965,-0.05237),Vector3(-2.366,0.3269,0.4429),Vector3(-2.215,0.4053,-0.115),Vector3(-2.104,0.3382,0.3624),Vector3(-2.693,0.497,-0.7676),Vector3(-2.627,0.4213,-0.2291),Vector3(-2.258,0.4999,-0.7881),Vector3(-2.232,0.4285,-0.28),Vector3(-1.901,0.507,-1.517),Vector3(-0.9505,0.7345,-1.49),Vector3(0,0.579,-1.624)]);
{ .SetCoord }
IndexedFaceSet100.Coord := Coordinate102;
{ .SetGeometry }
Shape96.Geometry := IndexedFaceSet100;
{ .AddChild }
Transform95.AddChildren([Shape96]);
{ .AddChildren }
HAnimSegment94.AddChildren([Transform95]);
Coordinate103 := TCoordinateNode.Create;
Coordinate103 := Coordinate102;
{ .SetCoord }
HAnimSegment94.Coord := Coordinate103;
HAnimDisplacer104 := THAnimDisplacerNode.Create;
HAnimDisplacer104.NameField := 'lower_teeth_morphinterpolator';
HAnimDisplacer104.SetCoordIndex([15,16,17,18,19,20,21,22,28,29,30,37,38,39,40,45,50,51,52,53,54,55,56,57,79,80,81,82,83,84,85,86,107,108,109,110,111,112,113,114,152,153,154,155,156,157,158,159,160,166,167,168,169,170,171,181,182,183,184,185,186,187,188,209,210,211,212,213,214,215,216,220,234,239,240,241,242,243,244,245,246,250,264,275,276,277,278,284,285,286,287,296,297,298,299,301,302,311,312,313,314,315,316,317,318,322,335,340,341,342,343,344,345,346,347,351,368,369,370,371,372,373,374,375,379,392,403,404,405,406,412,413,414,415,423,424,425,426,427,429,430,439,440,441,442,443,444,445,446,450,463,468,469,470,471,472,473,474,475,479,496,497,498,499,500,501,502,503,507,520,539,543,544,545,546,547,548,549,550,555,556,557,563,564,570,571,572,573,585,586,587,588,589,594,595,596,597,598,599,600,601,604,605,617,618,619,620,621,622,623,624,625,626,627,628,629,630,631,632,640,665,675,676,677,678,679,680,681,682,683,684,685,686,687,688,689,690,727,728,729,730,731,732,733,734,756,757,758,759,760,761,762,763,767,780,808,810,811,813,814,815,816,817,818,819,820,821,822,832,834,835,836,837,838,839,840,841,852,853,854,855,856,857,858,863,864,865,866,867,868,869,870,874,897,898,899,900,901,902,903,904,905,906,907,908,909,910,911,912,913,914,915,922,924,952,953,962,963,964,965,966,967,968,969,970,971,972,973,974,975,976,977,984,985,1014,1015,1016,1017,1018,1019,1020,1021,1025,1039,1040]);
HAnimDisplacer104.SetDisplacements([Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.6103,0.364),Vector3(0,0.4491,0.199),Vector3(0,0.4097,0.2),Vector3(0,0.449,0.199),Vector3(0,0.4246,0.199),Vector3(0,0.0381,0),Vector3(0,0.4491,0.2),Vector3(0,0.4838,0.2),Vector3(0,0.0381,0),Vector3(0,0.4096,0.2),Vector3(0,0.4097,0.199),Vector3(0,0.0381,0),Vector3(0,0.1457,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1268,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1267,0),Vector3(0,0.1864,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.3661,0.199),Vector3(0,0.3661,0.2),Vector3(0,0.3661,0.199),Vector3(0,0.366,0.199),Vector3(0,0.3661,0.199),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.366,0.199),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.4491,0.199),Vector3(0,0.6103,0.364),Vector3(0,0.4491,0.2),Vector3(0,0.4097,0.2),Vector3(0,0.6103,0.364),Vector3(0,0.0381,0),Vector3(0,0.4096,0.2),Vector3(0,0.4097,0.199),Vector3(0,0.4097,0.199),Vector3(0,0.4097,0.2),Vector3(0,0.0381,0),Vector3(0,0.1864,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.3661,0.2),Vector3(0,0.3661,0.199),Vector3(0,0.3661,0.199),Vector3(0,0.366,0.199),Vector3(0,0.0381,0),Vector3(0,0.3661,0.199),Vector3(0,0.0381,0),Vector3(0,0.366,0.199),Vector3(0,0.0381,0),Vector3(0,0.1458,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1458,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.6497,0.364),Vector3(0,0.4491,0.2),Vector3(0,0.0381,0),Vector3(0,0.4097,0.2),Vector3(0,0.449,0.2),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.4491,0.1995),Vector3(0,0.4491,0.1995),Vector3(0,0.1865,0),Vector3(0,0.0382,0),Vector3(0,0.366,0.2),Vector3(0,0.4097,0.2),Vector3(0,0.4096,0.199),Vector3(0,0.4097,0.2),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.4097,0.2),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1865,0),Vector3(0,0.2207,0),Vector3(0,0.1865,0),Vector3(0,0.1458,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.25,0.117),Vector3(0,0.2501,0.117),Vector3(0,0.2501,0.118),Vector3(0,0.25,0.118),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.2501,0.117),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.6497,0.364),Vector3(0,0.4491,0.2),Vector3(0,0.0381,0),Vector3(0,0.4097,0.2),Vector3(0,0.449,0.2),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.4491,0.1995),Vector3(0,0.4491,0.1995),Vector3(0,0.1865,0),Vector3(0,0.0382,0),Vector3(0,0.366,0.2),Vector3(0,0.4097,0.2),Vector3(0,0.4096,0.199),Vector3(0,0.4097,0.2),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.4097,0.2),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1865,0),Vector3(0,0.2207,0),Vector3(0,0.1865,0),Vector3(0,0.1458,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.25,0.117),Vector3(0,0.2501,0.117),Vector3(0,0.2501,0.118),Vector3(0,0.25,0.118),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.2501,0.117),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.6497,0.364),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.6843,0.364),Vector3(0,0.6103,0.364),Vector3(0,0.449,0.2),Vector3(0,0.4245,0.199),Vector3(0,0.0382,0),Vector3(0,0.4491,0.2),Vector3(0,0.449,0.2),Vector3(0,0.1977,0.082),Vector3(0,0.4491,0.199),Vector3(0,0.0381,0),Vector3(0,0.4097,0.2),Vector3(0,0.4096,0.2),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.4097,0.199),Vector3(0,0.4097,0.2),Vector3(0,0.4246,0.199),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.4097,0.1994),Vector3(0,0.4097,0.1995),Vector3(0,0.4246,0.1995),Vector3(0,0.4097,0.2),Vector3(0,0.0381,0),Vector3(0,0.3661,0.2),Vector3(0,0.4097,0.199),Vector3(0,0.4097,0.2),Vector3(0,0.4097,0.2),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1457,0),Vector3(0,0.4096,0.2),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.366,0.199),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.1457,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1869,0),Vector3(0,0.187,0),Vector3(0,0.1864,0),Vector3(0,0.1865,0),Vector3(0,0.187,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.1267,0),Vector3(0,0.1268,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.1268,0),Vector3(0,0.25,0.117),Vector3(0,0.25,0.118),Vector3(0,0.2501,0.118),Vector3(0,0.25,0.118),Vector3(0,0.2501,0.118),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.2501,0.117),Vector3(0,0.3661,0.2),Vector3(0,0.3661,0.199),Vector3(0,0.366,0.2),Vector3(0,0.366,0.2),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.3661,0.199),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.6497,0.364),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.4491,0.2),Vector3(0,0.0382,0),Vector3(0,0.449,0.2),Vector3(0,0.6103,0.364),Vector3(0,0.4491,0.199),Vector3(0,0.4245,0.199),Vector3(0,0.0381,0),Vector3(0,0.4097,0.199),Vector3(0,0.0381,0),Vector3(0,0.4097,0.2),Vector3(0,0.4246,0.199),Vector3(0,0.4096,0.2),Vector3(0,0.4491,0.199),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.4097,0.1994),Vector3(0,0.4097,0.1995),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1864,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.1458,0),Vector3(0,0.0381,0),Vector3(0,0.4097,0.199),Vector3(0,0.3661,0.2),Vector3(0,0.3661,0.2),Vector3(0,0.4097,0.2),Vector3(0,0.4097,0.2),Vector3(0,0.3661,0.199),Vector3(0,0.4097,0.2),Vector3(0,0.366,0.2),Vector3(0,0.4097,0.2),Vector3(0,0.366,0.2),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.2036,0.2),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.211,0.199),Vector3(0,0.0381,0),Vector3(0,0.3661,0.199),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1864,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1865,0),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1458,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.1458,0),Vector3(0,0.1457,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.25,0.118),Vector3(0,0.25,0.117),Vector3(0,0.2501,0.118),Vector3(0,0.25,0.118),Vector3(0,0.0381,0),Vector3(0,0.2501,0.118),Vector3(0,0.0381,0),Vector3(0,0.2501,0.117),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.1457,0)]);
{ .AddDisplacers }
HAnimSegment94.SetDisplacers([HAnimDisplacer104]);
HAnimDisplacer105 := THAnimDisplacerNode.Create;
HAnimDisplacer105.NameField := 'lower_teeth_morphinterpolator';
HAnimDisplacer105.SetCoordIndex([157]);
HAnimDisplacer105.SetDisplacements([Vector3(0,-0.2991,0)]);
{ .AddDisplacers }
HAnimSegment94.SetDisplacers([HAnimDisplacer105]);
HAnimDisplacer106 := THAnimDisplacerNode.Create;
HAnimDisplacer106.NameField := 'lower_teeth_morphinterpolator';
HAnimDisplacer106.SetCoordIndex([1,18,29,30,42,123,157,158,160,207,208,229,264,277,328,334,376,405,456,462,494,504,506,516,543,547,548,564,608,631,649,665,773,779,814,820,821,894,937,944,1012,1013,1034,1039]);
HAnimDisplacer106.SetDisplacements([Vector3(-0.791,0,0),Vector3(0,-0.2501,0),Vector3(0,-0.2497,0.093),Vector3(0,-0.2496,0.093),Vector3(-0.745,0,0),Vector3(-0.751,0,0),Vector3(0,-0.2501,0),Vector3(0,-0.2497,0.2),Vector3(0,-0.2495,0),Vector3(0.477,0,0.3911),Vector3(0.473,0,0.392),Vector3(0.475,0,0.3911),Vector3(0,0,0.322),Vector3(0,-0.2496,0.092),Vector3(-0.77,0,0),Vector3(-0.77,0,0),Vector3(0.46,0,0.126),Vector3(0,-0.2496,0.092),Vector3(0.817,0,0),Vector3(0.817,0,0),Vector3(0.49,0,0.3913),Vector3(-0.454,0,0.069),Vector3(0,0,0.068),Vector3(0.482,0,0.3911),Vector3(0,-0.2496,0.093),Vector3(0,-0.2497,0.799),Vector3(0,-0.2497,0),Vector3(0,-0.2497,0.092),Vector3(-0.77,0,0),Vector3(-0.1539,0,0.362),Vector3(-0.752,0,0),Vector3(-0.0413,0,0.436),Vector3(-0.769,0,0),Vector3(-0.77,0,0),Vector3(0,-0.2496,0.093),Vector3(0,-0.2497,0),Vector3(0,-0.2497,0.092),Vector3(0.49,0,0.3916),Vector3(0.817,0,0),Vector3(0.482,0,0.3911),Vector3(0.477,0,0.3911),Vector3(0.473,0,0.392),Vector3(0.475,0,0.3911),Vector3(0,0,0.322)]);
{ .AddDisplacers }
HAnimSegment94.SetDisplacers([HAnimDisplacer106]);
HAnimDisplacer107 := THAnimDisplacerNode.Create;
HAnimDisplacer107.NameField := 'lower_teeth_morphinterpolator';
HAnimDisplacer107.SetCoordIndex([4,7,43,44,67,105,106,124,127,128,134,175,265,267,269,290,291,292,309,331,356,366,388,419,420,437,459,516,523,525,527,529,533,577,578,592,593,611,612,650,657,658,725,726,744,747,748,754,776,782,789,848,849,851,894,944]);
HAnimDisplacer107.SetDisplacements([Vector3(0.83,-0.0298,-0.5726),Vector3(0.794,-0.0618,-0.3448),Vector3(0.784,-0.01,-0.3392),Vector3(0.817,0.0217,-0.565),Vector3(0.763,0.1305,-0.2932),Vector3(0.804,0.0523,-0.5909),Vector3(0.798,0.0769,-0.766),Vector3(0.764,0.0129,-0.31),Vector3(0.78,0.0205,-0.3648),Vector3(0.801,0.0441,-0.5324),Vector3(-0.905,-0.0298,-0.5726),Vector3(-0.892,0.0217,-0.565),Vector3(0.832,-0.0886,-0.704),Vector3(0.82,-0.1219,-0.4674),Vector3(0.755,-0.1527,-0.2479),Vector3(0.752,-0.0405,-0.2335),Vector3(0.816,-0.0099,-0.4522),Vector3(0.828,0.023,-0.686),Vector3(0.825,0.0427,-0.682),Vector3(0.812,0.0101,-0.45),Vector3(0.746,0.1387,-0.2104),Vector3(0.824,0.1239,-0.67),Vector3(0.812,0.0913,-0.4386),Vector3(-0.891,-0.0099,-0.4522),Vector3(-0.903,0.023,-0.686),Vector3(-0.9,0.0427,-0.682),Vector3(-0.888,0.0101,-0.45),Vector3(-0.887,0.0913,-0.4386),Vector3(0.831,-0.1055,-0.5833),Vector3(0.83,-0.013,-0.693),Vector3(0.795,-0.1377,-0.3552),Vector3(0.819,-0.0461,-0.4571),Vector3(0.754,-0.077,-0.2375),Vector3(0.814,0.0034,-0.4507),Vector3(0.825,0.0361,-0.683),Vector3(0.792,-0.0255,-0.3404),Vector3(0.827,0.0064,-0.5675),Vector3(0.804,0.0303,-0.5942),Vector3(0.798,0.055,-0.769),Vector3(0.765,-0.0092,-0.3132),Vector3(0.781,-0.0015,-0.3679),Vector3(0.801,0.0221,-0.5362),Vector3(0.804,0.1116,-0.5824),Vector3(0.797,0.1361,-0.758),Vector3(0.764,0.0721,-0.3016),Vector3(0.78,0.0798,-0.3567),Vector3(0.801,0.1033,-0.5244),Vector3(0.824,0.0647,-0.678),Vector3(0.812,0.0321,-0.4469),Vector3(-0.905,-0.013,-0.693),Vector3(-0.894,-0.0461,-0.4571),Vector3(-0.902,0.0064,-0.5675),Vector3(-0.889,0.0034,-0.4507),Vector3(-0.9,0.0361,-0.683),Vector3(-0.899,0.0647,-0.678),Vector3(-0.887,0.0321,-0.4469)]);
{ .AddDisplacers }
HAnimSegment94.SetDisplacers([HAnimDisplacer107]);
HAnimDisplacer108 := THAnimDisplacerNode.Create;
HAnimDisplacer108.NameField := 'lower_teeth_morphinterpolator';
HAnimDisplacer108.SetCoordIndex([18,157]);
HAnimDisplacer108.SetDisplacements([Vector3(0,-0.2691,0),Vector3(0,-0.2691,0)]);
{ .AddDisplacers }
HAnimSegment94.SetDisplacers([HAnimDisplacer108]);
HAnimDisplacer109 := THAnimDisplacerNode.Create;
HAnimDisplacer109.NameField := 'lower_teeth_morphinterpolator';
HAnimDisplacer109.SetCoordIndex([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,163,164,165,166,167,168,169,170,171,172,173,174,175,177,178,179,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,207,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,234,236,237,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,384,385,386,387,388,389,390,391,392,393,394,395,396,397,398,399,400,401,402,403,404,405,406,407,408,409,410,411,412,413,414,415,416,417,418,419,420,421,422,423,424,425,426,427,428,429,430,431,432,433,434,435,436,437,439,440,441,442,443,444,445,446,447,448,449,450,451,452,453,454,455,456,457,458,459,460,461,462,464,465,466,468,469,470,471,472,473,474,475,476,477,478,479,480,481,482,483,484,485,486,487,488,489,490,491,492,493,494,496,497,498,499,500,501,502,503,504,505,506,507,508,509,510,511,512,513,514,515,516,517,518,519,520,521,522,523,524,525,526,527,528,529,530,531,532,533,534,535,536,537,538,539,540,541,542,543,544,545,546,547,548,549,550,551,552,553,554,555,556,557,558,559,560,561,562,563,564,565,566,567,568,569,570,571,572,573,574,575,576,577,578,579,580,581,582,583,584,585,586,587,588,589,590,591,592,593,594,595,596,597,598,599,600,601,602,603,604,605,606,607,608,609,610,611,612,613,614,615,616,617,618,619,620,621,622,623,624,625,626,627,628,629,630,631,632,633,634,635,636,637,638,639,640,641,642,643,644,645,646,647,648,649,650,651,652,653,654,655,656,657,658,659,660,661,662,663,664,665,666,667,668,669,670,671,672,673,674,675,676,677,678,679,680,681,682,683,684,685,686,687,688,689,690,691,692,693,694,695,696,697,698,699,700,701,702,703,704,705,706,707,708,709,710,711,712,713,714,715,716,717,718,719,720,721,722,723,724,725,726,727,728,729,730,731,732,733,734,735,736,737,738,739,740,741,742,743,744,745,746,747,748,749,750,751,752,753,754,755,756,757,758,759,760,761,762,763,764,765,766,767,768,769,770,771,772,773,774,775,776,777,778,779,780,781,782,783,784,786,787,788,789,790,791,792,793,794,795,796,797,798,799,800,801,802,803,804,805,806,807,808,809,810,811,812,813,814,815,816,817,818,819,820,821,822,823,824,826,827,828,829,830,831,832,833,834,835,836,837,838,839,840,841,842,843,844,845,846,847,848,849,851,852,853,854,855,856,857,858,859,860,861,863,864,865,866,867,868,869,870,871,872,873,874,875,876,877,878,879,880,881,882,883,884,885,886,887,888,890,891,892,894,897,898,899,900,901,902,903,904,905,906,907,908,909,910,911,912,913,914,915,916,917,918,919,920,921,922,923,924,925,926,927,928,929,930,931,932,933,934,935,936,937,938,939,940,941,942,943,944,945,946,947,948,949,950,953,954,955,957,958,959,962,963,964,965,966,967,968,969,970,971,972,973,974,975,976,977,978,979,980,981,982,983,984,985,986,987,988,989,990,991,992,993,994,995,996,997,998,999,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1012,1014,1015,1016,1017,1018,1019,1020,1021,1022,1023,1024,1025,1026,1027,1028,1029,1030,1031,1032,1033,1034,1035,1036,1037,1039,1040]);
HAnimDisplacer109.SetDisplacements([Vector3(0,-0.1065,-0.186),Vector3(0,-0.0545,-0.087),Vector3(0,-0.0583,-0.078),Vector3(0,-0.704,-0.3611),Vector3(0,-0.7206,-0.2676),Vector3(0,-0.7339,-0.2231),Vector3(0,-0.9615,-0.6048),Vector3(0,-1.0512,-0.4836),Vector3(0,-1.0466,-0.4324),Vector3(0,-1.1908,-0.8444),Vector3(0,-1.3165,-0.7061),Vector3(0,-1.2484,-0.6481),Vector3(0,-1.3539,-1.0388),Vector3(0,-1.5825,-0.848),Vector3(0,-1.5406,-0.7622),Vector3(0,-1.505,-1.1029),Vector3(0,-1.7601,-0.9216),Vector3(0,-1.7036,-0.8295),Vector3(0,-1.6201,-1.1436),Vector3(0,-1.8417,-0.9553),Vector3(0,-1.7781,-0.8606),Vector3(0,-1.8625,-0.9637),Vector3(0,-1.795,-0.8681),Vector3(0,-0.0577,-0.08),Vector3(0,-0.5348,-0.232),Vector3(0,-0.9055,-0.4015),Vector3(0,-1.1743,-0.6248),Vector3(0,-1.3637,-0.8192),Vector3(0,-1.5099,-0.8797),Vector3(0,-1.5768,-0.9072),Vector3(0,-1.5921,-0.9136),Vector3(0,-0.0576,-0.078),Vector3(0,-0.0591,-0.078),Vector3(0,-0.7415,-0.2084),Vector3(0,-1.055,-0.4173),Vector3(0,-1.2974,-0.642),Vector3(0,-1.5692,-0.7484),Vector3(0,-1.7298,-0.815),Vector3(0,-1.8046,-0.8452),Vector3(0,-1.8659,-0.874),Vector3(0,-1.7874,-0.8416),Vector3(0,-1.615,-0.7701),Vector3(0,-1.3274,-0.6534),Vector3(0,-1.0777,-0.427),Vector3(0,-0.7467,-0.213),Vector3(0,-0.1553,0.015),Vector3(0,-0.0644,-0.042),Vector3(0,-0.7664,-0.033),Vector3(0,-0.7689,-0.0339),Vector3(0,-0.0634,-0.042),Vector3(0,-1.9059,-0.637),Vector3(0,-1.9159,-0.641),Vector3(0,-1.9651,-0.662),Vector3(0,-1.9527,-0.657),Vector3(0,-1.9403,-0.651),Vector3(0,-1.8842,-0.6281),Vector3(0,-1.8406,-0.6099),Vector3(0,-1.8942,-0.6329),Vector3(0,-1.8527,-0.6155),Vector3(0,-1.7298,-0.5639),Vector3(0,-1.6929,-0.5485),Vector3(0,-1.8105,-0.5972),Vector3(0,-1.6682,-0.5383),Vector3(0,-1.3949,-0.5177),Vector3(0,-1.355,-0.4956),Vector3(0,-1.6322,-0.5233),Vector3(0,-1.321,-0.4833),Vector3(0,-1.1574,-0.279),Vector3(0,-1.1363,-0.2721),Vector3(0,-1.318,-0.4939),Vector3(0,-1.0967,-0.2592),Vector3(0,-0.8375,-0.0573),Vector3(0,-0.8302,-0.0548),Vector3(0,-1.0795,-0.2535),Vector3(0,-0.0637,-0.046),Vector3(0,-0.0703,-0.039),Vector3(0,-0.7482,-0.002),Vector3(0,-0.7489,-0.0016),Vector3(0,-0.0697,-0.039),Vector3(0,-1.9268,-0.611),Vector3(0,-1.9345,-0.614),Vector3(0,-1.9675,-0.628),Vector3(0,-1.9591,-0.625),Vector3(0,-1.9375,-0.616),Vector3(0,-1.8976,-0.599),Vector3(0,-1.8667,-0.5866),Vector3(0,-1.9067,-0.603),Vector3(0,-1.8414,-0.5763),Vector3(0,-1.7521,-0.5397),Vector3(0,-1.7269,-0.5285),Vector3(0,-1.8129,-0.5641),Vector3(0,-1.6438,-0.4937),Vector3(0,-1.4178,-0.5037),Vector3(0,-1.4002,-0.4982),Vector3(0,-1.6176,-0.4833),Vector3(0,-1.3245,-0.4748),Vector3(0,-1.1841,-0.2643),Vector3(0,-1.1681,-0.2591),Vector3(0,-1.3076,-0.4695),Vector3(0,-1.0766,-0.229),Vector3(0,-0.8763,-0.0746),Vector3(0,-0.8694,-0.0722),Vector3(0,-1.0656,-0.2254),Vector3(0,-0.0596,-0.069),Vector3(0,-0.7203,-0.1696),Vector3(0,-0.7228,-0.1699),Vector3(0,-0.0585,-0.068),Vector3(0,-1.8312,-0.8135),Vector3(0,-1.8412,-0.8172),Vector3(0,-1.8935,-0.839),Vector3(0,-1.8812,-0.8341),Vector3(0,-1.8687,-0.8294),Vector3(0,-1.8127,-0.8059),Vector3(0,-1.7649,-0.7855),Vector3(0,-1.8205,-0.809),Vector3(0,-1.782,-0.7924),Vector3(0,-1.6566,-0.7409),Vector3(0,-1.6173,-0.725),Vector3(0,-1.7367,-0.7736),Vector3(0,-1.5957,-0.7161),Vector3(0,-1.3589,-0.6344),Vector3(0,-1.3327,-0.6263),Vector3(0,-1.5581,-0.7005),Vector3(0,-1.3074,-0.6184),Vector3(0,-1.1149,-0.4072),Vector3(0,-1.0935,-0.4002),Vector3(0,-1.2408,-0.603),Vector3(0,-1.0551,-0.3876),Vector3(0,-0.7904,-0.1935),Vector3(0,-0.783,-0.1908),Vector3(0,-1.0471,-0.3314),Vector3(0,-0.0586,-0.075),Vector3(0,-0.1083,-0.177),Vector3(0,0,-0.066),Vector3(0,-0.7206,-0.2676),Vector3(0,-0.704,-0.3611),Vector3(0,-0.5348,-0.232),Vector3(0,-0.7339,-0.2231),Vector3(0,-1.0512,-0.4836),Vector3(0,-0.9615,-0.6048),Vector3(0,-0.9055,-0.4015),Vector3(0,-1.0466,-0.4324),Vector3(0,-1.3165,-0.7061),Vector3(0,-1.1908,-0.8444),Vector3(0,-1.1743,-0.6248),Vector3(0,-1.2484,-0.6481),Vector3(0,-1.5825,-0.848),Vector3(0,-1.3539,-1.0388),Vector3(0,-1.3637,-0.8192),Vector3(0,-1.5406,-0.7622),Vector3(0,-1.7601,-0.9216),Vector3(0,-1.505,-1.1029),Vector3(0,-1.5099,-0.8797),Vector3(0,-1.7036,-0.8295),Vector3(0,-1.8417,-0.9553),Vector3(0,-1.6201,-1.1436),Vector3(0,-1.5768,-0.9072),Vector3(0,-1.7781,-0.8606),Vector3(0,-1.6495,-1.1546),Vector3(0,-0.7415,-0.2084),Vector3(0,-1.055,-0.4173),Vector3(0,-1.2974,-0.642),Vector3(0,-1.5692,-0.7484),Vector3(0,-1.7298,-0.815),Vector3(0,-1.8046,-0.8452),Vector3(0,-1.8191,-0.8516),Vector3(0,-1.8659,-0.874),Vector3(0,-1.8834,-0.8815),Vector3(0,-1.7874,-0.8416),Vector3(0,-1.615,-0.7701),Vector3(0,-1.3274,-0.6534),Vector3(0,-1.0777,-0.427),Vector3(0,-0.7467,-0.213),Vector3(0,0.0049,-0.039),Vector3(0,-0.7482,-0.002),Vector3(0,-0.7489,-0.0016),Vector3(0,-1.9268,-0.611),Vector3(0,-1.9345,-0.614),Vector3(0,-1.9675,-0.628),Vector3(0,-1.9591,-0.625),Vector3(0,-1.9375,-0.616),Vector3(0,-1.8976,-0.599),Vector3(0,-1.8667,-0.5866),Vector3(0,-1.9067,-0.603),Vector3(0,-1.8414,-0.5763),Vector3(0,-1.7521,-0.5397),Vector3(0,-1.7269,-0.5285),Vector3(0,-1.8129,-0.5641),Vector3(0,-1.6438,-0.4937),Vector3(0,-1.4178,-0.5037),Vector3(0,-1.4002,-0.4982),Vector3(0,-1.6176,-0.4833),Vector3(0,-1.3245,-0.4748),Vector3(0,-1.1841,-0.2643),Vector3(0,-1.1681,-0.2591),Vector3(0,-1.3076,-0.4695),Vector3(0,-1.0766,-0.229),Vector3(0,-0.9004,-0.0791),Vector3(0,-0.8935,-0.0766),Vector3(0,-1.0656,-0.2254),Vector3(0,-0.7203,-0.1696),Vector3(0,-0.7228,-0.1699),Vector3(0,-1.8412,-0.8172),Vector3(0,-1.8312,-0.8135),Vector3(0,-1.8935,-0.839),Vector3(0,-1.8812,-0.8341),Vector3(0,-1.8127,-0.8059),Vector3(0,-1.8687,-0.8294),Vector3(0,-1.7649,-0.7855),Vector3(0,-1.8205,-0.809),Vector3(0,-1.6566,-0.7409),Vector3(0,-1.782,-0.7924),Vector3(0,-1.6173,-0.725),Vector3(0,-1.7367,-0.7736),Vector3(0,-1.3589,-0.6344),Vector3(0,-1.5957,-0.7161),Vector3(0,-1.3327,-0.6263),Vector3(0,-1.5581,-0.7005),Vector3(0,-1.1149,-0.4072),Vector3(0,-1.3074,-0.6184),Vector3(0,-1.0935,-0.4002),Vector3(0,-1.2408,-0.603),Vector3(0,-0.7904,-0.1935),Vector3(0,-1.0551,-0.3876),Vector3(0,-0.783,-0.1908),Vector3(0,-1.0471,-0.3314),Vector3(0,-0.1433,0.025),Vector3(0,-0.7664,-0.033),Vector3(0,-0.7689,-0.0339),Vector3(0,-1.9059,-0.637),Vector3(0,-1.9159,-0.641),Vector3(0,-1.9651,-0.662),Vector3(0,-1.9527,-0.657),Vector3(0,-1.9403,-0.651),Vector3(0,-1.8842,-0.6281),Vector3(0,-1.8406,-0.6099),Vector3(0,-1.8942,-0.6329),Vector3(0,-1.8527,-0.6155),Vector3(0,-1.7298,-0.5639),Vector3(0,-1.6929,-0.5485),Vector3(0,-1.8105,-0.5972),Vector3(0,-1.6682,-0.5383),Vector3(0,-1.3949,-0.5177),Vector3(0,-1.355,-0.4956),Vector3(0,-1.6322,-0.5233),Vector3(0,-1.321,-0.4833),Vector3(0,-1.1574,-0.279),Vector3(0,-1.1363,-0.2721),Vector3(0,-1.318,-0.4939),Vector3(0,-1.0967,-0.2592),Vector3(0,-0.8616,-0.0618),Vector3(0,-0.8542,-0.0593),Vector3(0,-1.0795,-0.2535),Vector3(0,-0.1561,0.05),Vector3(0,-0.1556,0.05),Vector3(0,-0.4869,-0.267),Vector3(0,-0.494,-0.212),Vector3(0,-0.8772,-0.4194),Vector3(0,-0.8773,-0.3752),Vector3(0,-1.1631,-0.6652),Vector3(0,-1.1733,-0.4664),Vector3(0,-1.3976,-0.9042),Vector3(0,-1.3776,-0.7285),Vector3(0,-1.5806,-0.9898),Vector3(0,-1.61,-0.8652),Vector3(0,-1.7302,-1.047),Vector3(0,-1.7222,-0.9111),Vector3(0,-1.8119,-1.076),Vector3(0,-1.7644,-0.9289),Vector3(0,-0.4938,-0.17),Vector3(0,-0.8728,-0.3493),Vector3(0,-1.148,-0.5188),Vector3(0,-1.3968,-0.6735),Vector3(0,-1.6487,-0.7827),Vector3(0,-1.7626,-0.829),Vector3(0,-1.8048,-0.8467),Vector3(0,-1.8764,-0.9055),Vector3(0,-1.8295,-0.8866),Vector3(0,-1.7057,-0.8351),Vector3(0,-1.4634,-0.7346),Vector3(0,-1.1956,-0.5538),Vector3(0,-0.9296,-0.3747),Vector3(0,-0.5003,-0.194),Vector3(0,-0.0662,-0.087),Vector3(0,-0.7097,-0.2823),Vector3(0,-0.887,-0.3924),Vector3(0,-1.0702,-0.5197),Vector3(0,-1.2008,-0.6248),Vector3(0,-1.2362,-0.7165),Vector3(0,-1.2957,-0.7299),Vector3(0,-0.5636,-0.023),Vector3(0,-1.9467,-0.62),Vector3(0,-1.9021,-0.602),Vector3(0,-1.7838,-0.5524),Vector3(0,-1.5453,-0.4535),Vector3(0,-1.2347,-0.3714),Vector3(0,-0.9698,-0.1732),Vector3(0,-0.4961,-0.167),Vector3(0,-0.7461,-0.2067),Vector3(0,-0.4946,-0.167),Vector3(0,-0.0517,-0.073),Vector3(0,-1.8129,-0.8439),Vector3(0,-1.8551,-0.8619),Vector3(0,-1.8829,-0.8734),Vector3(0,-1.8406,-0.8555),Vector3(0,-1.8359,-0.8539),Vector3(0,-1.7659,-0.8248),Vector3(0,-1.7697,-0.8265),Vector3(0,-1.8406,-0.8556),Vector3(0,-1.7128,-0.803),Vector3(0,-1.6029,-0.7577),Vector3(0,-1.6561,-0.7789),Vector3(0,-1.766,-0.8252),Vector3(0,-1.4721,-0.7034),Vector3(0,-1.3129,-0.6442),Vector3(0,-1.3988,-0.6707),Vector3(0,-1.603,-0.7573),Vector3(0,-1.2009,-0.5337),Vector3(0,-1.0686,-0.4187),Vector3(0,-1.1504,-0.5154),Vector3(0,-1.313,-0.6441),Vector3(0,-0.9394,-0.3468),Vector3(0,-0.7464,-0.2064),Vector3(0,-0.8729,-0.3486),Vector3(0,-1.0683,-0.4185),Vector3(0,-0.1426,0.02),Vector3(0,-0.5403,-0.019),Vector3(0,-0.8071,-0.0218),Vector3(0,-0.5629,-0.023),Vector3(0,-0.0584,-0.036),Vector3(0,-1.9168,-0.607),Vector3(0,-1.9545,-0.623),Vector3(0,-1.9766,-0.633),Vector3(0,-1.9399,-0.616),Vector3(0,-1.9306,-0.613),Vector3(0,-1.8661,-0.5866),Vector3(0,-1.8737,-0.5897),Vector3(0,-1.9382,-0.616),Vector3(0,-1.8083,-0.5621),Vector3(0,-1.7037,-0.5196),Vector3(0,-1.7583,-0.5417),Vector3(0,-1.8629,-0.5853),Vector3(0,-1.57,-0.4635),Vector3(0,-1.3486,-0.4658),Vector3(0,-1.5213,-0.4435),Vector3(0,-1.699,-0.5172),Vector3(0,-1.2489,-0.3758),Vector3(0,-1.1276,-0.2458),Vector3(0,-1.2203,-0.3669),Vector3(0,-1.3442,-0.4642),Vector3(0,-0.9778,-0.1758),Vector3(0,-0.8115,-0.0233),Vector3(0,-0.962,-0.1706),Vector3(0,-1.1232,-0.2444),Vector3(0,-0.5187,-0.092),Vector3(0,-0.7781,-0.1126),Vector3(0,-0.5171,-0.091),Vector3(0,-0.055,-0.054),Vector3(0,-1.8655,-0.7234),Vector3(0,-1.9052,-0.7402),Vector3(0,-1.9314,-0.7505),Vector3(0,-1.8907,-0.7337),Vector3(0,-1.8855,-0.7309),Vector3(0,-1.817,-0.7028),Vector3(0,-1.8223,-0.705),Vector3(0,-1.8907,-0.7341),Vector3(0,-1.7623,-0.6803),Vector3(0,-1.6539,-0.6353),Vector3(0,-1.7078,-0.658),Vector3(0,-1.8162,-0.703),Vector3(0,-1.5224,-0.581),Vector3(0,-1.3379,-0.5637),Vector3(0,-1.4247,-0.5904),Vector3(0,-1.6531,-0.6349),Vector3(0,-1.2254,-0.4532),Vector3(0,-1.098,-0.3301),Vector3(0,-1.2082,-0.3781),Vector3(0,-1.3382,-0.5635),Vector3(0,-0.9503,-0.26),Vector3(0,-0.7789,-0.1129),Vector3(0,-1.0301,-0.2431),Vector3(0,-1.0972,-0.3299),Vector3(0,-0.146,0.039),Vector3(0,-0.5,-0.247),Vector3(0,-0.482,-0.154),Vector3(0,-0.8772,-0.4194),Vector3(0,-0.8773,-0.3752),Vector3(0,-1.1631,-0.6652),Vector3(0,-1.1733,-0.4664),Vector3(0,-1.3976,-0.9042),Vector3(0,-1.3776,-0.7285),Vector3(0,-1.5806,-0.9898),Vector3(0,-1.61,-0.8652),Vector3(0,-1.7302,-1.047),Vector3(0,-1.7222,-0.9111),Vector3(0,-1.8119,-1.076),Vector3(0,-1.7644,-0.9289),Vector3(0,-0.4756,-0.057),Vector3(0,-0.8728,-0.3493),Vector3(0,-1.148,-0.5188),Vector3(0,-1.3968,-0.6735),Vector3(0,-1.6487,-0.7827),Vector3(0,-1.7626,-0.829),Vector3(0,-1.8048,-0.8467),Vector3(0,-1.8764,-0.9055),Vector3(0,-1.8295,-0.8866),Vector3(0,-1.7057,-0.8351),Vector3(0,-1.4634,-0.7346),Vector3(0,-1.1956,-0.5538),Vector3(0,-0.9296,-0.3747),Vector3(0,-0.4859,-0.074),Vector3(0,-0.2957,-0.074),Vector3(0,-0.7097,-0.2823),Vector3(0,-0.887,-0.3924),Vector3(0,-1.0702,-0.5197),Vector3(0,-1.2008,-0.6248),Vector3(0,-1.2362,-0.7165),Vector3(0,-1.2957,-0.7299),Vector3(0,-0.4989,0.039),Vector3(0,-1.9467,-0.62),Vector3(0,-1.9021,-0.602),Vector3(0,-1.7838,-0.5524),Vector3(0,-1.5453,-0.4535),Vector3(0,-1.2347,-0.3714),Vector3(0,-0.9698,-0.1732),Vector3(0,-0.4769,-0.056),Vector3(0,-0.7461,-0.2067),Vector3(0,-0.4759,-0.056),Vector3(0,-1.8129,-0.8439),Vector3(0,-1.8551,-0.8619),Vector3(0,-1.8829,-0.8734),Vector3(0,-1.8406,-0.8555),Vector3(0,-1.8359,-0.8539),Vector3(0,-1.7659,-0.8248),Vector3(0,-1.7697,-0.8265),Vector3(0,-1.8406,-0.8556),Vector3(0,-1.7128,-0.803),Vector3(0,-1.6029,-0.7577),Vector3(0,-1.6561,-0.7789),Vector3(0,-1.766,-0.8252),Vector3(0,-1.4721,-0.7034),Vector3(0,-1.3129,-0.6442),Vector3(0,-1.3988,-0.6707),Vector3(0,-1.603,-0.7573),Vector3(0,-1.2009,-0.5337),Vector3(0,-1.0686,-0.4187),Vector3(0,-1.1504,-0.5154),Vector3(0,-1.313,-0.6441),Vector3(0,-0.9394,-0.3468),Vector3(0,-0.7464,-0.2064),Vector3(0,-0.8729,-0.3486),Vector3(0,-1.0683,-0.4185),Vector3(0,-0.4994,0.039),Vector3(0,-0.8071,-0.0218),Vector3(0,-0.4985,0.04),Vector3(0,-1.9168,-0.607),Vector3(0,-1.9545,-0.623),Vector3(0,-1.9766,-0.633),Vector3(0,-1.9399,-0.616),Vector3(0,-1.9306,-0.613),Vector3(0,-1.8661,-0.5866),Vector3(0,-1.8737,-0.5897),Vector3(0,-1.9382,-0.616),Vector3(0,-1.8083,-0.5621),Vector3(0,-1.7037,-0.5196),Vector3(0,-1.7583,-0.5417),Vector3(0,-1.8629,-0.5853),Vector3(0,-1.57,-0.4635),Vector3(0,-1.3486,-0.4658),Vector3(0,-1.5213,-0.4435),Vector3(0,-1.699,-0.5172),Vector3(0,-1.2489,-0.3758),Vector3(0,-1.1276,-0.2458),Vector3(0,-1.2203,-0.3669),Vector3(0,-1.3442,-0.4642),Vector3(0,-0.9778,-0.1758),Vector3(0,-0.8115,-0.0233),Vector3(0,-0.962,-0.1706),Vector3(0,-1.1232,-0.2444),Vector3(0,-0.4884,-0.008),Vector3(0,-0.7781,-0.1126),Vector3(0,-0.4874,-0.007),Vector3(0,-1.8655,-0.7234),Vector3(0,-1.9052,-0.7402),Vector3(0,-1.9314,-0.7505),Vector3(0,-1.8907,-0.7337),Vector3(0,-1.8855,-0.7309),Vector3(0,-1.817,-0.7028),Vector3(0,-1.8223,-0.705),Vector3(0,-1.8907,-0.7341),Vector3(0,-1.7623,-0.6803),Vector3(0,-1.6539,-0.6353),Vector3(0,-1.7078,-0.658),Vector3(0,-1.8162,-0.703),Vector3(0,-1.5224,-0.581),Vector3(0,-1.3379,-0.5637),Vector3(0,-1.4247,-0.5904),Vector3(0,-1.6531,-0.6349),Vector3(0,-1.2254,-0.4532),Vector3(0,-1.098,-0.3301),Vector3(0,-1.2082,-0.3781),Vector3(0,-1.3382,-0.5635),Vector3(0,-0.9503,-0.26),Vector3(0,-0.7789,-0.1129),Vector3(0,-1.0301,-0.2431),Vector3(0,-1.0972,-0.3299),Vector3(0,-0.146,0.039),Vector3(0,-0.1182,-0.136),Vector3(0,-0.0579,-0.078),Vector3(0,-0.7102,-0.3113),Vector3(0,-0.4881,-0.318),Vector3(0,-0.4975,-0.223),Vector3(0,-0.5047,-0.184),Vector3(0,-1.0276,-0.5587),Vector3(0,-0.8639,-0.4673),Vector3(0,-0.8872,-0.3755),Vector3(0,-0.8831,-0.3509),Vector3(0,-1.2938,-0.7813),Vector3(0,-1.0861,-0.7078),Vector3(0,-1.1858,-0.59),Vector3(0,-1.1422,-0.5339),Vector3(0,-1.4918,-0.9503),Vector3(0,-1.2744,-0.9987),Vector3(0,-1.4433,-0.79),Vector3(0,-1.3904,-0.6871),Vector3(0,-1.6613,-1.022),Vector3(0,-1.432,-1.0735),Vector3(0,-1.6863,-0.8903),Vector3(0,-1.6366,-0.8024),Vector3(0,-1.7848,-1.0661),Vector3(0,-1.5685,-1.126),Vector3(0,-1.811,-0.9418),Vector3(0,-1.7497,-0.8489),Vector3(0,-1.8166,-1.0783),Vector3(0,-1.6457,-1.1525),Vector3(0,-1.8578,-0.9613),Vector3(0,-1.792,-0.8667),Vector3(0,-0.7171,-0.2649),Vector3(0,-1.0242,-0.4788),Vector3(0,-1.2356,-0.6897),Vector3(0,-1.5139,-0.8249),Vector3(0,-1.676,-0.8926),Vector3(0,-1.7506,-0.9228),Vector3(0,-1.7685,-0.9303),Vector3(0,-0.4929,-0.221),Vector3(0,-0.7897,-0.3909),Vector3(0,-1.068,-0.5294),Vector3(0,-1.3198,-0.6671),Vector3(0,-1.477,-0.8697),Vector3(0,-1.58,-0.9127),Vector3(0,-1.6193,-0.9286),Vector3(0,-0.4951,-0.17),Vector3(0,-0.8728,-0.3491),Vector3(0,-1.1494,-0.5181),Vector3(0,-1.3979,-0.6731),Vector3(0,-1.6524,-0.7825),Vector3(0,-1.7671,-0.8296),Vector3(0,-1.8093,-0.8471),Vector3(0,-1.881,-0.884),Vector3(0,-1.834,-0.8647),Vector3(0,-1.71,-0.8133),Vector3(0,-1.4695,-0.7138),Vector3(0,-1.1994,-0.5404),Vector3(0,-0.9361,-0.3561),Vector3(0,-0.4923,-0.173),Vector3(0,-0.0564,-0.081),Vector3(0,-0.0588,-0.078),Vector3(0,-0.7392,-0.2088),Vector3(0,-1.0519,-0.4172),Vector3(0,-1.295,-0.6421),Vector3(0,-1.5518,-0.742),Vector3(0,-1.7155,-0.8101),Vector3(0,-1.791,-0.8416),Vector3(0,-1.8078,-0.8482),Vector3(0,-1.8602,-0.8993),Vector3(0,-1.7795,-0.865),Vector3(0,-1.6027,-0.7922),Vector3(0,-1.3264,-0.6698),Vector3(0,-1.0732,-0.4441),Vector3(0,-0.74,-0.2305),Vector3(0,-0.1465,-0.05),Vector3(0,-0.506,-0.232),Vector3(0,-0.7291,-0.2822),Vector3(0,-0.8957,-0.3897),Vector3(0,-1.063,-0.5088),Vector3(0,-1.1763,-0.4855),Vector3(0,-1.1831,-0.6108),Vector3(0,-1.19,-0.613),Vector3(0,-0.0585,-0.078),Vector3(0,-0.7456,-0.2093),Vector3(0,-1.8392,-0.8578),Vector3(0,-1.7646,-0.8272),Vector3(0,-1.6015,-0.7603),Vector3(0,-1.3125,-0.6458),Vector3(0,-1.0679,-0.4204),Vector3(0,-0.0587,-0.074),Vector3(0,-0.7116,-0.1949),Vector3(0,-0.7142,-0.1962),Vector3(0,-0.0576,-0.074),Vector3(0,-0.535,-0.037),Vector3(0,-0.8007,-0.0447),Vector3(0,-0.5574,-0.042),Vector3(0,-0.0574,-0.041),Vector3(0,-1.8167,-0.8455),Vector3(0,-1.8267,-0.8502),Vector3(0,-1.8796,-0.8719),Vector3(0,-1.8673,-0.867),Vector3(0,-1.9028,-0.6353),Vector3(0,-1.9419,-0.652),Vector3(0,-1.9665,-0.662),Vector3(0,-1.9274,-0.646),Vector3(0,-1.8559,-0.8623),Vector3(0,-1.7999,-0.8389),Vector3(0,-1.7514,-0.8186),Vector3(0,-1.806,-0.842),Vector3(0,-1.9205,-0.643),Vector3(0,-1.8536,-0.6154),Vector3(0,-1.8597,-0.6179),Vector3(0,-1.9265,-0.646),Vector3(0,-1.7682,-0.8262),Vector3(0,-1.6428,-0.7745),Vector3(0,-1.6037,-0.7579),Vector3(0,-1.7221,-0.8072),Vector3(0,-1.7983,-0.5927),Vector3(0,-1.6904,-0.5484),Vector3(0,-1.7452,-0.5703),Vector3(0,-1.852,-0.6146),Vector3(0,-1.5829,-0.7495),Vector3(0,-1.3522,-0.6562),Vector3(0,-1.3261,-0.6481),Vector3(0,-1.5445,-0.7331),Vector3(0,-1.5582,-0.493),Vector3(0,-1.3386,-0.4897),Vector3(0,-1.5082,-0.4724),Vector3(0,-1.689,-0.5467),Vector3(0,-1.3007,-0.6402),Vector3(0,-1.107,-0.4312),Vector3(0,-1.0854,-0.4241),Vector3(0,-1.2341,-0.6248),Vector3(0,-1.2432,-0.3952),Vector3(0,-1.1195,-0.2666),Vector3(0,-1.2141,-0.3862),Vector3(0,-1.3368,-0.489),Vector3(0,-1.0473,-0.4117),Vector3(0,-0.7817,-0.2192),Vector3(0,-0.7742,-0.2165),Vector3(0,-1.1332,-0.4157),Vector3(0,-0.9709,-0.1968),Vector3(0,-0.8026,-0.0454),Vector3(0,-0.955,-0.1917),Vector3(0,-1.1176,-0.266),Vector3(0,-0.1558,0.05),Vector3(0,-0.0578,-0.079),Vector3(0,-0.5642,-0.023),Vector3(0,-0.7735,-0.0103),Vector3(0,-0.5631,-0.023),Vector3(0,-0.0651,-0.037),Vector3(0,-0.0654,-0.038),Vector3(0,-0.7731,-0.0101),Vector3(0,-0.7757,-0.011),Vector3(0,-0.0644,-0.037),Vector3(0,-1.9252,-0.611),Vector3(0,-1.9521,-0.622),Vector3(0,-1.9682,-0.628),Vector3(0,-1.9414,-0.617),Vector3(0,-1.919,-0.608),Vector3(0,-1.9291,-0.612),Vector3(0,-1.9751,-0.631),Vector3(0,-1.9637,-0.627),Vector3(0,-1.9221,-0.61),Vector3(0,-1.8753,-0.5904),Vector3(0,-1.8822,-0.5927),Vector3(0,-1.929,-0.612),Vector3(0,-1.9514,-0.621),Vector3(0,-1.8961,-0.599),Vector3(0,-1.8536,-0.581),Vector3(0,-1.9074,-0.604),Vector3(0,-1.8014,-0.5594),Vector3(0,-1.7245,-0.5282),Vector3(0,-1.7652,-0.5444),Vector3(0,-1.8421,-0.5766),Vector3(0,-1.8628,-0.5848),Vector3(0,-1.7415,-0.5351),Vector3(0,-1.706,-0.5205),Vector3(0,-1.8229,-0.5683),Vector3(0,-1.563,-0.4608),Vector3(0,-1.3896,-0.495),Vector3(0,-1.5279,-0.4463),Vector3(0,-1.6599,-0.5013),Vector3(0,-1.6783,-0.5083),Vector3(0,-1.4013,-0.4985),Vector3(0,-1.3651,-0.4717),Vector3(0,-1.6439,-0.4939),Vector3(0,-1.2452,-0.3747),Vector3(0,-1.1554,-0.2549),Vector3(0,-1.2241,-0.3682),Vector3(0,-1.3124,-0.4528),Vector3(0,-1.3284,-0.4585),Vector3(0,-1.1651,-0.2581),Vector3(0,-1.1443,-0.2512),Vector3(0,-1.3235,-0.4745),Vector3(0,-0.9757,-0.1751),Vector3(0,-0.8434,-0.0342),Vector3(0,-0.9641,-0.1713),Vector3(0,-1.0933,-0.2345),Vector3(0,-1.1026,-0.2376),Vector3(0,-0.8461,-0.0351),Vector3(0,-0.8389,-0.0327),Vector3(0,-1.0857,-0.232),Vector3(0,-0.0621,-0.056),Vector3(0,-0.7436,-0.1011),Vector3(0,-0.7463,-0.1014),Vector3(0,-0.061,-0.055),Vector3(0,-1.8685,-0.7246),Vector3(0,-1.8785,-0.7284),Vector3(0,-1.9291,-0.7493),Vector3(0,-1.9168,-0.7444),Vector3(0,-1.9053,-0.7398),Vector3(0,-1.8493,-0.716),Vector3(0,-1.8032,-0.6976),Vector3(0,-1.8577,-0.7203),Vector3(0,-1.8176,-0.7037),Vector3(0,-1.6931,-0.6516),Vector3(0,-1.6555,-0.6362),Vector3(0,-1.7739,-0.6851),Vector3(0,-1.6322,-0.6269),Vector3(0,-1.3773,-0.5756),Vector3(0,-1.351,-0.5677),Vector3(0,-1.5955,-0.6114),Vector3(0,-1.3251,-0.5596),Vector3(0,-1.1362,-0.3426),Vector3(0,-1.1149,-0.3357),Vector3(0,-1.3003,-0.5519),Vector3(0,-1.0762,-0.323),Vector3(0,-0.814,-0.1249),Vector3(0,-0.8066,-0.1224),Vector3(0,-1.0589,-0.3173),Vector3(0,-0.0608,-0.062),Vector3(0,-0.5022,-0.147),Vector3(0,-0.7547,-0.1813),Vector3(0,-0.5007,-0.146),Vector3(0,-0.1449,0.028),Vector3(0,-1.8273,-0.8116),Vector3(0,-1.8688,-0.8289),Vector3(0,-1.8958,-0.8398),Vector3(0,-1.8543,-0.8225),Vector3(0,-1.8488,-0.8203),Vector3(0,-1.7796,-0.7917),Vector3(0,-1.7851,-0.7941),Vector3(0,-1.8543,-0.8227),Vector3(0,-1.7257,-0.7701),Vector3(0,-1.6165,-0.7244),Vector3(0,-1.6696,-0.7469),Vector3(0,-1.7787,-0.7915),Vector3(0,-1.4859,-0.6701),Vector3(0,-1.3205,-0.6224),Vector3(0,-1.4064,-0.649),Vector3(0,-1.6167,-0.7245),Vector3(0,-1.2076,-0.5119),Vector3(0,-1.0766,-0.3946),Vector3(0,-1.1583,-0.4914),Vector3(0,-1.3197,-0.6223),Vector3(0,-0.9294,-0.3241),Vector3(0,-0.7552,-0.1818),Vector3(0,-0.9511,-0.3416),Vector3(0,-1.0761,-0.3945),Vector3(0,-0.1436,0.025),Vector3(0,-0.0856,-0.139),Vector3(0,-0.488,-0.157),Vector3(0,-0.7102,-0.3113),Vector3(0,-0.4771,-0.317),Vector3(0,-0.4861,-0.156),Vector3(0,-0.7171,-0.2649),Vector3(0,-0.4886,-0.067),Vector3(0,-0.8872,-0.3755),Vector3(0,-1.0276,-0.5587),Vector3(0,-0.8639,-0.4673),Vector3(0,-0.7897,-0.3909),Vector3(0,-1.0242,-0.4788),Vector3(0,-0.8831,-0.3509),Vector3(0,-1.1858,-0.59),Vector3(0,-1.2938,-0.7813),Vector3(0,-1.0861,-0.7078),Vector3(0,-1.068,-0.5294),Vector3(0,-1.2356,-0.6897),Vector3(0,-1.1422,-0.5339),Vector3(0,-1.4433,-0.79),Vector3(0,-1.4918,-0.9503),Vector3(0,-1.2744,-0.9987),Vector3(0,-1.3198,-0.6671),Vector3(0,-1.5139,-0.8249),Vector3(0,-1.3904,-0.6871),Vector3(0,-1.6863,-0.8903),Vector3(0,-1.6613,-1.022),Vector3(0,-1.432,-1.0735),Vector3(0,-1.477,-0.8697),Vector3(0,-1.676,-0.8926),Vector3(0,-1.6366,-0.8024),Vector3(0,-1.811,-0.9418),Vector3(0,-1.7848,-1.0661),Vector3(0,-1.5685,-1.126),Vector3(0,-1.58,-0.9127),Vector3(0,-1.7506,-0.9228),Vector3(0,-1.7497,-0.8489),Vector3(0,-1.8578,-0.9613),Vector3(0,-1.6457,-1.1525),Vector3(0,-1.6193,-0.9286),Vector3(0,-1.792,-0.8667),Vector3(0,-0.7392,-0.2088),Vector3(0,-0.4764,-0.057),Vector3(0,-1.0519,-0.4172),Vector3(0,-0.8728,-0.3491),Vector3(0,-1.295,-0.6421),Vector3(0,-1.1494,-0.5181),Vector3(0,-1.5518,-0.742),Vector3(0,-1.3979,-0.6731),Vector3(0,-1.7155,-0.8101),Vector3(0,-1.6524,-0.7825),Vector3(0,-1.791,-0.8416),Vector3(0,-1.7671,-0.8296),Vector3(0,-1.8093,-0.8471),Vector3(0,-1.8602,-0.8993),Vector3(0,-1.881,-0.884),Vector3(0,-1.881,-0.9079),Vector3(0,-1.7795,-0.865),Vector3(0,-1.834,-0.8647),Vector3(0,-1.6027,-0.7922),Vector3(0,-1.71,-0.8133),Vector3(0,-1.3264,-0.6698),Vector3(0,-1.4695,-0.7138),Vector3(0,-1.0732,-0.4441),Vector3(0,-1.1994,-0.5404),Vector3(0,-0.74,-0.2305),Vector3(0,-0.9361,-0.3561),Vector3(0,-0.4748,-0.059),Vector3(0,-0.1465,-0.05),Vector3(0,-0.4914,-0.16),Vector3(0,-0.7291,-0.2822),Vector3(0,-0.8957,-0.3897),Vector3(0,-1.063,-0.5088),Vector3(0,-1.1763,-0.4855),Vector3(0,-1.1831,-0.6108),Vector3(0,-0.4993,0.039),Vector3(0,-0.7735,-0.0103),Vector3(0,-0.4986,0.039),Vector3(0,-1.9252,-0.611),Vector3(0,-1.9521,-0.622),Vector3(0,-1.9682,-0.628),Vector3(0,-1.9414,-0.617),Vector3(0,-1.9221,-0.61),Vector3(0,-1.8753,-0.5904),Vector3(0,-1.8822,-0.5927),Vector3(0,-1.929,-0.612),Vector3(0,-1.8014,-0.5594),Vector3(0,-1.7245,-0.5282),Vector3(0,-1.7652,-0.5444),Vector3(0,-1.8421,-0.5766),Vector3(0,-1.563,-0.4608),Vector3(0,-1.3896,-0.495),Vector3(0,-1.5279,-0.4463),Vector3(0,-1.6599,-0.5013),Vector3(0,-1.2452,-0.3747),Vector3(0,-1.1554,-0.2549),Vector3(0,-1.2241,-0.3682),Vector3(0,-1.3124,-0.4528),Vector3(0,-0.9757,-0.1751),Vector3(0,-0.8674,-0.0387),Vector3(0,-0.9641,-0.1713),Vector3(0,-1.0933,-0.2345),Vector3(0,-0.7116,-0.1949),Vector3(0,-0.48,-0.043),Vector3(0,-0.7456,-0.2093),Vector3(0,-0.7142,-0.1962),Vector3(0,-0.7547,-0.1813),Vector3(0,-0.4791,-0.042),Vector3(0,-1.8267,-0.8502),Vector3(0,-1.8273,-0.8116),Vector3(0,-1.8167,-0.8455),Vector3(0,-1.8537,-0.8641),Vector3(0,-1.8796,-0.8719),Vector3(0,-1.8688,-0.8289),Vector3(0,-1.8673,-0.867),Vector3(0,-1.8958,-0.8398),Vector3(0,-1.8392,-0.8578),Vector3(0,-1.8543,-0.8225),Vector3(0,-1.7999,-0.8389),Vector3(0,-1.8488,-0.8203),Vector3(0,-1.8559,-0.8623),Vector3(0,-1.7646,-0.8272),Vector3(0,-1.7514,-0.8186),Vector3(0,-1.7796,-0.7917),Vector3(0,-1.806,-0.842),Vector3(0,-1.7851,-0.7941),Vector3(0,-1.8543,-0.8227),Vector3(0,-1.6428,-0.7745),Vector3(0,-1.7257,-0.7701),Vector3(0,-1.7682,-0.8262),Vector3(0,-1.6015,-0.7603),Vector3(0,-1.6037,-0.7579),Vector3(0,-1.6165,-0.7244),Vector3(0,-1.7221,-0.8072),Vector3(0,-1.6696,-0.7469),Vector3(0,-1.7787,-0.7915),Vector3(0,-1.3522,-0.6562),Vector3(0,-1.4859,-0.6701),Vector3(0,-1.5829,-0.7495),Vector3(0,-1.3125,-0.6458),Vector3(0,-1.3261,-0.6481),Vector3(0,-1.3205,-0.6224),Vector3(0,-1.5445,-0.7331),Vector3(0,-1.4064,-0.649),Vector3(0,-1.6167,-0.7245),Vector3(0,-1.107,-0.4312),Vector3(0,-1.2076,-0.5119),Vector3(0,-1.3007,-0.6402),Vector3(0,-1.0679,-0.4204),Vector3(0,-1.0854,-0.4241),Vector3(0,-1.0766,-0.3946),Vector3(0,-1.2341,-0.6248),Vector3(0,-1.1583,-0.4914),Vector3(0,-1.3197,-0.6223),Vector3(0,-0.7817,-0.2192),Vector3(0,-0.9294,-0.3241),Vector3(0,-1.0473,-0.4117),Vector3(0,-0.7742,-0.2165),Vector3(0,-0.7552,-0.1818),Vector3(0,-1.1332,-0.4157),Vector3(0,-0.9511,-0.3416),Vector3(0,-1.0761,-0.3945),Vector3(0,-0.1423,0.02),Vector3(0,-0.4967,0.027),Vector3(0,-0.7731,-0.0101),Vector3(0,-0.8007,-0.0447),Vector3(0,-0.7757,-0.011),Vector3(0,-0.4957,0.027),Vector3(0,-1.9028,-0.6353),Vector3(0,-1.9291,-0.612),Vector3(0,-1.919,-0.608),Vector3(0,-1.9419,-0.652),Vector3(0,-1.9751,-0.631),Vector3(0,-1.9665,-0.662),Vector3(0,-1.9637,-0.627),Vector3(0,-1.9274,-0.646),Vector3(0,-1.9205,-0.643),Vector3(0,-1.8961,-0.599),Vector3(0,-1.9514,-0.621),Vector3(0,-1.8536,-0.6154),Vector3(0,-1.8536,-0.581),Vector3(0,-1.8597,-0.6179),Vector3(0,-1.9074,-0.604),Vector3(0,-1.9265,-0.646),Vector3(0,-1.7983,-0.5927),Vector3(0,-1.7415,-0.5351),Vector3(0,-1.8628,-0.5848),Vector3(0,-1.6904,-0.5484),Vector3(0,-1.706,-0.5205),Vector3(0,-1.7452,-0.5703),Vector3(0,-1.8229,-0.5683),Vector3(0,-1.852,-0.6146),Vector3(0,-1.5582,-0.493),Vector3(0,-1.4013,-0.4985),Vector3(0,-1.6783,-0.5083),Vector3(0,-1.3386,-0.4897),Vector3(0,-1.3651,-0.4717),Vector3(0,-1.5082,-0.4724),Vector3(0,-1.6439,-0.4939),Vector3(0,-1.689,-0.5467),Vector3(0,-1.2432,-0.3952),Vector3(0,-1.1651,-0.2581),Vector3(0,-1.3284,-0.4585),Vector3(0,-1.1195,-0.2666),Vector3(0,-1.1443,-0.2512),Vector3(0,-1.2141,-0.3862),Vector3(0,-1.3235,-0.4745),Vector3(0,-1.3368,-0.489),Vector3(0,-0.9709,-0.1968),Vector3(0,-0.8702,-0.0396),Vector3(0,-1.1026,-0.2376),Vector3(0,-0.8026,-0.0454),Vector3(0,-0.863,-0.0372),Vector3(0,-0.955,-0.1917),Vector3(0,-1.0857,-0.232),Vector3(0,-1.1176,-0.266),Vector3(0,-0.7436,-0.1011),Vector3(0,-0.7463,-0.1014),Vector3(0,-1.8785,-0.7284),Vector3(0,-1.8685,-0.7246),Vector3(0,-1.9291,-0.7493),Vector3(0,-1.9168,-0.7444),Vector3(0,-1.8493,-0.716),Vector3(0,-1.9053,-0.7398),Vector3(0,-1.8032,-0.6976),Vector3(0,-1.8577,-0.7203),Vector3(0,-1.6931,-0.6516),Vector3(0,-1.8176,-0.7037),Vector3(0,-1.6555,-0.6362),Vector3(0,-1.7739,-0.6851),Vector3(0,-1.3773,-0.5756),Vector3(0,-1.6322,-0.6269),Vector3(0,-1.351,-0.5677),Vector3(0,-1.5955,-0.6114),Vector3(0,-1.1362,-0.3426),Vector3(0,-1.3251,-0.5596),Vector3(0,-1.1149,-0.3357),Vector3(0,-1.3003,-0.5519),Vector3(0,-0.814,-0.1249),Vector3(0,-1.0762,-0.323),Vector3(0,-0.8066,-0.1224),Vector3(0,-1.0589,-0.3173),Vector3(0,-0.1558,0.05),Vector3(0,-0.1458,0.039)]);
{ .AddDisplacers }
HAnimSegment94.SetDisplacers([HAnimDisplacer109]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment94]);
HAnimSegment110 := THAnimSegmentNode.Create;
HAnimSegment110.NameField := 'hair';
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment110]);
HAnimSegment111 := THAnimSegmentNode.Create;
HAnimSegment111.NameField := '__0';
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment111]);
HAnimSegment112 := THAnimSegmentNode.Create;
HAnimSegment112.NameField := '__2';
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment112]);
HAnimSegment113 := THAnimSegmentNode.Create;
HAnimSegment113.NameField := '__4';
HAnimDisplacer114 := THAnimDisplacerNode.Create;
HAnimDisplacer114.NameField := '__4_morphinterpolator';
HAnimDisplacer114.SetCoordIndex([0,2]);
HAnimDisplacer114.SetDisplacements([Vector3(0,-0.4319,0.0434),Vector3(0,-0.4133,-0.0174)]);
{ .AddDisplacers }
HAnimSegment113.SetDisplacers([HAnimDisplacer114]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment113]);
HAnimSegment115 := THAnimSegmentNode.Create;
HAnimSegment115.NameField := 'center_lower_vermillion_lip';
Transform116 := TTransformNode.Create;
Transform116.Translation := Vector3(0,8.315,13.52);
Shape117 := TShapeNode.Create;
Appearance118 := TAppearanceNode.Create;
Appearance118 := Appearance97;
{ .SetAppearance }
Shape117.Appearance := Appearance118;
IndexedFaceSet119 := TIndexedFaceSetNode.Create;
IndexedFaceSet119.SetCoordIndex([1,0,4,-1,0,1,2,-1,1,4,3,-1,3,5,1,-1]);
IndexedFaceSet119.CreaseAngle := 3.14159;
IndexedFaceSet119.Solid := False;
IndexedFaceSet119.SetTexCoordIndex([2,1,0,-1,1,2,3,-1,4,6,5,-1,5,7,4,-1]);
TextureCoordinate120 := TTextureCoordinateNode.Create;
TextureCoordinate120.SetPoint([Vector2(0.2441,0.6554),Vector2(0.2548,0.6554),Vector2(0.2557,0.6351),Vector2(0.2652,0.6384),Vector2(0.2557,0.6351),Vector2(0.2548,0.6554),Vector2(0.2441,0.6554),Vector2(0.2652,0.6384)]);
{ .SetTexCoord }
IndexedFaceSet119.TexCoord := TextureCoordinate120;
Coordinate121 := TCoordinateNode.Create;
Coordinate121.SetPoint([Vector3(0.5699,0.5402,0.1151),Vector3(0,-0.5402,0.1287),Vector3(0.6344,-0.3611,-0.1287),Vector3(-0.5699,0.5402,0.1151),Vector3(0,0.5402,0.1151),Vector3(-0.6344,-0.3611,-0.1287)]);
{ .SetCoord }
IndexedFaceSet119.Coord := Coordinate121;
{ .SetGeometry }
Shape117.Geometry := IndexedFaceSet119;
{ .AddChild }
Transform116.AddChildren([Shape117]);
{ .AddChildren }
HAnimSegment115.AddChildren([Transform116]);
Coordinate122 := TCoordinateNode.Create;
Coordinate122 := Coordinate121;
{ .SetCoord }
HAnimSegment115.Coord := Coordinate122;
HAnimDisplacer123 := THAnimDisplacerNode.Create;
HAnimDisplacer123.NameField := 'center_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer123.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer123.SetDisplacements([Vector3(0,0.382,0.435),Vector3(0,0.9368,0.4659),Vector3(0,0.7896,0.4659),Vector3(0,0.382,0.435),Vector3(0,0.382,0.435),Vector3(0,0.7896,0.4659)]);
{ .AddDisplacers }
HAnimSegment115.SetDisplacers([HAnimDisplacer123]);
HAnimDisplacer124 := THAnimDisplacerNode.Create;
HAnimDisplacer124.NameField := 'center_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer124.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer124.SetDisplacements([Vector3(0,0.1869,0),Vector3(0,0.7516,0.364),Vector3(0,0.6497,0.364),Vector3(0,0.1869,0),Vector3(0,0.2206,0),Vector3(0,0.6497,0.364)]);
{ .AddDisplacers }
HAnimSegment115.SetDisplacers([HAnimDisplacer124]);
HAnimDisplacer125 := THAnimDisplacerNode.Create;
HAnimDisplacer125.NameField := 'center_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer125.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer125.SetDisplacements([Vector3(0,-0.0896,0.5331),Vector3(0,0.756,0.8803),Vector3(0,0.6333,0.8802),Vector3(0,-0.0896,0.5331),Vector3(0,-0.0896,0.5331),Vector3(0,0.6333,0.8802)]);
{ .AddDisplacers }
HAnimSegment115.SetDisplacers([HAnimDisplacer125]);
HAnimDisplacer126 := THAnimDisplacerNode.Create;
HAnimDisplacer126.NameField := 'center_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer126.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer126.SetDisplacements([Vector3(0,-0.6157,0),Vector3(0,-0.6158,0),Vector3(0,-0.6156,0),Vector3(0,-0.6157,0),Vector3(0,-0.6157,0),Vector3(0,-0.6156,0)]);
{ .AddDisplacers }
HAnimSegment115.SetDisplacers([HAnimDisplacer126]);
HAnimDisplacer127 := THAnimDisplacerNode.Create;
HAnimDisplacer127.NameField := 'center_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer127.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer127.SetDisplacements([Vector3(0,-0.0368,0.8373),Vector3(0,0.6483,1.2483),Vector3(0,0.5214,1.2487),Vector3(0,-0.0368,0.8373),Vector3(0,-0.0368,0.8373),Vector3(0,0.5214,1.2487)]);
{ .AddDisplacers }
HAnimSegment115.SetDisplacers([HAnimDisplacer127]);
HAnimDisplacer128 := THAnimDisplacerNode.Create;
HAnimDisplacer128.NameField := 'center_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer128.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer128.SetDisplacements([Vector3(0.2644,-0.7179,0.8231),Vector3(0,-0.5998,0.7017),Vector3(-0.1012,-0.5994,0.7017),Vector3(-0.2644,-0.7179,0.8231),Vector3(0,-0.7931,1.0829),Vector3(0.1012,-0.5994,0.7017)]);
{ .AddDisplacers }
HAnimSegment115.SetDisplacers([HAnimDisplacer128]);
HAnimDisplacer129 := THAnimDisplacerNode.Create;
HAnimDisplacer129.NameField := 'center_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer129.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer129.SetDisplacements([Vector3(0,-0.3795,0.1337),Vector3(0,-0.21,0),Vector3(0,-0.21,0),Vector3(0,-0.3795,0.1337),Vector3(0,-0.3795,0.1337),Vector3(0,-0.21,0)]);
{ .AddDisplacers }
HAnimSegment115.SetDisplacers([HAnimDisplacer129]);
HAnimDisplacer130 := THAnimDisplacerNode.Create;
HAnimDisplacer130.NameField := 'center_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer130.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer130.SetDisplacements([Vector3(0,-0.3959,0.8591),Vector3(0,-0.2496,0.9753),Vector3(0,-0.2496,0.9749),Vector3(0,-0.3959,0.8591),Vector3(0,-0.3959,0.8591),Vector3(0,-0.2496,0.9749)]);
{ .AddDisplacers }
HAnimSegment115.SetDisplacers([HAnimDisplacer130]);
HAnimDisplacer131 := THAnimDisplacerNode.Create;
HAnimDisplacer131.NameField := 'center_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer131.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer131.SetDisplacements([Vector3(0,-0.432,0.0434),Vector3(0,-0.4303,-0.0301),Vector3(0,-0.4133,-0.0173),Vector3(0,-0.432,0.0434),Vector3(0,-0.432,0.0434),Vector3(0,-0.4133,-0.0173)]);
{ .AddDisplacers }
HAnimSegment115.SetDisplacers([HAnimDisplacer131]);
HAnimDisplacer132 := THAnimDisplacerNode.Create;
HAnimDisplacer132.NameField := 'center_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer132.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer132.SetDisplacements([Vector3(0,-0.0595,0.1828),Vector3(0,0.7882,0.1993),Vector3(0,0.633,0.3625),Vector3(0,-0.0595,0.1828),Vector3(0,-0.0595,0.1828),Vector3(0,0.633,0.3625)]);
{ .AddDisplacers }
HAnimSegment115.SetDisplacers([HAnimDisplacer132]);
HAnimDisplacer133 := THAnimDisplacerNode.Create;
HAnimDisplacer133.NameField := 'center_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer133.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer133.SetDisplacements([Vector3(-0.0415,-0.0581,1.0819),Vector3(0,0.0357,0.8616),Vector3(0.1609,0.0642,0.9154),Vector3(0.0415,-0.0581,1.0819),Vector3(0,-0.0581,1.0819),Vector3(-0.1609,0.0642,0.9154)]);
{ .AddDisplacers }
HAnimSegment115.SetDisplacers([HAnimDisplacer133]);
HAnimDisplacer134 := THAnimDisplacerNode.Create;
HAnimDisplacer134.NameField := 'center_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer134.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer134.SetDisplacements([Vector3(0,-0.5686,0),Vector3(0,-0.5688,0),Vector3(0,-0.5685,0),Vector3(0,-0.5686,0),Vector3(0,-0.5686,0),Vector3(0,-0.5685,0)]);
{ .AddDisplacers }
HAnimSegment115.SetDisplacers([HAnimDisplacer134]);
HAnimDisplacer135 := THAnimDisplacerNode.Create;
HAnimDisplacer135.NameField := 'center_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer135.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer135.SetDisplacements([Vector3(0.176,-2.4732,0.049),Vector3(0,-2.4728,-0.0078),Vector3(0.196,-2.4589,0.002),Vector3(-0.176,-2.4732,0.049),Vector3(0,-2.4732,0.049),Vector3(-0.196,-2.4589,0.002)]);
{ .AddDisplacers }
HAnimSegment115.SetDisplacers([HAnimDisplacer135]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment115]);
HAnimSegment136 := THAnimSegmentNode.Create;
HAnimSegment136.NameField := 'chin';
Transform137 := TTransformNode.Create;
Transform137.Translation := Vector3(0,6.337,7.3);
Shape138 := TShapeNode.Create;
Appearance139 := TAppearanceNode.Create;
Appearance139 := Appearance97;
{ .SetAppearance }
Shape138.Appearance := Appearance139;
IndexedFaceSet140 := TIndexedFaceSetNode.Create;
IndexedFaceSet140.SetCoordIndex([0,2,3,-1,0,3,12,-1,5,8,15,-1,2,0,16,-1,16,4,2,-1,7,9,12,-1,7,12,3,-1,5,15,1,-1,4,16,15,-1,15,8,4,-1,9,6,12,-1,0,11,10,-1,0,12,11,-1,13,15,14,-1,10,17,16,-1,16,0,10,-1,18,12,19,-1,18,11,12,-1,13,1,15,-1,17,14,15,-1,15,16,17,-1,19,12,6,-1]);
IndexedFaceSet140.CreaseAngle := 3.14159;
IndexedFaceSet140.Solid := False;
IndexedFaceSet140.SetTexCoordIndex([0,7,8,-1,0,8,1,-1,2,3,4,-1,9,10,5,-1,5,6,9,-1,12,14,1,-1,12,1,8,-1,2,4,13,-1,6,5,4,-1,4,3,6,-1,14,11,1,-1,15,17,16,-1,15,18,17,-1,19,4,20,-1,21,22,5,-1,5,10,21,-1,23,18,24,-1,23,17,18,-1,19,13,4,-1,22,20,4,-1,4,5,22,-1,24,18,25,-1]);
TextureCoordinate141 := TTextureCoordinateNode.Create;
TextureCoordinate141.SetPoint([Vector2(0.258,0.6076),Vector2(0.2606,0.6259),Vector2(0.4255,0.614),Vector2(0.4413,0.6101),Vector2(0.4398,0.6078),Vector2(0.4653,0.601),Vector2(0.4571,0.6062),Vector2(0.3118,0.6205),Vector2(0.3041,0.631),Vector2(0.467,0.6086),Vector2(0.4742,0.6003),Vector2(0.2557,0.6351),Vector2(0.3007,0.651),Vector2(0.4253,0.6099),Vector2(0.2652,0.6384),Vector2(0.258,0.6076),Vector2(0.3118,0.6205),Vector2(0.3041,0.631),Vector2(0.2606,0.6259),Vector2(0.4255,0.614),Vector2(0.4413,0.6101),Vector2(0.467,0.6086),Vector2(0.4571,0.6062),Vector2(0.3007,0.651),Vector2(0.2652,0.6384),Vector2(0.2557,0.6351)]);
{ .SetTexCoord }
IndexedFaceSet140.TexCoord := TextureCoordinate141;
Coordinate142 := TCoordinateNode.Create;
Coordinate142.SetPoint([Vector3(0,-2.287,3.579),Vector3(0,-0.1353,-6.353),Vector3(3.657,-0.4253,2.123),Vector3(3.345,0.9926,4.159),Vector3(3.653,-0.9673,0.1176),Vector3(5.33,0.7945,-6.311),Vector3(0,1.438,6.353),Vector3(3.006,2.287,5.134),Vector3(4.492,-0.08641,-3.097),Vector3(0.6344,1.617,6.096),Vector3(-3.657,-0.4253,2.123),Vector3(-3.345,0.9926,4.159),Vector3(0,0.481,5.272),Vector3(-5.33,0.7945,-6.311),Vector3(-4.492,-0.08641,-3.097),Vector3(0,-0.5988,-3.408),Vector3(0,-2.111,1.781),Vector3(-3.653,-0.9673,0.1176),Vector3(-3.006,2.287,5.134),Vector3(-0.6344,1.617,6.096)]);
{ .SetCoord }
IndexedFaceSet140.Coord := Coordinate142;
{ .SetGeometry }
Shape138.Geometry := IndexedFaceSet140;
{ .AddChild }
Transform137.AddChildren([Shape138]);
{ .AddChildren }
HAnimSegment136.AddChildren([Transform137]);
Coordinate143 := TCoordinateNode.Create;
Coordinate143 := Coordinate142;
{ .SetCoord }
HAnimSegment136.Coord := Coordinate143;
HAnimDisplacer144 := THAnimDisplacerNode.Create;
HAnimDisplacer144.NameField := 'chin_morphinterpolator';
HAnimDisplacer144.SetCoordIndex([6,7,9,12,18,19]);
HAnimDisplacer144.SetDisplacements([Vector3(0,0.937,0.466),Vector3(0.63,1.322,0.106),Vector3(0,0.79,0.466),Vector3(0.0193,1.486,1.377),Vector3(-0.591,1.322,0.106),Vector3(0,0.79,0.466)]);
{ .AddDisplacers }
HAnimSegment136.SetDisplacers([HAnimDisplacer144]);
HAnimDisplacer145 := THAnimDisplacerNode.Create;
HAnimDisplacer145.NameField := 'chin_morphinterpolator';
HAnimDisplacer145.SetCoordIndex([6,7,9,12,18,19]);
HAnimDisplacer145.SetDisplacements([Vector3(0,0.751,0.364),Vector3(0,-0.138,0),Vector3(0,0.65,0.364),Vector3(0,0.1317,0),Vector3(0,-0.138,0),Vector3(0,0.65,0.364)]);
{ .AddDisplacers }
HAnimSegment136.SetDisplacers([HAnimDisplacer145]);
HAnimDisplacer146 := THAnimDisplacerNode.Create;
HAnimDisplacer146.NameField := 'chin_morphinterpolator';
HAnimDisplacer146.SetCoordIndex([6,7,9,12,18,19]);
HAnimDisplacer146.SetDisplacements([Vector3(0,0.756,0.88),Vector3(0.378,0.396,0.152),Vector3(0,0.633,0.88),Vector3(0,1.094,1.766),Vector3(-0.379,0.396,0.152),Vector3(0,0.633,0.88)]);
{ .AddDisplacers }
HAnimSegment136.SetDisplacers([HAnimDisplacer146]);
HAnimDisplacer147 := THAnimDisplacerNode.Create;
HAnimDisplacer147.NameField := 'chin_morphinterpolator';
HAnimDisplacer147.SetCoordIndex([0,2,3,4,6,9,10,11,12,16,17,19]);
HAnimDisplacer147.SetDisplacements([Vector3(0,-0.615,0),Vector3(0,-0.6157,0),Vector3(0,-0.6157,0),Vector3(0,-0.6157,0),Vector3(0,-0.6159,0),Vector3(0,-0.616,0),Vector3(0,-0.6157,0),Vector3(0,-0.6157,0),Vector3(0,-0.6156,0),Vector3(0,-0.616,0),Vector3(0,-0.6157,0),Vector3(0,-0.616,0)]);
{ .AddDisplacers }
HAnimSegment136.SetDisplacers([HAnimDisplacer147]);
HAnimDisplacer148 := THAnimDisplacerNode.Create;
HAnimDisplacer148.NameField := 'chin_morphinterpolator';
HAnimDisplacer148.SetCoordIndex([6,7,9,12,18,19]);
HAnimDisplacer148.SetDisplacements([Vector3(0,0.648,1.249),Vector3(0.21,-0.702,0.077),Vector3(0,0.521,1.248),Vector3(0,0.993,2.287),Vector3(-0.197,-0.702,0.077),Vector3(0,0.521,1.248)]);
{ .AddDisplacers }
HAnimSegment136.SetDisplacers([HAnimDisplacer148]);
HAnimDisplacer149 := THAnimDisplacerNode.Create;
HAnimDisplacer149.NameField := 'chin_morphinterpolator';
HAnimDisplacer149.SetCoordIndex([16,17]);
HAnimDisplacer149.SetDisplacements([Vector3(1.176,0.13,-0.375),Vector3(-1.176,0.13,-0.375)]);
{ .AddDisplacers }
HAnimSegment136.SetDisplacers([HAnimDisplacer149]);
HAnimDisplacer150 := THAnimDisplacerNode.Create;
HAnimDisplacer150.NameField := 'chin_morphinterpolator';
HAnimDisplacer150.SetCoordIndex([3,6,7,9,11,12,13,18,19]);
HAnimDisplacer150.SetDisplacements([Vector3(0,0,0.084),Vector3(0,-0.5997,0.702),Vector3(-0.835,0,1.063),Vector3(-0.1012,-0.6,0.702),Vector3(0,0,0.235),Vector3(0,0.1001,0.333),Vector3(0,0,0.152),Vector3(0.835,0,1.063),Vector3(0.1012,-0.6,0.702)]);
{ .AddDisplacers }
HAnimSegment136.SetDisplacers([HAnimDisplacer150]);
HAnimDisplacer151 := THAnimDisplacerNode.Create;
HAnimDisplacer151.NameField := 'chin_morphinterpolator';
HAnimDisplacer151.SetCoordIndex([6,9,19]);
HAnimDisplacer151.SetDisplacements([Vector3(0,-0.21,0),Vector3(0,-0.21,0),Vector3(0,-0.21,0)]);
{ .AddDisplacers }
HAnimSegment136.SetDisplacers([HAnimDisplacer151]);
HAnimDisplacer152 := THAnimDisplacerNode.Create;
HAnimDisplacer152.NameField := 'chin_morphinterpolator';
HAnimDisplacer152.SetCoordIndex([3,6,7,9,11,12,18,19]);
HAnimDisplacer152.SetDisplacements([Vector3(0,0,0.164),Vector3(0,-0.25,0.975),Vector3(-0.935,0,0.516),Vector3(0,-0.25,0.975),Vector3(0,0,0.164),Vector3(0,0,0.884),Vector3(0.91,0,0.459),Vector3(0,-0.25,0.975)]);
{ .AddDisplacers }
HAnimSegment136.SetDisplacers([HAnimDisplacer152]);
HAnimDisplacer153 := THAnimDisplacerNode.Create;
HAnimDisplacer153.NameField := 'chin_morphinterpolator';
HAnimDisplacer153.SetCoordIndex([3,6,9,11,12,19]);
HAnimDisplacer153.SetDisplacements([Vector3(0,-0.0829,-0.001),Vector3(0,-0.431,-0.03),Vector3(0,-0.413,-0.017),Vector3(0,-0.0829,-0.001),Vector3(0,-0.2735,-0.056),Vector3(0,-0.413,-0.017)]);
{ .AddDisplacers }
HAnimSegment136.SetDisplacers([HAnimDisplacer153]);
HAnimDisplacer154 := THAnimDisplacerNode.Create;
HAnimDisplacer154.NameField := 'chin_morphinterpolator';
HAnimDisplacer154.SetCoordIndex([7,18]);
HAnimDisplacer154.SetDisplacements([Vector3(0.898,0.009,0.025),Vector3(-0.974,0.009,0.025)]);
{ .AddDisplacers }
HAnimSegment136.SetDisplacers([HAnimDisplacer154]);
HAnimDisplacer155 := THAnimDisplacerNode.Create;
HAnimDisplacer155.NameField := 'chin_morphinterpolator';
HAnimDisplacer155.SetCoordIndex([6,7,9,18,19]);
HAnimDisplacer155.SetDisplacements([Vector3(0,0.788,0.2),Vector3(0.125,0,0),Vector3(0,0.633,0.362),Vector3(-0.125,0,0),Vector3(0,0.633,0.362)]);
{ .AddDisplacers }
HAnimSegment136.SetDisplacers([HAnimDisplacer155]);
HAnimDisplacer156 := THAnimDisplacerNode.Create;
HAnimDisplacer156.NameField := 'chin_morphinterpolator';
HAnimDisplacer156.SetCoordIndex([6,7,9,12,18,19]);
HAnimDisplacer156.SetDisplacements([Vector3(0,0.036,0.862),Vector3(-0.521,0.17,1.038),Vector3(0.1609,0.064,0.915),Vector3(0,0.1109,0.288),Vector3(0.521,0.17,1.038),Vector3(-0.1609,0.064,0.915)]);
{ .AddDisplacers }
HAnimSegment136.SetDisplacers([HAnimDisplacer156]);
HAnimDisplacer157 := THAnimDisplacerNode.Create;
HAnimDisplacer157.NameField := 'chin_morphinterpolator';
HAnimDisplacer157.SetCoordIndex([6,9,12,19]);
HAnimDisplacer157.SetDisplacements([Vector3(0,-0.5688,0),Vector3(0,-0.569,0),Vector3(0,-0.5685,0),Vector3(0,-0.569,0)]);
{ .AddDisplacers }
HAnimSegment136.SetDisplacers([HAnimDisplacer157]);
HAnimDisplacer158 := THAnimDisplacerNode.Create;
HAnimDisplacer158.NameField := 'chin_morphinterpolator';
HAnimDisplacer158.SetCoordIndex([0,2,3,4,6,7,8,9,10,11,12,14,15,16,17,18,19]);
HAnimDisplacer158.SetDisplacements([Vector3(0,-1.616,-0.19),Vector3(0,-2.0337,-0.088),Vector3(0,-2.0116,-0.01),Vector3(0,-1.9277,-0.1141),Vector3(0,-2.473,-0.007),Vector3(0,-0.737,0),Vector3(0,-1.0116,-0.024),Vector3(0.196,-2.4593,0.002),Vector3(0,-2.0337,-0.088),Vector3(0,-2.0116,-0.01),Vector3(0,-2.066,-0.039),Vector3(0,-0.8165,0),Vector3(0,-1.2392,-0.041),Vector3(0,-2.228,-0.187),Vector3(0,-1.5747,-0.1141),Vector3(0,-0.737,0),Vector3(-0.196,-2.4593,0.002)]);
{ .AddDisplacers }
HAnimSegment136.SetDisplacers([HAnimDisplacer158]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment136]);
HAnimSegment159 := THAnimSegmentNode.Create;
HAnimSegment159.NameField := 'glabella';
Transform160 := TTransformNode.Create;
Transform160.Translation := Vector3(0,18.93,15.66);
Shape161 := TShapeNode.Create;
Appearance162 := TAppearanceNode.Create;
Appearance162 := Appearance97;
{ .SetAppearance }
Shape161.Appearance := Appearance162;
IndexedFaceSet163 := TIndexedFaceSetNode.Create;
IndexedFaceSet163.SetCoordIndex([0,2,1,-1,1,5,0,-1,5,1,3,-1,3,7,5,-1,0,5,4,-1,4,6,0,-1,5,7,8,-1,8,4,5,-1]);
IndexedFaceSet163.CreaseAngle := 3.14159;
IndexedFaceSet163.Solid := False;
IndexedFaceSet163.SetTexCoordIndex([2,4,3,-1,3,0,2,-1,0,3,5,-1,5,1,0,-1,8,7,6,-1,6,9,8,-1,7,10,11,-1,11,6,7,-1]);
TextureCoordinate164 := TTextureCoordinateNode.Create;
TextureCoordinate164.SetPoint([Vector2(0.2441,0.8403),Vector2(0.2442,0.8727),Vector2(0.2441,0.816),Vector2(0.274,0.8322),Vector2(0.2534,0.8152),Vector2(0.2728,0.8741),Vector2(0.274,0.8322),Vector2(0.2441,0.8403),Vector2(0.2441,0.816),Vector2(0.2534,0.8152),Vector2(0.2442,0.8727),Vector2(0.2728,0.8741)]);
{ .SetTexCoord }
IndexedFaceSet163.TexCoord := TextureCoordinate164;
Coordinate165 := TCoordinateNode.Create;
Coordinate165.SetPoint([Vector3(0,-1.552,-0.8705),Vector3(1.587,-0.693,0.1291),Vector3(0.4273,-1.569,-0.9219),Vector3(1.516,1.569,0.2705),Vector3(-1.587,-0.693,0.1291),Vector3(0,-0.2611,0.9219),Vector3(-0.4273,-1.569,-0.9219),Vector3(0,1.499,0.9062),Vector3(-1.516,1.569,0.2705)]);
{ .SetCoord }
IndexedFaceSet163.Coord := Coordinate165;
{ .SetGeometry }
Shape161.Geometry := IndexedFaceSet163;
{ .AddChild }
Transform160.AddChildren([Shape161]);
{ .AddChildren }
HAnimSegment159.AddChildren([Transform160]);
Coordinate166 := TCoordinateNode.Create;
Coordinate166 := Coordinate165;
{ .SetCoord }
HAnimSegment159.Coord := Coordinate166;
HAnimDisplacer167 := THAnimDisplacerNode.Create;
HAnimDisplacer167.NameField := 'glabella_morphinterpolator';
HAnimDisplacer167.SetCoordIndex([1,4]);
HAnimDisplacer167.SetDisplacements([Vector3(-0.332,-0.414,0),Vector3(0.303,-0.395,0)]);
{ .AddDisplacers }
HAnimSegment159.SetDisplacers([HAnimDisplacer167]);
HAnimDisplacer168 := THAnimDisplacerNode.Create;
HAnimDisplacer168.NameField := 'glabella_morphinterpolator';
HAnimDisplacer168.SetCoordIndex([1,4]);
HAnimDisplacer168.SetDisplacements([Vector3(0,0.3656,0),Vector3(0,0.3842,0)]);
{ .AddDisplacers }
HAnimSegment159.SetDisplacers([HAnimDisplacer168]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment159]);
HAnimSegment169 := THAnimSegmentNode.Create;
HAnimSegment169.NameField := 'left_bulbar_conjunctiva';
Transform170 := TTransformNode.Create;
Transform170.Translation := Vector3(5.794,17.61,11.15);
Shape171 := TShapeNode.Create;
Appearance172 := TAppearanceNode.Create;
Appearance172 := Appearance97;
{ .SetAppearance }
Shape171.Appearance := Appearance172;
IndexedFaceSet173 := TIndexedFaceSetNode.Create;
IndexedFaceSet173.SetCoordIndex([6,7,1,-1,1,3,6,-1,0,10,26,-1,26,2,0,-1,10,0,8,-1,11,5,23,-1,7,12,24,-1,8,0,2,-1,8,2,23,-1,4,9,19,-1,19,14,4,-1,3,4,14,-1,14,13,3,-1,25,12,22,-1,11,25,22,-1,11,22,21,-1,5,11,21,-1,21,15,5,-1,6,3,13,-1,13,16,6,-1,12,7,17,-1,17,22,12,-1,8,5,15,-1,15,18,8,-1,7,6,16,-1,16,17,7,-1,10,20,19,-1,19,26,10,-1,10,8,18,-1,18,20,10,-1,23,5,8,-1,24,1,7,-1,24,12,25,-1,19,9,26,-1,26,9,2,-1]);
IndexedFaceSet173.CreaseAngle := 3.14159;
IndexedFaceSet173.Solid := False;
IndexedFaceSet173.SetTexCoordIndex([7,8,0,-1,0,27,7,-1,2,11,29,-1,29,1,2,-1,11,2,9,-1,12,5,25,-1,8,13,26,-1,9,2,1,-1,9,1,25,-1,4,10,14,-1,14,15,4,-1,3,4,15,-1,15,16,3,-1,28,13,17,-1,12,28,17,-1,12,17,18,-1,5,12,18,-1,18,19,5,-1,6,3,16,-1,16,20,6,-1,13,8,21,-1,21,17,13,-1,9,5,19,-1,19,22,9,-1,8,7,23,-1,23,21,8,-1,11,24,14,-1,14,29,11,-1,11,9,22,-1,22,24,11,-1,25,5,9,-1,26,0,8,-1,26,13,28,-1,14,10,29,-1,29,10,1,-1]);
TextureCoordinate174 := TTextureCoordinateNode.Create;
TextureCoordinate174.SetPoint([Vector2(0.328,0.824),Vector2(0.3871,0.8321),Vector2(0.4052,0.8221),Vector2(0.3258,0.833),Vector2(0.3487,0.8409),Vector2(0.3916,0.7984),Vector2(0.2983,0.8142),Vector2(0.2981,0.8094),Vector2(0.309,0.8013),Vector2(0.4011,0.8053),Vector2(0.385,0.8438),Vector2(0.4198,0.8261),Vector2(0.3777,0.7936),Vector2(0.3315,0.7948),Vector2(0.3885,0.8436),Vector2(0.3487,0.8409),Vector2(0.3206,0.8292),Vector2(0.3315,0.7948),Vector2(0.372,0.7925),Vector2(0.3869,0.7967),Vector2(0.2983,0.8142),Vector2(0.309,0.8013),Vector2(0.3966,0.8018),Vector2(0.2981,0.8094),Vector2(0.4198,0.8261),Vector2(0.3889,0.8064),Vector2(0.3322,0.8026),Vector2(0.3307,0.8316),Vector2(0.3442,0.7934),Vector2(0.3915,0.8393)]);
{ .SetTexCoord }
IndexedFaceSet173.TexCoord := TextureCoordinate174;
Coordinate175 := TCoordinateNode.Create;
Coordinate175.SetPoint([Vector3(2.76,0.0973,-0.8547),Vector3(-1.347,0.2034,2.463),Vector3(1.784,0.6812,0.4382),Vector3(-1.252,0.6995,2.521),Vector3(-0.2686,1.16,2.287),Vector3(2.036,-1.163,-0.4716),Vector3(-2.858,-0.5459,2.699),Vector3(-2.35,-1.007,2.159),Vector3(2.632,-0.8129,-0.7113),Vector3(1.577,1.203,0.9703),Vector3(3.566,0.2646,-1.27),Vector3(1.305,-1.43,0.2687),Vector3(-1.132,-1.383,1.574),Vector3(-2.475,0.7643,1.73),Vector3(-0.4787,1.699,1.381),Vector3(1.844,-1.377,-0.8846),Vector3(-4.008,-0.6268,1.793),Vector3(-3.316,-1.256,1.253),Vector3(2.512,-0.9908,-1.342),Vector3(2.026,1.768,-0.3396),Vector3(4.008,0.4783,-2.699),Vector3(1.039,-1.688,-0.4347),Vector3(-1.656,-1.768,0.6681),Vector3(1.878,-0.7347,-0.1728),Vector3(-1.108,-0.9679,1.714),Vector3(-0.4715,-1.396,1.218),Vector3(1.925,1.039,0.5784)]);
{ .SetCoord }
IndexedFaceSet173.Coord := Coordinate175;
{ .SetGeometry }
Shape171.Geometry := IndexedFaceSet173;
{ .AddChild }
Transform170.AddChildren([Shape171]);
{ .AddChildren }
HAnimSegment169.AddChildren([Transform170]);
Coordinate176 := TCoordinateNode.Create;
Coordinate176 := Coordinate175;
{ .SetCoord }
HAnimSegment169.Coord := Coordinate176;
HAnimDisplacer177 := THAnimDisplacerNode.Create;
HAnimDisplacer177.NameField := 'left_bulbar_conjunctiva_morphinterpolator';
HAnimDisplacer177.SetCoordIndex([3,4,14]);
HAnimDisplacer177.SetDisplacements([Vector3(0,-0.0785,0),Vector3(0,-0.078,0),Vector3(-0.5075,-0.499,0)]);
{ .AddDisplacers }
HAnimSegment169.SetDisplacers([HAnimDisplacer177]);
HAnimDisplacer178 := THAnimDisplacerNode.Create;
HAnimDisplacer178.NameField := 'left_bulbar_conjunctiva_morphinterpolator';
HAnimDisplacer178.SetCoordIndex([14]);
HAnimDisplacer178.SetDisplacements([Vector3(0,0.366,0)]);
{ .AddDisplacers }
HAnimSegment169.SetDisplacers([HAnimDisplacer178]);
HAnimDisplacer179 := THAnimDisplacerNode.Create;
HAnimDisplacer179.NameField := 'left_bulbar_conjunctiva_morphinterpolator';
HAnimDisplacer179.SetCoordIndex([3,4,5,7,8,9,11,12,15,25,26]);
HAnimDisplacer179.SetDisplacements([Vector3(0,-0.354,0),Vector3(0,-0.354,0),Vector3(0,0.3085,0),Vector3(0,0.096,0),Vector3(-0.09,0.209,0),Vector3(0,-0.354,0),Vector3(0,0.309,0),Vector3(0,0.152,0),Vector3(0,0.151,0),Vector3(0,0.151,0),Vector3(0,-0.3541,0)]);
{ .AddDisplacers }
HAnimSegment169.SetDisplacers([HAnimDisplacer179]);
HAnimDisplacer180 := THAnimDisplacerNode.Create;
HAnimDisplacer180.NameField := 'left_bulbar_conjunctiva_morphinterpolator';
HAnimDisplacer180.SetCoordIndex([3,4,6,9,26]);
HAnimDisplacer180.SetDisplacements([Vector3(0,0.4975,0),Vector3(0,0.498,0),Vector3(0,0.4976,0),Vector3(0,0.498,0),Vector3(0,0.497,0)]);
{ .AddDisplacers }
HAnimSegment169.SetDisplacers([HAnimDisplacer180]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment169]);
HAnimSegment181 := THAnimSegmentNode.Create;
HAnimSegment181.NameField := 'left_cheek';
Transform182 := TTransformNode.Create;
Transform182.Translation := Vector3(6.927,11.97,7.646);
Shape183 := TShapeNode.Create;
Appearance184 := TAppearanceNode.Create;
Appearance184 := Appearance97;
{ .SetAppearance }
Shape183.Appearance := Appearance184;
IndexedFaceSet185 := TIndexedFaceSetNode.Create;
IndexedFaceSet185.SetCoordIndex([1,17,19,-1,20,1,19,-1,14,19,13,-1,19,17,13,-1,13,2,14,-1,3,14,2,-1,34,18,4,-1,4,32,34,-1,31,32,4,-1,4,10,31,-1,15,14,3,-1,17,12,13,-1,12,10,4,-1,4,13,12,-1,2,5,3,-1,13,4,2,-1,24,26,25,-1,25,11,24,-1,24,11,7,-1,7,29,24,-1,6,8,12,-1,12,17,6,-1,10,9,30,-1,30,31,10,-1,12,8,9,-1,9,10,12,-1,18,34,5,-1,2,18,5,-1,4,18,2,-1,19,14,21,-1,14,22,16,-1,16,21,14,-1,0,19,21,-1,14,15,22,-1,6,17,28,-1,28,27,6,-1,28,17,1,-1,29,23,24,-1,7,11,31,-1,31,30,7,-1,11,25,33,-1,11,33,32,-1,31,11,32,-1,32,33,34,-1]);
IndexedFaceSet185.CreaseAngle := 3.14159;
IndexedFaceSet185.Solid := False;
IndexedFaceSet185.SetTexCoordIndex([0,1,2,-1,3,0,2,-1,4,2,5,-1,2,1,5,-1,5,6,4,-1,7,4,6,-1,39,24,13,-1,13,37,39,-1,36,37,13,-1,13,15,36,-1,8,4,7,-1,18,17,16,-1,17,15,13,-1,13,16,17,-1,19,11,12,-1,16,13,19,-1,28,30,29,-1,29,14,28,-1,28,14,20,-1,20,34,28,-1,21,22,17,-1,17,18,21,-1,15,23,35,-1,35,36,15,-1,17,22,23,-1,23,15,17,-1,24,39,11,-1,19,24,11,-1,13,24,19,-1,2,4,9,-1,4,10,25,-1,25,9,4,-1,26,2,9,-1,4,8,10,-1,21,18,33,-1,33,31,21,-1,32,1,0,-1,34,27,28,-1,20,14,36,-1,36,35,20,-1,14,29,38,-1,14,38,37,-1,36,14,37,-1,37,38,39,-1]);
TextureCoordinate186 := TTextureCoordinateNode.Create;
TextureCoordinate186.SetPoint([Vector2(0.44,0.6625),Vector2(0.4517,0.649),Vector2(0.4392,0.6356),Vector2(0.4352,0.6651),Vector2(0.4454,0.6184),Vector2(0.4606,0.6289),Vector2(0.464,0.6174),Vector2(0.467,0.6086),Vector2(0.4571,0.6062),Vector2(0.4273,0.6228),Vector2(0.4413,0.6101),Vector2(0.3041,0.631),Vector2(0.3118,0.6205),Vector2(0.3484,0.6888),Vector2(0.2881,0.7397),Vector2(0.3623,0.7239),Vector2(0.4088,0.6855),Vector2(0.4123,0.7323),Vector2(0.4518,0.7703),Vector2(0.364,0.6372),Vector2(0.301,0.7815),Vector2(0.4279,0.7939),Vector2(0.3993,0.7753),Vector2(0.3692,0.7714),Vector2(0.3226,0.6487),Vector2(0.4255,0.614),Vector2(0.4239,0.6387),Vector2(0.2671,0.7978),Vector2(0.268,0.7555),Vector2(0.2727,0.7092),Vector2(0.2641,0.7133),Vector2(0.4335,0.819),Vector2(0.4547,0.661),Vector2(0.4572,0.8171),Vector2(0.2845,0.7889),Vector2(0.3287,0.7742),Vector2(0.3232,0.7322),Vector2(0.3144,0.6917),Vector2(0.2788,0.6949),Vector2(0.3007,0.651)]);
{ .SetTexCoord }
IndexedFaceSet185.TexCoord := TextureCoordinate186;
Coordinate187 := TCoordinateNode.Create;
Coordinate187.SetPoint([Vector3(5.868,0.6861,-6.977),Vector3(5.046,6.009,-3.719),Vector3(-0.5602,-4.076,1.16),Vector3(-3.27,-6.054,1.778),Vector3(-1.388,-1.337,4.299),Vector3(-3.582,-4.636,3.814),Vector3(2.834,4.241,1.178),Vector3(-3.857,3.618,5.665),Vector3(1.296,3.319,2.709),Vector3(-0.2365,3.054,3.875),Vector3(-0.6487,0.5238,4.348),Vector3(-4.592,1.365,6.024),Vector3(2.001,0.9701,1.578),Vector3(1.819,-1.515,0.4861),Vector3(0.1831,-3.863,-2.615),Vector3(-3.274,-6.596,-0.2282),Vector3(-1.597,-4.834,-6.657),Vector3(4.101,2.99,-1.336),Vector3(-2.758,-3.467,4.304),Vector3(3.42,-0.01057,-3.863),Vector3(5.261,6.596,-4.686),Vector3(1.153,-2.865,-6.293),Vector3(-2.435,-5.715,-3.442),Vector3(-5.749,4.473,6.621),Vector3(-5.809,2.217,6.673),Vector3(-5.409,-0.2562,6.321),Vector3(-5.868,-0.0462,6.977),Vector3(3.128,5.574,1.136),Vector3(4.273,5.681,-0.7129),Vector3(-4.763,4.022,6.147),Vector3(-2.394,3.215,4.911),Vector3(-2.727,0.9674,5.231),Vector3(-3.19,-1.179,5.185),Vector3(-5.082,-1.013,6.115),Vector3(-3.921,-3.342,4.788)]);
{ .SetCoord }
IndexedFaceSet185.Coord := Coordinate187;
{ .SetGeometry }
Shape183.Geometry := IndexedFaceSet185;
{ .AddChild }
Transform182.AddChildren([Shape183]);
{ .AddChildren }
HAnimSegment181.AddChildren([Transform182]);
Coordinate188 := TCoordinateNode.Create;
Coordinate188 := Coordinate187;
{ .SetCoord }
HAnimSegment181.Coord := Coordinate188;
HAnimDisplacer189 := THAnimDisplacerNode.Create;
HAnimDisplacer189.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer189.SetCoordIndex([4,10,11,25,26,31,32,33,34]);
HAnimDisplacer189.SetDisplacements([Vector3(0,0.8378,0),Vector3(0,0.8382,0),Vector3(0,0.838,0),Vector3(0,0.838,0),Vector3(0,0.838,0),Vector3(0,0.8376,0),Vector3(0,0.8381,0),Vector3(0,0.8383,0),Vector3(0.63,1.322,0.107)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer189]);
HAnimDisplacer190 := THAnimDisplacerNode.Create;
HAnimDisplacer190.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer190.SetCoordIndex([4,6,7,8,9,10,11,12,13,17,19,24,29,30,31,32]);
HAnimDisplacer190.SetDisplacements([Vector3(0.6734,0.6214,0.174),Vector3(0,0.1,0.079),Vector3(0,0.134,-0.107),Vector3(0.299,0.38,-0.184),Vector3(0,0.268,0.099),Vector3(0.0294,1.7512,0.523),Vector3(0.255,1.233,0.181),Vector3(-0.032,1.5769,1.007),Vector3(0.588,1.4349,0.0324),Vector3(0,0.462,0.3972),Vector3(0,0.6417,0),Vector3(0,0.754,0),Vector3(0,0.067,-0.082),Vector3(0,0.268,0),Vector3(0.001,1.3996,0.448),Vector3(0,0.2915,0.183)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer190]);
HAnimDisplacer191 := THAnimDisplacerNode.Create;
HAnimDisplacer191.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer191.SetCoordIndex([34]);
HAnimDisplacer191.SetDisplacements([Vector3(0,-0.137,0)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer191]);
HAnimDisplacer192 := THAnimDisplacerNode.Create;
HAnimDisplacer192.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer192.SetCoordIndex([18,34]);
HAnimDisplacer192.SetDisplacements([Vector3(-0.407,0.417,0.179),Vector3(0.378,0.396,0.153)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer192]);
HAnimDisplacer193 := THAnimDisplacerNode.Create;
HAnimDisplacer193.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer193.SetCoordIndex([3,5,15]);
HAnimDisplacer193.SetDisplacements([Vector3(0,-0.616,0),Vector3(0,-0.616,0),Vector3(0,-0.616,0)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer193]);
HAnimDisplacer194 := THAnimDisplacerNode.Create;
HAnimDisplacer194.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer194.SetCoordIndex([34]);
HAnimDisplacer194.SetDisplacements([Vector3(0.211,-0.702,0.078)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer194]);
HAnimDisplacer195 := THAnimDisplacerNode.Create;
HAnimDisplacer195.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer195.SetCoordIndex([1,8,12,34]);
HAnimDisplacer195.SetDisplacements([Vector3(0.473,-0.03,-0.642),Vector3(1.14,0,-1.022),Vector3(0.583,-0.05,-0.383),Vector3(1.176,0.13,-0.375)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer195]);
HAnimDisplacer196 := THAnimDisplacerNode.Create;
HAnimDisplacer196.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer196.SetCoordIndex([5,18,32,33,34]);
HAnimDisplacer196.SetDisplacements([Vector3(0,0,0.083),Vector3(0,0,0.084),Vector3(0,0,0.414),Vector3(0,0,0.109),Vector3(-0.835,0,1.064)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer196]);
HAnimDisplacer197 := THAnimDisplacerNode.Create;
HAnimDisplacer197.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer197.SetCoordIndex([5,34]);
HAnimDisplacer197.SetDisplacements([Vector3(0,0,0.163),Vector3(-0.935,0,0.517)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer197]);
HAnimDisplacer198 := THAnimDisplacerNode.Create;
HAnimDisplacer198.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer198.SetCoordIndex([5]);
HAnimDisplacer198.SetDisplacements([Vector3(0,-0.083,-0.001)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer198]);
HAnimDisplacer199 := THAnimDisplacerNode.Create;
HAnimDisplacer199.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer199.SetCoordIndex([18,34]);
HAnimDisplacer199.SetDisplacements([Vector3(1.26,-0.029,-0.124),Vector3(0.898,0.009,0.026)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer199]);
HAnimDisplacer200 := THAnimDisplacerNode.Create;
HAnimDisplacer200.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer200.SetCoordIndex([34]);
HAnimDisplacer200.SetDisplacements([Vector3(0.125,0,0)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer200]);
HAnimDisplacer201 := THAnimDisplacerNode.Create;
HAnimDisplacer201.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer201.SetCoordIndex([34]);
HAnimDisplacer201.SetDisplacements([Vector3(-0.521,0.17,1.038)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer201]);
HAnimDisplacer202 := THAnimDisplacerNode.Create;
HAnimDisplacer202.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer202.SetCoordIndex([2,3,5,14,15,18,22,34]);
HAnimDisplacer202.SetDisplacements([Vector3(0,-0.909,0.074),Vector3(0,-2.034,-0.089),Vector3(0,-2.011,-0.01),Vector3(0,-0.929,0.079),Vector3(0,-1.927,-0.1141),Vector3(0,-1.34,0.088),Vector3(0,-1.011,-0.024),Vector3(0,-0.736,0)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer202]);
HAnimDisplacer203 := THAnimDisplacerNode.Create;
HAnimDisplacer203.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer203.SetCoordIndex([25,26,32,33]);
HAnimDisplacer203.SetDisplacements([Vector3(-0.078,0.5523,0),Vector3(0,0.376,0),Vector3(-0.146,0.2645,0),Vector3(0,0.4707,0)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer203]);
HAnimDisplacer204 := THAnimDisplacerNode.Create;
HAnimDisplacer204.NameField := 'left_cheek_morphinterpolator';
HAnimDisplacer204.SetCoordIndex([25,26,33]);
HAnimDisplacer204.SetDisplacements([Vector3(0,0.2937,0),Vector3(0,0.2937,0),Vector3(0,0.5019,0)]);
{ .AddDisplacers }
HAnimSegment181.SetDisplacers([HAnimDisplacer204]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment181]);
HAnimSegment205 := THAnimSegmentNode.Create;
HAnimSegment205.NameField := 'left_dorsum';
Transform206 := TTransformNode.Create;
Transform206.Translation := Vector3(0.7065,14.64,14.87);
Shape207 := TShapeNode.Create;
Appearance208 := TAppearanceNode.Create;
Appearance208 := Appearance97;
{ .SetAppearance }
Shape207.Appearance := Appearance208;
IndexedFaceSet209 := TIndexedFaceSetNode.Create;
IndexedFaceSet209.SetCoordIndex([3,0,1,-1,1,4,3,-1,5,4,1,-1,1,2,5,-1]);
IndexedFaceSet209.CreaseAngle := 3.14159;
IndexedFaceSet209.Solid := False;
IndexedFaceSet209.SetTexCoordIndex([3,0,1,-1,1,4,3,-1,5,4,1,-1,1,2,5,-1]);
TextureCoordinate210 := TTextureCoordinateNode.Create;
TextureCoordinate210.SetPoint([Vector2(0.2534,0.8152),Vector2(0.2534,0.767),Vector2(0.2528,0.7186),Vector2(0.2671,0.7978),Vector2(0.268,0.7555),Vector2(0.2641,0.7133)]);
{ .SetTexCoord }
IndexedFaceSet209.TexCoord := TextureCoordinate210;
Coordinate211 := TCoordinateNode.Create;
Coordinate211.SetPoint([Vector3(-0.2793,2.722,-0.1346),Vector3(-0.471,0.1584,-0.08532),Vector3(-0.25,-2.447,0.6076),Vector3(0.471,1.797,-0.6076),Vector3(0.4116,-0.459,-0.556),Vector3(0.352,-2.722,-0.252)]);
{ .SetCoord }
IndexedFaceSet209.Coord := Coordinate211;
{ .SetGeometry }
Shape207.Geometry := IndexedFaceSet209;
{ .AddChild }
Transform206.AddChildren([Shape207]);
{ .AddChildren }
HAnimSegment205.AddChildren([Transform206]);
Coordinate212 := TCoordinateNode.Create;
Coordinate212 := Coordinate211;
{ .SetCoord }
HAnimSegment205.Coord := Coordinate212;
HAnimDisplacer213 := THAnimDisplacerNode.Create;
HAnimDisplacer213.NameField := 'left_dorsum_morphinterpolator';
HAnimDisplacer213.SetCoordIndex([5]);
HAnimDisplacer213.SetDisplacements([Vector3(0,0.838,0)]);
{ .AddDisplacers }
HAnimSegment205.SetDisplacers([HAnimDisplacer213]);
HAnimDisplacer214 := THAnimDisplacerNode.Create;
HAnimDisplacer214.NameField := 'left_dorsum_morphinterpolator';
HAnimDisplacer214.SetCoordIndex([4]);
HAnimDisplacer214.SetDisplacements([Vector3(0,0.7543,0)]);
{ .AddDisplacers }
HAnimSegment205.SetDisplacers([HAnimDisplacer214]);
HAnimDisplacer215 := THAnimDisplacerNode.Create;
HAnimDisplacer215.NameField := 'left_dorsum_morphinterpolator';
HAnimDisplacer215.SetCoordIndex([5]);
HAnimDisplacer215.SetDisplacements([Vector3(0,0.376,0)]);
{ .AddDisplacers }
HAnimSegment205.SetDisplacers([HAnimDisplacer215]);
HAnimDisplacer216 := THAnimDisplacerNode.Create;
HAnimDisplacer216.NameField := 'left_dorsum_morphinterpolator';
HAnimDisplacer216.SetCoordIndex([5]);
HAnimDisplacer216.SetDisplacements([Vector3(0,0.293,0)]);
{ .AddDisplacers }
HAnimSegment205.SetDisplacers([HAnimDisplacer216]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment205]);
HAnimSegment217 := THAnimSegmentNode.Create;
HAnimSegment217.NameField := 'left_ear';
Transform218 := TTransformNode.Create;
Transform218.Translation := Vector3(12.49,15.99,1.017);
Shape219 := TShapeNode.Create;
Appearance220 := TAppearanceNode.Create;
Appearance220 := Appearance97;
{ .SetAppearance }
Shape219.Appearance := Appearance220;
IndexedFaceSet221 := TIndexedFaceSetNode.Create;
IndexedFaceSet221.SetCoordIndex([6,2,0,-1,5,4,1,-1,1,2,5,-1,2,1,0,-1,0,3,7,-1,7,6,0,-1,4,3,0,-1,0,1,4,-1]);
IndexedFaceSet221.CreaseAngle := 3.14159;
IndexedFaceSet221.Solid := False;
IndexedFaceSet221.SetTexCoordIndex([0,1,2,-1,4,5,3,-1,3,1,4,-1,1,3,2,-1,2,7,6,-1,6,0,2,-1,5,7,2,-1,2,3,5,-1]);
TextureCoordinate222 := TTextureCoordinateNode.Create;
TextureCoordinate222.SetPoint([Vector2(0.4392,0.6356),Vector2(0.4239,0.6387),Vector2(0.4239,0.6408),Vector2(0.412,0.6504),Vector2(0.4239,0.6648),Vector2(0.4123,0.664),Vector2(0.4352,0.6651),Vector2(0.4267,0.6717)]);
{ .SetTexCoord }
IndexedFaceSet221.TexCoord := TextureCoordinate222;
Coordinate223 := TCoordinateNode.Create;
Coordinate223.SetPoint([Vector3(1.104,-2.879,-0.3646),Vector3(1.92,-0.7197,-2.765),Vector3(0.3083,-3.342,-0.3477),Vector3(1.674,4.039,0.222),Vector3(2.14,2.313,-2.716),Vector3(0.349,2.504,-0.3477),Vector3(-2.14,-4.039,2.765),Vector3(-0.2989,2.568,1.943)]);
{ .SetCoord }
IndexedFaceSet221.Coord := Coordinate223;
{ .SetGeometry }
Shape219.Geometry := IndexedFaceSet221;
{ .AddChild }
Transform218.AddChildren([Shape219]);
{ .AddChildren }
HAnimSegment217.AddChildren([Transform218]);
Coordinate224 := TCoordinateNode.Create;
Coordinate224 := Coordinate223;
{ .SetCoord }
HAnimSegment217.Coord := Coordinate224;
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment217]);
HAnimSegment225 := THAnimSegmentNode.Create;
HAnimSegment225.NameField := 'left_eyebrow';
Transform226 := TTransformNode.Create;
Transform226.Translation := Vector3(5.691,19.58,13.13);
Shape227 := TShapeNode.Create;
Appearance228 := TAppearanceNode.Create;
Appearance228 := Appearance97;
{ .SetAppearance }
Shape227.Appearance := Appearance228;
IndexedFaceSet229 := TIndexedFaceSetNode.Create;
IndexedFaceSet229.SetCoordIndex([5,1,7,-1,7,8,5,-1,6,0,4,-1,7,1,0,-1,0,6,7,-1,2,4,0,-1,0,3,2,-1,3,0,1,-1]);
IndexedFaceSet229.CreaseAngle := 3.14159;
IndexedFaceSet229.Solid := False;
IndexedFaceSet229.SetTexCoordIndex([5,1,7,-1,7,8,5,-1,6,0,4,-1,7,1,0,-1,0,6,7,-1,2,4,0,-1,0,3,2,-1,3,0,1,-1]);
TextureCoordinate230 := TTextureCoordinateNode.Create;
TextureCoordinate230.SetPoint([Vector2(0.3395,0.8606),Vector2(0.3992,0.8783),Vector2(0.2728,0.8741),Vector2(0.3391,0.876),Vector2(0.274,0.8322),Vector2(0.4299,0.8825),Vector2(0.3402,0.8534),Vector2(0.3979,0.8641),Vector2(0.4266,0.8643)]);
{ .SetTexCoord }
IndexedFaceSet229.TexCoord := TextureCoordinate230;
Coordinate231 := TCoordinateNode.Create;
Coordinate231.SetPoint([Vector3(-0.6206,0.2925,1.523),Vector3(2.547,1.129,-0.8682),Vector3(-4.175,0.9255,2.806),Vector3(-0.6464,1.103,1.5),Vector3(-4.104,-1.337,2.665),Vector3(4.175,1.337,-2.599),Vector3(-0.6118,-0.2218,1.466),Vector3(2.366,0.3082,-0.9723),Vector3(4.011,0.3542,-2.806)]);
{ .SetCoord }
IndexedFaceSet229.Coord := Coordinate231;
{ .SetGeometry }
Shape227.Geometry := IndexedFaceSet229;
{ .AddChild }
Transform226.AddChildren([Shape227]);
{ .AddChildren }
HAnimSegment225.AddChildren([Transform226]);
Coordinate232 := TCoordinateNode.Create;
Coordinate232 := Coordinate231;
{ .SetCoord }
HAnimSegment225.Coord := Coordinate232;
HAnimDisplacer233 := THAnimDisplacerNode.Create;
HAnimDisplacer233.NameField := 'left_eyebrow_morphinterpolator';
HAnimDisplacer233.SetCoordIndex([0,1,3,4,5,6,7,8]);
HAnimDisplacer233.SetDisplacements([Vector3(-0.5074,-0.4985,0),Vector3(0,-0.094,0),Vector3(-0.5076,-0.4988,0),Vector3(-0.332,-0.414,0),Vector3(0,-0.094,0),Vector3(-0.5072,-0.4985,0),Vector3(0,-0.0941,0),Vector3(0,-0.0942,0)]);
{ .AddDisplacers }
HAnimSegment225.SetDisplacers([HAnimDisplacer233]);
HAnimDisplacer234 := THAnimDisplacerNode.Create;
HAnimDisplacer234.NameField := 'left_eyebrow_morphinterpolator';
HAnimDisplacer234.SetCoordIndex([0,1,3,4,6,7]);
HAnimDisplacer234.SetDisplacements([Vector3(0,0.3656,0),Vector3(0,0.095,0),Vector3(0,0.365,0),Vector3(0,0.3657,0),Vector3(0,0.3655,0),Vector3(0,0.0945,0)]);
{ .AddDisplacers }
HAnimSegment225.SetDisplacers([HAnimDisplacer234]);
HAnimDisplacer235 := THAnimDisplacerNode.Create;
HAnimDisplacer235.NameField := 'left_eyebrow_morphinterpolator';
HAnimDisplacer235.SetCoordIndex([7,8]);
HAnimDisplacer235.SetDisplacements([Vector3(0,-0.4631,0),Vector3(0,-0.4632,0)]);
{ .AddDisplacers }
HAnimSegment225.SetDisplacers([HAnimDisplacer235]);
HAnimDisplacer236 := THAnimDisplacerNode.Create;
HAnimDisplacer236.NameField := 'left_eyebrow_morphinterpolator';
HAnimDisplacer236.SetCoordIndex([6]);
HAnimDisplacer236.SetDisplacements([Vector3(0,0.4975,0)]);
{ .AddDisplacers }
HAnimSegment225.SetDisplacers([HAnimDisplacer236]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment225]);
HAnimSegment237 := THAnimSegmentNode.Create;
HAnimSegment237.NameField := 'left_forehead';
Transform238 := TTransformNode.Create;
Transform238.Translation := Vector3(6.652,27.61,9.229);
Shape239 := TShapeNode.Create;
Appearance240 := TAppearanceNode.Create;
Appearance240 := Appearance97;
{ .SetAppearance }
Shape239.Appearance := Appearance240;
IndexedFaceSet241 := TIndexedFaceSetNode.Create;
IndexedFaceSet241.SetCoordIndex([1,9,13,-1,13,4,1,-1,3,2,9,-1,3,0,15,-1,15,0,14,-1,0,16,14,-1,1,20,16,-1,16,0,1,-1,3,15,17,-1,17,6,3,-1,2,3,6,-1,6,5,2,-1,6,17,18,-1,18,8,6,-1,5,6,8,-1,8,7,5,-1,9,2,10,-1,10,13,9,-1,1,0,3,-1,3,9,1,-1,1,4,19,-1,19,20,1,-1,2,5,11,-1,11,10,2,-1,5,7,12,-1,12,11,5,-1]);
IndexedFaceSet241.CreaseAngle := 3.14159;
IndexedFaceSet241.Solid := False;
IndexedFaceSet241.SetTexCoordIndex([1,9,13,-1,13,4,1,-1,3,0,9,-1,3,2,15,-1,15,2,14,-1,2,16,14,-1,1,20,16,-1,16,2,1,-1,3,15,17,-1,17,6,3,-1,0,3,6,-1,6,5,0,-1,6,17,18,-1,18,8,6,-1,5,6,8,-1,8,7,5,-1,9,0,10,-1,10,13,9,-1,1,2,3,-1,3,9,1,-1,1,4,19,-1,19,20,1,-1,0,5,11,-1,11,10,0,-1,5,7,12,-1,12,11,5,-1]);
TextureCoordinate242 := TTextureCoordinateNode.Create;
TextureCoordinate242.SetPoint([Vector2(0.3563,0.9819),Vector2(0.3371,0.9436),Vector2(0.414,0.9365),Vector2(0.428,0.9618),Vector2(0.2706,0.9459),Vector2(0.3807,0.9869),Vector2(0.434,0.9653),Vector2(0.3786,0.9951),Vector2(0.4425,0.9551),Vector2(0.3372,0.9707),Vector2(0.3002,0.9788),Vector2(0.3015,0.9807),Vector2(0.3016,0.9833),Vector2(0.2804,0.9652),Vector2(0.4299,0.8825),Vector2(0.4655,0.9081),Vector2(0.3992,0.8783),Vector2(0.4676,0.8967),Vector2(0.465,0.9097),Vector2(0.2728,0.8741),Vector2(0.3391,0.876)]);
{ .SetTexCoord }
IndexedFaceSet241.TexCoord := TextureCoordinate242;
Coordinate243 := TCoordinateNode.Create;
Coordinate243.SetPoint([Vector3(2.366,-3.832,2.607),Vector3(-1.721,-3.37,5.298),Vector3(-0.9278,3.698,2.337),Vector3(2.798,0.5048,1.078),Vector3(-5.256,-3.235,6.945),Vector3(0.1169,5.415,-1.676),Vector3(3.513,2.123,-2.845),Vector3(0.04584,5.238,-6.945),Vector3(3.382,0.4603,-6.945),Vector3(-1.306,1.607,4.614),Vector3(-4.278,5.326,2.844),Vector3(-4.148,6.951,-0.7431),Vector3(-4.148,7.108,-6.945),Vector3(-4.686,2.054,6.111),Vector3(3.214,-6.697,1.298),Vector3(4.876,-4.833,-1.108),Vector3(1.586,-6.904,3.028),Vector3(5.256,-4.053,-3.68),Vector3(4.869,-4.024,-6.945),Vector3(-5.136,-7.108,6.703),Vector3(-1.607,-6.931,5.397)]);
{ .SetCoord }
IndexedFaceSet241.Coord := Coordinate243;
{ .SetGeometry }
Shape239.Geometry := IndexedFaceSet241;
{ .AddChild }
Transform238.AddChildren([Shape239]);
{ .AddChildren }
HAnimSegment237.AddChildren([Transform238]);
Coordinate244 := TCoordinateNode.Create;
Coordinate244 := Coordinate243;
{ .SetCoord }
HAnimSegment237.Coord := Coordinate244;
HAnimDisplacer245 := THAnimDisplacerNode.Create;
HAnimDisplacer245.NameField := 'left_forehead_morphinterpolator';
HAnimDisplacer245.SetCoordIndex([14,16,20]);
HAnimDisplacer245.SetDisplacements([Vector3(0,-0.094,0),Vector3(0,-0.094,0),Vector3(-0.508,-0.498,0)]);
{ .AddDisplacers }
HAnimSegment237.SetDisplacers([HAnimDisplacer245]);
HAnimDisplacer246 := THAnimDisplacerNode.Create;
HAnimDisplacer246.NameField := 'left_forehead_morphinterpolator';
HAnimDisplacer246.SetCoordIndex([16,20]);
HAnimDisplacer246.SetDisplacements([Vector3(0,0.094,0),Vector3(0,0.366,0)]);
{ .AddDisplacers }
HAnimSegment237.SetDisplacers([HAnimDisplacer246]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment237]);
HAnimSegment247 := THAnimSegmentNode.Create;
HAnimSegment247.NameField := 'left_lower_eyelid';
Transform248 := TTransformNode.Create;
Transform248.Translation := Vector3(6.11,16.45,11.32);
Shape249 := TShapeNode.Create;
Appearance250 := TAppearanceNode.Create;
Appearance250 := Appearance97;
{ .SetAppearance }
Shape249.Appearance := Appearance250;
IndexedFaceSet251 := TIndexedFaceSetNode.Create;
IndexedFaceSet251.SetCoordIndex([8,3,10,-1,10,9,8,-1,3,8,7,-1,7,0,3,-1,13,14,6,-1,6,1,13,-1,0,7,5,-1,5,2,0,-1,11,2,5,-1,5,12,11,-1,4,1,6,-1,6,9,4,-1,10,4,9,-1]);
IndexedFaceSet251.CreaseAngle := 3.14159;
IndexedFaceSet251.Solid := False;
IndexedFaceSet251.SetTexCoordIndex([8,0,10,-1,10,9,8,-1,0,8,7,-1,7,2,0,-1,13,14,6,-1,6,3,13,-1,2,7,5,-1,5,4,2,-1,11,4,5,-1,5,12,11,-1,1,3,6,-1,6,9,1,-1,10,1,9,-1]);
TextureCoordinate252 := TTextureCoordinateNode.Create;
TextureCoordinate252.SetPoint([Vector2(0.3777,0.7936),Vector2(0.3315,0.7948),Vector2(0.3916,0.7984),Vector2(0.309,0.8013),Vector2(0.4011,0.8053),Vector2(0.4279,0.7939),Vector2(0.301,0.7815),Vector2(0.3993,0.7753),Vector2(0.3692,0.7714),Vector2(0.3287,0.7742),Vector2(0.344,0.7945),Vector2(0.4198,0.8261),Vector2(0.4335,0.819),Vector2(0.2981,0.8094),Vector2(0.2845,0.7889)]);
{ .SetTexCoord }
IndexedFaceSet251.TexCoord := TextureCoordinate252;
Coordinate253 := TCoordinateNode.Create;
Coordinate253.SetPoint([Vector3(1.719,-0.0007944,-0.6346),Vector3(-2.666,0.1549,1.996),Vector3(2.315,0.3494,-0.8744),Vector3(0.989,-0.2676,0.1056),Vector3(-1.449,-0.2205,1.411),Vector3(3.651,-0.24,-2.494),Vector3(-3.04,-0.8628,1.994),Vector3(2.113,-1.162,-0.9625),Vector3(0.5806,-1.427,0.2034),Vector3(-1.577,-1.266,1.24),Vector3(-0.7878,-0.2335,1.055),Vector3(3.25,1.427,-1.433),Vector3(3.946,1.094,-2.536),Vector3(-3.174,0.6164,2.536),Vector3(-3.946,-0.4586,2.476)]);
{ .SetCoord }
IndexedFaceSet251.Coord := Coordinate253;
{ .SetGeometry }
Shape249.Geometry := IndexedFaceSet251;
{ .AddChild }
Transform248.AddChildren([Shape249]);
{ .AddChildren }
HAnimSegment247.AddChildren([Transform248]);
Coordinate254 := TCoordinateNode.Create;
Coordinate254 := Coordinate253;
{ .SetCoord }
HAnimSegment247.Coord := Coordinate254;
HAnimDisplacer255 := THAnimDisplacerNode.Create;
HAnimDisplacer255.NameField := 'left_lower_eyelid_morphinterpolator';
HAnimDisplacer255.SetCoordIndex([0,1,2,4]);
HAnimDisplacer255.SetDisplacements([Vector3(0,0.1171,0.1997),Vector3(0,0.2271,0.251),Vector3(0,0.1444,0.0565),Vector3(-0.164,0.1045,0.25)]);
{ .AddDisplacers }
HAnimSegment247.SetDisplacers([HAnimDisplacer255]);
HAnimDisplacer256 := THAnimDisplacerNode.Create;
HAnimDisplacer256.NameField := 'left_lower_eyelid_morphinterpolator';
HAnimDisplacer256.SetCoordIndex([5,6,7,8,9,14]);
HAnimDisplacer256.SetDisplacements([Vector3(0,0.1005,0.079),Vector3(0,0.1344,-0.107),Vector3(0.299,0.3808,-0.1835),Vector3(0,0.268,0.0997),Vector3(0,0.2684,0),Vector3(0,0.067,-0.082)]);
{ .AddDisplacers }
HAnimSegment247.SetDisplacers([HAnimDisplacer256]);
HAnimDisplacer257 := THAnimDisplacerNode.Create;
HAnimDisplacer257.NameField := 'left_lower_eyelid_morphinterpolator';
HAnimDisplacer257.SetCoordIndex([0,1,2,4]);
HAnimDisplacer257.SetDisplacements([Vector3(0,0.1171,0.1997),Vector3(0,0.2271,0.251),Vector3(0,0.1444,0.0565),Vector3(-0.164,0.1045,0.25)]);
{ .AddDisplacers }
HAnimSegment247.SetDisplacers([HAnimDisplacer257]);
HAnimDisplacer258 := THAnimDisplacerNode.Create;
HAnimDisplacer258.NameField := 'left_lower_eyelid_morphinterpolator';
HAnimDisplacer258.SetCoordIndex([11]);
HAnimDisplacer258.SetDisplacements([Vector3(0,-0.349,0)]);
{ .AddDisplacers }
HAnimSegment247.SetDisplacers([HAnimDisplacer258]);
HAnimDisplacer259 := THAnimDisplacerNode.Create;
HAnimDisplacer259.NameField := 'left_lower_eyelid_morphinterpolator';
HAnimDisplacer259.SetCoordIndex([0,1,2,3,4,10]);
HAnimDisplacer259.SetDisplacements([Vector3(0,0.3086,0),Vector3(0,0.0964,0),Vector3(-0.09,0.209,0),Vector3(0,0.3085,0),Vector3(0,0.1513,0),Vector3(0,0.1512,0)]);
{ .AddDisplacers }
HAnimSegment247.SetDisplacers([HAnimDisplacer259]);
HAnimDisplacer260 := THAnimDisplacerNode.Create;
HAnimDisplacer260.NameField := 'left_lower_eyelid_morphinterpolator';
HAnimDisplacer260.SetCoordIndex([0,1,2,3,4,10,11,12]);
HAnimDisplacer260.SetDisplacements([Vector3(0,0.6387,0.7019),Vector3(0,0.3839,0.263),Vector3(0,0.499,0.4721),Vector3(0,0.7235,0.3988),Vector3(0,0.6387,0.398),Vector3(0,0.6386,0.399),Vector3(0,-0.078,0),Vector3(0,-0.078,0)]);
{ .AddDisplacers }
HAnimSegment247.SetDisplacers([HAnimDisplacer260]);
HAnimDisplacer261 := THAnimDisplacerNode.Create;
HAnimDisplacer261.NameField := 'left_lower_eyelid_morphinterpolator';
HAnimDisplacer261.SetCoordIndex([13]);
HAnimDisplacer261.SetDisplacements([Vector3(0,0.4976,0)]);
{ .AddDisplacers }
HAnimSegment247.SetDisplacers([HAnimDisplacer261]);
HAnimDisplacer262 := THAnimDisplacerNode.Create;
HAnimDisplacer262.NameField := 'left_lower_eyelid_morphinterpolator';
HAnimDisplacer262.SetCoordIndex([0,1,2,3,4,10,11]);
HAnimDisplacer262.SetDisplacements([Vector3(0.214,1.0508,0.5553),Vector3(0,0.4269,0.471),Vector3(0.093,0.8476,0.3331),Vector3(-0.3349,1.0786,0.7039),Vector3(0,0.8357,0.707),Vector3(0,0.8975,0.841),Vector3(0,0,0.034)]);
{ .AddDisplacers }
HAnimSegment247.SetDisplacers([HAnimDisplacer262]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment247]);
HAnimSegment263 := THAnimSegmentNode.Create;
HAnimSegment263.NameField := 'left_lower_vermillion_lip';
Transform264 := TTransformNode.Create;
Transform264.Translation := Vector3(1.788,8.405,13.04);
Shape265 := TShapeNode.Create;
Appearance266 := TAppearanceNode.Create;
Appearance266 := Appearance97;
{ .SetAppearance }
Shape265.Appearance := Appearance266;
IndexedFaceSet267 := TIndexedFaceSetNode.Create;
IndexedFaceSet267.SetCoordIndex([2,1,0,-1]);
IndexedFaceSet267.CreaseAngle := 3.14159;
IndexedFaceSet267.Solid := False;
IndexedFaceSet267.SetTexCoordIndex([2,1,0,-1]);
TextureCoordinate268 := TTextureCoordinateNode.Create;
TextureCoordinate268.SetPoint([Vector2(0.2548,0.6554),Vector2(0.3007,0.651),Vector2(0.2652,0.6384)]);
{ .SetTexCoord }
IndexedFaceSet267.TexCoord := TextureCoordinate268;
Coordinate269 := TCoordinateNode.Create;
Coordinate269.SetPoint([Vector3(-1.218,0.4506,0.603),Vector3(1.218,0.219,-0.603),Vector3(-1.154,-0.4506,0.3592)]);
{ .SetCoord }
IndexedFaceSet267.Coord := Coordinate269;
{ .SetGeometry }
Shape265.Geometry := IndexedFaceSet267;
{ .AddChild }
Transform264.AddChildren([Shape265]);
{ .AddChildren }
HAnimSegment263.AddChildren([Transform264]);
Coordinate270 := TCoordinateNode.Create;
Coordinate270 := Coordinate269;
{ .SetCoord }
HAnimSegment263.Coord := Coordinate270;
HAnimDisplacer271 := THAnimDisplacerNode.Create;
HAnimDisplacer271.NameField := 'left_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer271.SetCoordIndex([0,1,2]);
HAnimDisplacer271.SetDisplacements([Vector3(0,0.3821,0.435),Vector3(0.629,1.323,0.1066),Vector3(0,0.7896,0.4659)]);
{ .AddDisplacers }
HAnimSegment263.SetDisplacers([HAnimDisplacer271]);
HAnimDisplacer272 := THAnimDisplacerNode.Create;
HAnimDisplacer272.NameField := 'left_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer272.SetCoordIndex([0,1,2]);
HAnimDisplacer272.SetDisplacements([Vector3(0,0.187,0),Vector3(0,-0.1372,0),Vector3(0,0.6497,0.364)]);
{ .AddDisplacers }
HAnimSegment263.SetDisplacers([HAnimDisplacer272]);
HAnimDisplacer273 := THAnimDisplacerNode.Create;
HAnimDisplacer273.NameField := 'left_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer273.SetCoordIndex([0,1,2]);
HAnimDisplacer273.SetDisplacements([Vector3(0,-0.0896,0.533),Vector3(0.378,0.396,0.1527),Vector3(0,0.6332,0.8798)]);
{ .AddDisplacers }
HAnimSegment263.SetDisplacers([HAnimDisplacer273]);
HAnimDisplacer274 := THAnimDisplacerNode.Create;
HAnimDisplacer274.NameField := 'left_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer274.SetCoordIndex([0,2]);
HAnimDisplacer274.SetDisplacements([Vector3(0,-0.6156,0),Vector3(0,-0.6154,0)]);
{ .AddDisplacers }
HAnimSegment263.SetDisplacers([HAnimDisplacer274]);
HAnimDisplacer275 := THAnimDisplacerNode.Create;
HAnimDisplacer275.NameField := 'left_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer275.SetCoordIndex([0,1,2]);
HAnimDisplacer275.SetDisplacements([Vector3(0,-0.0368,0.837),Vector3(0.21,-0.7014,0.0777),Vector3(0,0.5213,1.2488)]);
{ .AddDisplacers }
HAnimSegment263.SetDisplacers([HAnimDisplacer275]);
HAnimDisplacer276 := THAnimDisplacerNode.Create;
HAnimDisplacer276.NameField := 'left_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer276.SetCoordIndex([2]);
HAnimDisplacer276.SetDisplacements([Vector3(1.176,0.13,-0.375)]);
{ .AddDisplacers }
HAnimSegment263.SetDisplacers([HAnimDisplacer276]);
HAnimDisplacer277 := THAnimDisplacerNode.Create;
HAnimDisplacer277.NameField := 'left_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer277.SetCoordIndex([0,1,2]);
HAnimDisplacer277.SetDisplacements([Vector3(0.2642,-0.7179,0.823),Vector3(-0.8355,0,1.0637),Vector3(-0.101,-0.5994,0.7018)]);
{ .AddDisplacers }
HAnimSegment263.SetDisplacers([HAnimDisplacer277]);
HAnimDisplacer278 := THAnimDisplacerNode.Create;
HAnimDisplacer278.NameField := 'left_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer278.SetCoordIndex([0,2]);
HAnimDisplacer278.SetDisplacements([Vector3(0,-0.3795,0.1337),Vector3(0,-0.21,0)]);
{ .AddDisplacers }
HAnimSegment263.SetDisplacers([HAnimDisplacer278]);
HAnimDisplacer279 := THAnimDisplacerNode.Create;
HAnimDisplacer279.NameField := 'left_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer279.SetCoordIndex([0,1,2]);
HAnimDisplacer279.SetDisplacements([Vector3(0,-0.3959,0.859),Vector3(-0.9348,0,0.5167),Vector3(0,-0.2497,0.9748)]);
{ .AddDisplacers }
HAnimSegment263.SetDisplacers([HAnimDisplacer279]);
HAnimDisplacer280 := THAnimDisplacerNode.Create;
HAnimDisplacer280.NameField := 'left_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer280.SetCoordIndex([0,2]);
HAnimDisplacer280.SetDisplacements([Vector3(0,-0.4319,0.0434),Vector3(0,-0.4133,-0.0174)]);
{ .AddDisplacers }
HAnimSegment263.SetDisplacers([HAnimDisplacer280]);
HAnimDisplacer281 := THAnimDisplacerNode.Create;
HAnimDisplacer281.NameField := 'left_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer281.SetCoordIndex([1]);
HAnimDisplacer281.SetDisplacements([Vector3(0.898,0.0092,0.0257)]);
{ .AddDisplacers }
HAnimSegment263.SetDisplacers([HAnimDisplacer281]);
HAnimDisplacer282 := THAnimDisplacerNode.Create;
HAnimDisplacer282.NameField := 'left_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer282.SetCoordIndex([0,1,2]);
HAnimDisplacer282.SetDisplacements([Vector3(0,-0.0594,0.1828),Vector3(0.125,0,0),Vector3(0,0.633,0.3625)]);
{ .AddDisplacers }
HAnimSegment263.SetDisplacers([HAnimDisplacer282]);
HAnimDisplacer283 := THAnimDisplacerNode.Create;
HAnimDisplacer283.NameField := 'left_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer283.SetCoordIndex([0,1,2]);
HAnimDisplacer283.SetDisplacements([Vector3(-0.042,-0.058,1.082),Vector3(-0.5211,0.1705,1.038),Vector3(0.1612,0.0641,0.9158)]);
{ .AddDisplacers }
HAnimSegment263.SetDisplacers([HAnimDisplacer283]);
HAnimDisplacer284 := THAnimDisplacerNode.Create;
HAnimDisplacer284.NameField := 'left_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer284.SetCoordIndex([0,2]);
HAnimDisplacer284.SetDisplacements([Vector3(0,-0.5685,0),Vector3(0,-0.5684,0)]);
{ .AddDisplacers }
HAnimSegment263.SetDisplacers([HAnimDisplacer284]);
HAnimDisplacer285 := THAnimDisplacerNode.Create;
HAnimDisplacer285.NameField := 'left_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer285.SetCoordIndex([0,1,2]);
HAnimDisplacer285.SetDisplacements([Vector3(0.176,-2.4736,0.049),Vector3(0,-0.7362,0),Vector3(0.1963,-2.4594,0.002)]);
{ .AddDisplacers }
HAnimSegment263.SetDisplacers([HAnimDisplacer285]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment263]);
HAnimSegment286 := THAnimSegmentNode.Create;
HAnimSegment286.NameField := 'left_nasolabial_cheek';
Transform287 := TTransformNode.Create;
Transform287.Translation := Vector3(2.021,10.27,13.53);
Shape288 := TShapeNode.Create;
Appearance289 := TAppearanceNode.Create;
Appearance289 := Appearance97;
{ .SetAppearance }
Shape288.Appearance := Appearance289;
IndexedFaceSet290 := TIndexedFaceSetNode.Create;
IndexedFaceSet290.SetCoordIndex([0,3,4,-1,3,0,5,-1,5,0,1,-1,1,2,5,-1]);
IndexedFaceSet290.CreaseAngle := 3.14159;
IndexedFaceSet290.Solid := False;
IndexedFaceSet290.SetTexCoordIndex([0,3,4,-1,3,0,5,-1,5,0,1,-1,1,2,5,-1]);
TextureCoordinate291 := TTextureCoordinateNode.Create;
TextureCoordinate291.SetPoint([Vector2(0.2661,0.696),Vector2(0.2636,0.664),Vector2(0.3007,0.651),Vector2(0.2727,0.7092),Vector2(0.2641,0.7133),Vector2(0.2788,0.6949)]);
{ .SetTexCoord }
IndexedFaceSet290.TexCoord := TextureCoordinate291;
Coordinate292 := TCoordinateNode.Create;
Coordinate292.SetPoint([Vector3(-0.8548,0.741,0.5666),Vector3(-0.9852,-0.962,1.035),Vector3(0.9852,-1.648,-1.094),Vector3(-0.5035,1.438,0.4388),Vector3(-0.9626,1.648,1.094),Vector3(-0.1761,0.6814,0.2329)]);
{ .SetCoord }
IndexedFaceSet290.Coord := Coordinate292;
{ .SetGeometry }
Shape288.Geometry := IndexedFaceSet290;
{ .AddChild }
Transform287.AddChildren([Shape288]);
{ .AddChildren }
HAnimSegment286.AddChildren([Transform287]);
Coordinate293 := TCoordinateNode.Create;
Coordinate293 := Coordinate292;
{ .SetCoord }
HAnimSegment286.Coord := Coordinate293;
HAnimDisplacer294 := THAnimDisplacerNode.Create;
HAnimDisplacer294.NameField := 'left_nasolabial_cheek_morphinterpolator';
HAnimDisplacer294.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer294.SetDisplacements([Vector3(0,0.838,0),Vector3(0,0.5164,0),Vector3(0.6288,1.3226,0.1063),Vector3(0,0.838,0),Vector3(0,0.838,0),Vector3(0,0.8376,0)]);
{ .AddDisplacers }
HAnimSegment286.SetDisplacers([HAnimDisplacer294]);
HAnimDisplacer295 := THAnimDisplacerNode.Create;
HAnimDisplacer295.NameField := 'left_nasolabial_cheek_morphinterpolator';
HAnimDisplacer295.SetCoordIndex([1,2]);
HAnimDisplacer295.SetDisplacements([Vector3(0,0.0967,0),Vector3(0,-0.137,0)]);
{ .AddDisplacers }
HAnimSegment286.SetDisplacers([HAnimDisplacer295]);
HAnimDisplacer296 := THAnimDisplacerNode.Create;
HAnimDisplacer296.NameField := 'left_nasolabial_cheek_morphinterpolator';
HAnimDisplacer296.SetCoordIndex([1,2]);
HAnimDisplacer296.SetDisplacements([Vector3(0,-0.069,0.044),Vector3(0.3778,0.396,0.1524)]);
{ .AddDisplacers }
HAnimSegment286.SetDisplacers([HAnimDisplacer296]);
HAnimDisplacer297 := THAnimDisplacerNode.Create;
HAnimDisplacer297.NameField := 'left_nasolabial_cheek_morphinterpolator';
HAnimDisplacer297.SetCoordIndex([1,2]);
HAnimDisplacer297.SetDisplacements([Vector3(0,-0.0221,0.125),Vector3(0.2098,-0.701,0.077)]);
{ .AddDisplacers }
HAnimSegment286.SetDisplacers([HAnimDisplacer297]);
HAnimDisplacer298 := THAnimDisplacerNode.Create;
HAnimDisplacer298.NameField := 'left_nasolabial_cheek_morphinterpolator';
HAnimDisplacer298.SetCoordIndex([5]);
HAnimDisplacer298.SetDisplacements([Vector3(1.176,0.13,-0.375)]);
{ .AddDisplacers }
HAnimSegment286.SetDisplacers([HAnimDisplacer298]);
HAnimDisplacer299 := THAnimDisplacerNode.Create;
HAnimDisplacer299.NameField := 'left_nasolabial_cheek_morphinterpolator';
HAnimDisplacer299.SetCoordIndex([1,2,5]);
HAnimDisplacer299.SetDisplacements([Vector3(-0.1338,0.1022,0.551),Vector3(-0.8357,0,1.0634),Vector3(0,0,0.1091)]);
{ .AddDisplacers }
HAnimSegment286.SetDisplacers([HAnimDisplacer299]);
HAnimDisplacer300 := THAnimDisplacerNode.Create;
HAnimDisplacer300.NameField := 'left_nasolabial_cheek_morphinterpolator';
HAnimDisplacer300.SetCoordIndex([1,2]);
HAnimDisplacer300.SetDisplacements([Vector3(-0.1438,0,0.566),Vector3(-0.935,0,0.5164)]);
{ .AddDisplacers }
HAnimSegment286.SetDisplacers([HAnimDisplacer300]);
HAnimDisplacer301 := THAnimDisplacerNode.Create;
HAnimDisplacer301.NameField := 'left_nasolabial_cheek_morphinterpolator';
HAnimDisplacer301.SetCoordIndex([2]);
HAnimDisplacer301.SetDisplacements([Vector3(0.8978,0.009,0.025)]);
{ .AddDisplacers }
HAnimSegment286.SetDisplacers([HAnimDisplacer301]);
HAnimDisplacer302 := THAnimDisplacerNode.Create;
HAnimDisplacer302.NameField := 'left_nasolabial_cheek_morphinterpolator';
HAnimDisplacer302.SetCoordIndex([1,2]);
HAnimDisplacer302.SetDisplacements([Vector3(0,-0.52,-0.655),Vector3(0.1248,0,0)]);
{ .AddDisplacers }
HAnimSegment286.SetDisplacers([HAnimDisplacer302]);
HAnimDisplacer303 := THAnimDisplacerNode.Create;
HAnimDisplacer303.NameField := 'left_nasolabial_cheek_morphinterpolator';
HAnimDisplacer303.SetCoordIndex([1,2]);
HAnimDisplacer303.SetDisplacements([Vector3(-0.0758,-0.0332,0.261),Vector3(-0.5214,0.171,1.0377)]);
{ .AddDisplacers }
HAnimSegment286.SetDisplacers([HAnimDisplacer303]);
HAnimDisplacer304 := THAnimDisplacerNode.Create;
HAnimDisplacer304.NameField := 'left_nasolabial_cheek_morphinterpolator';
HAnimDisplacer304.SetCoordIndex([1,2]);
HAnimDisplacer304.SetDisplacements([Vector3(0,0.2684,0),Vector3(0,-0.736,0)]);
{ .AddDisplacers }
HAnimSegment286.SetDisplacers([HAnimDisplacer304]);
HAnimDisplacer305 := THAnimDisplacerNode.Create;
HAnimDisplacer305.NameField := 'left_nasolabial_cheek_morphinterpolator';
HAnimDisplacer305.SetCoordIndex([0,3,4,5]);
HAnimDisplacer305.SetDisplacements([Vector3(0,0.376,0),Vector3(-0.0781,0.552,0),Vector3(0,0.376,0),Vector3(0,0.4706,0)]);
{ .AddDisplacers }
HAnimSegment286.SetDisplacers([HAnimDisplacer305]);
HAnimDisplacer306 := THAnimDisplacerNode.Create;
HAnimDisplacer306.NameField := 'left_nasolabial_cheek_morphinterpolator';
HAnimDisplacer306.SetCoordIndex([0,1,3,4,5]);
HAnimDisplacer306.SetDisplacements([Vector3(0,0.502,0),Vector3(0,0.5016,0),Vector3(0,0.294,0),Vector3(0,0.294,0),Vector3(0,0.5016,0)]);
{ .AddDisplacers }
HAnimSegment286.SetDisplacers([HAnimDisplacer306]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment286]);
HAnimSegment307 := THAnimSegmentNode.Create;
HAnimSegment307.NameField := 'left_nostril';
Transform308 := TTransformNode.Create;
Transform308.Translation := Vector3(0.7684,11.22,15.04);
Shape309 := TShapeNode.Create;
Appearance310 := TAppearanceNode.Create;
Appearance310 := Appearance97;
{ .SetAppearance }
Shape309.Appearance := Appearance310;
IndexedFaceSet311 := TIndexedFaceSetNode.Create;
IndexedFaceSet311.SetCoordIndex([0,2,3,-1,1,2,0,-1,4,3,2,-1]);
IndexedFaceSet311.CreaseAngle := 3.14159;
IndexedFaceSet311.Solid := False;
IndexedFaceSet311.SetTexCoordIndex([0,2,3,-1,1,2,0,-1,4,3,2,-1]);
TextureCoordinate312 := TTextureCoordinateNode.Create;
TextureCoordinate312.SetPoint([Vector2(0.2538,0.7051),Vector2(0.2511,0.6816),Vector2(0.2661,0.696),Vector2(0.2528,0.7186),Vector2(0.2641,0.7133)]);
{ .SetTexCoord }
IndexedFaceSet311.TexCoord := TextureCoordinate312;
Coordinate313 := TCoordinateNode.Create;
Coordinate313.SetPoint([Vector3(-0.2923,0.2585,0.9483),Vector3(-0.398,-0.9732,0.1131),Vector3(0.398,-0.209,-0.9483),Vector3(-0.3119,0.9732,0.439),Vector3(0.2902,0.6978,-0.4206)]);
{ .SetCoord }
IndexedFaceSet311.Coord := Coordinate313;
{ .SetGeometry }
Shape309.Geometry := IndexedFaceSet311;
{ .AddChild }
Transform308.AddChildren([Shape309]);
{ .AddChildren }
HAnimSegment307.AddChildren([Transform308]);
Coordinate314 := TCoordinateNode.Create;
Coordinate314 := Coordinate313;
{ .SetCoord }
HAnimSegment307.Coord := Coordinate314;
HAnimDisplacer315 := THAnimDisplacerNode.Create;
HAnimDisplacer315.NameField := 'left_nostril_morphinterpolator';
HAnimDisplacer315.SetCoordIndex([2,4]);
HAnimDisplacer315.SetDisplacements([Vector3(0,0.838,0),Vector3(0,0.8382,0)]);
{ .AddDisplacers }
HAnimSegment307.SetDisplacers([HAnimDisplacer315]);
HAnimDisplacer316 := THAnimDisplacerNode.Create;
HAnimDisplacer316.NameField := 'left_nostril_morphinterpolator';
HAnimDisplacer316.SetCoordIndex([0]);
HAnimDisplacer316.SetDisplacements([Vector3(0.3849,0,0)]);
{ .AddDisplacers }
HAnimSegment307.SetDisplacers([HAnimDisplacer316]);
HAnimDisplacer317 := THAnimDisplacerNode.Create;
HAnimDisplacer317.NameField := 'left_nostril_morphinterpolator';
HAnimDisplacer317.SetCoordIndex([2,4]);
HAnimDisplacer317.SetDisplacements([Vector3(0,0.3759,0),Vector3(0,0.3762,0)]);
{ .AddDisplacers }
HAnimSegment307.SetDisplacers([HAnimDisplacer317]);
HAnimDisplacer318 := THAnimDisplacerNode.Create;
HAnimDisplacer318.NameField := 'left_nostril_morphinterpolator';
HAnimDisplacer318.SetCoordIndex([2,4]);
HAnimDisplacer318.SetDisplacements([Vector3(0,0.5016,0),Vector3(0,0.2937,0)]);
{ .AddDisplacers }
HAnimSegment307.SetDisplacers([HAnimDisplacer318]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment307]);
HAnimSegment319 := THAnimSegmentNode.Create;
HAnimSegment319.NameField := 'left_pupil';
Transform320 := TTransformNode.Create;
Transform320.Translation := Vector3(6.059,17.5,12.33);
Shape321 := TShapeNode.Create;
Appearance322 := TAppearanceNode.Create;
Appearance322 := Appearance97;
{ .SetAppearance }
Shape321.Appearance := Appearance322;
IndexedFaceSet323 := TIndexedFaceSetNode.Create;
IndexedFaceSet323.SetCoordIndex([4,0,7,-1,7,6,4,-1,7,0,3,-1,3,8,7,-1,12,9,1,-1,1,2,12,-1,10,1,9,-1,5,3,1,-1,1,10,5,-1,0,4,11,-1,11,2,0,-1,2,11,12,-1,3,5,8,-1,0,2,1,-1,1,3,0,-1]);
IndexedFaceSet323.CreaseAngle := 3.14159;
IndexedFaceSet323.Solid := False;
IndexedFaceSet323.SetTexCoordIndex([4,0,7,-1,7,6,4,-1,7,0,3,-1,3,8,7,-1,12,9,1,-1,1,2,12,-1,10,1,9,-1,5,3,1,-1,1,10,5,-1,0,4,11,-1,11,2,0,-1,2,11,12,-1,3,5,8,-1,0,2,1,-1,1,3,0,-1]);
TextureCoordinate324 := TTextureCoordinateNode.Create;
TextureCoordinate324.SetPoint([Vector2(0.3496,0.8297),Vector2(0.3746,0.8042),Vector2(0.3491,0.8029),Vector2(0.3744,0.8314),Vector2(0.328,0.824),Vector2(0.3871,0.8321),Vector2(0.3258,0.833),Vector2(0.3487,0.8409),Vector2(0.385,0.8438),Vector2(0.3777,0.7936),Vector2(0.3889,0.8064),Vector2(0.3322,0.8026),Vector2(0.3442,0.7934)]);
{ .SetTexCoord }
IndexedFaceSet323.TexCoord := TextureCoordinate324;
Coordinate325 := TCoordinateNode.Create;
Coordinate325.SetPoint([Vector3(-0.4761,0.63,0.6933),Vector3(0.8417,-0.7176,-0.6485),Vector3(-0.4665,-0.8077,0.1079),Vector3(0.8447,0.7457,-0.2465),Vector3(-1.612,0.3169,1.289),Vector3(1.518,0.7946,-0.736),Vector3(-1.517,0.8129,1.347),Vector3(-0.5339,1.273,1.112),Vector3(1.311,1.316,-0.204),Vector3(1.04,-1.316,-0.9056),Vector3(1.612,-0.6212,-1.347),Vector3(-1.373,-0.8544,0.5399),Vector3(-0.7368,-1.282,0.04415)]);
{ .SetCoord }
IndexedFaceSet323.Coord := Coordinate325;
{ .SetGeometry }
Shape321.Geometry := IndexedFaceSet323;
{ .AddChild }
Transform320.AddChildren([Shape321]);
{ .AddChildren }
HAnimSegment319.AddChildren([Transform320]);
Coordinate326 := TCoordinateNode.Create;
Coordinate326 := Coordinate325;
{ .SetCoord }
HAnimSegment319.Coord := Coordinate326;
HAnimDisplacer327 := THAnimDisplacerNode.Create;
HAnimDisplacer327.NameField := 'left_pupil_morphinterpolator';
HAnimDisplacer327.SetCoordIndex([6,7]);
HAnimDisplacer327.SetDisplacements([Vector3(0,-0.0784,0),Vector3(0,-0.078,0)]);
{ .AddDisplacers }
HAnimSegment319.SetDisplacers([HAnimDisplacer327]);
HAnimDisplacer328 := THAnimDisplacerNode.Create;
HAnimDisplacer328.NameField := 'left_pupil_morphinterpolator';
HAnimDisplacer328.SetCoordIndex([6,7,8,9,12]);
HAnimDisplacer328.SetDisplacements([Vector3(0,-0.354,0),Vector3(0,-0.3535,0),Vector3(0,-0.3535,0),Vector3(0,0.308,0),Vector3(0,0.151,0)]);
{ .AddDisplacers }
HAnimSegment319.SetDisplacers([HAnimDisplacer328]);
HAnimDisplacer329 := THAnimDisplacerNode.Create;
HAnimDisplacer329.NameField := 'left_pupil_morphinterpolator';
HAnimDisplacer329.SetCoordIndex([6,7,8]);
HAnimDisplacer329.SetDisplacements([Vector3(0,0.4971,0),Vector3(0,0.498,0),Vector3(0,0.498,0)]);
{ .AddDisplacers }
HAnimSegment319.SetDisplacers([HAnimDisplacer329]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment319]);
HAnimSegment330 := THAnimSegmentNode.Create;
HAnimSegment330.NameField := 'left_temple';
Transform331 := TTransformNode.Create;
Transform331.Translation := Vector3(10.95,20.56,6.406);
Shape332 := TShapeNode.Create;
Appearance333 := TAppearanceNode.Create;
Appearance333 := Appearance97;
{ .SetAppearance }
Shape332.Appearance := Appearance333;
IndexedFaceSet334 := TIndexedFaceSetNode.Create;
IndexedFaceSet334.SetCoordIndex([9,7,5,-1,5,12,9,-1,0,11,12,-1,12,5,0,-1,0,2,1,-1,1,8,0,-1,2,0,5,-1,10,6,7,-1,7,9,10,-1,7,3,2,-1,2,5,7,-1,4,3,7,-1,7,6,4,-1]);
IndexedFaceSet334.CreaseAngle := 3.14159;
IndexedFaceSet334.Solid := False;
IndexedFaceSet334.SetTexCoordIndex([0,4,5,-1,5,6,0,-1,1,13,15,-1,15,7,1,-1,1,3,2,-1,2,10,1,-1,3,1,7,-1,8,9,4,-1,4,0,8,-1,4,11,12,-1,12,5,4,-1,14,11,4,-1,4,9,14,-1]);
TextureCoordinate335 := TTextureCoordinateNode.Create;
TextureCoordinate335.SetPoint([Vector2(0.44,0.6625),Vector2(0.4455,0.863),Vector2(0.4299,0.8825),Vector2(0.4655,0.9081),Vector2(0.4428,0.6714),Vector2(0.4573,0.671),Vector2(0.4547,0.661),Vector2(0.462,0.8557),Vector2(0.4352,0.6651),Vector2(0.4342,0.6719),Vector2(0.4266,0.8643),Vector2(0.4479,0.6875),Vector2(0.4606,0.684),Vector2(0.4335,0.819),Vector2(0.4319,0.6876),Vector2(0.4572,0.8171)]);
{ .SetTexCoord }
IndexedFaceSet334.TexCoord := TextureCoordinate335;
Coordinate336 := TCoordinateNode.Create;
Coordinate336.SetPoint([Vector3(-0.312,-0.6258,2.224),Vector3(-1.079,0.3506,4.121),Vector3(0.5824,2.214,1.716),Vector3(0.9631,2.994,-0.8569),Vector3(0.5756,3.023,-4.121),Vector3(0.3971,-0.687,1.044),Vector3(1.042,-0.4888,-3.649),Vector3(1.005,-0.6065,-1.903),Vector3(-1.243,-0.6321,3.914),Vector3(1.028,-2.588,-2.479),Vector3(1.243,-2.002,-3.446),Vector3(-0.8897,-3.023,2.376),Vector3(0.2546,-2.916,0.5272)]);
{ .SetCoord }
IndexedFaceSet334.Coord := Coordinate336;
{ .SetGeometry }
Shape332.Geometry := IndexedFaceSet334;
{ .AddChild }
Transform331.AddChildren([Shape332]);
{ .AddChildren }
HAnimSegment330.AddChildren([Transform331]);
Coordinate337 := TCoordinateNode.Create;
Coordinate337 := Coordinate336;
{ .SetCoord }
HAnimSegment330.Coord := Coordinate337;
HAnimDisplacer338 := THAnimDisplacerNode.Create;
HAnimDisplacer338.NameField := 'left_temple_morphinterpolator';
HAnimDisplacer338.SetCoordIndex([1,8]);
HAnimDisplacer338.SetDisplacements([Vector3(0,-0.0942,0),Vector3(0,-0.0941,0)]);
{ .AddDisplacers }
HAnimSegment330.SetDisplacers([HAnimDisplacer338]);
HAnimDisplacer339 := THAnimDisplacerNode.Create;
HAnimDisplacer339.NameField := 'left_temple_morphinterpolator';
HAnimDisplacer339.SetCoordIndex([8,11]);
HAnimDisplacer339.SetDisplacements([Vector3(0,-0.4529,0),Vector3(0,-0.077,0)]);
{ .AddDisplacers }
HAnimSegment330.SetDisplacers([HAnimDisplacer339]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment330]);
HAnimSegment340 := THAnimSegmentNode.Create;
HAnimSegment340.NameField := 'left_upper_cutaneous_lip';
Transform341 := TTransformNode.Create;
Transform341.Translation := Vector3(0.7684,10.16,14.63);
Shape342 := TShapeNode.Create;
Appearance343 := TAppearanceNode.Create;
Appearance343 := Appearance97;
{ .SetAppearance }
Shape342.Appearance := Appearance343;
IndexedFaceSet344 := TIndexedFaceSetNode.Create;
IndexedFaceSet344.SetCoordIndex([2,3,1,-1,1,0,2,-1]);
IndexedFaceSet344.CreaseAngle := 3.14159;
IndexedFaceSet344.Solid := False;
IndexedFaceSet344.SetTexCoordIndex([2,3,1,-1,1,0,2,-1]);
TextureCoordinate345 := TTextureCoordinateNode.Create;
TextureCoordinate345.SetPoint([Vector2(0.2661,0.696),Vector2(0.2636,0.664),Vector2(0.2511,0.6816),Vector2(0.2548,0.6653)]);
{ .SetTexCoord }
IndexedFaceSet344.TexCoord := TextureCoordinate345;
Coordinate346 := TCoordinateNode.Create;
Coordinate346.SetPoint([Vector3(0.398,0.8515,-0.5307),Vector3(0.2676,-0.8515,-0.06256),Vector3(-0.398,0.08738,0.5307),Vector3(-0.1985,-0.7812,0.2164)]);
{ .SetCoord }
IndexedFaceSet344.Coord := Coordinate346;
{ .SetGeometry }
Shape342.Geometry := IndexedFaceSet344;
{ .AddChild }
Transform341.AddChildren([Shape342]);
{ .AddChildren }
HAnimSegment340.AddChildren([Transform341]);
Coordinate347 := TCoordinateNode.Create;
Coordinate347 := Coordinate346;
{ .SetCoord }
HAnimSegment340.Coord := Coordinate347;
HAnimDisplacer348 := THAnimDisplacerNode.Create;
HAnimDisplacer348.NameField := 'left_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer348.SetCoordIndex([0,1,3]);
HAnimDisplacer348.SetDisplacements([Vector3(0,0.8385,0),Vector3(0,0.5164,0),Vector3(0,0.4847,0)]);
{ .AddDisplacers }
HAnimSegment340.SetDisplacers([HAnimDisplacer348]);
HAnimDisplacer349 := THAnimDisplacerNode.Create;
HAnimDisplacer349.NameField := 'left_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer349.SetCoordIndex([1,3]);
HAnimDisplacer349.SetDisplacements([Vector3(0,0.0967,0),Vector3(0,0.1405,0)]);
{ .AddDisplacers }
HAnimSegment340.SetDisplacers([HAnimDisplacer349]);
HAnimDisplacer350 := THAnimDisplacerNode.Create;
HAnimDisplacer350.NameField := 'left_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer350.SetCoordIndex([1,3]);
HAnimDisplacer350.SetDisplacements([Vector3(0,-0.0689,0.0447),Vector3(0,-0.0689,0.0448)]);
{ .AddDisplacers }
HAnimSegment340.SetDisplacers([HAnimDisplacer350]);
HAnimDisplacer351 := THAnimDisplacerNode.Create;
HAnimDisplacer351.NameField := 'left_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer351.SetCoordIndex([1,3]);
HAnimDisplacer351.SetDisplacements([Vector3(0,-0.0221,0.1251),Vector3(0,-0.022,0.1251)]);
{ .AddDisplacers }
HAnimSegment340.SetDisplacers([HAnimDisplacer351]);
HAnimDisplacer352 := THAnimDisplacerNode.Create;
HAnimDisplacer352.NameField := 'left_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer352.SetCoordIndex([1,3]);
HAnimDisplacer352.SetDisplacements([Vector3(-0.1339,0.1022,0.5512),Vector3(-0.0736,0.1634,0.5282)]);
{ .AddDisplacers }
HAnimSegment340.SetDisplacers([HAnimDisplacer352]);
HAnimDisplacer353 := THAnimDisplacerNode.Create;
HAnimDisplacer353.NameField := 'left_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer353.SetCoordIndex([1,3]);
HAnimDisplacer353.SetDisplacements([Vector3(-0.1441,0,0.5662),Vector3(-0.0977,0,0.5662)]);
{ .AddDisplacers }
HAnimSegment340.SetDisplacers([HAnimDisplacer353]);
HAnimDisplacer354 := THAnimDisplacerNode.Create;
HAnimDisplacer354.NameField := 'left_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer354.SetCoordIndex([1,3]);
HAnimDisplacer354.SetDisplacements([Vector3(0,-0.5205,-0.6547),Vector3(0,-0.5208,-0.6547)]);
{ .AddDisplacers }
HAnimSegment340.SetDisplacers([HAnimDisplacer354]);
HAnimDisplacer355 := THAnimDisplacerNode.Create;
HAnimDisplacer355.NameField := 'left_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer355.SetCoordIndex([1,3]);
HAnimDisplacer355.SetDisplacements([Vector3(-0.0754,-0.0332,0.2613),Vector3(-0.0415,-0.0383,0.241)]);
{ .AddDisplacers }
HAnimSegment340.SetDisplacers([HAnimDisplacer355]);
HAnimDisplacer356 := THAnimDisplacerNode.Create;
HAnimDisplacer356.NameField := 'left_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer356.SetCoordIndex([1,3]);
HAnimDisplacer356.SetDisplacements([Vector3(0,0.2684,0),Vector3(0,0.2684,0)]);
{ .AddDisplacers }
HAnimSegment340.SetDisplacers([HAnimDisplacer356]);
HAnimDisplacer357 := THAnimDisplacerNode.Create;
HAnimDisplacer357.NameField := 'left_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer357.SetCoordIndex([0]);
HAnimDisplacer357.SetDisplacements([Vector3(0,0.3765,0)]);
{ .AddDisplacers }
HAnimSegment340.SetDisplacers([HAnimDisplacer357]);
HAnimDisplacer358 := THAnimDisplacerNode.Create;
HAnimDisplacer358.NameField := 'left_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer358.SetCoordIndex([0,1,3]);
HAnimDisplacer358.SetDisplacements([Vector3(0,0.5015,0),Vector3(0,0.5016,0),Vector3(0,0.5016,0)]);
{ .AddDisplacers }
HAnimSegment340.SetDisplacers([HAnimDisplacer358]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment340]);
HAnimSegment359 := THAnimSegmentNode.Create;
HAnimSegment359.NameField := 'left_upper_eyelid';
Transform360 := TTransformNode.Create;
Transform360.Translation := Vector3(5.53,17.96,12.21);
Shape361 := TShapeNode.Create;
Appearance362 := TAppearanceNode.Create;
Appearance362 := Appearance97;
{ .SetAppearance }
Shape361.Appearance := Appearance362;
IndexedFaceSet363 := TIndexedFaceSetNode.Create;
IndexedFaceSet363.SetCoordIndex([1,2,0,-1,6,2,3,-1,3,4,6,-1,3,2,1,-1,1,0,13,-1,13,0,7,-1,8,10,5,-1,5,12,8,-1,4,5,10,-1,10,6,4,-1,0,9,7,-1,7,9,11,-1,13,7,11,-1,11,14,13,-1]);
IndexedFaceSet363.CreaseAngle := 3.14159;
IndexedFaceSet363.Solid := False;
IndexedFaceSet363.SetTexCoordIndex([2,1,0,-1,4,1,5,-1,5,3,4,-1,5,1,2,-1,2,0,6,-1,6,0,9,-1,11,13,8,-1,8,15,11,-1,3,8,13,-1,13,4,3,-1,0,12,9,-1,10,12,14,-1,7,10,14,-1,14,16,7,-1]);
TextureCoordinate364 := TTextureCoordinateNode.Create;
TextureCoordinate364.SetPoint([Vector2(0.274,0.8322),Vector2(0.3402,0.8534),Vector2(0.3285,0.8323),Vector2(0.3831,0.8437),Vector2(0.3979,0.8641),Vector2(0.3487,0.8409),Vector2(0.2983,0.8142),Vector2(0.2981,0.8094),Vector2(0.4198,0.8261),Vector2(0.2678,0.8154),Vector2(0.2677,0.8134),Vector2(0.4455,0.863),Vector2(0.2534,0.8152),Vector2(0.4266,0.8643),Vector2(0.2671,0.7978),Vector2(0.4335,0.819),Vector2(0.2845,0.7889)]);
{ .SetTexCoord }
IndexedFaceSet363.TexCoord := TextureCoordinate364;
Coordinate365 := TCoordinateNode.Create;
Coordinate365.SetPoint([Vector3(-3.944,0.2777,3.581),Vector3(-0.9888,0.3455,1.465),Vector3(-0.4509,1.393,2.381),Vector3(-0.005327,0.806,1.231),Vector3(1.84,0.849,-0.08585),Vector3(3.829,-0.08937,-2.326),Vector3(2.527,1.923,-0.05675),Vector3(-4.303,-0.6947,2.247),Vector3(5.103,1.975,-3.581),Vector3(-5.103,-0.5987,2.53),Vector3(4.172,1.969,-1.891),Vector3(-4.353,-1.523,2.057),Vector3(4.525,-0.4223,-3.429),Vector3(-2.594,-0.8999,1.643),Vector3(-3.366,-1.975,1.583)]);
{ .SetCoord }
IndexedFaceSet363.Coord := Coordinate365;
{ .SetGeometry }
Shape361.Geometry := IndexedFaceSet363;
{ .AddChild }
Transform360.AddChildren([Shape361]);
{ .AddChildren }
HAnimSegment359.AddChildren([Transform360]);
Coordinate366 := TCoordinateNode.Create;
Coordinate366 := Coordinate365;
{ .SetCoord }
HAnimSegment359.Coord := Coordinate366;
HAnimDisplacer367 := THAnimDisplacerNode.Create;
HAnimDisplacer367.NameField := 'left_upper_eyelid_morphinterpolator';
HAnimDisplacer367.SetCoordIndex([1,3,4]);
HAnimDisplacer367.SetDisplacements([Vector3(0.2496,-2.0425,-0.987),Vector3(1.6453,-2.567,-1.8279),Vector3(0.478,-2.36,-1.1421)]);
{ .AddDisplacers }
HAnimSegment359.SetDisplacers([HAnimDisplacer367]);
HAnimDisplacer368 := THAnimDisplacerNode.Create;
HAnimDisplacer368.NameField := 'left_upper_eyelid_morphinterpolator';
HAnimDisplacer368.SetCoordIndex([0,1,2,3,6,10]);
HAnimDisplacer368.SetDisplacements([Vector3(-0.331,-0.4142,0),Vector3(0,-0.0785,0),Vector3(-0.5075,-0.4988,0),Vector3(0,-0.0785,0),Vector3(0,-0.094,0),Vector3(0,-0.094,0)]);
{ .AddDisplacers }
HAnimSegment359.SetDisplacers([HAnimDisplacer368]);
HAnimDisplacer369 := THAnimDisplacerNode.Create;
HAnimDisplacer369.NameField := 'left_upper_eyelid_morphinterpolator';
HAnimDisplacer369.SetCoordIndex([14]);
HAnimDisplacer369.SetDisplacements([Vector3(0,0.067,-0.082)]);
{ .AddDisplacers }
HAnimSegment359.SetDisplacers([HAnimDisplacer369]);
HAnimDisplacer370 := THAnimDisplacerNode.Create;
HAnimDisplacer370.NameField := 'left_upper_eyelid_morphinterpolator';
HAnimDisplacer370.SetCoordIndex([1,3,4]);
HAnimDisplacer370.SetDisplacements([Vector3(0.2496,-2.0425,-0.987),Vector3(1.6453,-2.567,-1.8279),Vector3(0.478,-2.36,-1.1421)]);
{ .AddDisplacers }
HAnimSegment359.SetDisplacers([HAnimDisplacer370]);
HAnimDisplacer371 := THAnimDisplacerNode.Create;
HAnimDisplacer371.NameField := 'left_upper_eyelid_morphinterpolator';
HAnimDisplacer371.SetCoordIndex([0,2,6]);
HAnimDisplacer371.SetDisplacements([Vector3(0,0.3655,0),Vector3(0,0.365,0),Vector3(0,0.094,0)]);
{ .AddDisplacers }
HAnimSegment359.SetDisplacers([HAnimDisplacer371]);
HAnimDisplacer372 := THAnimDisplacerNode.Create;
HAnimDisplacer372.NameField := 'left_upper_eyelid_morphinterpolator';
HAnimDisplacer372.SetCoordIndex([14]);
HAnimDisplacer372.SetDisplacements([Vector3(0,-0.316,0)]);
{ .AddDisplacers }
HAnimSegment359.SetDisplacers([HAnimDisplacer372]);
HAnimDisplacer373 := THAnimDisplacerNode.Create;
HAnimDisplacer373.NameField := 'left_upper_eyelid_morphinterpolator';
HAnimDisplacer373.SetCoordIndex([1,3,4,5]);
HAnimDisplacer373.SetDisplacements([Vector3(0,-0.7517,0),Vector3(0,-1.0484,0),Vector3(0,-1.0134,0),Vector3(0,-0.3486,0)]);
{ .AddDisplacers }
HAnimSegment359.SetDisplacers([HAnimDisplacer373]);
HAnimDisplacer374 := THAnimDisplacerNode.Create;
HAnimDisplacer374.NameField := 'left_upper_eyelid_morphinterpolator';
HAnimDisplacer374.SetCoordIndex([1,3,4]);
HAnimDisplacer374.SetDisplacements([Vector3(0,-0.354,0),Vector3(0,-0.354,0),Vector3(0,-0.354,0)]);
{ .AddDisplacers }
HAnimSegment359.SetDisplacers([HAnimDisplacer374]);
HAnimDisplacer375 := THAnimDisplacerNode.Create;
HAnimDisplacer375.NameField := 'left_upper_eyelid_morphinterpolator';
HAnimDisplacer375.SetCoordIndex([14]);
HAnimDisplacer375.SetDisplacements([Vector3(0,-0.535,0.842)]);
{ .AddDisplacers }
HAnimSegment359.SetDisplacers([HAnimDisplacer375]);
HAnimDisplacer376 := THAnimDisplacerNode.Create;
HAnimDisplacer376.NameField := 'left_upper_eyelid_morphinterpolator';
HAnimDisplacer376.SetCoordIndex([1,3,4]);
HAnimDisplacer376.SetDisplacements([Vector3(0,-1.0868,0),Vector3(0,-1.4762,0),Vector3(0,-1.3055,0)]);
{ .AddDisplacers }
HAnimSegment359.SetDisplacers([HAnimDisplacer376]);
HAnimDisplacer377 := THAnimDisplacerNode.Create;
HAnimDisplacer377.NameField := 'left_upper_eyelid_morphinterpolator';
HAnimDisplacer377.SetCoordIndex([1,3,4,5,6,10,12]);
HAnimDisplacer377.SetDisplacements([Vector3(0,-0.5962,0),Vector3(0,-0.7726,-0.115),Vector3(0,-0.7324,0),Vector3(0,-0.0775,0),Vector3(0,-0.463,0),Vector3(0,-0.464,0),Vector3(0,-0.0776,0)]);
{ .AddDisplacers }
HAnimSegment359.SetDisplacers([HAnimDisplacer377]);
HAnimDisplacer378 := THAnimDisplacerNode.Create;
HAnimDisplacer378.NameField := 'left_upper_eyelid_morphinterpolator';
HAnimDisplacer378.SetCoordIndex([1,2,3,4,13]);
HAnimDisplacer378.SetDisplacements([Vector3(0,0.4975,0),Vector3(0,0.497,0),Vector3(0,0.498,0),Vector3(0,0.498,0),Vector3(0,0.4975,0)]);
{ .AddDisplacers }
HAnimSegment359.SetDisplacers([HAnimDisplacer378]);
HAnimDisplacer379 := THAnimDisplacerNode.Create;
HAnimDisplacer379.NameField := 'left_upper_eyelid_morphinterpolator';
HAnimDisplacer379.SetCoordIndex([1,3,4,5]);
HAnimDisplacer379.SetDisplacements([Vector3(0,-1.2176,-0.113),Vector3(0,-1.6397,-0.189),Vector3(0,-1.4464,-0.1133),Vector3(0,0,0.033)]);
{ .AddDisplacers }
HAnimSegment359.SetDisplacers([HAnimDisplacer379]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment359]);
HAnimSegment380 := THAnimSegmentNode.Create;
HAnimSegment380.NameField := 'left_upper_vermillion_lip';
Transform381 := TTransformNode.Create;
Transform381.Translation := Vector3(1.788,9.002,13.64);
Shape382 := TShapeNode.Create;
Appearance383 := TAppearanceNode.Create;
Appearance383 := Appearance97;
{ .SetAppearance }
Shape382.Appearance := Appearance383;
IndexedFaceSet384 := TIndexedFaceSetNode.Create;
IndexedFaceSet384.SetCoordIndex([0,1,3,-1,1,2,3,-1]);
IndexedFaceSet384.CreaseAngle := 3.14159;
IndexedFaceSet384.Solid := False;
IndexedFaceSet384.SetTexCoordIndex([0,1,3,-1,1,2,3,-1]);
TextureCoordinate385 := TTextureCoordinateNode.Create;
TextureCoordinate385.SetPoint([Vector2(0.3007,0.651),Vector2(0.2636,0.664),Vector2(0.2548,0.6653),Vector2(0.2548,0.6553)]);
{ .SetTexCoord }
IndexedFaceSet384.TexCoord := TextureCoordinate385;
Coordinate386 := TCoordinateNode.Create;
Coordinate386.SetPoint([Vector3(1.218,-0.3781,-1.204),Vector3(-0.7521,0.3078,0.925),Vector3(-1.218,0.3781,1.204),Vector3(-1.218,-0.1506,0.4455)]);
{ .SetCoord }
IndexedFaceSet384.Coord := Coordinate386;
{ .SetGeometry }
Shape382.Geometry := IndexedFaceSet384;
{ .AddChild }
Transform381.AddChildren([Shape382]);
{ .AddChildren }
HAnimSegment380.AddChildren([Transform381]);
Coordinate387 := TCoordinateNode.Create;
Coordinate387 := Coordinate386;
{ .SetCoord }
HAnimSegment380.Coord := Coordinate387;
HAnimDisplacer388 := THAnimDisplacerNode.Create;
HAnimDisplacer388.NameField := 'left_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer388.SetCoordIndex([0,1,2,3]);
HAnimDisplacer388.SetDisplacements([Vector3(0.629,1.3225,0.107),Vector3(0,0.5164,0),Vector3(0,0.4847,0),Vector3(0,0.4847,0)]);
{ .AddDisplacers }
HAnimSegment380.SetDisplacers([HAnimDisplacer388]);
HAnimDisplacer389 := THAnimDisplacerNode.Create;
HAnimDisplacer389.NameField := 'left_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer389.SetCoordIndex([0,1,2,3]);
HAnimDisplacer389.SetDisplacements([Vector3(0,-0.1372,0),Vector3(0,0.0967,0),Vector3(0,0.1405,0),Vector3(0,0.187,0)]);
{ .AddDisplacers }
HAnimSegment380.SetDisplacers([HAnimDisplacer389]);
HAnimDisplacer390 := THAnimDisplacerNode.Create;
HAnimDisplacer390.NameField := 'left_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer390.SetCoordIndex([0,1,2,3]);
HAnimDisplacer390.SetDisplacements([Vector3(0.378,0.3959,0.153),Vector3(0,-0.0689,0.0447),Vector3(0,-0.0688,0.045),Vector3(0,-0.0435,0.4553)]);
{ .AddDisplacers }
HAnimSegment380.SetDisplacers([HAnimDisplacer390]);
HAnimDisplacer391 := THAnimDisplacerNode.Create;
HAnimDisplacer391.NameField := 'left_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer391.SetCoordIndex([0,1,2,3]);
HAnimDisplacer391.SetDisplacements([Vector3(0.21,-0.7019,0.078),Vector3(0,-0.0221,0.125),Vector3(0,-0.022,0.125),Vector3(0,0.0541,0.5975)]);
{ .AddDisplacers }
HAnimSegment380.SetDisplacers([HAnimDisplacer391]);
HAnimDisplacer392 := THAnimDisplacerNode.Create;
HAnimDisplacer392.NameField := 'left_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer392.SetCoordIndex([3]);
HAnimDisplacer392.SetDisplacements([Vector3(1.176,0.13,-0.375)]);
{ .AddDisplacers }
HAnimSegment380.SetDisplacers([HAnimDisplacer392]);
HAnimDisplacer393 := THAnimDisplacerNode.Create;
HAnimDisplacer393.NameField := 'left_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer393.SetCoordIndex([0,1,2,3]);
HAnimDisplacer393.SetDisplacements([Vector3(-0.8355,0,1.0637),Vector3(-0.134,0.1022,0.551),Vector3(-0.074,0.1634,0.528),Vector3(0,0.1236,0.8775)]);
{ .AddDisplacers }
HAnimSegment380.SetDisplacers([HAnimDisplacer393]);
HAnimDisplacer394 := THAnimDisplacerNode.Create;
HAnimDisplacer394.NameField := 'left_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer394.SetCoordIndex([0,1,2,3]);
HAnimDisplacer394.SetDisplacements([Vector3(-0.9348,0,0.5167),Vector3(-0.1441,0,0.566),Vector3(-0.098,0,0.566),Vector3(-0.041,0,0.366)]);
{ .AddDisplacers }
HAnimSegment380.SetDisplacers([HAnimDisplacer394]);
HAnimDisplacer395 := THAnimDisplacerNode.Create;
HAnimDisplacer395.NameField := 'left_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer395.SetCoordIndex([0]);
HAnimDisplacer395.SetDisplacements([Vector3(0.898,0.0091,0.026)]);
{ .AddDisplacers }
HAnimSegment380.SetDisplacers([HAnimDisplacer395]);
HAnimDisplacer396 := THAnimDisplacerNode.Create;
HAnimDisplacer396.NameField := 'left_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer396.SetCoordIndex([0,1,2,3]);
HAnimDisplacer396.SetDisplacements([Vector3(0.125,0,0),Vector3(0,-0.5204,-0.6548),Vector3(0,-0.5204,-0.6547),Vector3(0,-0.135,-0.2471)]);
{ .AddDisplacers }
HAnimSegment380.SetDisplacers([HAnimDisplacer396]);
HAnimDisplacer397 := THAnimDisplacerNode.Create;
HAnimDisplacer397.NameField := 'left_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer397.SetCoordIndex([0,1,2,3]);
HAnimDisplacer397.SetDisplacements([Vector3(-0.5211,0.1704,1.038),Vector3(-0.0755,-0.0332,0.261),Vector3(-0.042,-0.0383,0.241),Vector3(-0.042,-0.0353,0.6945)]);
{ .AddDisplacers }
HAnimSegment380.SetDisplacers([HAnimDisplacer397]);
HAnimDisplacer398 := THAnimDisplacerNode.Create;
HAnimDisplacer398.NameField := 'left_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer398.SetCoordIndex([0,1,2,3]);
HAnimDisplacer398.SetDisplacements([Vector3(0,-0.7359,0),Vector3(0,0.2684,0),Vector3(0,0.2684,0),Vector3(0,0.2684,0)]);
{ .AddDisplacers }
HAnimSegment380.SetDisplacers([HAnimDisplacer398]);
HAnimDisplacer399 := THAnimDisplacerNode.Create;
HAnimDisplacer399.NameField := 'left_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer399.SetCoordIndex([1,2,3]);
HAnimDisplacer399.SetDisplacements([Vector3(0,0.5016,0),Vector3(0,0.5017,0),Vector3(0,0.5017,0)]);
{ .AddDisplacers }
HAnimSegment380.SetDisplacers([HAnimDisplacer399]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment380]);
HAnimSegment400 := THAnimSegmentNode.Create;
HAnimSegment400.NameField := 'left_upper_vermillion_lip001';
HAnimDisplacer401 := THAnimDisplacerNode.Create;
HAnimDisplacer401.NameField := 'left_upper_vermillion_lip001_morphinterpolator';
HAnimDisplacer401.SetCoordIndex([3]);
HAnimDisplacer401.SetDisplacements([Vector3(-1.176,0.13,-0.375)]);
{ .AddDisplacers }
HAnimSegment400.SetDisplacers([HAnimDisplacer401]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment400]);
HAnimSegment402 := THAnimSegmentNode.Create;
HAnimSegment402.NameField := 'mid_forehead';
Transform403 := TTransformNode.Create;
Transform403.Translation := Vector3(0,27.83,9.426);
Shape404 := TShapeNode.Create;
Appearance405 := TAppearanceNode.Create;
Appearance405 := Appearance97;
{ .SetAppearance }
Shape404.Appearance := Appearance405;
IndexedFaceSet406 := TIndexedFaceSetNode.Create;
IndexedFaceSet406.SetCoordIndex([8,6,1,-1,1,7,8,-1,2,3,13,-1,13,0,2,-1,3,4,15,-1,15,13,3,-1,0,16,5,-1,5,2,0,-1,16,7,1,-1,1,5,16,-1,8,7,10,-1,10,9,8,-1,11,0,13,-1,13,12,11,-1,12,13,15,-1,15,14,12,-1,0,11,17,-1,17,16,0,-1,16,17,10,-1,10,7,16,-1]);
IndexedFaceSet406.CreaseAngle := 3.14159;
IndexedFaceSet406.Solid := False;
IndexedFaceSet406.SetTexCoordIndex([10,11,5,-1,5,0,10,-1,6,7,2,-1,2,1,6,-1,7,8,3,-1,3,2,7,-1,1,4,9,-1,9,6,1,-1,4,0,5,-1,5,9,4,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,18,19,21,-1,21,20,18,-1,16,17,23,-1,23,22,16,-1,22,23,15,-1,15,12,22,-1]);
TextureCoordinate407 := TTextureCoordinateNode.Create;
TextureCoordinate407.SetPoint([Vector2(0.2445,0.9452),Vector2(0.257,0.9724),Vector2(0.2533,0.9737),Vector2(0.2542,0.9749),Vector2(0.2428,0.959),Vector2(0.2706,0.9459),Vector2(0.3002,0.9788),Vector2(0.3015,0.9807),Vector2(0.3016,0.9833),Vector2(0.2804,0.9652),Vector2(0.2442,0.8727),Vector2(0.2728,0.8741),Vector2(0.2445,0.9452),Vector2(0.2442,0.8727),Vector2(0.2728,0.8741),Vector2(0.2706,0.9459),Vector2(0.257,0.9724),Vector2(0.3002,0.9788),Vector2(0.3015,0.9807),Vector2(0.2533,0.9737),Vector2(0.3016,0.9833),Vector2(0.2542,0.9749),Vector2(0.2428,0.959),Vector2(0.2804,0.9652)]);
{ .SetTexCoord }
IndexedFaceSet406.TexCoord := TextureCoordinate407;
Coordinate408 := TCoordinateNode.Create;
Coordinate408.SetPoint([Vector3(0,5.541,2.824),Vector3(1.396,-3.453,6.748),Vector3(2.374,5.108,2.647),Vector3(2.504,6.733,-0.9399),Vector3(2.504,6.89,-7.142),Vector3(1.966,1.836,5.915),Vector3(1.516,-7.326,6.506),Vector3(0,-3.452,7.111),Vector3(0,-7.396,7.142),Vector3(-1.516,-7.326,6.506),Vector3(-1.396,-3.453,6.748),Vector3(-2.374,5.108,2.647),Vector3(-2.504,6.733,-0.9399),Vector3(0,7.175,-0.7764),Vector3(-2.504,6.89,-7.142),Vector3(0,7.396,-7.142),Vector3(0,1.906,6.344),Vector3(-1.966,1.836,5.915)]);
{ .SetCoord }
IndexedFaceSet406.Coord := Coordinate408;
{ .SetGeometry }
Shape404.Geometry := IndexedFaceSet406;
{ .AddChild }
Transform403.AddChildren([Shape404]);
{ .AddChildren }
HAnimSegment402.AddChildren([Transform403]);
Coordinate409 := TCoordinateNode.Create;
Coordinate409 := Coordinate408;
{ .SetCoord }
HAnimSegment402.Coord := Coordinate409;
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment402]);
HAnimSegment410 := THAnimSegmentNode.Create;
HAnimSegment410.NameField := 'mid_nasal_dorsum';
Transform411 := TTransformNode.Create;
Transform411.Translation := Vector3(0,14.79,15.76);
Shape412 := TShapeNode.Create;
Appearance413 := TAppearanceNode.Create;
Appearance413 := Appearance97;
{ .SetAppearance }
Shape412.Appearance := Appearance413;
IndexedFaceSet414 := TIndexedFaceSetNode.Create;
IndexedFaceSet414.SetCoordIndex([0,5,6,-1,0,6,2,-1,2,6,1,-1,1,3,2,-1,4,6,5,-1,4,7,6,-1,7,8,1,-1,1,6,7,-1]);
IndexedFaceSet414.CreaseAngle := 3.14159;
IndexedFaceSet414.Solid := False;
IndexedFaceSet414.SetTexCoordIndex([3,2,1,-1,3,0,5,-1,5,0,4,-1,4,6,5,-1,7,9,8,-1,7,11,10,-1,11,13,12,-1,12,10,11,-1]);
TextureCoordinate415 := TTextureCoordinateNode.Create;
TextureCoordinate415.SetPoint([Vector2(0.2496,0.7705),Vector2(0.2441,0.7705),Vector2(0.2441,0.816),Vector2(0.2534,0.8152),Vector2(0.2415,0.7261),Vector2(0.2534,0.767),Vector2(0.2528,0.7186),Vector2(0.2534,0.8152),Vector2(0.2441,0.816),Vector2(0.2441,0.7705),Vector2(0.2496,0.7705),Vector2(0.2534,0.767),Vector2(0.2415,0.7261),Vector2(0.2528,0.7186)]);
{ .SetTexCoord }
IndexedFaceSet414.TexCoord := TextureCoordinate415;
Coordinate416 := TCoordinateNode.Create;
Coordinate416.SetPoint([Vector3(0.4273,2.576,-1.018),Vector3(0,-2.334,1.018),Vector3(0.2355,0.01204,-0.9689),Vector3(0.4565,-2.593,-0.276),Vector3(-0.4273,2.576,-1.018),Vector3(0,2.593,-0.9668),Vector3(0,0.1768,-0.8433),Vector3(-0.2355,0.01204,-0.9689),Vector3(-0.4565,-2.593,-0.276)]);
{ .SetCoord }
IndexedFaceSet414.Coord := Coordinate416;
{ .SetGeometry }
Shape412.Geometry := IndexedFaceSet414;
{ .AddChild }
Transform411.AddChildren([Shape412]);
{ .AddChildren }
HAnimSegment410.AddChildren([Transform411]);
Coordinate417 := TCoordinateNode.Create;
Coordinate417 := Coordinate416;
{ .SetCoord }
HAnimSegment410.Coord := Coordinate417;
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment410]);
HAnimSegment418 := THAnimSegmentNode.Create;
HAnimSegment418.NameField := 'mid_upper_vermillion_lip';
Transform419 := TTransformNode.Create;
Transform419.Translation := Vector3(0,9.116,14.46);
Shape420 := TShapeNode.Create;
Appearance421 := TAppearanceNode.Create;
Appearance421 := Appearance97;
{ .SetAppearance }
Shape420.Appearance := Appearance421;
IndexedFaceSet422 := TIndexedFaceSetNode.Create;
IndexedFaceSet422.SetCoordIndex([4,5,1,-1,1,0,4,-1,4,3,2,-1,2,5,4,-1]);
IndexedFaceSet422.CreaseAngle := 3.14159;
IndexedFaceSet422.Solid := False;
IndexedFaceSet422.SetTexCoordIndex([1,3,2,-1,2,0,1,-1,6,5,4,-1,4,7,6,-1]);
TextureCoordinate423 := TTextureCoordinateNode.Create;
TextureCoordinate423.SetPoint([Vector2(0.2548,0.6653),Vector2(0.2441,0.6653),Vector2(0.2548,0.6553),Vector2(0.2441,0.6553),Vector2(0.2548,0.6553),Vector2(0.2548,0.6653),Vector2(0.2441,0.6653),Vector2(0.2441,0.6553)]);
{ .SetTexCoord }
IndexedFaceSet422.TexCoord := TextureCoordinate423;
Coordinate424 := TCoordinateNode.Create;
Coordinate424.SetPoint([Vector3(0.5699,0.2644,0.3792),Vector3(0.5699,-0.2644,-0.3792),Vector3(-0.5699,-0.2644,-0.3792),Vector3(-0.5699,0.2644,0.3792),Vector3(0,0.2644,0.3792),Vector3(0,-0.2644,-0.3792)]);
{ .SetCoord }
IndexedFaceSet422.Coord := Coordinate424;
{ .SetGeometry }
Shape420.Geometry := IndexedFaceSet422;
{ .AddChild }
Transform419.AddChildren([Shape420]);
{ .AddChildren }
HAnimSegment418.AddChildren([Transform419]);
Coordinate425 := TCoordinateNode.Create;
Coordinate425 := Coordinate424;
{ .SetCoord }
HAnimSegment418.Coord := Coordinate425;
HAnimDisplacer426 := THAnimDisplacerNode.Create;
HAnimDisplacer426.NameField := 'mid_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer426.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer426.SetDisplacements([Vector3(0,0.4846,0),Vector3(0,0.4847,0),Vector3(0,0.4847,0),Vector3(0,0.4846,0),Vector3(0,0.4846,0),Vector3(0,0.4847,0)]);
{ .AddDisplacers }
HAnimSegment418.SetDisplacers([HAnimDisplacer426]);
HAnimDisplacer427 := THAnimDisplacerNode.Create;
HAnimDisplacer427.NameField := 'mid_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer427.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer427.SetDisplacements([Vector3(0,0.1404,0),Vector3(0,0.187,0),Vector3(0,0.187,0),Vector3(0,0.1404,0),Vector3(0,0.2285,0),Vector3(0,0.2207,0)]);
{ .AddDisplacers }
HAnimSegment418.SetDisplacers([HAnimDisplacer427]);
HAnimDisplacer428 := THAnimDisplacerNode.Create;
HAnimDisplacer428.NameField := 'mid_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer428.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer428.SetDisplacements([Vector3(0,-0.0689,0.0448),Vector3(0,-0.0435,0.4552),Vector3(0,-0.0435,0.4552),Vector3(0,-0.0689,0.0448),Vector3(0,-0.0689,0.0448),Vector3(0,-0.0435,0.4552)]);
{ .AddDisplacers }
HAnimSegment418.SetDisplacers([HAnimDisplacer428]);
HAnimDisplacer429 := THAnimDisplacerNode.Create;
HAnimDisplacer429.NameField := 'mid_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer429.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer429.SetDisplacements([Vector3(0,-0.0221,0.1251),Vector3(0,0.0541,0.5977),Vector3(0,0.0541,0.5977),Vector3(0,-0.0514,-0.0369),Vector3(0,-0.0514,-0.0369),Vector3(0,0.0541,0.5977)]);
{ .AddDisplacers }
HAnimSegment418.SetDisplacers([HAnimDisplacer429]);
HAnimDisplacer430 := THAnimDisplacerNode.Create;
HAnimDisplacer430.NameField := 'mid_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer430.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer430.SetDisplacements([Vector3(-0.0737,0.1633,0.5282),Vector3(0,0.1237,0.8777),Vector3(0,0.1237,0.8777),Vector3(0.0737,0.1633,0.5282),Vector3(0,0.107,0.5282),Vector3(0,0.1237,0.8777)]);
{ .AddDisplacers }
HAnimSegment418.SetDisplacers([HAnimDisplacer430]);
HAnimDisplacer431 := THAnimDisplacerNode.Create;
HAnimDisplacer431.NameField := 'mid_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer431.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer431.SetDisplacements([Vector3(-0.0978,0,0.5662),Vector3(-0.0413,0,0.3659),Vector3(-0.0413,0,0.3659),Vector3(0.0156,0,0.5662),Vector3(-0.0411,0,0.5662),Vector3(-0.0413,0,0.3659)]);
{ .AddDisplacers }
HAnimSegment418.SetDisplacers([HAnimDisplacer431]);
HAnimDisplacer432 := THAnimDisplacerNode.Create;
HAnimDisplacer432.NameField := 'mid_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer432.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer432.SetDisplacements([Vector3(0,-0.5204,-0.6547),Vector3(0,-0.135,-0.2472),Vector3(0,-0.135,-0.2472),Vector3(0,-0.5204,-0.6547),Vector3(0,-0.5204,-0.6547),Vector3(0,-0.135,-0.2472)]);
{ .AddDisplacers }
HAnimSegment418.SetDisplacers([HAnimDisplacer432]);
HAnimDisplacer433 := THAnimDisplacerNode.Create;
HAnimDisplacer433.NameField := 'mid_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer433.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer433.SetDisplacements([Vector3(-0.0415,-0.0383,0.241),Vector3(-0.0415,-0.0352,0.6946),Vector3(0.0415,-0.0352,0.6946),Vector3(0.0415,-0.0383,0.241),Vector3(0,-0.0383,0.241),Vector3(0,-0.0352,0.6946)]);
{ .AddDisplacers }
HAnimSegment418.SetDisplacers([HAnimDisplacer433]);
HAnimDisplacer434 := THAnimDisplacerNode.Create;
HAnimDisplacer434.NameField := 'mid_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer434.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer434.SetDisplacements([Vector3(0,0.2683,0),Vector3(0,0.2684,0),Vector3(0,0.2684,0),Vector3(0,0.2683,0),Vector3(0,0.2683,0),Vector3(0,0.2684,0)]);
{ .AddDisplacers }
HAnimSegment418.SetDisplacers([HAnimDisplacer434]);
HAnimDisplacer435 := THAnimDisplacerNode.Create;
HAnimDisplacer435.NameField := 'mid_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer435.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer435.SetDisplacements([Vector3(0,0.5016,0),Vector3(0,0.5017,0),Vector3(0,0.5017,0),Vector3(0,0.5016,0),Vector3(0,0.5016,0),Vector3(0,0.5017,0)]);
{ .AddDisplacers }
HAnimSegment418.SetDisplacers([HAnimDisplacer435]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment418]);
HAnimSegment436 := THAnimSegmentNode.Create;
HAnimSegment436.NameField := 'nasal_tip';
Transform437 := TTransformNode.Create;
Transform437.Translation := Vector3(0,11.35,16.23);
Shape438 := TShapeNode.Create;
Appearance439 := TAppearanceNode.Create;
Appearance439 := Appearance97;
{ .SetAppearance }
Shape438.Appearance := Appearance439;
IndexedFaceSet440 := TIndexedFaceSetNode.Create;
IndexedFaceSet440.SetCoordIndex([4,0,1,-1,4,3,2,-1,2,7,4,-1,3,4,1,-1,4,5,0,-1,4,7,6,-1,6,8,4,-1,8,5,4,-1]);
IndexedFaceSet440.CreaseAngle := 3.14159;
IndexedFaceSet440.Solid := False;
IndexedFaceSet440.SetTexCoordIndex([1,2,3,-1,1,5,4,-1,4,0,1,-1,5,1,3,-1,6,8,7,-1,6,10,9,-1,9,11,6,-1,11,8,6,-1]);
TextureCoordinate441 := TTextureCoordinateNode.Create;
TextureCoordinate441.SetPoint([Vector2(0.2415,0.7261),Vector2(0.2441,0.7109),Vector2(0.2441,0.6816),Vector2(0.2511,0.6816),Vector2(0.2528,0.7186),Vector2(0.2538,0.7051),Vector2(0.2441,0.7109),Vector2(0.2441,0.6816),Vector2(0.2511,0.6816),Vector2(0.2528,0.7186),Vector2(0.2415,0.7261),Vector2(0.2538,0.7051)]);
{ .SetTexCoord }
IndexedFaceSet440.TexCoord := TextureCoordinate441;
Coordinate442 := TCoordinateNode.Create;
Coordinate442.SetPoint([Vector3(0,-1.103,-1.068),Vector3(0.3704,-1.103,-1.072),Vector3(0.4565,0.8434,-0.7458),Vector3(0.4761,0.1288,-0.2364),Vector3(0,0.4512,1.072),Vector3(-0.3704,-1.103,-1.072),Vector3(-0.4565,0.8434,-0.7458),Vector3(0,1.103,0.5484),Vector3(-0.4761,0.1288,-0.2364)]);
{ .SetCoord }
IndexedFaceSet440.Coord := Coordinate442;
{ .SetGeometry }
Shape438.Geometry := IndexedFaceSet440;
{ .AddChild }
Transform437.AddChildren([Shape438]);
{ .AddChildren }
HAnimSegment436.AddChildren([Transform437]);
Coordinate443 := TCoordinateNode.Create;
Coordinate443 := Coordinate442;
{ .SetCoord }
HAnimSegment436.Coord := Coordinate443;
HAnimDisplacer444 := THAnimDisplacerNode.Create;
HAnimDisplacer444.NameField := 'nasal_tip_morphinterpolator';
HAnimDisplacer444.SetCoordIndex([3,8]);
HAnimDisplacer444.SetDisplacements([Vector3(0.3849,0,0),Vector3(-0.3849,0,0)]);
{ .AddDisplacers }
HAnimSegment436.SetDisplacers([HAnimDisplacer444]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment436]);
HAnimSegment445 := THAnimSegmentNode.Create;
HAnimSegment445.NameField := 'neck';
Transform446 := TTransformNode.Create;
Transform446.Translation := Vector3(0,4.213,0.4657);
Shape447 := TShapeNode.Create;
Appearance448 := TAppearanceNode.Create;
Appearance448 := Appearance97;
{ .SetAppearance }
Shape447.Appearance := Appearance448;
IndexedFaceSet449 := TIndexedFaceSetNode.Create;
IndexedFaceSet449.SetCoordIndex([1,0,12,-1,12,13,1,-1,0,2,14,-1,14,12,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,5,6,17,-1,17,18,5,-1,4,5,18,-1,18,16,4,-1,19,7,1,-1,1,13,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,17,6,11,-1,11,23,17,-1,23,11,10,-1,10,22,23,-1]);
IndexedFaceSet449.CreaseAngle := 3.14159;
IndexedFaceSet449.Solid := False;
IndexedFaceSet449.SetTexCoordIndex([0,1,12,-1,12,13,0,-1,1,2,14,-1,14,12,1,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,5,6,17,-1,17,18,5,-1,4,5,18,-1,18,16,4,-1,19,7,0,-1,0,13,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,17,6,11,-1,11,23,17,-1,23,11,10,-1,10,22,23,-1]);
TextureCoordinate450 := TTextureCoordinateNode.Create;
TextureCoordinate450.SetPoint([Vector2(0.04371,0.6512),Vector2(0.05004,0.6512),Vector2(0.05713,0.6512),Vector2(0.06211,0.6512),Vector2(0.05807,0.6512),Vector2(0.05084,0.6529),Vector2(0.04371,0.6456),Vector2(0.03739,0.6512),Vector2(0.0303,0.6512),Vector2(0.02531,0.6512),Vector2(0.02935,0.6512),Vector2(0.03659,0.6529),Vector2(0.0501,0.6113),Vector2(0.04371,0.612),Vector2(0.05726,0.6141),Vector2(0.0623,0.6138),Vector2(0.05822,0.6099),Vector2(0.04371,0.6064),Vector2(0.05091,0.6065),Vector2(0.03733,0.6113),Vector2(0.03016,0.6141),Vector2(0.02513,0.6138),Vector2(0.02921,0.6099),Vector2(0.03652,0.6065)]);
{ .SetTexCoord }
IndexedFaceSet449.TexCoord := TextureCoordinate450;
Coordinate451 := TCoordinateNode.Create;
Coordinate451.SetPoint([Vector3(1.364,4.193,-2.856),Vector3(0,4.193,-3.036),Vector3(2.893,4.193,-2.16),Vector3(3.969,4.193,0.1849),Vector3(3.097,4.193,1.816),Vector3(1.537,4.525,2.797),Vector3(0,3.099,3.036),Vector3(-1.364,4.193,-2.856),Vector3(-2.893,4.193,-2.16),Vector3(-3.969,4.193,0.1849),Vector3(-3.097,4.193,1.816),Vector3(-1.537,4.525,2.797),Vector3(1.378,-3.566,-2.884),Vector3(0,-3.437,-3.067),Vector3(2.923,-3.023,-2.182),Vector3(4.009,-3.081,0.1871),Vector3(3.129,-3.839,1.835),Vector3(0,-4.525,3.067),Vector3(1.552,-4.502,2.826),Vector3(-1.378,-3.566,-2.884),Vector3(-2.923,-3.023,-2.182),Vector3(-4.009,-3.081,0.1871),Vector3(-3.129,-3.839,1.835),Vector3(-1.552,-4.502,2.826)]);
{ .SetCoord }
IndexedFaceSet449.Coord := Coordinate451;
{ .SetGeometry }
Shape447.Geometry := IndexedFaceSet449;
{ .AddChild }
Transform446.AddChildren([Shape447]);
{ .AddChildren }
HAnimSegment445.AddChildren([Transform446]);
Coordinate452 := TCoordinateNode.Create;
Coordinate452 := Coordinate451;
{ .SetCoord }
HAnimSegment445.Coord := Coordinate452;
HAnimDisplacer453 := THAnimDisplacerNode.Create;
HAnimDisplacer453.NameField := 'neck_morphinterpolator';
HAnimDisplacer453.SetCoordIndex([0,1,2,6,8,10]);
HAnimDisplacer453.SetDisplacements([Vector3(0,0.156,0),Vector3(0,0.373,0),Vector3(0,0.485,0),Vector3(0.0193,1.002,-0.758),Vector3(-0.261,0.915,-1.261),Vector3(-0.281,0.915,-0.875)]);
{ .AddDisplacers }
HAnimSegment445.SetDisplacers([HAnimDisplacer453]);
HAnimDisplacer454 := THAnimDisplacerNode.Create;
HAnimDisplacer454.NameField := 'neck_morphinterpolator';
HAnimDisplacer454.SetCoordIndex([1,4,7,8,10]);
HAnimDisplacer454.SetDisplacements([Vector3(0,0.407,0.199),Vector3(0,-0.009,0),Vector3(0,0.038,0),Vector3(0,-0.076,0),Vector3(0,-0.076,0)]);
{ .AddDisplacers }
HAnimSegment445.SetDisplacers([HAnimDisplacer454]);
HAnimDisplacer455 := THAnimDisplacerNode.Create;
HAnimDisplacer455.NameField := 'neck_morphinterpolator';
HAnimDisplacer455.SetCoordIndex([2,4,8,10]);
HAnimDisplacer455.SetDisplacements([Vector3(0.363,0.369,-1.625),Vector3(0.389,0.369,-1.1236),Vector3(-0.364,-0.024,-1.625),Vector3(-0.39,-0.024,-1.1236)]);
{ .AddDisplacers }
HAnimSegment445.SetDisplacers([HAnimDisplacer455]);
HAnimDisplacer456 := THAnimDisplacerNode.Create;
HAnimDisplacer456.NameField := 'neck_morphinterpolator';
HAnimDisplacer456.SetCoordIndex([4,8,10]);
HAnimDisplacer456.SetDisplacements([Vector3(0.217,-0.716,-0.609),Vector3(-0.19,-0.716,-0.879),Vector3(-0.203,-0.716,-0.609)]);
{ .AddDisplacers }
HAnimSegment445.SetDisplacers([HAnimDisplacer456]);
HAnimDisplacer457 := THAnimDisplacerNode.Create;
HAnimDisplacer457.NameField := 'neck_morphinterpolator';
HAnimDisplacer457.SetCoordIndex([2,3,4,8,9,10]);
HAnimDisplacer457.SetDisplacements([Vector3(0.863,-0.058,-4.372),Vector3(1.197,-0.058,-3.6409),Vector3(0.927,-0.058,-3.133),Vector3(-0.938,-0.058,-4.372),Vector3(-1.272,-0.058,-3.6409),Vector3(-1.002,-0.058,-3.133)]);
{ .AddDisplacers }
HAnimSegment445.SetDisplacers([HAnimDisplacer457]);
HAnimDisplacer458 := THAnimDisplacerNode.Create;
HAnimDisplacer458.NameField := 'neck_morphinterpolator';
HAnimDisplacer458.SetCoordIndex([6]);
HAnimDisplacer458.SetDisplacements([Vector3(0,-0.299,0)]);
{ .AddDisplacers }
HAnimSegment445.SetDisplacers([HAnimDisplacer458]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment445]);
HAnimSegment459 := THAnimSegmentNode.Create;
HAnimSegment459.NameField := 'occipital_scalp';
Transform460 := TTransformNode.Create;
Transform460.Translation := Vector3(0,22.26,-9.81);
Shape461 := TShapeNode.Create;
Appearance462 := TAppearanceNode.Create;
Appearance462 := Appearance97;
{ .SetAppearance }
Shape461.Appearance := Appearance462;
IndexedFaceSet463 := TIndexedFaceSetNode.Create;
IndexedFaceSet463.SetCoordIndex([16,6,9,-1,9,11,16,-1,11,18,17,-1,17,60,11,-1,15,10,9,-1,9,6,15,-1,12,65,17,-1,17,18,12,-1,36,33,16,-1,16,11,36,-1,35,36,11,-1,11,60,35,-1,37,140,156,-1,140,4,42,-1,140,37,4,-1,15,5,37,-1,37,8,15,-1,7,5,15,-1,15,6,7,-1,5,7,37,-1,10,15,8,-1,8,0,10,-1,12,18,0,-1,65,12,0,-1,0,74,65,-1,16,33,13,-1,13,33,34,-1,19,13,34,-1,37,7,13,-1,13,19,37,-1,13,7,6,-1,6,16,13,-1,19,34,14,-1,34,152,41,-1,41,14,34,-1,37,19,14,-1,14,4,37,-1,14,41,42,-1,42,4,14,-1,9,18,11,-1,10,0,9,-1,0,18,9,-1,0,20,74,-1,81,82,20,-1,0,22,20,-1,0,8,21,-1,21,23,0,-1,2,23,21,-1,0,23,22,-1,2,28,3,-1,3,28,24,-1,2,30,28,-1,1,27,28,-1,28,30,1,-1,2,26,30,-1,21,8,25,-1,30,26,25,-1,30,25,39,-1,74,20,82,-1,3,23,2,-1,20,3,81,-1,96,29,27,-1,44,29,96,-1,29,3,24,-1,44,81,29,-1,81,3,29,-1,24,27,29,-1,24,28,27,-1,22,3,20,-1,22,23,3,-1,26,2,21,-1,26,21,25,-1,37,40,39,-1,25,8,37,-1,25,37,39,-1,31,39,40,-1,1,31,40,-1,1,30,31,-1,30,39,31,-1,150,152,34,-1,34,32,150,-1,32,101,198,-1,198,150,32,-1,36,32,34,-1,34,33,36,-1,35,101,32,-1,32,36,35,-1,1,40,51,-1,96,51,48,-1,1,51,27,-1,27,51,96,-1,49,38,37,-1,106,96,48,-1,49,37,43,-1,54,51,49,-1,49,52,54,-1,50,47,45,-1,50,45,46,-1,53,51,54,-1,49,50,52,-1,48,51,53,-1,49,43,50,-1,53,55,106,-1,106,48,53,-1,58,57,56,-1,56,59,58,-1,57,60,17,-1,17,61,57,-1,62,59,56,-1,56,63,62,-1,64,61,17,-1,17,65,64,-1,66,57,58,-1,58,67,66,-1,35,60,57,-1,57,66,35,-1,68,199,190,-1,190,191,69,-1,190,69,68,-1,62,70,68,-1,68,71,62,-1,72,59,62,-1,62,71,72,-1,71,68,72,-1,63,73,70,-1,70,62,63,-1,64,73,61,-1,65,74,73,-1,73,64,65,-1,58,75,67,-1,75,76,67,-1,77,76,75,-1,68,77,75,-1,75,72,68,-1,75,58,59,-1,59,72,75,-1,77,78,76,-1,76,78,79,-1,79,192,76,-1,68,69,78,-1,78,77,68,-1,78,69,191,-1,191,79,78,-1,56,57,61,-1,63,56,73,-1,73,56,61,-1,73,74,80,-1,81,80,82,-1,73,80,83,-1,73,85,84,-1,84,70,73,-1,86,84,85,-1,73,83,85,-1,86,88,87,-1,88,89,87,-1,86,87,90,-1,91,90,87,-1,87,92,91,-1,86,90,93,-1,84,94,70,-1,90,94,93,-1,90,95,94,-1,74,82,80,-1,88,86,85,-1,80,81,88,-1,96,92,97,-1,44,96,97,-1,97,89,88,-1,44,97,81,-1,81,97,88,-1,89,97,92,-1,89,92,87,-1,83,80,88,-1,83,88,85,-1,93,84,86,-1,93,94,84,-1,68,95,98,-1,94,68,70,-1,94,95,68,-1,99,98,95,-1,91,98,99,-1,91,99,90,-1,90,99,95,-1,197,100,76,-1,76,192,197,-1,100,197,198,-1,198,101,100,-1,66,67,76,-1,76,100,66,-1,35,66,100,-1,100,101,35,-1,91,102,98,-1,96,103,102,-1,91,92,102,-1,92,96,102,-1,104,68,105,-1,106,103,96,-1,104,107,68,-1,109,108,104,-1,104,102,109,-1,110,112,111,-1,110,113,112,-1,114,109,102,-1,104,108,110,-1,103,114,102,-1,104,110,107,-1,114,103,106,-1,106,55,114,-1,117,159,121,-1,121,118,117,-1,151,161,117,-1,117,118,151,-1,119,143,134,-1,155,121,159,-1,121,146,122,-1,147,123,122,-1,154,115,146,-1,121,155,146,-1,154,146,155,-1,155,159,145,-1,154,155,145,-1,147,126,125,-1,125,123,147,-1,127,139,125,-1,124,116,139,-1,123,144,121,-1,121,122,123,-1,139,130,131,-1,131,124,139,-1,128,131,130,-1,128,129,131,-1,131,129,124,-1,134,132,119,-1,132,138,119,-1,129,135,124,-1,120,136,137,-1,137,129,120,-1,134,137,136,-1,120,133,136,-1,133,134,136,-1,134,135,137,-1,137,135,129,-1,115,122,146,-1,140,42,138,-1,152,143,41,-1,116,124,141,-1,119,138,143,-1,42,41,143,-1,138,42,143,-1,143,152,153,-1,141,153,116,-1,134,143,135,-1,135,143,141,-1,135,141,124,-1,153,151,142,-1,142,151,118,-1,144,142,118,-1,118,121,144,-1,153,144,116,-1,144,153,142,-1,116,144,125,-1,125,139,116,-1,123,125,144,-1,141,143,153,-1,151,153,149,-1,148,161,151,-1,151,149,148,-1,149,153,152,-1,152,150,149,-1,149,150,198,-1,198,148,149,-1,140,138,156,-1,117,158,157,-1,157,159,117,-1,160,158,117,-1,117,161,160,-1,162,164,163,-1,165,159,157,-1,157,167,166,-1,168,167,169,-1,170,166,171,-1,157,166,165,-1,170,165,166,-1,165,145,159,-1,170,145,165,-1,168,169,172,-1,172,173,168,-1,174,172,175,-1,176,175,177,-1,169,167,157,-1,157,178,169,-1,175,176,179,-1,179,180,175,-1,181,180,179,-1,181,179,182,-1,179,176,182,-1,164,162,183,-1,183,162,184,-1,182,176,185,-1,187,182,186,-1,186,188,187,-1,164,188,186,-1,187,188,189,-1,189,188,164,-1,164,186,185,-1,186,182,185,-1,171,166,167,-1,190,184,191,-1,192,79,163,-1,177,193,176,-1,162,163,184,-1,191,163,79,-1,184,163,191,-1,163,194,192,-1,193,177,194,-1,164,185,163,-1,185,193,163,-1,185,176,193,-1,194,195,160,-1,195,158,160,-1,178,157,158,-1,158,195,178,-1,194,177,178,-1,178,195,194,-1,177,175,172,-1,172,178,177,-1,169,178,172,-1,193,194,163,-1,160,196,194,-1,148,196,160,-1,160,161,148,-1,196,197,192,-1,192,194,196,-1,196,148,198,-1,198,197,196,-1,190,199,184,-1]);
IndexedFaceSet463.CreaseAngle := 3.14159;
IndexedFaceSet463.Solid := False;
IndexedFaceSet463.SetTexCoordIndex([0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,79,87,-1,79,15,80,-1,79,14,15,-1,7,17,14,-1,14,16,7,-1,18,17,7,-1,7,19,18,-1,17,18,14,-1,8,7,16,-1,16,20,8,-1,9,6,20,-1,10,9,20,-1,20,21,10,-1,0,12,22,-1,22,12,23,-1,24,22,23,-1,14,18,22,-1,22,24,14,-1,22,18,19,-1,19,0,22,-1,24,23,25,-1,23,83,78,-1,78,25,23,-1,14,24,25,-1,25,15,14,-1,25,78,80,-1,80,15,25,-1,2,6,1,-1,8,20,2,-1,20,6,2,-1,28,27,26,-1,31,30,29,-1,28,32,27,-1,28,35,34,-1,34,33,28,-1,36,33,34,-1,28,33,32,-1,36,38,37,-1,37,38,39,-1,36,40,38,-1,41,44,43,-1,43,42,41,-1,46,45,42,-1,34,35,47,-1,42,45,48,-1,40,47,49,-1,26,27,50,-1,37,33,36,-1,27,37,51,-1,54,53,52,-1,57,56,55,-1,53,37,39,-1,58,51,53,-1,51,37,53,-1,59,44,56,-1,59,43,44,-1,61,60,29,-1,61,62,60,-1,63,36,34,-1,63,34,47,-1,65,76,64,-1,47,35,66,-1,47,66,49,-1,67,64,76,-1,68,67,76,-1,41,40,69,-1,40,49,69,-1,81,83,23,-1,23,70,81,-1,70,71,82,-1,82,81,70,-1,11,70,23,-1,23,12,11,-1,13,71,70,-1,70,11,13,-1,72,73,74,-1,75,74,77,-1,72,74,84,-1,84,74,75,-1,85,86,88,-1,89,75,77,-1,85,88,90,-1,92,74,85,-1,85,91,92,-1,93,94,95,-1,93,95,96,-1,97,74,92,-1,85,93,91,-1,77,74,97,-1,85,90,93,-1,97,98,89,-1,89,77,97,-1,104,103,102,-1,102,105,104,-1,103,107,106,-1,106,108,103,-1,109,105,102,-1,102,110,109,-1,111,108,106,-1,106,112,111,-1,113,103,104,-1,104,114,113,-1,115,107,103,-1,103,113,115,-1,116,118,117,-1,117,120,119,-1,117,119,116,-1,109,121,116,-1,116,122,109,-1,124,123,109,-1,109,122,124,-1,122,116,124,-1,110,125,121,-1,121,109,110,-1,111,125,108,-1,112,126,125,-1,125,111,112,-1,104,127,114,-1,127,128,114,-1,129,128,127,-1,116,129,127,-1,127,124,116,-1,127,104,123,-1,123,124,127,-1,129,130,128,-1,128,130,131,-1,131,132,128,-1,116,119,130,-1,130,129,116,-1,130,119,120,-1,120,131,130,-1,102,103,108,-1,110,102,125,-1,125,102,108,-1,133,135,134,-1,136,138,137,-1,133,134,139,-1,133,141,140,-1,140,142,133,-1,143,140,141,-1,133,139,141,-1,143,145,144,-1,145,146,144,-1,143,144,147,-1,150,149,148,-1,148,151,150,-1,152,149,153,-1,140,154,142,-1,149,155,153,-1,147,156,154,-1,135,157,134,-1,145,143,141,-1,134,158,145,-1,159,161,160,-1,162,164,163,-1,160,146,145,-1,165,160,158,-1,158,160,145,-1,166,163,151,-1,166,151,148,-1,167,138,168,-1,167,168,169,-1,170,140,143,-1,170,154,140,-1,171,173,172,-1,154,174,142,-1,154,156,174,-1,175,172,173,-1,176,172,175,-1,150,177,147,-1,147,177,156,-1,179,178,128,-1,128,132,179,-1,178,179,180,-1,180,181,178,-1,113,114,128,-1,128,178,113,-1,115,113,178,-1,178,181,115,-1,99,100,101,-1,75,182,100,-1,99,183,100,-1,183,75,100,-1,184,185,186,-1,89,182,75,-1,184,187,185,-1,189,188,184,-1,184,100,189,-1,190,191,192,-1,190,193,191,-1,194,189,100,-1,184,188,190,-1,182,194,100,-1,184,190,187,-1,194,182,89,-1,89,98,194,-1,195,198,197,-1,197,196,195,-1,199,200,195,-1,195,196,199,-1,203,202,201,-1,204,197,198,-1,197,206,205,-1,208,207,205,-1,210,209,206,-1,197,204,206,-1,210,206,204,-1,212,198,211,-1,213,212,211,-1,208,215,214,-1,214,207,208,-1,217,216,214,-1,219,218,216,-1,207,220,197,-1,197,205,207,-1,216,222,221,-1,221,219,216,-1,223,221,222,-1,223,224,221,-1,221,224,219,-1,201,225,203,-1,225,226,203,-1,224,227,219,-1,228,230,229,-1,229,224,228,-1,201,229,230,-1,228,231,230,-1,231,201,230,-1,201,227,229,-1,229,227,224,-1,209,205,206,-1,232,233,226,-1,235,202,234,-1,218,219,236,-1,203,226,202,-1,233,234,202,-1,226,233,202,-1,202,235,237,-1,236,237,218,-1,201,202,227,-1,227,202,236,-1,227,236,219,-1,237,199,238,-1,238,199,196,-1,220,238,196,-1,196,197,220,-1,237,239,218,-1,239,237,238,-1,218,239,214,-1,214,216,218,-1,207,214,239,-1,236,202,237,-1,199,237,240,-1,241,200,199,-1,199,240,241,-1,240,237,235,-1,235,242,240,-1,240,242,243,-1,243,241,240,-1,232,226,244,-1,247,246,245,-1,245,248,247,-1,249,246,247,-1,247,250,249,-1,251,253,252,-1,254,248,245,-1,245,256,255,-1,257,256,258,-1,259,255,260,-1,245,255,254,-1,259,254,255,-1,261,262,248,-1,263,262,261,-1,257,258,264,-1,264,265,257,-1,266,264,267,-1,268,267,269,-1,258,256,245,-1,245,270,258,-1,267,268,271,-1,271,272,267,-1,273,272,271,-1,273,271,274,-1,271,268,274,-1,253,251,275,-1,275,251,276,-1,274,268,277,-1,279,274,278,-1,278,280,279,-1,253,280,278,-1,279,280,281,-1,281,280,253,-1,253,278,277,-1,278,274,277,-1,260,255,256,-1,282,276,283,-1,284,285,252,-1,269,286,268,-1,251,252,276,-1,283,252,285,-1,276,252,283,-1,252,287,284,-1,286,269,287,-1,253,277,252,-1,277,286,252,-1,277,268,286,-1,287,288,249,-1,288,246,249,-1,270,245,246,-1,246,288,270,-1,287,269,289,-1,289,288,287,-1,269,267,264,-1,264,289,269,-1,258,289,264,-1,286,287,252,-1,249,290,287,-1,291,290,249,-1,249,250,291,-1,290,292,284,-1,284,287,290,-1,290,291,293,-1,293,292,290,-1,282,294,276,-1]);
TextureCoordinate464 := TTextureCoordinateNode.Create;
TextureCoordinate464.SetPoint([Vector2(0.9175,0.8974),Vector2(0.9509,0.8981),Vector2(0.9421,0.8701),Vector2(0.924,0.8702),Vector2(0.9824,0.8971),Vector2(0.9824,0.8682),Vector2(0.9541,0.8718),Vector2(0.9147,0.8129),Vector2(0.9437,0.8153),Vector2(0.9638,0.8095),Vector2(0.9824,0.809),Vector2(0.9461,0.923),Vector2(0.9071,0.9135),Vector2(0.9824,0.9287),Vector2(0.8767,0.8622),Vector2(0.8669,0.8674),Vector2(0.9208,0.8549),Vector2(0.8792,0.7991),Vector2(0.8835,0.8633),Vector2(0.9139,0.8636),Vector2(0.9513,0.84),Vector2(0.9824,0.8358),Vector2(0.8845,0.9021),Vector2(0.888,0.931),Vector2(0.8761,0.9036),Vector2(0.8705,0.9018),Vector2(0.7338,0.8385),Vector2(0.7279,0.8339),Vector2(0.7208,0.8401),Vector2(0.7397,0.7767),Vector2(0.7338,0.7681),Vector2(0.7338,0.7727),Vector2(0.7192,0.8201),Vector2(0.7171,0.8352),Vector2(0.7139,0.8364),Vector2(0.7127,0.8419),Vector2(0.7175,0.832),Vector2(0.7247,0.8312),Vector2(0.7224,0.8292),Vector2(0.7239,0.8169),Vector2(0.7146,0.8334),Vector2(0.7152,0.8309),Vector2(0.753,0.7762),Vector2(0.7452,0.772),Vector2(0.7409,0.7703),Vector2(0.756,0.7661),Vector2(0.7502,0.7748),Vector2(0.7102,0.837),Vector2(0.7574,0.7798),Vector2(0.7054,0.8378),Vector2(0.7338,0.8253),Vector2(0.7338,0.8299),Vector2(0.7267,0.8275),Vector2(0.7291,0.8283),Vector2(0.7338,0.8254),Vector2(0.7338,0.7682),Vector2(0.7385,0.7711),Vector2(0.7338,0.7628),Vector2(0.7338,0.82),Vector2(0.7437,0.7597),Vector2(0.7429,0.774),Vector2(0.7484,0.7629),Vector2(0.7505,0.778),Vector2(0.7116,0.8233),Vector2(0.7622,0.7806),Vector2(0.763,0.7872),Vector2(0.7046,0.8444),Vector2(0.7572,0.7769),Vector2(0.7524,0.7737),Vector2(0.7104,0.8341),Vector2(0.9158,0.9539),Vector2(0.9824,0.9663),Vector2(0.392,0.6289),Vector2(0.4147,0.6411),Vector2(0.4093,0.6273),Vector2(0.3758,0.6166),Vector2(0.7576,0.779),Vector2(0.4093,0.6139),Vector2(0.8544,0.902),Vector2(0.8589,0.7975),Vector2(0.8568,0.8668),Vector2(0.8497,0.9637),Vector2(0.7343,0.9872),Vector2(0.8538,0.9345),Vector2(0.3771,0.6213),Vector2(0.4147,0.6411),Vector2(0.392,0.6289),Vector2(0.8605,0.8638),Vector2(0.3927,0.6595),Vector2(0.4093,0.6122),Vector2(0.4111,0.6626),Vector2(0.4239,0.6387),Vector2(0.4273,0.6228),Vector2(0.4239,0.6648),Vector2(0.4352,0.6651),Vector2(0.4267,0.6717),Vector2(0.4123,0.664),Vector2(0.4255,0.614),Vector2(0.4253,0.6099),Vector2(0.392,0.6289),Vector2(0.4093,0.6273),Vector2(0.4147,0.6411),Vector2(0.9421,0.8701),Vector2(0.9509,0.8981),Vector2(0.9175,0.8974),Vector2(0.924,0.8702),Vector2(0.9824,0.8682),Vector2(0.9824,0.8971),Vector2(0.9541,0.8718),Vector2(0.9147,0.8129),Vector2(0.9437,0.8153),Vector2(0.9638,0.8095),Vector2(0.9824,0.809),Vector2(0.9461,0.923),Vector2(0.9071,0.9135),Vector2(0.9824,0.9287),Vector2(0.8767,0.8622),Vector2(0.8589,0.7975),Vector2(0.8605,0.8638),Vector2(0.8669,0.8674),Vector2(0.8568,0.8668),Vector2(0.9208,0.8549),Vector2(0.8792,0.7991),Vector2(0.9139,0.8636),Vector2(0.8835,0.8633),Vector2(0.9513,0.84),Vector2(0.9824,0.8358),Vector2(0.8845,0.9021),Vector2(0.888,0.931),Vector2(0.8761,0.9036),Vector2(0.8705,0.9018),Vector2(0.8544,0.902),Vector2(0.8538,0.9345),Vector2(0.7208,0.8401),Vector2(0.7279,0.8339),Vector2(0.7338,0.8385),Vector2(0.7338,0.7727),Vector2(0.7338,0.7681),Vector2(0.7397,0.7767),Vector2(0.7192,0.8201),Vector2(0.7139,0.8364),Vector2(0.7171,0.8352),Vector2(0.7127,0.8419),Vector2(0.7175,0.832),Vector2(0.7224,0.8292),Vector2(0.7247,0.8312),Vector2(0.7239,0.8169),Vector2(0.7146,0.8334),Vector2(0.7452,0.772),Vector2(0.753,0.7762),Vector2(0.7152,0.8309),Vector2(0.7409,0.7703),Vector2(0.7502,0.7748),Vector2(0.756,0.7661),Vector2(0.7102,0.837),Vector2(0.7574,0.7798),Vector2(0.7054,0.8378),Vector2(0.7338,0.8253),Vector2(0.7338,0.8299),Vector2(0.7338,0.8254),Vector2(0.7291,0.8283),Vector2(0.7267,0.8275),Vector2(0.7338,0.7628),Vector2(0.7385,0.7711),Vector2(0.7338,0.7682),Vector2(0.7338,0.82),Vector2(0.7437,0.7597),Vector2(0.7484,0.7629),Vector2(0.7429,0.774),Vector2(0.7505,0.778),Vector2(0.7116,0.8233),Vector2(0.763,0.7872),Vector2(0.7576,0.779),Vector2(0.7622,0.7806),Vector2(0.7046,0.8444),Vector2(0.7572,0.7769),Vector2(0.7524,0.7737),Vector2(0.7104,0.8341),Vector2(0.9158,0.9539),Vector2(0.8497,0.9637),Vector2(0.7343,0.9872),Vector2(0.9824,0.9663),Vector2(0.4093,0.6139),Vector2(0.3771,0.6213),Vector2(0.4147,0.6411),Vector2(0.3927,0.6595),Vector2(0.392,0.6289),Vector2(0.4111,0.6626),Vector2(0.4239,0.6387),Vector2(0.4273,0.6228),Vector2(0.4239,0.6648),Vector2(0.4267,0.6717),Vector2(0.4352,0.6651),Vector2(0.4123,0.664),Vector2(0.4255,0.614),Vector2(0.7343,0.9169),Vector2(0.7616,0.9147),Vector2(0.7553,0.8982),Vector2(0.7343,0.8968),Vector2(0.7739,0.9327),Vector2(0.7343,0.9365),Vector2(0.8187,0.8433),Vector2(0.8348,0.9045),Vector2(0.8324,0.8647),Vector2(0.74,0.8745),Vector2(0.761,0.8768),Vector2(0.7497,0.8755),Vector2(0.777,0.8787),Vector2(0.7647,0.8593),Vector2(0.7596,0.8565),Vector2(0.7438,0.8546),Vector2(0.7343,0.8756),Vector2(0.7372,0.8736),Vector2(0.7405,0.8536),Vector2(0.7808,0.8802),Vector2(0.7786,0.8666),Vector2(0.7875,0.8787),Vector2(0.7821,0.8667),Vector2(0.7952,0.9076),Vector2(0.8011,0.8823),Vector2(0.7745,0.9003),Vector2(0.7939,0.8518),Vector2(0.7845,0.8549),Vector2(0.7731,0.8049),Vector2(0.7979,0.8609),Vector2(0.8185,0.8054),Vector2(0.8439,0.8655),Vector2(0.8131,0.8741),Vector2(0.786,0.7876),Vector2(0.8107,0.8538),Vector2(0.8058,0.8252),Vector2(0.8096,0.8166),Vector2(0.8589,0.7975),Vector2(0.8568,0.8668),Vector2(0.8544,0.902),Vector2(0.8538,0.9345),Vector2(0.8173,0.9068),Vector2(0.8156,0.9257),Vector2(0.7753,0.9186),Vector2(0.7832,0.9041),Vector2(0.7881,0.9479),Vector2(0.7343,0.9577),Vector2(0.8497,0.9637),Vector2(0.7343,0.9872),Vector2(0.8605,0.8638),Vector2(0.7553,0.8982),Vector2(0.7616,0.9147),Vector2(0.7343,0.9169),Vector2(0.7343,0.8968),Vector2(0.7739,0.9327),Vector2(0.7343,0.9365),Vector2(0.8324,0.8647),Vector2(0.8348,0.9045),Vector2(0.8187,0.8433),Vector2(0.74,0.8745),Vector2(0.7497,0.8755),Vector2(0.761,0.8768),Vector2(0.7647,0.8593),Vector2(0.777,0.8787),Vector2(0.7438,0.8546),Vector2(0.7596,0.8565),Vector2(0.7372,0.8736),Vector2(0.7343,0.8756),Vector2(0.7405,0.8536),Vector2(0.7808,0.8802),Vector2(0.7786,0.8666),Vector2(0.7821,0.8667),Vector2(0.7875,0.8787),Vector2(0.8011,0.8823),Vector2(0.7952,0.9076),Vector2(0.7745,0.9003),Vector2(0.7939,0.8518),Vector2(0.7845,0.8549),Vector2(0.7731,0.8049),Vector2(0.7979,0.8609),Vector2(0.8185,0.8054),Vector2(0.8439,0.8655),Vector2(0.8131,0.8741),Vector2(0.8107,0.8538),Vector2(0.786,0.7876),Vector2(0.8058,0.8252),Vector2(0.8096,0.8166),Vector2(0.8589,0.7975),Vector2(0.8568,0.8668),Vector2(0.8538,0.9345),Vector2(0.8544,0.902),Vector2(0.8173,0.9068),Vector2(0.8156,0.9257),Vector2(0.7753,0.9186),Vector2(0.7832,0.9041),Vector2(0.7881,0.9479),Vector2(0.7343,0.9577),Vector2(0.8497,0.9637),Vector2(0.7343,0.9872),Vector2(0.8605,0.8638)]);
{ .SetTexCoord }
IndexedFaceSet463.TexCoord := TextureCoordinate464;
Coordinate465 := TCoordinateNode.Create;
Coordinate465.SetPoint([Vector3(6.595,-7.151,-8.257),Vector3(9.429,-11.8,3.993),Vector3(8.282,-11.22,-0.9892),Vector3(4.624,-11.64,-3.306),Vector3(16.07,-2.995,5.873),Vector3(15.82,-12.8,1.071),Vector3(12.64,-1.285,-4.598),Vector3(16.07,-3.083,2.316),Vector3(10.71,-6.207,-3.224),Vector3(8.946,-0.132,-8.392),Vector3(8.698,-10.19,-8.675),Vector3(6.297,5.219,-7.352),Vector3(4.896,-9.878,-12.77),Vector3(14.18,4.623,2.748),Vector3(14.87,4.604,5.309),Vector3(13.01,-7.209,-3.663),Vector3(11.99,5.219,-3.545),Vector3(0,-0.8915,-10.42),Vector3(6.297,-0.1284,-9.196),Vector3(14.21,4.47,4.372),Vector3(2.98,-10.26,-5.72),Vector3(10.1,-9.009,-1.975),Vector3(7.409,-17.27,-8.757),Vector3(8.44,-9.628,-3.832),Vector3(4.999,-18.87,-2.922),Vector3(11.97,-8.702,0.9778),Vector3(11.23,-15.65,-1.56),Vector3(3.584,-13.5,0.961),Vector3(5.778,-12.67,0.2527),Vector3(2.389,-13.11,-1.714),Vector3(9.699,-10.52,1.837),Vector3(11.85,-10.17,6.164),Vector3(6.297,16.77,2.005),Vector3(12.13,8.819,-0.9951),Vector3(11.81,12.89,2.963),Vector3(0,12.79,-5.593),Vector3(6.297,11.97,-5.107),Vector3(14.78,-4.967,4.122),Vector3(9.429,-11.8,3.993),Vector3(14.37,-8.308,4.774),Vector3(12.02,-9.081,8.596),Vector3(15.26,5.042,8.379),Vector3(16.68,-2.579,7.954),Vector3(13.63,-4.256,7.877),Vector3(0,-17.31,-6.802),Vector3(14.16,-2.229,11.05),Vector3(14.63,-3.955,8.111),Vector3(12.19,-3.7,12.77),Vector3(5.31,-15.15,7.498),Vector3(12.02,-9.081,8.596),Vector3(12.84,-3.763,10.48),Vector3(9.046,-12.17,7.498),Vector3(12.8,-9.61,10.48),Vector3(5.33,-15.13,10.8),Vector3(8.079,-13.16,11.16),Vector3(0,-16.06,10.76),Vector3(-8.946,-0.132,-8.392),Vector3(-6.297,5.219,-7.352),Vector3(-11.99,5.219,-3.545),Vector3(-12.64,-1.285,-4.598),Vector3(0,5.219,-8.851),Vector3(-6.297,-0.1284,-9.196),Vector3(-13.01,-7.209,-3.663),Vector3(-8.698,-10.19,-8.675),Vector3(-4.896,-9.878,-12.77),Vector3(0,-5.378,-11.66),Vector3(-6.297,11.97,-5.107),Vector3(-12.13,8.819,-0.9951),Vector3(-14.78,-4.967,4.122),Vector3(-16.07,-2.995,5.873),Vector3(-10.71,-6.207,-3.224),Vector3(-15.82,-12.8,1.071),Vector3(-16.07,-3.083,2.316),Vector3(-6.595,-7.151,-8.257),Vector3(0,-7.956,-9.37),Vector3(-14.18,4.623,2.748),Vector3(-11.81,12.89,2.963),Vector3(-14.21,4.47,4.372),Vector3(-14.87,4.604,5.309),Vector3(-15.26,5.042,8.379),Vector3(-2.98,-10.26,-5.72),Vector3(0,-12.28,-5.509),Vector3(0,-14.6,-11.22),Vector3(-7.409,-17.27,-8.757),Vector3(-10.1,-9.009,-1.975),Vector3(-8.44,-9.628,-3.832),Vector3(-8.282,-11.22,-0.9892),Vector3(-5.778,-12.67,0.2527),Vector3(-4.624,-11.64,-3.306),Vector3(-4.999,-18.87,-2.922),Vector3(-9.699,-10.52,1.837),Vector3(-9.429,-11.8,3.993),Vector3(-3.584,-13.5,0.961),Vector3(-11.23,-15.65,-1.56),Vector3(-11.97,-8.702,0.9778),Vector3(-14.37,-8.308,4.774),Vector3(0,-14.56,0.6872),Vector3(-2.389,-13.11,-1.714),Vector3(-12.02,-9.081,8.596),Vector3(-11.85,-10.17,6.164),Vector3(-6.297,16.77,2.005),Vector3(0,17.52,2.005),Vector3(-9.046,-12.17,7.498),Vector3(-5.31,-15.15,7.498),Vector3(-12.02,-9.081,8.596),Vector3(-9.429,-11.8,3.993),Vector3(0,-15.55,7.498),Vector3(-13.63,-4.256,7.877),Vector3(-12.8,-9.61,10.48),Vector3(-8.079,-13.16,11.16),Vector3(-12.84,-3.763,10.48),Vector3(-12.19,-3.7,12.77),Vector3(-14.16,-2.229,11.05),Vector3(-14.63,-3.955,8.111),Vector3(-5.33,-15.13,10.8),Vector3(6.083,-2.338,25.93),Vector3(11.2,8.465,19.14),Vector3(0,13.66,24.16),Vector3(5.65,12.75,23.28),Vector3(15.14,-3.7,12.77),Vector3(10.26,-12.78,18.76),Vector3(5.008,9.476,25.96),Vector3(6.444,2.872,25.97),Vector3(9.382,1.978,23.24),Vector3(12.3,0.8072,18.53),Vector3(9.871,1.835,22.39),Vector3(9.351,-1.718,22.51),Vector3(9.717,-2.207,21.66),Vector3(8.342,-8.633,21.21),Vector3(11.54,-4.435,18.7),Vector3(9.802,-5.103,20.89),Vector3(11.62,-5.278,19.98),Vector3(12.87,-11.91,12.98),Vector3(12.35,-10.52,15.83),Vector3(13.35,-8.064,14.95),Vector3(14.1,-0.8582,16.7),Vector3(13.11,-9.742,16.72),Vector3(13.82,-5.06,17.14),Vector3(15.52,-3.763,10.48),Vector3(10.32,-0.006923,20.53),Vector3(17.83,-10.69,7.498),Vector3(13.16,6.618,15.16),Vector3(7.716,12.49,21.1),Vector3(14.39,5.565,12.03),Vector3(9.288,8.426,22.41),Vector3(0,4.262,28.62),Vector3(3.961,3.545,27.61),Vector3(7.09,-2.106,25.09),Vector3(0,17.84,15.38),Vector3(6.297,17.09,15.38),Vector3(6.297,18.12,8.31),Vector3(6.297,15.07,19.12),Vector3(12.03,13.36,8.31),Vector3(11.64,11.99,14.62),Vector3(1.971,-2.435,27.29),Vector3(1.137,3.737,28.51),Vector3(15.15,-4.372,7.498),Vector3(-5.008,9.476,25.96),Vector3(-5.65,12.75,23.28),Vector3(0,9.83,27.23),Vector3(-6.297,15.07,19.12),Vector3(0,16.06,20.15),Vector3(-15.14,-3.7,12.77),Vector3(-14.39,5.565,12.03),Vector3(-13.35,-8.064,14.95),Vector3(-1.137,3.737,28.51),Vector3(-3.961,3.545,27.61),Vector3(-6.444,2.872,25.97),Vector3(-7.09,-2.106,25.09),Vector3(-9.382,1.978,23.24),Vector3(-1.971,-2.435,27.29),Vector3(-6.083,-2.338,25.93),Vector3(-9.871,1.835,22.39),Vector3(-9.351,-1.718,22.51),Vector3(-9.717,-2.207,21.66),Vector3(-10.32,-0.006923,20.53),Vector3(-12.3,0.8072,18.53),Vector3(-11.2,8.465,19.14),Vector3(-9.288,8.426,22.41),Vector3(-11.62,-5.278,19.98),Vector3(-9.802,-5.103,20.89),Vector3(-8.342,-8.633,21.21),Vector3(-11.54,-4.435,18.7),Vector3(-12.87,-11.91,12.98),Vector3(-15.52,-3.763,10.48),Vector3(-14.1,-0.8582,16.7),Vector3(-13.82,-5.06,17.14),Vector3(-10.26,-12.78,18.76),Vector3(-13.11,-9.742,16.72),Vector3(-12.35,-10.52,15.83),Vector3(-17.83,-10.69,7.498),Vector3(-16.68,-2.579,7.954),Vector3(-12.03,13.36,8.31),Vector3(-13.16,6.618,15.16),Vector3(-11.64,11.99,14.62),Vector3(-7.716,12.49,21.1),Vector3(-6.297,17.09,15.38),Vector3(-6.297,18.12,8.31),Vector3(0,18.87,8.31),Vector3(-15.15,-4.372,7.498)]);
{ .SetCoord }
IndexedFaceSet463.Coord := Coordinate465;
{ .SetGeometry }
Shape461.Geometry := IndexedFaceSet463;
{ .AddChild }
Transform460.AddChildren([Shape461]);
{ .AddChildren }
HAnimSegment459.AddChildren([Transform460]);
Coordinate466 := TCoordinateNode.Create;
Coordinate466 := Coordinate465;
{ .SetCoord }
HAnimSegment459.Coord := Coordinate466;
HAnimDisplacer467 := THAnimDisplacerNode.Create;
HAnimDisplacer467.NameField := 'occipital_scalp_morphinterpolator';
HAnimDisplacer467.SetCoordIndex([3,12,64,82,88,96]);
HAnimDisplacer467.SetDisplacements([Vector3(0,0.84,0),Vector3(0,0.838,0),Vector3(0,0.838,0),Vector3(0,0.16,0),Vector3(0,0.84,0),Vector3(0,0.15,0)]);
{ .AddDisplacers }
HAnimSegment459.SetDisplacers([HAnimDisplacer467]);
HAnimDisplacer468 := THAnimDisplacerNode.Create;
HAnimDisplacer468.NameField := 'occipital_scalp_morphinterpolator';
HAnimDisplacer468.SetCoordIndex([82,96,106]);
HAnimDisplacer468.SetDisplacements([Vector3(0,0.7,0.36),Vector3(0,0.75,0.3638),Vector3(0,0.11,0)]);
{ .AddDisplacers }
HAnimSegment459.SetDisplacers([HAnimDisplacer468]);
HAnimDisplacer469 := THAnimDisplacerNode.Create;
HAnimDisplacer469.NameField := 'occipital_scalp_morphinterpolator';
HAnimDisplacer469.SetCoordIndex([27]);
HAnimDisplacer469.SetDisplacements([Vector3(-0.001,0.39,0)]);
{ .AddDisplacers }
HAnimSegment459.SetDisplacers([HAnimDisplacer469]);
HAnimDisplacer470 := THAnimDisplacerNode.Create;
HAnimDisplacer470.NameField := 'occipital_scalp_morphinterpolator';
HAnimDisplacer470.SetCoordIndex([106]);
HAnimDisplacer470.SetDisplacements([Vector3(0,-0.31,0)]);
{ .AddDisplacers }
HAnimSegment459.SetDisplacers([HAnimDisplacer470]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment459]);
HAnimSegment471 := THAnimSegmentNode.Create;
HAnimSegment471.NameField := 'philtrum';
Transform472 := TTransformNode.Create;
Transform472.Translation := Vector3(0,9.815,15);
Shape473 := TShapeNode.Create;
Appearance474 := TAppearanceNode.Create;
Appearance474 := Appearance97;
{ .SetAppearance }
Shape473.Appearance := Appearance474;
IndexedFaceSet475 := TIndexedFaceSetNode.Create;
IndexedFaceSet475.SetCoordIndex([0,5,1,-1,1,2,0,-1,4,3,1,-1,1,5,4,-1]);
IndexedFaceSet475.CreaseAngle := 3.14159;
IndexedFaceSet475.Solid := False;
IndexedFaceSet475.SetTexCoordIndex([0,1,2,-1,2,3,0,-1,6,5,4,-1,4,7,6,-1]);
TextureCoordinate476 := TTextureCoordinateNode.Create;
TextureCoordinate476.SetPoint([Vector2(0.2511,0.6816),Vector2(0.2441,0.6816),Vector2(0.2441,0.6653),Vector2(0.2548,0.6653),Vector2(0.2441,0.6653),Vector2(0.2548,0.6653),Vector2(0.2511,0.6816),Vector2(0.2441,0.6816)]);
{ .SetTexCoord }
IndexedFaceSet475.TexCoord := TextureCoordinate476;
Coordinate477 := TCoordinateNode.Create;
Coordinate477.SetPoint([Vector3(0.3704,0.4343,0.1553),Vector3(0,-0.4343,-0.1589),Vector3(0.5699,-0.4343,-0.1589),Vector3(-0.5699,-0.4343,-0.1589),Vector3(-0.3704,0.4343,0.1553),Vector3(0,0.4343,0.1589)]);
{ .SetCoord }
IndexedFaceSet475.Coord := Coordinate477;
{ .SetGeometry }
Shape473.Geometry := IndexedFaceSet475;
{ .AddChild }
Transform472.AddChildren([Shape473]);
{ .AddChildren }
HAnimSegment471.AddChildren([Transform472]);
Coordinate478 := TCoordinateNode.Create;
Coordinate478 := Coordinate477;
{ .SetCoord }
HAnimSegment471.Coord := Coordinate478;
HAnimDisplacer479 := THAnimDisplacerNode.Create;
HAnimDisplacer479.NameField := 'philtrum_morphinterpolator';
HAnimDisplacer479.SetCoordIndex([1,2,3]);
HAnimDisplacer479.SetDisplacements([Vector3(0,0.4847,0),Vector3(0,0.4847,0),Vector3(0,0.4847,0)]);
{ .AddDisplacers }
HAnimSegment471.SetDisplacers([HAnimDisplacer479]);
HAnimDisplacer480 := THAnimDisplacerNode.Create;
HAnimDisplacer480.NameField := 'philtrum_morphinterpolator';
HAnimDisplacer480.SetCoordIndex([1,2,3]);
HAnimDisplacer480.SetDisplacements([Vector3(0,0.2286,0),Vector3(0,0.1405,0),Vector3(0,0.1405,0)]);
{ .AddDisplacers }
HAnimSegment471.SetDisplacers([HAnimDisplacer480]);
HAnimDisplacer481 := THAnimDisplacerNode.Create;
HAnimDisplacer481.NameField := 'philtrum_morphinterpolator';
HAnimDisplacer481.SetCoordIndex([1,2,3]);
HAnimDisplacer481.SetDisplacements([Vector3(0,-0.0689,0.0447),Vector3(0,-0.0689,0.0447),Vector3(0,-0.0689,0.0447)]);
{ .AddDisplacers }
HAnimSegment471.SetDisplacers([HAnimDisplacer481]);
HAnimDisplacer482 := THAnimDisplacerNode.Create;
HAnimDisplacer482.NameField := 'philtrum_morphinterpolator';
HAnimDisplacer482.SetCoordIndex([1,2,3]);
HAnimDisplacer482.SetDisplacements([Vector3(0,-0.0514,-0.037),Vector3(0,-0.0514,-0.037),Vector3(0,-0.0514,-0.037)]);
{ .AddDisplacers }
HAnimSegment471.SetDisplacers([HAnimDisplacer482]);
HAnimDisplacer483 := THAnimDisplacerNode.Create;
HAnimDisplacer483.NameField := 'philtrum_morphinterpolator';
HAnimDisplacer483.SetCoordIndex([1,2,3]);
HAnimDisplacer483.SetDisplacements([Vector3(0,0.1071,0.5281),Vector3(-0.0737,0.1634,0.5281),Vector3(0.0737,0.1634,0.5281)]);
{ .AddDisplacers }
HAnimSegment471.SetDisplacers([HAnimDisplacer483]);
HAnimDisplacer484 := THAnimDisplacerNode.Create;
HAnimDisplacer484.NameField := 'philtrum_morphinterpolator';
HAnimDisplacer484.SetCoordIndex([1,2,3]);
HAnimDisplacer484.SetDisplacements([Vector3(-0.0411,0,0.5662),Vector3(-0.0978,0,0.5662),Vector3(0.0156,0,0.5662)]);
{ .AddDisplacers }
HAnimSegment471.SetDisplacers([HAnimDisplacer484]);
HAnimDisplacer485 := THAnimDisplacerNode.Create;
HAnimDisplacer485.NameField := 'philtrum_morphinterpolator';
HAnimDisplacer485.SetCoordIndex([1,2,3]);
HAnimDisplacer485.SetDisplacements([Vector3(0,-0.5204,-0.6548),Vector3(0,-0.5204,-0.6548),Vector3(0,-0.5204,-0.6548)]);
{ .AddDisplacers }
HAnimSegment471.SetDisplacers([HAnimDisplacer485]);
HAnimDisplacer486 := THAnimDisplacerNode.Create;
HAnimDisplacer486.NameField := 'philtrum_morphinterpolator';
HAnimDisplacer486.SetCoordIndex([1,2,3]);
HAnimDisplacer486.SetDisplacements([Vector3(0,-0.0383,0.2409),Vector3(-0.0415,-0.0383,0.2409),Vector3(0.0415,-0.0383,0.2409)]);
{ .AddDisplacers }
HAnimSegment471.SetDisplacers([HAnimDisplacer486]);
HAnimDisplacer487 := THAnimDisplacerNode.Create;
HAnimDisplacer487.NameField := 'philtrum_morphinterpolator';
HAnimDisplacer487.SetCoordIndex([1,2,3]);
HAnimDisplacer487.SetDisplacements([Vector3(0,0.2684,0),Vector3(0,0.2684,0),Vector3(0,0.2684,0)]);
{ .AddDisplacers }
HAnimSegment471.SetDisplacers([HAnimDisplacer487]);
HAnimDisplacer488 := THAnimDisplacerNode.Create;
HAnimDisplacer488.NameField := 'philtrum_morphinterpolator';
HAnimDisplacer488.SetCoordIndex([1,2,3]);
HAnimDisplacer488.SetDisplacements([Vector3(0,0.5016,0),Vector3(0,0.5016,0),Vector3(0,0.5016,0)]);
{ .AddDisplacers }
HAnimSegment471.SetDisplacers([HAnimDisplacer488]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment471]);
HAnimSegment489 := THAnimSegmentNode.Create;
HAnimSegment489.NameField := 'right_bulbar_conjunctiva';
Transform490 := TTransformNode.Create;
Transform490.Translation := Vector3(-5.794,17.61,11.15);
Shape491 := TShapeNode.Create;
Appearance492 := TAppearanceNode.Create;
Appearance492 := Appearance97;
{ .SetAppearance }
Shape491.Appearance := Appearance492;
IndexedFaceSet493 := TIndexedFaceSetNode.Create;
IndexedFaceSet493.SetCoordIndex([6,3,1,-1,1,7,6,-1,0,2,26,-1,26,10,0,-1,10,8,0,-1,11,23,5,-1,7,24,12,-1,8,2,0,-1,8,23,2,-1,4,14,19,-1,19,9,4,-1,3,13,14,-1,14,4,3,-1,11,21,22,-1,22,12,25,-1,11,22,25,-1,5,15,21,-1,21,11,5,-1,6,16,13,-1,13,3,6,-1,12,22,17,-1,17,7,12,-1,8,18,15,-1,15,5,8,-1,7,17,16,-1,16,6,7,-1,10,26,19,-1,19,20,10,-1,10,20,18,-1,18,8,10,-1,23,8,5,-1,24,7,1,-1,24,25,12,-1,19,26,9,-1,26,2,9,-1]);
IndexedFaceSet493.CreaseAngle := 3.14159;
IndexedFaceSet493.Solid := False;
IndexedFaceSet493.SetTexCoordIndex([7,27,0,-1,0,8,7,-1,2,1,29,-1,29,11,2,-1,11,9,2,-1,12,25,5,-1,8,26,13,-1,9,1,2,-1,9,25,1,-1,4,15,14,-1,14,10,4,-1,3,16,15,-1,15,4,3,-1,12,18,17,-1,17,13,28,-1,12,17,28,-1,5,19,18,-1,18,12,5,-1,6,20,16,-1,16,3,6,-1,13,17,21,-1,21,8,13,-1,9,22,19,-1,19,5,9,-1,8,21,23,-1,23,7,8,-1,11,29,14,-1,14,24,11,-1,11,24,22,-1,22,9,11,-1,25,9,5,-1,26,8,0,-1,26,28,13,-1,14,29,10,-1,29,1,10,-1]);
TextureCoordinate494 := TTextureCoordinateNode.Create;
TextureCoordinate494.SetPoint([Vector2(0.328,0.824),Vector2(0.3871,0.8321),Vector2(0.4052,0.8221),Vector2(0.3258,0.833),Vector2(0.3487,0.8409),Vector2(0.3916,0.7984),Vector2(0.2983,0.8142),Vector2(0.2981,0.8094),Vector2(0.309,0.8013),Vector2(0.4011,0.8053),Vector2(0.385,0.8438),Vector2(0.4198,0.8261),Vector2(0.3777,0.7936),Vector2(0.3315,0.7948),Vector2(0.3885,0.8436),Vector2(0.3487,0.8409),Vector2(0.3206,0.8292),Vector2(0.3315,0.7948),Vector2(0.372,0.7925),Vector2(0.3869,0.7967),Vector2(0.2983,0.8142),Vector2(0.309,0.8013),Vector2(0.3966,0.8018),Vector2(0.2981,0.8094),Vector2(0.4198,0.8261),Vector2(0.3889,0.8064),Vector2(0.3322,0.8026),Vector2(0.3307,0.8316),Vector2(0.3442,0.7934),Vector2(0.3915,0.8393)]);
{ .SetTexCoord }
IndexedFaceSet493.TexCoord := TextureCoordinate494;
Coordinate495 := TCoordinateNode.Create;
Coordinate495.SetPoint([Vector3(-2.76,0.0973,-0.8547),Vector3(1.347,0.2034,2.463),Vector3(-1.784,0.6812,0.4382),Vector3(1.252,0.6995,2.521),Vector3(0.2686,1.16,2.287),Vector3(-2.036,-1.163,-0.4716),Vector3(2.858,-0.5459,2.699),Vector3(2.35,-1.007,2.159),Vector3(-2.632,-0.8129,-0.7113),Vector3(-1.577,1.203,0.9703),Vector3(-3.566,0.2646,-1.27),Vector3(-1.305,-1.43,0.2687),Vector3(1.132,-1.383,1.574),Vector3(2.475,0.7643,1.73),Vector3(0.4787,1.699,1.381),Vector3(-1.844,-1.377,-0.8846),Vector3(4.008,-0.6268,1.793),Vector3(3.316,-1.256,1.253),Vector3(-2.512,-0.9908,-1.342),Vector3(-2.026,1.768,-0.3396),Vector3(-4.008,0.4783,-2.699),Vector3(-1.039,-1.688,-0.4347),Vector3(1.656,-1.768,0.6681),Vector3(-1.878,-0.7347,-0.1728),Vector3(1.108,-0.9679,1.714),Vector3(0.4715,-1.396,1.218),Vector3(-1.925,1.039,0.5784)]);
{ .SetCoord }
IndexedFaceSet493.Coord := Coordinate495;
{ .SetGeometry }
Shape491.Geometry := IndexedFaceSet493;
{ .AddChild }
Transform490.AddChildren([Shape491]);
{ .AddChildren }
HAnimSegment489.AddChildren([Transform490]);
Coordinate496 := TCoordinateNode.Create;
Coordinate496 := Coordinate495;
{ .SetCoord }
HAnimSegment489.Coord := Coordinate496;
HAnimDisplacer497 := THAnimDisplacerNode.Create;
HAnimDisplacer497.NameField := 'right_bulbar_conjunctiva_morphinterpolator';
HAnimDisplacer497.SetCoordIndex([3,4,14]);
HAnimDisplacer497.SetDisplacements([Vector3(0,-0.0591,0),Vector3(0,-0.059,0),Vector3(0.5563,-0.507,0)]);
{ .AddDisplacers }
HAnimSegment489.SetDisplacers([HAnimDisplacer497]);
HAnimDisplacer498 := THAnimDisplacerNode.Create;
HAnimDisplacer498.NameField := 'right_bulbar_conjunctiva_morphinterpolator';
HAnimDisplacer498.SetCoordIndex([14]);
HAnimDisplacer498.SetDisplacements([Vector3(0,0.384,0)]);
{ .AddDisplacers }
HAnimSegment489.SetDisplacers([HAnimDisplacer498]);
HAnimDisplacer499 := THAnimDisplacerNode.Create;
HAnimDisplacer499.NameField := 'right_bulbar_conjunctiva_morphinterpolator';
HAnimDisplacer499.SetCoordIndex([3,4,5,7,8,9,11,12,15,21,25,26]);
HAnimDisplacer499.SetDisplacements([Vector3(0,-0.3349,0),Vector3(0,-0.3349,0),Vector3(0,0.3017,0),Vector3(0,0.1097,0),Vector3(0.123,0.2263,0),Vector3(0,-0.3349,0),Vector3(0,0.302,0),Vector3(0,0.151,0),Vector3(0,0.151,0),Vector3(0,0.151,0),Vector3(0,0.151,0),Vector3(0,-0.335,0)]);
{ .AddDisplacers }
HAnimSegment489.SetDisplacers([HAnimDisplacer499]);
HAnimDisplacer500 := THAnimDisplacerNode.Create;
HAnimDisplacer500.NameField := 'right_bulbar_conjunctiva_morphinterpolator';
HAnimDisplacer500.SetCoordIndex([19]);
HAnimDisplacer500.SetDisplacements([Vector3(0,0.135,0)]);
{ .AddDisplacers }
HAnimSegment489.SetDisplacers([HAnimDisplacer500]);
HAnimDisplacer501 := THAnimDisplacerNode.Create;
HAnimDisplacer501.NameField := 'right_bulbar_conjunctiva_morphinterpolator';
HAnimDisplacer501.SetCoordIndex([3,4,6,9,26]);
HAnimDisplacer501.SetDisplacements([Vector3(0,0.4975,0),Vector3(0,0.498,0),Vector3(0,0.4976,0),Vector3(0,0.498,0),Vector3(0,0.497,0)]);
{ .AddDisplacers }
HAnimSegment489.SetDisplacers([HAnimDisplacer501]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment489]);
HAnimSegment502 := THAnimSegmentNode.Create;
HAnimSegment502.NameField := 'right_cheek';
Transform503 := TTransformNode.Create;
Transform503.Translation := Vector3(-6.927,11.97,7.646);
Shape504 := TShapeNode.Create;
Appearance505 := TAppearanceNode.Create;
Appearance505 := Appearance97;
{ .SetAppearance }
Shape504.Appearance := Appearance505;
IndexedFaceSet506 := TIndexedFaceSetNode.Create;
IndexedFaceSet506.SetCoordIndex([1,19,17,-1,20,19,1,-1,14,13,19,-1,19,13,17,-1,13,14,2,-1,3,2,14,-1,34,32,4,-1,4,18,34,-1,31,10,4,-1,4,32,31,-1,15,3,14,-1,17,13,12,-1,12,13,4,-1,4,10,12,-1,2,3,5,-1,13,2,4,-1,24,11,25,-1,25,26,24,-1,24,29,7,-1,7,11,24,-1,6,17,12,-1,12,8,6,-1,10,31,30,-1,30,9,10,-1,12,10,9,-1,9,8,12,-1,18,5,34,-1,2,5,18,-1,4,2,18,-1,19,21,14,-1,14,21,16,-1,16,22,14,-1,0,21,19,-1,14,22,15,-1,6,27,28,-1,28,17,6,-1,28,1,17,-1,29,24,23,-1,7,30,31,-1,31,11,7,-1,33,25,11,-1,32,33,11,-1,31,32,11,-1,32,34,33,-1]);
IndexedFaceSet506.CreaseAngle := 3.14159;
IndexedFaceSet506.Solid := False;
IndexedFaceSet506.SetTexCoordIndex([0,1,2,-1,3,1,0,-1,4,5,1,-1,1,5,2,-1,5,4,6,-1,7,6,4,-1,39,37,13,-1,13,24,39,-1,36,15,13,-1,13,37,36,-1,8,7,4,-1,18,16,17,-1,17,16,13,-1,13,15,17,-1,19,12,11,-1,16,19,13,-1,28,14,29,-1,29,30,28,-1,28,34,20,-1,20,14,28,-1,21,18,17,-1,17,22,21,-1,15,36,35,-1,35,23,15,-1,17,15,23,-1,23,22,17,-1,24,11,39,-1,19,11,24,-1,13,19,24,-1,1,9,4,-1,4,9,10,-1,10,25,4,-1,26,9,1,-1,4,25,8,-1,21,31,33,-1,33,18,21,-1,32,0,2,-1,34,28,27,-1,20,35,36,-1,36,14,20,-1,38,29,14,-1,37,38,14,-1,36,37,14,-1,37,39,38,-1]);
TextureCoordinate507 := TTextureCoordinateNode.Create;
TextureCoordinate507.SetPoint([Vector2(0.44,0.6625),Vector2(0.4392,0.6356),Vector2(0.4517,0.649),Vector2(0.4352,0.6651),Vector2(0.4454,0.6184),Vector2(0.4606,0.6289),Vector2(0.464,0.6174),Vector2(0.467,0.6086),Vector2(0.4571,0.6062),Vector2(0.4273,0.6228),Vector2(0.4255,0.614),Vector2(0.3041,0.631),Vector2(0.3118,0.6205),Vector2(0.3484,0.6888),Vector2(0.2881,0.7397),Vector2(0.3623,0.7239),Vector2(0.4088,0.6855),Vector2(0.4123,0.7323),Vector2(0.4518,0.7703),Vector2(0.364,0.6372),Vector2(0.301,0.7815),Vector2(0.4279,0.7939),Vector2(0.3993,0.7753),Vector2(0.3692,0.7714),Vector2(0.3226,0.6487),Vector2(0.4413,0.6101),Vector2(0.4239,0.6387),Vector2(0.2671,0.7978),Vector2(0.268,0.7555),Vector2(0.2727,0.7092),Vector2(0.2641,0.7133),Vector2(0.4335,0.819),Vector2(0.4547,0.661),Vector2(0.4572,0.8171),Vector2(0.2845,0.7889),Vector2(0.3287,0.7742),Vector2(0.3232,0.7322),Vector2(0.3144,0.6917),Vector2(0.2788,0.6949),Vector2(0.3007,0.651)]);
{ .SetTexCoord }
IndexedFaceSet506.TexCoord := TextureCoordinate507;
Coordinate508 := TCoordinateNode.Create;
Coordinate508.SetPoint([Vector3(-5.868,0.6861,-6.977),Vector3(-5.046,6.009,-3.719),Vector3(0.5602,-4.076,1.16),Vector3(3.27,-6.054,1.778),Vector3(1.388,-1.337,4.299),Vector3(3.582,-4.636,3.814),Vector3(-2.834,4.241,1.178),Vector3(3.857,3.618,5.665),Vector3(-1.296,3.319,2.709),Vector3(0.2365,3.054,3.875),Vector3(0.6487,0.5238,4.348),Vector3(4.592,1.365,6.024),Vector3(-2.001,0.9701,1.578),Vector3(-1.819,-1.515,0.4861),Vector3(-0.1831,-3.863,-2.615),Vector3(3.274,-6.596,-0.2282),Vector3(1.597,-4.834,-6.657),Vector3(-4.101,2.99,-1.336),Vector3(2.758,-3.467,4.304),Vector3(-3.42,-0.01058,-3.863),Vector3(-5.261,6.596,-4.686),Vector3(-1.153,-2.865,-6.293),Vector3(2.435,-5.715,-3.442),Vector3(5.749,4.473,6.621),Vector3(5.809,2.217,6.673),Vector3(5.409,-0.2562,6.321),Vector3(5.868,-0.0462,6.977),Vector3(-3.128,5.574,1.136),Vector3(-4.273,5.681,-0.7129),Vector3(4.763,4.022,6.147),Vector3(2.394,3.215,4.911),Vector3(2.727,0.9674,5.231),Vector3(3.19,-1.179,5.185),Vector3(5.082,-1.013,6.115),Vector3(3.921,-3.342,4.788)]);
{ .SetCoord }
IndexedFaceSet506.Coord := Coordinate508;
{ .SetGeometry }
Shape504.Geometry := IndexedFaceSet506;
{ .AddChild }
Transform503.AddChildren([Shape504]);
{ .AddChildren }
HAnimSegment502.AddChildren([Transform503]);
Coordinate509 := TCoordinateNode.Create;
Coordinate509 := Coordinate508;
{ .SetCoord }
HAnimSegment502.Coord := Coordinate509;
HAnimDisplacer510 := THAnimDisplacerNode.Create;
HAnimDisplacer510.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer510.SetCoordIndex([4,10,11,25,26,31,32,33,34]);
HAnimDisplacer510.SetDisplacements([Vector3(0,0.8378,0),Vector3(0,0.8382,0),Vector3(0,0.838,0),Vector3(0,0.838,0),Vector3(0,0.838,0),Vector3(0,0.8376,0),Vector3(0,0.8381,0),Vector3(0,0.8383,0),Vector3(-0.591,1.322,0.107)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer510]);
HAnimDisplacer511 := THAnimDisplacerNode.Create;
HAnimDisplacer511.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer511.SetCoordIndex([4,6,7,8,9,10,11,12,13,17,19,24,29,30,31,32]);
HAnimDisplacer511.SetDisplacements([Vector3(-0.6734,0.6214,0.174),Vector3(0,0.1,0.079),Vector3(0,0.134,-0.107),Vector3(-0.299,0.38,-0.184),Vector3(0,0.268,0.099),Vector3(0.0317,1.7512,0.87),Vector3(-0.255,1.233,0.181),Vector3(-0.029,1.5769,1.5),Vector3(-0.588,1.4349,0.0324),Vector3(0,0.462,0.3972),Vector3(0,0.6417,0),Vector3(0,0.754,0),Vector3(0,0.067,-0.082),Vector3(0,0.268,0),Vector3(-0.001,1.3996,0.448),Vector3(0,0.2915,0.183)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer511]);
HAnimDisplacer512 := THAnimDisplacerNode.Create;
HAnimDisplacer512.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer512.SetCoordIndex([34]);
HAnimDisplacer512.SetDisplacements([Vector3(0,-0.137,0)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer512]);
HAnimDisplacer513 := THAnimDisplacerNode.Create;
HAnimDisplacer513.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer513.SetCoordIndex([18,34]);
HAnimDisplacer513.SetDisplacements([Vector3(0.407,0.417,0.179),Vector3(-0.379,0.396,0.153)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer513]);
HAnimDisplacer514 := THAnimDisplacerNode.Create;
HAnimDisplacer514.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer514.SetCoordIndex([3,5,15]);
HAnimDisplacer514.SetDisplacements([Vector3(0,-0.616,0),Vector3(0,-0.616,0),Vector3(0,-0.616,0)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer514]);
HAnimDisplacer515 := THAnimDisplacerNode.Create;
HAnimDisplacer515.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer515.SetCoordIndex([34]);
HAnimDisplacer515.SetDisplacements([Vector3(-0.197,-0.702,0.078)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer515]);
HAnimDisplacer516 := THAnimDisplacerNode.Create;
HAnimDisplacer516.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer516.SetCoordIndex([1,8,12,34]);
HAnimDisplacer516.SetDisplacements([Vector3(-0.473,-0.03,-0.642),Vector3(-1.14,0,-1.022),Vector3(-0.583,-0.05,-0.383),Vector3(-1.176,0.13,-0.375)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer516]);
HAnimDisplacer517 := THAnimDisplacerNode.Create;
HAnimDisplacer517.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer517.SetCoordIndex([5,16,18,32,33,34]);
HAnimDisplacer517.SetDisplacements([Vector3(0,0,0.234),Vector3(0,0,0.152),Vector3(0,0,0.084),Vector3(0,0,0.414),Vector3(0,0,0.109),Vector3(0.835,0,1.064)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer517]);
HAnimDisplacer518 := THAnimDisplacerNode.Create;
HAnimDisplacer518.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer518.SetCoordIndex([5,34]);
HAnimDisplacer518.SetDisplacements([Vector3(0,0,0.163),Vector3(0.909,0,0.46)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer518]);
HAnimDisplacer519 := THAnimDisplacerNode.Create;
HAnimDisplacer519.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer519.SetCoordIndex([5]);
HAnimDisplacer519.SetDisplacements([Vector3(0,-0.083,-0.001)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer519]);
HAnimDisplacer520 := THAnimDisplacerNode.Create;
HAnimDisplacer520.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer520.SetCoordIndex([18,34]);
HAnimDisplacer520.SetDisplacements([Vector3(-1.335,-0.029,-0.124),Vector3(-0.974,0.009,0.026)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer520]);
HAnimDisplacer521 := THAnimDisplacerNode.Create;
HAnimDisplacer521.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer521.SetCoordIndex([34]);
HAnimDisplacer521.SetDisplacements([Vector3(-0.125,0,0)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer521]);
HAnimDisplacer522 := THAnimDisplacerNode.Create;
HAnimDisplacer522.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer522.SetCoordIndex([34]);
HAnimDisplacer522.SetDisplacements([Vector3(0.521,0.17,1.038)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer522]);
HAnimDisplacer523 := THAnimDisplacerNode.Create;
HAnimDisplacer523.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer523.SetCoordIndex([2,3,5,14,15,18,22,34]);
HAnimDisplacer523.SetDisplacements([Vector3(0,-0.909,0.074),Vector3(0,-2.034,-0.089),Vector3(0,-2.011,-0.01),Vector3(0,-0.688,0),Vector3(0,-1.574,-0.1141),Vector3(0,-1.34,0.088),Vector3(0,-0.817,0),Vector3(0,-0.736,0)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer523]);
HAnimDisplacer524 := THAnimDisplacerNode.Create;
HAnimDisplacer524.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer524.SetCoordIndex([25,26,32,33]);
HAnimDisplacer524.SetDisplacements([Vector3(0.078,0.5523,0),Vector3(0,0.376,0),Vector3(0.146,0.2645,0),Vector3(0,0.4707,0)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer524]);
HAnimDisplacer525 := THAnimDisplacerNode.Create;
HAnimDisplacer525.NameField := 'right_cheek_morphinterpolator';
HAnimDisplacer525.SetCoordIndex([25,26,33]);
HAnimDisplacer525.SetDisplacements([Vector3(0,0.2937,0),Vector3(0,0.2937,0),Vector3(0,0.5019,0)]);
{ .AddDisplacers }
HAnimSegment502.SetDisplacers([HAnimDisplacer525]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment502]);
HAnimSegment526 := THAnimSegmentNode.Create;
HAnimSegment526.NameField := 'right_dorsum';
Transform527 := TTransformNode.Create;
Transform527.Translation := Vector3(-0.7065,14.64,14.87);
Shape528 := TShapeNode.Create;
Appearance529 := TAppearanceNode.Create;
Appearance529 := Appearance97;
{ .SetAppearance }
Shape528.Appearance := Appearance529;
IndexedFaceSet530 := TIndexedFaceSetNode.Create;
IndexedFaceSet530.SetCoordIndex([3,4,1,-1,1,0,3,-1,5,2,1,-1,1,4,5,-1]);
IndexedFaceSet530.CreaseAngle := 3.14159;
IndexedFaceSet530.Solid := False;
IndexedFaceSet530.SetTexCoordIndex([3,4,1,-1,1,0,3,-1,5,2,1,-1,1,4,5,-1]);
TextureCoordinate531 := TTextureCoordinateNode.Create;
TextureCoordinate531.SetPoint([Vector2(0.2534,0.8152),Vector2(0.2534,0.767),Vector2(0.2528,0.7186),Vector2(0.2671,0.7978),Vector2(0.268,0.7555),Vector2(0.2641,0.7133)]);
{ .SetTexCoord }
IndexedFaceSet530.TexCoord := TextureCoordinate531;
Coordinate532 := TCoordinateNode.Create;
Coordinate532.SetPoint([Vector3(0.2793,2.722,-0.1346),Vector3(0.471,0.1584,-0.08532),Vector3(0.25,-2.447,0.6076),Vector3(-0.471,1.797,-0.6076),Vector3(-0.4116,-0.459,-0.556),Vector3(-0.352,-2.722,-0.252)]);
{ .SetCoord }
IndexedFaceSet530.Coord := Coordinate532;
{ .SetGeometry }
Shape528.Geometry := IndexedFaceSet530;
{ .AddChild }
Transform527.AddChildren([Shape528]);
{ .AddChildren }
HAnimSegment526.AddChildren([Transform527]);
Coordinate533 := TCoordinateNode.Create;
Coordinate533 := Coordinate532;
{ .SetCoord }
HAnimSegment526.Coord := Coordinate533;
HAnimDisplacer534 := THAnimDisplacerNode.Create;
HAnimDisplacer534.NameField := 'right_dorsum_morphinterpolator';
HAnimDisplacer534.SetCoordIndex([5]);
HAnimDisplacer534.SetDisplacements([Vector3(0,0.838,0)]);
{ .AddDisplacers }
HAnimSegment526.SetDisplacers([HAnimDisplacer534]);
HAnimDisplacer535 := THAnimDisplacerNode.Create;
HAnimDisplacer535.NameField := 'right_dorsum_morphinterpolator';
HAnimDisplacer535.SetCoordIndex([4]);
HAnimDisplacer535.SetDisplacements([Vector3(0,0.7543,0)]);
{ .AddDisplacers }
HAnimSegment526.SetDisplacers([HAnimDisplacer535]);
HAnimDisplacer536 := THAnimDisplacerNode.Create;
HAnimDisplacer536.NameField := 'right_dorsum_morphinterpolator';
HAnimDisplacer536.SetCoordIndex([5]);
HAnimDisplacer536.SetDisplacements([Vector3(0,0.376,0)]);
{ .AddDisplacers }
HAnimSegment526.SetDisplacers([HAnimDisplacer536]);
HAnimDisplacer537 := THAnimDisplacerNode.Create;
HAnimDisplacer537.NameField := 'right_dorsum_morphinterpolator';
HAnimDisplacer537.SetCoordIndex([5]);
HAnimDisplacer537.SetDisplacements([Vector3(0,0.293,0)]);
{ .AddDisplacers }
HAnimSegment526.SetDisplacers([HAnimDisplacer537]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment526]);
HAnimSegment538 := THAnimSegmentNode.Create;
HAnimSegment538.NameField := 'right_ear';
Transform539 := TTransformNode.Create;
Transform539.Translation := Vector3(-12.49,15.99,1.017);
Shape540 := TShapeNode.Create;
Appearance541 := TAppearanceNode.Create;
Appearance541 := Appearance97;
{ .SetAppearance }
Shape540.Appearance := Appearance541;
IndexedFaceSet542 := TIndexedFaceSetNode.Create;
IndexedFaceSet542.SetCoordIndex([6,0,2,-1,5,2,1,-1,1,4,5,-1,2,0,1,-1,0,6,7,-1,7,3,0,-1,4,1,0,-1,0,3,4,-1]);
IndexedFaceSet542.CreaseAngle := 3.14159;
IndexedFaceSet542.Solid := False;
IndexedFaceSet542.SetTexCoordIndex([0,1,2,-1,5,2,3,-1,3,4,5,-1,2,1,3,-1,1,0,6,-1,6,7,1,-1,4,3,1,-1,1,7,4,-1]);
TextureCoordinate543 := TTextureCoordinateNode.Create;
TextureCoordinate543.SetPoint([Vector2(0.4392,0.6356),Vector2(0.4239,0.6408),Vector2(0.4239,0.6387),Vector2(0.412,0.6504),Vector2(0.4123,0.664),Vector2(0.4239,0.6648),Vector2(0.4352,0.6651),Vector2(0.4267,0.6717)]);
{ .SetTexCoord }
IndexedFaceSet542.TexCoord := TextureCoordinate543;
Coordinate544 := TCoordinateNode.Create;
Coordinate544.SetPoint([Vector3(-1.104,-2.879,-0.3646),Vector3(-1.92,-0.7197,-2.765),Vector3(-0.3083,-3.342,-0.3477),Vector3(-1.674,4.039,0.222),Vector3(-2.14,2.313,-2.716),Vector3(-0.349,2.504,-0.3477),Vector3(2.14,-4.039,2.765),Vector3(0.2989,2.568,1.943)]);
{ .SetCoord }
IndexedFaceSet542.Coord := Coordinate544;
{ .SetGeometry }
Shape540.Geometry := IndexedFaceSet542;
{ .AddChild }
Transform539.AddChildren([Shape540]);
{ .AddChildren }
HAnimSegment538.AddChildren([Transform539]);
Coordinate545 := TCoordinateNode.Create;
Coordinate545 := Coordinate544;
{ .SetCoord }
HAnimSegment538.Coord := Coordinate545;
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment538]);
HAnimSegment546 := THAnimSegmentNode.Create;
HAnimSegment546.NameField := 'right_eyebrow';
Transform547 := TTransformNode.Create;
Transform547.Translation := Vector3(-5.691,19.58,13.13);
Shape548 := TShapeNode.Create;
Appearance549 := TAppearanceNode.Create;
Appearance549 := Appearance97;
{ .SetAppearance }
Shape548.Appearance := Appearance549;
IndexedFaceSet550 := TIndexedFaceSetNode.Create;
IndexedFaceSet550.SetCoordIndex([5,8,7,-1,7,1,5,-1,6,4,0,-1,7,6,0,-1,0,1,7,-1,2,3,0,-1,0,4,2,-1,3,1,0,-1]);
IndexedFaceSet550.CreaseAngle := 3.14159;
IndexedFaceSet550.Solid := False;
IndexedFaceSet550.SetTexCoordIndex([5,8,7,-1,7,1,5,-1,6,4,0,-1,7,6,0,-1,0,1,7,-1,2,3,0,-1,0,4,2,-1,3,1,0,-1]);
TextureCoordinate551 := TTextureCoordinateNode.Create;
TextureCoordinate551.SetPoint([Vector2(0.3395,0.8606),Vector2(0.3992,0.8783),Vector2(0.2728,0.8741),Vector2(0.3391,0.876),Vector2(0.274,0.8322),Vector2(0.4299,0.8825),Vector2(0.3402,0.8534),Vector2(0.3979,0.8641),Vector2(0.4266,0.8643)]);
{ .SetTexCoord }
IndexedFaceSet550.TexCoord := TextureCoordinate551;
Coordinate552 := TCoordinateNode.Create;
Coordinate552.SetPoint([Vector3(0.6206,0.2925,1.523),Vector3(-2.547,1.129,-0.8682),Vector3(4.175,0.9255,2.806),Vector3(0.6464,1.103,1.5),Vector3(4.104,-1.337,2.665),Vector3(-4.175,1.337,-2.599),Vector3(0.6118,-0.2218,1.466),Vector3(-2.366,0.3082,-0.9723),Vector3(-4.011,0.3542,-2.806)]);
{ .SetCoord }
IndexedFaceSet550.Coord := Coordinate552;
{ .SetGeometry }
Shape548.Geometry := IndexedFaceSet550;
{ .AddChild }
Transform547.AddChildren([Shape548]);
{ .AddChildren }
HAnimSegment546.AddChildren([Transform547]);
Coordinate553 := TCoordinateNode.Create;
Coordinate553 := Coordinate552;
{ .SetCoord }
HAnimSegment546.Coord := Coordinate553;
HAnimDisplacer554 := THAnimDisplacerNode.Create;
HAnimDisplacer554.NameField := 'right_eyebrow_morphinterpolator';
HAnimDisplacer554.SetCoordIndex([0,1,3,4,5,6,7,8]);
HAnimDisplacer554.SetDisplacements([Vector3(0.5564,-0.5065,0),Vector3(0,-0.094,0),Vector3(0.5566,-0.5069,0),Vector3(0.303,-0.395,0),Vector3(0,-0.094,0),Vector3(0.5562,-0.5066,0),Vector3(0,-0.0941,0),Vector3(0,-0.0942,0)]);
{ .AddDisplacers }
HAnimSegment546.SetDisplacers([HAnimDisplacer554]);
HAnimDisplacer555 := THAnimDisplacerNode.Create;
HAnimDisplacer555.NameField := 'right_eyebrow_morphinterpolator';
HAnimDisplacer555.SetCoordIndex([0,1,3,4,6,7]);
HAnimDisplacer555.SetDisplacements([Vector3(0,0.3842,0),Vector3(0,0.136,0),Vector3(0,0.384,0),Vector3(0,0.3843,0),Vector3(0,0.3842,0),Vector3(0,0.1354,0)]);
{ .AddDisplacers }
HAnimSegment546.SetDisplacers([HAnimDisplacer555]);
HAnimDisplacer556 := THAnimDisplacerNode.Create;
HAnimDisplacer556.NameField := 'right_eyebrow_morphinterpolator';
HAnimDisplacer556.SetCoordIndex([1,5,7,8]);
HAnimDisplacer556.SetDisplacements([Vector3(0,0.655,0),Vector3(0,0.268,0),Vector3(0,0.6547,0),Vector3(0,0.2686,0)]);
{ .AddDisplacers }
HAnimSegment546.SetDisplacers([HAnimDisplacer556]);
HAnimDisplacer557 := THAnimDisplacerNode.Create;
HAnimDisplacer557.NameField := 'right_eyebrow_morphinterpolator';
HAnimDisplacer557.SetCoordIndex([7,8]);
HAnimDisplacer557.SetDisplacements([Vector3(0,-0.4631,0),Vector3(0,-0.4632,0)]);
{ .AddDisplacers }
HAnimSegment546.SetDisplacers([HAnimDisplacer557]);
HAnimDisplacer558 := THAnimDisplacerNode.Create;
HAnimDisplacer558.NameField := 'right_eyebrow_morphinterpolator';
HAnimDisplacer558.SetCoordIndex([6]);
HAnimDisplacer558.SetDisplacements([Vector3(0,0.4975,0)]);
{ .AddDisplacers }
HAnimSegment546.SetDisplacers([HAnimDisplacer558]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment546]);
HAnimSegment559 := THAnimSegmentNode.Create;
HAnimSegment559.NameField := 'right_forehead';
Transform560 := TTransformNode.Create;
Transform560.Translation := Vector3(-6.652,27.61,9.229);
Shape561 := TShapeNode.Create;
Appearance562 := TAppearanceNode.Create;
Appearance562 := Appearance97;
{ .SetAppearance }
Shape561.Appearance := Appearance562;
IndexedFaceSet563 := TIndexedFaceSetNode.Create;
IndexedFaceSet563.SetCoordIndex([1,4,13,-1,13,9,1,-1,3,9,2,-1,3,15,0,-1,15,14,0,-1,0,14,16,-1,1,0,16,-1,16,20,1,-1,3,6,17,-1,17,15,3,-1,2,5,6,-1,6,3,2,-1,6,8,18,-1,18,17,6,-1,5,7,8,-1,8,6,5,-1,9,13,10,-1,10,2,9,-1,1,9,3,-1,3,0,1,-1,1,20,19,-1,19,4,1,-1,2,10,11,-1,11,5,2,-1,5,11,12,-1,12,7,5,-1]);
IndexedFaceSet563.CreaseAngle := 3.14159;
IndexedFaceSet563.Solid := False;
IndexedFaceSet563.SetTexCoordIndex([1,4,13,-1,13,9,1,-1,3,9,0,-1,3,15,2,-1,15,14,2,-1,2,14,16,-1,1,2,16,-1,16,20,1,-1,3,6,17,-1,17,15,3,-1,0,5,6,-1,6,3,0,-1,6,8,18,-1,18,17,6,-1,5,7,8,-1,8,6,5,-1,9,13,10,-1,10,0,9,-1,1,9,3,-1,3,2,1,-1,1,20,19,-1,19,4,1,-1,0,10,11,-1,11,5,0,-1,5,11,12,-1,12,7,5,-1]);
TextureCoordinate564 := TTextureCoordinateNode.Create;
TextureCoordinate564.SetPoint([Vector2(0.3563,0.9819),Vector2(0.3371,0.9436),Vector2(0.414,0.9365),Vector2(0.428,0.9618),Vector2(0.2706,0.9459),Vector2(0.3807,0.9869),Vector2(0.434,0.9653),Vector2(0.3786,0.9951),Vector2(0.4425,0.9551),Vector2(0.3372,0.9707),Vector2(0.3002,0.9788),Vector2(0.3015,0.9807),Vector2(0.3016,0.9833),Vector2(0.2804,0.9652),Vector2(0.4299,0.8825),Vector2(0.4655,0.9081),Vector2(0.3992,0.8783),Vector2(0.4676,0.8967),Vector2(0.465,0.9097),Vector2(0.2728,0.8741),Vector2(0.3391,0.876)]);
{ .SetTexCoord }
IndexedFaceSet563.TexCoord := TextureCoordinate564;
Coordinate565 := TCoordinateNode.Create;
Coordinate565.SetPoint([Vector3(-2.366,-3.832,2.607),Vector3(1.721,-3.37,5.298),Vector3(0.9278,3.698,2.337),Vector3(-2.798,0.5048,1.078),Vector3(5.256,-3.235,6.945),Vector3(-0.1169,5.415,-1.676),Vector3(-3.513,2.123,-2.845),Vector3(-0.04584,5.238,-6.945),Vector3(-3.382,0.4603,-6.945),Vector3(1.306,1.607,4.614),Vector3(4.278,5.326,2.844),Vector3(4.148,6.951,-0.7431),Vector3(4.148,7.108,-6.945),Vector3(4.686,2.054,6.111),Vector3(-3.214,-6.697,1.298),Vector3(-4.876,-4.833,-1.108),Vector3(-1.586,-6.904,3.028),Vector3(-5.256,-4.053,-3.68),Vector3(-4.869,-4.024,-6.945),Vector3(5.136,-7.108,6.703),Vector3(1.607,-6.931,5.397)]);
{ .SetCoord }
IndexedFaceSet563.Coord := Coordinate565;
{ .SetGeometry }
Shape561.Geometry := IndexedFaceSet563;
{ .AddChild }
Transform560.AddChildren([Shape561]);
{ .AddChildren }
HAnimSegment559.AddChildren([Transform560]);
Coordinate566 := TCoordinateNode.Create;
Coordinate566 := Coordinate565;
{ .SetCoord }
HAnimSegment559.Coord := Coordinate566;
HAnimDisplacer567 := THAnimDisplacerNode.Create;
HAnimDisplacer567.NameField := 'right_forehead_morphinterpolator';
HAnimDisplacer567.SetCoordIndex([14,16,20]);
HAnimDisplacer567.SetDisplacements([Vector3(0,-0.094,0),Vector3(0,-0.094,0),Vector3(0.557,-0.506,0)]);
{ .AddDisplacers }
HAnimSegment559.SetDisplacers([HAnimDisplacer567]);
HAnimDisplacer568 := THAnimDisplacerNode.Create;
HAnimDisplacer568.NameField := 'right_forehead_morphinterpolator';
HAnimDisplacer568.SetCoordIndex([16,20]);
HAnimDisplacer568.SetDisplacements([Vector3(0,0.135,0),Vector3(0,0.384,0)]);
{ .AddDisplacers }
HAnimSegment559.SetDisplacers([HAnimDisplacer568]);
HAnimDisplacer569 := THAnimDisplacerNode.Create;
HAnimDisplacer569.NameField := 'right_forehead_morphinterpolator';
HAnimDisplacer569.SetCoordIndex([14,16]);
HAnimDisplacer569.SetDisplacements([Vector3(0,0.269,0),Vector3(0,0.654,0)]);
{ .AddDisplacers }
HAnimSegment559.SetDisplacers([HAnimDisplacer569]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment559]);
HAnimSegment570 := THAnimSegmentNode.Create;
HAnimSegment570.NameField := 'right_lower_eyelid';
Transform571 := TTransformNode.Create;
Transform571.Translation := Vector3(-6.11,16.45,11.32);
Shape572 := TShapeNode.Create;
Appearance573 := TAppearanceNode.Create;
Appearance573 := Appearance97;
{ .SetAppearance }
Shape572.Appearance := Appearance573;
IndexedFaceSet574 := TIndexedFaceSetNode.Create;
IndexedFaceSet574.SetCoordIndex([8,9,10,-1,10,3,8,-1,3,0,7,-1,7,8,3,-1,13,1,6,-1,6,14,13,-1,0,2,5,-1,5,7,0,-1,11,12,5,-1,5,2,11,-1,4,9,6,-1,6,1,4,-1,10,9,4,-1]);
IndexedFaceSet574.CreaseAngle := 3.14159;
IndexedFaceSet574.Solid := False;
IndexedFaceSet574.SetTexCoordIndex([8,9,10,-1,10,0,8,-1,0,2,7,-1,7,8,0,-1,13,3,6,-1,6,14,13,-1,2,4,5,-1,5,7,2,-1,11,12,5,-1,5,4,11,-1,1,9,6,-1,6,3,1,-1,10,9,1,-1]);
TextureCoordinate575 := TTextureCoordinateNode.Create;
TextureCoordinate575.SetPoint([Vector2(0.3777,0.7936),Vector2(0.3315,0.7948),Vector2(0.3916,0.7984),Vector2(0.309,0.8013),Vector2(0.4011,0.8053),Vector2(0.4279,0.7939),Vector2(0.301,0.7815),Vector2(0.3993,0.7753),Vector2(0.3692,0.7714),Vector2(0.3287,0.7742),Vector2(0.344,0.7945),Vector2(0.4198,0.8261),Vector2(0.4335,0.819),Vector2(0.2981,0.8094),Vector2(0.2845,0.7889)]);
{ .SetTexCoord }
IndexedFaceSet574.TexCoord := TextureCoordinate575;
Coordinate576 := TCoordinateNode.Create;
Coordinate576.SetPoint([Vector3(-1.719,-0.0007954,-0.6346),Vector3(2.666,0.1549,1.996),Vector3(-2.315,0.3494,-0.8744),Vector3(-0.989,-0.2676,0.1056),Vector3(1.449,-0.2205,1.411),Vector3(-3.651,-0.24,-2.494),Vector3(3.04,-0.8628,1.994),Vector3(-2.113,-1.162,-0.9625),Vector3(-0.5806,-1.427,0.2034),Vector3(1.577,-1.266,1.24),Vector3(0.7878,-0.2335,1.055),Vector3(-3.25,1.427,-1.433),Vector3(-3.946,1.094,-2.536),Vector3(3.174,0.6164,2.536),Vector3(3.946,-0.4586,2.476)]);
{ .SetCoord }
IndexedFaceSet574.Coord := Coordinate576;
{ .SetGeometry }
Shape572.Geometry := IndexedFaceSet574;
{ .AddChild }
Transform571.AddChildren([Shape572]);
{ .AddChildren }
HAnimSegment570.AddChildren([Transform571]);
Coordinate577 := TCoordinateNode.Create;
Coordinate577 := Coordinate576;
{ .SetCoord }
HAnimSegment570.Coord := Coordinate577;
HAnimDisplacer578 := THAnimDisplacerNode.Create;
HAnimDisplacer578.NameField := 'right_lower_eyelid_morphinterpolator';
HAnimDisplacer578.SetCoordIndex([0,1,2,4]);
HAnimDisplacer578.SetDisplacements([Vector3(0,0.1171,0.1997),Vector3(0,0.2271,0.251),Vector3(0,0.2126,0.0762),Vector3(-0.165,0.1045,0)]);
{ .AddDisplacers }
HAnimSegment570.SetDisplacers([HAnimDisplacer578]);
HAnimDisplacer579 := THAnimDisplacerNode.Create;
HAnimDisplacer579.NameField := 'right_lower_eyelid_morphinterpolator';
HAnimDisplacer579.SetCoordIndex([5,6,7,8,9,14]);
HAnimDisplacer579.SetDisplacements([Vector3(0,0.1005,0.079),Vector3(0,0.1344,-0.107),Vector3(-0.299,0.3808,-0.1835),Vector3(0,0.268,0.0997),Vector3(0,0.2684,0),Vector3(0,0.067,-0.082)]);
{ .AddDisplacers }
HAnimSegment570.SetDisplacers([HAnimDisplacer579]);
HAnimDisplacer580 := THAnimDisplacerNode.Create;
HAnimDisplacer580.NameField := 'right_lower_eyelid_morphinterpolator';
HAnimDisplacer580.SetCoordIndex([0,1,2,4]);
HAnimDisplacer580.SetDisplacements([Vector3(0,0.1171,0.1997),Vector3(0,0.2271,0.251),Vector3(0,0.2126,0.0762),Vector3(-0.165,0.1045,0)]);
{ .AddDisplacers }
HAnimSegment570.SetDisplacers([HAnimDisplacer580]);
HAnimDisplacer581 := THAnimDisplacerNode.Create;
HAnimDisplacer581.NameField := 'right_lower_eyelid_morphinterpolator';
HAnimDisplacer581.SetCoordIndex([11]);
HAnimDisplacer581.SetDisplacements([Vector3(0,-0.349,0)]);
{ .AddDisplacers }
HAnimSegment570.SetDisplacers([HAnimDisplacer581]);
HAnimDisplacer582 := THAnimDisplacerNode.Create;
HAnimDisplacer582.NameField := 'right_lower_eyelid_morphinterpolator';
HAnimDisplacer582.SetCoordIndex([0,1,2,3,4,10]);
HAnimDisplacer582.SetDisplacements([Vector3(0,0.3018,0),Vector3(0,0.1101,0),Vector3(0.123,0.2262,0),Vector3(0,0.3018,0),Vector3(0,0.1513,0),Vector3(0,0.1512,0)]);
{ .AddDisplacers }
HAnimSegment570.SetDisplacers([HAnimDisplacer582]);
HAnimDisplacer583 := THAnimDisplacerNode.Create;
HAnimDisplacer583.NameField := 'right_lower_eyelid_morphinterpolator';
HAnimDisplacer583.SetCoordIndex([0,1,2,3,4,10,11,12]);
HAnimDisplacer583.SetDisplacements([Vector3(0,0.6387,0.7019),Vector3(0,0.3839,0.263),Vector3(0,0.499,0.4721),Vector3(0,0.7235,0.3988),Vector3(0,0.6387,0.398),Vector3(0,0.6386,0.399),Vector3(0,-0.078,0),Vector3(0,-0.078,0)]);
{ .AddDisplacers }
HAnimSegment570.SetDisplacers([HAnimDisplacer583]);
HAnimDisplacer584 := THAnimDisplacerNode.Create;
HAnimDisplacer584.NameField := 'right_lower_eyelid_morphinterpolator';
HAnimDisplacer584.SetCoordIndex([13]);
HAnimDisplacer584.SetDisplacements([Vector3(0,0.4976,0)]);
{ .AddDisplacers }
HAnimSegment570.SetDisplacers([HAnimDisplacer584]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment570]);
HAnimSegment585 := THAnimSegmentNode.Create;
HAnimSegment585.NameField := 'right_lower_vermillion_lip';
Transform586 := TTransformNode.Create;
Transform586.Translation := Vector3(-1.788,8.405,13.04);
Shape587 := TShapeNode.Create;
Appearance588 := TAppearanceNode.Create;
Appearance588 := Appearance97;
{ .SetAppearance }
Shape587.Appearance := Appearance588;
IndexedFaceSet589 := TIndexedFaceSetNode.Create;
IndexedFaceSet589.SetCoordIndex([2,0,1,-1]);
IndexedFaceSet589.CreaseAngle := 3.14159;
IndexedFaceSet589.Solid := False;
IndexedFaceSet589.SetTexCoordIndex([2,0,1,-1]);
TextureCoordinate590 := TTextureCoordinateNode.Create;
TextureCoordinate590.SetPoint([Vector2(0.2548,0.6554),Vector2(0.3007,0.651),Vector2(0.2652,0.6384)]);
{ .SetTexCoord }
IndexedFaceSet589.TexCoord := TextureCoordinate590;
Coordinate591 := TCoordinateNode.Create;
Coordinate591.SetPoint([Vector3(1.218,0.4506,0.603),Vector3(-1.218,0.219,-0.603),Vector3(1.154,-0.4506,0.3592)]);
{ .SetCoord }
IndexedFaceSet589.Coord := Coordinate591;
{ .SetGeometry }
Shape587.Geometry := IndexedFaceSet589;
{ .AddChild }
Transform586.AddChildren([Shape587]);
{ .AddChildren }
HAnimSegment585.AddChildren([Transform586]);
Coordinate592 := TCoordinateNode.Create;
Coordinate592 := Coordinate591;
{ .SetCoord }
HAnimSegment585.Coord := Coordinate592;
HAnimDisplacer593 := THAnimDisplacerNode.Create;
HAnimDisplacer593.NameField := 'right_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer593.SetCoordIndex([0,1,2]);
HAnimDisplacer593.SetDisplacements([Vector3(0,0.3821,0.435),Vector3(-0.591,1.323,0.1066),Vector3(0,0.7896,0.4659)]);
{ .AddDisplacers }
HAnimSegment585.SetDisplacers([HAnimDisplacer593]);
HAnimDisplacer594 := THAnimDisplacerNode.Create;
HAnimDisplacer594.NameField := 'right_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer594.SetCoordIndex([0,1,2]);
HAnimDisplacer594.SetDisplacements([Vector3(0,0.187,0),Vector3(0,-0.1372,0),Vector3(0,0.6497,0.364)]);
{ .AddDisplacers }
HAnimSegment585.SetDisplacers([HAnimDisplacer594]);
HAnimDisplacer595 := THAnimDisplacerNode.Create;
HAnimDisplacer595.NameField := 'right_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer595.SetCoordIndex([0,1,2]);
HAnimDisplacer595.SetDisplacements([Vector3(0,-0.0896,0.533),Vector3(-0.379,0.396,0.1527),Vector3(0,0.6332,0.8798)]);
{ .AddDisplacers }
HAnimSegment585.SetDisplacers([HAnimDisplacer595]);
HAnimDisplacer596 := THAnimDisplacerNode.Create;
HAnimDisplacer596.NameField := 'right_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer596.SetCoordIndex([0,2]);
HAnimDisplacer596.SetDisplacements([Vector3(0,-0.6156,0),Vector3(0,-0.6154,0)]);
{ .AddDisplacers }
HAnimSegment585.SetDisplacers([HAnimDisplacer596]);
HAnimDisplacer597 := THAnimDisplacerNode.Create;
HAnimDisplacer597.NameField := 'right_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer597.SetCoordIndex([0,1,2]);
HAnimDisplacer597.SetDisplacements([Vector3(0,-0.0368,0.837),Vector3(-0.197,-0.7014,0.0777),Vector3(0,0.5213,1.2488)]);
{ .AddDisplacers }
HAnimSegment585.SetDisplacers([HAnimDisplacer597]);
HAnimDisplacer598 := THAnimDisplacerNode.Create;
HAnimDisplacer598.NameField := 'right_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer598.SetCoordIndex([2]);
HAnimDisplacer598.SetDisplacements([Vector3(-1.176,0.13,-0.375)]);
{ .AddDisplacers }
HAnimSegment585.SetDisplacers([HAnimDisplacer598]);
HAnimDisplacer599 := THAnimDisplacerNode.Create;
HAnimDisplacer599.NameField := 'right_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer599.SetCoordIndex([0,1,2]);
HAnimDisplacer599.SetDisplacements([Vector3(-0.2642,-0.7179,0.823),Vector3(0.8355,0,1.0637),Vector3(0.101,-0.5994,0.7018)]);
{ .AddDisplacers }
HAnimSegment585.SetDisplacers([HAnimDisplacer599]);
HAnimDisplacer600 := THAnimDisplacerNode.Create;
HAnimDisplacer600.NameField := 'right_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer600.SetCoordIndex([0,2]);
HAnimDisplacer600.SetDisplacements([Vector3(0,-0.3795,0.1337),Vector3(0,-0.21,0)]);
{ .AddDisplacers }
HAnimSegment585.SetDisplacers([HAnimDisplacer600]);
HAnimDisplacer601 := THAnimDisplacerNode.Create;
HAnimDisplacer601.NameField := 'right_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer601.SetCoordIndex([0,1,2]);
HAnimDisplacer601.SetDisplacements([Vector3(0,-0.3959,0.859),Vector3(0.9097,0,0.4597),Vector3(0,-0.2497,0.9748)]);
{ .AddDisplacers }
HAnimSegment585.SetDisplacers([HAnimDisplacer601]);
HAnimDisplacer602 := THAnimDisplacerNode.Create;
HAnimDisplacer602.NameField := 'right_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer602.SetCoordIndex([1]);
HAnimDisplacer602.SetDisplacements([Vector3(-0.973,0.0092,0.0257)]);
{ .AddDisplacers }
HAnimSegment585.SetDisplacers([HAnimDisplacer602]);
HAnimDisplacer603 := THAnimDisplacerNode.Create;
HAnimDisplacer603.NameField := 'right_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer603.SetCoordIndex([0,1,2]);
HAnimDisplacer603.SetDisplacements([Vector3(0,-0.0594,0.1828),Vector3(-0.125,0,0),Vector3(0,0.633,0.3625)]);
{ .AddDisplacers }
HAnimSegment585.SetDisplacers([HAnimDisplacer603]);
HAnimDisplacer604 := THAnimDisplacerNode.Create;
HAnimDisplacer604.NameField := 'right_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer604.SetCoordIndex([0,1,2]);
HAnimDisplacer604.SetDisplacements([Vector3(0.042,-0.058,1.082),Vector3(0.5211,0.1705,1.038),Vector3(-0.1612,0.0641,0.9158)]);
{ .AddDisplacers }
HAnimSegment585.SetDisplacers([HAnimDisplacer604]);
HAnimDisplacer605 := THAnimDisplacerNode.Create;
HAnimDisplacer605.NameField := 'right_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer605.SetCoordIndex([0,2]);
HAnimDisplacer605.SetDisplacements([Vector3(0,-0.5685,0),Vector3(0,-0.5684,0)]);
{ .AddDisplacers }
HAnimSegment585.SetDisplacers([HAnimDisplacer605]);
HAnimDisplacer606 := THAnimDisplacerNode.Create;
HAnimDisplacer606.NameField := 'right_lower_vermillion_lip_morphinterpolator';
HAnimDisplacer606.SetCoordIndex([0,1,2]);
HAnimDisplacer606.SetDisplacements([Vector3(-0.176,-2.4736,0.049),Vector3(0,-0.7362,0),Vector3(-0.1963,-2.4594,0.002)]);
{ .AddDisplacers }
HAnimSegment585.SetDisplacers([HAnimDisplacer606]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment585]);
HAnimSegment607 := THAnimSegmentNode.Create;
HAnimSegment607.NameField := 'right_nasolabial_cheek';
Transform608 := TTransformNode.Create;
Transform608.Translation := Vector3(-2.021,10.27,13.53);
Shape609 := TShapeNode.Create;
Appearance610 := TAppearanceNode.Create;
Appearance610 := Appearance97;
{ .SetAppearance }
Shape609.Appearance := Appearance610;
IndexedFaceSet611 := TIndexedFaceSetNode.Create;
IndexedFaceSet611.SetCoordIndex([0,4,3,-1,3,5,0,-1,5,2,1,-1,1,0,5,-1]);
IndexedFaceSet611.CreaseAngle := 3.14159;
IndexedFaceSet611.Solid := False;
IndexedFaceSet611.SetTexCoordIndex([0,4,3,-1,3,5,0,-1,5,2,1,-1,1,0,5,-1]);
TextureCoordinate612 := TTextureCoordinateNode.Create;
TextureCoordinate612.SetPoint([Vector2(0.2661,0.696),Vector2(0.2636,0.664),Vector2(0.3007,0.651),Vector2(0.2727,0.7092),Vector2(0.2641,0.7133),Vector2(0.2788,0.6949)]);
{ .SetTexCoord }
IndexedFaceSet611.TexCoord := TextureCoordinate612;
Coordinate613 := TCoordinateNode.Create;
Coordinate613.SetPoint([Vector3(0.8548,0.741,0.5666),Vector3(0.9852,-0.962,1.035),Vector3(-0.9852,-1.648,-1.094),Vector3(0.5035,1.438,0.4388),Vector3(0.9626,1.648,1.094),Vector3(0.1761,0.6814,0.2329)]);
{ .SetCoord }
IndexedFaceSet611.Coord := Coordinate613;
{ .SetGeometry }
Shape609.Geometry := IndexedFaceSet611;
{ .AddChild }
Transform608.AddChildren([Shape609]);
{ .AddChildren }
HAnimSegment607.AddChildren([Transform608]);
Coordinate614 := TCoordinateNode.Create;
Coordinate614 := Coordinate613;
{ .SetCoord }
HAnimSegment607.Coord := Coordinate614;
HAnimDisplacer615 := THAnimDisplacerNode.Create;
HAnimDisplacer615.NameField := 'right_nasolabial_cheek_morphinterpolator';
HAnimDisplacer615.SetCoordIndex([0,1,2,3,4,5]);
HAnimDisplacer615.SetDisplacements([Vector3(0,0.838,0),Vector3(0,0.5164,0),Vector3(-0.5908,1.3226,0.1063),Vector3(0,0.838,0),Vector3(0,0.838,0),Vector3(0,0.8376,0)]);
{ .AddDisplacers }
HAnimSegment607.SetDisplacers([HAnimDisplacer615]);
HAnimDisplacer616 := THAnimDisplacerNode.Create;
HAnimDisplacer616.NameField := 'right_nasolabial_cheek_morphinterpolator';
HAnimDisplacer616.SetCoordIndex([1,2]);
HAnimDisplacer616.SetDisplacements([Vector3(0,0.0967,0),Vector3(0,-0.137,0)]);
{ .AddDisplacers }
HAnimSegment607.SetDisplacers([HAnimDisplacer616]);
HAnimDisplacer617 := THAnimDisplacerNode.Create;
HAnimDisplacer617.NameField := 'right_nasolabial_cheek_morphinterpolator';
HAnimDisplacer617.SetCoordIndex([1,2]);
HAnimDisplacer617.SetDisplacements([Vector3(0,-0.069,0.044),Vector3(-0.3788,0.396,0.1524)]);
{ .AddDisplacers }
HAnimSegment607.SetDisplacers([HAnimDisplacer617]);
HAnimDisplacer618 := THAnimDisplacerNode.Create;
HAnimDisplacer618.NameField := 'right_nasolabial_cheek_morphinterpolator';
HAnimDisplacer618.SetCoordIndex([1,2]);
HAnimDisplacer618.SetDisplacements([Vector3(0,-0.0221,0.125),Vector3(-0.1968,-0.701,0.077)]);
{ .AddDisplacers }
HAnimSegment607.SetDisplacers([HAnimDisplacer618]);
HAnimDisplacer619 := THAnimDisplacerNode.Create;
HAnimDisplacer619.NameField := 'right_nasolabial_cheek_morphinterpolator';
HAnimDisplacer619.SetCoordIndex([5]);
HAnimDisplacer619.SetDisplacements([Vector3(-1.176,0.13,-0.375)]);
{ .AddDisplacers }
HAnimSegment607.SetDisplacers([HAnimDisplacer619]);
HAnimDisplacer620 := THAnimDisplacerNode.Create;
HAnimDisplacer620.NameField := 'right_nasolabial_cheek_morphinterpolator';
HAnimDisplacer620.SetCoordIndex([1,2,5]);
HAnimDisplacer620.SetDisplacements([Vector3(0.1338,0.1022,0.551),Vector3(0.8357,0,1.0634),Vector3(0,0,0.1091)]);
{ .AddDisplacers }
HAnimSegment607.SetDisplacers([HAnimDisplacer620]);
HAnimDisplacer621 := THAnimDisplacerNode.Create;
HAnimDisplacer621.NameField := 'right_nasolabial_cheek_morphinterpolator';
HAnimDisplacer621.SetCoordIndex([1,2]);
HAnimDisplacer621.SetDisplacements([Vector3(0.0618,0,0.566),Vector3(0.9099,0,0.4594)]);
{ .AddDisplacers }
HAnimSegment607.SetDisplacers([HAnimDisplacer621]);
HAnimDisplacer622 := THAnimDisplacerNode.Create;
HAnimDisplacer622.NameField := 'right_nasolabial_cheek_morphinterpolator';
HAnimDisplacer622.SetCoordIndex([2]);
HAnimDisplacer622.SetDisplacements([Vector3(-0.9728,0.009,0.025)]);
{ .AddDisplacers }
HAnimSegment607.SetDisplacers([HAnimDisplacer622]);
HAnimDisplacer623 := THAnimDisplacerNode.Create;
HAnimDisplacer623.NameField := 'right_nasolabial_cheek_morphinterpolator';
HAnimDisplacer623.SetCoordIndex([1,2]);
HAnimDisplacer623.SetDisplacements([Vector3(0,-0.52,-0.655),Vector3(-0.1248,0,0)]);
{ .AddDisplacers }
HAnimSegment607.SetDisplacers([HAnimDisplacer623]);
HAnimDisplacer624 := THAnimDisplacerNode.Create;
HAnimDisplacer624.NameField := 'right_nasolabial_cheek_morphinterpolator';
HAnimDisplacer624.SetCoordIndex([1,2]);
HAnimDisplacer624.SetDisplacements([Vector3(0.0758,-0.0332,0.261),Vector3(0.5214,0.171,1.0377)]);
{ .AddDisplacers }
HAnimSegment607.SetDisplacers([HAnimDisplacer624]);
HAnimDisplacer625 := THAnimDisplacerNode.Create;
HAnimDisplacer625.NameField := 'right_nasolabial_cheek_morphinterpolator';
HAnimDisplacer625.SetCoordIndex([1,2]);
HAnimDisplacer625.SetDisplacements([Vector3(0,0.2684,0),Vector3(0,-0.736,0)]);
{ .AddDisplacers }
HAnimSegment607.SetDisplacers([HAnimDisplacer625]);
HAnimDisplacer626 := THAnimDisplacerNode.Create;
HAnimDisplacer626.NameField := 'right_nasolabial_cheek_morphinterpolator';
HAnimDisplacer626.SetCoordIndex([0,3,4,5]);
HAnimDisplacer626.SetDisplacements([Vector3(0,0.376,0),Vector3(0.0781,0.552,0),Vector3(0,0.376,0),Vector3(0,0.4706,0)]);
{ .AddDisplacers }
HAnimSegment607.SetDisplacers([HAnimDisplacer626]);
HAnimDisplacer627 := THAnimDisplacerNode.Create;
HAnimDisplacer627.NameField := 'right_nasolabial_cheek_morphinterpolator';
HAnimDisplacer627.SetCoordIndex([0,1,3,4,5]);
HAnimDisplacer627.SetDisplacements([Vector3(0,0.502,0),Vector3(0,0.5016,0),Vector3(0,0.294,0),Vector3(0,0.294,0),Vector3(0,0.5016,0)]);
{ .AddDisplacers }
HAnimSegment607.SetDisplacers([HAnimDisplacer627]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment607]);
HAnimSegment628 := THAnimSegmentNode.Create;
HAnimSegment628.NameField := 'right_nostril';
Transform629 := TTransformNode.Create;
Transform629.Translation := Vector3(-0.7684,11.22,15.04);
Shape630 := TShapeNode.Create;
Appearance631 := TAppearanceNode.Create;
Appearance631 := Appearance97;
{ .SetAppearance }
Shape630.Appearance := Appearance631;
IndexedFaceSet632 := TIndexedFaceSetNode.Create;
IndexedFaceSet632.SetCoordIndex([0,3,2,-1,1,0,2,-1,4,2,3,-1]);
IndexedFaceSet632.CreaseAngle := 3.14159;
IndexedFaceSet632.Solid := False;
IndexedFaceSet632.SetTexCoordIndex([0,3,2,-1,1,0,2,-1,4,2,3,-1]);
TextureCoordinate633 := TTextureCoordinateNode.Create;
TextureCoordinate633.SetPoint([Vector2(0.2538,0.7051),Vector2(0.2511,0.6816),Vector2(0.2661,0.696),Vector2(0.2528,0.7186),Vector2(0.2641,0.7133)]);
{ .SetTexCoord }
IndexedFaceSet632.TexCoord := TextureCoordinate633;
Coordinate634 := TCoordinateNode.Create;
Coordinate634.SetPoint([Vector3(0.2923,0.2585,0.9483),Vector3(0.398,-0.9732,0.1131),Vector3(-0.398,-0.209,-0.9483),Vector3(0.3119,0.9732,0.439),Vector3(-0.2902,0.6978,-0.4206)]);
{ .SetCoord }
IndexedFaceSet632.Coord := Coordinate634;
{ .SetGeometry }
Shape630.Geometry := IndexedFaceSet632;
{ .AddChild }
Transform629.AddChildren([Shape630]);
{ .AddChildren }
HAnimSegment628.AddChildren([Transform629]);
Coordinate635 := TCoordinateNode.Create;
Coordinate635 := Coordinate634;
{ .SetCoord }
HAnimSegment628.Coord := Coordinate635;
HAnimDisplacer636 := THAnimDisplacerNode.Create;
HAnimDisplacer636.NameField := 'right_nostril_morphinterpolator';
HAnimDisplacer636.SetCoordIndex([2,4]);
HAnimDisplacer636.SetDisplacements([Vector3(0,0.838,0),Vector3(0,0.8382,0)]);
{ .AddDisplacers }
HAnimSegment628.SetDisplacers([HAnimDisplacer636]);
HAnimDisplacer637 := THAnimDisplacerNode.Create;
HAnimDisplacer637.NameField := 'right_nostril_morphinterpolator';
HAnimDisplacer637.SetCoordIndex([0]);
HAnimDisplacer637.SetDisplacements([Vector3(-0.3849,0,0)]);
{ .AddDisplacers }
HAnimSegment628.SetDisplacers([HAnimDisplacer637]);
HAnimDisplacer638 := THAnimDisplacerNode.Create;
HAnimDisplacer638.NameField := 'right_nostril_morphinterpolator';
HAnimDisplacer638.SetCoordIndex([2,4]);
HAnimDisplacer638.SetDisplacements([Vector3(0,0.3759,0),Vector3(0,0.3762,0)]);
{ .AddDisplacers }
HAnimSegment628.SetDisplacers([HAnimDisplacer638]);
HAnimDisplacer639 := THAnimDisplacerNode.Create;
HAnimDisplacer639.NameField := 'right_nostril_morphinterpolator';
HAnimDisplacer639.SetCoordIndex([2,4]);
HAnimDisplacer639.SetDisplacements([Vector3(0,0.5016,0),Vector3(0,0.2937,0)]);
{ .AddDisplacers }
HAnimSegment628.SetDisplacers([HAnimDisplacer639]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment628]);
HAnimSegment640 := THAnimSegmentNode.Create;
HAnimSegment640.NameField := 'right_pupil';
Transform641 := TTransformNode.Create;
Transform641.Translation := Vector3(-6.059,17.5,12.33);
Shape642 := TShapeNode.Create;
Appearance643 := TAppearanceNode.Create;
Appearance643 := Appearance97;
{ .SetAppearance }
Shape642.Appearance := Appearance643;
IndexedFaceSet644 := TIndexedFaceSetNode.Create;
IndexedFaceSet644.SetCoordIndex([4,6,7,-1,7,0,4,-1,7,8,3,-1,3,0,7,-1,12,2,1,-1,1,9,12,-1,10,9,1,-1,5,10,1,-1,1,3,5,-1,0,2,11,-1,11,4,0,-1,2,12,11,-1,3,8,5,-1,0,3,1,-1,1,2,0,-1]);
IndexedFaceSet644.CreaseAngle := 3.14159;
IndexedFaceSet644.Solid := False;
IndexedFaceSet644.SetTexCoordIndex([4,6,7,-1,7,0,4,-1,7,8,3,-1,3,0,7,-1,12,2,1,-1,1,9,12,-1,10,9,1,-1,5,10,1,-1,1,3,5,-1,0,2,11,-1,11,4,0,-1,2,12,11,-1,3,8,5,-1,0,3,1,-1,1,2,0,-1]);
TextureCoordinate645 := TTextureCoordinateNode.Create;
TextureCoordinate645.SetPoint([Vector2(0.3496,0.8297),Vector2(0.3746,0.8042),Vector2(0.3491,0.8029),Vector2(0.3744,0.8314),Vector2(0.328,0.824),Vector2(0.3871,0.8321),Vector2(0.3258,0.833),Vector2(0.3487,0.8409),Vector2(0.385,0.8438),Vector2(0.3777,0.7936),Vector2(0.3889,0.8064),Vector2(0.3322,0.8026),Vector2(0.3442,0.7934)]);
{ .SetTexCoord }
IndexedFaceSet644.TexCoord := TextureCoordinate645;
Coordinate646 := TCoordinateNode.Create;
Coordinate646.SetPoint([Vector3(0.4761,0.63,0.6933),Vector3(-0.8417,-0.7176,-0.6485),Vector3(0.4665,-0.8077,0.1079),Vector3(-0.8447,0.7457,-0.2465),Vector3(1.612,0.3169,1.289),Vector3(-1.518,0.7946,-0.736),Vector3(1.517,0.8129,1.347),Vector3(0.5339,1.273,1.112),Vector3(-1.311,1.316,-0.204),Vector3(-1.04,-1.316,-0.9056),Vector3(-1.612,-0.6212,-1.347),Vector3(1.373,-0.8544,0.5399),Vector3(0.7368,-1.282,0.04415)]);
{ .SetCoord }
IndexedFaceSet644.Coord := Coordinate646;
{ .SetGeometry }
Shape642.Geometry := IndexedFaceSet644;
{ .AddChild }
Transform641.AddChildren([Shape642]);
{ .AddChildren }
HAnimSegment640.AddChildren([Transform641]);
Coordinate647 := TCoordinateNode.Create;
Coordinate647 := Coordinate646;
{ .SetCoord }
HAnimSegment640.Coord := Coordinate647;
HAnimDisplacer648 := THAnimDisplacerNode.Create;
HAnimDisplacer648.NameField := 'right_pupil_morphinterpolator';
HAnimDisplacer648.SetCoordIndex([6,7]);
HAnimDisplacer648.SetDisplacements([Vector3(0,-0.0591,0),Vector3(0,-0.059,0)]);
{ .AddDisplacers }
HAnimSegment640.SetDisplacers([HAnimDisplacer648]);
HAnimDisplacer649 := THAnimDisplacerNode.Create;
HAnimDisplacer649.NameField := 'right_pupil_morphinterpolator';
HAnimDisplacer649.SetCoordIndex([6,7,8,9,12]);
HAnimDisplacer649.SetDisplacements([Vector3(0,-0.3349,0),Vector3(0,-0.3344,0),Vector3(0,-0.3345,0),Vector3(0,0.301,0),Vector3(0,0.151,0)]);
{ .AddDisplacers }
HAnimSegment640.SetDisplacers([HAnimDisplacer649]);
HAnimDisplacer650 := THAnimDisplacerNode.Create;
HAnimDisplacer650.NameField := 'right_pupil_morphinterpolator';
HAnimDisplacer650.SetCoordIndex([6,7,8]);
HAnimDisplacer650.SetDisplacements([Vector3(0,0.4971,0),Vector3(0,0.498,0),Vector3(0,0.498,0)]);
{ .AddDisplacers }
HAnimSegment640.SetDisplacers([HAnimDisplacer650]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment640]);
HAnimSegment651 := THAnimSegmentNode.Create;
HAnimSegment651.NameField := 'right_temple';
Transform652 := TTransformNode.Create;
Transform652.Translation := Vector3(-10.95,20.56,6.406);
Shape653 := TShapeNode.Create;
Appearance654 := TAppearanceNode.Create;
Appearance654 := Appearance97;
{ .SetAppearance }
Shape653.Appearance := Appearance654;
IndexedFaceSet655 := TIndexedFaceSetNode.Create;
IndexedFaceSet655.SetCoordIndex([9,12,5,-1,5,7,9,-1,0,5,12,-1,12,11,0,-1,0,8,1,-1,1,2,0,-1,2,5,0,-1,10,9,7,-1,7,6,10,-1,7,5,2,-1,2,3,7,-1,4,6,7,-1,7,3,4,-1]);
IndexedFaceSet655.CreaseAngle := 3.14159;
IndexedFaceSet655.Solid := False;
IndexedFaceSet655.SetTexCoordIndex([0,4,5,-1,5,6,0,-1,1,7,15,-1,15,13,1,-1,1,10,2,-1,2,3,1,-1,3,7,1,-1,8,0,6,-1,6,9,8,-1,6,5,11,-1,11,12,6,-1,14,9,6,-1,6,12,14,-1]);
TextureCoordinate656 := TTextureCoordinateNode.Create;
TextureCoordinate656.SetPoint([Vector2(0.44,0.6625),Vector2(0.4455,0.863),Vector2(0.4299,0.8825),Vector2(0.4655,0.9081),Vector2(0.4547,0.661),Vector2(0.4573,0.671),Vector2(0.4428,0.6714),Vector2(0.462,0.8557),Vector2(0.4352,0.6651),Vector2(0.4342,0.6719),Vector2(0.4266,0.8643),Vector2(0.4606,0.684),Vector2(0.4479,0.6875),Vector2(0.4335,0.819),Vector2(0.4319,0.6876),Vector2(0.4572,0.8171)]);
{ .SetTexCoord }
IndexedFaceSet655.TexCoord := TextureCoordinate656;
Coordinate657 := TCoordinateNode.Create;
Coordinate657.SetPoint([Vector3(0.312,-0.6258,2.224),Vector3(1.079,0.3506,4.121),Vector3(-0.5824,2.214,1.716),Vector3(-0.9631,2.994,-0.8569),Vector3(-0.5756,3.023,-4.121),Vector3(-0.3971,-0.687,1.044),Vector3(-1.042,-0.4888,-3.649),Vector3(-1.005,-0.6065,-1.903),Vector3(1.243,-0.6321,3.914),Vector3(-1.028,-2.588,-2.479),Vector3(-1.243,-2.002,-3.446),Vector3(0.8897,-3.023,2.376),Vector3(-0.2546,-2.916,0.5272)]);
{ .SetCoord }
IndexedFaceSet655.Coord := Coordinate657;
{ .SetGeometry }
Shape653.Geometry := IndexedFaceSet655;
{ .AddChild }
Transform652.AddChildren([Shape653]);
{ .AddChildren }
HAnimSegment651.AddChildren([Transform652]);
Coordinate658 := TCoordinateNode.Create;
Coordinate658 := Coordinate657;
{ .SetCoord }
HAnimSegment651.Coord := Coordinate658;
HAnimDisplacer659 := THAnimDisplacerNode.Create;
HAnimDisplacer659.NameField := 'right_temple_morphinterpolator';
HAnimDisplacer659.SetCoordIndex([1,8]);
HAnimDisplacer659.SetDisplacements([Vector3(0,-0.0942,0),Vector3(0,-0.0941,0)]);
{ .AddDisplacers }
HAnimSegment651.SetDisplacers([HAnimDisplacer659]);
HAnimDisplacer660 := THAnimDisplacerNode.Create;
HAnimDisplacer660.NameField := 'right_temple_morphinterpolator';
HAnimDisplacer660.SetCoordIndex([1,8]);
HAnimDisplacer660.SetDisplacements([Vector3(0,0.2686,0),Vector3(0,0.2687,0)]);
{ .AddDisplacers }
HAnimSegment651.SetDisplacers([HAnimDisplacer660]);
HAnimDisplacer661 := THAnimDisplacerNode.Create;
HAnimDisplacer661.NameField := 'right_temple_morphinterpolator';
HAnimDisplacer661.SetCoordIndex([8,11]);
HAnimDisplacer661.SetDisplacements([Vector3(-0.003,-0.4639,0.004),Vector3(0,-0.075,0)]);
{ .AddDisplacers }
HAnimSegment651.SetDisplacers([HAnimDisplacer661]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment651]);
HAnimSegment662 := THAnimSegmentNode.Create;
HAnimSegment662.NameField := 'right_upper_cutaneous_lip';
Transform663 := TTransformNode.Create;
Transform663.Translation := Vector3(-0.7684,10.16,14.63);
Shape664 := TShapeNode.Create;
Appearance665 := TAppearanceNode.Create;
Appearance665 := Appearance97;
{ .SetAppearance }
Shape664.Appearance := Appearance665;
IndexedFaceSet666 := TIndexedFaceSetNode.Create;
IndexedFaceSet666.SetCoordIndex([2,0,1,-1,1,3,2,-1]);
IndexedFaceSet666.CreaseAngle := 3.14159;
IndexedFaceSet666.Solid := False;
IndexedFaceSet666.SetTexCoordIndex([2,0,1,-1,1,3,2,-1]);
TextureCoordinate667 := TTextureCoordinateNode.Create;
TextureCoordinate667.SetPoint([Vector2(0.2661,0.696),Vector2(0.2636,0.664),Vector2(0.2511,0.6816),Vector2(0.2548,0.6653)]);
{ .SetTexCoord }
IndexedFaceSet666.TexCoord := TextureCoordinate667;
Coordinate668 := TCoordinateNode.Create;
Coordinate668.SetPoint([Vector3(-0.398,0.8515,-0.5307),Vector3(-0.2676,-0.8515,-0.06256),Vector3(0.398,0.08738,0.5307),Vector3(0.1985,-0.7812,0.2164)]);
{ .SetCoord }
IndexedFaceSet666.Coord := Coordinate668;
{ .SetGeometry }
Shape664.Geometry := IndexedFaceSet666;
{ .AddChild }
Transform663.AddChildren([Shape664]);
{ .AddChildren }
HAnimSegment662.AddChildren([Transform663]);
Coordinate669 := TCoordinateNode.Create;
Coordinate669 := Coordinate668;
{ .SetCoord }
HAnimSegment662.Coord := Coordinate669;
HAnimDisplacer670 := THAnimDisplacerNode.Create;
HAnimDisplacer670.NameField := 'right_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer670.SetCoordIndex([0,1,3]);
HAnimDisplacer670.SetDisplacements([Vector3(0,0.8385,0),Vector3(0,0.5164,0),Vector3(0,0.4847,0)]);
{ .AddDisplacers }
HAnimSegment662.SetDisplacers([HAnimDisplacer670]);
HAnimDisplacer671 := THAnimDisplacerNode.Create;
HAnimDisplacer671.NameField := 'right_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer671.SetCoordIndex([1,3]);
HAnimDisplacer671.SetDisplacements([Vector3(0,0.0967,0),Vector3(0,0.1405,0)]);
{ .AddDisplacers }
HAnimSegment662.SetDisplacers([HAnimDisplacer671]);
HAnimDisplacer672 := THAnimDisplacerNode.Create;
HAnimDisplacer672.NameField := 'right_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer672.SetCoordIndex([1,3]);
HAnimDisplacer672.SetDisplacements([Vector3(0,-0.0689,0.0447),Vector3(0,-0.0689,0.0448)]);
{ .AddDisplacers }
HAnimSegment662.SetDisplacers([HAnimDisplacer672]);
HAnimDisplacer673 := THAnimDisplacerNode.Create;
HAnimDisplacer673.NameField := 'right_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer673.SetCoordIndex([1,3]);
HAnimDisplacer673.SetDisplacements([Vector3(0,-0.0221,0.1251),Vector3(0,-0.0514,-0.0369)]);
{ .AddDisplacers }
HAnimSegment662.SetDisplacers([HAnimDisplacer673]);
HAnimDisplacer674 := THAnimDisplacerNode.Create;
HAnimDisplacer674.NameField := 'right_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer674.SetCoordIndex([1,3]);
HAnimDisplacer674.SetDisplacements([Vector3(0.1339,0.1022,0.5512),Vector3(0.0736,0.1634,0.5282)]);
{ .AddDisplacers }
HAnimSegment662.SetDisplacers([HAnimDisplacer674]);
HAnimDisplacer675 := THAnimDisplacerNode.Create;
HAnimDisplacer675.NameField := 'right_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer675.SetCoordIndex([1,3]);
HAnimDisplacer675.SetDisplacements([Vector3(0.0619,0,0.5662),Vector3(0.0155,0,0.5662)]);
{ .AddDisplacers }
HAnimSegment662.SetDisplacers([HAnimDisplacer675]);
HAnimDisplacer676 := THAnimDisplacerNode.Create;
HAnimDisplacer676.NameField := 'right_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer676.SetCoordIndex([1,3]);
HAnimDisplacer676.SetDisplacements([Vector3(0,-0.5205,-0.6547),Vector3(0,-0.5208,-0.6547)]);
{ .AddDisplacers }
HAnimSegment662.SetDisplacers([HAnimDisplacer676]);
HAnimDisplacer677 := THAnimDisplacerNode.Create;
HAnimDisplacer677.NameField := 'right_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer677.SetCoordIndex([1,3]);
HAnimDisplacer677.SetDisplacements([Vector3(0.0754,-0.0332,0.2613),Vector3(0.0415,-0.0383,0.241)]);
{ .AddDisplacers }
HAnimSegment662.SetDisplacers([HAnimDisplacer677]);
HAnimDisplacer678 := THAnimDisplacerNode.Create;
HAnimDisplacer678.NameField := 'right_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer678.SetCoordIndex([1,3]);
HAnimDisplacer678.SetDisplacements([Vector3(0,0.2684,0),Vector3(0,0.2684,0)]);
{ .AddDisplacers }
HAnimSegment662.SetDisplacers([HAnimDisplacer678]);
HAnimDisplacer679 := THAnimDisplacerNode.Create;
HAnimDisplacer679.NameField := 'right_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer679.SetCoordIndex([0]);
HAnimDisplacer679.SetDisplacements([Vector3(0,0.3765,0)]);
{ .AddDisplacers }
HAnimSegment662.SetDisplacers([HAnimDisplacer679]);
HAnimDisplacer680 := THAnimDisplacerNode.Create;
HAnimDisplacer680.NameField := 'right_upper_cutaneous_lip_morphinterpolator';
HAnimDisplacer680.SetCoordIndex([0,1,3]);
HAnimDisplacer680.SetDisplacements([Vector3(0,0.5015,0),Vector3(0,0.5016,0),Vector3(0,0.5016,0)]);
{ .AddDisplacers }
HAnimSegment662.SetDisplacers([HAnimDisplacer680]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment662]);
HAnimSegment681 := THAnimSegmentNode.Create;
HAnimSegment681.NameField := 'right_upper_eyelid';
Transform682 := TTransformNode.Create;
Transform682.Translation := Vector3(-5.53,17.96,12.21);
Shape683 := TShapeNode.Create;
Appearance684 := TAppearanceNode.Create;
Appearance684 := Appearance97;
{ .SetAppearance }
Shape683.Appearance := Appearance684;
IndexedFaceSet685 := TIndexedFaceSetNode.Create;
IndexedFaceSet685.SetCoordIndex([1,0,2,-1,6,4,3,-1,3,2,6,-1,3,1,2,-1,1,13,0,-1,13,7,0,-1,8,12,5,-1,5,10,8,-1,4,6,10,-1,10,5,4,-1,0,7,9,-1,7,11,9,-1,13,14,11,-1,11,7,13,-1]);
IndexedFaceSet685.CreaseAngle := 3.14159;
IndexedFaceSet685.Solid := False;
IndexedFaceSet685.SetTexCoordIndex([2,0,1,-1,4,3,5,-1,5,1,4,-1,5,2,1,-1,2,6,0,-1,6,9,0,-1,11,15,8,-1,8,13,11,-1,3,4,13,-1,13,8,3,-1,0,9,12,-1,10,14,12,-1,7,16,14,-1,14,10,7,-1]);
TextureCoordinate686 := TTextureCoordinateNode.Create;
TextureCoordinate686.SetPoint([Vector2(0.274,0.8322),Vector2(0.3402,0.8534),Vector2(0.3285,0.8323),Vector2(0.3831,0.8437),Vector2(0.3979,0.8641),Vector2(0.3487,0.8409),Vector2(0.2983,0.8142),Vector2(0.2981,0.8094),Vector2(0.4198,0.8261),Vector2(0.2678,0.8154),Vector2(0.2677,0.8134),Vector2(0.4455,0.863),Vector2(0.2534,0.8152),Vector2(0.4266,0.8643),Vector2(0.2671,0.7978),Vector2(0.4335,0.819),Vector2(0.2845,0.7889)]);
{ .SetTexCoord }
IndexedFaceSet685.TexCoord := TextureCoordinate686;
Coordinate687 := TCoordinateNode.Create;
Coordinate687.SetPoint([Vector3(3.944,0.2777,3.581),Vector3(0.9888,0.3455,1.465),Vector3(0.4509,1.393,2.381),Vector3(0.005327,0.806,1.231),Vector3(-1.84,0.849,-0.08585),Vector3(-3.829,-0.08937,-2.326),Vector3(-2.527,1.923,-0.05675),Vector3(4.303,-0.6947,2.247),Vector3(-5.103,1.975,-3.581),Vector3(5.103,-0.5987,2.53),Vector3(-4.172,1.969,-1.891),Vector3(4.353,-1.523,2.057),Vector3(-4.525,-0.4223,-3.429),Vector3(2.594,-0.8999,1.643),Vector3(3.366,-1.975,1.583)]);
{ .SetCoord }
IndexedFaceSet685.Coord := Coordinate687;
{ .SetGeometry }
Shape683.Geometry := IndexedFaceSet685;
{ .AddChild }
Transform682.AddChildren([Shape683]);
{ .AddChildren }
HAnimSegment681.AddChildren([Transform682]);
Coordinate688 := TCoordinateNode.Create;
Coordinate688 := Coordinate687;
{ .SetCoord }
HAnimSegment681.Coord := Coordinate688;
HAnimDisplacer689 := THAnimDisplacerNode.Create;
HAnimDisplacer689.NameField := 'right_upper_eyelid_morphinterpolator';
HAnimDisplacer689.SetCoordIndex([1,3,4]);
HAnimDisplacer689.SetDisplacements([Vector3(-0.2496,-2.0425,-0.987),Vector3(-1.6453,-2.567,-1.8279),Vector3(-0.478,-2.36,-1.1421)]);
{ .AddDisplacers }
HAnimSegment681.SetDisplacers([HAnimDisplacer689]);
HAnimDisplacer690 := THAnimDisplacerNode.Create;
HAnimDisplacer690.NameField := 'right_upper_eyelid_morphinterpolator';
HAnimDisplacer690.SetCoordIndex([0,1,2,3,6,10]);
HAnimDisplacer690.SetDisplacements([Vector3(0.303,-0.3949,0),Vector3(0,-0.0592,0),Vector3(0.5561,-0.5069,0),Vector3(0,-0.0591,0),Vector3(0,-0.094,0),Vector3(0,-0.094,0)]);
{ .AddDisplacers }
HAnimSegment681.SetDisplacers([HAnimDisplacer690]);
HAnimDisplacer691 := THAnimDisplacerNode.Create;
HAnimDisplacer691.NameField := 'right_upper_eyelid_morphinterpolator';
HAnimDisplacer691.SetCoordIndex([14]);
HAnimDisplacer691.SetDisplacements([Vector3(0,0.067,-0.082)]);
{ .AddDisplacers }
HAnimSegment681.SetDisplacers([HAnimDisplacer691]);
HAnimDisplacer692 := THAnimDisplacerNode.Create;
HAnimDisplacer692.NameField := 'right_upper_eyelid_morphinterpolator';
HAnimDisplacer692.SetCoordIndex([1,3,4]);
HAnimDisplacer692.SetDisplacements([Vector3(-0.2496,-2.0425,-0.987),Vector3(-1.6453,-2.567,-1.8279),Vector3(-0.478,-2.36,-1.1421)]);
{ .AddDisplacers }
HAnimSegment681.SetDisplacers([HAnimDisplacer692]);
HAnimDisplacer693 := THAnimDisplacerNode.Create;
HAnimDisplacer693.NameField := 'right_upper_eyelid_morphinterpolator';
HAnimDisplacer693.SetCoordIndex([0,2,6]);
HAnimDisplacer693.SetDisplacements([Vector3(0,0.3842,0),Vector3(0,0.384,0),Vector3(0,0.135,0)]);
{ .AddDisplacers }
HAnimSegment681.SetDisplacers([HAnimDisplacer693]);
HAnimDisplacer694 := THAnimDisplacerNode.Create;
HAnimDisplacer694.NameField := 'right_upper_eyelid_morphinterpolator';
HAnimDisplacer694.SetCoordIndex([1,3,4,5]);
HAnimDisplacer694.SetDisplacements([Vector3(0,-0.7517,0),Vector3(0,-1.0484,0),Vector3(0,-1.0134,0),Vector3(0,-0.3486,0)]);
{ .AddDisplacers }
HAnimSegment681.SetDisplacers([HAnimDisplacer694]);
HAnimDisplacer695 := THAnimDisplacerNode.Create;
HAnimDisplacer695.NameField := 'right_upper_eyelid_morphinterpolator';
HAnimDisplacer695.SetCoordIndex([1,3,4]);
HAnimDisplacer695.SetDisplacements([Vector3(0,-0.3349,0),Vector3(0,-0.3349,0),Vector3(0,-0.3349,0)]);
{ .AddDisplacers }
HAnimSegment681.SetDisplacers([HAnimDisplacer695]);
HAnimDisplacer696 := THAnimDisplacerNode.Create;
HAnimDisplacer696.NameField := 'right_upper_eyelid_morphinterpolator';
HAnimDisplacer696.SetCoordIndex([6,10]);
HAnimDisplacer696.SetDisplacements([Vector3(0,0.654,0),Vector3(0,0.268,0)]);
{ .AddDisplacers }
HAnimSegment681.SetDisplacers([HAnimDisplacer696]);
HAnimDisplacer697 := THAnimDisplacerNode.Create;
HAnimDisplacer697.NameField := 'right_upper_eyelid_morphinterpolator';
HAnimDisplacer697.SetCoordIndex([1,3,4]);
HAnimDisplacer697.SetDisplacements([Vector3(0,-1.0868,0),Vector3(0,-1.4762,0),Vector3(0,-1.3055,0)]);
{ .AddDisplacers }
HAnimSegment681.SetDisplacers([HAnimDisplacer697]);
HAnimDisplacer698 := THAnimDisplacerNode.Create;
HAnimDisplacer698.NameField := 'right_upper_eyelid_morphinterpolator';
HAnimDisplacer698.SetCoordIndex([1,3,4,5,6,10,12]);
HAnimDisplacer698.SetDisplacements([Vector3(0,-0.5962,0),Vector3(0,-0.7726,-0.115),Vector3(0,-0.7324,0),Vector3(0,-0.0775,0),Vector3(0,-0.463,0),Vector3(0.002,-0.464,0),Vector3(0,-0.0776,0)]);
{ .AddDisplacers }
HAnimSegment681.SetDisplacers([HAnimDisplacer698]);
HAnimDisplacer699 := THAnimDisplacerNode.Create;
HAnimDisplacer699.NameField := 'right_upper_eyelid_morphinterpolator';
HAnimDisplacer699.SetCoordIndex([1,2,3,4,13]);
HAnimDisplacer699.SetDisplacements([Vector3(0,0.4975,0),Vector3(0,0.497,0),Vector3(0,0.498,0),Vector3(0,0.498,0),Vector3(0,0.4975,0)]);
{ .AddDisplacers }
HAnimSegment681.SetDisplacers([HAnimDisplacer699]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment681]);
HAnimSegment700 := THAnimSegmentNode.Create;
HAnimSegment700.NameField := 'right_upper_vermillion_lip';
Transform701 := TTransformNode.Create;
Transform701.Translation := Vector3(-1.788,9.002,13.64);
Shape702 := TShapeNode.Create;
Appearance703 := TAppearanceNode.Create;
Appearance703 := Appearance97;
{ .SetAppearance }
Shape702.Appearance := Appearance703;
IndexedFaceSet704 := TIndexedFaceSetNode.Create;
IndexedFaceSet704.SetCoordIndex([3,2,1,-1,1,0,3,-1]);
IndexedFaceSet704.CreaseAngle := 3.14159;
IndexedFaceSet704.Solid := False;
IndexedFaceSet704.SetTexCoordIndex([3,2,1,-1,1,0,3,-1]);
TextureCoordinate705 := TTextureCoordinateNode.Create;
TextureCoordinate705.SetPoint([Vector2(0.3007,0.651),Vector2(0.2636,0.664),Vector2(0.2548,0.6653),Vector2(0.2548,0.6553)]);
{ .SetTexCoord }
IndexedFaceSet704.TexCoord := TextureCoordinate705;
Coordinate706 := TCoordinateNode.Create;
Coordinate706.SetPoint([Vector3(-1.218,-0.3781,-1.204),Vector3(0.7521,0.3078,0.925),Vector3(1.218,0.3781,1.204),Vector3(1.218,-0.1506,0.4455)]);
{ .SetCoord }
IndexedFaceSet704.Coord := Coordinate706;
{ .SetGeometry }
Shape702.Geometry := IndexedFaceSet704;
{ .AddChild }
Transform701.AddChildren([Shape702]);
{ .AddChildren }
HAnimSegment700.AddChildren([Transform701]);
Coordinate707 := TCoordinateNode.Create;
Coordinate707 := Coordinate706;
{ .SetCoord }
HAnimSegment700.Coord := Coordinate707;
HAnimDisplacer708 := THAnimDisplacerNode.Create;
HAnimDisplacer708.NameField := 'right_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer708.SetCoordIndex([0,1,2,3]);
HAnimDisplacer708.SetDisplacements([Vector3(-0.591,1.3225,0.107),Vector3(0,0.5164,0),Vector3(0,0.4847,0),Vector3(0,0.4847,0)]);
{ .AddDisplacers }
HAnimSegment700.SetDisplacers([HAnimDisplacer708]);
HAnimDisplacer709 := THAnimDisplacerNode.Create;
HAnimDisplacer709.NameField := 'right_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer709.SetCoordIndex([0,1,2,3]);
HAnimDisplacer709.SetDisplacements([Vector3(0,-0.1372,0),Vector3(0,0.0967,0),Vector3(0,0.1405,0),Vector3(0,0.187,0)]);
{ .AddDisplacers }
HAnimSegment700.SetDisplacers([HAnimDisplacer709]);
HAnimDisplacer710 := THAnimDisplacerNode.Create;
HAnimDisplacer710.NameField := 'right_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer710.SetCoordIndex([0,1,2,3]);
HAnimDisplacer710.SetDisplacements([Vector3(-0.379,0.3959,0.153),Vector3(0,-0.0689,0.0447),Vector3(0,-0.0688,0.045),Vector3(0,-0.0435,0.4553)]);
{ .AddDisplacers }
HAnimSegment700.SetDisplacers([HAnimDisplacer710]);
HAnimDisplacer711 := THAnimDisplacerNode.Create;
HAnimDisplacer711.NameField := 'right_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer711.SetCoordIndex([0,1,2,3]);
HAnimDisplacer711.SetDisplacements([Vector3(-0.197,-0.7019,0.078),Vector3(0,-0.0221,0.125),Vector3(0,-0.0513,-0.037),Vector3(0,0.0541,0.5975)]);
{ .AddDisplacers }
HAnimSegment700.SetDisplacers([HAnimDisplacer711]);
HAnimDisplacer712 := THAnimDisplacerNode.Create;
HAnimDisplacer712.NameField := 'right_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer712.SetCoordIndex([0,1,2,3]);
HAnimDisplacer712.SetDisplacements([Vector3(0.8355,0,1.0637),Vector3(0.134,0.1022,0.551),Vector3(0.074,0.1634,0.528),Vector3(0,0.1237,0.8775)]);
{ .AddDisplacers }
HAnimSegment700.SetDisplacers([HAnimDisplacer712]);
HAnimDisplacer713 := THAnimDisplacerNode.Create;
HAnimDisplacer713.NameField := 'right_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer713.SetCoordIndex([0,1,2,3]);
HAnimDisplacer713.SetDisplacements([Vector3(0.9097,0,0.4597),Vector3(0.0619,0,0.566),Vector3(0.016,0,0.566),Vector3(-0.041,0,0.366)]);
{ .AddDisplacers }
HAnimSegment700.SetDisplacers([HAnimDisplacer713]);
HAnimDisplacer714 := THAnimDisplacerNode.Create;
HAnimDisplacer714.NameField := 'right_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer714.SetCoordIndex([0]);
HAnimDisplacer714.SetDisplacements([Vector3(-0.973,0.0091,0.026)]);
{ .AddDisplacers }
HAnimSegment700.SetDisplacers([HAnimDisplacer714]);
HAnimDisplacer715 := THAnimDisplacerNode.Create;
HAnimDisplacer715.NameField := 'right_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer715.SetCoordIndex([0,1,2,3]);
HAnimDisplacer715.SetDisplacements([Vector3(-0.125,0,0),Vector3(0,-0.5204,-0.6548),Vector3(0,-0.5204,-0.6547),Vector3(0,-0.135,-0.2471)]);
{ .AddDisplacers }
HAnimSegment700.SetDisplacers([HAnimDisplacer715]);
HAnimDisplacer716 := THAnimDisplacerNode.Create;
HAnimDisplacer716.NameField := 'right_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer716.SetCoordIndex([0,1,2,3]);
HAnimDisplacer716.SetDisplacements([Vector3(0.5211,0.1704,1.038),Vector3(0.0755,-0.0332,0.261),Vector3(0.042,-0.0383,0.241),Vector3(0.042,-0.0353,0.6945)]);
{ .AddDisplacers }
HAnimSegment700.SetDisplacers([HAnimDisplacer716]);
HAnimDisplacer717 := THAnimDisplacerNode.Create;
HAnimDisplacer717.NameField := 'right_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer717.SetCoordIndex([0,1,2,3]);
HAnimDisplacer717.SetDisplacements([Vector3(0,-0.7359,0),Vector3(0,0.2684,0),Vector3(0,0.2684,0),Vector3(0,0.2684,0)]);
{ .AddDisplacers }
HAnimSegment700.SetDisplacers([HAnimDisplacer717]);
HAnimDisplacer718 := THAnimDisplacerNode.Create;
HAnimDisplacer718.NameField := 'right_upper_vermillion_lip_morphinterpolator';
HAnimDisplacer718.SetCoordIndex([1,2,3]);
HAnimDisplacer718.SetDisplacements([Vector3(0,0.5016,0),Vector3(0,0.5017,0),Vector3(0,0.5017,0)]);
{ .AddDisplacers }
HAnimSegment700.SetDisplacers([HAnimDisplacer718]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment700]);
HAnimSegment719 := THAnimSegmentNode.Create;
HAnimSegment719.NameField := 'tongue';
Transform720 := TTransformNode.Create;
Transform720.Translation := Vector3(0,8.886,11.1);
Shape721 := TShapeNode.Create;
Appearance722 := TAppearanceNode.Create;
Appearance722 := Appearance97;
{ .SetAppearance }
Shape721.Appearance := Appearance722;
IndexedFaceSet723 := TIndexedFaceSetNode.Create;
IndexedFaceSet723.SetCoordIndex([0,59,32,-1,32,62,0,-1,8,75,32,-1,32,59,8,-1,20,95,32,-1,32,75,20,-1,17,62,32,-1,32,95,17,-1,4,89,33,-1,33,74,4,-1,18,96,33,-1,33,89,18,-1,29,92,33,-1,33,96,29,-1,11,74,33,-1,33,92,11,-1,12,79,34,-1,34,82,12,-1,22,97,34,-1,34,79,22,-1,31,94,34,-1,34,97,31,-1,15,82,34,-1,34,94,15,-1,1,72,35,-1,35,67,1,-1,9,77,35,-1,35,72,9,-1,10,64,35,-1,35,77,10,-1,5,67,35,-1,35,64,5,-1,2,71,36,-1,36,70,2,-1,8,78,36,-1,36,71,8,-1,11,66,36,-1,36,78,11,-1,6,70,36,-1,36,66,6,-1,8,71,37,-1,37,75,8,-1,2,60,37,-1,37,71,2,-1,24,98,37,-1,37,60,24,-1,20,75,37,-1,37,98,20,-1,10,73,38,-1,38,76,10,-1,7,65,38,-1,38,73,7,-1,27,99,38,-1,38,65,27,-1,21,76,38,-1,38,99,21,-1,9,61,39,-1,39,77,9,-1,3,69,39,-1,39,61,3,-1,7,73,39,-1,39,69,7,-1,10,77,39,-1,39,73,10,-1,8,59,40,-1,40,78,8,-1,0,68,40,-1,40,59,0,-1,4,74,40,-1,40,68,4,-1,11,78,40,-1,40,74,11,-1,0,62,41,-1,41,83,0,-1,17,100,41,-1,41,62,17,-1,22,79,41,-1,41,100,22,-1,12,83,41,-1,41,79,12,-1,1,67,42,-1,42,84,1,-1,5,85,42,-1,42,67,5,-1,14,80,42,-1,42,85,14,-1,13,84,42,-1,42,80,13,-1,5,63,43,-1,43,85,5,-1,26,101,43,-1,43,63,26,-1,23,81,43,-1,43,101,23,-1,14,85,43,-1,43,81,14,-1,4,68,44,-1,44,86,4,-1,0,83,44,-1,44,68,0,-1,12,82,44,-1,44,83,12,-1,15,86,44,-1,44,82,15,-1,28,91,45,-1,45,110,28,-1,9,72,45,-1,45,91,9,-1,1,88,45,-1,45,72,1,-1,25,110,45,-1,45,88,25,-1,26,63,46,-1,46,111,26,-1,5,64,46,-1,46,63,5,-1,10,76,46,-1,46,64,10,-1,21,111,46,-1,46,76,21,-1,30,93,47,-1,47,112,30,-1,13,80,47,-1,47,93,13,-1,14,81,47,-1,47,80,14,-1,23,112,47,-1,47,81,23,-1,16,87,48,-1,48,113,16,-1,3,61,48,-1,48,87,3,-1,9,91,48,-1,48,61,9,-1,28,113,48,-1,48,91,28,-1,19,90,49,-1,49,114,19,-1,6,66,49,-1,49,90,6,-1,11,92,49,-1,49,66,11,-1,29,114,49,-1,49,92,29,-1,25,88,50,-1,50,115,25,-1,1,84,50,-1,50,88,1,-1,13,93,50,-1,50,84,13,-1,30,115,50,-1,50,93,30,-1,18,89,51,-1,51,116,18,-1,4,86,51,-1,51,89,4,-1,15,94,51,-1,51,86,15,-1,31,116,51,-1,51,94,31,-1,20,106,52,-1,52,95,20,-1,28,110,52,-1,52,106,28,-1,25,103,52,-1,52,110,25,-1,17,95,52,-1,52,103,17,-1,18,104,53,-1,53,96,18,-1,26,111,53,-1,53,104,26,-1,21,107,53,-1,53,111,21,-1,29,96,53,-1,53,107,29,-1,22,108,54,-1,54,97,22,-1,30,112,54,-1,54,108,30,-1,23,109,54,-1,54,112,23,-1,31,97,54,-1,54,109,31,-1,24,102,55,-1,55,98,24,-1,16,113,55,-1,55,102,16,-1,28,106,55,-1,55,113,28,-1,20,98,55,-1,55,106,20,-1,27,105,56,-1,56,99,27,-1,19,114,56,-1,56,105,19,-1,29,107,56,-1,56,114,29,-1,21,99,56,-1,56,107,21,-1,17,103,57,-1,57,100,17,-1,25,115,57,-1,57,103,25,-1,30,108,57,-1,57,115,30,-1,22,100,57,-1,57,108,22,-1,26,104,58,-1,58,101,26,-1,18,116,58,-1,58,104,18,-1,31,109,58,-1,58,116,31,-1,23,101,58,-1,58,109,23,-1]);
IndexedFaceSet723.CreaseAngle := 3.14159;
IndexedFaceSet723.Solid := False;
IndexedFaceSet723.SetTexCoordIndex([0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,6,7,2,-1,2,5,6,-1,8,3,2,-1,2,7,8,-1,9,10,11,-1,11,12,9,-1,13,14,11,-1,11,10,13,-1,15,16,11,-1,11,14,15,-1,17,12,11,-1,11,16,17,-1,18,19,20,-1,20,21,18,-1,22,23,20,-1,20,19,22,-1,24,25,20,-1,20,23,24,-1,26,21,20,-1,20,25,26,-1,27,28,29,-1,29,30,27,-1,31,32,29,-1,29,28,31,-1,33,34,29,-1,29,32,33,-1,35,30,29,-1,29,34,35,-1,36,37,38,-1,38,39,36,-1,4,40,38,-1,38,37,4,-1,17,41,38,-1,38,40,17,-1,42,39,38,-1,38,41,42,-1,4,37,43,-1,43,5,4,-1,36,44,43,-1,43,37,36,-1,45,46,43,-1,43,44,45,-1,6,5,43,-1,43,46,6,-1,33,47,48,-1,48,49,33,-1,50,51,48,-1,48,47,50,-1,52,53,48,-1,48,51,52,-1,54,49,48,-1,48,53,54,-1,31,55,56,-1,56,32,31,-1,57,58,56,-1,56,55,57,-1,50,47,56,-1,56,58,50,-1,33,32,56,-1,56,47,33,-1,4,1,59,-1,59,40,4,-1,0,60,59,-1,59,1,0,-1,9,12,59,-1,59,60,9,-1,17,40,59,-1,59,12,17,-1,0,3,61,-1,61,62,0,-1,8,63,61,-1,61,3,8,-1,22,19,61,-1,61,63,22,-1,18,62,61,-1,61,19,18,-1,27,30,64,-1,64,65,27,-1,35,66,64,-1,64,30,35,-1,67,68,64,-1,64,66,67,-1,69,65,64,-1,64,68,69,-1,35,70,71,-1,71,66,35,-1,72,73,71,-1,71,70,72,-1,74,75,71,-1,71,73,74,-1,67,66,71,-1,71,75,67,-1,9,60,76,-1,76,77,9,-1,0,62,76,-1,76,60,0,-1,18,21,76,-1,76,62,18,-1,26,77,76,-1,76,21,26,-1,78,79,80,-1,80,81,78,-1,31,28,80,-1,80,79,31,-1,27,82,80,-1,80,28,27,-1,83,81,80,-1,80,82,83,-1,72,70,84,-1,84,85,72,-1,35,34,84,-1,84,70,35,-1,33,49,84,-1,84,34,33,-1,54,85,84,-1,84,49,54,-1,86,87,88,-1,88,89,86,-1,69,68,88,-1,88,87,69,-1,67,75,88,-1,88,68,67,-1,74,89,88,-1,88,75,74,-1,90,91,92,-1,92,93,90,-1,57,55,92,-1,92,91,57,-1,31,79,92,-1,92,55,31,-1,78,93,92,-1,92,79,78,-1,94,95,96,-1,96,97,94,-1,42,41,96,-1,96,95,42,-1,17,16,96,-1,96,41,17,-1,15,97,96,-1,96,16,15,-1,83,82,98,-1,98,99,83,-1,27,65,98,-1,98,82,27,-1,69,87,98,-1,98,65,69,-1,86,99,98,-1,98,87,86,-1,13,10,100,-1,100,101,13,-1,9,77,100,-1,100,10,9,-1,26,25,100,-1,100,77,26,-1,24,101,100,-1,100,25,24,-1,6,102,103,-1,103,7,6,-1,78,81,103,-1,103,102,78,-1,83,104,103,-1,103,81,83,-1,8,7,103,-1,103,104,8,-1,13,105,106,-1,106,14,13,-1,72,85,106,-1,106,105,72,-1,54,107,106,-1,106,85,54,-1,15,14,106,-1,106,107,15,-1,22,108,109,-1,109,23,22,-1,86,89,109,-1,109,108,86,-1,74,110,109,-1,109,89,74,-1,24,23,109,-1,109,110,24,-1,45,111,112,-1,112,46,45,-1,90,93,112,-1,112,111,90,-1,78,102,112,-1,112,93,78,-1,6,46,112,-1,112,102,6,-1,52,113,114,-1,114,53,52,-1,94,97,114,-1,114,113,94,-1,15,107,114,-1,114,97,15,-1,54,53,114,-1,114,107,54,-1,8,104,115,-1,115,63,8,-1,83,99,115,-1,115,104,83,-1,86,108,115,-1,115,99,86,-1,22,63,115,-1,115,108,22,-1,72,105,116,-1,116,73,72,-1,13,101,116,-1,116,105,13,-1,24,110,116,-1,116,101,24,-1,74,73,116,-1,116,110,74,-1]);
TextureCoordinate724 := TTextureCoordinateNode.Create;
TextureCoordinate724.SetPoint([Vector2(0.6665,0.04796),Vector2(0.6621,0.05829),Vector2(0.6755,0.05429),Vector2(0.678,0.04407),Vector2(0.6594,0.0736),Vector2(0.6739,0.06941),Vector2(0.6934,0.06941),Vector2(0.6938,0.05429),Vector2(0.6944,0.04387),Vector2(0.6665,0.07002),Vector2(0.678,0.07332),Vector2(0.6755,0.08631),Vector2(0.6621,0.08231),Vector2(0.6944,0.07293),Vector2(0.6938,0.08631),Vector2(0.6934,0.103),Vector2(0.6739,0.103),Vector2(0.6594,0.09877),Vector2(0.6775,0.03908),Vector2(0.6841,0.03457),Vector2(0.685,0.04057),Vector2(0.677,0.04467),Vector2(0.6959,0.03299),Vector2(0.6961,0.03821),Vector2(0.6959,0.0483),Vector2(0.6841,0.05084),Vector2(0.6775,0.0521),Vector2(0.7593,0.04796),Vector2(0.7636,0.05829),Vector2(0.7681,0.0703),Vector2(0.7631,0.05909),Vector2(0.7664,0.0736),Vector2(0.7713,0.08619),Vector2(0.7664,0.09877),Vector2(0.7636,0.08231),Vector2(0.7593,0.07002),Vector2(0.6584,0.1215),Vector2(0.6584,0.09583),Vector2(0.6535,0.1086),Vector2(0.6535,0.1343),Vector2(0.6545,0.08619),Vector2(0.6584,0.1214),Vector2(0.6584,0.1471),Vector2(0.6734,0.09157),Vector2(0.6734,0.1172),Vector2(0.6932,0.1172),Vector2(0.6932,0.09157),Vector2(0.7673,0.1214),Vector2(0.7524,0.1256),Vector2(0.7519,0.103),Vector2(0.7673,0.1471),Vector2(0.7524,0.1513),Vector2(0.7326,0.1513),Vector2(0.7326,0.1256),Vector2(0.7324,0.103),Vector2(0.7673,0.09583),Vector2(0.7723,0.1086),Vector2(0.7673,0.1215),Vector2(0.7723,0.1343),Vector2(0.6577,0.0703),Vector2(0.6627,0.05909),Vector2(0.6813,0.03662),Vector2(0.6723,0.04066),Vector2(0.6952,0.03583),Vector2(0.7565,0.05069),Vector2(0.7535,0.04066),Vector2(0.7535,0.05994),Vector2(0.7482,0.0521),Vector2(0.7488,0.04467),Vector2(0.7482,0.03908),Vector2(0.7478,0.07332),Vector2(0.7445,0.06163),Vector2(0.7314,0.07293),Vector2(0.7306,0.06006),Vector2(0.7299,0.0483),Vector2(0.7417,0.05084),Vector2(0.6693,0.05069),Vector2(0.6723,0.05994),Vector2(0.7324,0.06941),Vector2(0.7519,0.06941),Vector2(0.7503,0.05429),Vector2(0.732,0.05429),Vector2(0.7478,0.04407),Vector2(0.7314,0.04387),Vector2(0.7503,0.08631),Vector2(0.732,0.08631),Vector2(0.7299,0.03299),Vector2(0.7417,0.03457),Vector2(0.7408,0.04057),Vector2(0.7296,0.03821),Vector2(0.7326,0.1172),Vector2(0.7524,0.1172),Vector2(0.7524,0.09157),Vector2(0.7326,0.09157),Vector2(0.6932,0.1513),Vector2(0.6734,0.1513),Vector2(0.6734,0.1256),Vector2(0.6932,0.1256),Vector2(0.7445,0.03662),Vector2(0.7306,0.03583),Vector2(0.6813,0.06163),Vector2(0.6952,0.06006),Vector2(0.7129,0.06941),Vector2(0.7129,0.05429),Vector2(0.7129,0.04381),Vector2(0.7129,0.0728),Vector2(0.7129,0.08631),Vector2(0.7129,0.103),Vector2(0.7129,0.03246),Vector2(0.7129,0.03742),Vector2(0.7129,0.04745),Vector2(0.7129,0.1172),Vector2(0.7129,0.09157),Vector2(0.7129,0.1513),Vector2(0.7129,0.1256),Vector2(0.7129,0.03556),Vector2(0.7129,0.05954)]);
{ .SetTexCoord }
IndexedFaceSet723.TexCoord := TextureCoordinate724;
Coordinate725 := TCoordinateNode.Create;
Coordinate725.SetPoint([Vector3(-1.331,-0.2299,0.7138),Vector3(1.331,-0.2299,0.7138),Vector3(-1.563,0.07305,-1.268),Vector3(1.563,0.07305,-1.268),Vector3(-1.331,-0.07451,0.7385),Vector3(1.331,-0.07451,0.7385),Vector3(-1.563,0.2531,-1.239),Vector3(1.563,0.2531,-1.239),Vector3(-1.536,-0.127,-0.00304),Vector3(1.536,-0.127,-0.00304),Vector3(1.536,0.05032,0.0252),Vector3(-1.536,0.05032,0.0252),Vector3(-1.015,-0.2542,1.071),Vector3(1.015,-0.2542,1.071),Vector3(1.015,-0.1625,1.086),Vector3(-1.015,-0.1625,1.086),Vector3(0.5645,0.04305,-1.272),Vector3(-0.5313,-0.257,0.7253),Vector3(-0.5313,-0.05236,0.7579),Vector3(-0.5645,0.2831,-1.234),Vector3(-0.5607,-0.1565,-0.007746),Vector3(0.5607,0.07987,0.02991),Vector3(-0.4876,-0.283,1.2),Vector3(0.4876,-0.1751,1.217),Vector3(-0.5645,0.04305,-1.272),Vector3(0.5313,-0.257,0.7253),Vector3(0.5313,-0.05236,0.7579),Vector3(0.5645,0.2831,-1.234),Vector3(0.5607,-0.1565,-0.007746),Vector3(-0.5607,0.07987,0.02991),Vector3(0.4876,-0.283,1.2),Vector3(-0.4876,-0.1751,1.217),Vector3(-1.073,-0.2176,0.4108),Vector3(-1.073,0.007936,0.4467),Vector3(-0.7997,-0.2294,1.21),Vector3(1.585,-0.1049,0.4287),Vector3(-1.706,0.05553,-0.5782),Vector3(-1.134,-0.06447,-0.5973),Vector3(1.134,0.1755,-0.559),Vector3(1.706,0.05553,-0.5782),Vector3(-1.585,-0.1049,0.4287),Vector3(-0.9063,-0.2816,0.9715),Vector3(1.251,-0.187,0.9442),Vector3(0.9063,-0.1054,0.9996),Vector3(-1.251,-0.187,0.9442),Vector3(1.073,-0.2176,0.4108),Vector3(1.073,0.007936,0.4467),Vector3(0.7997,-0.2294,1.21),Vector3(1.134,-0.06447,-0.5973),Vector3(-1.134,0.1755,-0.559),Vector3(0.9063,-0.2816,0.9715),Vector3(-0.9063,-0.1054,0.9996),Vector3(0,-0.2176,0.4108),Vector3(0,0.007936,0.4467),Vector3(0,-0.2425,1.293),Vector3(0,-0.06447,-0.5973),Vector3(0,0.1755,-0.559),Vector3(0,-0.2846,1.013),Vector3(0,-0.1157,1.04),Vector3(-1.457,-0.1894,0.4153),Vector3(-1.134,0.04305,-1.272),Vector3(1.563,-0.03447,-0.5925),Vector3(-1.001,-0.2565,0.7175),Vector3(1.001,-0.05045,0.7503),Vector3(1.457,-0.02026,0.4422),Vector3(1.134,0.2831,-1.234),Vector3(-1.563,0.1455,-0.5638),Vector3(1.441,-0.1518,0.7236),Vector3(-1.441,-0.1518,0.7236),Vector3(1.706,0.1631,-1.253),Vector3(-1.706,0.1631,-1.253),Vector3(-1.563,-0.03447,-0.5925),Vector3(1.457,-0.1894,0.4153),Vector3(1.563,0.1455,-0.5638),Vector3(-1.457,-0.02026,0.4422),Vector3(-1.119,-0.1565,-0.007746),Vector3(1.119,0.07987,0.02991),Vector3(1.676,-0.03833,0.01108),Vector3(-1.676,-0.03833,0.01108),Vector3(-0.8264,-0.2777,1.145),Vector3(1.031,-0.2122,1.103),Vector3(0.8264,-0.1631,1.163),Vector3(-1.031,-0.2122,1.103),Vector3(-1.165,-0.2565,0.9437),Vector3(1.165,-0.2565,0.9437),Vector3(1.165,-0.1207,0.9654),Vector3(-1.165,-0.1207,0.9654),Vector3(1.134,0.04305,-1.272),Vector3(1.001,-0.2565,0.7175),Vector3(-1.001,-0.05045,0.7503),Vector3(-1.134,0.2831,-1.234),Vector3(1.119,-0.1565,-0.007746),Vector3(-1.119,0.07987,0.02991),Vector3(0.8264,-0.2777,1.145),Vector3(-0.8264,-0.1631,1.163),Vector3(-0.5493,-0.2176,0.4108),Vector3(-0.5493,0.007936,0.4467),Vector3(-0.4809,-0.2392,1.272),Vector3(-0.5645,-0.06447,-0.5973),Vector3(0.5645,0.1755,-0.559),Vector3(-0.5076,-0.2838,1.003),Vector3(0.5076,-0.1131,1.03),Vector3(0,0.04305,-1.272),Vector3(0,-0.2572,0.7279),Vector3(0,-0.053,0.7605),Vector3(0,0.2831,-1.234),Vector3(0,-0.1565,-0.007746),Vector3(0,0.07987,0.02991),Vector3(0,-0.2847,1.218),Vector3(0,-0.1791,1.235),Vector3(0.5493,-0.2176,0.4108),Vector3(0.5493,0.007936,0.4467),Vector3(0.4809,-0.2392,1.272),Vector3(0.5645,-0.06447,-0.5973),Vector3(-0.5645,0.1755,-0.559),Vector3(0.5076,-0.2838,1.003),Vector3(-0.5076,-0.1131,1.03)]);
{ .SetCoord }
IndexedFaceSet723.Coord := Coordinate725;
{ .SetGeometry }
Shape721.Geometry := IndexedFaceSet723;
{ .AddChild }
Transform720.AddChildren([Shape721]);
{ .AddChildren }
HAnimSegment719.AddChildren([Transform720]);
Coordinate726 := TCoordinateNode.Create;
Coordinate726 := Coordinate725;
{ .SetCoord }
HAnimSegment719.Coord := Coordinate726;
HAnimDisplacer727 := THAnimDisplacerNode.Create;
HAnimDisplacer727.NameField := 'tongue_morphinterpolator';
HAnimDisplacer727.SetCoordIndex([0,1,4,5,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,37,38,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,60,62,63,65,75,76,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116]);
HAnimDisplacer727.SetDisplacements([Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.112,0),Vector3(0,0.25,0.1177),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.1865,0),Vector3(0,0.1457,0),Vector3(0,0.2501,0.118),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.25,0.1177),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.1865,0),Vector3(0,0.1457,0),Vector3(0,0.2501,0.118),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1615,0.118),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.1614,0.1175),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1457,0),Vector3(0,0.1799,0),Vector3(0,0.1267,0),Vector3(0,0.1457,0),Vector3(0,0.0572,0),Vector3(0,0.2501,0.118),Vector3(0,0.1865,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.1404,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1614,0.118),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1615,0.118),Vector3(0,0.1457,0),Vector3(0,0.1458,0),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.0572,0),Vector3(0,0.25,0.118),Vector3(0,0.1865,0),Vector3(0,0.1457,0),Vector3(0,0.25,0.1177),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.1865,0),Vector3(0,0.1457,0),Vector3(0,0.25,0.118),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.1121,0),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.0572,0),Vector3(0,0.25,0.118),Vector3(0,0.1865,0)]);
{ .AddDisplacers }
HAnimSegment719.SetDisplacers([HAnimDisplacer727]);
HAnimDisplacer728 := THAnimDisplacerNode.Create;
HAnimDisplacer728.NameField := 'tongue_morphinterpolator';
HAnimDisplacer728.SetCoordIndex([19,20,27,44,62,65,83,86,90,105]);
HAnimDisplacer728.SetDisplacements([Vector3(0,0,0.322),Vector3(0,0,0.0686),Vector3(-0.0413,0,0.436),Vector3(0,0,0.0688),Vector3(0,0,0.0686),Vector3(0,0,0.322),Vector3(0,0,0.0683),Vector3(0,0,0.0686),Vector3(0,0,0.322),Vector3(0,0,0.322)]);
{ .AddDisplacers }
HAnimSegment719.SetDisplacers([HAnimDisplacer728]);
HAnimDisplacer729 := THAnimDisplacerNode.Create;
HAnimDisplacer729.NameField := 'tongue_morphinterpolator';
HAnimDisplacer729.SetCoordIndex([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116]);
HAnimDisplacer729.SetDisplacements([Vector3(0,-1.3011,-0.5882),Vector3(0,-1.3011,-0.5882),Vector3(0,-0.1823,0.11),Vector3(0,-0.1474,0.036),Vector3(0,-1.3165,-0.5403),Vector3(0,-1.3165,-0.5403),Vector3(0,-0.1823,0.11),Vector3(0,-0.1499,0.048),Vector3(0,-1.154,-0.3156),Vector3(0,-1.154,-0.3156),Vector3(0,-1.0543,-0.2883),Vector3(0,-1.0543,-0.2883),Vector3(0,-1.4118,-0.614),Vector3(0,-1.4118,-0.614),Vector3(0,-1.4215,-0.5862),Vector3(0,-1.4215,-0.5862),Vector3(0,-0.1469,0.033),Vector3(0,-1.303,-0.5972),Vector3(0,-1.3236,-0.5343),Vector3(0,-0.1504,0.05),Vector3(0,-1.1455,-0.3322),Vector3(0,-1.0581,-0.2783),Vector3(0,-1.508,-0.6254),Vector3(0,-1.5299,-0.5751),Vector3(0,-0.1469,0.033),Vector3(0,-1.303,-0.5972),Vector3(0,-1.3236,-0.5343),Vector3(0,-0.1504,0.05),Vector3(0,-1.1455,-0.3322),Vector3(0,-1.0581,-0.2783),Vector3(0,-1.508,-0.6254),Vector3(0,-1.5299,-0.5751),Vector3(0,-1.1594,-0.4717),Vector3(0,-1.2139,-0.3495),Vector3(0,-1.5196,-0.6002),Vector3(0,-1.2771,-0.4418),Vector3(0,-0.7623,-0.1091),Vector3(0,-0.7467,-0.1522),Vector3(0,-0.7779,-0.0661),Vector3(0,-0.7623,-0.1091),Vector3(0,-1.2771,-0.4418),Vector3(0,-1.3794,-0.6176),Vector3(0,-1.376,-0.5863),Vector3(0,-1.3976,-0.5635),Vector3(0,-1.376,-0.5863),Vector3(0,-1.1594,-0.4717),Vector3(0,-1.2139,-0.3495),Vector3(0,-1.5196,-0.6002),Vector3(0,-0.7467,-0.1522),Vector3(0,-0.7779,-0.0661),Vector3(0,-1.3794,-0.6176),Vector3(0,-1.3976,-0.5635),Vector3(0,-1.1594,-0.4717),Vector3(0,-1.2139,-0.3495),Vector3(0,-1.5585,-0.6173),Vector3(0,-0.7467,-0.1522),Vector3(0,-0.7779,-0.0661),Vector3(0,-1.3924,-0.6203),Vector3(0,-1.4093,-0.5685),Vector3(0,-1.1636,-0.4622),Vector3(0,-0.1469,0.033),Vector3(0,-0.7506,-0.1415),Vector3(0,-1.3005,-0.5967),Vector3(0,-1.3216,-0.5334),Vector3(0,-1.2107,-0.3581),Vector3(0,-0.1504,0.05),Vector3(0,-0.774,-0.0768),Vector3(0,-1.3082,-0.564),Vector3(0,-1.3082,-0.564),Vector3(0,-0.1487,0.042),Vector3(0,-0.1823,0.109),Vector3(0,-0.7506,-0.1415),Vector3(0,-1.1636,-0.4622),Vector3(0,-0.774,-0.0768),Vector3(0,-1.2107,-0.3581),Vector3(0,-1.1455,-0.3322),Vector3(0,-1.0581,-0.2783),Vector3(0,-1.0047,-0.2827),Vector3(0,-1.0047,-0.2827),Vector3(0,-1.4823,-0.6158),Vector3(0,-1.4248,-0.6028),Vector3(0,-1.5049,-0.5622),Vector3(0,-1.4248,-0.6028),Vector3(0,-1.3715,-0.6082),Vector3(0,-1.3715,-0.6082),Vector3(0,-1.3853,-0.5666),Vector3(0,-1.3853,-0.5666),Vector3(0,-0.1469,0.033),Vector3(0,-1.3005,-0.5967),Vector3(0,-1.3216,-0.5334),Vector3(0,-0.1504,0.05),Vector3(0,-1.1455,-0.3322),Vector3(0,-1.0581,-0.2783),Vector3(0,-1.4823,-0.6158),Vector3(0,-1.5049,-0.5622),Vector3(0,-1.1594,-0.4717),Vector3(0,-1.2139,-0.3495),Vector3(0,-1.5488,-0.6128),Vector3(0,-0.7467,-0.1522),Vector3(0,-0.7779,-0.0661),Vector3(0,-1.3892,-0.62),Vector3(0,-1.4069,-0.5673),Vector3(0,-0.1469,0.033),Vector3(0,-1.3038,-0.5974),Vector3(0,-1.325,-0.5347),Vector3(0,-0.1504,0.05),Vector3(0,-1.1455,-0.3322),Vector3(0,-1.0581,-0.2783),Vector3(0,-1.5163,-0.6283),Vector3(0,-1.5379,-0.5794),Vector3(0,-1.1594,-0.4717),Vector3(0,-1.2139,-0.3495),Vector3(0,-1.5488,-0.6128),Vector3(0,-0.7467,-0.1522),Vector3(0,-0.7779,-0.0661),Vector3(0,-1.3892,-0.62),Vector3(0,-1.4069,-0.5673)]);
{ .AddDisplacers }
HAnimSegment719.SetDisplacers([HAnimDisplacer729]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment719]);
HAnimSegment730 := THAnimSegmentNode.Create;
HAnimSegment730.NameField := 'upper_teeth';
Transform731 := TTransformNode.Create;
Transform731.Translation := Vector3(0,9.723,11.67);
Shape732 := TShapeNode.Create;
Appearance733 := TAppearanceNode.Create;
Appearance733 := Appearance97;
{ .SetAppearance }
Shape732.Appearance := Appearance733;
IndexedFaceSet734 := TIndexedFaceSetNode.Create;
IndexedFaceSet734.SetCoordIndex([0,521,265,-1,265,524,0,-1,1,525,265,-1,265,521,1,-1,4,523,265,-1,265,525,4,-1,3,524,265,-1,265,523,3,-1,2,522,266,-1,266,526,2,-1,23,558,266,-1,266,522,23,-1,24,551,266,-1,266,558,24,-1,5,526,266,-1,266,551,5,-1,3,523,267,-1,267,528,3,-1,4,529,267,-1,267,523,4,-1,7,527,267,-1,267,529,7,-1,6,528,267,-1,267,527,6,-1,5,551,268,-1,268,530,5,-1,24,559,268,-1,268,551,24,-1,25,552,268,-1,268,559,25,-1,8,530,268,-1,268,552,8,-1,6,527,269,-1,269,532,6,-1,7,533,269,-1,269,527,7,-1,10,531,269,-1,269,533,10,-1,9,532,269,-1,269,531,9,-1,8,552,270,-1,270,534,8,-1,25,560,270,-1,270,552,25,-1,26,553,270,-1,270,560,26,-1,11,534,270,-1,270,553,11,-1,9,531,271,-1,271,536,9,-1,10,537,271,-1,271,531,10,-1,13,535,271,-1,271,537,13,-1,12,536,271,-1,271,535,12,-1,11,553,272,-1,272,538,11,-1,26,561,272,-1,272,553,26,-1,27,554,272,-1,272,561,27,-1,14,538,272,-1,272,554,14,-1,12,535,273,-1,273,540,12,-1,13,541,273,-1,273,535,13,-1,16,539,273,-1,273,541,16,-1,15,540,273,-1,273,539,15,-1,14,554,274,-1,274,542,14,-1,27,562,274,-1,274,554,27,-1,28,555,274,-1,274,562,28,-1,17,542,274,-1,274,555,17,-1,15,539,275,-1,275,544,15,-1,16,545,275,-1,275,539,16,-1,19,543,275,-1,275,545,19,-1,18,544,275,-1,275,543,18,-1,17,555,276,-1,276,546,17,-1,28,563,276,-1,276,555,28,-1,29,556,276,-1,276,563,29,-1,20,546,276,-1,276,556,20,-1,18,543,277,-1,277,548,18,-1,19,549,277,-1,277,543,19,-1,21,547,277,-1,277,549,21,-1,160,548,277,-1,277,547,160,-1,20,556,278,-1,278,550,20,-1,29,564,278,-1,278,556,29,-1,30,557,278,-1,278,564,30,-1,22,550,278,-1,278,557,22,-1,2,526,279,-1,279,580,2,-1,5,581,279,-1,279,526,5,-1,33,565,279,-1,279,581,33,-1,32,580,279,-1,279,565,32,-1,5,530,280,-1,280,581,5,-1,8,582,280,-1,280,530,8,-1,34,566,280,-1,280,582,34,-1,33,581,280,-1,280,566,33,-1,8,534,281,-1,281,582,8,-1,11,583,281,-1,281,534,11,-1,35,567,281,-1,281,583,35,-1,34,582,281,-1,281,567,34,-1,11,538,282,-1,282,583,11,-1,14,584,282,-1,282,538,14,-1,36,568,282,-1,282,584,36,-1,35,583,282,-1,282,568,35,-1,14,542,283,-1,283,584,14,-1,17,585,283,-1,283,542,17,-1,37,569,283,-1,283,585,37,-1,36,584,283,-1,283,569,36,-1,17,546,284,-1,284,585,17,-1,20,586,284,-1,284,546,20,-1,38,570,284,-1,284,586,38,-1,37,585,284,-1,284,570,37,-1,20,550,285,-1,285,586,20,-1,22,587,285,-1,285,550,22,-1,168,571,285,-1,285,587,168,-1,38,586,285,-1,285,571,38,-1,21,549,286,-1,286,839,21,-1,19,588,286,-1,286,549,19,-1,39,572,286,-1,286,588,39,-1,170,839,286,-1,286,572,170,-1,19,545,287,-1,287,588,19,-1,16,589,287,-1,287,545,16,-1,40,573,287,-1,287,589,40,-1,39,588,287,-1,287,573,39,-1,16,541,288,-1,288,589,16,-1,13,590,288,-1,288,541,13,-1,41,574,288,-1,288,590,41,-1,40,589,288,-1,288,574,40,-1,13,537,289,-1,289,590,13,-1,10,591,289,-1,289,537,10,-1,42,575,289,-1,289,591,42,-1,41,590,289,-1,289,575,41,-1,10,533,290,-1,290,591,10,-1,7,592,290,-1,290,533,7,-1,43,576,290,-1,290,592,43,-1,42,591,290,-1,290,576,42,-1,7,529,291,-1,291,592,7,-1,4,593,291,-1,291,529,4,-1,44,577,291,-1,291,593,44,-1,43,592,291,-1,291,577,43,-1,4,525,292,-1,292,593,4,-1,1,579,292,-1,292,525,1,-1,31,578,292,-1,292,579,31,-1,44,593,292,-1,292,578,44,-1,24,558,293,-1,293,595,24,-1,23,594,293,-1,293,558,23,-1,45,595,293,-1,293,594,45,-1,25,559,294,-1,294,596,25,-1,24,595,294,-1,294,559,24,-1,45,596,294,-1,294,595,45,-1,26,560,295,-1,295,597,26,-1,25,596,295,-1,295,560,25,-1,45,597,295,-1,295,596,45,-1,27,561,296,-1,296,598,27,-1,26,597,296,-1,296,561,26,-1,45,598,296,-1,296,597,45,-1,28,562,297,-1,297,599,28,-1,27,598,297,-1,297,562,27,-1,45,599,297,-1,297,598,45,-1,29,563,298,-1,298,600,29,-1,28,599,298,-1,298,563,28,-1,45,600,298,-1,298,599,45,-1,30,564,299,-1,299,601,30,-1,29,600,299,-1,299,564,29,-1,45,601,299,-1,299,600,45,-1,75,667,300,-1,300,670,75,-1,76,668,300,-1,300,667,76,-1,77,669,300,-1,300,668,77,-1,78,670,300,-1,300,669,78,-1,79,675,301,-1,301,678,79,-1,80,676,301,-1,301,675,80,-1,81,677,301,-1,301,676,81,-1,82,678,301,-1,301,677,82,-1,83,683,302,-1,302,686,83,-1,84,684,302,-1,302,683,84,-1,85,685,302,-1,302,684,85,-1,86,686,302,-1,302,685,86,-1,87,691,303,-1,303,694,87,-1,88,692,303,-1,303,691,88,-1,89,693,303,-1,303,692,89,-1,90,694,303,-1,303,693,90,-1,91,699,304,-1,304,702,91,-1,92,700,304,-1,304,699,92,-1,93,701,304,-1,304,700,93,-1,94,702,304,-1,304,701,94,-1,95,707,305,-1,305,710,95,-1,96,708,305,-1,305,707,96,-1,97,709,305,-1,305,708,97,-1,98,710,305,-1,305,709,98,-1,99,715,306,-1,306,718,99,-1,100,716,306,-1,306,715,100,-1,101,717,306,-1,306,716,101,-1,102,718,306,-1,306,717,102,-1,32,565,307,-1,307,609,32,-1,33,610,307,-1,307,565,33,-1,104,752,307,-1,307,610,104,-1,103,609,307,-1,307,752,103,-1,33,603,308,-1,308,610,33,-1,44,611,308,-1,308,603,44,-1,105,753,308,-1,308,611,105,-1,104,610,308,-1,308,753,104,-1,44,578,309,-1,309,611,44,-1,31,612,309,-1,309,578,31,-1,106,754,309,-1,309,612,106,-1,105,611,309,-1,309,754,105,-1,31,602,310,-1,310,612,31,-1,32,609,310,-1,310,602,32,-1,103,755,310,-1,310,609,103,-1,106,612,310,-1,310,755,106,-1,38,571,311,-1,311,617,38,-1,168,618,311,-1,311,571,168,-1,108,756,311,-1,311,618,108,-1,107,617,311,-1,311,756,107,-1,168,900,312,-1,312,618,168,-1,170,619,312,-1,312,900,170,-1,109,757,312,-1,312,619,109,-1,108,618,312,-1,312,757,108,-1,170,572,313,-1,313,619,170,-1,39,620,313,-1,313,572,39,-1,110,758,313,-1,313,620,110,-1,109,619,313,-1,313,758,109,-1,39,604,314,-1,314,620,39,-1,38,617,314,-1,314,604,38,-1,107,759,314,-1,314,617,107,-1,110,620,314,-1,314,759,110,-1,39,573,315,-1,315,625,39,-1,40,626,315,-1,315,573,40,-1,112,760,315,-1,315,626,112,-1,111,625,315,-1,315,760,111,-1,40,605,316,-1,316,626,40,-1,37,627,316,-1,316,605,37,-1,113,761,316,-1,316,627,113,-1,112,626,316,-1,316,761,112,-1,37,570,317,-1,317,627,37,-1,38,628,317,-1,317,570,38,-1,114,762,317,-1,317,628,114,-1,113,627,317,-1,317,762,113,-1,38,604,318,-1,318,628,38,-1,39,625,318,-1,318,604,39,-1,111,763,318,-1,318,625,111,-1,114,628,318,-1,318,763,114,-1,40,574,319,-1,319,633,40,-1,41,634,319,-1,319,574,41,-1,116,764,319,-1,319,634,116,-1,115,633,319,-1,319,764,115,-1,41,606,320,-1,320,634,41,-1,36,635,320,-1,320,606,36,-1,117,765,320,-1,320,635,117,-1,116,634,320,-1,320,765,116,-1,36,569,321,-1,321,635,36,-1,37,636,321,-1,321,569,37,-1,118,766,321,-1,321,636,118,-1,117,635,321,-1,321,766,117,-1,37,605,322,-1,322,636,37,-1,40,633,322,-1,322,605,40,-1,115,767,322,-1,322,633,115,-1,118,636,322,-1,322,767,118,-1,41,575,323,-1,323,641,41,-1,42,642,323,-1,323,575,42,-1,120,768,323,-1,323,642,120,-1,119,641,323,-1,323,768,119,-1,42,607,324,-1,324,642,42,-1,35,643,324,-1,324,607,35,-1,121,769,324,-1,324,643,121,-1,120,642,324,-1,324,769,120,-1,35,568,325,-1,325,643,35,-1,36,644,325,-1,325,568,36,-1,122,770,325,-1,325,644,122,-1,121,643,325,-1,325,770,121,-1,36,606,326,-1,326,644,36,-1,41,641,326,-1,326,606,41,-1,119,771,326,-1,326,641,119,-1,122,644,326,-1,326,771,122,-1,42,576,327,-1,327,649,42,-1,43,650,327,-1,327,576,43,-1,124,772,327,-1,327,650,124,-1,123,649,327,-1,327,772,123,-1,43,608,328,-1,328,650,43,-1,34,651,328,-1,328,608,34,-1,125,773,328,-1,328,651,125,-1,124,650,328,-1,328,773,124,-1,34,567,329,-1,329,651,34,-1,35,652,329,-1,329,567,35,-1,126,774,329,-1,329,652,126,-1,125,651,329,-1,329,774,125,-1,35,607,330,-1,330,652,35,-1,42,649,330,-1,330,607,42,-1,123,775,330,-1,330,649,123,-1,126,652,330,-1,330,775,126,-1,43,577,331,-1,331,657,43,-1,44,658,331,-1,331,577,44,-1,128,776,331,-1,331,658,128,-1,127,657,331,-1,331,776,127,-1,44,603,332,-1,332,658,44,-1,33,659,332,-1,332,603,33,-1,129,777,332,-1,332,659,129,-1,128,658,332,-1,332,777,128,-1,33,566,333,-1,333,659,33,-1,34,660,333,-1,333,566,34,-1,130,778,333,-1,333,660,130,-1,129,659,333,-1,333,778,129,-1,34,608,334,-1,334,660,34,-1,43,657,334,-1,334,608,43,-1,127,779,334,-1,334,657,127,-1,130,660,334,-1,334,779,130,-1,45,594,335,-1,335,953,45,-1,23,666,335,-1,335,594,23,-1,131,780,335,-1,335,666,131,-1,234,953,335,-1,335,780,234,-1,46,613,336,-1,336,671,46,-1,47,672,336,-1,336,613,47,-1,76,667,336,-1,336,672,76,-1,75,671,336,-1,336,667,75,-1,47,614,337,-1,337,672,47,-1,48,673,337,-1,337,614,48,-1,77,668,337,-1,337,673,77,-1,76,672,337,-1,337,668,76,-1,48,615,338,-1,338,673,48,-1,49,674,338,-1,338,615,49,-1,78,669,338,-1,338,674,78,-1,77,673,338,-1,338,669,77,-1,49,616,339,-1,339,674,49,-1,46,671,339,-1,339,616,46,-1,75,670,339,-1,339,671,75,-1,78,674,339,-1,339,670,78,-1,50,621,340,-1,340,679,50,-1,51,680,340,-1,340,621,51,-1,80,675,340,-1,340,680,80,-1,79,679,340,-1,340,675,79,-1,51,622,341,-1,341,680,51,-1,52,681,341,-1,341,622,52,-1,81,676,341,-1,341,681,81,-1,80,680,341,-1,341,676,80,-1,52,623,342,-1,342,681,52,-1,53,682,342,-1,342,623,53,-1,82,677,342,-1,342,682,82,-1,81,681,342,-1,342,677,81,-1,53,624,343,-1,343,682,53,-1,50,679,343,-1,343,624,50,-1,79,678,343,-1,343,679,79,-1,82,682,343,-1,343,678,82,-1,54,629,344,-1,344,687,54,-1,55,688,344,-1,344,629,55,-1,84,683,344,-1,344,688,84,-1,83,687,344,-1,344,683,83,-1,55,630,345,-1,345,688,55,-1,56,689,345,-1,345,630,56,-1,85,684,345,-1,345,689,85,-1,84,688,345,-1,345,684,84,-1,56,631,346,-1,346,689,56,-1,57,690,346,-1,346,631,57,-1,86,685,346,-1,346,690,86,-1,85,689,346,-1,346,685,85,-1,57,632,347,-1,347,690,57,-1,54,687,347,-1,347,632,54,-1,83,686,347,-1,347,687,83,-1,86,690,347,-1,347,686,86,-1,58,637,348,-1,348,695,58,-1,59,696,348,-1,348,637,59,-1,88,691,348,-1,348,696,88,-1,87,695,348,-1,348,691,87,-1,59,638,349,-1,349,696,59,-1,60,697,349,-1,349,638,60,-1,89,692,349,-1,349,697,89,-1,88,696,349,-1,349,692,88,-1,60,639,350,-1,350,697,60,-1,61,698,350,-1,350,639,61,-1,90,693,350,-1,350,698,90,-1,89,697,350,-1,350,693,89,-1,61,640,351,-1,351,698,61,-1,58,695,351,-1,351,640,58,-1,87,694,351,-1,351,695,87,-1,90,698,351,-1,351,694,90,-1,62,645,352,-1,352,703,62,-1,63,704,352,-1,352,645,63,-1,92,699,352,-1,352,704,92,-1,91,703,352,-1,352,699,91,-1,63,646,353,-1,353,704,63,-1,64,705,353,-1,353,646,64,-1,93,700,353,-1,353,705,93,-1,92,704,353,-1,353,700,92,-1,64,647,354,-1,354,705,64,-1,65,706,354,-1,354,647,65,-1,94,701,354,-1,354,706,94,-1,93,705,354,-1,354,701,93,-1,65,648,355,-1,355,706,65,-1,62,703,355,-1,355,648,62,-1,91,702,355,-1,355,703,91,-1,94,706,355,-1,355,702,94,-1,66,653,356,-1,356,711,66,-1,67,712,356,-1,356,653,67,-1,96,707,356,-1,356,712,96,-1,95,711,356,-1,356,707,95,-1,67,654,357,-1,357,712,67,-1,68,713,357,-1,357,654,68,-1,97,708,357,-1,357,713,97,-1,96,712,357,-1,357,708,96,-1,68,655,358,-1,358,713,68,-1,69,714,358,-1,358,655,69,-1,98,709,358,-1,358,714,98,-1,97,713,358,-1,358,709,97,-1,69,656,359,-1,359,714,69,-1,66,711,359,-1,359,656,66,-1,95,710,359,-1,359,711,95,-1,98,714,359,-1,359,710,98,-1,70,661,360,-1,360,719,70,-1,71,720,360,-1,360,661,71,-1,100,715,360,-1,360,720,100,-1,99,719,360,-1,360,715,99,-1,71,662,361,-1,361,720,71,-1,72,721,361,-1,361,662,72,-1,101,716,361,-1,361,721,101,-1,100,720,361,-1,361,716,100,-1,72,663,362,-1,362,721,72,-1,73,722,362,-1,362,663,73,-1,102,717,362,-1,362,722,102,-1,101,721,362,-1,362,717,101,-1,73,664,363,-1,363,722,73,-1,70,719,363,-1,363,664,70,-1,99,718,363,-1,363,719,99,-1,102,722,363,-1,363,718,102,-1,104,724,364,-1,364,752,104,-1,47,613,364,-1,364,724,47,-1,46,723,364,-1,364,613,46,-1,103,752,364,-1,364,723,103,-1,105,725,365,-1,365,753,105,-1,48,614,365,-1,365,725,48,-1,47,724,365,-1,365,614,47,-1,104,753,365,-1,365,724,104,-1,106,726,366,-1,366,754,106,-1,49,615,366,-1,366,726,49,-1,48,725,366,-1,366,615,48,-1,105,754,366,-1,366,725,105,-1,103,723,367,-1,367,755,103,-1,46,616,367,-1,367,723,46,-1,49,726,367,-1,367,616,49,-1,106,755,367,-1,367,726,106,-1,108,728,368,-1,368,756,108,-1,51,621,368,-1,368,728,51,-1,50,727,368,-1,368,621,50,-1,107,756,368,-1,368,727,107,-1,109,729,369,-1,369,757,109,-1,52,622,369,-1,369,729,52,-1,51,728,369,-1,369,622,51,-1,108,757,369,-1,369,728,108,-1,110,730,370,-1,370,758,110,-1,53,623,370,-1,370,730,53,-1,52,729,370,-1,370,623,52,-1,109,758,370,-1,370,729,109,-1,107,727,371,-1,371,759,107,-1,50,624,371,-1,371,727,50,-1,53,730,371,-1,371,624,53,-1,110,759,371,-1,371,730,110,-1,112,732,372,-1,372,760,112,-1,55,629,372,-1,372,732,55,-1,54,731,372,-1,372,629,54,-1,111,760,372,-1,372,731,111,-1,113,733,373,-1,373,761,113,-1,56,630,373,-1,373,733,56,-1,55,732,373,-1,373,630,55,-1,112,761,373,-1,373,732,112,-1,114,734,374,-1,374,762,114,-1,57,631,374,-1,374,734,57,-1,56,733,374,-1,374,631,56,-1,113,762,374,-1,374,733,113,-1,111,731,375,-1,375,763,111,-1,54,632,375,-1,375,731,54,-1,57,734,375,-1,375,632,57,-1,114,763,375,-1,375,734,114,-1,116,736,376,-1,376,764,116,-1,59,637,376,-1,376,736,59,-1,58,735,376,-1,376,637,58,-1,115,764,376,-1,376,735,115,-1,117,737,377,-1,377,765,117,-1,60,638,377,-1,377,737,60,-1,59,736,377,-1,377,638,59,-1,116,765,377,-1,377,736,116,-1,118,738,378,-1,378,766,118,-1,61,639,378,-1,378,738,61,-1,60,737,378,-1,378,639,60,-1,117,766,378,-1,378,737,117,-1,115,735,379,-1,379,767,115,-1,58,640,379,-1,379,735,58,-1,61,738,379,-1,379,640,61,-1,118,767,379,-1,379,738,118,-1,120,740,380,-1,380,768,120,-1,63,645,380,-1,380,740,63,-1,62,739,380,-1,380,645,62,-1,119,768,380,-1,380,739,119,-1,121,741,381,-1,381,769,121,-1,64,646,381,-1,381,741,64,-1,63,740,381,-1,381,646,63,-1,120,769,381,-1,381,740,120,-1,122,742,382,-1,382,770,122,-1,65,647,382,-1,382,742,65,-1,64,741,382,-1,382,647,64,-1,121,770,382,-1,382,741,121,-1,119,739,383,-1,383,771,119,-1,62,648,383,-1,383,739,62,-1,65,742,383,-1,383,648,65,-1,122,771,383,-1,383,742,122,-1,124,744,384,-1,384,772,124,-1,67,653,384,-1,384,744,67,-1,66,743,384,-1,384,653,66,-1,123,772,384,-1,384,743,123,-1,125,745,385,-1,385,773,125,-1,68,654,385,-1,385,745,68,-1,67,744,385,-1,385,654,67,-1,124,773,385,-1,385,744,124,-1,126,746,386,-1,386,774,126,-1,69,655,386,-1,386,746,69,-1,68,745,386,-1,386,655,68,-1,125,774,386,-1,386,745,125,-1,123,743,387,-1,387,775,123,-1,66,656,387,-1,387,743,66,-1,69,746,387,-1,387,656,69,-1,126,775,387,-1,387,746,126,-1,128,748,388,-1,388,776,128,-1,71,661,388,-1,388,748,71,-1,70,747,388,-1,388,661,70,-1,127,776,388,-1,388,747,127,-1,129,749,389,-1,389,777,129,-1,72,662,389,-1,389,749,72,-1,71,748,389,-1,389,662,71,-1,128,777,389,-1,389,748,128,-1,130,750,390,-1,390,778,130,-1,73,663,390,-1,390,750,73,-1,72,749,390,-1,390,663,72,-1,129,778,390,-1,390,749,129,-1,127,747,391,-1,391,779,127,-1,70,664,391,-1,391,747,70,-1,73,750,391,-1,391,664,73,-1,130,779,391,-1,391,750,130,-1,131,751,392,-1,392,780,131,-1,74,665,392,-1,392,751,74,-1,264,1040,392,-1,392,665,264,-1,234,780,392,-1,392,1040,234,-1,132,784,393,-1,393,781,132,-1,135,783,393,-1,393,784,135,-1,134,782,393,-1,393,783,134,-1,133,781,393,-1,393,782,133,-1,136,788,394,-1,394,785,136,-1,139,787,394,-1,394,788,139,-1,138,786,394,-1,394,787,138,-1,137,785,394,-1,394,786,137,-1,135,791,395,-1,395,783,135,-1,141,790,395,-1,395,791,141,-1,140,789,395,-1,395,790,140,-1,134,783,395,-1,395,789,134,-1,139,794,396,-1,396,787,139,-1,143,793,396,-1,396,794,143,-1,142,792,396,-1,396,793,142,-1,138,787,396,-1,396,792,138,-1,141,797,397,-1,397,790,141,-1,145,796,397,-1,397,797,145,-1,144,795,397,-1,397,796,144,-1,140,790,397,-1,397,795,140,-1,143,800,398,-1,398,793,143,-1,147,799,398,-1,398,800,147,-1,146,798,398,-1,398,799,146,-1,142,793,398,-1,398,798,142,-1,145,803,399,-1,399,796,145,-1,149,802,399,-1,399,803,149,-1,148,801,399,-1,399,802,148,-1,144,796,399,-1,399,801,144,-1,147,806,400,-1,400,799,147,-1,151,805,400,-1,400,806,151,-1,150,804,400,-1,400,805,150,-1,146,799,400,-1,400,804,146,-1,149,809,401,-1,401,802,149,-1,153,808,401,-1,401,809,153,-1,152,807,401,-1,401,808,152,-1,148,802,401,-1,401,807,148,-1,151,812,402,-1,402,805,151,-1,155,811,402,-1,402,812,155,-1,154,810,402,-1,402,811,154,-1,150,805,402,-1,402,810,150,-1,153,815,403,-1,403,808,153,-1,157,814,403,-1,403,815,157,-1,156,813,403,-1,403,814,156,-1,152,808,403,-1,403,813,152,-1,155,818,404,-1,404,811,155,-1,159,817,404,-1,404,818,159,-1,158,816,404,-1,404,817,158,-1,154,811,404,-1,404,816,154,-1,157,820,405,-1,405,814,157,-1,160,547,405,-1,405,820,160,-1,21,819,405,-1,405,547,21,-1,156,814,405,-1,405,819,156,-1,159,822,406,-1,406,817,159,-1,22,557,406,-1,406,822,22,-1,30,821,406,-1,406,557,30,-1,158,817,406,-1,406,821,158,-1,136,825,407,-1,407,788,136,-1,162,824,407,-1,407,825,162,-1,161,823,407,-1,407,824,161,-1,139,788,407,-1,407,823,139,-1,139,823,408,-1,408,794,139,-1,161,827,408,-1,408,823,161,-1,163,826,408,-1,408,827,163,-1,143,794,408,-1,408,826,143,-1,143,826,409,-1,409,800,143,-1,163,829,409,-1,409,826,163,-1,164,828,409,-1,409,829,164,-1,147,800,409,-1,409,828,147,-1,147,828,410,-1,410,806,147,-1,164,831,410,-1,410,828,164,-1,165,830,410,-1,410,831,165,-1,151,806,410,-1,410,830,151,-1,151,830,411,-1,411,812,151,-1,165,833,411,-1,411,830,165,-1,166,832,411,-1,411,833,166,-1,155,812,411,-1,411,832,155,-1,155,832,412,-1,412,818,155,-1,166,835,412,-1,412,832,166,-1,167,834,412,-1,412,835,167,-1,159,818,412,-1,412,834,159,-1,159,834,413,-1,413,822,159,-1,167,836,413,-1,413,834,167,-1,168,587,413,-1,413,836,168,-1,22,822,413,-1,413,587,22,-1,21,839,414,-1,414,819,21,-1,170,838,414,-1,414,839,170,-1,169,837,414,-1,414,838,169,-1,156,819,414,-1,414,837,156,-1,156,837,415,-1,415,813,156,-1,169,841,415,-1,415,837,169,-1,171,840,415,-1,415,841,171,-1,152,813,415,-1,415,840,152,-1,152,840,416,-1,416,807,152,-1,171,843,416,-1,416,840,171,-1,172,842,416,-1,416,843,172,-1,148,807,416,-1,416,842,148,-1,148,842,417,-1,417,801,148,-1,172,845,417,-1,417,842,172,-1,173,844,417,-1,417,845,173,-1,144,801,417,-1,417,844,144,-1,144,844,418,-1,418,795,144,-1,173,847,418,-1,418,844,173,-1,174,846,418,-1,418,847,174,-1,140,795,418,-1,418,846,140,-1,140,846,419,-1,419,789,140,-1,174,849,419,-1,419,846,174,-1,175,848,419,-1,419,849,175,-1,134,789,419,-1,419,848,134,-1,134,848,420,-1,420,782,134,-1,175,851,420,-1,420,848,175,-1,176,850,420,-1,420,851,176,-1,133,782,420,-1,420,850,133,-1,138,853,421,-1,421,786,138,-1,45,852,421,-1,421,853,45,-1,137,786,421,-1,421,852,137,-1,142,854,422,-1,422,792,142,-1,45,853,422,-1,422,854,45,-1,138,792,422,-1,422,853,138,-1,146,855,423,-1,423,798,146,-1,45,854,423,-1,423,855,45,-1,142,798,423,-1,423,854,142,-1,150,856,424,-1,424,804,150,-1,45,855,424,-1,424,856,45,-1,146,804,424,-1,424,855,146,-1,154,857,425,-1,425,810,154,-1,45,856,425,-1,425,857,45,-1,150,810,425,-1,425,856,150,-1,158,858,426,-1,426,816,158,-1,45,857,426,-1,426,858,45,-1,154,816,426,-1,426,857,154,-1,30,601,427,-1,427,821,30,-1,45,858,427,-1,427,601,45,-1,158,821,427,-1,427,858,158,-1,177,862,428,-1,428,859,177,-1,180,861,428,-1,428,862,180,-1,179,860,428,-1,428,861,179,-1,178,859,428,-1,428,860,178,-1,181,866,429,-1,429,863,181,-1,184,865,429,-1,429,866,184,-1,183,864,429,-1,429,865,183,-1,182,863,429,-1,429,864,182,-1,185,870,430,-1,430,867,185,-1,188,869,430,-1,430,870,188,-1,187,868,430,-1,430,869,187,-1,186,867,430,-1,430,868,186,-1,189,874,431,-1,431,871,189,-1,192,873,431,-1,431,874,192,-1,191,872,431,-1,431,873,191,-1,190,871,431,-1,431,872,190,-1,193,878,432,-1,432,875,193,-1,196,877,432,-1,432,878,196,-1,195,876,432,-1,432,877,195,-1,194,875,432,-1,432,876,194,-1,197,882,433,-1,433,879,197,-1,200,881,433,-1,433,882,200,-1,199,880,433,-1,433,881,199,-1,198,879,433,-1,433,880,198,-1,201,886,434,-1,434,883,201,-1,204,885,434,-1,434,886,204,-1,203,884,434,-1,434,885,203,-1,202,883,434,-1,434,884,202,-1,162,889,435,-1,435,824,162,-1,206,888,435,-1,435,889,206,-1,205,887,435,-1,435,888,205,-1,161,824,435,-1,435,887,161,-1,161,887,436,-1,436,890,161,-1,205,892,436,-1,436,887,205,-1,207,891,436,-1,436,892,207,-1,175,890,436,-1,436,891,175,-1,175,891,437,-1,437,851,175,-1,207,894,437,-1,437,891,207,-1,208,893,437,-1,437,894,208,-1,176,851,437,-1,437,893,176,-1,176,893,438,-1,438,895,176,-1,208,896,438,-1,438,893,208,-1,206,889,438,-1,438,896,206,-1,162,895,438,-1,438,889,162,-1,167,899,439,-1,439,836,167,-1,210,898,439,-1,439,899,210,-1,209,897,439,-1,439,898,209,-1,168,836,439,-1,439,897,168,-1,168,897,440,-1,440,900,168,-1,209,902,440,-1,440,897,209,-1,211,901,440,-1,440,902,211,-1,170,900,440,-1,440,901,170,-1,170,901,441,-1,441,838,170,-1,211,904,441,-1,441,901,211,-1,212,903,441,-1,441,904,212,-1,169,838,441,-1,441,903,169,-1,169,903,442,-1,442,905,169,-1,212,906,442,-1,442,903,212,-1,210,899,442,-1,442,906,210,-1,167,905,442,-1,442,899,167,-1,169,909,443,-1,443,841,169,-1,214,908,443,-1,443,909,214,-1,213,907,443,-1,443,908,213,-1,171,841,443,-1,443,907,171,-1,171,907,444,-1,444,910,171,-1,213,912,444,-1,444,907,213,-1,215,911,444,-1,444,912,215,-1,166,910,444,-1,444,911,166,-1,166,911,445,-1,445,835,166,-1,215,914,445,-1,445,911,215,-1,216,913,445,-1,445,914,216,-1,167,835,445,-1,445,913,167,-1,167,913,446,-1,446,905,167,-1,216,915,446,-1,446,913,216,-1,214,909,446,-1,446,915,214,-1,169,905,446,-1,446,909,169,-1,171,918,447,-1,447,843,171,-1,218,917,447,-1,447,918,218,-1,217,916,447,-1,447,917,217,-1,172,843,447,-1,447,916,172,-1,172,916,448,-1,448,919,172,-1,217,921,448,-1,448,916,217,-1,219,920,448,-1,448,921,219,-1,165,919,448,-1,448,920,165,-1,165,920,449,-1,449,833,165,-1,219,923,449,-1,449,920,219,-1,220,922,449,-1,449,923,220,-1,166,833,449,-1,449,922,166,-1,166,922,450,-1,450,910,166,-1,220,924,450,-1,450,922,220,-1,218,918,450,-1,450,924,218,-1,171,910,450,-1,450,918,171,-1,172,927,451,-1,451,845,172,-1,222,926,451,-1,451,927,222,-1,221,925,451,-1,451,926,221,-1,173,845,451,-1,451,925,173,-1,173,925,452,-1,452,928,173,-1,221,930,452,-1,452,925,221,-1,223,929,452,-1,452,930,223,-1,164,928,452,-1,452,929,164,-1,164,929,453,-1,453,831,164,-1,223,932,453,-1,453,929,223,-1,224,931,453,-1,453,932,224,-1,165,831,453,-1,453,931,165,-1,165,931,454,-1,454,919,165,-1,224,933,454,-1,454,931,224,-1,222,927,454,-1,454,933,222,-1,172,919,454,-1,454,927,172,-1,173,936,455,-1,455,847,173,-1,226,935,455,-1,455,936,226,-1,225,934,455,-1,455,935,225,-1,174,847,455,-1,455,934,174,-1,174,934,456,-1,456,937,174,-1,225,939,456,-1,456,934,225,-1,227,938,456,-1,456,939,227,-1,163,937,456,-1,456,938,163,-1,163,938,457,-1,457,829,163,-1,227,941,457,-1,457,938,227,-1,228,940,457,-1,457,941,228,-1,164,829,457,-1,457,940,164,-1,164,940,458,-1,458,928,164,-1,228,942,458,-1,458,940,228,-1,226,936,458,-1,458,942,226,-1,173,928,458,-1,458,936,173,-1,174,945,459,-1,459,849,174,-1,230,944,459,-1,459,945,230,-1,229,943,459,-1,459,944,229,-1,175,849,459,-1,459,943,175,-1,175,943,460,-1,460,890,175,-1,229,947,460,-1,460,943,229,-1,231,946,460,-1,460,947,231,-1,161,890,460,-1,460,946,161,-1,161,946,461,-1,461,827,161,-1,231,949,461,-1,461,946,231,-1,232,948,461,-1,461,949,232,-1,163,827,461,-1,461,948,163,-1,163,948,462,-1,462,937,163,-1,232,950,462,-1,462,948,232,-1,230,945,462,-1,462,950,230,-1,174,937,462,-1,462,945,174,-1,45,953,463,-1,463,852,45,-1,234,952,463,-1,463,953,234,-1,233,951,463,-1,463,952,233,-1,137,852,463,-1,463,951,137,-1,235,956,464,-1,464,954,235,-1,177,859,464,-1,464,956,177,-1,178,955,464,-1,464,859,178,-1,236,954,464,-1,464,955,236,-1,236,955,465,-1,465,957,236,-1,178,860,465,-1,465,955,178,-1,179,958,465,-1,465,860,179,-1,237,957,465,-1,465,958,237,-1,237,958,466,-1,466,959,237,-1,179,861,466,-1,466,958,179,-1,180,960,466,-1,466,861,180,-1,238,959,466,-1,466,960,238,-1,238,960,467,-1,467,961,238,-1,180,862,467,-1,467,960,180,-1,177,956,467,-1,467,862,177,-1,235,961,467,-1,467,956,235,-1,239,964,468,-1,468,962,239,-1,181,863,468,-1,468,964,181,-1,182,963,468,-1,468,863,182,-1,240,962,468,-1,468,963,240,-1,240,963,469,-1,469,965,240,-1,182,864,469,-1,469,963,182,-1,183,966,469,-1,469,864,183,-1,241,965,469,-1,469,966,241,-1,241,966,470,-1,470,967,241,-1,183,865,470,-1,470,966,183,-1,184,968,470,-1,470,865,184,-1,242,967,470,-1,470,968,242,-1,242,968,471,-1,471,969,242,-1,184,866,471,-1,471,968,184,-1,181,964,471,-1,471,866,181,-1,239,969,471,-1,471,964,239,-1,243,972,472,-1,472,970,243,-1,185,867,472,-1,472,972,185,-1,186,971,472,-1,472,867,186,-1,244,970,472,-1,472,971,244,-1,244,971,473,-1,473,973,244,-1,186,868,473,-1,473,971,186,-1,187,974,473,-1,473,868,187,-1,245,973,473,-1,473,974,245,-1,245,974,474,-1,474,975,245,-1,187,869,474,-1,474,974,187,-1,188,976,474,-1,474,869,188,-1,246,975,474,-1,474,976,246,-1,246,976,475,-1,475,977,246,-1,188,870,475,-1,475,976,188,-1,185,972,475,-1,475,870,185,-1,243,977,475,-1,475,972,243,-1,247,980,476,-1,476,978,247,-1,189,871,476,-1,476,980,189,-1,190,979,476,-1,476,871,190,-1,248,978,476,-1,476,979,248,-1,248,979,477,-1,477,981,248,-1,190,872,477,-1,477,979,190,-1,191,982,477,-1,477,872,191,-1,249,981,477,-1,477,982,249,-1,249,982,478,-1,478,983,249,-1,191,873,478,-1,478,982,191,-1,192,984,478,-1,478,873,192,-1,250,983,478,-1,478,984,250,-1,250,984,479,-1,479,985,250,-1,192,874,479,-1,479,984,192,-1,189,980,479,-1,479,874,189,-1,247,985,479,-1,479,980,247,-1,251,988,480,-1,480,986,251,-1,193,875,480,-1,480,988,193,-1,194,987,480,-1,480,875,194,-1,252,986,480,-1,480,987,252,-1,252,987,481,-1,481,989,252,-1,194,876,481,-1,481,987,194,-1,195,990,481,-1,481,876,195,-1,253,989,481,-1,481,990,253,-1,253,990,482,-1,482,991,253,-1,195,877,482,-1,482,990,195,-1,196,992,482,-1,482,877,196,-1,254,991,482,-1,482,992,254,-1,254,992,483,-1,483,993,254,-1,196,878,483,-1,483,992,196,-1,193,988,483,-1,483,878,193,-1,251,993,483,-1,483,988,251,-1,255,996,484,-1,484,994,255,-1,197,879,484,-1,484,996,197,-1,198,995,484,-1,484,879,198,-1,256,994,484,-1,484,995,256,-1,256,995,485,-1,485,997,256,-1,198,880,485,-1,485,995,198,-1,199,998,485,-1,485,880,199,-1,257,997,485,-1,485,998,257,-1,257,998,486,-1,486,999,257,-1,199,881,486,-1,486,998,199,-1,200,1000,486,-1,486,881,200,-1,258,999,486,-1,486,1000,258,-1,258,1000,487,-1,487,1001,258,-1,200,882,487,-1,487,1000,200,-1,197,996,487,-1,487,882,197,-1,255,1001,487,-1,487,996,255,-1,259,1004,488,-1,488,1002,259,-1,201,883,488,-1,488,1004,201,-1,202,1003,488,-1,488,883,202,-1,260,1002,488,-1,488,1003,260,-1,260,1003,489,-1,489,1005,260,-1,202,884,489,-1,489,1003,202,-1,203,1006,489,-1,489,884,203,-1,261,1005,489,-1,489,1006,261,-1,261,1006,490,-1,490,1007,261,-1,203,885,490,-1,490,1006,203,-1,204,1008,490,-1,490,885,204,-1,262,1007,490,-1,490,1008,262,-1,262,1008,491,-1,491,1009,262,-1,204,886,491,-1,491,1008,204,-1,201,1004,491,-1,491,886,201,-1,259,1009,491,-1,491,1004,259,-1,205,888,492,-1,492,1010,205,-1,206,1011,492,-1,492,888,206,-1,235,954,492,-1,492,1011,235,-1,236,1010,492,-1,492,954,236,-1,207,892,493,-1,493,1012,207,-1,205,1010,493,-1,493,892,205,-1,236,957,493,-1,493,1010,236,-1,237,1012,493,-1,493,957,237,-1,208,894,494,-1,494,1013,208,-1,207,1012,494,-1,494,894,207,-1,237,959,494,-1,494,1012,237,-1,238,1013,494,-1,494,959,238,-1,206,896,495,-1,495,1011,206,-1,208,1013,495,-1,495,896,208,-1,238,961,495,-1,495,1013,238,-1,235,1011,495,-1,495,961,235,-1,209,898,496,-1,496,1014,209,-1,210,1015,496,-1,496,898,210,-1,239,962,496,-1,496,1015,239,-1,240,1014,496,-1,496,962,240,-1,211,902,497,-1,497,1016,211,-1,209,1014,497,-1,497,902,209,-1,240,965,497,-1,497,1014,240,-1,241,1016,497,-1,497,965,241,-1,212,904,498,-1,498,1017,212,-1,211,1016,498,-1,498,904,211,-1,241,967,498,-1,498,1016,241,-1,242,1017,498,-1,498,967,242,-1,210,906,499,-1,499,1015,210,-1,212,1017,499,-1,499,906,212,-1,242,969,499,-1,499,1017,242,-1,239,1015,499,-1,499,969,239,-1,213,908,500,-1,500,1018,213,-1,214,1019,500,-1,500,908,214,-1,243,970,500,-1,500,1019,243,-1,244,1018,500,-1,500,970,244,-1,215,912,501,-1,501,1020,215,-1,213,1018,501,-1,501,912,213,-1,244,973,501,-1,501,1018,244,-1,245,1020,501,-1,501,973,245,-1,216,914,502,-1,502,1021,216,-1,215,1020,502,-1,502,914,215,-1,245,975,502,-1,502,1020,245,-1,246,1021,502,-1,502,975,246,-1,214,915,503,-1,503,1019,214,-1,216,1021,503,-1,503,915,216,-1,246,977,503,-1,503,1021,246,-1,243,1019,503,-1,503,977,243,-1,217,917,504,-1,504,1022,217,-1,218,1023,504,-1,504,917,218,-1,247,978,504,-1,504,1023,247,-1,248,1022,504,-1,504,978,248,-1,219,921,505,-1,505,1024,219,-1,217,1022,505,-1,505,921,217,-1,248,981,505,-1,505,1022,248,-1,249,1024,505,-1,505,981,249,-1,220,923,506,-1,506,1025,220,-1,219,1024,506,-1,506,923,219,-1,249,983,506,-1,506,1024,249,-1,250,1025,506,-1,506,983,250,-1,218,924,507,-1,507,1023,218,-1,220,1025,507,-1,507,924,220,-1,250,985,507,-1,507,1025,250,-1,247,1023,507,-1,507,985,247,-1,221,926,508,-1,508,1026,221,-1,222,1027,508,-1,508,926,222,-1,251,986,508,-1,508,1027,251,-1,252,1026,508,-1,508,986,252,-1,223,930,509,-1,509,1028,223,-1,221,1026,509,-1,509,930,221,-1,252,989,509,-1,509,1026,252,-1,253,1028,509,-1,509,989,253,-1,224,932,510,-1,510,1029,224,-1,223,1028,510,-1,510,932,223,-1,253,991,510,-1,510,1028,253,-1,254,1029,510,-1,510,991,254,-1,222,933,511,-1,511,1027,222,-1,224,1029,511,-1,511,933,224,-1,254,993,511,-1,511,1029,254,-1,251,1027,511,-1,511,993,251,-1,225,935,512,-1,512,1030,225,-1,226,1031,512,-1,512,935,226,-1,255,994,512,-1,512,1031,255,-1,256,1030,512,-1,512,994,256,-1,227,939,513,-1,513,1032,227,-1,225,1030,513,-1,513,939,225,-1,256,997,513,-1,513,1030,256,-1,257,1032,513,-1,513,997,257,-1,228,941,514,-1,514,1033,228,-1,227,1032,514,-1,514,941,227,-1,257,999,514,-1,514,1032,257,-1,258,1033,514,-1,514,999,258,-1,226,942,515,-1,515,1031,226,-1,228,1033,515,-1,515,942,228,-1,258,1001,515,-1,515,1033,258,-1,255,1031,515,-1,515,1001,255,-1,229,944,516,-1,516,1034,229,-1,230,1035,516,-1,516,944,230,-1,259,1002,516,-1,516,1035,259,-1,260,1034,516,-1,516,1002,260,-1,231,947,517,-1,517,1036,231,-1,229,1034,517,-1,517,947,229,-1,260,1005,517,-1,517,1034,260,-1,261,1036,517,-1,517,1005,261,-1,232,949,518,-1,518,1037,232,-1,231,1036,518,-1,518,949,231,-1,261,1007,518,-1,518,1036,261,-1,262,1037,518,-1,518,1007,262,-1,230,950,519,-1,519,1035,230,-1,232,1037,519,-1,519,950,232,-1,262,1009,519,-1,519,1037,262,-1,259,1035,519,-1,519,1009,259,-1,233,952,520,-1,520,1038,233,-1,234,1040,520,-1,520,952,234,-1,264,1039,520,-1,520,1040,264,-1,263,1038,520,-1,520,1039,263,-1]);
IndexedFaceSet734.CreaseAngle := 3.14159;
IndexedFaceSet734.Solid := False;
IndexedFaceSet734.SetTexCoordIndex([0,3,2,-1,2,1,0,-1,4,5,2,-1,2,3,4,-1,6,7,2,-1,2,5,6,-1,8,1,2,-1,2,7,8,-1,9,12,11,-1,11,10,9,-1,13,14,11,-1,11,12,13,-1,15,16,11,-1,11,14,15,-1,17,10,11,-1,11,16,17,-1,8,7,19,-1,19,18,8,-1,6,20,19,-1,19,7,6,-1,21,22,19,-1,19,20,21,-1,23,18,19,-1,19,22,23,-1,17,16,25,-1,25,24,17,-1,15,26,25,-1,25,16,15,-1,27,28,25,-1,25,26,27,-1,29,24,25,-1,25,28,29,-1,23,22,31,-1,31,30,23,-1,21,32,31,-1,31,22,21,-1,33,34,31,-1,31,32,33,-1,35,30,31,-1,31,34,35,-1,29,28,37,-1,37,36,29,-1,27,38,37,-1,37,28,27,-1,39,40,37,-1,37,38,39,-1,41,36,37,-1,37,40,41,-1,35,34,43,-1,43,42,35,-1,33,44,43,-1,43,34,33,-1,45,46,43,-1,43,44,45,-1,47,42,43,-1,43,46,47,-1,41,40,87,-1,87,48,41,-1,39,88,87,-1,87,40,39,-1,145,146,87,-1,87,88,145,-1,147,48,87,-1,87,146,147,-1,47,46,149,-1,149,148,47,-1,45,150,149,-1,149,46,45,-1,151,152,149,-1,149,150,151,-1,153,148,149,-1,149,152,153,-1,147,146,155,-1,155,154,147,-1,145,156,155,-1,155,146,145,-1,157,158,155,-1,155,156,157,-1,159,154,155,-1,155,158,159,-1,153,152,161,-1,161,160,153,-1,151,162,161,-1,161,152,151,-1,163,164,161,-1,161,162,163,-1,165,160,161,-1,161,164,165,-1,159,158,167,-1,167,166,159,-1,157,168,167,-1,167,158,157,-1,169,170,167,-1,167,168,169,-1,171,166,167,-1,167,170,171,-1,165,164,173,-1,173,172,165,-1,163,174,173,-1,173,164,163,-1,175,176,173,-1,173,174,175,-1,177,172,173,-1,173,176,177,-1,171,170,179,-1,179,178,171,-1,169,180,179,-1,179,170,169,-1,181,182,179,-1,179,180,181,-1,183,178,179,-1,179,182,183,-1,9,10,185,-1,185,184,9,-1,17,186,185,-1,185,10,17,-1,187,188,185,-1,185,186,187,-1,189,184,185,-1,185,188,189,-1,17,24,190,-1,190,186,17,-1,29,191,190,-1,190,24,29,-1,192,193,190,-1,190,191,192,-1,187,186,190,-1,190,193,187,-1,29,36,194,-1,194,191,29,-1,41,195,194,-1,194,36,41,-1,262,263,194,-1,194,195,262,-1,192,191,194,-1,194,263,192,-1,41,48,292,-1,292,195,41,-1,147,293,292,-1,292,48,147,-1,294,295,292,-1,292,293,294,-1,262,195,292,-1,292,295,262,-1,147,154,296,-1,296,293,147,-1,159,297,296,-1,296,154,159,-1,298,299,296,-1,296,297,298,-1,294,293,296,-1,296,299,294,-1,159,166,300,-1,300,297,159,-1,171,301,300,-1,300,166,171,-1,302,303,300,-1,300,301,302,-1,298,297,300,-1,300,303,298,-1,171,178,304,-1,304,301,171,-1,183,305,304,-1,304,178,183,-1,306,307,304,-1,304,305,306,-1,302,301,304,-1,304,307,302,-1,175,174,309,-1,309,308,175,-1,163,310,309,-1,309,174,163,-1,311,312,309,-1,309,310,311,-1,313,308,309,-1,309,312,313,-1,163,162,314,-1,314,310,163,-1,151,315,314,-1,314,162,151,-1,316,317,314,-1,314,315,316,-1,311,310,314,-1,314,317,311,-1,151,150,318,-1,318,315,151,-1,45,319,318,-1,318,150,45,-1,320,321,318,-1,318,319,320,-1,316,315,318,-1,318,321,316,-1,45,44,322,-1,322,319,45,-1,33,323,322,-1,322,44,33,-1,324,325,322,-1,322,323,324,-1,320,319,322,-1,322,325,320,-1,33,32,326,-1,326,323,33,-1,21,327,326,-1,326,32,21,-1,328,364,326,-1,326,327,328,-1,324,323,326,-1,326,364,324,-1,21,20,421,-1,421,327,21,-1,6,422,421,-1,421,20,6,-1,423,424,421,-1,421,422,423,-1,328,327,421,-1,421,424,328,-1,6,5,425,-1,425,422,6,-1,4,426,425,-1,425,5,4,-1,427,428,425,-1,425,426,427,-1,423,422,425,-1,425,428,423,-1,15,14,430,-1,430,429,15,-1,13,431,430,-1,430,14,13,-1,432,429,430,-1,430,431,432,-1,27,26,434,-1,434,433,27,-1,15,429,434,-1,434,26,15,-1,432,433,434,-1,434,429,432,-1,39,38,436,-1,436,435,39,-1,27,433,436,-1,436,38,27,-1,432,435,436,-1,436,433,432,-1,145,88,438,-1,438,437,145,-1,39,435,438,-1,438,88,39,-1,432,437,438,-1,438,435,432,-1,157,156,440,-1,440,439,157,-1,145,437,440,-1,440,156,145,-1,432,439,440,-1,440,437,432,-1,169,168,442,-1,442,441,169,-1,157,439,442,-1,442,168,157,-1,432,441,442,-1,442,439,432,-1,181,180,444,-1,444,443,181,-1,169,441,444,-1,444,180,169,-1,432,443,444,-1,444,441,432,-1,49,52,51,-1,51,50,49,-1,53,54,51,-1,51,52,53,-1,55,56,51,-1,51,54,55,-1,57,50,51,-1,51,56,57,-1,58,61,60,-1,60,59,58,-1,62,63,60,-1,60,61,62,-1,64,65,60,-1,60,63,64,-1,66,59,60,-1,60,65,66,-1,67,70,69,-1,69,68,67,-1,71,72,69,-1,69,70,71,-1,73,74,69,-1,69,72,73,-1,75,68,69,-1,69,74,75,-1,76,79,78,-1,78,77,76,-1,80,81,78,-1,78,79,80,-1,82,83,78,-1,78,81,82,-1,84,77,78,-1,78,83,84,-1,85,90,89,-1,89,86,85,-1,91,92,89,-1,89,90,91,-1,93,94,89,-1,89,92,93,-1,95,86,89,-1,89,94,95,-1,96,99,98,-1,98,97,96,-1,100,101,98,-1,98,99,100,-1,102,103,98,-1,98,101,102,-1,104,97,98,-1,98,103,104,-1,105,108,107,-1,107,106,105,-1,109,110,107,-1,107,108,109,-1,111,112,107,-1,107,110,111,-1,113,106,107,-1,107,112,113,-1,114,117,116,-1,116,115,114,-1,118,119,116,-1,116,117,118,-1,120,121,116,-1,116,119,120,-1,122,115,116,-1,116,121,122,-1,118,124,123,-1,123,119,118,-1,125,126,123,-1,123,124,125,-1,127,128,123,-1,123,126,127,-1,120,119,123,-1,123,128,120,-1,125,130,129,-1,129,126,125,-1,131,132,129,-1,129,130,131,-1,133,134,129,-1,129,132,133,-1,127,126,129,-1,129,134,127,-1,131,136,135,-1,135,132,131,-1,114,115,135,-1,135,136,114,-1,122,137,135,-1,135,115,122,-1,133,132,135,-1,135,137,133,-1,138,141,140,-1,140,139,138,-1,142,143,140,-1,140,141,142,-1,144,196,140,-1,140,143,144,-1,197,139,140,-1,140,196,197,-1,142,199,198,-1,198,143,142,-1,200,201,198,-1,198,199,200,-1,202,203,198,-1,198,201,202,-1,144,143,198,-1,198,203,144,-1,200,205,204,-1,204,201,200,-1,206,207,204,-1,204,205,206,-1,208,209,204,-1,204,207,208,-1,202,201,204,-1,204,209,202,-1,206,211,210,-1,210,207,206,-1,138,139,210,-1,210,211,138,-1,197,212,210,-1,210,139,197,-1,208,207,210,-1,210,212,208,-1,206,215,214,-1,214,213,206,-1,216,217,214,-1,214,215,216,-1,218,219,214,-1,214,217,218,-1,220,213,214,-1,214,219,220,-1,216,222,221,-1,221,217,216,-1,223,224,221,-1,221,222,223,-1,225,226,221,-1,221,224,225,-1,218,217,221,-1,221,226,218,-1,223,228,227,-1,227,224,223,-1,138,229,227,-1,227,228,138,-1,230,231,227,-1,227,229,230,-1,225,224,227,-1,227,231,225,-1,138,211,232,-1,232,229,138,-1,206,213,232,-1,232,211,206,-1,220,233,232,-1,232,213,220,-1,230,229,232,-1,232,233,230,-1,216,236,235,-1,235,234,216,-1,237,238,235,-1,235,236,237,-1,239,240,235,-1,235,238,239,-1,241,234,235,-1,235,240,241,-1,237,243,242,-1,242,238,237,-1,244,245,242,-1,242,243,244,-1,246,247,242,-1,242,245,246,-1,239,238,242,-1,242,247,239,-1,244,249,248,-1,248,245,244,-1,223,250,248,-1,248,249,223,-1,251,252,248,-1,248,250,251,-1,246,245,248,-1,248,252,246,-1,223,222,253,-1,253,250,223,-1,216,234,253,-1,253,222,216,-1,241,254,253,-1,253,234,241,-1,251,250,253,-1,253,254,251,-1,237,257,256,-1,256,255,237,-1,258,259,256,-1,256,257,258,-1,260,261,256,-1,256,259,260,-1,264,255,256,-1,256,261,264,-1,258,266,265,-1,265,259,258,-1,267,268,265,-1,265,266,267,-1,269,270,265,-1,265,268,269,-1,260,259,265,-1,265,270,260,-1,267,272,271,-1,271,268,267,-1,244,273,271,-1,271,272,244,-1,274,275,271,-1,271,273,274,-1,269,268,271,-1,271,275,269,-1,244,243,276,-1,276,273,244,-1,237,255,276,-1,276,243,237,-1,264,277,276,-1,276,255,264,-1,274,273,276,-1,276,277,274,-1,258,280,279,-1,279,278,258,-1,281,282,279,-1,279,280,281,-1,283,284,279,-1,279,282,283,-1,285,278,279,-1,279,284,285,-1,281,287,286,-1,286,282,281,-1,288,289,286,-1,286,287,288,-1,290,291,286,-1,286,289,290,-1,283,282,286,-1,286,291,283,-1,288,330,329,-1,329,289,288,-1,267,331,329,-1,329,330,267,-1,332,333,329,-1,329,331,332,-1,290,289,329,-1,329,333,290,-1,267,266,334,-1,334,331,267,-1,258,278,334,-1,334,266,258,-1,285,335,334,-1,334,278,285,-1,332,331,334,-1,334,335,332,-1,281,338,337,-1,337,336,281,-1,125,339,337,-1,337,338,125,-1,340,341,337,-1,337,339,340,-1,342,336,337,-1,337,341,342,-1,125,124,343,-1,343,339,125,-1,118,344,343,-1,343,124,118,-1,345,346,343,-1,343,344,345,-1,340,339,343,-1,343,346,340,-1,118,348,347,-1,347,344,118,-1,288,349,347,-1,347,348,288,-1,350,351,347,-1,347,349,350,-1,345,344,347,-1,347,351,345,-1,288,287,352,-1,352,349,288,-1,281,336,352,-1,352,287,281,-1,342,353,352,-1,352,336,342,-1,350,349,352,-1,352,353,350,-1,432,431,446,-1,446,445,432,-1,13,447,446,-1,446,431,13,-1,448,449,446,-1,446,447,448,-1,450,445,446,-1,446,449,450,-1,354,357,356,-1,356,355,354,-1,358,359,356,-1,356,357,358,-1,53,52,356,-1,356,359,53,-1,49,355,356,-1,356,52,49,-1,358,361,360,-1,360,359,358,-1,362,363,360,-1,360,361,362,-1,55,54,360,-1,360,363,55,-1,53,359,360,-1,360,54,53,-1,362,366,365,-1,365,363,362,-1,367,368,365,-1,365,366,367,-1,57,56,365,-1,365,368,57,-1,55,363,365,-1,365,56,55,-1,367,370,369,-1,369,368,367,-1,354,355,369,-1,369,370,354,-1,49,50,369,-1,369,355,49,-1,57,368,369,-1,369,50,57,-1,371,374,373,-1,373,372,371,-1,375,376,373,-1,373,374,375,-1,62,61,373,-1,373,376,62,-1,58,372,373,-1,373,61,58,-1,375,378,377,-1,377,376,375,-1,379,380,377,-1,377,378,379,-1,64,63,377,-1,377,380,64,-1,62,376,377,-1,377,63,62,-1,379,382,381,-1,381,380,379,-1,383,384,381,-1,381,382,383,-1,66,65,381,-1,381,384,66,-1,64,380,381,-1,381,65,64,-1,383,386,385,-1,385,384,383,-1,371,372,385,-1,385,386,371,-1,58,59,385,-1,385,372,58,-1,66,384,385,-1,385,59,66,-1,387,390,389,-1,389,388,387,-1,391,392,389,-1,389,390,391,-1,71,70,389,-1,389,392,71,-1,67,388,389,-1,389,70,67,-1,391,394,393,-1,393,392,391,-1,395,396,393,-1,393,394,395,-1,73,72,393,-1,393,396,73,-1,71,392,393,-1,393,72,71,-1,395,398,397,-1,397,396,395,-1,399,400,397,-1,397,398,399,-1,75,74,397,-1,397,400,75,-1,73,396,397,-1,397,74,73,-1,399,402,401,-1,401,400,399,-1,387,388,401,-1,401,402,387,-1,67,68,401,-1,401,388,67,-1,75,400,401,-1,401,68,75,-1,403,406,405,-1,405,404,403,-1,407,408,405,-1,405,406,407,-1,80,79,405,-1,405,408,80,-1,76,404,405,-1,405,79,76,-1,407,410,409,-1,409,408,407,-1,411,412,409,-1,409,410,411,-1,82,81,409,-1,409,412,82,-1,80,408,409,-1,409,81,80,-1,411,414,413,-1,413,412,411,-1,415,416,413,-1,413,414,415,-1,84,83,413,-1,413,416,84,-1,82,412,413,-1,413,83,82,-1,415,418,417,-1,417,416,415,-1,403,404,417,-1,417,418,403,-1,76,77,417,-1,417,404,76,-1,84,416,417,-1,417,77,84,-1,419,458,457,-1,457,420,419,-1,459,460,457,-1,457,458,459,-1,91,90,457,-1,457,460,91,-1,85,420,457,-1,457,90,85,-1,459,462,461,-1,461,460,459,-1,463,464,461,-1,461,462,463,-1,93,92,461,-1,461,464,93,-1,91,460,461,-1,461,92,91,-1,463,466,465,-1,465,464,463,-1,467,468,465,-1,465,466,467,-1,95,94,465,-1,465,468,95,-1,93,464,465,-1,465,94,93,-1,467,470,469,-1,469,468,467,-1,419,420,469,-1,469,470,419,-1,85,86,469,-1,469,420,85,-1,95,468,469,-1,469,86,95,-1,471,474,473,-1,473,472,471,-1,475,476,473,-1,473,474,475,-1,100,99,473,-1,473,476,100,-1,96,472,473,-1,473,99,96,-1,475,478,477,-1,477,476,475,-1,479,480,477,-1,477,478,479,-1,102,101,477,-1,477,480,102,-1,100,476,477,-1,477,101,100,-1,479,482,481,-1,481,480,479,-1,483,484,481,-1,481,482,483,-1,104,103,481,-1,481,484,104,-1,102,480,481,-1,481,103,102,-1,483,486,485,-1,485,484,483,-1,471,472,485,-1,485,486,471,-1,96,97,485,-1,485,472,96,-1,104,484,485,-1,485,97,104,-1,487,490,489,-1,489,488,487,-1,491,493,489,-1,489,490,491,-1,109,108,489,-1,489,493,109,-1,105,488,489,-1,489,108,105,-1,491,495,494,-1,494,493,491,-1,496,497,494,-1,494,495,496,-1,111,110,494,-1,494,497,111,-1,109,493,494,-1,494,110,109,-1,496,499,498,-1,498,497,496,-1,500,501,498,-1,498,499,500,-1,113,112,498,-1,498,501,113,-1,111,497,498,-1,498,112,111,-1,500,503,502,-1,502,501,500,-1,487,488,502,-1,502,503,487,-1,105,106,502,-1,502,488,105,-1,113,501,502,-1,502,106,113,-1,120,505,504,-1,504,121,120,-1,358,357,504,-1,504,505,358,-1,354,506,504,-1,504,357,354,-1,122,121,504,-1,504,506,122,-1,127,508,507,-1,507,128,127,-1,362,361,507,-1,507,508,362,-1,358,505,507,-1,507,361,358,-1,120,128,507,-1,507,505,120,-1,133,510,509,-1,509,134,133,-1,367,366,509,-1,509,510,367,-1,362,508,509,-1,509,366,362,-1,127,134,509,-1,509,508,127,-1,122,506,511,-1,511,137,122,-1,354,370,511,-1,511,506,354,-1,367,510,511,-1,511,370,367,-1,133,137,511,-1,511,510,133,-1,144,513,512,-1,512,196,144,-1,375,374,512,-1,512,513,375,-1,371,514,512,-1,512,374,371,-1,197,196,512,-1,512,514,197,-1,202,516,515,-1,515,203,202,-1,379,378,515,-1,515,516,379,-1,375,513,515,-1,515,378,375,-1,144,203,515,-1,515,513,144,-1,208,518,517,-1,517,209,208,-1,383,382,517,-1,517,518,383,-1,379,516,517,-1,517,382,379,-1,202,209,517,-1,517,516,202,-1,197,514,519,-1,519,212,197,-1,371,386,519,-1,519,514,371,-1,383,518,519,-1,519,386,383,-1,208,212,519,-1,519,518,208,-1,218,521,520,-1,520,219,218,-1,391,390,520,-1,520,521,391,-1,387,522,520,-1,520,390,387,-1,220,219,520,-1,520,522,220,-1,225,524,523,-1,523,226,225,-1,395,394,523,-1,523,524,395,-1,391,521,523,-1,523,394,391,-1,218,226,523,-1,523,521,218,-1,230,526,525,-1,525,231,230,-1,399,398,525,-1,525,526,399,-1,395,524,525,-1,525,398,395,-1,225,231,525,-1,525,524,225,-1,220,522,527,-1,527,233,220,-1,387,402,527,-1,527,522,387,-1,399,526,527,-1,527,402,399,-1,230,233,527,-1,527,526,230,-1,239,529,528,-1,528,240,239,-1,407,406,528,-1,528,529,407,-1,403,530,528,-1,528,406,403,-1,241,240,528,-1,528,530,241,-1,246,532,531,-1,531,247,246,-1,411,410,531,-1,531,532,411,-1,407,529,531,-1,531,410,407,-1,239,247,531,-1,531,529,239,-1,251,534,533,-1,533,252,251,-1,415,414,533,-1,533,534,415,-1,411,532,533,-1,533,414,411,-1,246,252,533,-1,533,532,246,-1,241,530,535,-1,535,254,241,-1,403,418,535,-1,535,530,403,-1,415,534,535,-1,535,418,415,-1,251,254,535,-1,535,534,251,-1,260,537,536,-1,536,261,260,-1,459,458,536,-1,536,537,459,-1,419,538,536,-1,536,458,419,-1,264,261,536,-1,536,538,264,-1,269,540,539,-1,539,270,269,-1,463,462,539,-1,539,540,463,-1,459,537,539,-1,539,462,459,-1,260,270,539,-1,539,537,260,-1,274,542,541,-1,541,275,274,-1,467,466,541,-1,541,542,467,-1,463,540,541,-1,541,466,463,-1,269,275,541,-1,541,540,269,-1,264,538,543,-1,543,277,264,-1,419,470,543,-1,543,538,419,-1,467,542,543,-1,543,470,467,-1,274,277,543,-1,543,542,274,-1,283,545,544,-1,544,284,283,-1,475,474,544,-1,544,545,475,-1,471,546,544,-1,544,474,471,-1,285,284,544,-1,544,546,285,-1,290,548,547,-1,547,291,290,-1,479,478,547,-1,547,548,479,-1,475,545,547,-1,547,478,475,-1,283,291,547,-1,547,545,283,-1,332,600,598,-1,598,333,332,-1,483,482,598,-1,598,600,483,-1,479,548,598,-1,598,482,479,-1,290,333,598,-1,598,548,290,-1,285,546,602,-1,602,335,285,-1,471,486,602,-1,602,546,471,-1,483,600,602,-1,602,486,483,-1,332,335,602,-1,602,600,332,-1,340,606,604,-1,604,341,340,-1,491,490,604,-1,604,606,491,-1,487,609,604,-1,604,490,487,-1,342,341,604,-1,604,609,342,-1,345,642,616,-1,616,346,345,-1,496,495,616,-1,616,642,496,-1,491,606,616,-1,616,495,491,-1,340,346,616,-1,616,606,340,-1,350,644,643,-1,643,351,350,-1,500,499,643,-1,643,644,500,-1,496,642,643,-1,643,499,496,-1,345,351,643,-1,643,642,345,-1,342,609,645,-1,645,353,342,-1,487,503,645,-1,645,609,487,-1,500,644,645,-1,645,503,500,-1,350,353,645,-1,645,644,350,-1,448,452,451,-1,451,449,448,-1,453,454,451,-1,451,452,453,-1,455,456,451,-1,451,454,455,-1,450,449,451,-1,451,456,450,-1,492,551,550,-1,550,549,492,-1,552,553,550,-1,550,551,552,-1,554,555,550,-1,550,553,554,-1,556,549,550,-1,550,555,556,-1,557,560,559,-1,559,558,557,-1,561,562,559,-1,559,560,561,-1,563,564,559,-1,559,562,563,-1,565,558,559,-1,559,564,565,-1,552,567,566,-1,566,553,552,-1,568,569,566,-1,566,567,568,-1,570,571,566,-1,566,569,570,-1,554,553,566,-1,566,571,554,-1,561,573,572,-1,572,562,561,-1,574,575,572,-1,572,573,574,-1,576,577,572,-1,572,575,576,-1,563,562,572,-1,572,577,563,-1,568,579,578,-1,578,569,568,-1,580,581,578,-1,578,579,580,-1,582,583,578,-1,578,581,582,-1,570,569,578,-1,578,583,570,-1,574,585,584,-1,584,575,574,-1,586,587,584,-1,584,585,586,-1,588,589,584,-1,584,587,588,-1,576,575,584,-1,584,589,576,-1,580,591,590,-1,590,581,580,-1,592,593,590,-1,590,591,592,-1,594,595,590,-1,590,593,594,-1,582,581,590,-1,590,595,582,-1,586,597,596,-1,596,587,586,-1,599,601,596,-1,596,597,599,-1,603,605,596,-1,596,601,603,-1,588,587,596,-1,596,605,588,-1,592,608,607,-1,607,593,592,-1,610,611,607,-1,607,608,610,-1,612,613,607,-1,607,611,612,-1,594,593,607,-1,607,613,594,-1,599,615,614,-1,614,601,599,-1,617,618,614,-1,614,615,617,-1,619,620,614,-1,614,618,619,-1,603,601,614,-1,614,620,603,-1,610,622,621,-1,621,611,610,-1,623,624,621,-1,621,622,623,-1,625,626,621,-1,621,624,625,-1,612,611,621,-1,621,626,612,-1,617,628,627,-1,627,618,617,-1,629,630,627,-1,627,628,629,-1,631,632,627,-1,627,630,631,-1,619,618,627,-1,627,632,619,-1,623,634,633,-1,633,624,623,-1,177,176,633,-1,633,634,177,-1,175,635,633,-1,633,176,175,-1,625,624,633,-1,633,635,625,-1,629,637,636,-1,636,630,629,-1,183,182,636,-1,636,637,183,-1,181,638,636,-1,636,182,181,-1,631,630,636,-1,636,638,631,-1,557,640,639,-1,639,560,557,-1,641,707,639,-1,639,640,641,-1,708,793,639,-1,639,707,708,-1,561,560,639,-1,639,793,561,-1,561,793,822,-1,822,573,561,-1,708,823,822,-1,822,793,708,-1,824,825,822,-1,822,823,824,-1,574,573,822,-1,822,825,574,-1,574,825,826,-1,826,585,574,-1,824,827,826,-1,826,825,824,-1,828,829,826,-1,826,827,828,-1,586,585,826,-1,826,829,586,-1,586,829,830,-1,830,597,586,-1,828,831,830,-1,830,829,828,-1,832,833,830,-1,830,831,832,-1,599,597,830,-1,830,833,599,-1,599,833,834,-1,834,615,599,-1,832,835,834,-1,834,833,832,-1,836,837,834,-1,834,835,836,-1,617,615,834,-1,834,837,617,-1,617,837,838,-1,838,628,617,-1,836,839,838,-1,838,837,836,-1,840,841,838,-1,838,839,840,-1,629,628,838,-1,838,841,629,-1,629,841,842,-1,842,637,629,-1,840,843,842,-1,842,841,840,-1,306,305,842,-1,842,843,306,-1,183,637,842,-1,842,305,183,-1,175,308,844,-1,844,635,175,-1,313,845,844,-1,844,308,313,-1,846,847,844,-1,844,845,846,-1,625,635,844,-1,844,847,625,-1,625,847,848,-1,848,626,625,-1,846,849,848,-1,848,847,846,-1,850,851,848,-1,848,849,850,-1,612,626,848,-1,848,851,612,-1,612,851,852,-1,852,613,612,-1,850,853,852,-1,852,851,850,-1,854,855,852,-1,852,853,854,-1,594,613,852,-1,852,855,594,-1,594,855,856,-1,856,595,594,-1,854,857,856,-1,856,855,854,-1,858,859,856,-1,856,857,858,-1,582,595,856,-1,856,859,582,-1,582,859,860,-1,860,583,582,-1,858,861,860,-1,860,859,858,-1,862,863,860,-1,860,861,862,-1,570,583,860,-1,860,863,570,-1,570,863,864,-1,864,571,570,-1,862,865,864,-1,864,863,862,-1,866,867,864,-1,864,865,866,-1,554,571,864,-1,864,867,554,-1,554,867,868,-1,868,555,554,-1,866,869,868,-1,868,867,866,-1,871,872,868,-1,868,869,871,-1,556,555,868,-1,868,872,556,-1,563,875,874,-1,874,564,563,-1,432,877,874,-1,874,875,432,-1,565,564,874,-1,874,877,565,-1,576,880,878,-1,878,577,576,-1,432,875,878,-1,878,880,432,-1,563,577,878,-1,878,875,563,-1,588,883,881,-1,881,589,588,-1,432,880,881,-1,881,883,432,-1,576,589,881,-1,881,880,576,-1,603,885,884,-1,884,605,603,-1,432,883,884,-1,884,885,432,-1,588,605,884,-1,884,883,588,-1,619,888,887,-1,887,620,619,-1,432,885,887,-1,887,888,432,-1,603,620,887,-1,887,885,603,-1,631,890,889,-1,889,632,631,-1,432,888,889,-1,889,890,432,-1,619,632,889,-1,889,888,619,-1,181,443,891,-1,891,638,181,-1,432,890,891,-1,891,443,432,-1,631,638,891,-1,891,890,631,-1,646,649,648,-1,648,647,646,-1,650,651,648,-1,648,649,650,-1,652,653,648,-1,648,651,652,-1,654,647,648,-1,648,653,654,-1,655,658,657,-1,657,656,655,-1,659,660,657,-1,657,658,659,-1,661,662,657,-1,657,660,661,-1,663,656,657,-1,657,662,663,-1,664,667,666,-1,666,665,664,-1,668,669,666,-1,666,667,668,-1,670,671,666,-1,666,669,670,-1,672,665,666,-1,666,671,672,-1,673,676,675,-1,675,674,673,-1,677,678,675,-1,675,676,677,-1,679,680,675,-1,675,678,679,-1,681,674,675,-1,675,680,681,-1,682,685,684,-1,684,683,682,-1,686,687,684,-1,684,685,686,-1,688,689,684,-1,684,687,688,-1,690,683,684,-1,684,689,690,-1,691,694,693,-1,693,692,691,-1,695,696,693,-1,693,694,695,-1,697,698,693,-1,693,696,697,-1,699,692,693,-1,693,698,699,-1,700,703,702,-1,702,701,700,-1,704,705,702,-1,702,703,704,-1,706,709,702,-1,702,705,706,-1,710,701,702,-1,702,709,710,-1,711,714,713,-1,713,712,711,-1,715,716,713,-1,713,714,715,-1,717,718,713,-1,713,716,717,-1,719,712,713,-1,713,718,719,-1,719,718,721,-1,721,720,719,-1,717,722,721,-1,721,718,717,-1,723,724,721,-1,721,722,723,-1,725,720,721,-1,721,724,725,-1,725,724,727,-1,727,726,725,-1,723,728,727,-1,727,724,723,-1,729,730,727,-1,727,728,729,-1,731,726,727,-1,727,730,731,-1,731,730,733,-1,733,732,731,-1,729,734,733,-1,733,730,729,-1,715,714,733,-1,733,734,715,-1,711,732,733,-1,733,714,711,-1,735,738,737,-1,737,736,735,-1,739,740,737,-1,737,738,739,-1,741,742,737,-1,737,740,741,-1,142,736,737,-1,737,742,142,-1,142,742,743,-1,743,199,142,-1,741,744,743,-1,743,742,741,-1,745,746,743,-1,743,744,745,-1,200,199,743,-1,743,746,200,-1,200,746,748,-1,748,747,200,-1,745,749,748,-1,748,746,745,-1,750,751,748,-1,748,749,750,-1,752,747,748,-1,748,751,752,-1,752,751,754,-1,754,753,752,-1,750,755,754,-1,754,751,750,-1,739,738,754,-1,754,755,739,-1,735,753,754,-1,754,738,735,-1,752,758,757,-1,757,756,752,-1,759,760,757,-1,757,758,759,-1,761,762,757,-1,757,760,761,-1,763,756,757,-1,757,762,763,-1,763,762,765,-1,765,764,763,-1,761,766,765,-1,765,762,761,-1,767,768,765,-1,765,766,767,-1,769,764,765,-1,765,768,769,-1,769,768,771,-1,771,770,769,-1,767,772,771,-1,771,768,767,-1,773,774,771,-1,771,772,773,-1,735,770,771,-1,771,774,735,-1,735,774,775,-1,775,753,735,-1,773,776,775,-1,775,774,773,-1,759,758,775,-1,775,776,759,-1,752,753,775,-1,775,758,752,-1,763,779,778,-1,778,777,763,-1,780,781,778,-1,778,779,780,-1,782,783,778,-1,778,781,782,-1,784,777,778,-1,778,783,784,-1,784,783,786,-1,786,785,784,-1,782,787,786,-1,786,783,782,-1,788,789,786,-1,786,787,788,-1,790,785,786,-1,786,789,790,-1,790,789,792,-1,792,791,790,-1,788,794,792,-1,792,789,788,-1,795,796,792,-1,792,794,795,-1,769,791,792,-1,792,796,769,-1,769,796,797,-1,797,764,769,-1,795,798,797,-1,797,796,795,-1,780,779,797,-1,797,798,780,-1,763,764,797,-1,797,779,763,-1,784,801,800,-1,800,799,784,-1,802,803,800,-1,800,801,802,-1,804,805,800,-1,800,803,804,-1,806,799,800,-1,800,805,806,-1,806,805,808,-1,808,807,806,-1,804,809,808,-1,808,805,804,-1,810,811,808,-1,808,809,810,-1,812,807,808,-1,808,811,812,-1,812,811,814,-1,814,813,812,-1,810,815,814,-1,814,811,810,-1,816,817,814,-1,814,815,816,-1,790,813,814,-1,814,817,790,-1,790,817,818,-1,818,785,790,-1,816,819,818,-1,818,817,816,-1,802,801,818,-1,818,819,802,-1,784,785,818,-1,818,801,784,-1,806,870,821,-1,821,820,806,-1,873,876,821,-1,821,870,873,-1,879,882,821,-1,821,876,879,-1,886,820,821,-1,821,882,886,-1,886,882,901,-1,901,896,886,-1,879,902,901,-1,901,882,879,-1,903,904,901,-1,901,902,903,-1,905,896,901,-1,901,904,905,-1,905,904,907,-1,907,906,905,-1,903,908,907,-1,907,904,903,-1,909,910,907,-1,907,908,909,-1,812,906,907,-1,907,910,812,-1,812,910,911,-1,911,807,812,-1,909,912,911,-1,911,910,909,-1,873,870,911,-1,911,912,873,-1,806,807,911,-1,911,870,806,-1,886,915,914,-1,914,913,886,-1,916,917,914,-1,914,915,916,-1,918,919,914,-1,914,917,918,-1,725,913,914,-1,914,919,725,-1,725,919,920,-1,920,720,725,-1,918,921,920,-1,920,919,918,-1,922,923,920,-1,920,921,922,-1,719,720,920,-1,920,923,719,-1,719,923,925,-1,925,924,719,-1,922,926,925,-1,925,923,922,-1,927,928,925,-1,925,926,927,-1,905,924,925,-1,925,928,905,-1,905,928,929,-1,929,896,905,-1,927,930,929,-1,929,928,927,-1,916,915,929,-1,929,930,916,-1,886,896,929,-1,929,915,886,-1,432,445,892,-1,892,877,432,-1,450,893,892,-1,892,445,450,-1,894,895,892,-1,892,893,894,-1,565,877,892,-1,892,895,565,-1,931,934,933,-1,933,932,931,-1,646,647,933,-1,933,934,646,-1,654,935,933,-1,933,647,654,-1,936,932,933,-1,933,935,936,-1,936,935,938,-1,938,937,936,-1,654,653,938,-1,938,935,654,-1,652,939,938,-1,938,653,652,-1,940,937,938,-1,938,939,940,-1,940,939,942,-1,942,941,940,-1,652,651,942,-1,942,939,652,-1,650,943,942,-1,942,651,650,-1,944,941,942,-1,942,943,944,-1,944,943,946,-1,946,945,944,-1,650,649,946,-1,946,943,650,-1,646,934,946,-1,946,649,646,-1,931,945,946,-1,946,934,931,-1,947,950,949,-1,949,948,947,-1,655,656,949,-1,949,950,655,-1,663,951,949,-1,949,656,663,-1,952,948,949,-1,949,951,952,-1,952,951,954,-1,954,953,952,-1,663,662,954,-1,954,951,663,-1,661,955,954,-1,954,662,661,-1,956,953,954,-1,954,955,956,-1,956,955,958,-1,958,957,956,-1,661,660,958,-1,958,955,661,-1,659,959,958,-1,958,660,659,-1,960,957,958,-1,958,959,960,-1,960,959,962,-1,962,961,960,-1,659,658,962,-1,962,959,659,-1,655,950,962,-1,962,658,655,-1,947,961,962,-1,962,950,947,-1,963,966,965,-1,965,964,963,-1,664,665,965,-1,965,966,664,-1,672,967,965,-1,965,665,672,-1,968,964,965,-1,965,967,968,-1,968,967,970,-1,970,969,968,-1,672,671,970,-1,970,967,672,-1,670,971,970,-1,970,671,670,-1,972,969,970,-1,970,971,972,-1,972,971,974,-1,974,973,972,-1,670,669,974,-1,974,971,670,-1,668,975,974,-1,974,669,668,-1,976,973,974,-1,974,975,976,-1,976,975,978,-1,978,977,976,-1,668,667,978,-1,978,975,668,-1,664,966,978,-1,978,667,664,-1,963,977,978,-1,978,966,963,-1,979,982,981,-1,981,980,979,-1,673,674,981,-1,981,982,673,-1,681,983,981,-1,981,674,681,-1,984,980,981,-1,981,983,984,-1,984,983,986,-1,986,985,984,-1,681,680,986,-1,986,983,681,-1,679,987,986,-1,986,680,679,-1,988,985,986,-1,986,987,988,-1,988,987,990,-1,990,989,988,-1,679,678,990,-1,990,987,679,-1,677,991,990,-1,990,678,677,-1,992,989,990,-1,990,991,992,-1,992,991,994,-1,994,993,992,-1,677,676,994,-1,994,991,677,-1,673,982,994,-1,994,676,673,-1,979,993,994,-1,994,982,979,-1,995,998,997,-1,997,996,995,-1,682,683,997,-1,997,998,682,-1,690,999,997,-1,997,683,690,-1,1000,996,997,-1,997,999,1000,-1,1000,999,1002,-1,1002,1001,1000,-1,690,689,1002,-1,1002,999,690,-1,688,1003,1002,-1,1002,689,688,-1,1004,1001,1002,-1,1002,1003,1004,-1,1004,1003,1006,-1,1006,1005,1004,-1,688,687,1006,-1,1006,1003,688,-1,686,1007,1006,-1,1006,687,686,-1,1008,1005,1006,-1,1006,1007,1008,-1,1008,1007,1010,-1,1010,1009,1008,-1,686,685,1010,-1,1010,1007,686,-1,682,998,1010,-1,1010,685,682,-1,995,1009,1010,-1,1010,998,995,-1,1011,1014,1013,-1,1013,1012,1011,-1,691,692,1013,-1,1013,1014,691,-1,699,1015,1013,-1,1013,692,699,-1,1016,1012,1013,-1,1013,1015,1016,-1,1016,1015,1018,-1,1018,1017,1016,-1,699,698,1018,-1,1018,1015,699,-1,697,1019,1018,-1,1018,698,697,-1,1020,1017,1018,-1,1018,1019,1020,-1,1020,1019,1022,-1,1022,1021,1020,-1,697,696,1022,-1,1022,1019,697,-1,695,1023,1022,-1,1022,696,695,-1,1024,1021,1022,-1,1022,1023,1024,-1,1024,1023,1026,-1,1026,1025,1024,-1,695,694,1026,-1,1026,1023,695,-1,691,1014,1026,-1,1026,694,691,-1,1011,1025,1026,-1,1026,1014,1011,-1,1027,1030,1029,-1,1029,1028,1027,-1,700,701,1029,-1,1029,1030,700,-1,710,1031,1029,-1,1029,701,710,-1,1032,1028,1029,-1,1029,1031,1032,-1,1032,1031,1034,-1,1034,1033,1032,-1,710,709,1034,-1,1034,1031,710,-1,706,1035,1034,-1,1034,709,706,-1,1036,1033,1034,-1,1034,1035,1036,-1,1036,1035,1038,-1,1038,1037,1036,-1,706,705,1038,-1,1038,1035,706,-1,704,1039,1038,-1,1038,705,704,-1,1040,1037,1038,-1,1038,1039,1040,-1,1040,1039,1042,-1,1042,1041,1040,-1,704,703,1042,-1,1042,1039,704,-1,700,1030,1042,-1,1042,703,700,-1,1027,1041,1042,-1,1042,1030,1027,-1,717,716,1044,-1,1044,1043,717,-1,715,1045,1044,-1,1044,716,715,-1,931,932,1044,-1,1044,1045,931,-1,936,1043,1044,-1,1044,932,936,-1,723,722,1047,-1,1047,1046,723,-1,717,1043,1047,-1,1047,722,717,-1,936,937,1047,-1,1047,1043,936,-1,940,1046,1047,-1,1047,937,940,-1,729,728,1049,-1,1049,1048,729,-1,723,1046,1049,-1,1049,728,723,-1,940,941,1049,-1,1049,1046,940,-1,944,1048,1049,-1,1049,941,944,-1,715,734,1050,-1,1050,1045,715,-1,729,1048,1050,-1,1050,734,729,-1,944,945,1050,-1,1050,1048,944,-1,931,1045,1050,-1,1050,945,931,-1,741,740,1052,-1,1052,1051,741,-1,739,1053,1052,-1,1052,740,739,-1,947,948,1052,-1,1052,1053,947,-1,952,1051,1052,-1,1052,948,952,-1,745,744,1055,-1,1055,1054,745,-1,741,1051,1055,-1,1055,744,741,-1,952,953,1055,-1,1055,1051,952,-1,956,1054,1055,-1,1055,953,956,-1,750,749,1057,-1,1057,1056,750,-1,745,1054,1057,-1,1057,749,745,-1,956,957,1057,-1,1057,1054,956,-1,960,1056,1057,-1,1057,957,960,-1,739,755,1058,-1,1058,1053,739,-1,750,1056,1058,-1,1058,755,750,-1,960,961,1058,-1,1058,1056,960,-1,947,1053,1058,-1,1058,961,947,-1,761,760,1060,-1,1060,1059,761,-1,759,1061,1060,-1,1060,760,759,-1,963,964,1060,-1,1060,1061,963,-1,968,1059,1060,-1,1060,964,968,-1,767,766,1063,-1,1063,1062,767,-1,761,1059,1063,-1,1063,766,761,-1,968,969,1063,-1,1063,1059,968,-1,972,1062,1063,-1,1063,969,972,-1,773,772,1065,-1,1065,1064,773,-1,767,1062,1065,-1,1065,772,767,-1,972,973,1065,-1,1065,1062,972,-1,976,1064,1065,-1,1065,973,976,-1,759,776,1066,-1,1066,1061,759,-1,773,1064,1066,-1,1066,776,773,-1,976,977,1066,-1,1066,1064,976,-1,963,1061,1066,-1,1066,977,963,-1,782,781,1068,-1,1068,1067,782,-1,780,1069,1068,-1,1068,781,780,-1,979,980,1068,-1,1068,1069,979,-1,984,1067,1068,-1,1068,980,984,-1,788,787,1071,-1,1071,1070,788,-1,782,1067,1071,-1,1071,787,782,-1,984,985,1071,-1,1071,1067,984,-1,988,1070,1071,-1,1071,985,988,-1,795,794,1073,-1,1073,1072,795,-1,788,1070,1073,-1,1073,794,788,-1,988,989,1073,-1,1073,1070,988,-1,992,1072,1073,-1,1073,989,992,-1,780,798,1074,-1,1074,1069,780,-1,795,1072,1074,-1,1074,798,795,-1,992,993,1074,-1,1074,1072,992,-1,979,1069,1074,-1,1074,993,979,-1,804,803,1076,-1,1076,1075,804,-1,802,1077,1076,-1,1076,803,802,-1,995,996,1076,-1,1076,1077,995,-1,1000,1075,1076,-1,1076,996,1000,-1,810,809,1079,-1,1079,1078,810,-1,804,1075,1079,-1,1079,809,804,-1,1000,1001,1079,-1,1079,1075,1000,-1,1004,1078,1079,-1,1079,1001,1004,-1,816,815,1081,-1,1081,1080,816,-1,810,1078,1081,-1,1081,815,810,-1,1004,1005,1081,-1,1081,1078,1004,-1,1008,1080,1081,-1,1081,1005,1008,-1,802,819,1082,-1,1082,1077,802,-1,816,1080,1082,-1,1082,819,816,-1,1008,1009,1082,-1,1082,1080,1008,-1,995,1077,1082,-1,1082,1009,995,-1,879,876,1084,-1,1084,1083,879,-1,873,1085,1084,-1,1084,876,873,-1,1011,1012,1084,-1,1084,1085,1011,-1,1016,1083,1084,-1,1084,1012,1016,-1,903,902,1087,-1,1087,1086,903,-1,879,1083,1087,-1,1087,902,879,-1,1016,1017,1087,-1,1087,1083,1016,-1,1020,1086,1087,-1,1087,1017,1020,-1,909,908,1089,-1,1089,1088,909,-1,903,1086,1089,-1,1089,908,903,-1,1020,1021,1089,-1,1089,1086,1020,-1,1024,1088,1089,-1,1089,1021,1024,-1,873,912,1090,-1,1090,1085,873,-1,909,1088,1090,-1,1090,912,909,-1,1024,1025,1090,-1,1090,1088,1024,-1,1011,1085,1090,-1,1090,1025,1011,-1,918,917,1092,-1,1092,1091,918,-1,916,1093,1092,-1,1092,917,916,-1,1027,1028,1092,-1,1092,1093,1027,-1,1032,1091,1092,-1,1092,1028,1032,-1,922,921,1095,-1,1095,1094,922,-1,918,1091,1095,-1,1095,921,918,-1,1032,1033,1095,-1,1095,1091,1032,-1,1036,1094,1095,-1,1095,1033,1036,-1,927,926,1097,-1,1097,1096,927,-1,922,1094,1097,-1,1097,926,922,-1,1036,1037,1097,-1,1097,1094,1036,-1,1040,1096,1097,-1,1097,1037,1040,-1,916,930,1098,-1,1098,1093,916,-1,927,1096,1098,-1,1098,930,927,-1,1040,1041,1098,-1,1098,1096,1040,-1,1027,1093,1098,-1,1098,1041,1027,-1,894,893,898,-1,898,897,894,-1,450,456,898,-1,898,893,450,-1,455,899,898,-1,898,456,455,-1,900,897,898,-1,898,899,900,-1]);
TextureCoordinate735 := TTextureCoordinateNode.Create;
TextureCoordinate735.SetPoint([Vector2(0.8647,0.3354),Vector2(0.8772,0.3277),Vector2(0.8746,0.3053),Vector2(0.8621,0.313),Vector2(0.8601,0.2951),Vector2(0.8726,0.2875),Vector2(0.8849,0.2799),Vector2(0.8869,0.2977),Vector2(0.8896,0.3201),Vector2(0.8597,0.2826),Vector2(0.8715,0.2769),Vector2(0.8722,0.2824),Vector2(0.8598,0.2838),Vector2(0.8599,0.2848),Vector2(0.8717,0.2877),Vector2(0.8824,0.2879),Vector2(0.8841,0.2797),Vector2(0.8831,0.2709),Vector2(0.9015,0.3128),Vector2(0.8989,0.2904),Vector2(0.8968,0.2726),Vector2(0.9082,0.2656),Vector2(0.9103,0.2834),Vector2(0.913,0.3058),Vector2(0.894,0.2646),Vector2(0.8952,0.2745),Vector2(0.8933,0.2842),Vector2(0.9019,0.2784),Vector2(0.9057,0.268),Vector2(0.9045,0.2582),Vector2(0.9239,0.299),Vector2(0.9213,0.2766),Vector2(0.9192,0.2589),Vector2(0.9299,0.2523),Vector2(0.9321,0.27),Vector2(0.9347,0.2924),Vector2(0.9147,0.2519),Vector2(0.9158,0.2618),Vector2(0.9122,0.2726),Vector2(0.9201,0.2673),Vector2(0.926,0.2555),Vector2(0.9249,0.2457),Vector2(0.9454,0.2859),Vector2(0.9428,0.2634),Vector2(0.9406,0.2457),Vector2(0.9501,0.2399),Vector2(0.9523,0.2576),Vector2(0.9549,0.28),Vector2(0.9353,0.2393),Vector2(0.8544,0.1),Vector2(0.8519,0.1017),Vector2(0.8611,0.09569),Vector2(0.8611,0.09564),Vector2(0.8678,0.09126),Vector2(0.8702,0.08971),Vector2(0.8679,0.09122),Vector2(0.861,0.09573),Vector2(0.8541,0.1002),Vector2(0.9585,0.03203),Vector2(0.9596,0.03133),Vector2(0.96,0.03107),Vector2(0.9584,0.0321),Vector2(0.9591,0.03167),Vector2(0.9604,0.03082),Vector2(0.9615,0.0301),Vector2(0.9616,0.03005),Vector2(0.9609,0.0305),Vector2(0.9593,0.03151),Vector2(0.9587,0.03191),Vector2(0.9568,0.03319),Vector2(0.9582,0.03223),Vector2(0.9564,0.03343),Vector2(0.9548,0.03448),Vector2(0.9542,0.03487),Vector2(0.9553,0.03415),Vector2(0.9571,0.03297),Vector2(0.9524,0.03607),Vector2(0.9524,0.03602),Vector2(0.9481,0.03882),Vector2(0.9494,0.03797),Vector2(0.9459,0.04029),Vector2(0.9439,0.04162),Vector2(0.944,0.04152),Vector2(0.9468,0.03967),Vector2(0.9503,0.03741),Vector2(0.938,0.04546),Vector2(0.9392,0.04468),Vector2(0.9364,0.2491),Vector2(0.931,0.261),Vector2(0.9309,0.05011),Vector2(0.9321,0.04928),Vector2(0.9256,0.05352),Vector2(0.9225,0.05555),Vector2(0.9237,0.05479),Vector2(0.9296,0.05095),Vector2(0.9361,0.04669),Vector2(0.9154,0.06023),Vector2(0.9165,0.05949),Vector2(0.9084,0.06475),Vector2(0.9096,0.064),Vector2(0.9032,0.06814),Vector2(0.9004,0.07001),Vector2(0.9016,0.06919),Vector2(0.9073,0.06551),Vector2(0.9135,0.06145),Vector2(0.8925,0.07517),Vector2(0.8942,0.07408),Vector2(0.8855,0.07974),Vector2(0.8861,0.07936),Vector2(0.8794,0.08374),Vector2(0.8768,0.08541),Vector2(0.8787,0.08417),Vector2(0.8849,0.08013),Vector2(0.8914,0.07589),Vector2(0.8536,0.1469),Vector2(0.8566,0.144),Vector2(0.8658,0.138),Vector2(0.8659,0.1387),Vector2(0.878,0.1308),Vector2(0.875,0.132),Vector2(0.8743,0.1261),Vector2(0.8652,0.1321),Vector2(0.856,0.1381),Vector2(0.8782,0.1298),Vector2(0.8783,0.1303),Vector2(0.8786,0.1309),Vector2(0.8752,0.1318),Vector2(0.8746,0.126),Vector2(0.8776,0.124),Vector2(0.8656,0.1381),Vector2(0.8658,0.1399),Vector2(0.853,0.1485),Vector2(0.8561,0.1443),Vector2(0.8554,0.1385),Vector2(0.865,0.1322),Vector2(0.8532,0.1462),Vector2(0.8533,0.1471),Vector2(0.8526,0.1403),Vector2(0.9617,0.0761),Vector2(0.9624,0.07489),Vector2(0.9621,0.07506),Vector2(0.9621,0.07583),Vector2(0.9628,0.07539),Vector2(0.9631,0.07441),Vector2(0.9625,0.06853),Vector2(0.9377,0.2565),Vector2(0.9456,0.2435),Vector2(0.9446,0.2336),Vector2(0.962,0.2757),Vector2(0.9593,0.2533),Vector2(0.9572,0.2355),Vector2(0.9622,0.2324),Vector2(0.9644,0.2502),Vector2(0.967,0.2726),Vector2(0.9511,0.2295),Vector2(0.9522,0.2394),Vector2(0.9455,0.2521),Vector2(0.9476,0.2503),Vector2(0.9567,0.2367),Vector2(0.9557,0.2268),Vector2(0.9705,0.2705),Vector2(0.9678,0.2481),Vector2(0.9657,0.2303),Vector2(0.9678,0.229),Vector2(0.97,0.2468),Vector2(0.9726,0.2692),Vector2(0.9588,0.2248),Vector2(0.9599,0.2347),Vector2(0.9526,0.2478),Vector2(0.9522,0.2475),Vector2(0.9618,0.2335),Vector2(0.9608,0.2236),Vector2(0.9737,0.2685),Vector2(0.9711,0.2461),Vector2(0.9689,0.2284),Vector2(0.9692,0.2282),Vector2(0.9714,0.2459),Vector2(0.974,0.2683),Vector2(0.9617,0.2231),Vector2(0.9628,0.233),Vector2(0.9552,0.2462),Vector2(0.9532,0.2469),Vector2(0.963,0.2328),Vector2(0.9619,0.2229),Vector2(0.8599,0.282),Vector2(0.8715,0.2749),Vector2(0.8828,0.268),Vector2(0.8829,0.2677),Vector2(0.8716,0.2747),Vector2(0.86,0.2819),Vector2(0.8937,0.2613),Vector2(0.9042,0.2549),Vector2(0.9044,0.2545),Vector2(0.8937,0.2611),Vector2(0.9144,0.2486),Vector2(0.9246,0.2423),Vector2(0.9615,0.06917),Vector2(0.9618,0.06901),Vector2(0.9652,0.07305),Vector2(0.9652,0.0735),Vector2(0.9676,0.07275),Vector2(0.967,0.07187),Vector2(0.9663,0.06605),Vector2(0.9646,0.0672),Vector2(0.9672,0.07175),Vector2(0.9675,0.07342),Vector2(0.9663,0.07362),Vector2(0.9661,0.07245),Vector2(0.9654,0.06663),Vector2(0.9665,0.06594),Vector2(0.9641,0.07376),Vector2(0.9642,0.07421),Vector2(0.9635,0.06791),Vector2(0.9653,0.07301),Vector2(0.9638,0.07396),Vector2(0.9641,0.07564),Vector2(0.9606,0.07732),Vector2(0.9612,0.0757),Vector2(0.9605,0.06987),Vector2(0.9631,0.06815),Vector2(0.9646,0.06719),Vector2(0.9587,0.07729),Vector2(0.9588,0.07774),Vector2(0.9563,0.07961),Vector2(0.9576,0.078),Vector2(0.957,0.07212),Vector2(0.9581,0.07143),Vector2(0.959,0.07709),Vector2(0.959,0.07785),Vector2(0.9616,0.0754),Vector2(0.961,0.06952),Vector2(0.9584,0.0712),Vector2(0.9641,0.07376),Vector2(0.9635,0.06791),Vector2(0.9589,0.07716),Vector2(0.9549,0.0798),Vector2(0.9552,0.08149),Vector2(0.9481,0.08548),Vector2(0.9498,0.08311),Vector2(0.9491,0.07727),Vector2(0.9542,0.07397),Vector2(0.9582,0.07134),Vector2(0.9469,0.08502),Vector2(0.9469,0.08547),Vector2(0.9446,0.08724),Vector2(0.9469,0.08499),Vector2(0.9463,0.07912),Vector2(0.9463,0.07916),Vector2(0.9507,0.08252),Vector2(0.9507,0.08326),Vector2(0.9555,0.07936),Vector2(0.9549,0.07349),Vector2(0.9501,0.07664),Vector2(0.9587,0.0773),Vector2(0.958,0.07146),Vector2(0.9454,0.08597),Vector2(0.9374,0.09121),Vector2(0.9377,0.09292),Vector2(0.926,0.0999),Vector2(0.9284,0.09706),Vector2(0.9278,0.09122),Vector2(0.9367,0.08537),Vector2(0.9248,0.242),Vector2(0.9144,0.2484),Vector2(0.9447,0.08014),Vector2(0.9242,0.09986),Vector2(0.9242,0.1003),Vector2(0.9225,0.1017),Vector2(0.9255,0.09895),Vector2(0.9249,0.09308),Vector2(0.9235,0.094),Vector2(0.9336,0.09368),Vector2(0.9336,0.0944),Vector2(0.9426,0.0878),Vector2(0.942,0.08194),Vector2(0.933,0.08782),Vector2(0.9469,0.08503),Vector2(0.9462,0.07919),Vector2(0.9228,0.1008),Vector2(0.9147,0.106),Vector2(0.915,0.1078),Vector2(0.9032,0.1148),Vector2(0.9059,0.1118),Vector2(0.9052,0.1059),Vector2(0.9141,0.1002),Vector2(0.9221,0.09494),Vector2(0.902,0.1143),Vector2(0.9021,0.1148),Vector2(0.9008,0.1158),Vector2(0.9037,0.1132),Vector2(0.9031,0.1073),Vector2(0.9014,0.1084),Vector2(0.935,0.2359),Vector2(0.9443,0.2302),Vector2(0.9455,0.2293),Vector2(0.9352,0.2356),Vector2(0.951,0.2261),Vector2(0.9555,0.2233),Vector2(0.9564,0.2226),Vector2(0.9512,0.2258),Vector2(0.9587,0.2214),Vector2(0.9606,0.2202),Vector2(0.9615,0.2195),Vector2(0.9589,0.221),Vector2(0.9616,0.2196),Vector2(0.9618,0.2195),Vector2(0.9625,0.2189),Vector2(0.9618,0.2192),Vector2(0.9679,0.2199),Vector2(0.9676,0.22),Vector2(0.9665,0.2207),Vector2(0.9658,0.2173),Vector2(0.967,0.2171),Vector2(0.967,0.2165),Vector2(0.9644,0.222),Vector2(0.961,0.2241),Vector2(0.9605,0.2206),Vector2(0.9638,0.2191),Vector2(0.956,0.2272),Vector2(0.9489,0.2315),Vector2(0.9488,0.2278),Vector2(0.9554,0.2242),Vector2(0.9395,0.2373),Vector2(0.9288,0.2439),Vector2(0.928,0.2405),Vector2(0.939,0.2343),Vector2(0.9181,0.2504),Vector2(0.9072,0.2572),Vector2(0.9066,0.2536),Vector2(0.9115,0.1082),Vector2(0.9115,0.1088),Vector2(0.92,0.1026),Vector2(0.9193,0.09673),Vector2(0.9108,0.1023),Vector2(0.9241,0.09988),Vector2(0.9235,0.09403),Vector2(0.8999,0.1157),Vector2(0.891,0.1215),Vector2(0.8912,0.1233),Vector2(0.8816,0.1277),Vector2(0.881,0.1218),Vector2(0.8903,0.1157),Vector2(0.8993,0.1098),Vector2(0.8783,0.1298),Vector2(0.8809,0.1281),Vector2(0.8803,0.1223),Vector2(0.8776,0.124),Vector2(0.8893,0.1226),Vector2(0.8894,0.1233),Vector2(0.8982,0.1168),Vector2(0.8975,0.111),Vector2(0.8887,0.1168),Vector2(0.902,0.1143),Vector2(0.9014,0.1085),Vector2(0.8526,0.1068),Vector2(0.8521,0.1016),Vector2(0.8612,0.09563),Vector2(0.8617,0.1008),Vector2(0.8709,0.09485),Vector2(0.8702,0.08973),Vector2(0.8734,0.08764),Vector2(0.8741,0.09274),Vector2(0.8711,0.09469),Vector2(0.8704,0.08957),Vector2(0.9176,0.2474),Vector2(0.861,0.09575),Vector2(0.8616,0.1009),Vector2(0.8521,0.1071),Vector2(0.8516,0.1019),Vector2(0.8488,0.1037),Vector2(0.8492,0.109),Vector2(0.9585,0.03763),Vector2(0.958,0.03239),Vector2(0.9578,0.03251),Vector2(0.9582,0.03778),Vector2(0.9592,0.03716),Vector2(0.9587,0.03192),Vector2(0.9605,0.03073),Vector2(0.9611,0.0359),Vector2(0.9628,0.03482),Vector2(0.9621,0.02971),Vector2(0.9622,0.02964),Vector2(0.9629,0.03473),Vector2(0.9619,0.0354),Vector2(0.9612,0.03028),Vector2(0.9595,0.03142),Vector2(0.96,0.0366),Vector2(0.961,0.03597),Vector2(0.9603,0.03087),Vector2(0.9588,0.03185),Vector2(0.9595,0.03694),Vector2(0.9569,0.03863),Vector2(0.9563,0.0335),Vector2(0.9541,0.03492),Vector2(0.9547,0.04012),Vector2(0.9537,0.04074),Vector2(0.9533,0.03548),Vector2(0.9547,0.03454),Vector2(0.9551,0.03981),Vector2(0.9577,0.03816),Vector2(0.9572,0.03292),Vector2(0.9594,0.03147),Vector2(0.96,0.03662),Vector2(0.9546,0.04012),Vector2(0.9539,0.03504),Vector2(0.95,0.03763),Vector2(0.9506,0.04274),Vector2(0.9457,0.04599),Vector2(0.9451,0.04082),Vector2(0.9424,0.0426),Vector2(0.9429,0.04783),Vector2(0.943,0.04774),Vector2(0.9425,0.04248),Vector2(0.9463,0.04001),Vector2(0.9468,0.04526),Vector2(0.9515,0.04215),Vector2(0.951,0.03695),Vector2(0.9539,0.03505),Vector2(0.9546,0.04018),Vector2(0.9412,0.04889),Vector2(0.9405,0.0438),Vector2(0.8957,0.2642),Vector2(0.8839,0.2714),Vector2(0.8835,0.2678),Vector2(0.8953,0.2611),Vector2(0.8717,0.2789),Vector2(0.8594,0.2865),Vector2(0.8595,0.2833),Vector2(0.8715,0.2757),Vector2(0.8747,0.2891),Vector2(0.8686,0.2887),Vector2(0.862,0.2864),Vector2(0.866,0.2846),Vector2(0.8874,0.2834),Vector2(0.8844,0.2872),Vector2(0.8993,0.2761),Vector2(0.8981,0.2788),Vector2(0.9106,0.2691),Vector2(0.9119,0.2704),Vector2(0.9172,0.2651),Vector2(0.9224,0.2639),Vector2(0.9201,0.2633),Vector2(0.9275,0.2608),Vector2(0.9208,0.2629),Vector2(0.9294,0.2596),Vector2(0.8596,0.2851),Vector2(0.8597,0.2849),Vector2(0.8598,0.2845),Vector2(0.8592,0.2791),Vector2(0.8591,0.2794),Vector2(0.859,0.2795),Vector2(0.8574,0.2652),Vector2(0.8575,0.265),Vector2(0.8554,0.2465),Vector2(0.8552,0.2466),Vector2(0.8551,0.2466),Vector2(0.8573,0.2653),Vector2(0.9326,0.04897),Vector2(0.9332,0.05411),Vector2(0.9243,0.05992),Vector2(0.9238,0.05471),Vector2(0.9197,0.05742),Vector2(0.9201,0.06267),Vector2(0.9216,0.06174),Vector2(0.9211,0.05648),Vector2(0.9291,0.05126),Vector2(0.9296,0.05648),Vector2(0.9386,0.05063),Vector2(0.938,0.04547),Vector2(0.942,0.04281),Vector2(0.9427,0.04792),Vector2(0.9186,0.06368),Vector2(0.9179,0.05858),Vector2(0.91,0.06373),Vector2(0.9106,0.06889),Vector2(0.9018,0.07461),Vector2(0.9013,0.06939),Vector2(0.8976,0.07184),Vector2(0.898,0.07709),Vector2(0.8997,0.07599),Vector2(0.8993,0.07074),Vector2(0.9069,0.06578),Vector2(0.9074,0.07098),Vector2(0.9159,0.06545),Vector2(0.9152,0.06031),Vector2(0.9193,0.05767),Vector2(0.92,0.06277),Vector2(0.8958,0.07858),Vector2(0.8951,0.07347),Vector2(0.8863,0.07922),Vector2(0.8869,0.0844),Vector2(0.8776,0.09047),Vector2(0.8647,0.3354),Vector2(0.8771,0.08524),Vector2(0.8738,0.08737),Vector2(0.8743,0.09263),Vector2(0.8769,0.09093),Vector2(0.8764,0.08568),Vector2(0.8847,0.08026),Vector2(0.8853,0.08545),Vector2(0.894,0.0797),Vector2(0.8934,0.07458),Vector2(0.8972,0.07212),Vector2(0.8979,0.07722),Vector2(0.8634,0.1163),Vector2(0.8726,0.1104),Vector2(0.8542,0.1223),Vector2(0.8758,0.1082),Vector2(0.8728,0.1102),Vector2(0.8633,0.1165),Vector2(0.8537,0.1227),Vector2(0.8509,0.1246),Vector2(0.9599,0.05337),Vector2(0.9608,0.05274),Vector2(0.9601,0.05322),Vector2(0.9628,0.05144),Vector2(0.9645,0.05032),Vector2(0.9647,0.05021),Vector2(0.9637,0.0509),Vector2(0.9617,0.05214),Vector2(0.9613,0.05242),Vector2(0.9587,0.05413),Vector2(0.9628,0.05146),Vector2(0.9563,0.05567),Vector2(0.9553,0.05632),Vector2(0.9568,0.0554),Vector2(0.9593,0.05373),Vector2(0.9617,0.05215),Vector2(0.9524,0.05824),Vector2(0.9474,0.06152),Vector2(0.9564,0.05561),Vector2(0.9445,0.06339),Vector2(0.9446,0.06333),Vector2(0.9484,0.06085),Vector2(0.9532,0.05771),Vector2(0.9563,0.0557),Vector2(0.935,0.06962),Vector2(0.926,0.07546),Vector2(0.943,0.06439),Vector2(0.9218,0.07824),Vector2(0.9232,0.07731),Vector2(0.9313,0.07204),Vector2(0.9403,0.06617),Vector2(0.9445,0.06343),Vector2(0.9123,0.08441),Vector2(0.9035,0.09017),Vector2(0.9203,0.07919),Vector2(0.8997,0.09266),Vector2(0.9014,0.09156),Vector2(0.8621,0.313),Vector2(0.8746,0.3053),Vector2(0.8772,0.3277),Vector2(0.8896,0.3201),Vector2(0.8869,0.2977),Vector2(0.8849,0.2799),Vector2(0.8726,0.2875),Vector2(0.8601,0.2951),Vector2(0.8597,0.2826),Vector2(0.8598,0.2838),Vector2(0.8722,0.2824),Vector2(0.8715,0.2769),Vector2(0.8831,0.2709),Vector2(0.8841,0.2797),Vector2(0.8824,0.2879),Vector2(0.8717,0.2877),Vector2(0.8599,0.2848),Vector2(0.8989,0.2904),Vector2(0.9015,0.3128),Vector2(0.913,0.3058),Vector2(0.9103,0.2834),Vector2(0.9082,0.2656),Vector2(0.8968,0.2726),Vector2(0.8952,0.2745),Vector2(0.894,0.2646),Vector2(0.9045,0.2582),Vector2(0.9057,0.268),Vector2(0.9019,0.2784),Vector2(0.8933,0.2842),Vector2(0.9213,0.2766),Vector2(0.9239,0.299),Vector2(0.9347,0.2924),Vector2(0.9321,0.27),Vector2(0.9299,0.2523),Vector2(0.9192,0.2589),Vector2(0.9158,0.2618),Vector2(0.9147,0.2519),Vector2(0.9249,0.2457),Vector2(0.926,0.2555),Vector2(0.9201,0.2673),Vector2(0.9122,0.2726),Vector2(0.9428,0.2634),Vector2(0.9454,0.2859),Vector2(0.9549,0.28),Vector2(0.9523,0.2576),Vector2(0.9501,0.2399),Vector2(0.9406,0.2457),Vector2(0.9364,0.2491),Vector2(0.9353,0.2393),Vector2(0.9091,0.08653),Vector2(0.9446,0.2336),Vector2(0.9176,0.08097),Vector2(0.9456,0.2435),Vector2(0.9217,0.07828),Vector2(0.9377,0.2565),Vector2(0.8886,0.09993),Vector2(0.931,0.261),Vector2(0.8792,0.106),Vector2(0.9593,0.2533),Vector2(0.962,0.2757),Vector2(0.8975,0.09409),Vector2(0.967,0.2726),Vector2(0.9644,0.2502),Vector2(0.9622,0.2324),Vector2(0.9572,0.2355),Vector2(0.9522,0.2394),Vector2(0.9511,0.2295),Vector2(0.8759,0.1082),Vector2(0.9557,0.2268),Vector2(0.9567,0.2367),Vector2(0.9476,0.2503),Vector2(0.9455,0.2521),Vector2(0.9678,0.2481),Vector2(0.9705,0.2705),Vector2(0.9726,0.2692),Vector2(0.97,0.2468),Vector2(0.9678,0.229),Vector2(0.9657,0.2303),Vector2(0.9599,0.2347),Vector2(0.9588,0.2248),Vector2(0.9608,0.2236),Vector2(0.9618,0.2335),Vector2(0.9522,0.2475),Vector2(0.9526,0.2478),Vector2(0.9711,0.2461),Vector2(0.9737,0.2685),Vector2(0.9689,0.2284),Vector2(0.9628,0.233),Vector2(0.9617,0.2231),Vector2(0.9552,0.2462),Vector2(0.8715,0.2749),Vector2(0.8599,0.282),Vector2(0.86,0.2819),Vector2(0.8785,0.1065),Vector2(0.887,0.101),Vector2(0.8958,0.09522),Vector2(0.8996,0.09272),Vector2(0.8544,0.1),Vector2(0.8611,0.09564),Vector2(0.8611,0.09569),Vector2(0.8519,0.1017),Vector2(0.8541,0.1002),Vector2(0.861,0.09573),Vector2(0.8679,0.09122),Vector2(0.8702,0.08971),Vector2(0.8678,0.09126),Vector2(0.9585,0.03203),Vector2(0.9584,0.0321),Vector2(0.96,0.03107),Vector2(0.9596,0.03133),Vector2(0.9609,0.0305),Vector2(0.9616,0.03005),Vector2(0.9615,0.0301),Vector2(0.9604,0.03082),Vector2(0.9591,0.03167),Vector2(0.9593,0.03151),Vector2(0.9582,0.03223),Vector2(0.9568,0.03319),Vector2(0.9587,0.03191),Vector2(0.9571,0.03297),Vector2(0.9553,0.03415),Vector2(0.9542,0.03487),Vector2(0.9548,0.03448),Vector2(0.9564,0.03343),Vector2(0.9524,0.03607),Vector2(0.9494,0.03797),Vector2(0.9481,0.03882),Vector2(0.9524,0.03602),Vector2(0.9503,0.03741),Vector2(0.9468,0.03967),Vector2(0.944,0.04152),Vector2(0.9439,0.04162),Vector2(0.9459,0.04029),Vector2(0.938,0.04546),Vector2(0.9321,0.04928),Vector2(0.9309,0.05011),Vector2(0.9392,0.04468),Vector2(0.9361,0.04669),Vector2(0.9296,0.05095),Vector2(0.9237,0.05479),Vector2(0.9225,0.05555),Vector2(0.9256,0.05352),Vector2(0.9154,0.06023),Vector2(0.9096,0.064),Vector2(0.9084,0.06475),Vector2(0.9165,0.05949),Vector2(0.9135,0.06145),Vector2(0.9073,0.06551),Vector2(0.9016,0.06919),Vector2(0.9004,0.07001),Vector2(0.9032,0.06814),Vector2(0.8925,0.07517),Vector2(0.8861,0.07936),Vector2(0.8855,0.07974),Vector2(0.8942,0.07408),Vector2(0.8914,0.07589),Vector2(0.8849,0.08013),Vector2(0.8787,0.08417),Vector2(0.8716,0.2747),Vector2(0.8829,0.2677),Vector2(0.8768,0.08541),Vector2(0.8794,0.08374),Vector2(0.8536,0.1469),Vector2(0.8659,0.1387),Vector2(0.8658,0.138),Vector2(0.8566,0.144),Vector2(0.856,0.1381),Vector2(0.8652,0.1321),Vector2(0.8743,0.1261),Vector2(0.875,0.132),Vector2(0.878,0.1308),Vector2(0.8783,0.1303),Vector2(0.8782,0.1298),Vector2(0.8776,0.124),Vector2(0.8746,0.126),Vector2(0.8752,0.1318),Vector2(0.8786,0.1309),Vector2(0.8658,0.1399),Vector2(0.8656,0.1381),Vector2(0.865,0.1322),Vector2(0.8554,0.1385),Vector2(0.8561,0.1443),Vector2(0.853,0.1485),Vector2(0.8533,0.1471),Vector2(0.8532,0.1462),Vector2(0.8526,0.1403),Vector2(0.9617,0.0761),Vector2(0.9621,0.07583),Vector2(0.9621,0.07506),Vector2(0.9624,0.07489),Vector2(0.9618,0.06901),Vector2(0.9615,0.06917),Vector2(0.9625,0.06853),Vector2(0.9631,0.07441),Vector2(0.9652,0.07305),Vector2(0.9646,0.0672),Vector2(0.9663,0.06605),Vector2(0.967,0.07187),Vector2(0.9675,0.07342),Vector2(0.9672,0.07175),Vector2(0.9665,0.06594),Vector2(0.9654,0.06663),Vector2(0.9661,0.07245),Vector2(0.9663,0.07362),Vector2(0.9642,0.07421),Vector2(0.9641,0.07376),Vector2(0.9635,0.06791),Vector2(0.9641,0.07564),Vector2(0.9638,0.07396),Vector2(0.9653,0.07301),Vector2(0.9646,0.06719),Vector2(0.9631,0.06815),Vector2(0.9605,0.06987),Vector2(0.9612,0.0757),Vector2(0.9606,0.07732),Vector2(0.9588,0.07774),Vector2(0.9587,0.07729),Vector2(0.9581,0.07143),Vector2(0.957,0.07212),Vector2(0.9576,0.078),Vector2(0.9563,0.07961),Vector2(0.959,0.07785),Vector2(0.959,0.07709),Vector2(0.9584,0.0712),Vector2(0.961,0.06952),Vector2(0.9616,0.0754),Vector2(0.9641,0.07376),Vector2(0.9635,0.06791),Vector2(0.9552,0.08149),Vector2(0.9549,0.0798),Vector2(0.9589,0.07716),Vector2(0.9582,0.07134),Vector2(0.9542,0.07397),Vector2(0.9491,0.07727),Vector2(0.9498,0.08311),Vector2(0.9481,0.08548),Vector2(0.9469,0.08547),Vector2(0.9469,0.08502),Vector2(0.9463,0.07916),Vector2(0.9463,0.07912),Vector2(0.9469,0.08499),Vector2(0.9446,0.08724),Vector2(0.9507,0.08326),Vector2(0.9507,0.08252),Vector2(0.8828,0.268),Vector2(0.9501,0.07664),Vector2(0.9549,0.07349),Vector2(0.9555,0.07936),Vector2(0.9587,0.0773),Vector2(0.958,0.07146),Vector2(0.9377,0.09292),Vector2(0.9374,0.09121),Vector2(0.9454,0.08597),Vector2(0.9447,0.08014),Vector2(0.9367,0.08537),Vector2(0.9278,0.09122),Vector2(0.9284,0.09706),Vector2(0.926,0.0999),Vector2(0.9242,0.1003),Vector2(0.9242,0.09986),Vector2(0.9235,0.094),Vector2(0.9249,0.09309),Vector2(0.9255,0.09895),Vector2(0.9225,0.1017),Vector2(0.9336,0.0944),Vector2(0.9336,0.09368),Vector2(0.933,0.08782),Vector2(0.942,0.08194),Vector2(0.9426,0.0878),Vector2(0.9469,0.08503),Vector2(0.9462,0.07919),Vector2(0.915,0.1078),Vector2(0.9147,0.106),Vector2(0.8937,0.2613),Vector2(0.8937,0.2611),Vector2(0.9044,0.2545),Vector2(0.9042,0.2549),Vector2(0.9144,0.2486),Vector2(0.9144,0.2484),Vector2(0.9248,0.242),Vector2(0.9246,0.2423),Vector2(0.935,0.2359),Vector2(0.9352,0.2356),Vector2(0.9455,0.2293),Vector2(0.9443,0.2302),Vector2(0.951,0.2261),Vector2(0.9512,0.2258),Vector2(0.9564,0.2226),Vector2(0.9555,0.2233),Vector2(0.9587,0.2214),Vector2(0.9589,0.221),Vector2(0.9615,0.2195),Vector2(0.9606,0.2202),Vector2(0.9616,0.2196),Vector2(0.9618,0.2192),Vector2(0.9676,0.22),Vector2(0.967,0.2171),Vector2(0.9658,0.2173),Vector2(0.9665,0.2207),Vector2(0.9644,0.222),Vector2(0.9638,0.2191),Vector2(0.9605,0.2206),Vector2(0.961,0.2241),Vector2(0.956,0.2272),Vector2(0.9554,0.2242),Vector2(0.9488,0.2278),Vector2(0.9489,0.2315),Vector2(0.9395,0.2373),Vector2(0.939,0.2343),Vector2(0.928,0.2405),Vector2(0.9288,0.2439),Vector2(0.9181,0.2504),Vector2(0.9176,0.2474),Vector2(0.9066,0.2536),Vector2(0.9072,0.2572),Vector2(0.8957,0.2642),Vector2(0.8953,0.2611),Vector2(0.8835,0.2678),Vector2(0.8839,0.2714),Vector2(0.8717,0.2789),Vector2(0.8715,0.2757),Vector2(0.9228,0.1008),Vector2(0.8595,0.2833),Vector2(0.8594,0.2865),Vector2(0.9221,0.09494),Vector2(0.8686,0.2887),Vector2(0.8747,0.2891),Vector2(0.9141,0.1002),Vector2(0.862,0.2864),Vector2(0.8844,0.2872),Vector2(0.9052,0.1059),Vector2(0.8874,0.2834),Vector2(0.8981,0.2788),Vector2(0.9059,0.1118),Vector2(0.8993,0.2761),Vector2(0.9119,0.2704),Vector2(0.9106,0.2691),Vector2(0.9032,0.1148),Vector2(0.9224,0.2639),Vector2(0.9172,0.2651),Vector2(0.9275,0.2608),Vector2(0.9201,0.2633),Vector2(0.9294,0.2596),Vector2(0.8597,0.2849),Vector2(0.8591,0.2794),Vector2(0.8592,0.2791),Vector2(0.8598,0.2845),Vector2(0.9021,0.1148),Vector2(0.8575,0.265),Vector2(0.8574,0.2652),Vector2(0.8552,0.2466),Vector2(0.8554,0.2465),Vector2(0.902,0.1143),Vector2(0.9014,0.1084),Vector2(0.9031,0.1073),Vector2(0.9037,0.1132),Vector2(0.9008,0.1158),Vector2(0.9115,0.1088),Vector2(0.9115,0.1082),Vector2(0.9108,0.1023),Vector2(0.9193,0.09673),Vector2(0.92,0.1026),Vector2(0.9241,0.09988),Vector2(0.9235,0.09403),Vector2(0.8912,0.1233),Vector2(0.891,0.1215),Vector2(0.8999,0.1157),Vector2(0.8993,0.1098),Vector2(0.8903,0.1157),Vector2(0.881,0.1218),Vector2(0.8816,0.1277),Vector2(0.8783,0.1298),Vector2(0.8776,0.124),Vector2(0.8803,0.1223),Vector2(0.8809,0.1281),Vector2(0.8894,0.1233),Vector2(0.8893,0.1226),Vector2(0.8887,0.1168),Vector2(0.8975,0.111),Vector2(0.8982,0.1168),Vector2(0.902,0.1143),Vector2(0.9014,0.1085),Vector2(0.8526,0.1068),Vector2(0.8617,0.1008),Vector2(0.8612,0.09563),Vector2(0.8521,0.1016),Vector2(0.8702,0.08973),Vector2(0.8709,0.09485),Vector2(0.8741,0.09274),Vector2(0.8734,0.08764),Vector2(0.8704,0.08957),Vector2(0.8711,0.09469),Vector2(0.8616,0.1009),Vector2(0.861,0.09575),Vector2(0.8516,0.1019),Vector2(0.8521,0.1071),Vector2(0.8492,0.109),Vector2(0.8488,0.1037),Vector2(0.9585,0.03763),Vector2(0.9582,0.03778),Vector2(0.9578,0.03251),Vector2(0.958,0.03239),Vector2(0.9587,0.03192),Vector2(0.9592,0.03716),Vector2(0.9611,0.0359),Vector2(0.9605,0.03073),Vector2(0.9621,0.02971),Vector2(0.9628,0.03482),Vector2(0.9629,0.03473),Vector2(0.9622,0.02964),Vector2(0.9612,0.03028),Vector2(0.9619,0.0354),Vector2(0.96,0.0366),Vector2(0.9595,0.03142),Vector2(0.961,0.03597),Vector2(0.9595,0.03694),Vector2(0.9588,0.03185),Vector2(0.9603,0.03087),Vector2(0.9563,0.0335),Vector2(0.9569,0.03863),Vector2(0.9547,0.04012),Vector2(0.9541,0.03492),Vector2(0.9533,0.03548),Vector2(0.9537,0.04074),Vector2(0.9551,0.03981),Vector2(0.9547,0.03454),Vector2(0.9572,0.03292),Vector2(0.9577,0.03816),Vector2(0.96,0.03662),Vector2(0.9594,0.03147),Vector2(0.9546,0.04012),Vector2(0.9506,0.04274),Vector2(0.95,0.03763),Vector2(0.9539,0.03504),Vector2(0.9451,0.04082),Vector2(0.9457,0.04599),Vector2(0.9429,0.04783),Vector2(0.9424,0.0426),Vector2(0.9425,0.04248),Vector2(0.943,0.04774),Vector2(0.9468,0.04526),Vector2(0.9463,0.04001),Vector2(0.951,0.03695),Vector2(0.9515,0.04215),Vector2(0.9546,0.04018),Vector2(0.9539,0.03505),Vector2(0.9412,0.04889),Vector2(0.9332,0.05411),Vector2(0.9326,0.04897),Vector2(0.9405,0.0438),Vector2(0.9238,0.05471),Vector2(0.9243,0.05992),Vector2(0.9201,0.06267),Vector2(0.9197,0.05742),Vector2(0.9211,0.05648),Vector2(0.9216,0.06174),Vector2(0.9296,0.05648),Vector2(0.9291,0.05126),Vector2(0.938,0.04547),Vector2(0.9386,0.05063),Vector2(0.9427,0.04792),Vector2(0.942,0.04281),Vector2(0.9186,0.06368),Vector2(0.9106,0.06889),Vector2(0.91,0.06373),Vector2(0.9179,0.05858),Vector2(0.9013,0.06939),Vector2(0.9018,0.07461),Vector2(0.898,0.07709),Vector2(0.8976,0.07184),Vector2(0.8993,0.07074),Vector2(0.8997,0.07599),Vector2(0.9074,0.07098),Vector2(0.9069,0.06578),Vector2(0.9152,0.06031),Vector2(0.9159,0.06545),Vector2(0.92,0.06277),Vector2(0.9193,0.05767),Vector2(0.8958,0.07858),Vector2(0.8869,0.0844),Vector2(0.8863,0.07922),Vector2(0.8951,0.07347),Vector2(0.8771,0.08524),Vector2(0.8776,0.09047),Vector2(0.8743,0.09263),Vector2(0.8738,0.08737),Vector2(0.8764,0.08568),Vector2(0.8769,0.09093),Vector2(0.8853,0.08545),Vector2(0.8847,0.08026),Vector2(0.8934,0.07458),Vector2(0.894,0.0797),Vector2(0.8979,0.07722),Vector2(0.8972,0.07212),Vector2(0.8726,0.1104),Vector2(0.8634,0.1163),Vector2(0.8542,0.1223),Vector2(0.8728,0.1102),Vector2(0.8758,0.1082),Vector2(0.8537,0.1227),Vector2(0.8633,0.1165),Vector2(0.8509,0.1246),Vector2(0.9608,0.05274),Vector2(0.9599,0.05337),Vector2(0.9601,0.05322),Vector2(0.9645,0.05032),Vector2(0.9628,0.05144),Vector2(0.9637,0.0509),Vector2(0.9647,0.05021),Vector2(0.9617,0.05214),Vector2(0.9587,0.05413),Vector2(0.9613,0.05242),Vector2(0.9628,0.05146),Vector2(0.9553,0.05632),Vector2(0.9563,0.05567),Vector2(0.9593,0.05373),Vector2(0.9568,0.0554),Vector2(0.9617,0.05215),Vector2(0.9474,0.06152),Vector2(0.9524,0.05824),Vector2(0.9564,0.05561),Vector2(0.9446,0.06333),Vector2(0.9445,0.06339),Vector2(0.9532,0.05771),Vector2(0.9484,0.06085),Vector2(0.9563,0.0557),Vector2(0.926,0.07546),Vector2(0.935,0.06962),Vector2(0.943,0.06439),Vector2(0.9232,0.07731),Vector2(0.9218,0.07824),Vector2(0.9403,0.06617),Vector2(0.9313,0.07204),Vector2(0.9445,0.06343),Vector2(0.9035,0.09017),Vector2(0.9123,0.08441),Vector2(0.9203,0.07919),Vector2(0.9014,0.09156),Vector2(0.8997,0.09266),Vector2(0.9176,0.08097),Vector2(0.9091,0.08653),Vector2(0.9217,0.07828),Vector2(0.8792,0.106),Vector2(0.8886,0.09993),Vector2(0.8975,0.09409),Vector2(0.8785,0.1065),Vector2(0.8759,0.1082),Vector2(0.8958,0.09522),Vector2(0.887,0.101),Vector2(0.8996,0.09272)]);
{ .SetTexCoord }
IndexedFaceSet734.TexCoord := TextureCoordinate735;
Coordinate736 := TCoordinateNode.Create;
Coordinate736.SetPoint([Vector3(-2.78,0.8496,-1.608),Vector3(-2.777,0.2987,-1.683),Vector3(-2.125,0.1308,-1.676),Vector3(-2.789,0.7394,-0.8298),Vector3(-2.786,0.189,-0.9075),Vector3(-2.157,0.06281,-0.9464),Vector3(-2.677,0.6356,-0.09551),Vector3(-2.674,0.08531,-0.1741),Vector3(-2.131,-0.02711,-0.275),Vector3(-2.371,0.5392,0.586),Vector3(-2.368,-0.01099,0.5068),Vector3(-2.006,-0.1174,0.3632),Vector3(-1.911,0.4495,1.22),Vector3(-1.909,-0.1006,1.14),Vector3(-1.713,-0.2048,0.9811),Vector3(-1.336,0.3957,1.601),Vector3(-1.335,-0.1543,1.52),Vector3(-1.253,-0.2541,1.33),Vector3(-0.6794,0.3711,1.775),Vector3(-0.679,-0.1789,1.694),Vector3(-0.6546,-0.2767,1.49),Vector3(0,-0.1852,1.738),Vector3(0,-0.2819,1.526),Vector3(-2.122,0.1608,-1.675),Vector3(-1.93,0.2856,-0.9938),Vector3(-1.906,0.2319,-0.3884),Vector3(-1.794,0.1511,0.183),Vector3(-1.533,0.07302,0.7347),Vector3(-1.121,0.02888,1.047),Vector3(-0.5859,0.00863,1.19),Vector3(0,0.003966,1.223),Vector3(-2.684,0.1398,-1.684),Vector3(-2.219,0.1235,-1.665),Vector3(-2.213,0.01946,-0.946),Vector3(-2.185,-0.07577,-0.2727),Vector3(-2.054,-0.1661,0.366),Vector3(-1.749,-0.258,1.016),Vector3(-1.275,-0.3067,1.36),Vector3(-0.6617,-0.3291,1.518),Vector3(-0.6764,-0.3421,1.653),Vector3(-1.33,-0.3185,1.486),Vector3(-1.895,-0.2665,1.118),Vector3(-2.345,-0.1745,0.4679),Vector3(-2.642,-0.07965,-0.2028),Vector3(-2.743,0.02301,-0.9288),Vector3(0,0.1811,-1.486),Vector3(-2.23,-0.3493,-1.636),Vector3(-2.257,-0.4254,-1.098),Vector3(-2.702,-0.4264,-1.091),Vector3(-2.682,-0.3471,-1.651),Vector3(-0.5807,-0.7901,1.481),Vector3(-0.08538,-0.7931,1.503),Vector3(-0.08698,-0.8081,1.608),Vector3(-0.5887,-0.8044,1.582),Vector3(-0.7603,-0.8007,1.556),Vector3(-1.244,-0.7838,1.437),Vector3(-1.21,-0.7703,1.341),Vector3(-0.7458,-0.7868,1.458),Vector3(-1.402,-0.7742,1.369),Vector3(-1.811,-0.7368,1.104),Vector3(-1.714,-0.7257,1.026),Vector3(-1.351,-0.7613,1.278),Vector3(-1.943,-0.7183,0.9738),Vector3(-2.266,-0.6481,0.4769),Vector3(-2.054,-0.6365,0.3949),Vector3(-1.813,-0.7073,0.8956),Vector3(-2.365,-0.6241,0.3072),Vector3(-2.572,-0.5544,-0.1856),Vector3(-2.216,-0.5456,-0.2477),Vector3(-2.106,-0.6128,0.2276),Vector3(-2.626,-0.5291,-0.3645),Vector3(-2.692,-0.4533,-0.9005),Vector3(-2.26,-0.4504,-0.921),Vector3(-2.233,-0.5219,-0.415),Vector3(-2.122,-0.3642,-1.749),Vector3(-2.295,-0.4218,-1.574),Vector3(-2.314,-0.4778,-1.178),Vector3(-2.638,-0.4781,-1.176),Vector3(-2.623,-0.4207,-1.582),Vector3(-0.5147,-0.8554,1.492),Vector3(-0.153,-0.8577,1.508),Vector3(-0.1549,-0.8677,1.579),Vector3(-0.5193,-0.8651,1.561),Vector3(-0.8237,-0.8587,1.515),Vector3(-1.172,-0.8465,1.429),Vector3(-1.152,-0.8373,1.364),Vector3(-0.8114,-0.8494,1.449),Vector3(-1.449,-0.8296,1.31),Vector3(-1.739,-0.8027,1.119),Vector3(-1.679,-0.7949,1.064),Vector3(-1.409,-0.8211,1.249),Vector3(-1.968,-0.7698,0.8862),Vector3(-2.192,-0.7184,0.5231),Vector3(-2.053,-0.7103,0.4657),Vector3(-1.864,-0.7619,0.8308),Vector3(-2.357,-0.6756,0.2203),Vector3(-2.494,-0.6252,-0.1362),Vector3(-2.251,-0.6185,-0.1834),Vector3(-2.157,-0.6678,0.1655),Vector3(-2.581,-0.5804,-0.453),Vector3(-2.623,-0.5257,-0.8394),Vector3(-2.316,-0.523,-0.8586),Vector3(-2.291,-0.5758,-0.4854),Vector3(-2.228,0.02897,-1.584),Vector3(-2.256,-0.04748,-1.043),Vector3(-2.704,-0.04851,-1.036),Vector3(-2.683,0.03117,-1.599),Vector3(-0.582,-0.4116,1.532),Vector3(-0.08377,-0.4146,1.553),Vector3(-0.08547,-0.4304,1.665),Vector3(-0.5905,-0.4267,1.639),Vector3(-0.7592,-0.4232,1.613),Vector3(-1.246,-0.4061,1.493),Vector3(-1.21,-0.3918,1.391),Vector3(-0.7438,-0.4083,1.509),Vector3(-1.402,-0.3967,1.426),Vector3(-1.815,-0.3589,1.159),Vector3(-1.713,-0.3471,1.076),Vector3(-1.348,-0.383,1.329),Vector3(-1.945,-0.3406,1.03),Vector3(-2.27,-0.27,0.5304),Vector3(-2.052,-0.2581,0.4462),Vector3(-1.81,-0.3292,0.9487),Vector3(-2.367,-0.2463,0.3627),Vector3(-2.575,-0.1762,-0.1332),Vector3(-2.214,-0.1673,-0.1961),Vector3(-2.104,-0.2349,0.2818),Vector3(-2.628,-0.1513,-0.3093),Vector3(-2.694,-0.07502,-0.8484),Vector3(-2.258,-0.07211,-0.869),Vector3(-2.231,-0.144,-0.3604),Vector3(-2.122,0.08236,-1.686),Vector3(2.78,0.8496,-1.608),Vector3(2.777,0.2987,-1.683),Vector3(2.786,0.189,-0.9075),Vector3(2.789,0.7394,-0.8298),Vector3(2.125,0.1308,-1.676),Vector3(2.122,0.1608,-1.675),Vector3(1.93,0.2856,-0.9938),Vector3(2.157,0.06281,-0.9464),Vector3(2.674,0.08531,-0.1741),Vector3(2.677,0.6356,-0.09551),Vector3(1.906,0.2319,-0.3884),Vector3(2.131,-0.02711,-0.275),Vector3(2.368,-0.01099,0.5068),Vector3(2.371,0.5392,0.586),Vector3(1.794,0.1511,0.183),Vector3(2.006,-0.1174,0.3632),Vector3(1.909,-0.1006,1.14),Vector3(1.911,0.4495,1.22),Vector3(1.533,0.07302,0.7347),Vector3(1.713,-0.2048,0.9811),Vector3(1.335,-0.1543,1.52),Vector3(1.336,0.3957,1.601),Vector3(1.121,0.02888,1.047),Vector3(1.253,-0.2541,1.33),Vector3(0.679,-0.1789,1.694),Vector3(0.6794,0.3711,1.775),Vector3(0.5859,0.00863,1.19),Vector3(0.6546,-0.2767,1.49),Vector3(0,0.3648,1.819),Vector3(2.213,0.01946,-0.946),Vector3(2.219,0.1235,-1.665),Vector3(2.185,-0.07577,-0.2727),Vector3(2.054,-0.1661,0.366),Vector3(1.749,-0.258,1.016),Vector3(1.275,-0.3067,1.36),Vector3(0.6617,-0.3291,1.518),Vector3(0,-0.3335,1.55),Vector3(0.6764,-0.3421,1.653),Vector3(0,-0.3476,1.692),Vector3(1.33,-0.3185,1.486),Vector3(1.895,-0.2665,1.118),Vector3(2.345,-0.1745,0.4679),Vector3(2.642,-0.07966,-0.2028),Vector3(2.743,0.02301,-0.9288),Vector3(2.684,0.1398,-1.684),Vector3(2.295,-0.4218,-1.574),Vector3(2.314,-0.4778,-1.178),Vector3(2.638,-0.4781,-1.176),Vector3(2.623,-0.4207,-1.582),Vector3(0.5147,-0.8554,1.492),Vector3(0.153,-0.8577,1.508),Vector3(0.1549,-0.8677,1.579),Vector3(0.5193,-0.8651,1.561),Vector3(0.8237,-0.8587,1.515),Vector3(1.172,-0.8465,1.429),Vector3(1.152,-0.8373,1.364),Vector3(0.8114,-0.8494,1.449),Vector3(1.449,-0.8296,1.31),Vector3(1.739,-0.8027,1.119),Vector3(1.679,-0.7949,1.064),Vector3(1.409,-0.8211,1.249),Vector3(1.968,-0.7698,0.8862),Vector3(2.192,-0.7184,0.5231),Vector3(2.053,-0.7103,0.4657),Vector3(1.864,-0.7619,0.8308),Vector3(2.357,-0.6756,0.2203),Vector3(2.494,-0.6252,-0.1362),Vector3(2.251,-0.6185,-0.1834),Vector3(2.157,-0.6678,0.1655),Vector3(2.581,-0.5804,-0.453),Vector3(2.623,-0.5257,-0.8394),Vector3(2.316,-0.523,-0.8586),Vector3(2.291,-0.5758,-0.4854),Vector3(2.256,-0.04748,-1.043),Vector3(2.228,0.02897,-1.584),Vector3(2.704,-0.04851,-1.036),Vector3(2.683,0.03117,-1.599),Vector3(0.08377,-0.4146,1.553),Vector3(0.582,-0.4116,1.532),Vector3(0.08547,-0.4304,1.665),Vector3(0.5905,-0.4267,1.639),Vector3(1.246,-0.4061,1.493),Vector3(0.7592,-0.4232,1.613),Vector3(1.21,-0.3918,1.391),Vector3(0.7438,-0.4083,1.509),Vector3(1.815,-0.3589,1.159),Vector3(1.402,-0.3967,1.426),Vector3(1.713,-0.3471,1.076),Vector3(1.348,-0.383,1.329),Vector3(2.27,-0.27,0.5304),Vector3(1.945,-0.3406,1.03),Vector3(2.052,-0.2581,0.4462),Vector3(1.81,-0.3292,0.9487),Vector3(2.575,-0.1762,-0.1332),Vector3(2.367,-0.2463,0.3627),Vector3(2.214,-0.1673,-0.1961),Vector3(2.104,-0.2349,0.2818),Vector3(2.694,-0.07502,-0.8484),Vector3(2.628,-0.1513,-0.3093),Vector3(2.258,-0.07211,-0.869),Vector3(2.231,-0.144,-0.3604),Vector3(2.122,0.08236,-1.686),Vector3(0,0.08788,-1.693),Vector3(2.23,-0.3493,-1.636),Vector3(2.257,-0.4254,-1.098),Vector3(2.702,-0.4264,-1.091),Vector3(2.682,-0.3471,-1.651),Vector3(0.5807,-0.7901,1.481),Vector3(0.08538,-0.7931,1.503),Vector3(0.08698,-0.8081,1.608),Vector3(0.5887,-0.8044,1.582),Vector3(0.7603,-0.8007,1.556),Vector3(1.244,-0.7838,1.437),Vector3(1.21,-0.7703,1.341),Vector3(0.7458,-0.7868,1.458),Vector3(1.402,-0.7742,1.369),Vector3(1.811,-0.7368,1.104),Vector3(1.714,-0.7257,1.026),Vector3(1.351,-0.7613,1.278),Vector3(1.943,-0.7183,0.9738),Vector3(2.266,-0.6481,0.4769),Vector3(2.054,-0.6365,0.3949),Vector3(1.813,-0.7073,0.8956),Vector3(2.365,-0.6241,0.3072),Vector3(2.572,-0.5544,-0.1856),Vector3(2.216,-0.5456,-0.2477),Vector3(2.106,-0.6128,0.2276),Vector3(2.626,-0.5291,-0.3645),Vector3(2.692,-0.4533,-0.9005),Vector3(2.26,-0.4504,-0.921),Vector3(2.233,-0.5219,-0.415),Vector3(2.122,-0.3642,-1.749),Vector3(0,-0.363,-1.757),Vector3(-2.792,0.4871,-1.259),Vector3(-2.142,0.1746,-1.297),Vector3(-2.754,0.3796,-0.4991),Vector3(-2.151,0.1543,-0.5849),Vector3(-2.546,0.2799,0.2059),Vector3(-2.083,0.06273,0.0628),Vector3(-2.157,0.1847,0.8788),Vector3(-1.879,-0.02861,0.7087),Vector3(-1.636,0.1112,1.399),Vector3(-1.501,-0.09869,1.204),Vector3(-1.014,0.07351,1.665),Vector3(-0.9654,-0.1327,1.445),Vector3(-0.3407,0.05918,1.766),Vector3(-0.3302,-0.1456,1.536),Vector3(-2.154,0.07289,-1.306),Vector3(-2.162,-0.02563,-0.6098),Vector3(-2.094,-0.1175,0.03959),Vector3(-1.889,-0.2092,0.6885),Vector3(-1.508,-0.2798,1.188),Vector3(-0.9686,-0.3141,1.43),Vector3(-0.3311,-0.327,1.521),Vector3(-0.3399,-0.299,1.704),Vector3(-1.011,-0.2848,1.603),Vector3(-1.63,-0.2473,1.339),Vector3(-2.148,-0.1741,0.821),Vector3(-2.536,-0.0793,0.1506),Vector3(-2.743,0.02005,-0.5519),Vector3(-2.781,0.1265,-1.305),Vector3(-1.428,0.2447,-1.416),Vector3(-1.434,0.2838,-0.9337),Vector3(-1.388,0.2227,-0.5019),Vector3(-1.253,0.1618,-0.07126),Vector3(-1.001,0.1151,0.2591),Vector3(-0.6436,0.09241,0.4196),Vector3(-0.2202,0.08385,0.4801),Vector3(-2.468,-0.4496,-1.378),Vector3(-0.3355,-0.8615,1.535),Vector3(-0.9899,-0.848,1.439),Vector3(-1.569,-0.8121,1.185),Vector3(-2.019,-0.7401,0.6765),Vector3(-2.315,-0.6468,0.01655),Vector3(-2.453,-0.5512,-0.6591),Vector3(-2.166,0.06133,-1.303),Vector3(-2.484,0.009624,-0.9372),Vector3(-2.769,0.0621,-1.308),Vector3(-2.452,0.1138,-1.674),Vector3(-0.332,-0.3396,1.532),Vector3(-0.0005068,-0.3524,1.623),Vector3(-0.3389,-0.3607,1.682),Vector3(-0.6704,-0.3479,1.591),Vector3(-1.007,-0.3466,1.582),Vector3(-1.308,-0.3254,1.432),Vector3(-0.9723,-0.3267,1.441),Vector3(-0.6714,-0.3479,1.591),Vector3(-1.622,-0.3094,1.319),Vector3(-1.829,-0.2762,1.084),Vector3(-1.516,-0.2921,1.196),Vector3(-1.309,-0.3254,1.432),Vector3(-2.138,-0.2367,0.8045),Vector3(-2.208,-0.1815,0.4145),Vector3(-1.9,-0.2209,0.693),Vector3(-1.83,-0.2761,1.083),Vector3(-2.524,-0.1423,0.137),Vector3(-2.422,-0.0895,-0.2363),Vector3(-2.106,-0.1286,0.04056),Vector3(-2.209,-0.1814,0.4139),Vector3(-2.731,-0.04331,-0.5628),Vector3(-2.484,0.00952,-0.9364),Vector3(-2.174,-0.03654,-0.6107),Vector3(-2.422,-0.08937,-0.2371),Vector3(-1.061,0.1611,-1.68),Vector3(-2.173,-0.45,-1.375),Vector3(-2.483,-0.5009,-1.015),Vector3(-2.763,-0.4492,-1.381),Vector3(-2.452,-0.3983,-1.74),Vector3(-0.3324,-0.8523,1.47),Vector3(-0.006795,-0.8637,1.55),Vector3(-0.3385,-0.8706,1.6),Vector3(-0.6641,-0.8593,1.519),Vector3(-1.005,-0.8566,1.5),Vector3(-1.302,-0.837,1.361),Vector3(-0.9747,-0.8394,1.378),Vector3(-0.6778,-0.859,1.517),Vector3(-1.616,-0.8197,1.239),Vector3(-1.823,-0.788,1.015),Vector3(-1.522,-0.8045,1.132),Vector3(-1.315,-0.8361,1.355),Vector3(-2.13,-0.7474,0.7281),Vector3(-2.205,-0.6935,0.3471),Vector3(-1.908,-0.7328,0.6249),Vector3(-1.833,-0.7867,1.006),Vector3(-2.516,-0.6533,0.06285),Vector3(-2.419,-0.6016,-0.3027),Vector3(-2.114,-0.6402,-0.02979),Vector3(-2.211,-0.6919,0.3357),Vector3(-2.724,-0.5545,-0.6358),Vector3(-2.483,-0.5026,-1.003),Vector3(-2.181,-0.5479,-0.6824),Vector3(-2.422,-0.5998,-0.3154),Vector3(-2.167,-0.1997,-1.34),Vector3(-2.484,-0.2513,-0.9747),Vector3(-2.768,-0.199,-1.345),Vector3(-2.452,-0.1473,-1.71),Vector3(-0.3321,-0.6012,1.499),Vector3(-0.00152,-0.6135,1.586),Vector3(-0.3388,-0.6213,1.641),Vector3(-0.6694,-0.609,1.554),Vector3(-1.007,-0.6072,1.542),Vector3(-1.307,-0.5865,1.395),Vector3(-0.9732,-0.5883,1.408),Vector3(-0.6725,-0.6089,1.554),Vector3(-1.62,-0.5701,1.279),Vector3(-1.828,-0.5373,1.047),Vector3(-1.518,-0.5535,1.162),Vector3(-1.311,-0.5863,1.394),Vector3(-2.135,-0.4976,0.7662),Vector3(-2.208,-0.4427,0.3781),Vector3(-1.903,-0.4822,0.6574),Vector3(-1.83,-0.5371,1.046),Vector3(-2.522,-0.4033,0.09959),Vector3(-2.421,-0.3507,-0.2723),Vector3(-2.108,-0.3898,0.004185),Vector3(-2.209,-0.4424,0.3761),Vector3(-2.729,-0.3044,-0.5999),Vector3(-2.484,-0.2517,-0.9725),Vector3(-2.176,-0.2976,-0.6475),Vector3(-2.422,-0.3503,-0.2749),Vector3(-1.061,-0.1087,-1.718),Vector3(2.792,0.4871,-1.259),Vector3(2.142,0.1746,-1.297),Vector3(2.754,0.3796,-0.4991),Vector3(2.151,0.1543,-0.5849),Vector3(2.546,0.2799,0.2059),Vector3(2.083,0.06273,0.0628),Vector3(2.157,0.1847,0.8788),Vector3(1.879,-0.02861,0.7087),Vector3(1.636,0.1112,1.399),Vector3(1.501,-0.09869,1.204),Vector3(1.014,0.07351,1.665),Vector3(0.9654,-0.1327,1.445),Vector3(0.3407,0.05918,1.766),Vector3(0.3302,-0.1456,1.536),Vector3(2.154,0.07289,-1.306),Vector3(2.162,-0.02563,-0.6098),Vector3(2.094,-0.1175,0.03959),Vector3(1.889,-0.2092,0.6885),Vector3(1.508,-0.2798,1.188),Vector3(0.9686,-0.3141,1.43),Vector3(0.3311,-0.327,1.521),Vector3(0.3399,-0.299,1.704),Vector3(1.011,-0.2848,1.603),Vector3(1.63,-0.2473,1.339),Vector3(2.148,-0.1741,0.821),Vector3(2.536,-0.0793,0.1506),Vector3(2.743,0.02005,-0.5519),Vector3(2.781,0.1265,-1.305),Vector3(1.428,0.2447,-1.416),Vector3(1.434,0.2838,-0.9336),Vector3(1.388,0.2227,-0.5019),Vector3(1.253,0.1618,-0.07126),Vector3(1.001,0.1151,0.2591),Vector3(0.6436,0.09241,0.4196),Vector3(0.2202,0.08385,0.4801),Vector3(2.468,-0.4496,-1.378),Vector3(0.3355,-0.8615,1.535),Vector3(0.9899,-0.848,1.439),Vector3(1.569,-0.8121,1.185),Vector3(2.019,-0.7401,0.6765),Vector3(2.315,-0.6468,0.01655),Vector3(2.453,-0.5512,-0.6591),Vector3(2.166,0.06133,-1.303),Vector3(2.484,0.009624,-0.9372),Vector3(2.769,0.0621,-1.308),Vector3(2.452,0.1138,-1.674),Vector3(0.332,-0.3396,1.532),Vector3(0.0005065,-0.3524,1.623),Vector3(0.3389,-0.3607,1.682),Vector3(0.6704,-0.3479,1.591),Vector3(1.007,-0.3466,1.582),Vector3(1.308,-0.3254,1.432),Vector3(0.9723,-0.3267,1.441),Vector3(0.6714,-0.3479,1.591),Vector3(1.622,-0.3094,1.319),Vector3(1.829,-0.2762,1.084),Vector3(1.516,-0.2921,1.196),Vector3(1.309,-0.3254,1.432),Vector3(2.138,-0.2367,0.8045),Vector3(2.208,-0.1815,0.4145),Vector3(1.9,-0.2209,0.693),Vector3(1.83,-0.2761,1.083),Vector3(2.524,-0.1423,0.137),Vector3(2.422,-0.0895,-0.2363),Vector3(2.106,-0.1286,0.04056),Vector3(2.209,-0.1814,0.4139),Vector3(2.731,-0.04332,-0.5628),Vector3(2.484,0.009519,-0.9364),Vector3(2.174,-0.03654,-0.6107),Vector3(2.422,-0.08938,-0.2371),Vector3(1.061,0.1611,-1.68),Vector3(2.173,-0.45,-1.375),Vector3(2.483,-0.5009,-1.015),Vector3(2.763,-0.4492,-1.381),Vector3(2.452,-0.3983,-1.74),Vector3(0.3324,-0.8523,1.47),Vector3(0.006795,-0.8637,1.55),Vector3(0.3385,-0.8706,1.6),Vector3(0.6641,-0.8593,1.519),Vector3(1.005,-0.8566,1.5),Vector3(1.302,-0.837,1.361),Vector3(0.9747,-0.8394,1.378),Vector3(0.6778,-0.859,1.517),Vector3(1.616,-0.8197,1.239),Vector3(1.823,-0.788,1.015),Vector3(1.522,-0.8045,1.132),Vector3(1.315,-0.8361,1.355),Vector3(2.13,-0.7474,0.7281),Vector3(2.205,-0.6935,0.3471),Vector3(1.908,-0.7328,0.6249),Vector3(1.833,-0.7867,1.006),Vector3(2.516,-0.6533,0.06285),Vector3(2.419,-0.6016,-0.3027),Vector3(2.114,-0.6402,-0.02979),Vector3(2.211,-0.6919,0.3357),Vector3(2.724,-0.5545,-0.6358),Vector3(2.483,-0.5026,-1.003),Vector3(2.181,-0.5479,-0.6824),Vector3(2.422,-0.5998,-0.3154),Vector3(2.167,-0.1997,-1.34),Vector3(2.484,-0.2513,-0.9747),Vector3(2.768,-0.199,-1.345),Vector3(2.452,-0.1473,-1.71),Vector3(0.3321,-0.6012,1.499),Vector3(0.00152,-0.6135,1.586),Vector3(0.3388,-0.6213,1.641),Vector3(0.6694,-0.609,1.554),Vector3(1.007,-0.6072,1.542),Vector3(1.307,-0.5865,1.395),Vector3(0.9732,-0.5883,1.408),Vector3(0.6725,-0.6089,1.554),Vector3(1.62,-0.5701,1.279),Vector3(1.828,-0.5373,1.047),Vector3(1.518,-0.5535,1.162),Vector3(1.311,-0.5863,1.394),Vector3(2.135,-0.4976,0.7662),Vector3(2.208,-0.4427,0.3781),Vector3(1.903,-0.4822,0.6574),Vector3(1.83,-0.5371,1.046),Vector3(2.522,-0.4033,0.09959),Vector3(2.421,-0.3507,-0.2723),Vector3(2.108,-0.3898,0.004185),Vector3(2.209,-0.4424,0.3761),Vector3(2.729,-0.3044,-0.5999),Vector3(2.484,-0.2517,-0.9725),Vector3(2.176,-0.2976,-0.6475),Vector3(2.422,-0.3503,-0.2749),Vector3(1.061,-0.1087,-1.718),Vector3(-2.78,0.5426,-1.652),Vector3(-2.122,0.1477,-1.677),Vector3(-2.789,0.4325,-0.8732),Vector3(-2.792,0.7941,-1.216),Vector3(-2.79,0.2435,-1.293),Vector3(-2.145,0.09869,-1.307),Vector3(-2.677,0.3286,-0.1389),Vector3(-2.754,0.6865,-0.4557),Vector3(-2.751,0.1362,-0.534),Vector3(-2.154,0.0194,-0.6038),Vector3(-2.371,0.2322,0.5426),Vector3(-2.546,0.5868,0.2493),Vector3(-2.544,0.03659,0.1703),Vector3(-2.085,-0.07226,0.04428),Vector3(-1.911,0.1426,1.177),Vector3(-2.157,0.4917,0.9222),Vector3(-2.155,-0.05849,0.8426),Vector3(-1.881,-0.1637,0.6909),Vector3(-1.336,0.08874,1.557),Vector3(-1.636,0.4181,1.442),Vector3(-1.634,-0.1319,1.362),Vector3(-1.503,-0.2339,1.187),Vector3(-0.6794,0.06411,1.731),Vector3(-1.014,0.3805,1.708),Vector3(-1.013,-0.1695,1.628),Vector3(-0.9662,-0.268,1.429),Vector3(0,0.05784,1.776),Vector3(-0.3407,0.3661,1.81),Vector3(-0.3405,-0.1838,1.729),Vector3(-0.3304,-0.2809,1.519),Vector3(-2.154,0.183,-0.9298),Vector3(-2.128,0.1079,-0.2563),Vector3(-2.003,0.01768,0.3814),Vector3(-1.711,-0.06958,0.9984),Vector3(-1.252,-0.1188,1.346),Vector3(-0.6541,-0.1414,1.506),Vector3(0,-0.1466,1.543),Vector3(-1.963,0.2426,-1.32),Vector3(-1.972,0.2766,-0.6594),Vector3(-1.909,0.1927,-0.06564),Vector3(-1.722,0.1089,0.5264),Vector3(-1.376,0.0447,0.9807),Vector3(-0.8849,0.0135,1.201),Vector3(-0.3027,0.001732,1.285),Vector3(-2.162,0.06963,-1.303),Vector3(-2.171,-0.0284,-0.6098),Vector3(-2.102,-0.1204,0.04094),Vector3(-1.897,-0.2125,0.6923),Vector3(-1.514,-0.2835,1.194),Vector3(-0.9712,-0.318,1.438),Vector3(-0.3317,-0.3309,1.529),Vector3(-0.3392,-0.34,1.689),Vector3(-1.009,-0.3259,1.589),Vector3(-1.625,-0.2886,1.325),Vector3(-2.141,-0.2157,0.8097),Vector3(-2.528,-0.1212,0.1413),Vector3(-2.734,-0.02207,-0.5593),Vector3(-2.773,0.08362,-1.307),Vector3(-2.769,0.1812,-1.691),Vector3(-2.134,0.1242,-1.669),Vector3(-2.166,0.02262,-0.951),Vector3(-2.14,-0.07222,-0.2804),Vector3(-2.014,-0.1627,0.3595),Vector3(-1.72,-0.2505,0.9801),Vector3(-1.257,-0.3001,1.331),Vector3(-0.656,-0.3228,1.492),Vector3(0,-0.328,1.528),Vector3(-0.6776,-0.2941,1.669),Vector3(-1.331,-0.2696,1.496),Vector3(-1.903,-0.2161,1.118),Vector3(-2.361,-0.1268,0.4862),Vector3(-2.666,-0.03071,-0.1929),Vector3(-2.778,0.0726,-0.9234),Vector3(-1.153,0.1896,-1.613),Vector3(-1.256,0.2732,-1.231),Vector3(-1.241,0.2441,-0.8359),Vector3(-1.167,0.1914,-0.4632),Vector3(-0.9965,0.1411,-0.1071),Vector3(-0.7287,0.1121,0.09755),Vector3(-0.3811,0.09886,0.1912),Vector3(0,0.09574,0.2133),Vector3(-2.452,0.1247,-1.673),Vector3(-2.484,0.01499,-0.9361),Vector3(-0.6709,-0.3425,1.592),Vector3(-1.309,-0.32,1.433),Vector3(-1.83,-0.2707,1.084),Vector3(-2.209,-0.1761,0.415),Vector3(-2.422,-0.08402,-0.236),Vector3(-2.227,0.09968,-1.574),Vector3(-2.255,0.02316,-1.033),Vector3(-2.704,0.02213,-1.026),Vector3(-2.684,0.1019,-1.59),Vector3(-2.169,-0.3874,-1.366),Vector3(-2.484,-0.4388,-1.003),Vector3(-2.766,-0.3866,-1.372),Vector3(-2.452,-0.3352,-1.735),Vector3(-0.5823,-0.3407,1.54),Vector3(-0.08337,-0.3438,1.562),Vector3(-0.08511,-0.36,1.676),Vector3(-0.591,-0.3563,1.65),Vector3(-0.3323,-0.7892,1.475),Vector3(-0.003092,-0.8011,1.559),Vector3(-0.3387,-0.8086,1.612),Vector3(-0.6678,-0.7967,1.528),Vector3(-0.7589,-0.3527,1.625),Vector3(-1.247,-0.3356,1.504),Vector3(-1.21,-0.3209,1.4),Vector3(-0.7432,-0.3375,1.517),Vector3(-1.006,-0.7945,1.513),Vector3(-1.306,-0.7743,1.369),Vector3(-0.9738,-0.7763,1.383),Vector3(-0.6741,-0.7966,1.527),Vector3(-1.402,-0.3262,1.438),Vector3(-1.816,-0.2883,1.17),Vector3(-1.712,-0.2763,1.085),Vector3(-1.347,-0.3122,1.338),Vector3(-1.618,-0.7575,1.251),Vector3(-1.826,-0.7252,1.022),Vector3(-1.52,-0.7415,1.137),Vector3(-1.312,-0.7739,1.366),Vector3(-1.946,-0.2701,1.041),Vector3(-2.271,-0.1994,0.5406),Vector3(-2.051,-0.1873,0.4556),Vector3(-1.809,-0.2584,0.9582),Vector3(-2.133,-0.6851,0.7387),Vector3(-2.207,-0.6305,0.3528),Vector3(-1.905,-0.67,0.6319),Vector3(-1.831,-0.7246,1.018),Vector3(-2.368,-0.1757,0.3733),Vector3(-2.576,-0.1055,-0.1234),Vector3(-2.214,-0.09652,-0.1866),Vector3(-2.103,-0.1642,0.2919),Vector3(-2.52,-0.5909,0.07258),Vector3(-2.421,-0.5386,-0.2974),Vector3(-2.11,-0.5775,-0.02187),Vector3(-2.209,-0.6299,0.3481),Vector3(-2.628,-0.08063,-0.299),Vector3(-2.695,-0.004303,-0.8387),Vector3(-2.257,-0.001381,-0.8594),Vector3(-2.231,-0.07339,-0.3502),Vector3(-2.728,-0.492,-0.6266),Vector3(-2.483,-0.4395,-0.9976),Vector3(-2.178,-0.4853,-0.6739),Vector3(-2.422,-0.5378,-0.3029),Vector3(-1.061,-0.3634,-1.754),Vector3(-2.122,0.156,-1.675),Vector3(-2.249,-0.4499,-1.376),Vector3(-2.479,-0.4877,-1.108),Vector3(-2.687,-0.4493,-1.38),Vector3(-2.456,-0.4115,-1.647),Vector3(-2.233,-0.4122,-1.642),Vector3(-2.26,-0.4875,-1.109),Vector3(-2.699,-0.4886,-1.102),Vector3(-2.679,-0.41,-1.657),Vector3(-0.3333,-0.8549,1.488),Vector3(-0.09134,-0.8631,1.546),Vector3(-0.3376,-0.868,1.581),Vector3(-0.5796,-0.8598,1.523),Vector3(-0.5782,-0.8531,1.476),Vector3(-0.08821,-0.8561,1.497),Vector3(-0.08971,-0.8702,1.596),Vector3(-0.5857,-0.8665,1.57),Vector3(-1.001,-0.8541,1.482),Vector3(-1.222,-0.8398,1.381),Vector3(-0.9791,-0.8419,1.396),Vector3(-0.7581,-0.8562,1.497),Vector3(-0.7626,-0.8628,1.544),Vector3(-1.24,-0.846,1.426),Vector3(-1.208,-0.8334,1.336),Vector3(-0.749,-0.8497,1.451),Vector3(-1.602,-0.8175,1.224),Vector3(-1.757,-0.7942,1.059),Vector3(-1.536,-0.8067,1.147),Vector3(-1.381,-0.8299,1.312),Vector3(-1.402,-0.8362,1.356),Vector3(-1.806,-0.7993,1.095),Vector3(-1.713,-0.7887,1.02),Vector3(-1.355,-0.824,1.27),Vector3(-2.1,-0.7454,0.7141),Vector3(-2.158,-0.7055,0.4315),Vector3(-1.938,-0.7348,0.6388),Vector3(-1.881,-0.7747,0.9214),Vector3(-1.942,-0.7804,0.9611),Vector3(-2.262,-0.7108,0.4692),Vector3(-2.056,-0.6995,0.3896),Vector3(-1.816,-0.7697,0.8859),Vector3(-2.464,-0.6516,0.05072),Vector3(-2.393,-0.6132,-0.2206),Vector3(-2.166,-0.6419,-0.01764),Vector3(-2.237,-0.6803,0.2537),Vector3(-2.364,-0.6862,0.2949),Vector3(-2.568,-0.6172,-0.1924),Vector3(-2.218,-0.6086,-0.2534),Vector3(-2.11,-0.6751,0.2169),Vector3(-2.654,-0.5537,-0.6418),Vector3(-2.475,-0.5151,-0.9145),Vector3(-2.252,-0.5488,-0.6764),Vector3(-2.43,-0.5873,-0.4037),Vector3(-2.624,-0.5912,-0.3764),Vector3(-2.689,-0.5162,-0.9068),Vector3(-2.262,-0.5133,-0.9269),Vector3(-2.236,-0.5842,-0.4263),Vector3(-2.228,-0.1614,-1.61),Vector3(-2.256,-0.2378,-1.07),Vector3(-2.703,-0.2389,-1.063),Vector3(-2.683,-0.1593,-1.626),Vector3(-0.5818,-0.6022,1.506),Vector3(-0.08417,-0.6052,1.527),Vector3(-0.08583,-0.6206,1.637),Vector3(-0.5901,-0.617,1.61),Vector3(-0.7594,-0.6134,1.585),Vector3(-1.246,-0.5963,1.465),Vector3(-1.21,-0.5824,1.366),Vector3(-0.7444,-0.5989,1.483),Vector3(-1.401,-0.5869,1.398),Vector3(-1.813,-0.5492,1.131),Vector3(-1.713,-0.5377,1.05),Vector3(-1.349,-0.5735,1.303),Vector3(-1.944,-0.5309,1.002),Vector3(-2.268,-0.4604,0.5032),Vector3(-2.053,-0.4486,0.4199),Vector3(-1.811,-0.5196,0.9222),Vector3(-2.366,-0.4366,0.3353),Vector3(-2.574,-0.3666,-0.1599),Vector3(-2.215,-0.3577,-0.2226),Vector3(-2.104,-0.4252,0.2548),Vector3(-2.627,-0.3416,-0.3366),Vector3(-2.693,-0.2654,-0.875),Vector3(-2.258,-0.2625,-0.8956),Vector3(-2.232,-0.3344,-0.3875),Vector3(-2.122,-0.111,-1.713),Vector3(-2.167,-0.009349,-1.313),Vector3(-2.484,-0.06101,-0.9475),Vector3(-2.769,-0.008573,-1.318),Vector3(-2.452,0.04308,-1.684),Vector3(-0.332,-0.4105,1.524),Vector3(-0.001013,-0.4231,1.613),Vector3(-0.3389,-0.4312,1.67),Vector3(-0.6699,-0.4186,1.581),Vector3(-1.007,-0.4171,1.57),Vector3(-1.308,-0.3961,1.422),Vector3(-0.9727,-0.3976,1.433),Vector3(-0.672,-0.4186,1.581),Vector3(-1.621,-0.3799,1.308),Vector3(-1.829,-0.3469,1.074),Vector3(-1.517,-0.363,1.188),Vector3(-1.31,-0.396,1.421),Vector3(-2.137,-0.3073,0.7938),Vector3(-2.208,-0.2522,0.4048),Vector3(-1.901,-0.2917,0.6837),Vector3(-1.83,-0.3467,1.073),Vector3(-2.523,-0.2129,0.1268),Vector3(-2.421,-0.1602,-0.2458),Vector3(-2.107,-0.1994,0.03084),Vector3(-2.209,-0.2521,0.4034),Vector3(-2.73,-0.114,-0.5729),Vector3(-2.484,-0.06121,-0.946),Vector3(-2.175,-0.1072,-0.6207),Vector3(-2.422,-0.16,-0.2476),Vector3(-1.061,0.08604,-1.691),Vector3(2.78,0.5426,-1.652),Vector3(2.79,0.2435,-1.293),Vector3(2.789,0.4325,-0.8732),Vector3(2.792,0.7941,-1.216),Vector3(2.122,0.1477,-1.677),Vector3(1.963,0.2426,-1.32),Vector3(2.154,0.183,-0.9298),Vector3(2.145,0.09869,-1.307),Vector3(2.751,0.1362,-0.534),Vector3(2.677,0.3286,-0.1389),Vector3(2.754,0.6865,-0.4557),Vector3(1.972,0.2766,-0.6594),Vector3(2.128,0.1079,-0.2563),Vector3(2.154,0.0194,-0.6038),Vector3(2.544,0.03659,0.1703),Vector3(2.371,0.2322,0.5426),Vector3(2.546,0.5868,0.2493),Vector3(1.909,0.1927,-0.06564),Vector3(2.003,0.01768,0.3814),Vector3(2.085,-0.07226,0.04428),Vector3(2.155,-0.05849,0.8426),Vector3(1.911,0.1426,1.177),Vector3(2.157,0.4917,0.9222),Vector3(1.722,0.1089,0.5264),Vector3(1.711,-0.06958,0.9984),Vector3(1.881,-0.1637,0.6909),Vector3(1.634,-0.1319,1.362),Vector3(1.336,0.08874,1.557),Vector3(1.636,0.4181,1.442),Vector3(1.376,0.0447,0.9807),Vector3(1.252,-0.1188,1.346),Vector3(1.503,-0.2339,1.187),Vector3(1.013,-0.1695,1.628),Vector3(0.6794,0.06411,1.731),Vector3(1.014,0.3805,1.708),Vector3(0.8849,0.0135,1.201),Vector3(0.6541,-0.1414,1.506),Vector3(0.9662,-0.268,1.429),Vector3(0.3405,-0.1838,1.729),Vector3(0.3407,0.3661,1.81),Vector3(0.3027,0.001732,1.285),Vector3(0.3304,-0.2809,1.519),Vector3(2.166,0.02262,-0.951),Vector3(2.162,0.06963,-1.303),Vector3(2.134,0.1242,-1.669),Vector3(2.14,-0.07222,-0.2804),Vector3(2.171,-0.0284,-0.6098),Vector3(2.014,-0.1627,0.3595),Vector3(2.102,-0.1204,0.04094),Vector3(1.72,-0.2505,0.9801),Vector3(1.897,-0.2125,0.6923),Vector3(1.257,-0.3001,1.331),Vector3(1.514,-0.2835,1.194),Vector3(0.656,-0.3228,1.492),Vector3(0.9712,-0.318,1.438),Vector3(0.3317,-0.3309,1.529),Vector3(0.6776,-0.2941,1.669),Vector3(0.3392,-0.34,1.689),Vector3(0,-0.3003,1.713),Vector3(1.331,-0.2696,1.496),Vector3(1.009,-0.3259,1.589),Vector3(1.903,-0.2161,1.118),Vector3(1.625,-0.2886,1.325),Vector3(2.361,-0.1268,0.4862),Vector3(2.141,-0.2157,0.8097),Vector3(2.666,-0.03072,-0.1929),Vector3(2.528,-0.1212,0.1413),Vector3(2.778,0.07259,-0.9234),Vector3(2.734,-0.02207,-0.5593),Vector3(2.769,0.1812,-1.691),Vector3(2.773,0.08362,-1.307),Vector3(1.153,0.1896,-1.613),Vector3(1.256,0.2732,-1.231),Vector3(1.241,0.2441,-0.8359),Vector3(1.167,0.1914,-0.4632),Vector3(0.9965,0.1411,-0.1071),Vector3(0.7287,0.1121,0.09755),Vector3(0.3811,0.09886,0.1912),Vector3(2.249,-0.4499,-1.376),Vector3(2.479,-0.4877,-1.108),Vector3(2.687,-0.4493,-1.38),Vector3(2.456,-0.4115,-1.647),Vector3(0.3333,-0.8549,1.488),Vector3(0.09134,-0.8631,1.546),Vector3(0.3376,-0.868,1.581),Vector3(0.5796,-0.8598,1.523),Vector3(1.001,-0.8541,1.482),Vector3(1.222,-0.8398,1.381),Vector3(0.9791,-0.8419,1.396),Vector3(0.7581,-0.8562,1.497),Vector3(1.602,-0.8175,1.224),Vector3(1.757,-0.7942,1.059),Vector3(1.536,-0.8067,1.147),Vector3(1.381,-0.8299,1.312),Vector3(2.1,-0.7454,0.7141),Vector3(2.158,-0.7055,0.4315),Vector3(1.938,-0.7348,0.6388),Vector3(1.881,-0.7748,0.9214),Vector3(2.464,-0.6516,0.05072),Vector3(2.393,-0.6132,-0.2206),Vector3(2.166,-0.6419,-0.01764),Vector3(2.237,-0.6803,0.2537),Vector3(2.654,-0.5537,-0.6418),Vector3(2.475,-0.5151,-0.9145),Vector3(2.252,-0.5488,-0.6764),Vector3(2.43,-0.5873,-0.4037),Vector3(2.255,0.02316,-1.033),Vector3(2.167,-0.009349,-1.313),Vector3(2.227,0.09968,-1.574),Vector3(2.484,0.01499,-0.9361),Vector3(2.704,0.02213,-1.026),Vector3(2.484,-0.06101,-0.9475),Vector3(2.684,0.1019,-1.59),Vector3(2.769,-0.008573,-1.318),Vector3(2.452,0.1247,-1.673),Vector3(2.452,0.04308,-1.684),Vector3(0.08337,-0.3438,1.562),Vector3(0.332,-0.4105,1.524),Vector3(0.5823,-0.3407,1.54),Vector3(0,-0.347,1.624),Vector3(0.08511,-0.36,1.676),Vector3(0.001013,-0.4231,1.613),Vector3(0.591,-0.3563,1.65),Vector3(0.3389,-0.4312,1.67),Vector3(0.6709,-0.3425,1.592),Vector3(0.6699,-0.4186,1.581),Vector3(1.247,-0.3356,1.504),Vector3(1.007,-0.4171,1.57),Vector3(0.7589,-0.3527,1.625),Vector3(1.309,-0.32,1.433),Vector3(1.21,-0.3209,1.4),Vector3(1.308,-0.3961,1.422),Vector3(0.7432,-0.3375,1.517),Vector3(0.9727,-0.3976,1.433),Vector3(0.672,-0.4186,1.581),Vector3(1.816,-0.2883,1.17),Vector3(1.621,-0.3799,1.308),Vector3(1.402,-0.3262,1.438),Vector3(1.83,-0.2707,1.084),Vector3(1.712,-0.2763,1.085),Vector3(1.829,-0.3469,1.074),Vector3(1.347,-0.3122,1.338),Vector3(1.517,-0.363,1.188),Vector3(1.31,-0.396,1.421),Vector3(2.271,-0.1994,0.5406),Vector3(2.137,-0.3073,0.7938),Vector3(1.946,-0.2701,1.041),Vector3(2.209,-0.1761,0.415),Vector3(2.051,-0.1873,0.4556),Vector3(2.208,-0.2522,0.4048),Vector3(1.809,-0.2584,0.9582),Vector3(1.901,-0.2917,0.6837),Vector3(1.83,-0.3467,1.073),Vector3(2.576,-0.1055,-0.1234),Vector3(2.523,-0.2129,0.1268),Vector3(2.368,-0.1757,0.3733),Vector3(2.422,-0.08402,-0.236),Vector3(2.214,-0.09652,-0.1866),Vector3(2.421,-0.1602,-0.2458),Vector3(2.103,-0.1642,0.2919),Vector3(2.107,-0.1994,0.03084),Vector3(2.209,-0.2521,0.4034),Vector3(2.695,-0.004304,-0.8387),Vector3(2.73,-0.114,-0.5729),Vector3(2.628,-0.08063,-0.299),Vector3(2.257,-0.001381,-0.8594),Vector3(2.484,-0.06122,-0.946),Vector3(2.231,-0.07339,-0.3501),Vector3(2.175,-0.1072,-0.6207),Vector3(2.422,-0.16,-0.2476),Vector3(2.122,0.156,-1.675),Vector3(1.061,0.08604,-1.691),Vector3(0,0.1637,-1.682),Vector3(2.169,-0.3874,-1.366),Vector3(2.26,-0.4875,-1.109),Vector3(2.233,-0.4122,-1.642),Vector3(2.484,-0.4388,-1.003),Vector3(2.699,-0.4886,-1.102),Vector3(2.766,-0.3866,-1.372),Vector3(2.679,-0.41,-1.657),Vector3(2.452,-0.3352,-1.735),Vector3(0.3322,-0.7892,1.475),Vector3(0.08821,-0.8561,1.497),Vector3(0.5782,-0.8531,1.476),Vector3(0.003092,-0.8011,1.559),Vector3(0.08971,-0.8702,1.596),Vector3(0.3387,-0.8086,1.612),Vector3(0.5857,-0.8665,1.57),Vector3(0.6678,-0.7967,1.528),Vector3(1.006,-0.7945,1.513),Vector3(1.24,-0.846,1.426),Vector3(0.7626,-0.8628,1.544),Vector3(1.306,-0.7743,1.369),Vector3(1.208,-0.8334,1.336),Vector3(0.9738,-0.7763,1.383),Vector3(0.749,-0.8497,1.451),Vector3(0.6741,-0.7966,1.527),Vector3(1.618,-0.7575,1.251),Vector3(1.806,-0.7993,1.095),Vector3(1.402,-0.8362,1.356),Vector3(1.826,-0.7252,1.022),Vector3(1.713,-0.7887,1.02),Vector3(1.52,-0.7415,1.137),Vector3(1.355,-0.824,1.27),Vector3(1.312,-0.7739,1.366),Vector3(2.133,-0.6851,0.7387),Vector3(2.262,-0.7108,0.4692),Vector3(1.942,-0.7804,0.9611),Vector3(2.207,-0.6305,0.3528),Vector3(2.056,-0.6995,0.3896),Vector3(1.905,-0.67,0.6319),Vector3(1.816,-0.7697,0.8859),Vector3(1.831,-0.7246,1.018),Vector3(2.52,-0.5909,0.07258),Vector3(2.568,-0.6172,-0.1924),Vector3(2.364,-0.6862,0.2949),Vector3(2.421,-0.5386,-0.2974),Vector3(2.218,-0.6086,-0.2534),Vector3(2.11,-0.5775,-0.02187),Vector3(2.11,-0.6751,0.2169),Vector3(2.209,-0.6299,0.3481),Vector3(2.728,-0.492,-0.6266),Vector3(2.689,-0.5162,-0.9068),Vector3(2.624,-0.5912,-0.3764),Vector3(2.483,-0.4395,-0.9976),Vector3(2.262,-0.5133,-0.9269),Vector3(2.178,-0.4853,-0.6739),Vector3(2.236,-0.5842,-0.4263),Vector3(2.422,-0.5378,-0.3029),Vector3(2.256,-0.2378,-1.07),Vector3(2.228,-0.1614,-1.61),Vector3(2.703,-0.2389,-1.063),Vector3(2.683,-0.1593,-1.626),Vector3(0.08417,-0.6052,1.527),Vector3(0.5817,-0.6022,1.506),Vector3(0.08583,-0.6206,1.637),Vector3(0.5901,-0.617,1.61),Vector3(1.246,-0.5963,1.465),Vector3(0.7594,-0.6134,1.585),Vector3(1.21,-0.5824,1.366),Vector3(0.7444,-0.5989,1.483),Vector3(1.813,-0.5492,1.131),Vector3(1.401,-0.5869,1.398),Vector3(1.713,-0.5377,1.05),Vector3(1.349,-0.5735,1.303),Vector3(2.268,-0.4604,0.5032),Vector3(1.944,-0.5309,1.002),Vector3(2.053,-0.4486,0.4199),Vector3(1.811,-0.5196,0.9222),Vector3(2.574,-0.3666,-0.1599),Vector3(2.366,-0.4366,0.3353),Vector3(2.215,-0.3577,-0.2226),Vector3(2.104,-0.4252,0.2548),Vector3(2.693,-0.2654,-0.875),Vector3(2.627,-0.3416,-0.3366),Vector3(2.258,-0.2625,-0.8956),Vector3(2.232,-0.3344,-0.3875),Vector3(2.122,-0.111,-1.713),Vector3(1.061,-0.3634,-1.754),Vector3(0,-0.1076,-1.721)]);
{ .SetCoord }
IndexedFaceSet734.Coord := Coordinate736;
{ .SetGeometry }
Shape732.Geometry := IndexedFaceSet734;
{ .AddChild }
Transform731.AddChildren([Shape732]);
{ .AddChildren }
HAnimSegment730.AddChildren([Transform731]);
Coordinate737 := TCoordinateNode.Create;
Coordinate737 := Coordinate736;
{ .SetCoord }
HAnimSegment730.Coord := Coordinate737;
HAnimDisplacer738 := THAnimDisplacerNode.Create;
HAnimDisplacer738.NameField := 'upper_teeth_morphinterpolator';
HAnimDisplacer738.SetCoordIndex([14,576,886]);
HAnimDisplacer738.SetDisplacements([Vector3(0,0.0001,0),Vector3(0,0.0001,0),Vector3(0,-0.0001,0)]);
{ .AddDisplacers }
HAnimSegment730.SetDisplacers([HAnimDisplacer738]);
HAnimDisplacer739 := THAnimDisplacerNode.Create;
HAnimDisplacer739.NameField := 'upper_teeth_morphinterpolator';
HAnimDisplacer739.SetCoordIndex([14,132,576,726,886]);
HAnimDisplacer739.SetDisplacements([Vector3(0,0.0001,0),Vector3(0,-0.0001,0),Vector3(0,0.0001,0),Vector3(0,0.0001,0),Vector3(0,-0.0001,0)]);
{ .AddDisplacers }
HAnimSegment730.SetDisplacers([HAnimDisplacer739]);
HAnimDisplacer740 := THAnimDisplacerNode.Create;
HAnimDisplacer740.NameField := 'upper_teeth_morphinterpolator';
HAnimDisplacer740.SetCoordIndex([16,17,19,20,21,22,28,29,30,37,38,39,40,50,51,52,53,54,55,56,57,61,79,80,81,82,83,84,85,86,107,108,109,110,111,112,113,114,118,152,154,155,156,158,159,166,167,168,169,170,171,181,182,183,184,185,186,187,188,209,210,211,212,213,214,215,216,234,239,240,241,242,243,244,245,246,264,275,276,277,278,284,285,286,287,297,298,299,301,302,311,312,313,314,315,316,317,318,322,340,341,342,343,344,345,346,347,351,368,369,370,371,372,373,374,375,379,392,403,404,405,406,412,413,414,415,425,426,427,429,430,439,440,441,442,443,444,445,446,450,468,469,470,471,472,473,474,475,479,496,497,498,499,500,501,502,503,507,520,539,543,545,546,547,549,550,555,556,557,562,563,564,570,571,572,573,585,586,587,588,589,599,600,601,604,605,617,618,619,620,621,622,623,624,625,626,627,628,629,630,631,632,636,640,665,675,676,677,678,679,680,681,682,683,684,685,686,687,688,689,690,694,698,727,728,729,730,731,732,733,734,738,756,757,758,759,760,761,762,763,767,780,808,811,813,814,816,817,818,819,821,822,832,834,835,836,837,838,839,840,841,857,858,863,864,865,866,867,868,869,870,897,898,899,900,901,902,903,904,905,906,907,908,909,910,911,912,913,914,915,924,952,962,963,964,965,966,967,968,969,970,971,972,973,974,975,976,977,985,1014,1015,1016,1017,1018,1019,1020,1021,1039,1040]);
HAnimDisplacer740.SetDisplacements([Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.1,0),Vector3(0,0.0787,0),Vector3(0,0.2286,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.1,0),Vector3(0,0.1,0),Vector3(0,0.0381,0),Vector3(0,0.1799,0),Vector3(0,0.1457,0),Vector3(0,0.1458,0),Vector3(0,0.1799,0),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.1457,0),Vector3(0,0.1458,0),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.1,0),Vector3(0,0.188,0),Vector3(0,0.188,0),Vector3(0,0.0999,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1,0),Vector3(0,0.0382,0),Vector3(0,0.1,0),Vector3(0,0.2285,0),Vector3(0,0.1,0),Vector3(0,0.2286,0),Vector3(0,0.0381,0),Vector3(0,0.1457,0),Vector3(0,0.1458,0),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0999,0),Vector3(0,0.1405,0),Vector3(0,0.0999,0),Vector3(0,0.1404,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.0999,0),Vector3(0,0.0381,0),Vector3(0,0.1121,0),Vector3(0,0.1457,0),Vector3(0,0.1458,0),Vector3(0,0.1121,0),Vector3(0,0.1267,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1267,0),Vector3(0,0.2286,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0786,0),Vector3(0,0.1,0),Vector3(0,0.1,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.1458,0),Vector3(0,0.0382,0),Vector3(0,0.1,0),Vector3(0,0.2285,0),Vector3(0,0.0999,0),Vector3(0,0.0999,0),Vector3(0,0.0349,0),Vector3(0,0.0381,0),Vector3(0,0.0349,0),Vector3(0,0.1,0),Vector3(0,0.0382,0),Vector3(0,0.1457,0),Vector3(0,0.1458,0),Vector3(0,0.1864,0),Vector3(0,0.1458,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,-0.0056,0),Vector3(0,0.1,0),Vector3(0,0.1,0),Vector3(0,-0.0055,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.1458,0),Vector3(0,0.0382,0),Vector3(0,0.1,0),Vector3(0,0.2285,0),Vector3(0,0.0999,0),Vector3(0,0.0999,0),Vector3(0,0.0349,0),Vector3(0,0.0381,0),Vector3(0,0.0349,0),Vector3(0,0.1,0),Vector3(0,0.0382,0),Vector3(0,0.1457,0),Vector3(0,0.1458,0),Vector3(0,0.1864,0),Vector3(0,0.1458,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0787,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0786,0),Vector3(0,0.0999,0),Vector3(0,0.1,0),Vector3(0,0.0349,0),Vector3(0,0.0381,0),Vector3(0,0.1,0),Vector3(0,0.2286,0),Vector3(0,0.1,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.1,0),Vector3(0,0.0381,0),Vector3(0,0.1404,0),Vector3(0,0.1881,0),Vector3(0,0.1881,0),Vector3(0,0.1405,0),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.1458,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0968,0),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.1865,0),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.1458,0),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.1458,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0999,0),Vector3(0,0.2286,0),Vector3(0,0.1,0),Vector3(0,0.1,0),Vector3(0,0.0968,0),Vector3(0,0.0381,0),Vector3(0,0.0967,0),Vector3(0,0.1,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1,0),Vector3(0,0.0381,0),Vector3(0,0.1,0),Vector3(0,-0.0056,0),Vector3(0,0.0999,0),Vector3(0,0.1,0),Vector3(0,0.1,0),Vector3(0,0.2286,0),Vector3(0,0.0381,0),Vector3(0,0.0349,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.1462,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.1268,0),Vector3(0,0.1,0),Vector3(0,0.0999,0),Vector3(0,0.1404,0),Vector3(0,0.2286,0),Vector3(0,0.1,0),Vector3(0,0.2286,0),Vector3(0,0.1405,0),Vector3(0,0.1,0),Vector3(0,0.1,0),Vector3(0,0.1,0),Vector3(0,0.0382,0),Vector3(0,0.0968,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1,0),Vector3(0,0.0967,0),Vector3(0,0.1,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0.0001,0.1457,0),Vector3(0,0.1457,0),Vector3(0,0.1462,0),Vector3(0,0.1457,0),Vector3(0,0.1865,0),Vector3(0,0.1457,0),Vector3(0,0.1462,0),Vector3(0,0.1457,0),Vector3(0,0.0381,0),Vector3(0,0.0381,0),Vector3(0,0.1267,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.1267,0),Vector3(0,0.1458,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0382,0),Vector3(0,0.0382,0),Vector3(0,0.0381,0),Vector3(0,0.0349,0),Vector3(0,0.0381,0)]);
{ .AddDisplacers }
HAnimSegment730.SetDisplacers([HAnimDisplacer740]);
HAnimDisplacer741 := THAnimDisplacerNode.Create;
HAnimDisplacer741.NameField := 'upper_teeth_morphinterpolator';
HAnimDisplacer741.SetCoordIndex([14,576,886]);
HAnimDisplacer741.SetDisplacements([Vector3(0,0.0001,0),Vector3(0,0.0001,0),Vector3(0,-0.0001,0)]);
{ .AddDisplacers }
HAnimSegment730.SetDisplacers([HAnimDisplacer741]);
HAnimDisplacer742 := THAnimDisplacerNode.Create;
HAnimDisplacer742.NameField := 'upper_teeth_morphinterpolator';
HAnimDisplacer742.SetCoordIndex([14,576,886]);
HAnimDisplacer742.SetDisplacements([Vector3(0,0.0001,0),Vector3(0,0.0001,0),Vector3(0,-0.0001,0)]);
{ .AddDisplacers }
HAnimSegment730.SetDisplacers([HAnimDisplacer742]);
HAnimDisplacer743 := THAnimDisplacerNode.Create;
HAnimDisplacer743.NameField := 'upper_teeth_morphinterpolator';
HAnimDisplacer743.SetCoordIndex([1,219,711,1006]);
HAnimDisplacer743.SetDisplacements([Vector3(0,0.0001,0),Vector3(0,-0.0001,0),Vector3(0,0.0001,0),Vector3(0,-0.0001,0)]);
{ .AddDisplacers }
HAnimSegment730.SetDisplacers([HAnimDisplacer743]);
HAnimDisplacer744 := THAnimDisplacerNode.Create;
HAnimDisplacer744.NameField := 'upper_teeth_morphinterpolator';
HAnimDisplacer744.SetCoordIndex([14,576,886]);
HAnimDisplacer744.SetDisplacements([Vector3(0,0.0001,0),Vector3(0,0.0001,0),Vector3(0,-0.0001,0)]);
{ .AddDisplacers }
HAnimSegment730.SetDisplacers([HAnimDisplacer744]);
HAnimDisplacer745 := THAnimDisplacerNode.Create;
HAnimDisplacer745.NameField := 'upper_teeth_morphinterpolator';
HAnimDisplacer745.SetCoordIndex([15,17,18,19,20,21,22,37,38,39,107,108,109,110,111,112,113,114,156,157,159,160,167,168,169,170,209,210,211,212,214,216,264,275,277,284,285,286,287,311,312,313,314,315,317,318,368,369,371,372,374,375,403,405,412,413,414,415,439,440,441,442,443,445,446,496,497,499,500,502,503,539,543,544,546,547,548,549,550,570,571,572,573,585,586,587,588,604,617,618,619,620,625,626,627,628,665,727,728,731,732,733,734,756,757,758,759,760,762,763,814,815,818,819,820,822,834,835,836,837,838,839,841,897,898,899,900,901,902,903,904,905,906,908,909,913,914,915,1014,1015,1019,1021,1039]);
HAnimDisplacer745.SetDisplacements([Vector3(0,0,0.092),Vector3(0,0,0.322),Vector3(0,0,0.092),Vector3(0,0,0.322),Vector3(-0.0413,0,0.436),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0.0246,0,0.436),Vector3(0.0261,0,0.436),Vector3(0.0167,0,0.436),Vector3(-0.0327,0,0.436),Vector3(0.0045,0,0.322),Vector3(0.0176,0,0.436),Vector3(0.0716,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0.07,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.092),Vector3(-0.0413,0,0.436),Vector3(0,0,0.092),Vector3(-0.1069,0,0.436),Vector3(-0.0411,0,0.436),Vector3(-0.1084,0,0.436),Vector3(-0.0411,0,0.436),Vector3(-0.0123,0,0.322),Vector3(-0.0989,0,0.436),Vector3(-0.0124,0,0.322),Vector3(-0.0998,0,0.436),Vector3(-0.1166,0,0.436),Vector3(-0.1151,0,0.436),Vector3(-0.0411,0,0.436),Vector3(0,0,0.092),Vector3(0,0,0.093),Vector3(0.0923,0,0.322),Vector3(0.029,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0.0291,0,0.322),Vector3(-0.0411,0,0.436),Vector3(0.0297,0,0.322),Vector3(0.0256,0,0.436),Vector3(0.0586,0,0.436),Vector3(0.0927,0,0.322),Vector3(0.0256,0,0.436),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.092),Vector3(0,0,0.093),Vector3(-0.1374,0,0.436),Vector3(-0.0369,0,0.322),Vector3(0,0,0.322),Vector3(-0.0412,0,0.436),Vector3(-0.037,0,0.322),Vector3(-0.0412,0,0.436),Vector3(-0.0376,0,0.322),Vector3(-0.1078,0,0.436),Vector3(-0.1408,0,0.436),Vector3(-0.1378,0,0.436),Vector3(-0.1078,0,0.436),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(-0.0413,0,0.436),Vector3(0,0,0.322),Vector3(0,0,0.093),Vector3(0,0,0.093),Vector3(0,0,0.093),Vector3(0,0,0.322),Vector3(0,0,0.092),Vector3(0,0,0.092),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0.0926,0,0.322),Vector3(0.029,0,0.322),Vector3(0.0298,0,0.322),Vector3(0.0968,0,0.322),Vector3(0,0,0.322),Vector3(0.0241,0,0.436),Vector3(-0.0411,0,0.436),Vector3(-0.0413,0,0.436),Vector3(0.0256,0,0.436),Vector3(0.0168,0,0.436),Vector3(-0.0328,0,0.436),Vector3(-0.0327,0,0.436),Vector3(0.0176,0,0.436),Vector3(0.0715,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0.07,0,0.322),Vector3(0.0645,0,0.436),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0.029,0,0.322),Vector3(-0.041,0,0.436),Vector3(0.0298,0,0.322),Vector3(0.0255,0,0.436),Vector3(0.059,0,0.436),Vector3(0.0556,0,0.436),Vector3(0.0257,0,0.436),Vector3(0,0,0.093),Vector3(0,0,0.093),Vector3(-0.0413,0,0.436),Vector3(0,0,0.322),Vector3(0,0,0.092),Vector3(0,0,0.322),Vector3(-0.1063,0,0.436),Vector3(-0.1377,0,0.436),Vector3(-0.0369,0,0.322),Vector3(-0.0413,0,0.436),Vector3(-0.0377,0,0.322),Vector3(-0.0413,0,0.436),Vector3(-0.1418,0,0.436),Vector3(-0.0122,0,0.322),Vector3(-0.0369,0,0.322),Vector3(-0.099,0,0.436),Vector3(-0.0411,0,0.436),Vector3(-0.0124,0,0.322),Vector3(-0.0412,0,0.436),Vector3(-0.0999,0,0.436),Vector3(-0.0377,0,0.322),Vector3(-0.1078,0,0.436),Vector3(-0.1077,0,0.436),Vector3(-0.1412,0,0.436),Vector3(-0.1165,0,0.436),Vector3(-0.115,0,0.436),Vector3(-0.1378,0,0.436),Vector3(-0.1079,0,0.436),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(0,0,0.322),Vector3(-0.0413,0,0.436),Vector3(-0.1467,0,0.436)]);
{ .AddDisplacers }
HAnimSegment730.SetDisplacers([HAnimDisplacer745]);
HAnimDisplacer746 := THAnimDisplacerNode.Create;
HAnimDisplacer746.NameField := 'upper_teeth_morphinterpolator';
HAnimDisplacer746.SetCoordIndex([14,132,576,726,886]);
HAnimDisplacer746.SetDisplacements([Vector3(0,-0.0001,0),Vector3(0,0.0001,0),Vector3(0,-0.0001,0),Vector3(0,-0.0001,0),Vector3(0,0.0001,0)]);
{ .AddDisplacers }
HAnimSegment730.SetDisplacers([HAnimDisplacer746]);
HAnimDisplacer747 := THAnimDisplacerNode.Create;
HAnimDisplacer747.NameField := 'upper_teeth_morphinterpolator';
HAnimDisplacer747.SetCoordIndex([14,576,886]);
HAnimDisplacer747.SetDisplacements([Vector3(0,0.0001,0),Vector3(0,0.0001,0),Vector3(0,-0.0001,0)]);
{ .AddDisplacers }
HAnimSegment730.SetDisplacers([HAnimDisplacer747]);
HAnimDisplacer748 := THAnimDisplacerNode.Create;
HAnimDisplacer748.NameField := 'upper_teeth_morphinterpolator';
HAnimDisplacer748.SetCoordIndex([14,576,886]);
HAnimDisplacer748.SetDisplacements([Vector3(0,0.0001,0),Vector3(0,0.0001,0),Vector3(0,-0.0001,0)]);
{ .AddDisplacers }
HAnimSegment730.SetDisplacers([HAnimDisplacer748]);
HAnimDisplacer749 := THAnimDisplacerNode.Create;
HAnimDisplacer749.NameField := 'upper_teeth_morphinterpolator';
HAnimDisplacer749.SetCoordIndex([14,576,886]);
HAnimDisplacer749.SetDisplacements([Vector3(0,0.0001,0),Vector3(0,0.0001,0),Vector3(0,-0.0001,0)]);
{ .AddDisplacers }
HAnimSegment730.SetDisplacers([HAnimDisplacer749]);
HAnimDisplacer750 := THAnimDisplacerNode.Create;
HAnimDisplacer750.NameField := 'upper_teeth_morphinterpolator';
HAnimDisplacer750.SetCoordIndex([14,576,886]);
HAnimDisplacer750.SetDisplacements([Vector3(0,0.0001,0),Vector3(0,0.0001,0),Vector3(0,-0.0001,0)]);
{ .AddDisplacers }
HAnimSegment730.SetDisplacers([HAnimDisplacer750]);
HAnimDisplacer751 := THAnimDisplacerNode.Create;
HAnimDisplacer751.NameField := 'upper_teeth_morphinterpolator';
HAnimDisplacer751.SetCoordIndex([14,576,886]);
HAnimDisplacer751.SetDisplacements([Vector3(0,0.0001,0),Vector3(0,0.0001,0),Vector3(0,-0.0001,0)]);
{ .AddDisplacers }
HAnimSegment730.SetDisplacers([HAnimDisplacer751]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment730]);
{ .AddChildren }
HAnimJoint87.AddChildren([HAnimJoint89]);
{ .AddSkeleton }
HAnimHumanoid86.SetSkeleton([HAnimJoint87]);
HAnimJoint752 := THAnimJointNode.Create;
HAnimJoint752 := HAnimJoint87;
{ .AddJoints }
HAnimHumanoid86.Joints := HAnimJoint752;
HAnimJoint753 := THAnimJointNode.Create;
HAnimJoint753 := HAnimJoint89;
{ .AddJoints }
HAnimHumanoid86.Joints := HAnimJoint753;
{ .AddChildren }
Transform85.AddChildren([HAnimHumanoid86]);
{ .AddChildren }
Layer15.AddChildren([Transform85]);
Layer15.AddRoute(ScalarInterpolator55.EventValue_changed, HAnimDisplacer738.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator55.EventValue_changed, HAnimDisplacer367.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator55.EventValue_changed, HAnimDisplacer255.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator55.EventValue_changed, HAnimDisplacer578.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator55.EventValue_changed, HAnimDisplacer689.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor54.EventFraction_changed, ScalarInterpolator55.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator56.EventValue_changed, HAnimDisplacer245.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator56.EventValue_changed, HAnimDisplacer167.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator56.EventValue_changed, HAnimDisplacer233.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator56.EventValue_changed, HAnimDisplacer177.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator56.EventValue_changed, HAnimDisplacer338.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator56.EventValue_changed, HAnimDisplacer567.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator56.EventValue_changed, HAnimDisplacer554.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator56.EventValue_changed, HAnimDisplacer368.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator56.EventValue_changed, HAnimDisplacer327.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator56.EventValue_changed, HAnimDisplacer497.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator56.EventValue_changed, HAnimDisplacer648.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator56.EventValue_changed, HAnimDisplacer659.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator56.EventValue_changed, HAnimDisplacer690.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor53.EventFraction_changed, ScalarInterpolator56.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer426.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer453.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer467.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer144.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer271.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer123.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer315.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer213.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer294.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer189.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer388.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer348.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer479.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer510.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer534.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer615.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer636.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer670.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer708.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator57.EventValue_changed, HAnimDisplacer593.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor52.EventFraction_changed, ScalarInterpolator57.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator58.EventValue_changed, HAnimDisplacer739.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator58.EventValue_changed, HAnimDisplacer214.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator58.EventValue_changed, HAnimDisplacer190.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator58.EventValue_changed, HAnimDisplacer369.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator58.EventValue_changed, HAnimDisplacer256.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator58.EventValue_changed, HAnimDisplacer511.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator58.EventValue_changed, HAnimDisplacer535.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator58.EventValue_changed, HAnimDisplacer579.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator58.EventValue_changed, HAnimDisplacer691.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor51.EventFraction_changed, ScalarInterpolator58.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer104.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer727.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer740.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer427.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer454.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer468.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer145.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer272.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer124.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer295.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer191.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer389.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer349.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer480.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer512.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer616.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer671.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer709.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator59.EventValue_changed, HAnimDisplacer594.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor50.EventFraction_changed, ScalarInterpolator59.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer428.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer455.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer469.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer146.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer273.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer125.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer296.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer192.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer390.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer350.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer481.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer513.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer617.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer672.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer710.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator60.EventValue_changed, HAnimDisplacer595.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor49.EventFraction_changed, ScalarInterpolator60.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator61.EventValue_changed, HAnimDisplacer741.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator61.EventValue_changed, HAnimDisplacer370.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator61.EventValue_changed, HAnimDisplacer257.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator61.EventValue_changed, HAnimDisplacer580.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator61.EventValue_changed, HAnimDisplacer692.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor48.EventFraction_changed, ScalarInterpolator61.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator62.EventValue_changed, HAnimDisplacer246.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator62.EventValue_changed, HAnimDisplacer168.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator62.EventValue_changed, HAnimDisplacer234.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator62.EventValue_changed, HAnimDisplacer178.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator62.EventValue_changed, HAnimDisplacer568.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator62.EventValue_changed, HAnimDisplacer555.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator62.EventValue_changed, HAnimDisplacer371.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator62.EventValue_changed, HAnimDisplacer498.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator62.EventValue_changed, HAnimDisplacer693.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor47.EventFraction_changed, ScalarInterpolator62.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator63.EventValue_changed, HAnimDisplacer105.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator63.EventValue_changed, HAnimDisplacer470.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator63.EventValue_changed, HAnimDisplacer147.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator63.EventValue_changed, HAnimDisplacer274.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator63.EventValue_changed, HAnimDisplacer126.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator63.EventValue_changed, HAnimDisplacer193.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator63.EventValue_changed, HAnimDisplacer372.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator63.EventValue_changed, HAnimDisplacer514.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator63.EventValue_changed, HAnimDisplacer596.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor46.EventFraction_changed, ScalarInterpolator63.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator64.EventValue_changed, HAnimDisplacer742.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator64.EventValue_changed, HAnimDisplacer373.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator64.EventValue_changed, HAnimDisplacer258.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator64.EventValue_changed, HAnimDisplacer581.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator64.EventValue_changed, HAnimDisplacer694.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor45.EventFraction_changed, ScalarInterpolator64.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator65.EventValue_changed, HAnimDisplacer179.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator65.EventValue_changed, HAnimDisplacer374.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator65.EventValue_changed, HAnimDisplacer259.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator65.EventValue_changed, HAnimDisplacer328.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator65.EventValue_changed, HAnimDisplacer499.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator65.EventValue_changed, HAnimDisplacer582.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator65.EventValue_changed, HAnimDisplacer649.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator65.EventValue_changed, HAnimDisplacer695.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor44.EventFraction_changed, ScalarInterpolator65.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer429.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer456.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer148.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer275.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer127.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer297.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer194.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer391.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer351.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer482.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer375.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer515.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer618.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer673.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer711.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator66.EventValue_changed, HAnimDisplacer597.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor43.EventFraction_changed, ScalarInterpolator66.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator67.EventValue_changed, HAnimDisplacer743.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator67.EventValue_changed, HAnimDisplacer195.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator67.EventValue_changed, HAnimDisplacer516.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator67.EventValue_changed, HAnimDisplacer298.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator67.EventValue_changed, HAnimDisplacer619.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator67.EventValue_changed, HAnimDisplacer149.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator67.EventValue_changed, HAnimDisplacer276.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator67.EventValue_changed, HAnimDisplacer598.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator67.EventValue_changed, HAnimDisplacer392.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor42.EventFraction_changed, ScalarInterpolator67.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator68.EventValue_changed, HAnimDisplacer744.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator68.EventValue_changed, HAnimDisplacer430.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator68.EventValue_changed, HAnimDisplacer150.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator68.EventValue_changed, HAnimDisplacer277.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator68.EventValue_changed, HAnimDisplacer128.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator68.EventValue_changed, HAnimDisplacer299.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator68.EventValue_changed, HAnimDisplacer196.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator68.EventValue_changed, HAnimDisplacer393.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator68.EventValue_changed, HAnimDisplacer352.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator68.EventValue_changed, HAnimDisplacer483.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator68.EventValue_changed, HAnimDisplacer517.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator68.EventValue_changed, HAnimDisplacer620.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator68.EventValue_changed, HAnimDisplacer674.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator68.EventValue_changed, HAnimDisplacer712.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator68.EventValue_changed, HAnimDisplacer599.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor41.EventFraction_changed, ScalarInterpolator68.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator69.EventValue_changed, HAnimDisplacer151.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator69.EventValue_changed, HAnimDisplacer278.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator69.EventValue_changed, HAnimDisplacer129.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator69.EventValue_changed, HAnimDisplacer600.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor40.EventFraction_changed, ScalarInterpolator69.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer106.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer728.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer745.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer431.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer152.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer279.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer130.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer300.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer197.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer394.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer353.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer484.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer518.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer621.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer675.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer713.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator70.EventValue_changed, HAnimDisplacer601.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor39.EventFraction_changed, ScalarInterpolator70.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator71.EventValue_changed, HAnimDisplacer746.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator71.EventValue_changed, HAnimDisplacer153.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator71.EventValue_changed, HAnimDisplacer280.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator71.EventValue_changed, HAnimDisplacer131.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator71.EventValue_changed, HAnimDisplacer198.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator71.EventValue_changed, HAnimDisplacer519.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator71.EventValue_changed, HAnimDisplacer114.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor38.EventFraction_changed, ScalarInterpolator71.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator72.EventValue_changed, HAnimDisplacer107.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator72.EventValue_changed, HAnimDisplacer457.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator72.EventValue_changed, HAnimDisplacer154.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator72.EventValue_changed, HAnimDisplacer281.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator72.EventValue_changed, HAnimDisplacer301.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator72.EventValue_changed, HAnimDisplacer199.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator72.EventValue_changed, HAnimDisplacer395.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator72.EventValue_changed, HAnimDisplacer520.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator72.EventValue_changed, HAnimDisplacer622.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator72.EventValue_changed, HAnimDisplacer714.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator72.EventValue_changed, HAnimDisplacer602.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor37.EventFraction_changed, ScalarInterpolator72.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator73.EventValue_changed, HAnimDisplacer747.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator73.EventValue_changed, HAnimDisplacer432.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator73.EventValue_changed, HAnimDisplacer155.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator73.EventValue_changed, HAnimDisplacer282.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator73.EventValue_changed, HAnimDisplacer132.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator73.EventValue_changed, HAnimDisplacer302.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator73.EventValue_changed, HAnimDisplacer200.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator73.EventValue_changed, HAnimDisplacer396.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator73.EventValue_changed, HAnimDisplacer354.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator73.EventValue_changed, HAnimDisplacer485.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator73.EventValue_changed, HAnimDisplacer521.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator73.EventValue_changed, HAnimDisplacer623.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator73.EventValue_changed, HAnimDisplacer676.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator73.EventValue_changed, HAnimDisplacer715.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator73.EventValue_changed, HAnimDisplacer603.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor36.EventFraction_changed, ScalarInterpolator73.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator74.EventValue_changed, HAnimDisplacer748.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator74.EventValue_changed, HAnimDisplacer433.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator74.EventValue_changed, HAnimDisplacer156.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator74.EventValue_changed, HAnimDisplacer283.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator74.EventValue_changed, HAnimDisplacer133.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator74.EventValue_changed, HAnimDisplacer303.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator74.EventValue_changed, HAnimDisplacer201.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator74.EventValue_changed, HAnimDisplacer397.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator74.EventValue_changed, HAnimDisplacer355.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator74.EventValue_changed, HAnimDisplacer486.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator74.EventValue_changed, HAnimDisplacer522.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator74.EventValue_changed, HAnimDisplacer624.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator74.EventValue_changed, HAnimDisplacer677.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator74.EventValue_changed, HAnimDisplacer716.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator74.EventValue_changed, HAnimDisplacer604.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor35.EventFraction_changed, ScalarInterpolator74.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator75.EventValue_changed, HAnimDisplacer108.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator75.EventValue_changed, HAnimDisplacer458.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator75.EventValue_changed, HAnimDisplacer157.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator75.EventValue_changed, HAnimDisplacer284.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator75.EventValue_changed, HAnimDisplacer134.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator75.EventValue_changed, HAnimDisplacer605.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor34.EventFraction_changed, ScalarInterpolator75.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer109.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer729.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer749.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer434.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer158.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer285.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer135.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer304.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer202.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer398.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer356.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer487.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer523.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer625.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer678.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer717.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator76.EventValue_changed, HAnimDisplacer606.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor33.EventFraction_changed, ScalarInterpolator76.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator77.EventValue_changed, HAnimDisplacer444.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator77.EventValue_changed, HAnimDisplacer316.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator77.EventValue_changed, HAnimDisplacer637.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor32.EventFraction_changed, ScalarInterpolator77.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator78.EventValue_changed, HAnimDisplacer750.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator78.EventValue_changed, HAnimDisplacer317.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator78.EventValue_changed, HAnimDisplacer215.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator78.EventValue_changed, HAnimDisplacer305.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator78.EventValue_changed, HAnimDisplacer203.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator78.EventValue_changed, HAnimDisplacer357.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator78.EventValue_changed, HAnimDisplacer524.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator78.EventValue_changed, HAnimDisplacer536.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator78.EventValue_changed, HAnimDisplacer626.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator78.EventValue_changed, HAnimDisplacer638.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator78.EventValue_changed, HAnimDisplacer679.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor31.EventFraction_changed, ScalarInterpolator78.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator79.EventValue_changed, HAnimDisplacer569.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator79.EventValue_changed, HAnimDisplacer556.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator79.EventValue_changed, HAnimDisplacer500.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator79.EventValue_changed, HAnimDisplacer660.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator79.EventValue_changed, HAnimDisplacer696.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor30.EventFraction_changed, ScalarInterpolator79.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator80.EventValue_changed, HAnimDisplacer751.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator80.EventValue_changed, HAnimDisplacer376.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator80.EventValue_changed, HAnimDisplacer697.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor29.EventFraction_changed, ScalarInterpolator80.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator81.EventValue_changed, HAnimDisplacer235.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator81.EventValue_changed, HAnimDisplacer339.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator81.EventValue_changed, HAnimDisplacer557.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator81.EventValue_changed, HAnimDisplacer377.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator81.EventValue_changed, HAnimDisplacer260.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator81.EventValue_changed, HAnimDisplacer583.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator81.EventValue_changed, HAnimDisplacer661.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator81.EventValue_changed, HAnimDisplacer698.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor28.EventFraction_changed, ScalarInterpolator81.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator82.EventValue_changed, HAnimDisplacer236.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator82.EventValue_changed, HAnimDisplacer180.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator82.EventValue_changed, HAnimDisplacer558.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator82.EventValue_changed, HAnimDisplacer378.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator82.EventValue_changed, HAnimDisplacer261.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator82.EventValue_changed, HAnimDisplacer329.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator82.EventValue_changed, HAnimDisplacer501.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator82.EventValue_changed, HAnimDisplacer584.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator82.EventValue_changed, HAnimDisplacer650.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator82.EventValue_changed, HAnimDisplacer699.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor27.EventFraction_changed, ScalarInterpolator82.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator83.EventValue_changed, HAnimDisplacer435.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator83.EventValue_changed, HAnimDisplacer318.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator83.EventValue_changed, HAnimDisplacer216.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator83.EventValue_changed, HAnimDisplacer306.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator83.EventValue_changed, HAnimDisplacer204.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator83.EventValue_changed, HAnimDisplacer399.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator83.EventValue_changed, HAnimDisplacer358.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator83.EventValue_changed, HAnimDisplacer488.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator83.EventValue_changed, HAnimDisplacer525.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator83.EventValue_changed, HAnimDisplacer537.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator83.EventValue_changed, HAnimDisplacer627.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator83.EventValue_changed, HAnimDisplacer639.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator83.EventValue_changed, HAnimDisplacer680.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator83.EventValue_changed, HAnimDisplacer718.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor26.EventFraction_changed, ScalarInterpolator83.EventSet_fraction);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator84.EventValue_changed, HAnimDisplacer379.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(ScalarInterpolator84.EventValue_changed, HAnimDisplacer262.FdWeight);
{ .AddX3DRoute }
Layer15.AddRoute(TimeSensor25.EventFraction_changed, ScalarInterpolator84.EventSet_fraction);
{ .AddX3DRoute }
WorldInfo1090 := TWorldInfoNode.Create;
WorldInfo1090.Title := 'CleanedYouClocks.x3d';
{ .AddChildren }
Layer15.AddChildren([WorldInfo1090]);
{ .AddLayers }
LayerSet14.Layers := Layer15;
Layer1091 := TLayerNode.Create;
Layer1091.Pickable := True;
Layer1091.SetObjectType(['ALL']);
Viewpoint1092 := TViewpointNode.Create;
Viewpoint1092.Position := Vector3(0,20,110);
{ .AddChildren }
Layer1091.AddChildren([Viewpoint1092]);
ProtoDeclare1093 := TProtoDeclareNode.Create;
ProtoDeclare1093.NameField := 'MenuItem';
ProtoInterface1094 := TProtoInterfaceNode.Create;
field1095 := TfieldNode.Create;
field1095.NameField := 'translation';
field1095.AccessType := 'inputOutput';
field1095.Type := 'SFVec3f';
{ .AddField }
ProtoInterface1094.Field := field1095;
field1096 := TfieldNode.Create;
field1096.NameField := 'textTranslation';
field1096.AccessType := 'inputOutput';
field1096.Type := 'SFVec3f';
{ .AddField }
ProtoInterface1094.Field := field1096;
field1097 := TfieldNode.Create;
field1097.NameField := 'description';
field1097.AccessType := 'inputOutput';
field1097.Type := 'SFString';
{ .AddField }
ProtoInterface1094.Field := field1097;
field1098 := TfieldNode.Create;
field1098.NameField := 'menuItemString';
field1098.AccessType := 'inputOutput';
field1098.Type := 'MFString';
{ .AddField }
ProtoInterface1094.Field := field1098;
field1099 := TfieldNode.Create;
field1099.NameField := 'startTime';
field1099.AccessType := 'outputOnly';
field1099.Type := 'SFTime';
field1099.Value := '-1';
{ .AddField }
ProtoInterface1094.Field := field1099;
field1100 := TfieldNode.Create;
field1100.NameField := 'stopTime';
field1100.AccessType := 'outputOnly';
field1100.Type := 'SFTime';
field1100.Value := '-1';
{ .AddField }
ProtoInterface1094.Field := field1100;
field1101 := TfieldNode.Create;
field1101.NameField := 'enabled';
field1101.AccessType := 'outputOnly';
field1101.Type := 'SFBool';
field1101.Value := 'false';
{ .AddField }
ProtoInterface1094.Field := field1101;
field1102 := TfieldNode.Create;
field1102.NameField := 'untoggle';
field1102.AccessType := 'inputOnly';
field1102.Type := 'SFBool';
field1102.Value := 'false';
{ .AddField }
ProtoInterface1094.Field := field1102;
field1103 := TfieldNode.Create;
field1103.NameField := 'size';
field1103.AccessType := 'initializeOnly';
field1103.Type := 'SFVec2f';
field1103.Value := '40 3';
{ .AddField }
ProtoInterface1094.Field := field1103;
field1104 := TfieldNode.Create;
field1104.NameField := 'fontSize';
field1104.AccessType := 'inputOutput';
field1104.Type := 'SFFloat';
field1104.Value := '2.4';
{ .AddField }
ProtoInterface1094.Field := field1104;
field1105 := TfieldNode.Create;
field1105.NameField := 'spacing';
field1105.AccessType := 'initializeOnly';
field1105.Type := 'SFFloat';
field1105.Value := '1.2';
{ .AddField }
ProtoInterface1094.Field := field1105;
{ .SetProtoInterface }
ProtoDeclare1093.ProtoInterface := ProtoInterface1094;
ProtoBody1106 := TProtoBodyNode.Create;
Group1107 := TGroupNode.Create;
Transform1108 := TTransformNode.Create;
IS1109 := TISNode.Create;
connect1110 := TconnectNode.Create;
connect1110.NodeField := 'translation';
connect1110.ProtoField := 'translation';
{ .AddConnect }
IS1109.Connect := connect1110;
{ .SetIS }
Transform1108.IS := IS1109;
TouchSensor1111 := TTouchSensorNode.Create;
IS1112 := TISNode.Create;
connect1113 := TconnectNode.Create;
connect1113.NodeField := 'description';
connect1113.ProtoField := 'description';
{ .AddConnect }
IS1112.Connect := connect1113;
{ .SetIS }
TouchSensor1111.IS := IS1112;
{ .AddChildren }
Transform1108.AddChildren([TouchSensor1111]);
Transform1114 := TTransformNode.Create;
IS1115 := TISNode.Create;
connect1116 := TconnectNode.Create;
connect1116.NodeField := 'translation';
connect1116.ProtoField := 'textTranslation';
{ .AddConnect }
IS1115.Connect := connect1116;
{ .SetIS }
Transform1114.IS := IS1115;
Shape1117 := TShapeNode.Create;
Appearance1118 := TAppearanceNode.Create;
Material1119 := TMaterialNode.Create;
Material1119.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance1118.Material := Material1119;
{ .SetAppearance }
Shape1117.Appearance := Appearance1118;
Text1120 := TTextNode.Create;
IS1121 := TISNode.Create;
connect1122 := TconnectNode.Create;
connect1122.NodeField := 'string';
connect1122.ProtoField := 'menuItemString';
{ .AddConnect }
IS1121.Connect := connect1122;
{ .SetIS }
Text1120.IS := IS1121;
FontStyle1123 := TFontStyleNode.Create;
FontStyle1123.Justify := fjMiddle;
FontStyle1123.JustifyMinor := fjMiddle;
IS1124 := TISNode.Create;
connect1125 := TconnectNode.Create;
connect1125.NodeField := 'size';
connect1125.ProtoField := 'fontSize';
{ .AddConnect }
IS1124.Connect := connect1125;
connect1126 := TconnectNode.Create;
connect1126.NodeField := 'spacing';
connect1126.ProtoField := 'spacing';
{ .AddConnect }
IS1124.Connect := connect1126;
{ .SetIS }
FontStyle1123.IS := IS1124;
{ .SetFontStyle }
Text1120.FontStyle := FontStyle1123;
{ .SetGeometry }
Shape1117.Geometry := Text1120;
{ .AddChild }
Transform1114.AddChildren([Shape1117]);
{ .AddChildren }
Transform1108.AddChildren([Transform1114]);
Transform1127 := TTransformNode.Create;
Transform1127.Translation := Vector3(0,0,-0.01);
Switch1128 := TSwitchNode.Create;
Switch1128.WhichChoice := 0;
Shape1129 := TShapeNode.Create;
Appearance1130 := TAppearanceNode.Create;
Material1131 := TMaterialNode.Create;
Material1131.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance1130.Material := Material1131;
{ .SetAppearance }
Shape1129.Appearance := Appearance1130;
Rectangle2D1132 := TRectangle2DNode.Create;
Rectangle2D1132.Size := Vector2(40,3);
IS1133 := TISNode.Create;
connect1134 := TconnectNode.Create;
connect1134.NodeField := 'size';
connect1134.ProtoField := 'size';
{ .AddConnect }
IS1133.Connect := connect1134;
{ .SetIS }
Rectangle2D1132.IS := IS1133;
{ .SetGeometry }
Shape1129.Geometry := Rectangle2D1132;
{ .AddChildren }
Switch1128.AddChildren([Shape1129]);
Shape1135 := TShapeNode.Create;
Appearance1136 := TAppearanceNode.Create;
Material1137 := TMaterialNode.Create;
Material1137.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance1136.Material := Material1137;
{ .SetAppearance }
Shape1135.Appearance := Appearance1136;
Rectangle2D1138 := TRectangle2DNode.Create;
Rectangle2D1138.Size := Vector2(40,3);
IS1139 := TISNode.Create;
connect1140 := TconnectNode.Create;
connect1140.NodeField := 'size';
connect1140.ProtoField := 'size';
{ .AddConnect }
IS1139.Connect := connect1140;
{ .SetIS }
Rectangle2D1138.IS := IS1139;
{ .SetGeometry }
Shape1135.Geometry := Rectangle2D1138;
{ .AddChildren }
Switch1128.AddChildren([Shape1135]);
{ .AddChildren }
Transform1127.AddChildren([Switch1128]);
{ .AddChildren }
Transform1108.AddChildren([Transform1127]);
{ .AddChildren }
Group1107.AddChildren([Transform1108]);
TimeTrigger1141 := TTimeTriggerNode.Create;
IS1142 := TISNode.Create;
connect1143 := TconnectNode.Create;
connect1143.NodeField := 'triggerTime';
connect1143.ProtoField := 'startTime';
{ .AddConnect }
IS1142.Connect := connect1143;
{ .SetIS }
TimeTrigger1141.IS := IS1142;
{ .AddChildren }
Group1107.AddChildren([TimeTrigger1141]);
TimeTrigger1144 := TTimeTriggerNode.Create;
IS1145 := TISNode.Create;
connect1146 := TconnectNode.Create;
connect1146.NodeField := 'triggerTime';
connect1146.ProtoField := 'stopTime';
{ .AddConnect }
IS1145.Connect := connect1146;
{ .SetIS }
TimeTrigger1144.IS := IS1145;
{ .AddChildren }
Group1107.AddChildren([TimeTrigger1144]);
BooleanFilter1147 := TBooleanFilterNode.Create;
IS1148 := TISNode.Create;
connect1149 := TconnectNode.Create;
connect1149.NodeField := 'inputTrue';
connect1149.ProtoField := 'enabled';
{ .AddConnect }
IS1148.Connect := connect1149;
{ .SetIS }
BooleanFilter1147.IS := IS1148;
{ .AddChildren }
Group1107.AddChildren([BooleanFilter1147]);
BooleanFilter1150 := TBooleanFilterNode.Create;
{ .AddChildren }
Group1107.AddChildren([BooleanFilter1150]);
BooleanSequencer1151 := TBooleanSequencerNode.Create;
BooleanSequencer1151.SetKey([0,1]);
BooleanSequencer1151.SetKeyValue(True,False);
{ .AddChildren }
Group1107.AddChildren([BooleanSequencer1151]);
IntegerSequencer1152 := TIntegerSequencerNode.Create;
IntegerSequencer1152.SetKey([0,1]);
IntegerSequencer1152.SetKeyValue([1,0]);
{ .AddChildren }
Group1107.AddChildren([IntegerSequencer1152]);
IntegerSequencer1153 := TIntegerSequencerNode.Create;
IntegerSequencer1153.SetKey([0,1]);
IntegerSequencer1153.SetKeyValue([0,0]);
IS1154 := TISNode.Create;
connect1155 := TconnectNode.Create;
connect1155.NodeField := 'next';
connect1155.ProtoField := 'untoggle';
{ .AddConnect }
IS1154.Connect := connect1155;
{ .SetIS }
IntegerSequencer1153.IS := IS1154;
{ .AddChildren }
Group1107.AddChildren([IntegerSequencer1153]);
Group1107.AddRoute(BooleanSequencer1151.EventValue_changed, BooleanFilter1147.EventSet_boolean);
{ .AddX3DRoute }
Group1107.AddRoute(BooleanFilter1147.FdInputtrue, TimeTrigger1141.EventSet_boolean);
{ .AddX3DRoute }
Group1107.AddRoute(BooleanSequencer1151.EventValue_changed, BooleanFilter1150.EventSet_boolean);
{ .AddX3DRoute }
Group1107.AddRoute(BooleanFilter1150.FdInputfalse, TimeTrigger1144.EventSet_boolean);
{ .AddX3DRoute }
Group1107.AddRoute(TouchSensor1111.FdIsactive, IntegerSequencer1152.FdNext);
{ .AddX3DRoute }
Group1107.AddRoute(IntegerSequencer1152.EventValue_changed, Switch1128.FdWhichchoice);
{ .AddX3DRoute }
Group1107.AddRoute(IntegerSequencer1153.EventValue_changed, Switch1128.FdWhichchoice);
{ .AddX3DRoute }
Group1107.AddRoute(TouchSensor1111.FdIsactive, BooleanSequencer1151.FdNext);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody1106.AddChildren([Group1107]);
{ .SetProtoBody }
ProtoDeclare1093.ProtoBody := ProtoBody1106;
{ .AddChildren }
Layer1091.AddChildren([ProtoDeclare1093]);
ProximitySensor1164 := TProximitySensorNode.Create;
ProximitySensor1164.Size := Vector3(50,50,50);
{ .AddChildren }
Layer1091.AddChildren([ProximitySensor1164]);
ProtoInstance1165 := TProtoInstanceNode.Create;
ProtoInstance1165.NameField := 'MenuItem';
fieldValue1166 := TfieldValueNode.Create;
fieldValue1166.NameField := 'translation';
fieldValue1166.Value := '65 63.4 0';
{ .AddFieldValue }
ProtoInstance1165.FieldValue := fieldValue1166;
fieldValue1167 := TfieldValueNode.Create;
fieldValue1167.NameField := 'textTranslation';
fieldValue1167.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1165.FieldValue := fieldValue1167;
fieldValue1168 := TfieldValueNode.Create;
fieldValue1168.NameField := 'description';
fieldValue1168.Value := 'Jin Blink';
{ .AddFieldValue }
ProtoInstance1165.FieldValue := fieldValue1168;
fieldValue1169 := TfieldValueNode.Create;
fieldValue1169.NameField := 'menuItemString';
fieldValue1169.Value := '\"JinBlink\"';
{ .AddFieldValue }
ProtoInstance1165.FieldValue := fieldValue1169;
fieldValue1170 := TfieldValueNode.Create;
fieldValue1170.NameField := 'size';
fieldValue1170.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1165.FieldValue := fieldValue1170;
fieldValue1171 := TfieldValueNode.Create;
fieldValue1171.NameField := 'fontSize';
fieldValue1171.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1165.FieldValue := fieldValue1171;
fieldValue1172 := TfieldValueNode.Create;
fieldValue1172.NameField := 'spacing';
fieldValue1172.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1165.FieldValue := fieldValue1172;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1165]);
Layer1091.AddRoute(TimeSensor54.EventFraction_changed, ScalarInterpolator55.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1165.FdStarttime, TimeSensor54.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1165.FdStoptime, TimeSensor54.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1165.FdEnabled, TimeSensor54.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1177 := TProtoInstanceNode.Create;
ProtoInstance1177.NameField := 'MenuItem';
fieldValue1178 := TfieldValueNode.Create;
fieldValue1178.NameField := 'translation';
fieldValue1178.Value := '65 60.4 0';
{ .AddFieldValue }
ProtoInstance1177.FieldValue := fieldValue1178;
fieldValue1179 := TfieldValueNode.Create;
fieldValue1179.NameField := 'textTranslation';
fieldValue1179.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1177.FieldValue := fieldValue1179;
fieldValue1180 := TfieldValueNode.Create;
fieldValue1180.NameField := 'description';
fieldValue1180.Value := 'Jin Brow Lowerer';
{ .AddFieldValue }
ProtoInstance1177.FieldValue := fieldValue1180;
fieldValue1181 := TfieldValueNode.Create;
fieldValue1181.NameField := 'menuItemString';
fieldValue1181.Value := '\"JinBrowLowerer\"';
{ .AddFieldValue }
ProtoInstance1177.FieldValue := fieldValue1181;
fieldValue1182 := TfieldValueNode.Create;
fieldValue1182.NameField := 'size';
fieldValue1182.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1177.FieldValue := fieldValue1182;
fieldValue1183 := TfieldValueNode.Create;
fieldValue1183.NameField := 'fontSize';
fieldValue1183.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1177.FieldValue := fieldValue1183;
fieldValue1184 := TfieldValueNode.Create;
fieldValue1184.NameField := 'spacing';
fieldValue1184.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1177.FieldValue := fieldValue1184;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1177]);
Layer1091.AddRoute(TimeSensor53.EventFraction_changed, ScalarInterpolator56.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1177.FdStarttime, TimeSensor53.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1177.FdStoptime, TimeSensor53.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1177.FdEnabled, TimeSensor53.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1189 := TProtoInstanceNode.Create;
ProtoInstance1189.NameField := 'MenuItem';
fieldValue1190 := TfieldValueNode.Create;
fieldValue1190.NameField := 'translation';
fieldValue1190.Value := '65 57.39999999999999 0';
{ .AddFieldValue }
ProtoInstance1189.FieldValue := fieldValue1190;
fieldValue1191 := TfieldValueNode.Create;
fieldValue1191.NameField := 'textTranslation';
fieldValue1191.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1189.FieldValue := fieldValue1191;
fieldValue1192 := TfieldValueNode.Create;
fieldValue1192.NameField := 'description';
fieldValue1192.Value := 'Jin Cheek Puffer';
{ .AddFieldValue }
ProtoInstance1189.FieldValue := fieldValue1192;
fieldValue1193 := TfieldValueNode.Create;
fieldValue1193.NameField := 'menuItemString';
fieldValue1193.Value := '\"JinCheekPuffer\"';
{ .AddFieldValue }
ProtoInstance1189.FieldValue := fieldValue1193;
fieldValue1194 := TfieldValueNode.Create;
fieldValue1194.NameField := 'size';
fieldValue1194.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1189.FieldValue := fieldValue1194;
fieldValue1195 := TfieldValueNode.Create;
fieldValue1195.NameField := 'fontSize';
fieldValue1195.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1189.FieldValue := fieldValue1195;
fieldValue1196 := TfieldValueNode.Create;
fieldValue1196.NameField := 'spacing';
fieldValue1196.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1189.FieldValue := fieldValue1196;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1189]);
Layer1091.AddRoute(TimeSensor52.EventFraction_changed, ScalarInterpolator57.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1189.FdStarttime, TimeSensor52.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1189.FdStoptime, TimeSensor52.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1189.FdEnabled, TimeSensor52.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1201 := TProtoInstanceNode.Create;
ProtoInstance1201.NameField := 'MenuItem';
fieldValue1202 := TfieldValueNode.Create;
fieldValue1202.NameField := 'translation';
fieldValue1202.Value := '65 54.39999999999999 0';
{ .AddFieldValue }
ProtoInstance1201.FieldValue := fieldValue1202;
fieldValue1203 := TfieldValueNode.Create;
fieldValue1203.NameField := 'textTranslation';
fieldValue1203.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1201.FieldValue := fieldValue1203;
fieldValue1204 := TfieldValueNode.Create;
fieldValue1204.NameField := 'description';
fieldValue1204.Value := 'Jin Cheek Raiser';
{ .AddFieldValue }
ProtoInstance1201.FieldValue := fieldValue1204;
fieldValue1205 := TfieldValueNode.Create;
fieldValue1205.NameField := 'menuItemString';
fieldValue1205.Value := '\"JinCheekRaiser\"';
{ .AddFieldValue }
ProtoInstance1201.FieldValue := fieldValue1205;
fieldValue1206 := TfieldValueNode.Create;
fieldValue1206.NameField := 'size';
fieldValue1206.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1201.FieldValue := fieldValue1206;
fieldValue1207 := TfieldValueNode.Create;
fieldValue1207.NameField := 'fontSize';
fieldValue1207.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1201.FieldValue := fieldValue1207;
fieldValue1208 := TfieldValueNode.Create;
fieldValue1208.NameField := 'spacing';
fieldValue1208.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1201.FieldValue := fieldValue1208;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1201]);
Layer1091.AddRoute(TimeSensor51.EventFraction_changed, ScalarInterpolator58.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1201.FdStarttime, TimeSensor51.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1201.FdStoptime, TimeSensor51.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1201.FdEnabled, TimeSensor51.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1213 := TProtoInstanceNode.Create;
ProtoInstance1213.NameField := 'MenuItem';
fieldValue1214 := TfieldValueNode.Create;
fieldValue1214.NameField := 'translation';
fieldValue1214.Value := '65 51.39999999999999 0';
{ .AddFieldValue }
ProtoInstance1213.FieldValue := fieldValue1214;
fieldValue1215 := TfieldValueNode.Create;
fieldValue1215.NameField := 'textTranslation';
fieldValue1215.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1213.FieldValue := fieldValue1215;
fieldValue1216 := TfieldValueNode.Create;
fieldValue1216.NameField := 'description';
fieldValue1216.Value := 'Jin Chin Raiser';
{ .AddFieldValue }
ProtoInstance1213.FieldValue := fieldValue1216;
fieldValue1217 := TfieldValueNode.Create;
fieldValue1217.NameField := 'menuItemString';
fieldValue1217.Value := '\"JinChinRaiser\"';
{ .AddFieldValue }
ProtoInstance1213.FieldValue := fieldValue1217;
fieldValue1218 := TfieldValueNode.Create;
fieldValue1218.NameField := 'size';
fieldValue1218.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1213.FieldValue := fieldValue1218;
fieldValue1219 := TfieldValueNode.Create;
fieldValue1219.NameField := 'fontSize';
fieldValue1219.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1213.FieldValue := fieldValue1219;
fieldValue1220 := TfieldValueNode.Create;
fieldValue1220.NameField := 'spacing';
fieldValue1220.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1213.FieldValue := fieldValue1220;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1213]);
Layer1091.AddRoute(TimeSensor50.EventFraction_changed, ScalarInterpolator59.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1213.FdStarttime, TimeSensor50.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1213.FdStoptime, TimeSensor50.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1213.FdEnabled, TimeSensor50.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1225 := TProtoInstanceNode.Create;
ProtoInstance1225.NameField := 'MenuItem';
fieldValue1226 := TfieldValueNode.Create;
fieldValue1226.NameField := 'translation';
fieldValue1226.Value := '65 48.39999999999999 0';
{ .AddFieldValue }
ProtoInstance1225.FieldValue := fieldValue1226;
fieldValue1227 := TfieldValueNode.Create;
fieldValue1227.NameField := 'textTranslation';
fieldValue1227.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1225.FieldValue := fieldValue1227;
fieldValue1228 := TfieldValueNode.Create;
fieldValue1228.NameField := 'description';
fieldValue1228.Value := 'Jin Dimpler';
{ .AddFieldValue }
ProtoInstance1225.FieldValue := fieldValue1228;
fieldValue1229 := TfieldValueNode.Create;
fieldValue1229.NameField := 'menuItemString';
fieldValue1229.Value := '\"JinDimpler\"';
{ .AddFieldValue }
ProtoInstance1225.FieldValue := fieldValue1229;
fieldValue1230 := TfieldValueNode.Create;
fieldValue1230.NameField := 'size';
fieldValue1230.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1225.FieldValue := fieldValue1230;
fieldValue1231 := TfieldValueNode.Create;
fieldValue1231.NameField := 'fontSize';
fieldValue1231.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1225.FieldValue := fieldValue1231;
fieldValue1232 := TfieldValueNode.Create;
fieldValue1232.NameField := 'spacing';
fieldValue1232.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1225.FieldValue := fieldValue1232;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1225]);
Layer1091.AddRoute(TimeSensor49.EventFraction_changed, ScalarInterpolator60.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1225.FdStarttime, TimeSensor49.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1225.FdStoptime, TimeSensor49.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1225.FdEnabled, TimeSensor49.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1237 := TProtoInstanceNode.Create;
ProtoInstance1237.NameField := 'MenuItem';
fieldValue1238 := TfieldValueNode.Create;
fieldValue1238.NameField := 'translation';
fieldValue1238.Value := '65 45.39999999999999 0';
{ .AddFieldValue }
ProtoInstance1237.FieldValue := fieldValue1238;
fieldValue1239 := TfieldValueNode.Create;
fieldValue1239.NameField := 'textTranslation';
fieldValue1239.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1237.FieldValue := fieldValue1239;
fieldValue1240 := TfieldValueNode.Create;
fieldValue1240.NameField := 'description';
fieldValue1240.Value := 'Jin Eyes Closed';
{ .AddFieldValue }
ProtoInstance1237.FieldValue := fieldValue1240;
fieldValue1241 := TfieldValueNode.Create;
fieldValue1241.NameField := 'menuItemString';
fieldValue1241.Value := '\"JinEyesClosed\"';
{ .AddFieldValue }
ProtoInstance1237.FieldValue := fieldValue1241;
fieldValue1242 := TfieldValueNode.Create;
fieldValue1242.NameField := 'size';
fieldValue1242.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1237.FieldValue := fieldValue1242;
fieldValue1243 := TfieldValueNode.Create;
fieldValue1243.NameField := 'fontSize';
fieldValue1243.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1237.FieldValue := fieldValue1243;
fieldValue1244 := TfieldValueNode.Create;
fieldValue1244.NameField := 'spacing';
fieldValue1244.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1237.FieldValue := fieldValue1244;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1237]);
Layer1091.AddRoute(TimeSensor48.EventFraction_changed, ScalarInterpolator61.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1237.FdStarttime, TimeSensor48.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1237.FdStoptime, TimeSensor48.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1237.FdEnabled, TimeSensor48.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1249 := TProtoInstanceNode.Create;
ProtoInstance1249.NameField := 'MenuItem';
fieldValue1250 := TfieldValueNode.Create;
fieldValue1250.NameField := 'translation';
fieldValue1250.Value := '65 42.39999999999999 0';
{ .AddFieldValue }
ProtoInstance1249.FieldValue := fieldValue1250;
fieldValue1251 := TfieldValueNode.Create;
fieldValue1251.NameField := 'textTranslation';
fieldValue1251.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1249.FieldValue := fieldValue1251;
fieldValue1252 := TfieldValueNode.Create;
fieldValue1252.NameField := 'description';
fieldValue1252.Value := 'Jin Inner Brow Raiser';
{ .AddFieldValue }
ProtoInstance1249.FieldValue := fieldValue1252;
fieldValue1253 := TfieldValueNode.Create;
fieldValue1253.NameField := 'menuItemString';
fieldValue1253.Value := '\"JinInnerBrowRaiser\"';
{ .AddFieldValue }
ProtoInstance1249.FieldValue := fieldValue1253;
fieldValue1254 := TfieldValueNode.Create;
fieldValue1254.NameField := 'size';
fieldValue1254.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1249.FieldValue := fieldValue1254;
fieldValue1255 := TfieldValueNode.Create;
fieldValue1255.NameField := 'fontSize';
fieldValue1255.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1249.FieldValue := fieldValue1255;
fieldValue1256 := TfieldValueNode.Create;
fieldValue1256.NameField := 'spacing';
fieldValue1256.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1249.FieldValue := fieldValue1256;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1249]);
Layer1091.AddRoute(TimeSensor47.EventFraction_changed, ScalarInterpolator62.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1249.FdStarttime, TimeSensor47.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1249.FdStoptime, TimeSensor47.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1249.FdEnabled, TimeSensor47.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1261 := TProtoInstanceNode.Create;
ProtoInstance1261.NameField := 'MenuItem';
fieldValue1262 := TfieldValueNode.Create;
fieldValue1262.NameField := 'translation';
fieldValue1262.Value := '65 39.39999999999999 0';
{ .AddFieldValue }
ProtoInstance1261.FieldValue := fieldValue1262;
fieldValue1263 := TfieldValueNode.Create;
fieldValue1263.NameField := 'textTranslation';
fieldValue1263.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1261.FieldValue := fieldValue1263;
fieldValue1264 := TfieldValueNode.Create;
fieldValue1264.NameField := 'description';
fieldValue1264.Value := 'Jin Jaw Drop';
{ .AddFieldValue }
ProtoInstance1261.FieldValue := fieldValue1264;
fieldValue1265 := TfieldValueNode.Create;
fieldValue1265.NameField := 'menuItemString';
fieldValue1265.Value := '\"JinJawDrop\"';
{ .AddFieldValue }
ProtoInstance1261.FieldValue := fieldValue1265;
fieldValue1266 := TfieldValueNode.Create;
fieldValue1266.NameField := 'size';
fieldValue1266.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1261.FieldValue := fieldValue1266;
fieldValue1267 := TfieldValueNode.Create;
fieldValue1267.NameField := 'fontSize';
fieldValue1267.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1261.FieldValue := fieldValue1267;
fieldValue1268 := TfieldValueNode.Create;
fieldValue1268.NameField := 'spacing';
fieldValue1268.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1261.FieldValue := fieldValue1268;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1261]);
Layer1091.AddRoute(TimeSensor46.EventFraction_changed, ScalarInterpolator63.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1261.FdStarttime, TimeSensor46.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1261.FdStoptime, TimeSensor46.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1261.FdEnabled, TimeSensor46.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1273 := TProtoInstanceNode.Create;
ProtoInstance1273.NameField := 'MenuItem';
fieldValue1274 := TfieldValueNode.Create;
fieldValue1274.NameField := 'translation';
fieldValue1274.Value := '65 36.39999999999999 0';
{ .AddFieldValue }
ProtoInstance1273.FieldValue := fieldValue1274;
fieldValue1275 := TfieldValueNode.Create;
fieldValue1275.NameField := 'textTranslation';
fieldValue1275.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1273.FieldValue := fieldValue1275;
fieldValue1276 := TfieldValueNode.Create;
fieldValue1276.NameField := 'description';
fieldValue1276.Value := 'Jin Lid Droop';
{ .AddFieldValue }
ProtoInstance1273.FieldValue := fieldValue1276;
fieldValue1277 := TfieldValueNode.Create;
fieldValue1277.NameField := 'menuItemString';
fieldValue1277.Value := '\"JinLidDroop\"';
{ .AddFieldValue }
ProtoInstance1273.FieldValue := fieldValue1277;
fieldValue1278 := TfieldValueNode.Create;
fieldValue1278.NameField := 'size';
fieldValue1278.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1273.FieldValue := fieldValue1278;
fieldValue1279 := TfieldValueNode.Create;
fieldValue1279.NameField := 'fontSize';
fieldValue1279.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1273.FieldValue := fieldValue1279;
fieldValue1280 := TfieldValueNode.Create;
fieldValue1280.NameField := 'spacing';
fieldValue1280.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1273.FieldValue := fieldValue1280;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1273]);
Layer1091.AddRoute(TimeSensor45.EventFraction_changed, ScalarInterpolator64.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1273.FdStarttime, TimeSensor45.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1273.FdStoptime, TimeSensor45.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1273.FdEnabled, TimeSensor45.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1285 := TProtoInstanceNode.Create;
ProtoInstance1285.NameField := 'MenuItem';
fieldValue1286 := TfieldValueNode.Create;
fieldValue1286.NameField := 'translation';
fieldValue1286.Value := '65 33.39999999999999 0';
{ .AddFieldValue }
ProtoInstance1285.FieldValue := fieldValue1286;
fieldValue1287 := TfieldValueNode.Create;
fieldValue1287.NameField := 'textTranslation';
fieldValue1287.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1285.FieldValue := fieldValue1287;
fieldValue1288 := TfieldValueNode.Create;
fieldValue1288.NameField := 'description';
fieldValue1288.Value := 'Jin Lid Tightener';
{ .AddFieldValue }
ProtoInstance1285.FieldValue := fieldValue1288;
fieldValue1289 := TfieldValueNode.Create;
fieldValue1289.NameField := 'menuItemString';
fieldValue1289.Value := '\"JinLidTightener\"';
{ .AddFieldValue }
ProtoInstance1285.FieldValue := fieldValue1289;
fieldValue1290 := TfieldValueNode.Create;
fieldValue1290.NameField := 'size';
fieldValue1290.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1285.FieldValue := fieldValue1290;
fieldValue1291 := TfieldValueNode.Create;
fieldValue1291.NameField := 'fontSize';
fieldValue1291.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1285.FieldValue := fieldValue1291;
fieldValue1292 := TfieldValueNode.Create;
fieldValue1292.NameField := 'spacing';
fieldValue1292.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1285.FieldValue := fieldValue1292;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1285]);
Layer1091.AddRoute(TimeSensor44.EventFraction_changed, ScalarInterpolator65.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1285.FdStarttime, TimeSensor44.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1285.FdStoptime, TimeSensor44.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1285.FdEnabled, TimeSensor44.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1297 := TProtoInstanceNode.Create;
ProtoInstance1297.NameField := 'MenuItem';
fieldValue1298 := TfieldValueNode.Create;
fieldValue1298.NameField := 'translation';
fieldValue1298.Value := '65 30.399999999999995 0';
{ .AddFieldValue }
ProtoInstance1297.FieldValue := fieldValue1298;
fieldValue1299 := TfieldValueNode.Create;
fieldValue1299.NameField := 'textTranslation';
fieldValue1299.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1297.FieldValue := fieldValue1299;
fieldValue1300 := TfieldValueNode.Create;
fieldValue1300.NameField := 'description';
fieldValue1300.Value := 'Jin Lip Corner Depressor';
{ .AddFieldValue }
ProtoInstance1297.FieldValue := fieldValue1300;
fieldValue1301 := TfieldValueNode.Create;
fieldValue1301.NameField := 'menuItemString';
fieldValue1301.Value := '\"JinLipCornerDepressor\"';
{ .AddFieldValue }
ProtoInstance1297.FieldValue := fieldValue1301;
fieldValue1302 := TfieldValueNode.Create;
fieldValue1302.NameField := 'size';
fieldValue1302.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1297.FieldValue := fieldValue1302;
fieldValue1303 := TfieldValueNode.Create;
fieldValue1303.NameField := 'fontSize';
fieldValue1303.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1297.FieldValue := fieldValue1303;
fieldValue1304 := TfieldValueNode.Create;
fieldValue1304.NameField := 'spacing';
fieldValue1304.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1297.FieldValue := fieldValue1304;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1297]);
Layer1091.AddRoute(TimeSensor43.EventFraction_changed, ScalarInterpolator66.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1297.FdStarttime, TimeSensor43.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1297.FdStoptime, TimeSensor43.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1297.FdEnabled, TimeSensor43.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1309 := TProtoInstanceNode.Create;
ProtoInstance1309.NameField := 'MenuItem';
fieldValue1310 := TfieldValueNode.Create;
fieldValue1310.NameField := 'translation';
fieldValue1310.Value := '65 27.399999999999995 0';
{ .AddFieldValue }
ProtoInstance1309.FieldValue := fieldValue1310;
fieldValue1311 := TfieldValueNode.Create;
fieldValue1311.NameField := 'textTranslation';
fieldValue1311.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1309.FieldValue := fieldValue1311;
fieldValue1312 := TfieldValueNode.Create;
fieldValue1312.NameField := 'description';
fieldValue1312.Value := 'Jin Lip Corner Puller';
{ .AddFieldValue }
ProtoInstance1309.FieldValue := fieldValue1312;
fieldValue1313 := TfieldValueNode.Create;
fieldValue1313.NameField := 'menuItemString';
fieldValue1313.Value := '\"JinLipCornerPuller\"';
{ .AddFieldValue }
ProtoInstance1309.FieldValue := fieldValue1313;
fieldValue1314 := TfieldValueNode.Create;
fieldValue1314.NameField := 'size';
fieldValue1314.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1309.FieldValue := fieldValue1314;
fieldValue1315 := TfieldValueNode.Create;
fieldValue1315.NameField := 'fontSize';
fieldValue1315.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1309.FieldValue := fieldValue1315;
fieldValue1316 := TfieldValueNode.Create;
fieldValue1316.NameField := 'spacing';
fieldValue1316.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1309.FieldValue := fieldValue1316;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1309]);
Layer1091.AddRoute(TimeSensor42.EventFraction_changed, ScalarInterpolator67.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1309.FdStarttime, TimeSensor42.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1309.FdStoptime, TimeSensor42.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1309.FdEnabled, TimeSensor42.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1321 := TProtoInstanceNode.Create;
ProtoInstance1321.NameField := 'MenuItem';
fieldValue1322 := TfieldValueNode.Create;
fieldValue1322.NameField := 'translation';
fieldValue1322.Value := '65 24.399999999999995 0';
{ .AddFieldValue }
ProtoInstance1321.FieldValue := fieldValue1322;
fieldValue1323 := TfieldValueNode.Create;
fieldValue1323.NameField := 'textTranslation';
fieldValue1323.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1321.FieldValue := fieldValue1323;
fieldValue1324 := TfieldValueNode.Create;
fieldValue1324.NameField := 'description';
fieldValue1324.Value := 'Jin Lip Funneler';
{ .AddFieldValue }
ProtoInstance1321.FieldValue := fieldValue1324;
fieldValue1325 := TfieldValueNode.Create;
fieldValue1325.NameField := 'menuItemString';
fieldValue1325.Value := '\"JinLipFunneler\"';
{ .AddFieldValue }
ProtoInstance1321.FieldValue := fieldValue1325;
fieldValue1326 := TfieldValueNode.Create;
fieldValue1326.NameField := 'size';
fieldValue1326.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1321.FieldValue := fieldValue1326;
fieldValue1327 := TfieldValueNode.Create;
fieldValue1327.NameField := 'fontSize';
fieldValue1327.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1321.FieldValue := fieldValue1327;
fieldValue1328 := TfieldValueNode.Create;
fieldValue1328.NameField := 'spacing';
fieldValue1328.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1321.FieldValue := fieldValue1328;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1321]);
Layer1091.AddRoute(TimeSensor41.EventFraction_changed, ScalarInterpolator68.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1321.FdStarttime, TimeSensor41.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1321.FdStoptime, TimeSensor41.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1321.FdEnabled, TimeSensor41.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1333 := TProtoInstanceNode.Create;
ProtoInstance1333.NameField := 'MenuItem';
fieldValue1334 := TfieldValueNode.Create;
fieldValue1334.NameField := 'translation';
fieldValue1334.Value := '65 21.399999999999995 0';
{ .AddFieldValue }
ProtoInstance1333.FieldValue := fieldValue1334;
fieldValue1335 := TfieldValueNode.Create;
fieldValue1335.NameField := 'textTranslation';
fieldValue1335.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1333.FieldValue := fieldValue1335;
fieldValue1336 := TfieldValueNode.Create;
fieldValue1336.NameField := 'description';
fieldValue1336.Value := 'Jin Lip Pressor';
{ .AddFieldValue }
ProtoInstance1333.FieldValue := fieldValue1336;
fieldValue1337 := TfieldValueNode.Create;
fieldValue1337.NameField := 'menuItemString';
fieldValue1337.Value := '\"JinLipPressor\"';
{ .AddFieldValue }
ProtoInstance1333.FieldValue := fieldValue1337;
fieldValue1338 := TfieldValueNode.Create;
fieldValue1338.NameField := 'size';
fieldValue1338.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1333.FieldValue := fieldValue1338;
fieldValue1339 := TfieldValueNode.Create;
fieldValue1339.NameField := 'fontSize';
fieldValue1339.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1333.FieldValue := fieldValue1339;
fieldValue1340 := TfieldValueNode.Create;
fieldValue1340.NameField := 'spacing';
fieldValue1340.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1333.FieldValue := fieldValue1340;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1333]);
Layer1091.AddRoute(TimeSensor40.EventFraction_changed, ScalarInterpolator69.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1333.FdStarttime, TimeSensor40.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1333.FdStoptime, TimeSensor40.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1333.FdEnabled, TimeSensor40.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1345 := TProtoInstanceNode.Create;
ProtoInstance1345.NameField := 'MenuItem';
fieldValue1346 := TfieldValueNode.Create;
fieldValue1346.NameField := 'translation';
fieldValue1346.Value := '65 18.4 0';
{ .AddFieldValue }
ProtoInstance1345.FieldValue := fieldValue1346;
fieldValue1347 := TfieldValueNode.Create;
fieldValue1347.NameField := 'textTranslation';
fieldValue1347.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1345.FieldValue := fieldValue1347;
fieldValue1348 := TfieldValueNode.Create;
fieldValue1348.NameField := 'description';
fieldValue1348.Value := 'Jin Lip Puckerer';
{ .AddFieldValue }
ProtoInstance1345.FieldValue := fieldValue1348;
fieldValue1349 := TfieldValueNode.Create;
fieldValue1349.NameField := 'menuItemString';
fieldValue1349.Value := '\"JinLipPuckerer\"';
{ .AddFieldValue }
ProtoInstance1345.FieldValue := fieldValue1349;
fieldValue1350 := TfieldValueNode.Create;
fieldValue1350.NameField := 'size';
fieldValue1350.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1345.FieldValue := fieldValue1350;
fieldValue1351 := TfieldValueNode.Create;
fieldValue1351.NameField := 'fontSize';
fieldValue1351.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1345.FieldValue := fieldValue1351;
fieldValue1352 := TfieldValueNode.Create;
fieldValue1352.NameField := 'spacing';
fieldValue1352.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1345.FieldValue := fieldValue1352;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1345]);
Layer1091.AddRoute(TimeSensor39.EventFraction_changed, ScalarInterpolator70.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1345.FdStarttime, TimeSensor39.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1345.FdStoptime, TimeSensor39.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1345.FdEnabled, TimeSensor39.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1357 := TProtoInstanceNode.Create;
ProtoInstance1357.NameField := 'MenuItem';
fieldValue1358 := TfieldValueNode.Create;
fieldValue1358.NameField := 'translation';
fieldValue1358.Value := '65 15.399999999999997 0';
{ .AddFieldValue }
ProtoInstance1357.FieldValue := fieldValue1358;
fieldValue1359 := TfieldValueNode.Create;
fieldValue1359.NameField := 'textTranslation';
fieldValue1359.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1357.FieldValue := fieldValue1359;
fieldValue1360 := TfieldValueNode.Create;
fieldValue1360.NameField := 'description';
fieldValue1360.Value := 'Jin Lips Part';
{ .AddFieldValue }
ProtoInstance1357.FieldValue := fieldValue1360;
fieldValue1361 := TfieldValueNode.Create;
fieldValue1361.NameField := 'menuItemString';
fieldValue1361.Value := '\"JinLipsPart\"';
{ .AddFieldValue }
ProtoInstance1357.FieldValue := fieldValue1361;
fieldValue1362 := TfieldValueNode.Create;
fieldValue1362.NameField := 'size';
fieldValue1362.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1357.FieldValue := fieldValue1362;
fieldValue1363 := TfieldValueNode.Create;
fieldValue1363.NameField := 'fontSize';
fieldValue1363.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1357.FieldValue := fieldValue1363;
fieldValue1364 := TfieldValueNode.Create;
fieldValue1364.NameField := 'spacing';
fieldValue1364.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1357.FieldValue := fieldValue1364;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1357]);
Layer1091.AddRoute(TimeSensor38.EventFraction_changed, ScalarInterpolator71.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1357.FdStarttime, TimeSensor38.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1357.FdStoptime, TimeSensor38.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1357.FdEnabled, TimeSensor38.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1369 := TProtoInstanceNode.Create;
ProtoInstance1369.NameField := 'MenuItem';
fieldValue1370 := TfieldValueNode.Create;
fieldValue1370.NameField := 'translation';
fieldValue1370.Value := '65 12.399999999999999 0';
{ .AddFieldValue }
ProtoInstance1369.FieldValue := fieldValue1370;
fieldValue1371 := TfieldValueNode.Create;
fieldValue1371.NameField := 'textTranslation';
fieldValue1371.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1369.FieldValue := fieldValue1371;
fieldValue1372 := TfieldValueNode.Create;
fieldValue1372.NameField := 'description';
fieldValue1372.Value := 'Jin Lip Stretcher';
{ .AddFieldValue }
ProtoInstance1369.FieldValue := fieldValue1372;
fieldValue1373 := TfieldValueNode.Create;
fieldValue1373.NameField := 'menuItemString';
fieldValue1373.Value := '\"JinLipStretcher\"';
{ .AddFieldValue }
ProtoInstance1369.FieldValue := fieldValue1373;
fieldValue1374 := TfieldValueNode.Create;
fieldValue1374.NameField := 'size';
fieldValue1374.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1369.FieldValue := fieldValue1374;
fieldValue1375 := TfieldValueNode.Create;
fieldValue1375.NameField := 'fontSize';
fieldValue1375.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1369.FieldValue := fieldValue1375;
fieldValue1376 := TfieldValueNode.Create;
fieldValue1376.NameField := 'spacing';
fieldValue1376.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1369.FieldValue := fieldValue1376;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1369]);
Layer1091.AddRoute(TimeSensor37.EventFraction_changed, ScalarInterpolator72.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1369.FdStarttime, TimeSensor37.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1369.FdStoptime, TimeSensor37.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1369.FdEnabled, TimeSensor37.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1381 := TProtoInstanceNode.Create;
ProtoInstance1381.NameField := 'MenuItem';
fieldValue1382 := TfieldValueNode.Create;
fieldValue1382.NameField := 'translation';
fieldValue1382.Value := '65 9.399999999999999 0';
{ .AddFieldValue }
ProtoInstance1381.FieldValue := fieldValue1382;
fieldValue1383 := TfieldValueNode.Create;
fieldValue1383.NameField := 'textTranslation';
fieldValue1383.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1381.FieldValue := fieldValue1383;
fieldValue1384 := TfieldValueNode.Create;
fieldValue1384.NameField := 'description';
fieldValue1384.Value := 'Jin Lip Suck';
{ .AddFieldValue }
ProtoInstance1381.FieldValue := fieldValue1384;
fieldValue1385 := TfieldValueNode.Create;
fieldValue1385.NameField := 'menuItemString';
fieldValue1385.Value := '\"JinLipSuck\"';
{ .AddFieldValue }
ProtoInstance1381.FieldValue := fieldValue1385;
fieldValue1386 := TfieldValueNode.Create;
fieldValue1386.NameField := 'size';
fieldValue1386.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1381.FieldValue := fieldValue1386;
fieldValue1387 := TfieldValueNode.Create;
fieldValue1387.NameField := 'fontSize';
fieldValue1387.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1381.FieldValue := fieldValue1387;
fieldValue1388 := TfieldValueNode.Create;
fieldValue1388.NameField := 'spacing';
fieldValue1388.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1381.FieldValue := fieldValue1388;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1381]);
Layer1091.AddRoute(TimeSensor36.EventFraction_changed, ScalarInterpolator73.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1381.FdStarttime, TimeSensor36.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1381.FdStoptime, TimeSensor36.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1381.FdEnabled, TimeSensor36.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1393 := TProtoInstanceNode.Create;
ProtoInstance1393.NameField := 'MenuItem';
fieldValue1394 := TfieldValueNode.Create;
fieldValue1394.NameField := 'translation';
fieldValue1394.Value := '65 6.399999999999999 0';
{ .AddFieldValue }
ProtoInstance1393.FieldValue := fieldValue1394;
fieldValue1395 := TfieldValueNode.Create;
fieldValue1395.NameField := 'textTranslation';
fieldValue1395.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1393.FieldValue := fieldValue1395;
fieldValue1396 := TfieldValueNode.Create;
fieldValue1396.NameField := 'description';
fieldValue1396.Value := 'Jin Lip Tightener';
{ .AddFieldValue }
ProtoInstance1393.FieldValue := fieldValue1396;
fieldValue1397 := TfieldValueNode.Create;
fieldValue1397.NameField := 'menuItemString';
fieldValue1397.Value := '\"JinLipTightener\"';
{ .AddFieldValue }
ProtoInstance1393.FieldValue := fieldValue1397;
fieldValue1398 := TfieldValueNode.Create;
fieldValue1398.NameField := 'size';
fieldValue1398.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1393.FieldValue := fieldValue1398;
fieldValue1399 := TfieldValueNode.Create;
fieldValue1399.NameField := 'fontSize';
fieldValue1399.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1393.FieldValue := fieldValue1399;
fieldValue1400 := TfieldValueNode.Create;
fieldValue1400.NameField := 'spacing';
fieldValue1400.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1393.FieldValue := fieldValue1400;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1393]);
Layer1091.AddRoute(TimeSensor35.EventFraction_changed, ScalarInterpolator74.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1393.FdStarttime, TimeSensor35.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1393.FdStoptime, TimeSensor35.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1393.FdEnabled, TimeSensor35.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1405 := TProtoInstanceNode.Create;
ProtoInstance1405.NameField := 'MenuItem';
fieldValue1406 := TfieldValueNode.Create;
fieldValue1406.NameField := 'translation';
fieldValue1406.Value := '65 3.399999999999995 0';
{ .AddFieldValue }
ProtoInstance1405.FieldValue := fieldValue1406;
fieldValue1407 := TfieldValueNode.Create;
fieldValue1407.NameField := 'textTranslation';
fieldValue1407.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1405.FieldValue := fieldValue1407;
fieldValue1408 := TfieldValueNode.Create;
fieldValue1408.NameField := 'description';
fieldValue1408.Value := 'Jin Lower Lip Depressor';
{ .AddFieldValue }
ProtoInstance1405.FieldValue := fieldValue1408;
fieldValue1409 := TfieldValueNode.Create;
fieldValue1409.NameField := 'menuItemString';
fieldValue1409.Value := '\"JinLowerLipDepressor\"';
{ .AddFieldValue }
ProtoInstance1405.FieldValue := fieldValue1409;
fieldValue1410 := TfieldValueNode.Create;
fieldValue1410.NameField := 'size';
fieldValue1410.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1405.FieldValue := fieldValue1410;
fieldValue1411 := TfieldValueNode.Create;
fieldValue1411.NameField := 'fontSize';
fieldValue1411.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1405.FieldValue := fieldValue1411;
fieldValue1412 := TfieldValueNode.Create;
fieldValue1412.NameField := 'spacing';
fieldValue1412.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1405.FieldValue := fieldValue1412;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1405]);
Layer1091.AddRoute(TimeSensor34.EventFraction_changed, ScalarInterpolator75.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1405.FdStarttime, TimeSensor34.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1405.FdStoptime, TimeSensor34.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1405.FdEnabled, TimeSensor34.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1417 := TProtoInstanceNode.Create;
ProtoInstance1417.NameField := 'MenuItem';
fieldValue1418 := TfieldValueNode.Create;
fieldValue1418.NameField := 'translation';
fieldValue1418.Value := '65 0.399999999999995 0';
{ .AddFieldValue }
ProtoInstance1417.FieldValue := fieldValue1418;
fieldValue1419 := TfieldValueNode.Create;
fieldValue1419.NameField := 'textTranslation';
fieldValue1419.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1417.FieldValue := fieldValue1419;
fieldValue1420 := TfieldValueNode.Create;
fieldValue1420.NameField := 'description';
fieldValue1420.Value := 'Jin Mouth Stretch';
{ .AddFieldValue }
ProtoInstance1417.FieldValue := fieldValue1420;
fieldValue1421 := TfieldValueNode.Create;
fieldValue1421.NameField := 'menuItemString';
fieldValue1421.Value := '\"JinMouthStretch\"';
{ .AddFieldValue }
ProtoInstance1417.FieldValue := fieldValue1421;
fieldValue1422 := TfieldValueNode.Create;
fieldValue1422.NameField := 'size';
fieldValue1422.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1417.FieldValue := fieldValue1422;
fieldValue1423 := TfieldValueNode.Create;
fieldValue1423.NameField := 'fontSize';
fieldValue1423.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1417.FieldValue := fieldValue1423;
fieldValue1424 := TfieldValueNode.Create;
fieldValue1424.NameField := 'spacing';
fieldValue1424.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1417.FieldValue := fieldValue1424;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1417]);
Layer1091.AddRoute(TimeSensor33.EventFraction_changed, ScalarInterpolator76.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1417.FdStarttime, TimeSensor33.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1417.FdStoptime, TimeSensor33.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1417.FdEnabled, TimeSensor33.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1429 := TProtoInstanceNode.Create;
ProtoInstance1429.NameField := 'MenuItem';
fieldValue1430 := TfieldValueNode.Create;
fieldValue1430.NameField := 'translation';
fieldValue1430.Value := '65 -2.6000000000000085 0';
{ .AddFieldValue }
ProtoInstance1429.FieldValue := fieldValue1430;
fieldValue1431 := TfieldValueNode.Create;
fieldValue1431.NameField := 'textTranslation';
fieldValue1431.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1429.FieldValue := fieldValue1431;
fieldValue1432 := TfieldValueNode.Create;
fieldValue1432.NameField := 'description';
fieldValue1432.Value := 'Jin Nasolabial Deepener';
{ .AddFieldValue }
ProtoInstance1429.FieldValue := fieldValue1432;
fieldValue1433 := TfieldValueNode.Create;
fieldValue1433.NameField := 'menuItemString';
fieldValue1433.Value := '\"JinNasolabialDeepener\"';
{ .AddFieldValue }
ProtoInstance1429.FieldValue := fieldValue1433;
fieldValue1434 := TfieldValueNode.Create;
fieldValue1434.NameField := 'size';
fieldValue1434.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1429.FieldValue := fieldValue1434;
fieldValue1435 := TfieldValueNode.Create;
fieldValue1435.NameField := 'fontSize';
fieldValue1435.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1429.FieldValue := fieldValue1435;
fieldValue1436 := TfieldValueNode.Create;
fieldValue1436.NameField := 'spacing';
fieldValue1436.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1429.FieldValue := fieldValue1436;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1429]);
Layer1091.AddRoute(TimeSensor32.EventFraction_changed, ScalarInterpolator77.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1429.FdStarttime, TimeSensor32.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1429.FdStoptime, TimeSensor32.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1429.FdEnabled, TimeSensor32.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1441 := TProtoInstanceNode.Create;
ProtoInstance1441.NameField := 'MenuItem';
fieldValue1442 := TfieldValueNode.Create;
fieldValue1442.NameField := 'translation';
fieldValue1442.Value := '65 -5.6000000000000085 0';
{ .AddFieldValue }
ProtoInstance1441.FieldValue := fieldValue1442;
fieldValue1443 := TfieldValueNode.Create;
fieldValue1443.NameField := 'textTranslation';
fieldValue1443.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1441.FieldValue := fieldValue1443;
fieldValue1444 := TfieldValueNode.Create;
fieldValue1444.NameField := 'description';
fieldValue1444.Value := 'Jin Nose Wrinkler';
{ .AddFieldValue }
ProtoInstance1441.FieldValue := fieldValue1444;
fieldValue1445 := TfieldValueNode.Create;
fieldValue1445.NameField := 'menuItemString';
fieldValue1445.Value := '\"JinNoseWrinkler\"';
{ .AddFieldValue }
ProtoInstance1441.FieldValue := fieldValue1445;
fieldValue1446 := TfieldValueNode.Create;
fieldValue1446.NameField := 'size';
fieldValue1446.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1441.FieldValue := fieldValue1446;
fieldValue1447 := TfieldValueNode.Create;
fieldValue1447.NameField := 'fontSize';
fieldValue1447.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1441.FieldValue := fieldValue1447;
fieldValue1448 := TfieldValueNode.Create;
fieldValue1448.NameField := 'spacing';
fieldValue1448.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1441.FieldValue := fieldValue1448;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1441]);
Layer1091.AddRoute(TimeSensor31.EventFraction_changed, ScalarInterpolator78.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1441.FdStarttime, TimeSensor31.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1441.FdStoptime, TimeSensor31.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1441.FdEnabled, TimeSensor31.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1453 := TProtoInstanceNode.Create;
ProtoInstance1453.NameField := 'MenuItem';
fieldValue1454 := TfieldValueNode.Create;
fieldValue1454.NameField := 'translation';
fieldValue1454.Value := '65 -8.600000000000009 0';
{ .AddFieldValue }
ProtoInstance1453.FieldValue := fieldValue1454;
fieldValue1455 := TfieldValueNode.Create;
fieldValue1455.NameField := 'textTranslation';
fieldValue1455.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1453.FieldValue := fieldValue1455;
fieldValue1456 := TfieldValueNode.Create;
fieldValue1456.NameField := 'description';
fieldValue1456.Value := 'Jin Outer Brow Raiser';
{ .AddFieldValue }
ProtoInstance1453.FieldValue := fieldValue1456;
fieldValue1457 := TfieldValueNode.Create;
fieldValue1457.NameField := 'menuItemString';
fieldValue1457.Value := '\"JinOuterBrowRaiser\"';
{ .AddFieldValue }
ProtoInstance1453.FieldValue := fieldValue1457;
fieldValue1458 := TfieldValueNode.Create;
fieldValue1458.NameField := 'size';
fieldValue1458.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1453.FieldValue := fieldValue1458;
fieldValue1459 := TfieldValueNode.Create;
fieldValue1459.NameField := 'fontSize';
fieldValue1459.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1453.FieldValue := fieldValue1459;
fieldValue1460 := TfieldValueNode.Create;
fieldValue1460.NameField := 'spacing';
fieldValue1460.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1453.FieldValue := fieldValue1460;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1453]);
Layer1091.AddRoute(TimeSensor30.EventFraction_changed, ScalarInterpolator79.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1453.FdStarttime, TimeSensor30.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1453.FdStoptime, TimeSensor30.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1453.FdEnabled, TimeSensor30.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1465 := TProtoInstanceNode.Create;
ProtoInstance1465.NameField := 'MenuItem';
fieldValue1466 := TfieldValueNode.Create;
fieldValue1466.NameField := 'translation';
fieldValue1466.Value := '65 -11.600000000000009 0';
{ .AddFieldValue }
ProtoInstance1465.FieldValue := fieldValue1466;
fieldValue1467 := TfieldValueNode.Create;
fieldValue1467.NameField := 'textTranslation';
fieldValue1467.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1465.FieldValue := fieldValue1467;
fieldValue1468 := TfieldValueNode.Create;
fieldValue1468.NameField := 'description';
fieldValue1468.Value := 'Jin Slit';
{ .AddFieldValue }
ProtoInstance1465.FieldValue := fieldValue1468;
fieldValue1469 := TfieldValueNode.Create;
fieldValue1469.NameField := 'menuItemString';
fieldValue1469.Value := '\"JinSlit\"';
{ .AddFieldValue }
ProtoInstance1465.FieldValue := fieldValue1469;
fieldValue1470 := TfieldValueNode.Create;
fieldValue1470.NameField := 'size';
fieldValue1470.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1465.FieldValue := fieldValue1470;
fieldValue1471 := TfieldValueNode.Create;
fieldValue1471.NameField := 'fontSize';
fieldValue1471.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1465.FieldValue := fieldValue1471;
fieldValue1472 := TfieldValueNode.Create;
fieldValue1472.NameField := 'spacing';
fieldValue1472.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1465.FieldValue := fieldValue1472;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1465]);
Layer1091.AddRoute(TimeSensor29.EventFraction_changed, ScalarInterpolator80.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1465.FdStarttime, TimeSensor29.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1465.FdStoptime, TimeSensor29.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1465.FdEnabled, TimeSensor29.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1477 := TProtoInstanceNode.Create;
ProtoInstance1477.NameField := 'MenuItem';
fieldValue1478 := TfieldValueNode.Create;
fieldValue1478.NameField := 'translation';
fieldValue1478.Value := '65 -14.600000000000001 0';
{ .AddFieldValue }
ProtoInstance1477.FieldValue := fieldValue1478;
fieldValue1479 := TfieldValueNode.Create;
fieldValue1479.NameField := 'textTranslation';
fieldValue1479.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1477.FieldValue := fieldValue1479;
fieldValue1480 := TfieldValueNode.Create;
fieldValue1480.NameField := 'description';
fieldValue1480.Value := 'Jin Squint';
{ .AddFieldValue }
ProtoInstance1477.FieldValue := fieldValue1480;
fieldValue1481 := TfieldValueNode.Create;
fieldValue1481.NameField := 'menuItemString';
fieldValue1481.Value := '\"JinSquint\"';
{ .AddFieldValue }
ProtoInstance1477.FieldValue := fieldValue1481;
fieldValue1482 := TfieldValueNode.Create;
fieldValue1482.NameField := 'size';
fieldValue1482.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1477.FieldValue := fieldValue1482;
fieldValue1483 := TfieldValueNode.Create;
fieldValue1483.NameField := 'fontSize';
fieldValue1483.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1477.FieldValue := fieldValue1483;
fieldValue1484 := TfieldValueNode.Create;
fieldValue1484.NameField := 'spacing';
fieldValue1484.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1477.FieldValue := fieldValue1484;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1477]);
Layer1091.AddRoute(TimeSensor28.EventFraction_changed, ScalarInterpolator81.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1477.FdStarttime, TimeSensor28.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1477.FdStoptime, TimeSensor28.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1477.FdEnabled, TimeSensor28.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1489 := TProtoInstanceNode.Create;
ProtoInstance1489.NameField := 'MenuItem';
fieldValue1490 := TfieldValueNode.Create;
fieldValue1490.NameField := 'translation';
fieldValue1490.Value := '65 -17.6 0';
{ .AddFieldValue }
ProtoInstance1489.FieldValue := fieldValue1490;
fieldValue1491 := TfieldValueNode.Create;
fieldValue1491.NameField := 'textTranslation';
fieldValue1491.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1489.FieldValue := fieldValue1491;
fieldValue1492 := TfieldValueNode.Create;
fieldValue1492.NameField := 'description';
fieldValue1492.Value := 'Jin Upper Lid Raiser';
{ .AddFieldValue }
ProtoInstance1489.FieldValue := fieldValue1492;
fieldValue1493 := TfieldValueNode.Create;
fieldValue1493.NameField := 'menuItemString';
fieldValue1493.Value := '\"JinUpperLidRaiser\"';
{ .AddFieldValue }
ProtoInstance1489.FieldValue := fieldValue1493;
fieldValue1494 := TfieldValueNode.Create;
fieldValue1494.NameField := 'size';
fieldValue1494.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1489.FieldValue := fieldValue1494;
fieldValue1495 := TfieldValueNode.Create;
fieldValue1495.NameField := 'fontSize';
fieldValue1495.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1489.FieldValue := fieldValue1495;
fieldValue1496 := TfieldValueNode.Create;
fieldValue1496.NameField := 'spacing';
fieldValue1496.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1489.FieldValue := fieldValue1496;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1489]);
Layer1091.AddRoute(TimeSensor27.EventFraction_changed, ScalarInterpolator82.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1489.FdStarttime, TimeSensor27.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1489.FdStoptime, TimeSensor27.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1489.FdEnabled, TimeSensor27.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1501 := TProtoInstanceNode.Create;
ProtoInstance1501.NameField := 'MenuItem';
fieldValue1502 := TfieldValueNode.Create;
fieldValue1502.NameField := 'translation';
fieldValue1502.Value := '65 -20.6 0';
{ .AddFieldValue }
ProtoInstance1501.FieldValue := fieldValue1502;
fieldValue1503 := TfieldValueNode.Create;
fieldValue1503.NameField := 'textTranslation';
fieldValue1503.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1501.FieldValue := fieldValue1503;
fieldValue1504 := TfieldValueNode.Create;
fieldValue1504.NameField := 'description';
fieldValue1504.Value := 'Jin Upper Lip Raiser';
{ .AddFieldValue }
ProtoInstance1501.FieldValue := fieldValue1504;
fieldValue1505 := TfieldValueNode.Create;
fieldValue1505.NameField := 'menuItemString';
fieldValue1505.Value := '\"JinUpperLipRaiser\"';
{ .AddFieldValue }
ProtoInstance1501.FieldValue := fieldValue1505;
fieldValue1506 := TfieldValueNode.Create;
fieldValue1506.NameField := 'size';
fieldValue1506.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1501.FieldValue := fieldValue1506;
fieldValue1507 := TfieldValueNode.Create;
fieldValue1507.NameField := 'fontSize';
fieldValue1507.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1501.FieldValue := fieldValue1507;
fieldValue1508 := TfieldValueNode.Create;
fieldValue1508.NameField := 'spacing';
fieldValue1508.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1501.FieldValue := fieldValue1508;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1501]);
Layer1091.AddRoute(TimeSensor26.EventFraction_changed, ScalarInterpolator83.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1501.FdStarttime, TimeSensor26.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1501.FdStoptime, TimeSensor26.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1501.FdEnabled, TimeSensor26.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1513 := TProtoInstanceNode.Create;
ProtoInstance1513.NameField := 'MenuItem';
fieldValue1514 := TfieldValueNode.Create;
fieldValue1514.NameField := 'translation';
fieldValue1514.Value := '65 -23.599999999999994 0';
{ .AddFieldValue }
ProtoInstance1513.FieldValue := fieldValue1514;
fieldValue1515 := TfieldValueNode.Create;
fieldValue1515.NameField := 'textTranslation';
fieldValue1515.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1513.FieldValue := fieldValue1515;
fieldValue1516 := TfieldValueNode.Create;
fieldValue1516.NameField := 'description';
fieldValue1516.Value := 'Jin Wink';
{ .AddFieldValue }
ProtoInstance1513.FieldValue := fieldValue1516;
fieldValue1517 := TfieldValueNode.Create;
fieldValue1517.NameField := 'menuItemString';
fieldValue1517.Value := '\"JinWink\"';
{ .AddFieldValue }
ProtoInstance1513.FieldValue := fieldValue1517;
fieldValue1518 := TfieldValueNode.Create;
fieldValue1518.NameField := 'size';
fieldValue1518.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1513.FieldValue := fieldValue1518;
fieldValue1519 := TfieldValueNode.Create;
fieldValue1519.NameField := 'fontSize';
fieldValue1519.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1513.FieldValue := fieldValue1519;
fieldValue1520 := TfieldValueNode.Create;
fieldValue1520.NameField := 'spacing';
fieldValue1520.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1513.FieldValue := fieldValue1520;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1513]);
Layer1091.AddRoute(TimeSensor25.EventFraction_changed, ScalarInterpolator84.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1513.FdStarttime, TimeSensor25.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1513.FdStoptime, TimeSensor25.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1513.FdEnabled, TimeSensor25.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1525 := TProtoInstanceNode.Create;
ProtoInstance1525.NameField := 'MenuItem';
fieldValue1526 := TfieldValueNode.Create;
fieldValue1526.NameField := 'translation';
fieldValue1526.Value := '24 63.4 0';
{ .AddFieldValue }
ProtoInstance1525.FieldValue := fieldValue1526;
fieldValue1527 := TfieldValueNode.Create;
fieldValue1527.NameField := 'textTranslation';
fieldValue1527.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1525.FieldValue := fieldValue1527;
fieldValue1528 := TfieldValueNode.Create;
fieldValue1528.NameField := 'description';
fieldValue1528.Value := 'HappinessJoy';
{ .AddFieldValue }
ProtoInstance1525.FieldValue := fieldValue1528;
fieldValue1529 := TfieldValueNode.Create;
fieldValue1529.NameField := 'menuItemString';
fieldValue1529.Value := '\"HappinessJoy\"';
{ .AddFieldValue }
ProtoInstance1525.FieldValue := fieldValue1529;
fieldValue1530 := TfieldValueNode.Create;
fieldValue1530.NameField := 'size';
fieldValue1530.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1525.FieldValue := fieldValue1530;
fieldValue1531 := TfieldValueNode.Create;
fieldValue1531.NameField := 'fontSize';
fieldValue1531.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1525.FieldValue := fieldValue1531;
fieldValue1532 := TfieldValueNode.Create;
fieldValue1532.NameField := 'spacing';
fieldValue1532.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1525.FieldValue := fieldValue1532;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1525]);
Layer1091.AddRoute(TimeSensor24.EventFraction_changed, ScalarInterpolator58.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor24.EventFraction_changed, ScalarInterpolator67.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1525.FdStarttime, TimeSensor24.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1525.FdStoptime, TimeSensor24.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1525.FdEnabled, TimeSensor24.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1538 := TProtoInstanceNode.Create;
ProtoInstance1538.NameField := 'MenuItem';
fieldValue1539 := TfieldValueNode.Create;
fieldValue1539.NameField := 'translation';
fieldValue1539.Value := '24 60.61666666666666 0';
{ .AddFieldValue }
ProtoInstance1538.FieldValue := fieldValue1539;
fieldValue1540 := TfieldValueNode.Create;
fieldValue1540.NameField := 'textTranslation';
fieldValue1540.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1538.FieldValue := fieldValue1540;
fieldValue1541 := TfieldValueNode.Create;
fieldValue1541.NameField := 'description';
fieldValue1541.Value := 'Sadness';
{ .AddFieldValue }
ProtoInstance1538.FieldValue := fieldValue1541;
fieldValue1542 := TfieldValueNode.Create;
fieldValue1542.NameField := 'menuItemString';
fieldValue1542.Value := '\"Sadness\"';
{ .AddFieldValue }
ProtoInstance1538.FieldValue := fieldValue1542;
fieldValue1543 := TfieldValueNode.Create;
fieldValue1543.NameField := 'size';
fieldValue1543.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1538.FieldValue := fieldValue1543;
fieldValue1544 := TfieldValueNode.Create;
fieldValue1544.NameField := 'fontSize';
fieldValue1544.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1538.FieldValue := fieldValue1544;
fieldValue1545 := TfieldValueNode.Create;
fieldValue1545.NameField := 'spacing';
fieldValue1545.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1538.FieldValue := fieldValue1545;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1538]);
Layer1091.AddRoute(TimeSensor23.EventFraction_changed, ScalarInterpolator62.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor23.EventFraction_changed, ScalarInterpolator56.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor23.EventFraction_changed, ScalarInterpolator66.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1538.FdStarttime, TimeSensor23.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1538.FdStoptime, TimeSensor23.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1538.FdEnabled, TimeSensor23.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1552 := TProtoInstanceNode.Create;
ProtoInstance1552.NameField := 'MenuItem';
fieldValue1553 := TfieldValueNode.Create;
fieldValue1553.NameField := 'translation';
fieldValue1553.Value := '24 57.83333333333333 0';
{ .AddFieldValue }
ProtoInstance1552.FieldValue := fieldValue1553;
fieldValue1554 := TfieldValueNode.Create;
fieldValue1554.NameField := 'textTranslation';
fieldValue1554.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1552.FieldValue := fieldValue1554;
fieldValue1555 := TfieldValueNode.Create;
fieldValue1555.NameField := 'description';
fieldValue1555.Value := 'Surprise';
{ .AddFieldValue }
ProtoInstance1552.FieldValue := fieldValue1555;
fieldValue1556 := TfieldValueNode.Create;
fieldValue1556.NameField := 'menuItemString';
fieldValue1556.Value := '\"Surprise\"';
{ .AddFieldValue }
ProtoInstance1552.FieldValue := fieldValue1556;
fieldValue1557 := TfieldValueNode.Create;
fieldValue1557.NameField := 'size';
fieldValue1557.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1552.FieldValue := fieldValue1557;
fieldValue1558 := TfieldValueNode.Create;
fieldValue1558.NameField := 'fontSize';
fieldValue1558.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1552.FieldValue := fieldValue1558;
fieldValue1559 := TfieldValueNode.Create;
fieldValue1559.NameField := 'spacing';
fieldValue1559.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1552.FieldValue := fieldValue1559;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1552]);
Layer1091.AddRoute(TimeSensor22.EventFraction_changed, ScalarInterpolator62.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor22.EventFraction_changed, ScalarInterpolator79.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor22.EventFraction_changed, ScalarInterpolator82.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor22.EventFraction_changed, ScalarInterpolator63.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1552.FdStarttime, TimeSensor22.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1552.FdStoptime, TimeSensor22.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1552.FdEnabled, TimeSensor22.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1567 := TProtoInstanceNode.Create;
ProtoInstance1567.NameField := 'MenuItem';
fieldValue1568 := TfieldValueNode.Create;
fieldValue1568.NameField := 'translation';
fieldValue1568.Value := '24 55.05 0';
{ .AddFieldValue }
ProtoInstance1567.FieldValue := fieldValue1568;
fieldValue1569 := TfieldValueNode.Create;
fieldValue1569.NameField := 'textTranslation';
fieldValue1569.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1567.FieldValue := fieldValue1569;
fieldValue1570 := TfieldValueNode.Create;
fieldValue1570.NameField := 'description';
fieldValue1570.Value := 'Fear';
{ .AddFieldValue }
ProtoInstance1567.FieldValue := fieldValue1570;
fieldValue1571 := TfieldValueNode.Create;
fieldValue1571.NameField := 'menuItemString';
fieldValue1571.Value := '\"Fear\"';
{ .AddFieldValue }
ProtoInstance1567.FieldValue := fieldValue1571;
fieldValue1572 := TfieldValueNode.Create;
fieldValue1572.NameField := 'size';
fieldValue1572.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1567.FieldValue := fieldValue1572;
fieldValue1573 := TfieldValueNode.Create;
fieldValue1573.NameField := 'fontSize';
fieldValue1573.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1567.FieldValue := fieldValue1573;
fieldValue1574 := TfieldValueNode.Create;
fieldValue1574.NameField := 'spacing';
fieldValue1574.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1567.FieldValue := fieldValue1574;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1567]);
Layer1091.AddRoute(TimeSensor21.EventFraction_changed, ScalarInterpolator62.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor21.EventFraction_changed, ScalarInterpolator79.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor21.EventFraction_changed, ScalarInterpolator56.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor21.EventFraction_changed, ScalarInterpolator82.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor21.EventFraction_changed, ScalarInterpolator65.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor21.EventFraction_changed, ScalarInterpolator72.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor21.EventFraction_changed, ScalarInterpolator63.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1567.FdStarttime, TimeSensor21.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1567.FdStoptime, TimeSensor21.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1567.FdEnabled, TimeSensor21.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1585 := TProtoInstanceNode.Create;
ProtoInstance1585.NameField := 'MenuItem';
fieldValue1586 := TfieldValueNode.Create;
fieldValue1586.NameField := 'translation';
fieldValue1586.Value := '24 52.266666666666666 0';
{ .AddFieldValue }
ProtoInstance1585.FieldValue := fieldValue1586;
fieldValue1587 := TfieldValueNode.Create;
fieldValue1587.NameField := 'textTranslation';
fieldValue1587.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1585.FieldValue := fieldValue1587;
fieldValue1588 := TfieldValueNode.Create;
fieldValue1588.NameField := 'description';
fieldValue1588.Value := 'Anger';
{ .AddFieldValue }
ProtoInstance1585.FieldValue := fieldValue1588;
fieldValue1589 := TfieldValueNode.Create;
fieldValue1589.NameField := 'menuItemString';
fieldValue1589.Value := '\"Anger\"';
{ .AddFieldValue }
ProtoInstance1585.FieldValue := fieldValue1589;
fieldValue1590 := TfieldValueNode.Create;
fieldValue1590.NameField := 'size';
fieldValue1590.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1585.FieldValue := fieldValue1590;
fieldValue1591 := TfieldValueNode.Create;
fieldValue1591.NameField := 'fontSize';
fieldValue1591.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1585.FieldValue := fieldValue1591;
fieldValue1592 := TfieldValueNode.Create;
fieldValue1592.NameField := 'spacing';
fieldValue1592.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1585.FieldValue := fieldValue1592;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1585]);
Layer1091.AddRoute(TimeSensor20.EventFraction_changed, ScalarInterpolator56.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor20.EventFraction_changed, ScalarInterpolator82.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor20.EventFraction_changed, ScalarInterpolator65.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor20.EventFraction_changed, ScalarInterpolator74.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1585.FdStarttime, TimeSensor20.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1585.FdStoptime, TimeSensor20.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1585.FdEnabled, TimeSensor20.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1600 := TProtoInstanceNode.Create;
ProtoInstance1600.NameField := 'MenuItem';
fieldValue1601 := TfieldValueNode.Create;
fieldValue1601.NameField := 'translation';
fieldValue1601.Value := '24 49.48333333333333 0';
{ .AddFieldValue }
ProtoInstance1600.FieldValue := fieldValue1601;
fieldValue1602 := TfieldValueNode.Create;
fieldValue1602.NameField := 'textTranslation';
fieldValue1602.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1600.FieldValue := fieldValue1602;
fieldValue1603 := TfieldValueNode.Create;
fieldValue1603.NameField := 'description';
fieldValue1603.Value := 'Disgust';
{ .AddFieldValue }
ProtoInstance1600.FieldValue := fieldValue1603;
fieldValue1604 := TfieldValueNode.Create;
fieldValue1604.NameField := 'menuItemString';
fieldValue1604.Value := '\"Disgust\"';
{ .AddFieldValue }
ProtoInstance1600.FieldValue := fieldValue1604;
fieldValue1605 := TfieldValueNode.Create;
fieldValue1605.NameField := 'size';
fieldValue1605.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1600.FieldValue := fieldValue1605;
fieldValue1606 := TfieldValueNode.Create;
fieldValue1606.NameField := 'fontSize';
fieldValue1606.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1600.FieldValue := fieldValue1606;
fieldValue1607 := TfieldValueNode.Create;
fieldValue1607.NameField := 'spacing';
fieldValue1607.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1600.FieldValue := fieldValue1607;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1600]);
Layer1091.AddRoute(TimeSensor19.EventFraction_changed, ScalarInterpolator78.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor19.EventFraction_changed, ScalarInterpolator66.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor19.EventFraction_changed, ScalarInterpolator75.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1600.FdStarttime, TimeSensor19.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1600.FdStoptime, TimeSensor19.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1600.FdEnabled, TimeSensor19.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1614 := TProtoInstanceNode.Create;
ProtoInstance1614.NameField := 'MenuItem';
fieldValue1615 := TfieldValueNode.Create;
fieldValue1615.NameField := 'translation';
fieldValue1615.Value := '24 46.69999999999999 0';
{ .AddFieldValue }
ProtoInstance1614.FieldValue := fieldValue1615;
fieldValue1616 := TfieldValueNode.Create;
fieldValue1616.NameField := 'textTranslation';
fieldValue1616.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1614.FieldValue := fieldValue1616;
fieldValue1617 := TfieldValueNode.Create;
fieldValue1617.NameField := 'description';
fieldValue1617.Value := 'Contempt';
{ .AddFieldValue }
ProtoInstance1614.FieldValue := fieldValue1617;
fieldValue1618 := TfieldValueNode.Create;
fieldValue1618.NameField := 'menuItemString';
fieldValue1618.Value := '\"Contempt\"';
{ .AddFieldValue }
ProtoInstance1614.FieldValue := fieldValue1618;
fieldValue1619 := TfieldValueNode.Create;
fieldValue1619.NameField := 'size';
fieldValue1619.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1614.FieldValue := fieldValue1619;
fieldValue1620 := TfieldValueNode.Create;
fieldValue1620.NameField := 'fontSize';
fieldValue1620.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1614.FieldValue := fieldValue1620;
fieldValue1621 := TfieldValueNode.Create;
fieldValue1621.NameField := 'spacing';
fieldValue1621.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1614.FieldValue := fieldValue1621;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1614]);
Layer1091.AddRoute(TimeSensor18.EventFraction_changed, ScalarInterpolator67.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor18.EventFraction_changed, ScalarInterpolator60.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1614.FdStarttime, TimeSensor18.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1614.FdStoptime, TimeSensor18.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1614.FdEnabled, TimeSensor18.FdEnabled);
{ .AddX3DRoute }
ProtoInstance1627 := TProtoInstanceNode.Create;
ProtoInstance1627.NameField := 'MenuItem';
fieldValue1628 := TfieldValueNode.Create;
fieldValue1628.NameField := 'translation';
fieldValue1628.Value := '24 41.133333333333326 0';
{ .AddFieldValue }
ProtoInstance1627.FieldValue := fieldValue1628;
fieldValue1629 := TfieldValueNode.Create;
fieldValue1629.NameField := 'textTranslation';
fieldValue1629.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance1627.FieldValue := fieldValue1629;
fieldValue1630 := TfieldValueNode.Create;
fieldValue1630.NameField := 'description';
fieldValue1630.Value := 'Reset';
{ .AddFieldValue }
ProtoInstance1627.FieldValue := fieldValue1630;
fieldValue1631 := TfieldValueNode.Create;
fieldValue1631.NameField := 'menuItemString';
fieldValue1631.Value := '\"Reset\"';
{ .AddFieldValue }
ProtoInstance1627.FieldValue := fieldValue1631;
fieldValue1632 := TfieldValueNode.Create;
fieldValue1632.NameField := 'size';
fieldValue1632.Value := '40 3';
{ .AddFieldValue }
ProtoInstance1627.FieldValue := fieldValue1632;
fieldValue1633 := TfieldValueNode.Create;
fieldValue1633.NameField := 'fontSize';
fieldValue1633.Value := '2.4';
{ .AddFieldValue }
ProtoInstance1627.FieldValue := fieldValue1633;
fieldValue1634 := TfieldValueNode.Create;
fieldValue1634.NameField := 'spacing';
fieldValue1634.Value := '1.2';
{ .AddFieldValue }
ProtoInstance1627.FieldValue := fieldValue1634;
{ .AddChildren }
Layer1091.AddChildren([ProtoInstance1627]);
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator58.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator67.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1525.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor24.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator62.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator56.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator66.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1538.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor23.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator62.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator79.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator82.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator63.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1552.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor22.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator62.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator79.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator56.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator82.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator65.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator72.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator63.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1567.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor21.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator56.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator82.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator65.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator74.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1585.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor20.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator78.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator66.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator75.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1600.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor19.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator67.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator60.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1614.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor18.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdStarttime, TimeSensor17.FdStarttime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdStoptime, TimeSensor17.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, TimeSensor17.FdEnabled);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator55.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor54.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1165.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator56.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor53.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1177.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator57.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor52.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1189.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator58.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor51.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1201.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator59.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor50.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1213.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator60.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor49.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1225.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator61.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor48.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1237.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator62.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor47.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1249.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator63.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor46.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1261.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator64.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor45.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1273.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator65.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor44.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1285.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator66.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor43.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1297.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator67.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor42.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1309.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator68.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor41.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1321.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator69.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor40.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1333.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator70.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor39.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1345.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator71.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor38.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1357.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator72.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor37.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1369.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator73.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor36.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1381.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator74.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor35.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1393.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator75.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor34.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1405.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator76.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor33.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1417.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator77.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor32.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1429.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator78.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor31.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1441.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator79.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor30.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1453.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator80.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor29.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1465.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator81.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor28.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1477.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator82.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor27.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1489.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator83.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor26.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1501.FdUntoggle);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.EventFraction_changed, ScalarInterpolator84.EventSet_fraction);
{ .AddX3DRoute }
Layer1091.AddRoute(TimeSensor17.FdStarttime, TimeSensor25.FdStoptime);
{ .AddX3DRoute }
Layer1091.AddRoute(ProtoInstance1627.FdEnabled, ProtoInstance1513.FdUntoggle);
{ .AddX3DRoute }
{ .AddLayers }
LayerSet14.Layers := Layer1091;
{ .AddChildren }
Group13.AddChildren([LayerSet14]);
{ .AddGroup }
X3D0.AddChildren([Group13]);
Result := X3D0;
end;
