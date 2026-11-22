unit JohnJoint;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateJohnJoint: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group10: TGroupNode;
Transform11: TTransformNode;
Shape12: TShapeNode;
IndexedLineSet13: TIndexedLineSetNode;
Coordinate14: TCoordinateNode;
Color15: TColorNode;
Group16: TGroupNode;
Transform17: TTransformNode;
Transform18: TTransformNode;
Shape19: TShapeNode;
Sphere20: TSphereNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
Transform23: TTransformNode;
Shape24: TShapeNode;
LineSet25: TLineSetNode;
ColorRGBA26: TColorRGBANode;
Coordinate27: TCoordinateNode;
NavigationInfo28: TNavigationInfoNode;
Viewpoint29: TViewpointNode;
HAnimHumanoid30: THAnimHumanoidNode;
HAnimJoint31: THAnimJointNode;
HAnimJoint32: THAnimJointNode;
HAnimJoint33: THAnimJointNode;
HAnimJoint34: THAnimJointNode;
HAnimJoint35: THAnimJointNode;
HAnimJoint36: THAnimJointNode;
HAnimJoint37: THAnimJointNode;
HAnimJoint38: THAnimJointNode;
HAnimJoint39: THAnimJointNode;
HAnimJoint40: THAnimJointNode;
HAnimJoint41: THAnimJointNode;
HAnimJoint42: THAnimJointNode;
HAnimJoint43: THAnimJointNode;
HAnimJoint44: THAnimJointNode;
HAnimJoint45: THAnimJointNode;
HAnimJoint46: THAnimJointNode;
HAnimJoint47: THAnimJointNode;
HAnimJoint48: THAnimJointNode;
HAnimJoint49: THAnimJointNode;
HAnimJoint50: THAnimJointNode;
HAnimJoint51: THAnimJointNode;
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

procedure InitJohnJointPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'JohnJoint.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'An attempt at a standard LOA-4 skeleton';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'h6.pl';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['created'] := '12 January 2023';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group10 := TGroupNode.Create;
Transform11 := TTransformNode.Create;
{ DEF for markerfor XYZ axes }
Shape12 := TShapeNode.Create;
{ RGB lines showing XYZ axes }
IndexedLineSet13 := TIndexedLineSetNode.Create;
IndexedLineSet13.SetColorIndex([0,1,2]);
IndexedLineSet13.ColorPerVertex := False;
IndexedLineSet13.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate14 := TCoordinateNode.Create;
Coordinate14.SetPoint([Vector3(0,0,0),Vector3(0.1,0,0),Vector3(0,0.1,0),Vector3(0,0,0.1)]);
{ METHOD .Coord }
IndexedLineSet13.Coord := Coordinate14;
Color15 := TColorNode.Create;
Color15.SetColor([Vector3(1,0,0),Vector3(0,0.6,0),Vector3(0,0,1)]);
{ METHOD .Color }
IndexedLineSet13.Color := Color15;
{ METHOD .Geometry }
Shape12.Geometry := IndexedLineSet13;
{ METHOD .FdChildren.Add }
Transform11.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform11);
Group16 := TGroupNode.Create;
{ DEFS for markers of skeleton joints, segments, and sites }
Transform17 := TTransformNode.Create;
{ <Transform translation='0 2 0'> }
{ <Shape DEF='HAnimRootShape'> }
{ <Sphere radius='0.02' /> }
{ <Appearance> }
{ <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> }
{ </Appearance> }
{ </Shape> }
{ </Transform> }
Transform18 := TTransformNode.Create;
Transform18.Translation := Vector3(0,2.1,0);
Shape19 := TShapeNode.Create;
Sphere20 := TSphereNode.Create;
Sphere20.Radius := 0.02;
{ METHOD .Geometry }
Shape19.Geometry := Sphere20;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(0,0,0.8);
Material22.Transparency := 0.3;
end;

procedure InitJohnJointPart1;
begin

