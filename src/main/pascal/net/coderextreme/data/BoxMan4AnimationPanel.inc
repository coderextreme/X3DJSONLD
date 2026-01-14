function BoxMan4AnimationPanel: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group32: TGroupNode;
WorldInfo33: TWorldInfoNode;
Background34: TBackgroundNode;
HAnimHumanoid35: THAnimHumanoidNode;
HAnimJoint36: THAnimJointNode;
HAnimSegment37: THAnimSegmentNode;
Transform38: TTransformNode;
Shape39: TShapeNode;
Appearance40: TAppearanceNode;
Material41: TMaterialNode;
Sphere42: TSphereNode;
HAnimJoint43: THAnimJointNode;
HAnimSegment44: THAnimSegmentNode;
Transform45: TTransformNode;
Shape46: TShapeNode;
HAnimJoint47: THAnimJointNode;
HAnimSegment48: THAnimSegmentNode;
Transform49: TTransformNode;
Shape50: TShapeNode;
HAnimJoint51: THAnimJointNode;
HAnimSegment52: THAnimSegmentNode;
Transform53: TTransformNode;
Shape54: TShapeNode;
HAnimJoint55: THAnimJointNode;
HAnimSegment56: THAnimSegmentNode;
Transform57: TTransformNode;
Shape58: TShapeNode;
HAnimSite59: THAnimSiteNode;
Shape60: TShapeNode;
Appearance61: TAppearanceNode;
Material62: TMaterialNode;
Sphere63: TSphereNode;
HAnimJoint64: THAnimJointNode;
HAnimSegment65: THAnimSegmentNode;
Transform66: TTransformNode;
Shape67: TShapeNode;
HAnimJoint68: THAnimJointNode;
HAnimSegment69: THAnimSegmentNode;
Transform70: TTransformNode;
Shape71: TShapeNode;
HAnimJoint72: THAnimJointNode;
HAnimSegment73: THAnimSegmentNode;
Transform74: TTransformNode;
Shape75: TShapeNode;
HAnimJoint76: THAnimJointNode;
HAnimSegment77: THAnimSegmentNode;
Transform78: TTransformNode;
Shape79: TShapeNode;
HAnimSite80: THAnimSiteNode;
Shape81: TShapeNode;
HAnimJoint82: THAnimJointNode;
HAnimSegment83: THAnimSegmentNode;
Transform84: TTransformNode;
Shape85: TShapeNode;
HAnimJoint86: THAnimJointNode;
HAnimSegment87: THAnimSegmentNode;
Transform88: TTransformNode;
Shape89: TShapeNode;
HAnimSite90: THAnimSiteNode;
Shape91: TShapeNode;
HAnimJoint92: THAnimJointNode;
HAnimSegment93: THAnimSegmentNode;
Transform94: TTransformNode;
Shape95: TShapeNode;
HAnimJoint96: THAnimJointNode;
HAnimSegment97: THAnimSegmentNode;
Transform98: TTransformNode;
Shape99: TShapeNode;
HAnimJoint100: THAnimJointNode;
HAnimSegment101: THAnimSegmentNode;
Transform102: TTransformNode;
Shape103: TShapeNode;
HAnimSite104: THAnimSiteNode;
Shape105: TShapeNode;
HAnimJoint106: THAnimJointNode;
HAnimSegment107: THAnimSegmentNode;
Transform108: TTransformNode;
Shape109: TShapeNode;
HAnimJoint110: THAnimJointNode;
HAnimSegment111: THAnimSegmentNode;
Transform112: TTransformNode;
Shape113: TShapeNode;
HAnimJoint114: THAnimJointNode;
HAnimSegment115: THAnimSegmentNode;
Transform116: TTransformNode;
Shape117: TShapeNode;
HAnimSite118: THAnimSiteNode;
Shape119: TShapeNode;
HAnimJoint120: THAnimJointNode;
HAnimJoint121: THAnimJointNode;
HAnimJoint122: THAnimJointNode;
HAnimJoint123: THAnimJointNode;
HAnimJoint124: THAnimJointNode;
HAnimJoint125: THAnimJointNode;
HAnimJoint126: THAnimJointNode;
HAnimJoint127: THAnimJointNode;
HAnimJoint128: THAnimJointNode;
HAnimJoint129: THAnimJointNode;
HAnimJoint130: THAnimJointNode;
HAnimJoint131: THAnimJointNode;
HAnimJoint132: THAnimJointNode;
HAnimJoint133: THAnimJointNode;
HAnimJoint134: THAnimJointNode;
HAnimJoint135: THAnimJointNode;
HAnimJoint136: THAnimJointNode;
HAnimSegment137: THAnimSegmentNode;
HAnimSegment138: THAnimSegmentNode;
HAnimSegment139: THAnimSegmentNode;
HAnimSegment140: THAnimSegmentNode;
HAnimSegment141: THAnimSegmentNode;
HAnimSegment142: THAnimSegmentNode;
HAnimSegment143: THAnimSegmentNode;
HAnimSegment144: THAnimSegmentNode;
HAnimSegment145: THAnimSegmentNode;
HAnimSegment146: THAnimSegmentNode;
HAnimSegment147: THAnimSegmentNode;
HAnimSegment148: THAnimSegmentNode;
HAnimSegment149: THAnimSegmentNode;
HAnimSegment150: THAnimSegmentNode;
HAnimSegment151: THAnimSegmentNode;
HAnimSegment152: THAnimSegmentNode;
HAnimSegment153: THAnimSegmentNode;
HAnimSite154: THAnimSiteNode;
HAnimSite155: THAnimSiteNode;
HAnimSite156: THAnimSiteNode;
HAnimSite157: THAnimSiteNode;
HAnimSite158: THAnimSiteNode;
HAnimSite159: THAnimSiteNode;
Viewpoint160: TViewpointNode;
Viewpoint161: TViewpointNode;
Viewpoint162: TViewpointNode;
Viewpoint163: TViewpointNode;
Viewpoint164: TViewpointNode;
Coordinate165: TCoordinateNode;
Group166: TGroupNode;
Shape167: TShapeNode;
Appearance168: TAppearanceNode;
Material169: TMaterialNode;
IndexedFaceSet170: TIndexedFaceSetNode;
Coordinate171: TCoordinateNode;
Shape172: TShapeNode;
Appearance173: TAppearanceNode;
Material174: TMaterialNode;
IndexedFaceSet175: TIndexedFaceSetNode;
Coordinate176: TCoordinateNode;
Shape177: TShapeNode;
Appearance178: TAppearanceNode;
Material179: TMaterialNode;
IndexedFaceSet180: TIndexedFaceSetNode;
Coordinate181: TCoordinateNode;
Shape182: TShapeNode;
Appearance183: TAppearanceNode;
Material184: TMaterialNode;
IndexedFaceSet185: TIndexedFaceSetNode;
Coordinate186: TCoordinateNode;
Shape187: TShapeNode;
Appearance188: TAppearanceNode;
Material189: TMaterialNode;
IndexedLineSet190: TIndexedLineSetNode;
Coordinate191: TCoordinateNode;
Group192: TGroupNode;
TimeSensor193: TTimeSensorNode;
PositionInterpolator194: TPositionInterpolatorNode;
OrientationInterpolator195: TOrientationInterpolatorNode;
OrientationInterpolator196: TOrientationInterpolatorNode;
OrientationInterpolator197: TOrientationInterpolatorNode;
OrientationInterpolator198: TOrientationInterpolatorNode;
OrientationInterpolator199: TOrientationInterpolatorNode;
OrientationInterpolator200: TOrientationInterpolatorNode;
OrientationInterpolator201: TOrientationInterpolatorNode;
OrientationInterpolator202: TOrientationInterpolatorNode;
OrientationInterpolator203: TOrientationInterpolatorNode;
OrientationInterpolator204: TOrientationInterpolatorNode;
OrientationInterpolator205: TOrientationInterpolatorNode;
OrientationInterpolator206: TOrientationInterpolatorNode;
OrientationInterpolator207: TOrientationInterpolatorNode;
OrientationInterpolator208: TOrientationInterpolatorNode;
OrientationInterpolator209: TOrientationInterpolatorNode;
OrientationInterpolator210: TOrientationInterpolatorNode;
OrientationInterpolator211: TOrientationInterpolatorNode;
OrientationInterpolator212: TOrientationInterpolatorNode;
OrientationInterpolator213: TOrientationInterpolatorNode;
OrientationInterpolator214: TOrientationInterpolatorNode;
OrientationInterpolator215: TOrientationInterpolatorNode;
OrientationInterpolator216: TOrientationInterpolatorNode;
OrientationInterpolator217: TOrientationInterpolatorNode;
OrientationInterpolator218: TOrientationInterpolatorNode;
OrientationInterpolator219: TOrientationInterpolatorNode;
OrientationInterpolator220: TOrientationInterpolatorNode;
OrientationInterpolator221: TOrientationInterpolatorNode;
OrientationInterpolator222: TOrientationInterpolatorNode;
OrientationInterpolator223: TOrientationInterpolatorNode;
OrientationInterpolator224: TOrientationInterpolatorNode;
OrientationInterpolator225: TOrientationInterpolatorNode;
OrientationInterpolator226: TOrientationInterpolatorNode;
OrientationInterpolator227: TOrientationInterpolatorNode;
OrientationInterpolator228: TOrientationInterpolatorNode;
OrientationInterpolator229: TOrientationInterpolatorNode;
OrientationInterpolator230: TOrientationInterpolatorNode;
OrientationInterpolator231: TOrientationInterpolatorNode;
OrientationInterpolator232: TOrientationInterpolatorNode;
OrientationInterpolator233: TOrientationInterpolatorNode;
OrientationInterpolator234: TOrientationInterpolatorNode;
OrientationInterpolator235: TOrientationInterpolatorNode;
OrientationInterpolator236: TOrientationInterpolatorNode;
OrientationInterpolator237: TOrientationInterpolatorNode;
OrientationInterpolator238: TOrientationInterpolatorNode;
OrientationInterpolator239: TOrientationInterpolatorNode;
OrientationInterpolator240: TOrientationInterpolatorNode;
OrientationInterpolator241: TOrientationInterpolatorNode;
OrientationInterpolator242: TOrientationInterpolatorNode;
OrientationInterpolator243: TOrientationInterpolatorNode;
OrientationInterpolator244: TOrientationInterpolatorNode;
OrientationInterpolator245: TOrientationInterpolatorNode;
OrientationInterpolator246: TOrientationInterpolatorNode;
OrientationInterpolator247: TOrientationInterpolatorNode;
OrientationInterpolator248: TOrientationInterpolatorNode;
OrientationInterpolator249: TOrientationInterpolatorNode;
OrientationInterpolator250: TOrientationInterpolatorNode;
OrientationInterpolator251: TOrientationInterpolatorNode;
OrientationInterpolator252: TOrientationInterpolatorNode;
OrientationInterpolator253: TOrientationInterpolatorNode;
OrientationInterpolator254: TOrientationInterpolatorNode;
OrientationInterpolator255: TOrientationInterpolatorNode;
OrientationInterpolator256: TOrientationInterpolatorNode;
OrientationInterpolator257: TOrientationInterpolatorNode;
OrientationInterpolator258: TOrientationInterpolatorNode;
OrientationInterpolator259: TOrientationInterpolatorNode;
OrientationInterpolator260: TOrientationInterpolatorNode;
OrientationInterpolator261: TOrientationInterpolatorNode;
OrientationInterpolator262: TOrientationInterpolatorNode;
OrientationInterpolator263: TOrientationInterpolatorNode;
OrientationInterpolator264: TOrientationInterpolatorNode;
OrientationInterpolator265: TOrientationInterpolatorNode;
OrientationInterpolator266: TOrientationInterpolatorNode;
OrientationInterpolator267: TOrientationInterpolatorNode;
OrientationInterpolator268: TOrientationInterpolatorNode;
OrientationInterpolator269: TOrientationInterpolatorNode;
OrientationInterpolator270: TOrientationInterpolatorNode;
OrientationInterpolator271: TOrientationInterpolatorNode;
OrientationInterpolator272: TOrientationInterpolatorNode;
OrientationInterpolator273: TOrientationInterpolatorNode;
OrientationInterpolator274: TOrientationInterpolatorNode;
OrientationInterpolator275: TOrientationInterpolatorNode;
OrientationInterpolator276: TOrientationInterpolatorNode;
OrientationInterpolator277: TOrientationInterpolatorNode;
OrientationInterpolator278: TOrientationInterpolatorNode;
OrientationInterpolator279: TOrientationInterpolatorNode;
OrientationInterpolator280: TOrientationInterpolatorNode;
OrientationInterpolator281: TOrientationInterpolatorNode;
OrientationInterpolator282: TOrientationInterpolatorNode;
OrientationInterpolator283: TOrientationInterpolatorNode;
Group284: TGroupNode;
TimeSensor285: TTimeSensorNode;
OrientationInterpolator286: TOrientationInterpolatorNode;
OrientationInterpolator287: TOrientationInterpolatorNode;
OrientationInterpolator288: TOrientationInterpolatorNode;
OrientationInterpolator289: TOrientationInterpolatorNode;
OrientationInterpolator290: TOrientationInterpolatorNode;
OrientationInterpolator291: TOrientationInterpolatorNode;
OrientationInterpolator292: TOrientationInterpolatorNode;
OrientationInterpolator293: TOrientationInterpolatorNode;
OrientationInterpolator294: TOrientationInterpolatorNode;
OrientationInterpolator295: TOrientationInterpolatorNode;
OrientationInterpolator296: TOrientationInterpolatorNode;
OrientationInterpolator297: TOrientationInterpolatorNode;
OrientationInterpolator298: TOrientationInterpolatorNode;
OrientationInterpolator299: TOrientationInterpolatorNode;
OrientationInterpolator300: TOrientationInterpolatorNode;
OrientationInterpolator301: TOrientationInterpolatorNode;
OrientationInterpolator302: TOrientationInterpolatorNode;
OrientationInterpolator303: TOrientationInterpolatorNode;
OrientationInterpolator304: TOrientationInterpolatorNode;
OrientationInterpolator305: TOrientationInterpolatorNode;
PositionInterpolator306: TPositionInterpolatorNode;
OrientationInterpolator307: TOrientationInterpolatorNode;
OrientationInterpolator308: TOrientationInterpolatorNode;
OrientationInterpolator309: TOrientationInterpolatorNode;
OrientationInterpolator310: TOrientationInterpolatorNode;
OrientationInterpolator311: TOrientationInterpolatorNode;
OrientationInterpolator312: TOrientationInterpolatorNode;
OrientationInterpolator313: TOrientationInterpolatorNode;
OrientationInterpolator314: TOrientationInterpolatorNode;
OrientationInterpolator315: TOrientationInterpolatorNode;
OrientationInterpolator316: TOrientationInterpolatorNode;
OrientationInterpolator317: TOrientationInterpolatorNode;
OrientationInterpolator318: TOrientationInterpolatorNode;
Group319: TGroupNode;
TimeSensor320: TTimeSensorNode;
OrientationInterpolator321: TOrientationInterpolatorNode;
OrientationInterpolator322: TOrientationInterpolatorNode;
OrientationInterpolator323: TOrientationInterpolatorNode;
OrientationInterpolator324: TOrientationInterpolatorNode;
OrientationInterpolator325: TOrientationInterpolatorNode;
OrientationInterpolator326: TOrientationInterpolatorNode;
OrientationInterpolator327: TOrientationInterpolatorNode;
OrientationInterpolator328: TOrientationInterpolatorNode;
OrientationInterpolator329: TOrientationInterpolatorNode;
OrientationInterpolator330: TOrientationInterpolatorNode;
OrientationInterpolator331: TOrientationInterpolatorNode;
OrientationInterpolator332: TOrientationInterpolatorNode;
OrientationInterpolator333: TOrientationInterpolatorNode;
OrientationInterpolator334: TOrientationInterpolatorNode;
OrientationInterpolator335: TOrientationInterpolatorNode;
OrientationInterpolator336: TOrientationInterpolatorNode;
OrientationInterpolator337: TOrientationInterpolatorNode;
OrientationInterpolator338: TOrientationInterpolatorNode;
PositionInterpolator339: TPositionInterpolatorNode;
OrientationInterpolator340: TOrientationInterpolatorNode;
OrientationInterpolator341: TOrientationInterpolatorNode;
OrientationInterpolator342: TOrientationInterpolatorNode;
OrientationInterpolator343: TOrientationInterpolatorNode;
OrientationInterpolator344: TOrientationInterpolatorNode;
OrientationInterpolator345: TOrientationInterpolatorNode;
OrientationInterpolator346: TOrientationInterpolatorNode;
OrientationInterpolator347: TOrientationInterpolatorNode;
OrientationInterpolator348: TOrientationInterpolatorNode;
Group349: TGroupNode;
TimeSensor350: TTimeSensorNode;
OrientationInterpolator351: TOrientationInterpolatorNode;
OrientationInterpolator352: TOrientationInterpolatorNode;
OrientationInterpolator353: TOrientationInterpolatorNode;
OrientationInterpolator354: TOrientationInterpolatorNode;
OrientationInterpolator355: TOrientationInterpolatorNode;
OrientationInterpolator356: TOrientationInterpolatorNode;
OrientationInterpolator357: TOrientationInterpolatorNode;
OrientationInterpolator358: TOrientationInterpolatorNode;
OrientationInterpolator359: TOrientationInterpolatorNode;
OrientationInterpolator360: TOrientationInterpolatorNode;
OrientationInterpolator361: TOrientationInterpolatorNode;
OrientationInterpolator362: TOrientationInterpolatorNode;
OrientationInterpolator363: TOrientationInterpolatorNode;
OrientationInterpolator364: TOrientationInterpolatorNode;
OrientationInterpolator365: TOrientationInterpolatorNode;
OrientationInterpolator366: TOrientationInterpolatorNode;
OrientationInterpolator367: TOrientationInterpolatorNode;
OrientationInterpolator368: TOrientationInterpolatorNode;
PositionInterpolator369: TPositionInterpolatorNode;
OrientationInterpolator370: TOrientationInterpolatorNode;
OrientationInterpolator371: TOrientationInterpolatorNode;
OrientationInterpolator372: TOrientationInterpolatorNode;
OrientationInterpolator373: TOrientationInterpolatorNode;
OrientationInterpolator374: TOrientationInterpolatorNode;
OrientationInterpolator375: TOrientationInterpolatorNode;
OrientationInterpolator376: TOrientationInterpolatorNode;
OrientationInterpolator377: TOrientationInterpolatorNode;
OrientationInterpolator378: TOrientationInterpolatorNode;
Group379: TGroupNode;
TimeSensor380: TTimeSensorNode;
OrientationInterpolator381: TOrientationInterpolatorNode;
OrientationInterpolator382: TOrientationInterpolatorNode;
OrientationInterpolator383: TOrientationInterpolatorNode;
OrientationInterpolator384: TOrientationInterpolatorNode;
OrientationInterpolator385: TOrientationInterpolatorNode;
OrientationInterpolator386: TOrientationInterpolatorNode;
OrientationInterpolator387: TOrientationInterpolatorNode;
OrientationInterpolator388: TOrientationInterpolatorNode;
OrientationInterpolator389: TOrientationInterpolatorNode;
OrientationInterpolator390: TOrientationInterpolatorNode;
OrientationInterpolator391: TOrientationInterpolatorNode;
OrientationInterpolator392: TOrientationInterpolatorNode;
OrientationInterpolator393: TOrientationInterpolatorNode;
OrientationInterpolator394: TOrientationInterpolatorNode;
OrientationInterpolator395: TOrientationInterpolatorNode;
OrientationInterpolator396: TOrientationInterpolatorNode;
OrientationInterpolator397: TOrientationInterpolatorNode;
OrientationInterpolator398: TOrientationInterpolatorNode;
PositionInterpolator399: TPositionInterpolatorNode;
OrientationInterpolator400: TOrientationInterpolatorNode;
OrientationInterpolator401: TOrientationInterpolatorNode;
OrientationInterpolator402: TOrientationInterpolatorNode;
OrientationInterpolator403: TOrientationInterpolatorNode;
OrientationInterpolator404: TOrientationInterpolatorNode;
OrientationInterpolator405: TOrientationInterpolatorNode;
OrientationInterpolator406: TOrientationInterpolatorNode;
OrientationInterpolator407: TOrientationInterpolatorNode;
OrientationInterpolator408: TOrientationInterpolatorNode;
Group409: TGroupNode;
TimeSensor410: TTimeSensorNode;
OrientationInterpolator411: TOrientationInterpolatorNode;
OrientationInterpolator412: TOrientationInterpolatorNode;
OrientationInterpolator413: TOrientationInterpolatorNode;
OrientationInterpolator414: TOrientationInterpolatorNode;
OrientationInterpolator415: TOrientationInterpolatorNode;
OrientationInterpolator416: TOrientationInterpolatorNode;
OrientationInterpolator417: TOrientationInterpolatorNode;
OrientationInterpolator418: TOrientationInterpolatorNode;
OrientationInterpolator419: TOrientationInterpolatorNode;
OrientationInterpolator420: TOrientationInterpolatorNode;
OrientationInterpolator421: TOrientationInterpolatorNode;
OrientationInterpolator422: TOrientationInterpolatorNode;
OrientationInterpolator423: TOrientationInterpolatorNode;
OrientationInterpolator424: TOrientationInterpolatorNode;
OrientationInterpolator425: TOrientationInterpolatorNode;
OrientationInterpolator426: TOrientationInterpolatorNode;
OrientationInterpolator427: TOrientationInterpolatorNode;
OrientationInterpolator428: TOrientationInterpolatorNode;
PositionInterpolator429: TPositionInterpolatorNode;
OrientationInterpolator430: TOrientationInterpolatorNode;
OrientationInterpolator431: TOrientationInterpolatorNode;
OrientationInterpolator432: TOrientationInterpolatorNode;
OrientationInterpolator433: TOrientationInterpolatorNode;
OrientationInterpolator434: TOrientationInterpolatorNode;
OrientationInterpolator435: TOrientationInterpolatorNode;
OrientationInterpolator436: TOrientationInterpolatorNode;
OrientationInterpolator437: TOrientationInterpolatorNode;
OrientationInterpolator438: TOrientationInterpolatorNode;
Group439: TGroupNode;
TimeSensor440: TTimeSensorNode;
OrientationInterpolator441: TOrientationInterpolatorNode;
OrientationInterpolator442: TOrientationInterpolatorNode;
OrientationInterpolator443: TOrientationInterpolatorNode;
OrientationInterpolator444: TOrientationInterpolatorNode;
OrientationInterpolator445: TOrientationInterpolatorNode;
OrientationInterpolator446: TOrientationInterpolatorNode;
OrientationInterpolator447: TOrientationInterpolatorNode;
OrientationInterpolator448: TOrientationInterpolatorNode;
OrientationInterpolator449: TOrientationInterpolatorNode;
OrientationInterpolator450: TOrientationInterpolatorNode;
OrientationInterpolator451: TOrientationInterpolatorNode;
OrientationInterpolator452: TOrientationInterpolatorNode;
OrientationInterpolator453: TOrientationInterpolatorNode;
OrientationInterpolator454: TOrientationInterpolatorNode;
OrientationInterpolator455: TOrientationInterpolatorNode;
OrientationInterpolator456: TOrientationInterpolatorNode;
OrientationInterpolator457: TOrientationInterpolatorNode;
OrientationInterpolator458: TOrientationInterpolatorNode;
PositionInterpolator459: TPositionInterpolatorNode;
OrientationInterpolator460: TOrientationInterpolatorNode;
OrientationInterpolator461: TOrientationInterpolatorNode;
OrientationInterpolator462: TOrientationInterpolatorNode;
OrientationInterpolator463: TOrientationInterpolatorNode;
OrientationInterpolator464: TOrientationInterpolatorNode;
OrientationInterpolator465: TOrientationInterpolatorNode;
OrientationInterpolator466: TOrientationInterpolatorNode;
OrientationInterpolator467: TOrientationInterpolatorNode;
OrientationInterpolator468: TOrientationInterpolatorNode;
Group469: TGroupNode;
TimeSensor470: TTimeSensorNode;
OrientationInterpolator471: TOrientationInterpolatorNode;
OrientationInterpolator472: TOrientationInterpolatorNode;
OrientationInterpolator473: TOrientationInterpolatorNode;
OrientationInterpolator474: TOrientationInterpolatorNode;
OrientationInterpolator475: TOrientationInterpolatorNode;
OrientationInterpolator476: TOrientationInterpolatorNode;
OrientationInterpolator477: TOrientationInterpolatorNode;
OrientationInterpolator478: TOrientationInterpolatorNode;
OrientationInterpolator479: TOrientationInterpolatorNode;
OrientationInterpolator480: TOrientationInterpolatorNode;
OrientationInterpolator481: TOrientationInterpolatorNode;
OrientationInterpolator482: TOrientationInterpolatorNode;
OrientationInterpolator483: TOrientationInterpolatorNode;
OrientationInterpolator484: TOrientationInterpolatorNode;
OrientationInterpolator485: TOrientationInterpolatorNode;
OrientationInterpolator486: TOrientationInterpolatorNode;
OrientationInterpolator487: TOrientationInterpolatorNode;
OrientationInterpolator488: TOrientationInterpolatorNode;
PositionInterpolator489: TPositionInterpolatorNode;
OrientationInterpolator490: TOrientationInterpolatorNode;
OrientationInterpolator491: TOrientationInterpolatorNode;
OrientationInterpolator492: TOrientationInterpolatorNode;
OrientationInterpolator493: TOrientationInterpolatorNode;
OrientationInterpolator494: TOrientationInterpolatorNode;
OrientationInterpolator495: TOrientationInterpolatorNode;
OrientationInterpolator496: TOrientationInterpolatorNode;
OrientationInterpolator497: TOrientationInterpolatorNode;
OrientationInterpolator498: TOrientationInterpolatorNode;
Group499: TGroupNode;
TimeSensor500: TTimeSensorNode;
OrientationInterpolator501: TOrientationInterpolatorNode;
OrientationInterpolator502: TOrientationInterpolatorNode;
OrientationInterpolator503: TOrientationInterpolatorNode;
OrientationInterpolator504: TOrientationInterpolatorNode;
OrientationInterpolator505: TOrientationInterpolatorNode;
OrientationInterpolator506: TOrientationInterpolatorNode;
OrientationInterpolator507: TOrientationInterpolatorNode;
OrientationInterpolator508: TOrientationInterpolatorNode;
OrientationInterpolator509: TOrientationInterpolatorNode;
OrientationInterpolator510: TOrientationInterpolatorNode;
OrientationInterpolator511: TOrientationInterpolatorNode;
OrientationInterpolator512: TOrientationInterpolatorNode;
OrientationInterpolator513: TOrientationInterpolatorNode;
OrientationInterpolator514: TOrientationInterpolatorNode;
OrientationInterpolator515: TOrientationInterpolatorNode;
OrientationInterpolator516: TOrientationInterpolatorNode;
OrientationInterpolator517: TOrientationInterpolatorNode;
OrientationInterpolator518: TOrientationInterpolatorNode;
OrientationInterpolator519: TOrientationInterpolatorNode;
OrientationInterpolator520: TOrientationInterpolatorNode;
OrientationInterpolator521: TOrientationInterpolatorNode;
OrientationInterpolator522: TOrientationInterpolatorNode;
OrientationInterpolator523: TOrientationInterpolatorNode;
OrientationInterpolator524: TOrientationInterpolatorNode;
PositionInterpolator525: TPositionInterpolatorNode;
OrientationInterpolator526: TOrientationInterpolatorNode;
Group527: TGroupNode;
Transform528: TTransformNode;
Shape529: TShapeNode;
IndexedLineSet530: TIndexedLineSetNode;
Color531: TColorNode;
Coordinate532: TCoordinateNode;
ProximitySensor533: TProximitySensorNode;
Transform534: TTransformNode;
Transform535: TTransformNode;
Transform536: TTransformNode;
TouchSensor537: TTouchSensorNode;
Shape538: TShapeNode;
Appearance539: TAppearanceNode;
Material540: TMaterialNode;
Text541: TTextNode;
FontStyle542: TFontStyleNode;
Shape543: TShapeNode;
Appearance544: TAppearanceNode;
Material545: TMaterialNode;
IndexedFaceSet546: TIndexedFaceSetNode;
Coordinate547: TCoordinateNode;
Transform548: TTransformNode;
TouchSensor549: TTouchSensorNode;
Shape550: TShapeNode;
Appearance551: TAppearanceNode;
Material552: TMaterialNode;
Text553: TTextNode;
FontStyle554: TFontStyleNode;
Shape555: TShapeNode;
Appearance556: TAppearanceNode;
Material557: TMaterialNode;
IndexedFaceSet558: TIndexedFaceSetNode;
Transform559: TTransformNode;
TouchSensor560: TTouchSensorNode;
Shape561: TShapeNode;
Appearance562: TAppearanceNode;
Material563: TMaterialNode;
Text564: TTextNode;
FontStyle565: TFontStyleNode;
Shape566: TShapeNode;
Appearance567: TAppearanceNode;
Material568: TMaterialNode;
IndexedFaceSet569: TIndexedFaceSetNode;
Transform570: TTransformNode;
TouchSensor571: TTouchSensorNode;
Shape572: TShapeNode;
Appearance573: TAppearanceNode;
Material574: TMaterialNode;
Text575: TTextNode;
FontStyle576: TFontStyleNode;
Shape577: TShapeNode;
Appearance578: TAppearanceNode;
Material579: TMaterialNode;
IndexedFaceSet580: TIndexedFaceSetNode;
Transform581: TTransformNode;
TouchSensor582: TTouchSensorNode;
Shape583: TShapeNode;
Appearance584: TAppearanceNode;
Material585: TMaterialNode;
Text586: TTextNode;
FontStyle587: TFontStyleNode;
Shape588: TShapeNode;
Appearance589: TAppearanceNode;
Material590: TMaterialNode;
IndexedFaceSet591: TIndexedFaceSetNode;
Transform592: TTransformNode;
TouchSensor593: TTouchSensorNode;
Shape594: TShapeNode;
Appearance595: TAppearanceNode;
Material596: TMaterialNode;
Text597: TTextNode;
FontStyle598: TFontStyleNode;
Shape599: TShapeNode;
Appearance600: TAppearanceNode;
Material601: TMaterialNode;
IndexedFaceSet602: TIndexedFaceSetNode;
Transform603: TTransformNode;
TouchSensor604: TTouchSensorNode;
Shape605: TShapeNode;
Appearance606: TAppearanceNode;
Material607: TMaterialNode;
Text608: TTextNode;
FontStyle609: TFontStyleNode;
Shape610: TShapeNode;
Appearance611: TAppearanceNode;
Material612: TMaterialNode;
IndexedFaceSet613: TIndexedFaceSetNode;
Transform614: TTransformNode;
TouchSensor615: TTouchSensorNode;
Shape616: TShapeNode;
Appearance617: TAppearanceNode;
Material618: TMaterialNode;
Text619: TTextNode;
FontStyle620: TFontStyleNode;
Shape621: TShapeNode;
Appearance622: TAppearanceNode;
Material623: TMaterialNode;
IndexedFaceSet624: TIndexedFaceSetNode;
Transform625: TTransformNode;
TouchSensor626: TTouchSensorNode;
Shape627: TShapeNode;
Appearance628: TAppearanceNode;
Material629: TMaterialNode;
Text630: TTextNode;
FontStyle631: TFontStyleNode;
Shape632: TShapeNode;
Appearance633: TAppearanceNode;
Material634: TMaterialNode;
IndexedFaceSet635: TIndexedFaceSetNode;
Transform636: TTransformNode;
Shape637: TShapeNode;
Appearance638: TAppearanceNode;
Material639: TMaterialNode;
Text640: TTextNode;
FontStyle641: TFontStyleNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'BoxMan4AnimationPanel.x3d';
X3D0.Meta['description'] := 'A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation panel shows multiple behaviors.';
X3D0.Meta['creator'] := 'Joe Williams and James Smith - james@vapourtech.com';
X3D0.Meta['translator'] := 'Joe Williams and Don Brutzman';
X3D0.Meta['generator'] := '.x3d to .x3d translation used BS Contact Geo 8.203';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit';
X3D0.Meta['generator'] := 'x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy';
X3D0.Meta['created'] := '1 March 2001';
X3D0.Meta['revision'] := '12 January 2017';
X3D0.Meta['translated'] := '14 January 2017';
X3D0.Meta['modified'] := 'Tue, 09 Sep 2025 19:37:51 GMT';
X3D0.Meta['Image'] := 'BoxManAnimationPanelInclined.png';
X3D0.Meta['MovingImage'] := 'BoxManAnimationPanel.mp4';
X3D0.Meta['MovingImage'] := 'https://www.youtube.com/watch?v=8tI83Rtg_DU';
X3D0.Meta['reference'] := 'https://twitter.com/Web3DConsortium/status/820638047523913728';
X3D0.Meta['reference'] := 'https://twitter.com/Web3DConsortium/status/820642726009978881';
X3D0.Meta['reference'] := 'http://HAnim.org';
X3D0.Meta['reference'] := '../Legacy/originals/boxman.wrl';
X3D0.Meta['reference'] := 'BoxMan4.x3d';
X3D0.Meta['reference'] := 'http://HAnim.org/Models/HAnim2001/boxman';
X3D0.Meta['reference'] := 'http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl';
X3D0.Meta['reference'] := 'http://www.vapourtech.com/team/james/boxman.wrl';
X3D0.Meta['reference'] := 'http://HAnim.org/Specifications/HAnim2001';
X3D0.Meta['reference'] := 'http://HAnim.org/Models';
X3D0.Meta['reference'] := 'http://HAnim.org/Nodes';
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/content/X3dToVrml97.xslt';
X3D0.Meta['reference'] := 'http://www.vapourtech.com';
X3D0.Meta['TODO'] := 'InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org';
X3D0.Meta['rights'] := '(C) 2000 James Smith - james@vapourtech.com';
Group32 := TGroupNode.Create;
WorldInfo33 := TWorldInfoNode.Create;
WorldInfo33.Title := 'BoxMan - A Seamless VRML Human';
WorldInfo33.SetInfo(['(C) 2000 James Smith - james@vapourtech.com','http://www.vapourtech.com/team/james/boxman.wrl','Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com']);
{ .AddChildren }
Group32.AddChildren([WorldInfo33]);
Background34 := TBackgroundNode.Create;
Background34.SetSkyColor([Vector3(0.75,0.75,0.75)]);
Background34.SetGroundColor([Vector3(0.6,0.6,0.6)]);
{ .AddChildren }
Group32.AddChildren([Background34]);
HAnimHumanoid35 := THAnimHumanoidNode.Create;
HAnimHumanoid35.NameField := 'Humanoid';
HAnimHumanoid35.SetInfo(['authorName=James Smith','authorEmail=james@vapourtech.com','copyright=(C) 2000 James Smith - james@vapourtech.com','humanoidVersion=1.0']);
HAnimHumanoid35.Version := '1.0';
HAnimJoint36 := THAnimJointNode.Create;
HAnimJoint36.NameField := 'humanoid_root';
HAnimJoint36.Center := Vector3(0,0.9723,-0.0728);
HAnimJoint36.SetSkinCoordIndex([0,1,2,3,4,5,6,7,8,9,10,11]);
HAnimJoint36.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment37 := THAnimSegmentNode.Create;
HAnimSegment37.NameField := 'sacrum';
Transform38 := TTransformNode.Create;
Transform38.Translation := Vector3(0,0.9723,-0.0728);
Shape39 := TShapeNode.Create;
Appearance40 := TAppearanceNode.Create;
Material41 := TMaterialNode.Create;
Material41.DiffuseColor := Vector3(1,1,0);
{ .SetMaterial }
Appearance40.Material := Material41;
{ .SetAppearance }
Shape39.Appearance := Appearance40;
Sphere42 := TSphereNode.Create;
Sphere42.Radius := 0.02;
{ .SetGeometry }
Shape39.Geometry := Sphere42;
{ .AddChild }
Transform38.AddChildren([Shape39]);
{ .AddChildren }
HAnimSegment37.AddChildren([Transform38]);
{ .AddChildren }
HAnimJoint36.AddChildren([HAnimSegment37]);
HAnimJoint43 := THAnimJointNode.Create;
HAnimJoint43.NameField := 'l_hip';
HAnimJoint43.Center := Vector3(0.0956,0.9364,0);
HAnimJoint43.SetSkinCoordIndex([12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]);
HAnimJoint43.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimSegment44 := THAnimSegmentNode.Create;
HAnimSegment44.NameField := 'l_thigh';
Transform45 := TTransformNode.Create;
Transform45.Translation := Vector3(0.0956,0.9364,0);
Shape46 := TShapeNode.Create;
Shape46 := Shape39;
{ .AddChild }
Transform45.AddChildren([Shape46]);
{ .AddChildren }
HAnimSegment44.AddChildren([Transform45]);
{ .AddChildren }
HAnimJoint43.AddChildren([HAnimSegment44]);
HAnimJoint47 := THAnimJointNode.Create;
HAnimJoint47.NameField := 'l_knee';
HAnimJoint47.Center := Vector3(0.0956,0.5095,-0.0036);
HAnimJoint47.SetSkinCoordIndex([36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]);
HAnimJoint47.SetSkinCoordWeight([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment48 := THAnimSegmentNode.Create;
HAnimSegment48.NameField := 'l_calf';
Transform49 := TTransformNode.Create;
Transform49.Translation := Vector3(0.0956,0.5095,-0.0036);
Shape50 := TShapeNode.Create;
Shape50 := Shape39;
{ .AddChild }
Transform49.AddChildren([Shape50]);
{ .AddChildren }
HAnimSegment48.AddChildren([Transform49]);
{ .AddChildren }
HAnimJoint47.AddChildren([HAnimSegment48]);
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.NameField := 'l_ankle';
HAnimJoint51.Rotation := Vector4(-1,0,0,0.888471427100471);
HAnimJoint51.Center := Vector3(0.0946,0.0762,-0.0261);
HAnimJoint51.SetSkinCoordIndex([64,65,66,67,68,69,70,71]);
HAnimJoint51.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment52 := THAnimSegmentNode.Create;
HAnimSegment52.NameField := 'l_hindfoot';
Transform53 := TTransformNode.Create;
Transform53.Translation := Vector3(0.0946,0.0762,-0.0261);
Shape54 := TShapeNode.Create;
Shape54 := Shape39;
{ .AddChild }
Transform53.AddChildren([Shape54]);
{ .AddChildren }
HAnimSegment52.AddChildren([Transform53]);
{ .AddChildren }
HAnimJoint51.AddChildren([HAnimSegment52]);
HAnimJoint55 := THAnimJointNode.Create;
HAnimJoint55.NameField := 'l_midtarsal';
HAnimJoint55.Center := Vector3(0.1079,0.0317,0.067);
HAnimJoint55.SetSkinCoordIndex([72,73,74,75,76,77,78,79]);
HAnimJoint55.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment56 := THAnimSegmentNode.Create;
HAnimSegment56.NameField := 'l_middistal';
Transform57 := TTransformNode.Create;
Transform57.Translation := Vector3(0.1079,0.0317,0.067);
Shape58 := TShapeNode.Create;
Shape58 := Shape39;
{ .AddChild }
Transform57.AddChildren([Shape58]);
{ .AddChildren }
HAnimSegment56.AddChildren([Transform57]);
HAnimSite59 := THAnimSiteNode.Create;
HAnimSite59.NameField := 'l_middistal_tip';
HAnimSite59.Translation := Vector3(0.095,0.0005,0.1924);
Shape60 := TShapeNode.Create;
Appearance61 := TAppearanceNode.Create;
Material62 := TMaterialNode.Create;
Material62.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance61.Material := Material62;
{ .SetAppearance }
Shape60.Appearance := Appearance61;
Sphere63 := TSphereNode.Create;
Sphere63.Radius := 0.02;
{ .SetGeometry }
Shape60.Geometry := Sphere63;
{ .AddChildren }
HAnimSite59.AddChildren([Shape60]);
{ .AddChildren }
HAnimSegment56.AddChildren([HAnimSite59]);
{ .AddChildren }
HAnimJoint55.AddChildren([HAnimSegment56]);
{ .AddChildren }
HAnimJoint51.AddChildren([HAnimJoint55]);
{ .AddChildren }
HAnimJoint47.AddChildren([HAnimJoint51]);
{ .AddChildren }
HAnimJoint43.AddChildren([HAnimJoint47]);
{ .AddChildren }
HAnimJoint36.AddChildren([HAnimJoint43]);
HAnimJoint64 := THAnimJointNode.Create;
HAnimJoint64.NameField := 'r_hip';
HAnimJoint64.Rotation := Vector4(-1,0,0,2.01809664178471);
HAnimJoint64.Center := Vector3(-0.0956,0.9364,0);
HAnimJoint64.SetSkinCoordIndex([80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]);
HAnimJoint64.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimSegment65 := THAnimSegmentNode.Create;
HAnimSegment65.NameField := 'r_thigh';
Transform66 := TTransformNode.Create;
Transform66.Translation := Vector3(-0.0956,0.9364,0);
Shape67 := TShapeNode.Create;
Shape67 := Shape39;
{ .AddChild }
Transform66.AddChildren([Shape67]);
{ .AddChildren }
HAnimSegment65.AddChildren([Transform66]);
{ .AddChildren }
HAnimJoint64.AddChildren([HAnimSegment65]);
HAnimJoint68 := THAnimJointNode.Create;
HAnimJoint68.NameField := 'r_knee';
HAnimJoint68.Rotation := Vector4(1,0,0,1.67652764530233);
HAnimJoint68.Center := Vector3(-0.0956,0.5095,-0.0036);
HAnimJoint68.SetSkinCoordIndex([104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]);
HAnimJoint68.SetSkinCoordWeight([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment69 := THAnimSegmentNode.Create;
HAnimSegment69.NameField := 'r_calf';
Transform70 := TTransformNode.Create;
Transform70.Translation := Vector3(-0.0956,0.5095,-0.0036);
Shape71 := TShapeNode.Create;
Shape71 := Shape39;
{ .AddChild }
Transform70.AddChildren([Shape71]);
{ .AddChildren }
HAnimSegment69.AddChildren([Transform70]);
{ .AddChildren }
HAnimJoint68.AddChildren([HAnimSegment69]);
HAnimJoint72 := THAnimJointNode.Create;
HAnimJoint72.NameField := 'r_ankle';
HAnimJoint72.Rotation := Vector4(-1,0,0,0.888471427100471);
HAnimJoint72.Center := Vector3(-0.0946,0.0762,-0.0261);
HAnimJoint72.SetSkinCoordIndex([132,133,134,135,136,137,138,139]);
HAnimJoint72.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment73 := THAnimSegmentNode.Create;
HAnimSegment73.NameField := 'r_hindfoot';
Transform74 := TTransformNode.Create;
Transform74.Translation := Vector3(-0.0946,0.0762,-0.0261);
Shape75 := TShapeNode.Create;
Shape75 := Shape39;
{ .AddChild }
Transform74.AddChildren([Shape75]);
{ .AddChildren }
HAnimSegment73.AddChildren([Transform74]);
{ .AddChildren }
HAnimJoint72.AddChildren([HAnimSegment73]);
HAnimJoint76 := THAnimJointNode.Create;
HAnimJoint76.NameField := 'r_midtarsal';
HAnimJoint76.Center := Vector3(-0.1079,0.0317,0.067);
HAnimJoint76.SetSkinCoordIndex([140,141,142,143,144,145,146,147]);
HAnimJoint76.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment77 := THAnimSegmentNode.Create;
HAnimSegment77.NameField := 'r_middistal';
Transform78 := TTransformNode.Create;
Transform78.Translation := Vector3(-0.1079,0.0317,0.067);
Shape79 := TShapeNode.Create;
Shape79 := Shape39;
{ .AddChild }
Transform78.AddChildren([Shape79]);
{ .AddChildren }
HAnimSegment77.AddChildren([Transform78]);
HAnimSite80 := THAnimSiteNode.Create;
HAnimSite80.NameField := 'r_middistal_tip';
HAnimSite80.Translation := Vector3(-0.095,0.0005,0.1924);
Shape81 := TShapeNode.Create;
Shape81 := Shape60;
{ .AddChildren }
HAnimSite80.AddChildren([Shape81]);
{ .AddChildren }
HAnimSegment77.AddChildren([HAnimSite80]);
{ .AddChildren }
HAnimJoint76.AddChildren([HAnimSegment77]);
{ .AddChildren }
HAnimJoint72.AddChildren([HAnimJoint76]);
{ .AddChildren }
HAnimJoint68.AddChildren([HAnimJoint72]);
{ .AddChildren }
HAnimJoint64.AddChildren([HAnimJoint68]);
{ .AddChildren }
HAnimJoint36.AddChildren([HAnimJoint64]);
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.NameField := 'vl5';
HAnimJoint82.Center := Vector3(0,1.0817,-0.0728);
HAnimJoint82.SetSkinCoordIndex([148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]);
HAnimJoint82.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment83 := THAnimSegmentNode.Create;
HAnimSegment83.NameField := 'l5';
Transform84 := TTransformNode.Create;
Transform84.Translation := Vector3(0,1.0817,-0.0728);
Shape85 := TShapeNode.Create;
Shape85 := Shape39;
{ .AddChild }
Transform84.AddChildren([Shape85]);
{ .AddChildren }
HAnimSegment83.AddChildren([Transform84]);
{ .AddChildren }
HAnimJoint82.AddChildren([HAnimSegment83]);
HAnimJoint86 := THAnimJointNode.Create;
HAnimJoint86.NameField := 'skullbase';
HAnimJoint86.Rotation := Vector4(-0.999999999999998,0,0,0.447704477724534);
HAnimJoint86.Center := Vector3(0,1.644,0.036);
HAnimJoint86.SetSkinCoordIndex([168,169,170,171,172,173,174,175]);
HAnimJoint86.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment87 := THAnimSegmentNode.Create;
HAnimSegment87.NameField := 'skull';
Transform88 := TTransformNode.Create;
Transform88.Translation := Vector3(0,1.644,0.036);
Shape89 := TShapeNode.Create;
Shape89 := Shape39;
{ .AddChild }
Transform88.AddChildren([Shape89]);
{ .AddChildren }
HAnimSegment87.AddChildren([Transform88]);
HAnimSite90 := THAnimSiteNode.Create;
HAnimSite90.NameField := 'skull_tip';
HAnimSite90.Translation := Vector3(-0.0029,1.7771,0.0274);
Shape91 := TShapeNode.Create;
Shape91 := Shape39;
{ .AddChildren }
HAnimSite90.AddChildren([Shape91]);
{ .AddChildren }
HAnimSegment87.AddChildren([HAnimSite90]);
{ .AddChildren }
HAnimJoint86.AddChildren([HAnimSegment87]);
{ .AddChildren }
HAnimJoint82.AddChildren([HAnimJoint86]);
HAnimJoint92 := THAnimJointNode.Create;
HAnimJoint92.NameField := 'l_shoulder';
HAnimJoint92.Rotation := Vector4(-0.235886128343184,0,0.971780702862154,1.74087617232715);
HAnimJoint92.Center := Vector3(0.1968,1.4642,-0.0265);
HAnimJoint92.SetSkinCoordIndex([176,177,178,179,180,181,182,183]);
HAnimJoint92.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment93 := THAnimSegmentNode.Create;
HAnimSegment93.NameField := 'l_upperarm';
Transform94 := TTransformNode.Create;
Transform94.Translation := Vector3(0.1968,1.4642,-0.0265);
Shape95 := TShapeNode.Create;
Shape95 := Shape39;
{ .AddChild }
Transform94.AddChildren([Shape95]);
{ .AddChildren }
HAnimSegment93.AddChildren([Transform94]);
{ .AddChildren }
HAnimJoint92.AddChildren([HAnimSegment93]);
HAnimJoint96 := THAnimJointNode.Create;
HAnimJoint96.NameField := 'l_elbow';
HAnimJoint96.Rotation := Vector4(-0.970142500145332,0.242535625036333,0,2.45770714065071);
HAnimJoint96.Center := Vector3(0.1982,1.1622,-0.0557);
HAnimJoint96.SetSkinCoordIndex([184,185,186,187,188,189,190,191]);
HAnimJoint96.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment97 := THAnimSegmentNode.Create;
HAnimSegment97.NameField := 'l_forearm';
Transform98 := TTransformNode.Create;
Transform98.Translation := Vector3(0.1982,1.1622,-0.0557);
Shape99 := TShapeNode.Create;
Shape99 := Shape39;
{ .AddChild }
Transform98.AddChildren([Shape99]);
{ .AddChildren }
HAnimSegment97.AddChildren([Transform98]);
{ .AddChildren }
HAnimJoint96.AddChildren([HAnimSegment97]);
HAnimJoint100 := THAnimJointNode.Create;
HAnimJoint100.NameField := 'l_wrist';
HAnimJoint100.Rotation := Vector4(0,1,0,0.530093697003094);
HAnimJoint100.Center := Vector3(0.1972,0.8929,-0.069);
HAnimJoint100.SetSkinCoordIndex([192,193,194,195,196,197,198,199]);
HAnimJoint100.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment101 := THAnimSegmentNode.Create;
HAnimSegment101.NameField := 'l_hand';
Transform102 := TTransformNode.Create;
Transform102.Translation := Vector3(0.1972,0.8929,-0.069);
Shape103 := TShapeNode.Create;
Shape103 := Shape39;
{ .AddChild }
Transform102.AddChildren([Shape103]);
{ .AddChildren }
HAnimSegment101.AddChildren([Transform102]);
HAnimSite104 := THAnimSiteNode.Create;
HAnimSite104.NameField := 'l_hand_tip';
HAnimSite104.Translation := Vector3(0.1912,0.6976,-0.071);
Shape105 := TShapeNode.Create;
Shape105 := Shape60;
{ .AddChildren }
HAnimSite104.AddChildren([Shape105]);
{ .AddChildren }
HAnimSegment101.AddChildren([HAnimSite104]);
{ .AddChildren }
HAnimJoint100.AddChildren([HAnimSegment101]);
{ .AddChildren }
HAnimJoint96.AddChildren([HAnimJoint100]);
{ .AddChildren }
HAnimJoint92.AddChildren([HAnimJoint96]);
{ .AddChildren }
HAnimJoint82.AddChildren([HAnimJoint92]);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.NameField := 'r_shoulder';
HAnimJoint106.Rotation := Vector4(0.235886128343184,0,0.971780702862155,4.54230913485243);
HAnimJoint106.Center := Vector3(-0.1968,1.4642,-0.0265);
HAnimJoint106.SetSkinCoordIndex([200,201,202,203,204,205,206,207]);
HAnimJoint106.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment107 := THAnimSegmentNode.Create;
HAnimSegment107.NameField := 'r_upperarm';
Transform108 := TTransformNode.Create;
Transform108.Translation := Vector3(-0.1968,1.4642,-0.0265);
Shape109 := TShapeNode.Create;
Shape109 := Shape39;
{ .AddChild }
Transform108.AddChildren([Shape109]);
{ .AddChildren }
HAnimSegment107.AddChildren([Transform108]);
{ .AddChildren }
HAnimJoint106.AddChildren([HAnimSegment107]);
HAnimJoint110 := THAnimJointNode.Create;
HAnimJoint110.NameField := 'r_elbow';
HAnimJoint110.Rotation := Vector4(0.970142500145332,0.242535625036333,0,3.82547816652888);
HAnimJoint110.Center := Vector3(-0.1982,1.1622,-0.0557);
HAnimJoint110.SetSkinCoordIndex([208,209,210,211,212,213,214,215]);
HAnimJoint110.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment111 := THAnimSegmentNode.Create;
HAnimSegment111.NameField := 'r_forearm';
Transform112 := TTransformNode.Create;
Transform112.Translation := Vector3(-0.1982,1.1622,-0.0557);
Shape113 := TShapeNode.Create;
Shape113 := Shape39;
{ .AddChild }
Transform112.AddChildren([Shape113]);
{ .AddChildren }
HAnimSegment111.AddChildren([Transform112]);
{ .AddChildren }
HAnimJoint110.AddChildren([HAnimSegment111]);
HAnimJoint114 := THAnimJointNode.Create;
HAnimJoint114.NameField := 'r_wrist';
HAnimJoint114.Rotation := Vector4(0,1,0,5.75309161017649);
HAnimJoint114.Center := Vector3(-0.1972,0.8929,-0.069);
HAnimJoint114.SetSkinCoordIndex([216,217,218,219,220,221,222,223]);
HAnimJoint114.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment115 := THAnimSegmentNode.Create;
HAnimSegment115.NameField := 'r_hand';
Transform116 := TTransformNode.Create;
Transform116.Translation := Vector3(-0.1972,0.8929,-0.069);
Shape117 := TShapeNode.Create;
Shape117 := Shape39;
{ .AddChild }
Transform116.AddChildren([Shape117]);
{ .AddChildren }
HAnimSegment115.AddChildren([Transform116]);
HAnimSite118 := THAnimSiteNode.Create;
HAnimSite118.NameField := 'r_hand_tip';
HAnimSite118.Translation := Vector3(-0.1912,0.6976,-0.071);
Shape119 := TShapeNode.Create;
Shape119 := Shape60;
{ .AddChildren }
HAnimSite118.AddChildren([Shape119]);
{ .AddChildren }
HAnimSegment115.AddChildren([HAnimSite118]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimSegment115]);
{ .AddChildren }
HAnimJoint110.AddChildren([HAnimJoint114]);
{ .AddChildren }
HAnimJoint106.AddChildren([HAnimJoint110]);
{ .AddChildren }
HAnimJoint82.AddChildren([HAnimJoint106]);
{ .AddChildren }
HAnimJoint36.AddChildren([HAnimJoint82]);
{ .AddSkeleton }
HAnimHumanoid35.SetSkeleton([HAnimJoint36]);
HAnimJoint120 := THAnimJointNode.Create;
HAnimJoint120 := HAnimJoint36;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint120;
HAnimJoint121 := THAnimJointNode.Create;
HAnimJoint121 := HAnimJoint86;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint121;
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122 := HAnimJoint82;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint122;
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123 := HAnimJoint72;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint123;
HAnimJoint124 := THAnimJointNode.Create;
HAnimJoint124 := HAnimJoint51;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint124;
HAnimJoint125 := THAnimJointNode.Create;
HAnimJoint125 := HAnimJoint110;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint125;
HAnimJoint126 := THAnimJointNode.Create;
HAnimJoint126 := HAnimJoint96;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint126;
HAnimJoint127 := THAnimJointNode.Create;
HAnimJoint127 := HAnimJoint64;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint127;
HAnimJoint128 := THAnimJointNode.Create;
HAnimJoint128 := HAnimJoint43;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint128;
HAnimJoint129 := THAnimJointNode.Create;
HAnimJoint129 := HAnimJoint68;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint129;
HAnimJoint130 := THAnimJointNode.Create;
HAnimJoint130 := HAnimJoint47;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint130;
HAnimJoint131 := THAnimJointNode.Create;
HAnimJoint131 := HAnimJoint76;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint131;
HAnimJoint132 := THAnimJointNode.Create;
HAnimJoint132 := HAnimJoint55;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint132;
HAnimJoint133 := THAnimJointNode.Create;
HAnimJoint133 := HAnimJoint106;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint133;
HAnimJoint134 := THAnimJointNode.Create;
HAnimJoint134 := HAnimJoint92;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint134;
HAnimJoint135 := THAnimJointNode.Create;
HAnimJoint135 := HAnimJoint114;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint135;
HAnimJoint136 := THAnimJointNode.Create;
HAnimJoint136 := HAnimJoint100;
{ .AddJoints }
HAnimHumanoid35.Joints := HAnimJoint136;
HAnimSegment137 := THAnimSegmentNode.Create;
HAnimSegment137 := HAnimSegment37;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment137;
HAnimSegment138 := THAnimSegmentNode.Create;
HAnimSegment138 := HAnimSegment83;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment138;
HAnimSegment139 := THAnimSegmentNode.Create;
HAnimSegment139 := HAnimSegment87;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment139;
HAnimSegment140 := THAnimSegmentNode.Create;
HAnimSegment140 := HAnimSegment48;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment140;
HAnimSegment141 := THAnimSegmentNode.Create;
HAnimSegment141 := HAnimSegment69;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment141;
HAnimSegment142 := THAnimSegmentNode.Create;
HAnimSegment142 := HAnimSegment97;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment142;
HAnimSegment143 := THAnimSegmentNode.Create;
HAnimSegment143 := HAnimSegment111;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment143;
HAnimSegment144 := THAnimSegmentNode.Create;
HAnimSegment144 := HAnimSegment101;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment144;
HAnimSegment145 := THAnimSegmentNode.Create;
HAnimSegment145 := HAnimSegment115;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment145;
HAnimSegment146 := THAnimSegmentNode.Create;
HAnimSegment146 := HAnimSegment52;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment146;
HAnimSegment147 := THAnimSegmentNode.Create;
HAnimSegment147 := HAnimSegment73;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment147;
HAnimSegment148 := THAnimSegmentNode.Create;
HAnimSegment148 := HAnimSegment56;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment148;
HAnimSegment149 := THAnimSegmentNode.Create;
HAnimSegment149 := HAnimSegment77;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment149;
HAnimSegment150 := THAnimSegmentNode.Create;
HAnimSegment150 := HAnimSegment44;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment150;
HAnimSegment151 := THAnimSegmentNode.Create;
HAnimSegment151 := HAnimSegment65;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment151;
HAnimSegment152 := THAnimSegmentNode.Create;
HAnimSegment152 := HAnimSegment93;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment152;
HAnimSegment153 := THAnimSegmentNode.Create;
HAnimSegment153 := HAnimSegment107;
{ .AddSegments }
HAnimHumanoid35.Segments := HAnimSegment153;
HAnimSite154 := THAnimSiteNode.Create;
HAnimSite154 := HAnimSite90;
{ .AddSites }
HAnimHumanoid35.Sites := HAnimSite154;
HAnimSite155 := THAnimSiteNode.Create;
HAnimSite155 := HAnimSite104;
{ .AddSites }
HAnimHumanoid35.Sites := HAnimSite155;
HAnimSite156 := THAnimSiteNode.Create;
HAnimSite156 := HAnimSite118;
{ .AddSites }
HAnimHumanoid35.Sites := HAnimSite156;
HAnimSite157 := THAnimSiteNode.Create;
HAnimSite157 := HAnimSite59;
{ .AddSites }
HAnimHumanoid35.Sites := HAnimSite157;
HAnimSite158 := THAnimSiteNode.Create;
HAnimSite158 := HAnimSite80;
{ .AddSites }
HAnimHumanoid35.Sites := HAnimSite158;
HAnimSite159 := THAnimSiteNode.Create;
HAnimSite159.NameField := 'BoxMan_view';
Viewpoint160 := TViewpointNode.Create;
Viewpoint160.Description := 'Inclined View';
Viewpoint160.Position := Vector3(2,0.9,2);
Viewpoint160.Orientation := Vector4(0,1,0,0.78);
{ .AddChildren }
HAnimSite159.AddChildren([Viewpoint160]);
Viewpoint161 := TViewpointNode.Create;
Viewpoint161.Description := 'Front View';
Viewpoint161.Position := Vector3(0,1,3);
{ .AddChildren }
HAnimSite159.AddChildren([Viewpoint161]);
Viewpoint162 := TViewpointNode.Create;
Viewpoint162.Description := 'Right-side View';
Viewpoint162.Position := Vector3(-3,1,0);
Viewpoint162.Orientation := Vector4(0,1,0,-1.57);
{ .AddChildren }
HAnimSite159.AddChildren([Viewpoint162]);
Viewpoint163 := TViewpointNode.Create;
Viewpoint163.Description := 'Left-side View';
Viewpoint163.Position := Vector3(3,1,0);
Viewpoint163.Orientation := Vector4(0,1,0,1.57);
{ .AddChildren }
HAnimSite159.AddChildren([Viewpoint163]);
Viewpoint164 := TViewpointNode.Create;
Viewpoint164.Description := 'Top View';
Viewpoint164.Position := Vector3(0,3,0);
Viewpoint164.Orientation := Vector4(1,0,0,-1.57);
{ .AddChildren }
HAnimSite159.AddChildren([Viewpoint164]);
{ .SetViewpoints }
HAnimHumanoid35.Viewpoints := HAnimSite159;
Coordinate165 := TCoordinateNode.Create;
Coordinate165.SetPoint([Vector3(-0.05,1,0.05),Vector3(0.05,1,0.05),Vector3(0.03,0.97,-0.1),Vector3(-0.03,0.97,-0.1),Vector3(0.03,0.94,-0.075),Vector3(-0.03,0.94,-0.075),Vector3(0,0.92,0),Vector3(0,0.94,0.03),Vector3(-0.12,1.06,0.05),Vector3(0.12,1.06,0.05),Vector3(0.12,1.06,-0.1),Vector3(-0.12,1.06,-0.1),Vector3(0.0456,0.9364,0.05),Vector3(0.1456,0.9364,0.05),Vector3(0.1456,0.9364,-0.05),Vector3(0.0456,0.9364,-0.05),Vector3(0.0456,0.9,0.05),Vector3(0.1456,0.9,0.05),Vector3(0.1456,0.9,-0.05),Vector3(0.0456,0.9,-0.05),Vector3(0.0456,0.8,0.05),Vector3(0.1456,0.8,0.05),Vector3(0.1456,0.8,-0.05),Vector3(0.0456,0.8,-0.05),Vector3(0.0456,0.7,0.05),Vector3(0.1456,0.7,0.05),Vector3(0.1456,0.7,-0.05),Vector3(0.0456,0.7,-0.05),Vector3(0.0456,0.6,0.05),Vector3(0.1456,0.6,0.05),Vector3(0.1456,0.6,-0.05),Vector3(0.0456,0.6,-0.05),Vector3(0.0456,0.55,0.05),Vector3(0.1456,0.55,0.05),Vector3(0.1456,0.55,-0.05),Vector3(0.0456,0.55,-0.05),Vector3(0.0456,0.52,0.05),Vector3(0.1456,0.52,0.05),Vector3(0.1456,0.52,-0.05),Vector3(0.0456,0.52,-0.05),Vector3(0.0456,0.5,0.05),Vector3(0.1456,0.5,0.05),Vector3(0.1456,0.5,-0.05),Vector3(0.0456,0.5,-0.05),Vector3(0.0454,0.43,0.045),Vector3(0.1454,0.43,0.045),Vector3(0.1454,0.43,-0.055),Vector3(0.0454,0.43,-0.055),Vector3(0.0452,0.36,0.04),Vector3(0.1452,0.36,0.04),Vector3(0.1452,0.36,-0.06),Vector3(0.0452,0.36,-0.06),Vector3(0.045,0.29,0.035),Vector3(0.145,0.29,0.035),Vector3(0.145,0.29,-0.065),Vector3(0.045,0.29,-0.065),Vector3(0.0448,0.21,0.03),Vector3(0.1448,0.21,0.03),Vector3(0.1448,0.21,-0.07),Vector3(0.0448,0.21,-0.07),Vector3(0.0446,0.1262,0.025),Vector3(0.1446,0.1262,0.025),Vector3(0.1446,0.1262,-0.075),Vector3(0.0446,0.1262,-0.075),Vector3(0.0446,0.0762,0.025),Vector3(0.1446,0.0762,0.025),Vector3(0.1446,0,-0.075),Vector3(0.0446,0,-0.075),Vector3(0.0446,0.0562,0.057),Vector3(0.1446,0.0562,0.057),Vector3(0.1446,0,0.057),Vector3(0.0446,0,0.057),Vector3(0.0446,0.0562,0.087),Vector3(0.1446,0.0562,0.087),Vector3(0.1446,0,0.087),Vector3(0.0446,0,0.087),Vector3(0.0446,0.0562,0.1924),Vector3(0.1446,0.0562,0.1924),Vector3(0.1446,0,0.1924),Vector3(0.0446,0,0.1924),Vector3(-0.0456,0.9364,0.05),Vector3(-0.1456,0.9364,0.05),Vector3(-0.1456,0.9364,-0.05),Vector3(-0.0456,0.9364,-0.05),Vector3(-0.0456,0.9,0.05),Vector3(-0.1456,0.9,0.05),Vector3(-0.1456,0.9,-0.05),Vector3(-0.0456,0.9,-0.05),Vector3(-0.0456,0.8,0.05),Vector3(-0.1456,0.8,0.05),Vector3(-0.1456,0.8,-0.05),Vector3(-0.0456,0.8,-0.05),Vector3(-0.0456,0.7,0.05),Vector3(-0.1456,0.7,0.05),Vector3(-0.1456,0.7,-0.05),Vector3(-0.0456,0.7,-0.05),Vector3(-0.0456,0.6,0.05),Vector3(-0.1456,0.6,0.05),Vector3(-0.1456,0.6,-0.05),Vector3(-0.0456,0.6,-0.05),Vector3(-0.0456,0.55,0.05),Vector3(-0.1456,0.55,0.05),Vector3(-0.1456,0.55,-0.05),Vector3(-0.0456,0.55,-0.05),Vector3(-0.0456,0.52,0.05),Vector3(-0.1456,0.52,0.05),Vector3(-0.1456,0.52,-0.05),Vector3(-0.0456,0.52,-0.05),Vector3(-0.0456,0.5,0.05),Vector3(-0.1456,0.5,0.05),Vector3(-0.1456,0.5,-0.05),Vector3(-0.0456,0.5,-0.05),Vector3(-0.0454,0.43,0.045),Vector3(-0.1454,0.43,0.045),Vector3(-0.1454,0.43,-0.055),Vector3(-0.0454,0.43,-0.055),Vector3(-0.0452,0.36,0.04),Vector3(-0.1452,0.36,0.04),Vector3(-0.1452,0.36,-0.06),Vector3(-0.0452,0.36,-0.06),Vector3(-0.045,0.29,0.035),Vector3(-0.145,0.29,0.035),Vector3(-0.145,0.29,-0.065),Vector3(-0.045,0.29,-0.065),Vector3(-0.0448,0.21,0.03),Vector3(-0.1448,0.21,0.03),Vector3(-0.1448,0.21,-0.07),Vector3(-0.0448,0.21,-0.07),Vector3(-0.0446,0.1262,0.025),Vector3(-0.1446,0.1262,0.025),Vector3(-0.1446,0.1262,-0.075),Vector3(-0.0446,0.1262,-0.075),Vector3(-0.0446,0.0762,0.025),Vector3(-0.1446,0.0762,0.025),Vector3(-0.1446,0,-0.075),Vector3(-0.0446,0,-0.075),Vector3(-0.0446,0.0562,0.057),Vector3(-0.1446,0.0562,0.057),Vector3(-0.1446,0,0.057),Vector3(-0.0446,0,0.057),Vector3(-0.0446,0.0562,0.087),Vector3(-0.1446,0.0562,0.087),Vector3(-0.1446,0,0.087),Vector3(-0.0446,0,0.087),Vector3(-0.0446,0.0562,0.1924),Vector3(-0.1446,0.0562,0.1924),Vector3(-0.1446,0,0.1924),Vector3(-0.0446,0,0.1924),Vector3(-0.12,1.1,0.05),Vector3(0.12,1.1,0.05),Vector3(0.12,1.1,-0.1),Vector3(-0.12,1.1,-0.1),Vector3(-0.14,1.42,0.045),Vector3(0.14,1.42,0.045),Vector3(0.14,1.42,-0.09),Vector3(-0.14,1.42,-0.09),Vector3(-0.24,1.52,0.035),Vector3(0.24,1.52,0.035),Vector3(0.24,1.52,-0.09),Vector3(-0.24,1.52,-0.09),Vector3(-0.05,1.56,0.03),Vector3(0.05,1.56,0.03),Vector3(0.05,1.56,-0.06),Vector3(-0.05,1.56,-0.06),Vector3(-0.05,1.6,0.06),Vector3(0.05,1.6,0.06),Vector3(0.05,1.62,-0.03),Vector3(-0.05,1.62,-0.03),Vector3(-0.07,1.777,0.13),Vector3(0.07,1.777,0.13),Vector3(0.07,1.777,-0.03),Vector3(-0.07,1.777,-0.03),Vector3(-0.07,1.6,0.13),Vector3(0.07,1.6,0.13),Vector3(0.07,1.66,-0.03),Vector3(-0.07,1.66,-0.03),Vector3(0.16,1.42,0.015),Vector3(0.24,1.5,0.015),Vector3(0.24,1.5,-0.075),Vector3(0.16,1.42,-0.075),Vector3(0.17,1.18,-0.025),Vector3(0.23,1.18,-0.025),Vector3(0.23,1.18,-0.085),Vector3(0.17,1.18,-0.085),Vector3(0.17,1.14,-0.025),Vector3(0.23,1.14,-0.025),Vector3(0.23,1.14,-0.085),Vector3(0.17,1.14,-0.085),Vector3(0.18,0.91,-0.05),Vector3(0.22,0.91,-0.05),Vector3(0.22,0.91,-0.09),Vector3(0.18,0.91,-0.09),Vector3(0.18,0.87,-0.02),Vector3(0.22,0.87,-0.02),Vector3(0.22,0.87,-0.1),Vector3(0.18,0.87,-0.1),Vector3(0.18,0.6976,-0.02),Vector3(0.22,0.6976,-0.02),Vector3(0.22,0.6976,-0.1),Vector3(0.18,0.6976,-0.1),Vector3(-0.16,1.42,0.015),Vector3(-0.24,1.5,0.015),Vector3(-0.24,1.5,-0.075),Vector3(-0.16,1.42,-0.075),Vector3(-0.17,1.18,-0.025),Vector3(-0.23,1.18,-0.025),Vector3(-0.23,1.18,-0.085),Vector3(-0.17,1.18,-0.085),Vector3(-0.17,1.14,-0.025),Vector3(-0.23,1.14,-0.025),Vector3(-0.23,1.14,-0.085),Vector3(-0.17,1.14,-0.085),Vector3(-0.18,0.91,-0.05),Vector3(-0.22,0.91,-0.05),Vector3(-0.22,0.91,-0.09),Vector3(-0.18,0.91,-0.09),Vector3(-0.18,0.87,-0.02),Vector3(-0.22,0.87,-0.02),Vector3(-0.22,0.87,-0.1),Vector3(-0.18,0.87,-0.1),Vector3(-0.18,0.6976,-0.02),Vector3(-0.22,0.6976,-0.02),Vector3(-0.22,0.6976,-0.1),Vector3(-0.18,0.6976,-0.1)]);
{ .SetSkinCoord }
HAnimHumanoid35.SetSkinCoord(Coordinate165);
Group166 := TGroupNode.Create;
Shape167 := TShapeNode.Create;
Appearance168 := TAppearanceNode.Create;
Material169 := TMaterialNode.Create;
Material169.DiffuseColor := Vector3(0,0,1);
Material169.Transparency := 0.5;
{ .SetMaterial }
Appearance168.Material := Material169;
{ .SetAppearance }
Shape167.Appearance := Appearance168;
IndexedFaceSet170 := TIndexedFaceSetNode.Create;
IndexedFaceSet170.SetCoordIndex([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]);
Coordinate171 := TCoordinateNode.Create;
Coordinate171 := Coordinate165;
{ .SetCoord }
IndexedFaceSet170.Coord := Coordinate171;
{ .SetGeometry }
Shape167.Geometry := IndexedFaceSet170;
{ .AddChildren }
Group166.AddChildren([Shape167]);
Shape172 := TShapeNode.Create;
Appearance173 := TAppearanceNode.Create;
Material174 := TMaterialNode.Create;
Material174.DiffuseColor := Vector3(0,0,0);
Material174.Transparency := 0.5;
{ .SetMaterial }
Appearance173.Material := Material174;
{ .SetAppearance }
Shape172.Appearance := Appearance173;
IndexedFaceSet175 := TIndexedFaceSetNode.Create;
IndexedFaceSet175.SetCoordIndex([60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]);
Coordinate176 := TCoordinateNode.Create;
Coordinate176 := Coordinate165;
{ .SetCoord }
IndexedFaceSet175.Coord := Coordinate176;
{ .SetGeometry }
Shape172.Geometry := IndexedFaceSet175;
{ .AddChildren }
Group166.AddChildren([Shape172]);
Shape177 := TShapeNode.Create;
Appearance178 := TAppearanceNode.Create;
Material179 := TMaterialNode.Create;
Material179.DiffuseColor := Vector3(1,1,0);
Material179.Transparency := 0.5;
{ .SetMaterial }
Appearance178.Material := Material179;
{ .SetAppearance }
Shape177.Appearance := Appearance178;
IndexedFaceSet180 := TIndexedFaceSetNode.Create;
IndexedFaceSet180.SetCoordIndex([148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]);
Coordinate181 := TCoordinateNode.Create;
Coordinate181 := Coordinate165;
{ .SetCoord }
IndexedFaceSet180.Coord := Coordinate181;
{ .SetGeometry }
Shape177.Geometry := IndexedFaceSet180;
{ .AddChildren }
Group166.AddChildren([Shape177]);
Shape182 := TShapeNode.Create;
Appearance183 := TAppearanceNode.Create;
Material184 := TMaterialNode.Create;
Material184.DiffuseColor := Vector3(1,0.75,0.75);
Material184.Transparency := 0.5;
{ .SetMaterial }
Appearance183.Material := Material184;
{ .SetAppearance }
Shape182.Appearance := Appearance183;
IndexedFaceSet185 := TIndexedFaceSetNode.Create;
IndexedFaceSet185.SetCoordIndex([172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
Coordinate186 := TCoordinateNode.Create;
Coordinate186 := Coordinate165;
{ .SetCoord }
IndexedFaceSet185.Coord := Coordinate186;
{ .SetGeometry }
Shape182.Geometry := IndexedFaceSet185;
{ .AddChildren }
Group166.AddChildren([Shape182]);
Shape187 := TShapeNode.Create;
Appearance188 := TAppearanceNode.Create;
Material189 := TMaterialNode.Create;
Material189.DiffuseColor := Vector3(0,0,0);
{ .SetMaterial }
Appearance188.Material := Material189;
{ .SetAppearance }
Shape187.Appearance := Appearance188;
IndexedLineSet190 := TIndexedLineSetNode.Create;
IndexedLineSet190.SetCoordIndex([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
Coordinate191 := TCoordinateNode.Create;
Coordinate191 := Coordinate165;
{ .SetCoord }
IndexedLineSet190.Coord := Coordinate191;
{ .SetGeometry }
Shape187.Geometry := IndexedLineSet190;
{ .AddChildren }
Group166.AddChildren([Shape187]);
{ .SetSkin }
HAnimHumanoid35.SetSkin([Group166]);
{ .AddChildren }
Group32.AddChildren([HAnimHumanoid35]);
Group192 := TGroupNode.Create;
TimeSensor193 := TTimeSensorNode.Create;
TimeSensor193.CycleInterval := 5.73;
TimeSensor193.Loop := True;
{ .AddChildren }
Group192.AddChildren([TimeSensor193]);
PositionInterpolator194 := TPositionInterpolatorNode.Create;
PositionInterpolator194.SetKey([0,0.5,1]);
PositionInterpolator194.SetKeyValue([Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0)]);
{ .AddChildren }
Group192.AddChildren([PositionInterpolator194]);
OrientationInterpolator195 := TOrientationInterpolatorNode.Create;
OrientationInterpolator195.SetKey([0,0.5,1]);
OrientationInterpolator195.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator195]);
OrientationInterpolator196 := TOrientationInterpolatorNode.Create;
OrientationInterpolator196.SetKey([0,0.5,1]);
OrientationInterpolator196.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator196]);
OrientationInterpolator197 := TOrientationInterpolatorNode.Create;
OrientationInterpolator197.SetKey([0,0.5,1]);
OrientationInterpolator197.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator197]);
OrientationInterpolator198 := TOrientationInterpolatorNode.Create;
OrientationInterpolator198.SetKey([0,0.5,1]);
OrientationInterpolator198.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator198]);
OrientationInterpolator199 := TOrientationInterpolatorNode.Create;
OrientationInterpolator199.SetKey([0,0.5,1]);
OrientationInterpolator199.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator199]);
OrientationInterpolator200 := TOrientationInterpolatorNode.Create;
OrientationInterpolator200.SetKey([0,0.5,1]);
OrientationInterpolator200.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator200]);
OrientationInterpolator201 := TOrientationInterpolatorNode.Create;
OrientationInterpolator201.SetKey([0,0.5,1]);
OrientationInterpolator201.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator201]);
OrientationInterpolator202 := TOrientationInterpolatorNode.Create;
OrientationInterpolator202.SetKey([0,0.5,1]);
OrientationInterpolator202.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator202]);
OrientationInterpolator203 := TOrientationInterpolatorNode.Create;
OrientationInterpolator203.SetKey([0,0.5,1]);
OrientationInterpolator203.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator203]);
OrientationInterpolator204 := TOrientationInterpolatorNode.Create;
OrientationInterpolator204.SetKey([0,0.5,1]);
OrientationInterpolator204.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator204]);
OrientationInterpolator205 := TOrientationInterpolatorNode.Create;
OrientationInterpolator205.SetKey([0,0.5,1]);
OrientationInterpolator205.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator205]);
OrientationInterpolator206 := TOrientationInterpolatorNode.Create;
OrientationInterpolator206.SetKey([0,0.5,1]);
OrientationInterpolator206.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator206]);
OrientationInterpolator207 := TOrientationInterpolatorNode.Create;
OrientationInterpolator207.SetKey([0,0.5,1]);
OrientationInterpolator207.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator207]);
OrientationInterpolator208 := TOrientationInterpolatorNode.Create;
OrientationInterpolator208.SetKey([0,0.5,1]);
OrientationInterpolator208.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator208]);
OrientationInterpolator209 := TOrientationInterpolatorNode.Create;
OrientationInterpolator209.SetKey([0,0.5,1]);
OrientationInterpolator209.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator209]);
OrientationInterpolator210 := TOrientationInterpolatorNode.Create;
OrientationInterpolator210.SetKey([0,0.5,1]);
OrientationInterpolator210.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator210]);
OrientationInterpolator211 := TOrientationInterpolatorNode.Create;
OrientationInterpolator211.SetKey([0,0.5,1]);
OrientationInterpolator211.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator211]);
OrientationInterpolator212 := TOrientationInterpolatorNode.Create;
OrientationInterpolator212.SetKey([0,0.5,1]);
OrientationInterpolator212.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator212]);
OrientationInterpolator213 := TOrientationInterpolatorNode.Create;
OrientationInterpolator213.SetKey([0,0.5,1]);
OrientationInterpolator213.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator213]);
OrientationInterpolator214 := TOrientationInterpolatorNode.Create;
OrientationInterpolator214.SetKey([0,0.5,1]);
OrientationInterpolator214.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator214]);
OrientationInterpolator215 := TOrientationInterpolatorNode.Create;
OrientationInterpolator215.SetKey([0,0.5,1]);
OrientationInterpolator215.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator215]);
OrientationInterpolator216 := TOrientationInterpolatorNode.Create;
OrientationInterpolator216.SetKey([0,0.5,1]);
OrientationInterpolator216.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator216]);
OrientationInterpolator217 := TOrientationInterpolatorNode.Create;
OrientationInterpolator217.SetKey([0,0.5,1]);
OrientationInterpolator217.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator217]);
OrientationInterpolator218 := TOrientationInterpolatorNode.Create;
OrientationInterpolator218.SetKey([0,0.5,1]);
OrientationInterpolator218.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator218]);
OrientationInterpolator219 := TOrientationInterpolatorNode.Create;
OrientationInterpolator219.SetKey([0,0.5,1]);
OrientationInterpolator219.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator219]);
OrientationInterpolator220 := TOrientationInterpolatorNode.Create;
OrientationInterpolator220.SetKey([0,0.5,1]);
OrientationInterpolator220.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator220]);
OrientationInterpolator221 := TOrientationInterpolatorNode.Create;
OrientationInterpolator221.SetKey([0,0.5,1]);
OrientationInterpolator221.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator221]);
OrientationInterpolator222 := TOrientationInterpolatorNode.Create;
OrientationInterpolator222.SetKey([0,0.5,1]);
OrientationInterpolator222.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator222]);
OrientationInterpolator223 := TOrientationInterpolatorNode.Create;
OrientationInterpolator223.SetKey([0,0.5,1]);
OrientationInterpolator223.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator223]);
OrientationInterpolator224 := TOrientationInterpolatorNode.Create;
OrientationInterpolator224.SetKey([0,0.5,1]);
OrientationInterpolator224.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator224]);
OrientationInterpolator225 := TOrientationInterpolatorNode.Create;
OrientationInterpolator225.SetKey([0,0.5,1]);
OrientationInterpolator225.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator225]);
OrientationInterpolator226 := TOrientationInterpolatorNode.Create;
OrientationInterpolator226.SetKey([0,0.5,1]);
OrientationInterpolator226.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator226]);
OrientationInterpolator227 := TOrientationInterpolatorNode.Create;
OrientationInterpolator227.SetKey([0,0.5,1]);
OrientationInterpolator227.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator227]);
OrientationInterpolator228 := TOrientationInterpolatorNode.Create;
OrientationInterpolator228.SetKey([0,0.5,1]);
OrientationInterpolator228.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator228]);
OrientationInterpolator229 := TOrientationInterpolatorNode.Create;
OrientationInterpolator229.SetKey([0,0.5,1]);
OrientationInterpolator229.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator229]);
OrientationInterpolator230 := TOrientationInterpolatorNode.Create;
OrientationInterpolator230.SetKey([0,0.5,1]);
OrientationInterpolator230.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator230]);
OrientationInterpolator231 := TOrientationInterpolatorNode.Create;
OrientationInterpolator231.SetKey([0,0.5,1]);
OrientationInterpolator231.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator231]);
OrientationInterpolator232 := TOrientationInterpolatorNode.Create;
OrientationInterpolator232.SetKey([0,0.5,1]);
OrientationInterpolator232.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator232]);
OrientationInterpolator233 := TOrientationInterpolatorNode.Create;
OrientationInterpolator233.SetKey([0,0.5,1]);
OrientationInterpolator233.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator233]);
OrientationInterpolator234 := TOrientationInterpolatorNode.Create;
OrientationInterpolator234.SetKey([0,0.5,1]);
OrientationInterpolator234.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator234]);
OrientationInterpolator235 := TOrientationInterpolatorNode.Create;
OrientationInterpolator235.SetKey([0,0.5,1]);
OrientationInterpolator235.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator235]);
OrientationInterpolator236 := TOrientationInterpolatorNode.Create;
OrientationInterpolator236.SetKey([0,0.5,1]);
OrientationInterpolator236.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator236]);
OrientationInterpolator237 := TOrientationInterpolatorNode.Create;
OrientationInterpolator237.SetKey([0,0.5,1]);
OrientationInterpolator237.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator237]);
OrientationInterpolator238 := TOrientationInterpolatorNode.Create;
OrientationInterpolator238.SetKey([0,0.5,1]);
OrientationInterpolator238.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator238]);
OrientationInterpolator239 := TOrientationInterpolatorNode.Create;
OrientationInterpolator239.SetKey([0,0.5,1]);
OrientationInterpolator239.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator239]);
OrientationInterpolator240 := TOrientationInterpolatorNode.Create;
OrientationInterpolator240.SetKey([0,0.5,1]);
OrientationInterpolator240.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator240]);
OrientationInterpolator241 := TOrientationInterpolatorNode.Create;
OrientationInterpolator241.SetKey([0,0.5,1]);
OrientationInterpolator241.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator241]);
OrientationInterpolator242 := TOrientationInterpolatorNode.Create;
OrientationInterpolator242.SetKey([0,0.5,1]);
OrientationInterpolator242.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator242]);
OrientationInterpolator243 := TOrientationInterpolatorNode.Create;
OrientationInterpolator243.SetKey([0,0.5,1]);
OrientationInterpolator243.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator243]);
OrientationInterpolator244 := TOrientationInterpolatorNode.Create;
OrientationInterpolator244.SetKey([0,0.5,1]);
OrientationInterpolator244.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator244]);
OrientationInterpolator245 := TOrientationInterpolatorNode.Create;
OrientationInterpolator245.SetKey([0,0.5,1]);
OrientationInterpolator245.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator245]);
OrientationInterpolator246 := TOrientationInterpolatorNode.Create;
OrientationInterpolator246.SetKey([0,0.5,1]);
OrientationInterpolator246.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator246]);
OrientationInterpolator247 := TOrientationInterpolatorNode.Create;
OrientationInterpolator247.SetKey([0,0.5,1]);
OrientationInterpolator247.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator247]);
OrientationInterpolator248 := TOrientationInterpolatorNode.Create;
OrientationInterpolator248.SetKey([0,0.5,1]);
OrientationInterpolator248.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator248]);
OrientationInterpolator249 := TOrientationInterpolatorNode.Create;
OrientationInterpolator249.SetKey([0,0.5,1]);
OrientationInterpolator249.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator249]);
OrientationInterpolator250 := TOrientationInterpolatorNode.Create;
OrientationInterpolator250.SetKey([0,0.5,1]);
OrientationInterpolator250.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator250]);
OrientationInterpolator251 := TOrientationInterpolatorNode.Create;
OrientationInterpolator251.SetKey([0,0.5,1]);
OrientationInterpolator251.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator251]);
OrientationInterpolator252 := TOrientationInterpolatorNode.Create;
OrientationInterpolator252.SetKey([0,0.5,1]);
OrientationInterpolator252.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator252]);
OrientationInterpolator253 := TOrientationInterpolatorNode.Create;
OrientationInterpolator253.SetKey([0,0.5,1]);
OrientationInterpolator253.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator253]);
OrientationInterpolator254 := TOrientationInterpolatorNode.Create;
OrientationInterpolator254.SetKey([0,0.5,1]);
OrientationInterpolator254.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator254]);
OrientationInterpolator255 := TOrientationInterpolatorNode.Create;
OrientationInterpolator255.SetKey([0,0.5,1]);
OrientationInterpolator255.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator255]);
OrientationInterpolator256 := TOrientationInterpolatorNode.Create;
OrientationInterpolator256.SetKey([0,0.5,1]);
OrientationInterpolator256.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator256]);
OrientationInterpolator257 := TOrientationInterpolatorNode.Create;
OrientationInterpolator257.SetKey([0,0.5,1]);
OrientationInterpolator257.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator257]);
OrientationInterpolator258 := TOrientationInterpolatorNode.Create;
OrientationInterpolator258.SetKey([0,0.5,1]);
OrientationInterpolator258.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator258]);
OrientationInterpolator259 := TOrientationInterpolatorNode.Create;
OrientationInterpolator259.SetKey([0,0.5,1]);
OrientationInterpolator259.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator259]);
OrientationInterpolator260 := TOrientationInterpolatorNode.Create;
OrientationInterpolator260.SetKey([0,0.5,1]);
OrientationInterpolator260.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator260]);
OrientationInterpolator261 := TOrientationInterpolatorNode.Create;
OrientationInterpolator261.SetKey([0,0.5,1]);
OrientationInterpolator261.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator261]);
OrientationInterpolator262 := TOrientationInterpolatorNode.Create;
OrientationInterpolator262.SetKey([0,0.5,1]);
OrientationInterpolator262.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator262]);
OrientationInterpolator263 := TOrientationInterpolatorNode.Create;
OrientationInterpolator263.SetKey([0,0.5,1]);
OrientationInterpolator263.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator263]);
OrientationInterpolator264 := TOrientationInterpolatorNode.Create;
OrientationInterpolator264.SetKey([0,0.5,1]);
OrientationInterpolator264.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator264]);
OrientationInterpolator265 := TOrientationInterpolatorNode.Create;
OrientationInterpolator265.SetKey([0,0.5,1]);
OrientationInterpolator265.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator265]);
OrientationInterpolator266 := TOrientationInterpolatorNode.Create;
OrientationInterpolator266.SetKey([0,0.5,1]);
OrientationInterpolator266.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator266]);
OrientationInterpolator267 := TOrientationInterpolatorNode.Create;
OrientationInterpolator267.SetKey([0,0.5,1]);
OrientationInterpolator267.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator267]);
OrientationInterpolator268 := TOrientationInterpolatorNode.Create;
OrientationInterpolator268.SetKey([0,0.5,1]);
OrientationInterpolator268.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator268]);
OrientationInterpolator269 := TOrientationInterpolatorNode.Create;
OrientationInterpolator269.SetKey([0,0.5,1]);
OrientationInterpolator269.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator269]);
OrientationInterpolator270 := TOrientationInterpolatorNode.Create;
OrientationInterpolator270.SetKey([0,0.5,1]);
OrientationInterpolator270.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator270]);
OrientationInterpolator271 := TOrientationInterpolatorNode.Create;
OrientationInterpolator271.SetKey([0,0.5,1]);
OrientationInterpolator271.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator271]);
OrientationInterpolator272 := TOrientationInterpolatorNode.Create;
OrientationInterpolator272.SetKey([0,0.5,1]);
OrientationInterpolator272.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator272]);
OrientationInterpolator273 := TOrientationInterpolatorNode.Create;
OrientationInterpolator273.SetKey([0,0.5,1]);
OrientationInterpolator273.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator273]);
OrientationInterpolator274 := TOrientationInterpolatorNode.Create;
OrientationInterpolator274.SetKey([0,0.5,1]);
OrientationInterpolator274.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator274]);
OrientationInterpolator275 := TOrientationInterpolatorNode.Create;
OrientationInterpolator275.SetKey([0,0.5,1]);
OrientationInterpolator275.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator275]);
OrientationInterpolator276 := TOrientationInterpolatorNode.Create;
OrientationInterpolator276.SetKey([0,0.5,1]);
OrientationInterpolator276.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator276]);
OrientationInterpolator277 := TOrientationInterpolatorNode.Create;
OrientationInterpolator277.SetKey([0,0.5,1]);
OrientationInterpolator277.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator277]);
OrientationInterpolator278 := TOrientationInterpolatorNode.Create;
OrientationInterpolator278.SetKey([0,0.5,1]);
OrientationInterpolator278.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator278]);
OrientationInterpolator279 := TOrientationInterpolatorNode.Create;
OrientationInterpolator279.SetKey([0,0.5,1]);
OrientationInterpolator279.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator279]);
OrientationInterpolator280 := TOrientationInterpolatorNode.Create;
OrientationInterpolator280.SetKey([0,0.5,1]);
OrientationInterpolator280.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator280]);
OrientationInterpolator281 := TOrientationInterpolatorNode.Create;
OrientationInterpolator281.SetKey([0,0.5,1]);
OrientationInterpolator281.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator281]);
OrientationInterpolator282 := TOrientationInterpolatorNode.Create;
OrientationInterpolator282.SetKey([0,0.5,1]);
OrientationInterpolator282.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator282]);
OrientationInterpolator283 := TOrientationInterpolatorNode.Create;
OrientationInterpolator283.SetKey([0,0.5,1]);
OrientationInterpolator283.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group192.AddChildren([OrientationInterpolator283]);
{ .AddChildren }
Group32.AddChildren([Group192]);
Group284 := TGroupNode.Create;
TimeSensor285 := TTimeSensorNode.Create;
TimeSensor285.CycleInterval := 5.73;
TimeSensor285.Loop := True;
{ .AddChildren }
Group284.AddChildren([TimeSensor285]);
OrientationInterpolator286 := TOrientationInterpolatorNode.Create;
OrientationInterpolator286.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator286.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.015),Vector4(1,0,0,0.17),Vector4(-1,0,0,0.025),Vector4(1,0,0,0.01),Vector4(1,0,0,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator286]);
OrientationInterpolator287 := TOrientationInterpolatorNode.Create;
OrientationInterpolator287.SetKey([0,0.5,1]);
OrientationInterpolator287.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator287]);
OrientationInterpolator288 := TOrientationInterpolatorNode.Create;
OrientationInterpolator288.SetKey([0,0.5,1]);
OrientationInterpolator288.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator288]);
OrientationInterpolator289 := TOrientationInterpolatorNode.Create;
OrientationInterpolator289.SetKey([0,0.5,1]);
OrientationInterpolator289.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator289]);
OrientationInterpolator290 := TOrientationInterpolatorNode.Create;
OrientationInterpolator290.SetKey([0,0.5,1]);
OrientationInterpolator290.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator290]);
OrientationInterpolator291 := TOrientationInterpolatorNode.Create;
OrientationInterpolator291.SetKey([0,0.5,1]);
OrientationInterpolator291.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator291]);
OrientationInterpolator292 := TOrientationInterpolatorNode.Create;
OrientationInterpolator292.SetKey([0,0.5,1]);
OrientationInterpolator292.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator292]);
OrientationInterpolator293 := TOrientationInterpolatorNode.Create;
OrientationInterpolator293.SetKey([0,0.5,1]);
OrientationInterpolator293.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,-1,0.25),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator293]);
OrientationInterpolator294 := TOrientationInterpolatorNode.Create;
OrientationInterpolator294.SetKey([0,0.5,1]);
OrientationInterpolator294.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator294]);
OrientationInterpolator295 := TOrientationInterpolatorNode.Create;
OrientationInterpolator295.SetKey([0,0.5,1]);
OrientationInterpolator295.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator295]);
OrientationInterpolator296 := TOrientationInterpolatorNode.Create;
OrientationInterpolator296.SetKey([0,0.5,1]);
OrientationInterpolator296.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator296]);
OrientationInterpolator297 := TOrientationInterpolatorNode.Create;
OrientationInterpolator297.SetKey([0,0.5,1]);
OrientationInterpolator297.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator297]);
OrientationInterpolator298 := TOrientationInterpolatorNode.Create;
OrientationInterpolator298.SetKey([0,0.5,1]);
OrientationInterpolator298.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator298]);
OrientationInterpolator299 := TOrientationInterpolatorNode.Create;
OrientationInterpolator299.SetKey([0,0.5,1]);
OrientationInterpolator299.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator299]);
OrientationInterpolator300 := TOrientationInterpolatorNode.Create;
OrientationInterpolator300.SetKey([0,0.5,1]);
OrientationInterpolator300.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator300]);
OrientationInterpolator301 := TOrientationInterpolatorNode.Create;
OrientationInterpolator301.SetKey([0,0.4,0.7,1]);
OrientationInterpolator301.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.5),Vector4(1,0,0,0.45),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator301]);
OrientationInterpolator302 := TOrientationInterpolatorNode.Create;
OrientationInterpolator302.SetKey([0,0.4,0.7,1]);
OrientationInterpolator302.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.5),Vector4(1,0,0,0.45),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator302]);
OrientationInterpolator303 := TOrientationInterpolatorNode.Create;
OrientationInterpolator303.SetKey([0,0.5,1]);
OrientationInterpolator303.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator303]);
OrientationInterpolator304 := TOrientationInterpolatorNode.Create;
OrientationInterpolator304.SetKey([0,0.5,1]);
OrientationInterpolator304.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator304]);
OrientationInterpolator305 := TOrientationInterpolatorNode.Create;
OrientationInterpolator305.SetKey([0,0.5,1]);
OrientationInterpolator305.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator305]);
PositionInterpolator306 := TPositionInterpolatorNode.Create;
PositionInterpolator306.SetKey([0,0.5,1]);
PositionInterpolator306.SetKeyValue([Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0)]);
{ .AddChildren }
Group284.AddChildren([PositionInterpolator306]);
OrientationInterpolator307 := TOrientationInterpolatorNode.Create;
OrientationInterpolator307.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator307.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator307]);
OrientationInterpolator308 := TOrientationInterpolatorNode.Create;
OrientationInterpolator308.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator308.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator308]);
OrientationInterpolator309 := TOrientationInterpolatorNode.Create;
OrientationInterpolator309.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator309.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator309]);
OrientationInterpolator310 := TOrientationInterpolatorNode.Create;
OrientationInterpolator310.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator310.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator310]);
OrientationInterpolator311 := TOrientationInterpolatorNode.Create;
OrientationInterpolator311.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator311.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator311]);
OrientationInterpolator312 := TOrientationInterpolatorNode.Create;
OrientationInterpolator312.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator312.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator312]);
OrientationInterpolator313 := TOrientationInterpolatorNode.Create;
OrientationInterpolator313.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator313.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0),Vector4(0,1,0,0),Vector4(0,1,0,0),Vector4(-1,0,0,0),Vector4(0,-1,0,0),Vector4(0,1,0,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator313]);
OrientationInterpolator314 := TOrientationInterpolatorNode.Create;
OrientationInterpolator314.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator314.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator314]);
OrientationInterpolator315 := TOrientationInterpolatorNode.Create;
OrientationInterpolator315.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator315.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.5),Vector4(1,0,0,0.1),Vector4(1,0,0,0.27),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator315]);
OrientationInterpolator316 := TOrientationInterpolatorNode.Create;
OrientationInterpolator316.SetKey([0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator316.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0.1),Vector4(0,0,1,0.2),Vector4(0,0,1,0.3),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator316]);
OrientationInterpolator317 := TOrientationInterpolatorNode.Create;
OrientationInterpolator317.SetKey([0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator317.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0.4),Vector4(0,0,1,0.32),Vector4(0,0,1,0.25),Vector4(0,0,1,0.2),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator317]);
OrientationInterpolator318 := TOrientationInterpolatorNode.Create;
OrientationInterpolator318.SetKey([0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator318.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0.2),Vector4(0,0,1,0.3),Vector4(0,0,1,0.35),Vector4(0,0,1,0.2),Vector4(0,0,1,0)]);
{ .AddChildren }
Group284.AddChildren([OrientationInterpolator318]);
{ .AddChildren }
Group32.AddChildren([Group284]);
Group319 := TGroupNode.Create;
TimeSensor320 := TTimeSensorNode.Create;
TimeSensor320.CycleInterval := 5.73;
TimeSensor320.Loop := True;
{ .AddChildren }
Group319.AddChildren([TimeSensor320]);
OrientationInterpolator321 := TOrientationInterpolatorNode.Create;
OrientationInterpolator321.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator321.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.5),Vector4(-1,0,0,0.7),Vector4(1,0,0,0.75),Vector4(-1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator321]);
OrientationInterpolator322 := TOrientationInterpolatorNode.Create;
OrientationInterpolator322.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator322.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,1.5),Vector4(0,0,1,0),Vector4(-1,0,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator322]);
OrientationInterpolator323 := TOrientationInterpolatorNode.Create;
OrientationInterpolator323.SetKey([0,0.5,1]);
OrientationInterpolator323.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator323]);
OrientationInterpolator324 := TOrientationInterpolatorNode.Create;
OrientationInterpolator324.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator324.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,1.5),Vector4(0,0,1,0),Vector4(1,0,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator324]);
OrientationInterpolator325 := TOrientationInterpolatorNode.Create;
OrientationInterpolator325.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator325.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,1.5),Vector4(0,0,1,0),Vector4(1,0,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator325]);
OrientationInterpolator326 := TOrientationInterpolatorNode.Create;
OrientationInterpolator326.SetKey([0,0.5,1]);
OrientationInterpolator326.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator326]);
OrientationInterpolator327 := TOrientationInterpolatorNode.Create;
OrientationInterpolator327.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator327.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,1.5),Vector4(0,0,1,0),Vector4(-1,0,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator327]);
OrientationInterpolator328 := TOrientationInterpolatorNode.Create;
OrientationInterpolator328.SetKey([0,0.5,1]);
OrientationInterpolator328.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator328]);
OrientationInterpolator329 := TOrientationInterpolatorNode.Create;
OrientationInterpolator329.SetKey([0,0.5,1]);
OrientationInterpolator329.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator329]);
OrientationInterpolator330 := TOrientationInterpolatorNode.Create;
OrientationInterpolator330.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator330.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,1.5),Vector4(0,0,1,0),Vector4(-1,0,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator330]);
OrientationInterpolator331 := TOrientationInterpolatorNode.Create;
OrientationInterpolator331.SetKey([0,0.5,1]);
OrientationInterpolator331.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator331]);
OrientationInterpolator332 := TOrientationInterpolatorNode.Create;
OrientationInterpolator332.SetKey([0,0.5,1]);
OrientationInterpolator332.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator332]);
OrientationInterpolator333 := TOrientationInterpolatorNode.Create;
OrientationInterpolator333.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator333.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,1.5),Vector4(0,0,1,0),Vector4(1,0,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator333]);
OrientationInterpolator334 := TOrientationInterpolatorNode.Create;
OrientationInterpolator334.SetKey([0,0.5,1]);
OrientationInterpolator334.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator334]);
OrientationInterpolator335 := TOrientationInterpolatorNode.Create;
OrientationInterpolator335.SetKey([0,0.25,0.55,1]);
OrientationInterpolator335.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,0.55),Vector4(-1,0,0,1.05),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator335]);
OrientationInterpolator336 := TOrientationInterpolatorNode.Create;
OrientationInterpolator336.SetKey([0,0.5,1]);
OrientationInterpolator336.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator336]);
OrientationInterpolator337 := TOrientationInterpolatorNode.Create;
OrientationInterpolator337.SetKey([0,0.5,1]);
OrientationInterpolator337.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator337]);
OrientationInterpolator338 := TOrientationInterpolatorNode.Create;
OrientationInterpolator338.SetKey([0,0.5,1]);
OrientationInterpolator338.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator338]);
PositionInterpolator339 := TPositionInterpolatorNode.Create;
PositionInterpolator339.SetKey([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator339.SetKeyValue([Vector3(0,0,0),Vector3(0,-0.15,0),Vector3(0,-0.7,0),Vector3(0,-0.15,0),Vector3(0,0,0),Vector3(0,-0.15,0),Vector3(0,-0.7,0),Vector3(0,-0.15,0),Vector3(0,0,0)]);
{ .AddChildren }
Group319.AddChildren([PositionInterpolator339]);
OrientationInterpolator340 := TOrientationInterpolatorNode.Create;
OrientationInterpolator340.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator340.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator340]);
OrientationInterpolator341 := TOrientationInterpolatorNode.Create;
OrientationInterpolator341.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator341.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator341]);
OrientationInterpolator342 := TOrientationInterpolatorNode.Create;
OrientationInterpolator342.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator342.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator342]);
OrientationInterpolator343 := TOrientationInterpolatorNode.Create;
OrientationInterpolator343.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator343.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator343]);
OrientationInterpolator344 := TOrientationInterpolatorNode.Create;
OrientationInterpolator344.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator344.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator344]);
OrientationInterpolator345 := TOrientationInterpolatorNode.Create;
OrientationInterpolator345.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator345.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator345]);
OrientationInterpolator346 := TOrientationInterpolatorNode.Create;
OrientationInterpolator346.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator346.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator346]);
OrientationInterpolator347 := TOrientationInterpolatorNode.Create;
OrientationInterpolator347.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator347.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.25),Vector4(1,0,0,0.3),Vector4(1,0,0,0.27),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator347]);
OrientationInterpolator348 := TOrientationInterpolatorNode.Create;
OrientationInterpolator348.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator348.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.25),Vector4(1,0,0,0.3),Vector4(1,0,0,0.27),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group319.AddChildren([OrientationInterpolator348]);
{ .AddChildren }
Group32.AddChildren([Group319]);
Group349 := TGroupNode.Create;
TimeSensor350 := TTimeSensorNode.Create;
TimeSensor350.CycleInterval := 5.73;
TimeSensor350.Loop := True;
{ .AddChildren }
Group349.AddChildren([TimeSensor350]);
OrientationInterpolator351 := TOrientationInterpolatorNode.Create;
OrientationInterpolator351.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator351.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator351]);
OrientationInterpolator352 := TOrientationInterpolatorNode.Create;
OrientationInterpolator352.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator352.SetKeyValue([Vector4(0,0,1,0),Vector4(0,-1,0,1.5),Vector4(0,0,1,0),Vector4(0,1,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator352]);
OrientationInterpolator353 := TOrientationInterpolatorNode.Create;
OrientationInterpolator353.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator353.SetKeyValue([Vector4(0,0,1,0),Vector4(0,1,0,1.5),Vector4(0,0,1,0),Vector4(0,-1,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator353]);
OrientationInterpolator354 := TOrientationInterpolatorNode.Create;
OrientationInterpolator354.SetKey([0,0.5,1]);
OrientationInterpolator354.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator354]);
OrientationInterpolator355 := TOrientationInterpolatorNode.Create;
OrientationInterpolator355.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator355.SetKeyValue([Vector4(0,0,1,0),Vector4(0,1,0,1.5),Vector4(0,0,1,0),Vector4(0,-1,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator355]);
OrientationInterpolator356 := TOrientationInterpolatorNode.Create;
OrientationInterpolator356.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator356.SetKeyValue([Vector4(0,0,1,0),Vector4(0,-1,0,1.5),Vector4(0,0,1,0),Vector4(0,1,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator356]);
OrientationInterpolator357 := TOrientationInterpolatorNode.Create;
OrientationInterpolator357.SetKey([0,0.5,1]);
OrientationInterpolator357.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator357]);
OrientationInterpolator358 := TOrientationInterpolatorNode.Create;
OrientationInterpolator358.SetKey([0,0.5,1]);
OrientationInterpolator358.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator358]);
OrientationInterpolator359 := TOrientationInterpolatorNode.Create;
OrientationInterpolator359.SetKey([0,0.5,1]);
OrientationInterpolator359.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator359]);
OrientationInterpolator360 := TOrientationInterpolatorNode.Create;
OrientationInterpolator360.SetKey([0,0.5,1]);
OrientationInterpolator360.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator360]);
OrientationInterpolator361 := TOrientationInterpolatorNode.Create;
OrientationInterpolator361.SetKey([0,0.5,1]);
OrientationInterpolator361.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator361]);
OrientationInterpolator362 := TOrientationInterpolatorNode.Create;
OrientationInterpolator362.SetKey([0,0.5,1]);
OrientationInterpolator362.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator362]);
OrientationInterpolator363 := TOrientationInterpolatorNode.Create;
OrientationInterpolator363.SetKey([0,0.5,1]);
OrientationInterpolator363.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator363]);
OrientationInterpolator364 := TOrientationInterpolatorNode.Create;
OrientationInterpolator364.SetKey([0,0.5,1]);
OrientationInterpolator364.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator364]);
OrientationInterpolator365 := TOrientationInterpolatorNode.Create;
OrientationInterpolator365.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator365.SetKeyValue([Vector4(0,0,1,0),Vector4(0,1,0,1.5),Vector4(0,0,1,0),Vector4(0,-1,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator365]);
OrientationInterpolator366 := TOrientationInterpolatorNode.Create;
OrientationInterpolator366.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator366.SetKeyValue([Vector4(0,0,1,0),Vector4(0,-1,0,1.5),Vector4(0,0,1,0),Vector4(0,1,0,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator366]);
OrientationInterpolator367 := TOrientationInterpolatorNode.Create;
OrientationInterpolator367.SetKey([0,0.5,1]);
OrientationInterpolator367.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator367]);
OrientationInterpolator368 := TOrientationInterpolatorNode.Create;
OrientationInterpolator368.SetKey([0,0.5,1]);
OrientationInterpolator368.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator368]);
PositionInterpolator369 := TPositionInterpolatorNode.Create;
PositionInterpolator369.SetKey([0,0.5,1]);
PositionInterpolator369.SetKeyValue([Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0)]);
{ .AddChildren }
Group349.AddChildren([PositionInterpolator369]);
OrientationInterpolator370 := TOrientationInterpolatorNode.Create;
OrientationInterpolator370.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator370.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator370]);
OrientationInterpolator371 := TOrientationInterpolatorNode.Create;
OrientationInterpolator371.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator371.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator371]);
OrientationInterpolator372 := TOrientationInterpolatorNode.Create;
OrientationInterpolator372.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator372.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator372]);
OrientationInterpolator373 := TOrientationInterpolatorNode.Create;
OrientationInterpolator373.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator373.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator373]);
OrientationInterpolator374 := TOrientationInterpolatorNode.Create;
OrientationInterpolator374.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator374.SetKeyValue([Vector4(0,1,0,0),Vector4(0,-1,0,0.1),Vector4(0,1,0,0),Vector4(0,1,0,0.24),Vector4(0,-1,0,0.4),Vector4(0,1,0,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator374]);
OrientationInterpolator375 := TOrientationInterpolatorNode.Create;
OrientationInterpolator375.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator375.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator375]);
OrientationInterpolator376 := TOrientationInterpolatorNode.Create;
OrientationInterpolator376.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator376.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator376]);
OrientationInterpolator377 := TOrientationInterpolatorNode.Create;
OrientationInterpolator377.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator377.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator377]);
OrientationInterpolator378 := TOrientationInterpolatorNode.Create;
OrientationInterpolator378.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator378.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group349.AddChildren([OrientationInterpolator378]);
{ .AddChildren }
Group32.AddChildren([Group349]);
Group379 := TGroupNode.Create;
TimeSensor380 := TTimeSensorNode.Create;
TimeSensor380.CycleInterval := 5.73;
TimeSensor380.Loop := True;
{ .AddChildren }
Group379.AddChildren([TimeSensor380]);
OrientationInterpolator381 := TOrientationInterpolatorNode.Create;
OrientationInterpolator381.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator381.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator381]);
OrientationInterpolator382 := TOrientationInterpolatorNode.Create;
OrientationInterpolator382.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator382.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator382]);
OrientationInterpolator383 := TOrientationInterpolatorNode.Create;
OrientationInterpolator383.SetKey([0,0.5,1]);
OrientationInterpolator383.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator383]);
OrientationInterpolator384 := TOrientationInterpolatorNode.Create;
OrientationInterpolator384.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator384.SetKeyValue([Vector4(0,0,-1,0),Vector4(0,0,-1,1.5),Vector4(0,0,1,0),Vector4(0,0,-1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator384]);
OrientationInterpolator385 := TOrientationInterpolatorNode.Create;
OrientationInterpolator385.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator385.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,-1,1.5),Vector4(0,0,1,0),Vector4(0,0,-1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator385]);
OrientationInterpolator386 := TOrientationInterpolatorNode.Create;
OrientationInterpolator386.SetKey([0,0.5,1]);
OrientationInterpolator386.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator386]);
OrientationInterpolator387 := TOrientationInterpolatorNode.Create;
OrientationInterpolator387.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator387.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator387]);
OrientationInterpolator388 := TOrientationInterpolatorNode.Create;
OrientationInterpolator388.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator388.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,-1,1.5),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator388]);
OrientationInterpolator389 := TOrientationInterpolatorNode.Create;
OrientationInterpolator389.SetKey([0,0.5,1]);
OrientationInterpolator389.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator389]);
OrientationInterpolator390 := TOrientationInterpolatorNode.Create;
OrientationInterpolator390.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator390.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,-1,1.5),Vector4(0,0,-1,3),Vector4(0,0,-1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator390]);
OrientationInterpolator391 := TOrientationInterpolatorNode.Create;
OrientationInterpolator391.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator391.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0),Vector4(0,0,-1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator391]);
OrientationInterpolator392 := TOrientationInterpolatorNode.Create;
OrientationInterpolator392.SetKey([0,0.5,1]);
OrientationInterpolator392.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator392]);
OrientationInterpolator393 := TOrientationInterpolatorNode.Create;
OrientationInterpolator393.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator393.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,3),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator393]);
OrientationInterpolator394 := TOrientationInterpolatorNode.Create;
OrientationInterpolator394.SetKey([0,0.5,1]);
OrientationInterpolator394.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator394]);
OrientationInterpolator395 := TOrientationInterpolatorNode.Create;
OrientationInterpolator395.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator395.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.25),Vector4(0,0,1,0),Vector4(0,0,-1,1.25),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator395]);
OrientationInterpolator396 := TOrientationInterpolatorNode.Create;
OrientationInterpolator396.SetKey([0,0.5,1]);
OrientationInterpolator396.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator396]);
OrientationInterpolator397 := TOrientationInterpolatorNode.Create;
OrientationInterpolator397.SetKey([0,0.5,1]);
OrientationInterpolator397.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator397]);
OrientationInterpolator398 := TOrientationInterpolatorNode.Create;
OrientationInterpolator398.SetKey([0,0.5,1]);
OrientationInterpolator398.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator398]);
PositionInterpolator399 := TPositionInterpolatorNode.Create;
PositionInterpolator399.SetKey([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator399.SetKeyValue([Vector3(0,0,0),Vector3(0,-0.25,0),Vector3(0,-0.8,0),Vector3(0,-0.25,0),Vector3(0,0,0),Vector3(0,-0.25,0),Vector3(0,-0.8,0),Vector3(0,-0.25,0),Vector3(0,0,0)]);
{ .AddChildren }
Group379.AddChildren([PositionInterpolator399]);
OrientationInterpolator400 := TOrientationInterpolatorNode.Create;
OrientationInterpolator400.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator400.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0.2),Vector4(0,0,1,0.22),Vector4(0,0,1,0.2),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator400]);
OrientationInterpolator401 := TOrientationInterpolatorNode.Create;
OrientationInterpolator401.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator401.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0.05),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator401]);
OrientationInterpolator402 := TOrientationInterpolatorNode.Create;
OrientationInterpolator402.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator402.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,-0.2),Vector4(0,0,1,-0.22),Vector4(0,0,1,-0.2),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator402]);
OrientationInterpolator403 := TOrientationInterpolatorNode.Create;
OrientationInterpolator403.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator403.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,-0.05),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator403]);
OrientationInterpolator404 := TOrientationInterpolatorNode.Create;
OrientationInterpolator404.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator404.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator404]);
OrientationInterpolator405 := TOrientationInterpolatorNode.Create;
OrientationInterpolator405.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator405.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator405]);
OrientationInterpolator406 := TOrientationInterpolatorNode.Create;
OrientationInterpolator406.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator406.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator406]);
OrientationInterpolator407 := TOrientationInterpolatorNode.Create;
OrientationInterpolator407.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator407.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator407]);
OrientationInterpolator408 := TOrientationInterpolatorNode.Create;
OrientationInterpolator408.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator408.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group379.AddChildren([OrientationInterpolator408]);
{ .AddChildren }
Group32.AddChildren([Group379]);
Group409 := TGroupNode.Create;
TimeSensor410 := TTimeSensorNode.Create;
TimeSensor410.CycleInterval := 1.73;
TimeSensor410.Loop := True;
{ .AddChildren }
Group409.AddChildren([TimeSensor410]);
OrientationInterpolator411 := TOrientationInterpolatorNode.Create;
OrientationInterpolator411.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator411.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator411]);
OrientationInterpolator412 := TOrientationInterpolatorNode.Create;
OrientationInterpolator412.SetKey([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator412.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.3533),Vector4(-1,0,0,0.1072),Vector4(1,0,0,0.2612),Vector4(1,0,0,0.1268),Vector4(-1,0,0,0.01793),Vector4(-1,0,0,0.05824),Vector4(-1,0,0,0.2398),Vector4(-1,0,0,0.35),Vector4(-1,0,0,0.3322),Vector4(0,0,1,0)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator412]);
OrientationInterpolator413 := TOrientationInterpolatorNode.Create;
OrientationInterpolator413.SetKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator413.SetKeyValue([Vector4(1,0,0,0.8573),Vector4(1,0,0,0.8926),Vector4(1,0,0,0.5351),Vector4(1,0,0,0.1756),Vector4(1,0,0,0.1194),Vector4(1,0,0,0.3153),Vector4(1,0,0,0.09354),Vector4(1,0,0,0.08558),Vector4(1,0,0,0.2475),Vector4(1,0,0,0.8573)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator413]);
OrientationInterpolator414 := TOrientationInterpolatorNode.Create;
OrientationInterpolator414.SetKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator414.SetKeyValue([Vector4(-0.5831,0.03511,0.8116,0.1481),Vector4(-0.995,0.02296,0.09674,0.4683),Vector4(-1,0.00192,0.007964,0.4732),Vector4(-0.998,-0.0158,-0.06102,0.5079),Vector4(-0.9911,-0.03541,-0.1286,0.5419),Vector4(-0.9131,-0.06243,-0.403,0.3361),Vector4(-0.4306,-0.07962,-0.899,0.07038),Vector4(1,0,0,0.2571),Vector4(0.9891,-0.02805,0.1444,0.3879),Vector4(-0.5831,0.03511,0.8116,0.1481)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator414]);
OrientationInterpolator415 := TOrientationInterpolatorNode.Create;
OrientationInterpolator415.SetKey([0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator415.SetKeyValue([Vector4(-1,0,0,0.06714),Vector4(-1,0,0,0.2152),Vector4(-1,0,0,0.3184),Vector4(-1,0,0,0.4717),Vector4(-1,0,0,0.2912),Vector4(1,0,0,0.1222),Vector4(-1,0,0,0.06714)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator415]);
OrientationInterpolator416 := TOrientationInterpolatorNode.Create;
OrientationInterpolator416.SetKey([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator416.SetKeyValue([Vector4(1,0,0,0.3226),Vector4(1,0,0,0.1556),Vector4(1,0,0,0.08678),Vector4(1,0,0,0.8751),Vector4(1,0,0,1.131),Vector4(1,0,0,0.09961),Vector4(1,0,0,0.3942),Vector4(1,0,0,0.3226)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator416]);
OrientationInterpolator417 := TOrientationInterpolatorNode.Create;
OrientationInterpolator417.SetKey([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator417.SetKeyValue([Vector4(-0.873,0.06094,0.484,0.2865),Vector4(0.9963,-0.01057,0.08481,0.2488),Vector4(0.9965,0.01591,-0.08222,0.3836),Vector4(-0.7018,-0.03223,-0.7117,0.1289),Vector4(-1,0,0,0.5518),Vector4(-0.9964,0.02231,0.0817,0.5351),Vector4(-0.9809,0.04912,0.1881,0.5204),Vector4(-0.873,0.06094,0.484,0.2865)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator417]);
OrientationInterpolator418 := TOrientationInterpolatorNode.Create;
OrientationInterpolator418.SetKey([0,0.5,1]);
OrientationInterpolator418.SetKeyValue([Vector4(0,0,-1,0.1056),Vector4(0,0,1,0.09018),Vector4(0,0,-1,0.1056)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator418]);
OrientationInterpolator419 := TOrientationInterpolatorNode.Create;
OrientationInterpolator419.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator419.SetKeyValue([Vector4(-0.8129,0.4759,-0.3357,0.1346),Vector4(0.1533,-0.9878,0.02582,0.3902),Vector4(-0.5701,0.7604,-0.311,0.366),Vector4(-0.8129,0.4759,-0.3357,0.1346)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator419]);
OrientationInterpolator420 := TOrientationInterpolatorNode.Create;
OrientationInterpolator420.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator420.SetKeyValue([Vector4(-1,0,0,0.411508),Vector4(-1,0,0,0.0925011),Vector4(-1,0,0,0.572568),Vector4(-1,0,0,0.411508)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator420]);
OrientationInterpolator421 := TOrientationInterpolatorNode.Create;
OrientationInterpolator421.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator421.SetKeyValue([Vector4(-1,0,0,0.09346),Vector4(1,0,0,0.3197),Vector4(-1,0,0,0.1564),Vector4(-1,0,0,0.09346)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator421]);
OrientationInterpolator422 := TOrientationInterpolatorNode.Create;
OrientationInterpolator422.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator422.SetKeyValue([Vector4(0,-1,0,0.461076),Vector4(-0.330195,-0.927451,0.175516,0.538852),Vector4(0.0327774,-0.999314,-0.0172185,0.492033),Vector4(0,-1,0,0.461076)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator422]);
OrientationInterpolator423 := TOrientationInterpolatorNode.Create;
OrientationInterpolator423.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator423.SetKeyValue([Vector4(-1,0,0,0.0659878),Vector4(-1,0,0,0.488383),Vector4(-1,0,0,0.0177536),Vector4(-1,0,0,0.0659878)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator423]);
OrientationInterpolator424 := TOrientationInterpolatorNode.Create;
OrientationInterpolator424.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator424.SetKeyValue([Vector4(1,0,0,0.1189),Vector4(-1,0,0,0.1861),Vector4(1,0,0,0.3357),Vector4(1,0,0,0.1189)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator424]);
OrientationInterpolator425 := TOrientationInterpolatorNode.Create;
OrientationInterpolator425.SetKey([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator425.SetKeyValue([Vector4(0,-1,0,0.08642),Vector4(0,1,0,0.1825),Vector4(0,1,0,0.1505),Vector4(0,1,0,0.1053),Vector4(0,1,0,0.04391),Vector4(0,-1,0,0.03119),Vector4(0,-1,0,0.07936),Vector4(0,-1,0,0.1616),Vector4(0,-1,0,0.155),Vector4(0,-1,0,0.08642)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator425]);
OrientationInterpolator426 := TOrientationInterpolatorNode.Create;
OrientationInterpolator426.SetKey([0,1]);
OrientationInterpolator426.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator426]);
OrientationInterpolator427 := TOrientationInterpolatorNode.Create;
OrientationInterpolator427.SetKey([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator427.SetKeyValue([Vector4(0,1,0,0.0826),Vector4(-0.01972,-0.5974,0.8017,0.08231),Vector4(0.009296,-0.9648,0.2627,0.1734),Vector4(-0.01238,0.9549,-0.2968,0.08732),Vector4(-0.008125,0.9691,-0.2463,0.158),Vector4(0,1,0,0.0826)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator427]);
OrientationInterpolator428 := TOrientationInterpolatorNode.Create;
OrientationInterpolator428.SetKey([0,1]);
OrientationInterpolator428.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator428]);
PositionInterpolator429 := TPositionInterpolatorNode.Create;
PositionInterpolator429.SetKey([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator429.SetKeyValue([Vector3(0,-0.00928,0),Vector3(0,-0.003858,0),Vector3(0,-0.008847,0),Vector3(0,-0.01486,0),Vector3(0,-0.02641,0),Vector3(0,-0.03934,0),Vector3(0,-0.0502,0),Vector3(0,-0.07469,0),Vector3(0,-0.02732,0),Vector3(0,-0.01608,0),Vector3(0,-0.01129,0),Vector3(0,-0.005819,0),Vector3(0,-0.002004,0),Vector3(0,-0.002579,0),Vector3(0,-0.0143,0),Vector3(0,-0.03799,0),Vector3(0,-0.05648,0),Vector3(0,-0.045,0),Vector3(0,-0.00928,0)]);
{ .AddChildren }
Group409.AddChildren([PositionInterpolator429]);
OrientationInterpolator430 := TOrientationInterpolatorNode.Create;
OrientationInterpolator430.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator430.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator430]);
OrientationInterpolator431 := TOrientationInterpolatorNode.Create;
OrientationInterpolator431.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator431.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator431]);
OrientationInterpolator432 := TOrientationInterpolatorNode.Create;
OrientationInterpolator432.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator432.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator432]);
OrientationInterpolator433 := TOrientationInterpolatorNode.Create;
OrientationInterpolator433.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator433.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator433]);
OrientationInterpolator434 := TOrientationInterpolatorNode.Create;
OrientationInterpolator434.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator434.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator434]);
OrientationInterpolator435 := TOrientationInterpolatorNode.Create;
OrientationInterpolator435.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator435.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator435]);
OrientationInterpolator436 := TOrientationInterpolatorNode.Create;
OrientationInterpolator436.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator436.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator436]);
OrientationInterpolator437 := TOrientationInterpolatorNode.Create;
OrientationInterpolator437.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator437.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.25),Vector4(1,0,0,0.5),Vector4(1,0,0,0.7),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator437]);
OrientationInterpolator438 := TOrientationInterpolatorNode.Create;
OrientationInterpolator438.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator438.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.25),Vector4(1,0,0,0.5),Vector4(1,0,0,0.7),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group409.AddChildren([OrientationInterpolator438]);
{ .AddChildren }
Group32.AddChildren([Group409]);
Group439 := TGroupNode.Create;
TimeSensor440 := TTimeSensorNode.Create;
TimeSensor440.CycleInterval := 0.9;
TimeSensor440.Loop := True;
{ .AddChildren }
Group439.AddChildren([TimeSensor440]);
OrientationInterpolator441 := TOrientationInterpolatorNode.Create;
OrientationInterpolator441.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator441.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator441]);
OrientationInterpolator442 := TOrientationInterpolatorNode.Create;
OrientationInterpolator442.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator442.SetKeyValue([Vector4(-0.99,0.033,0.04,1.42),Vector4(-0.99,0.1328,0.067,0.42),Vector4(0.99,0.014,0.009,0.9),Vector4(-0.99,0.0703,0.05,0.7),Vector4(-0.99,0.033,0.04,1.42)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator442]);
OrientationInterpolator443 := TOrientationInterpolatorNode.Create;
OrientationInterpolator443.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator443.SetKeyValue([Vector4(1,0,0,1.01),Vector4(1,0,0,0.426),Vector4(1,0,0,0.705),Vector4(1,0,0,2.179),Vector4(1,0,0,1.01)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator443]);
OrientationInterpolator444 := TOrientationInterpolatorNode.Create;
OrientationInterpolator444.SetKey([0,0.22,0.3,0.4,1]);
OrientationInterpolator444.SetKeyValue([Vector4(1,0,0,0.0374),Vector4(-1,0,0,0.1037),Vector4(-1,0,0,0.4328),Vector4(1,0,0,0.1929),Vector4(1,0,0,0.03574)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator444]);
OrientationInterpolator445 := TOrientationInterpolatorNode.Create;
OrientationInterpolator445.SetKey([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator445.SetKeyValue([Vector4(0.99,-0.014,0.009,0.9),Vector4(-0.99,-0.0703,-0.05,0.7),Vector4(-0.99,-0.033,0.04,1.42),Vector4(-0.99,-0.1328,-0.067,0.42),Vector4(0.99,-0.014,0.009,0.9)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator445]);
OrientationInterpolator446 := TOrientationInterpolatorNode.Create;
OrientationInterpolator446.SetKey([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator446.SetKeyValue([Vector4(1,0,0,0.705),Vector4(1,0,0,2.179),Vector4(1,0,0,1.01),Vector4(1,0,0,0.426),Vector4(1,0,0,0.705)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator446]);
OrientationInterpolator447 := TOrientationInterpolatorNode.Create;
OrientationInterpolator447.SetKey([0,0.4,0.71,0.8,0.82,1]);
OrientationInterpolator447.SetKeyValue([Vector4(1,0,0,0.2323),Vector4(-1,0,0,0.07843),Vector4(-1,0,0,0.32),Vector4(-1,0,0,0.374),Vector4(-1,0,0,0.3478),Vector4(1,0,0,0.2323)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator447]);
OrientationInterpolator448 := TOrientationInterpolatorNode.Create;
OrientationInterpolator448.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator448.SetKeyValue([Vector4(0.99,-0.074,0.25,1.5),Vector4(0.99,-0.092,0.44,0.3),Vector4(-0.99,0.136,0.25,0.85),Vector4(0.99,-0.081,0.38,0.4),Vector4(0.99,-0.074,0.25,1.5)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator448]);
OrientationInterpolator449 := TOrientationInterpolatorNode.Create;
OrientationInterpolator449.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator449.SetKeyValue([Vector4(-1,0,0,1.85),Vector4(-0.99,-0.19,0.18,1.35),Vector4(-1,0,0,0.975),Vector4(-0.99,-0.09,-0.02,1.55),Vector4(-1,0,0,1.85)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator449]);
OrientationInterpolator450 := TOrientationInterpolatorNode.Create;
OrientationInterpolator450.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator450.SetKeyValue([Vector4(-0.25,-1,0.08,0.14),Vector4(0.25,1,0.08,0.14),Vector4(0,0,1,0),Vector4(-0.25,1,0.08,-0.14),Vector4(-0.25,1,0.08,0.14)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator450]);
OrientationInterpolator451 := TOrientationInterpolatorNode.Create;
OrientationInterpolator451.SetKey([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator451.SetKeyValue([Vector4(-0.99,-0.136,-0.25,0.85),Vector4(0.99,0.081,-0.38,0.4),Vector4(0.99,0.074,-0.25,1.5),Vector4(0.99,0.081,-0.38,0.4),Vector4(-0.99,-0.136,-0.25,0.85)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator451]);
OrientationInterpolator452 := TOrientationInterpolatorNode.Create;
OrientationInterpolator452.SetKey([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator452.SetKeyValue([Vector4(-1,0,0,0.975),Vector4(-0.99,0.09,0.02,1.55),Vector4(-1,0,0,1.85),Vector4(-0.99,0.19,-0.18,1.35),Vector4(-1,0,0,0.975)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator452]);
OrientationInterpolator453 := TOrientationInterpolatorNode.Create;
OrientationInterpolator453.SetKey([0,1]);
OrientationInterpolator453.SetKeyValue([Vector4(-0.917742,-0.237244,-0.318536,0.214273),Vector4(-0.917742,-0.237244,-0.318536,0.214273)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator453]);
OrientationInterpolator454 := TOrientationInterpolatorNode.Create;
OrientationInterpolator454.SetKey([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator454.SetKeyValue([Vector4(0,-1,0,0.125),Vector4(0,0,1,0),Vector4(0,1,0,0.125),Vector4(0,0,1,0),Vector4(0,-1,0,0.125)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator454]);
OrientationInterpolator455 := TOrientationInterpolatorNode.Create;
OrientationInterpolator455.SetKey([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator455.SetKeyValue([Vector4(1,0,0,0.08),Vector4(1,0,0,0.12),Vector4(1,0,0,0.3),Vector4(1,0,0,0.3),Vector4(1,0,0,0.08)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator455]);
OrientationInterpolator456 := TOrientationInterpolatorNode.Create;
OrientationInterpolator456.SetKey([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator456.SetKeyValue([Vector4(0.7,0,0,0.4),Vector4(-0.7,-0.7,0,0.4),Vector4(0,0,0,0.4),Vector4(-0.7,0.7,0,0.4),Vector4(0.7,0,0,0.4)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator456]);
OrientationInterpolator457 := TOrientationInterpolatorNode.Create;
OrientationInterpolator457.SetKey([0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator457.SetKeyValue([Vector4(0.97,0.65,0.086,0.5),Vector4(0.9,0.003,-0.02,0.38),Vector4(0.95,-0.68,-0.086,0.5),Vector4(0.9,0.004,-0.025,0.4),Vector4(0.97,0.65,0.086,0.5)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator457]);
OrientationInterpolator458 := TOrientationInterpolatorNode.Create;
OrientationInterpolator458.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator458.SetKeyValue([Vector4(1,0,0,0.06),Vector4(1,0,0,0.167),Vector4(1,0,0,0.06),Vector4(1,0,0,0.168),Vector4(1,0,0,0.06)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator458]);
PositionInterpolator459 := TPositionInterpolatorNode.Create;
PositionInterpolator459.SetKey([0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]);
PositionInterpolator459.SetKeyValue([Vector3(0,-0.01,0),Vector3(0,-0.037,0),Vector3(0,-0.049,0),Vector3(0,-0.037,0),Vector3(0,-0.01,0),Vector3(0,-0.037,0),Vector3(0,-0.049,0),Vector3(0,-0.037,0),Vector3(0,-0.01,0)]);
{ .AddChildren }
Group439.AddChildren([PositionInterpolator459]);
OrientationInterpolator460 := TOrientationInterpolatorNode.Create;
OrientationInterpolator460.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator460.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator460]);
OrientationInterpolator461 := TOrientationInterpolatorNode.Create;
OrientationInterpolator461.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator461.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator461]);
OrientationInterpolator462 := TOrientationInterpolatorNode.Create;
OrientationInterpolator462.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator462.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator462]);
OrientationInterpolator463 := TOrientationInterpolatorNode.Create;
OrientationInterpolator463.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator463.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator463]);
OrientationInterpolator464 := TOrientationInterpolatorNode.Create;
OrientationInterpolator464.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator464.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator464]);
OrientationInterpolator465 := TOrientationInterpolatorNode.Create;
OrientationInterpolator465.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator465.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator465]);
OrientationInterpolator466 := TOrientationInterpolatorNode.Create;
OrientationInterpolator466.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator466.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator466]);
OrientationInterpolator467 := TOrientationInterpolatorNode.Create;
OrientationInterpolator467.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator467.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.25),Vector4(1,0,0,0.7),Vector4(1,0,0,0.27),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator467]);
OrientationInterpolator468 := TOrientationInterpolatorNode.Create;
OrientationInterpolator468.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator468.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.25),Vector4(1,0,0,0.7),Vector4(1,0,0,0.27),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group439.AddChildren([OrientationInterpolator468]);
{ .AddChildren }
Group32.AddChildren([Group439]);
Group469 := TGroupNode.Create;
TimeSensor470 := TTimeSensorNode.Create;
TimeSensor470.CycleInterval := 3.73;
TimeSensor470.Loop := True;
{ .AddChildren }
Group469.AddChildren([TimeSensor470]);
OrientationInterpolator471 := TOrientationInterpolatorNode.Create;
OrientationInterpolator471.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator471.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator471]);
OrientationInterpolator472 := TOrientationInterpolatorNode.Create;
OrientationInterpolator472.SetKey([0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator472.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.6735),Vector4(-1,0,0,0.6735),Vector4(-1,0,0,0.3527),Vector4(-1,0,0,0.3038),Vector4(-1,0,0,0.07964),Vector4(1,0,0,1.3),Vector4(1,0,0,0.6509),Vector4(1,0,0,0.3001),Vector4(-1,0,0,0.2087),Vector4(-1,0,0,0.3756),Vector4(-1,0,0,0.3279),Vector4(-1,0,0,0.1193),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator472]);
OrientationInterpolator473 := TOrientationInterpolatorNode.Create;
OrientationInterpolator473.SetKey([0,0.2,0.25,0.3,0.64,0.76,0.88,1]);
OrientationInterpolator473.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,2.5),Vector4(1,0,0,1.7),Vector4(0,0,1,0),Vector4(1,0,0,0.9507),Vector4(1,0,0,0.5845),Vector4(1,0,0,0.9054),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator473]);
OrientationInterpolator474 := TOrientationInterpolatorNode.Create;
OrientationInterpolator474.SetKey([0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator474.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,1.63),Vector4(-1,0,0,1.7),Vector4(-1,0,0,1.55),Vector4(-1,0,0,0.8943),Vector4(-1,0,0,0.3698),Vector4(0,0,1,0),Vector4(-1,0,0,0.4963),Vector4(-1,0,0,0.3829),Vector4(-1,0,0,0.5169),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator474]);
OrientationInterpolator475 := TOrientationInterpolatorNode.Create;
OrientationInterpolator475.SetKey([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator475.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.625),Vector4(-1,0,0,0.625),Vector4(-1,0,0,0.3364),Vector4(-1,0,0,0.2742),Vector4(-1,0,0,0.05078),Vector4(1,0,0,0.2833),Vector4(1,0,0,0.6667),Vector4(1,0,0,0.2833),Vector4(-1,0,0,0.2108),Vector4(-1,0,0,0.375),Vector4(-1,0,0,0.3146),Vector4(-1,0,0,0.1174),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator475]);
OrientationInterpolator476 := TOrientationInterpolatorNode.Create;
OrientationInterpolator476.SetKey([0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator476.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,2.047),Vector4(1,0,0,2.047),Vector4(0,0,1,0),Vector4(1,0,0,1.566),Vector4(1,0,0,0.5913),Vector4(1,0,0,0.9235),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator476]);
OrientationInterpolator477 := TOrientationInterpolatorNode.Create;
OrientationInterpolator477.SetKey([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator477.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,4.349),Vector4(1,0,0,4.349),Vector4(1,0,0,4.615),Vector4(-1,0,0,0.9136),Vector4(-1,0,0,0.3614),Vector4(0,0,1,0),Vector4(-1,0,0,0.7869),Vector4(-1,0,0,0.3918),Vector4(-1,0,0,0.5433),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator477]);
OrientationInterpolator478 := TOrientationInterpolatorNode.Create;
OrientationInterpolator478.SetKey([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator478.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,0.1892),Vector4(1,0,0,0.1892),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator478]);
OrientationInterpolator479 := TOrientationInterpolatorNode.Create;
OrientationInterpolator479.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator479.SetKeyValue([Vector4(0,0,1,0),Vector4(-0.0585279,0.983903,-0.168849,1.85956),Vector4(-0.0585279,0.983903,-0.168849,1.85956),Vector4(-0.00222418,0.99801,-0.0630095,1.46072),Vector4(0,1,0,0.497349),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator479]);
OrientationInterpolator480 := TOrientationInterpolatorNode.Create;
OrientationInterpolator480.SetKey([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator480.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.04151),Vector4(-1,0,0,0.04151),Vector4(-1,0,0,0.5855),Vector4(-1,0,0,0.5852),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator480]);
OrientationInterpolator481 := TOrientationInterpolatorNode.Create;
OrientationInterpolator481.SetKey([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator481.SetKeyValue([Vector4(0,0,1,0),Vector4(0.9992,0.02042,0.03558,4.688),Vector4(0.9992,0.02042,0.03558,4.688),Vector4(0.9989,-0.04623,0.005159,4.079),Vector4(-0.8687,-0.2525,-0.4261,1.501),Vector4(-0.941,-0.2893,-0.1754,0.4788),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator481]);
OrientationInterpolator482 := TOrientationInterpolatorNode.Create;
OrientationInterpolator482.SetKey([0,0.48,0.52,0.64,0.76,0.88,1]);
OrientationInterpolator482.SetKeyValue([Vector4(0,0,1,0),Vector4(0.0672928,0.989475,-0.128107,4.15574),Vector4(0.0672928,0.989475,-0.128107,4.15574),Vector4(0.00364942,0.999901,0.0135896,4.5822),Vector4(0,-1,0,0.655922),Vector4(-0.00050618,-0.999999,0.0012782,1.28397),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator482]);
OrientationInterpolator483 := TOrientationInterpolatorNode.Create;
OrientationInterpolator483.SetKey([0,0.28,0.32,0.58,0.72,1]);
OrientationInterpolator483.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,1.13),Vector4(-1,0,0,1.7),Vector4(-1,0,0,1.7),Vector4(-1,0,0,0.4),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator483]);
OrientationInterpolator484 := TOrientationInterpolatorNode.Create;
OrientationInterpolator484.SetKey([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator484.SetKeyValue([Vector4(0,0,1,0),Vector4(-0.9987,0.02554,0.04498,1.57),Vector4(-0.9987,0.02554,0.04498,1.57),Vector4(1,0.0004113,0.003055,4.114),Vector4(-0.8413,0.3238,0.4329,1.453),Vector4(-0.877,0.4198,0.2337,0.6009),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator484]);
OrientationInterpolator485 := TOrientationInterpolatorNode.Create;
OrientationInterpolator485.SetKey([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator485.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.5989),Vector4(-1,0,0,0.5989),Vector4(-1,0,0,0.3216),Vector4(1,0,0,0.06503),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator485]);
OrientationInterpolator486 := TOrientationInterpolatorNode.Create;
OrientationInterpolator486.SetKey([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator486.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.1942),Vector4(-1,0,0,0.1942),Vector4(0,0,1,0),Vector4(1,0,0,0.2284),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator486]);
OrientationInterpolator487 := TOrientationInterpolatorNode.Create;
OrientationInterpolator487.SetKey([0,0.22,0.28,0.34,0.71,0.88,1]);
OrientationInterpolator487.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,1.05),Vector4(1,0,0,1.051),Vector4(-1,0,0,0.257),Vector4(1,0,0,0.2171),Vector4(1,0,0,0.3465),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator487]);
OrientationInterpolator488 := TOrientationInterpolatorNode.Create;
OrientationInterpolator488.SetKey([0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator488.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,0.3273),Vector4(1,0,0,0.3273),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator488]);
PositionInterpolator489 := TPositionInterpolatorNode.Create;
PositionInterpolator489.SetKey([0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator489.SetKeyValue([Vector3(0,0,0),Vector3(0,-0.01264,-0.01289),Vector3(0,-0.04712,-0.03738),Vector3(-0.0003345,-0.1049,-0.05353),Vector3(-0.0005712,-0.1892,-0.06561),Vector3(-0.0008233,-0.286,-0.06276),Vector3(-0.0009591,-0.3795,-0.05148),Vector3(-0.00106,-0.4484,-0.03656),Vector3(-0.00106,-0.4484,-0.03656),Vector3(-0.001122,-0.25,-0.1499),Vector3(-0.0008616,-0.05,-0.06358),Vector3(-0.0005128,0.15,-0.05488),Vector3(0.0004779,0.55,0.02732),Vector3(0.0001728,1.385,0.006873),Vector3(0.00017,1.395,0.0069),Vector3(0,0.35,0.02148),Vector3(0,-0.01299,-0.01057),Vector3(0,-0.06932,-0.01064),Vector3(0.0001365,-0.1037,-0.005059),Vector3(0.0001279,-0.07198,-0.007596),Vector3(0.000141,-0.01626,-0.004935),Vector3(0,0,0)]);
{ .AddChildren }
Group469.AddChildren([PositionInterpolator489]);
OrientationInterpolator490 := TOrientationInterpolatorNode.Create;
OrientationInterpolator490.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator490.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0.2),Vector4(0,0,1,0.22),Vector4(0,0,1,0.2),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator490]);
OrientationInterpolator491 := TOrientationInterpolatorNode.Create;
OrientationInterpolator491.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator491.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0.05),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator491]);
OrientationInterpolator492 := TOrientationInterpolatorNode.Create;
OrientationInterpolator492.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator492.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,-0.2),Vector4(0,0,1,-0.22),Vector4(0,0,1,-0.2),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator492]);
OrientationInterpolator493 := TOrientationInterpolatorNode.Create;
OrientationInterpolator493.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator493.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,-0.05),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator493]);
OrientationInterpolator494 := TOrientationInterpolatorNode.Create;
OrientationInterpolator494.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator494.SetKeyValue([Vector4(0,1,0,0),Vector4(0,-1,0,0.1),Vector4(0,1,0,0),Vector4(0,1,-1,0.24),Vector4(0,-1,0,0.4),Vector4(0,1,0,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator494]);
OrientationInterpolator495 := TOrientationInterpolatorNode.Create;
OrientationInterpolator495.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator495.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,-0.1),Vector4(0,1,0,0),Vector4(0,1,0,0),Vector4(1,0,0,0.6),Vector4(0,1,0,0.1),Vector4(0,1,0,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator495]);
OrientationInterpolator496 := TOrientationInterpolatorNode.Create;
OrientationInterpolator496.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator496.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0.8),Vector4(0,1,0,0),Vector4(0,1,0,0),Vector4(-1,0,0,0.6),Vector4(0,-1,0,0.8),Vector4(0,1,0,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator496]);
OrientationInterpolator497 := TOrientationInterpolatorNode.Create;
OrientationInterpolator497.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator497.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.5),Vector4(1,0,0,1.1),Vector4(1,0,0,0.7),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator497]);
OrientationInterpolator498 := TOrientationInterpolatorNode.Create;
OrientationInterpolator498.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator498.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.5),Vector4(1,0,0,1.1),Vector4(1,0,0,0.7),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group469.AddChildren([OrientationInterpolator498]);
{ .AddChildren }
Group32.AddChildren([Group469]);
Group499 := TGroupNode.Create;
TimeSensor500 := TTimeSensorNode.Create;
TimeSensor500.CycleInterval := 3.73;
TimeSensor500.Loop := True;
{ .AddChildren }
Group499.AddChildren([TimeSensor500]);
OrientationInterpolator501 := TOrientationInterpolatorNode.Create;
OrientationInterpolator501.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator501.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0.2),Vector4(0,0,1,0.22),Vector4(0,0,1,0.2),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator501]);
OrientationInterpolator502 := TOrientationInterpolatorNode.Create;
OrientationInterpolator502.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator502.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0.05),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator502]);
OrientationInterpolator503 := TOrientationInterpolatorNode.Create;
OrientationInterpolator503.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator503.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.76),Vector4(-0.25,0,1,1.76),Vector4(0,0,1,1.256),Vector4(0,0,1,0.05),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator503]);
OrientationInterpolator504 := TOrientationInterpolatorNode.Create;
OrientationInterpolator504.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator504.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,-0.55),Vector4(-1,0.25,0,2.55),Vector4(1,0,0,0),Vector4(1,0,0,0),Vector4(1,0,0,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator504]);
OrientationInterpolator505 := TOrientationInterpolatorNode.Create;
OrientationInterpolator505.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator505.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,1,0,0.55),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator505]);
OrientationInterpolator506 := TOrientationInterpolatorNode.Create;
OrientationInterpolator506.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator506.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.5),Vector4(1,0,0,1.1),Vector4(1,0,0,0.7),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator506]);
OrientationInterpolator507 := TOrientationInterpolatorNode.Create;
OrientationInterpolator507.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator507.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,-0.2),Vector4(0,0,1,-0.22),Vector4(0,0,1,-0.2),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator507]);
OrientationInterpolator508 := TOrientationInterpolatorNode.Create;
OrientationInterpolator508.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator508.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,-0.05),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator508]);
OrientationInterpolator509 := TOrientationInterpolatorNode.Create;
OrientationInterpolator509.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator509.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,-1.76),Vector4(0.25,0,1,-1.76),Vector4(0,0,1,-1.256),Vector4(0,0,1,-0.05),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator509]);
OrientationInterpolator510 := TOrientationInterpolatorNode.Create;
OrientationInterpolator510.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator510.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,-0.55),Vector4(1,0.25,0,-2.55),Vector4(1,0,0,0),Vector4(1,0,0,0),Vector4(1,0,0,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator510]);
OrientationInterpolator511 := TOrientationInterpolatorNode.Create;
OrientationInterpolator511.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator511.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,1,0,-0.55),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator511]);
OrientationInterpolator512 := TOrientationInterpolatorNode.Create;
OrientationInterpolator512.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator512.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.5),Vector4(1,0,0,1.1),Vector4(1,0,0,0.7),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator512]);
OrientationInterpolator513 := TOrientationInterpolatorNode.Create;
OrientationInterpolator513.SetKey([0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator513.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.9),Vector4(-1,0,0,1.75),Vector4(-1,0,0,2.25),Vector4(-1,0,0,2),Vector4(1,0,0,0),Vector4(1,0,0,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator513]);
OrientationInterpolator514 := TOrientationInterpolatorNode.Create;
OrientationInterpolator514.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator514.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,1.95),Vector4(1,0,0,1.75),Vector4(-1,0,0,0.28),Vector4(1,0,0,0),Vector4(1,0,0,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator514]);
OrientationInterpolator515 := TOrientationInterpolatorNode.Create;
OrientationInterpolator515.SetKey([0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator515.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator515]);
OrientationInterpolator516 := TOrientationInterpolatorNode.Create;
OrientationInterpolator516.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator516.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator516]);
OrientationInterpolator517 := TOrientationInterpolatorNode.Create;
OrientationInterpolator517.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator517.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.9),Vector4(-1,0,0,0.95),Vector4(1,0,0,0.75),Vector4(-1,0,0,0.05),Vector4(1,0,0,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator517]);
OrientationInterpolator518 := TOrientationInterpolatorNode.Create;
OrientationInterpolator518.SetKey([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator518.SetKeyValue([Vector4(1,0,0,0),Vector4(-1,0,0,0.5),Vector4(-1,0,0,0.7),Vector4(1,0,0,0.75),Vector4(-1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator518]);
OrientationInterpolator519 := TOrientationInterpolatorNode.Create;
OrientationInterpolator519.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator519.SetKeyValue([Vector4(0,1,0,0),Vector4(0,-1,0,0.1),Vector4(0,1,0,0),Vector4(0,1,-1,0.24),Vector4(0,-1,0,0.4),Vector4(0,1,0,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator519]);
OrientationInterpolator520 := TOrientationInterpolatorNode.Create;
OrientationInterpolator520.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator520.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator520]);
OrientationInterpolator521 := TOrientationInterpolatorNode.Create;
OrientationInterpolator521.SetKey([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator521.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator521]);
OrientationInterpolator522 := TOrientationInterpolatorNode.Create;
OrientationInterpolator522.SetKey([0,0.5,1]);
OrientationInterpolator522.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator522]);
OrientationInterpolator523 := TOrientationInterpolatorNode.Create;
OrientationInterpolator523.SetKey([0,0.5,1]);
OrientationInterpolator523.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator523]);
OrientationInterpolator524 := TOrientationInterpolatorNode.Create;
OrientationInterpolator524.SetKey([0,0.5,1]);
OrientationInterpolator524.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator524]);
PositionInterpolator525 := TPositionInterpolatorNode.Create;
PositionInterpolator525.SetKey([0,0.5,1]);
PositionInterpolator525.SetKeyValue([Vector3(0,0,0),Vector3(0,0,0),Vector3(0,0,0)]);
{ .AddChildren }
Group499.AddChildren([PositionInterpolator525]);
OrientationInterpolator526 := TOrientationInterpolatorNode.Create;
OrientationInterpolator526.SetKey([0,0.25,0.55,1]);
OrientationInterpolator526.SetKeyValue([Vector4(0,0,1,0),Vector4(1,0,0,0.7),Vector4(1,0,0,0.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group499.AddChildren([OrientationInterpolator526]);
{ .AddChildren }
Group32.AddChildren([Group499]);
Group527 := TGroupNode.Create;
Transform528 := TTransformNode.Create;
Transform528.Scale := Vector3(0.1,0.1,0.1);
Shape529 := TShapeNode.Create;
IndexedLineSet530 := TIndexedLineSetNode.Create;
IndexedLineSet530.ColorPerVertex := False;
IndexedLineSet530.SetColorIndex([0,1,2]);
IndexedLineSet530.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Color531 := TColorNode.Create;
Color531.SetColor([Vector3(1,0,0),Vector3(0,0.6,0),Vector3(0,0,1)]);
{ .SetColor }
IndexedLineSet530.Color := Color531;
Coordinate532 := TCoordinateNode.Create;
Coordinate532.SetPoint([Vector3(0,0,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1)]);
{ .SetCoord }
IndexedLineSet530.Coord := Coordinate532;
{ .SetGeometry }
Shape529.Geometry := IndexedLineSet530;
{ .AddChild }
Transform528.AddChildren([Shape529]);
{ .AddChildren }
Group527.AddChildren([Transform528]);
ProximitySensor533 := TProximitySensorNode.Create;
ProximitySensor533.Size := Vector3(50,50,50);
{ .AddChildren }
Group527.AddChildren([ProximitySensor533]);
Transform534 := TTransformNode.Create;
Transform534.Translation := Vector3(2,1,2);
Transform534.Rotation := Vector4(0,1,0,0.78);
Transform535 := TTransformNode.Create;
Transform535.Translation := Vector3(-0.4,-0.01,-0.75);
Transform535.Scale := Vector3(0.02,0.02,0.02);
Transform536 := TTransformNode.Create;
Transform536.Translation := Vector3(0,-0.9,0);
TouchSensor537 := TTouchSensorNode.Create;
{ .AddChildren }
Transform536.AddChildren([TouchSensor537]);
Shape538 := TShapeNode.Create;
Appearance539 := TAppearanceNode.Create;
Material540 := TMaterialNode.Create;
Material540.AmbientIntensity := 1;
Material540.DiffuseColor := Vector3(0.819,0.521,0.169);
Material540.SpecularColor := Vector3(0.819,0.521,0.169);
Material540.EmissiveColor := Vector3(0.819,0.521,0.169);
{ .SetMaterial }
Appearance539.Material := Material540;
{ .SetAppearance }
Shape538.Appearance := Appearance539;
Text541 := TTextNode.Create;
Text541.SetText(['Stand']);
FontStyle542 := TFontStyleNode.Create;
FontStyle542.Family := ffSans;
{ .SetFontStyle }
Text541.FontStyle := FontStyle542;
{ .SetGeometry }
Shape538.Geometry := Text541;
{ .AddChild }
Transform536.AddChildren([Shape538]);
Shape543 := TShapeNode.Create;
Appearance544 := TAppearanceNode.Create;
Material545 := TMaterialNode.Create;
Material545.AmbientIntensity := 1;
Material545.DiffuseColor := Vector3(0,0.5,0);
Material545.EmissiveColor := Vector3(0,0.5,0);
Material545.Transparency := 0.8;
{ .SetMaterial }
Appearance544.Material := Material545;
{ .SetAppearance }
Shape543.Appearance := Appearance544;
IndexedFaceSet546 := TIndexedFaceSetNode.Create;
IndexedFaceSet546.SetCoordIndex([0,1,2,3,-1]);
Coordinate547 := TCoordinateNode.Create;
Coordinate547.SetPoint([Vector3(-0.2,-0.25,-0.01),Vector3(3,-0.25,-0.01),Vector3(3,1,-0.01),Vector3(-0.2,1,-0.01)]);
{ .SetCoord }
IndexedFaceSet546.Coord := Coordinate547;
{ .SetGeometry }
Shape543.Geometry := IndexedFaceSet546;
{ .AddChild }
Transform536.AddChildren([Shape543]);
{ .AddChildren }
Transform535.AddChildren([Transform536]);
Transform548 := TTransformNode.Create;
Transform548.Translation := Vector3(0,-2.4,0);
TouchSensor549 := TTouchSensorNode.Create;
{ .AddChildren }
Transform548.AddChildren([TouchSensor549]);
Shape550 := TShapeNode.Create;
Appearance551 := TAppearanceNode.Create;
Material552 := TMaterialNode.Create;
Material552 := Material540;
{ .SetMaterial }
Appearance551.Material := Material552;
{ .SetAppearance }
Shape550.Appearance := Appearance551;
Text553 := TTextNode.Create;
Text553.SetText(['Pitch']);
FontStyle554 := TFontStyleNode.Create;
FontStyle554.Family := ffSans;
{ .SetFontStyle }
Text553.FontStyle := FontStyle554;
{ .SetGeometry }
Shape550.Geometry := Text553;
{ .AddChild }
Transform548.AddChildren([Shape550]);
Shape555 := TShapeNode.Create;
Appearance556 := TAppearanceNode.Create;
Material557 := TMaterialNode.Create;
Material557 := Material545;
{ .SetMaterial }
Appearance556.Material := Material557;
{ .SetAppearance }
Shape555.Appearance := Appearance556;
IndexedFaceSet558 := TIndexedFaceSetNode.Create;
IndexedFaceSet558 := IndexedFaceSet546;
{ .SetGeometry }
Shape555.Geometry := IndexedFaceSet558;
{ .AddChild }
Transform548.AddChildren([Shape555]);
{ .AddChildren }
Transform535.AddChildren([Transform548]);
Transform559 := TTransformNode.Create;
Transform559.Translation := Vector3(0,-3.8,0);
TouchSensor560 := TTouchSensorNode.Create;
{ .AddChildren }
Transform559.AddChildren([TouchSensor560]);
Shape561 := TShapeNode.Create;
Appearance562 := TAppearanceNode.Create;
Material563 := TMaterialNode.Create;
Material563 := Material540;
{ .SetMaterial }
Appearance562.Material := Material563;
{ .SetAppearance }
Shape561.Appearance := Appearance562;
Text564 := TTextNode.Create;
Text564.SetText(['Yaw']);
FontStyle565 := TFontStyleNode.Create;
FontStyle565.Family := ffSans;
{ .SetFontStyle }
Text564.FontStyle := FontStyle565;
{ .SetGeometry }
Shape561.Geometry := Text564;
{ .AddChild }
Transform559.AddChildren([Shape561]);
Shape566 := TShapeNode.Create;
Appearance567 := TAppearanceNode.Create;
Material568 := TMaterialNode.Create;
Material568 := Material545;
{ .SetMaterial }
Appearance567.Material := Material568;
{ .SetAppearance }
Shape566.Appearance := Appearance567;
IndexedFaceSet569 := TIndexedFaceSetNode.Create;
IndexedFaceSet569 := IndexedFaceSet546;
{ .SetGeometry }
Shape566.Geometry := IndexedFaceSet569;
{ .AddChild }
Transform559.AddChildren([Shape566]);
{ .AddChildren }
Transform535.AddChildren([Transform559]);
Transform570 := TTransformNode.Create;
Transform570.Translation := Vector3(0,-5.2,0);
TouchSensor571 := TTouchSensorNode.Create;
{ .AddChildren }
Transform570.AddChildren([TouchSensor571]);
Shape572 := TShapeNode.Create;
Appearance573 := TAppearanceNode.Create;
Material574 := TMaterialNode.Create;
Material574 := Material540;
{ .SetMaterial }
Appearance573.Material := Material574;
{ .SetAppearance }
Shape572.Appearance := Appearance573;
Text575 := TTextNode.Create;
Text575.SetText(['Roll']);
FontStyle576 := TFontStyleNode.Create;
FontStyle576.Family := ffSans;
{ .SetFontStyle }
Text575.FontStyle := FontStyle576;
{ .SetGeometry }
Shape572.Geometry := Text575;
{ .AddChild }
Transform570.AddChildren([Shape572]);
Shape577 := TShapeNode.Create;
Appearance578 := TAppearanceNode.Create;
Material579 := TMaterialNode.Create;
Material579 := Material545;
{ .SetMaterial }
Appearance578.Material := Material579;
{ .SetAppearance }
Shape577.Appearance := Appearance578;
IndexedFaceSet580 := TIndexedFaceSetNode.Create;
IndexedFaceSet580 := IndexedFaceSet546;
{ .SetGeometry }
Shape577.Geometry := IndexedFaceSet580;
{ .AddChild }
Transform570.AddChildren([Shape577]);
{ .AddChildren }
Transform535.AddChildren([Transform570]);
Transform581 := TTransformNode.Create;
Transform581.Translation := Vector3(0,-6.6,0);
TouchSensor582 := TTouchSensorNode.Create;
{ .AddChildren }
Transform581.AddChildren([TouchSensor582]);
Shape583 := TShapeNode.Create;
Appearance584 := TAppearanceNode.Create;
Material585 := TMaterialNode.Create;
Material585 := Material540;
{ .SetMaterial }
Appearance584.Material := Material585;
{ .SetAppearance }
Shape583.Appearance := Appearance584;
Text586 := TTextNode.Create;
Text586.SetText(['Walk']);
FontStyle587 := TFontStyleNode.Create;
FontStyle587.Family := ffSans;
{ .SetFontStyle }
Text586.FontStyle := FontStyle587;
{ .SetGeometry }
Shape583.Geometry := Text586;
{ .AddChild }
Transform581.AddChildren([Shape583]);
Shape588 := TShapeNode.Create;
Appearance589 := TAppearanceNode.Create;
Material590 := TMaterialNode.Create;
Material590 := Material545;
{ .SetMaterial }
Appearance589.Material := Material590;
{ .SetAppearance }
Shape588.Appearance := Appearance589;
IndexedFaceSet591 := TIndexedFaceSetNode.Create;
IndexedFaceSet591 := IndexedFaceSet546;
{ .SetGeometry }
Shape588.Geometry := IndexedFaceSet591;
{ .AddChild }
Transform581.AddChildren([Shape588]);
{ .AddChildren }
Transform535.AddChildren([Transform581]);
Transform592 := TTransformNode.Create;
Transform592.Translation := Vector3(0,-8,0);
TouchSensor593 := TTouchSensorNode.Create;
{ .AddChildren }
Transform592.AddChildren([TouchSensor593]);
Shape594 := TShapeNode.Create;
Appearance595 := TAppearanceNode.Create;
Material596 := TMaterialNode.Create;
Material596 := Material540;
{ .SetMaterial }
Appearance595.Material := Material596;
{ .SetAppearance }
Shape594.Appearance := Appearance595;
Text597 := TTextNode.Create;
Text597.SetText(['Run']);
FontStyle598 := TFontStyleNode.Create;
FontStyle598.Family := ffSans;
{ .SetFontStyle }
Text597.FontStyle := FontStyle598;
{ .SetGeometry }
Shape594.Geometry := Text597;
{ .AddChild }
Transform592.AddChildren([Shape594]);
Shape599 := TShapeNode.Create;
Appearance600 := TAppearanceNode.Create;
Material601 := TMaterialNode.Create;
Material601 := Material545;
{ .SetMaterial }
Appearance600.Material := Material601;
{ .SetAppearance }
Shape599.Appearance := Appearance600;
IndexedFaceSet602 := TIndexedFaceSetNode.Create;
IndexedFaceSet602 := IndexedFaceSet546;
{ .SetGeometry }
Shape599.Geometry := IndexedFaceSet602;
{ .AddChild }
Transform592.AddChildren([Shape599]);
{ .AddChildren }
Transform535.AddChildren([Transform592]);
Transform603 := TTransformNode.Create;
Transform603.Translation := Vector3(0,-9.4,0);
TouchSensor604 := TTouchSensorNode.Create;
{ .AddChildren }
Transform603.AddChildren([TouchSensor604]);
Shape605 := TShapeNode.Create;
Appearance606 := TAppearanceNode.Create;
Material607 := TMaterialNode.Create;
Material607 := Material540;
{ .SetMaterial }
Appearance606.Material := Material607;
{ .SetAppearance }
Shape605.Appearance := Appearance606;
Text608 := TTextNode.Create;
Text608.SetText(['Jump']);
FontStyle609 := TFontStyleNode.Create;
FontStyle609.Family := ffSans;
{ .SetFontStyle }
Text608.FontStyle := FontStyle609;
{ .SetGeometry }
Shape605.Geometry := Text608;
{ .AddChild }
Transform603.AddChildren([Shape605]);
Shape610 := TShapeNode.Create;
Appearance611 := TAppearanceNode.Create;
Material612 := TMaterialNode.Create;
Material612 := Material545;
{ .SetMaterial }
Appearance611.Material := Material612;
{ .SetAppearance }
Shape610.Appearance := Appearance611;
IndexedFaceSet613 := TIndexedFaceSetNode.Create;
IndexedFaceSet613 := IndexedFaceSet546;
{ .SetGeometry }
Shape610.Geometry := IndexedFaceSet613;
{ .AddChild }
Transform603.AddChildren([Shape610]);
{ .AddChildren }
Transform535.AddChildren([Transform603]);
Transform614 := TTransformNode.Create;
Transform614.Translation := Vector3(0,-10.8,0);
TouchSensor615 := TTouchSensorNode.Create;
{ .AddChildren }
Transform614.AddChildren([TouchSensor615]);
Shape616 := TShapeNode.Create;
Appearance617 := TAppearanceNode.Create;
Material618 := TMaterialNode.Create;
Material618 := Material540;
{ .SetMaterial }
Appearance617.Material := Material618;
{ .SetAppearance }
Shape616.Appearance := Appearance617;
Text619 := TTextNode.Create;
Text619.SetText(['Kick']);
FontStyle620 := TFontStyleNode.Create;
FontStyle620.Family := ffSans;
{ .SetFontStyle }
Text619.FontStyle := FontStyle620;
{ .SetGeometry }
Shape616.Geometry := Text619;
{ .AddChild }
Transform614.AddChildren([Shape616]);
Shape621 := TShapeNode.Create;
Appearance622 := TAppearanceNode.Create;
Material623 := TMaterialNode.Create;
Material623 := Material545;
{ .SetMaterial }
Appearance622.Material := Material623;
{ .SetAppearance }
Shape621.Appearance := Appearance622;
IndexedFaceSet624 := TIndexedFaceSetNode.Create;
IndexedFaceSet624 := IndexedFaceSet546;
{ .SetGeometry }
Shape621.Geometry := IndexedFaceSet624;
{ .AddChild }
Transform614.AddChildren([Shape621]);
{ .AddChildren }
Transform535.AddChildren([Transform614]);
Transform625 := TTransformNode.Create;
Transform625.Translation := Vector3(0,0.4,0);
TouchSensor626 := TTouchSensorNode.Create;
{ .AddChildren }
Transform625.AddChildren([TouchSensor626]);
Shape627 := TShapeNode.Create;
Appearance628 := TAppearanceNode.Create;
Material629 := TMaterialNode.Create;
Material629 := Material540;
{ .SetMaterial }
Appearance628.Material := Material629;
{ .SetAppearance }
Shape627.Appearance := Appearance628;
Text630 := TTextNode.Create;
Text630.SetText(['Default']);
FontStyle631 := TFontStyleNode.Create;
FontStyle631.Family := ffSans;
{ .SetFontStyle }
Text630.FontStyle := FontStyle631;
{ .SetGeometry }
Shape627.Geometry := Text630;
{ .AddChild }
Transform625.AddChildren([Shape627]);
Shape632 := TShapeNode.Create;
Appearance633 := TAppearanceNode.Create;
Material634 := TMaterialNode.Create;
Material634 := Material545;
{ .SetMaterial }
Appearance633.Material := Material634;
{ .SetAppearance }
Shape632.Appearance := Appearance633;
IndexedFaceSet635 := TIndexedFaceSetNode.Create;
IndexedFaceSet635 := IndexedFaceSet546;
{ .SetGeometry }
Shape632.Geometry := IndexedFaceSet635;
{ .AddChild }
Transform625.AddChildren([Shape632]);
{ .AddChildren }
Transform535.AddChildren([Transform625]);
Transform636 := TTransformNode.Create;
Transform636.Translation := Vector3(1.3,3,0);
Shape637 := TShapeNode.Create;
Appearance638 := TAppearanceNode.Create;
Material639 := TMaterialNode.Create;
Material639 := Material540;
{ .SetMaterial }
Appearance638.Material := Material639;
{ .SetAppearance }
Shape637.Appearance := Appearance638;
Text640 := TTextNode.Create;
Text640.SetText(['BoxMan4','Animation']);
FontStyle641 := TFontStyleNode.Create;
FontStyle641.Family := ffSans;
FontStyle641.Justify := fjMiddle;
FontStyle641.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text640.FontStyle := FontStyle641;
{ .SetGeometry }
Shape637.Geometry := Text640;
{ .AddChild }
Transform636.AddChildren([Shape637]);
{ .AddChildren }
Transform535.AddChildren([Transform636]);
{ .AddChildren }
Transform534.AddChildren([Transform535]);
{ .AddChildren }
Group527.AddChildren([Transform534]);
{ .AddChildren }
Group32.AddChildren([Group527]);
Group32.AddRoute(TimeSensor193.EventFraction_changed, PositionInterpolator194.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator195.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator196.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator197.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator198.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator199.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator200.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator201.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator202.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator203.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator204.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator205.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator206.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator207.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator208.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator209.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator210.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator211.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator212.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator213.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator214.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator215.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator216.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator217.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator218.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator219.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator220.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator221.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator222.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator223.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator224.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator225.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator226.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator227.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator228.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator229.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator230.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator231.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator232.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator233.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator234.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator235.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator236.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator237.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator238.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator239.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator240.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator241.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator242.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator243.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator244.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator245.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator246.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator247.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator248.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator249.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator250.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator251.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator252.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator253.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator254.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator255.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator256.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator257.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator258.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator259.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator260.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator261.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator262.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator263.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator264.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator265.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator266.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator267.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator268.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator269.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator270.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator271.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator272.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator273.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator274.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator275.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator276.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator277.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator278.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator279.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator280.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator281.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator282.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor193.EventFraction_changed, OrientationInterpolator283.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(PositionInterpolator194.EventValue_changed, HAnimJoint36.FdTranslation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator195.EventValue_changed, HAnimJoint36.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator197.EventValue_changed, HAnimJoint43.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator198.EventValue_changed, HAnimJoint47.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator199.EventValue_changed, HAnimJoint51.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator201.EventValue_changed, HAnimJoint55.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator203.EventValue_changed, HAnimJoint64.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator204.EventValue_changed, HAnimJoint68.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator205.EventValue_changed, HAnimJoint72.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator207.EventValue_changed, HAnimJoint76.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator209.EventValue_changed, HAnimJoint82.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator233.EventValue_changed, HAnimJoint86.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator238.EventValue_changed, HAnimJoint92.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator239.EventValue_changed, HAnimJoint96.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator240.EventValue_changed, HAnimJoint100.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator262.EventValue_changed, HAnimJoint106.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator263.EventValue_changed, HAnimJoint110.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator264.EventValue_changed, HAnimJoint114.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator287.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator288.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator289.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator290.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator291.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator292.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator303.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator293.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator294.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator295.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator296.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator297.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator298.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator299.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator300.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator301.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator302.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator304.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator305.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, PositionInterpolator306.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator307.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator308.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator309.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator310.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator286.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator311.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator312.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator313.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator314.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator315.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator316.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator317.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor285.EventFraction_changed, OrientationInterpolator318.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator287.EventValue_changed, HAnimJoint72.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator288.EventValue_changed, HAnimJoint68.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator289.EventValue_changed, HAnimJoint64.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator290.EventValue_changed, HAnimJoint51.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator291.EventValue_changed, HAnimJoint47.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator292.EventValue_changed, HAnimJoint43.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator293.EventValue_changed, HAnimJoint114.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator294.EventValue_changed, HAnimJoint110.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator295.EventValue_changed, HAnimJoint106.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator296.EventValue_changed, HAnimJoint100.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator297.EventValue_changed, HAnimJoint96.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator298.EventValue_changed, HAnimJoint92.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator299.EventValue_changed, HAnimJoint86.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator305.EventValue_changed, HAnimJoint36.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(PositionInterpolator306.EventValue_changed, HAnimJoint36.FdTranslation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator312.EventValue_changed, HAnimJoint82.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator322.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator323.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator324.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator325.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator326.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator327.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator336.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator328.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator329.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator330.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator331.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator332.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator333.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator334.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator335.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator337.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator338.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, PositionInterpolator339.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator340.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator341.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator342.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator343.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator321.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator344.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator345.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator346.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator347.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor320.EventFraction_changed, OrientationInterpolator348.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator322.EventValue_changed, HAnimJoint72.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator323.EventValue_changed, HAnimJoint68.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator324.EventValue_changed, HAnimJoint64.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator325.EventValue_changed, HAnimJoint51.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator326.EventValue_changed, HAnimJoint47.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator327.EventValue_changed, HAnimJoint43.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator328.EventValue_changed, HAnimJoint114.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator329.EventValue_changed, HAnimJoint110.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator330.EventValue_changed, HAnimJoint106.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator331.EventValue_changed, HAnimJoint100.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator332.EventValue_changed, HAnimJoint96.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator333.EventValue_changed, HAnimJoint92.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator334.EventValue_changed, HAnimJoint86.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator338.EventValue_changed, HAnimJoint36.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(PositionInterpolator339.EventValue_changed, HAnimJoint36.FdTranslation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator345.EventValue_changed, HAnimJoint82.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator352.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator353.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator354.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator355.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator356.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator357.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator367.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator358.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator359.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator360.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator361.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator362.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator363.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator364.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator365.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator366.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator368.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, PositionInterpolator369.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator370.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator371.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator372.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator373.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator351.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator374.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator375.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator376.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator377.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor350.EventFraction_changed, OrientationInterpolator378.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator352.EventValue_changed, HAnimJoint72.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator353.EventValue_changed, HAnimJoint68.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator354.EventValue_changed, HAnimJoint64.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator355.EventValue_changed, HAnimJoint51.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator356.EventValue_changed, HAnimJoint47.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator357.EventValue_changed, HAnimJoint43.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator358.EventValue_changed, HAnimJoint114.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator359.EventValue_changed, HAnimJoint110.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator360.EventValue_changed, HAnimJoint106.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator361.EventValue_changed, HAnimJoint100.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator362.EventValue_changed, HAnimJoint96.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator363.EventValue_changed, HAnimJoint92.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator364.EventValue_changed, HAnimJoint86.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator368.EventValue_changed, HAnimJoint36.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(PositionInterpolator369.EventValue_changed, HAnimJoint36.FdTranslation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator375.EventValue_changed, HAnimJoint82.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator382.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator383.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator384.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator385.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator386.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator387.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator396.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator388.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator389.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator390.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator391.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator392.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator393.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator394.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator395.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator397.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator398.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, PositionInterpolator399.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator400.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator401.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator402.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator403.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator381.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator404.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator405.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator406.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator407.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor380.EventFraction_changed, OrientationInterpolator408.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator382.EventValue_changed, HAnimJoint72.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator383.EventValue_changed, HAnimJoint68.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator384.EventValue_changed, HAnimJoint64.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator385.EventValue_changed, HAnimJoint51.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator386.EventValue_changed, HAnimJoint47.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator387.EventValue_changed, HAnimJoint43.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator388.EventValue_changed, HAnimJoint114.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator389.EventValue_changed, HAnimJoint110.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator390.EventValue_changed, HAnimJoint106.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator391.EventValue_changed, HAnimJoint100.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator392.EventValue_changed, HAnimJoint96.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator393.EventValue_changed, HAnimJoint92.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator394.EventValue_changed, HAnimJoint86.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator398.EventValue_changed, HAnimJoint36.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(PositionInterpolator399.EventValue_changed, HAnimJoint36.FdTranslation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator405.EventValue_changed, HAnimJoint82.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator412.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator413.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator414.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator415.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator416.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator417.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator418.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator419.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator420.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator421.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator422.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator423.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator424.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator425.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator426.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator427.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator428.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, PositionInterpolator429.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator430.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator431.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator432.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator433.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator411.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator434.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator435.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator436.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator437.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor410.EventFraction_changed, OrientationInterpolator438.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator412.EventValue_changed, HAnimJoint72.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator413.EventValue_changed, HAnimJoint68.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator414.EventValue_changed, HAnimJoint64.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator415.EventValue_changed, HAnimJoint51.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator416.EventValue_changed, HAnimJoint47.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator417.EventValue_changed, HAnimJoint43.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator419.EventValue_changed, HAnimJoint114.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator420.EventValue_changed, HAnimJoint110.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator421.EventValue_changed, HAnimJoint106.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator422.EventValue_changed, HAnimJoint100.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator423.EventValue_changed, HAnimJoint96.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator424.EventValue_changed, HAnimJoint92.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator425.EventValue_changed, HAnimJoint86.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator428.EventValue_changed, HAnimJoint36.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(PositionInterpolator429.EventValue_changed, HAnimJoint36.FdTranslation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator435.EventValue_changed, HAnimJoint82.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator447.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator446.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator445.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator444.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator443.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator442.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator454.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator453.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator452.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator451.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator450.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator449.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator448.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator455.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator456.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator457.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator458.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, PositionInterpolator459.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator460.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator461.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator462.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator463.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator441.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator464.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator465.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator466.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator467.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor440.EventFraction_changed, OrientationInterpolator468.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator447.EventValue_changed, HAnimJoint72.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator446.EventValue_changed, HAnimJoint68.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator445.EventValue_changed, HAnimJoint64.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator444.EventValue_changed, HAnimJoint51.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator443.EventValue_changed, HAnimJoint47.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator442.EventValue_changed, HAnimJoint43.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator453.EventValue_changed, HAnimJoint114.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator452.EventValue_changed, HAnimJoint110.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator451.EventValue_changed, HAnimJoint106.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator450.EventValue_changed, HAnimJoint100.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator449.EventValue_changed, HAnimJoint96.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator448.EventValue_changed, HAnimJoint92.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator455.EventValue_changed, HAnimJoint86.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator458.EventValue_changed, HAnimJoint36.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(PositionInterpolator459.EventValue_changed, HAnimJoint36.FdTranslation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator465.EventValue_changed, HAnimJoint82.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator472.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator473.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator474.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator475.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator476.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator477.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator478.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator479.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator480.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator481.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator482.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator483.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator484.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator485.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator486.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator487.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator488.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, PositionInterpolator489.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator490.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator491.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator492.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator493.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator471.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator494.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator495.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator496.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator497.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor470.EventFraction_changed, OrientationInterpolator498.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator472.EventValue_changed, HAnimJoint72.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator473.EventValue_changed, HAnimJoint68.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator474.EventValue_changed, HAnimJoint64.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator475.EventValue_changed, HAnimJoint51.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator476.EventValue_changed, HAnimJoint47.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator477.EventValue_changed, HAnimJoint43.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator479.EventValue_changed, HAnimJoint114.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator480.EventValue_changed, HAnimJoint110.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator481.EventValue_changed, HAnimJoint106.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator482.EventValue_changed, HAnimJoint100.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator483.EventValue_changed, HAnimJoint96.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator484.EventValue_changed, HAnimJoint92.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator485.EventValue_changed, HAnimJoint86.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator488.EventValue_changed, HAnimJoint36.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(PositionInterpolator489.EventValue_changed, HAnimJoint36.FdTranslation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator495.EventValue_changed, HAnimJoint82.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator501.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator502.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator503.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator504.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator505.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator506.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator507.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator508.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator509.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator510.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator511.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator512.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator513.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator514.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator515.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator516.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator517.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator518.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator519.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator520.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator521.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator522.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator523.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator524.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, PositionInterpolator525.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(TimeSensor500.EventFraction_changed, OrientationInterpolator526.EventSet_fraction);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator503.EventValue_changed, HAnimJoint92.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator504.EventValue_changed, HAnimJoint96.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator505.EventValue_changed, HAnimJoint100.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator509.EventValue_changed, HAnimJoint106.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator510.EventValue_changed, HAnimJoint110.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator511.EventValue_changed, HAnimJoint114.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator513.EventValue_changed, HAnimJoint64.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator514.EventValue_changed, HAnimJoint68.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator517.EventValue_changed, HAnimJoint72.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator515.EventValue_changed, HAnimJoint43.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator516.EventValue_changed, HAnimJoint47.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator517.EventValue_changed, HAnimJoint51.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator520.EventValue_changed, HAnimJoint82.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(OrientationInterpolator524.EventValue_changed, HAnimJoint36.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(PositionInterpolator525.EventValue_changed, HAnimJoint36.FdTranslation);
{ .AddX3DRoute }
Group32.AddRoute(ProximitySensor533.EventPosition_changed, Transform534.FdTranslation);
{ .AddX3DRoute }
Group32.AddRoute(ProximitySensor533.EventOrientation_changed, Transform534.FdRotation);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor537.EventTouchtime, TimeSensor320.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor537.EventTouchtime, TimeSensor350.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor537.EventTouchtime, TimeSensor380.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor537.EventTouchtime, TimeSensor410.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor537.EventTouchtime, TimeSensor440.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor537.EventTouchtime, TimeSensor470.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor537.EventTouchtime, TimeSensor500.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor537.EventTouchtime, TimeSensor193.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor537.EventTouchtime, TimeSensor285.FdStarttime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor549.EventTouchtime, TimeSensor285.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor549.EventTouchtime, TimeSensor350.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor549.EventTouchtime, TimeSensor380.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor549.EventTouchtime, TimeSensor410.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor549.EventTouchtime, TimeSensor440.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor549.EventTouchtime, TimeSensor470.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor549.EventTouchtime, TimeSensor500.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor549.EventTouchtime, TimeSensor193.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor549.EventTouchtime, TimeSensor320.FdStarttime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor560.EventTouchtime, TimeSensor285.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor560.EventTouchtime, TimeSensor320.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor560.EventTouchtime, TimeSensor380.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor560.EventTouchtime, TimeSensor410.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor560.EventTouchtime, TimeSensor440.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor560.EventTouchtime, TimeSensor470.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor560.EventTouchtime, TimeSensor500.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor560.EventTouchtime, TimeSensor193.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor560.EventTouchtime, TimeSensor350.FdStarttime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor582.EventTouchtime, TimeSensor285.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor582.EventTouchtime, TimeSensor320.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor582.EventTouchtime, TimeSensor350.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor582.EventTouchtime, TimeSensor380.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor582.EventTouchtime, TimeSensor440.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor582.EventTouchtime, TimeSensor470.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor582.EventTouchtime, TimeSensor500.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor582.EventTouchtime, TimeSensor193.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor582.EventTouchtime, TimeSensor410.FdStarttime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor571.EventTouchtime, TimeSensor285.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor571.EventTouchtime, TimeSensor320.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor571.EventTouchtime, TimeSensor350.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor571.EventTouchtime, TimeSensor410.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor571.EventTouchtime, TimeSensor440.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor571.EventTouchtime, TimeSensor470.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor571.EventTouchtime, TimeSensor500.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor571.EventTouchtime, TimeSensor193.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor571.EventTouchtime, TimeSensor380.FdStarttime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor593.EventTouchtime, TimeSensor285.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor593.EventTouchtime, TimeSensor320.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor593.EventTouchtime, TimeSensor350.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor593.EventTouchtime, TimeSensor380.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor593.EventTouchtime, TimeSensor410.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor593.EventTouchtime, TimeSensor470.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor593.EventTouchtime, TimeSensor500.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor593.EventTouchtime, TimeSensor193.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor593.EventTouchtime, TimeSensor440.FdStarttime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor604.EventTouchtime, TimeSensor285.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor604.EventTouchtime, TimeSensor320.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor604.EventTouchtime, TimeSensor350.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor604.EventTouchtime, TimeSensor380.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor604.EventTouchtime, TimeSensor410.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor604.EventTouchtime, TimeSensor440.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor604.EventTouchtime, TimeSensor500.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor604.EventTouchtime, TimeSensor193.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor604.EventTouchtime, TimeSensor470.FdStarttime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor615.EventTouchtime, TimeSensor285.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor615.EventTouchtime, TimeSensor320.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor615.EventTouchtime, TimeSensor350.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor615.EventTouchtime, TimeSensor380.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor615.EventTouchtime, TimeSensor410.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor615.EventTouchtime, TimeSensor440.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor615.EventTouchtime, TimeSensor470.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor615.EventTouchtime, TimeSensor193.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor615.EventTouchtime, TimeSensor500.FdStarttime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor626.EventTouchtime, TimeSensor285.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor626.EventTouchtime, TimeSensor320.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor626.EventTouchtime, TimeSensor350.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor626.EventTouchtime, TimeSensor380.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor626.EventTouchtime, TimeSensor410.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor626.EventTouchtime, TimeSensor440.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor626.EventTouchtime, TimeSensor470.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor626.EventTouchtime, TimeSensor500.FdStoptime);
{ .AddX3DRoute }
Group32.AddRoute(TouchSensor626.EventTouchtime, TimeSensor193.FdStarttime);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group32]);
Result := X3D0;
end;
