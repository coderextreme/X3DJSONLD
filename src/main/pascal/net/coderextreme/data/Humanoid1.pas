unit Humanoid1;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateHumanoid1: TX3DRootNode;

implementation

uses CastleVectors;

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
HAnimJoint233: THAnimJointNode;
HAnimJoint234: THAnimJointNode;
HAnimSegment235: THAnimSegmentNode;
Transform236: TTransformNode;
Transform237: TTransformNode;
Shape238: TShapeNode;
Shape239: TShapeNode;
LineSet240: TLineSetNode;
Coordinate241: TCoordinateNode;
ColorRGBA242: TColorRGBANode;
HAnimSite243: THAnimSiteNode;
TouchSensor244: TTouchSensorNode;
Shape245: TShapeNode;
Billboard246: TBillboardNode;
Shape247: TShapeNode;
Text248: TTextNode;
FontStyle249: TFontStyleNode;
HAnimSite250: THAnimSiteNode;
TouchSensor251: TTouchSensorNode;
Shape252: TShapeNode;
Billboard253: TBillboardNode;
Shape254: TShapeNode;
Text255: TTextNode;
FontStyle256: TFontStyleNode;
HAnimSite257: THAnimSiteNode;
TouchSensor258: TTouchSensorNode;
Shape259: TShapeNode;
Billboard260: TBillboardNode;
Shape261: TShapeNode;
Text262: TTextNode;
FontStyle263: TFontStyleNode;
HAnimSite264: THAnimSiteNode;
TouchSensor265: TTouchSensorNode;
Shape266: TShapeNode;
Billboard267: TBillboardNode;
Shape268: TShapeNode;
Text269: TTextNode;
FontStyle270: TFontStyleNode;
HAnimJoint271: THAnimJointNode;
HAnimSegment272: THAnimSegmentNode;
Transform273: TTransformNode;
Transform274: TTransformNode;
Shape275: TShapeNode;
Shape276: TShapeNode;
LineSet277: TLineSetNode;
Coordinate278: TCoordinateNode;
ColorRGBA279: TColorRGBANode;
HAnimSite280: THAnimSiteNode;
TouchSensor281: TTouchSensorNode;
Shape282: TShapeNode;
Billboard283: TBillboardNode;
Shape284: TShapeNode;
Text285: TTextNode;
FontStyle286: TFontStyleNode;
HAnimSite287: THAnimSiteNode;
TouchSensor288: TTouchSensorNode;
Shape289: TShapeNode;
Billboard290: TBillboardNode;
Shape291: TShapeNode;
Text292: TTextNode;
FontStyle293: TFontStyleNode;
HAnimSite294: THAnimSiteNode;
TouchSensor295: TTouchSensorNode;
Shape296: TShapeNode;
Billboard297: TBillboardNode;
Shape298: TShapeNode;
Text299: TTextNode;
FontStyle300: TFontStyleNode;
HAnimJoint301: THAnimJointNode;
HAnimSegment302: THAnimSegmentNode;
Transform303: TTransformNode;
Transform304: TTransformNode;
Shape305: TShapeNode;
Shape306: TShapeNode;
LineSet307: TLineSetNode;
Coordinate308: TCoordinateNode;
ColorRGBA309: TColorRGBANode;
HAnimSite310: THAnimSiteNode;
TouchSensor311: TTouchSensorNode;
Shape312: TShapeNode;
Billboard313: TBillboardNode;
Shape314: TShapeNode;
Text315: TTextNode;
FontStyle316: TFontStyleNode;
HAnimSite317: THAnimSiteNode;
TouchSensor318: TTouchSensorNode;
Shape319: TShapeNode;
Billboard320: TBillboardNode;
Shape321: TShapeNode;
Text322: TTextNode;
FontStyle323: TFontStyleNode;
HAnimJoint324: THAnimJointNode;
HAnimJoint325: THAnimJointNode;
HAnimSegment326: THAnimSegmentNode;
Transform327: TTransformNode;
Transform328: TTransformNode;
Shape329: TShapeNode;
Shape330: TShapeNode;
LineSet331: TLineSetNode;
Coordinate332: TCoordinateNode;
ColorRGBA333: TColorRGBANode;
HAnimSite334: THAnimSiteNode;
TouchSensor335: TTouchSensorNode;
Shape336: TShapeNode;
Billboard337: TBillboardNode;
Shape338: TShapeNode;
Text339: TTextNode;
FontStyle340: TFontStyleNode;
HAnimSite341: THAnimSiteNode;
TouchSensor342: TTouchSensorNode;
Shape343: TShapeNode;
Billboard344: TBillboardNode;
Shape345: TShapeNode;
Text346: TTextNode;
FontStyle347: TFontStyleNode;
HAnimSite348: THAnimSiteNode;
TouchSensor349: TTouchSensorNode;
Shape350: TShapeNode;
Billboard351: TBillboardNode;
Shape352: TShapeNode;
Text353: TTextNode;
FontStyle354: TFontStyleNode;
HAnimSite355: THAnimSiteNode;
TouchSensor356: TTouchSensorNode;
Shape357: TShapeNode;
Billboard358: TBillboardNode;
Shape359: TShapeNode;
Text360: TTextNode;
FontStyle361: TFontStyleNode;
HAnimSite362: THAnimSiteNode;
TouchSensor363: TTouchSensorNode;
Shape364: TShapeNode;
Billboard365: TBillboardNode;
Shape366: TShapeNode;
Text367: TTextNode;
FontStyle368: TFontStyleNode;
HAnimSite369: THAnimSiteNode;
TouchSensor370: TTouchSensorNode;
Shape371: TShapeNode;
Billboard372: TBillboardNode;
Shape373: TShapeNode;
Text374: TTextNode;
FontStyle375: TFontStyleNode;
HAnimSite376: THAnimSiteNode;
TouchSensor377: TTouchSensorNode;
Shape378: TShapeNode;
Billboard379: TBillboardNode;
Shape380: TShapeNode;
Text381: TTextNode;
FontStyle382: TFontStyleNode;
HAnimSite383: THAnimSiteNode;
TouchSensor384: TTouchSensorNode;
Shape385: TShapeNode;
Billboard386: TBillboardNode;
Shape387: TShapeNode;
Text388: TTextNode;
FontStyle389: TFontStyleNode;
HAnimSite390: THAnimSiteNode;
TouchSensor391: TTouchSensorNode;
Shape392: TShapeNode;
Billboard393: TBillboardNode;
Shape394: TShapeNode;
Text395: TTextNode;
FontStyle396: TFontStyleNode;
HAnimSite397: THAnimSiteNode;
TouchSensor398: TTouchSensorNode;
Shape399: TShapeNode;
Billboard400: TBillboardNode;
Shape401: TShapeNode;
Text402: TTextNode;
FontStyle403: TFontStyleNode;
HAnimSite404: THAnimSiteNode;
TouchSensor405: TTouchSensorNode;
Shape406: TShapeNode;
Billboard407: TBillboardNode;
Shape408: TShapeNode;
Text409: TTextNode;
FontStyle410: TFontStyleNode;
HAnimSite411: THAnimSiteNode;
TouchSensor412: TTouchSensorNode;
Shape413: TShapeNode;
Billboard414: TBillboardNode;
Shape415: TShapeNode;
Text416: TTextNode;
FontStyle417: TFontStyleNode;
HAnimSite418: THAnimSiteNode;
TouchSensor419: TTouchSensorNode;
Shape420: TShapeNode;
Billboard421: TBillboardNode;
Shape422: TShapeNode;
Text423: TTextNode;
FontStyle424: TFontStyleNode;
HAnimSite425: THAnimSiteNode;
TouchSensor426: TTouchSensorNode;
Shape427: TShapeNode;
Billboard428: TBillboardNode;
Shape429: TShapeNode;
Text430: TTextNode;
FontStyle431: TFontStyleNode;
HAnimSite432: THAnimSiteNode;
TouchSensor433: TTouchSensorNode;
Shape434: TShapeNode;
Billboard435: TBillboardNode;
Shape436: TShapeNode;
Text437: TTextNode;
FontStyle438: TFontStyleNode;
HAnimSite439: THAnimSiteNode;
TouchSensor440: TTouchSensorNode;
Shape441: TShapeNode;
Billboard442: TBillboardNode;
Shape443: TShapeNode;
Text444: TTextNode;
FontStyle445: TFontStyleNode;
HAnimSite446: THAnimSiteNode;
TouchSensor447: TTouchSensorNode;
Shape448: TShapeNode;
Billboard449: TBillboardNode;
Shape450: TShapeNode;
Text451: TTextNode;
FontStyle452: TFontStyleNode;
HAnimSite453: THAnimSiteNode;
TouchSensor454: TTouchSensorNode;
Shape455: TShapeNode;
Billboard456: TBillboardNode;
Shape457: TShapeNode;
Text458: TTextNode;
FontStyle459: TFontStyleNode;
HAnimSite460: THAnimSiteNode;
TouchSensor461: TTouchSensorNode;
Shape462: TShapeNode;
Billboard463: TBillboardNode;
Shape464: TShapeNode;
Text465: TTextNode;
FontStyle466: TFontStyleNode;
HAnimSite467: THAnimSiteNode;
TouchSensor468: TTouchSensorNode;
Shape469: TShapeNode;
Billboard470: TBillboardNode;
Shape471: TShapeNode;
Text472: TTextNode;
FontStyle473: TFontStyleNode;
HAnimSite474: THAnimSiteNode;
TouchSensor475: TTouchSensorNode;
Shape476: TShapeNode;
Billboard477: TBillboardNode;
Shape478: TShapeNode;
Text479: TTextNode;
FontStyle480: TFontStyleNode;
HAnimSite481: THAnimSiteNode;
TouchSensor482: TTouchSensorNode;
Shape483: TShapeNode;
Billboard484: TBillboardNode;
Shape485: TShapeNode;
Text486: TTextNode;
FontStyle487: TFontStyleNode;
HAnimSite488: THAnimSiteNode;
TouchSensor489: TTouchSensorNode;
Shape490: TShapeNode;
Billboard491: TBillboardNode;
Shape492: TShapeNode;
Text493: TTextNode;
FontStyle494: TFontStyleNode;
HAnimSite495: THAnimSiteNode;
TouchSensor496: TTouchSensorNode;
Shape497: TShapeNode;
Billboard498: TBillboardNode;
Shape499: TShapeNode;
Text500: TTextNode;
FontStyle501: TFontStyleNode;
HAnimSite502: THAnimSiteNode;
TouchSensor503: TTouchSensorNode;
Shape504: TShapeNode;
Billboard505: TBillboardNode;
Shape506: TShapeNode;
Text507: TTextNode;
FontStyle508: TFontStyleNode;
HAnimSite509: THAnimSiteNode;
TouchSensor510: TTouchSensorNode;
Shape511: TShapeNode;
Billboard512: TBillboardNode;
Shape513: TShapeNode;
Text514: TTextNode;
FontStyle515: TFontStyleNode;
HAnimSite516: THAnimSiteNode;
TouchSensor517: TTouchSensorNode;
Shape518: TShapeNode;
Billboard519: TBillboardNode;
Shape520: TShapeNode;
Text521: TTextNode;
FontStyle522: TFontStyleNode;
HAnimSite523: THAnimSiteNode;
TouchSensor524: TTouchSensorNode;
Shape525: TShapeNode;
Billboard526: TBillboardNode;
Shape527: TShapeNode;
Text528: TTextNode;
FontStyle529: TFontStyleNode;
HAnimSite530: THAnimSiteNode;
TouchSensor531: TTouchSensorNode;
Shape532: TShapeNode;
Billboard533: TBillboardNode;
Shape534: TShapeNode;
Text535: TTextNode;
FontStyle536: TFontStyleNode;
Shape537: TShapeNode;
LineSet538: TLineSetNode;
Coordinate539: TCoordinateNode;
ColorRGBA540: TColorRGBANode;
Shape541: TShapeNode;
LineSet542: TLineSetNode;
Coordinate543: TCoordinateNode;
ColorRGBA544: TColorRGBANode;
HAnimJoint545: THAnimJointNode;
HAnimJoint546: THAnimJointNode;
HAnimSegment547: THAnimSegmentNode;
Transform548: TTransformNode;
Transform549: TTransformNode;
Shape550: TShapeNode;
Shape551: TShapeNode;
LineSet552: TLineSetNode;
Coordinate553: TCoordinateNode;
ColorRGBA554: TColorRGBANode;
HAnimSite555: THAnimSiteNode;
TouchSensor556: TTouchSensorNode;
Shape557: TShapeNode;
Billboard558: TBillboardNode;
Shape559: TShapeNode;
Text560: TTextNode;
FontStyle561: TFontStyleNode;
HAnimSite562: THAnimSiteNode;
TouchSensor563: TTouchSensorNode;
Shape564: TShapeNode;
Billboard565: TBillboardNode;
Shape566: TShapeNode;
Text567: TTextNode;
FontStyle568: TFontStyleNode;
HAnimJoint569: THAnimJointNode;
HAnimSegment570: THAnimSegmentNode;
Transform571: TTransformNode;
Transform572: TTransformNode;
Shape573: TShapeNode;
Shape574: TShapeNode;
LineSet575: TLineSetNode;
Coordinate576: TCoordinateNode;
ColorRGBA577: TColorRGBANode;
HAnimSite578: THAnimSiteNode;
TouchSensor579: TTouchSensorNode;
Shape580: TShapeNode;
Billboard581: TBillboardNode;
Shape582: TShapeNode;
Text583: TTextNode;
FontStyle584: TFontStyleNode;
HAnimSite585: THAnimSiteNode;
TouchSensor586: TTouchSensorNode;
Shape587: TShapeNode;
Billboard588: TBillboardNode;
Shape589: TShapeNode;
Text590: TTextNode;
FontStyle591: TFontStyleNode;
HAnimSite592: THAnimSiteNode;
TouchSensor593: TTouchSensorNode;
Shape594: TShapeNode;
Billboard595: TBillboardNode;
Shape596: TShapeNode;
Text597: TTextNode;
FontStyle598: TFontStyleNode;
HAnimSite599: THAnimSiteNode;
TouchSensor600: TTouchSensorNode;
Shape601: TShapeNode;
Billboard602: TBillboardNode;
Shape603: TShapeNode;
Text604: TTextNode;
FontStyle605: TFontStyleNode;
HAnimJoint606: THAnimJointNode;
HAnimJoint607: THAnimJointNode;
HAnimSegment608: THAnimSegmentNode;
Transform609: TTransformNode;
Transform610: TTransformNode;
Shape611: TShapeNode;
Shape612: TShapeNode;
LineSet613: TLineSetNode;
Coordinate614: TCoordinateNode;
ColorRGBA615: TColorRGBANode;
HAnimSite616: THAnimSiteNode;
TouchSensor617: TTouchSensorNode;
Shape618: TShapeNode;
Billboard619: TBillboardNode;
Shape620: TShapeNode;
Text621: TTextNode;
FontStyle622: TFontStyleNode;
HAnimSite623: THAnimSiteNode;
TouchSensor624: TTouchSensorNode;
Shape625: TShapeNode;
Billboard626: TBillboardNode;
Shape627: TShapeNode;
Text628: TTextNode;
FontStyle629: TFontStyleNode;
HAnimJoint630: THAnimJointNode;
HAnimSegment631: THAnimSegmentNode;
Transform632: TTransformNode;
Transform633: TTransformNode;
Shape634: TShapeNode;
Shape635: TShapeNode;
LineSet636: TLineSetNode;
Coordinate637: TCoordinateNode;
ColorRGBA638: TColorRGBANode;
HAnimSite639: THAnimSiteNode;
TouchSensor640: TTouchSensorNode;
Shape641: TShapeNode;
Billboard642: TBillboardNode;
Shape643: TShapeNode;
Text644: TTextNode;
FontStyle645: TFontStyleNode;
HAnimSite646: THAnimSiteNode;
TouchSensor647: TTouchSensorNode;
Shape648: TShapeNode;
Billboard649: TBillboardNode;
Shape650: TShapeNode;
Text651: TTextNode;
FontStyle652: TFontStyleNode;
HAnimSite653: THAnimSiteNode;
TouchSensor654: TTouchSensorNode;
Shape655: TShapeNode;
Billboard656: TBillboardNode;
Shape657: TShapeNode;
Text658: TTextNode;
FontStyle659: TFontStyleNode;
HAnimSite660: THAnimSiteNode;
TouchSensor661: TTouchSensorNode;
Shape662: TShapeNode;
Billboard663: TBillboardNode;
Shape664: TShapeNode;
Text665: TTextNode;
FontStyle666: TFontStyleNode;
HAnimJoint667: THAnimJointNode;
HAnimJoint668: THAnimJointNode;
HAnimJoint669: THAnimJointNode;
HAnimJoint670: THAnimJointNode;
HAnimJoint671: THAnimJointNode;
HAnimJoint672: THAnimJointNode;
HAnimJoint673: THAnimJointNode;
HAnimJoint674: THAnimJointNode;
HAnimJoint675: THAnimJointNode;
HAnimJoint676: THAnimJointNode;
HAnimJoint677: THAnimJointNode;
HAnimJoint678: THAnimJointNode;
HAnimJoint679: THAnimJointNode;
HAnimJoint680: THAnimJointNode;
HAnimJoint681: THAnimJointNode;
HAnimJoint682: THAnimJointNode;
HAnimJoint683: THAnimJointNode;
HAnimJoint684: THAnimJointNode;
HAnimJoint685: THAnimJointNode;