{ METHOD .SetMaterial }
Appearance21.Material := Material22;
{ METHOD .Appearance }
Shape19.Appearance := Appearance21;
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Shape19);
{ METHOD .FdChildren.Add }
Transform17.FdChildren.Add(Transform18);
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(0,2.05,0);
Shape24 := TShapeNode.Create;
LineSet25 := TLineSetNode.Create;
LineSet25.SetVertexCount([2]);
ColorRGBA26 := TColorRGBANode.Create;
ColorRGBA26.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
LineSet25.Color := ColorRGBA26;
Coordinate27 := TCoordinateNode.Create;
Coordinate27.SetPoint([Vector3(-0.05,0,0),Vector3(0.05,0,0)]);
{ METHOD .Coord }
LineSet25.Coord := Coordinate27;
{ METHOD .Geometry }
Shape24.Geometry := LineSet25;
{ METHOD .FdChildren.Add }
Transform23.FdChildren.Add(Shape24);
{ METHOD .FdChildren.Add }
Transform17.FdChildren.Add(Transform23);
{ <Transform translation='0 2.1 0'> }
{ <Shape DEF='HAnimSiteShape'> }
{ <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> }
{ <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> }
{ <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> }
{ </IndexedFaceSet> }
{ <Appearance> }
{ <Material diffuseColor='1 1 0' transparency='0.3'/> }
{ </Appearance> }
{ </Shape> }
{ </Transform> }
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Transform17);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Group16);
NavigationInfo28 := TNavigationInfoNode.Create;
NavigationInfo28.Speed := 1.5;
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(NavigationInfo28);
Viewpoint29 := TViewpointNode.Create;
Viewpoint29.Description := 'default';
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Viewpoint29);
HAnimHumanoid30 := THAnimHumanoidNode.Create;
HAnimHumanoid30.SetInfo(['humanoidVersion=2.0']);
HAnimHumanoid30.Version := '2.0';
HAnimJoint31 := THAnimJointNode.Create;
HAnimJoint31.Center := Vector3(0,0.824,0.0277);
HAnimJoint32 := THAnimJointNode.Create;
HAnimJoint32.Center := Vector3(0,0.9149,0.0016);
HAnimJoint33 := THAnimJointNode.Create;
HAnimJoint33.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimJoint34 := THAnimJointNode.Create;
HAnimJoint34.Center := Vector3(0.104,0.4867,0.0308);
HAnimJoint35 := THAnimJointNode.Create;
HAnimJoint35.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimJoint36 := THAnimJointNode.Create;
end;

procedure InitJohnJointPart2;
begin

HAnimJoint36.Center := Vector3(0,1,0);
HAnimJoint37 := THAnimJointNode.Create;
HAnimJoint37.Center := Vector3(0,1,0);
HAnimJoint38 := THAnimJointNode.Create;
HAnimJoint38.Center := Vector3(0,1,0);
HAnimJoint39 := THAnimJointNode.Create;
HAnimJoint39.Center := Vector3(0,1,0);
HAnimJoint40 := THAnimJointNode.Create;
HAnimJoint40.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint39.FdChildren.Add(HAnimJoint40);
{ METHOD .FdChildren.Add }
HAnimJoint38.FdChildren.Add(HAnimJoint39);
{ METHOD .FdChildren.Add }
HAnimJoint37.FdChildren.Add(HAnimJoint38);
{ METHOD .FdChildren.Add }
HAnimJoint36.FdChildren.Add(HAnimJoint37);
HAnimJoint41 := THAnimJointNode.Create;
HAnimJoint41.Center := Vector3(0,1,0);
HAnimJoint42 := THAnimJointNode.Create;
HAnimJoint42.Center := Vector3(0,1,0);
HAnimJoint43 := THAnimJointNode.Create;
HAnimJoint43.Center := Vector3(0,1,0);
HAnimJoint44 := THAnimJointNode.Create;
HAnimJoint44.Center := Vector3(0,1,0);
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint44.FdChildren.Add(HAnimJoint45);
{ METHOD .FdChildren.Add }
HAnimJoint43.FdChildren.Add(HAnimJoint44);
{ METHOD .FdChildren.Add }
HAnimJoint42.FdChildren.Add(HAnimJoint43);
{ METHOD .FdChildren.Add }
HAnimJoint41.FdChildren.Add(HAnimJoint42);
{ METHOD .FdChildren.Add }
HAnimJoint36.FdChildren.Add(HAnimJoint41);
HAnimJoint46 := THAnimJointNode.Create;
HAnimJoint46.Center := Vector3(0,1,0);
HAnimJoint47 := THAnimJointNode.Create;
HAnimJoint47.Center := Vector3(0,1,0);
HAnimJoint48 := THAnimJointNode.Create;
HAnimJoint48.Center := Vector3(0,1,0);
HAnimJoint49 := THAnimJointNode.Create;
HAnimJoint49.Center := Vector3(0,1,0);
HAnimJoint50 := THAnimJointNode.Create;
HAnimJoint50.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint49.FdChildren.Add(HAnimJoint50);
{ METHOD .FdChildren.Add }
HAnimJoint48.FdChildren.Add(HAnimJoint49);
end;

procedure InitJohnJointPart3;
begin

