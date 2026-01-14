function DiamondManLOA_1: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group25: TGroupNode;
WorldInfo26: TWorldInfoNode;
NavigationInfo27: TNavigationInfoNode;
Viewpoint28: TViewpointNode;
HAnimHumanoid29: THAnimHumanoidNode;
MetadataSet30: TMetadataSetNode;
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
HAnimSegment46: THAnimSegmentNode;
Transform47: TTransformNode;
Shape48: TShapeNode;
HAnimSite49: THAnimSiteNode;
HAnimSite50: THAnimSiteNode;
HAnimSite51: THAnimSiteNode;
HAnimJoint52: THAnimJointNode;
HAnimSegment53: THAnimSegmentNode;
Transform54: TTransformNode;
Shape55: TShapeNode;
HAnimJoint56: THAnimJointNode;
HAnimSegment57: THAnimSegmentNode;
Transform58: TTransformNode;
Shape59: TShapeNode;
HAnimSite60: THAnimSiteNode;
HAnimSite61: THAnimSiteNode;
HAnimSite62: THAnimSiteNode;
HAnimSite63: THAnimSiteNode;
HAnimJoint64: THAnimJointNode;
HAnimSegment65: THAnimSegmentNode;
HAnimSite66: THAnimSiteNode;
HAnimSite67: THAnimSiteNode;
HAnimSite68: THAnimSiteNode;
HAnimSite69: THAnimSiteNode;
HAnimJoint70: THAnimJointNode;
HAnimSegment71: THAnimSegmentNode;
Transform72: TTransformNode;
Shape73: TShapeNode;
HAnimSite74: THAnimSiteNode;
HAnimSite75: THAnimSiteNode;
HAnimSite76: THAnimSiteNode;
HAnimJoint77: THAnimJointNode;
HAnimSegment78: THAnimSegmentNode;
Transform79: TTransformNode;
Shape80: TShapeNode;
HAnimJoint81: THAnimJointNode;
HAnimSegment82: THAnimSegmentNode;
Transform83: TTransformNode;
Shape84: TShapeNode;
HAnimSite85: THAnimSiteNode;
HAnimSite86: THAnimSiteNode;
HAnimSite87: THAnimSiteNode;
HAnimSite88: THAnimSiteNode;
HAnimJoint89: THAnimJointNode;
HAnimSegment90: THAnimSegmentNode;
HAnimSite91: THAnimSiteNode;
HAnimSite92: THAnimSiteNode;
HAnimSite93: THAnimSiteNode;
HAnimSite94: THAnimSiteNode;
HAnimJoint95: THAnimJointNode;
HAnimSegment96: THAnimSegmentNode;
HAnimJoint97: THAnimJointNode;
HAnimSegment98: THAnimSegmentNode;
Transform99: TTransformNode;
Shape100: TShapeNode;
Transform101: TTransformNode;
HAnimSite102: THAnimSiteNode;
HAnimJoint103: THAnimJointNode;
HAnimSegment104: THAnimSegmentNode;
Transform105: TTransformNode;
Shape106: TShapeNode;
Transform107: TTransformNode;
HAnimSite108: THAnimSiteNode;
HAnimSite109: THAnimSiteNode;
HAnimSite110: THAnimSiteNode;
HAnimSite111: THAnimSiteNode;
HAnimJoint112: THAnimJointNode;
HAnimSegment113: THAnimSegmentNode;
Transform114: TTransformNode;
Shape115: TShapeNode;
Transform116: TTransformNode;
HAnimSite117: THAnimSiteNode;
HAnimSite118: THAnimSiteNode;
HAnimSite119: THAnimSiteNode;
HAnimSite120: THAnimSiteNode;
HAnimSite121: THAnimSiteNode;
HAnimJoint122: THAnimJointNode;
HAnimSegment123: THAnimSegmentNode;
Transform124: TTransformNode;
Shape125: TShapeNode;
Transform126: TTransformNode;
HAnimSite127: THAnimSiteNode;
HAnimJoint128: THAnimJointNode;
HAnimSegment129: THAnimSegmentNode;
Transform130: TTransformNode;
Shape131: TShapeNode;
Transform132: TTransformNode;
HAnimSite133: THAnimSiteNode;
HAnimSite134: THAnimSiteNode;
HAnimSite135: THAnimSiteNode;
HAnimSite136: THAnimSiteNode;
HAnimJoint137: THAnimJointNode;
HAnimSegment138: THAnimSegmentNode;
Transform139: TTransformNode;
Shape140: TShapeNode;
Transform141: TTransformNode;
HAnimSite142: THAnimSiteNode;
HAnimSite143: THAnimSiteNode;
HAnimSite144: THAnimSiteNode;
HAnimSite145: THAnimSiteNode;
HAnimSite146: THAnimSiteNode;
HAnimJoint147: THAnimJointNode;
HAnimSegment148: THAnimSegmentNode;
HAnimJoint149: THAnimJointNode;
HAnimJoint150: THAnimJointNode;
HAnimSegment151: THAnimSegmentNode;
Transform152: TTransformNode;
Shape153: TShapeNode;
HAnimSite154: THAnimSiteNode;
HAnimSite155: THAnimSiteNode;
HAnimSite156: THAnimSiteNode;
HAnimSite157: THAnimSiteNode;
HAnimSite158: THAnimSiteNode;
HAnimSite159: THAnimSiteNode;
HAnimSite160: THAnimSiteNode;
HAnimSite161: THAnimSiteNode;
HAnimSite162: THAnimSiteNode;
HAnimSite163: THAnimSiteNode;
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
HAnimSegment184: THAnimSegmentNode;
HAnimSegment185: THAnimSegmentNode;
HAnimSegment186: THAnimSegmentNode;
HAnimSegment187: THAnimSegmentNode;
HAnimSegment188: THAnimSegmentNode;
HAnimSegment189: THAnimSegmentNode;
HAnimSegment190: THAnimSegmentNode;
HAnimSegment191: THAnimSegmentNode;
HAnimSegment192: THAnimSegmentNode;
HAnimSegment193: THAnimSegmentNode;
HAnimSegment194: THAnimSegmentNode;
HAnimSegment195: THAnimSegmentNode;
HAnimSegment196: THAnimSegmentNode;
HAnimSegment197: THAnimSegmentNode;
HAnimSegment198: THAnimSegmentNode;
HAnimSegment199: THAnimSegmentNode;
HAnimSegment200: THAnimSegmentNode;
HAnimSegment201: THAnimSegmentNode;
HAnimSite202: THAnimSiteNode;
HAnimSite203: THAnimSiteNode;
HAnimSite204: THAnimSiteNode;
HAnimSite205: THAnimSiteNode;
HAnimSite206: THAnimSiteNode;
HAnimSite207: THAnimSiteNode;
HAnimSite208: THAnimSiteNode;
HAnimSite209: THAnimSiteNode;
HAnimSite210: THAnimSiteNode;
HAnimSite211: THAnimSiteNode;
HAnimSite212: THAnimSiteNode;
HAnimSite213: THAnimSiteNode;
HAnimSite214: THAnimSiteNode;
HAnimSite215: THAnimSiteNode;
HAnimSite216: THAnimSiteNode;
HAnimSite217: THAnimSiteNode;
HAnimSite218: THAnimSiteNode;
HAnimSite219: THAnimSiteNode;
HAnimSite220: THAnimSiteNode;
HAnimSite221: THAnimSiteNode;
HAnimSite222: THAnimSiteNode;
HAnimSite223: THAnimSiteNode;
HAnimSite224: THAnimSiteNode;
HAnimSite225: THAnimSiteNode;
HAnimSite226: THAnimSiteNode;
HAnimSite227: THAnimSiteNode;
HAnimSite228: THAnimSiteNode;
HAnimSite229: THAnimSiteNode;
HAnimSite230: THAnimSiteNode;
HAnimSite231: THAnimSiteNode;
HAnimSite232: THAnimSiteNode;
HAnimSite233: THAnimSiteNode;
HAnimSite234: THAnimSiteNode;
HAnimSite235: THAnimSiteNode;
HAnimSite236: THAnimSiteNode;
HAnimSite237: THAnimSiteNode;
HAnimSite238: THAnimSiteNode;
HAnimSite239: THAnimSiteNode;
HAnimSite240: THAnimSiteNode;
HAnimSite241: THAnimSiteNode;
HAnimSite242: THAnimSiteNode;
HAnimSite243: THAnimSiteNode;
HAnimSite244: THAnimSiteNode;
HAnimSite245: THAnimSiteNode;
HAnimSite246: THAnimSiteNode;
HAnimSite247: THAnimSiteNode;
HAnimSite248: THAnimSiteNode;
HAnimSite249: THAnimSiteNode;
HAnimSite250: THAnimSiteNode;
HAnimSite251: THAnimSiteNode;
HAnimSite252: THAnimSiteNode;
HAnimSite253: THAnimSiteNode;
HAnimSite254: THAnimSiteNode;
Viewpoint255: TViewpointNode;
Viewpoint256: TViewpointNode;
Viewpoint257: TViewpointNode;
Viewpoint258: TViewpointNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'DiamondManLOA_1.x3d';
X3D0.Meta['description'] := 'HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy.';
X3D0.Meta['creator'] := 'Matthew T. Beitler';
X3D0.Meta['translator'] := 'Joel S. Pawloski';
X3D0.Meta['created'] := '12 November 2001';
X3D0.Meta['modified'] := 'Tue, 09 Sep 2025 19:37:54 GMT';
X3D0.Meta['reference'] := '../Templates/DiamondManLOA_1.x3d';
X3D0.Meta['reference'] := 'HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two';
X3D0.Meta['reference'] := 'http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa';
X3D0.Meta['reference'] := 'http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl';
X3D0.Meta['reference'] := 'http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl';
X3D0.Meta['reference'] := 'http://ece.uwaterloo.ca/~HAnim';
X3D0.Meta['reference'] := 'http://www.cis.upenn.edu/~badler/anthro/89-71.pdf';
X3D0.Meta['reference'] := 'http://www.cis.upenn.edu/~badler/anthro/89-71.ps';
X3D0.Meta['reference'] := 'http://www.cis.upenn.edu/~beitler';
X3D0.Meta['error'] := 'Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported';
X3D0.Meta['Image'] := 'images/BonesAllSkeletonFrontViewLOA1.png';
X3D0.Meta['Image'] := 'humanoid_landmark_locations.gif';
X3D0.Meta['Image'] := 'http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif';
X3D0.Meta['motto'] := '(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"';
X3D0.Meta['warning'] := 'Still needs comments on CAESAR feature points inserted';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d';
Group25 := TGroupNode.Create;
WorldInfo26 := TWorldInfoNode.Create;
WorldInfo26.Title := 'HANIM 1.1 Default Joint Centers, LOA1';
WorldInfo26.SetInfo(['HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf']);
{ .AddChildren }
Group25.AddChildren([WorldInfo26]);
NavigationInfo27 := TNavigationInfoNode.Create;
NavigationInfo27.Speed := 1.5;
{ .AddChildren }
Group25.AddChildren([NavigationInfo27]);
Viewpoint28 := TViewpointNode.Create;
Viewpoint28.Description := 'Diamond Man, LOA 1';
Viewpoint28.Position := Vector3(0,1,3);
Viewpoint28.CenterOfRotation := Vector3(0,1,0);
{ .AddChildren }
Group25.AddChildren([Viewpoint28]);
HAnimHumanoid29 := THAnimHumanoidNode.Create;
HAnimHumanoid29.NameField := 'humanoid';
HAnimHumanoid29.Version := '1.0';
MetadataSet30 := TMetadataSetNode.Create;
MetadataSet30.NameField := 'HAnimHumanoid.info';
MetadataSet30.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid';
MetadataString31 := TMetadataStringNode.Create;
MetadataString31.NameField := 'authorEmail';
{ .SetValue }
MetadataSet30.Value := MetadataString31;
MetadataString32 := TMetadataStringNode.Create;
MetadataString32.NameField := 'authorName';
{ .SetValue }
MetadataSet30.Value := MetadataString32;
MetadataString33 := TMetadataStringNode.Create;
MetadataString33.NameField := 'copyright';
{ .SetValue }
MetadataSet30.Value := MetadataString33;
MetadataString34 := TMetadataStringNode.Create;
MetadataString34.NameField := 'humanoidVersion';
{ .SetValue }
MetadataSet30.Value := MetadataString34;
MetadataString35 := TMetadataStringNode.Create;
MetadataString35.NameField := 'usageRestrictions';
{ .SetValue }
MetadataSet30.Value := MetadataString35;
{ .SetMetadata }
HAnimHumanoid29.Metadata := MetadataSet30;
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
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45.NameField := 'l_hip';
HAnimJoint45.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimSegment46 := THAnimSegmentNode.Create;
HAnimSegment46.NameField := 'l_thigh';
Transform47 := TTransformNode.Create;
Transform47.Translation := Vector3(0.0961,0.9124,-0.0001);
Shape48 := TShapeNode.Create;
Shape48 := Shape40;
{ .AddChild }
Transform47.AddChildren([Shape48]);
{ .AddChildren }
HAnimSegment46.AddChildren([Transform47]);
HAnimSite49 := THAnimSiteNode.Create;
HAnimSite49.NameField := 'l_knee_crease_pt';
HAnimSite49.Translation := Vector3(0.0993,0.4881,-0.0309);
{ .AddChildren }
HAnimSegment46.AddChildren([HAnimSite49]);
HAnimSite50 := THAnimSiteNode.Create;
HAnimSite50.NameField := 'l_femoral_lateral_epicn_pt';
HAnimSite50.Translation := Vector3(0.1598,0.4967,0.0297);
{ .AddChildren }
HAnimSegment46.AddChildren([HAnimSite50]);
HAnimSite51 := THAnimSiteNode.Create;
HAnimSite51.NameField := 'l_femoral_medial_epicn_pt';
HAnimSite51.Translation := Vector3(0.0398,0.4946,0.0303);
{ .AddChildren }
HAnimSegment46.AddChildren([HAnimSite51]);
{ .AddChildren }
HAnimJoint45.AddChildren([HAnimSegment46]);
HAnimJoint52 := THAnimJointNode.Create;
HAnimJoint52.NameField := 'l_knee';
HAnimJoint52.Center := Vector3(0.104,0.4867,0.0308);
HAnimSegment53 := THAnimSegmentNode.Create;
HAnimSegment53.NameField := 'l_calf';
Transform54 := TTransformNode.Create;
Transform54.Translation := Vector3(0.104,0.4867,0.0308);
Shape55 := TShapeNode.Create;
Shape55 := Shape40;
{ .AddChild }
Transform54.AddChildren([Shape55]);
{ .AddChildren }
HAnimSegment53.AddChildren([Transform54]);
{ .AddChildren }
HAnimJoint52.AddChildren([HAnimSegment53]);
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.NameField := 'l_ankle';
HAnimJoint56.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimSegment57 := THAnimSegmentNode.Create;
HAnimSegment57.NameField := 'l_hindfoot';
Transform58 := TTransformNode.Create;
Transform58.Translation := Vector3(0.1101,0.0656,-0.0736);
Shape59 := TShapeNode.Create;
Shape59 := Shape40;
{ .AddChild }
Transform58.AddChildren([Shape59]);
{ .AddChildren }
HAnimSegment57.AddChildren([Transform58]);
HAnimSite60 := THAnimSiteNode.Create;
HAnimSite60.NameField := 'l_lateral_malleolus_pt';
HAnimSite60.Translation := Vector3(0.1308,0.0597,-0.1032);
{ .AddChildren }
HAnimSegment57.AddChildren([HAnimSite60]);
HAnimSite61 := THAnimSiteNode.Create;
HAnimSite61.NameField := 'l_medial_malleolus_pt';
HAnimSite61.Translation := Vector3(0.089,0.0716,-0.0881);
{ .AddChildren }
HAnimSegment57.AddChildren([HAnimSite61]);
HAnimSite62 := THAnimSiteNode.Create;
HAnimSite62.NameField := 'l_sphyrion_pt';
HAnimSite62.Translation := Vector3(0.089,0.0575,-0.0943);
{ .AddChildren }
HAnimSegment57.AddChildren([HAnimSite62]);
HAnimSite63 := THAnimSiteNode.Create;
HAnimSite63.NameField := 'l_calcaneous_post_pt';
HAnimSite63.Translation := Vector3(0.0974,0.0259,-0.1171);
{ .AddChildren }
HAnimSegment57.AddChildren([HAnimSite63]);
{ .AddChildren }
HAnimJoint56.AddChildren([HAnimSegment57]);
HAnimJoint64 := THAnimJointNode.Create;
HAnimJoint64.NameField := 'l_midtarsal';
HAnimJoint64.Center := Vector3(0.1086,0.0001,0.0368);
HAnimSegment65 := THAnimSegmentNode.Create;
HAnimSegment65.NameField := 'l_middistal';
HAnimSite66 := THAnimSiteNode.Create;
HAnimSite66.NameField := 'l_middistal_tip';
HAnimSite66.Translation := Vector3(0.1354,0.0016,0.1476);
{ .AddChildren }
HAnimSegment65.AddChildren([HAnimSite66]);
HAnimSite67 := THAnimSiteNode.Create;
HAnimSite67.NameField := 'l_metatarsal_pha5_pt';
HAnimSite67.Translation := Vector3(0.1825,0.007,0.0928);
{ .AddChildren }
HAnimSegment65.AddChildren([HAnimSite67]);
HAnimSite68 := THAnimSiteNode.Create;
HAnimSite68.NameField := 'l_metatarsal_pha1_pt';
HAnimSite68.Translation := Vector3(0.0816,0.0232,0.0106);
{ .AddChildren }
HAnimSegment65.AddChildren([HAnimSite68]);
HAnimSite69 := THAnimSiteNode.Create;
HAnimSite69.NameField := 'l_digit2_pt';
HAnimSite69.Translation := Vector3(0.1195,0.0079,0.1433);
{ .AddChildren }
HAnimSegment65.AddChildren([HAnimSite69]);
{ .AddChildren }
HAnimJoint64.AddChildren([HAnimSegment65]);
{ .AddChildren }
HAnimJoint56.AddChildren([HAnimJoint64]);
{ .AddChildren }
HAnimJoint52.AddChildren([HAnimJoint56]);
{ .AddChildren }
HAnimJoint45.AddChildren([HAnimJoint52]);
{ .AddChildren }
HAnimJoint37.AddChildren([HAnimJoint45]);
HAnimJoint70 := THAnimJointNode.Create;
HAnimJoint70.NameField := 'r_hip';
HAnimJoint70.Center := Vector3(-0.095,0.9171,0.0029);
HAnimSegment71 := THAnimSegmentNode.Create;
HAnimSegment71.NameField := 'r_thigh';
Transform72 := TTransformNode.Create;
Transform72.Translation := Vector3(-0.095,0.9171,0.0029);
Shape73 := TShapeNode.Create;
Shape73 := Shape40;
{ .AddChild }
Transform72.AddChildren([Shape73]);
{ .AddChildren }
HAnimSegment71.AddChildren([Transform72]);
HAnimSite74 := THAnimSiteNode.Create;
HAnimSite74.NameField := 'r_knee_crease_pt';
HAnimSite74.Translation := Vector3(-0.0825,0.4932,-0.0326);
{ .AddChildren }
HAnimSegment71.AddChildren([HAnimSite74]);
HAnimSite75 := THAnimSiteNode.Create;
HAnimSite75.NameField := 'r_femoral_lateral_epicn_pt';
HAnimSite75.Translation := Vector3(-0.1421,0.4992,0.031);
{ .AddChildren }
HAnimSegment71.AddChildren([HAnimSite75]);
HAnimSite76 := THAnimSiteNode.Create;
HAnimSite76.NameField := 'r_femoral_medial_epicn_pt';
HAnimSite76.Translation := Vector3(-0.0221,0.5014,0.0289);
{ .AddChildren }
HAnimSegment71.AddChildren([HAnimSite76]);
{ .AddChildren }
HAnimJoint70.AddChildren([HAnimSegment71]);
HAnimJoint77 := THAnimJointNode.Create;
HAnimJoint77.NameField := 'r_knee';
HAnimJoint77.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimSegment78 := THAnimSegmentNode.Create;
HAnimSegment78.NameField := 'r_calf';
Transform79 := TTransformNode.Create;
Transform79.Translation := Vector3(-0.0867,0.4913,0.0318);
Shape80 := TShapeNode.Create;
Shape80 := Shape40;
{ .AddChild }
Transform79.AddChildren([Shape80]);
{ .AddChildren }
HAnimSegment78.AddChildren([Transform79]);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimSegment78]);
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.NameField := 'r_ankle';
HAnimJoint81.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimSegment82 := THAnimSegmentNode.Create;
HAnimSegment82.NameField := 'r_hindfoot';
Transform83 := TTransformNode.Create;
Transform83.Translation := Vector3(-0.0801,0.0712,-0.0766);
Shape84 := TShapeNode.Create;
Shape84 := Shape40;
{ .AddChild }
Transform83.AddChildren([Shape84]);
{ .AddChildren }
HAnimSegment82.AddChildren([Transform83]);
HAnimSite85 := THAnimSiteNode.Create;
HAnimSite85.NameField := 'r_lateral_malleolus_pt';
HAnimSite85.Translation := Vector3(-0.1006,0.0658,-0.1075);
{ .AddChildren }
HAnimSegment82.AddChildren([HAnimSite85]);
HAnimSite86 := THAnimSiteNode.Create;
HAnimSite86.NameField := 'r_medial_malleolus_pt';
HAnimSite86.Translation := Vector3(-0.0591,0.076,-0.0928);
{ .AddChildren }
HAnimSegment82.AddChildren([HAnimSite86]);
HAnimSite87 := THAnimSiteNode.Create;
HAnimSite87.NameField := 'r_sphyrion_pt';
HAnimSite87.Translation := Vector3(-0.0603,0.061,-0.1002);
{ .AddChildren }
HAnimSegment82.AddChildren([HAnimSite87]);
HAnimSite88 := THAnimSiteNode.Create;
HAnimSite88.NameField := 'r_calcaneous_post_pt';
HAnimSite88.Translation := Vector3(-0.0692,0.0297,-0.1221);
{ .AddChildren }
HAnimSegment82.AddChildren([HAnimSite88]);
{ .AddChildren }
HAnimJoint81.AddChildren([HAnimSegment82]);
HAnimJoint89 := THAnimJointNode.Create;
HAnimJoint89.NameField := 'r_midtarsal';
HAnimJoint89.Center := Vector3(-0.0801,0,0.0368);
HAnimSegment90 := THAnimSegmentNode.Create;
HAnimSegment90.NameField := 'r_middistal';
HAnimSite91 := THAnimSiteNode.Create;
HAnimSite91.NameField := 'r_middistal_tip';
HAnimSite91.Translation := Vector3(-0.1043,-0.0227,0.145);
{ .AddChildren }
HAnimSegment90.AddChildren([HAnimSite91]);
HAnimSite92 := THAnimSiteNode.Create;
HAnimSite92.NameField := 'r_metatarsal_pha5_pt';
HAnimSite92.Translation := Vector3(-0.1523,0.0166,0.0895);
{ .AddChildren }
HAnimSegment90.AddChildren([HAnimSite92]);
HAnimSite93 := THAnimSiteNode.Create;
HAnimSite93.NameField := 'r_metatarsal_pha1_pt';
HAnimSite93.Translation := Vector3(-0.0521,0.026,0.0127);
{ .AddChildren }
HAnimSegment90.AddChildren([HAnimSite93]);
HAnimSite94 := THAnimSiteNode.Create;
HAnimSite94.NameField := 'r_digit2_pt';
HAnimSite94.Translation := Vector3(-0.0883,0.0134,0.1383);
{ .AddChildren }
HAnimSegment90.AddChildren([HAnimSite94]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimSegment90]);
{ .AddChildren }
HAnimJoint81.AddChildren([HAnimJoint89]);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint81]);
{ .AddChildren }
HAnimJoint70.AddChildren([HAnimJoint77]);
{ .AddChildren }
HAnimJoint37.AddChildren([HAnimJoint70]);
{ .AddChildren }
HAnimJoint36.AddChildren([HAnimJoint37]);
HAnimJoint95 := THAnimJointNode.Create;
HAnimJoint95.NameField := 'vl1';
HAnimJoint95.Center := Vector3(-0.00405,1.07,-0.0275);
HAnimSegment96 := THAnimSegmentNode.Create;
HAnimSegment96.NameField := 'l1';
{ .AddChildren }
HAnimJoint95.AddChildren([HAnimSegment96]);
HAnimJoint97 := THAnimJointNode.Create;
HAnimJoint97.NameField := 'l_shoulder';
HAnimJoint97.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimSegment98 := THAnimSegmentNode.Create;
HAnimSegment98.NameField := 'l_upperarm';
Transform99 := TTransformNode.Create;
Transform99.Translation := Vector3(0.2029,1.4376,-0.0387);
Shape100 := TShapeNode.Create;
Shape100 := Shape40;
{ .AddChild }
Transform99.AddChildren([Shape100]);
{ .AddChildren }
HAnimSegment98.AddChildren([Transform99]);
Transform101 := TTransformNode.Create;
Transform101.Translation := Vector3(0.2029,1.4376,-0.0387);
Transform101.Rotation := Vector4(1,0,0,0.119);
Transform101.Center := Vector3(0.182,1.22,-0.047);
{ .AddChildren }
HAnimSegment98.AddChildren([Transform101]);
HAnimSite102 := THAnimSiteNode.Create;
HAnimSite102.NameField := 'l_humeral_lateral_epicn_pt';
HAnimSite102.Translation := Vector3(0.228,1.1482,-0.11);
{ .AddChildren }
HAnimSegment98.AddChildren([HAnimSite102]);
{ .AddChildren }
HAnimJoint97.AddChildren([HAnimSegment98]);
HAnimJoint103 := THAnimJointNode.Create;
HAnimJoint103.NameField := 'l_elbow';
HAnimJoint103.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimSegment104 := THAnimSegmentNode.Create;
HAnimSegment104.NameField := 'l_forearm';
Transform105 := TTransformNode.Create;
Transform105.Translation := Vector3(0.2014,1.1357,-0.0682);
Shape106 := TShapeNode.Create;
Shape106 := Shape40;
{ .AddChild }
Transform105.AddChildren([Shape106]);
{ .AddChildren }
HAnimSegment104.AddChildren([Transform105]);
Transform107 := TTransformNode.Create;
Transform107.Translation := Vector3(0.2014,1.1357,-0.0682);
Transform107.Rotation := Vector4(-1,0,0,0.1);
Transform107.Center := Vector3(0.198,0.961,-0.0405);
{ .AddChildren }
HAnimSegment104.AddChildren([Transform107]);
HAnimSite108 := THAnimSiteNode.Create;
HAnimSite108.NameField := 'l_radial_styloid_pt';
HAnimSite108.Translation := Vector3(0.1901,0.8645,-0.0415);
{ .AddChildren }
HAnimSegment104.AddChildren([HAnimSite108]);
HAnimSite109 := THAnimSiteNode.Create;
HAnimSite109.NameField := 'l_olecranon_pt';
HAnimSite109.Translation := Vector3(-0.1962,1.1375,-0.1123);
{ .AddChildren }
HAnimSegment104.AddChildren([HAnimSite109]);
HAnimSite110 := THAnimSiteNode.Create;
HAnimSite110.NameField := 'l_humeral_medial_epicn_pt';
HAnimSite110.Translation := Vector3(0.1735,1.1272,-0.1113);
{ .AddChildren }
HAnimSegment104.AddChildren([HAnimSite110]);
HAnimSite111 := THAnimSiteNode.Create;
HAnimSite111.NameField := 'l_radiale_pt';
HAnimSite111.Translation := Vector3(0.2182,1.1212,-0.1167);
{ .AddChildren }
HAnimSegment104.AddChildren([HAnimSite111]);
{ .AddChildren }
HAnimJoint103.AddChildren([HAnimSegment104]);
HAnimJoint112 := THAnimJointNode.Create;
HAnimJoint112.NameField := 'l_wrist';
HAnimJoint112.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimSegment113 := THAnimSegmentNode.Create;
HAnimSegment113.NameField := 'l_hand';
Transform114 := TTransformNode.Create;
Transform114.Translation := Vector3(0.1984,0.8663,-0.0583);
Shape115 := TShapeNode.Create;
Shape115 := Shape40;
{ .AddChild }
Transform114.AddChildren([Shape115]);
{ .AddChildren }
HAnimSegment113.AddChildren([Transform114]);
Transform116 := TTransformNode.Create;
Transform116.Translation := Vector3(0.1984,0.8663,-0.0583);
Transform116.Rotation := Vector4(-0.06361,-0.9967,0.04988,1.333);
Transform116.Center := Vector3(0.213,0.811,-0.0338);
{ .AddChildren }
HAnimSegment113.AddChildren([Transform116]);
HAnimSite117 := THAnimSiteNode.Create;
HAnimSite117.NameField := 'l_hand_tip';
HAnimSite117.Translation := Vector3(0.208,0.6731,-0.0491);
{ .AddChildren }
HAnimSegment113.AddChildren([HAnimSite117]);
HAnimSite118 := THAnimSiteNode.Create;
HAnimSite118.NameField := 'l_metacarpal_pha2_pt';
HAnimSite118.Translation := Vector3(0.2009,0.8139,-0.0237);
{ .AddChildren }
HAnimSegment113.AddChildren([HAnimSite118]);
HAnimSite119 := THAnimSiteNode.Create;
HAnimSite119.NameField := 'l_dactylion_pt';
HAnimSite119.Translation := Vector3(0.2056,0.6743,-0.0482);
{ .AddChildren }
HAnimSegment113.AddChildren([HAnimSite119]);
HAnimSite120 := THAnimSiteNode.Create;
HAnimSite120.NameField := 'l_ulnar_styloid_pt';
HAnimSite120.Translation := Vector3(-0.2142,0.8529,-0.0648);
{ .AddChildren }
HAnimSegment113.AddChildren([HAnimSite120]);
HAnimSite121 := THAnimSiteNode.Create;
HAnimSite121.NameField := 'l_metacarpal_pha5_pt';
HAnimSite121.Translation := Vector3(0.1929,0.786,-0.1122);
{ .AddChildren }
HAnimSegment113.AddChildren([HAnimSite121]);
{ .AddChildren }
HAnimJoint112.AddChildren([HAnimSegment113]);
{ .AddChildren }
HAnimJoint103.AddChildren([HAnimJoint112]);
{ .AddChildren }
HAnimJoint97.AddChildren([HAnimJoint103]);
{ .AddChildren }
HAnimJoint95.AddChildren([HAnimJoint97]);
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122.NameField := 'r_shoulder';
HAnimJoint122.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimSegment123 := THAnimSegmentNode.Create;
HAnimSegment123.NameField := 'r_upperarm';
Transform124 := TTransformNode.Create;
Transform124.Translation := Vector3(-0.1907,1.4407,-0.0325);
Shape125 := TShapeNode.Create;
Shape125 := Shape40;
{ .AddChild }
Transform124.AddChildren([Shape125]);
{ .AddChildren }
HAnimSegment123.AddChildren([Transform124]);
Transform126 := TTransformNode.Create;
Transform126.Translation := Vector3(-0.1907,1.4407,-0.0325);
Transform126.Rotation := Vector4(1,0,0,0.0836);
Transform126.Center := Vector3(-0.182,1.22,-0.047);
{ .AddChildren }
HAnimSegment123.AddChildren([Transform126]);
HAnimSite127 := THAnimSiteNode.Create;
HAnimSite127.NameField := 'r_humeral_lateral_epicn_pt';
HAnimSite127.Translation := Vector3(-0.2224,1.1517,-0.1033);
{ .AddChildren }
HAnimSegment123.AddChildren([HAnimSite127]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimSegment123]);
HAnimJoint128 := THAnimJointNode.Create;
HAnimJoint128.NameField := 'r_elbow';
HAnimJoint128.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimSegment129 := THAnimSegmentNode.Create;
HAnimSegment129.NameField := 'r_forearm';
Transform130 := TTransformNode.Create;
Transform130.Translation := Vector3(-0.1949,1.1388,-0.062);
Shape131 := TShapeNode.Create;
Shape131 := Shape40;
{ .AddChild }
Transform130.AddChildren([Shape131]);
{ .AddChildren }
HAnimSegment129.AddChildren([Transform130]);
Transform132 := TTransformNode.Create;
Transform132.Translation := Vector3(-0.1949,1.1388,-0.062);
Transform132.Rotation := Vector4(-1,0,0,0.1254);
Transform132.Center := Vector3(-0.198,0.961,-0.0397);
{ .AddChildren }
HAnimSegment129.AddChildren([Transform132]);
HAnimSite133 := THAnimSiteNode.Create;
HAnimSite133.NameField := 'r_radial_styloid_pt';
HAnimSite133.Translation := Vector3(-0.1884,0.8676,-0.036);
{ .AddChildren }
HAnimSegment129.AddChildren([HAnimSite133]);
HAnimSite134 := THAnimSiteNode.Create;
HAnimSite134.NameField := 'r_olecranon_pt';
HAnimSite134.Translation := Vector3(-0.1907,1.1405,-0.1065);
{ .AddChildren }
HAnimSegment129.AddChildren([HAnimSite134]);
HAnimSite135 := THAnimSiteNode.Create;
HAnimSite135.NameField := 'r_humeral_medial_epicn_pt';
HAnimSite135.Translation := Vector3(-0.168,1.1298,-0.1062);
{ .AddChildren }
HAnimSegment129.AddChildren([HAnimSite135]);
HAnimSite136 := THAnimSiteNode.Create;
HAnimSite136.NameField := 'r_radiale_pt';
HAnimSite136.Translation := Vector3(-0.213,1.1305,-0.1091);
{ .AddChildren }
HAnimSegment129.AddChildren([HAnimSite136]);
{ .AddChildren }
HAnimJoint128.AddChildren([HAnimSegment129]);
HAnimJoint137 := THAnimJointNode.Create;
HAnimJoint137.NameField := 'r_wrist';
HAnimJoint137.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimSegment138 := THAnimSegmentNode.Create;
HAnimSegment138.NameField := 'r_hand';
Transform139 := TTransformNode.Create;
Transform139.Translation := Vector3(-0.1959,0.8694,-0.0521);
Shape140 := TShapeNode.Create;
Shape140 := Shape40;
{ .AddChild }
Transform139.AddChildren([Shape140]);
{ .AddChildren }
HAnimSegment138.AddChildren([Transform139]);
Transform141 := TTransformNode.Create;
Transform141.Rotation := Vector4(-0.09024,0.994,-0.0624,1.216);
Transform141.Center := Vector3(-0.217,0.811,-0.0338);
{ .AddChildren }
HAnimSegment138.AddChildren([Transform141]);
HAnimSite142 := THAnimSiteNode.Create;
HAnimSite142.NameField := 'r_hand_tip';
HAnimSite142.Translation := Vector3(-0.1969,0.6758,-0.0427);
{ .AddChildren }
HAnimSegment138.AddChildren([HAnimSite142]);
HAnimSite143 := THAnimSiteNode.Create;
HAnimSite143.NameField := 'r_metacarpal_pha2_pt';
HAnimSite143.Translation := Vector3(-0.1977,0.8169,-0.0177);
{ .AddChildren }
HAnimSegment138.AddChildren([HAnimSite143]);
HAnimSite144 := THAnimSiteNode.Create;
HAnimSite144.NameField := 'r_dactylion_pt';
HAnimSite144.Translation := Vector3(-0.1941,0.6772,-0.0423);
{ .AddChildren }
HAnimSegment138.AddChildren([HAnimSite144]);
HAnimSite145 := THAnimSiteNode.Create;
HAnimSite145.NameField := 'r_ulnar_styloid_pt';
HAnimSite145.Translation := Vector3(-0.2117,0.8562,-0.0584);
{ .AddChildren }
HAnimSegment138.AddChildren([HAnimSite145]);
HAnimSite146 := THAnimSiteNode.Create;
HAnimSite146.NameField := 'r_metacarpal_pha5_pt';
HAnimSite146.Translation := Vector3(-0.1929,0.789,-0.1064);
{ .AddChildren }
HAnimSegment138.AddChildren([HAnimSite146]);
{ .AddChildren }
HAnimJoint137.AddChildren([HAnimSegment138]);
{ .AddChildren }
HAnimJoint128.AddChildren([HAnimJoint137]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimJoint128]);
{ .AddChildren }
HAnimJoint95.AddChildren([HAnimJoint122]);
HAnimJoint147 := THAnimJointNode.Create;
HAnimJoint147.NameField := 'vc4';
HAnimJoint147.Center := Vector3(0,1.43,-0.0458);
HAnimSegment148 := THAnimSegmentNode.Create;
HAnimSegment148.NameField := 'c4';
{ .AddChildren }
HAnimJoint147.AddChildren([HAnimSegment148]);
{ .AddChildren }
HAnimJoint95.AddChildren([HAnimJoint147]);
{ .AddChildren }
HAnimJoint36.AddChildren([HAnimJoint95]);
HAnimJoint149 := THAnimJointNode.Create;
HAnimJoint149.NameField := 'vl5';
HAnimJoint149.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimJoint150 := THAnimJointNode.Create;
HAnimJoint150.NameField := 'skullbase';
HAnimJoint150.Center := Vector3(0.0044,1.6209,0.0236);
HAnimSegment151 := THAnimSegmentNode.Create;
HAnimSegment151.NameField := 'skull';
Transform152 := TTransformNode.Create;
Transform152.Translation := Vector3(0.0044,1.6209,0.0236);
Shape153 := TShapeNode.Create;
Shape153 := Shape40;
{ .AddChild }
Transform152.AddChildren([Shape153]);
{ .AddChildren }
HAnimSegment151.AddChildren([Transform152]);
HAnimSite154 := THAnimSiteNode.Create;
HAnimSite154.NameField := 'skull_tip';
HAnimSite154.Translation := Vector3(0.005,1.7504,0.0055);
{ .AddChildren }
HAnimSegment151.AddChildren([HAnimSite154]);
HAnimSite155 := THAnimSiteNode.Create;
HAnimSite155.NameField := 'sellion_pt';
HAnimSite155.Translation := Vector3(0.0058,1.6316,0.0852);
{ .AddChildren }
HAnimSegment151.AddChildren([HAnimSite155]);
HAnimSite156 := THAnimSiteNode.Create;
HAnimSite156.NameField := 'r_infraorbitale_pt';
HAnimSite156.Translation := Vector3(-0.0237,1.6171,0.0752);
{ .AddChildren }
HAnimSegment151.AddChildren([HAnimSite156]);
HAnimSite157 := THAnimSiteNode.Create;
HAnimSite157.NameField := 'l_infraorbitale_pt';
HAnimSite157.Translation := Vector3(0.0341,1.6171,0.0752);
{ .AddChildren }
HAnimSegment151.AddChildren([HAnimSite157]);
HAnimSite158 := THAnimSiteNode.Create;
HAnimSite158.NameField := 'supramenton_pt';
HAnimSite158.Translation := Vector3(0.0061,1.541,0.0805);
{ .AddChildren }
HAnimSegment151.AddChildren([HAnimSite158]);
HAnimSite159 := THAnimSiteNode.Create;
HAnimSite159.NameField := 'r_tragion_pt';
HAnimSite159.Translation := Vector3(-0.0646,1.6347,0.0302);
{ .AddChildren }
HAnimSegment151.AddChildren([HAnimSite159]);
HAnimSite160 := THAnimSiteNode.Create;
HAnimSite160.NameField := 'r_gonion_pt';
HAnimSite160.Translation := Vector3(-0.052,1.5529,0.0347);
{ .AddChildren }
HAnimSegment151.AddChildren([HAnimSite160]);
HAnimSite161 := THAnimSiteNode.Create;
HAnimSite161.NameField := 'l_tragion_pt';
HAnimSite161.Translation := Vector3(0.0739,1.6348,0.0282);
{ .AddChildren }
HAnimSegment151.AddChildren([HAnimSite161]);
HAnimSite162 := THAnimSiteNode.Create;
HAnimSite162.NameField := 'l_gonion_pt';
HAnimSite162.Translation := Vector3(0.0631,1.553,0.033);
{ .AddChildren }
HAnimSegment151.AddChildren([HAnimSite162]);
HAnimSite163 := THAnimSiteNode.Create;
HAnimSite163.NameField := 'nuchale_pt';
HAnimSite163.Translation := Vector3(0.0039,1.5972,-0.0796);
{ .AddChildren }
HAnimSegment151.AddChildren([HAnimSite163]);
{ .AddChildren }
HAnimJoint150.AddChildren([HAnimSegment151]);
{ .AddChildren }
HAnimJoint149.AddChildren([HAnimJoint150]);
{ .AddChildren }
HAnimJoint36.AddChildren([HAnimJoint149]);
{ .AddSkeleton }
HAnimHumanoid29.SetSkeleton([HAnimJoint36]);
HAnimJoint164 := THAnimJointNode.Create;
HAnimJoint164 := HAnimJoint36;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint164;
HAnimJoint165 := THAnimJointNode.Create;
HAnimJoint165 := HAnimJoint37;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint165;
HAnimJoint166 := THAnimJointNode.Create;
HAnimJoint166 := HAnimJoint95;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint166;
HAnimJoint167 := THAnimJointNode.Create;
HAnimJoint167 := HAnimJoint147;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint167;
HAnimJoint168 := THAnimJointNode.Create;
HAnimJoint168 := HAnimJoint150;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint168;
HAnimJoint169 := THAnimJointNode.Create;
HAnimJoint169 := HAnimJoint149;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint169;
HAnimJoint170 := THAnimJointNode.Create;
HAnimJoint170 := HAnimJoint56;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint170;
HAnimJoint171 := THAnimJointNode.Create;
HAnimJoint171 := HAnimJoint81;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint171;
HAnimJoint172 := THAnimJointNode.Create;
HAnimJoint172 := HAnimJoint103;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint172;
HAnimJoint173 := THAnimJointNode.Create;
HAnimJoint173 := HAnimJoint128;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint173;
HAnimJoint174 := THAnimJointNode.Create;
HAnimJoint174 := HAnimJoint45;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint174;
HAnimJoint175 := THAnimJointNode.Create;
HAnimJoint175 := HAnimJoint70;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint175;
HAnimJoint176 := THAnimJointNode.Create;
HAnimJoint176 := HAnimJoint52;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint176;
HAnimJoint177 := THAnimJointNode.Create;
HAnimJoint177 := HAnimJoint77;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint177;
HAnimJoint178 := THAnimJointNode.Create;
HAnimJoint178 := HAnimJoint64;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint178;
HAnimJoint179 := THAnimJointNode.Create;
HAnimJoint179 := HAnimJoint89;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint179;
HAnimJoint180 := THAnimJointNode.Create;
HAnimJoint180 := HAnimJoint97;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint180;
HAnimJoint181 := THAnimJointNode.Create;
HAnimJoint181 := HAnimJoint122;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint181;
HAnimJoint182 := THAnimJointNode.Create;
HAnimJoint182 := HAnimJoint112;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint182;
HAnimJoint183 := THAnimJointNode.Create;
HAnimJoint183 := HAnimJoint137;
{ .AddJoints }
HAnimHumanoid29.Joints := HAnimJoint183;
HAnimSegment184 := THAnimSegmentNode.Create;
HAnimSegment184 := HAnimSegment38;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment184;
HAnimSegment185 := THAnimSegmentNode.Create;
HAnimSegment185 := HAnimSegment96;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment185;
HAnimSegment186 := THAnimSegmentNode.Create;
HAnimSegment186 := HAnimSegment148;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment186;
HAnimSegment187 := THAnimSegmentNode.Create;
HAnimSegment187 := HAnimSegment151;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment187;
HAnimSegment188 := THAnimSegmentNode.Create;
HAnimSegment188 := HAnimSegment53;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment188;
HAnimSegment189 := THAnimSegmentNode.Create;
HAnimSegment189 := HAnimSegment78;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment189;
HAnimSegment190 := THAnimSegmentNode.Create;
HAnimSegment190 := HAnimSegment104;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment190;
HAnimSegment191 := THAnimSegmentNode.Create;
HAnimSegment191 := HAnimSegment129;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment191;
HAnimSegment192 := THAnimSegmentNode.Create;
HAnimSegment192 := HAnimSegment113;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment192;
HAnimSegment193 := THAnimSegmentNode.Create;
HAnimSegment193 := HAnimSegment138;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment193;
HAnimSegment194 := THAnimSegmentNode.Create;
HAnimSegment194 := HAnimSegment57;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment194;
HAnimSegment195 := THAnimSegmentNode.Create;
HAnimSegment195 := HAnimSegment82;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment195;
HAnimSegment196 := THAnimSegmentNode.Create;
HAnimSegment196 := HAnimSegment65;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment196;
HAnimSegment197 := THAnimSegmentNode.Create;
HAnimSegment197 := HAnimSegment90;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment197;
HAnimSegment198 := THAnimSegmentNode.Create;
HAnimSegment198 := HAnimSegment46;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment198;
HAnimSegment199 := THAnimSegmentNode.Create;
HAnimSegment199 := HAnimSegment71;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment199;
HAnimSegment200 := THAnimSegmentNode.Create;
HAnimSegment200 := HAnimSegment98;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment200;
HAnimSegment201 := THAnimSegmentNode.Create;
HAnimSegment201 := HAnimSegment123;
{ .AddSegments }
HAnimHumanoid29.Segments := HAnimSegment201;
HAnimSite202 := THAnimSiteNode.Create;
HAnimSite202 := HAnimSite154;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite202;
HAnimSite203 := THAnimSiteNode.Create;
HAnimSite203 := HAnimSite155;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite203;
HAnimSite204 := THAnimSiteNode.Create;
HAnimSite204 := HAnimSite158;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite204;
HAnimSite205 := THAnimSiteNode.Create;
HAnimSite205 := HAnimSite163;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite205;
HAnimSite206 := THAnimSiteNode.Create;
HAnimSite206 := HAnimSite63;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite206;
HAnimSite207 := THAnimSiteNode.Create;
HAnimSite207 := HAnimSite88;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite207;
HAnimSite208 := THAnimSiteNode.Create;
HAnimSite208 := HAnimSite119;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite208;
HAnimSite209 := THAnimSiteNode.Create;
HAnimSite209 := HAnimSite144;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite209;
HAnimSite210 := THAnimSiteNode.Create;
HAnimSite210 := HAnimSite69;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite210;
HAnimSite211 := THAnimSiteNode.Create;
HAnimSite211 := HAnimSite94;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite211;
HAnimSite212 := THAnimSiteNode.Create;
HAnimSite212 := HAnimSite50;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite212;
HAnimSite213 := THAnimSiteNode.Create;
HAnimSite213 := HAnimSite75;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite213;
HAnimSite214 := THAnimSiteNode.Create;
HAnimSite214 := HAnimSite51;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite214;
HAnimSite215 := THAnimSiteNode.Create;
HAnimSite215 := HAnimSite76;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite215;
HAnimSite216 := THAnimSiteNode.Create;
HAnimSite216 := HAnimSite160;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite216;
HAnimSite217 := THAnimSiteNode.Create;
HAnimSite217 := HAnimSite162;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite217;
HAnimSite218 := THAnimSiteNode.Create;
HAnimSite218 := HAnimSite117;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite218;
HAnimSite219 := THAnimSiteNode.Create;
HAnimSite219 := HAnimSite142;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite219;
HAnimSite220 := THAnimSiteNode.Create;
HAnimSite220 := HAnimSite102;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite220;
HAnimSite221 := THAnimSiteNode.Create;
HAnimSite221 := HAnimSite127;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite221;
HAnimSite222 := THAnimSiteNode.Create;
HAnimSite222 := HAnimSite110;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite222;
HAnimSite223 := THAnimSiteNode.Create;
HAnimSite223 := HAnimSite135;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite223;
HAnimSite224 := THAnimSiteNode.Create;
HAnimSite224 := HAnimSite156;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite224;
HAnimSite225 := THAnimSiteNode.Create;
HAnimSite225 := HAnimSite157;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite225;
HAnimSite226 := THAnimSiteNode.Create;
HAnimSite226 := HAnimSite49;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite226;
HAnimSite227 := THAnimSiteNode.Create;
HAnimSite227 := HAnimSite74;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite227;
HAnimSite228 := THAnimSiteNode.Create;
HAnimSite228 := HAnimSite60;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite228;
HAnimSite229 := THAnimSiteNode.Create;
HAnimSite229 := HAnimSite85;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite229;
HAnimSite230 := THAnimSiteNode.Create;
HAnimSite230 := HAnimSite61;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite230;
HAnimSite231 := THAnimSiteNode.Create;
HAnimSite231 := HAnimSite86;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite231;
HAnimSite232 := THAnimSiteNode.Create;
HAnimSite232 := HAnimSite118;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite232;
HAnimSite233 := THAnimSiteNode.Create;
HAnimSite233 := HAnimSite143;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite233;
HAnimSite234 := THAnimSiteNode.Create;
HAnimSite234 := HAnimSite121;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite234;
HAnimSite235 := THAnimSiteNode.Create;
HAnimSite235 := HAnimSite146;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite235;
HAnimSite236 := THAnimSiteNode.Create;
HAnimSite236 := HAnimSite68;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite236;
HAnimSite237 := THAnimSiteNode.Create;
HAnimSite237 := HAnimSite93;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite237;
HAnimSite238 := THAnimSiteNode.Create;
HAnimSite238 := HAnimSite67;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite238;
HAnimSite239 := THAnimSiteNode.Create;
HAnimSite239 := HAnimSite92;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite239;
HAnimSite240 := THAnimSiteNode.Create;
HAnimSite240 := HAnimSite66;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite240;
HAnimSite241 := THAnimSiteNode.Create;
HAnimSite241 := HAnimSite91;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite241;
HAnimSite242 := THAnimSiteNode.Create;
HAnimSite242 := HAnimSite109;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite242;
HAnimSite243 := THAnimSiteNode.Create;
HAnimSite243 := HAnimSite134;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite243;
HAnimSite244 := THAnimSiteNode.Create;
HAnimSite244 := HAnimSite108;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite244;
HAnimSite245 := THAnimSiteNode.Create;
HAnimSite245 := HAnimSite133;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite245;
HAnimSite246 := THAnimSiteNode.Create;
HAnimSite246 := HAnimSite111;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite246;
HAnimSite247 := THAnimSiteNode.Create;
HAnimSite247 := HAnimSite136;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite247;
HAnimSite248 := THAnimSiteNode.Create;
HAnimSite248 := HAnimSite62;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite248;
HAnimSite249 := THAnimSiteNode.Create;
HAnimSite249 := HAnimSite87;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite249;
HAnimSite250 := THAnimSiteNode.Create;
HAnimSite250 := HAnimSite159;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite250;
HAnimSite251 := THAnimSiteNode.Create;
HAnimSite251 := HAnimSite161;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite251;
HAnimSite252 := THAnimSiteNode.Create;
HAnimSite252 := HAnimSite120;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite252;
HAnimSite253 := THAnimSiteNode.Create;
HAnimSite253 := HAnimSite145;
{ .AddSites }
HAnimHumanoid29.Sites := HAnimSite253;
HAnimSite254 := THAnimSiteNode.Create;
HAnimSite254.NameField := 'DiamondManLOA_1_view';
Viewpoint255 := TViewpointNode.Create;
Viewpoint255.Description := 'Inclined View';
Viewpoint255.Position := Vector3(1.62,1.05,2.06);
Viewpoint255.Orientation := Vector4(-0.113,0.993,0.0347,0.671);
{ .AddChildren }
HAnimSite254.AddChildren([Viewpoint255]);
Viewpoint256 := TViewpointNode.Create;
Viewpoint256.Description := 'Front View';
Viewpoint256.Position := Vector3(0,0.854,2.57665);
{ .AddChildren }
HAnimSite254.AddChildren([Viewpoint256]);
Viewpoint257 := TViewpointNode.Create;
Viewpoint257.Description := 'Side View';
Viewpoint257.Position := Vector3(2.5929,0.854,0);
Viewpoint257.Orientation := Vector4(0,1,0,1.57079);
{ .AddChildren }
HAnimSite254.AddChildren([Viewpoint257]);
Viewpoint258 := TViewpointNode.Create;
Viewpoint258.Description := 'Top View';
Viewpoint258.Position := Vector3(0,3.4495,0);
Viewpoint258.Orientation := Vector4(1,0,0,-1.57079);
{ .AddChildren }
HAnimSite254.AddChildren([Viewpoint258]);
{ .SetViewpoints }
HAnimHumanoid29.Viewpoints := HAnimSite254;
{ .AddChildren }
Group25.AddChildren([HAnimHumanoid29]);
{ .AddGroup }
X3D0.AddChildren([Group25]);
Result := X3D0;
end;