procedure InitHumanoid1Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'Humanoid1.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid1.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'An attempt at a standard LOA-4 skeleton';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'h2.pl';
{ METHOD .Meta }
X3D0.Meta['modified'] := '14 Jan 2023';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['created'] := '9 November 2020';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
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
{ METHOD .Coord }
IndexedLineSet14.Coord := Coordinate15;
Color16 := TColorNode.Create;
Color16.SetColor([Vector3(1,0,0),Vector3(0,0.6,0),Vector3(0,0,1)]);
{ METHOD .Color }
IndexedLineSet14.Color := Color16;
{ METHOD .Geometry }
Shape13.Geometry := IndexedLineSet14;
{ METHOD .FdChildren.Add }
Transform12.FdChildren.Add(Shape13);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Transform12);
Group17 := TGroupNode.Create;
{ DEFS for markers of skeleton joints, segments, and sites }
Transform18 := TTransformNode.Create;
Transform19 := TTransformNode.Create;
Transform19.Translation := Vector3(0,2.1,0);
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
Sphere21.Radius := 0.02;
{ METHOD .Geometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0,0,0);
end;

procedure InitHumanoid1Part1;
begin

{ METHOD .SetMaterial }
Appearance22.Material := Material23;
{ METHOD .Appearance }
Shape20.Appearance := Appearance22;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform19);
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(0,2.05,0);
Shape25 := TShapeNode.Create;
LineSet26 := TLineSetNode.Create;
LineSet26.SetVertexCount([2]);
ColorRGBA27 := TColorRGBANode.Create;
ColorRGBA27.SetColor([Vector4(1,1,0,0),Vector4(1,1,0,0)]);
{ METHOD .Color }
LineSet26.Color := ColorRGBA27;
Coordinate28 := TCoordinateNode.Create;
Coordinate28.SetPoint([Vector3(-0.05,0,0),Vector3(0.05,0,0)]);
{ METHOD .Coord }
LineSet26.Coord := Coordinate28;
{ METHOD .Geometry }
Shape25.Geometry := LineSet26;
{ METHOD .FdChildren.Add }
Transform24.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform24);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(0,2.1,0);
Shape30 := TShapeNode.Create;
IndexedFaceSet31 := TIndexedFaceSetNode.Create;
IndexedFaceSet31.CreaseAngle := 0.5;
IndexedFaceSet31.Solid := False;
IndexedFaceSet31.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA32 := TColorRGBANode.Create;
ColorRGBA32.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
IndexedFaceSet31.Color := ColorRGBA32;
Coordinate33 := TCoordinateNode.Create;
Coordinate33.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
IndexedFaceSet31.Coord := Coordinate33;
{ METHOD .Geometry }
Shape30.Geometry := IndexedFaceSet31;
Appearance34 := TAppearanceNode.Create;
Material35 := TMaterialNode.Create;
Material35.DiffuseColor := Vector3(1,1,1);
Material35.Transparency := 1;
{ METHOD .SetMaterial }
Appearance34.Material := Material35;
{ METHOD .Appearance }
Shape30.Appearance := Appearance34;
{ METHOD .FdChildren.Add }
Transform29.FdChildren.Add(Shape30);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform29);
end;

procedure InitHumanoid1Part2;
begin

{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Transform18);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Group17);
NavigationInfo36 := TNavigationInfoNode.Create;
NavigationInfo36.Speed := 1.5;
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(NavigationInfo36);
Viewpoint37 := TViewpointNode.Create;
Viewpoint37.Position := Vector3(0,1,3);
Viewpoint37.CenterOfRotation := Vector3(0,1,0);
Viewpoint37.Description := 'default';
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Viewpoint37);
HAnimHumanoid38 := THAnimHumanoidNode.Create;
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
end;

procedure InitHumanoid1Part3;
begin

{ METHOD .Coord }
IndexedFaceSet40.Coord := Coordinate41;
Color42 := TColorNode.Create;
Color42.SetColor([Vector3(1,0,0),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,1)]);
{ METHOD .Color }
IndexedFaceSet40.Color := Color42;
{ METHOD .Geometry }
Shape39.Geometry := IndexedFaceSet40;
Appearance43 := TAppearanceNode.Create;
ImageTexture44 := TImageTextureNode.Create;
ImageTexture44.Description := 'Blue Spiral Pattern';
ImageTexture44.SetUrl(['../data/zBlueSpiralBkg2.gif','zBlueSpiralBkg2.gif','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif']);
{ METHOD .Texture }
Appearance43.Texture := ImageTexture44;
Material45 := TMaterialNode.Create;
Material45.AmbientIntensity := 0.6;
Material45.DiffuseColor := Vector3(1,1,1);
Material45.Shininess := 0.6;
Material45.Transparency := 1;
{ METHOD .SetMaterial }
Appearance43.Material := Material45;
{ METHOD .Appearance }
Shape39.Appearance := Appearance43;
{ METHOD .SetSkin }
HAnimHumanoid38.Skin := Shape39;
{ METHOD .FdSkinCoord.Set }
HAnimHumanoid38.FdSkinCoord.Set(Coordinate41);
HAnimJoint47 := THAnimJointNode.Create;
HAnimJoint47.Center := Vector3(0,0.824,0.0277);
HAnimSegment48 := THAnimSegmentNode.Create;
Transform49 := TTransformNode.Create;
Transform49.Translation := Vector3(0,0.824,0.0277);
Transform50 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform50.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform49.FdChildren.Add(Transform50);
{ METHOD .FdChildren.Add }
HAnimSegment48.FdChildren.Add(Transform49);
Shape52 := TShapeNode.Create;
LineSet53 := TLineSetNode.Create;
LineSet53.SetVertexCount([2]);
Coordinate54 := TCoordinateNode.Create;
end;

procedure InitHumanoid1Part4;
begin

Coordinate54.SetPoint([Vector3(0,0.824,0.0277),Vector3(0,0.9149,0.0016)]);
{ METHOD .Coord }
LineSet53.Coord := Coordinate54;
{ from humanoid_root to sacroiliac vertices 2 }
{ METHOD .Color }
LineSet53.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape52.Geometry := LineSet53;
{ METHOD .FdChildren.Add }
HAnimSegment48.FdChildren.Add(Shape52);
Shape56 := TShapeNode.Create;
LineSet57 := TLineSetNode.Create;
LineSet57.SetVertexCount([2]);
Coordinate58 := TCoordinateNode.Create;
Coordinate58.SetPoint([Vector3(0,0.824,0.0277),Vector3(0.0028,1.0568,-0.0776)]);
{ METHOD .Coord }
LineSet57.Coord := Coordinate58;
{ from humanoid_root to vl5 vertices 2 }
{ METHOD .Color }
LineSet57.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape56.Geometry := LineSet57;
{ METHOD .FdChildren.Add }
HAnimSegment48.FdChildren.Add(Shape56);
{ METHOD .FdChildren.Add }
HAnimJoint47.FdChildren.Add(HAnimSegment48);
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.Center := Vector3(0,0.9149,0.0016);
HAnimSegment61 := THAnimSegmentNode.Create;
Transform62 := TTransformNode.Create;
Transform62.Translation := Vector3(0,0.9149,0.0016);
Transform63 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform63.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform62.FdChildren.Add(Transform63);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(Transform62);
Shape65 := TShapeNode.Create;
LineSet66 := TLineSetNode.Create;
LineSet66.SetVertexCount([2]);
Coordinate67 := TCoordinateNode.Create;
Coordinate67.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0961,0.9124,-0.0001)]);
{ METHOD .Coord }
LineSet66.Coord := Coordinate67;
{ from sacroiliac to l_hip vertices 2 }
{ METHOD .Color }
LineSet66.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape65.Geometry := LineSet66;
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(Shape65);
HAnimSite69 := THAnimSiteNode.Create;
TouchSensor70 := TTouchSensorNode.Create;
TouchSensor70.Description := 'HAnimSite 93 buttocks_standing_wall_contact_point';
{ METHOD .FdChildren.Add }
HAnimSite69.FdChildren.Add(TouchSensor70);
{ METHOD .FdChildren.Add }
HAnimSite69.FdChildren.Add(Shape30);
Billboard72 := TBillboardNode.Create;
Shape73 := TShapeNode.Create;
end;

procedure InitHumanoid1Part5;
begin

Text74 := TTextNode.Create;
Text74.SetText(['93']);
FontStyle75 := TFontStyleNode.Create;
FontStyle75.Size := 0.035;
{ METHOD .FontStyle }
Text74.FontStyle := FontStyle75;
{ METHOD .Geometry }
Shape73.Geometry := Text74;
{ METHOD .FdChildren.Add }
Billboard72.FdChildren.Add(Shape73);
{ METHOD .FdChildren.Add }
HAnimSite69.FdChildren.Add(Billboard72);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite69);
HAnimSite76 := THAnimSiteNode.Create;
HAnimSite76.Translation := Vector3(0.0034,0.8266,0.0257);
TouchSensor77 := TTouchSensorNode.Create;
TouchSensor77.Description := 'HAnimSite 38 crotch';
{ METHOD .FdChildren.Add }
HAnimSite76.FdChildren.Add(TouchSensor77);
{ METHOD .FdChildren.Add }
HAnimSite76.FdChildren.Add(Shape30);
Billboard79 := TBillboardNode.Create;
Shape80 := TShapeNode.Create;
Text81 := TTextNode.Create;
Text81.SetText(['38']);
FontStyle82 := TFontStyleNode.Create;
FontStyle82.Size := 0.035;
{ METHOD .FontStyle }
Text81.FontStyle := FontStyle82;
{ METHOD .Geometry }
Shape80.Geometry := Text81;
{ METHOD .FdChildren.Add }
Billboard79.FdChildren.Add(Shape80);
{ METHOD .FdChildren.Add }
HAnimSite76.FdChildren.Add(Billboard79);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite76);
HAnimSite83 := THAnimSiteNode.Create;
HAnimSite83.Translation := Vector3(0.0925,0.9983,0.1052);
TouchSensor84 := TTouchSensorNode.Create;
TouchSensor84.Description := 'HAnimSite 32 l_asis';
{ METHOD .FdChildren.Add }
HAnimSite83.FdChildren.Add(TouchSensor84);
{ METHOD .FdChildren.Add }
HAnimSite83.FdChildren.Add(Shape30);
Billboard86 := TBillboardNode.Create;
Shape87 := TShapeNode.Create;
Text88 := TTextNode.Create;
Text88.SetText(['32']);
FontStyle89 := TFontStyleNode.Create;
FontStyle89.Size := 0.035;
{ METHOD .FontStyle }
Text88.FontStyle := FontStyle89;
{ METHOD .Geometry }
Shape87.Geometry := Text88;
end;

procedure InitHumanoid1Part6;
begin

{ METHOD .FdChildren.Add }
Billboard86.FdChildren.Add(Shape87);
{ METHOD .FdChildren.Add }
HAnimSite83.FdChildren.Add(Billboard86);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite83);
HAnimSite90 := THAnimSiteNode.Create;
HAnimSite90.Translation := Vector3(0.1612,1.0537,0.0008);
TouchSensor91 := TTouchSensorNode.Create;
TouchSensor91.Description := 'HAnimSite 33 l_iliocristale';
{ METHOD .FdChildren.Add }
HAnimSite90.FdChildren.Add(TouchSensor91);
{ METHOD .FdChildren.Add }
HAnimSite90.FdChildren.Add(Shape30);
Billboard93 := TBillboardNode.Create;
Shape94 := TShapeNode.Create;
Text95 := TTextNode.Create;
Text95.SetText(['33']);
FontStyle96 := TFontStyleNode.Create;
FontStyle96.Size := 0.035;
{ METHOD .FontStyle }
Text95.FontStyle := FontStyle96;
{ METHOD .Geometry }
Shape94.Geometry := Text95;
{ METHOD .FdChildren.Add }
Billboard93.FdChildren.Add(Shape94);
{ METHOD .FdChildren.Add }
HAnimSite90.FdChildren.Add(Billboard93);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite90);
HAnimSite97 := THAnimSiteNode.Create;
HAnimSite97.Translation := Vector3(0.0774,1.019,-0.1151);
TouchSensor98 := TTouchSensorNode.Create;
TouchSensor98.Description := 'HAnimSite 34 l_psis';
{ METHOD .FdChildren.Add }
HAnimSite97.FdChildren.Add(TouchSensor98);
{ METHOD .FdChildren.Add }
HAnimSite97.FdChildren.Add(Shape30);
Billboard100 := TBillboardNode.Create;
Shape101 := TShapeNode.Create;
Text102 := TTextNode.Create;
Text102.SetText(['34']);
FontStyle103 := TFontStyleNode.Create;
FontStyle103.Size := 0.035;
{ METHOD .FontStyle }
Text102.FontStyle := FontStyle103;
{ METHOD .Geometry }
Shape101.Geometry := Text102;
{ METHOD .FdChildren.Add }
Billboard100.FdChildren.Add(Shape101);
{ METHOD .FdChildren.Add }
HAnimSite97.FdChildren.Add(Billboard100);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite97);
HAnimSite104 := THAnimSiteNode.Create;
HAnimSite104.Translation := Vector3(0.1677,0.8336,0.0303);
TouchSensor105 := TTouchSensorNode.Create;
end;