{ METHOD .FdChildren.Add }
HAnimJoint47.FdChildren.Add(HAnimJoint48);
{ METHOD .FdChildren.Add }
HAnimJoint46.FdChildren.Add(HAnimJoint47);
{ METHOD .FdChildren.Add }
HAnimJoint36.FdChildren.Add(HAnimJoint46);
{ METHOD .FdChildren.Add }
HAnimJoint35.FdChildren.Add(HAnimJoint36);
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.Center := Vector3(0,1,0);
HAnimJoint52 := THAnimJointNode.Create;
HAnimJoint52.Center := Vector3(0,1,0);
HAnimJoint53 := THAnimJointNode.Create;
HAnimJoint53.Center := Vector3(0,1,0);
HAnimJoint54 := THAnimJointNode.Create;
HAnimJoint54.Center := Vector3(0,1,0);
HAnimJoint55 := THAnimJointNode.Create;
HAnimJoint55.Center := Vector3(0,1,0);
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint55.FdChildren.Add(HAnimJoint56);
{ METHOD .FdChildren.Add }
HAnimJoint54.FdChildren.Add(HAnimJoint55);
{ METHOD .FdChildren.Add }
HAnimJoint53.FdChildren.Add(HAnimJoint54);
{ METHOD .FdChildren.Add }
HAnimJoint52.FdChildren.Add(HAnimJoint53);
HAnimJoint57 := THAnimJointNode.Create;
HAnimJoint57.Center := Vector3(0,1,0);
HAnimJoint58 := THAnimJointNode.Create;
HAnimJoint58.Center := Vector3(0,1,0);
HAnimJoint59 := THAnimJointNode.Create;
HAnimJoint59.Center := Vector3(0,1,0);
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint59.FdChildren.Add(HAnimJoint60);
{ METHOD .FdChildren.Add }
HAnimJoint58.FdChildren.Add(HAnimJoint59);
{ METHOD .FdChildren.Add }
HAnimJoint57.FdChildren.Add(HAnimJoint58);
{ METHOD .FdChildren.Add }
HAnimJoint52.FdChildren.Add(HAnimJoint57);
{ METHOD .FdChildren.Add }
HAnimJoint51.FdChildren.Add(HAnimJoint52);
{ METHOD .FdChildren.Add }
HAnimJoint35.FdChildren.Add(HAnimJoint51);
{ METHOD .FdChildren.Add }
HAnimJoint34.FdChildren.Add(HAnimJoint35);
{ METHOD .FdChildren.Add }
HAnimJoint33.FdChildren.Add(HAnimJoint34);
{ METHOD .FdChildren.Add }
HAnimJoint32.FdChildren.Add(HAnimJoint33);
HAnimJoint61 := THAnimJointNode.Create;
HAnimJoint61.Center := Vector3(-0.095,0.9171,0.0029);
HAnimJoint62 := THAnimJointNode.Create;
end;

procedure InitJohnJointPart4;
begin

HAnimJoint62.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimJoint63 := THAnimJointNode.Create;
HAnimJoint63.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimJoint64 := THAnimJointNode.Create;
HAnimJoint64.Center := Vector3(0,1,0);
HAnimJoint65 := THAnimJointNode.Create;
HAnimJoint65.Center := Vector3(0,1,0);
HAnimJoint66 := THAnimJointNode.Create;
HAnimJoint66.Center := Vector3(0,1,0);
HAnimJoint67 := THAnimJointNode.Create;
HAnimJoint67.Center := Vector3(0,1,0);
HAnimJoint68 := THAnimJointNode.Create;
HAnimJoint68.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint67.FdChildren.Add(HAnimJoint68);
{ METHOD .FdChildren.Add }
HAnimJoint66.FdChildren.Add(HAnimJoint67);
{ METHOD .FdChildren.Add }
HAnimJoint65.FdChildren.Add(HAnimJoint66);
{ METHOD .FdChildren.Add }
HAnimJoint64.FdChildren.Add(HAnimJoint65);
HAnimJoint69 := THAnimJointNode.Create;
HAnimJoint69.Center := Vector3(0,1,0);
HAnimJoint70 := THAnimJointNode.Create;
HAnimJoint70.Center := Vector3(0,1,0);
HAnimJoint71 := THAnimJointNode.Create;
HAnimJoint71.Center := Vector3(0,1,0);
HAnimJoint72 := THAnimJointNode.Create;
HAnimJoint72.Center := Vector3(0,1,0);
HAnimJoint73 := THAnimJointNode.Create;
HAnimJoint73.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint72.FdChildren.Add(HAnimJoint73);
{ METHOD .FdChildren.Add }
HAnimJoint71.FdChildren.Add(HAnimJoint72);
{ METHOD .FdChildren.Add }
HAnimJoint70.FdChildren.Add(HAnimJoint71);
{ METHOD .FdChildren.Add }
HAnimJoint69.FdChildren.Add(HAnimJoint70);
{ METHOD .FdChildren.Add }
HAnimJoint64.FdChildren.Add(HAnimJoint69);
HAnimJoint74 := THAnimJointNode.Create;
HAnimJoint74.Center := Vector3(0,1,0);
HAnimJoint75 := THAnimJointNode.Create;
HAnimJoint75.Center := Vector3(0,1,0);
HAnimJoint76 := THAnimJointNode.Create;
HAnimJoint76.Center := Vector3(0,1,0);
HAnimJoint77 := THAnimJointNode.Create;
HAnimJoint77.Center := Vector3(0,1,0);
end;

procedure InitJohnJointPart5;
begin

