unit StandardHumanoidNoSegSite;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateStandardHumanoidNoSegSite: TX3DRootNode;

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
Sphere26: TSphereNode;
Appearance27: TAppearanceNode;
Material28: TMaterialNode;
Transform29: TTransformNode;
Shape30: TShapeNode;
LineSet31: TLineSetNode;
ColorRGBA32: TColorRGBANode;
Coordinate33: TCoordinateNode;
Transform34: TTransformNode;
Shape35: TShapeNode;
IndexedFaceSet36: TIndexedFaceSetNode;
ColorRGBA37: TColorRGBANode;
Coordinate38: TCoordinateNode;
Appearance39: TAppearanceNode;
Material40: TMaterialNode;
NavigationInfo41: TNavigationInfoNode;
Viewpoint42: TViewpointNode;
HAnimHumanoid43: THAnimHumanoidNode;
Shape44: TShapeNode;
IndexedFaceSet45: TIndexedFaceSetNode;
Coordinate46: TCoordinateNode;
Color47: TColorNode;
Appearance48: TAppearanceNode;
ImageTexture49: TImageTextureNode;
Material50: TMaterialNode;
Coordinate51: TCoordinateNode;
HAnimJoint52: THAnimJointNode;
HAnimJoint53: THAnimJointNode;
HAnimJoint54: THAnimJointNode;
HAnimJoint55: THAnimJointNode;
HAnimJoint56: THAnimJointNode;
HAnimJoint57: THAnimJointNode;
HAnimJoint58: THAnimJointNode;
HAnimJoint59: THAnimJointNode;
HAnimJoint60: THAnimJointNode;
HAnimJoint61: THAnimJointNode;
HAnimJoint62: THAnimJointNode;
HAnimJoint63: THAnimJointNode;
HAnimJoint64: THAnimJointNode;
HAnimJoint65: THAnimJointNode;
HAnimJoint66: THAnimJointNode;
HAnimJoint67: THAnimJointNode;
HAnimJoint68: THAnimJointNode;
HAnimJoint69: THAnimJointNode;
HAnimJoint70: THAnimJointNode;
HAnimJoint71: THAnimJointNode;
HAnimJoint72: THAnimJointNode;
HAnimJoint73: THAnimJointNode;
HAnimJoint74: THAnimJointNode;
HAnimJoint75: THAnimJointNode;
HAnimJoint76: THAnimJointNode;
HAnimJoint77: THAnimJointNode;
HAnimJoint78: THAnimJointNode;
HAnimJoint79: THAnimJointNode;
HAnimJoint80: THAnimJointNode;
HAnimJoint81: THAnimJointNode;
HAnimJoint82: THAnimJointNode;
HAnimJoint83: THAnimJointNode;
HAnimJoint84: THAnimJointNode;
HAnimJoint85: THAnimJointNode;
HAnimJoint86: THAnimJointNode;
HAnimJoint87: THAnimJointNode;
HAnimJoint88: THAnimJointNode;
HAnimJoint89: THAnimJointNode;
HAnimJoint90: THAnimJointNode;
HAnimJoint91: THAnimJointNode;
HAnimJoint92: THAnimJointNode;
HAnimJoint93: THAnimJointNode;
HAnimJoint94: THAnimJointNode;
HAnimJoint95: THAnimJointNode;
HAnimJoint96: THAnimJointNode;
HAnimJoint97: THAnimJointNode;
HAnimJoint98: THAnimJointNode;
HAnimJoint99: THAnimJointNode;
HAnimJoint100: THAnimJointNode;
HAnimJoint101: THAnimJointNode;
HAnimJoint102: THAnimJointNode;
HAnimJoint103: THAnimJointNode;
HAnimJoint104: THAnimJointNode;
HAnimJoint105: THAnimJointNode;
HAnimJoint106: THAnimJointNode;
HAnimJoint107: THAnimJointNode;
HAnimJoint108: THAnimJointNode;
HAnimJoint109: THAnimJointNode;
HAnimJoint110: THAnimJointNode;
HAnimJoint111: THAnimJointNode;
HAnimJoint112: THAnimJointNode;
HAnimJoint113: THAnimJointNode;
HAnimJoint114: THAnimJointNode;
HAnimJoint115: THAnimJointNode;
HAnimJoint116: THAnimJointNode;
HAnimJoint117: THAnimJointNode;
HAnimJoint118: THAnimJointNode;
HAnimJoint119: THAnimJointNode;
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
HAnimJoint137: THAnimJointNode;
HAnimJoint138: THAnimJointNode;
HAnimJoint139: THAnimJointNode;
HAnimJoint140: THAnimJointNode;
HAnimJoint141: THAnimJointNode;
HAnimJoint142: THAnimJointNode;
HAnimJoint143: THAnimJointNode;
HAnimJoint144: THAnimJointNode;
HAnimJoint145: THAnimJointNode;
HAnimJoint146: THAnimJointNode;
HAnimJoint147: THAnimJointNode;
HAnimJoint148: THAnimJointNode;
HAnimJoint149: THAnimJointNode;
HAnimJoint150: THAnimJointNode;
HAnimJoint151: THAnimJointNode;
HAnimJoint152: THAnimJointNode;
HAnimJoint153: THAnimJointNode;
HAnimJoint154: THAnimJointNode;
HAnimJoint155: THAnimJointNode;
HAnimJoint156: THAnimJointNode;
HAnimJoint157: THAnimJointNode;
HAnimJoint158: THAnimJointNode;
HAnimJoint159: THAnimJointNode;
HAnimJoint160: THAnimJointNode;
HAnimJoint161: THAnimJointNode;
HAnimJoint162: THAnimJointNode;
HAnimJoint163: THAnimJointNode;
HAnimJoint164: THAnimJointNode;
HAnimJoint165: THAnimJointNode;
HAnimJoint166: THAnimJointNode;
HAnimJoint167: THAnimJointNode;
HAnimJoint168: THAnimJointNode;
HAnimJoint169: THAnimJointNode;
HAnimJoint170: THAnimJointNode;
HAnimJoint171: THAnimJointNode;
HAnimJoint172: THAnimJointNode;
HAnimJoint173: THAnimJointNode;
HAnimJoint174: THAnimJointNode;
HAnimJoint175: THAnimJointNode;
HAnimJoint176: THAnimJointNode;
HAnimJoint177: THAnimJointNode;
HAnimJoint178: THAnimJointNode;
HAnimJoint179: THAnimJointNode;
HAnimJoint180: THAnimJointNode;
HAnimJoint181: THAnimJointNode;
HAnimJoint182: THAnimJointNode;
HAnimJoint183: THAnimJointNode;
HAnimJoint184: THAnimJointNode;
HAnimJoint185: THAnimJointNode;
HAnimJoint186: THAnimJointNode;
HAnimJoint187: THAnimJointNode;
HAnimJoint188: THAnimJointNode;
HAnimJoint189: THAnimJointNode;
HAnimJoint190: THAnimJointNode;
HAnimJoint191: THAnimJointNode;
HAnimJoint192: THAnimJointNode;
HAnimJoint193: THAnimJointNode;
HAnimJoint194: THAnimJointNode;
HAnimJoint195: THAnimJointNode;
HAnimJoint196: THAnimJointNode;
HAnimJoint197: THAnimJointNode;
HAnimJoint198: THAnimJointNode;
HAnimJoint199: THAnimJointNode;
HAnimJoint200: THAnimJointNode;
HAnimJoint201: THAnimJointNode;
HAnimJoint202: THAnimJointNode;
HAnimJoint203: THAnimJointNode;
HAnimJoint204: THAnimJointNode;
HAnimJoint205: THAnimJointNode;
HAnimJoint206: THAnimJointNode;
HAnimJoint207: THAnimJointNode;
HAnimJoint208: THAnimJointNode;
HAnimJoint209: THAnimJointNode;
HAnimJoint210: THAnimJointNode;
HAnimJoint211: THAnimJointNode;
HAnimJoint212: THAnimJointNode;
HAnimJoint213: THAnimJointNode;
HAnimJoint214: THAnimJointNode;
HAnimJoint215: THAnimJointNode;
HAnimJoint216: THAnimJointNode;
HAnimJoint217: THAnimJointNode;
HAnimJoint218: THAnimJointNode;
HAnimJoint219: THAnimJointNode;
HAnimJoint220: THAnimJointNode;
HAnimJoint221: THAnimJointNode;
HAnimJoint222: THAnimJointNode;
HAnimJoint223: THAnimJointNode;
HAnimJoint224: THAnimJointNode;
HAnimJoint225: THAnimJointNode;
HAnimJoint226: THAnimJointNode;
HAnimJoint227: THAnimJointNode;
HAnimJoint228: THAnimJointNode;
HAnimJoint229: THAnimJointNode;
HAnimJoint230: THAnimJointNode;
HAnimJoint231: THAnimJointNode;
HAnimJoint232: THAnimJointNode;
HAnimJoint233: THAnimJointNode;
HAnimJoint234: THAnimJointNode;
HAnimJoint235: THAnimJointNode;
HAnimJoint236: THAnimJointNode;
HAnimJoint237: THAnimJointNode;
HAnimJoint238: THAnimJointNode;
HAnimJoint239: THAnimJointNode;
HAnimJoint240: THAnimJointNode;
HAnimJoint241: THAnimJointNode;
HAnimJoint242: THAnimJointNode;
HAnimJoint243: THAnimJointNode;
HAnimJoint244: THAnimJointNode;
HAnimJoint245: THAnimJointNode;
HAnimJoint246: THAnimJointNode;
HAnimJoint247: THAnimJointNode;
HAnimJoint248: THAnimJointNode;
HAnimJoint249: THAnimJointNode;
HAnimJoint250: THAnimJointNode;
HAnimJoint251: THAnimJointNode;
HAnimJoint252: THAnimJointNode;
HAnimJoint253: THAnimJointNode;
HAnimJoint254: THAnimJointNode;
HAnimJoint255: THAnimJointNode;
HAnimJoint256: THAnimJointNode;
HAnimJoint257: THAnimJointNode;
HAnimJoint258: THAnimJointNode;
HAnimJoint259: THAnimJointNode;
HAnimJoint260: THAnimJointNode;
HAnimJoint261: THAnimJointNode;
HAnimJoint262: THAnimJointNode;
HAnimJoint263: THAnimJointNode;
HAnimJoint264: THAnimJointNode;
HAnimJoint265: THAnimJointNode;
HAnimJoint266: THAnimJointNode;
HAnimJoint267: THAnimJointNode;
HAnimJoint268: THAnimJointNode;
HAnimJoint269: THAnimJointNode;
HAnimJoint270: THAnimJointNode;
HAnimJoint271: THAnimJointNode;
HAnimJoint272: THAnimJointNode;
HAnimJoint273: THAnimJointNode;
HAnimJoint274: THAnimJointNode;
HAnimJoint275: THAnimJointNode;
HAnimJoint276: THAnimJointNode;
HAnimJoint277: THAnimJointNode;
HAnimJoint278: THAnimJointNode;
HAnimJoint279: THAnimJointNode;
HAnimJoint280: THAnimJointNode;
HAnimJoint281: THAnimJointNode;
HAnimJoint282: THAnimJointNode;
HAnimJoint283: THAnimJointNode;
HAnimJoint284: THAnimJointNode;
HAnimJoint285: THAnimJointNode;
HAnimJoint286: THAnimJointNode;
HAnimJoint287: THAnimJointNode;
HAnimJoint288: THAnimJointNode;
HAnimJoint289: THAnimJointNode;
HAnimJoint290: THAnimJointNode;
HAnimJoint291: THAnimJointNode;
HAnimJoint292: THAnimJointNode;
HAnimJoint293: THAnimJointNode;
HAnimJoint294: THAnimJointNode;
HAnimJoint295: THAnimJointNode;
HAnimJoint296: THAnimJointNode;
HAnimJoint297: THAnimJointNode;
HAnimJoint298: THAnimJointNode;
HAnimJoint299: THAnimJointNode;
HAnimJoint300: THAnimJointNode;
HAnimJoint301: THAnimJointNode;
HAnimJoint302: THAnimJointNode;
HAnimJoint303: THAnimJointNode;
HAnimJoint304: THAnimJointNode;
HAnimJoint305: THAnimJointNode;
HAnimJoint306: THAnimJointNode;
HAnimJoint307: THAnimJointNode;
HAnimJoint308: THAnimJointNode;
HAnimJoint309: THAnimJointNode;
HAnimJoint310: THAnimJointNode;
HAnimJoint311: THAnimJointNode;
HAnimJoint312: THAnimJointNode;
HAnimJoint313: THAnimJointNode;
HAnimJoint314: THAnimJointNode;
HAnimJoint315: THAnimJointNode;
HAnimJoint316: THAnimJointNode;
HAnimJoint317: THAnimJointNode;
HAnimJoint318: THAnimJointNode;
HAnimJoint319: THAnimJointNode;
HAnimJoint320: THAnimJointNode;
HAnimJoint321: THAnimJointNode;
HAnimJoint322: THAnimJointNode;
HAnimJoint323: THAnimJointNode;
HAnimJoint324: THAnimJointNode;
HAnimJoint325: THAnimJointNode;
HAnimJoint326: THAnimJointNode;
HAnimJoint327: THAnimJointNode;
HAnimJoint328: THAnimJointNode;
HAnimJoint329: THAnimJointNode;
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

procedure InitStandardHumanoidNoSegSitePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'StandardHumanoidNoSegSite.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/StandardHumanoidNoSegSite.x3d';
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
Transform19.Translation := Vector3(0,2,0);
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
Sphere21.Radius := 0.02;
{ METHOD .Geometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.8,0,0);
end;

procedure InitStandardHumanoidNoSegSitePart1;
begin

Material23.Transparency := 0.3;
{ METHOD .SetMaterial }
Appearance22.Material := Material23;
{ METHOD .Appearance }
Shape20.Appearance := Appearance22;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform19);
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(0,2.1,0);
Shape25 := TShapeNode.Create;
Sphere26 := TSphereNode.Create;
Sphere26.Radius := 0.02;
{ METHOD .Geometry }
Shape25.Geometry := Sphere26;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(0,0,0.8);
Material28.Transparency := 0.3;
{ METHOD .SetMaterial }
Appearance27.Material := Material28;
{ METHOD .Appearance }
Shape25.Appearance := Appearance27;
{ METHOD .FdChildren.Add }
Transform24.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform24);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(0,2.05,0);
Shape30 := TShapeNode.Create;
LineSet31 := TLineSetNode.Create;
LineSet31.SetVertexCount([2]);
ColorRGBA32 := TColorRGBANode.Create;
ColorRGBA32.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
LineSet31.Color := ColorRGBA32;
Coordinate33 := TCoordinateNode.Create;
Coordinate33.SetPoint([Vector3(-0.05,0,0),Vector3(0.05,0,0)]);
{ METHOD .Coord }
LineSet31.Coord := Coordinate33;
{ METHOD .Geometry }
Shape30.Geometry := LineSet31;
{ METHOD .FdChildren.Add }
Transform29.FdChildren.Add(Shape30);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform29);
Transform34 := TTransformNode.Create;
Transform34.Translation := Vector3(0,2.1,0);
Shape35 := TShapeNode.Create;
IndexedFaceSet36 := TIndexedFaceSetNode.Create;
IndexedFaceSet36.CreaseAngle := 0.5;
IndexedFaceSet36.Solid := False;
IndexedFaceSet36.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
end;

procedure InitStandardHumanoidNoSegSitePart2;
begin