procedure InitHumanoid1Part7;
begin

TouchSensor105.Description := 'HAnimSite 42 l_trochanterion';
{ METHOD .FdChildren.Add }
HAnimSite104.FdChildren.Add(TouchSensor105);
{ METHOD .FdChildren.Add }
HAnimSite104.FdChildren.Add(Shape30);
Billboard107 := TBillboardNode.Create;
Shape108 := TShapeNode.Create;
Text109 := TTextNode.Create;
Text109.SetText(['42']);
FontStyle110 := TFontStyleNode.Create;
FontStyle110.Size := 0.035;
{ METHOD .FontStyle }
Text109.FontStyle := FontStyle110;
{ METHOD .Geometry }
Shape108.Geometry := Text109;
{ METHOD .FdChildren.Add }
Billboard107.FdChildren.Add(Shape108);
{ METHOD .FdChildren.Add }
HAnimSite104.FdChildren.Add(Billboard107);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite104);
HAnimSite111 := THAnimSiteNode.Create;
HAnimSite111.Translation := Vector3(-0.0887,1.0021,0.1112);
TouchSensor112 := TTouchSensorNode.Create;
TouchSensor112.Description := 'HAnimSite 35 r_asis';
{ METHOD .FdChildren.Add }
HAnimSite111.FdChildren.Add(TouchSensor112);
{ METHOD .FdChildren.Add }
HAnimSite111.FdChildren.Add(Shape30);
Billboard114 := TBillboardNode.Create;
Shape115 := TShapeNode.Create;
Text116 := TTextNode.Create;
Text116.SetText(['35']);
FontStyle117 := TFontStyleNode.Create;
FontStyle117.Size := 0.035;
{ METHOD .FontStyle }
Text116.FontStyle := FontStyle117;
{ METHOD .Geometry }
Shape115.Geometry := Text116;
{ METHOD .FdChildren.Add }
Billboard114.FdChildren.Add(Shape115);
{ METHOD .FdChildren.Add }
HAnimSite111.FdChildren.Add(Billboard114);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite111);
HAnimSite118 := THAnimSiteNode.Create;
HAnimSite118.Translation := Vector3(-0.1525,1.0628,0.0035);
TouchSensor119 := TTouchSensorNode.Create;
TouchSensor119.Description := 'HAnimSite 36 r_iliocristale';
{ METHOD .FdChildren.Add }
HAnimSite118.FdChildren.Add(TouchSensor119);
{ METHOD .FdChildren.Add }
HAnimSite118.FdChildren.Add(Shape30);
Billboard121 := TBillboardNode.Create;
Shape122 := TShapeNode.Create;
Text123 := TTextNode.Create;
end;

procedure InitHumanoid1Part8;
begin

Text123.SetText(['36']);
FontStyle124 := TFontStyleNode.Create;
FontStyle124.Size := 0.035;
{ METHOD .FontStyle }
Text123.FontStyle := FontStyle124;
{ METHOD .Geometry }
Shape122.Geometry := Text123;
{ METHOD .FdChildren.Add }
Billboard121.FdChildren.Add(Shape122);
{ METHOD .FdChildren.Add }
HAnimSite118.FdChildren.Add(Billboard121);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite118);
HAnimSite125 := THAnimSiteNode.Create;
HAnimSite125.Translation := Vector3(-0.0716,1.019,-0.1138);
TouchSensor126 := TTouchSensorNode.Create;
TouchSensor126.Description := 'HAnimSite 37 r_psis';
{ METHOD .FdChildren.Add }
HAnimSite125.FdChildren.Add(TouchSensor126);
{ METHOD .FdChildren.Add }
HAnimSite125.FdChildren.Add(Shape30);
Billboard128 := TBillboardNode.Create;
Shape129 := TShapeNode.Create;
Text130 := TTextNode.Create;
Text130.SetText(['37']);
FontStyle131 := TFontStyleNode.Create;
FontStyle131.Size := 0.035;
{ METHOD .FontStyle }
Text130.FontStyle := FontStyle131;
{ METHOD .Geometry }
Shape129.Geometry := Text130;
{ METHOD .FdChildren.Add }
Billboard128.FdChildren.Add(Shape129);
{ METHOD .FdChildren.Add }
HAnimSite125.FdChildren.Add(Billboard128);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite125);
HAnimSite132 := THAnimSiteNode.Create;
HAnimSite132.Translation := Vector3(-0.1689,0.8419,0.0352);
TouchSensor133 := TTouchSensorNode.Create;
TouchSensor133.Description := 'HAnimSite 46 r_trochanterion';
{ METHOD .FdChildren.Add }
HAnimSite132.FdChildren.Add(TouchSensor133);
{ METHOD .FdChildren.Add }
HAnimSite132.FdChildren.Add(Shape30);
Billboard135 := TBillboardNode.Create;
Shape136 := TShapeNode.Create;
Text137 := TTextNode.Create;
Text137.SetText(['46']);
FontStyle138 := TFontStyleNode.Create;
FontStyle138.Size := 0.035;
{ METHOD .FontStyle }
Text137.FontStyle := FontStyle138;
{ METHOD .Geometry }
Shape136.Geometry := Text137;
{ METHOD .FdChildren.Add }
Billboard135.FdChildren.Add(Shape136);
end;

procedure InitHumanoid1Part9;
begin

{ METHOD .FdChildren.Add }
HAnimSite132.FdChildren.Add(Billboard135);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite132);
Shape139 := TShapeNode.Create;
LineSet140 := TLineSetNode.Create;
LineSet140.SetVertexCount([2]);
Coordinate141 := TCoordinateNode.Create;
Coordinate141.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.095,0.9171,0.0029)]);
{ METHOD .Coord }
LineSet140.Coord := Coordinate141;
{ from sacroiliac to r_hip vertices 2 }
{ METHOD .Color }
LineSet140.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape139.Geometry := LineSet140;
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(Shape139);
{ METHOD .FdChildren.Add }
HAnimJoint60.FdChildren.Add(HAnimSegment61);
HAnimJoint143 := THAnimJointNode.Create;
HAnimJoint143.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimSegment144 := THAnimSegmentNode.Create;
Transform145 := TTransformNode.Create;
Transform145.Translation := Vector3(0.0961,0.9124,-0.0001);
Transform146 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform146.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform145.FdChildren.Add(Transform146);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(Transform145);
Shape148 := TShapeNode.Create;
LineSet149 := TLineSetNode.Create;
LineSet149.SetVertexCount([2]);
Coordinate150 := TCoordinateNode.Create;
Coordinate150.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.104,0.4867,0.0308)]);
{ METHOD .Coord }
LineSet149.Coord := Coordinate150;
{ from l_hip to l_knee vertices 2 }
{ METHOD .Color }
LineSet149.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape148.Geometry := LineSet149;
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(Shape148);
HAnimSite152 := THAnimSiteNode.Create;
HAnimSite152.Translation := Vector3(0.1598,0.4967,0.0297);
TouchSensor153 := TTouchSensorNode.Create;
TouchSensor153.Description := 'HAnimSite 40 l_femoral_lateral_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite152.FdChildren.Add(TouchSensor153);
{ METHOD .FdChildren.Add }
HAnimSite152.FdChildren.Add(Shape30);
Billboard155 := TBillboardNode.Create;
Shape156 := TShapeNode.Create;
Text157 := TTextNode.Create;
Text157.SetText(['40']);
end;

procedure InitHumanoid1Part10;
begin

FontStyle158 := TFontStyleNode.Create;
FontStyle158.Size := 0.035;
{ METHOD .FontStyle }
Text157.FontStyle := FontStyle158;
{ METHOD .Geometry }
Shape156.Geometry := Text157;
{ METHOD .FdChildren.Add }
Billboard155.FdChildren.Add(Shape156);
{ METHOD .FdChildren.Add }
HAnimSite152.FdChildren.Add(Billboard155);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(HAnimSite152);
HAnimSite159 := THAnimSiteNode.Create;
HAnimSite159.Translation := Vector3(0.0398,0.4946,0.0303);
TouchSensor160 := TTouchSensorNode.Create;
TouchSensor160.Description := 'HAnimSite 39 l_femoral_medial_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite159.FdChildren.Add(TouchSensor160);
{ METHOD .FdChildren.Add }
HAnimSite159.FdChildren.Add(Shape30);
Billboard162 := TBillboardNode.Create;
Shape163 := TShapeNode.Create;
Text164 := TTextNode.Create;
Text164.SetText(['39']);
FontStyle165 := TFontStyleNode.Create;
FontStyle165.Size := 0.035;
{ METHOD .FontStyle }
Text164.FontStyle := FontStyle165;
{ METHOD .Geometry }
Shape163.Geometry := Text164;
{ METHOD .FdChildren.Add }
Billboard162.FdChildren.Add(Shape163);
{ METHOD .FdChildren.Add }
HAnimSite159.FdChildren.Add(Billboard162);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(HAnimSite159);
HAnimSite166 := THAnimSiteNode.Create;
HAnimSite166.Translation := Vector3(0.0993,0.4881,-0.0309);
TouchSensor167 := TTouchSensorNode.Create;
TouchSensor167.Description := 'HAnimSite 90 l_knee_crease';
{ METHOD .FdChildren.Add }
HAnimSite166.FdChildren.Add(TouchSensor167);
{ METHOD .FdChildren.Add }
HAnimSite166.FdChildren.Add(Shape30);
Billboard169 := TBillboardNode.Create;
Shape170 := TShapeNode.Create;
Text171 := TTextNode.Create;
Text171.SetText(['90']);
FontStyle172 := TFontStyleNode.Create;
FontStyle172.Size := 0.035;
{ METHOD .FontStyle }
Text171.FontStyle := FontStyle172;
{ METHOD .Geometry }
Shape170.Geometry := Text171;
{ METHOD .FdChildren.Add }
Billboard169.FdChildren.Add(Shape170);
{ METHOD .FdChildren.Add }
HAnimSite166.FdChildren.Add(Billboard169);
end;

procedure InitHumanoid1Part11;
begin

{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(HAnimSite166);
HAnimSite173 := THAnimSiteNode.Create;
TouchSensor174 := TTouchSensorNode.Create;
TouchSensor174.Description := 'HAnimSite 41 l_suprapatella';
{ METHOD .FdChildren.Add }
HAnimSite173.FdChildren.Add(TouchSensor174);
{ METHOD .FdChildren.Add }
HAnimSite173.FdChildren.Add(Shape30);
Billboard176 := TBillboardNode.Create;
Shape177 := TShapeNode.Create;
Text178 := TTextNode.Create;
Text178.SetText(['41']);
FontStyle179 := TFontStyleNode.Create;
FontStyle179.Size := 0.035;
{ METHOD .FontStyle }
Text178.FontStyle := FontStyle179;
{ METHOD .Geometry }
Shape177.Geometry := Text178;
{ METHOD .FdChildren.Add }
Billboard176.FdChildren.Add(Shape177);
{ METHOD .FdChildren.Add }
HAnimSite173.FdChildren.Add(Billboard176);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(HAnimSite173);
{ METHOD .FdChildren.Add }
HAnimJoint143.FdChildren.Add(HAnimSegment144);
HAnimJoint180 := THAnimJointNode.Create;
HAnimJoint180.Center := Vector3(0.104,0.4867,0.0308);
HAnimSegment181 := THAnimSegmentNode.Create;
Transform182 := TTransformNode.Create;
Transform182.Translation := Vector3(0.104,0.4867,0.0308);
Transform183 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform183.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform182.FdChildren.Add(Transform183);
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(Transform182);
Shape185 := TShapeNode.Create;
LineSet186 := TLineSetNode.Create;
LineSet186.SetVertexCount([2]);
Coordinate187 := TCoordinateNode.Create;
Coordinate187.SetPoint([Vector3(0.104,0.4867,0.0308),Vector3(0.1101,0.0656,-0.0736)]);
{ METHOD .Coord }
LineSet186.Coord := Coordinate187;
{ from l_knee to l_talocrural vertices 2 }
{ METHOD .Color }
LineSet186.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape185.Geometry := LineSet186;
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(Shape185);
HAnimSite189 := THAnimSiteNode.Create;
HAnimSite189.Translation := Vector3(0.1308,0.0597,-0.1032);
TouchSensor190 := TTouchSensorNode.Create;
TouchSensor190.Description := 'HAnimSite 49 l_lateral_malleolus';
end;

procedure InitHumanoid1Part12;
begin

{ METHOD .FdChildren.Add }
HAnimSite189.FdChildren.Add(TouchSensor190);
{ METHOD .FdChildren.Add }
HAnimSite189.FdChildren.Add(Shape30);
Billboard192 := TBillboardNode.Create;
Shape193 := TShapeNode.Create;
Text194 := TTextNode.Create;
Text194.SetText(['49']);
FontStyle195 := TFontStyleNode.Create;
FontStyle195.Size := 0.035;
{ METHOD .FontStyle }
Text194.FontStyle := FontStyle195;
{ METHOD .Geometry }
Shape193.Geometry := Text194;
{ METHOD .FdChildren.Add }
Billboard192.FdChildren.Add(Shape193);
{ METHOD .FdChildren.Add }
HAnimSite189.FdChildren.Add(Billboard192);
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(HAnimSite189);
HAnimSite196 := THAnimSiteNode.Create;
HAnimSite196.Translation := Vector3(0.089,0.0716,-0.0881);
TouchSensor197 := TTouchSensorNode.Create;
TouchSensor197.Description := 'HAnimSite 48 l_medial_malleolus';
{ METHOD .FdChildren.Add }
HAnimSite196.FdChildren.Add(TouchSensor197);
{ METHOD .FdChildren.Add }
HAnimSite196.FdChildren.Add(Shape30);
Billboard199 := TBillboardNode.Create;
Shape200 := TShapeNode.Create;
Text201 := TTextNode.Create;
Text201.SetText(['48']);
FontStyle202 := TFontStyleNode.Create;
FontStyle202.Size := 0.035;
{ METHOD .FontStyle }
Text201.FontStyle := FontStyle202;
{ METHOD .Geometry }
Shape200.Geometry := Text201;
{ METHOD .FdChildren.Add }
Billboard199.FdChildren.Add(Shape200);
{ METHOD .FdChildren.Add }
HAnimSite196.FdChildren.Add(Billboard199);
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(HAnimSite196);
HAnimSite203 := THAnimSiteNode.Create;
TouchSensor204 := TTouchSensorNode.Create;
TouchSensor204.Description := 'HAnimSite 47 l_tibiale';
{ METHOD .FdChildren.Add }
HAnimSite203.FdChildren.Add(TouchSensor204);
{ METHOD .FdChildren.Add }
HAnimSite203.FdChildren.Add(Shape30);
Billboard206 := TBillboardNode.Create;
Shape207 := TShapeNode.Create;
Text208 := TTextNode.Create;
Text208.SetText(['47']);
FontStyle209 := TFontStyleNode.Create;
end;

procedure InitHumanoid1Part13;
begin

FontStyle209.Size := 0.035;
{ METHOD .FontStyle }
Text208.FontStyle := FontStyle209;
{ METHOD .Geometry }
Shape207.Geometry := Text208;
{ METHOD .FdChildren.Add }
Billboard206.FdChildren.Add(Shape207);
{ METHOD .FdChildren.Add }
HAnimSite203.FdChildren.Add(Billboard206);
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(HAnimSite203);
{ METHOD .FdChildren.Add }
HAnimJoint180.FdChildren.Add(HAnimSegment181);
HAnimJoint210 := THAnimJointNode.Create;
HAnimJoint210.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimSegment211 := THAnimSegmentNode.Create;
Transform212 := TTransformNode.Create;
Transform212.Scale := Vector3(0.15,0.15,0.15);
Transform212.Translation := Vector3(0.08,0.06,-0.025);
Transform212.Rotation := Vector4(1,0,0,-1.57);
{ Transform left foot }
Transform213 := TTransformNode.Create;
{ Empty Transform left foot }
{ METHOD .FdChildren.Add }
Transform213.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform212.FdChildren.Add(Transform213);
{ METHOD .FdChildren.Add }
HAnimSegment211.FdChildren.Add(Transform212);
Shape215 := TShapeNode.Create;
LineSet216 := TLineSetNode.Create;
LineSet216.SetVertexCount([2]);
Coordinate217 := TCoordinateNode.Create;
Coordinate217.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.0824,0.0064,-0.004)]);
{ METHOD .Coord }
LineSet216.Coord := Coordinate217;
{ from l_talocrural to l_metatarsophalangeal_2 vertices 2 }
{ METHOD .Color }
LineSet216.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape215.Geometry := LineSet216;
{ METHOD .FdChildren.Add }
HAnimSegment211.FdChildren.Add(Shape215);
HAnimSite219 := THAnimSiteNode.Create;
HAnimSite219.Translation := Vector3(0.0974,0.0259,-0.1171);
TouchSensor220 := TTouchSensorNode.Create;
TouchSensor220.Description := 'HAnimSite 58 l_calcaneus_posterior';
{ METHOD .FdChildren.Add }
HAnimSite219.FdChildren.Add(TouchSensor220);
{ METHOD .FdChildren.Add }
HAnimSite219.FdChildren.Add(Shape30);
Billboard222 := TBillboardNode.Create;
Shape223 := TShapeNode.Create;
Text224 := TTextNode.Create;
Text224.SetText(['58']);
FontStyle225 := TFontStyleNode.Create;
FontStyle225.Size := 0.035;
{ METHOD .FontStyle }
Text224.FontStyle := FontStyle225;
end;

