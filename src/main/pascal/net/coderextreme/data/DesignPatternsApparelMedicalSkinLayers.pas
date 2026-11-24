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

procedure InitDesignPatternsApparelMedicalSkinLayersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 2;
{ METHOD .Component }
X3D0.Meta['title'] := 'DesignPatternsApparelMedicalSkinLayers.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Design patterns for skin and apparel using HAnim2 standard in X3D4';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Joe D. Williams';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Dick Puk';
{ METHOD .Meta }
X3D0.Meta['created'] := '23 December 2022';
{ METHOD .Meta }
X3D0.Meta['modified'] := '2 July 2023';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'DesignPatternsApparelVariations.txt';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid';
{ METHOD .Meta }
X3D0.Meta['warning'] := 'Under development. This template example does not produce renderable HAnim models.';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group18 := TGroupNode.Create;;
WorldInfo19 := TWorldInfoNode.Create;;
WorldInfo19.Title := 'HAnimHumanoid skin design patterns for apparel, medical';
{ METHOD .FdChildren.Add }
Group18.FdChildren.Add(WorldInfo19);
Background20 := TBackgroundNode.Create;;
Background20.SetSkyColor([Vector3(0,0.6,0.6)]);
{ METHOD .FdChildren.Add }
Group18.FdChildren.Add(Background20);
Group21 := TGroupNode.Create;;
MetadataString22 := TMetadataStringNode.Create;;
MetadataString22.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile';
MetadataString22.SetValue(['E.4 Multiple humanoids per file']);
{ METHOD .Metadata }
{ METHOD.SET .Metadata }
Group21.Metadata := MetadataString22;
{ ============================== }
HAnimHumanoid23 := THAnimHumanoidNode.Create;;
HAnimHumanoid23.Version := '2.0';
end;

procedure InitDesignPatternsApparelMedicalSkinLayersPart1;
begin

HAnimJoint24 := THAnimJointNode.Create;;
HAnimSegment25 := THAnimSegmentNode.Create;;
Shape26 := TShapeNode.Create;;
{ METHOD .FdChildren.Add }
HAnimSegment25.FdChildren.Add(Shape26);
Shape27 := TShapeNode.Create;;
{ METHOD .FdChildren.Add }
HAnimSegment25.FdChildren.Add(Shape27);
HAnimSite28 := THAnimSiteNode.Create;;
Shape29 := TShapeNode.Create;;
{ METHOD .FdChildren.Add }
HAnimSite28.FdChildren.Add(Shape29);
{ METHOD .FdChildren.Add }
HAnimSegment25.FdChildren.Add(HAnimSite28);
{ METHOD .FdChildren.Add }
HAnimJoint24.FdChildren.Add(HAnimSegment25);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid23.FdSkeleton.Add(HAnimJoint24);
{ METHOD .FdChildren.Add }
Group21.FdChildren.Add(HAnimHumanoid23);
{ ============================== }
HAnimHumanoid30 := THAnimHumanoidNode.Create;;
HAnimHumanoid30.Version := '2.0';
HAnimJoint31 := THAnimJointNode.Create;;
HAnimSegment32 := THAnimSegmentNode.Create;;
Shape33 := TShapeNode.Create;;
IndexedFaceSet34 := TIndexedFaceSetNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape33.Geometry := IndexedFaceSet34;
{ METHOD .FdChildren.Add }
HAnimSegment32.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimJoint31.FdChildren.Add(HAnimSegment32);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid30.FdSkeleton.Add(HAnimJoint31);
{ METHOD .FdChildren.Add }
Group21.FdChildren.Add(HAnimHumanoid30);
{ ============================== }
HAnimHumanoid35 := THAnimHumanoidNode.Create;;
HAnimHumanoid35.Version := '2.0';
HAnimJoint36 := THAnimJointNode.Create;;
end;

procedure InitDesignPatternsApparelMedicalSkinLayersPart2;
begin