ColorRGBA37 := TColorRGBANode.Create;
ColorRGBA37.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
IndexedFaceSet36.Color := ColorRGBA37;
Coordinate38 := TCoordinateNode.Create;
Coordinate38.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
IndexedFaceSet36.Coord := Coordinate38;
{ METHOD .Geometry }
Shape35.Geometry := IndexedFaceSet36;
Appearance39 := TAppearanceNode.Create;
Material40 := TMaterialNode.Create;
Material40.DiffuseColor := Vector3(1,1,0);
Material40.Transparency := 0.3;
{ METHOD .SetMaterial }
Appearance39.Material := Material40;
{ METHOD .Appearance }
Shape35.Appearance := Appearance39;
{ METHOD .FdChildren.Add }
Transform34.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform34);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Transform18);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Group17);
NavigationInfo41 := TNavigationInfoNode.Create;
NavigationInfo41.Speed := 1.5;
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(NavigationInfo41);
Viewpoint42 := TViewpointNode.Create;
Viewpoint42.Description := 'default';
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Viewpoint42);
HAnimHumanoid43 := THAnimHumanoidNode.Create;
HAnimHumanoid43.SetInfo(['humanoidVersion=2.0']);
HAnimHumanoid43.Version := '2.0';
{ <LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene) }
{ </LOD> }
Shape44 := TShapeNode.Create;
IndexedFaceSet45 := TIndexedFaceSetNode.Create;
IndexedFaceSet45.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet45.CreaseAngle := 3.1;
Coordinate46 := TCoordinateNode.Create;
Coordinate46.SetPoint([Vector3(0,1.77,0),Vector3(0,1.665,0.09),Vector3(-0.033,1.62,0.087),Vector3(0.033,1.62,0.087),Vector3(0,1.55,0.097),Vector3(-0.077,1.64,-0.01),Vector3(-0.0527,1.58,0.015),Vector3(0.077,1.64,-0.01),Vector3(0.0527,1.58,0.015),Vector3(0,1.625,-0.0925),Vector3(-0.03,1.46,0.035),Vector3(0,1.44,0.03),Vector3(0.03,1.46,0.035),Vector3(-0.1135,1.318,0.095),Vector3(0.1135,1.318,0.095),Vector3(0,1.25,0.113),Vector3(-0.087,1.19,0.09),Vector3(-0.0935,1.03,0.075),Vector3(0.087,1.19,0.09),Vector3(0.0935,1.03,0.075),Vector3(-0.1425,1.065,0.0033),Vector3(-0.15,0.9,-0.01),Vector3(0.1425,1.065,0.0033),Vector3(0.15,0.9,-0.01),Vector3(0,1.53,-0.084),Vector3(0.0049,1.1908,-0.1113),Vector3(-0.0773,1.019,-0.12),Vector3(0.0773,1.019,-0.12),Vector3(0.005,1.0915,-0.1091),Vector3(-0.178,1.4825,-0.0625),Vector3(-0.17,1.38,0.007),Vector3(-0.1884,0.8676,-0.036),Vector3(-0.16,1.38,-0.127),Vector3(-0.2,1.1388,-0.08),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.23,1.133,-0.055),Vector3(-0.1977,0.8169,-0.0177),Vector3(-0.1941,0.6772,-0.0423),Vector3(-0.2117,0.8562,-0.0584),Vector3(-0.1929,0.789,-0.1064),Vector3(0.175,1.4825,-0.06),Vector3(0.17,1.38,0.007),Vector3(0.1901,0.8645,-0.0415),Vector3(0.16,1.38,-0.125),Vector3(0.2,1.1388,-0.08),Vector3(0.165,1.1388,-0.04),Vector3(0.244,1.1388,-0.04),Vector3(0.23,1.133,-0.055),Vector3(0.2009,0.8139,-0.0237),Vector3(0.2056,0.6743,-0.0482),Vector3(0.2142,0.8529,-0.0648),Vector3(0.1929,0.786,-0.1122),Vector3(-0.1,0.4913,-0.03),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.165,0.01,0.12),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.09,0.056,0.0125),Vector3(-0.115,0.02,0.122),Vector3(-0.115,0.04,-0.055),Vector3(-0.11,0.011,0.19),Vector3(0.0993,0.4881,-0.0309),Vector3(0.17,0.466,0),Vector3(0.05,0.4867,0),Vector3(0.165,0.01,0.12),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.09,0.056,0.0125),Vector3(0.115,0.02,0.122),Vector3(0.115,0.04,-0.055),Vector3(0.11,0.011,0.19),Vector3(0,0.875,0),Vector3(-0.0646,1.5149,-0.038),Vector3(0.0646,1.5149,-0.038),Vector3(0,1.07225,0.09),Vector3(-0.11,1.427,-0.1375),Vector3(-0.235,1.42,-0.0625),Vector3(0.11,1.427,-0.1375),Vector3(0.235,1.42,-0.0625),Vector3(0,1.41,-0.145),Vector3(0,0.925,0.08),Vector3(-0.087,1.19,-0.09),Vector3(0.087,1.19,-0.09),Vector3(0.172,1.32,-0.03),Vector3(-0.172,1.32,-0.03),Vector3(0.15,1.23,-0.015),Vector3(-0.15,1.23,-0.015),Vector3(0.079,0.92,-0.14),Vector3(0.1,0.9,0.077),Vector3(-0.079,0.92,-0.14),Vector3(-0.1,0.9,0.075),Vector3(0,0.87,0),Vector3(0.171,0.65,0),Vector3(0.02,0.65,0),Vector3(0.1,0.65,-0.08),Vector3(0.1,0.65,0.07),Vector3(-0.171,0.65,0),Vector3(-0.02,0.65,0),Vector3(-0.1,0.65,-0.08),Vector3(-0.1,0.65,0.07),Vector3(0.25,1.27,-0.04),Vector3(0.17,1.27,-0.04),Vector3(0.2,1.27,-0.09),Vector3(0.2,1.27,0.02),Vector3(0.244,1.1388,-0.04),Vector3(0.165,1.1388,-0.04),Vector3(0.2,1.1388,-0.08),Vector3(0.2,1.1388,-0.013),Vector3(0.225,1,-0.01),Vector3(0.225,1,-0.07),Vector3(0.185,1,-0.01),Vector3(0.185,1,-0.07),Vector3(0.2,1.1388,-0.04),Vector3(0.225,0.92,-0.04),Vector3(0.175,0.92,-0.04),Vector3(0.2,0.92,-0.065),Vector3(0.2,0.92,-0.015),Vector3(0.225,0.89,-0.04),Vector3(0.175,0.89,-0.04),Vector3(0.2,0.89,-0.065),Vector3(0.2,0.89,-0.015),Vector3(0.218,0.86,-0.04),Vector3(0.184,0.86,-0.04),Vector3(0.2,0.87,-0.07),Vector3(0.2,0.87,0),Vector3(0.21,0.85,0),Vector3(0.1854,0.85,0),Vector3(0.212,0.84,-0.015),Vector3(0.183,0.84,-0.015),Vector3(0.213,0.835,-0.04),Vector3(0.19,0.835,-0.04),Vector3(0.211,0.835,-0.065),Vector3(0.192,0.835,-0.065),Vector3(0.208,0.84,-0.085),Vector3(0.19,0.84,-0.085),Vector3(0.2,0.84,-0.095),Vector3(0.215,0.82,0),Vector3(0.193,0.815,0.005),Vector3(0.198,0.8,0.012),Vector3(0.21,0.82,0.03),Vector3(0.19,0.82,0.03),Vector3(0.2,0.835,0.039),Vector3(0.212,0.8,0.05),Vector3(0.188,0.8,0.05),Vector3(0.2,0.807,0.057),Vector3(0.2,0.793,0.035),Vector3(0.2,0.774,0.076),Vector3(0.212,0.78,0.07),Vector3(0.188,0.78,0.07),Vector3(0.2,0.785,0.075),Vector3(0.2,0.77,0.062),Vector3(0.215,0.793,-0.015),Vector3(0.187,0.793,-0.015),Vector3(0.2,0.793,-0.005),Vector3(0.215,0.788,-0.04),Vector3(0.187,0.788,-0.04),Vector3(0.215,0.793,-0.065),Vector3(0.187,0.793,-0.065),Vector3(0.21,0.79,-0.085),Vector3(0.19,0.79,-0.085),Vector3(0.2,0.79,-0.095),Vector3(0.19,0.77,-0.0275),Vector3(0.19,0.77,-0.0525),Vector3(0.19,0.78,-0.0775),Vector3(0.212,0.745,-0.015),Vector3(0.188,0.745,-0.02),Vector3(0.2,0.745,-0.0255),Vector3(0.2,0.745,-0.0045),Vector3(0.211,0.72,-0.015),Vector3(0.189,0.72,-0.015),Vector3(0.2,0.72,-0.0252),Vector3(0.2,0.72,-0.0048),Vector3(0.21,0.695,-0.015),Vector3(0.19,0.695,-0.015),Vector3(0.2,0.695,-0.025),Vector3(0.2,0.695,-0.005),Vector3(0.2,0.685,-0.015),Vector3(0.215,0.74,-0.04),Vector3(0.185,0.74,-0.04),Vector3(0.2,0.74,-0.055),Vector3(0.2,0.74,-0.025),Vector3(0.21,0.7142,-0.04),Vector3(0.19,0.7142,-0.04),Vector3(0.2,0.7142,-0.053),Vector3(0.2,0.7142,-0.027),Vector3(0.21,0.68,-0.04),Vector3(0.19,0.68,-0.04),Vector3(0.2,0.68,-0.05),Vector3(0.2,0.68,-0.03),Vector3(0.2,0.67,-0.04),Vector3(0.212,0.74,-0.065),Vector3(0.188,0.74,-0.065),Vector3(0.2,0.74,-0.0756),Vector3(0.2,0.74,-0.0542),Vector3(0.21,0.7177,-0.065),Vector3(0.19,0.7177,-0.065),Vector3(0.2,0.7177,-0.0751),Vector3(0.2,0.7177,-0.0549),Vector3(0.21,0.695,-0.065),Vector3(0.19,0.695,-0.065),Vector3(0.2,0.695,-0.075),Vector3(0.2,0.695,-0.055),Vector3(0.2,0.685,-0.065),Vector3(0.211,0.755,-0.085),Vector3(0.189,0.755,-0.085),Vector3(0.2,0.755,-0.0952),Vector3(0.2,0.755,-0.0748),Vector3(0.21,0.735,-0.085),Vector3(0.19,0.735,-0.085),Vector3(0.2,0.735,-0.0951),Vector3(0.2,0.735,-0.0749),Vector3(0.21,0.72,-0.085),Vector3(0.19,0.72,-0.085),Vector3(0.2,0.72,-0.095),Vector3(0.2,0.72,-0.075),Vector3(0.2,0.71,-0.085),Vector3(-0.23,1.23,-0.04),Vector3(-0.16,1.23,-0.04),Vector3(-0.2,1.235,-0.105),Vector3(-0.2,1.235,0.02),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.2,1.1388,-0.08),Vector3(-0.2,1.1388,0.013),Vector3(-0.225,1,-0.01),Vector3(-0.225,1,-0.07),Vector3(-0.185,1,-0.01),Vector3(-0.185,1,-0.07),Vector3(-0.2,1.1388,-0.04),Vector3(-0.225,0.92,-0.04),Vector3(-0.175,0.92,-0.04),Vector3(-0.2,0.92,-0.065),Vector3(-0.2,0.92,-0.015),Vector3(-0.225,0.89,-0.04),Vector3(-0.175,0.89,-0.04),Vector3(-0.2,0.89,-0.065),Vector3(-0.2,0.89,-0.015),Vector3(-0.218,0.86,-0.04),Vector3(-0.184,0.86,-0.04),Vector3(-0.2,0.87,-0.07),Vector3(-0.2,0.87,0),Vector3(-0.21,0.85,0),Vector3(-0.1854,0.85,0),Vector3(-0.212,0.84,-0.015),Vector3(-0.183,0.84,-0.015),Vector3(-0.213,0.835,-0.04),Vector3(-0.19,0.835,-0.04),Vector3(-0.211,0.835,-0.065),Vector3(-0.192,0.835,-0.065),Vector3(-0.208,0.84,-0.085),Vector3(-0.19,0.84,-0.085),Vector3(-0.2,0.84,-0.095),Vector3(-0.215,0.82,0),Vector3(-0.193,0.815,0.005),Vector3(-0.198,0.8,0.012),Vector3(-0.21,0.82,0.03),Vector3(-0.19,0.82,0.03),Vector3(-0.2,0.835,0.039),Vector3(-0.212,0.8,0.05),Vector3(-0.188,0.8,0.05),Vector3(-0.2,0.807,0.057),Vector3(-0.2,0.793,0.035),Vector3(-0.2,0.774,0.076),Vector3(-0.212,0.78,0.07),Vector3(-0.188,0.78,0.07),Vector3(-0.2,0.785,0.075),Vector3(-0.2,0.77,0.062),Vector3(-0.215,0.793,-0.015),Vector3(-0.187,0.793,-0.015),Vector3(-0.2,0.793,-0.005),Vector3(-0.215,0.788,-0.04),Vector3(-0.187,0.788,-0.04),Vector3(-0.215,0.793,-0.065),Vector3(-0.187,0.793,-0.065),Vector3(-0.21,0.79,-0.085),Vector3(-0.19,0.79,-0.085),Vector3(-0.2,0.79,-0.095),Vector3(-0.19,0.77,-0.0275),Vector3(-0.19,0.77,-0.0525),Vector3(-0.19,0.78,-0.0775),Vector3(-0.212,0.745,-0.015),Vector3(-0.188,0.745,-0.02),Vector3(-0.2,0.745,-0.0255),Vector3(-0.2,0.745,-0.0045),Vector3(-0.211,0.72,-0.015),Vector3(-0.189,0.72,-0.015),Vector3(-0.2,0.72,-0.0252),Vector3(-0.2,0.72,-0.0048),Vector3(-0.21,0.695,-0.015),Vector3(-0.19,0.695,-0.015),Vector3(-0.2,0.695,-0.025),Vector3(-0.2,0.695,-0.005),Vector3(-0.2,0.685,-0.015),Vector3(-0.215,0.74,-0.04),Vector3(-0.185,0.74,-0.04),Vector3(-0.2,0.74,-0.055),Vector3(-0.2,0.74,-0.025),Vector3(-0.21,0.7142,-0.04),Vector3(-0.19,0.7142,-0.04),Vector3(-0.2,0.7142,-0.053),Vector3(-0.2,0.7142,-0.027),Vector3(-0.21,0.68,-0.04),Vector3(-0.19,0.68,-0.04),Vector3(-0.2,0.68,-0.05),Vector3(-0.2,0.68,-0.03),Vector3(-0.2,0.67,-0.04),Vector3(-0.212,0.74,-0.065),Vector3(-0.188,0.74,-0.065),Vector3(-0.2,0.74,-0.0756),Vector3(-0.2,0.74,-0.0542),Vector3(-0.21,0.7177,-0.065),Vector3(-0.19,0.7177,-0.065),Vector3(-0.2,0.7177,-0.0751),Vector3(-0.2,0.7177,-0.0549),Vector3(-0.21,0.695,-0.065),Vector3(-0.19,0.695,-0.065),Vector3(-0.2,0.695,-0.075),Vector3(-0.2,0.695,-0.055),Vector3(-0.2,0.685,-0.065),Vector3(-0.211,0.755,-0.085),Vector3(-0.189,0.755,-0.085),Vector3(-0.2,0.755,-0.0952),Vector3(-0.2,0.755,-0.0748),Vector3(-0.21,0.735,-0.085),Vector3(-0.19,0.735,-0.085),Vector3(-0.2,0.735,-0.0951),Vector3(-0.2,0.735,-0.0749),Vector3(-0.21,0.72,-0.085),Vector3(-0.19,0.72,-0.085),Vector3(-0.2,0.72,-0.095),Vector3(-0.2,0.72,-0.075),Vector3(-0.2,0.71,-0.085),Vector3(0.115,0.466,0.06),Vector3(0.115,0.466,-0.055),Vector3(0.15,0.466,0),Vector3(0.05,0.466,0),Vector3(0.17,0.3,0),Vector3(0.06,0.3,0),Vector3(0.1,0.3,-0.05),Vector3(0.1,0.3,0.05),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.115,0.069,-0.045),Vector3(0.117,0.0975,0.0615),Vector3(0.1375,0.006,-0.03),Vector3(0.095,0.006,-0.03),Vector3(0.115,0.015,-0.045),Vector3(0.115,0.06,0.1),Vector3(0.115,0,0.07),Vector3(0.165,0,0.07),Vector3(0.095,0,0.07),Vector3(0.115,0.04,0.13),Vector3(0.125,0,0.12),Vector3(0.165,0,0.12),Vector3(0.087,0,0.122),Vector3(0.09,0.012,0.188),Vector3(0.11,0.011,0.19),Vector3(0.128,0.011,0.185),Vector3(0.142,0.011,0.178),Vector3(0.154,0.01,0.168),Vector3(-0.115,0.466,0.06),Vector3(-0.115,0.466,-0.055),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.17,0.3,0),Vector3(-0.06,0.3,0),Vector3(-0.1,0.3,-0.05),Vector3(-0.1,0.3,0.05),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.115,0.069,-0.045),Vector3(-0.117,0.0975,0.0615),Vector3(-0.1375,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.115,0.06,0.1),Vector3(-0.115,0,0.07),Vector3(-0.165,0,0.07),Vector3(-0.095,0,0.07),Vector3(-0.115,0.04,0.13),Vector3(-0.125,0,0.12),Vector3(-0.165,0,0.12),Vector3(-0.087,0,0.122),Vector3(-0.09,0.012,0.188),Vector3(-0.11,0.011,0.19),Vector3(-0.128,0.011,0.185),Vector3(-0.142,0.011,0.178),Vector3(-0.154,0.01,0.168)]);
end;

