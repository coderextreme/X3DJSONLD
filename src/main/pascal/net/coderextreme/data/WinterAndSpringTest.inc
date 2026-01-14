function WinterAndSpringTest: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group12: TGroupNode;
WorldInfo13: TWorldInfoNode;
NavigationInfo14: TNavigationInfoNode;
Viewpoint15: TViewpointNode;
Background16: TBackgroundNode;
Background17: TBackgroundNode;
Background18: TBackgroundNode;
Background19: TBackgroundNode;
SpotLight20: TSpotLightNode;
PointLight21: TPointLightNode;
Viewpoint22: TViewpointNode;
Viewpoint23: TViewpointNode;
Viewpoint24: TViewpointNode;
Viewpoint25: TViewpointNode;
Viewpoint26: TViewpointNode;
Viewpoint27: TViewpointNode;
Viewpoint28: TViewpointNode;
Viewpoint29: TViewpointNode;
Viewpoint30: TViewpointNode;
Viewpoint31: TViewpointNode;
Viewpoint32: TViewpointNode;
Group33: TGroupNode;
HAnimHumanoid34: THAnimHumanoidNode;
MetadataSet35: TMetadataSetNode;
MetadataString36: TMetadataStringNode;
HAnimJoint37: THAnimJointNode;
HAnimSegment38: THAnimSegmentNode;
HAnimSite39: THAnimSiteNode;
Transform40: TTransformNode;
Viewpoint41: TViewpointNode;
Shape42: TShapeNode;
IndexedLineSet43: TIndexedLineSetNode;
Color44: TColorNode;
Coordinate45: TCoordinateNode;
Shape46: TShapeNode;
Appearance47: TAppearanceNode;
Material48: TMaterialNode;
ImageTexture49: TImageTextureNode;
TextureTransform50: TTextureTransformNode;
IndexedFaceSet51: TIndexedFaceSetNode;
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
HAnimDisplacer90: THAnimDisplacerNode;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'WinterAndSpringTest.x3d';
X3D0.Meta['description'] := '3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections.';
X3D0.Meta['creator'] := 'Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman';
X3D0.Meta['created'] := '1 May 2023';
X3D0.Meta['modified'] := 'Mon, 15 Sep 2025 05:21:02 GMT';
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d';
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d';
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d';
Group12 := TGroupNode.Create;
WorldInfo13 := TWorldInfoNode.Create;
WorldInfo13.Title := 'X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations';
WorldInfo13.SetInfo(['X3D Humanoid LOA3 skeleton plus others','Lots points']);
{ .AddChildren }
Group12.AddChildren([WorldInfo13]);
NavigationInfo14 := TNavigationInfoNode.Create;
{ .AddChildren }
Group12.AddChildren([NavigationInfo14]);
Viewpoint15 := TViewpointNode.Create;
Viewpoint15.Description := 'Male';
Viewpoint15.Position := Vector3(0,1,-2);
Viewpoint15.CenterOfRotation := Vector3(0,1,0);
{ .AddChildren }
Group12.AddChildren([Viewpoint15]);
Background16 := TBackgroundNode.Create;
{ .AddChildren }
Group12.AddChildren([Background16]);
Background17 := TBackgroundNode.Create;
{ .AddChildren }
Group12.AddChildren([Background17]);
Background18 := TBackgroundNode.Create;
{ .AddChildren }
Group12.AddChildren([Background18]);
Background19 := TBackgroundNode.Create;
{ .AddChildren }
Group12.AddChildren([Background19]);
SpotLight20 := TSpotLightNode.Create;
SpotLight20.Color := Vector3(0.8,0.8,1);
SpotLight20.AmbientIntensity := 0.7;
SpotLight20.Location := Vector3(0,3,3);
SpotLight20.Direction := Vector3(0,0,0);
SpotLight20.Radius := 10;
SpotLight20.BeamWidth := 1.5;
SpotLight20.CutOffAngle := 0.6;
{ .AddChildren }
Group12.AddChildren([SpotLight20]);
PointLight21 := TPointLightNode.Create;
PointLight21.Color := Vector3(0.8,0.8,1);
PointLight21.AmbientIntensity := 0.7;
PointLight21.Location := Vector3(0,10,-7);
{ .AddChildren }
Group12.AddChildren([PointLight21]);
Viewpoint22 := TViewpointNode.Create;
Viewpoint22.Description := 'Scene_Inclined View';
Viewpoint22.Position := Vector3(1.62,1.05,3.06);
Viewpoint22.Orientation := Vector4(-0.113,0.993,0.0347,0.671);
Viewpoint22.CenterOfRotation := Vector3(0,0.85,0);
{ .AddChildren }
Group12.AddChildren([Viewpoint22]);
Viewpoint23 := TViewpointNode.Create;
Viewpoint23.Description := 'Scene_Front View';
Viewpoint23.Position := Vector3(0,0.8,2.58);
Viewpoint23.CenterOfRotation := Vector3(0,0.8,0);
{ .AddChildren }
Group12.AddChildren([Viewpoint23]);
Viewpoint24 := TViewpointNode.Create;
Viewpoint24.Description := 'Scene_Side View';
Viewpoint24.Position := Vector3(-2.6,1.5,1);
Viewpoint24.Orientation := Vector4(0,1,0,1.5708);
Viewpoint24.CenterOfRotation := Vector3(0,0.8,0);
{ .AddChildren }
Group12.AddChildren([Viewpoint24]);
Viewpoint25 := TViewpointNode.Create;
Viewpoint25.Description := 'Scene_Side View';
Viewpoint25.Position := Vector3(-5,1.5,1);
Viewpoint25.Orientation := Vector4(0,1,0,1.5708);
Viewpoint25.CenterOfRotation := Vector3(0,0.8,0);
{ .AddChildren }
Group12.AddChildren([Viewpoint25]);
Viewpoint26 := TViewpointNode.Create;
Viewpoint26.Description := 'Scene_Side View';
Viewpoint26.Position := Vector3(-10,1.5,1);
Viewpoint26.Orientation := Vector4(0,1,0,1.5708);
Viewpoint26.CenterOfRotation := Vector3(0,0.8,0);
{ .AddChildren }
Group12.AddChildren([Viewpoint26]);
Viewpoint27 := TViewpointNode.Create;
Viewpoint27.Description := 'Scene_Side View';
Viewpoint27.Position := Vector3(-20,1.5,1);
Viewpoint27.Orientation := Vector4(0,1,0,1.5708);
Viewpoint27.CenterOfRotation := Vector3(0,0.8,0);
{ .AddChildren }
Group12.AddChildren([Viewpoint27]);
Viewpoint28 := TViewpointNode.Create;
Viewpoint28.Description := 'Scene_Side View';
Viewpoint28.Position := Vector3(-10,1.5,1);
Viewpoint28.Orientation := Vector4(0,1,0,1.5708);
Viewpoint28.CenterOfRotation := Vector3(0,0.8,0);
{ .AddChildren }
Group12.AddChildren([Viewpoint28]);
Viewpoint29 := TViewpointNode.Create;
Viewpoint29.Description := 'Scene_Back View';
Viewpoint29.Position := Vector3(0,1.5,-5);
Viewpoint29.Orientation := Vector4(0,1,0,3.14);
Viewpoint29.CenterOfRotation := Vector3(0,1.5,0);
{ .AddChildren }
Group12.AddChildren([Viewpoint29]);
Viewpoint30 := TViewpointNode.Create;
Viewpoint30.Description := 'Scene_Back View';
Viewpoint30.Position := Vector3(0,1.5,-2.5);
Viewpoint30.Orientation := Vector4(0,1,0,3.14);
Viewpoint30.CenterOfRotation := Vector3(0,1.5,0);
{ .AddChildren }
Group12.AddChildren([Viewpoint30]);
Viewpoint31 := TViewpointNode.Create;
Viewpoint31.Description := 'Scene_Back View';
Viewpoint31.Position := Vector3(0,1.5,-20);
Viewpoint31.Orientation := Vector4(0,1,15,3.14);
Viewpoint31.CenterOfRotation := Vector3(0,1.5,0);
{ .AddChildren }
Group12.AddChildren([Viewpoint31]);
Viewpoint32 := TViewpointNode.Create;
Viewpoint32.Description := 'Scene_Top View';
Viewpoint32.Position := Vector3(0,3.5,0);
Viewpoint32.Orientation := Vector4(1,0,0,-1.5708);
Viewpoint32.CenterOfRotation := Vector3(0,1.5,0);
{ .AddChildren }
Group12.AddChildren([Viewpoint32]);
Group33 := TGroupNode.Create;
HAnimHumanoid34 := THAnimHumanoidNode.Create;
HAnimHumanoid34.NameField := 'Walk';
HAnimHumanoid34.Loa := 3;
MetadataSet35 := TMetadataSetNode.Create;
MetadataSet35.NameField := 'warnings';
MetadataSet35.Reference := 'HAnim';
MetadataString36 := TMetadataStringNode.Create;
MetadataString36.NameField := 'SymmetricalLeftRight';
MetadataString36.Reference := 'correction options: ignore, warn, average, left, right, largest, smallest';
MetadataString36.SetValue(['ignore']);
{ .SetValue }
MetadataSet35.Value := MetadataString36;
{ .SetMetadata }
HAnimHumanoid34.Metadata := MetadataSet35;
HAnimJoint37 := THAnimJointNode.Create;
HAnimJoint37.NameField := 'humanoid_root';
HAnimSegment38 := THAnimSegmentNode.Create;
HAnimSegment38.NameField := 'sacrum';
HAnimSite39 := THAnimSiteNode.Create;
HAnimSite39.NameField := 'RootBack_view';
Transform40 := TTransformNode.Create;
Transform40.Scale := Vector3(0.175,0.175,0.175);
Viewpoint41 := TViewpointNode.Create;
Viewpoint41.Description := 'Joe_HAnim Root HAnimSite Coordinate Axes View';
{ .AddChildren }
Transform40.AddChildren([Viewpoint41]);
Shape42 := TShapeNode.Create;
IndexedLineSet43 := TIndexedLineSetNode.Create;
IndexedLineSet43.ColorPerVertex := False;
IndexedLineSet43.SetColorIndex([0,1,2]);
IndexedLineSet43.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Color44 := TColorNode.Create;
Color44.SetColor([Vector3(1,0,0),Vector3(0,0.6,0),Vector3(0,0,1)]);
{ .SetColor }
IndexedLineSet43.Color := Color44;
Coordinate45 := TCoordinateNode.Create;
Coordinate45.SetPoint([Vector3(0,0,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1)]);
{ .SetCoord }
IndexedLineSet43.Coord := Coordinate45;
{ .SetGeometry }
Shape42.Geometry := IndexedLineSet43;
{ .AddChild }
Transform40.AddChildren([Shape42]);
Shape46 := TShapeNode.Create;
Appearance47 := TAppearanceNode.Create;
Material48 := TMaterialNode.Create;
Material48.DiffuseColor := Vector3(0.3,0.3,0.6);
Material48.EmissiveColor := Vector3(0.3,0.3,0.6);
{ .SetMaterial }
Appearance47.Material := Material48;
ImageTexture49 := TImageTextureNode.Create;
ImageTexture49.SetUrl(['OldManBodyTexture29.png','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png']);
{ .SetTexture }
Appearance47.Texture := ImageTexture49;
TextureTransform50 := TTextureTransformNode.Create;
{ .SetTextureTransform }
Appearance47.TextureTransform := TextureTransform50;
{ .SetAppearance }
Shape46.Appearance := Appearance47;
IndexedFaceSet51 := TIndexedFaceSetNode.Create;
{ .SetGeometry }
Shape46.Geometry := IndexedFaceSet51;
{ .AddChild }
Transform40.AddChildren([Shape46]);
{ .AddChildren }
HAnimSite39.AddChildren([Transform40]);
{ .AddChildren }
HAnimSegment38.AddChildren([HAnimSite39]);
{ .AddChildren }
HAnimJoint37.AddChildren([HAnimSegment38]);
HAnimJoint52 := THAnimJointNode.Create;
HAnimJoint52.NameField := 'sacroiliac';
HAnimJoint53 := THAnimJointNode.Create;
HAnimJoint53.NameField := 'l_hip';
HAnimJoint54 := THAnimJointNode.Create;
HAnimJoint54.NameField := 'l_knee';
HAnimJoint55 := THAnimJointNode.Create;
HAnimJoint55.NameField := 'l_talocrural';
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.NameField := 'l_tarsometatarsal_2';
HAnimJoint57 := THAnimJointNode.Create;
HAnimJoint57.NameField := 'l_metatarsophalangeal_2';
HAnimJoint58 := THAnimJointNode.Create;
HAnimJoint58.NameField := 'l_tarsal_distal_interphalangeal_2';
HAnimJoint58.Center := Vector3(0.115,0.02,0.122);
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
HAnimJoint59 := THAnimJointNode.Create;
HAnimJoint59.NameField := 'l_hip';
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.NameField := 'l_knee';
{ .AddChildren }
HAnimJoint59.AddChildren([HAnimJoint60]);
HAnimJoint61 := THAnimJointNode.Create;
HAnimJoint61.NameField := 'l_talocrural';
HAnimJoint62 := THAnimJointNode.Create;
HAnimJoint62.NameField := 'r_tarsometatarsal_2';
HAnimJoint62.Center := Vector3(-0.1,0.015,-0.01);
HAnimJoint62.SetSkinCoordIndex([374,375,376]);
HAnimJoint62.SetSkinCoordWeight([1,1,1]);
HAnimJoint63 := THAnimJointNode.Create;
HAnimJoint63.NameField := 'r_metatarsophalangeal_2';
HAnimJoint63.Center := Vector3(-0.115,0.037,0.09);
HAnimJoint63.SetSkinCoordIndex([377,378,379,380]);
HAnimJoint63.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint64 := THAnimJointNode.Create;
HAnimJoint64.NameField := 'r_tarsal_distal_interphalangeal_2';
HAnimJoint64.Center := Vector3(-0.1,0.01,0.14);
HAnimJoint64.SetSkinCoordIndex([381,382,383,384,385,386,387,388,389]);
HAnimJoint64.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ .AddChildren }
HAnimJoint63.AddChildren([HAnimJoint64]);
{ .AddChildren }
HAnimJoint62.AddChildren([HAnimJoint63]);
{ .AddChildren }
HAnimJoint61.AddChildren([HAnimJoint62]);
{ .AddChildren }
HAnimJoint59.AddChildren([HAnimJoint61]);
{ .AddChildren }
HAnimJoint53.AddChildren([HAnimJoint59]);
{ .AddChildren }
HAnimJoint52.AddChildren([HAnimJoint53]);
HAnimJoint65 := THAnimJointNode.Create;
HAnimJoint65.NameField := 'vl5';
HAnimJoint66 := THAnimJointNode.Create;
HAnimJoint66.NameField := 'vl4';
HAnimJoint67 := THAnimJointNode.Create;
HAnimJoint67.NameField := 'vl3';
HAnimJoint68 := THAnimJointNode.Create;
HAnimJoint68.NameField := 'vl2';
HAnimJoint69 := THAnimJointNode.Create;
HAnimJoint69.NameField := 'vl1';
HAnimJoint70 := THAnimJointNode.Create;
HAnimJoint70.NameField := 'vt12';
HAnimJoint71 := THAnimJointNode.Create;
HAnimJoint71.NameField := 'vt11';
HAnimJoint72 := THAnimJointNode.Create;
HAnimJoint72.NameField := 'vt10';
HAnimJoint73 := THAnimJointNode.Create;
HAnimJoint73.NameField := 'vt9';
HAnimJoint74 := THAnimJointNode.Create;
HAnimJoint74.NameField := 'vt8';
HAnimJoint75 := THAnimJointNode.Create;
HAnimJoint75.NameField := 'vt7';
HAnimJoint76 := THAnimJointNode.Create;
HAnimJoint76.NameField := 'vt6';
HAnimJoint77 := THAnimJointNode.Create;
HAnimJoint77.NameField := 'vt5';
HAnimJoint78 := THAnimJointNode.Create;
HAnimJoint78.NameField := 'vt4';
HAnimJoint79 := THAnimJointNode.Create;
HAnimJoint79.NameField := 'vt3';
HAnimJoint80 := THAnimJointNode.Create;
HAnimJoint80.NameField := 'vt2';
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.NameField := 'vt1';
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.NameField := 'vc7';
HAnimJoint83 := THAnimJointNode.Create;
HAnimJoint83.NameField := 'vc6';
HAnimJoint84 := THAnimJointNode.Create;
HAnimJoint84.NameField := 'vc5';
HAnimJoint85 := THAnimJointNode.Create;
HAnimJoint85.NameField := 'vc4';
HAnimJoint86 := THAnimJointNode.Create;
HAnimJoint86.NameField := 'vc3';
HAnimJoint87 := THAnimJointNode.Create;
HAnimJoint87.NameField := 'vc2';
HAnimJoint88 := THAnimJointNode.Create;
HAnimJoint88.NameField := 'vc1';
HAnimJoint89 := THAnimJointNode.Create;
HAnimJoint89.NameField := 'skullbase';
HAnimDisplacer90 := THAnimDisplacerNode.Create;
HAnimDisplacer90.NameField := 'skull_tip_raiser_action';
HAnimDisplacer90.SetCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer90.SetDisplacements([Vector3(0,0.15,0),Vector3(0,0,0.15),Vector3(-0.1,0,0.15),Vector3(0.1,0,0.05),Vector3(0,-0.02,0.05),Vector3(-0.15,0,0),Vector3(-0.05,0,0),Vector3(0.15,0,0),Vector3(0.05,0,0),Vector3(0,0,-0.15)]);
{ .AddDisplacers }
HAnimJoint89.SetDisplacers([HAnimDisplacer90]);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.NameField := 'l_eyelid_joint';
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimJoint91]);
HAnimJoint92 := THAnimJointNode.Create;
HAnimJoint92.NameField := 'l_eyeball_joint';
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimJoint92]);
HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.NameField := 'l_eyebrow_joint';
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimJoint93]);
HAnimJoint94 := THAnimJointNode.Create;
HAnimJoint94.NameField := 'r_eyelid_joint';
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimJoint94]);
HAnimJoint95 := THAnimJointNode.Create;
HAnimJoint95.NameField := 'r_eyeball_joint';
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimJoint95]);
HAnimJoint96 := THAnimJointNode.Create;
HAnimJoint96.NameField := 'r_eyebrow_joint';
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimJoint96]);
HAnimJoint97 := THAnimJointNode.Create;
HAnimJoint97.NameField := 'temporomandibular';
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimJoint97]);
{ .AddChildren }
HAnimJoint88.AddChildren([HAnimJoint89]);
{ .AddChildren }
HAnimJoint87.AddChildren([HAnimJoint88]);
{ .AddChildren }
HAnimJoint86.AddChildren([HAnimJoint87]);
{ .AddChildren }
HAnimJoint85.AddChildren([HAnimJoint86]);
{ .AddChildren }
HAnimJoint84.AddChildren([HAnimJoint85]);
{ .AddChildren }
HAnimJoint83.AddChildren([HAnimJoint84]);
{ .AddChildren }
HAnimJoint82.AddChildren([HAnimJoint83]);
{ .AddChildren }
HAnimJoint81.AddChildren([HAnimJoint82]);
HAnimJoint98 := THAnimJointNode.Create;
HAnimJoint98.NameField := 'l_acromioclavicular';
HAnimJoint99 := THAnimJointNode.Create;
HAnimJoint99.NameField := 'l_sternoclavicular';
HAnimJoint100 := THAnimJointNode.Create;
HAnimJoint100.NameField := 'l_shoulder';
HAnimJoint101 := THAnimJointNode.Create;
HAnimJoint101.NameField := 'l_elbow';
HAnimJoint102 := THAnimJointNode.Create;
HAnimJoint102.NameField := 'l_radiocarpal';
HAnimJoint103 := THAnimJointNode.Create;
HAnimJoint103.NameField := 'l_carpometacarpal_1';
HAnimJoint104 := THAnimJointNode.Create;
HAnimJoint104.NameField := 'l_metacarpophalangeal_1';
HAnimJoint105 := THAnimJointNode.Create;
HAnimJoint105.NameField := 'l_carpal_interphalangeal_1';
{ .AddChildren }
HAnimJoint104.AddChildren([HAnimJoint105]);
{ .AddChildren }
HAnimJoint103.AddChildren([HAnimJoint104]);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.NameField := 'l_carpometacarpal_2';
HAnimJoint107 := THAnimJointNode.Create;
HAnimJoint107.NameField := 'l_metacarpophalangeal_2';
HAnimJoint108 := THAnimJointNode.Create;
HAnimJoint108.NameField := 'l_carpal_proximal_interphalangeal_2';
HAnimJoint109 := THAnimJointNode.Create;
HAnimJoint109.NameField := 'l_carpal_distal_interphalangeal_2';
{ .AddChildren }
HAnimJoint108.AddChildren([HAnimJoint109]);
{ .AddChildren }
HAnimJoint107.AddChildren([HAnimJoint108]);
{ .AddChildren }
HAnimJoint106.AddChildren([HAnimJoint107]);
HAnimJoint110 := THAnimJointNode.Create;
HAnimJoint110.NameField := 'l_carpometacarpal_3';
HAnimJoint111 := THAnimJointNode.Create;
HAnimJoint111.NameField := 'l_metacarpophalangeal_3';
HAnimJoint112 := THAnimJointNode.Create;
HAnimJoint112.NameField := 'l_carpal_proximal_interphalangeal_3';
HAnimJoint113 := THAnimJointNode.Create;
HAnimJoint113.NameField := 'l_carpal_distal_interphalangeal_3';
{ .AddChildren }
HAnimJoint112.AddChildren([HAnimJoint113]);
{ .AddChildren }
HAnimJoint111.AddChildren([HAnimJoint112]);
{ .AddChildren }
HAnimJoint110.AddChildren([HAnimJoint111]);
HAnimJoint114 := THAnimJointNode.Create;
HAnimJoint114.NameField := 'l_carpometacarpal_4';
HAnimJoint115 := THAnimJointNode.Create;
HAnimJoint115.NameField := 'l_metacarpophalangeal_4';
HAnimJoint116 := THAnimJointNode.Create;
HAnimJoint116.NameField := 'l_carpal_proximal_interphalangeal_4';
HAnimJoint117 := THAnimJointNode.Create;
HAnimJoint117.NameField := 'l_carpal_distal_interphalangeal_4';
{ .AddChildren }
HAnimJoint116.AddChildren([HAnimJoint117]);
{ .AddChildren }
HAnimJoint115.AddChildren([HAnimJoint116]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint115]);
HAnimJoint118 := THAnimJointNode.Create;
HAnimJoint118.NameField := 'l_carpometacarpal_5';
HAnimJoint119 := THAnimJointNode.Create;
HAnimJoint119.NameField := 'l_metacarpophalangeal_5';
HAnimJoint120 := THAnimJointNode.Create;
HAnimJoint120.NameField := 'l_carpal_proximal_interphalangeal_5';
HAnimJoint121 := THAnimJointNode.Create;
HAnimJoint121.NameField := 'l_carpal_distal_interphalangeal_5';
{ .AddChildren }
HAnimJoint120.AddChildren([HAnimJoint121]);
{ .AddChildren }
HAnimJoint119.AddChildren([HAnimJoint120]);
{ .AddChildren }
HAnimJoint118.AddChildren([HAnimJoint119]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint118]);
{ .AddChildren }
HAnimJoint110.AddChildren([HAnimJoint114]);
{ .AddChildren }
HAnimJoint106.AddChildren([HAnimJoint110]);
{ .AddChildren }
HAnimJoint103.AddChildren([HAnimJoint106]);
{ .AddChildren }
HAnimJoint102.AddChildren([HAnimJoint103]);
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122.NameField := 'r_sternoclavicular';
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.NameField := 'r_acromioclavicular';
HAnimJoint124 := THAnimJointNode.Create;
HAnimJoint124.NameField := 'r_shoulder';
HAnimJoint125 := THAnimJointNode.Create;
HAnimJoint125.NameField := 'r_elbow';
HAnimJoint126 := THAnimJointNode.Create;
HAnimJoint126.NameField := 'r_radiocarpal';
HAnimJoint127 := THAnimJointNode.Create;
HAnimJoint127.NameField := 'r_carpometacarpal_1';
HAnimJoint128 := THAnimJointNode.Create;
HAnimJoint128.NameField := 'r_metacarpophalangeal_1';
HAnimJoint129 := THAnimJointNode.Create;
HAnimJoint129.NameField := 'r_carpal_interphalangeal_1';
{ .AddChildren }
HAnimJoint128.AddChildren([HAnimJoint129]);
{ .AddChildren }
HAnimJoint127.AddChildren([HAnimJoint128]);
HAnimJoint130 := THAnimJointNode.Create;
HAnimJoint130.NameField := 'r_carpometacarpal_2';
HAnimJoint131 := THAnimJointNode.Create;
HAnimJoint131.NameField := 'r_metacarpophalangeal_2';
HAnimJoint132 := THAnimJointNode.Create;
HAnimJoint132.NameField := 'r_carpal_proximal_interphalangeal_2';
HAnimJoint133 := THAnimJointNode.Create;
HAnimJoint133.NameField := 'r_carpal_distal_interphalangeal_2';
{ .AddChildren }
HAnimJoint132.AddChildren([HAnimJoint133]);
{ .AddChildren }
HAnimJoint131.AddChildren([HAnimJoint132]);
{ .AddChildren }
HAnimJoint130.AddChildren([HAnimJoint131]);
HAnimJoint134 := THAnimJointNode.Create;
HAnimJoint134.NameField := 'r_carpometacarpal_3';
HAnimJoint135 := THAnimJointNode.Create;
HAnimJoint135.NameField := 'r_metacarpophalangeal_3';
HAnimJoint136 := THAnimJointNode.Create;
HAnimJoint136.NameField := 'r_carpal_proximal_interphalangeal_3';
HAnimJoint137 := THAnimJointNode.Create;
HAnimJoint137.NameField := 'r_carpal_distal_interphalangeal_3';
{ .AddChildren }
HAnimJoint136.AddChildren([HAnimJoint137]);
{ .AddChildren }
HAnimJoint135.AddChildren([HAnimJoint136]);
{ .AddChildren }
HAnimJoint134.AddChildren([HAnimJoint135]);
HAnimJoint138 := THAnimJointNode.Create;
HAnimJoint138.NameField := 'r_carpometacarpal_4';
HAnimJoint139 := THAnimJointNode.Create;
HAnimJoint139.NameField := 'r_metacarpophalangeal_4';
HAnimJoint140 := THAnimJointNode.Create;
HAnimJoint140.NameField := 'r_carpal_proximal_interphalangeal_4';
HAnimJoint141 := THAnimJointNode.Create;
HAnimJoint141.NameField := 'r_carpal_distal_interphalangeal_4';
{ .AddChildren }
HAnimJoint140.AddChildren([HAnimJoint141]);
{ .AddChildren }
HAnimJoint139.AddChildren([HAnimJoint140]);
{ .AddChildren }
HAnimJoint138.AddChildren([HAnimJoint139]);
HAnimJoint142 := THAnimJointNode.Create;
HAnimJoint142.NameField := 'r_carpometacarpal_5';
HAnimJoint143 := THAnimJointNode.Create;
HAnimJoint143.NameField := 'r_metacarpophalangeal_5';
HAnimJoint144 := THAnimJointNode.Create;
HAnimJoint144.NameField := 'r_carpal_proximal_interphalangeal_5';
HAnimJoint145 := THAnimJointNode.Create;
HAnimJoint145.NameField := 'r_carpal_distal_interphalangeal_5';
{ .AddChildren }
HAnimJoint144.AddChildren([HAnimJoint145]);
{ .AddChildren }
HAnimJoint143.AddChildren([HAnimJoint144]);
{ .AddChildren }
HAnimJoint142.AddChildren([HAnimJoint143]);
{ .AddChildren }
HAnimJoint138.AddChildren([HAnimJoint142]);
{ .AddChildren }
HAnimJoint134.AddChildren([HAnimJoint138]);
{ .AddChildren }
HAnimJoint130.AddChildren([HAnimJoint134]);
{ .AddChildren }
HAnimJoint127.AddChildren([HAnimJoint130]);
{ .AddChildren }
HAnimJoint126.AddChildren([HAnimJoint127]);
{ .AddChildren }
HAnimJoint125.AddChildren([HAnimJoint126]);
{ .AddChildren }
HAnimJoint124.AddChildren([HAnimJoint125]);
{ .AddChildren }
HAnimJoint123.AddChildren([HAnimJoint124]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimJoint123]);
{ .AddChildren }
HAnimJoint102.AddChildren([HAnimJoint122]);
{ .AddChildren }
HAnimJoint101.AddChildren([HAnimJoint102]);
{ .AddChildren }
HAnimJoint100.AddChildren([HAnimJoint101]);
{ .AddChildren }
HAnimJoint99.AddChildren([HAnimJoint100]);
{ .AddChildren }
HAnimJoint98.AddChildren([HAnimJoint99]);
{ .AddChildren }
HAnimJoint81.AddChildren([HAnimJoint98]);
{ .AddChildren }
HAnimJoint80.AddChildren([HAnimJoint81]);
{ .AddChildren }
HAnimJoint79.AddChildren([HAnimJoint80]);
{ .AddChildren }
HAnimJoint78.AddChildren([HAnimJoint79]);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint78]);
{ .AddChildren }
HAnimJoint76.AddChildren([HAnimJoint77]);
{ .AddChildren }
HAnimJoint75.AddChildren([HAnimJoint76]);
{ .AddChildren }
HAnimJoint74.AddChildren([HAnimJoint75]);
{ .AddChildren }
HAnimJoint73.AddChildren([HAnimJoint74]);
{ .AddChildren }
HAnimJoint72.AddChildren([HAnimJoint73]);
{ .AddChildren }
HAnimJoint71.AddChildren([HAnimJoint72]);
{ .AddChildren }
HAnimJoint70.AddChildren([HAnimJoint71]);
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
HAnimJoint52.AddChildren([HAnimJoint65]);
{ .AddChildren }
HAnimJoint37.AddChildren([HAnimJoint52]);
{ .AddSkeleton }
HAnimHumanoid34.SetSkeleton([HAnimJoint37]);
{ .AddChildren }
Group33.AddChildren([HAnimHumanoid34]);
{ .AddChildren }
Group12.AddChildren([Group33]);
{ .AddGroup }
X3D0.AddChildren([Group12]);
Result := X3D0;
end;
