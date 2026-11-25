unit DesignPatternsApparelMedicalSkinLayers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateDesignPatternsApparelMedicalSkinLayers: TX3DRootNode;

implementation

uses CastleVectors;

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

procedure InitDesignPatternsApparelMedicalSkinLayersPart0;
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
Group18.FdChildren.Add(WorldInfo19);
Background20 := TBackgroundNode.Create;
Background20.SetSkyColor([Vector3(0, 0.6, 0.6)]);
Group18.FdChildren.Add(Background20);
Group21 := TGroupNode.Create;
Group21.X3DName := 'MultipleHumanoids';
MetadataString22 := TMetadataStringNode.Create;
MetadataString22.X3DName := 'HAnimArchitecture';
MetadataString22.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile';
MetadataString22.SetValue(['E.4 Multiple humanoids per file']);
Group21.Metadata := MetadataString22;
{ ============================== }
HAnimHumanoid23 := THAnimHumanoidNode.Create;
HAnimHumanoid23.X3DName := 'SimpleSkeleton';
HAnimHumanoid23.X3DName := 'a_SimpleSkeleton';
HAnimHumanoid23.Version := '2.0';
HAnimJoint24 := THAnimJointNode.Create;
end;

procedure InitDesignPatternsApparelMedicalSkinLayersPart1;
begin
HAnimJoint24.X3DName := 'humanoid_root';
HAnimSegment25 := THAnimSegmentNode.Create;
HAnimSegment25.X3DName := 'sacrum';
Shape26 := TShapeNode.Create;
Shape26.X3DName := 'JointVisualization';
HAnimSegment25.FdChildren.Add(Shape26);
Shape27 := TShapeNode.Create;
Shape27.X3DName := 'SegmentVisualization';
HAnimSegment25.FdChildren.Add(Shape27);
HAnimSite28 := THAnimSiteNode.Create;
HAnimSite28.X3DName := 'feature01_tip';
HAnimSite28.X3DName := 'a_feature01_tip';
Shape29 := TShapeNode.Create;
Shape29.X3DName := 'SiteVisualization';
HAnimSite28.FdChildren.Add(Shape29);
HAnimSegment25.FdChildren.Add(HAnimSite28);
HAnimJoint24.FdChildren.Add(HAnimSegment25);
HAnimHumanoid23.FdSkeleton.Add(HAnimJoint24);
Group21.FdChildren.Add(HAnimHumanoid23);
{ ============================== }
HAnimHumanoid30 := THAnimHumanoidNode.Create;
HAnimHumanoid30.X3DName := 'SimpleSkeletonMesh';
HAnimHumanoid30.X3DName := 'b_SimpleSkeletonMesh';
HAnimHumanoid30.Version := '2.0';
HAnimJoint31 := THAnimJointNode.Create;
HAnimJoint31.X3DName := 'humanoid_root';
HAnimSegment32 := THAnimSegmentNode.Create;
HAnimSegment32.X3DName := 'sacrum';
Shape33 := TShapeNode.Create;
IndexedFaceSet34 := TIndexedFaceSetNode.Create;
IndexedFaceSet34.X3DName := 'SegmentBoneMesh';
Shape33.Geometry := IndexedFaceSet34;
HAnimSegment32.FdChildren.Add(Shape33);
HAnimJoint31.FdChildren.Add(HAnimSegment32);
HAnimHumanoid30.FdSkeleton.Add(HAnimJoint31);
Group21.FdChildren.Add(HAnimHumanoid30);
{ ============================== }
HAnimHumanoid35 := THAnimHumanoidNode.Create;
HAnimHumanoid35.X3DName := 'SkinIndexedGeometry';
HAnimHumanoid35.X3DName := 'c_SkinIndexedGeometry';
end;