procedure InitHumanoid1Part14;
begin

{ METHOD .Geometry }
Shape223.Geometry := Text224;
{ METHOD .FdChildren.Add }
Billboard222.FdChildren.Add(Shape223);
{ METHOD .FdChildren.Add }
HAnimSite219.FdChildren.Add(Billboard222);
{ METHOD .FdChildren.Add }
HAnimSegment211.FdChildren.Add(HAnimSite219);
HAnimSite226 := THAnimSiteNode.Create;
HAnimSite226.Translation := Vector3(0.089,0.0575,-0.0943);
TouchSensor227 := TTouchSensorNode.Create;
TouchSensor227.Description := 'HAnimSite 50 l_sphyrion';
{ METHOD .FdChildren.Add }
HAnimSite226.FdChildren.Add(TouchSensor227);
{ METHOD .FdChildren.Add }
HAnimSite226.FdChildren.Add(Shape30);
Billboard229 := TBillboardNode.Create;
Shape230 := TShapeNode.Create;
Text231 := TTextNode.Create;
Text231.SetText(['50']);
FontStyle232 := TFontStyleNode.Create;
FontStyle232.Size := 0.035;
{ METHOD .FontStyle }
Text231.FontStyle := FontStyle232;
{ METHOD .Geometry }
Shape230.Geometry := Text231;
{ METHOD .FdChildren.Add }
Billboard229.FdChildren.Add(Shape230);
{ METHOD .FdChildren.Add }
HAnimSite226.FdChildren.Add(Billboard229);
{ METHOD .FdChildren.Add }
HAnimSegment211.FdChildren.Add(HAnimSite226);
{ METHOD .FdChildren.Add }
HAnimJoint210.FdChildren.Add(HAnimSegment211);
HAnimJoint233 := THAnimJointNode.Create;
HAnimJoint233.Center := Vector3(0.0824,0.0064,-0.004);
{ METHOD .FdChildren.Add }
HAnimJoint210.FdChildren.Add(HAnimJoint233);
{ METHOD .FdChildren.Add }
HAnimJoint180.FdChildren.Add(HAnimJoint210);
{ METHOD .FdChildren.Add }
HAnimJoint143.FdChildren.Add(HAnimJoint180);
{ METHOD .FdChildren.Add }
HAnimJoint60.FdChildren.Add(HAnimJoint143);
HAnimJoint234 := THAnimJointNode.Create;
HAnimJoint234.Center := Vector3(-0.095,0.9171,0.0029);
HAnimSegment235 := THAnimSegmentNode.Create;
Transform236 := TTransformNode.Create;
Transform236.Translation := Vector3(-0.095,0.9171,0.0029);
Transform237 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform237.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform236.FdChildren.Add(Transform237);
{ METHOD .FdChildren.Add }
HAnimSegment235.FdChildren.Add(Transform236);
Shape239 := TShapeNode.Create;
LineSet240 := TLineSetNode.Create;
LineSet240.SetVertexCount([2]);
end;

procedure InitHumanoid1Part15;
begin

Coordinate241 := TCoordinateNode.Create;
Coordinate241.SetPoint([Vector3(-0.095,0.9171,0.0029),Vector3(-0.0867,0.4913,0.0318)]);
{ METHOD .Coord }
LineSet240.Coord := Coordinate241;
{ from r_hip to r_knee vertices 2 }
{ METHOD .Color }
LineSet240.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape239.Geometry := LineSet240;
{ METHOD .FdChildren.Add }
HAnimSegment235.FdChildren.Add(Shape239);
HAnimSite243 := THAnimSiteNode.Create;
HAnimSite243.Translation := Vector3(-0.1421,0.4992,0.031);
TouchSensor244 := TTouchSensorNode.Create;
TouchSensor244.Description := 'HAnimSite 44 r_femoral_lateral_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite243.FdChildren.Add(TouchSensor244);
{ METHOD .FdChildren.Add }
HAnimSite243.FdChildren.Add(Shape30);
Billboard246 := TBillboardNode.Create;
Shape247 := TShapeNode.Create;
Text248 := TTextNode.Create;
Text248.SetText(['44']);
FontStyle249 := TFontStyleNode.Create;
FontStyle249.Size := 0.035;
{ METHOD .FontStyle }
Text248.FontStyle := FontStyle249;
{ METHOD .Geometry }
Shape247.Geometry := Text248;
{ METHOD .FdChildren.Add }
Billboard246.FdChildren.Add(Shape247);
{ METHOD .FdChildren.Add }
HAnimSite243.FdChildren.Add(Billboard246);
{ METHOD .FdChildren.Add }
HAnimSegment235.FdChildren.Add(HAnimSite243);
HAnimSite250 := THAnimSiteNode.Create;
HAnimSite250.Translation := Vector3(-0.0221,0.5014,0.0289);
TouchSensor251 := TTouchSensorNode.Create;
TouchSensor251.Description := 'HAnimSite 43 r_femoral_medial_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite250.FdChildren.Add(TouchSensor251);
{ METHOD .FdChildren.Add }
HAnimSite250.FdChildren.Add(Shape30);
Billboard253 := TBillboardNode.Create;
Shape254 := TShapeNode.Create;
Text255 := TTextNode.Create;
Text255.SetText(['43']);
FontStyle256 := TFontStyleNode.Create;
FontStyle256.Size := 0.035;
{ METHOD .FontStyle }
Text255.FontStyle := FontStyle256;
{ METHOD .Geometry }
Shape254.Geometry := Text255;
{ METHOD .FdChildren.Add }
Billboard253.FdChildren.Add(Shape254);
{ METHOD .FdChildren.Add }
HAnimSite250.FdChildren.Add(Billboard253);
{ METHOD .FdChildren.Add }
HAnimSegment235.FdChildren.Add(HAnimSite250);
end;

procedure InitHumanoid1Part16;
begin

HAnimSite257 := THAnimSiteNode.Create;
HAnimSite257.Translation := Vector3(-0.0825,0.4932,-0.0326);
TouchSensor258 := TTouchSensorNode.Create;
TouchSensor258.Description := 'HAnimSite 91 r_knee_crease';
{ METHOD .FdChildren.Add }
HAnimSite257.FdChildren.Add(TouchSensor258);
{ METHOD .FdChildren.Add }
HAnimSite257.FdChildren.Add(Shape30);
Billboard260 := TBillboardNode.Create;
Shape261 := TShapeNode.Create;
Text262 := TTextNode.Create;
Text262.SetText(['91']);
FontStyle263 := TFontStyleNode.Create;
FontStyle263.Size := 0.035;
{ METHOD .FontStyle }
Text262.FontStyle := FontStyle263;
{ METHOD .Geometry }
Shape261.Geometry := Text262;
{ METHOD .FdChildren.Add }
Billboard260.FdChildren.Add(Shape261);
{ METHOD .FdChildren.Add }
HAnimSite257.FdChildren.Add(Billboard260);
{ METHOD .FdChildren.Add }
HAnimSegment235.FdChildren.Add(HAnimSite257);
HAnimSite264 := THAnimSiteNode.Create;
TouchSensor265 := TTouchSensorNode.Create;
TouchSensor265.Description := 'HAnimSite 45 r_suprapatella';
{ METHOD .FdChildren.Add }
HAnimSite264.FdChildren.Add(TouchSensor265);
{ METHOD .FdChildren.Add }
HAnimSite264.FdChildren.Add(Shape30);
Billboard267 := TBillboardNode.Create;
Shape268 := TShapeNode.Create;
Text269 := TTextNode.Create;
Text269.SetText(['45']);
FontStyle270 := TFontStyleNode.Create;
FontStyle270.Size := 0.035;
{ METHOD .FontStyle }
Text269.FontStyle := FontStyle270;
{ METHOD .Geometry }
Shape268.Geometry := Text269;
{ METHOD .FdChildren.Add }
Billboard267.FdChildren.Add(Shape268);
{ METHOD .FdChildren.Add }
HAnimSite264.FdChildren.Add(Billboard267);
{ METHOD .FdChildren.Add }
HAnimSegment235.FdChildren.Add(HAnimSite264);
{ METHOD .FdChildren.Add }
HAnimJoint234.FdChildren.Add(HAnimSegment235);
HAnimJoint271 := THAnimJointNode.Create;
HAnimJoint271.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimSegment272 := THAnimSegmentNode.Create;
Transform273 := TTransformNode.Create;
Transform273.Translation := Vector3(-0.0867,0.4913,0.0318);
Transform274 := TTransformNode.Create;
end;

procedure InitHumanoid1Part17;
begin

