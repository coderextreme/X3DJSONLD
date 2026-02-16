function JohnJoint2: TX3DRootNode;
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
HAnimJoint32.SetUlimit([0,0,0]);
HAnimJoint32.SetLlimit([0,0,0]);
HAnimJoint33 := THAnimJointNode.Create;
HAnimJoint33.NameField := 'sacroiliac';
HAnimJoint33.Center := Vector3(0,0.9149,0.0016);
HAnimJoint33.SetUlimit([0,0,0]);
HAnimJoint33.SetLlimit([0,0,0]);
HAnimJoint34 := THAnimJointNode.Create;
HAnimJoint34.NameField := 'l_hip';
HAnimJoint34.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimJoint34.SetUlimit([0,0,0]);
HAnimJoint34.SetLlimit([0,0,0]);
HAnimJoint35 := THAnimJointNode.Create;
HAnimJoint35.NameField := 'l_knee';
HAnimJoint35.Center := Vector3(0.104,0.4867,0.0308);
HAnimJoint35.SetUlimit([0,0,0]);
HAnimJoint35.SetLlimit([0,0,0]);
HAnimJoint36 := THAnimJointNode.Create;
HAnimJoint36.NameField := 'l_talocrural';
HAnimJoint36.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimJoint36.SetUlimit([0,0,0]);
HAnimJoint36.SetLlimit([0,0,0]);
HAnimJoint37 := THAnimJointNode.Create;
HAnimJoint37.NameField := 'l_talocalcaneonavicular';
HAnimJoint37.Center := Vector3(0,1,0);
HAnimJoint37.SetUlimit([0,0,0]);
HAnimJoint37.SetLlimit([0,0,0]);
HAnimJoint38 := THAnimJointNode.Create;
HAnimJoint38.NameField := 'l_cuneonavicular_1';
HAnimJoint38.Center := Vector3(0,1,0);
HAnimJoint38.SetUlimit([0,0,0]);
HAnimJoint38.SetLlimit([0,0,0]);
HAnimJoint39 := THAnimJointNode.Create;
HAnimJoint39.NameField := 'l_tarsometatarsal_1';
HAnimJoint39.Center := Vector3(0,1,0);
HAnimJoint39.SetUlimit([0,0,0]);
HAnimJoint39.SetLlimit([0,0,0]);
HAnimJoint40 := THAnimJointNode.Create;
HAnimJoint40.NameField := 'l_metatarsophalangeal_1';
HAnimJoint40.Center := Vector3(0,1,0);
HAnimJoint40.SetUlimit([0,0,0]);
HAnimJoint40.SetLlimit([0,0,0]);
HAnimJoint41 := THAnimJointNode.Create;
HAnimJoint41.NameField := 'l_tarsal_interphalangeal_1';
HAnimJoint41.Center := Vector3(0,1,0);
HAnimJoint41.SetUlimit([0,0,0]);
HAnimJoint41.SetLlimit([0,0,0]);
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
HAnimJoint42.SetUlimit([0,0,0]);
HAnimJoint42.SetLlimit([0,0,0]);
HAnimJoint43 := THAnimJointNode.Create;
HAnimJoint43.NameField := 'l_tarsometatarsal_2';
HAnimJoint43.Center := Vector3(0,1,0);
HAnimJoint43.SetUlimit([0,0,0]);
HAnimJoint43.SetLlimit([0,0,0]);
HAnimJoint44 := THAnimJointNode.Create;
HAnimJoint44.NameField := 'l_metatarsophalangeal_2';
HAnimJoint44.Center := Vector3(0,1,0);
HAnimJoint44.SetUlimit([0,0,0]);
HAnimJoint44.SetLlimit([0,0,0]);
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45.NameField := 'l_tarsal_proximal_interphalangeal_2';
HAnimJoint45.Center := Vector3(0,1,0);
HAnimJoint45.SetUlimit([0,0,0]);
HAnimJoint45.SetLlimit([0,0,0]);
HAnimJoint46 := THAnimJointNode.Create;
HAnimJoint46.NameField := 'l_tarsal_distal_interphalangeal_2';
HAnimJoint46.Center := Vector3(0,1,0);
HAnimJoint46.SetUlimit([0,0,0]);
HAnimJoint46.SetLlimit([0,0,0]);
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
HAnimJoint47.SetUlimit([0,0,0]);
HAnimJoint47.SetLlimit([0,0,0]);
HAnimJoint48 := THAnimJointNode.Create;
HAnimJoint48.NameField := 'l_tarsometatarsal_3';
HAnimJoint48.Center := Vector3(0,1,0);
HAnimJoint48.SetUlimit([0,0,0]);
HAnimJoint48.SetLlimit([0,0,0]);
HAnimJoint49 := THAnimJointNode.Create;
HAnimJoint49.NameField := 'l_metatarsophalangeal_3';
HAnimJoint49.Center := Vector3(0,1,0);
HAnimJoint49.SetUlimit([0,0,0]);
HAnimJoint49.SetLlimit([0,0,0]);
HAnimJoint50 := THAnimJointNode.Create;
HAnimJoint50.NameField := 'l_tarsal_proximal_interphalangeal_3';
HAnimJoint50.Center := Vector3(0,1,0);
HAnimJoint50.SetUlimit([0,0,0]);
HAnimJoint50.SetLlimit([0,0,0]);
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.NameField := 'l_tarsal_distal_interphalangeal_3';
HAnimJoint51.Center := Vector3(0,1,0);
HAnimJoint51.SetUlimit([0,0,0]);
HAnimJoint51.SetLlimit([0,0,0]);
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
HAnimJoint52.SetUlimit([0,0,0]);
HAnimJoint52.SetLlimit([0,0,0]);
HAnimJoint53 := THAnimJointNode.Create;
HAnimJoint53.NameField := 'l_transversetarsal';
HAnimJoint53.Center := Vector3(0,1,0);
HAnimJoint53.SetUlimit([0,0,0]);
HAnimJoint53.SetLlimit([0,0,0]);
HAnimJoint54 := THAnimJointNode.Create;
HAnimJoint54.NameField := 'l_tarsometatarsal_4';
HAnimJoint54.Center := Vector3(0,1,0);
HAnimJoint54.SetUlimit([0,0,0]);
HAnimJoint54.SetLlimit([0,0,0]);
HAnimJoint55 := THAnimJointNode.Create;
HAnimJoint55.NameField := 'l_metatarsophalangeal_4';
HAnimJoint55.Center := Vector3(0,1,0);
HAnimJoint55.SetUlimit([0,0,0]);
HAnimJoint55.SetLlimit([0,0,0]);
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.NameField := 'l_tarsal_proximal_interphalangeal_4';
HAnimJoint56.Center := Vector3(0,1,0);
HAnimJoint56.SetUlimit([0,0,0]);
HAnimJoint56.SetLlimit([0,0,0]);
HAnimJoint57 := THAnimJointNode.Create;
HAnimJoint57.NameField := 'l_tarsal_distal_interphalangeal_4';
HAnimJoint57.Center := Vector3(0,1,0);
HAnimJoint57.SetUlimit([0,0,0]);
HAnimJoint57.SetLlimit([0,0,0]);
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
HAnimJoint58.SetUlimit([0,0,0]);
HAnimJoint58.SetLlimit([0,0,0]);
HAnimJoint59 := THAnimJointNode.Create;
HAnimJoint59.NameField := 'l_metatarsophalangeal_5';
HAnimJoint59.Center := Vector3(0,1,0);
HAnimJoint59.SetUlimit([0,0,0]);
HAnimJoint59.SetLlimit([0,0,0]);
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.NameField := 'l_tarsal_proximal_interphalangeal_5';
HAnimJoint60.Center := Vector3(0,1,0);
HAnimJoint60.SetUlimit([0,0,0]);
HAnimJoint60.SetLlimit([0,0,0]);
HAnimJoint61 := THAnimJointNode.Create;
HAnimJoint61.NameField := 'l_tarsal_distal_interphalangeal_5';
HAnimJoint61.Center := Vector3(0,1,0);
HAnimJoint61.SetUlimit([0,0,0]);
HAnimJoint61.SetLlimit([0,0,0]);
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
HAnimJoint62.SetUlimit([0,0,0]);
HAnimJoint62.SetLlimit([0,0,0]);
HAnimJoint63 := THAnimJointNode.Create;
HAnimJoint63.NameField := 'r_knee';
HAnimJoint63.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimJoint63.SetUlimit([0,0,0]);
HAnimJoint63.SetLlimit([0,0,0]);
HAnimJoint64 := THAnimJointNode.Create;
HAnimJoint64.NameField := 'r_talocrural';
HAnimJoint64.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimJoint64.SetUlimit([0,0,0]);
HAnimJoint64.SetLlimit([0,0,0]);
HAnimJoint65 := THAnimJointNode.Create;
HAnimJoint65.NameField := 'r_talocalcaneonavicular';
HAnimJoint65.Center := Vector3(0,1,0);
HAnimJoint65.SetUlimit([0,0,0]);
HAnimJoint65.SetLlimit([0,0,0]);
HAnimJoint66 := THAnimJointNode.Create;
HAnimJoint66.NameField := 'r_cuneonavicular_1';
HAnimJoint66.Center := Vector3(0,1,0);
HAnimJoint66.SetUlimit([0,0,0]);
HAnimJoint66.SetLlimit([0,0,0]);
HAnimJoint67 := THAnimJointNode.Create;
HAnimJoint67.NameField := 'r_tarsometatarsal_1';
HAnimJoint67.Center := Vector3(0,1,0);
HAnimJoint67.SetUlimit([0,0,0]);
HAnimJoint67.SetLlimit([0,0,0]);
HAnimJoint68 := THAnimJointNode.Create;
HAnimJoint68.NameField := 'r_metatarsophalangeal_1';
HAnimJoint68.Center := Vector3(0,1,0);
HAnimJoint68.SetUlimit([0,0,0]);
HAnimJoint68.SetLlimit([0,0,0]);
HAnimJoint69 := THAnimJointNode.Create;
HAnimJoint69.NameField := 'r_tarsal_interphalangeal_1';
HAnimJoint69.Center := Vector3(0,1,0);
HAnimJoint69.SetUlimit([0,0,0]);
HAnimJoint69.SetLlimit([0,0,0]);
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
HAnimJoint70.SetUlimit([0,0,0]);
HAnimJoint70.SetLlimit([0,0,0]);
HAnimJoint71 := THAnimJointNode.Create;
HAnimJoint71.NameField := 'r_tarsometatarsal_2';
HAnimJoint71.Center := Vector3(0,1,0);
HAnimJoint71.SetUlimit([0,0,0]);
HAnimJoint71.SetLlimit([0,0,0]);
HAnimJoint72 := THAnimJointNode.Create;
HAnimJoint72.NameField := 'r_metatarsophalangeal_2';
HAnimJoint72.Center := Vector3(0,1,0);
HAnimJoint72.SetUlimit([0,0,0]);
HAnimJoint72.SetLlimit([0,0,0]);
HAnimJoint73 := THAnimJointNode.Create;
HAnimJoint73.NameField := 'r_tarsal_proximal_interphalangeal_2';
HAnimJoint73.Center := Vector3(0,1,0);
HAnimJoint73.SetUlimit([0,0,0]);
HAnimJoint73.SetLlimit([0,0,0]);
HAnimJoint74 := THAnimJointNode.Create;
HAnimJoint74.NameField := 'r_tarsal_distal_interphalangeal_2';
HAnimJoint74.Center := Vector3(0,1,0);
HAnimJoint74.SetUlimit([0,0,0]);
HAnimJoint74.SetLlimit([0,0,0]);
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
HAnimJoint75.SetUlimit([0,0,0]);
HAnimJoint75.SetLlimit([0,0,0]);
HAnimJoint76 := THAnimJointNode.Create;
HAnimJoint76.NameField := 'r_tarsometatarsal_3';
HAnimJoint76.Center := Vector3(0,1,0);
HAnimJoint76.SetUlimit([0,0,0]);
HAnimJoint76.SetLlimit([0,0,0]);
HAnimJoint77 := THAnimJointNode.Create;
HAnimJoint77.NameField := 'r_metatarsophalangeal_3';
HAnimJoint77.Center := Vector3(0,1,0);
HAnimJoint77.SetUlimit([0,0,0]);
HAnimJoint77.SetLlimit([0,0,0]);
HAnimJoint78 := THAnimJointNode.Create;
HAnimJoint78.NameField := 'r_tarsal_proximal_interphalangeal_3';
HAnimJoint78.Center := Vector3(0,1,0);
HAnimJoint78.SetUlimit([0,0,0]);
HAnimJoint78.SetLlimit([0,0,0]);
HAnimJoint79 := THAnimJointNode.Create;
HAnimJoint79.NameField := 'r_tarsal_distal_interphalangeal_3';
HAnimJoint79.Center := Vector3(0,1,0);
HAnimJoint79.SetUlimit([0,0,0]);
HAnimJoint79.SetLlimit([0,0,0]);
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
HAnimJoint80.SetUlimit([0,0,0]);
HAnimJoint80.SetLlimit([0,0,0]);
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.NameField := 'r_transversetarsal';
HAnimJoint81.Center := Vector3(0,1,0);
HAnimJoint81.SetUlimit([0,0,0]);
HAnimJoint81.SetLlimit([0,0,0]);
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.NameField := 'r_tarsometatarsal_4';
HAnimJoint82.Center := Vector3(0,1,0);
HAnimJoint82.SetUlimit([0,0,0]);
HAnimJoint82.SetLlimit([0,0,0]);
HAnimJoint83 := THAnimJointNode.Create;
HAnimJoint83.NameField := 'r_metatarsophalangeal_4';
HAnimJoint83.Center := Vector3(0,1,0);
HAnimJoint83.SetUlimit([0,0,0]);
HAnimJoint83.SetLlimit([0,0,0]);
HAnimJoint84 := THAnimJointNode.Create;
HAnimJoint84.NameField := 'r_tarsal_proximal_interphalangeal_4';
HAnimJoint84.Center := Vector3(0,1,0);
HAnimJoint84.SetUlimit([0,0,0]);
HAnimJoint84.SetLlimit([0,0,0]);
HAnimJoint85 := THAnimJointNode.Create;
HAnimJoint85.NameField := 'r_tarsal_distal_interphalangeal_4';
HAnimJoint85.Center := Vector3(0,1,0);
HAnimJoint85.SetUlimit([0,0,0]);
HAnimJoint85.SetLlimit([0,0,0]);
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
HAnimJoint86.SetUlimit([0,0,0]);
HAnimJoint86.SetLlimit([0,0,0]);
HAnimJoint87 := THAnimJointNode.Create;
HAnimJoint87.NameField := 'r_metatarsophalangeal_5';
HAnimJoint87.Center := Vector3(0,1,0);
HAnimJoint87.SetUlimit([0,0,0]);
HAnimJoint87.SetLlimit([0,0,0]);
HAnimJoint88 := THAnimJointNode.Create;
HAnimJoint88.NameField := 'r_tarsal_proximal_interphalangeal_5';
HAnimJoint88.Center := Vector3(0,1,0);
HAnimJoint88.SetUlimit([0,0,0]);
HAnimJoint88.SetLlimit([0,0,0]);
HAnimJoint89 := THAnimJointNode.Create;
HAnimJoint89.NameField := 'r_tarsal_distal_interphalangeal_5';
HAnimJoint89.Center := Vector3(0,1,0);
HAnimJoint89.SetUlimit([0,0,0]);
HAnimJoint89.SetLlimit([0,0,0]);
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
HAnimJoint90.SetUlimit([0,0,0]);
HAnimJoint90.SetLlimit([0,0,0]);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.NameField := 'vl4';
HAnimJoint91.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimJoint91.SetUlimit([0,0,0]);
HAnimJoint91.SetLlimit([0,0,0]);
HAnimJoint92 := THAnimJointNode.Create;
HAnimJoint92.NameField := 'vl3';
HAnimJoint92.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimJoint92.SetUlimit([0,0,0]);
HAnimJoint92.SetLlimit([0,0,0]);
HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.NameField := 'vl2';
HAnimJoint93.Center := Vector3(0.0045,1.1546,-0.08);
HAnimJoint93.SetUlimit([0,0,0]);
HAnimJoint93.SetLlimit([0,0,0]);
HAnimJoint94 := THAnimJointNode.Create;
HAnimJoint94.NameField := 'vl1';
HAnimJoint94.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimJoint94.SetUlimit([0,0,0]);
HAnimJoint94.SetLlimit([0,0,0]);
HAnimJoint95 := THAnimJointNode.Create;
HAnimJoint95.NameField := 'vt12';
HAnimJoint95.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimJoint95.SetUlimit([0,0,0]);
HAnimJoint95.SetLlimit([0,0,0]);
HAnimJoint96 := THAnimJointNode.Create;
HAnimJoint96.NameField := 'vt11';
HAnimJoint96.Center := Vector3(0.0053,1.2679,-0.081);
HAnimJoint96.SetUlimit([0,0,0]);
HAnimJoint96.SetLlimit([0,0,0]);
HAnimJoint97 := THAnimJointNode.Create;
HAnimJoint97.NameField := 'vt10';
HAnimJoint97.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimJoint97.SetUlimit([0,0,0]);
HAnimJoint97.SetLlimit([0,0,0]);
HAnimJoint98 := THAnimJointNode.Create;
HAnimJoint98.NameField := 'vt9';
HAnimJoint98.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimJoint98.SetUlimit([0,0,0]);
HAnimJoint98.SetLlimit([0,0,0]);
HAnimJoint99 := THAnimJointNode.Create;
HAnimJoint99.NameField := 'vt8';
HAnimJoint99.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimJoint99.SetUlimit([0,0,0]);
HAnimJoint99.SetLlimit([0,0,0]);
HAnimJoint100 := THAnimJointNode.Create;
HAnimJoint100.NameField := 'vt7';
HAnimJoint100.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimJoint100.SetUlimit([0,0,0]);
HAnimJoint100.SetLlimit([0,0,0]);
HAnimJoint101 := THAnimJointNode.Create;
HAnimJoint101.NameField := 'vt6';
HAnimJoint101.Center := Vector3(0.0059,1.3866,-0.08);
HAnimJoint101.SetUlimit([0,0,0]);
HAnimJoint101.SetLlimit([0,0,0]);
HAnimJoint102 := THAnimJointNode.Create;
HAnimJoint102.NameField := 'vt5';
HAnimJoint102.Center := Vector3(0.006,1.4102,-0.0745);
HAnimJoint102.SetUlimit([0,0,0]);
HAnimJoint102.SetLlimit([0,0,0]);
HAnimJoint103 := THAnimJointNode.Create;
HAnimJoint103.NameField := 'vt4';
HAnimJoint103.Center := Vector3(0.0061,1.432,-0.0675);
HAnimJoint103.SetUlimit([0,0,0]);
HAnimJoint103.SetLlimit([0,0,0]);
HAnimJoint104 := THAnimJointNode.Create;
HAnimJoint104.NameField := 'vt3';
HAnimJoint104.Center := Vector3(0.0062,1.4583,-0.057);
HAnimJoint104.SetUlimit([0,0,0]);
HAnimJoint104.SetLlimit([0,0,0]);
HAnimJoint105 := THAnimJointNode.Create;
HAnimJoint105.NameField := 'vt2';
HAnimJoint105.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimJoint105.SetUlimit([0,0,0]);
HAnimJoint105.SetLlimit([0,0,0]);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.NameField := 'vt1';
HAnimJoint106.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimJoint106.SetUlimit([0,0,0]);
HAnimJoint106.SetLlimit([0,0,0]);
HAnimJoint107 := THAnimJointNode.Create;
HAnimJoint107.NameField := 'vc7';
HAnimJoint107.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimJoint107.SetUlimit([0,0,0]);
HAnimJoint107.SetLlimit([0,0,0]);
HAnimJoint108 := THAnimJointNode.Create;
HAnimJoint108.NameField := 'vc6';
HAnimJoint108.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimJoint108.SetUlimit([0,0,0]);
HAnimJoint108.SetLlimit([0,0,0]);
HAnimJoint109 := THAnimJointNode.Create;
HAnimJoint109.NameField := 'vc5';
HAnimJoint109.Center := Vector3(0.0066,1.552,-0.0082);
HAnimJoint109.SetUlimit([0,0,0]);
HAnimJoint109.SetLlimit([0,0,0]);
HAnimJoint110 := THAnimJointNode.Create;
HAnimJoint110.NameField := 'vc4';
HAnimJoint110.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimJoint110.SetUlimit([0,0,0]);
HAnimJoint110.SetLlimit([0,0,0]);
HAnimJoint111 := THAnimJointNode.Create;
HAnimJoint111.NameField := 'vc3';
HAnimJoint111.Center := Vector3(0.0066,1.58,-0.0103);
HAnimJoint111.SetUlimit([0,0,0]);
HAnimJoint111.SetLlimit([0,0,0]);
HAnimJoint112 := THAnimJointNode.Create;
HAnimJoint112.NameField := 'vc2';
HAnimJoint112.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimJoint112.SetUlimit([0,0,0]);
HAnimJoint112.SetLlimit([0,0,0]);
HAnimJoint113 := THAnimJointNode.Create;
HAnimJoint113.NameField := 'vc1';
HAnimJoint113.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimJoint113.SetUlimit([0,0,0]);
HAnimJoint113.SetLlimit([0,0,0]);
HAnimJoint114 := THAnimJointNode.Create;
HAnimJoint114.NameField := 'skullbase';
HAnimJoint114.Center := Vector3(0.0044,1.6209,0.0236);
HAnimJoint114.SetUlimit([0,0,0]);
HAnimJoint114.SetLlimit([0,0,0]);
HAnimJoint115 := THAnimJointNode.Create;
HAnimJoint115.NameField := 'l_eyelid_joint';
HAnimJoint115.Center := Vector3(0,1,0);
HAnimJoint115.SetUlimit([0,0,0]);
HAnimJoint115.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint115]);
HAnimJoint116 := THAnimJointNode.Create;
HAnimJoint116.NameField := 'r_eyelid_joint';
HAnimJoint116.Center := Vector3(0,1,0);
HAnimJoint116.SetUlimit([0,0,0]);
HAnimJoint116.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint116]);
HAnimJoint117 := THAnimJointNode.Create;
HAnimJoint117.NameField := 'l_eyeball_joint';
HAnimJoint117.Center := Vector3(0,1,0);
HAnimJoint117.SetUlimit([0,0,0]);
HAnimJoint117.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint117]);
HAnimJoint118 := THAnimJointNode.Create;
HAnimJoint118.NameField := 'r_eyeball_joint';
HAnimJoint118.Center := Vector3(0,1,0);
HAnimJoint118.SetUlimit([0,0,0]);
HAnimJoint118.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint118]);
HAnimJoint119 := THAnimJointNode.Create;
HAnimJoint119.NameField := 'l_eyebrow_joint';
HAnimJoint119.Center := Vector3(0,1,0);
HAnimJoint119.SetUlimit([0,0,0]);
HAnimJoint119.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint119]);
HAnimJoint120 := THAnimJointNode.Create;
HAnimJoint120.NameField := 'r_eyebrow_joint';
HAnimJoint120.Center := Vector3(0,1,0);
HAnimJoint120.SetUlimit([0,0,0]);
HAnimJoint120.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint120]);
HAnimJoint121 := THAnimJointNode.Create;
HAnimJoint121.NameField := 'temporomandibular';
HAnimJoint121.Center := Vector3(0,1,0);
HAnimJoint121.SetUlimit([0,0,0]);
HAnimJoint121.SetLlimit([0,0,0]);
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
HAnimJoint122.SetUlimit([0,0,0]);
HAnimJoint122.SetLlimit([0,0,0]);
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.NameField := 'l_acromioclavicular';
HAnimJoint123.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint123.SetUlimit([0,0,0]);
HAnimJoint123.SetLlimit([0,0,0]);
HAnimJoint124 := THAnimJointNode.Create;
HAnimJoint124.NameField := 'l_shoulder';
HAnimJoint124.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimJoint124.SetUlimit([0,0,0]);
HAnimJoint124.SetLlimit([0,0,0]);
HAnimJoint125 := THAnimJointNode.Create;
HAnimJoint125.NameField := 'l_elbow';
HAnimJoint125.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimJoint125.SetUlimit([0,0,0]);
HAnimJoint125.SetLlimit([0,0,0]);
HAnimJoint126 := THAnimJointNode.Create;
HAnimJoint126.NameField := 'l_radiocarpal';
HAnimJoint126.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimJoint126.SetUlimit([0,0,0]);
HAnimJoint126.SetLlimit([0,0,0]);
HAnimJoint127 := THAnimJointNode.Create;
HAnimJoint127.NameField := 'l_midcarpal_1';
HAnimJoint127.Center := Vector3(0,1,0);
HAnimJoint127.SetUlimit([0,0,0]);
HAnimJoint127.SetLlimit([0,0,0]);
HAnimJoint128 := THAnimJointNode.Create;
HAnimJoint128.NameField := 'l_carpometacarpal_1';
HAnimJoint128.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint128.SetUlimit([0,0,0]);
HAnimJoint128.SetLlimit([0,0,0]);
HAnimJoint129 := THAnimJointNode.Create;
HAnimJoint129.NameField := 'l_metacarpophalangeal_1';
HAnimJoint129.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint129.SetUlimit([0,0,0]);
HAnimJoint129.SetLlimit([0,0,0]);
HAnimJoint130 := THAnimJointNode.Create;
HAnimJoint130.NameField := 'l_carpal_interphalangeal_1';
HAnimJoint130.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint130.SetUlimit([0,0,0]);
HAnimJoint130.SetLlimit([0,0,0]);
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
HAnimJoint131.SetUlimit([0,0,0]);
HAnimJoint131.SetLlimit([0,0,0]);
HAnimJoint132 := THAnimJointNode.Create;
HAnimJoint132.NameField := 'l_carpometacarpal_2';
HAnimJoint132.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint132.SetUlimit([0,0,0]);
HAnimJoint132.SetLlimit([0,0,0]);
HAnimJoint133 := THAnimJointNode.Create;
HAnimJoint133.NameField := 'l_metacarpophalangeal_2';
HAnimJoint133.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint133.SetUlimit([0,0,0]);
HAnimJoint133.SetLlimit([0,0,0]);
HAnimJoint134 := THAnimJointNode.Create;
HAnimJoint134.NameField := 'l_carpal_proximal_interphalangeal_2';
HAnimJoint134.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint134.SetUlimit([0,0,0]);
HAnimJoint134.SetLlimit([0,0,0]);
HAnimJoint135 := THAnimJointNode.Create;
HAnimJoint135.NameField := 'l_carpal_distal_interphalangeal_2';
HAnimJoint135.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint135.SetUlimit([0,0,0]);
HAnimJoint135.SetLlimit([0,0,0]);
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
HAnimJoint136.SetUlimit([0,0,0]);
HAnimJoint136.SetLlimit([0,0,0]);
HAnimJoint137 := THAnimJointNode.Create;
HAnimJoint137.NameField := 'l_carpometacarpal_3';
HAnimJoint137.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint137.SetUlimit([0,0,0]);
HAnimJoint137.SetLlimit([0,0,0]);
HAnimJoint138 := THAnimJointNode.Create;
HAnimJoint138.NameField := 'l_metacarpophalangeal_3';
HAnimJoint138.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint138.SetUlimit([0,0,0]);
HAnimJoint138.SetLlimit([0,0,0]);
HAnimJoint139 := THAnimJointNode.Create;
HAnimJoint139.NameField := 'l_carpal_proximal_interphalangeal_3';
HAnimJoint139.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint139.SetUlimit([0,0,0]);
HAnimJoint139.SetLlimit([0,0,0]);
HAnimJoint140 := THAnimJointNode.Create;
HAnimJoint140.NameField := 'l_carpal_distal_interphalangeal_3';
HAnimJoint140.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint140.SetUlimit([0,0,0]);
HAnimJoint140.SetLlimit([0,0,0]);
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
HAnimJoint141.SetUlimit([0,0,0]);
HAnimJoint141.SetLlimit([0,0,0]);
HAnimJoint142 := THAnimJointNode.Create;
HAnimJoint142.NameField := 'l_carpometacarpal_4';
HAnimJoint142.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint142.SetUlimit([0,0,0]);
HAnimJoint142.SetLlimit([0,0,0]);
HAnimJoint143 := THAnimJointNode.Create;
HAnimJoint143.NameField := 'l_metacarpophalangeal_4';
HAnimJoint143.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint143.SetUlimit([0,0,0]);
HAnimJoint143.SetLlimit([0,0,0]);
HAnimJoint144 := THAnimJointNode.Create;
HAnimJoint144.NameField := 'l_carpal_proximal_interphalangeal_4';
HAnimJoint144.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint144.SetUlimit([0,0,0]);
HAnimJoint144.SetLlimit([0,0,0]);
HAnimJoint145 := THAnimJointNode.Create;
HAnimJoint145.NameField := 'l_carpal_distal_interphalangeal_4';
HAnimJoint145.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint145.SetUlimit([0,0,0]);
HAnimJoint145.SetLlimit([0,0,0]);
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
HAnimJoint146.SetUlimit([0,0,0]);
HAnimJoint146.SetLlimit([0,0,0]);
HAnimJoint147 := THAnimJointNode.Create;
HAnimJoint147.NameField := 'l_metacarpophalangeal_5';
HAnimJoint147.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint147.SetUlimit([0,0,0]);
HAnimJoint147.SetLlimit([0,0,0]);
HAnimJoint148 := THAnimJointNode.Create;
HAnimJoint148.NameField := 'l_carpal_proximal_interphalangeal_5';
HAnimJoint148.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint148.SetUlimit([0,0,0]);
HAnimJoint148.SetLlimit([0,0,0]);
HAnimJoint149 := THAnimJointNode.Create;
HAnimJoint149.NameField := 'l_carpal_distal_interphalangeal_5';
HAnimJoint149.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint149.SetUlimit([0,0,0]);
HAnimJoint149.SetLlimit([0,0,0]);
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
HAnimJoint150.SetUlimit([0,0,0]);
HAnimJoint150.SetLlimit([0,0,0]);
HAnimJoint151 := THAnimJointNode.Create;
HAnimJoint151.NameField := 'r_acromioclavicular';
HAnimJoint151.Center := Vector3(-0.0836,1.4281,-0.0401);
HAnimJoint151.SetUlimit([0,0,0]);
HAnimJoint151.SetLlimit([0,0,0]);
HAnimJoint152 := THAnimJointNode.Create;
HAnimJoint152.NameField := 'r_shoulder';
HAnimJoint152.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimJoint152.SetUlimit([0,0,0]);
HAnimJoint152.SetLlimit([0,0,0]);
HAnimJoint153 := THAnimJointNode.Create;
HAnimJoint153.NameField := 'r_elbow';
HAnimJoint153.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimJoint153.SetUlimit([0,0,0]);
HAnimJoint153.SetLlimit([0,0,0]);
HAnimJoint154 := THAnimJointNode.Create;
HAnimJoint154.NameField := 'r_radiocarpal';
HAnimJoint154.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimJoint154.SetUlimit([0,0,0]);
HAnimJoint154.SetLlimit([0,0,0]);
HAnimJoint155 := THAnimJointNode.Create;
HAnimJoint155.NameField := 'r_midcarpal_1';
HAnimJoint155.Center := Vector3(0,1,0);
HAnimJoint155.SetUlimit([0,0,0]);
HAnimJoint155.SetLlimit([0,0,0]);
HAnimJoint156 := THAnimJointNode.Create;
HAnimJoint156.NameField := 'r_carpometacarpal_1';
HAnimJoint156.Center := Vector3(-0.1899,0.8502,-0.0473);
HAnimJoint156.SetUlimit([0,0,0]);
HAnimJoint156.SetLlimit([0,0,0]);
HAnimJoint157 := THAnimJointNode.Create;
HAnimJoint157.NameField := 'r_metacarpophalangeal_1';
HAnimJoint157.Center := Vector3(-0.1874,0.8256,0.0306);
HAnimJoint157.SetUlimit([0,0,0]);
HAnimJoint157.SetLlimit([0,0,0]);
HAnimJoint158 := THAnimJointNode.Create;
HAnimJoint158.NameField := 'r_carpal_interphalangeal_1';
HAnimJoint158.Center := Vector3(-0.1864,0.819,0.0506);
HAnimJoint158.SetUlimit([0,0,0]);
HAnimJoint158.SetLlimit([0,0,0]);
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
HAnimJoint159.SetUlimit([0,0,0]);
HAnimJoint159.SetLlimit([0,0,0]);
HAnimJoint160 := THAnimJointNode.Create;
HAnimJoint160.NameField := 'r_carpometacarpal_2';
HAnimJoint160.Center := Vector3(-0.1961,0.8055,-0.0218);
HAnimJoint160.SetUlimit([0,0,0]);
HAnimJoint160.SetLlimit([0,0,0]);
HAnimJoint161 := THAnimJointNode.Create;
HAnimJoint161.NameField := 'r_metacarpophalangeal_2';
HAnimJoint161.Center := Vector3(-0.1961,0.7846,-0.0218);
HAnimJoint161.SetUlimit([0,0,0]);
HAnimJoint161.SetLlimit([0,0,0]);
HAnimJoint162 := THAnimJointNode.Create;
HAnimJoint162.NameField := 'r_carpal_proximal_interphalangeal_2';
HAnimJoint162.Center := Vector3(-0.1954,0.7393,-0.0185);
HAnimJoint162.SetUlimit([0,0,0]);
HAnimJoint162.SetLlimit([0,0,0]);
HAnimJoint163 := THAnimJointNode.Create;
HAnimJoint163.NameField := 'r_carpal_distal_interphalangeal_2';
HAnimJoint163.Center := Vector3(-0.1945,0.7169,-0.0173);
HAnimJoint163.SetUlimit([0,0,0]);
HAnimJoint163.SetLlimit([0,0,0]);
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
HAnimJoint164.SetUlimit([0,0,0]);
HAnimJoint164.SetLlimit([0,0,0]);
HAnimJoint165 := THAnimJointNode.Create;
HAnimJoint165.NameField := 'r_carpometacarpal_3';
HAnimJoint165.Center := Vector3(-0.1972,0.806,-0.0468);
HAnimJoint165.SetUlimit([0,0,0]);
HAnimJoint165.SetLlimit([0,0,0]);
HAnimJoint166 := THAnimJointNode.Create;
HAnimJoint166.NameField := 'r_metacarpophalangeal_3';
HAnimJoint166.Center := Vector3(-0.1972,0.7849,-0.0468);
HAnimJoint166.SetUlimit([0,0,0]);
HAnimJoint166.SetLlimit([0,0,0]);
HAnimJoint167 := THAnimJointNode.Create;
HAnimJoint167.NameField := 'r_carpal_proximal_interphalangeal_3';
HAnimJoint167.Center := Vector3(-0.195,0.7304,-0.0441);
HAnimJoint167.SetUlimit([0,0,0]);
HAnimJoint167.SetLlimit([0,0,0]);
HAnimJoint168 := THAnimJointNode.Create;
HAnimJoint168.NameField := 'r_carpal_distal_interphalangeal_3';
HAnimJoint168.Center := Vector3(-0.1939,0.7042,-0.0432);
HAnimJoint168.SetUlimit([0,0,0]);
HAnimJoint168.SetLlimit([0,0,0]);
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
HAnimJoint169.SetUlimit([0,0,0]);
HAnimJoint169.SetLlimit([0,0,0]);
HAnimJoint170 := THAnimJointNode.Create;
HAnimJoint170.NameField := 'r_carpometacarpal_4';
HAnimJoint170.Center := Vector3(-0.1951,0.8049,-0.0732);
HAnimJoint170.SetUlimit([0,0,0]);
HAnimJoint170.SetLlimit([0,0,0]);
HAnimJoint171 := THAnimJointNode.Create;
HAnimJoint171.NameField := 'r_metacarpophalangeal_4';
HAnimJoint171.Center := Vector3(-0.1951,0.7845,-0.0732);
HAnimJoint171.SetUlimit([0,0,0]);
HAnimJoint171.SetLlimit([0,0,0]);
HAnimJoint172 := THAnimJointNode.Create;
HAnimJoint172.NameField := 'r_carpal_proximal_interphalangeal_4';
HAnimJoint172.Center := Vector3(-0.192,0.7318,-0.0716);
HAnimJoint172.SetUlimit([0,0,0]);
HAnimJoint172.SetLlimit([0,0,0]);
HAnimJoint173 := THAnimJointNode.Create;
HAnimJoint173.NameField := 'r_carpal_distal_interphalangeal_4';
HAnimJoint173.Center := Vector3(-0.1908,0.7077,-0.0706);
HAnimJoint173.SetUlimit([0,0,0]);
HAnimJoint173.SetLlimit([0,0,0]);
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
HAnimJoint174.SetUlimit([0,0,0]);
HAnimJoint174.SetLlimit([0,0,0]);
HAnimJoint175 := THAnimJointNode.Create;
HAnimJoint175.NameField := 'r_metacarpophalangeal_5';
HAnimJoint175.Center := Vector3(-0.1926,0.7896,-0.0975);
HAnimJoint175.SetUlimit([0,0,0]);
HAnimJoint175.SetLlimit([0,0,0]);
HAnimJoint176 := THAnimJointNode.Create;
HAnimJoint176.NameField := 'r_carpal_proximal_interphalangeal_5';
HAnimJoint176.Center := Vector3(-0.1902,0.7483,-0.0963);
HAnimJoint176.SetUlimit([0,0,0]);
HAnimJoint176.SetLlimit([0,0,0]);
HAnimJoint177 := THAnimJointNode.Create;
HAnimJoint177.NameField := 'r_carpal_distal_interphalangeal_5';
HAnimJoint177.Center := Vector3(-0.1908,0.754,-0.096);
HAnimJoint177.SetUlimit([0,0,0]);
HAnimJoint177.SetLlimit([0,0,0]);
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
HAnimJoint178 := THAnimJointNode.Create;
HAnimJoint178 := HAnimJoint32;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint178;
HAnimJoint179 := THAnimJointNode.Create;
HAnimJoint179 := HAnimJoint33;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint179;
HAnimJoint180 := THAnimJointNode.Create;
HAnimJoint180 := HAnimJoint34;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint180;
HAnimJoint181 := THAnimJointNode.Create;
HAnimJoint181 := HAnimJoint35;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint181;
HAnimJoint182 := THAnimJointNode.Create;
HAnimJoint182 := HAnimJoint36;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint182;
HAnimJoint183 := THAnimJointNode.Create;
HAnimJoint183 := HAnimJoint37;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint183;
HAnimJoint184 := THAnimJointNode.Create;
HAnimJoint184 := HAnimJoint38;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint184;
HAnimJoint185 := THAnimJointNode.Create;
HAnimJoint185 := HAnimJoint39;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint185;
HAnimJoint186 := THAnimJointNode.Create;
HAnimJoint186 := HAnimJoint40;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint186;
HAnimJoint187 := THAnimJointNode.Create;
HAnimJoint187 := HAnimJoint41;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint187;
HAnimJoint188 := THAnimJointNode.Create;
HAnimJoint188 := HAnimJoint42;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint188;
HAnimJoint189 := THAnimJointNode.Create;
HAnimJoint189 := HAnimJoint43;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint189;
HAnimJoint190 := THAnimJointNode.Create;
HAnimJoint190 := HAnimJoint44;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint190;
HAnimJoint191 := THAnimJointNode.Create;
HAnimJoint191 := HAnimJoint45;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint191;
HAnimJoint192 := THAnimJointNode.Create;
HAnimJoint192 := HAnimJoint46;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint192;
HAnimJoint193 := THAnimJointNode.Create;
HAnimJoint193 := HAnimJoint47;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint193;
HAnimJoint194 := THAnimJointNode.Create;
HAnimJoint194 := HAnimJoint48;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint194;
HAnimJoint195 := THAnimJointNode.Create;
HAnimJoint195 := HAnimJoint49;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint195;
HAnimJoint196 := THAnimJointNode.Create;
HAnimJoint196 := HAnimJoint50;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint196;
HAnimJoint197 := THAnimJointNode.Create;
HAnimJoint197 := HAnimJoint51;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint197;
HAnimJoint198 := THAnimJointNode.Create;
HAnimJoint198 := HAnimJoint52;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint198;
HAnimJoint199 := THAnimJointNode.Create;
HAnimJoint199 := HAnimJoint53;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint199;
HAnimJoint200 := THAnimJointNode.Create;
HAnimJoint200 := HAnimJoint54;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint200;
HAnimJoint201 := THAnimJointNode.Create;
HAnimJoint201 := HAnimJoint55;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint201;
HAnimJoint202 := THAnimJointNode.Create;
HAnimJoint202 := HAnimJoint56;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint202;
HAnimJoint203 := THAnimJointNode.Create;
HAnimJoint203 := HAnimJoint57;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint203;
HAnimJoint204 := THAnimJointNode.Create;
HAnimJoint204 := HAnimJoint58;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint204;
HAnimJoint205 := THAnimJointNode.Create;
HAnimJoint205 := HAnimJoint59;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint205;
HAnimJoint206 := THAnimJointNode.Create;
HAnimJoint206 := HAnimJoint60;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint206;
HAnimJoint207 := THAnimJointNode.Create;
HAnimJoint207 := HAnimJoint61;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint207;
HAnimJoint208 := THAnimJointNode.Create;
HAnimJoint208 := HAnimJoint62;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint208;
HAnimJoint209 := THAnimJointNode.Create;
HAnimJoint209 := HAnimJoint63;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint209;
HAnimJoint210 := THAnimJointNode.Create;
HAnimJoint210 := HAnimJoint64;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint210;
HAnimJoint211 := THAnimJointNode.Create;
HAnimJoint211 := HAnimJoint65;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint211;
HAnimJoint212 := THAnimJointNode.Create;
HAnimJoint212 := HAnimJoint66;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint212;
HAnimJoint213 := THAnimJointNode.Create;
HAnimJoint213 := HAnimJoint67;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint213;
HAnimJoint214 := THAnimJointNode.Create;
HAnimJoint214 := HAnimJoint68;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint214;
HAnimJoint215 := THAnimJointNode.Create;
HAnimJoint215 := HAnimJoint69;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint215;
HAnimJoint216 := THAnimJointNode.Create;
HAnimJoint216 := HAnimJoint70;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint216;
HAnimJoint217 := THAnimJointNode.Create;
HAnimJoint217 := HAnimJoint71;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint217;
HAnimJoint218 := THAnimJointNode.Create;
HAnimJoint218 := HAnimJoint72;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint218;
HAnimJoint219 := THAnimJointNode.Create;
HAnimJoint219 := HAnimJoint73;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint219;
HAnimJoint220 := THAnimJointNode.Create;
HAnimJoint220 := HAnimJoint74;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint220;
HAnimJoint221 := THAnimJointNode.Create;
HAnimJoint221 := HAnimJoint75;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint221;
HAnimJoint222 := THAnimJointNode.Create;
HAnimJoint222 := HAnimJoint76;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint222;
HAnimJoint223 := THAnimJointNode.Create;
HAnimJoint223 := HAnimJoint77;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint223;
HAnimJoint224 := THAnimJointNode.Create;
HAnimJoint224 := HAnimJoint78;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint224;
HAnimJoint225 := THAnimJointNode.Create;
HAnimJoint225 := HAnimJoint79;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint225;
HAnimJoint226 := THAnimJointNode.Create;
HAnimJoint226 := HAnimJoint80;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint226;
HAnimJoint227 := THAnimJointNode.Create;
HAnimJoint227 := HAnimJoint81;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint227;
HAnimJoint228 := THAnimJointNode.Create;
HAnimJoint228 := HAnimJoint82;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint228;
HAnimJoint229 := THAnimJointNode.Create;
HAnimJoint229 := HAnimJoint83;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint229;
HAnimJoint230 := THAnimJointNode.Create;
HAnimJoint230 := HAnimJoint84;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint230;
HAnimJoint231 := THAnimJointNode.Create;
HAnimJoint231 := HAnimJoint85;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint231;
HAnimJoint232 := THAnimJointNode.Create;
HAnimJoint232 := HAnimJoint86;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint232;
HAnimJoint233 := THAnimJointNode.Create;
HAnimJoint233 := HAnimJoint87;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint233;
HAnimJoint234 := THAnimJointNode.Create;
HAnimJoint234 := HAnimJoint88;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint234;
HAnimJoint235 := THAnimJointNode.Create;
HAnimJoint235 := HAnimJoint89;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint235;
HAnimJoint236 := THAnimJointNode.Create;
HAnimJoint236 := HAnimJoint90;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint236;
HAnimJoint237 := THAnimJointNode.Create;
HAnimJoint237 := HAnimJoint91;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint237;
HAnimJoint238 := THAnimJointNode.Create;
HAnimJoint238 := HAnimJoint92;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint238;
HAnimJoint239 := THAnimJointNode.Create;
HAnimJoint239 := HAnimJoint93;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint239;
HAnimJoint240 := THAnimJointNode.Create;
HAnimJoint240 := HAnimJoint94;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint240;
HAnimJoint241 := THAnimJointNode.Create;
HAnimJoint241 := HAnimJoint95;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint241;
HAnimJoint242 := THAnimJointNode.Create;
HAnimJoint242 := HAnimJoint96;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint242;
HAnimJoint243 := THAnimJointNode.Create;
HAnimJoint243 := HAnimJoint97;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint243;
HAnimJoint244 := THAnimJointNode.Create;
HAnimJoint244 := HAnimJoint98;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint244;
HAnimJoint245 := THAnimJointNode.Create;
HAnimJoint245 := HAnimJoint99;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint245;
HAnimJoint246 := THAnimJointNode.Create;
HAnimJoint246 := HAnimJoint100;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint246;
HAnimJoint247 := THAnimJointNode.Create;
HAnimJoint247 := HAnimJoint101;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint247;
HAnimJoint248 := THAnimJointNode.Create;
HAnimJoint248 := HAnimJoint102;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint248;
HAnimJoint249 := THAnimJointNode.Create;
HAnimJoint249 := HAnimJoint103;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint249;
HAnimJoint250 := THAnimJointNode.Create;
HAnimJoint250 := HAnimJoint104;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint250;
HAnimJoint251 := THAnimJointNode.Create;
HAnimJoint251 := HAnimJoint105;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint251;
HAnimJoint252 := THAnimJointNode.Create;
HAnimJoint252 := HAnimJoint106;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint252;
HAnimJoint253 := THAnimJointNode.Create;
HAnimJoint253 := HAnimJoint107;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint253;
HAnimJoint254 := THAnimJointNode.Create;
HAnimJoint254 := HAnimJoint108;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint254;
HAnimJoint255 := THAnimJointNode.Create;
HAnimJoint255 := HAnimJoint109;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint255;
HAnimJoint256 := THAnimJointNode.Create;
HAnimJoint256 := HAnimJoint110;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint256;
HAnimJoint257 := THAnimJointNode.Create;
HAnimJoint257 := HAnimJoint111;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint257;
HAnimJoint258 := THAnimJointNode.Create;
HAnimJoint258 := HAnimJoint112;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint258;
HAnimJoint259 := THAnimJointNode.Create;
HAnimJoint259 := HAnimJoint113;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint259;
HAnimJoint260 := THAnimJointNode.Create;
HAnimJoint260 := HAnimJoint114;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint260;
HAnimJoint261 := THAnimJointNode.Create;
HAnimJoint261 := HAnimJoint115;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint261;
HAnimJoint262 := THAnimJointNode.Create;
HAnimJoint262 := HAnimJoint116;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint262;
HAnimJoint263 := THAnimJointNode.Create;
HAnimJoint263 := HAnimJoint117;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint263;
HAnimJoint264 := THAnimJointNode.Create;
HAnimJoint264 := HAnimJoint118;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint264;
HAnimJoint265 := THAnimJointNode.Create;
HAnimJoint265 := HAnimJoint119;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint265;
HAnimJoint266 := THAnimJointNode.Create;
HAnimJoint266 := HAnimJoint120;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint266;
HAnimJoint267 := THAnimJointNode.Create;
HAnimJoint267 := HAnimJoint121;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint267;
HAnimJoint268 := THAnimJointNode.Create;
HAnimJoint268 := HAnimJoint122;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint268;
HAnimJoint269 := THAnimJointNode.Create;
HAnimJoint269 := HAnimJoint123;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint269;
HAnimJoint270 := THAnimJointNode.Create;
HAnimJoint270 := HAnimJoint124;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint270;
HAnimJoint271 := THAnimJointNode.Create;
HAnimJoint271 := HAnimJoint125;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint271;
HAnimJoint272 := THAnimJointNode.Create;
HAnimJoint272 := HAnimJoint126;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint272;
HAnimJoint273 := THAnimJointNode.Create;
HAnimJoint273 := HAnimJoint127;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint273;
HAnimJoint274 := THAnimJointNode.Create;
HAnimJoint274 := HAnimJoint128;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint274;
HAnimJoint275 := THAnimJointNode.Create;
HAnimJoint275 := HAnimJoint129;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint275;
HAnimJoint276 := THAnimJointNode.Create;
HAnimJoint276 := HAnimJoint130;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint276;
HAnimJoint277 := THAnimJointNode.Create;
HAnimJoint277 := HAnimJoint131;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint277;
HAnimJoint278 := THAnimJointNode.Create;
HAnimJoint278 := HAnimJoint132;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint278;
HAnimJoint279 := THAnimJointNode.Create;
HAnimJoint279 := HAnimJoint133;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint279;
HAnimJoint280 := THAnimJointNode.Create;
HAnimJoint280 := HAnimJoint134;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint280;
HAnimJoint281 := THAnimJointNode.Create;
HAnimJoint281 := HAnimJoint135;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint281;
HAnimJoint282 := THAnimJointNode.Create;
HAnimJoint282 := HAnimJoint136;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint282;
HAnimJoint283 := THAnimJointNode.Create;
HAnimJoint283 := HAnimJoint137;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint283;
HAnimJoint284 := THAnimJointNode.Create;
HAnimJoint284 := HAnimJoint138;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint284;
HAnimJoint285 := THAnimJointNode.Create;
HAnimJoint285 := HAnimJoint139;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint285;
HAnimJoint286 := THAnimJointNode.Create;
HAnimJoint286 := HAnimJoint140;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint286;
HAnimJoint287 := THAnimJointNode.Create;
HAnimJoint287 := HAnimJoint141;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint287;
HAnimJoint288 := THAnimJointNode.Create;
HAnimJoint288 := HAnimJoint142;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint288;
HAnimJoint289 := THAnimJointNode.Create;
HAnimJoint289 := HAnimJoint143;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint289;
HAnimJoint290 := THAnimJointNode.Create;
HAnimJoint290 := HAnimJoint144;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint290;
HAnimJoint291 := THAnimJointNode.Create;
HAnimJoint291 := HAnimJoint145;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint291;
HAnimJoint292 := THAnimJointNode.Create;
HAnimJoint292 := HAnimJoint146;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint292;
HAnimJoint293 := THAnimJointNode.Create;
HAnimJoint293 := HAnimJoint147;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint293;
HAnimJoint294 := THAnimJointNode.Create;
HAnimJoint294 := HAnimJoint148;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint294;
HAnimJoint295 := THAnimJointNode.Create;
HAnimJoint295 := HAnimJoint149;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint295;
HAnimJoint296 := THAnimJointNode.Create;
HAnimJoint296 := HAnimJoint150;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint296;
HAnimJoint297 := THAnimJointNode.Create;
HAnimJoint297 := HAnimJoint151;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint297;
HAnimJoint298 := THAnimJointNode.Create;
HAnimJoint298 := HAnimJoint152;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint298;
HAnimJoint299 := THAnimJointNode.Create;
HAnimJoint299 := HAnimJoint153;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint299;
HAnimJoint300 := THAnimJointNode.Create;
HAnimJoint300 := HAnimJoint154;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint300;
HAnimJoint301 := THAnimJointNode.Create;
HAnimJoint301 := HAnimJoint155;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint301;
HAnimJoint302 := THAnimJointNode.Create;
HAnimJoint302 := HAnimJoint156;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint302;
HAnimJoint303 := THAnimJointNode.Create;
HAnimJoint303 := HAnimJoint157;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint303;
HAnimJoint304 := THAnimJointNode.Create;
HAnimJoint304 := HAnimJoint158;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint304;
HAnimJoint305 := THAnimJointNode.Create;
HAnimJoint305 := HAnimJoint159;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint305;
HAnimJoint306 := THAnimJointNode.Create;
HAnimJoint306 := HAnimJoint160;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint306;
HAnimJoint307 := THAnimJointNode.Create;
HAnimJoint307 := HAnimJoint161;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint307;
HAnimJoint308 := THAnimJointNode.Create;
HAnimJoint308 := HAnimJoint162;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint308;
HAnimJoint309 := THAnimJointNode.Create;
HAnimJoint309 := HAnimJoint163;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint309;
HAnimJoint310 := THAnimJointNode.Create;
HAnimJoint310 := HAnimJoint164;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint310;
HAnimJoint311 := THAnimJointNode.Create;
HAnimJoint311 := HAnimJoint165;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint311;
HAnimJoint312 := THAnimJointNode.Create;
HAnimJoint312 := HAnimJoint166;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint312;
HAnimJoint313 := THAnimJointNode.Create;
HAnimJoint313 := HAnimJoint167;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint313;
HAnimJoint314 := THAnimJointNode.Create;
HAnimJoint314 := HAnimJoint168;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint314;
HAnimJoint315 := THAnimJointNode.Create;
HAnimJoint315 := HAnimJoint169;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint315;
HAnimJoint316 := THAnimJointNode.Create;
HAnimJoint316 := HAnimJoint170;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint316;
HAnimJoint317 := THAnimJointNode.Create;
HAnimJoint317 := HAnimJoint171;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint317;
HAnimJoint318 := THAnimJointNode.Create;
HAnimJoint318 := HAnimJoint172;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint318;
HAnimJoint319 := THAnimJointNode.Create;
HAnimJoint319 := HAnimJoint173;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint319;
HAnimJoint320 := THAnimJointNode.Create;
HAnimJoint320 := HAnimJoint174;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint320;
HAnimJoint321 := THAnimJointNode.Create;
HAnimJoint321 := HAnimJoint175;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint321;
HAnimJoint322 := THAnimJointNode.Create;
HAnimJoint322 := HAnimJoint176;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint322;
HAnimJoint323 := THAnimJointNode.Create;
HAnimJoint323 := HAnimJoint177;
{ .AddJoints }
HAnimHumanoid31.Joints := HAnimJoint323;
{ .AddChildren }
Group11.AddChildren([HAnimHumanoid31]);
{ .AddGroup }
X3D0.AddChildren([Group11]);
Result := X3D0;
end;