HAnimJoint78 := THAnimJointNode.Create;
HAnimJoint78.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint77.FdChildren.Add(HAnimJoint78);
{ METHOD .FdChildren.Add }
HAnimJoint76.FdChildren.Add(HAnimJoint77);
{ METHOD .FdChildren.Add }
HAnimJoint75.FdChildren.Add(HAnimJoint76);
{ METHOD .FdChildren.Add }
HAnimJoint74.FdChildren.Add(HAnimJoint75);
{ METHOD .FdChildren.Add }
HAnimJoint64.FdChildren.Add(HAnimJoint74);
{ METHOD .FdChildren.Add }
HAnimJoint63.FdChildren.Add(HAnimJoint64);
HAnimJoint79 := THAnimJointNode.Create;
HAnimJoint79.Center := Vector3(0,1,0);
HAnimJoint80 := THAnimJointNode.Create;
HAnimJoint80.Center := Vector3(0,1,0);
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.Center := Vector3(0,1,0);
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.Center := Vector3(0,1,0);
HAnimJoint83 := THAnimJointNode.Create;
HAnimJoint83.Center := Vector3(0,1,0);
HAnimJoint84 := THAnimJointNode.Create;
HAnimJoint84.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint83.FdChildren.Add(HAnimJoint84);
{ METHOD .FdChildren.Add }
HAnimJoint82.FdChildren.Add(HAnimJoint83);
{ METHOD .FdChildren.Add }
HAnimJoint81.FdChildren.Add(HAnimJoint82);
{ METHOD .FdChildren.Add }
HAnimJoint80.FdChildren.Add(HAnimJoint81);
HAnimJoint85 := THAnimJointNode.Create;
HAnimJoint85.Center := Vector3(0,1,0);
HAnimJoint86 := THAnimJointNode.Create;
HAnimJoint86.Center := Vector3(0,1,0);
HAnimJoint87 := THAnimJointNode.Create;
HAnimJoint87.Center := Vector3(0,1,0);
HAnimJoint88 := THAnimJointNode.Create;
HAnimJoint88.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint87.FdChildren.Add(HAnimJoint88);
{ METHOD .FdChildren.Add }
HAnimJoint86.FdChildren.Add(HAnimJoint87);
{ METHOD .FdChildren.Add }
HAnimJoint85.FdChildren.Add(HAnimJoint86);
{ METHOD .FdChildren.Add }
HAnimJoint80.FdChildren.Add(HAnimJoint85);
{ METHOD .FdChildren.Add }
HAnimJoint79.FdChildren.Add(HAnimJoint80);
{ METHOD .FdChildren.Add }
HAnimJoint63.FdChildren.Add(HAnimJoint79);
{ METHOD .FdChildren.Add }
HAnimJoint62.FdChildren.Add(HAnimJoint63);
{ METHOD .FdChildren.Add }
HAnimJoint61.FdChildren.Add(HAnimJoint62);
end;

procedure InitJohnJointPart6;
begin

{ METHOD .FdChildren.Add }
HAnimJoint32.FdChildren.Add(HAnimJoint61);
{ METHOD .FdChildren.Add }
HAnimJoint31.FdChildren.Add(HAnimJoint32);
HAnimJoint89 := THAnimJointNode.Create;
HAnimJoint89.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimJoint90 := THAnimJointNode.Create;
HAnimJoint90.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimJoint92 := THAnimJointNode.Create;
HAnimJoint92.Center := Vector3(0.0045,1.1546,-0.08);
HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimJoint94 := THAnimJointNode.Create;
HAnimJoint94.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimJoint95 := THAnimJointNode.Create;
HAnimJoint95.Center := Vector3(0.0053,1.2679,-0.081);
HAnimJoint96 := THAnimJointNode.Create;
HAnimJoint96.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimJoint97 := THAnimJointNode.Create;
HAnimJoint97.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimJoint98 := THAnimJointNode.Create;
HAnimJoint98.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimJoint99 := THAnimJointNode.Create;
HAnimJoint99.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimJoint100 := THAnimJointNode.Create;
HAnimJoint100.Center := Vector3(0.0059,1.3866,-0.08);
HAnimJoint101 := THAnimJointNode.Create;
HAnimJoint101.Center := Vector3(0.006,1.4102,-0.0745);
HAnimJoint102 := THAnimJointNode.Create;
HAnimJoint102.Center := Vector3(0.0061,1.432,-0.0675);
HAnimJoint103 := THAnimJointNode.Create;
HAnimJoint103.Center := Vector3(0.0062,1.4583,-0.057);
HAnimJoint104 := THAnimJointNode.Create;
HAnimJoint104.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimJoint105 := THAnimJointNode.Create;
HAnimJoint105.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimJoint107 := THAnimJointNode.Create;
HAnimJoint107.Center := Vector3(0.0066,1.5357,-0.0143);
end;

procedure InitJohnJointPart7;
begin