{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform274.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform273.FdChildren.Add(Transform274);
{ METHOD .FdChildren.Add }
HAnimSegment272.FdChildren.Add(Transform273);
Shape276 := TShapeNode.Create;
LineSet277 := TLineSetNode.Create;
LineSet277.SetVertexCount([2]);
Coordinate278 := TCoordinateNode.Create;
Coordinate278.SetPoint([Vector3(-0.0867,0.4913,0.0318),Vector3(-0.0801,0.0712,-0.0766)]);
{ METHOD .Coord }
LineSet277.Coord := Coordinate278;
{ from r_knee to r_talocrural vertices 2 }
{ METHOD .Color }
LineSet277.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape276.Geometry := LineSet277;
{ METHOD .FdChildren.Add }
HAnimSegment272.FdChildren.Add(Shape276);
HAnimSite280 := THAnimSiteNode.Create;
HAnimSite280.Translation := Vector3(-0.1006,0.0658,-0.1075);
TouchSensor281 := TTouchSensorNode.Create;
TouchSensor281.Description := 'HAnimSite 53 r_lateral_malleolus';
{ METHOD .FdChildren.Add }
HAnimSite280.FdChildren.Add(TouchSensor281);
{ METHOD .FdChildren.Add }
HAnimSite280.FdChildren.Add(Shape30);
Billboard283 := TBillboardNode.Create;
Shape284 := TShapeNode.Create;
Text285 := TTextNode.Create;
Text285.SetText(['53']);
FontStyle286 := TFontStyleNode.Create;
FontStyle286.Size := 0.035;
{ METHOD .FontStyle }
Text285.FontStyle := FontStyle286;
{ METHOD .Geometry }
Shape284.Geometry := Text285;
{ METHOD .FdChildren.Add }
Billboard283.FdChildren.Add(Shape284);
{ METHOD .FdChildren.Add }
HAnimSite280.FdChildren.Add(Billboard283);
{ METHOD .FdChildren.Add }
HAnimSegment272.FdChildren.Add(HAnimSite280);
HAnimSite287 := THAnimSiteNode.Create;
HAnimSite287.Translation := Vector3(-0.0591,0.076,-0.0928);
TouchSensor288 := TTouchSensorNode.Create;
TouchSensor288.Description := 'HAnimSite 52 r_medial_malleolus';
{ METHOD .FdChildren.Add }
HAnimSite287.FdChildren.Add(TouchSensor288);
{ METHOD .FdChildren.Add }
HAnimSite287.FdChildren.Add(Shape30);
Billboard290 := TBillboardNode.Create;
Shape291 := TShapeNode.Create;
Text292 := TTextNode.Create;
Text292.SetText(['52']);
FontStyle293 := TFontStyleNode.Create;
end;

procedure InitHumanoid1Part18;
begin

FontStyle293.Size := 0.035;
{ METHOD .FontStyle }
Text292.FontStyle := FontStyle293;
{ METHOD .Geometry }
Shape291.Geometry := Text292;
{ METHOD .FdChildren.Add }
Billboard290.FdChildren.Add(Shape291);
{ METHOD .FdChildren.Add }
HAnimSite287.FdChildren.Add(Billboard290);
{ METHOD .FdChildren.Add }
HAnimSegment272.FdChildren.Add(HAnimSite287);
HAnimSite294 := THAnimSiteNode.Create;
TouchSensor295 := TTouchSensorNode.Create;
TouchSensor295.Description := 'HAnimSite 51 r_tibiale';
{ METHOD .FdChildren.Add }
HAnimSite294.FdChildren.Add(TouchSensor295);
{ METHOD .FdChildren.Add }
HAnimSite294.FdChildren.Add(Shape30);
Billboard297 := TBillboardNode.Create;
Shape298 := TShapeNode.Create;
Text299 := TTextNode.Create;
Text299.SetText(['51']);
FontStyle300 := TFontStyleNode.Create;
FontStyle300.Size := 0.035;
{ METHOD .FontStyle }
Text299.FontStyle := FontStyle300;
{ METHOD .Geometry }
Shape298.Geometry := Text299;
{ METHOD .FdChildren.Add }
Billboard297.FdChildren.Add(Shape298);
{ METHOD .FdChildren.Add }
HAnimSite294.FdChildren.Add(Billboard297);
{ METHOD .FdChildren.Add }
HAnimSegment272.FdChildren.Add(HAnimSite294);
{ METHOD .FdChildren.Add }
HAnimJoint271.FdChildren.Add(HAnimSegment272);
HAnimJoint301 := THAnimJointNode.Create;
HAnimJoint301.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimSegment302 := THAnimSegmentNode.Create;
Transform303 := TTransformNode.Create;
Transform303.Scale := Vector3(0.15,0.15,0.15);
Transform303.Translation := Vector3(-0.05,0.06,-0.025);
Transform303.Rotation := Vector4(1,0,0,-1.57);
{ Transform right foot }
Transform304 := TTransformNode.Create;
{ Empty Transform right foot }
{ METHOD .FdChildren.Add }
Transform304.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform303.FdChildren.Add(Transform304);
{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(Transform303);
Shape306 := TShapeNode.Create;
LineSet307 := TLineSetNode.Create;
LineSet307.SetVertexCount([2]);
Coordinate308 := TCoordinateNode.Create;
Coordinate308.SetPoint([Vector3(-0.0801,0.0712,-0.0766),Vector3(-0.0823,0.0064,-0.004)]);
{ METHOD .Coord }
LineSet307.Coord := Coordinate308;
end;

procedure InitHumanoid1Part19;
begin

{ from r_talocrural to r_metatarsophalangeal_2 vertices 2 }
{ METHOD .Color }
LineSet307.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape306.Geometry := LineSet307;
{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(Shape306);
HAnimSite310 := THAnimSiteNode.Create;
HAnimSite310.Translation := Vector3(-0.0692,0.0297,-0.1221);
TouchSensor311 := TTouchSensorNode.Create;
TouchSensor311.Description := 'HAnimSite 62 r_calcaneus_posterior';
{ METHOD .FdChildren.Add }
HAnimSite310.FdChildren.Add(TouchSensor311);
{ METHOD .FdChildren.Add }
HAnimSite310.FdChildren.Add(Shape30);
Billboard313 := TBillboardNode.Create;
Shape314 := TShapeNode.Create;
Text315 := TTextNode.Create;
Text315.SetText(['62']);
FontStyle316 := TFontStyleNode.Create;
FontStyle316.Size := 0.035;
{ METHOD .FontStyle }
Text315.FontStyle := FontStyle316;
{ METHOD .Geometry }
Shape314.Geometry := Text315;
{ METHOD .FdChildren.Add }
Billboard313.FdChildren.Add(Shape314);
{ METHOD .FdChildren.Add }
HAnimSite310.FdChildren.Add(Billboard313);
{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(HAnimSite310);
HAnimSite317 := THAnimSiteNode.Create;
HAnimSite317.Translation := Vector3(-0.0603,0.061,-0.1002);
TouchSensor318 := TTouchSensorNode.Create;
TouchSensor318.Description := 'HAnimSite 54 r_sphyrion';
{ METHOD .FdChildren.Add }
HAnimSite317.FdChildren.Add(TouchSensor318);
{ METHOD .FdChildren.Add }
HAnimSite317.FdChildren.Add(Shape30);
Billboard320 := TBillboardNode.Create;
Shape321 := TShapeNode.Create;
Text322 := TTextNode.Create;
Text322.SetText(['54']);
FontStyle323 := TFontStyleNode.Create;
FontStyle323.Size := 0.035;
{ METHOD .FontStyle }
Text322.FontStyle := FontStyle323;
{ METHOD .Geometry }
Shape321.Geometry := Text322;
{ METHOD .FdChildren.Add }
Billboard320.FdChildren.Add(Shape321);
{ METHOD .FdChildren.Add }
HAnimSite317.FdChildren.Add(Billboard320);
{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(HAnimSite317);
{ METHOD .FdChildren.Add }
HAnimJoint301.FdChildren.Add(HAnimSegment302);
HAnimJoint324 := THAnimJointNode.Create;
HAnimJoint324.Center := Vector3(-0.0823,0.0064,-0.004);
end;

procedure InitHumanoid1Part20;
begin

{ METHOD .FdChildren.Add }
HAnimJoint301.FdChildren.Add(HAnimJoint324);
{ METHOD .FdChildren.Add }
HAnimJoint271.FdChildren.Add(HAnimJoint301);
{ METHOD .FdChildren.Add }
HAnimJoint234.FdChildren.Add(HAnimJoint271);
{ METHOD .FdChildren.Add }
HAnimJoint60.FdChildren.Add(HAnimJoint234);
{ METHOD .FdChildren.Add }
HAnimJoint47.FdChildren.Add(HAnimJoint60);
HAnimJoint325 := THAnimJointNode.Create;
HAnimJoint325.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimSegment326 := THAnimSegmentNode.Create;
Transform327 := TTransformNode.Create;
Transform327.Translation := Vector3(0.0028,1.0568,-0.0776);
Transform328 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform328.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform327.FdChildren.Add(Transform328);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(Transform327);
Shape330 := TShapeNode.Create;
LineSet331 := TLineSetNode.Create;
LineSet331.SetVertexCount([2]);
Coordinate332 := TCoordinateNode.Create;
Coordinate332.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0044,1.6209,0.0236)]);
{ METHOD .Coord }
LineSet331.Coord := Coordinate332;
{ from vl5 to skullbase vertices 2 }
{ METHOD .Color }
LineSet331.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape330.Geometry := LineSet331;
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(Shape330);
HAnimSite334 := THAnimSiteNode.Create;
TouchSensor335 := TTouchSensorNode.Create;
TouchSensor335.Description := 'HAnimSite 11 adams_apple';
{ METHOD .FdChildren.Add }
HAnimSite334.FdChildren.Add(TouchSensor335);
{ METHOD .FdChildren.Add }
HAnimSite334.FdChildren.Add(Shape30);
Billboard337 := TBillboardNode.Create;
Shape338 := TShapeNode.Create;
Text339 := TTextNode.Create;
Text339.SetText(['11']);
FontStyle340 := TFontStyleNode.Create;
FontStyle340.Size := 0.035;
{ METHOD .FontStyle }
Text339.FontStyle := FontStyle340;
{ METHOD .Geometry }
Shape338.Geometry := Text339;
{ METHOD .FdChildren.Add }
Billboard337.FdChildren.Add(Shape338);
{ METHOD .FdChildren.Add }
HAnimSite334.FdChildren.Add(Billboard337);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite334);
HAnimSite341 := THAnimSiteNode.Create;
end;

procedure InitHumanoid1Part21;
begin

HAnimSite341.Translation := Vector3(0.0064,1.52,-0.0815);
TouchSensor342 := TTouchSensorNode.Create;
TouchSensor342.Description := 'HAnimSite 10 cervicale';
{ METHOD .FdChildren.Add }
HAnimSite341.FdChildren.Add(TouchSensor342);
{ METHOD .FdChildren.Add }
HAnimSite341.FdChildren.Add(Shape30);
Billboard344 := TBillboardNode.Create;
Shape345 := TShapeNode.Create;
Text346 := TTextNode.Create;
Text346.SetText(['10']);
FontStyle347 := TFontStyleNode.Create;
FontStyle347.Size := 0.035;
{ METHOD .FontStyle }
Text346.FontStyle := FontStyle347;
{ METHOD .Geometry }
Shape345.Geometry := Text346;
{ METHOD .FdChildren.Add }
Billboard344.FdChildren.Add(Shape345);
{ METHOD .FdChildren.Add }
HAnimSite341.FdChildren.Add(Billboard344);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite341);
HAnimSite348 := THAnimSiteNode.Create;
HAnimSite348.Translation := Vector3(0.2032,1.476,-0.049);
TouchSensor349 := TTouchSensorNode.Create;
TouchSensor349.Description := 'HAnimSite 15 l_acromion';
{ METHOD .FdChildren.Add }
HAnimSite348.FdChildren.Add(TouchSensor349);
{ METHOD .FdChildren.Add }
HAnimSite348.FdChildren.Add(Shape30);
Billboard351 := TBillboardNode.Create;
Shape352 := TShapeNode.Create;
Text353 := TTextNode.Create;
Text353.SetText(['15']);
FontStyle354 := TFontStyleNode.Create;
FontStyle354.Size := 0.035;
{ METHOD .FontStyle }
Text353.FontStyle := FontStyle354;
{ METHOD .Geometry }
Shape352.Geometry := Text353;
{ METHOD .FdChildren.Add }
Billboard351.FdChildren.Add(Shape352);
{ METHOD .FdChildren.Add }
HAnimSite348.FdChildren.Add(Billboard351);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite348);
HAnimSite355 := THAnimSiteNode.Create;
HAnimSite355.Translation := Vector3(0.1706,1.4072,-0.0875);
TouchSensor356 := TTouchSensorNode.Create;
TouchSensor356.Description := 'HAnimSite 17 l_axilla_distal';
{ METHOD .FdChildren.Add }
HAnimSite355.FdChildren.Add(TouchSensor356);
{ METHOD .FdChildren.Add }
HAnimSite355.FdChildren.Add(Shape30);
Billboard358 := TBillboardNode.Create;
end;

procedure InitHumanoid1Part22;
begin

Shape359 := TShapeNode.Create;
Text360 := TTextNode.Create;
Text360.SetText(['17']);
FontStyle361 := TFontStyleNode.Create;
FontStyle361.Size := 0.035;
{ METHOD .FontStyle }
Text360.FontStyle := FontStyle361;
{ METHOD .Geometry }
Shape359.Geometry := Text360;
{ METHOD .FdChildren.Add }
Billboard358.FdChildren.Add(Shape359);
{ METHOD .FdChildren.Add }
HAnimSite355.FdChildren.Add(Billboard358);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite355);
HAnimSite362 := THAnimSiteNode.Create;
TouchSensor363 := TTouchSensorNode.Create;
TouchSensor363.Description := 'HAnimSite 18 l_axilla_posterior_folds';
{ METHOD .FdChildren.Add }
HAnimSite362.FdChildren.Add(TouchSensor363);
{ METHOD .FdChildren.Add }
HAnimSite362.FdChildren.Add(Shape30);
Billboard365 := TBillboardNode.Create;
Shape366 := TShapeNode.Create;
Text367 := TTextNode.Create;
Text367.SetText(['18']);
FontStyle368 := TFontStyleNode.Create;
FontStyle368.Size := 0.035;
{ METHOD .FontStyle }
Text367.FontStyle := FontStyle368;
{ METHOD .Geometry }
Shape366.Geometry := Text367;
{ METHOD .FdChildren.Add }
Billboard365.FdChildren.Add(Shape366);
{ METHOD .FdChildren.Add }
HAnimSite362.FdChildren.Add(Billboard365);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite362);
HAnimSite369 := THAnimSiteNode.Create;
HAnimSite369.Translation := Vector3(0.1777,1.4065,-0.0075);
TouchSensor370 := TTouchSensorNode.Create;
TouchSensor370.Description := 'HAnimSite 16 l_axilla_proximal';
{ METHOD .FdChildren.Add }
HAnimSite369.FdChildren.Add(TouchSensor370);
{ METHOD .FdChildren.Add }
HAnimSite369.FdChildren.Add(Shape30);
Billboard372 := TBillboardNode.Create;
Shape373 := TShapeNode.Create;
Text374 := TTextNode.Create;
Text374.SetText(['16']);
FontStyle375 := TFontStyleNode.Create;
FontStyle375.Size := 0.035;
{ METHOD .FontStyle }
Text374.FontStyle := FontStyle375;
{ METHOD .Geometry }
Shape373.Geometry := Text374;
end;

procedure InitHumanoid1Part23;
begin

{ METHOD .FdChildren.Add }
Billboard372.FdChildren.Add(Shape373);
{ METHOD .FdChildren.Add }
HAnimSite369.FdChildren.Add(Billboard372);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite369);
HAnimSite376 := THAnimSiteNode.Create;
TouchSensor377 := TTouchSensorNode.Create;
TouchSensor377.Description := 'HAnimSite 94 l_chest_midsagittal_plane';
{ METHOD .FdChildren.Add }
HAnimSite376.FdChildren.Add(TouchSensor377);
{ METHOD .FdChildren.Add }
HAnimSite376.FdChildren.Add(Shape30);
Billboard379 := TBillboardNode.Create;
Shape380 := TShapeNode.Create;
Text381 := TTextNode.Create;
Text381.SetText(['94']);
FontStyle382 := TFontStyleNode.Create;
FontStyle382.Size := 0.035;
{ METHOD .FontStyle }
Text381.FontStyle := FontStyle382;
{ METHOD .Geometry }
Shape380.Geometry := Text381;
{ METHOD .FdChildren.Add }
Billboard379.FdChildren.Add(Shape380);
{ METHOD .FdChildren.Add }
HAnimSite376.FdChildren.Add(Billboard379);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite376);
HAnimSite383 := THAnimSiteNode.Create;
HAnimSite383.Translation := Vector3(0.0271,1.4943,0.0394);
TouchSensor384 := TTouchSensorNode.Create;
TouchSensor384.Description := 'HAnimSite 14 l_clavicale';
{ METHOD .FdChildren.Add }
HAnimSite383.FdChildren.Add(TouchSensor384);
{ METHOD .FdChildren.Add }
HAnimSite383.FdChildren.Add(Shape30);
Billboard386 := TBillboardNode.Create;
Shape387 := TShapeNode.Create;
Text388 := TTextNode.Create;
Text388.SetText(['14']);
FontStyle389 := TFontStyleNode.Create;
FontStyle389.Size := 0.035;
{ METHOD .FontStyle }
Text388.FontStyle := FontStyle389;
{ METHOD .Geometry }
Shape387.Geometry := Text388;
{ METHOD .FdChildren.Add }
Billboard386.FdChildren.Add(Shape387);
{ METHOD .FdChildren.Add }
HAnimSite383.FdChildren.Add(Billboard386);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite383);
HAnimSite390 := THAnimSiteNode.Create;
HAnimSite390.Translation := Vector3(0.0646,1.5141,-0.038);
TouchSensor391 := TTouchSensorNode.Create;
TouchSensor391.Description := 'HAnimSite 82 l_neck_base';
end;

procedure InitHumanoid1Part24;
begin

