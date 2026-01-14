function DiamondManLOA_0: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group26: TGroupNode;
WorldInfo27: TWorldInfoNode;
NavigationInfo28: TNavigationInfoNode;
Viewpoint29: TViewpointNode;
HAnimHumanoid30: THAnimHumanoidNode;
MetadataSet31: TMetadataSetNode;
MetadataString32: TMetadataStringNode;
MetadataString33: TMetadataStringNode;
MetadataString34: TMetadataStringNode;
MetadataString35: TMetadataStringNode;
MetadataString36: TMetadataStringNode;
MetadataString37: TMetadataStringNode;
HAnimJoint38: THAnimJointNode;
HAnimJoint39: THAnimJointNode;
HAnimSegment40: THAnimSegmentNode;
Transform41: TTransformNode;
Shape42: TShapeNode;
Appearance43: TAppearanceNode;
Material44: TMaterialNode;
IndexedFaceSet45: TIndexedFaceSetNode;
Coordinate46: TCoordinateNode;
HAnimJoint47: THAnimJointNode;
HAnimJoint48: THAnimJointNode;
HAnimSegment49: THAnimSegmentNode;
HAnimSite50: THAnimSiteNode;
Viewpoint51: TViewpointNode;
Viewpoint52: TViewpointNode;
Viewpoint53: TViewpointNode;
Viewpoint54: TViewpointNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'DiamondManLOA_0.x3d';
X3D0.Meta['description'] := 'HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid.';
X3D0.Meta['creator'] := 'Matthew T. Beitler';
X3D0.Meta['translator'] := 'Joel S. Pawloski';
X3D0.Meta['created'] := '12 November 2001';
X3D0.Meta['modified'] := 'Tue, 09 Sep 2025 19:37:54 GMT';
X3D0.Meta['reference'] := '../Templates/DiamondManLOA_0.x3d';
X3D0.Meta['reference'] := 'HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)';
X3D0.Meta['reference'] := 'https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html';
X3D0.Meta['reference'] := 'https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero';
X3D0.Meta['reference'] := 'HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero';
X3D0.Meta['reference'] := 'http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa';
X3D0.Meta['reference'] := 'http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl';
X3D0.Meta['reference'] := 'http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl';
X3D0.Meta['reference'] := 'http://ece.uwaterloo.ca/~HAnim';
X3D0.Meta['reference'] := 'http://www.cis.upenn.edu/~badler/anthro/89-71.pdf';
X3D0.Meta['reference'] := 'http://www.cis.upenn.edu/~badler/anthro/89-71.ps';
X3D0.Meta['reference'] := 'http://www.cis.upenn.edu/~beitler';
X3D0.Meta['error'] := 'Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported';
X3D0.Meta['motto'] := '(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"';
X3D0.Meta['Image'] := 'humanoid_landmark_locations.gif';
X3D0.Meta['Image'] := 'http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_0.x3d';
Group26 := TGroupNode.Create;
WorldInfo27 := TWorldInfoNode.Create;
WorldInfo27.Title := 'HANIM 2.0 Default Joint Centers, LOA0';
WorldInfo27.SetInfo(['HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf']);
{ .AddChildren }
Group26.AddChildren([WorldInfo27]);
NavigationInfo28 := TNavigationInfoNode.Create;
NavigationInfo28.Speed := 1.5;
{ .AddChildren }
Group26.AddChildren([NavigationInfo28]);
Viewpoint29 := TViewpointNode.Create;
Viewpoint29.Description := 'Diamond Man, LOA 0';
Viewpoint29.Position := Vector3(0,1,3);
Viewpoint29.CenterOfRotation := Vector3(0,1,0);
{ .AddChildren }
Group26.AddChildren([Viewpoint29]);
HAnimHumanoid30 := THAnimHumanoidNode.Create;
HAnimHumanoid30.NameField := 'humanoid';
HAnimHumanoid30.Version := '1.0';
MetadataSet31 := TMetadataSetNode.Create;
MetadataSet31.NameField := 'HAnimHumanoid.info';
MetadataSet31.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid';
MetadataString32 := TMetadataStringNode.Create;
MetadataString32.NameField := 'authorEmail';
{ .SetValue }
MetadataSet31.Value := MetadataString32;
MetadataString33 := TMetadataStringNode.Create;
MetadataString33.NameField := 'authorName';
{ .SetValue }
MetadataSet31.Value := MetadataString33;
MetadataString34 := TMetadataStringNode.Create;
MetadataString34.NameField := 'copyright';
{ .SetValue }
MetadataSet31.Value := MetadataString34;
MetadataString35 := TMetadataStringNode.Create;
MetadataString35.NameField := 'creationDate';
{ .SetValue }
MetadataSet31.Value := MetadataString35;
MetadataString36 := TMetadataStringNode.Create;
MetadataString36.NameField := 'humanoidVersion';
{ .SetValue }
MetadataSet31.Value := MetadataString36;
MetadataString37 := TMetadataStringNode.Create;
MetadataString37.NameField := 'usageRestrictions';
{ .SetValue }
MetadataSet31.Value := MetadataString37;
{ .SetMetadata }
HAnimHumanoid30.Metadata := MetadataSet31;
HAnimJoint38 := THAnimJointNode.Create;
HAnimJoint38.NameField := 'humanoid_root';
HAnimJoint38.Center := Vector3(0,0.824,0.0277);
HAnimJoint39 := THAnimJointNode.Create;
HAnimJoint39.NameField := 'sacroiliac';
HAnimJoint39.Center := Vector3(0,0.9149,0.0016);
HAnimSegment40 := THAnimSegmentNode.Create;
HAnimSegment40.NameField := 'pelvis';
Transform41 := TTransformNode.Create;
Transform41.Translation := Vector3(0,0.9149,0.0016);
Shape42 := TShapeNode.Create;
Appearance43 := TAppearanceNode.Create;
Material44 := TMaterialNode.Create;
Material44.DiffuseColor := Vector3(1,1,0);
{ .SetMaterial }
Appearance43.Material := Material44;
{ .SetAppearance }
Shape42.Appearance := Appearance43;
IndexedFaceSet45 := TIndexedFaceSetNode.Create;
IndexedFaceSet45.CreaseAngle := 0.5;
IndexedFaceSet45.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate46 := TCoordinateNode.Create;
Coordinate46.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ .SetCoord }
IndexedFaceSet45.Coord := Coordinate46;
{ .SetGeometry }
Shape42.Geometry := IndexedFaceSet45;
{ .AddChild }
Transform41.AddChildren([Shape42]);
{ .AddChildren }
HAnimSegment40.AddChildren([Transform41]);
{ .AddChildren }
HAnimJoint39.AddChildren([HAnimSegment40]);
{ .AddChildren }
HAnimJoint38.AddChildren([HAnimJoint39]);
{ .AddSkeleton }
HAnimHumanoid30.SetSkeleton([HAnimJoint38]);
HAnimJoint47 := THAnimJointNode.Create;
HAnimJoint47 := HAnimJoint38;
{ .AddJoints }
HAnimHumanoid30.Joints := HAnimJoint47;
HAnimJoint48 := THAnimJointNode.Create;
HAnimJoint48 := HAnimJoint39;
{ .AddJoints }
HAnimHumanoid30.Joints := HAnimJoint48;
HAnimSegment49 := THAnimSegmentNode.Create;
HAnimSegment49 := HAnimSegment40;
{ .AddSegments }
HAnimHumanoid30.Segments := HAnimSegment49;
HAnimSite50 := THAnimSiteNode.Create;
HAnimSite50.NameField := 'site_view';
Viewpoint51 := TViewpointNode.Create;
Viewpoint51.Description := 'Inclined View';
Viewpoint51.Position := Vector3(1.62,1.05,2.06);
Viewpoint51.Orientation := Vector4(-0.113,0.993,0.0347,0.671);
{ .AddChildren }
HAnimSite50.AddChildren([Viewpoint51]);
Viewpoint52 := TViewpointNode.Create;
Viewpoint52.Description := 'Front View';
Viewpoint52.Position := Vector3(0,0.854,2.57665);
{ .AddChildren }
HAnimSite50.AddChildren([Viewpoint52]);
Viewpoint53 := TViewpointNode.Create;
Viewpoint53.Description := 'Side View';
Viewpoint53.Position := Vector3(2.5929,0.854,0);
Viewpoint53.Orientation := Vector4(0,1,0,1.57079);
{ .AddChildren }
HAnimSite50.AddChildren([Viewpoint53]);
Viewpoint54 := TViewpointNode.Create;
Viewpoint54.Description := 'Top View';
Viewpoint54.Position := Vector3(0,3.4495,0);
Viewpoint54.Orientation := Vector4(1,0,0,-1.57079);
{ .AddChildren }
HAnimSite50.AddChildren([Viewpoint54]);
{ .SetViewpoints }
HAnimHumanoid30.Viewpoints := HAnimSite50;
{ .AddChildren }
Group26.AddChildren([HAnimHumanoid30]);
{ .AddGroup }
X3D0.AddChildren([Group26]);
Result := X3D0;
end;