HAnimJoint108 := THAnimJointNode.Create;
HAnimJoint108.Center := Vector3(0.0066,1.552,-0.0082);
HAnimJoint109 := THAnimJointNode.Create;
HAnimJoint109.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimJoint110 := THAnimJointNode.Create;
HAnimJoint110.Center := Vector3(0.0066,1.58,-0.0103);
HAnimJoint111 := THAnimJointNode.Create;
HAnimJoint111.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimJoint112 := THAnimJointNode.Create;
HAnimJoint112.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimJoint113 := THAnimJointNode.Create;
HAnimJoint113.Center := Vector3(0.0044,1.6209,0.0236);
HAnimJoint114 := THAnimJointNode.Create;
HAnimJoint114.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint113.FdChildren.Add(HAnimJoint114);
HAnimJoint115 := THAnimJointNode.Create;
HAnimJoint115.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint113.FdChildren.Add(HAnimJoint115);
HAnimJoint116 := THAnimJointNode.Create;
HAnimJoint116.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint113.FdChildren.Add(HAnimJoint116);
HAnimJoint117 := THAnimJointNode.Create;
HAnimJoint117.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint113.FdChildren.Add(HAnimJoint117);
HAnimJoint118 := THAnimJointNode.Create;
HAnimJoint118.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint113.FdChildren.Add(HAnimJoint118);
HAnimJoint119 := THAnimJointNode.Create;
HAnimJoint119.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint113.FdChildren.Add(HAnimJoint119);
HAnimJoint120 := THAnimJointNode.Create;
HAnimJoint120.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint113.FdChildren.Add(HAnimJoint120);
{ METHOD .FdChildren.Add }
HAnimJoint112.FdChildren.Add(HAnimJoint113);
{ METHOD .FdChildren.Add }
HAnimJoint111.FdChildren.Add(HAnimJoint112);
{ METHOD .FdChildren.Add }
HAnimJoint110.FdChildren.Add(HAnimJoint111);
{ METHOD .FdChildren.Add }
HAnimJoint109.FdChildren.Add(HAnimJoint110);
{ METHOD .FdChildren.Add }
HAnimJoint108.FdChildren.Add(HAnimJoint109);
{ METHOD .FdChildren.Add }
HAnimJoint107.FdChildren.Add(HAnimJoint108);
{ METHOD .FdChildren.Add }
HAnimJoint106.FdChildren.Add(HAnimJoint107);
end;

procedure InitJohnJointPart8;
begin

{ METHOD .FdChildren.Add }
HAnimJoint105.FdChildren.Add(HAnimJoint106);
HAnimJoint121 := THAnimJointNode.Create;
HAnimJoint121.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimJoint124 := THAnimJointNode.Create;
HAnimJoint124.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimJoint125 := THAnimJointNode.Create;
HAnimJoint125.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimJoint126 := THAnimJointNode.Create;
HAnimJoint126.Center := Vector3(0,1,0);
HAnimJoint127 := THAnimJointNode.Create;
HAnimJoint127.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint128 := THAnimJointNode.Create;
HAnimJoint128.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint129 := THAnimJointNode.Create;
HAnimJoint129.Center := Vector3(0.1955,0.8159,0.0464);
{ METHOD .FdChildren.Add }
HAnimJoint128.FdChildren.Add(HAnimJoint129);
{ METHOD .FdChildren.Add }
HAnimJoint127.FdChildren.Add(HAnimJoint128);
{ METHOD .FdChildren.Add }
HAnimJoint126.FdChildren.Add(HAnimJoint127);
{ METHOD .FdChildren.Add }
HAnimJoint125.FdChildren.Add(HAnimJoint126);
HAnimJoint130 := THAnimJointNode.Create;
HAnimJoint130.Center := Vector3(0,1,0);
HAnimJoint131 := THAnimJointNode.Create;
HAnimJoint131.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint132 := THAnimJointNode.Create;
HAnimJoint132.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint133 := THAnimJointNode.Create;
HAnimJoint133.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint134 := THAnimJointNode.Create;
HAnimJoint134.Center := Vector3(0.2028,0.7139,-0.0236);
{ METHOD .FdChildren.Add }
HAnimJoint133.FdChildren.Add(HAnimJoint134);
{ METHOD .FdChildren.Add }
HAnimJoint132.FdChildren.Add(HAnimJoint133);
{ METHOD .FdChildren.Add }
HAnimJoint131.FdChildren.Add(HAnimJoint132);
{ METHOD .FdChildren.Add }
HAnimJoint130.FdChildren.Add(HAnimJoint131);
{ METHOD .FdChildren.Add }
HAnimJoint125.FdChildren.Add(HAnimJoint130);
HAnimJoint135 := THAnimJointNode.Create;
HAnimJoint135.Center := Vector3(0,1,0);
end;

procedure InitJohnJointPart9;
begin