{ METHOD .FdChildren.Add }
HAnimSite390.FdChildren.Add(TouchSensor391);
{ METHOD .FdChildren.Add }
HAnimSite390.FdChildren.Add(Shape30);
Billboard393 := TBillboardNode.Create;
Shape394 := TShapeNode.Create;
Text395 := TTextNode.Create;
Text395.SetText(['82']);
FontStyle396 := TFontStyleNode.Create;
FontStyle396.Size := 0.035;
{ METHOD .FontStyle }
Text395.FontStyle := FontStyle396;
{ METHOD .Geometry }
Shape394.Geometry := Text395;
{ METHOD .FdChildren.Add }
Billboard393.FdChildren.Add(Shape394);
{ METHOD .FdChildren.Add }
HAnimSite390.FdChildren.Add(Billboard393);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite390);
HAnimSite397 := THAnimSiteNode.Create;
HAnimSite397.Translation := Vector3(0.0871,1.1925,0.0992);
TouchSensor398 := TTouchSensorNode.Create;
TouchSensor398.Description := 'HAnimSite 28 l_rib10';
{ METHOD .FdChildren.Add }
HAnimSite397.FdChildren.Add(TouchSensor398);
{ METHOD .FdChildren.Add }
HAnimSite397.FdChildren.Add(Shape30);
Billboard400 := TBillboardNode.Create;
Shape401 := TShapeNode.Create;
Text402 := TTextNode.Create;
Text402.SetText(['28']);
FontStyle403 := TFontStyleNode.Create;
FontStyle403.Size := 0.035;
{ METHOD .FontStyle }
Text402.FontStyle := FontStyle403;
{ METHOD .Geometry }
Shape401.Geometry := Text402;
{ METHOD .FdChildren.Add }
Billboard400.FdChildren.Add(Shape401);
{ METHOD .FdChildren.Add }
HAnimSite397.FdChildren.Add(Billboard400);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite397);
HAnimSite404 := THAnimSiteNode.Create;
HAnimSite404.Translation := Vector3(0.0918,1.3382,0.1192);
TouchSensor405 := TTouchSensorNode.Create;
TouchSensor405.Description := 'HAnimSite 29 l_thelion';
{ METHOD .FdChildren.Add }
HAnimSite404.FdChildren.Add(TouchSensor405);
{ METHOD .FdChildren.Add }
HAnimSite404.FdChildren.Add(Shape30);
Billboard407 := TBillboardNode.Create;
Shape408 := TShapeNode.Create;
Text409 := TTextNode.Create;
Text409.SetText(['29']);
end;

procedure InitHumanoid1Part25;
begin

FontStyle410 := TFontStyleNode.Create;
FontStyle410.Size := 0.035;
{ METHOD .FontStyle }
Text409.FontStyle := FontStyle410;
{ METHOD .Geometry }
Shape408.Geometry := Text409;
{ METHOD .FdChildren.Add }
Billboard407.FdChildren.Add(Shape408);
{ METHOD .FdChildren.Add }
HAnimSite404.FdChildren.Add(Billboard407);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite404);
HAnimSite411 := THAnimSiteNode.Create;
TouchSensor412 := TTouchSensorNode.Create;
TouchSensor412.Description := 'HAnimSite 88 mesosternale';
{ METHOD .FdChildren.Add }
HAnimSite411.FdChildren.Add(TouchSensor412);
{ METHOD .FdChildren.Add }
HAnimSite411.FdChildren.Add(Shape30);
Billboard414 := TBillboardNode.Create;
Shape415 := TShapeNode.Create;
Text416 := TTextNode.Create;
Text416.SetText(['88']);
FontStyle417 := TFontStyleNode.Create;
FontStyle417.Size := 0.035;
{ METHOD .FontStyle }
Text416.FontStyle := FontStyle417;
{ METHOD .Geometry }
Shape415.Geometry := Text416;
{ METHOD .FdChildren.Add }
Billboard414.FdChildren.Add(Shape415);
{ METHOD .FdChildren.Add }
HAnimSite411.FdChildren.Add(Billboard414);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite411);
HAnimSite418 := THAnimSiteNode.Create;
HAnimSite418.Translation := Vector3(0.0069,1.0966,0.1017);
TouchSensor419 := TTouchSensorNode.Create;
TouchSensor419.Description := 'HAnimSite 84 navel';
{ METHOD .FdChildren.Add }
HAnimSite418.FdChildren.Add(TouchSensor419);
{ METHOD .FdChildren.Add }
HAnimSite418.FdChildren.Add(Shape30);
Billboard421 := TBillboardNode.Create;
Shape422 := TShapeNode.Create;
Text423 := TTextNode.Create;
Text423.SetText(['84']);
FontStyle424 := TFontStyleNode.Create;
FontStyle424.Size := 0.035;
{ METHOD .FontStyle }
Text423.FontStyle := FontStyle424;
{ METHOD .Geometry }
Shape422.Geometry := Text423;
{ METHOD .FdChildren.Add }
Billboard421.FdChildren.Add(Shape422);
{ METHOD .FdChildren.Add }
HAnimSite418.FdChildren.Add(Billboard421);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite418);
end;

procedure InitHumanoid1Part26;
begin

HAnimSite425 := THAnimSiteNode.Create;
HAnimSite425.Translation := Vector3(-0.1905,1.4791,-0.0431);
TouchSensor426 := TTouchSensorNode.Create;
TouchSensor426.Description := 'HAnimSite 20 r_acromion';
{ METHOD .FdChildren.Add }
HAnimSite425.FdChildren.Add(TouchSensor426);
{ METHOD .FdChildren.Add }
HAnimSite425.FdChildren.Add(Shape30);
Billboard428 := TBillboardNode.Create;
Shape429 := TShapeNode.Create;
Text430 := TTextNode.Create;
Text430.SetText(['20']);
FontStyle431 := TFontStyleNode.Create;
FontStyle431.Size := 0.035;
{ METHOD .FontStyle }
Text430.FontStyle := FontStyle431;
{ METHOD .Geometry }
Shape429.Geometry := Text430;
{ METHOD .FdChildren.Add }
Billboard428.FdChildren.Add(Shape429);
{ METHOD .FdChildren.Add }
HAnimSite425.FdChildren.Add(Billboard428);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite425);
HAnimSite432 := THAnimSiteNode.Create;
HAnimSite432.Translation := Vector3(-0.1603,1.4098,-0.0826);
TouchSensor433 := TTouchSensorNode.Create;
TouchSensor433.Description := 'HAnimSite 22 r_axilla_distal';
{ METHOD .FdChildren.Add }
HAnimSite432.FdChildren.Add(TouchSensor433);
{ METHOD .FdChildren.Add }
HAnimSite432.FdChildren.Add(Shape30);
Billboard435 := TBillboardNode.Create;
Shape436 := TShapeNode.Create;
Text437 := TTextNode.Create;
Text437.SetText(['22']);
FontStyle438 := TFontStyleNode.Create;
FontStyle438.Size := 0.035;
{ METHOD .FontStyle }
Text437.FontStyle := FontStyle438;
{ METHOD .Geometry }
Shape436.Geometry := Text437;
{ METHOD .FdChildren.Add }
Billboard435.FdChildren.Add(Shape436);
{ METHOD .FdChildren.Add }
HAnimSite432.FdChildren.Add(Billboard435);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite432);
HAnimSite439 := THAnimSiteNode.Create;
TouchSensor440 := TTouchSensorNode.Create;
TouchSensor440.Description := 'HAnimSite 23 r_axilla_posterior_folds';
{ METHOD .FdChildren.Add }
HAnimSite439.FdChildren.Add(TouchSensor440);
{ METHOD .FdChildren.Add }
HAnimSite439.FdChildren.Add(Shape30);
Billboard442 := TBillboardNode.Create;
end;

procedure InitHumanoid1Part27;
begin

Shape443 := TShapeNode.Create;
Text444 := TTextNode.Create;
Text444.SetText(['23']);
FontStyle445 := TFontStyleNode.Create;
FontStyle445.Size := 0.035;
{ METHOD .FontStyle }
Text444.FontStyle := FontStyle445;
{ METHOD .Geometry }
Shape443.Geometry := Text444;
{ METHOD .FdChildren.Add }
Billboard442.FdChildren.Add(Shape443);
{ METHOD .FdChildren.Add }
HAnimSite439.FdChildren.Add(Billboard442);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite439);
HAnimSite446 := THAnimSiteNode.Create;
HAnimSite446.Translation := Vector3(-0.1626,1.4072,-0.0031);
TouchSensor447 := TTouchSensorNode.Create;
TouchSensor447.Description := 'HAnimSite 21 r_axilla_proximal';
{ METHOD .FdChildren.Add }
HAnimSite446.FdChildren.Add(TouchSensor447);
{ METHOD .FdChildren.Add }
HAnimSite446.FdChildren.Add(Shape30);
Billboard449 := TBillboardNode.Create;
Shape450 := TShapeNode.Create;
Text451 := TTextNode.Create;
Text451.SetText(['21']);
FontStyle452 := TFontStyleNode.Create;
FontStyle452.Size := 0.035;
{ METHOD .FontStyle }
Text451.FontStyle := FontStyle452;
{ METHOD .Geometry }
Shape450.Geometry := Text451;
{ METHOD .FdChildren.Add }
Billboard449.FdChildren.Add(Shape450);
{ METHOD .FdChildren.Add }
HAnimSite446.FdChildren.Add(Billboard449);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite446);
HAnimSite453 := THAnimSiteNode.Create;
TouchSensor454 := TTouchSensorNode.Create;
TouchSensor454.Description := 'HAnimSite 95 r_chest_midsagittal_plane';
{ METHOD .FdChildren.Add }
HAnimSite453.FdChildren.Add(TouchSensor454);
{ METHOD .FdChildren.Add }
HAnimSite453.FdChildren.Add(Shape30);
Billboard456 := TBillboardNode.Create;
Shape457 := TShapeNode.Create;
Text458 := TTextNode.Create;
Text458.SetText(['95']);
FontStyle459 := TFontStyleNode.Create;
FontStyle459.Size := 0.035;
{ METHOD .FontStyle }
Text458.FontStyle := FontStyle459;
{ METHOD .Geometry }
Shape457.Geometry := Text458;
end;

procedure InitHumanoid1Part28;
begin

{ METHOD .FdChildren.Add }
Billboard456.FdChildren.Add(Shape457);
{ METHOD .FdChildren.Add }
HAnimSite453.FdChildren.Add(Billboard456);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite453);
HAnimSite460 := THAnimSiteNode.Create;
HAnimSite460.Translation := Vector3(-0.0115,1.4943,0.04);
TouchSensor461 := TTouchSensorNode.Create;
TouchSensor461.Description := 'HAnimSite 19 r_clavicale';
{ METHOD .FdChildren.Add }
HAnimSite460.FdChildren.Add(TouchSensor461);
{ METHOD .FdChildren.Add }
HAnimSite460.FdChildren.Add(Shape30);
Billboard463 := TBillboardNode.Create;
Shape464 := TShapeNode.Create;
Text465 := TTextNode.Create;
Text465.SetText(['19']);
FontStyle466 := TFontStyleNode.Create;
FontStyle466.Size := 0.035;
{ METHOD .FontStyle }
Text465.FontStyle := FontStyle466;
{ METHOD .Geometry }
Shape464.Geometry := Text465;
{ METHOD .FdChildren.Add }
Billboard463.FdChildren.Add(Shape464);
{ METHOD .FdChildren.Add }
HAnimSite460.FdChildren.Add(Billboard463);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite460);
HAnimSite467 := THAnimSiteNode.Create;
HAnimSite467.Translation := Vector3(-0.0419,1.5149,-0.022);
TouchSensor468 := TTouchSensorNode.Create;
TouchSensor468.Description := 'HAnimSite 83 r_neck_base';
{ METHOD .FdChildren.Add }
HAnimSite467.FdChildren.Add(TouchSensor468);
{ METHOD .FdChildren.Add }
HAnimSite467.FdChildren.Add(Shape30);
Billboard470 := TBillboardNode.Create;
Shape471 := TShapeNode.Create;
Text472 := TTextNode.Create;
Text472.SetText(['83']);
FontStyle473 := TFontStyleNode.Create;
FontStyle473.Size := 0.035;
{ METHOD .FontStyle }
Text472.FontStyle := FontStyle473;
{ METHOD .Geometry }
Shape471.Geometry := Text472;
{ METHOD .FdChildren.Add }
Billboard470.FdChildren.Add(Shape471);
{ METHOD .FdChildren.Add }
HAnimSite467.FdChildren.Add(Billboard470);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite467);
HAnimSite474 := THAnimSiteNode.Create;
HAnimSite474.Translation := Vector3(-0.0711,1.1941,0.1016);
TouchSensor475 := TTouchSensorNode.Create;
end;

procedure InitHumanoid1Part29;
begin

TouchSensor475.Description := 'HAnimSite 30 r_rib10';
{ METHOD .FdChildren.Add }
HAnimSite474.FdChildren.Add(TouchSensor475);
{ METHOD .FdChildren.Add }
HAnimSite474.FdChildren.Add(Shape30);
Billboard477 := TBillboardNode.Create;
Shape478 := TShapeNode.Create;
Text479 := TTextNode.Create;
Text479.SetText(['30']);
FontStyle480 := TFontStyleNode.Create;
FontStyle480.Size := 0.035;
{ METHOD .FontStyle }
Text479.FontStyle := FontStyle480;
{ METHOD .Geometry }
Shape478.Geometry := Text479;
{ METHOD .FdChildren.Add }
Billboard477.FdChildren.Add(Shape478);
{ METHOD .FdChildren.Add }
HAnimSite474.FdChildren.Add(Billboard477);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite474);
HAnimSite481 := THAnimSiteNode.Create;
HAnimSite481.Translation := Vector3(-0.0736,1.3385,0.1217);
TouchSensor482 := TTouchSensorNode.Create;
TouchSensor482.Description := 'HAnimSite 31 r_thelion';
{ METHOD .FdChildren.Add }
HAnimSite481.FdChildren.Add(TouchSensor482);
{ METHOD .FdChildren.Add }
HAnimSite481.FdChildren.Add(Shape30);
Billboard484 := TBillboardNode.Create;
Shape485 := TShapeNode.Create;
Text486 := TTextNode.Create;
Text486.SetText(['31']);
FontStyle487 := TFontStyleNode.Create;
FontStyle487.Size := 0.035;
{ METHOD .FontStyle }
Text486.FontStyle := FontStyle487;
{ METHOD .Geometry }
Shape485.Geometry := Text486;
{ METHOD .FdChildren.Add }
Billboard484.FdChildren.Add(Shape485);
{ METHOD .FdChildren.Add }
HAnimSite481.FdChildren.Add(Billboard484);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite481);
HAnimSite488 := THAnimSiteNode.Create;
TouchSensor489 := TTouchSensorNode.Create;
TouchSensor489.Description := 'HAnimSite 92 rear_center_midsagittal_plane';
{ METHOD .FdChildren.Add }
HAnimSite488.FdChildren.Add(TouchSensor489);
{ METHOD .FdChildren.Add }
HAnimSite488.FdChildren.Add(Shape30);
Billboard491 := TBillboardNode.Create;
Shape492 := TShapeNode.Create;
Text493 := TTextNode.Create;
Text493.SetText(['92']);
end;