procedure InitStandardHumanoidNoSegSitePart3;
begin

{ METHOD .Coord }
IndexedFaceSet45.Coord := Coordinate46;
Color47 := TColorNode.Create;
Color47.SetColor([Vector3(1,0,0),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,1)]);
{ METHOD .Color }
IndexedFaceSet45.Color := Color47;
{ METHOD .Geometry }
Shape44.Geometry := IndexedFaceSet45;
Appearance48 := TAppearanceNode.Create;
ImageTexture49 := TImageTextureNode.Create;
ImageTexture49.Description := 'Blue Spiral Pattern';
ImageTexture49.SetUrl(['../data/zBlueSpiralBkg2.gif','zBlueSpiralBkg2.gif','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif']);
{ METHOD .Texture }
Appearance48.Texture := ImageTexture49;
Material50 := TMaterialNode.Create;
Material50.AmbientIntensity := 0.6;
Material50.DiffuseColor := Vector3(1,1,1);
Material50.Shininess := 0.6;
Material50.Transparency := 0.2;
{ METHOD .SetMaterial }
Appearance48.Material := Material50;
{ METHOD .Appearance }
Shape44.Appearance := Appearance48;
{ METHOD .SetSkin }
HAnimHumanoid43.Skin := Shape44;
{ METHOD .FdSkinCoord.Set }
HAnimHumanoid43.FdSkinCoord.Set(Coordinate46);
HAnimJoint52 := THAnimJointNode.Create;
HAnimJoint52.Center := Vector3(0,0.824,0.0277);
HAnimJoint52.SetSkinCoordIndex([0]);
HAnimJoint52.SetSkinCoordWeight([0]);
HAnimJoint53 := THAnimJointNode.Create;
HAnimJoint53.Center := Vector3(0,0.9149,0.0016);
HAnimJoint53.SetSkinCoordIndex([0]);
HAnimJoint53.SetSkinCoordWeight([0]);
HAnimJoint54 := THAnimJointNode.Create;
HAnimJoint54.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimJoint54.SetSkinCoordIndex([0]);
HAnimJoint54.SetSkinCoordWeight([0]);
HAnimJoint55 := THAnimJointNode.Create;
HAnimJoint55.Center := Vector3(0.104,0.4867,0.0308);
HAnimJoint55.SetSkinCoordIndex([0]);
end;

procedure InitStandardHumanoidNoSegSitePart4;
begin

HAnimJoint55.SetSkinCoordWeight([0]);
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimJoint56.SetSkinCoordIndex([0]);
HAnimJoint56.SetSkinCoordWeight([0]);
HAnimJoint57 := THAnimJointNode.Create;
HAnimJoint57.Center := Vector3(0.0781,0.0283,-0.097);
HAnimJoint57.SetSkinCoordIndex([0]);
HAnimJoint57.SetSkinCoordWeight([0]);
HAnimJoint58 := THAnimJointNode.Create;
HAnimJoint58.Center := Vector3(0.0672,0.0235,-0.0835);
HAnimJoint58.SetSkinCoordIndex([0]);
HAnimJoint58.SetSkinCoordWeight([0]);
HAnimJoint59 := THAnimJointNode.Create;
HAnimJoint59.Center := Vector3(0.0644,0.0147,-0.0577);
HAnimJoint59.SetSkinCoordIndex([0]);
HAnimJoint59.SetSkinCoordWeight([0]);
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.Center := Vector3(0.0619,0.0059,-0.0083);
HAnimJoint60.SetSkinCoordIndex([0]);
HAnimJoint60.SetSkinCoordWeight([0]);
HAnimJoint61 := THAnimJointNode.Create;
{ METHOD .FdChildren.Add }
HAnimJoint60.FdChildren.Add(HAnimJoint61);
{ METHOD .FdChildren.Add }
HAnimJoint59.FdChildren.Add(HAnimJoint60);
{ METHOD .FdChildren.Add }
HAnimJoint58.FdChildren.Add(HAnimJoint59);
{ METHOD .FdChildren.Add }
HAnimJoint57.FdChildren.Add(HAnimJoint58);
HAnimJoint62 := THAnimJointNode.Create;
HAnimJoint62.Center := Vector3(0.0812,0.025,-0.0805);
HAnimJoint62.SetSkinCoordIndex([0]);
HAnimJoint62.SetSkinCoordWeight([0]);
HAnimJoint63 := THAnimJointNode.Create;
HAnimJoint63.Center := Vector3(0.08,0.0175,-0.0608);
HAnimJoint63.SetSkinCoordIndex([0]);
HAnimJoint63.SetSkinCoordWeight([0]);
HAnimJoint64 := THAnimJointNode.Create;
HAnimJoint64.Center := Vector3(0.0824,0.0064,-0.004);
HAnimJoint64.SetSkinCoordIndex([0]);
HAnimJoint64.SetSkinCoordWeight([0]);
HAnimJoint65 := THAnimJointNode.Create;
HAnimJoint65.Center := Vector3(0.0841,0.0041,0.0121);
end;

procedure InitStandardHumanoidNoSegSitePart5;
begin

HAnimJoint65.SetSkinCoordIndex([0]);
HAnimJoint65.SetSkinCoordWeight([0]);
HAnimJoint66 := THAnimJointNode.Create;
HAnimJoint66.Center := Vector3(0.0841,0.0013,0.0216);
HAnimJoint66.SetSkinCoordIndex([0]);
HAnimJoint66.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint65.FdChildren.Add(HAnimJoint66);
{ METHOD .FdChildren.Add }
HAnimJoint64.FdChildren.Add(HAnimJoint65);
{ METHOD .FdChildren.Add }
HAnimJoint63.FdChildren.Add(HAnimJoint64);
{ METHOD .FdChildren.Add }
HAnimJoint62.FdChildren.Add(HAnimJoint63);
{ METHOD .FdChildren.Add }
HAnimJoint57.FdChildren.Add(HAnimJoint62);
HAnimJoint67 := THAnimJointNode.Create;
HAnimJoint67.Center := Vector3(0.0928,0.0248,-0.0821);
HAnimJoint67.SetSkinCoordIndex([0]);
HAnimJoint67.SetSkinCoordWeight([0]);
HAnimJoint68 := THAnimJointNode.Create;
HAnimJoint68.Center := Vector3(0.0944,0.0175,-0.0625);
HAnimJoint68.SetSkinCoordIndex([0]);
HAnimJoint68.SetSkinCoordWeight([0]);
HAnimJoint69 := THAnimJointNode.Create;
HAnimJoint69.Center := Vector3(0.0963,0.0065,-0.0065);
HAnimJoint69.SetSkinCoordIndex([0]);
HAnimJoint69.SetSkinCoordWeight([0]);
HAnimJoint70 := THAnimJointNode.Create;
HAnimJoint70.Center := Vector3(0.0987,0.0034,0.0086);
HAnimJoint70.SetSkinCoordIndex([0]);
HAnimJoint70.SetSkinCoordWeight([0]);
HAnimJoint71 := THAnimJointNode.Create;
HAnimJoint71.Center := Vector3(0.1002,0.0013,0.0178);
HAnimJoint71.SetSkinCoordIndex([0]);
HAnimJoint71.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint70.FdChildren.Add(HAnimJoint71);
{ METHOD .FdChildren.Add }
HAnimJoint69.FdChildren.Add(HAnimJoint70);
{ METHOD .FdChildren.Add }
HAnimJoint68.FdChildren.Add(HAnimJoint69);
{ METHOD .FdChildren.Add }
HAnimJoint67.FdChildren.Add(HAnimJoint68);
{ METHOD .FdChildren.Add }
HAnimJoint57.FdChildren.Add(HAnimJoint67);
{ METHOD .FdChildren.Add }
HAnimJoint56.FdChildren.Add(HAnimJoint57);
HAnimJoint72 := THAnimJointNode.Create;
HAnimJoint72.Center := Vector3(0.0889,0.0494,-0.1278);
HAnimJoint72.SetSkinCoordIndex([0]);
end;

procedure InitStandardHumanoidNoSegSitePart6;
begin

HAnimJoint72.SetSkinCoordWeight([0]);
HAnimJoint73 := THAnimJointNode.Create;
HAnimJoint73.Center := Vector3(0.1105,0.0267,-0.0998);
HAnimJoint73.SetSkinCoordIndex([0]);
HAnimJoint73.SetSkinCoordWeight([0]);
HAnimJoint74 := THAnimJointNode.Create;
HAnimJoint74.Center := Vector3(0.1063,0.016,-0.0634);
HAnimJoint74.SetSkinCoordIndex([0]);
HAnimJoint74.SetSkinCoordWeight([0]);
HAnimJoint75 := THAnimJointNode.Create;
HAnimJoint75.Center := Vector3(0.1097,0.0058,-0.0107);
HAnimJoint75.SetSkinCoordIndex([0]);
HAnimJoint75.SetSkinCoordWeight([0]);
HAnimJoint76 := THAnimJointNode.Create;
HAnimJoint76.Center := Vector3(0.114,0.0037,0.0044);
HAnimJoint76.SetSkinCoordIndex([0]);
HAnimJoint76.SetSkinCoordWeight([0]);
HAnimJoint77 := THAnimJointNode.Create;
HAnimJoint77.Center := Vector3(0.1155,0.0008,0.0118);
HAnimJoint77.SetSkinCoordIndex([0]);
HAnimJoint77.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint76.FdChildren.Add(HAnimJoint77);
{ METHOD .FdChildren.Add }
HAnimJoint75.FdChildren.Add(HAnimJoint76);
{ METHOD .FdChildren.Add }
HAnimJoint74.FdChildren.Add(HAnimJoint75);
{ METHOD .FdChildren.Add }
HAnimJoint73.FdChildren.Add(HAnimJoint74);
HAnimJoint78 := THAnimJointNode.Create;
HAnimJoint78.Center := Vector3(0.1206,0.0124,-0.0671);
HAnimJoint78.SetSkinCoordIndex([0]);
HAnimJoint78.SetSkinCoordWeight([0]);
HAnimJoint79 := THAnimJointNode.Create;
HAnimJoint79.Center := Vector3(0.1239,0.0051,-0.0153);
HAnimJoint79.SetSkinCoordIndex([0]);
HAnimJoint79.SetSkinCoordWeight([0]);
HAnimJoint80 := THAnimJointNode.Create;
HAnimJoint80.Center := Vector3(0.1262,0.0023,-0.0077);
HAnimJoint80.SetSkinCoordIndex([0]);
HAnimJoint80.SetSkinCoordWeight([0]);
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.Center := Vector3(0.1271,0,0);
HAnimJoint81.SetSkinCoordIndex([0]);
end;