HAnimJoint136 := THAnimJointNode.Create;
HAnimJoint136.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint137 := THAnimJointNode.Create;
HAnimJoint137.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint138 := THAnimJointNode.Create;
HAnimJoint138.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint139 := THAnimJointNode.Create;
HAnimJoint139.Center := Vector3(0.2026,0.7011,-0.0494);
{ METHOD .FdChildren.Add }
HAnimJoint138.FdChildren.Add(HAnimJoint139);
{ METHOD .FdChildren.Add }
HAnimJoint137.FdChildren.Add(HAnimJoint138);
{ METHOD .FdChildren.Add }
HAnimJoint136.FdChildren.Add(HAnimJoint137);
{ METHOD .FdChildren.Add }
HAnimJoint135.FdChildren.Add(HAnimJoint136);
{ METHOD .FdChildren.Add }
HAnimJoint125.FdChildren.Add(HAnimJoint135);
HAnimJoint140 := THAnimJointNode.Create;
HAnimJoint140.Center := Vector3(0,1,0);
HAnimJoint141 := THAnimJointNode.Create;
HAnimJoint141.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint142 := THAnimJointNode.Create;
HAnimJoint142.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint143 := THAnimJointNode.Create;
HAnimJoint143.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint144 := THAnimJointNode.Create;
HAnimJoint144.Center := Vector3(0.1983,0.7045,-0.0767);
{ METHOD .FdChildren.Add }
HAnimJoint143.FdChildren.Add(HAnimJoint144);
{ METHOD .FdChildren.Add }
HAnimJoint142.FdChildren.Add(HAnimJoint143);
{ METHOD .FdChildren.Add }
HAnimJoint141.FdChildren.Add(HAnimJoint142);
{ METHOD .FdChildren.Add }
HAnimJoint140.FdChildren.Add(HAnimJoint141);
HAnimJoint145 := THAnimJointNode.Create;
HAnimJoint145.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint146 := THAnimJointNode.Create;
HAnimJoint146.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint147 := THAnimJointNode.Create;
HAnimJoint147.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint148 := THAnimJointNode.Create;
HAnimJoint148.Center := Vector3(0.1948,0.7277,-0.1017);
{ METHOD .FdChildren.Add }
HAnimJoint147.FdChildren.Add(HAnimJoint148);
{ METHOD .FdChildren.Add }
HAnimJoint146.FdChildren.Add(HAnimJoint147);
{ METHOD .FdChildren.Add }
HAnimJoint145.FdChildren.Add(HAnimJoint146);
{ METHOD .FdChildren.Add }
HAnimJoint140.FdChildren.Add(HAnimJoint145);
{ METHOD .FdChildren.Add }
HAnimJoint125.FdChildren.Add(HAnimJoint140);
end;

procedure InitJohnJointPart10;
begin

{ METHOD .FdChildren.Add }
HAnimJoint124.FdChildren.Add(HAnimJoint125);
{ METHOD .FdChildren.Add }
HAnimJoint123.FdChildren.Add(HAnimJoint124);
{ METHOD .FdChildren.Add }
HAnimJoint122.FdChildren.Add(HAnimJoint123);
{ METHOD .FdChildren.Add }
HAnimJoint121.FdChildren.Add(HAnimJoint122);
{ METHOD .FdChildren.Add }
HAnimJoint105.FdChildren.Add(HAnimJoint121);
HAnimJoint149 := THAnimJointNode.Create;
HAnimJoint149.Center := Vector3(-0.0694,1.46,-0.033);
HAnimJoint150 := THAnimJointNode.Create;
HAnimJoint150.Center := Vector3(-0.0836,1.4281,-0.0401);
HAnimJoint151 := THAnimJointNode.Create;
HAnimJoint151.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimJoint152 := THAnimJointNode.Create;
HAnimJoint152.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimJoint153 := THAnimJointNode.Create;
HAnimJoint153.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimJoint154 := THAnimJointNode.Create;
HAnimJoint154.Center := Vector3(0,1,0);
HAnimJoint155 := THAnimJointNode.Create;
HAnimJoint155.Center := Vector3(-0.1899,0.8502,-0.0473);
HAnimJoint156 := THAnimJointNode.Create;
HAnimJoint156.Center := Vector3(-0.1874,0.8256,0.0306);
HAnimJoint157 := THAnimJointNode.Create;
HAnimJoint157.Center := Vector3(-0.1864,0.819,0.0506);
{ METHOD .FdChildren.Add }
HAnimJoint156.FdChildren.Add(HAnimJoint157);
{ METHOD .FdChildren.Add }
HAnimJoint155.FdChildren.Add(HAnimJoint156);
{ METHOD .FdChildren.Add }
HAnimJoint154.FdChildren.Add(HAnimJoint155);
{ METHOD .FdChildren.Add }
HAnimJoint153.FdChildren.Add(HAnimJoint154);
HAnimJoint158 := THAnimJointNode.Create;
HAnimJoint158.Center := Vector3(0,1,0);
HAnimJoint159 := THAnimJointNode.Create;
HAnimJoint159.Center := Vector3(-0.1961,0.8055,-0.0218);
HAnimJoint160 := THAnimJointNode.Create;
HAnimJoint160.Center := Vector3(-0.1961,0.7846,-0.0218);
HAnimJoint161 := THAnimJointNode.Create;
HAnimJoint161.Center := Vector3(-0.1954,0.7393,-0.0185);
HAnimJoint162 := THAnimJointNode.Create;
HAnimJoint162.Center := Vector3(-0.1945,0.7169,-0.0173);
{ METHOD .FdChildren.Add }
HAnimJoint161.FdChildren.Add(HAnimJoint162);
{ METHOD .FdChildren.Add }
HAnimJoint160.FdChildren.Add(HAnimJoint161);
{ METHOD .FdChildren.Add }
HAnimJoint159.FdChildren.Add(HAnimJoint160);
end;