HAnimSegment37 := THAnimSegmentNode.Create;;
{ METHOD .FdChildren.Add }
HAnimJoint36.FdChildren.Add(HAnimSegment37);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid35.FdSkeleton.Add(HAnimJoint36);
IndexedFaceSet38 := TIndexedFaceSetNode.Create;;
{ METHOD .SetSkin }
HAnimHumanoid35.Skin := IndexedFaceSet38;
{ METHOD .FdChildren.Add }
Group21.FdChildren.Add(HAnimHumanoid35);
{ ============================== }
HAnimHumanoid39 := THAnimHumanoidNode.Create;;
HAnimHumanoid39.Version := '2.0';
HAnimJoint40 := THAnimJointNode.Create;;
HAnimSegment41 := THAnimSegmentNode.Create;;
{ METHOD .FdChildren.Add }
HAnimJoint40.FdChildren.Add(HAnimSegment41);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid39.FdSkeleton.Add(HAnimJoint40);
Shape42 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape42.Geometry := IndexedFaceSet38;
{ METHOD .SetSkin }
HAnimHumanoid39.Skin := Shape42;
{ METHOD .FdChildren.Add }
Group21.FdChildren.Add(HAnimHumanoid39);
{ ============================== }
HAnimHumanoid44 := THAnimHumanoidNode.Create;;
HAnimHumanoid44.Version := '2.0';
HAnimJoint45 := THAnimJointNode.Create;;
HAnimSegment46 := THAnimSegmentNode.Create;;
{ METHOD .FdChildren.Add }
HAnimJoint45.FdChildren.Add(HAnimSegment46);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid44.FdSkeleton.Add(HAnimJoint45);
{ TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'> }
Shape47 := TShapeNode.Create;;
IndexedFaceSet48 := TIndexedFaceSetNode.Create;;
Coordinate49 := TCoordinateNode.Create;;
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet48.Coord := Coordinate49;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape47.Geometry := IndexedFaceSet48;
{ METHOD .SetSkin }
HAnimHumanoid44.Skin := Shape47;
end;

procedure InitDesignPatternsApparelMedicalSkinLayersPart3;
begin

{ METHOD .FdChildren.Add }
Group21.FdChildren.Add(HAnimHumanoid44);
{ similarly for LOD }
{ ============================== }
HAnimHumanoid50 := THAnimHumanoidNode.Create;;
HAnimHumanoid50.Version := '2.0';
HAnimJoint51 := THAnimJointNode.Create;;
HAnimSegment52 := THAnimSegmentNode.Create;;
{ METHOD .FdChildren.Add }
HAnimJoint51.FdChildren.Add(HAnimSegment52);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid50.FdSkeleton.Add(HAnimJoint51);
Shape53 := TShapeNode.Create;;
IndexedFaceSet54 := TIndexedFaceSetNode.Create;;
Coordinate55 := TCoordinateNode.Create;;
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet54.Coord := Coordinate55;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape53.Geometry := IndexedFaceSet54;
{ METHOD .SetSkin }
HAnimHumanoid50.Skin := Shape53;
{ METHOD .FdChildren.Add }
Group21.FdChildren.Add(HAnimHumanoid50);
{ ============================== }
HAnimHumanoid56 := THAnimHumanoidNode.Create;;
HAnimHumanoid56.Version := '2.0';
HAnimJoint57 := THAnimJointNode.Create;;
HAnimSegment58 := THAnimSegmentNode.Create;;
{ METHOD .FdChildren.Add }
HAnimJoint57.FdChildren.Add(HAnimSegment58);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid56.FdSkeleton.Add(HAnimJoint57);
Shape59 := TShapeNode.Create;;
{ METHOD .SetSkin }
HAnimHumanoid56.Skin := Shape59;
{ allow multiple Shape nodes with containerField='apparel', one for each layer of clothing }
{ TODO proposed for X3D4.1 <Shape containerField='apparel'/> }
{ METHOD .FdChildren.Add }
Group21.FdChildren.Add(HAnimHumanoid56);
{ ============================== }
HAnimHumanoid60 := THAnimHumanoidNode.Create;;
HAnimHumanoid60.Version := '2.0';
HAnimJoint61 := THAnimJointNode.Create;;
HAnimSegment62 := THAnimSegmentNode.Create;;
end;

procedure InitDesignPatternsApparelMedicalSkinLayersPart4;
begin

{ METHOD .FdChildren.Add }
HAnimJoint61.FdChildren.Add(HAnimSegment62);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid60.FdSkeleton.Add(HAnimJoint61);
{ allow multiple Shape nodes with containerField='skin', one for each layer of skin }
Shape63 := TShapeNode.Create;;
{ METHOD .SetSkin }
HAnimHumanoid60.Skin := Shape63;
{ METHOD .FdChildren.Add }
Group21.FdChildren.Add(HAnimHumanoid60);
{ ============================== }
{ METHOD .FdChildren.Add }
Group18.FdChildren.Add(Group21);
Viewpoint64 := TViewpointNode.Create;;
Viewpoint64.Description := 'Select text to see website';
Viewpoint64.Position := Vector3(0,0,12);
{ METHOD .FdChildren.Add }
Group18.FdChildren.Add(Viewpoint64);
{ Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip }
Anchor65 := TAnchorNode.Create;;
Anchor65.Description := 'DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches';
Anchor65.SetParameter(['target=blank']);
Anchor65.SetUrl(['https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html']);
Shape66 := TShapeNode.Create;;
{ TODO adjust Text string and Box size, then set Material transparency='1' }
Text67 := TTextNode.Create;;
Text67.SetText(['DesignPatternsApparelMedicalSkinLayers.x3d','explores potential apparel approaches']);
FontStyle68 := TFontStyleNode.Create;;
FontStyle68.Family := ffSANS;
FontStyle68.Justify := fjMIDDLE;
FontStyle68.JustifyMinor := fjMIDDLE;
FontStyle68.Size := 0.6;
FontStyle68.Style := fsBOLD;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text67.FontStyle := FontStyle68;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape66.Geometry := Text67;
Appearance69 := TAppearanceNode.Create;;
Material70 := TMaterialNode.Create;;
Material70.DiffuseColor := Vector3(0.9,0.9,0.9);
{ METHOD .SetMaterial }
Appearance69.Material := Material70;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape66.Appearance := Appearance69;
{ METHOD .FdChildren.Add }
Anchor65.FdChildren.Add(Shape66);
Shape71 := TShapeNode.Create;
end;

procedure InitDesignPatternsApparelMedicalSkinLayersPart5;
begin
;
{ Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible. }
Box72 := TBoxNode.Create;;
Box72.Size := Vector3(11,2,0.001);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape71.Geometry := Box72;
Appearance73 := TAppearanceNode.Create;;
Material74 := TMaterialNode.Create;;
Material74.Transparency := 1;
{ METHOD .SetMaterial }
Appearance73.Material := Material74;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape71.Appearance := Appearance73;
{ METHOD .FdChildren.Add }
Anchor65.FdChildren.Add(Shape71);
{ METHOD .FdChildren.Add }
Group18.FdChildren.Add(Anchor65);
{ METHOD .AddGroup }
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
