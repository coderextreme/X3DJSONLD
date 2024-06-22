function DesignPatternsApparelMedicalSkinLayers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group17: TGroupNode;
WorldInfo18: TWorldInfoNode;
Background19: TBackgroundNode;
Group20: TGroupNode;
MetadataString21: TMetadataStringNode;
HAnimHumanoid22: THAnimHumanoidNode;
HAnimJoint23: THAnimJointNode;
HAnimSegment24: THAnimSegmentNode;
Shape25: TShapeNode;
Shape26: TShapeNode;
HAnimSite27: THAnimSiteNode;
Shape28: TShapeNode;
HAnimHumanoid29: THAnimHumanoidNode;
HAnimJoint30: THAnimJointNode;
HAnimSegment31: THAnimSegmentNode;
Shape32: TShapeNode;
IndexedFaceSet33: TIndexedFaceSetNode;
HAnimHumanoid34: THAnimHumanoidNode;
HAnimJoint35: THAnimJointNode;
HAnimSegment36: THAnimSegmentNode;
IndexedFaceSet37: TIndexedFaceSetNode;
HAnimHumanoid38: THAnimHumanoidNode;
HAnimJoint39: THAnimJointNode;
HAnimSegment40: THAnimSegmentNode;
Shape41: TShapeNode;
IndexedFaceSet42: TIndexedFaceSetNode;
HAnimHumanoid43: THAnimHumanoidNode;
HAnimJoint44: THAnimJointNode;
HAnimSegment45: THAnimSegmentNode;
Shape46: TShapeNode;
IndexedFaceSet47: TIndexedFaceSetNode;
Coordinate48: TCoordinateNode;
HAnimHumanoid49: THAnimHumanoidNode;
HAnimJoint50: THAnimJointNode;
HAnimSegment51: THAnimSegmentNode;
Shape52: TShapeNode;
IndexedFaceSet53: TIndexedFaceSetNode;
Coordinate54: TCoordinateNode;
HAnimHumanoid55: THAnimHumanoidNode;
HAnimJoint56: THAnimJointNode;
HAnimSegment57: THAnimSegmentNode;
Shape58: TShapeNode;
HAnimHumanoid59: THAnimHumanoidNode;
HAnimJoint60: THAnimJointNode;
HAnimSegment61: THAnimSegmentNode;
Shape62: TShapeNode;
Viewpoint63: TViewpointNode;
Anchor64: TAnchorNode;
Shape65: TShapeNode;
Text66: TTextNode;
FontStyle67: TFontStyleNode;
Appearance68: TAppearanceNode;
Material69: TMaterialNode;
Shape70: TShapeNode;
Box71: TBoxNode;
Appearance72: TAppearanceNode;
Material73: TMaterialNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'DesignPatternsApparelMedicalSkinLayers.x3d';
X3D0.Meta['description'] := 'Design patterns for skin and apparel using HAnim2 standard in X3D4';
X3D0.Meta['creator'] := 'Don Brutzman';
X3D0.Meta['creator'] := 'Joe D. Williams';
X3D0.Meta['creator'] := 'Dick Puk';
X3D0.Meta['created'] := '23 December 2022';
X3D0.Meta['modified'] := '2 July 2023';
X3D0.Meta['reference'] := 'DesignPatternsApparelVariations.txt';
X3D0.Meta['reference'] := 'HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject';
X3D0.Meta['reference'] := 'HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile';
X3D0.Meta['reference'] := 'X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid';
X3D0.Meta['warning'] := 'Under development. This template example does not produce renderable HAnim models.';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group17 := TGroupNode.Create;
WorldInfo18 := TWorldInfoNode.Create;
WorldInfo18.Title := 'HAnimHumanoid skin design patterns for apparel, medical';
{ .AddChildren }
Group17.AddChildren([WorldInfo18]);
Background19 := TBackgroundNode.Create;
Background19.SetSkyColor([Vector3(0,0.6,0.6)]);
{ .AddChildren }
Group17.AddChildren([Background19]);
Group20 := TGroupNode.Create;
MetadataString21 := TMetadataStringNode.Create;
MetadataString21.NameField := 'HAnimArchitecture';
MetadataString21.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile';
MetadataString21.SetValue(['E.4 Multiple humanoids per file']);
{ .SetMetadata }
Group20.Metadata := MetadataString21;
{ ============================== }
HAnimHumanoid22 := THAnimHumanoidNode.Create;
HAnimHumanoid22.NameField := 'SimpleSkeleton';
HAnimHumanoid22.Version := '2.0';
HAnimJoint23 := THAnimJointNode.Create;
HAnimJoint23.NameField := 'humanoid_root';
HAnimJoint23.SetUlimit([0,0,0]);
HAnimJoint23.SetLlimit([0,0,0]);
HAnimSegment24 := THAnimSegmentNode.Create;
HAnimSegment24.NameField := 'sacrum';
Shape25 := TShapeNode.Create;
{ .AddChildren }
HAnimSegment24.AddChildren([Shape25]);
Shape26 := TShapeNode.Create;
{ .AddChildren }
HAnimSegment24.AddChildren([Shape26]);
HAnimSite27 := THAnimSiteNode.Create;
HAnimSite27.NameField := 'feature01_tip';
Shape28 := TShapeNode.Create;
{ .AddChildren }
HAnimSite27.AddChildren([Shape28]);
{ .AddChildren }
HAnimSegment24.AddChildren([HAnimSite27]);
{ .AddChildren }
HAnimJoint23.AddChildren([HAnimSegment24]);
{ .AddSkeleton }
HAnimHumanoid22.SetSkeleton([HAnimJoint23]);
{ .AddChildren }
Group20.AddChildren([HAnimHumanoid22]);
{ ============================== }
HAnimHumanoid29 := THAnimHumanoidNode.Create;
HAnimHumanoid29.NameField := 'SimpleSkeletonMesh';
HAnimHumanoid29.Version := '2.0';
HAnimJoint30 := THAnimJointNode.Create;
HAnimJoint30.NameField := 'humanoid_root';
HAnimJoint30.SetUlimit([0,0,0]);
HAnimJoint30.SetLlimit([0,0,0]);
HAnimSegment31 := THAnimSegmentNode.Create;
HAnimSegment31.NameField := 'sacrum';
Shape32 := TShapeNode.Create;
IndexedFaceSet33 := TIndexedFaceSetNode.Create;
{ .SetGeometry }
Shape32.Geometry := IndexedFaceSet33;
{ .AddChildren }
HAnimSegment31.AddChildren([Shape32]);
{ .AddChildren }
HAnimJoint30.AddChildren([HAnimSegment31]);
{ .AddSkeleton }
HAnimHumanoid29.SetSkeleton([HAnimJoint30]);
{ .AddChildren }
Group20.AddChildren([HAnimHumanoid29]);
{ ============================== }
HAnimHumanoid34 := THAnimHumanoidNode.Create;
HAnimHumanoid34.NameField := 'SkinIndexedGeometry';
HAnimHumanoid34.Version := '2.0';
HAnimJoint35 := THAnimJointNode.Create;
HAnimJoint35.NameField := 'humanoid_root';
HAnimJoint35.SetUlimit([0,0,0]);
HAnimJoint35.SetLlimit([0,0,0]);
HAnimSegment36 := THAnimSegmentNode.Create;
HAnimSegment36.NameField := 'sacrum';
{ .AddChildren }
HAnimJoint35.AddChildren([HAnimSegment36]);
{ .AddSkeleton }
HAnimHumanoid34.SetSkeleton([HAnimJoint35]);
IndexedFaceSet37 := TIndexedFaceSetNode.Create;
{ .SetSkin }
HAnimHumanoid34.SetSkin([IndexedFaceSet37]);
{ .AddChildren }
Group20.AddChildren([HAnimHumanoid34]);
{ ============================== }
HAnimHumanoid38 := THAnimHumanoidNode.Create;
HAnimHumanoid38.NameField := 'SkinShapeIndexedGeometry';
HAnimHumanoid38.Version := '2.0';
HAnimJoint39 := THAnimJointNode.Create;
HAnimJoint39.NameField := 'humanoid_root';
HAnimJoint39.SetUlimit([0,0,0]);
HAnimJoint39.SetLlimit([0,0,0]);
HAnimSegment40 := THAnimSegmentNode.Create;
HAnimSegment40.NameField := 'sacrum';
{ .AddChildren }
HAnimJoint39.AddChildren([HAnimSegment40]);
{ .AddSkeleton }
HAnimHumanoid38.SetSkeleton([HAnimJoint39]);
Shape41 := TShapeNode.Create;
IndexedFaceSet42 := TIndexedFaceSetNode.Create;
IndexedFaceSet42 := IndexedFaceSet37;
{ .SetGeometry }
Shape41.Geometry := IndexedFaceSet42;
{ .SetSkin }
HAnimHumanoid38.SetSkin([Shape41]);
{ .AddChildren }
Group20.AddChildren([HAnimHumanoid38]);
{ ============================== }
HAnimHumanoid43 := THAnimHumanoidNode.Create;
HAnimHumanoid43.NameField := 'SkinSwitchShapeIndexedGeometry';
HAnimHumanoid43.Version := '2.0';
HAnimJoint44 := THAnimJointNode.Create;
HAnimJoint44.NameField := 'humanoid_root';
HAnimJoint44.SetUlimit([0,0,0]);
HAnimJoint44.SetLlimit([0,0,0]);
HAnimSegment45 := THAnimSegmentNode.Create;
HAnimSegment45.NameField := 'sacrum';
{ .AddChildren }
HAnimJoint44.AddChildren([HAnimSegment45]);
{ .AddSkeleton }
HAnimHumanoid43.SetSkeleton([HAnimJoint44]);
{ TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'> }
Shape46 := TShapeNode.Create;
IndexedFaceSet47 := TIndexedFaceSetNode.Create;
Coordinate48 := TCoordinateNode.Create;
{ .SetCoord }
IndexedFaceSet47.Coord := Coordinate48;
{ .SetGeometry }
Shape46.Geometry := IndexedFaceSet47;
{ .SetSkin }
HAnimHumanoid43.SetSkin([Shape46]);
{ .AddChildren }
Group20.AddChildren([HAnimHumanoid43]);
{ similarly for LOD }
{ ============================== }
HAnimHumanoid49 := THAnimHumanoidNode.Create;
HAnimHumanoid49.NameField := 'SynthesizedSkinShapeIndexedTwoPartGeometry';
HAnimHumanoid49.Version := '2.0';
HAnimJoint50 := THAnimJointNode.Create;
HAnimJoint50.NameField := 'humanoid_root';
HAnimJoint50.SetUlimit([0,0,0]);
HAnimJoint50.SetLlimit([0,0,0]);
HAnimSegment51 := THAnimSegmentNode.Create;
HAnimSegment51.NameField := 'sacrum';
{ .AddChildren }
HAnimJoint50.AddChildren([HAnimSegment51]);
{ .AddSkeleton }
HAnimHumanoid49.SetSkeleton([HAnimJoint50]);
Shape52 := TShapeNode.Create;
IndexedFaceSet53 := TIndexedFaceSetNode.Create;
Coordinate54 := TCoordinateNode.Create;
{ .SetCoord }
IndexedFaceSet53.Coord := Coordinate54;
{ .SetGeometry }
Shape52.Geometry := IndexedFaceSet53;
{ .SetSkin }
HAnimHumanoid49.SetSkin([Shape52]);
{ .AddChildren }
Group20.AddChildren([HAnimHumanoid49]);
{ ============================== }
HAnimHumanoid55 := THAnimHumanoidNode.Create;
HAnimHumanoid55.NameField := 'ApparelSkinIndexedGeometryMultipleShapes';
HAnimHumanoid55.Version := '2.0';
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.NameField := 'humanoid_root';
HAnimJoint56.SetUlimit([0,0,0]);
HAnimJoint56.SetLlimit([0,0,0]);
HAnimSegment57 := THAnimSegmentNode.Create;
HAnimSegment57.NameField := 'sacrum';
{ .AddChildren }
HAnimJoint56.AddChildren([HAnimSegment57]);
{ .AddSkeleton }
HAnimHumanoid55.SetSkeleton([HAnimJoint56]);
Shape58 := TShapeNode.Create;
{ .SetSkin }
HAnimHumanoid55.SetSkin([Shape58]);
{ allow multiple Shape nodes with containerField='apparel', one for each layer of clothing }
{ TODO proposed for X3D4.1 <Shape containerField='apparel'/> }
{ .AddChildren }
Group20.AddChildren([HAnimHumanoid55]);
{ ============================== }
HAnimHumanoid59 := THAnimHumanoidNode.Create;
HAnimHumanoid59.NameField := 'AnatomySkinIndexedGeometryMultipleShapes';
HAnimHumanoid59.Version := '2.0';
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.NameField := 'humanoid_root';
HAnimJoint60.SetUlimit([0,0,0]);
HAnimJoint60.SetLlimit([0,0,0]);
HAnimSegment61 := THAnimSegmentNode.Create;
HAnimSegment61.NameField := 'sacrum';
{ .AddChildren }
HAnimJoint60.AddChildren([HAnimSegment61]);
{ .AddSkeleton }
HAnimHumanoid59.SetSkeleton([HAnimJoint60]);
{ allow multiple Shape nodes with containerField='skin', one for each layer of skin }
Shape62 := TShapeNode.Create;
{ .SetSkin }
HAnimHumanoid59.SetSkin([Shape62]);
{ .AddChildren }
Group20.AddChildren([HAnimHumanoid59]);
{ ============================== }
{ .AddChildren }
Group17.AddChildren([Group20]);
Viewpoint63 := TViewpointNode.Create;
Viewpoint63.Description := 'Select text to see website';
Viewpoint63.Position := Vector3(0,0,12);
{ .AddChildren }
Group17.AddChildren([Viewpoint63]);
{ Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip }
Anchor64 := TAnchorNode.Create;
Anchor64.Description := 'DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches';
Anchor64.SetParameter(['target=blank']);
Anchor64.SetUrl(['https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html']);
Shape65 := TShapeNode.Create;
{ TODO adjust Text string and Box size, then set Material transparency='1' }
Text66 := TTextNode.Create;
Text66.SetText(['DesignPatternsApparelMedicalSkinLayers.x3d','','explores potential apparel approaches']);
FontStyle67 := TFontStyleNode.Create;
FontStyle67.Family := ffSans;
FontStyle67.Justify := fjMiddle;
FontStyle67.JustifyMinor := fjMiddle;
FontStyle67.Size := 0.6;
FontStyle67.Style := 'BOLD';
{ .SetFontStyle }
Text66.FontStyle := FontStyle67;
{ .SetGeometry }
Shape65.Geometry := Text66;
Appearance68 := TAppearanceNode.Create;
Material69 := TMaterialNode.Create;
Material69.DiffuseColor := Vector3(0.9,0.9,0.9);
{ .SetMaterial }
Appearance68.Material := Material69;
{ .SetAppearance }
Shape65.Appearance := Appearance68;
{ .AddChildren }
Anchor64.AddChildren([Shape65]);
Shape70 := TShapeNode.Create;
{ Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible. }
Box71 := TBoxNode.Create;
Box71.Size := Vector3(11,2,0.001);
{ .SetGeometry }
Shape70.Geometry := Box71;
Appearance72 := TAppearanceNode.Create;
Material73 := TMaterialNode.Create;
Material73.Transparency := 1;
{ .SetMaterial }
Appearance72.Material := Material73;
{ .SetAppearance }
Shape70.Appearance := Appearance72;
{ .AddChildren }
Anchor64.AddChildren([Shape70]);
{ .AddChildren }
Group17.AddChildren([Anchor64]);
{ .AddGroup }
X3D0.AddChildren([Group17]);
Result := X3D0;
end;