procedure InitStandardHumanoidNoSegSitePart7;
begin

HAnimJoint81.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint80.FdChildren.Add(HAnimJoint81);
{ METHOD .FdChildren.Add }
HAnimJoint79.FdChildren.Add(HAnimJoint80);
{ METHOD .FdChildren.Add }
HAnimJoint78.FdChildren.Add(HAnimJoint79);
{ METHOD .FdChildren.Add }
HAnimJoint73.FdChildren.Add(HAnimJoint78);
{ METHOD .FdChildren.Add }
HAnimJoint72.FdChildren.Add(HAnimJoint73);
{ METHOD .FdChildren.Add }
HAnimJoint56.FdChildren.Add(HAnimJoint72);
{ METHOD .FdChildren.Add }
HAnimJoint55.FdChildren.Add(HAnimJoint56);
{ METHOD .FdChildren.Add }
HAnimJoint54.FdChildren.Add(HAnimJoint55);
{ METHOD .FdChildren.Add }
HAnimJoint53.FdChildren.Add(HAnimJoint54);
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.Center := Vector3(-0.095,0.9171,0.0029);
HAnimJoint82.SetSkinCoordIndex([0]);
HAnimJoint82.SetSkinCoordWeight([0]);
HAnimJoint83 := THAnimJointNode.Create;
HAnimJoint83.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimJoint83.SetSkinCoordIndex([0]);
HAnimJoint83.SetSkinCoordWeight([0]);
HAnimJoint84 := THAnimJointNode.Create;
HAnimJoint84.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimJoint84.SetSkinCoordIndex([0]);
HAnimJoint84.SetSkinCoordWeight([0]);
HAnimJoint85 := THAnimJointNode.Create;
HAnimJoint85.Center := Vector3(-0.0781,0.0283,-0.097);
HAnimJoint85.SetSkinCoordIndex([0]);
HAnimJoint85.SetSkinCoordWeight([0]);
HAnimJoint86 := THAnimJointNode.Create;
HAnimJoint86.Center := Vector3(-0.0672,0.0235,-0.0835);
HAnimJoint86.SetSkinCoordIndex([0]);
HAnimJoint86.SetSkinCoordWeight([0]);
HAnimJoint87 := THAnimJointNode.Create;
HAnimJoint87.Center := Vector3(-0.0644,0.0147,-0.0577);
HAnimJoint87.SetSkinCoordIndex([0]);
HAnimJoint87.SetSkinCoordWeight([0]);
HAnimJoint88 := THAnimJointNode.Create;
HAnimJoint88.Center := Vector3(-0.0619,0.0059,-0.0083);
HAnimJoint88.SetSkinCoordIndex([0]);
HAnimJoint88.SetSkinCoordWeight([0]);
HAnimJoint89 := THAnimJointNode.Create;
{ METHOD .FdChildren.Add }
HAnimJoint88.FdChildren.Add(HAnimJoint89);
end;

procedure InitStandardHumanoidNoSegSitePart8;
begin

{ METHOD .FdChildren.Add }
HAnimJoint87.FdChildren.Add(HAnimJoint88);
{ METHOD .FdChildren.Add }
HAnimJoint86.FdChildren.Add(HAnimJoint87);
{ METHOD .FdChildren.Add }
HAnimJoint85.FdChildren.Add(HAnimJoint86);
HAnimJoint90 := THAnimJointNode.Create;
HAnimJoint90.Center := Vector3(-0.0812,0.025,-0.0805);
HAnimJoint90.SetSkinCoordIndex([0]);
HAnimJoint90.SetSkinCoordWeight([0]);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.Center := Vector3(-0.08,0.0175,-0.0608);
HAnimJoint91.SetSkinCoordIndex([0]);
HAnimJoint91.SetSkinCoordWeight([0]);
HAnimJoint92 := THAnimJointNode.Create;
HAnimJoint92.Center := Vector3(-0.0823,0.0064,-0.004);
HAnimJoint92.SetSkinCoordIndex([0]);
HAnimJoint92.SetSkinCoordWeight([0]);
HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.Center := Vector3(-0.0841,0.0041,0.0121);
HAnimJoint93.SetSkinCoordIndex([0]);
HAnimJoint93.SetSkinCoordWeight([0]);
HAnimJoint94 := THAnimJointNode.Create;
HAnimJoint94.Center := Vector3(-0.0841,0.0013,0.0216);
HAnimJoint94.SetSkinCoordIndex([0]);
HAnimJoint94.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint93.FdChildren.Add(HAnimJoint94);
{ METHOD .FdChildren.Add }
HAnimJoint92.FdChildren.Add(HAnimJoint93);
{ METHOD .FdChildren.Add }
HAnimJoint91.FdChildren.Add(HAnimJoint92);
{ METHOD .FdChildren.Add }
HAnimJoint90.FdChildren.Add(HAnimJoint91);
{ METHOD .FdChildren.Add }
HAnimJoint85.FdChildren.Add(HAnimJoint90);
HAnimJoint95 := THAnimJointNode.Create;
HAnimJoint95.Center := Vector3(-0.0928,0.0248,-0.0821);
HAnimJoint95.SetSkinCoordIndex([0]);
HAnimJoint95.SetSkinCoordWeight([0]);
HAnimJoint96 := THAnimJointNode.Create;
HAnimJoint96.Center := Vector3(-0.0944,0.0175,-0.0625);
HAnimJoint96.SetSkinCoordIndex([0]);
HAnimJoint96.SetSkinCoordWeight([0]);
HAnimJoint97 := THAnimJointNode.Create;
HAnimJoint97.Center := Vector3(-0.0963,0.0065,-0.0065);
HAnimJoint97.SetSkinCoordIndex([0]);
HAnimJoint97.SetSkinCoordWeight([0]);
end;

procedure InitStandardHumanoidNoSegSitePart9;
begin

HAnimJoint98 := THAnimJointNode.Create;
HAnimJoint98.Center := Vector3(-0.0987,0.0034,0.0086);
HAnimJoint98.SetSkinCoordIndex([0]);
HAnimJoint98.SetSkinCoordWeight([0]);
HAnimJoint99 := THAnimJointNode.Create;
HAnimJoint99.Center := Vector3(-0.1002,0.0013,0.0178);
HAnimJoint99.SetSkinCoordIndex([0]);
HAnimJoint99.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint98.FdChildren.Add(HAnimJoint99);
{ METHOD .FdChildren.Add }
HAnimJoint97.FdChildren.Add(HAnimJoint98);
{ METHOD .FdChildren.Add }
HAnimJoint96.FdChildren.Add(HAnimJoint97);
{ METHOD .FdChildren.Add }
HAnimJoint95.FdChildren.Add(HAnimJoint96);
{ METHOD .FdChildren.Add }
HAnimJoint85.FdChildren.Add(HAnimJoint95);
{ METHOD .FdChildren.Add }
HAnimJoint84.FdChildren.Add(HAnimJoint85);
HAnimJoint100 := THAnimJointNode.Create;
HAnimJoint100.Center := Vector3(-0.0889,0.0494,-0.1278);
HAnimJoint100.SetSkinCoordIndex([0]);
HAnimJoint100.SetSkinCoordWeight([0]);
HAnimJoint101 := THAnimJointNode.Create;
HAnimJoint101.Center := Vector3(-0.1105,0.0267,-0.0998);
HAnimJoint101.SetSkinCoordIndex([0]);
HAnimJoint101.SetSkinCoordWeight([0]);
HAnimJoint102 := THAnimJointNode.Create;
HAnimJoint102.Center := Vector3(-0.1063,0.016,-0.0634);
HAnimJoint102.SetSkinCoordIndex([0]);
HAnimJoint102.SetSkinCoordWeight([0]);
HAnimJoint103 := THAnimJointNode.Create;
HAnimJoint103.Center := Vector3(-0.1097,0.0058,-0.0107);
HAnimJoint103.SetSkinCoordIndex([0]);
HAnimJoint103.SetSkinCoordWeight([0]);
HAnimJoint104 := THAnimJointNode.Create;
HAnimJoint104.Center := Vector3(-0.114,0.0037,0.0044);
HAnimJoint104.SetSkinCoordIndex([0]);
HAnimJoint104.SetSkinCoordWeight([0]);
HAnimJoint105 := THAnimJointNode.Create;
HAnimJoint105.Center := Vector3(-0.1155,0.0008,0.0118);
HAnimJoint105.SetSkinCoordIndex([0]);
HAnimJoint105.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint104.FdChildren.Add(HAnimJoint105);
{ METHOD .FdChildren.Add }
HAnimJoint103.FdChildren.Add(HAnimJoint104);
end;

procedure InitStandardHumanoidNoSegSitePart10;
begin

{ METHOD .FdChildren.Add }
HAnimJoint102.FdChildren.Add(HAnimJoint103);
{ METHOD .FdChildren.Add }
HAnimJoint101.FdChildren.Add(HAnimJoint102);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.Center := Vector3(-0.1206,0.0124,-0.0671);
HAnimJoint106.SetSkinCoordIndex([0]);
HAnimJoint106.SetSkinCoordWeight([0]);
HAnimJoint107 := THAnimJointNode.Create;
HAnimJoint107.Center := Vector3(-0.1239,0.0051,-0.0153);
HAnimJoint107.SetSkinCoordIndex([0]);
HAnimJoint107.SetSkinCoordWeight([0]);
HAnimJoint108 := THAnimJointNode.Create;
HAnimJoint108.Center := Vector3(-0.1262,0.0023,-0.0077);
HAnimJoint108.SetSkinCoordIndex([0]);
HAnimJoint108.SetSkinCoordWeight([0]);
HAnimJoint109 := THAnimJointNode.Create;
HAnimJoint109.Center := Vector3(-0.1271,0,0);
HAnimJoint109.SetSkinCoordIndex([0]);
HAnimJoint109.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint108.FdChildren.Add(HAnimJoint109);
{ METHOD .FdChildren.Add }
HAnimJoint107.FdChildren.Add(HAnimJoint108);
{ METHOD .FdChildren.Add }
HAnimJoint106.FdChildren.Add(HAnimJoint107);
{ METHOD .FdChildren.Add }
HAnimJoint101.FdChildren.Add(HAnimJoint106);
{ METHOD .FdChildren.Add }
HAnimJoint100.FdChildren.Add(HAnimJoint101);
{ METHOD .FdChildren.Add }
HAnimJoint84.FdChildren.Add(HAnimJoint100);
{ METHOD .FdChildren.Add }
HAnimJoint83.FdChildren.Add(HAnimJoint84);
{ METHOD .FdChildren.Add }
HAnimJoint82.FdChildren.Add(HAnimJoint83);
{ METHOD .FdChildren.Add }
HAnimJoint53.FdChildren.Add(HAnimJoint82);
{ METHOD .FdChildren.Add }
HAnimJoint52.FdChildren.Add(HAnimJoint53);
HAnimJoint110 := THAnimJointNode.Create;
HAnimJoint110.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimJoint110.SetSkinCoordIndex([0]);
HAnimJoint110.SetSkinCoordWeight([0]);
HAnimJoint111 := THAnimJointNode.Create;
HAnimJoint111.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimJoint111.SetSkinCoordIndex([0]);
HAnimJoint111.SetSkinCoordWeight([0]);
HAnimJoint112 := THAnimJointNode.Create;
HAnimJoint112.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimJoint112.SetSkinCoordIndex([0]);
HAnimJoint112.SetSkinCoordWeight([0]);
end;