procedure InitJohnJointPart11;
begin

{ METHOD .FdChildren.Add }
HAnimJoint158.FdChildren.Add(HAnimJoint159);
{ METHOD .FdChildren.Add }
HAnimJoint153.FdChildren.Add(HAnimJoint158);
HAnimJoint163 := THAnimJointNode.Create;
HAnimJoint163.Center := Vector3(0,1,0);
HAnimJoint164 := THAnimJointNode.Create;
HAnimJoint164.Center := Vector3(-0.1972,0.806,-0.0468);
HAnimJoint165 := THAnimJointNode.Create;
HAnimJoint165.Center := Vector3(-0.1972,0.7849,-0.0468);
HAnimJoint166 := THAnimJointNode.Create;
HAnimJoint166.Center := Vector3(-0.195,0.7304,-0.0441);
HAnimJoint167 := THAnimJointNode.Create;
HAnimJoint167.Center := Vector3(-0.1939,0.7042,-0.0432);
{ METHOD .FdChildren.Add }
HAnimJoint166.FdChildren.Add(HAnimJoint167);
{ METHOD .FdChildren.Add }
HAnimJoint165.FdChildren.Add(HAnimJoint166);
{ METHOD .FdChildren.Add }
HAnimJoint164.FdChildren.Add(HAnimJoint165);
{ METHOD .FdChildren.Add }
HAnimJoint163.FdChildren.Add(HAnimJoint164);
{ METHOD .FdChildren.Add }
HAnimJoint153.FdChildren.Add(HAnimJoint163);
HAnimJoint168 := THAnimJointNode.Create;
HAnimJoint168.Center := Vector3(0,1,0);
HAnimJoint169 := THAnimJointNode.Create;
HAnimJoint169.Center := Vector3(-0.1951,0.8049,-0.0732);
HAnimJoint170 := THAnimJointNode.Create;
HAnimJoint170.Center := Vector3(-0.1951,0.7845,-0.0732);
HAnimJoint171 := THAnimJointNode.Create;
HAnimJoint171.Center := Vector3(-0.192,0.7318,-0.0716);
HAnimJoint172 := THAnimJointNode.Create;
HAnimJoint172.Center := Vector3(-0.1908,0.7077,-0.0706);
{ METHOD .FdChildren.Add }
HAnimJoint171.FdChildren.Add(HAnimJoint172);
{ METHOD .FdChildren.Add }
HAnimJoint170.FdChildren.Add(HAnimJoint171);
{ METHOD .FdChildren.Add }
HAnimJoint169.FdChildren.Add(HAnimJoint170);
{ METHOD .FdChildren.Add }
HAnimJoint168.FdChildren.Add(HAnimJoint169);
HAnimJoint173 := THAnimJointNode.Create;
HAnimJoint173.Center := Vector3(-0.1926,0.8096,-0.0975);
HAnimJoint174 := THAnimJointNode.Create;
HAnimJoint174.Center := Vector3(-0.1926,0.7896,-0.0975);
HAnimJoint175 := THAnimJointNode.Create;
HAnimJoint175.Center := Vector3(-0.1902,0.7483,-0.0963);
HAnimJoint176 := THAnimJointNode.Create;
HAnimJoint176.Center := Vector3(-0.1908,0.754,-0.096);
{ METHOD .FdChildren.Add }
HAnimJoint175.FdChildren.Add(HAnimJoint176);
end;

procedure InitJohnJointPart12;
begin

