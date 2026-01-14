function DiamondManLOA0: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group24: TGroupNode;
WorldInfo25: TWorldInfoNode;
NavigationInfo26: TNavigationInfoNode;
Viewpoint27: TViewpointNode;
HAnimHumanoid28: THAnimHumanoidNode;
MetadataSet29: TMetadataSetNode;
MetadataString30: TMetadataStringNode;
MetadataString31: TMetadataStringNode;
MetadataString32: TMetadataStringNode;
MetadataString33: TMetadataStringNode;
MetadataString34: TMetadataStringNode;
MetadataString35: TMetadataStringNode;
HAnimJoint36: THAnimJointNode;
HAnimJoint37: THAnimJointNode;
HAnimSegment38: THAnimSegmentNode;
Transform39: TTransformNode;
Shape40: TShapeNode;
Appearance41: TAppearanceNode;
Material42: TMaterialNode;
IndexedFaceSet43: TIndexedFaceSetNode;
Coordinate44: TCoordinateNode;
HAnimJoint45: THAnimJointNode;
HAnimJoint46: THAnimJointNode;
HAnimSegment47: THAnimSegmentNode;
HAnimSite48: THAnimSiteNode;
Viewpoint49: TViewpointNode;
Viewpoint50: TViewpointNode;
Viewpoint51: TViewpointNode;
Viewpoint52: TViewpointNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'DiamondManLOA0.x3d';
X3D0.Meta['description'] := 'HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid.';
X3D0.Meta['creator'] := 'Matthew T. Beitler';
X3D0.Meta['translator'] := 'Joel S. Pawloski';
X3D0.Meta['created'] := '12 November 2001';
X3D0.Meta['modified'] := 'Mon, 15 Sep 2025 05:18:46 GMT';
X3D0.Meta['motto'] := '(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"';
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
X3D0.Meta['Image'] := 'humanoid_landmark_locations.gif';
X3D0.Meta['Image'] := 'http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d';
Group24 := TGroupNode.Create;
WorldInfo25 := TWorldInfoNode.Create;
WorldInfo25.Title := 'HANIM 2.0 Default Joint Centers, LOA0';
WorldInfo25.SetInfo(['HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf']);
{ .AddChildren }
Group24.AddChildren([WorldInfo25]);
NavigationInfo26 := TNavigationInfoNode.Create;
NavigationInfo26.Speed := 1.5;
{ .AddChildren }
Group24.AddChildren([NavigationInfo26]);
Viewpoint27 := TViewpointNode.Create;
Viewpoint27.Description := 'Diamond Man, LOA 0';
Viewpoint27.Position := Vector3(0,1,3);
Viewpoint27.CenterOfRotation := Vector3(0,1,0);
{ .AddChildren }
Group24.AddChildren([Viewpoint27]);
HAnimHumanoid28 := THAnimHumanoidNode.Create;
HAnimHumanoid28.NameField := 'humanoid';
HAnimHumanoid28.Loa := 0;
MetadataSet29 := TMetadataSetNode.Create;
MetadataSet29.NameField := 'HAnimHumanoid.info';
MetadataSet29.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid';
MetadataString30 := TMetadataStringNode.Create;
MetadataString30.NameField := 'authorEmail';
{ .SetValue }
MetadataSet29.Value := MetadataString30;
MetadataString31 := TMetadataStringNode.Create;
MetadataString31.NameField := 'authorName';
{ .SetValue }
MetadataSet29.Value := MetadataString31;
MetadataString32 := TMetadataStringNode.Create;
MetadataString32.NameField := 'copyright';
{ .SetValue }
MetadataSet29.Value := MetadataString32;
MetadataString33 := TMetadataStringNode.Create;
MetadataString33.NameField := 'creationDate';
{ .SetValue }
MetadataSet29.Value := MetadataString33;
MetadataString34 := TMetadataStringNode.Create;
MetadataString34.NameField := 'humanoidVersion';
{ .SetValue }
MetadataSet29.Value := MetadataString34;
MetadataString35 := TMetadataStringNode.Create;
MetadataString35.NameField := 'usageRestrictions';
{ .SetValue }
MetadataSet29.Value := MetadataString35;
{ .SetMetadata }
HAnimHumanoid28.Metadata := MetadataSet29;
HAnimJoint36 := THAnimJointNode.Create;
HAnimJoint36.NameField := 'humanoid_root';
HAnimJoint36.Center := Vector3(0,0.824,0.0277);
HAnimJoint37 := THAnimJointNode.Create;
HAnimJoint37.NameField := 'sacroiliac';
HAnimJoint37.Center := Vector3(0,0.9149,0.0016);
HAnimSegment38 := THAnimSegmentNode.Create;
HAnimSegment38.NameField := 'pelvis';
Transform39 := TTransformNode.Create;
Transform39.Translation := Vector3(0,0.9149,0.0016);
Shape40 := TShapeNode.Create;
Appearance41 := TAppearanceNode.Create;
Material42 := TMaterialNode.Create;
Material42.DiffuseColor := Vector3(1,1,0);
{ .SetMaterial }
Appearance41.Material := Material42;
{ .SetAppearance }
Shape40.Appearance := Appearance41;
IndexedFaceSet43 := TIndexedFaceSetNode.Create;
IndexedFaceSet43.CreaseAngle := 0.5;
IndexedFaceSet43.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate44 := TCoordinateNode.Create;
Coordinate44.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ .SetCoord }
IndexedFaceSet43.Coord := Coordinate44;
{ .SetGeometry }
Shape40.Geometry := IndexedFaceSet43;
{ .AddChild }
Transform39.AddChildren([Shape40]);
{ .AddChildren }
HAnimSegment38.AddChildren([Transform39]);
{ .AddChildren }
HAnimJoint37.AddChildren([HAnimSegment38]);
{ .AddChildren }
HAnimJoint36.AddChildren([HAnimJoint37]);
{ .AddSkeleton }
HAnimHumanoid28.SetSkeleton([HAnimJoint36]);
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45 := HAnimJoint36;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint45;
HAnimJoint46 := THAnimJointNode.Create;
HAnimJoint46 := HAnimJoint37;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint46;
HAnimSegment47 := THAnimSegmentNode.Create;
HAnimSegment47 := HAnimSegment38;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment47;
HAnimSite48 := THAnimSiteNode.Create;
HAnimSite48.NameField := 'site_view';
Viewpoint49 := TViewpointNode.Create;
Viewpoint49.Description := 'Inclined View';
Viewpoint49.Position := Vector3(1.62,1.05,2.06);
Viewpoint49.Orientation := Vector4(-0.113,0.993,0.0347,0.671);
{ .AddChildren }
HAnimSite48.AddChildren([Viewpoint49]);
Viewpoint50 := TViewpointNode.Create;
Viewpoint50.Description := 'Front View';
Viewpoint50.Position := Vector3(0,0.854,2.57665);
{ .AddChildren }
HAnimSite48.AddChildren([Viewpoint50]);
Viewpoint51 := TViewpointNode.Create;
Viewpoint51.Description := 'Side View';
Viewpoint51.Position := Vector3(2.5929,0.854,0);
Viewpoint51.Orientation := Vector4(0,1,0,1.57079);
{ .AddChildren }
HAnimSite48.AddChildren([Viewpoint51]);
Viewpoint52 := TViewpointNode.Create;
Viewpoint52.Description := 'Top View';
Viewpoint52.Position := Vector3(0,3.4495,0);
Viewpoint52.Orientation := Vector4(1,0,0,-1.57079);
{ .AddChildren }
HAnimSite48.AddChildren([Viewpoint52]);
{ .SetViewpoints }
HAnimHumanoid28.Viewpoints := HAnimSite48;
{ .AddChildren }
Group24.AddChildren([HAnimHumanoid28]);
{ .AddGroup }
X3D0.AddChildren([Group24]);
Result := X3D0;
end;