procedure InitStandardHumanoidNoSegSitePart11;
begin

HAnimJoint113 := THAnimJointNode.Create;
HAnimJoint113.Center := Vector3(0.0045,1.1546,-0.08);
HAnimJoint113.SetSkinCoordIndex([0]);
HAnimJoint113.SetSkinCoordWeight([0]);
HAnimJoint114 := THAnimJointNode.Create;
HAnimJoint114.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimJoint114.SetSkinCoordIndex([0]);
HAnimJoint114.SetSkinCoordWeight([0]);
HAnimJoint115 := THAnimJointNode.Create;
HAnimJoint115.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimJoint115.SetSkinCoordIndex([0]);
HAnimJoint115.SetSkinCoordWeight([0]);
HAnimJoint116 := THAnimJointNode.Create;
HAnimJoint116.Center := Vector3(0.0053,1.2679,-0.081);
HAnimJoint116.SetSkinCoordIndex([0]);
HAnimJoint116.SetSkinCoordWeight([0]);
HAnimJoint117 := THAnimJointNode.Create;
HAnimJoint117.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimJoint117.SetSkinCoordIndex([0]);
HAnimJoint117.SetSkinCoordWeight([0]);
HAnimJoint118 := THAnimJointNode.Create;
HAnimJoint118.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimJoint118.SetSkinCoordIndex([0]);
HAnimJoint118.SetSkinCoordWeight([0]);
HAnimJoint119 := THAnimJointNode.Create;
HAnimJoint119.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimJoint119.SetSkinCoordIndex([0]);
HAnimJoint119.SetSkinCoordWeight([0]);
HAnimJoint120 := THAnimJointNode.Create;
HAnimJoint120.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimJoint120.SetSkinCoordIndex([0]);
HAnimJoint120.SetSkinCoordWeight([0]);
HAnimJoint121 := THAnimJointNode.Create;
HAnimJoint121.Center := Vector3(0.0059,1.3866,-0.08);
HAnimJoint121.SetSkinCoordIndex([0]);
HAnimJoint121.SetSkinCoordWeight([0]);
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122.Center := Vector3(0.006,1.4102,-0.0745);
HAnimJoint122.SetSkinCoordIndex([0]);
HAnimJoint122.SetSkinCoordWeight([0]);
end;

procedure InitStandardHumanoidNoSegSitePart12;
begin

HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.Center := Vector3(0.0061,1.432,-0.0675);
HAnimJoint123.SetSkinCoordIndex([0]);
HAnimJoint123.SetSkinCoordWeight([0]);
HAnimJoint124 := THAnimJointNode.Create;
HAnimJoint124.Center := Vector3(0.0062,1.4583,-0.057);
HAnimJoint124.SetSkinCoordIndex([0]);
HAnimJoint124.SetSkinCoordWeight([0]);
HAnimJoint125 := THAnimJointNode.Create;
HAnimJoint125.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimJoint125.SetSkinCoordIndex([0]);
HAnimJoint125.SetSkinCoordWeight([0]);
HAnimJoint126 := THAnimJointNode.Create;
HAnimJoint126.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimJoint126.SetSkinCoordIndex([0]);
HAnimJoint126.SetSkinCoordWeight([0]);
HAnimJoint127 := THAnimJointNode.Create;
HAnimJoint127.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimJoint127.SetSkinCoordIndex([0]);
HAnimJoint127.SetSkinCoordWeight([0]);
HAnimJoint128 := THAnimJointNode.Create;
HAnimJoint128.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimJoint128.SetSkinCoordIndex([0]);
HAnimJoint128.SetSkinCoordWeight([0]);
HAnimJoint129 := THAnimJointNode.Create;
HAnimJoint129.Center := Vector3(0.0066,1.552,-0.0082);
HAnimJoint129.SetSkinCoordIndex([0]);
HAnimJoint129.SetSkinCoordWeight([0]);
HAnimJoint130 := THAnimJointNode.Create;
HAnimJoint130.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimJoint130.SetSkinCoordIndex([0]);
HAnimJoint130.SetSkinCoordWeight([0]);
HAnimJoint131 := THAnimJointNode.Create;
HAnimJoint131.Center := Vector3(0.0066,1.58,-0.0103);
HAnimJoint131.SetSkinCoordIndex([0]);
HAnimJoint131.SetSkinCoordWeight([0]);
HAnimJoint132 := THAnimJointNode.Create;
HAnimJoint132.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimJoint132.SetSkinCoordIndex([0]);
HAnimJoint132.SetSkinCoordWeight([0]);
end;

procedure InitStandardHumanoidNoSegSitePart13;
begin

HAnimJoint133 := THAnimJointNode.Create;
HAnimJoint133.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimJoint133.SetSkinCoordIndex([0]);
HAnimJoint133.SetSkinCoordWeight([0]);
HAnimJoint134 := THAnimJointNode.Create;
HAnimJoint134.Center := Vector3(0.0044,1.6209,0.0236);
HAnimJoint134.SetSkinCoordIndex([0]);
HAnimJoint134.SetSkinCoordWeight([0]);
HAnimJoint135 := THAnimJointNode.Create;
HAnimJoint135.Center := Vector3(0.0503,1.4157,-0.0689);
HAnimJoint135.SetSkinCoordIndex([0]);
HAnimJoint135.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint134.FdChildren.Add(HAnimJoint135);
HAnimJoint136 := THAnimJointNode.Create;
HAnimJoint136.Center := Vector3(-0.0507,1.4157,-0.0689);
HAnimJoint136.SetSkinCoordIndex([0]);
HAnimJoint136.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint134.FdChildren.Add(HAnimJoint136);
HAnimJoint137 := THAnimJointNode.Create;
HAnimJoint137.Center := Vector3(0.0479,1.3963,-0.0188);
HAnimJoint137.SetSkinCoordIndex([0]);
HAnimJoint137.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint134.FdChildren.Add(HAnimJoint137);
HAnimJoint138 := THAnimJointNode.Create;
HAnimJoint138.Center := Vector3(-0.0483,1.3963,-0.0188);
HAnimJoint138.SetSkinCoordIndex([0]);
HAnimJoint138.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint134.FdChildren.Add(HAnimJoint138);
HAnimJoint139 := THAnimJointNode.Create;
HAnimJoint139.Center := Vector3(0.0216,1.4053,0.0051);
HAnimJoint139.SetSkinCoordIndex([0]);
HAnimJoint139.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint134.FdChildren.Add(HAnimJoint139);
HAnimJoint140 := THAnimJointNode.Create;
HAnimJoint140.Center := Vector3(-0.0219,1.4053,0.0051);
HAnimJoint140.SetSkinCoordIndex([0]);
HAnimJoint140.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint134.FdChildren.Add(HAnimJoint140);
HAnimJoint141 := THAnimJointNode.Create;
HAnimJoint141.Center := Vector3(-0.0002,1.3043,-0.0865);
end;

procedure InitStandardHumanoidNoSegSitePart14;
begin

HAnimJoint141.SetSkinCoordIndex([0]);
HAnimJoint141.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint134.FdChildren.Add(HAnimJoint141);
{ METHOD .FdChildren.Add }
HAnimJoint133.FdChildren.Add(HAnimJoint134);
{ METHOD .FdChildren.Add }
HAnimJoint132.FdChildren.Add(HAnimJoint133);
{ METHOD .FdChildren.Add }
HAnimJoint131.FdChildren.Add(HAnimJoint132);
{ METHOD .FdChildren.Add }
HAnimJoint130.FdChildren.Add(HAnimJoint131);
{ METHOD .FdChildren.Add }
HAnimJoint129.FdChildren.Add(HAnimJoint130);
{ METHOD .FdChildren.Add }
HAnimJoint128.FdChildren.Add(HAnimJoint129);
{ METHOD .FdChildren.Add }
HAnimJoint127.FdChildren.Add(HAnimJoint128);
{ METHOD .FdChildren.Add }
HAnimJoint126.FdChildren.Add(HAnimJoint127);
HAnimJoint142 := THAnimJointNode.Create;
HAnimJoint142.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint142.SetSkinCoordIndex([0]);
HAnimJoint142.SetSkinCoordWeight([0]);
HAnimJoint143 := THAnimJointNode.Create;
HAnimJoint143.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint143.SetSkinCoordIndex([0]);
HAnimJoint143.SetSkinCoordWeight([0]);
HAnimJoint144 := THAnimJointNode.Create;
HAnimJoint144.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimJoint144.SetSkinCoordIndex([0]);
HAnimJoint144.SetSkinCoordWeight([0]);
HAnimJoint145 := THAnimJointNode.Create;
HAnimJoint145.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimJoint145.SetSkinCoordIndex([0]);
HAnimJoint145.SetSkinCoordWeight([0]);
HAnimJoint146 := THAnimJointNode.Create;
HAnimJoint146.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimJoint146.SetSkinCoordIndex([0]);
HAnimJoint146.SetSkinCoordWeight([0]);
HAnimJoint147 := THAnimJointNode.Create;
HAnimJoint147.Center := Vector3(0.1811,0.6975,-0.0826);
HAnimJoint147.SetSkinCoordIndex([0]);
HAnimJoint147.SetSkinCoordWeight([0]);
HAnimJoint148 := THAnimJointNode.Create;
HAnimJoint148.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint148.SetSkinCoordIndex([0]);
HAnimJoint148.SetSkinCoordWeight([0]);
HAnimJoint149 := THAnimJointNode.Create;
end;

procedure InitStandardHumanoidNoSegSitePart15;
begin