{ METHOD .FdChildren.Add }
HAnimJoint174.FdChildren.Add(HAnimJoint175);
{ METHOD .FdChildren.Add }
HAnimJoint173.FdChildren.Add(HAnimJoint174);
{ METHOD .FdChildren.Add }
HAnimJoint168.FdChildren.Add(HAnimJoint173);
{ METHOD .FdChildren.Add }
HAnimJoint153.FdChildren.Add(HAnimJoint168);
{ METHOD .FdChildren.Add }
HAnimJoint152.FdChildren.Add(HAnimJoint153);
{ METHOD .FdChildren.Add }
HAnimJoint151.FdChildren.Add(HAnimJoint152);
{ METHOD .FdChildren.Add }
HAnimJoint150.FdChildren.Add(HAnimJoint151);
{ METHOD .FdChildren.Add }
HAnimJoint149.FdChildren.Add(HAnimJoint150);
{ METHOD .FdChildren.Add }
HAnimJoint105.FdChildren.Add(HAnimJoint149);
{ METHOD .FdChildren.Add }
HAnimJoint104.FdChildren.Add(HAnimJoint105);
{ METHOD .FdChildren.Add }
HAnimJoint103.FdChildren.Add(HAnimJoint104);
{ METHOD .FdChildren.Add }
HAnimJoint102.FdChildren.Add(HAnimJoint103);
{ METHOD .FdChildren.Add }
HAnimJoint101.FdChildren.Add(HAnimJoint102);
{ METHOD .FdChildren.Add }
HAnimJoint100.FdChildren.Add(HAnimJoint101);
{ METHOD .FdChildren.Add }
HAnimJoint99.FdChildren.Add(HAnimJoint100);
{ METHOD .FdChildren.Add }
HAnimJoint98.FdChildren.Add(HAnimJoint99);
{ METHOD .FdChildren.Add }
HAnimJoint97.FdChildren.Add(HAnimJoint98);
{ METHOD .FdChildren.Add }
HAnimJoint96.FdChildren.Add(HAnimJoint97);
{ METHOD .FdChildren.Add }
HAnimJoint95.FdChildren.Add(HAnimJoint96);
{ METHOD .FdChildren.Add }
HAnimJoint94.FdChildren.Add(HAnimJoint95);
{ METHOD .FdChildren.Add }
HAnimJoint93.FdChildren.Add(HAnimJoint94);
{ METHOD .FdChildren.Add }
HAnimJoint92.FdChildren.Add(HAnimJoint93);
{ METHOD .FdChildren.Add }
HAnimJoint91.FdChildren.Add(HAnimJoint92);
{ METHOD .FdChildren.Add }
HAnimJoint90.FdChildren.Add(HAnimJoint91);
{ METHOD .FdChildren.Add }
HAnimJoint89.FdChildren.Add(HAnimJoint90);
{ METHOD .FdChildren.Add }
HAnimJoint31.FdChildren.Add(HAnimJoint89);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid30.FdSkeleton.Add(HAnimJoint31);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint31);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint32);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint33);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint34);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint35);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint36);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint37);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint38);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint39);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint40);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint41);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint42);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint43);
end;

procedure InitJohnJointPart13;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint44);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint45);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint46);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint47);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint48);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint49);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint50);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint51);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint52);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint53);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint54);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint55);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint56);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint57);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint58);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint59);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint60);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint61);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint62);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint63);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint64);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint65);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint66);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint67);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint68);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint69);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint70);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint71);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint72);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint73);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint74);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint75);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint76);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint77);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint78);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint79);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint80);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint81);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint82);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint83);
end;

procedure InitJohnJointPart14;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint84);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint85);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint86);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint87);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint88);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint89);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint90);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint91);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint92);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint93);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint94);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint95);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint96);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint97);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint98);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint99);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint100);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint101);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint102);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint103);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint104);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint105);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint106);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint107);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint108);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint109);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint110);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint111);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint112);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint113);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint114);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint115);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint116);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint117);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint118);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint119);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint120);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint121);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint122);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint123);
end;

procedure InitJohnJointPart15;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint124);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint125);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint126);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint127);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint128);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint129);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint130);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint131);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint132);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint133);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint134);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint135);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint136);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint137);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint138);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint139);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint140);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint141);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint142);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint143);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint144);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint145);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint146);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint147);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint148);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint149);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint150);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint151);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint152);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint153);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint154);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint155);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint156);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint157);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint158);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint159);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint160);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint161);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint162);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint163);
end;

procedure InitJohnJointPart16;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint164);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint165);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint166);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint167);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint168);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint169);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint170);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint171);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint172);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint173);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint174);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint175);
{ METHOD .FdJoints.Add }
HAnimHumanoid30.FdJoints.Add(HAnimJoint176);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(HAnimHumanoid30);
{ METHOD .AddGroup }
X3D0.AddChildren([Group10]);
end;

function CreateJohnJoint: TX3DRootNode;
begin
InitJohnJointPart0;
InitJohnJointPart1;
InitJohnJointPart2;
InitJohnJointPart3;
InitJohnJointPart4;
InitJohnJointPart5;
InitJohnJointPart6;
InitJohnJointPart7;
InitJohnJointPart8;
InitJohnJointPart9;
InitJohnJointPart10;
InitJohnJointPart11;
InitJohnJointPart12;
InitJohnJointPart13;
InitJohnJointPart14;
InitJohnJointPart15;
InitJohnJointPart16;
Result := X3D0;
end;

begin
end.
