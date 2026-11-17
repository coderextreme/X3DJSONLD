unit JohnJoint2;

interface

uses X3DNodes;

function CreateJohnJoint2: TX3DRootNode;

implementation

uses CastleVectors;

function CreateJohnJoint2: TX3DRootNode;
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
NavigationInfo29: TNavigationInfoNode;
Viewpoint30: TViewpointNode;
HAnimHumanoid31: THAnimHumanoidNode;
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
HAnimJoint323: THAnimJointNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'JohnJoint2.x3d';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d';
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
{ <Transform translation='0 2 0'> }
{ <Shape DEF='HAnimRootShape'> }
{ <Sphere radius='0.02' /> }
{ <Appearance> }
{ <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> }
{ </Appearance> }
{ </Shape> }
{ </Transform> }
Transform19 := TTransformNode.Create;
Transform19.Translation := Vector3(0,2.1,0);
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
Sphere21.Radius := 0.02;
{ .SetGeometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0,0,0.8);
Material23.Transparency := 0.3;
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
ColorRGBA27.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
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
{ .AddChildren }
Group17.AddChildren([Transform18]);
{ .AddChildren }
Group11.AddChildren([Group17]);
NavigationInfo29 := TNavigationInfoNode.Create;
NavigationInfo29.Speed := 1.5;
{ .AddChildren }
Group11.AddChildren([NavigationInfo29]);
Viewpoint30 := TViewpointNode.Create;
Viewpoint30.Description := 'default';
{ .AddChildren }
Group11.AddChildren([Viewpoint30]);
HAnimHumanoid31 := THAnimHumanoidNode.Create;
HAnimHumanoid31.NameField := 'HAnim';
HAnimHumanoid31.SetInfo(['humanoidVersion=2.0']);
HAnimHumanoid31.Version := '2.0';
HAnimJoint32 := THAnimJointNode.Create;
HAnimJoint32.NameField := 'humanoid_root';
HAnimJoint32.Center := Vector3(0,0.824,0.0277);
HAnimJoint33 := THAnimJointNode.Create;
HAnimJoint33.NameField := 'sacroiliac';
HAnimJoint33.Center := Vector3(0,0.9149,0.0016);
HAnimJoint34 := THAnimJointNode.Create;
HAnimJoint34.NameField := 'l_hip';
HAnimJoint34.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimJoint35 := THAnimJointNode.Create;
HAnimJoint35.NameField := 'l_knee';
HAnimJoint35.Center := Vector3(0.104,0.4867,0.0308);
HAnimJoint36 := THAnimJointNode.Create;
HAnimJoint36.NameField := 'l_talocrural';
HAnimJoint36.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimJoint37 := THAnimJointNode.Create;
HAnimJoint37.NameField := 'l_talocalcaneonavicular';
HAnimJoint37.Center := Vector3(0,1,0);
HAnimJoint38 := THAnimJointNode.Create;
HAnimJoint38.NameField := 'l_cuneonavicular_1';
HAnimJoint38.Center := Vector3(0,1,0);
HAnimJoint39 := THAnimJointNode.Create;
HAnimJoint39.NameField := 'l_tarsometatarsal_1';
HAnimJoint39.Center := Vector3(0,1,0);
HAnimJoint40 := THAnimJointNode.Create;
HAnimJoint40.NameField := 'l_metatarsophalangeal_1';
HAnimJoint40.Center := Vector3(0,1,0);
HAnimJoint41 := THAnimJointNode.Create;
HAnimJoint41.NameField := 'l_tarsal_interphalangeal_1';
HAnimJoint41.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint40.AddChildren([HAnimJoint41]);
{ .AddChildren }
HAnimJoint39.AddChildren([HAnimJoint40]);
{ .AddChildren }
HAnimJoint38.AddChildren([HAnimJoint39]);
{ .AddChildren }
HAnimJoint37.AddChildren([HAnimJoint38]);
HAnimJoint42 := THAnimJointNode.Create;
HAnimJoint42.NameField := 'l_cuneonavicular_2';
HAnimJoint42.Center := Vector3(0,1,0);
HAnimJoint43 := THAnimJointNode.Create;
HAnimJoint43.NameField := 'l_tarsometatarsal_2';
HAnimJoint43.Center := Vector3(0,1,0);
HAnimJoint44 := THAnimJointNode.Create;
HAnimJoint44.NameField := 'l_metatarsophalangeal_2';
HAnimJoint44.Center := Vector3(0,1,0);
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45.NameField := 'l_tarsal_proximal_interphalangeal_2';
HAnimJoint45.Center := Vector3(0,1,0);
HAnimJoint46 := THAnimJointNode.Create;
HAnimJoint46.NameField := 'l_tarsal_distal_interphalangeal_2';
HAnimJoint46.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint45.AddChildren([HAnimJoint46]);
{ .AddChildren }
HAnimJoint44.AddChildren([HAnimJoint45]);
{ .AddChildren }
HAnimJoint43.AddChildren([HAnimJoint44]);
{ .AddChildren }
HAnimJoint42.AddChildren([HAnimJoint43]);
{ .AddChildren }
HAnimJoint37.AddChildren([HAnimJoint42]);
HAnimJoint47 := THAnimJointNode.Create;
HAnimJoint47.NameField := 'l_cuneonavicular_3';
HAnimJoint47.Center := Vector3(0,1,0);
HAnimJoint48 := THAnimJointNode.Create;
HAnimJoint48.NameField := 'l_tarsometatarsal_3';
HAnimJoint48.Center := Vector3(0,1,0);
HAnimJoint49 := THAnimJointNode.Create;
HAnimJoint49.NameField := 'l_metatarsophalangeal_3';
HAnimJoint49.Center := Vector3(0,1,0);
HAnimJoint50 := THAnimJointNode.Create;
HAnimJoint50.NameField := 'l_tarsal_proximal_interphalangeal_3';
HAnimJoint50.Center := Vector3(0,1,0);
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.NameField := 'l_tarsal_distal_interphalangeal_3';
HAnimJoint51.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint50.AddChildren([HAnimJoint51]);
{ .AddChildren }
HAnimJoint49.AddChildren([HAnimJoint50]);
{ .AddChildren }
HAnimJoint48.AddChildren([HAnimJoint49]);
{ .AddChildren }
HAnimJoint47.AddChildren([HAnimJoint48]);
{ .AddChildren }
HAnimJoint37.AddChildren([HAnimJoint47]);
{ .AddChildren }
HAnimJoint36.AddChildren([HAnimJoint37]);
HAnimJoint52 := THAnimJointNode.Create;
HAnimJoint52.NameField := 'l_calcaneocuboid';
HAnimJoint52.Center := Vector3(0,1,0);
HAnimJoint53 := THAnimJointNode.Create;
HAnimJoint53.NameField := 'l_transversetarsal';
HAnimJoint53.Center := Vector3(0,1,0);
HAnimJoint54 := THAnimJointNode.Create;
HAnimJoint54.NameField := 'l_tarsometatarsal_4';
HAnimJoint54.Center := Vector3(0,1,0);
HAnimJoint55 := THAnimJointNode.Create;
HAnimJoint55.NameField := 'l_metatarsophalangeal_4';
HAnimJoint55.Center := Vector3(0,1,0);
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.NameField := 'l_tarsal_proximal_interphalangeal_4';
HAnimJoint56.Center := Vector3(0,1,0);
HAnimJoint57 := THAnimJointNode.Create;
HAnimJoint57.NameField := 'l_tarsal_distal_interphalangeal_4';
HAnimJoint57.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint56.AddChildren([HAnimJoint57]);
{ .AddChildren }
HAnimJoint55.AddChildren([HAnimJoint56]);
{ .AddChildren }
HAnimJoint54.AddChildren([HAnimJoint55]);
{ .AddChildren }
HAnimJoint53.AddChildren([HAnimJoint54]);
HAnimJoint58 := THAnimJointNode.Create;
HAnimJoint58.NameField := 'l_tarsometatarsal_5';
HAnimJoint58.Center := Vector3(0,1,0);
HAnimJoint59 := THAnimJointNode.Create;
HAnimJoint59.NameField := 'l_metatarsophalangeal_5';
HAnimJoint59.Center := Vector3(0,1,0);
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.NameField := 'l_tarsal_proximal_interphalangeal_5';
HAnimJoint60.Center := Vector3(0,1,0);
HAnimJoint61 := THAnimJointNode.Create;
HAnimJoint61.NameField := 'l_tarsal_distal_interphalangeal_5';
HAnimJoint61.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint60.AddChildren([HAnimJoint61]);
{ .AddChildren }
HAnimJoint59.AddChildren([HAnimJoint60]);
{ .AddChildren }
HAnimJoint58.AddChildren([HAnimJoint59]);
{ .AddChildren }
HAnimJoint53.AddChildren([HAnimJoint58]);
{ .AddChildren }
HAnimJoint52.AddChildren([HAnimJoint53]);
{ .AddChildren }
HAnimJoint36.AddChildren([HAnimJoint52]);
{ .AddChildren }
HAnimJoint35.AddChildren([HAnimJoint36]);
{ .AddChildren }
HAnimJoint34.AddChildren([HAnimJoint35]);
{ .AddChildren }
HAnimJoint33.AddChildren([HAnimJoint34]);
HAnimJoint62 := THAnimJointNode.Create;
HAnimJoint62.NameField := 'r_hip';
HAnimJoint62.Center := Vector3(-0.095,0.9171,0.0029);
HAnimJoint63 := THAnimJointNode.Create;
HAnimJoint63.NameField := 'r_knee';
HAnimJoint63.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimJoint64 := THAnimJointNode.Create;
HAnimJoint64.NameField := 'r_talocrural';
HAnimJoint64.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimJoint65 := THAnimJointNode.Create;
HAnimJoint65.NameField := 'r_talocalcaneonavicular';
HAnimJoint65.Center := Vector3(0,1,0);
HAnimJoint66 := THAnimJointNode.Create;
HAnimJoint66.NameField := 'r_cuneonavicular_1';
HAnimJoint66.Center := Vector3(0,1,0);
HAnimJoint67 := THAnimJointNode.Create;
HAnimJoint67.NameField := 'r_tarsometatarsal_1';
HAnimJoint67.Center := Vector3(0,1,0);
HAnimJoint68 := THAnimJointNode.Create;
HAnimJoint68.NameField := 'r_metatarsophalangeal_1';
HAnimJoint68.Center := Vector3(0,1,0);
HAnimJoint69 := THAnimJointNode.Create;
HAnimJoint69.NameField := 'r_tarsal_interphalangeal_1';
HAnimJoint69.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint68.AddChildren([HAnimJoint69]);
{ .AddChildren }
HAnimJoint67.AddChildren([HAnimJoint68]);
{ .AddChildren }
HAnimJoint66.AddChildren([HAnimJoint67]);
{ .AddChildren }
HAnimJoint65.AddChildren([HAnimJoint66]);
HAnimJoint70 := THAnimJointNode.Create;
HAnimJoint70.NameField := 'r_cuneonavicular_2';
HAnimJoint70.Center := Vector3(0,1,0);
HAnimJoint71 := THAnimJointNode.Create;
HAnimJoint71.NameField := 'r_tarsometatarsal_2';
HAnimJoint71.Center := Vector3(0,1,0);
HAnimJoint72 := THAnimJointNode.Create;
HAnimJoint72.NameField := 'r_metatarsophalangeal_2';
HAnimJoint72.Center := Vector3(0,1,0);
HAnimJoint73 := THAnimJointNode.Create;
HAnimJoint73.NameField := 'r_tarsal_proximal_interphalangeal_2';
HAnimJoint73.Center := Vector3(0,1,0);
HAnimJoint74 := THAnimJointNode.Create;
HAnimJoint74.NameField := 'r_tarsal_distal_interphalangeal_2';
HAnimJoint74.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint73.AddChildren([HAnimJoint74]);
{ .AddChildren }
HAnimJoint72.AddChildren([HAnimJoint73]);
{ .AddChildren }
HAnimJoint71.AddChildren([HAnimJoint72]);
{ .AddChildren }
HAnimJoint70.AddChildren([HAnimJoint71]);
{ .AddChildren }
HAnimJoint65.AddChildren([HAnimJoint70]);
HAnimJoint75 := THAnimJointNode.Create;
HAnimJoint75.NameField := 'r_cuneonavicular_3';
HAnimJoint75.Center := Vector3(0,1,0);
HAnimJoint76 := THAnimJointNode.Create;
HAnimJoint76.NameField := 'r_tarsometatarsal_3';
HAnimJoint76.Center := Vector3(0,1,0);
HAnimJoint77 := THAnimJointNode.Create;
HAnimJoint77.NameField := 'r_metatarsophalangeal_3';
HAnimJoint77.Center := Vector3(0,1,0);
HAnimJoint78 := THAnimJointNode.Create;
HAnimJoint78.NameField := 'r_tarsal_proximal_interphalangeal_3';
HAnimJoint78.Center := Vector3(0,1,0);
HAnimJoint79 := THAnimJointNode.Create;
HAnimJoint79.NameField := 'r_tarsal_distal_interphalangeal_3';
HAnimJoint79.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint78.AddChildren([HAnimJoint79]);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint78]);
{ .AddChildren }
HAnimJoint76.AddChildren([HAnimJoint77]);
{ .AddChildren }
HAnimJoint75.AddChildren([HAnimJoint76]);
{ .AddChildren }
HAnimJoint65.AddChildren([HAnimJoint75]);
{ .AddChildren }
HAnimJoint64.AddChildren([HAnimJoint65]);
HAnimJoint80 := THAnimJointNode.Create;
HAnimJoint80.NameField := 'r_calcaneocuboid';
HAnimJoint80.Center := Vector3(0,1,0);
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.NameField := 'r_transversetarsal';
HAnimJoint81.Center := Vector3(0,1,0);
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.NameField := 'r_tarsometatarsal_4';
HAnimJoint82.Center := Vector3(0,1,0);
HAnimJoint83 := THAnimJointNode.Create;
HAnimJoint83.NameField := 'r_metatarsophalangeal_4';
HAnimJoint83.Center := Vector3(0,1,0);
HAnimJoint84 := THAnimJointNode.Create;
HAnimJoint84.NameField := 'r_tarsal_proximal_interphalangeal_4';
HAnimJoint84.Center := Vector3(0,1,0);
HAnimJoint85 := THAnimJointNode.Create;
HAnimJoint85.NameField := 'r_tarsal_distal_interphalangeal_4';
HAnimJoint85.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint84.AddChildren([HAnimJoint85]);
{ .AddChildren }
HAnimJoint83.AddChildren([HAnimJoint84]);
{ .AddChildren }
HAnimJoint82.AddChildren([HAnimJoint83]);
{ .AddChildren }
HAnimJoint81.AddChildren([HAnimJoint82]);
HAnimJoint86 := THAnimJointNode.Create;
HAnimJoint86.NameField := 'r_tarsometatarsal_5';
HAnimJoint86.Center := Vector3(0,1,0);
HAnimJoint87 := THAnimJointNode.Create;
HAnimJoint87.NameField := 'r_metatarsophalangeal_5';
HAnimJoint87.Center := Vector3(0,1,0);
HAnimJoint88 := THAnimJointNode.Create;
HAnimJoint88.NameField := 'r_tarsal_proximal_interphalangeal_5';
HAnimJoint88.Center := Vector3(0,1,0);
HAnimJoint89 := THAnimJointNode.Create;
HAnimJoint89.NameField := 'r_tarsal_distal_interphalangeal_5';
HAnimJoint89.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint88.AddChildren([HAnimJoint89]);
{ .AddChildren }
HAnimJoint87.AddChildren([HAnimJoint88]);
{ .AddChildren }
HAnimJoint86.AddChildren([HAnimJoint87]);
{ .AddChildren }
HAnimJoint81.AddChildren([HAnimJoint86]);
{ .AddChildren }
HAnimJoint80.AddChildren([HAnimJoint81]);
{ .AddChildren }
HAnimJoint64.AddChildren([HAnimJoint80]);
{ .AddChildren }
HAnimJoint63.AddChildren([HAnimJoint64]);
{ .AddChildren }
HAnimJoint62.AddChildren([HAnimJoint63]);
{ .AddChildren }
HAnimJoint33.AddChildren([HAnimJoint62]);
{ .AddChildren }
HAnimJoint32.AddChildren([HAnimJoint33]);
HAnimJoint90 := THAnimJointNode.Create;
HAnimJoint90.NameField := 'vl5';
HAnimJoint90.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.NameField := 'vl4';
HAnimJoint91.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimJoint92 := THAnimJointNode.Create;
HAnimJoint92.NameField := 'vl3';
HAnimJoint92.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.NameField := 'vl2';
HAnimJoint93.Center := Vector3(0.0045,1.1546,-0.08);
HAnimJoint94 := THAnimJointNode.Create;
HAnimJoint94.NameField := 'vl1';
HAnimJoint94.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimJoint95 := THAnimJointNode.Create;
HAnimJoint95.NameField := 'vt12';
HAnimJoint95.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimJoint96 := THAnimJointNode.Create;
HAnimJoint96.NameField := 'vt11';
HAnimJoint96.Center := Vector3(0.0053,1.2679,-0.081);
HAnimJoint97 := THAnimJointNode.Create;
HAnimJoint97.NameField := 'vt10';
HAnimJoint97.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimJoint98 := THAnimJointNode.Create;
HAnimJoint98.NameField := 'vt9';
HAnimJoint98.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimJoint99 := THAnimJointNode.Create;
HAnimJoint99.NameField := 'vt8';
HAnimJoint99.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimJoint100 := THAnimJointNode.Create;
HAnimJoint100.NameField := 'vt7';
HAnimJoint100.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimJoint101 := THAnimJointNode.Create;
HAnimJoint101.NameField := 'vt6';
HAnimJoint101.Center := Vector3(0.0059,1.3866,-0.08);
HAnimJoint102 := THAnimJointNode.Create;
HAnimJoint102.NameField := 'vt5';
HAnimJoint102.Center := Vector3(0.006,1.4102,-0.0745);
HAnimJoint103 := THAnimJointNode.Create;
HAnimJoint103.NameField := 'vt4';
HAnimJoint103.Center := Vector3(0.0061,1.432,-0.0675);
HAnimJoint104 := THAnimJointNode.Create;
HAnimJoint104.NameField := 'vt3';
HAnimJoint104.Center := Vector3(0.0062,1.4583,-0.057);
HAnimJoint105 := THAnimJointNode.Create;
HAnimJoint105.NameField := 'vt2';
HAnimJoint105.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.NameField := 'vt1';
HAnimJoint106.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimJoint107 := THAnimJointNode.Create;
HAnimJoint107.NameField := 'vc7';
HAnimJoint107.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimJoint108 := THAnimJointNode.Create;
HAnimJoint108.NameField := 'vc6';
HAnimJoint108.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimJoint109 := THAnimJointNode.Create;
HAnimJoint109.NameField := 'vc5';
HAnimJoint109.Center := Vector3(0.0066,1.552,-0.0082);
HAnimJoint110 := THAnimJointNode.Create;
HAnimJoint110.NameField := 'vc4';
HAnimJoint110.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimJoint111 := THAnimJointNode.Create;
HAnimJoint111.NameField := 'vc3';
HAnimJoint111.Center := Vector3(0.0066,1.58,-0.0103);
HAnimJoint112 := THAnimJointNode.Create;
HAnimJoint112.NameField := 'vc2';
HAnimJoint112.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimJoint113 := THAnimJointNode.Create;
HAnimJoint113.NameField := 'vc1';
HAnimJoint113.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimJoint114 := THAnimJointNode.Create;
HAnimJoint114.NameField := 'skullbase';
HAnimJoint114.Center := Vector3(0.0044,1.6209,0.0236);
HAnimJoint115 := THAnimJointNode.Create;
HAnimJoint115.NameField := 'l_eyelid_joint';
HAnimJoint115.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint115]);
HAnimJoint116 := THAnimJointNode.Create;
HAnimJoint116.NameField := 'r_eyelid_joint';
HAnimJoint116.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint116]);
HAnimJoint117 := THAnimJointNode.Create;
HAnimJoint117.NameField := 'l_eyeball_joint';
HAnimJoint117.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint117]);
HAnimJoint118 := THAnimJointNode.Create;
HAnimJoint118.NameField := 'r_eyeball_joint';
HAnimJoint118.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint118]);
HAnimJoint119 := THAnimJointNode.Create;
HAnimJoint119.NameField := 'l_eyebrow_joint';
HAnimJoint119.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint119]);
HAnimJoint120 := THAnimJointNode.Create;
HAnimJoint120.NameField := 'r_eyebrow_joint';
HAnimJoint120.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint120]);
HAnimJoint121 := THAnimJointNode.Create;
HAnimJoint121.NameField := 'temporomandibular';
HAnimJoint121.Center := Vector3(0,1,0);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint121]);
{ .AddChildren }
HAnimJoint113.AddChildren([HAnimJoint114]);
{ .AddChildren }
HAnimJoint112.AddChildren([HAnimJoint113]);
{ .AddChildren }
HAnimJoint111.AddChildren([HAnimJoint112]);
{ .AddChildren }
HAnimJoint110.AddChildren([HAnimJoint111]);
{ .AddChildren }
HAnimJoint109.AddChildren([HAnimJoint110]);
{ .AddChildren }
HAnimJoint108.AddChildren([HAnimJoint109]);
{ .AddChildren }
HAnimJoint107.AddChildren([HAnimJoint108]);
{ .AddChildren }
HAnimJoint106.AddChildren([HAnimJoint107]);
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122.NameField := 'l_sternoclavicular';
HAnimJoint122.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.NameField := 'l_acromioclavicular';
HAnimJoint123.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint124 := THAnimJointNode.Create;
HAnimJoint124.NameField := 'l_shoulder';
HAnimJoint124.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimJoint125 := THAnimJointNode.Create;
HAnimJoint125.NameField := 'l_elbow';
HAnimJoint125.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimJoint126 := THAnimJointNode.Create;
HAnimJoint126.NameField := 'l_radiocarpal';
HAnimJoint126.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimJoint127 := THAnimJointNode.Create;
HAnimJoint127.NameField := 'l_midcarpal_1';
HAnimJoint127.Center := Vector3(0,1,0);
HAnimJoint128 := THAnimJointNode.Create;
HAnimJoint128.NameField := 'l_carpometacarpal_1';
HAnimJoint128.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint129 := THAnimJointNode.Create;
HAnimJoint129.NameField := 'l_metacarpophalangeal_1';
HAnimJoint129.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint130 := THAnimJointNode.Create;
HAnimJoint130.NameField := 'l_carpal_interphalangeal_1';
HAnimJoint130.Center := Vector3(0.1955,0.8159,0.0464);
{ .AddChildren }
HAnimJoint129.AddChildren([HAnimJoint130]);
{ .AddChildren }
HAnimJoint128.AddChildren([HAnimJoint129]);
{ .AddChildren }
HAnimJoint127.AddChildren([HAnimJoint128]);
{ .AddChildren }
HAnimJoint126.AddChildren([HAnimJoint127]);
HAnimJoint131 := THAnimJointNode.Create;
HAnimJoint131.NameField := 'l_midcarpal_2';
HAnimJoint131.Center := Vector3(0,1,0);
HAnimJoint132 := THAnimJointNode.Create;
HAnimJoint132.NameField := 'l_carpometacarpal_2';
HAnimJoint132.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint133 := THAnimJointNode.Create;
HAnimJoint133.NameField := 'l_metacarpophalangeal_2';
HAnimJoint133.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint134 := THAnimJointNode.Create;
HAnimJoint134.NameField := 'l_carpal_proximal_interphalangeal_2';
HAnimJoint134.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint135 := THAnimJointNode.Create;
HAnimJoint135.NameField := 'l_carpal_distal_interphalangeal_2';
HAnimJoint135.Center := Vector3(0.2028,0.7139,-0.0236);
{ .AddChildren }
HAnimJoint134.AddChildren([HAnimJoint135]);
{ .AddChildren }
HAnimJoint133.AddChildren([HAnimJoint134]);
{ .AddChildren }
HAnimJoint132.AddChildren([HAnimJoint133]);
{ .AddChildren }
HAnimJoint131.AddChildren([HAnimJoint132]);
{ .AddChildren }
HAnimJoint126.AddChildren([HAnimJoint131]);
HAnimJoint136 := THAnimJointNode.Create;
HAnimJoint136.NameField := 'l_midcarpal_3';
HAnimJoint136.Center := Vector3(0,1,0);
HAnimJoint137 := THAnimJointNode.Create;
HAnimJoint137.NameField := 'l_carpometacarpal_3';
HAnimJoint137.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint138 := THAnimJointNode.Create;
HAnimJoint138.NameField := 'l_metacarpophalangeal_3';
HAnimJoint138.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint139 := THAnimJointNode.Create;
HAnimJoint139.NameField := 'l_carpal_proximal_interphalangeal_3';
HAnimJoint139.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint140 := THAnimJointNode.Create;
HAnimJoint140.NameField := 'l_carpal_distal_interphalangeal_3';
HAnimJoint140.Center := Vector3(0.2026,0.7011,-0.0494);
{ .AddChildren }
HAnimJoint139.AddChildren([HAnimJoint140]);
{ .AddChildren }
HAnimJoint138.AddChildren([HAnimJoint139]);
{ .AddChildren }
HAnimJoint137.AddChildren([HAnimJoint138]);
{ .AddChildren }
HAnimJoint136.AddChildren([HAnimJoint137]);
{ .AddChildren }
HAnimJoint126.AddChildren([HAnimJoint136]);
HAnimJoint141 := THAnimJointNode.Create;
HAnimJoint141.NameField := 'l_midcarpal_4_5';
HAnimJoint141.Center := Vector3(0,1,0);
HAnimJoint142 := THAnimJointNode.Create;
HAnimJoint142.NameField := 'l_carpometacarpal_4';
HAnimJoint142.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint143 := THAnimJointNode.Create;
HAnimJoint143.NameField := 'l_metacarpophalangeal_4';
HAnimJoint143.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint144 := THAnimJointNode.Create;
HAnimJoint144.NameField := 'l_carpal_proximal_interphalangeal_4';
HAnimJoint144.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint145 := THAnimJointNode.Create;
HAnimJoint145.NameField := 'l_carpal_distal_interphalangeal_4';
HAnimJoint145.Center := Vector3(0.1983,0.7045,-0.0767);
{ .AddChildren }
HAnimJoint144.AddChildren([HAnimJoint145]);
{ .AddChildren }
HAnimJoint143.AddChildren([HAnimJoint144]);
{ .AddChildren }
HAnimJoint142.AddChildren([HAnimJoint143]);
{ .AddChildren }
HAnimJoint141.AddChildren([HAnimJoint142]);
HAnimJoint146 := THAnimJointNode.Create;
HAnimJoint146.NameField := 'l_carpometacarpal_5';
HAnimJoint146.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint147 := THAnimJointNode.Create;
HAnimJoint147.NameField := 'l_metacarpophalangeal_5';
HAnimJoint147.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint148 := THAnimJointNode.Create;
HAnimJoint148.NameField := 'l_carpal_proximal_interphalangeal_5';
HAnimJoint148.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint149 := THAnimJointNode.Create;
HAnimJoint149.NameField := 'l_carpal_distal_interphalangeal_5';
HAnimJoint149.Center := Vector3(0.1948,0.7277,-0.1017);
{ .AddChildren }
HAnimJoint148.AddChildren([HAnimJoint149]);
{ .AddChildren }
HAnimJoint147.AddChildren([HAnimJoint148]);
{ .AddChildren }
HAnimJoint146.AddChildren([HAnimJoint147]);
{ .AddChildren }
HAnimJoint141.AddChildren([HAnimJoint146]);
{ .AddChildren }
HAnimJoint126.AddChildren([HAnimJoint141]);
{ .AddChildren }
HAnimJoint125.AddChildren([HAnimJoint126]);
{ .AddChildren }
HAnimJoint124.AddChildren([HAnimJoint125]);
{ .AddChildren }
HAnimJoint123.AddChildren([HAnimJoint124]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimJoint123]);
{ .AddChildren }
HAnimJoint106.AddChildren([HAnimJoint122]);
HAnimJoint150 := THAnimJointNode.Create;
HAnimJoint150.NameField := 'r_sternoclavicular';
HAnimJoint150.Center := Vector3(-0.0694,1.46,-0.033);
HAnimJoint151 := THAnimJointNode.Create;
HAnimJoint151.NameField := 'r_acromioclavicular';
HAnimJoint151.Center := Vector3(-0.0836,1.4281,-0.0401);
HAnimJoint152 := THAnimJointNode.Create;
HAnimJoint152.NameField := 'r_shoulder';
HAnimJoint152.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimJoint153 := THAnimJointNode.Create;
HAnimJoint153.NameField := 'r_elbow';
HAnimJoint153.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimJoint154 := THAnimJointNode.Create;
HAnimJoint154.NameField := 'r_radiocarpal';
HAnimJoint154.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimJoint155 := THAnimJointNode.Create;
HAnimJoint155.NameField := 'r_midcarpal_1';
HAnimJoint155.Center := Vector3(0,1,0);
HAnimJoint156 := THAnimJointNode.Create;
HAnimJoint156.NameField := 'r_carpometacarpal_1';
HAnimJoint156.Center := Vector3(-0.1899,0.8502,-0.0473);
HAnimJoint157 := THAnimJointNode.Create;
HAnimJoint157.NameField := 'r_metacarpophalangeal_1';
HAnimJoint157.Center := Vector3(-0.1874,0.8256,0.0306);
HAnimJoint158 := THAnimJointNode.Create;
HAnimJoint158.NameField := 'r_carpal_interphalangeal_1';
HAnimJoint158.Center := Vector3(-0.1864,0.819,0.0506);
{ .AddChildren }
HAnimJoint157.AddChildren([HAnimJoint158]);
{ .AddChildren }
HAnimJoint156.AddChildren([HAnimJoint157]);
{ .AddChildren }
HAnimJoint155.AddChildren([HAnimJoint156]);
{ .AddChildren }
HAnimJoint154.AddChildren([HAnimJoint155]);
HAnimJoint159 := THAnimJointNode.Create;
HAnimJoint159.NameField := 'r_midcarpal_2';
HAnimJoint159.Center := Vector3(0,1,0);
HAnimJoint160 := THAnimJointNode.Create;
HAnimJoint160.NameField := 'r_carpometacarpal_2';
HAnimJoint160.Center := Vector3(-0.1961,0.8055,-0.0218);
HAnimJoint161 := THAnimJointNode.Create;
HAnimJoint161.NameField := 'r_metacarpophalangeal_2';
HAnimJoint161.Center := Vector3(-0.1961,0.7846,-0.0218);
HAnimJoint162 := THAnimJointNode.Create;
HAnimJoint162.NameField := 'r_carpal_proximal_interphalangeal_2';
HAnimJoint162.Center := Vector3(-0.1954,0.7393,-0.0185);
HAnimJoint163 := THAnimJointNode.Create;
HAnimJoint163.NameField := 'r_carpal_distal_interphalangeal_2';
HAnimJoint163.Center := Vector3(-0.1945,0.7169,-0.0173);
{ .AddChildren }
HAnimJoint162.AddChildren([HAnimJoint163]);
{ .AddChildren }
HAnimJoint161.AddChildren([HAnimJoint162]);
{ .AddChildren }
HAnimJoint160.AddChildren([HAnimJoint161]);
{ .AddChildren }
HAnimJoint159.AddChildren([HAnimJoint160]);
{ .AddChildren }
HAnimJoint154.AddChildren([HAnimJoint159]);
HAnimJoint164 := THAnimJointNode.Create;
HAnimJoint164.NameField := 'r_midcarpal_3';
HAnimJoint164.Center := Vector3(0,1,0);
HAnimJoint165 := THAnimJointNode.Create;
HAnimJoint165.NameField := 'r_carpometacarpal_3';
HAnimJoint165.Center := Vector3(-0.1972,0.806,-0.0468);
HAnimJoint166 := THAnimJointNode.Create;
HAnimJoint166.NameField := 'r_metacarpophalangeal_3';
HAnimJoint166.Center := Vector3(-0.1972,0.7849,-0.0468);
HAnimJoint167 := THAnimJointNode.Create;
HAnimJoint167.NameField := 'r_carpal_proximal_interphalangeal_3';
HAnimJoint167.Center := Vector3(-0.195,0.7304,-0.0441);
HAnimJoint168 := THAnimJointNode.Create;
HAnimJoint168.NameField := 'r_carpal_distal_interphalangeal_3';
HAnimJoint168.Center := Vector3(-0.1939,0.7042,-0.0432);
{ .AddChildren }
HAnimJoint167.AddChildren([HAnimJoint168]);
{ .AddChildren }
HAnimJoint166.AddChildren([HAnimJoint167]);
{ .AddChildren }
HAnimJoint165.AddChildren([HAnimJoint166]);
{ .AddChildren }
HAnimJoint164.AddChildren([HAnimJoint165]);
{ .AddChildren }
HAnimJoint154.AddChildren([HAnimJoint164]);
HAnimJoint169 := THAnimJointNode.Create;
HAnimJoint169.NameField := 'r_midcarpal_4_5';
HAnimJoint169.Center := Vector3(0,1,0);
HAnimJoint170 := THAnimJointNode.Create;
HAnimJoint170.NameField := 'r_carpometacarpal_4';
HAnimJoint170.Center := Vector3(-0.1951,0.8049,-0.0732);
HAnimJoint171 := THAnimJointNode.Create;
HAnimJoint171.NameField := 'r_metacarpophalangeal_4';
HAnimJoint171.Center := Vector3(-0.1951,0.7845,-0.0732);
HAnimJoint172 := THAnimJointNode.Create;
HAnimJoint172.NameField := 'r_carpal_proximal_interphalangeal_4';
HAnimJoint172.Center := Vector3(-0.192,0.7318,-0.0716);
HAnimJoint173 := THAnimJointNode.Create;
HAnimJoint173.NameField := 'r_carpal_distal_interphalangeal_4';
HAnimJoint173.Center := Vector3(-0.1908,0.7077,-0.0706);
{ .AddChildren }
HAnimJoint172.AddChildren([HAnimJoint173]);
{ .AddChildren }
HAnimJoint171.AddChildren([HAnimJoint172]);
{ .AddChildren }
HAnimJoint170.AddChildren([HAnimJoint171]);
{ .AddChildren }
HAnimJoint169.AddChildren([HAnimJoint170]);
HAnimJoint174 := THAnimJointNode.Create;
HAnimJoint174.NameField := 'r_carpometacarpal_5';
HAnimJoint174.Center := Vector3(-0.1926,0.8096,-0.0975);
HAnimJoint175 := THAnimJointNode.Create;
HAnimJoint175.NameField := 'r_metacarpophalangeal_5';
HAnimJoint175.Center := Vector3(-0.1926,0.7896,-0.0975);
HAnimJoint176 := THAnimJointNode.Create;
HAnimJoint176.NameField := 'r_carpal_proximal_interphalangeal_5';
HAnimJoint176.Center := Vector3(-0.1902,0.7483,-0.0963);
HAnimJoint177 := THAnimJointNode.Create;
HAnimJoint177.NameField := 'r_carpal_distal_interphalangeal_5';
HAnimJoint177.Center := Vector3(-0.1908,0.754,-0.096);
{ .AddChildren }
HAnimJoint176.AddChildren([HAnimJoint177]);
{ .AddChildren }
HAnimJoint175.AddChildren([HAnimJoint176]);
{ .AddChildren }
HAnimJoint174.AddChildren([HAnimJoint175]);
{ .AddChildren }
HAnimJoint169.AddChildren([HAnimJoint174]);
{ .AddChildren }
HAnimJoint154.AddChildren([HAnimJoint169]);
{ .AddChildren }
HAnimJoint153.AddChildren([HAnimJoint154]);
{ .AddChildren }
HAnimJoint152.AddChildren([HAnimJoint153]);
{ .AddChildren }
HAnimJoint151.AddChildren([HAnimJoint152]);
{ .AddChildren }
HAnimJoint150.AddChildren([HAnimJoint151]);
{ .AddChildren }
HAnimJoint106.AddChildren([HAnimJoint150]);
{ .AddChildren }
HAnimJoint105.AddChildren([HAnimJoint106]);
{ .AddChildren }
HAnimJoint104.AddChildren([HAnimJoint105]);
{ .AddChildren }
HAnimJoint103.AddChildren([HAnimJoint104]);
{ .AddChildren }
HAnimJoint102.AddChildren([HAnimJoint103]);
{ .AddChildren }
HAnimJoint101.AddChildren([HAnimJoint102]);
{ .AddChildren }
HAnimJoint100.AddChildren([HAnimJoint101]);
{ .AddChildren }
HAnimJoint99.AddChildren([HAnimJoint100]);
{ .AddChildren }
HAnimJoint98.AddChildren([HAnimJoint99]);
{ .AddChildren }
HAnimJoint97.AddChildren([HAnimJoint98]);
{ .AddChildren }
HAnimJoint96.AddChildren([HAnimJoint97]);
{ .AddChildren }
HAnimJoint95.AddChildren([HAnimJoint96]);
{ .AddChildren }
HAnimJoint94.AddChildren([HAnimJoint95]);
{ .AddChildren }
HAnimJoint93.AddChildren([HAnimJoint94]);
{ .AddChildren }
HAnimJoint92.AddChildren([HAnimJoint93]);
{ .AddChildren }
HAnimJoint91.AddChildren([HAnimJoint92]);
{ .AddChildren }
HAnimJoint90.AddChildren([HAnimJoint91]);
{ .AddChildren }
HAnimJoint32.AddChildren([HAnimJoint90]);
{ .AddSkeleton }
HAnimHumanoid31.SetSkeleton([HAnimJoint32]);
HAnimJoint178 := HAnimJoint32;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint178);
HAnimJoint179 := HAnimJoint33;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint179);
HAnimJoint180 := HAnimJoint34;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint180);
HAnimJoint181 := HAnimJoint35;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint181);
HAnimJoint182 := HAnimJoint36;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint182);
HAnimJoint183 := HAnimJoint37;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint183);
HAnimJoint184 := HAnimJoint38;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint184);
HAnimJoint185 := HAnimJoint39;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint185);
HAnimJoint186 := HAnimJoint40;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint186);
HAnimJoint187 := HAnimJoint41;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint187);
HAnimJoint188 := HAnimJoint42;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint188);
HAnimJoint189 := HAnimJoint43;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint189);
HAnimJoint190 := HAnimJoint44;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint190);
HAnimJoint191 := HAnimJoint45;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint191);
HAnimJoint192 := HAnimJoint46;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint192);
HAnimJoint193 := HAnimJoint47;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint193);
HAnimJoint194 := HAnimJoint48;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint194);
HAnimJoint195 := HAnimJoint49;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint195);
HAnimJoint196 := HAnimJoint50;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint196);
HAnimJoint197 := HAnimJoint51;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint197);
HAnimJoint198 := HAnimJoint52;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint198);
HAnimJoint199 := HAnimJoint53;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint199);
HAnimJoint200 := HAnimJoint54;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint200);
HAnimJoint201 := HAnimJoint55;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint201);
HAnimJoint202 := HAnimJoint56;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint202);
HAnimJoint203 := HAnimJoint57;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint203);
HAnimJoint204 := HAnimJoint58;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint204);
HAnimJoint205 := HAnimJoint59;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint205);
HAnimJoint206 := HAnimJoint60;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint206);
HAnimJoint207 := HAnimJoint61;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint207);
HAnimJoint208 := HAnimJoint62;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint208);
HAnimJoint209 := HAnimJoint63;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint209);
HAnimJoint210 := HAnimJoint64;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint210);
HAnimJoint211 := HAnimJoint65;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint211);
HAnimJoint212 := HAnimJoint66;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint212);
HAnimJoint213 := HAnimJoint67;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint213);
HAnimJoint214 := HAnimJoint68;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint214);
HAnimJoint215 := HAnimJoint69;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint215);
HAnimJoint216 := HAnimJoint70;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint216);
HAnimJoint217 := HAnimJoint71;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint217);
HAnimJoint218 := HAnimJoint72;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint218);
HAnimJoint219 := HAnimJoint73;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint219);
HAnimJoint220 := HAnimJoint74;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint220);
HAnimJoint221 := HAnimJoint75;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint221);
HAnimJoint222 := HAnimJoint76;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint222);
HAnimJoint223 := HAnimJoint77;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint223);
HAnimJoint224 := HAnimJoint78;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint224);
HAnimJoint225 := HAnimJoint79;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint225);
HAnimJoint226 := HAnimJoint80;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint226);
HAnimJoint227 := HAnimJoint81;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint227);
HAnimJoint228 := HAnimJoint82;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint228);
HAnimJoint229 := HAnimJoint83;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint229);
HAnimJoint230 := HAnimJoint84;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint230);
HAnimJoint231 := HAnimJoint85;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint231);
HAnimJoint232 := HAnimJoint86;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint232);
HAnimJoint233 := HAnimJoint87;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint233);
HAnimJoint234 := HAnimJoint88;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint234);
HAnimJoint235 := HAnimJoint89;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint235);
HAnimJoint236 := HAnimJoint90;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint236);
HAnimJoint237 := HAnimJoint91;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint237);
HAnimJoint238 := HAnimJoint92;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint238);
HAnimJoint239 := HAnimJoint93;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint239);
HAnimJoint240 := HAnimJoint94;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint240);
HAnimJoint241 := HAnimJoint95;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint241);
HAnimJoint242 := HAnimJoint96;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint242);
HAnimJoint243 := HAnimJoint97;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint243);
HAnimJoint244 := HAnimJoint98;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint244);
HAnimJoint245 := HAnimJoint99;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint245);
HAnimJoint246 := HAnimJoint100;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint246);
HAnimJoint247 := HAnimJoint101;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint247);
HAnimJoint248 := HAnimJoint102;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint248);
HAnimJoint249 := HAnimJoint103;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint249);
HAnimJoint250 := HAnimJoint104;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint250);
HAnimJoint251 := HAnimJoint105;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint251);
HAnimJoint252 := HAnimJoint106;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint252);
HAnimJoint253 := HAnimJoint107;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint253);
HAnimJoint254 := HAnimJoint108;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint254);
HAnimJoint255 := HAnimJoint109;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint255);
HAnimJoint256 := HAnimJoint110;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint256);
HAnimJoint257 := HAnimJoint111;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint257);
HAnimJoint258 := HAnimJoint112;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint258);
HAnimJoint259 := HAnimJoint113;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint259);
HAnimJoint260 := HAnimJoint114;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint260);
HAnimJoint261 := HAnimJoint115;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint261);
HAnimJoint262 := HAnimJoint116;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint262);
HAnimJoint263 := HAnimJoint117;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint263);
HAnimJoint264 := HAnimJoint118;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint264);
HAnimJoint265 := HAnimJoint119;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint265);
HAnimJoint266 := HAnimJoint120;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint266);
HAnimJoint267 := HAnimJoint121;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint267);
HAnimJoint268 := HAnimJoint122;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint268);
HAnimJoint269 := HAnimJoint123;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint269);
HAnimJoint270 := HAnimJoint124;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint270);
HAnimJoint271 := HAnimJoint125;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint271);
HAnimJoint272 := HAnimJoint126;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint272);
HAnimJoint273 := HAnimJoint127;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint273);
HAnimJoint274 := HAnimJoint128;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint274);
HAnimJoint275 := HAnimJoint129;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint275);
HAnimJoint276 := HAnimJoint130;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint276);
HAnimJoint277 := HAnimJoint131;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint277);
HAnimJoint278 := HAnimJoint132;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint278);
HAnimJoint279 := HAnimJoint133;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint279);
HAnimJoint280 := HAnimJoint134;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint280);
HAnimJoint281 := HAnimJoint135;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint281);
HAnimJoint282 := HAnimJoint136;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint282);
HAnimJoint283 := HAnimJoint137;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint283);
HAnimJoint284 := HAnimJoint138;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint284);
HAnimJoint285 := HAnimJoint139;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint285);
HAnimJoint286 := HAnimJoint140;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint286);
HAnimJoint287 := HAnimJoint141;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint287);
HAnimJoint288 := HAnimJoint142;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint288);
HAnimJoint289 := HAnimJoint143;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint289);
HAnimJoint290 := HAnimJoint144;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint290);
HAnimJoint291 := HAnimJoint145;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint291);
HAnimJoint292 := HAnimJoint146;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint292);
HAnimJoint293 := HAnimJoint147;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint293);
HAnimJoint294 := HAnimJoint148;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint294);
HAnimJoint295 := HAnimJoint149;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint295);
HAnimJoint296 := HAnimJoint150;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint296);
HAnimJoint297 := HAnimJoint151;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint297);
HAnimJoint298 := HAnimJoint152;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint298);
HAnimJoint299 := HAnimJoint153;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint299);
HAnimJoint300 := HAnimJoint154;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint300);
HAnimJoint301 := HAnimJoint155;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint301);
HAnimJoint302 := HAnimJoint156;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint302);
HAnimJoint303 := HAnimJoint157;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint303);
HAnimJoint304 := HAnimJoint158;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint304);
HAnimJoint305 := HAnimJoint159;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint305);
HAnimJoint306 := HAnimJoint160;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint306);
HAnimJoint307 := HAnimJoint161;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint307);
HAnimJoint308 := HAnimJoint162;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint308);
HAnimJoint309 := HAnimJoint163;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint309);
HAnimJoint310 := HAnimJoint164;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint310);
HAnimJoint311 := HAnimJoint165;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint311);
HAnimJoint312 := HAnimJoint166;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint312);
HAnimJoint313 := HAnimJoint167;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint313);
HAnimJoint314 := HAnimJoint168;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint314);
HAnimJoint315 := HAnimJoint169;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint315);
HAnimJoint316 := HAnimJoint170;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint316);
HAnimJoint317 := HAnimJoint171;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint317);
HAnimJoint318 := HAnimJoint172;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint318);
HAnimJoint319 := HAnimJoint173;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint319);
HAnimJoint320 := HAnimJoint174;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint320);
HAnimJoint321 := HAnimJoint175;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint321);
HAnimJoint322 := HAnimJoint176;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint322);
HAnimJoint323 := HAnimJoint177;
{ .FdJoints.Add }
HAnimHumanoid31.FdJoints.Add(HAnimJoint323);
{ .AddChildren }
Group11.AddChildren([HAnimHumanoid31]);
{ .AddGroup }
X3D0.AddChildren([Group11]);
Result := X3D0;
end;

begin
end.