HAnimJoint149.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint149.SetSkinCoordIndex([0]);
HAnimJoint149.SetSkinCoordWeight([0]);
HAnimJoint150 := THAnimJointNode.Create;
HAnimJoint150.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint150.SetSkinCoordIndex([0]);
HAnimJoint150.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint149.FdChildren.Add(HAnimJoint150);
{ METHOD .FdChildren.Add }
HAnimJoint148.FdChildren.Add(HAnimJoint149);
{ METHOD .FdChildren.Add }
HAnimJoint147.FdChildren.Add(HAnimJoint148);
{ METHOD .FdChildren.Add }
HAnimJoint146.FdChildren.Add(HAnimJoint147);
HAnimJoint151 := THAnimJointNode.Create;
HAnimJoint151.Center := Vector3(0.1811,0.6984,-0.0935);
HAnimJoint151.SetSkinCoordIndex([0]);
HAnimJoint151.SetSkinCoordWeight([0]);
HAnimJoint152 := THAnimJointNode.Create;
HAnimJoint152.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint152.SetSkinCoordIndex([0]);
HAnimJoint152.SetSkinCoordWeight([0]);
HAnimJoint153 := THAnimJointNode.Create;
HAnimJoint153.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint153.SetSkinCoordIndex([0]);
HAnimJoint153.SetSkinCoordWeight([0]);
HAnimJoint154 := THAnimJointNode.Create;
HAnimJoint154.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint154.SetSkinCoordIndex([0]);
HAnimJoint154.SetSkinCoordWeight([0]);
HAnimJoint155 := THAnimJointNode.Create;
HAnimJoint155.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint155.SetSkinCoordIndex([0]);
HAnimJoint155.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint154.FdChildren.Add(HAnimJoint155);
{ METHOD .FdChildren.Add }
HAnimJoint153.FdChildren.Add(HAnimJoint154);
{ METHOD .FdChildren.Add }
HAnimJoint152.FdChildren.Add(HAnimJoint153);
{ METHOD .FdChildren.Add }
HAnimJoint151.FdChildren.Add(HAnimJoint152);
{ METHOD .FdChildren.Add }
HAnimJoint146.FdChildren.Add(HAnimJoint151);
HAnimJoint156 := THAnimJointNode.Create;
HAnimJoint156.Center := Vector3(0.1809,0.7,-0.1067);
HAnimJoint156.SetSkinCoordIndex([0]);
HAnimJoint156.SetSkinCoordWeight([0]);
end;

procedure InitStandardHumanoidNoSegSitePart16;
begin

HAnimJoint157 := THAnimJointNode.Create;
HAnimJoint157.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint157.SetSkinCoordIndex([0]);
HAnimJoint157.SetSkinCoordWeight([0]);
HAnimJoint158 := THAnimJointNode.Create;
HAnimJoint158.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint158.SetSkinCoordIndex([0]);
HAnimJoint158.SetSkinCoordWeight([0]);
HAnimJoint159 := THAnimJointNode.Create;
HAnimJoint159.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint159.SetSkinCoordIndex([0]);
HAnimJoint159.SetSkinCoordWeight([0]);
HAnimJoint160 := THAnimJointNode.Create;
HAnimJoint160.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint160.SetSkinCoordIndex([0]);
HAnimJoint160.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint159.FdChildren.Add(HAnimJoint160);
{ METHOD .FdChildren.Add }
HAnimJoint158.FdChildren.Add(HAnimJoint159);
{ METHOD .FdChildren.Add }
HAnimJoint157.FdChildren.Add(HAnimJoint158);
{ METHOD .FdChildren.Add }
HAnimJoint156.FdChildren.Add(HAnimJoint157);
{ METHOD .FdChildren.Add }
HAnimJoint146.FdChildren.Add(HAnimJoint156);
HAnimJoint161 := THAnimJointNode.Create;
HAnimJoint161.Center := Vector3(0.1809,0.6973,-0.1276);
HAnimJoint161.SetSkinCoordIndex([0]);
HAnimJoint161.SetSkinCoordWeight([0]);
HAnimJoint162 := THAnimJointNode.Create;
HAnimJoint162.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint162.SetSkinCoordIndex([0]);
HAnimJoint162.SetSkinCoordWeight([0]);
HAnimJoint163 := THAnimJointNode.Create;
HAnimJoint163.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint163.SetSkinCoordIndex([0]);
HAnimJoint163.SetSkinCoordWeight([0]);
HAnimJoint164 := THAnimJointNode.Create;
HAnimJoint164.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint164.SetSkinCoordIndex([0]);
HAnimJoint164.SetSkinCoordWeight([0]);
HAnimJoint165 := THAnimJointNode.Create;
HAnimJoint165.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint165.SetSkinCoordIndex([0]);
end;

procedure InitStandardHumanoidNoSegSitePart17;
begin

HAnimJoint165.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint164.FdChildren.Add(HAnimJoint165);
{ METHOD .FdChildren.Add }
HAnimJoint163.FdChildren.Add(HAnimJoint164);
{ METHOD .FdChildren.Add }
HAnimJoint162.FdChildren.Add(HAnimJoint163);
{ METHOD .FdChildren.Add }
HAnimJoint161.FdChildren.Add(HAnimJoint162);
HAnimJoint166 := THAnimJointNode.Create;
HAnimJoint166.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint166.SetSkinCoordIndex([0]);
HAnimJoint166.SetSkinCoordWeight([0]);
HAnimJoint167 := THAnimJointNode.Create;
HAnimJoint167.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint167.SetSkinCoordIndex([0]);
HAnimJoint167.SetSkinCoordWeight([0]);
HAnimJoint168 := THAnimJointNode.Create;
HAnimJoint168.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint168.SetSkinCoordIndex([0]);
HAnimJoint168.SetSkinCoordWeight([0]);
HAnimJoint169 := THAnimJointNode.Create;
HAnimJoint169.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint169.SetSkinCoordIndex([0]);
HAnimJoint169.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint168.FdChildren.Add(HAnimJoint169);
{ METHOD .FdChildren.Add }
HAnimJoint167.FdChildren.Add(HAnimJoint168);
{ METHOD .FdChildren.Add }
HAnimJoint166.FdChildren.Add(HAnimJoint167);
{ METHOD .FdChildren.Add }
HAnimJoint161.FdChildren.Add(HAnimJoint166);
{ METHOD .FdChildren.Add }
HAnimJoint146.FdChildren.Add(HAnimJoint161);
{ METHOD .FdChildren.Add }
HAnimJoint145.FdChildren.Add(HAnimJoint146);
{ METHOD .FdChildren.Add }
HAnimJoint144.FdChildren.Add(HAnimJoint145);
{ METHOD .FdChildren.Add }
HAnimJoint143.FdChildren.Add(HAnimJoint144);
{ METHOD .FdChildren.Add }
HAnimJoint142.FdChildren.Add(HAnimJoint143);
{ METHOD .FdChildren.Add }
HAnimJoint126.FdChildren.Add(HAnimJoint142);
HAnimJoint170 := THAnimJointNode.Create;
HAnimJoint170.Center := Vector3(-0.0694,1.46,-0.033);
HAnimJoint170.SetSkinCoordIndex([0]);
HAnimJoint170.SetSkinCoordWeight([0]);
HAnimJoint171 := THAnimJointNode.Create;
HAnimJoint171.Center := Vector3(-0.0836,1.4281,-0.0401);
HAnimJoint171.SetSkinCoordIndex([0]);
HAnimJoint171.SetSkinCoordWeight([0]);
HAnimJoint172 := THAnimJointNode.Create;
end;

procedure InitStandardHumanoidNoSegSitePart18;
begin

HAnimJoint172.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimJoint172.SetSkinCoordIndex([0]);
HAnimJoint172.SetSkinCoordWeight([0]);
HAnimJoint173 := THAnimJointNode.Create;
HAnimJoint173.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimJoint173.SetSkinCoordIndex([0]);
HAnimJoint173.SetSkinCoordWeight([0]);
HAnimJoint174 := THAnimJointNode.Create;
HAnimJoint174.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimJoint174.SetSkinCoordIndex([0]);
HAnimJoint174.SetSkinCoordWeight([0]);
HAnimJoint175 := THAnimJointNode.Create;
HAnimJoint175.Center := Vector3(-0.1811,0.6975,-0.0826);
HAnimJoint175.SetSkinCoordIndex([0]);
HAnimJoint175.SetSkinCoordWeight([0]);
HAnimJoint176 := THAnimJointNode.Create;
HAnimJoint176.Center := Vector3(-0.1899,0.8502,-0.0473);
HAnimJoint176.SetSkinCoordIndex([0]);
HAnimJoint176.SetSkinCoordWeight([0]);
HAnimJoint177 := THAnimJointNode.Create;
HAnimJoint177.Center := Vector3(-0.1874,0.8256,0.0306);
HAnimJoint177.SetSkinCoordIndex([0]);
HAnimJoint177.SetSkinCoordWeight([0]);
HAnimJoint178 := THAnimJointNode.Create;
HAnimJoint178.Center := Vector3(-0.1864,0.819,0.0506);
HAnimJoint178.SetSkinCoordIndex([0]);
HAnimJoint178.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint177.FdChildren.Add(HAnimJoint178);
{ METHOD .FdChildren.Add }
HAnimJoint176.FdChildren.Add(HAnimJoint177);
{ METHOD .FdChildren.Add }
HAnimJoint175.FdChildren.Add(HAnimJoint176);
{ METHOD .FdChildren.Add }
HAnimJoint174.FdChildren.Add(HAnimJoint175);
HAnimJoint179 := THAnimJointNode.Create;
HAnimJoint179.Center := Vector3(-0.1811,0.6984,-0.0935);
HAnimJoint179.SetSkinCoordIndex([0]);
HAnimJoint179.SetSkinCoordWeight([0]);
HAnimJoint180 := THAnimJointNode.Create;
HAnimJoint180.Center := Vector3(-0.1961,0.8055,-0.0218);
HAnimJoint180.SetSkinCoordIndex([0]);
HAnimJoint180.SetSkinCoordWeight([0]);
HAnimJoint181 := THAnimJointNode.Create;
end;

procedure InitStandardHumanoidNoSegSitePart19;
begin