procedure InitHumanoid1Part30;
begin

FontStyle494 := TFontStyleNode.Create;
FontStyle494.Size := 0.035;
{ METHOD .FontStyle }
Text493.FontStyle := FontStyle494;
{ METHOD .Geometry }
Shape492.Geometry := Text493;
{ METHOD .FdChildren.Add }
Billboard491.FdChildren.Add(Shape492);
{ METHOD .FdChildren.Add }
HAnimSite488.FdChildren.Add(Billboard491);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite488);
HAnimSite495 := THAnimSiteNode.Create;
TouchSensor496 := TTouchSensorNode.Create;
TouchSensor496.Description := 'HAnimSite 24 spine_1_middle_back';
{ METHOD .FdChildren.Add }
HAnimSite495.FdChildren.Add(TouchSensor496);
{ METHOD .FdChildren.Add }
HAnimSite495.FdChildren.Add(Shape30);
Billboard498 := TBillboardNode.Create;
Shape499 := TShapeNode.Create;
Text500 := TTextNode.Create;
Text500.SetText(['24']);
FontStyle501 := TFontStyleNode.Create;
FontStyle501.Size := 0.035;
{ METHOD .FontStyle }
Text500.FontStyle := FontStyle501;
{ METHOD .Geometry }
Shape499.Geometry := Text500;
{ METHOD .FdChildren.Add }
Billboard498.FdChildren.Add(Shape499);
{ METHOD .FdChildren.Add }
HAnimSite495.FdChildren.Add(Billboard498);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite495);
HAnimSite502 := THAnimSiteNode.Create;
TouchSensor503 := TTouchSensorNode.Create;
TouchSensor503.Description := 'HAnimSite spine_2_middle_back';
{ METHOD .FdChildren.Add }
HAnimSite502.FdChildren.Add(TouchSensor503);
{ METHOD .FdChildren.Add }
HAnimSite502.FdChildren.Add(Shape30);
Billboard505 := TBillboardNode.Create;
Shape506 := TShapeNode.Create;
Text507 := TTextNode.Create;
Text507.SetText(['']);
FontStyle508 := TFontStyleNode.Create;
FontStyle508.Size := 0.035;
{ METHOD .FontStyle }
Text507.FontStyle := FontStyle508;
{ METHOD .Geometry }
Shape506.Geometry := Text507;
{ METHOD .FdChildren.Add }
Billboard505.FdChildren.Add(Shape506);
{ METHOD .FdChildren.Add }
HAnimSite502.FdChildren.Add(Billboard505);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite502);
HAnimSite509 := THAnimSiteNode.Create;
end;

procedure InitHumanoid1Part31;
begin

HAnimSite509.Translation := Vector3(0.0085,1.2995,0.1147);
TouchSensor510 := TTouchSensorNode.Create;
TouchSensor510.Description := 'HAnimSite 13 substernale';
{ METHOD .FdChildren.Add }
HAnimSite509.FdChildren.Add(TouchSensor510);
{ METHOD .FdChildren.Add }
HAnimSite509.FdChildren.Add(Shape30);
Billboard512 := TBillboardNode.Create;
Shape513 := TShapeNode.Create;
Text514 := TTextNode.Create;
Text514.SetText(['13']);
FontStyle515 := TFontStyleNode.Create;
FontStyle515.Size := 0.035;
{ METHOD .FontStyle }
Text514.FontStyle := FontStyle515;
{ METHOD .Geometry }
Shape513.Geometry := Text514;
{ METHOD .FdChildren.Add }
Billboard512.FdChildren.Add(Shape513);
{ METHOD .FdChildren.Add }
HAnimSite509.FdChildren.Add(Billboard512);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite509);
HAnimSite516 := THAnimSiteNode.Create;
HAnimSite516.Translation := Vector3(0.0084,1.4714,0.0551);
TouchSensor517 := TTouchSensorNode.Create;
TouchSensor517.Description := 'HAnimSite 12 suprasternale';
{ METHOD .FdChildren.Add }
HAnimSite516.FdChildren.Add(TouchSensor517);
{ METHOD .FdChildren.Add }
HAnimSite516.FdChildren.Add(Shape30);
Billboard519 := TBillboardNode.Create;
Shape520 := TShapeNode.Create;
Text521 := TTextNode.Create;
Text521.SetText(['12']);
FontStyle522 := TFontStyleNode.Create;
FontStyle522.Size := 0.035;
{ METHOD .FontStyle }
Text521.FontStyle := FontStyle522;
{ METHOD .Geometry }
Shape520.Geometry := Text521;
{ METHOD .FdChildren.Add }
Billboard519.FdChildren.Add(Shape520);
{ METHOD .FdChildren.Add }
HAnimSite516.FdChildren.Add(Billboard519);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite516);
HAnimSite523 := THAnimSiteNode.Create;
TouchSensor524 := TTouchSensorNode.Create;
TouchSensor524.Description := 'HAnimSite 26 waist_preferred_anterior';
{ METHOD .FdChildren.Add }
HAnimSite523.FdChildren.Add(TouchSensor524);
{ METHOD .FdChildren.Add }
HAnimSite523.FdChildren.Add(Shape30);
Billboard526 := TBillboardNode.Create;
Shape527 := TShapeNode.Create;
end;

procedure InitHumanoid1Part32;
begin

Text528 := TTextNode.Create;
Text528.SetText(['26']);
FontStyle529 := TFontStyleNode.Create;
FontStyle529.Size := 0.035;
{ METHOD .FontStyle }
Text528.FontStyle := FontStyle529;
{ METHOD .Geometry }
Shape527.Geometry := Text528;
{ METHOD .FdChildren.Add }
Billboard526.FdChildren.Add(Shape527);
{ METHOD .FdChildren.Add }
HAnimSite523.FdChildren.Add(Billboard526);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite523);
HAnimSite530 := THAnimSiteNode.Create;
HAnimSite530.Translation := Vector3(0.29,1.0915,-0.1091);
TouchSensor531 := TTouchSensorNode.Create;
TouchSensor531.Description := 'HAnimSite 27 waist_preferred_posterior';
{ METHOD .FdChildren.Add }
HAnimSite530.FdChildren.Add(TouchSensor531);
{ METHOD .FdChildren.Add }
HAnimSite530.FdChildren.Add(Shape30);
Billboard533 := TBillboardNode.Create;
Shape534 := TShapeNode.Create;
Text535 := TTextNode.Create;
Text535.SetText(['27']);
FontStyle536 := TFontStyleNode.Create;
FontStyle536.Size := 0.035;
{ METHOD .FontStyle }
Text535.FontStyle := FontStyle536;
{ METHOD .Geometry }
Shape534.Geometry := Text535;
{ METHOD .FdChildren.Add }
Billboard533.FdChildren.Add(Shape534);
{ METHOD .FdChildren.Add }
HAnimSite530.FdChildren.Add(Billboard533);
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(HAnimSite530);
Shape537 := TShapeNode.Create;
LineSet538 := TLineSetNode.Create;
LineSet538.SetVertexCount([2]);
Coordinate539 := TCoordinateNode.Create;
Coordinate539.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.2029,1.4376,-0.0387)]);
{ METHOD .Coord }
LineSet538.Coord := Coordinate539;
{ from vl5 to l_shoulder vertices 2 }
{ METHOD .Color }
LineSet538.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape537.Geometry := LineSet538;
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(Shape537);
Shape541 := TShapeNode.Create;
LineSet542 := TLineSetNode.Create;
LineSet542.SetVertexCount([2]);
Coordinate543 := TCoordinateNode.Create;
Coordinate543.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(-0.1907,1.4407,-0.0325)]);
end;

procedure InitHumanoid1Part33;
begin

{ METHOD .Coord }
LineSet542.Coord := Coordinate543;
{ from vl5 to r_shoulder vertices 2 }
{ METHOD .Color }
LineSet542.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape541.Geometry := LineSet542;
{ METHOD .FdChildren.Add }
HAnimSegment326.FdChildren.Add(Shape541);
{ METHOD .FdChildren.Add }
HAnimJoint325.FdChildren.Add(HAnimSegment326);
HAnimJoint545 := THAnimJointNode.Create;
HAnimJoint545.Center := Vector3(0.0044,1.6209,0.0236);
{ METHOD .FdChildren.Add }
HAnimJoint325.FdChildren.Add(HAnimJoint545);
HAnimJoint546 := THAnimJointNode.Create;
HAnimJoint546.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimSegment547 := THAnimSegmentNode.Create;
Transform548 := TTransformNode.Create;
Transform548.Translation := Vector3(0.2029,1.4376,-0.0387);
Transform549 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform549.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform548.FdChildren.Add(Transform549);
{ METHOD .FdChildren.Add }
HAnimSegment547.FdChildren.Add(Transform548);
Shape551 := TShapeNode.Create;
LineSet552 := TLineSetNode.Create;
LineSet552.SetVertexCount([2]);
Coordinate553 := TCoordinateNode.Create;
Coordinate553.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.2014,1.1357,-0.0682)]);
{ METHOD .Coord }
LineSet552.Coord := Coordinate553;
{ from l_shoulder to l_elbow vertices 2 }
{ METHOD .Color }
LineSet552.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape551.Geometry := LineSet552;
{ METHOD .FdChildren.Add }
HAnimSegment547.FdChildren.Add(Shape551);
HAnimSite555 := THAnimSiteNode.Create;
TouchSensor556 := TTouchSensorNode.Create;
TouchSensor556.Description := 'HAnimSite 96 l_bideltoid';
{ METHOD .FdChildren.Add }
HAnimSite555.FdChildren.Add(TouchSensor556);
{ METHOD .FdChildren.Add }
HAnimSite555.FdChildren.Add(Shape30);
Billboard558 := TBillboardNode.Create;
Shape559 := TShapeNode.Create;
Text560 := TTextNode.Create;
Text560.SetText(['96']);
FontStyle561 := TFontStyleNode.Create;
FontStyle561.Size := 0.035;
{ METHOD .FontStyle }
Text560.FontStyle := FontStyle561;
{ METHOD .Geometry }
Shape559.Geometry := Text560;
{ METHOD .FdChildren.Add }
Billboard558.FdChildren.Add(Shape559);
end;

procedure InitHumanoid1Part34;
begin

{ METHOD .FdChildren.Add }
HAnimSite555.FdChildren.Add(Billboard558);
{ METHOD .FdChildren.Add }
HAnimSegment547.FdChildren.Add(HAnimSite555);
HAnimSite562 := THAnimSiteNode.Create;
HAnimSite562.Translation := Vector3(0.228,1.1482,-0.11);
TouchSensor563 := TTouchSensorNode.Create;
TouchSensor563.Description := 'HAnimSite 63 l_humeral_lateral_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite562.FdChildren.Add(TouchSensor563);
{ METHOD .FdChildren.Add }
HAnimSite562.FdChildren.Add(Shape30);
Billboard565 := TBillboardNode.Create;
Shape566 := TShapeNode.Create;
Text567 := TTextNode.Create;
Text567.SetText(['63']);
FontStyle568 := TFontStyleNode.Create;
FontStyle568.Size := 0.035;
{ METHOD .FontStyle }
Text567.FontStyle := FontStyle568;
{ METHOD .Geometry }
Shape566.Geometry := Text567;
{ METHOD .FdChildren.Add }
Billboard565.FdChildren.Add(Shape566);
{ METHOD .FdChildren.Add }
HAnimSite562.FdChildren.Add(Billboard565);
{ METHOD .FdChildren.Add }
HAnimSegment547.FdChildren.Add(HAnimSite562);
{ METHOD .FdChildren.Add }
HAnimJoint546.FdChildren.Add(HAnimSegment547);
HAnimJoint569 := THAnimJointNode.Create;
HAnimJoint569.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimSegment570 := THAnimSegmentNode.Create;
Transform571 := TTransformNode.Create;
Transform571.Translation := Vector3(0.2014,1.1357,-0.0682);
Transform572 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform572.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform571.FdChildren.Add(Transform572);
{ METHOD .FdChildren.Add }
HAnimSegment570.FdChildren.Add(Transform571);
Shape574 := TShapeNode.Create;
LineSet575 := TLineSetNode.Create;
LineSet575.SetVertexCount([2]);
Coordinate576 := TCoordinateNode.Create;
Coordinate576.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1984,0.8663,-0.0583)]);
{ METHOD .Coord }
LineSet575.Coord := Coordinate576;
{ from l_elbow to l_radiocarpal vertices 2 }
{ METHOD .Color }
LineSet575.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape574.Geometry := LineSet575;
{ METHOD .FdChildren.Add }
HAnimSegment570.FdChildren.Add(Shape574);
HAnimSite578 := THAnimSiteNode.Create;
HAnimSite578.Translation := Vector3(0.1735,1.1272,-0.1113);
end;

procedure InitHumanoid1Part35;
begin

TouchSensor579 := TTouchSensorNode.Create;
TouchSensor579.Description := 'HAnimSite 64 l_humeral_medial_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite578.FdChildren.Add(TouchSensor579);
{ METHOD .FdChildren.Add }
HAnimSite578.FdChildren.Add(Shape30);
Billboard581 := TBillboardNode.Create;
Shape582 := TShapeNode.Create;
Text583 := TTextNode.Create;
Text583.SetText(['64']);
FontStyle584 := TFontStyleNode.Create;
FontStyle584.Size := 0.035;
{ METHOD .FontStyle }
Text583.FontStyle := FontStyle584;
{ METHOD .Geometry }
Shape582.Geometry := Text583;
{ METHOD .FdChildren.Add }
Billboard581.FdChildren.Add(Shape582);
{ METHOD .FdChildren.Add }
HAnimSite578.FdChildren.Add(Billboard581);
{ METHOD .FdChildren.Add }
HAnimSegment570.FdChildren.Add(HAnimSite578);
HAnimSite585 := THAnimSiteNode.Create;
HAnimSite585.Translation := Vector3(-0.1962,1.1375,-0.1123);
TouchSensor586 := TTouchSensorNode.Create;
TouchSensor586.Description := 'HAnimSite 65 l_olecranon';
{ METHOD .FdChildren.Add }
HAnimSite585.FdChildren.Add(TouchSensor586);
{ METHOD .FdChildren.Add }
HAnimSite585.FdChildren.Add(Shape30);
Billboard588 := TBillboardNode.Create;
Shape589 := TShapeNode.Create;
Text590 := TTextNode.Create;
Text590.SetText(['65']);
FontStyle591 := TFontStyleNode.Create;
FontStyle591.Size := 0.035;
{ METHOD .FontStyle }
Text590.FontStyle := FontStyle591;
{ METHOD .Geometry }
Shape589.Geometry := Text590;
{ METHOD .FdChildren.Add }
Billboard588.FdChildren.Add(Shape589);
{ METHOD .FdChildren.Add }
HAnimSite585.FdChildren.Add(Billboard588);
{ METHOD .FdChildren.Add }
HAnimSegment570.FdChildren.Add(HAnimSite585);
HAnimSite592 := THAnimSiteNode.Create;
HAnimSite592.Translation := Vector3(0.1901,0.8645,-0.0415);
TouchSensor593 := TTouchSensorNode.Create;
TouchSensor593.Description := 'HAnimSite 71 l_radial_styloid';
{ METHOD .FdChildren.Add }
HAnimSite592.FdChildren.Add(TouchSensor593);
{ METHOD .FdChildren.Add }
HAnimSite592.FdChildren.Add(Shape30);
Billboard595 := TBillboardNode.Create;
Shape596 := TShapeNode.Create;
end;

