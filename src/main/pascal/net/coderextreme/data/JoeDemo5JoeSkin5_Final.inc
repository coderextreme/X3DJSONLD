function JoeDemo5JoeSkin5_Final: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group5: TGroupNode;
WorldInfo6: TWorldInfoNode;
NavigationInfo7: TNavigationInfoNode;
Background8: TBackgroundNode;
DirectionalLight9: TDirectionalLightNode;
DirectionalLight10: TDirectionalLightNode;
DirectionalLight11: TDirectionalLightNode;
Group12: TGroupNode;
Viewpoint13: TViewpointNode;
Viewpoint14: TViewpointNode;
Viewpoint15: TViewpointNode;
Viewpoint16: TViewpointNode;
Viewpoint17: TViewpointNode;
Viewpoint18: TViewpointNode;
Viewpoint19: TViewpointNode;
Viewpoint20: TViewpointNode;
Viewpoint21: TViewpointNode;
Viewpoint22: TViewpointNode;
Transform23: TTransformNode;
Inline24: TInlineNode;
Viewpoint25: TViewpointNode;
Group26: TGroupNode;
HAnimHumanoid27: THAnimHumanoidNode;
HAnimJoint28: THAnimJointNode;
HAnimSite29: THAnimSiteNode;
Transform30: TTransformNode;
Inline31: TInlineNode;
Viewpoint32: TViewpointNode;
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
Shape210: TShapeNode;
IndexedFaceSet211: TIndexedFaceSetNode;
Coordinate212: TCoordinateNode;
Appearance213: TAppearanceNode;
ImageTexture214: TImageTextureNode;
Material215: TMaterialNode;
Coordinate216: TCoordinateNode;
Transform217: TTransformNode;
Shape218: TShapeNode;
Appearance219: TAppearanceNode;
Material220: TMaterialNode;
ImageTexture221: TImageTextureNode;
IndexedFaceSet222: TIndexedFaceSetNode;
Coordinate223: TCoordinateNode;
Viewpoint224: TViewpointNode;
Transform225: TTransformNode;
Inline226: TInlineNode;
Transform227: TTransformNode;
Shape228: TShapeNode;
Appearance229: TAppearanceNode;
Material230: TMaterialNode;
IndexedLineSet231: TIndexedLineSetNode;
Coordinate232: TCoordinateNode;
Transform233: TTransformNode;
Shape234: TShapeNode;
Appearance235: TAppearanceNode;
Material236: TMaterialNode;
IndexedLineSet237: TIndexedLineSetNode;
Transform238: TTransformNode;
Shape239: TShapeNode;
Appearance240: TAppearanceNode;
Material241: TMaterialNode;
IndexedLineSet242: TIndexedLineSetNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 1;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'JoeDemo5JoeSkin5.x3d';
X3D0.Meta['description'] := 'joe kick into std anims';
Group5 := TGroupNode.Create;
WorldInfo6 := TWorldInfoNode.Create;
WorldInfo6.Title := 'JoeDemo5JoeSkin.x3d, Only Skin';
{ .AddChildren }
Group5.AddChildren([WorldInfo6]);
NavigationInfo7 := TNavigationInfoNode.Create;
NavigationInfo7.Headlight := False;
{ .AddChildren }
Group5.AddChildren([NavigationInfo7]);
Background8 := TBackgroundNode.Create;
Background8.SetSkyColor([Vector3(0.4,0.4,0.4)]);
Background8.SetGroundColor([Vector3(0.5,0.5,0.5)]);
{ .AddChildren }
Group5.AddChildren([Background8]);
DirectionalLight9 := TDirectionalLightNode.Create;
DirectionalLight9.Global := True;
{ .AddChildren }
Group5.AddChildren([DirectionalLight9]);
DirectionalLight10 := TDirectionalLightNode.Create;
DirectionalLight10.Direction := Vector3(0,0.5,0);
DirectionalLight10.Global := True;
DirectionalLight10.Intensity := 0.75;
{ .AddChildren }
Group5.AddChildren([DirectionalLight10]);
DirectionalLight11 := TDirectionalLightNode.Create;
DirectionalLight11.Direction := Vector3(0,0,1);
DirectionalLight11.Global := True;
{ .AddChildren }
Group5.AddChildren([DirectionalLight11]);
Group12 := TGroupNode.Create;
Viewpoint13 := TViewpointNode.Create;
Viewpoint13.CenterOfRotation := Vector3(0,1,0);
Viewpoint13.Description := 'JinLOA4';
Viewpoint13.Position := Vector3(0,1,3);
{ .AddChildren }
Group12.AddChildren([Viewpoint13]);
Viewpoint14 := TViewpointNode.Create;
Viewpoint14.CenterOfRotation := Vector3(0,0.9,0.0016);
Viewpoint14.Description := 'JinLOA4 Front';
Viewpoint14.Position := Vector3(0,0.4,4);
{ .AddChildren }
Group12.AddChildren([Viewpoint14]);
Viewpoint15 := TViewpointNode.Create;
Viewpoint15.CenterOfRotation := Vector3(0,0.9,0.0016);
Viewpoint15.Description := 'JinLOA4 Front Close';
Viewpoint15.Position := Vector3(0,0.8,2);
{ .AddChildren }
Group12.AddChildren([Viewpoint15]);
Viewpoint16 := TViewpointNode.Create;
Viewpoint16.CenterOfRotation := Vector3(0,0.9,0.0016);
Viewpoint16.Description := 'JinLOA4 Front Closer';
Viewpoint16.Position := Vector3(0,1.2,1);
{ .AddChildren }
Group12.AddChildren([Viewpoint16]);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.CenterOfRotation := Vector3(0,1.5,0.0016);
Viewpoint17.Description := 'JinLOA4 Front Face';
Viewpoint17.Position := Vector3(0,1.63,1);
{ .AddChildren }
Group12.AddChildren([Viewpoint17]);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.CenterOfRotation := Vector3(0,0.9,0.0016);
Viewpoint18.Description := 'JinLOA4 Right Side';
Viewpoint18.Orientation := Vector4(0,1,0,1.57);
Viewpoint18.Position := Vector3(2.6,0.8,0);
{ .AddChildren }
Group12.AddChildren([Viewpoint18]);
Viewpoint19 := TViewpointNode.Create;
Viewpoint19.CenterOfRotation := Vector3(0,0.9,0.0016);
Viewpoint19.Description := 'JinLOA4 Right Side Close';
Viewpoint19.Orientation := Vector4(0,1,0,1.2);
Viewpoint19.Position := Vector3(1,0.8,0.5);
{ .AddChildren }
Group12.AddChildren([Viewpoint19]);
Viewpoint20 := TViewpointNode.Create;
Viewpoint20.CenterOfRotation := Vector3(0,0.9,0.0016);
Viewpoint20.Description := 'JinLOA4 Left Side Close';
Viewpoint20.Orientation := Vector4(0,1,0,-1.2);
Viewpoint20.Position := Vector3(-1,0.8,0.5);
{ .AddChildren }
Group12.AddChildren([Viewpoint20]);
Viewpoint21 := TViewpointNode.Create;
Viewpoint21.CenterOfRotation := Vector3(0,0.9,0.0016);
Viewpoint21.Description := 'JinLOA4 Left Side';
Viewpoint21.Orientation := Vector4(0,1,0,-1.57);
Viewpoint21.Position := Vector3(-2.6,0.8,0);
{ .AddChildren }
Group12.AddChildren([Viewpoint21]);
Viewpoint22 := TViewpointNode.Create;
Viewpoint22.CenterOfRotation := Vector3(0,0.9,0.0016);
Viewpoint22.Description := 'JinLOA4 Top';
Viewpoint22.Orientation := Vector4(1,0,0,-1.5708);
Viewpoint22.Position := Vector3(0,3.5,0);
{ .AddChildren }
Group12.AddChildren([Viewpoint22]);
{ .AddChildren }
Group5.AddChildren([Group12]);
Transform23 := TTransformNode.Create;
Transform23.Scale := Vector3(0.17,0.17,0.17);
Inline24 := TInlineNode.Create;
Inline24.SetUrl(['JointCoordinateAxes.x3dv']);
{ .AddChildren }
Transform23.AddChildren([Inline24]);
Viewpoint25 := TViewpointNode.Create;
Viewpoint25.Description := 'Host 0 0 0 View';
{ .AddChildren }
Transform23.AddChildren([Viewpoint25]);
{ .AddChildren }
Group5.AddChildren([Transform23]);
Group26 := TGroupNode.Create;
HAnimHumanoid27 := THAnimHumanoidNode.Create;
HAnimHumanoid27.Version := '2.0';
HAnimJoint28 := THAnimJointNode.Create;
HAnimJoint28.NameField := 'humanoid_root';
HAnimJoint28.Center := Vector3(0,0.875,0);
HAnimJoint28.SetUlimit([0,0,0]);
HAnimJoint28.SetLlimit([0,0,0]);
HAnimSite29 := THAnimSiteNode.Create;
HAnimSite29.NameField := 'RootFront';
Transform30 := TTransformNode.Create;
Transform30.Scale := Vector3(0.17,0.17,0.17);
Inline31 := TInlineNode.Create;
Inline31.SetUrl(['JointCoordinateAxes.x3dv']);
{ .AddChildren }
Transform30.AddChildren([Inline31]);
Viewpoint32 := TViewpointNode.Create;
Viewpoint32.Description := 'HAnim 0 0 0 View';
{ .AddChildren }
Transform30.AddChildren([Viewpoint32]);
{ .AddChildren }
HAnimSite29.AddChildren([Transform30]);
{ .AddChild }
HAnimJoint28.AddChildren([HAnimSite29]);
HAnimJoint33 := THAnimJointNode.Create;
HAnimJoint33.NameField := 'sacroiliac';
HAnimJoint33.Center := Vector3(0,0.920000016689301,0);
HAnimJoint33.SetSkinCoordIndex([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint33.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,0.349999994039536,0.349999994039536,1]);
HAnimJoint33.SetUlimit([0,0,0]);
HAnimJoint33.SetLlimit([0,0,0]);
HAnimJoint34 := THAnimJointNode.Create;
HAnimJoint34.NameField := 'l_hip';
HAnimJoint34.Center := Vector3(0.100000001490116,0.920000016689301,0);
HAnimJoint34.SetSkinCoordIndex([89,90,94,95,96,97]);
HAnimJoint34.SetSkinCoordWeight([0.649999976158142,1,1,1,1,1]);
HAnimJoint34.SetUlimit([0,0,0]);
HAnimJoint34.SetLlimit([0,0,0]);
HAnimJoint35 := THAnimJointNode.Create;
HAnimJoint35.NameField := 'l_knee';
HAnimJoint35.Center := Vector3(0.115000002086163,0.465999990701675,0);
HAnimJoint35.SetSkinCoordIndex([334,335,336,337,338,339,340,341]);
HAnimJoint35.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint35.SetUlimit([0,0,0]);
HAnimJoint35.SetLlimit([0,0,0]);
HAnimJoint36 := THAnimJointNode.Create;
HAnimJoint36.NameField := 'l_talocrural';
HAnimJoint36.Center := Vector3(0.115000002086163,0.0689999982714653,0);
HAnimJoint36.SetSkinCoordIndex([342,343,344,345]);
HAnimJoint36.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint36.SetUlimit([0,0,0]);
HAnimJoint36.SetLlimit([0,0,0]);
HAnimJoint37 := THAnimJointNode.Create;
HAnimJoint37.NameField := 'l_tarsometatarsal_2';
HAnimJoint37.Center := Vector3(0.115000002086163,0.0309999994933605,0.0299999993294477);
HAnimJoint37.SetSkinCoordIndex([346,347,348,71]);
HAnimJoint37.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint37.SetUlimit([0,0,0]);
HAnimJoint37.SetLlimit([0,0,0]);
HAnimJoint38 := THAnimJointNode.Create;
HAnimJoint38.NameField := 'l_metatarsophalangeal_2';
HAnimJoint38.Center := Vector3(0.115000002086163,0.0370000004768372,0.0900000035762787);
HAnimJoint38.SetSkinCoordIndex([349,350,351,352]);
HAnimJoint38.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint38.SetUlimit([0,0,0]);
HAnimJoint38.SetLlimit([0,0,0]);
HAnimJoint39 := THAnimJointNode.Create;
HAnimJoint39.NameField := 'l_metatarsal_2';
HAnimJoint39.Center := Vector3(0.115000002086163,0.0199999995529652,0.122000001370907);
HAnimJoint39.SetSkinCoordIndex([353,354,355,356,357,358,359,360,361]);
HAnimJoint39.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimJoint39.SetUlimit([0,0,0]);
HAnimJoint39.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint38.AddChildren([HAnimJoint39]);
{ .AddChildren }
HAnimJoint37.AddChildren([HAnimJoint38]);
{ .AddChildren }
HAnimJoint36.AddChildren([HAnimJoint37]);
{ .AddChildren }
HAnimJoint35.AddChildren([HAnimJoint36]);
{ .AddChildren }
HAnimJoint34.AddChildren([HAnimJoint35]);
{ .AddChildren }
HAnimJoint33.AddChildren([HAnimJoint34]);
HAnimJoint40 := THAnimJointNode.Create;
HAnimJoint40.NameField := 'r_hip';
HAnimJoint40.Center := Vector3(-0.100000001490116,0.920000016689301,0);
HAnimJoint40.SetSkinCoordIndex([91,92,98,99,100,101,362,363]);
HAnimJoint40.SetSkinCoordWeight([0.649999976158142,1,0.800000011920929,1,1,1,0.400000005960464,0.800000011920929]);
HAnimJoint40.SetUlimit([0,0,0]);
HAnimJoint40.SetLlimit([0,0,0]);
HAnimJoint41 := THAnimJointNode.Create;
HAnimJoint41.NameField := 'r_knee';
HAnimJoint41.Center := Vector3(-0.0500000007450581,0.465999990701675,0);
HAnimJoint41.SetSkinCoordIndex([362,363,364,365,366,367,368,369,98]);
HAnimJoint41.SetSkinCoordWeight([0.600000023841858,0.200000002980232,1,1,1,1,1,1,0.200000002980232]);
HAnimJoint41.SetUlimit([0,0,0]);
HAnimJoint41.SetLlimit([0,0,0]);
HAnimJoint42 := THAnimJointNode.Create;
HAnimJoint42.NameField := 'r_talocrural';
HAnimJoint42.Center := Vector3(-0.115000002086163,0.0689999982714653,0);
HAnimJoint42.SetSkinCoordIndex([370,371,372,373]);
HAnimJoint42.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint42.SetUlimit([0,0,0]);
HAnimJoint42.SetLlimit([0,0,0]);
HAnimJoint43 := THAnimJointNode.Create;
HAnimJoint43.NameField := 'r_tarsometatarsal_2';
HAnimJoint43.Center := Vector3(-0.100000001490116,0.0149999996647239,-0.00999999977648258);
HAnimJoint43.SetSkinCoordIndex([374,375,376]);
HAnimJoint43.SetSkinCoordWeight([1,1,1]);
HAnimJoint43.SetUlimit([0,0,0]);
HAnimJoint43.SetLlimit([0,0,0]);
HAnimJoint44 := THAnimJointNode.Create;
HAnimJoint44.NameField := 'r_metatarsophalangeal_2';
HAnimJoint44.Center := Vector3(-0.115000002086163,0.0370000004768372,0.0900000035762787);
HAnimJoint44.SetSkinCoordIndex([377,378,379,380]);
HAnimJoint44.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint44.SetUlimit([0,0,0]);
HAnimJoint44.SetLlimit([0,0,0]);
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45.NameField := 'r_tarsal_distal_interphalangeal_2';
HAnimJoint45.Center := Vector3(-0.100000001490116,0.00999999977648258,0.140000000596046);
HAnimJoint45.SetSkinCoordIndex([381,382,383,384,385,386,387,388,389]);
HAnimJoint45.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimJoint45.SetUlimit([0,0,0]);
HAnimJoint45.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint44.AddChildren([HAnimJoint45]);
{ .AddChildren }
HAnimJoint43.AddChildren([HAnimJoint44]);
{ .AddChildren }
HAnimJoint42.AddChildren([HAnimJoint43]);
{ .AddChildren }
HAnimJoint41.AddChildren([HAnimJoint42]);
{ .AddChildren }
HAnimJoint40.AddChildren([HAnimJoint41]);
{ .AddChildren }
HAnimJoint33.AddChildren([HAnimJoint40]);
{ .AddChildren }
HAnimJoint28.AddChildren([HAnimJoint33]);
HAnimJoint46 := THAnimJointNode.Create;
HAnimJoint46.NameField := 'vl5';
HAnimJoint46.Center := Vector3(0,1.04499995708466,-0.0949999988079071);
HAnimJoint46.SetSkinCoordIndex([28,76]);
HAnimJoint46.SetSkinCoordWeight([1,1]);
HAnimJoint46.SetUlimit([0,0,0]);
HAnimJoint46.SetLlimit([0,0,0]);
HAnimJoint47 := THAnimJointNode.Create;
HAnimJoint47.NameField := 'vl4';
HAnimJoint47.Center := Vector3(0,1.067999958992,-0.0850000008940697);
HAnimJoint47.SetUlimit([0,0,0]);
HAnimJoint47.SetLlimit([0,0,0]);
HAnimJoint48 := THAnimJointNode.Create;
HAnimJoint48.NameField := 'vl3';
HAnimJoint48.Center := Vector3(0,1.09200000762939,-0.0724999979138374);
HAnimJoint48.SetUlimit([0,0,0]);
HAnimJoint48.SetLlimit([0,0,0]);
HAnimJoint49 := THAnimJointNode.Create;
HAnimJoint49.NameField := 'vl2';
HAnimJoint49.Center := Vector3(0,1.12000000476837,-0.0649999976158142);
HAnimJoint49.SetSkinCoordIndex([16,18,25,83,84,85,86,87,88]);
HAnimJoint49.SetSkinCoordWeight([1,1,1,1,1,1,0.699999988079071,1,0.800000011920929]);
HAnimJoint49.SetUlimit([0,0,0]);
HAnimJoint49.SetLlimit([0,0,0]);
HAnimJoint50 := THAnimJointNode.Create;
HAnimJoint50.NameField := 'vl1';
HAnimJoint50.Center := Vector3(0,1.14590001106262,-0.0625);
HAnimJoint50.SetUlimit([0,0,0]);
HAnimJoint50.SetLlimit([0,0,0]);
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.NameField := 'vt12';
HAnimJoint51.Center := Vector3(0,1.17900002002716,-0.068000003695488);
HAnimJoint51.SetUlimit([0,0,0]);
HAnimJoint51.SetLlimit([0,0,0]);
HAnimJoint52 := THAnimJointNode.Create;
HAnimJoint52.NameField := 'vt11';
HAnimJoint52.Center := Vector3(0,1.26789999008179,-0.0810000002384186);
HAnimJoint52.SetUlimit([0,0,0]);
HAnimJoint52.SetLlimit([0,0,0]);
HAnimJoint53 := THAnimJointNode.Create;
HAnimJoint53.NameField := 'vt10';
HAnimJoint53.Center := Vector3(0,1.24199998378754,-0.0900000035762787);
HAnimJoint53.SetSkinCoordIndex([15]);
HAnimJoint53.SetSkinCoordWeight([1]);
HAnimJoint53.SetUlimit([0,0,0]);
HAnimJoint53.SetLlimit([0,0,0]);
HAnimJoint54 := THAnimJointNode.Create;
HAnimJoint54.NameField := 'vt9';
HAnimJoint54.Center := Vector3(0,1.26800000667572,-0.100000001490116);
HAnimJoint54.SetSkinCoordIndex([13,14]);
HAnimJoint54.SetSkinCoordWeight([1,1]);
HAnimJoint54.SetUlimit([0,0,0]);
HAnimJoint54.SetLlimit([0,0,0]);
HAnimJoint55 := THAnimJointNode.Create;
HAnimJoint55.NameField := 'vt8';
HAnimJoint55.Center := Vector3(0,1.2940000295639,-0.109999999403954);
HAnimJoint55.SetUlimit([0,0,0]);
HAnimJoint55.SetLlimit([0,0,0]);
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.NameField := 'vt7';
HAnimJoint56.Center := Vector3(0,1.32299995422363,-0.115500003099442);
HAnimJoint56.SetUlimit([0,0,0]);
HAnimJoint56.SetLlimit([0,0,0]);
HAnimJoint57 := THAnimJointNode.Create;
HAnimJoint57.NameField := 'vt6';
HAnimJoint57.Center := Vector3(0,1.35199999809265,-0.119999997317791);
HAnimJoint57.SetUlimit([0,0,0]);
HAnimJoint57.SetLlimit([0,0,0]);
HAnimJoint58 := THAnimJointNode.Create;
HAnimJoint58.NameField := 'vt5';
HAnimJoint58.Center := Vector3(0,1.38100004196167,-0.123499996960163);
HAnimJoint58.SetUlimit([0,0,0]);
HAnimJoint58.SetLlimit([0,0,0]);
HAnimJoint59 := THAnimJointNode.Create;
HAnimJoint59.NameField := 'vt4';
HAnimJoint59.Center := Vector3(0,1.4099999666214,-0.123499996960163);
HAnimJoint59.SetSkinCoordIndex([81]);
HAnimJoint59.SetSkinCoordWeight([1]);
HAnimJoint59.SetUlimit([0,0,0]);
HAnimJoint59.SetLlimit([0,0,0]);
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.NameField := 'vt3';
HAnimJoint60.Center := Vector3(0,1.43799996376038,-0.119999997317791);
HAnimJoint60.SetUlimit([0,0,0]);
HAnimJoint60.SetLlimit([0,0,0]);
HAnimJoint61 := THAnimJointNode.Create;
HAnimJoint61.NameField := 'vt2';
HAnimJoint61.Center := Vector3(0,1.46800005435944,-0.104999996721745);
HAnimJoint61.SetUlimit([0,0,0]);
HAnimJoint61.SetLlimit([0,0,0]);
HAnimJoint62 := THAnimJointNode.Create;
HAnimJoint62.NameField := 'vt1';
HAnimJoint62.Center := Vector3(0,1.49699997901917,-0.0900000035762787);
HAnimJoint62.SetSkinCoordIndex([11,24]);
HAnimJoint62.SetSkinCoordWeight([1,1]);
HAnimJoint62.SetUlimit([0,0,0]);
HAnimJoint62.SetLlimit([0,0,0]);
HAnimJoint63 := THAnimJointNode.Create;
HAnimJoint63.NameField := 'vc7';
HAnimJoint63.Center := Vector3(0,1.52499997615814,-0.0719999969005585);
HAnimJoint63.SetSkinCoordIndex([74,75]);
HAnimJoint63.SetSkinCoordWeight([1,1]);
HAnimJoint63.SetUlimit([0,0,0]);
HAnimJoint63.SetLlimit([0,0,0]);
HAnimJoint64 := THAnimJointNode.Create;
HAnimJoint64.NameField := 'vc6';
HAnimJoint64.Center := Vector3(0,1.53999996185303,-0.0500000007450581);
HAnimJoint64.SetUlimit([0,0,0]);
HAnimJoint64.SetLlimit([0,0,0]);
HAnimJoint65 := THAnimJointNode.Create;
HAnimJoint65.NameField := 'vc5';
HAnimJoint65.Center := Vector3(0,1.55200004577637,-0.0350000001490116);
HAnimJoint65.SetUlimit([0,0,0]);
HAnimJoint65.SetLlimit([0,0,0]);
HAnimJoint66 := THAnimJointNode.Create;
HAnimJoint66.NameField := 'vc4';
HAnimJoint66.Center := Vector3(0,1.56749999523163,-0.0255999993532896);
HAnimJoint66.SetUlimit([0,0,0]);
HAnimJoint66.SetLlimit([0,0,0]);
HAnimJoint67 := THAnimJointNode.Create;
HAnimJoint67.NameField := 'vc3';
HAnimJoint67.Center := Vector3(0,1.58224999904633,-0.0185000002384186);
HAnimJoint67.SetUlimit([0,0,0]);
HAnimJoint67.SetLlimit([0,0,0]);
HAnimJoint68 := THAnimJointNode.Create;
HAnimJoint68.NameField := 'vc2';
HAnimJoint68.Center := Vector3(0,1.59500002861023,-0.0175000000745058);
HAnimJoint68.SetUlimit([0,0,0]);
HAnimJoint68.SetLlimit([0,0,0]);
HAnimJoint69 := THAnimJointNode.Create;
HAnimJoint69.NameField := 'vc1';
HAnimJoint69.Center := Vector3(0,1.61000001430511,-0.0149999996647239);
HAnimJoint69.SetUlimit([0,0,0]);
HAnimJoint69.SetLlimit([0,0,0]);
HAnimJoint70 := THAnimJointNode.Create;
HAnimJoint70.NameField := 'skullbase';
HAnimJoint70.Center := Vector3(0,1.62999999523163,-0.00999999977648258);
HAnimJoint70.SetSkinCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint70.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1]);
HAnimJoint70.SetUlimit([0,0,0]);
HAnimJoint70.SetLlimit([0,0,0]);
HAnimJoint71 := THAnimJointNode.Create;
HAnimJoint71.NameField := 'l_eyeball_joint';
HAnimJoint71.Center := Vector3(0.034000001847744,1.65900003910065,0.0599999986588955);
HAnimJoint71.SetUlimit([0,0,0]);
HAnimJoint71.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint70.AddChildren([HAnimJoint71]);
HAnimJoint72 := THAnimJointNode.Create;
HAnimJoint72.NameField := 'r_eyeball_joint';
HAnimJoint72.Center := Vector3(-0.034000001847744,1.65900003910065,0.0599999986588955);
HAnimJoint72.SetUlimit([0,0,0]);
HAnimJoint72.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint70.AddChildren([HAnimJoint72]);
{ .AddChildren }
HAnimJoint69.AddChildren([HAnimJoint70]);
{ .AddChildren }
HAnimJoint68.AddChildren([HAnimJoint69]);
{ .AddChildren }
HAnimJoint67.AddChildren([HAnimJoint68]);
{ .AddChildren }
HAnimJoint66.AddChildren([HAnimJoint67]);
{ .AddChildren }
HAnimJoint65.AddChildren([HAnimJoint66]);
{ .AddChildren }
HAnimJoint64.AddChildren([HAnimJoint65]);
{ .AddChildren }
HAnimJoint63.AddChildren([HAnimJoint64]);
HAnimJoint73 := THAnimJointNode.Create;
HAnimJoint73.NameField := 'l_sternoclavicular';
HAnimJoint73.Center := Vector3(0.0820000022649765,1.44879996776581,-0.035300001502037);
HAnimJoint73.SetSkinCoordIndex([12]);
HAnimJoint73.SetSkinCoordWeight([1]);
HAnimJoint73.SetUlimit([0,0,0]);
HAnimJoint73.SetLlimit([0,0,0]);
HAnimJoint74 := THAnimJointNode.Create;
HAnimJoint74.NameField := 'l_acromioclavicular';
HAnimJoint74.Center := Vector3(0.0961999967694283,1.42690002918243,-0.0423999987542629);
HAnimJoint74.SetSkinCoordIndex([79]);
HAnimJoint74.SetSkinCoordWeight([1]);
HAnimJoint74.SetUlimit([0,0,0]);
HAnimJoint74.SetLlimit([0,0,0]);
HAnimJoint75 := THAnimJointNode.Create;
HAnimJoint75.NameField := 'l_shoulder';
HAnimJoint75.Center := Vector3(0.200000002980232,1.44000005722046,-0.0399999991059303);
HAnimJoint75.SetSkinCoordIndex([41,42,44,80,102,103,104,105]);
HAnimJoint75.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint75.SetUlimit([0,0,0]);
HAnimJoint75.SetLlimit([0,0,0]);
HAnimJoint76 := THAnimJointNode.Create;
HAnimJoint76.NameField := 'l_elbow';
HAnimJoint76.Center := Vector3(0.200000002980232,1.13880002498627,-0.0399999991059303);
HAnimJoint76.SetSkinCoordIndex([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint76.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint76.SetUlimit([0,0,0]);
HAnimJoint76.SetLlimit([0,0,0]);
HAnimJoint77 := THAnimJointNode.Create;
HAnimJoint77.NameField := 'l_radiocarpal';
HAnimJoint77.Center := Vector3(0.200000002980232,0.870000004768372,-0.0399999991059303);
HAnimJoint77.SetSkinCoordIndex([119,120,121,122,123,124,125,126]);
HAnimJoint77.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint77.SetUlimit([0,0,0]);
HAnimJoint77.SetLlimit([0,0,0]);
HAnimJoint78 := THAnimJointNode.Create;
HAnimJoint78.NameField := 'l_carpometacarpal_1';
HAnimJoint78.Center := Vector3(0.192399993538857,0.847199976444244,-0.0533999986946583);
HAnimJoint78.SetSkinCoordIndex([127,128]);
HAnimJoint78.SetSkinCoordWeight([1,1]);
HAnimJoint78.SetUlimit([0,0,0]);
HAnimJoint78.SetLlimit([0,0,0]);
HAnimJoint79 := THAnimJointNode.Create;
HAnimJoint79.NameField := 'l_metacarpophalangeal_1';
HAnimJoint79.Center := Vector3(0.195099994540215,0.82260000705719,0.0245999991893768);
HAnimJoint79.SetSkinCoordIndex([138,139,140,141,142,143]);
HAnimJoint79.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimJoint79.SetUlimit([0,0,0]);
HAnimJoint79.SetLlimit([0,0,0]);
HAnimJoint80 := THAnimJointNode.Create;
HAnimJoint80.NameField := 'l_carpal_interphalangeal_1';
HAnimJoint80.Center := Vector3(0.195500001311302,0.815900027751923,0.046399999409914);
HAnimJoint80.SetSkinCoordIndex([144,145,146,147,148,149,150,151,152]);
HAnimJoint80.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimJoint80.SetUlimit([0,0,0]);
HAnimJoint80.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint79.AddChildren([HAnimJoint80]);
{ .AddChildren }
HAnimJoint78.AddChildren([HAnimJoint79]);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint78]);
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.NameField := 'l_carpometacarpal_2';
HAnimJoint81.Center := Vector3(0.198300004005432,0.80239999294281,-0.0280000008642673);
HAnimJoint81.SetSkinCoordIndex([129,130]);
HAnimJoint81.SetSkinCoordWeight([1,1]);
HAnimJoint81.SetUlimit([0,0,0]);
HAnimJoint81.SetLlimit([0,0,0]);
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.NameField := 'l_metacarpophalangeal_2';
HAnimJoint82.Center := Vector3(0.198300004005432,0.781499981880188,-0.0280000008642673);
HAnimJoint82.SetSkinCoordIndex([138,139,140,153,154,155,163]);
HAnimJoint82.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint82.SetUlimit([0,0,0]);
HAnimJoint82.SetLlimit([0,0,0]);
HAnimJoint83 := THAnimJointNode.Create;
HAnimJoint83.NameField := 'l_carpal_proximal_interphalangeal_2';
HAnimJoint83.Center := Vector3(0.201700001955032,0.736299991607666,-0.0248000007122755);
HAnimJoint83.SetSkinCoordIndex([166,167,168,169]);
HAnimJoint83.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint83.SetUlimit([0,0,0]);
HAnimJoint83.SetLlimit([0,0,0]);
HAnimJoint84 := THAnimJointNode.Create;
HAnimJoint84.NameField := 'l_carpal_distal_interphalangeal_2';
HAnimJoint84.Center := Vector3(0.202800005674362,0.713900029659271,-0.0236000008881092);
HAnimJoint84.SetSkinCoordIndex([170,171,172,173,174,175,176,177,178]);
HAnimJoint84.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimJoint84.SetUlimit([0,0,0]);
HAnimJoint84.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint83.AddChildren([HAnimJoint84]);
{ .AddChildren }
HAnimJoint82.AddChildren([HAnimJoint83]);
{ .AddChildren }
HAnimJoint81.AddChildren([HAnimJoint82]);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint81]);
HAnimJoint85 := THAnimJointNode.Create;
HAnimJoint85.NameField := 'l_carpometacarpal_3';
HAnimJoint85.Center := Vector3(0.198699995875359,0.802900016307831,-0.0529999993741512);
HAnimJoint85.SetSkinCoordIndex([131,132]);
HAnimJoint85.SetSkinCoordWeight([1,1]);
HAnimJoint85.SetUlimit([0,0,0]);
HAnimJoint85.SetLlimit([0,0,0]);
HAnimJoint86 := THAnimJointNode.Create;
HAnimJoint86.NameField := 'l_metacarpophalangeal_3';
HAnimJoint86.Center := Vector3(0.198699995875359,0.781799972057343,-0.0529999993741512);
HAnimJoint86.SetSkinCoordIndex([156,157,163,164]);
HAnimJoint86.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint86.SetUlimit([0,0,0]);
HAnimJoint86.SetLlimit([0,0,0]);
HAnimJoint87 := THAnimJointNode.Create;
HAnimJoint87.NameField := 'l_carpal_proximal_interphalangeal_3';
HAnimJoint87.Center := Vector3(0.201299995183945,0.727299988269806,-0.0502999983727932);
HAnimJoint87.SetSkinCoordIndex([179,180,181,182]);
HAnimJoint87.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint87.SetUlimit([0,0,0]);
HAnimJoint87.SetLlimit([0,0,0]);
HAnimJoint88 := THAnimJointNode.Create;
HAnimJoint88.NameField := 'l_carpal_distal_interphalangeal_3';
HAnimJoint88.Center := Vector3(0.202600002288818,0.701099991798401,-0.0494000017642975);
HAnimJoint88.SetSkinCoordIndex([183,184,185,186,187,188,189,190,191]);
HAnimJoint88.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimJoint88.SetUlimit([0,0,0]);
HAnimJoint88.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint87.AddChildren([HAnimJoint88]);
{ .AddChildren }
HAnimJoint86.AddChildren([HAnimJoint87]);
{ .AddChildren }
HAnimJoint85.AddChildren([HAnimJoint86]);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint85]);
HAnimJoint89 := THAnimJointNode.Create;
HAnimJoint89.NameField := 'l_carpometacarpal_4';
HAnimJoint89.Center := Vector3(0.195600003004074,0.801900029182434,-0.0794000029563904);
HAnimJoint89.SetSkinCoordIndex([133,134]);
HAnimJoint89.SetSkinCoordWeight([1,1]);
HAnimJoint89.SetUlimit([0,0,0]);
HAnimJoint89.SetLlimit([0,0,0]);
HAnimJoint90 := THAnimJointNode.Create;
HAnimJoint90.NameField := 'l_metacarpophalangeal_4';
HAnimJoint90.Center := Vector3(0.195600003004074,0.781499981880188,-0.0794000029563904);
HAnimJoint90.SetSkinCoordIndex([158,159,164,165]);
HAnimJoint90.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint90.SetUlimit([0,0,0]);
HAnimJoint90.SetLlimit([0,0,0]);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.NameField := 'l_carpal_proximal_interphalangeal_4';
HAnimJoint91.Center := Vector3(0.197300001978874,0.72869998216629,-0.0776999965310097);
HAnimJoint91.SetSkinCoordIndex([192,193,194,195]);
HAnimJoint91.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint91.SetUlimit([0,0,0]);
HAnimJoint91.SetLlimit([0,0,0]);
HAnimJoint92 := THAnimJointNode.Create;
HAnimJoint92.NameField := 'l_carpal_distal_interphalangeal_4';
HAnimJoint92.Center := Vector3(0.198300004005432,0.704500019550323,-0.0767000019550323);
HAnimJoint92.SetSkinCoordIndex([196,197,198,199,200,201,202,203,204]);
HAnimJoint92.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimJoint92.SetUlimit([0,0,0]);
HAnimJoint92.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint91.AddChildren([HAnimJoint92]);
{ .AddChildren }
HAnimJoint90.AddChildren([HAnimJoint91]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimJoint90]);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint89]);
HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.NameField := 'l_carpometacarpal_5';
HAnimJoint93.Center := Vector3(0.192499995231628,0.806599974632263,-0.10360000282526);
HAnimJoint93.SetSkinCoordIndex([135,136,137,165]);
HAnimJoint93.SetSkinCoordWeight([1,1,1,0.5]);
HAnimJoint93.SetUlimit([0,0,0]);
HAnimJoint93.SetLlimit([0,0,0]);
HAnimJoint94 := THAnimJointNode.Create;
HAnimJoint94.NameField := 'l_metacarpophalangeal_5';
HAnimJoint94.Center := Vector3(0.192499995231628,0.78659999370575,-0.10360000282526);
HAnimJoint94.SetSkinCoordIndex([160,161,162]);
HAnimJoint94.SetSkinCoordWeight([1,1,1]);
HAnimJoint94.SetUlimit([0,0,0]);
HAnimJoint94.SetLlimit([0,0,0]);
HAnimJoint95 := THAnimJointNode.Create;
HAnimJoint95.NameField := 'l_carpal_proximal_interphalangeal_5';
HAnimJoint95.Center := Vector3(0.193800002336502,0.745199978351593,-0.102399997413158);
HAnimJoint95.SetSkinCoordIndex([205,206,207,208]);
HAnimJoint95.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint95.SetUlimit([0,0,0]);
HAnimJoint95.SetLlimit([0,0,0]);
HAnimJoint96 := THAnimJointNode.Create;
HAnimJoint96.NameField := 'l_carpal_distal_interphalangeal_5';
HAnimJoint96.Center := Vector3(0.19480000436306,0.727699995040894,-0.101700000464916);
HAnimJoint96.SetSkinCoordIndex([209,210,211,212,213,214,215,216,217]);
HAnimJoint96.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimJoint96.SetUlimit([0,0,0]);
HAnimJoint96.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint95.AddChildren([HAnimJoint96]);
{ .AddChildren }
HAnimJoint94.AddChildren([HAnimJoint95]);
{ .AddChildren }
HAnimJoint93.AddChildren([HAnimJoint94]);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint93]);
{ .AddChildren }
HAnimJoint76.AddChildren([HAnimJoint77]);
{ .AddChildren }
HAnimJoint75.AddChildren([HAnimJoint76]);
{ .AddChildren }
HAnimJoint74.AddChildren([HAnimJoint75]);
{ .AddChildren }
HAnimJoint73.AddChildren([HAnimJoint74]);
{ .AddChildren }
HAnimJoint63.AddChildren([HAnimJoint73]);
HAnimJoint97 := THAnimJointNode.Create;
HAnimJoint97.NameField := 'r_sternoclavicular';
HAnimJoint97.Center := Vector3(-0.0299999993294477,1.46000003814697,0);
HAnimJoint97.SetSkinCoordIndex([10]);
HAnimJoint97.SetSkinCoordWeight([1]);
HAnimJoint97.SetUlimit([0,0,0]);
HAnimJoint97.SetLlimit([0,0,0]);
HAnimJoint98 := THAnimJointNode.Create;
HAnimJoint98.NameField := 'r_acromioclavicular';
HAnimJoint98.Center := Vector3(-0.0900000035762787,1.4099999666214,-0.109999999403954);
HAnimJoint98.SetSkinCoordIndex([77,29]);
HAnimJoint98.SetSkinCoordWeight([1,0.899999976158142]);
HAnimJoint98.SetUlimit([0,0,0]);
HAnimJoint98.SetLlimit([0,0,0]);
HAnimJoint99 := THAnimJointNode.Create;
HAnimJoint99.NameField := 'r_shoulder';
HAnimJoint99.Center := Vector3(-0.200000002980232,1.44000005722046,-0.0399999991059303);
HAnimJoint99.SetSkinCoordIndex([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint99.SetSkinCoordWeight([0.100000001490116,1,1,1,1,1,1,1,0.300000011920929,0.200000002980232]);
HAnimJoint99.SetUlimit([0,0,0]);
HAnimJoint99.SetLlimit([0,0,0]);
HAnimJoint100 := THAnimJointNode.Create;
HAnimJoint100.NameField := 'r_elbow';
HAnimJoint100.Center := Vector3(-0.200000002980232,1.13880002498627,-0.0399999991059303);
HAnimJoint100.SetSkinCoordIndex([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint100.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint100.SetUlimit([0,0,0]);
HAnimJoint100.SetLlimit([0,0,0]);
HAnimJoint101 := THAnimJointNode.Create;
HAnimJoint101.NameField := 'r_radiocarpal';
HAnimJoint101.Center := Vector3(-0.200000002980232,0.889999985694885,-0.0399999991059303);
HAnimJoint101.SetSkinCoordIndex([235,236,237,238,239,240,241,242]);
HAnimJoint101.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint101.SetUlimit([0,0,0]);
HAnimJoint101.SetLlimit([0,0,0]);
HAnimJoint102 := THAnimJointNode.Create;
HAnimJoint102.NameField := 'r_carpometacarpal_1';
HAnimJoint102.Center := Vector3(-0.200000002980232,0.850000023841858,0);
HAnimJoint102.SetSkinCoordIndex([243,244]);
HAnimJoint102.SetSkinCoordWeight([1,1]);
HAnimJoint102.SetUlimit([0,0,0]);
HAnimJoint102.SetLlimit([0,0,0]);
HAnimJoint103 := THAnimJointNode.Create;
HAnimJoint103.NameField := 'r_metacarpophalangeal_1';
HAnimJoint103.Center := Vector3(-0.200000002980232,0.819999992847443,0.0299999993294477);
HAnimJoint103.SetSkinCoordIndex([254,255,256,257,258,259]);
HAnimJoint103.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimJoint103.SetUlimit([0,0,0]);
HAnimJoint103.SetLlimit([0,0,0]);
HAnimJoint104 := THAnimJointNode.Create;
HAnimJoint104.NameField := 'r_carpal_interphalangeal_1';
HAnimJoint104.Center := Vector3(-0.200000002980232,0.800000011920929,0.0500000007450581);
HAnimJoint104.SetSkinCoordIndex([260,261,262,263,264,265,266,267,268]);
HAnimJoint104.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimJoint104.SetUlimit([0,0,0]);
HAnimJoint104.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint103.AddChildren([HAnimJoint104]);
{ .AddChildren }
HAnimJoint102.AddChildren([HAnimJoint103]);
{ .AddChildren }
HAnimJoint101.AddChildren([HAnimJoint102]);
HAnimJoint105 := THAnimJointNode.Create;
HAnimJoint105.NameField := 'r_carpometacarpal_2';
HAnimJoint105.Center := Vector3(-0.200000002980232,0.839999973773956,-0.0149999996647239);
HAnimJoint105.SetSkinCoordIndex([245,246]);
HAnimJoint105.SetSkinCoordWeight([1,1]);
HAnimJoint105.SetUlimit([0,0,0]);
HAnimJoint105.SetLlimit([0,0,0]);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.NameField := 'r_metacarpophalangeal_2';
HAnimJoint106.Center := Vector3(-0.200000002980232,0.792999982833862,-0.0149999996647239);
HAnimJoint106.SetSkinCoordIndex([254,255,256,269,270,271,279]);
HAnimJoint106.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint106.SetUlimit([0,0,0]);
HAnimJoint106.SetLlimit([0,0,0]);
HAnimJoint107 := THAnimJointNode.Create;
HAnimJoint107.NameField := 'r_carpal_proximal_interphalangeal_2';
HAnimJoint107.Center := Vector3(-0.200000002980232,0.745000004768372,-0.0149999996647239);
HAnimJoint107.SetSkinCoordIndex([282,283,284,285]);
HAnimJoint107.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint107.SetUlimit([0,0,0]);
HAnimJoint107.SetLlimit([0,0,0]);
HAnimJoint108 := THAnimJointNode.Create;
HAnimJoint108.NameField := 'r_carpal_distal_interphalangeal_2';
HAnimJoint108.Center := Vector3(-0.200000002980232,0.720000028610229,-0.0149999996647239);
HAnimJoint108.SetSkinCoordIndex([286,287,288,289,290,291,292,293,294]);
HAnimJoint108.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimJoint108.SetUlimit([0,0,0]);
HAnimJoint108.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint107.AddChildren([HAnimJoint108]);
{ .AddChildren }
HAnimJoint106.AddChildren([HAnimJoint107]);
{ .AddChildren }
HAnimJoint105.AddChildren([HAnimJoint106]);
{ .AddChildren }
HAnimJoint101.AddChildren([HAnimJoint105]);
HAnimJoint109 := THAnimJointNode.Create;
HAnimJoint109.NameField := 'r_carpometacarpal_3';
HAnimJoint109.Center := Vector3(-0.200000002980232,0.834999978542328,-0.0399999991059303);
HAnimJoint109.SetSkinCoordIndex([247,248]);
HAnimJoint109.SetSkinCoordWeight([1,1]);
HAnimJoint109.SetUlimit([0,0,0]);
HAnimJoint109.SetLlimit([0,0,0]);
HAnimJoint110 := THAnimJointNode.Create;
HAnimJoint110.NameField := 'r_metacarpophalangeal_3';
HAnimJoint110.Center := Vector3(-0.200000002980232,0.787999987602234,-0.0399999991059303);
HAnimJoint110.SetSkinCoordIndex([272,273,279,280]);
HAnimJoint110.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint110.SetUlimit([0,0,0]);
HAnimJoint110.SetLlimit([0,0,0]);
HAnimJoint111 := THAnimJointNode.Create;
HAnimJoint111.NameField := 'r_carpal_proximal_interphalangeal_3';
HAnimJoint111.Center := Vector3(-0.200000002980232,0.740000009536743,-0.0399999991059303);
HAnimJoint111.SetSkinCoordIndex([295,296,297,298]);
HAnimJoint111.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint111.SetUlimit([0,0,0]);
HAnimJoint111.SetLlimit([0,0,0]);
HAnimJoint112 := THAnimJointNode.Create;
HAnimJoint112.NameField := 'r_carpal_distal_interphalangeal_3';
HAnimJoint112.Center := Vector3(-0.200000002980232,0.714200019836426,-0.0399999991059303);
HAnimJoint112.SetSkinCoordIndex([299,300,301,302,303,304,305,306,307]);
HAnimJoint112.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimJoint112.SetUlimit([0,0,0]);
HAnimJoint112.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint111.AddChildren([HAnimJoint112]);
{ .AddChildren }
HAnimJoint110.AddChildren([HAnimJoint111]);
{ .AddChildren }
HAnimJoint109.AddChildren([HAnimJoint110]);
{ .AddChildren }
HAnimJoint101.AddChildren([HAnimJoint109]);
HAnimJoint113 := THAnimJointNode.Create;
HAnimJoint113.NameField := 'r_carpometacarpal_4';
HAnimJoint113.Center := Vector3(-0.200000002980232,0.834999978542328,-0.0649999976158142);
HAnimJoint113.SetSkinCoordIndex([249,250]);
HAnimJoint113.SetSkinCoordWeight([1,1]);
HAnimJoint113.SetUlimit([0,0,0]);
HAnimJoint113.SetLlimit([0,0,0]);
HAnimJoint114 := THAnimJointNode.Create;
HAnimJoint114.NameField := 'r_metacarpophalangeal_4';
HAnimJoint114.Center := Vector3(-0.200000002980232,0.792999982833862,-0.0649999976158142);
HAnimJoint114.SetSkinCoordIndex([274,275,280,281]);
HAnimJoint114.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint114.SetUlimit([0,0,0]);
HAnimJoint114.SetLlimit([0,0,0]);
HAnimJoint115 := THAnimJointNode.Create;
HAnimJoint115.NameField := 'r_carpal_proximal_interphalangeal_4';
HAnimJoint115.Center := Vector3(-0.200000002980232,0.740000009536743,-0.0649999976158142);
HAnimJoint115.SetSkinCoordIndex([308,309,310,311]);
HAnimJoint115.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint115.SetUlimit([0,0,0]);
HAnimJoint115.SetLlimit([0,0,0]);
HAnimJoint116 := THAnimJointNode.Create;
HAnimJoint116.NameField := 'r_carpal_distal_interphalangeal_4';
HAnimJoint116.Center := Vector3(-0.200000002980232,0.717700004577637,-0.0649999976158142);
HAnimJoint116.SetSkinCoordIndex([312,313,314,315,316,317,318,319,320]);
HAnimJoint116.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimJoint116.SetUlimit([0,0,0]);
HAnimJoint116.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint115.AddChildren([HAnimJoint116]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint115]);
{ .AddChildren }
HAnimJoint113.AddChildren([HAnimJoint114]);
{ .AddChildren }
HAnimJoint101.AddChildren([HAnimJoint113]);
HAnimJoint117 := THAnimJointNode.Create;
HAnimJoint117.NameField := 'r_carpometacarpal_5';
HAnimJoint117.Center := Vector3(-0.200000002980232,0.839999973773956,-0.0850000008940697);
HAnimJoint117.SetSkinCoordIndex([251,252,253,281]);
HAnimJoint117.SetSkinCoordWeight([1,1,1,0.5]);
HAnimJoint117.SetUlimit([0,0,0]);
HAnimJoint117.SetLlimit([0,0,0]);
HAnimJoint118 := THAnimJointNode.Create;
HAnimJoint118.NameField := 'r_metacarpophalangeal_5';
HAnimJoint118.Center := Vector3(-0.200000002980232,0.790000021457672,-0.0850000008940697);
HAnimJoint118.SetSkinCoordIndex([276,277,278]);
HAnimJoint118.SetSkinCoordWeight([1,1,1]);
HAnimJoint118.SetUlimit([0,0,0]);
HAnimJoint118.SetLlimit([0,0,0]);
HAnimJoint119 := THAnimJointNode.Create;
HAnimJoint119.NameField := 'r_carpal_proximal_interphalangeal_5';
HAnimJoint119.Center := Vector3(-0.200000002980232,0.754999995231628,-0.0850000008940697);
HAnimJoint119.SetSkinCoordIndex([321,322,323,324]);
HAnimJoint119.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint119.SetUlimit([0,0,0]);
HAnimJoint119.SetLlimit([0,0,0]);
HAnimJoint120 := THAnimJointNode.Create;
HAnimJoint120.NameField := 'r_carpal_distal_interphalangeal_5';
HAnimJoint120.Center := Vector3(-0.200000002980232,0.735000014305115,-0.0900000035762787);
HAnimJoint120.SetSkinCoordIndex([325,326,327,328,329,330,331,332,333]);
HAnimJoint120.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimJoint120.SetUlimit([0,0,0]);
HAnimJoint120.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint119.AddChildren([HAnimJoint120]);
{ .AddChildren }
HAnimJoint118.AddChildren([HAnimJoint119]);
{ .AddChildren }
HAnimJoint117.AddChildren([HAnimJoint118]);
{ .AddChildren }
HAnimJoint101.AddChildren([HAnimJoint117]);
{ .AddChildren }
HAnimJoint100.AddChildren([HAnimJoint101]);
{ .AddChildren }
HAnimJoint99.AddChildren([HAnimJoint100]);
{ .AddChildren }
HAnimJoint98.AddChildren([HAnimJoint99]);
{ .AddChildren }
HAnimJoint97.AddChildren([HAnimJoint98]);
{ .AddChildren }
HAnimJoint63.AddChildren([HAnimJoint97]);
{ .AddChildren }
HAnimJoint62.AddChildren([HAnimJoint63]);
{ .AddChildren }
HAnimJoint61.AddChildren([HAnimJoint62]);
{ .AddChildren }
HAnimJoint60.AddChildren([HAnimJoint61]);
{ .AddChildren }
HAnimJoint59.AddChildren([HAnimJoint60]);
{ .AddChildren }
HAnimJoint58.AddChildren([HAnimJoint59]);
{ .AddChildren }
HAnimJoint57.AddChildren([HAnimJoint58]);
{ .AddChildren }
HAnimJoint56.AddChildren([HAnimJoint57]);
{ .AddChildren }
HAnimJoint55.AddChildren([HAnimJoint56]);
{ .AddChildren }
HAnimJoint54.AddChildren([HAnimJoint55]);
{ .AddChildren }
HAnimJoint53.AddChildren([HAnimJoint54]);
{ .AddChildren }
HAnimJoint52.AddChildren([HAnimJoint53]);
{ .AddChildren }
HAnimJoint51.AddChildren([HAnimJoint52]);
{ .AddChildren }
HAnimJoint50.AddChildren([HAnimJoint51]);
{ .AddChildren }
HAnimJoint49.AddChildren([HAnimJoint50]);
{ .AddChildren }
HAnimJoint48.AddChildren([HAnimJoint49]);
{ .AddChildren }
HAnimJoint47.AddChildren([HAnimJoint48]);
{ .AddChildren }
HAnimJoint46.AddChildren([HAnimJoint47]);
{ .AddChildren }
HAnimJoint28.AddChildren([HAnimJoint46]);
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint28;
HAnimJoint121 := THAnimJointNode.Create;
HAnimJoint121 := HAnimJoint33;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint121;
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122 := HAnimJoint34;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint122;
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123 := HAnimJoint35;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint123;
HAnimJoint124 := THAnimJointNode.Create;
HAnimJoint124 := HAnimJoint36;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint124;
HAnimJoint125 := THAnimJointNode.Create;
HAnimJoint125 := HAnimJoint37;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint125;
HAnimJoint126 := THAnimJointNode.Create;
HAnimJoint126 := HAnimJoint38;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint126;
HAnimJoint127 := THAnimJointNode.Create;
HAnimJoint127 := HAnimJoint39;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint127;
HAnimJoint128 := THAnimJointNode.Create;
HAnimJoint128 := HAnimJoint40;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint128;
HAnimJoint129 := THAnimJointNode.Create;
HAnimJoint129 := HAnimJoint41;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint129;
HAnimJoint130 := THAnimJointNode.Create;
HAnimJoint130 := HAnimJoint42;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint130;
HAnimJoint131 := THAnimJointNode.Create;
HAnimJoint131 := HAnimJoint43;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint131;
HAnimJoint132 := THAnimJointNode.Create;
HAnimJoint132 := HAnimJoint44;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint132;
HAnimJoint133 := THAnimJointNode.Create;
HAnimJoint133 := HAnimJoint45;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint133;
HAnimJoint134 := THAnimJointNode.Create;
HAnimJoint134 := HAnimJoint46;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint134;
HAnimJoint135 := THAnimJointNode.Create;
HAnimJoint135 := HAnimJoint47;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint135;
HAnimJoint136 := THAnimJointNode.Create;
HAnimJoint136 := HAnimJoint48;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint136;
HAnimJoint137 := THAnimJointNode.Create;
HAnimJoint137 := HAnimJoint49;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint137;
HAnimJoint138 := THAnimJointNode.Create;
HAnimJoint138 := HAnimJoint50;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint138;
HAnimJoint139 := THAnimJointNode.Create;
HAnimJoint139 := HAnimJoint51;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint139;
HAnimJoint140 := THAnimJointNode.Create;
HAnimJoint140 := HAnimJoint52;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint140;
HAnimJoint141 := THAnimJointNode.Create;
HAnimJoint141 := HAnimJoint53;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint141;
HAnimJoint142 := THAnimJointNode.Create;
HAnimJoint142 := HAnimJoint54;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint142;
HAnimJoint143 := THAnimJointNode.Create;
HAnimJoint143 := HAnimJoint55;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint143;
HAnimJoint144 := THAnimJointNode.Create;
HAnimJoint144 := HAnimJoint56;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint144;
HAnimJoint145 := THAnimJointNode.Create;
HAnimJoint145 := HAnimJoint57;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint145;
HAnimJoint146 := THAnimJointNode.Create;
HAnimJoint146 := HAnimJoint58;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint146;
HAnimJoint147 := THAnimJointNode.Create;
HAnimJoint147 := HAnimJoint59;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint147;
HAnimJoint148 := THAnimJointNode.Create;
HAnimJoint148 := HAnimJoint60;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint148;
HAnimJoint149 := THAnimJointNode.Create;
HAnimJoint149 := HAnimJoint61;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint149;
HAnimJoint150 := THAnimJointNode.Create;
HAnimJoint150 := HAnimJoint62;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint150;
HAnimJoint151 := THAnimJointNode.Create;
HAnimJoint151 := HAnimJoint63;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint151;
HAnimJoint152 := THAnimJointNode.Create;
HAnimJoint152 := HAnimJoint64;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint152;
HAnimJoint153 := THAnimJointNode.Create;
HAnimJoint153 := HAnimJoint65;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint153;
HAnimJoint154 := THAnimJointNode.Create;
HAnimJoint154 := HAnimJoint66;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint154;
HAnimJoint155 := THAnimJointNode.Create;
HAnimJoint155 := HAnimJoint67;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint155;
HAnimJoint156 := THAnimJointNode.Create;
HAnimJoint156 := HAnimJoint68;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint156;
HAnimJoint157 := THAnimJointNode.Create;
HAnimJoint157 := HAnimJoint69;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint157;
HAnimJoint158 := THAnimJointNode.Create;
HAnimJoint158 := HAnimJoint70;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint158;
HAnimJoint159 := THAnimJointNode.Create;
HAnimJoint159 := HAnimJoint71;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint159;
HAnimJoint160 := THAnimJointNode.Create;
HAnimJoint160 := HAnimJoint72;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint160;
HAnimJoint161 := THAnimJointNode.Create;
HAnimJoint161 := HAnimJoint73;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint161;
HAnimJoint162 := THAnimJointNode.Create;
HAnimJoint162 := HAnimJoint74;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint162;
HAnimJoint163 := THAnimJointNode.Create;
HAnimJoint163 := HAnimJoint75;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint163;
HAnimJoint164 := THAnimJointNode.Create;
HAnimJoint164 := HAnimJoint76;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint164;
HAnimJoint165 := THAnimJointNode.Create;
HAnimJoint165 := HAnimJoint77;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint165;
HAnimJoint166 := THAnimJointNode.Create;
HAnimJoint166 := HAnimJoint78;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint166;
HAnimJoint167 := THAnimJointNode.Create;
HAnimJoint167 := HAnimJoint79;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint167;
HAnimJoint168 := THAnimJointNode.Create;
HAnimJoint168 := HAnimJoint80;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint168;
HAnimJoint169 := THAnimJointNode.Create;
HAnimJoint169 := HAnimJoint81;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint169;
HAnimJoint170 := THAnimJointNode.Create;
HAnimJoint170 := HAnimJoint82;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint170;
HAnimJoint171 := THAnimJointNode.Create;
HAnimJoint171 := HAnimJoint83;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint171;
HAnimJoint172 := THAnimJointNode.Create;
HAnimJoint172 := HAnimJoint84;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint172;
HAnimJoint173 := THAnimJointNode.Create;
HAnimJoint173 := HAnimJoint85;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint173;
HAnimJoint174 := THAnimJointNode.Create;
HAnimJoint174 := HAnimJoint86;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint174;
HAnimJoint175 := THAnimJointNode.Create;
HAnimJoint175 := HAnimJoint87;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint175;
HAnimJoint176 := THAnimJointNode.Create;
HAnimJoint176 := HAnimJoint88;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint176;
HAnimJoint177 := THAnimJointNode.Create;
HAnimJoint177 := HAnimJoint89;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint177;
HAnimJoint178 := THAnimJointNode.Create;
HAnimJoint178 := HAnimJoint90;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint178;
HAnimJoint179 := THAnimJointNode.Create;
HAnimJoint179 := HAnimJoint91;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint179;
HAnimJoint180 := THAnimJointNode.Create;
HAnimJoint180 := HAnimJoint92;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint180;
HAnimJoint181 := THAnimJointNode.Create;
HAnimJoint181 := HAnimJoint93;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint181;
HAnimJoint182 := THAnimJointNode.Create;
HAnimJoint182 := HAnimJoint94;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint182;
HAnimJoint183 := THAnimJointNode.Create;
HAnimJoint183 := HAnimJoint95;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint183;
HAnimJoint184 := THAnimJointNode.Create;
HAnimJoint184 := HAnimJoint96;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint184;
HAnimJoint185 := THAnimJointNode.Create;
HAnimJoint185 := HAnimJoint97;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint185;
HAnimJoint186 := THAnimJointNode.Create;
HAnimJoint186 := HAnimJoint98;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint186;
HAnimJoint187 := THAnimJointNode.Create;
HAnimJoint187 := HAnimJoint99;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint187;
HAnimJoint188 := THAnimJointNode.Create;
HAnimJoint188 := HAnimJoint100;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint188;
HAnimJoint189 := THAnimJointNode.Create;
HAnimJoint189 := HAnimJoint101;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint189;
HAnimJoint190 := THAnimJointNode.Create;
HAnimJoint190 := HAnimJoint102;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint190;
HAnimJoint191 := THAnimJointNode.Create;
HAnimJoint191 := HAnimJoint103;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint191;
HAnimJoint192 := THAnimJointNode.Create;
HAnimJoint192 := HAnimJoint104;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint192;
HAnimJoint193 := THAnimJointNode.Create;
HAnimJoint193 := HAnimJoint105;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint193;
HAnimJoint194 := THAnimJointNode.Create;
HAnimJoint194 := HAnimJoint106;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint194;
HAnimJoint195 := THAnimJointNode.Create;
HAnimJoint195 := HAnimJoint107;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint195;
HAnimJoint196 := THAnimJointNode.Create;
HAnimJoint196 := HAnimJoint108;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint196;
HAnimJoint197 := THAnimJointNode.Create;
HAnimJoint197 := HAnimJoint109;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint197;
HAnimJoint198 := THAnimJointNode.Create;
HAnimJoint198 := HAnimJoint110;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint198;
HAnimJoint199 := THAnimJointNode.Create;
HAnimJoint199 := HAnimJoint111;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint199;
HAnimJoint200 := THAnimJointNode.Create;
HAnimJoint200 := HAnimJoint112;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint200;
HAnimJoint201 := THAnimJointNode.Create;
HAnimJoint201 := HAnimJoint113;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint201;
HAnimJoint202 := THAnimJointNode.Create;
HAnimJoint202 := HAnimJoint114;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint202;
HAnimJoint203 := THAnimJointNode.Create;
HAnimJoint203 := HAnimJoint115;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint203;
HAnimJoint204 := THAnimJointNode.Create;
HAnimJoint204 := HAnimJoint116;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint204;
HAnimJoint205 := THAnimJointNode.Create;
HAnimJoint205 := HAnimJoint117;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint205;
HAnimJoint206 := THAnimJointNode.Create;
HAnimJoint206 := HAnimJoint118;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint206;
HAnimJoint207 := THAnimJointNode.Create;
HAnimJoint207 := HAnimJoint119;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint207;
HAnimJoint208 := THAnimJointNode.Create;
HAnimJoint208 := HAnimJoint120;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint208;
HAnimJoint209 := THAnimJointNode.Create;
HAnimJoint209 := HAnimJoint28;
{ .AddJoints }
HAnimHumanoid27.Joints := HAnimJoint209;
Shape210 := TShapeNode.Create;
IndexedFaceSet211 := TIndexedFaceSetNode.Create;
IndexedFaceSet211.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet211.CreaseAngle := 3.09999990463257;
IndexedFaceSet211.ColorPerVertex := False;
Coordinate212 := TCoordinateNode.Create;
Coordinate212.SetPoint([Vector3(0,1.76999998092651,0),Vector3(0,1.66499996185303,0.0900000035762787),Vector3(-0.0329999998211861,1.62000000476837,0.0869999974966049),Vector3(0.0329999998211861,1.62000000476837,0.0869999974966049),Vector3(0,1.54999995231628,0.0970000028610229),Vector3(-0.0769999995827675,1.63999998569489,-0.00999999977648258),Vector3(-0.0527000017464161,1.58000004291534,0.0149999996647239),Vector3(0.0769999995827675,1.63999998569489,-0.00999999977648258),Vector3(0.0527000017464161,1.58000004291534,0.0149999996647239),Vector3(0,1.625,-0.0925000011920929),Vector3(-0.0299999993294477,1.46000003814697,0.0350000001490116),Vector3(0,1.44000005722046,0.0299999993294477),Vector3(0.0299999993294477,1.46000003814697,0.0350000001490116),Vector3(-0.113499999046326,1.317999958992,0.0949999988079071),Vector3(0.113499999046326,1.317999958992,0.0949999988079071),Vector3(0,1.25,0.112999998033047),Vector3(-0.0869999974966049,1.19000005722046,0.0900000035762787),Vector3(-0.0935000032186508,1.02999997138977,0.0750000029802322),Vector3(0.0869999974966049,1.19000005722046,0.0900000035762787),Vector3(0.0935000032186508,1.02999997138977,0.0750000029802322),Vector3(-0.142499998211861,1.06500005722046,0.00329999998211861),Vector3(-0.150000005960464,0.899999976158142,-0.00999999977648258),Vector3(0.142499998211861,1.06500005722046,0.00329999998211861),Vector3(0.150000005960464,0.899999976158142,-0.00999999977648258),Vector3(0,1.52999997138977,-0.0839999988675117),Vector3(0.00490000005811453,1.19079995155334,-0.111299999058247),Vector3(-0.0772999972105026,1.01900005340576,-0.119999997317791),Vector3(0.0772999972105026,1.01900005340576,-0.119999997317791),Vector3(0.00499999988824129,1.09150004386902,-0.109099999070168),Vector3(-0.178000003099442,1.48249995708466,-0.0625),Vector3(-0.170000001788139,1.37999999523163,0.00700000021606684),Vector3(-0.188400000333786,0.86760002374649,-0.0359999984502792),Vector3(-0.159999996423721,1.37999999523163,-0.127000004053116),Vector3(-0.200000002980232,1.13880002498627,-0.0799999982118607),Vector3(-0.244000002741814,1.13880002498627,-0.0399999991059303),Vector3(-0.165000006556511,1.13880002498627,-0.0399999991059303),Vector3(-0.230000004172325,1.13300001621246,-0.0549999997019768),Vector3(-0.197699993848801,0.816900014877319,-0.0176999997347593),Vector3(-0.194100007414818,0.677200019359589,-0.0423000007867813),Vector3(-0.21170000731945,0.856199979782104,-0.0584000013768673),Vector3(-0.192900002002716,0.788999974727631,-0.10639999806881),Vector3(0.174999997019768,1.48249995708466,-0.0599999986588955),Vector3(0.170000001788139,1.37999999523163,0.00700000021606684),Vector3(0.190099999308586,0.864499986171722,-0.0414999984204769),Vector3(0.159999996423721,1.37999999523163,-0.125),Vector3(0.200000002980232,1.13880002498627,-0.0799999982118607),Vector3(0.165000006556511,1.13880002498627,-0.0399999991059303),Vector3(0.244000002741814,1.13880002498627,-0.0399999991059303),Vector3(0.230000004172325,1.13300001621246,-0.0549999997019768),Vector3(0.200900003314018,0.813899993896484,-0.023700000718236),Vector3(0.205599993467331,0.674300014972687,-0.048200000077486),Vector3(0.214200004935265,0.85290002822876,-0.064800001680851),Vector3(0.192900002002716,0.78600001335144,-0.112199999392033),Vector3(-0.100000001490116,0.491299986839294,-0.0299999993294477),Vector3(-0.170000001788139,0.465999990701675,0),Vector3(-0.0500000007450581,0.465999990701675,0),Vector3(-0.165000006556511,0.00999999977648258,0.119999997317791),Vector3(-0.150000005960464,0.0700000002980232,0),Vector3(-0.0850000008940697,0.0860000029206276,0.0125000001862645),Vector3(-0.0900000035762787,0.0560000017285347,0.0125000001862645),Vector3(-0.115000002086163,0.0199999995529652,0.122000001370907),Vector3(-0.115000002086163,0.0399999991059303,-0.0549999997019768),Vector3(-0.109999999403954,0.0109999999403954,0.189999997615814),Vector3(0.0992999970912933,0.488099992275238,-0.0308999996632338),Vector3(0.170000001788139,0.465999990701675,0),Vector3(0.0500000007450581,0.486699998378754,0),Vector3(0.165000006556511,0.00999999977648258,0.119999997317791),Vector3(0.150000005960464,0.0700000002980232,0),Vector3(0.0850000008940697,0.0860000029206276,0.0125000001862645),Vector3(0.0900000035762787,0.0560000017285347,0.0125000001862645),Vector3(0.115000002086163,0.0199999995529652,0.122000001370907),Vector3(0.115000002086163,0.0399999991059303,-0.0549999997019768),Vector3(0.109999999403954,0.0109999999403954,0.189999997615814),Vector3(0,0.875,0),Vector3(-0.0645999982953072,1.51489996910095,-0.0379999987781048),Vector3(0.0645999982953072,1.51489996910095,-0.0379999987781048),Vector3(0,1.07225000858307,0.0900000035762787),Vector3(-0.109999999403954,1.42700004577637,-0.137500002980232),Vector3(-0.234999999403954,1.41999995708466,-0.0625),Vector3(0.109999999403954,1.42700004577637,-0.137500002980232),Vector3(0.234999999403954,1.41999995708466,-0.0625),Vector3(0,1.4099999666214,-0.144999995827675),Vector3(0,0.925000011920929,0.0799999982118607),Vector3(-0.0869999974966049,1.19000005722046,-0.0900000035762787),Vector3(0.0869999974966049,1.19000005722046,-0.0900000035762787),Vector3(0.172000005841255,1.32000005245209,-0.0299999993294477),Vector3(-0.172000005841255,1.32000005245209,-0.0300000011920929),Vector3(0.150000005960464,1.23000001907349,-0.0149999996647239),Vector3(-0.150000005960464,1.23000001907349,-0.0150000005960464),Vector3(0.0790000036358833,0.919999957084656,-0.140000000596046),Vector3(0.100000001490116,0.899999976158142,0.0769999995827675),Vector3(-0.0790000036358833,0.919999957084656,-0.140000000596046),Vector3(-0.100000001490116,0.899999976158142,0.0750000029802322),Vector3(0,0.870000004768372,0),Vector3(0.171000003814697,0.649999976158142,0),Vector3(0.0199999995529652,0.649999976158142,0),Vector3(0.100000001490116,0.649999976158142,-0.0799999982118607),Vector3(0.100000001490116,0.649999976158142,0.0700000002980232),Vector3(-0.171000003814697,0.649999976158142,0),Vector3(-0.0199999995529652,0.649999976158142,0),Vector3(-0.100000001490116,0.649999976158142,-0.0799999982118607),Vector3(-0.100000001490116,0.649999976158142,0.0700000002980232),Vector3(0.25,1.26999998092651,-0.0399999991059303),Vector3(0.170000001788139,1.26999998092651,-0.0399999991059303),Vector3(0.200000002980232,1.26999998092651,-0.0900000035762787),Vector3(0.200000002980232,1.26999998092651,0.0199999995529652),Vector3(0.244000002741814,1.13880002498627,-0.0399999991059303),Vector3(0.165000006556511,1.13880002498627,-0.0399999991059303),Vector3(0.200000002980232,1.13880002498627,-0.0799999982118607),Vector3(0.200000002980232,1.13880002498627,-0.0130000002682209),Vector3(0.224999994039536,1,-0.00999999977648258),Vector3(0.224999994039536,1,-0.0700000002980232),Vector3(0.185000002384186,1,-0.00999999977648258),Vector3(0.185000002384186,1,-0.0700000002980232),Vector3(0.200000002980232,1.13880002498627,-0.0399999991059303),Vector3(0.224999994039536,0.920000016689301,-0.0399999991059303),Vector3(0.174999997019768,0.920000016689301,-0.0399999991059303),Vector3(0.200000002980232,0.920000016689301,-0.0649999976158142),Vector3(0.200000002980232,0.920000016689301,-0.0149999996647239),Vector3(0.224999994039536,0.889999985694885,-0.0399999991059303),Vector3(0.174999997019768,0.889999985694885,-0.0399999991059303),Vector3(0.200000002980232,0.889999985694885,-0.0649999976158142),Vector3(0.200000002980232,0.889999985694885,-0.0149999996647239),Vector3(0.217999994754791,0.860000014305115,-0.0399999991059303),Vector3(0.184000000357628,0.860000014305115,-0.0399999991059303),Vector3(0.200000002980232,0.870000004768372,-0.0700000002980232),Vector3(0.200000002980232,0.870000004768372,0),Vector3(0.209999993443489,0.850000023841858,0),Vector3(0.185399994254112,0.850000023841858,0),Vector3(0.211999997496605,0.839999973773956,-0.0149999996647239),Vector3(0.18299999833107,0.839999973773956,-0.0149999996647239),Vector3(0.212999999523163,0.834999978542328,-0.0399999991059303),Vector3(0.189999997615814,0.834999978542328,-0.0399999991059303),Vector3(0.210999995470047,0.834999978542328,-0.0649999976158142),Vector3(0.19200000166893,0.834999978542328,-0.0649999976158142),Vector3(0.208000004291534,0.839999973773956,-0.0850000008940697),Vector3(0.189999997615814,0.839999973773956,-0.0850000008940697),Vector3(0.200000002980232,0.839999973773956,-0.0949999988079071),Vector3(0.215000003576279,0.819999992847443,0),Vector3(0.193000003695488,0.814999997615814,0.00499999988824129),Vector3(0.197999998927116,0.800000011920929,0.0120000001043081),Vector3(0.209999993443489,0.819999992847443,0.0299999993294477),Vector3(0.189999997615814,0.819999992847443,0.0299999993294477),Vector3(0.200000002980232,0.834999978542328,0.0390000008046627),Vector3(0.211999997496605,0.800000011920929,0.0500000007450581),Vector3(0.187999993562698,0.800000011920929,0.0500000007450581),Vector3(0.200000002980232,0.806999981403351,0.0570000000298023),Vector3(0.200000002980232,0.792999982833862,0.0350000001490116),Vector3(0.200000002980232,0.773999989032745,0.0759999975562096),Vector3(0.211999997496605,0.779999971389771,0.0700000002980232),Vector3(0.187999993562698,0.779999971389771,0.0700000002980232),Vector3(0.200000002980232,0.785000026226044,0.0750000029802322),Vector3(0.200000002980232,0.769999980926514,0.061999998986721),Vector3(0.215000003576279,0.792999982833862,-0.0149999996647239),Vector3(0.187000006437302,0.792999982833862,-0.0149999996647239),Vector3(0.200000002980232,0.792999982833862,-0.00499999988824129),Vector3(0.215000003576279,0.787999987602234,-0.0399999991059303),Vector3(0.187000006437302,0.787999987602234,-0.0399999991059303),Vector3(0.215000003576279,0.792999982833862,-0.0649999976158142),Vector3(0.187000006437302,0.792999982833862,-0.0649999976158142),Vector3(0.209999993443489,0.790000021457672,-0.0850000008940697),Vector3(0.189999997615814,0.790000021457672,-0.0850000008940697),Vector3(0.200000002980232,0.790000021457672,-0.0949999988079071),Vector3(0.189999997615814,0.769999980926514,-0.0274999998509884),Vector3(0.189999997615814,0.769999980926514,-0.0524999983608723),Vector3(0.189999997615814,0.779999971389771,-0.0775000005960464),Vector3(0.211999997496605,0.745000004768372,-0.0149999996647239),Vector3(0.187999993562698,0.745000004768372,-0.0199999995529652),Vector3(0.200000002980232,0.745000004768372,-0.0254999995231628),Vector3(0.200000002980232,0.745000004768372,-0.0044999998062849),Vector3(0.210999995470047,0.720000028610229,-0.0149999996647239),Vector3(0.188999995589256,0.720000028610229,-0.0149999996647239),Vector3(0.200000002980232,0.720000028610229,-0.0252000000327826),Vector3(0.200000002980232,0.720000028610229,-0.00480000022798777),Vector3(0.209999993443489,0.694999992847443,-0.0149999996647239),Vector3(0.189999997615814,0.694999992847443,-0.0149999996647239),Vector3(0.200000002980232,0.694999992847443,-0.025000000372529),Vector3(0.200000002980232,0.694999992847443,-0.00499999988824129),Vector3(0.200000002980232,0.685000002384186,-0.0149999996647239),Vector3(0.215000003576279,0.740000009536743,-0.0399999991059303),Vector3(0.185000002384186,0.740000009536743,-0.0399999991059303),Vector3(0.200000002980232,0.740000009536743,-0.0549999997019768),Vector3(0.200000002980232,0.740000009536743,-0.025000000372529),Vector3(0.209999993443489,0.714200019836426,-0.0399999991059303),Vector3(0.189999997615814,0.714200019836426,-0.0399999991059303),Vector3(0.200000002980232,0.714200019836426,-0.0529999993741512),Vector3(0.200000002980232,0.714200019836426,-0.0270000007003546),Vector3(0.209999993443489,0.680000007152557,-0.0399999991059303),Vector3(0.189999997615814,0.680000007152557,-0.0399999991059303),Vector3(0.200000002980232,0.680000007152557,-0.0500000007450581),Vector3(0.200000002980232,0.680000007152557,-0.0299999993294477),Vector3(0.200000002980232,0.670000016689301,-0.0399999991059303),Vector3(0.211999997496605,0.740000009536743,-0.0649999976158142),Vector3(0.187999993562698,0.740000009536743,-0.0649999976158142),Vector3(0.200000002980232,0.740000009536743,-0.0755999982357025),Vector3(0.200000002980232,0.740000009536743,-0.0542000010609627),Vector3(0.209999993443489,0.717700004577637,-0.0649999976158142),Vector3(0.189999997615814,0.717700004577637,-0.0649999976158142),Vector3(0.200000002980232,0.717700004577637,-0.0750999972224236),Vector3(0.200000002980232,0.717700004577637,-0.0549000017344952),Vector3(0.209999993443489,0.694999992847443,-0.0649999976158142),Vector3(0.189999997615814,0.694999992847443,-0.0649999976158142),Vector3(0.200000002980232,0.694999992847443,-0.0750000029802322),Vector3(0.200000002980232,0.694999992847443,-0.0549999997019768),Vector3(0.200000002980232,0.685000002384186,-0.0649999976158142),Vector3(0.210999995470047,0.754999995231628,-0.0850000008940697),Vector3(0.188999995589256,0.754999995231628,-0.0850000008940697),Vector3(0.200000002980232,0.754999995231628,-0.0952000021934509),Vector3(0.200000002980232,0.754999995231628,-0.0747999995946884),Vector3(0.209999993443489,0.735000014305115,-0.0850000008940697),Vector3(0.189999997615814,0.735000014305115,-0.0850000008940697),Vector3(0.200000002980232,0.735000014305115,-0.095100000500679),Vector3(0.200000002980232,0.735000014305115,-0.0749000012874603),Vector3(0.209999993443489,0.720000028610229,-0.0850000008940697),Vector3(0.189999997615814,0.720000028610229,-0.0850000008940697),Vector3(0.200000002980232,0.720000028610229,-0.0949999988079071),Vector3(0.200000002980232,0.720000028610229,-0.0750000029802322),Vector3(0.200000002980232,0.709999978542328,-0.0850000008940697),Vector3(-0.230000004172325,1.23000001907349,-0.0399999991059303),Vector3(-0.159999996423721,1.23000001907349,-0.0399999991059303),Vector3(-0.200000002980232,1.23500001430511,-0.104999996721745),Vector3(-0.200000002980232,1.25499999523163,0.0199999995529652),Vector3(-0.244000002741814,1.13880002498627,-0.0399999991059303),Vector3(-0.165000006556511,1.13880002498627,-0.0399999991059303),Vector3(-0.200000002980232,1.13880002498627,-0.0799999982118607),Vector3(-0.200000002980232,1.13880002498627,0.0130000002682209),Vector3(-0.224999994039536,1,-0.00999999977648258),Vector3(-0.224999994039536,1,-0.0700000002980232),Vector3(-0.185000002384186,1,-0.00999999977648258),Vector3(-0.185000002384186,1,-0.0700000002980232),Vector3(-0.200000002980232,1.13880002498627,-0.0399999991059303),Vector3(-0.224999994039536,0.920000016689301,-0.0399999991059303),Vector3(-0.174999997019768,0.920000016689301,-0.0399999991059303),Vector3(-0.200000002980232,0.920000016689301,-0.0649999976158142),Vector3(-0.200000002980232,0.920000016689301,-0.0149999996647239),Vector3(-0.224999994039536,0.889999985694885,-0.0399999991059303),Vector3(-0.174999997019768,0.889999985694885,-0.0399999991059303),Vector3(-0.200000002980232,0.889999985694885,-0.0649999976158142),Vector3(-0.200000002980232,0.889999985694885,-0.0149999996647239),Vector3(-0.217999994754791,0.860000014305115,-0.0399999991059303),Vector3(-0.184000000357628,0.860000014305115,-0.0399999991059303),Vector3(-0.200000002980232,0.870000004768372,-0.0700000002980232),Vector3(-0.200000002980232,0.870000004768372,0),Vector3(-0.209999993443489,0.850000023841858,0),Vector3(-0.185399994254112,0.850000023841858,0),Vector3(-0.211999997496605,0.839999973773956,-0.0149999996647239),Vector3(-0.18299999833107,0.839999973773956,-0.0149999996647239),Vector3(-0.212999999523163,0.834999978542328,-0.0399999991059303),Vector3(-0.189999997615814,0.834999978542328,-0.0399999991059303),Vector3(-0.210999995470047,0.834999978542328,-0.0649999976158142),Vector3(-0.19200000166893,0.834999978542328,-0.0649999976158142),Vector3(-0.208000004291534,0.839999973773956,-0.0850000008940697),Vector3(-0.189999997615814,0.839999973773956,-0.0850000008940697),Vector3(-0.200000002980232,0.839999973773956,-0.0949999988079071),Vector3(-0.215000003576279,0.819999992847443,0),Vector3(-0.193000003695488,0.814999997615814,0.00499999988824129),Vector3(-0.197999998927116,0.800000011920929,0.0120000001043081),Vector3(-0.209999993443489,0.819999992847443,0.0299999993294477),Vector3(-0.189999997615814,0.819999992847443,0.0299999993294477),Vector3(-0.200000002980232,0.834999978542328,0.0390000008046627),Vector3(-0.211999997496605,0.800000011920929,0.0500000007450581),Vector3(-0.187999993562698,0.800000011920929,0.0500000007450581),Vector3(-0.200000002980232,0.806999981403351,0.0570000000298023),Vector3(-0.200000002980232,0.792999982833862,0.0350000001490116),Vector3(-0.200000002980232,0.773999989032745,0.0759999975562096),Vector3(-0.211999997496605,0.779999971389771,0.0700000002980232),Vector3(-0.187999993562698,0.779999971389771,0.0700000002980232),Vector3(-0.200000002980232,0.785000026226044,0.0750000029802322),Vector3(-0.200000002980232,0.769999980926514,0.061999998986721),Vector3(-0.215000003576279,0.792999982833862,-0.0149999996647239),Vector3(-0.187000006437302,0.792999982833862,-0.0149999996647239),Vector3(-0.200000002980232,0.792999982833862,-0.00499999988824129),Vector3(-0.215000003576279,0.787999987602234,-0.0399999991059303),Vector3(-0.187000006437302,0.787999987602234,-0.0399999991059303),Vector3(-0.215000003576279,0.792999982833862,-0.0649999976158142),Vector3(-0.187000006437302,0.792999982833862,-0.0649999976158142),Vector3(-0.209999993443489,0.790000021457672,-0.0850000008940697),Vector3(-0.189999997615814,0.790000021457672,-0.0850000008940697),Vector3(-0.200000002980232,0.790000021457672,-0.0949999988079071),Vector3(-0.189999997615814,0.769999980926514,-0.0274999998509884),Vector3(-0.189999997615814,0.769999980926514,-0.0524999983608723),Vector3(-0.189999997615814,0.779999971389771,-0.0775000005960464),Vector3(-0.211999997496605,0.745000004768372,-0.0149999996647239),Vector3(-0.187999993562698,0.745000004768372,-0.0199999995529652),Vector3(-0.200000002980232,0.745000004768372,-0.0254999995231628),Vector3(-0.200000002980232,0.745000004768372,-0.0044999998062849),Vector3(-0.210999995470047,0.720000028610229,-0.0149999996647239),Vector3(-0.188999995589256,0.720000028610229,-0.0149999996647239),Vector3(-0.200000002980232,0.720000028610229,-0.0252000000327826),Vector3(-0.200000002980232,0.720000028610229,-0.00480000022798777),Vector3(-0.209999993443489,0.694999992847443,-0.0149999996647239),Vector3(-0.189999997615814,0.694999992847443,-0.0149999996647239),Vector3(-0.200000002980232,0.694999992847443,-0.025000000372529),Vector3(-0.200000002980232,0.694999992847443,-0.00499999988824129),Vector3(-0.200000002980232,0.685000002384186,-0.0149999996647239),Vector3(-0.215000003576279,0.740000009536743,-0.0399999991059303),Vector3(-0.185000002384186,0.740000009536743,-0.0399999991059303),Vector3(-0.200000002980232,0.740000009536743,-0.0549999997019768),Vector3(-0.200000002980232,0.740000009536743,-0.025000000372529),Vector3(-0.209999993443489,0.714200019836426,-0.0399999991059303),Vector3(-0.189999997615814,0.714200019836426,-0.0399999991059303),Vector3(-0.200000002980232,0.714200019836426,-0.0529999993741512),Vector3(-0.200000002980232,0.714200019836426,-0.0270000007003546),Vector3(-0.209999993443489,0.680000007152557,-0.0399999991059303),Vector3(-0.189999997615814,0.680000007152557,-0.0399999991059303),Vector3(-0.200000002980232,0.680000007152557,-0.0500000007450581),Vector3(-0.200000002980232,0.680000007152557,-0.0299999993294477),Vector3(-0.200000002980232,0.670000016689301,-0.0399999991059303),Vector3(-0.211999997496605,0.740000009536743,-0.0649999976158142),Vector3(-0.187999993562698,0.740000009536743,-0.0649999976158142),Vector3(-0.200000002980232,0.740000009536743,-0.0755999982357025),Vector3(-0.200000002980232,0.740000009536743,-0.0542000010609627),Vector3(-0.209999993443489,0.717700004577637,-0.0649999976158142),Vector3(-0.189999997615814,0.717700004577637,-0.0649999976158142),Vector3(-0.200000002980232,0.717700004577637,-0.0750999972224236),Vector3(-0.200000002980232,0.717700004577637,-0.0549000017344952),Vector3(-0.209999993443489,0.694999992847443,-0.0649999976158142),Vector3(-0.189999997615814,0.694999992847443,-0.0649999976158142),Vector3(-0.200000002980232,0.694999992847443,-0.0750000029802322),Vector3(-0.200000002980232,0.694999992847443,-0.0549999997019768),Vector3(-0.200000002980232,0.685000002384186,-0.0649999976158142),Vector3(-0.210999995470047,0.754999995231628,-0.0850000008940697),Vector3(-0.188999995589256,0.754999995231628,-0.0850000008940697),Vector3(-0.200000002980232,0.754999995231628,-0.0952000021934509),Vector3(-0.200000002980232,0.754999995231628,-0.0747999995946884),Vector3(-0.209999993443489,0.735000014305115,-0.0850000008940697),Vector3(-0.189999997615814,0.735000014305115,-0.0850000008940697),Vector3(-0.200000002980232,0.735000014305115,-0.095100000500679),Vector3(-0.200000002980232,0.735000014305115,-0.0749000012874603),Vector3(-0.209999993443489,0.720000028610229,-0.0850000008940697),Vector3(-0.189999997615814,0.720000028610229,-0.0850000008940697),Vector3(-0.200000002980232,0.720000028610229,-0.0949999988079071),Vector3(-0.200000002980232,0.720000028610229,-0.0750000029802322),Vector3(-0.200000002980232,0.709999978542328,-0.0850000008940697),Vector3(0.115000002086163,0.465999990701675,0.0599999986588955),Vector3(0.115000002086163,0.465999990701675,-0.0549999997019768),Vector3(0.150000005960464,0.465999990701675,0),Vector3(0.0500000007450581,0.465999990701675,0),Vector3(0.170000001788139,0.300000011920929,0),Vector3(0.0599999986588955,0.300000011920929,0),Vector3(0.100000001490116,0.300000011920929,-0.0500000007450581),Vector3(0.100000001490116,0.300000011920929,0.0500000007450581),Vector3(0.150000005960464,0.0700000002980232,0),Vector3(0.0850000008940697,0.0860000029206276,0.0125000001862645),Vector3(0.115000002086163,0.0689999982714653,-0.0450000017881393),Vector3(0.116999998688698,0.0974999964237213,0.0615000016987324),Vector3(0.137500002980232,0.00600000005215406,-0.0299999993294477),Vector3(0.0949999988079071,0.00600000005215406,-0.0299999993294477),Vector3(0.115000002086163,0.0149999996647239,-0.0450000017881393),Vector3(0.115000002086163,0.0599999986588955,0.100000001490116),Vector3(0.115000002086163,0,0.0700000002980232),Vector3(0.165000006556511,0,0.0700000002980232),Vector3(0.0949999988079071,0,0.0700000002980232),Vector3(0.115000002086163,0.0399999991059303,0.129999995231628),Vector3(0.125,0,0.119999997317791),Vector3(0.165000006556511,0,0.119999997317791),Vector3(0.0869999974966049,0,0.122000001370907),Vector3(0.0900000035762787,0.0120000001043081,0.187999993562698),Vector3(0.109999999403954,0.0109999999403954,0.189999997615814),Vector3(0.128000006079674,0.0109999999403954,0.185000002384186),Vector3(0.142000004649162,0.0109999999403954,0.178000003099442),Vector3(0.153999999165535,0.00999999977648258,0.167999997735024),Vector3(-0.115000009536743,0.465999990701675,0.0600000023841858),Vector3(-0.115000002086163,0.465999990701675,-0.0549999997019768),Vector3(-0.170000001788139,0.465999990701675,0),Vector3(-0.0500000007450581,0.465999990701675,0),Vector3(-0.170000001788139,0.300000011920929,0),Vector3(-0.0599999986588955,0.300000011920929,0),Vector3(-0.100000001490116,0.300000011920929,-0.0500000007450581),Vector3(-0.100000001490116,0.300000011920929,0.0500000007450581),Vector3(-0.150000005960464,0.0700000002980232,0),Vector3(-0.0850000008940697,0.0860000029206276,0.0125000001862645),Vector3(-0.115000002086163,0.0689999982714653,-0.0450000017881393),Vector3(-0.116999998688698,0.0974999964237213,0.0615000016987324),Vector3(-0.137500002980232,0.00600000005215406,-0.0299999993294477),Vector3(-0.0949999988079071,0.00600000005215406,-0.0299999993294477),Vector3(-0.0949999988079071,0.00600000005215406,-0.0299999993294477),Vector3(-0.115000002086163,0.0599999986588955,0.100000001490116),Vector3(-0.115000002086163,0,0.0700000002980232),Vector3(-0.165000006556511,0,0.0700000002980232),Vector3(-0.0949999988079071,0,0.0700000002980232),Vector3(-0.115000002086163,0.0399999991059303,0.129999995231628),Vector3(-0.125,0,0.119999997317791),Vector3(-0.165000006556511,0,0.119999997317791),Vector3(-0.0869999974966049,0,0.122000001370907),Vector3(-0.0900000035762787,0.0120000001043081,0.187999993562698),Vector3(-0.109999999403954,0.0109999999403954,0.189999997615814),Vector3(-0.128000006079674,0.0109999999403954,0.185000002384186),Vector3(-0.142000004649162,0.0109999999403954,0.178000003099442),Vector3(-0.153999999165535,0.00999999977648258,0.167999997735024)]);
{ .SetCoord }
IndexedFaceSet211.Coord := Coordinate212;
{ .SetGeometry }
Shape210.Geometry := IndexedFaceSet211;
Appearance213 := TAppearanceNode.Create;
ImageTexture214 := TImageTextureNode.Create;
ImageTexture214.SetUrl(['bodytexture28.png']);
{ .SetTexture }
Appearance213.Texture := ImageTexture214;
Material215 := TMaterialNode.Create;
Material215.AmbientIntensity := 0.699999988079071;
Material215.Shininess := 0.600000023841858;
Material215.DiffuseColor := Vector3(0.5,0,0.5);
Material215.SpecularColor := Vector3(1,1,1);
Material215.EmissiveColor := Vector3(0.129999995231628,0.349999994039536,0.129999995231628);
{ .SetMaterial }
Appearance213.Material := Material215;
{ .SetAppearance }
Shape210.Appearance := Appearance213;
{ .SetSkin }
HAnimHumanoid27.SetSkin([Shape210]);
Coordinate216 := TCoordinateNode.Create;
Coordinate216 := Coordinate212;
{ .SetSkinCoord }
HAnimHumanoid27.SetSkinCoord(Coordinate216);
{ .AddChildren }
Group26.AddChildren([HAnimHumanoid27]);
{ .AddChildren }
Group5.AddChildren([Group26]);
Transform217 := TTransformNode.Create;
Transform217.Translation := Vector3(-0.42091,0.2089,-0.42091);
Transform217.Rotation := Vector4(-0.70711,0,-0.70711,0.67654);
Transform217.Scale := Vector3(0.23,0.23,0.23);
Shape218 := TShapeNode.Create;
Appearance219 := TAppearanceNode.Create;
Material220 := TMaterialNode.Create;
Material220.DiffuseColor := Vector3(0,0.8353,0);
Material220.SpecularColor := Vector3(0,0.6849,0);
Material220.EmissiveColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance219.Material := Material220;
ImageTexture221 := TImageTextureNode.Create;
ImageTexture221.SetUrl(['bodytexture28.png']);
{ .SetTexture }
Appearance219.Texture := ImageTexture221;
{ .SetAppearance }
Shape218.Appearance := Appearance219;
IndexedFaceSet222 := TIndexedFaceSetNode.Create;
IndexedFaceSet222.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
Coordinate223 := TCoordinateNode.Create;
Coordinate223.SetPoint([Vector3(0,0.4675,0),Vector3(0,0.4049,-0.2338),Vector3(-0.1169,0.4049,-0.2024),Vector3(-0.2024,0.4049,-0.1169),Vector3(-0.2338,0.4049,0),Vector3(-0.2024,0.4049,0.1169),Vector3(-0.1169,0.4049,0.2024),Vector3(0,0.4049,0.2338),Vector3(0.1169,0.4049,0.2024),Vector3(0.2024,0.4049,0.1169),Vector3(0.2338,0.4049,0),Vector3(0.2024,0.4049,-0.1169),Vector3(0.1169,0.4049,-0.2024),Vector3(0,0.2338,-0.4049),Vector3(-0.2024,0.2338,-0.3506),Vector3(-0.3506,0.2338,-0.2024),Vector3(-0.4049,0.2338,0),Vector3(-0.3506,0.2338,0.2024),Vector3(-0.2024,0.2338,0.3506),Vector3(0,0.2338,0.4049),Vector3(0.2024,0.2338,0.3506),Vector3(0.3506,0.2338,0.2024),Vector3(0.4049,0.2338,0),Vector3(0.3506,0.2338,-0.2024),Vector3(0.2024,0.2338,-0.3506),Vector3(0,0,-0.4675),Vector3(-0.2338,0,-0.4049),Vector3(-0.4049,0,-0.2338),Vector3(-0.4675,0,0),Vector3(-0.4049,0,0.2338),Vector3(-0.2338,0,0.4049),Vector3(0,0,0.4675),Vector3(0.2338,0,0.4049),Vector3(0.4049,0,0.2338),Vector3(0.4675,0,0),Vector3(0.4049,0,-0.2338),Vector3(0.2338,0,-0.4049),Vector3(0,-0.2338,-0.4049),Vector3(-0.2024,-0.2338,-0.3506),Vector3(-0.3506,-0.2338,-0.2024),Vector3(-0.4049,-0.2338,0),Vector3(-0.3506,-0.2338,0.2024),Vector3(-0.2024,-0.2338,0.3506),Vector3(0,-0.2338,0.4049),Vector3(0.2024,-0.2338,0.3506),Vector3(0.3506,-0.2338,0.2024),Vector3(0.4049,-0.2338,0),Vector3(0.3506,-0.2338,-0.2024),Vector3(0.2024,-0.2338,-0.3506),Vector3(0,-0.4049,-0.2338),Vector3(-0.1169,-0.4049,-0.2024),Vector3(-0.2024,-0.4049,-0.1169),Vector3(-0.2338,-0.4049,0),Vector3(-0.2024,-0.4049,0.1169),Vector3(-0.1169,-0.4049,0.2024),Vector3(0,-0.4049,0.2338),Vector3(0.1169,-0.4049,0.2024),Vector3(0.2024,-0.4049,0.1169),Vector3(0.2338,-0.4049,0),Vector3(0.2024,-0.4049,-0.1169),Vector3(0.1169,-0.4049,-0.2024),Vector3(0,-0.4675,0)]);
{ .SetCoord }
IndexedFaceSet222.Coord := Coordinate223;
{ .SetGeometry }
Shape218.Geometry := IndexedFaceSet222;
{ .AddChild }
Transform217.AddChildren([Shape218]);
Viewpoint224 := TViewpointNode.Create;
Viewpoint224.Description := 'ball View';
{ .AddChildren }
Transform217.AddChildren([Viewpoint224]);
{ .AddChildren }
Group5.AddChildren([Transform217]);
Transform225 := TTransformNode.Create;
Transform225.Scale := Vector3(0.275,0.275,0.275);
Inline226 := TInlineNode.Create;
Inline226.Global := True;
Inline226.SetUrl(['JointCoordinateAxes.x3dv']);
{ .AddChildren }
Transform225.AddChildren([Inline226]);
{ .AddChildren }
Group5.AddChildren([Transform225]);
Transform227 := TTransformNode.Create;
Transform227.Scale := Vector3(1.175,1,1.175);
Shape228 := TShapeNode.Create;
Appearance229 := TAppearanceNode.Create;
Material230 := TMaterialNode.Create;
Material230.DiffuseColor := Vector3(0.9,0,0.7);
Material230.EmissiveColor := Vector3(0.42496,0.48398,1);
{ .SetMaterial }
Appearance229.Material := Material230;
{ .SetAppearance }
Shape228.Appearance := Appearance229;
IndexedLineSet231 := TIndexedLineSetNode.Create;
IndexedLineSet231.SetCoordIndex([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
Coordinate232 := TCoordinateNode.Create;
Coordinate232.SetPoint([Vector3(1,0,0),Vector3(0.995,0,-0.105),Vector3(0.979,0,-0.208),Vector3(0.951,0,-0.309),Vector3(0.914,0,-0.407),Vector3(0.866,0,-0.5),Vector3(0.809,0,-0.588),Vector3(0.743,0,-0.669),Vector3(0.669,0,-0.743),Vector3(0.588,0,-0.809),Vector3(0.5,0,-0.866),Vector3(0.407,0,-0.914),Vector3(0.309,0,-0.951),Vector3(0.208,0,-0.978),Vector3(0.105,0,-0.995),Vector3(0,0,-1),Vector3(-0.105,0,-0.99452),Vector3(-0.208,0,-0.978),Vector3(-0.309,0,-0.951),Vector3(-0.407,0,-0.914),Vector3(-0.5,0,-0.866),Vector3(-0.588,0,-0.809),Vector3(-0.669,0,-0.743),Vector3(-0.743,0,-0.669),Vector3(-0.809,0,-0.588),Vector3(-0.866,0,-0.5),Vector3(-0.914,0,-0.407),Vector3(-0.951,0,-0.309),Vector3(-0.978,0,-0.208),Vector3(-0.995,0,-0.105),Vector3(-1,0,0),Vector3(-0.995,0,0.105),Vector3(-0.978,0,0.208),Vector3(-0.951,0,0.309),Vector3(-0.914,0,0.407),Vector3(-0.866,0,0.5),Vector3(-0.809,0,0.588),Vector3(-0.743,0,0.669),Vector3(-0.669,0,0.743),Vector3(-0.588,0,0.809),Vector3(-0.5,0,0.866),Vector3(-0.407,0,0.914),Vector3(-0.309,0,0.951),Vector3(-0.208,0,0.978),Vector3(-0.105,0,0.995),Vector3(0,0,1),Vector3(0.105,0,0.995),Vector3(0.208,0,0.978),Vector3(0.309,0,0.951),Vector3(0.407,0,0.914),Vector3(0.5,0,0.866),Vector3(0.588,0,0.809),Vector3(0.669,0,0.743),Vector3(0.743,0,0.669),Vector3(0.809,0,0.588),Vector3(0.866,0,0.5),Vector3(0.914,0,0.407),Vector3(0.951,0,0.309),Vector3(0.978,0,0.208),Vector3(0.995,0,0.104),Vector3(1,0,0)]);
{ .SetCoord }
IndexedLineSet231.Coord := Coordinate232;
{ .SetGeometry }
Shape228.Geometry := IndexedLineSet231;
{ .AddChild }
Transform227.AddChildren([Shape228]);
{ .AddChildren }
Group5.AddChildren([Transform227]);
Transform233 := TTransformNode.Create;
Transform233.Scale := Vector3(0.5,1,0.5);
Shape234 := TShapeNode.Create;
Appearance235 := TAppearanceNode.Create;
Material236 := TMaterialNode.Create;
Material236.DiffuseColor := Vector3(0.9,0,0.7);
Material236.EmissiveColor := Vector3(0.42496,0.48398,1);
{ .SetMaterial }
Appearance235.Material := Material236;
{ .SetAppearance }
Shape234.Appearance := Appearance235;
IndexedLineSet237 := TIndexedLineSetNode.Create;
IndexedLineSet237 := IndexedLineSet231;
{ .SetGeometry }
Shape234.Geometry := IndexedLineSet237;
{ .AddChild }
Transform233.AddChildren([Shape234]);
{ .AddChildren }
Group5.AddChildren([Transform233]);
Transform238 := TTransformNode.Create;
Transform238.Scale := Vector3(0.25,1,0.25);
Shape239 := TShapeNode.Create;
Appearance240 := TAppearanceNode.Create;
Material241 := TMaterialNode.Create;
Material241.DiffuseColor := Vector3(0.9,0,0.7);
Material241.EmissiveColor := Vector3(0.42496,0.48398,1);
{ .SetMaterial }
Appearance240.Material := Material241;
{ .SetAppearance }
Shape239.Appearance := Appearance240;
IndexedLineSet242 := TIndexedLineSetNode.Create;
IndexedLineSet242 := IndexedLineSet231;
{ .SetGeometry }
Shape239.Geometry := IndexedLineSet242;
{ .AddChild }
Transform238.AddChildren([Shape239]);
{ .AddChildren }
Group5.AddChildren([Transform238]);
{ .AddGroup }
X3D0.AddChildren([Group5]);
Result := X3D0;
end;