HAnimJoint181.Center := Vector3(-0.1961,0.7846,-0.0218);
HAnimJoint181.SetSkinCoordIndex([0]);
HAnimJoint181.SetSkinCoordWeight([0]);
HAnimJoint182 := THAnimJointNode.Create;
HAnimJoint182.Center := Vector3(-0.1954,0.7393,-0.0185);
HAnimJoint182.SetSkinCoordIndex([0]);
HAnimJoint182.SetSkinCoordWeight([0]);
HAnimJoint183 := THAnimJointNode.Create;
HAnimJoint183.Center := Vector3(-0.1945,0.7169,-0.0173);
HAnimJoint183.SetSkinCoordIndex([0]);
HAnimJoint183.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint182.FdChildren.Add(HAnimJoint183);
{ METHOD .FdChildren.Add }
HAnimJoint181.FdChildren.Add(HAnimJoint182);
{ METHOD .FdChildren.Add }
HAnimJoint180.FdChildren.Add(HAnimJoint181);
{ METHOD .FdChildren.Add }
HAnimJoint179.FdChildren.Add(HAnimJoint180);
{ METHOD .FdChildren.Add }
HAnimJoint174.FdChildren.Add(HAnimJoint179);
HAnimJoint184 := THAnimJointNode.Create;
HAnimJoint184.Center := Vector3(-0.1809,0.7,-0.1067);
HAnimJoint184.SetSkinCoordIndex([0]);
HAnimJoint184.SetSkinCoordWeight([0]);
HAnimJoint185 := THAnimJointNode.Create;
HAnimJoint185.Center := Vector3(-0.1972,0.806,-0.0468);
HAnimJoint185.SetSkinCoordIndex([0]);
HAnimJoint185.SetSkinCoordWeight([0]);
HAnimJoint186 := THAnimJointNode.Create;
HAnimJoint186.Center := Vector3(-0.1972,0.7849,-0.0468);
HAnimJoint186.SetSkinCoordIndex([0]);
HAnimJoint186.SetSkinCoordWeight([0]);
HAnimJoint187 := THAnimJointNode.Create;
HAnimJoint187.Center := Vector3(-0.195,0.7304,-0.0441);
HAnimJoint187.SetSkinCoordIndex([0]);
HAnimJoint187.SetSkinCoordWeight([0]);
HAnimJoint188 := THAnimJointNode.Create;
HAnimJoint188.Center := Vector3(-0.1939,0.7042,-0.0432);
HAnimJoint188.SetSkinCoordIndex([0]);
HAnimJoint188.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint187.FdChildren.Add(HAnimJoint188);
{ METHOD .FdChildren.Add }
HAnimJoint186.FdChildren.Add(HAnimJoint187);
{ METHOD .FdChildren.Add }
HAnimJoint185.FdChildren.Add(HAnimJoint186);
{ METHOD .FdChildren.Add }
HAnimJoint184.FdChildren.Add(HAnimJoint185);
end;

procedure InitStandardHumanoidNoSegSitePart20;
begin

{ METHOD .FdChildren.Add }
HAnimJoint174.FdChildren.Add(HAnimJoint184);
HAnimJoint189 := THAnimJointNode.Create;
HAnimJoint189.Center := Vector3(-0.1809,0.6973,-0.1276);
HAnimJoint189.SetSkinCoordIndex([0]);
HAnimJoint189.SetSkinCoordWeight([0]);
HAnimJoint190 := THAnimJointNode.Create;
HAnimJoint190.Center := Vector3(-0.1951,0.8049,-0.0732);
HAnimJoint190.SetSkinCoordIndex([0]);
HAnimJoint190.SetSkinCoordWeight([0]);
HAnimJoint191 := THAnimJointNode.Create;
HAnimJoint191.Center := Vector3(-0.1951,0.7845,-0.0732);
HAnimJoint191.SetSkinCoordIndex([0]);
HAnimJoint191.SetSkinCoordWeight([0]);
HAnimJoint192 := THAnimJointNode.Create;
HAnimJoint192.Center := Vector3(-0.192,0.7318,-0.0716);
HAnimJoint192.SetSkinCoordIndex([0]);
HAnimJoint192.SetSkinCoordWeight([0]);
HAnimJoint193 := THAnimJointNode.Create;
HAnimJoint193.Center := Vector3(-0.1908,0.7077,-0.0706);
HAnimJoint193.SetSkinCoordIndex([0]);
HAnimJoint193.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint192.FdChildren.Add(HAnimJoint193);
{ METHOD .FdChildren.Add }
HAnimJoint191.FdChildren.Add(HAnimJoint192);
{ METHOD .FdChildren.Add }
HAnimJoint190.FdChildren.Add(HAnimJoint191);
{ METHOD .FdChildren.Add }
HAnimJoint189.FdChildren.Add(HAnimJoint190);
HAnimJoint194 := THAnimJointNode.Create;
HAnimJoint194.Center := Vector3(-0.1926,0.8096,-0.0975);
HAnimJoint194.SetSkinCoordIndex([0]);
HAnimJoint194.SetSkinCoordWeight([0]);
HAnimJoint195 := THAnimJointNode.Create;
HAnimJoint195.Center := Vector3(-0.1926,0.7896,-0.0975);
HAnimJoint195.SetSkinCoordIndex([0]);
HAnimJoint195.SetSkinCoordWeight([0]);
HAnimJoint196 := THAnimJointNode.Create;
HAnimJoint196.Center := Vector3(-0.1902,0.7483,-0.0963);
HAnimJoint196.SetSkinCoordIndex([0]);
HAnimJoint196.SetSkinCoordWeight([0]);
HAnimJoint197 := THAnimJointNode.Create;
HAnimJoint197.Center := Vector3(-0.1908,0.754,-0.096);
HAnimJoint197.SetSkinCoordIndex([0]);
end;

procedure InitStandardHumanoidNoSegSitePart21;
begin

HAnimJoint197.SetSkinCoordWeight([0]);
{ METHOD .FdChildren.Add }
HAnimJoint196.FdChildren.Add(HAnimJoint197);
{ METHOD .FdChildren.Add }
HAnimJoint195.FdChildren.Add(HAnimJoint196);
{ METHOD .FdChildren.Add }
HAnimJoint194.FdChildren.Add(HAnimJoint195);
{ METHOD .FdChildren.Add }
HAnimJoint189.FdChildren.Add(HAnimJoint194);
{ METHOD .FdChildren.Add }
HAnimJoint174.FdChildren.Add(HAnimJoint189);
{ METHOD .FdChildren.Add }
HAnimJoint173.FdChildren.Add(HAnimJoint174);
{ METHOD .FdChildren.Add }
HAnimJoint172.FdChildren.Add(HAnimJoint173);
{ METHOD .FdChildren.Add }
HAnimJoint171.FdChildren.Add(HAnimJoint172);
{ METHOD .FdChildren.Add }
HAnimJoint170.FdChildren.Add(HAnimJoint171);
{ METHOD .FdChildren.Add }
HAnimJoint126.FdChildren.Add(HAnimJoint170);
{ METHOD .FdChildren.Add }
HAnimJoint125.FdChildren.Add(HAnimJoint126);
{ METHOD .FdChildren.Add }
HAnimJoint124.FdChildren.Add(HAnimJoint125);
{ METHOD .FdChildren.Add }
HAnimJoint123.FdChildren.Add(HAnimJoint124);
{ METHOD .FdChildren.Add }
HAnimJoint122.FdChildren.Add(HAnimJoint123);
{ METHOD .FdChildren.Add }
HAnimJoint121.FdChildren.Add(HAnimJoint122);
{ METHOD .FdChildren.Add }
HAnimJoint120.FdChildren.Add(HAnimJoint121);
{ METHOD .FdChildren.Add }
HAnimJoint119.FdChildren.Add(HAnimJoint120);
{ METHOD .FdChildren.Add }
HAnimJoint118.FdChildren.Add(HAnimJoint119);
{ METHOD .FdChildren.Add }
HAnimJoint117.FdChildren.Add(HAnimJoint118);
{ METHOD .FdChildren.Add }
HAnimJoint116.FdChildren.Add(HAnimJoint117);
{ METHOD .FdChildren.Add }
HAnimJoint115.FdChildren.Add(HAnimJoint116);
{ METHOD .FdChildren.Add }
HAnimJoint114.FdChildren.Add(HAnimJoint115);
{ METHOD .FdChildren.Add }
HAnimJoint113.FdChildren.Add(HAnimJoint114);
{ METHOD .FdChildren.Add }
HAnimJoint112.FdChildren.Add(HAnimJoint113);
{ METHOD .FdChildren.Add }
HAnimJoint111.FdChildren.Add(HAnimJoint112);
{ METHOD .FdChildren.Add }
HAnimJoint110.FdChildren.Add(HAnimJoint111);
{ METHOD .FdChildren.Add }
HAnimJoint52.FdChildren.Add(HAnimJoint110);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid43.FdSkeleton.Add(HAnimJoint52);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint52);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint53);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint54);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint55);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint56);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint57);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint58);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint59);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint60);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint61);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint62);
end;

procedure InitStandardHumanoidNoSegSitePart22;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint63);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint64);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint65);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint66);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint67);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint68);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint69);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint70);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint71);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint72);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint73);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint74);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint75);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint76);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint77);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint78);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint79);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint80);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint81);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint82);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint83);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint84);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint85);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint86);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint87);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint88);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint89);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint90);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint91);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint92);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint93);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint94);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint95);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint96);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint97);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint98);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint99);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint100);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint101);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint102);
end;

procedure InitStandardHumanoidNoSegSitePart23;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint103);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint104);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint105);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint106);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint107);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint108);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint109);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint110);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint111);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint112);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint113);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint114);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint115);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint116);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint117);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint118);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint119);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint120);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint121);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint122);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint123);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint124);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint125);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint126);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint127);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint128);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint129);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint130);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint131);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint132);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint133);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint134);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint135);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint136);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint137);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint138);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint139);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint140);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint141);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint142);
end;

procedure InitStandardHumanoidNoSegSitePart24;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint143);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint144);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint145);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint146);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint147);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint148);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint149);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint150);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint151);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint152);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint153);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint154);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint155);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint156);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint157);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint158);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint159);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint160);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint161);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint162);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint163);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint164);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint165);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint166);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint167);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint168);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint169);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint170);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint171);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint172);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint173);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint174);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint175);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint176);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint177);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint178);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint179);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint180);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint181);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint182);
end;

procedure InitStandardHumanoidNoSegSitePart25;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint183);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint184);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint185);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint186);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint187);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint188);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint189);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint190);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint191);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint192);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint193);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint194);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint195);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint196);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint197);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(HAnimHumanoid43);
{ METHOD .AddGroup }
X3D0.AddChildren([Group11]);
end;

function CreateStandardHumanoidNoSegSite: TX3DRootNode;
begin
InitStandardHumanoidNoSegSitePart0;
InitStandardHumanoidNoSegSitePart1;
InitStandardHumanoidNoSegSitePart2;
InitStandardHumanoidNoSegSitePart3;
InitStandardHumanoidNoSegSitePart4;
InitStandardHumanoidNoSegSitePart5;
InitStandardHumanoidNoSegSitePart6;
InitStandardHumanoidNoSegSitePart7;
InitStandardHumanoidNoSegSitePart8;
InitStandardHumanoidNoSegSitePart9;
InitStandardHumanoidNoSegSitePart10;
InitStandardHumanoidNoSegSitePart11;
InitStandardHumanoidNoSegSitePart12;
InitStandardHumanoidNoSegSitePart13;
InitStandardHumanoidNoSegSitePart14;
InitStandardHumanoidNoSegSitePart15;
InitStandardHumanoidNoSegSitePart16;
InitStandardHumanoidNoSegSitePart17;
InitStandardHumanoidNoSegSitePart18;
InitStandardHumanoidNoSegSitePart19;
InitStandardHumanoidNoSegSitePart20;
InitStandardHumanoidNoSegSitePart21;
InitStandardHumanoidNoSegSitePart22;
InitStandardHumanoidNoSegSitePart23;
InitStandardHumanoidNoSegSitePart24;
InitStandardHumanoidNoSegSitePart25;
Result := X3D0;
end;

begin
end.