procedure InitHumanoid1Part36;
begin

Text597 := TTextNode.Create;
Text597.SetText(['71']);
FontStyle598 := TFontStyleNode.Create;
FontStyle598.Size := 0.035;
{ METHOD .FontStyle }
Text597.FontStyle := FontStyle598;
{ METHOD .Geometry }
Shape596.Geometry := Text597;
{ METHOD .FdChildren.Add }
Billboard595.FdChildren.Add(Shape596);
{ METHOD .FdChildren.Add }
HAnimSite592.FdChildren.Add(Billboard595);
{ METHOD .FdChildren.Add }
HAnimSegment570.FdChildren.Add(HAnimSite592);
HAnimSite599 := THAnimSiteNode.Create;
HAnimSite599.Translation := Vector3(0.2182,1.1212,-0.1167);
TouchSensor600 := TTouchSensorNode.Create;
TouchSensor600.Description := 'HAnimSite 69 l_radiale';
{ METHOD .FdChildren.Add }
HAnimSite599.FdChildren.Add(TouchSensor600);
{ METHOD .FdChildren.Add }
HAnimSite599.FdChildren.Add(Shape30);
Billboard602 := TBillboardNode.Create;
Shape603 := TShapeNode.Create;
Text604 := TTextNode.Create;
Text604.SetText(['69']);
FontStyle605 := TFontStyleNode.Create;
FontStyle605.Size := 0.035;
{ METHOD .FontStyle }
Text604.FontStyle := FontStyle605;
{ METHOD .Geometry }
Shape603.Geometry := Text604;
{ METHOD .FdChildren.Add }
Billboard602.FdChildren.Add(Shape603);
{ METHOD .FdChildren.Add }
HAnimSite599.FdChildren.Add(Billboard602);
{ METHOD .FdChildren.Add }
HAnimSegment570.FdChildren.Add(HAnimSite599);
{ METHOD .FdChildren.Add }
HAnimJoint569.FdChildren.Add(HAnimSegment570);
HAnimJoint606 := THAnimJointNode.Create;
HAnimJoint606.Center := Vector3(0.1984,0.8663,-0.0583);
{ METHOD .FdChildren.Add }
HAnimJoint569.FdChildren.Add(HAnimJoint606);
{ METHOD .FdChildren.Add }
HAnimJoint546.FdChildren.Add(HAnimJoint569);
{ METHOD .FdChildren.Add }
HAnimJoint325.FdChildren.Add(HAnimJoint546);
HAnimJoint607 := THAnimJointNode.Create;
HAnimJoint607.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimSegment608 := THAnimSegmentNode.Create;
Transform609 := TTransformNode.Create;
Transform609.Translation := Vector3(-0.1907,1.4407,-0.0325);
Transform610 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform610.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform609.FdChildren.Add(Transform610);
end;

procedure InitHumanoid1Part37;
begin

{ METHOD .FdChildren.Add }
HAnimSegment608.FdChildren.Add(Transform609);
Shape612 := TShapeNode.Create;
LineSet613 := TLineSetNode.Create;
LineSet613.SetVertexCount([2]);
Coordinate614 := TCoordinateNode.Create;
Coordinate614.SetPoint([Vector3(-0.1907,1.4407,-0.0325),Vector3(-0.1949,1.1388,-0.062)]);
{ METHOD .Coord }
LineSet613.Coord := Coordinate614;
{ from r_shoulder to r_elbow vertices 2 }
{ METHOD .Color }
LineSet613.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape612.Geometry := LineSet613;
{ METHOD .FdChildren.Add }
HAnimSegment608.FdChildren.Add(Shape612);
HAnimSite616 := THAnimSiteNode.Create;
TouchSensor617 := TTouchSensorNode.Create;
TouchSensor617.Description := 'HAnimSite 97 r_bideltoid';
{ METHOD .FdChildren.Add }
HAnimSite616.FdChildren.Add(TouchSensor617);
{ METHOD .FdChildren.Add }
HAnimSite616.FdChildren.Add(Shape30);
Billboard619 := TBillboardNode.Create;
Shape620 := TShapeNode.Create;
Text621 := TTextNode.Create;
Text621.SetText(['97']);
FontStyle622 := TFontStyleNode.Create;
FontStyle622.Size := 0.035;
{ METHOD .FontStyle }
Text621.FontStyle := FontStyle622;
{ METHOD .Geometry }
Shape620.Geometry := Text621;
{ METHOD .FdChildren.Add }
Billboard619.FdChildren.Add(Shape620);
{ METHOD .FdChildren.Add }
HAnimSite616.FdChildren.Add(Billboard619);
{ METHOD .FdChildren.Add }
HAnimSegment608.FdChildren.Add(HAnimSite616);
HAnimSite623 := THAnimSiteNode.Create;
HAnimSite623.Translation := Vector3(-0.2224,1.1517,-0.1033);
TouchSensor624 := TTouchSensorNode.Create;
TouchSensor624.Description := 'HAnimSite 66 r_humeral_lateral_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite623.FdChildren.Add(TouchSensor624);
{ METHOD .FdChildren.Add }
HAnimSite623.FdChildren.Add(Shape30);
Billboard626 := TBillboardNode.Create;
Shape627 := TShapeNode.Create;
Text628 := TTextNode.Create;
Text628.SetText(['66']);
FontStyle629 := TFontStyleNode.Create;
FontStyle629.Size := 0.035;
{ METHOD .FontStyle }
Text628.FontStyle := FontStyle629;
{ METHOD .Geometry }
Shape627.Geometry := Text628;
end;

procedure InitHumanoid1Part38;
begin

{ METHOD .FdChildren.Add }
Billboard626.FdChildren.Add(Shape627);
{ METHOD .FdChildren.Add }
HAnimSite623.FdChildren.Add(Billboard626);
{ METHOD .FdChildren.Add }
HAnimSegment608.FdChildren.Add(HAnimSite623);
{ METHOD .FdChildren.Add }
HAnimJoint607.FdChildren.Add(HAnimSegment608);
HAnimJoint630 := THAnimJointNode.Create;
HAnimJoint630.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimSegment631 := THAnimSegmentNode.Create;
Transform632 := TTransformNode.Create;
Transform632.Translation := Vector3(-0.1949,1.1388,-0.062);
Transform633 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform633.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform632.FdChildren.Add(Transform633);
{ METHOD .FdChildren.Add }
HAnimSegment631.FdChildren.Add(Transform632);
Shape635 := TShapeNode.Create;
LineSet636 := TLineSetNode.Create;
LineSet636.SetVertexCount([2]);
Coordinate637 := TCoordinateNode.Create;
Coordinate637.SetPoint([Vector3(-0.1949,1.1388,-0.062),Vector3(-0.1959,0.8694,-0.0521)]);
{ METHOD .Coord }
LineSet636.Coord := Coordinate637;
{ from r_elbow to r_radiocarpal vertices 2 }
{ METHOD .Color }
LineSet636.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape635.Geometry := LineSet636;
{ METHOD .FdChildren.Add }
HAnimSegment631.FdChildren.Add(Shape635);
HAnimSite639 := THAnimSiteNode.Create;
HAnimSite639.Translation := Vector3(-0.168,1.1298,-0.1062);
TouchSensor640 := TTouchSensorNode.Create;
TouchSensor640.Description := 'HAnimSite 67 r_humeral_medial_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite639.FdChildren.Add(TouchSensor640);
{ METHOD .FdChildren.Add }
HAnimSite639.FdChildren.Add(Shape30);
Billboard642 := TBillboardNode.Create;
Shape643 := TShapeNode.Create;
Text644 := TTextNode.Create;
Text644.SetText(['67']);
FontStyle645 := TFontStyleNode.Create;
FontStyle645.Size := 0.035;
{ METHOD .FontStyle }
Text644.FontStyle := FontStyle645;
{ METHOD .Geometry }
Shape643.Geometry := Text644;
{ METHOD .FdChildren.Add }
Billboard642.FdChildren.Add(Shape643);
{ METHOD .FdChildren.Add }
HAnimSite639.FdChildren.Add(Billboard642);
{ METHOD .FdChildren.Add }
HAnimSegment631.FdChildren.Add(HAnimSite639);
HAnimSite646 := THAnimSiteNode.Create;
end;

procedure InitHumanoid1Part39;
begin

HAnimSite646.Translation := Vector3(-0.1907,1.1405,-0.1065);
TouchSensor647 := TTouchSensorNode.Create;
TouchSensor647.Description := 'HAnimSite 68 r_olecranon';
{ METHOD .FdChildren.Add }
HAnimSite646.FdChildren.Add(TouchSensor647);
{ METHOD .FdChildren.Add }
HAnimSite646.FdChildren.Add(Shape30);
Billboard649 := TBillboardNode.Create;
Shape650 := TShapeNode.Create;
Text651 := TTextNode.Create;
Text651.SetText(['68']);
FontStyle652 := TFontStyleNode.Create;
FontStyle652.Size := 0.035;
{ METHOD .FontStyle }
Text651.FontStyle := FontStyle652;
{ METHOD .Geometry }
Shape650.Geometry := Text651;
{ METHOD .FdChildren.Add }
Billboard649.FdChildren.Add(Shape650);
{ METHOD .FdChildren.Add }
HAnimSite646.FdChildren.Add(Billboard649);
{ METHOD .FdChildren.Add }
HAnimSegment631.FdChildren.Add(HAnimSite646);
HAnimSite653 := THAnimSiteNode.Create;
HAnimSite653.Translation := Vector3(-0.1884,0.8676,-0.036);
TouchSensor654 := TTouchSensorNode.Create;
TouchSensor654.Description := 'HAnimSite 74 r_radial_styloid';
{ METHOD .FdChildren.Add }
HAnimSite653.FdChildren.Add(TouchSensor654);
{ METHOD .FdChildren.Add }
HAnimSite653.FdChildren.Add(Shape30);
Billboard656 := TBillboardNode.Create;
Shape657 := TShapeNode.Create;
Text658 := TTextNode.Create;
Text658.SetText(['74']);
FontStyle659 := TFontStyleNode.Create;
FontStyle659.Size := 0.035;
{ METHOD .FontStyle }
Text658.FontStyle := FontStyle659;
{ METHOD .Geometry }
Shape657.Geometry := Text658;
{ METHOD .FdChildren.Add }
Billboard656.FdChildren.Add(Shape657);
{ METHOD .FdChildren.Add }
HAnimSite653.FdChildren.Add(Billboard656);
{ METHOD .FdChildren.Add }
HAnimSegment631.FdChildren.Add(HAnimSite653);
HAnimSite660 := THAnimSiteNode.Create;
HAnimSite660.Translation := Vector3(-0.213,1.1305,-0.1091);
TouchSensor661 := TTouchSensorNode.Create;
TouchSensor661.Description := 'HAnimSite 72 r_radiale';
{ METHOD .FdChildren.Add }
HAnimSite660.FdChildren.Add(TouchSensor661);
{ METHOD .FdChildren.Add }
HAnimSite660.FdChildren.Add(Shape30);
Billboard663 := TBillboardNode.Create;
end;

procedure InitHumanoid1Part40;
begin

Shape664 := TShapeNode.Create;
Text665 := TTextNode.Create;
Text665.SetText(['72']);
FontStyle666 := TFontStyleNode.Create;
FontStyle666.Size := 0.035;
{ METHOD .FontStyle }
Text665.FontStyle := FontStyle666;
{ METHOD .Geometry }
Shape664.Geometry := Text665;
{ METHOD .FdChildren.Add }
Billboard663.FdChildren.Add(Shape664);
{ METHOD .FdChildren.Add }
HAnimSite660.FdChildren.Add(Billboard663);
{ METHOD .FdChildren.Add }
HAnimSegment631.FdChildren.Add(HAnimSite660);
{ METHOD .FdChildren.Add }
HAnimJoint630.FdChildren.Add(HAnimSegment631);
HAnimJoint667 := THAnimJointNode.Create;
HAnimJoint667.Center := Vector3(-0.1959,0.8694,-0.0521);
{ METHOD .FdChildren.Add }
HAnimJoint630.FdChildren.Add(HAnimJoint667);
{ METHOD .FdChildren.Add }
HAnimJoint607.FdChildren.Add(HAnimJoint630);
{ METHOD .FdChildren.Add }
HAnimJoint325.FdChildren.Add(HAnimJoint607);
{ METHOD .FdChildren.Add }
HAnimJoint47.FdChildren.Add(HAnimJoint325);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid38.FdSkeleton.Add(HAnimJoint47);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint47);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint60);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint143);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint180);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint210);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint233);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint234);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint271);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint301);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint324);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint325);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint545);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint546);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint569);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint606);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint607);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint630);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint667);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(HAnimHumanoid38);
{ METHOD .AddGroup }
X3D0.AddChildren([Group11]);
end;

function CreateHumanoid1: TX3DRootNode;
begin
InitHumanoid1Part0;
InitHumanoid1Part1;
InitHumanoid1Part2;
InitHumanoid1Part3;
InitHumanoid1Part4;
InitHumanoid1Part5;
InitHumanoid1Part6;
InitHumanoid1Part7;
InitHumanoid1Part8;
InitHumanoid1Part9;
InitHumanoid1Part10;
InitHumanoid1Part11;
InitHumanoid1Part12;
InitHumanoid1Part13;
InitHumanoid1Part14;
InitHumanoid1Part15;
InitHumanoid1Part16;
InitHumanoid1Part17;
InitHumanoid1Part18;
InitHumanoid1Part19;
InitHumanoid1Part20;
InitHumanoid1Part21;
InitHumanoid1Part22;
InitHumanoid1Part23;
InitHumanoid1Part24;
InitHumanoid1Part25;
InitHumanoid1Part26;
InitHumanoid1Part27;
InitHumanoid1Part28;
InitHumanoid1Part29;
InitHumanoid1Part30;
InitHumanoid1Part31;
InitHumanoid1Part32;
InitHumanoid1Part33;
InitHumanoid1Part34;
InitHumanoid1Part35;
InitHumanoid1Part36;
InitHumanoid1Part37;
InitHumanoid1Part38;
InitHumanoid1Part39;
InitHumanoid1Part40;
Result := X3D0;
end;

begin
end.