procedure InitDesignPatternsApparelMedicalSkinLayersPart2;
begin
HAnimHumanoid35.Version := '2.0';
HAnimJoint36 := THAnimJointNode.Create;
HAnimJoint36.X3DName := 'humanoid_root';
HAnimSegment37 := THAnimSegmentNode.Create;
HAnimSegment37.X3DName := 'sacrum';
HAnimJoint36.FdChildren.Add(HAnimSegment37);
HAnimHumanoid35.FdSkeleton.Add(HAnimJoint36);
IndexedFaceSet38 := TIndexedFaceSetNode.Create;
IndexedFaceSet38.X3DName := 'SkinMeshIFS';
HAnimHumanoid35.Skin := IndexedFaceSet38;
Group21.FdChildren.Add(HAnimHumanoid35);
{ ============================== }
HAnimHumanoid39 := THAnimHumanoidNode.Create;
HAnimHumanoid39.X3DName := 'SkinShapeIndexedGeometry';
HAnimHumanoid39.X3DName := 'd_SkinShapeIndexedGeometry';
HAnimHumanoid39.Version := '2.0';
HAnimJoint40 := THAnimJointNode.Create;
HAnimJoint40.X3DName := 'humanoid_root';
HAnimSegment41 := THAnimSegmentNode.Create;
HAnimSegment41.X3DName := 'sacrum';
HAnimJoint40.FdChildren.Add(HAnimSegment41);
HAnimHumanoid39.FdSkeleton.Add(HAnimJoint40);
Shape42 := TShapeNode.Create;
Shape42.Geometry := IndexedFaceSet38;
HAnimHumanoid39.Skin := Shape42;
Group21.FdChildren.Add(HAnimHumanoid39);
{ ============================== }
HAnimHumanoid44 := THAnimHumanoidNode.Create;
HAnimHumanoid44.X3DName := 'SkinSwitchShapeIndexedGeometry';
HAnimHumanoid44.X3DName := 'e_SkinSwitchShapeIndexedGeometry';
HAnimHumanoid44.Version := '2.0';
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45.X3DName := 'humanoid_root';
HAnimSegment46 := THAnimSegmentNode.Create;
HAnimSegment46.X3DName := 'sacrum';
HAnimJoint45.FdChildren.Add(HAnimSegment46);
HAnimHumanoid44.FdSkeleton.Add(HAnimJoint45);
{ TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'> }
Shape47 := TShapeNode.Create;
IndexedFaceSet48 := TIndexedFaceSetNode.Create;
end;

procedure InitDesignPatternsApparelMedicalSkinLayersPart3;
begin
IndexedFaceSet48.X3DName := 'IndexedSkinMeshIFS';
Coordinate49 := TCoordinateNode.Create;
Coordinate49.X3DName := 'SkinMeshCoordinate';
IndexedFaceSet48.Coord := Coordinate49;
Shape47.Geometry := IndexedFaceSet48;
HAnimHumanoid44.Skin := Shape47;
Group21.FdChildren.Add(HAnimHumanoid44);
{ similarly for LOD }
{ ============================== }
HAnimHumanoid50 := THAnimHumanoidNode.Create;
HAnimHumanoid50.X3DName := 'SynthesizedSkinShapeIndexedTwoPartGeometry';
HAnimHumanoid50.X3DName := 'f_SynthesizedSkinShapeIndexedTwoPartGeometry';
HAnimHumanoid50.Version := '2.0';
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.X3DName := 'humanoid_root';
HAnimSegment52 := THAnimSegmentNode.Create;
HAnimSegment52.X3DName := 'sacrum';
HAnimJoint51.FdChildren.Add(HAnimSegment52);
HAnimHumanoid50.FdSkeleton.Add(HAnimJoint51);
Shape53 := TShapeNode.Create;
IndexedFaceSet54 := TIndexedFaceSetNode.Create;
IndexedFaceSet54.X3DName := 'TwoPartIndexedSkinMesh';
Coordinate55 := TCoordinateNode.Create;
Coordinate55.X3DName := 'TwoPartSkinMesh';
IndexedFaceSet54.Coord := Coordinate55;
Shape53.Geometry := IndexedFaceSet54;
HAnimHumanoid50.Skin := Shape53;
Group21.FdChildren.Add(HAnimHumanoid50);
{ ============================== }
HAnimHumanoid56 := THAnimHumanoidNode.Create;
HAnimHumanoid56.X3DName := 'ApparelSkinIndexedGeometryMultipleShapes';
HAnimHumanoid56.X3DName := 'g_ApparelSkinIndexedGeometryMultipleShapes';
HAnimHumanoid56.Version := '2.0';
HAnimJoint57 := THAnimJointNode.Create;
HAnimJoint57.X3DName := 'humanoid_root';
HAnimSegment58 := THAnimSegmentNode.Create;
HAnimSegment58.X3DName := 'sacrum';
HAnimJoint57.FdChildren.Add(HAnimSegment58);
HAnimHumanoid56.FdSkeleton.Add(HAnimJoint57);
Shape59 := TShapeNode.Create;
end;

procedure InitDesignPatternsApparelMedicalSkinLayersPart4;
begin
HAnimHumanoid56.Skin := Shape59;
{ allow multiple Shape nodes with containerField='apparel', one for each layer of clothing }
{ TODO proposed for X3D4.1 <Shape containerField='apparel'/> }
Group21.FdChildren.Add(HAnimHumanoid56);
{ ============================== }
HAnimHumanoid60 := THAnimHumanoidNode.Create;
HAnimHumanoid60.X3DName := 'AnatomySkinIndexedGeometryMultipleShapes';
HAnimHumanoid60.X3DName := 'h_AnatomySkinIndexedGeometryMultipleShapes';
HAnimHumanoid60.Version := '2.0';
HAnimJoint61 := THAnimJointNode.Create;
HAnimJoint61.X3DName := 'humanoid_root';
HAnimSegment62 := THAnimSegmentNode.Create;
HAnimSegment62.X3DName := 'sacrum';
HAnimJoint61.FdChildren.Add(HAnimSegment62);
HAnimHumanoid60.FdSkeleton.Add(HAnimJoint61);
{ allow multiple Shape nodes with containerField='skin', one for each layer of skin }
Shape63 := TShapeNode.Create;
HAnimHumanoid60.Skin := Shape63;
Group21.FdChildren.Add(HAnimHumanoid60);
{ ============================== }
Group18.FdChildren.Add(Group21);
Viewpoint64 := TViewpointNode.Create;
Viewpoint64.X3DName := 'ViewHelpText';
Viewpoint64.Description := 'Select text to see website';
Viewpoint64.Position := Vector3(0, 0, 12);
Group18.FdChildren.Add(Viewpoint64);
{ Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip }
Anchor65 := TAnchorNode.Create;
Anchor65.Description := 'DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches';
Anchor65.SetParameter(['target=blank']);
Anchor65.SetUrl(['https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html']);
Shape66 := TShapeNode.Create;
{ TODO adjust Text string and Box size, then set Material transparency='1' }
Text67 := TTextNode.Create;
Text67.SetText(['DesignPatternsApparelMedicalSkinLayers.x3d', 'explores potential apparel approaches']);
FontStyle68 := TFontStyleNode.Create;
FontStyle68.Family := ffSans;
FontStyle68.Justify := fjMiddle;
FontStyle68.JustifyMinor := fjMiddle;
FontStyle68.Size := 0.6;
end;

procedure InitDesignPatternsApparelMedicalSkinLayersPart5;
begin
FontStyle68.Style := fsBold;
Text67.FontStyle := FontStyle68;
Shape66.Geometry := Text67;
Appearance69 := TAppearanceNode.Create;
Material70 := TMaterialNode.Create;
Material70.DiffuseColor := Vector3(0.9, 0.9, 0.9);
Appearance69.Material := Material70;
Shape66.Appearance := Appearance69;
Anchor65.FdChildren.Add(Shape66);
Shape71 := TShapeNode.Create;
{ Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible. }
Box72 := TBoxNode.Create;
Box72.Size := Vector3(11, 2, 0.001);
Shape71.Geometry := Box72;
Appearance73 := TAppearanceNode.Create;
Material74 := TMaterialNode.Create;
Material74.Transparency := 1;
Appearance73.Material := Material74;
Shape71.Appearance := Appearance73;
Anchor65.FdChildren.Add(Shape71);
Group18.FdChildren.Add(Anchor65);
X3D0.AddChildren([Group18]);
end;

function CreateDesignPatternsApparelMedicalSkinLayers: TX3DRootNode;
begin
  InitDesignPatternsApparelMedicalSkinLayersPart0;
  InitDesignPatternsApparelMedicalSkinLayersPart1;
  InitDesignPatternsApparelMedicalSkinLayersPart2;
  InitDesignPatternsApparelMedicalSkinLayersPart3;
  InitDesignPatternsApparelMedicalSkinLayersPart4;
  InitDesignPatternsApparelMedicalSkinLayersPart5;
  Result := X3D0;
end;

begin
end.
