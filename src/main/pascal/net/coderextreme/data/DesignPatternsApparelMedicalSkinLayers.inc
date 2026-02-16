function DesignPatternsApparelMedicalSkinLayers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group18: TGroupNode;
WorldInfo19: TWorldInfoNode;
Background20: TBackgroundNode;
Group21: TGroupNode;
MetadataString22: TMetadataStringNode;
HAnimHumanoid23: THAnimHumanoidNode;
HAnimJoint24: THAnimJointNode;
HAnimSegment25: THAnimSegmentNode;
Shape26: TShapeNode;
Shape27: TShapeNode;
HAnimSite28: THAnimSiteNode;
Shape29: TShapeNode;
HAnimHumanoid30: THAnimHumanoidNode;
HAnimJoint31: THAnimJointNode;
HAnimSegment32: THAnimSegmentNode;
Shape33: TShapeNode;
IndexedFaceSet34: TIndexedFaceSetNode;
HAnimHumanoid35: THAnimHumanoidNode;
HAnimJoint36: THAnimJointNode;
HAnimSegment37: THAnimSegmentNode;
IndexedFaceSet38: TIndexedFaceSetNode;
HAnimHumanoid39: THAnimHumanoidNode;
HAnimJoint40: THAnimJointNode;
HAnimSegment41: THAnimSegmentNode;
Shape42: TShapeNode;
IndexedFaceSet43: TIndexedFaceSetNode;
HAnimHumanoid44: THAnimHumanoidNode;
HAnimJoint45: THAnimJointNode;
HAnimSegment46: THAnimSegmentNode;
Shape47: TShapeNode;
IndexedFaceSet48: TIndexedFaceSetNode;
Coordinate49: TCoordinateNode;
HAnimHumanoid50: THAnimHumanoidNode;
HAnimJoint51: THAnimJointNode;
HAnimSegment52: THAnimSegmentNode;
Shape53: TShapeNode;
IndexedFaceSet54: TIndexedFaceSetNode;
Coordinate55: TCoordinateNode;
HAnimHumanoid56: THAnimHumanoidNode;
HAnimJoint57: THAnimJointNode;
HAnimSegment58: THAnimSegmentNode;
Shape59: TShapeNode;
HAnimHumanoid60: THAnimHumanoidNode;
HAnimJoint61: THAnimJointNode;
HAnimSegment62: THAnimSegmentNode;
Shape63: TShapeNode;
Viewpoint64: TViewpointNode;
Anchor65: TAnchorNode;
Shape66: TShapeNode;
Text67: TTextNode;
FontStyle68: TFontStyleNode;
Appearance69: TAppearanceNode;
Material70: TMaterialNode;
Shape71: TShapeNode;
Box72: TBoxNode;
Appearance73: TAppearanceNode;
Material74: TMaterialNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 2;
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
Group18 := TGroupNode.Create;
WorldInfo19 := TWorldInfoNode.Create;
WorldInfo19.Title := 'HAnimHumanoid skin design patterns for apparel, medical';
{ .AddChildren }
Group18.AddChildren([WorldInfo19]);
Background20 := TBackgroundNode.Create;
Background20.SetSkyColor([Vector3(0,0.6,0.6)]);
{ .AddChildren }
Group18.AddChildren([Background20]);
Group21 := TGroupNode.Create;
MetadataString22 := TMetadataStringNode.Create;
MetadataString22.NameField := 'HAnimArchitecture';
MetadataString22.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile';
MetadataString22.SetValue(['E.4 Multiple humanoids per file']);
{ .SetMetadata }
Group21.Metadata := MetadataString22;
{ ============================== }
HAnimHumanoid23 := THAnimHumanoidNode.Create;
HAnimHumanoid23.NameField := 'SimpleSkeleton';
HAnimHumanoid23.Version := '2.0';
HAnimJoint24 := THAnimJointNode.Create;
HAnimJoint24.NameField := 'humanoid_root';
HAnimJoint24.SetUlimit([0,0,0]);
HAnimJoint24.SetLlimit([0,0,0]);
HAnimSegment25 := THAnimSegmentNode.Create;
HAnimSegment25.NameField := 'sacrum';
Shape26 := TShapeNode.Create;
{ .AddChildren }
HAnimSegment25.AddChildren([Shape26]);
Shape27 := TShapeNode.Create;
{ .AddChildren }
HAnimSegment25.AddChildren([Shape27]);
HAnimSite28 := THAnimSiteNode.Create;
HAnimSite28.NameField := 'feature01_tip';
Shape29 := TShapeNode.Create;
{ .AddChildren }
HAnimSite28.AddChildren([Shape29]);
{ .AddChildren }
HAnimSegment25.AddChildren([HAnimSite28]);
{ .AddChildren }
HAnimJoint24.AddChildren([HAnimSegment25]);
{ .AddSkeleton }
HAnimHumanoid23.SetSkeleton([HAnimJoint24]);
{ .AddChildren }
Group21.AddChildren([HAnimHumanoid23]);
{ ============================== }
HAnimHumanoid30 := THAnimHumanoidNode.Create;
HAnimHumanoid30.NameField := 'SimpleSkeletonMesh';
HAnimHumanoid30.Version := '2.0';
HAnimJoint31 := THAnimJointNode.Create;
HAnimJoint31.NameField := 'humanoid_root';
HAnimJoint31.SetUlimit([0,0,0]);
HAnimJoint31.SetLlimit([0,0,0]);
HAnimSegment32 := THAnimSegmentNode.Create;
HAnimSegment32.NameField := 'sacrum';
Shape33 := TShapeNode.Create;
IndexedFaceSet34 := TIndexedFaceSetNode.Create;
{ .SetGeometry }
Shape33.Geometry := IndexedFaceSet34;
{ .AddChildren }
HAnimSegment32.AddChildren([Shape33]);
{ .AddChildren }
HAnimJoint31.AddChildren([HAnimSegment32]);
{ .AddSkeleton }
HAnimHumanoid30.SetSkeleton([HAnimJoint31]);
{ .AddChildren }
Group21.AddChildren([HAnimHumanoid30]);
{ ============================== }
HAnimHumanoid35 := THAnimHumanoidNode.Create;
HAnimHumanoid35.NameField := 'SkinIndexedGeometry';
HAnimHumanoid35.Version := '2.0';
HAnimJoint36 := THAnimJointNode.Create;
HAnimJoint36.NameField := 'humanoid_root';
HAnimJoint36.SetUlimit([0,0,0]);
HAnimJoint36.SetLlimit([0,0,0]);
HAnimSegment37 := THAnimSegmentNode.Create;
HAnimSegment37.NameField := 'sacrum';
{ .AddChildren }
HAnimJoint36.AddChildren([HAnimSegment37]);
{ .AddSkeleton }
HAnimHumanoid35.SetSkeleton([HAnimJoint36]);
IndexedFaceSet38 := TIndexedFaceSetNode.Create;
{ .SetSkin }
HAnimHumanoid35.SetSkin([IndexedFaceSet38]);
{ .AddChildren }
Group21.AddChildren([HAnimHumanoid35]);
{ ============================== }
HAnimHumanoid39 := THAnimHumanoidNode.Create;
HAnimHumanoid39.NameField := 'SkinShapeIndexedGeometry';
HAnimHumanoid39.Version := '2.0';
HAnimJoint40 := THAnimJointNode.Create;
HAnimJoint40.NameField := 'humanoid_root';
HAnimJoint40.SetUlimit([0,0,0]);
HAnimJoint40.SetLlimit([0,0,0]);
HAnimSegment41 := THAnimSegmentNode.Create;
HAnimSegment41.NameField := 'sacrum';
{ .AddChildren }
HAnimJoint40.AddChildren([HAnimSegment41]);
{ .AddSkeleton }
HAnimHumanoid39.SetSkeleton([HAnimJoint40]);
Shape42 := TShapeNode.Create;
IndexedFaceSet43 := TIndexedFaceSetNode.Create;
IndexedFaceSet43 := IndexedFaceSet38;
{ .SetGeometry }
Shape42.Geometry := IndexedFaceSet43;
{ .SetSkin }
HAnimHumanoid39.SetSkin([Shape42]);
{ .AddChildren }
Group21.AddChildren([HAnimHumanoid39]);
{ ============================== }
HAnimHumanoid44 := THAnimHumanoidNode.Create;
HAnimHumanoid44.NameField := 'SkinSwitchShapeIndexedGeometry';
HAnimHumanoid44.Version := '2.0';
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45.NameField := 'humanoid_root';
HAnimJoint45.SetUlimit([0,0,0]);
HAnimJoint45.SetLlimit([0,0,0]);
HAnimSegment46 := THAnimSegmentNode.Create;
HAnimSegment46.NameField := 'sacrum';
{ .AddChildren }
HAnimJoint45.AddChildren([HAnimSegment46]);
{ .AddSkeleton }
HAnimHumanoid44.SetSkeleton([HAnimJoint45]);
{ TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'> }
Shape47 := TShapeNode.Create;
IndexedFaceSet48 := TIndexedFaceSetNode.Create;
Coordinate49 := TCoordinateNode.Create;
{ .SetCoord }
IndexedFaceSet48.Coord := Coordinate49;
{ .SetGeometry }
Shape47.Geometry := IndexedFaceSet48;
{ .SetSkin }
HAnimHumanoid44.SetSkin([Shape47]);
{ .AddChildren }
Group21.AddChildren([HAnimHumanoid44]);
{ similarly for LOD }
{ ============================== }
HAnimHumanoid50 := THAnimHumanoidNode.Create;
HAnimHumanoid50.NameField := 'SynthesizedSkinShapeIndexedTwoPartGeometry';
HAnimHumanoid50.Version := '2.0';
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.NameField := 'humanoid_root';
HAnimJoint51.SetUlimit([0,0,0]);
HAnimJoint51.SetLlimit([0,0,0]);
HAnimSegment52 := THAnimSegmentNode.Create;
HAnimSegment52.NameField := 'sacrum';
{ .AddChildren }
HAnimJoint51.AddChildren([HAnimSegment52]);
{ .AddSkeleton }
HAnimHumanoid50.SetSkeleton([HAnimJoint51]);
Shape53 := TShapeNode.Create;
IndexedFaceSet54 := TIndexedFaceSetNode.Create;
Coordinate55 := TCoordinateNode.Create;
{ .SetCoord }
IndexedFaceSet54.Coord := Coordinate55;
{ .SetGeometry }
Shape53.Geometry := IndexedFaceSet54;
{ .SetSkin }
HAnimHumanoid50.SetSkin([Shape53]);
{ .AddChildren }
Group21.AddChildren([HAnimHumanoid50]);
{ ============================== }
HAnimHumanoid56 := THAnimHumanoidNode.Create;
HAnimHumanoid56.NameField := 'ApparelSkinIndexedGeometryMultipleShapes';
HAnimHumanoid56.Version := '2.0';
HAnimJoint57 := THAnimJointNode.Create;
HAnimJoint57.NameField := 'humanoid_root';
HAnimJoint57.SetUlimit([0,0,0]);
HAnimJoint57.SetLlimit([0,0,0]);
HAnimSegment58 := THAnimSegmentNode.Create;
HAnimSegment58.NameField := 'sacrum';
{ .AddChildren }
HAnimJoint57.AddChildren([HAnimSegment58]);
{ .AddSkeleton }
HAnimHumanoid56.SetSkeleton([HAnimJoint57]);
Shape59 := TShapeNode.Create;
{ .SetSkin }
HAnimHumanoid56.SetSkin([Shape59]);
{ allow multiple Shape nodes with containerField='apparel', one for each layer of clothing }
{ TODO proposed for X3D4.1 <Shape containerField='apparel'/> }
{ .AddChildren }
Group21.AddChildren([HAnimHumanoid56]);
{ ============================== }
HAnimHumanoid60 := THAnimHumanoidNode.Create;
HAnimHumanoid60.NameField := 'AnatomySkinIndexedGeometryMultipleShapes';
HAnimHumanoid60.Version := '2.0';
HAnimJoint61 := THAnimJointNode.Create;
HAnimJoint61.NameField := 'humanoid_root';
HAnimJoint61.SetUlimit([0,0,0]);
HAnimJoint61.SetLlimit([0,0,0]);
HAnimSegment62 := THAnimSegmentNode.Create;
HAnimSegment62.NameField := 'sacrum';
{ .AddChildren }
HAnimJoint61.AddChildren([HAnimSegment62]);
{ .AddSkeleton }
HAnimHumanoid60.SetSkeleton([HAnimJoint61]);
{ allow multiple Shape nodes with containerField='skin', one for each layer of skin }
Shape63 := TShapeNode.Create;
{ .SetSkin }
HAnimHumanoid60.SetSkin([Shape63]);
{ .AddChildren }
Group21.AddChildren([HAnimHumanoid60]);
{ ============================== }
{ .AddChildren }
Group18.AddChildren([Group21]);
Viewpoint64 := TViewpointNode.Create;
Viewpoint64.Description := 'Select text to see website';
Viewpoint64.Position := Vector3(0,0,12);
{ .AddChildren }
Group18.AddChildren([Viewpoint64]);
{ Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip }
Anchor65 := TAnchorNode.Create;
Anchor65.Description := 'DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches';
Anchor65.SetParameter(['target=blank']);
Anchor65.SetUrl(['https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html']);
Shape66 := TShapeNode.Create;
{ TODO adjust Text string and Box size, then set Material transparency='1' }
Text67 := TTextNode.Create;
Text67.SetText(['DesignPatternsApparelMedicalSkinLayers.x3d','','explores potential apparel approaches']);
FontStyle68 := TFontStyleNode.Create;
FontStyle68.Family := ffSans;
FontStyle68.Justify := fjMiddle;
FontStyle68.JustifyMinor := fjMiddle;
FontStyle68.Size := 0.6;
FontStyle68.Style := 'BOLD';
{ .SetFontStyle }
Text67.FontStyle := FontStyle68;
{ .SetGeometry }
Shape66.Geometry := Text67;
Appearance69 := TAppearanceNode.Create;
Material70 := TMaterialNode.Create;
Material70.DiffuseColor := Vector3(0.9,0.9,0.9);
{ .SetMaterial }
Appearance69.Material := Material70;
{ .SetAppearance }
Shape66.Appearance := Appearance69;
{ .AddChildren }
Anchor65.AddChildren([Shape66]);
Shape71 := TShapeNode.Create;
{ Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible. }
Box72 := TBoxNode.Create;
Box72.Size := Vector3(11,2,0.001);
{ .SetGeometry }
Shape71.Geometry := Box72;
Appearance73 := TAppearanceNode.Create;
Material74 := TMaterialNode.Create;
Material74.Transparency := 1;
{ .SetMaterial }
Appearance73.Material := Material74;
{ .SetAppearance }
Shape71.Appearance := Appearance73;
{ .AddChildren }
Anchor65.AddChildren([Shape71]);
{ .AddChildren }
Group18.AddChildren([Anchor65]);
{ .AddGroup }
X3D0.AddChildren([Group18]);
Result := X3D0;
end;
