function DiamondManLOA1: TX3DRootNode;
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
HAnimJoint35: THAnimJointNode;
HAnimJoint36: THAnimJointNode;
HAnimSegment37: THAnimSegmentNode;
Transform38: TTransformNode;
Shape39: TShapeNode;
Appearance40: TAppearanceNode;
Material41: TMaterialNode;
IndexedFaceSet42: TIndexedFaceSetNode;
Coordinate43: TCoordinateNode;
HAnimJoint44: THAnimJointNode;
HAnimSegment45: THAnimSegmentNode;
Transform46: TTransformNode;
Shape47: TShapeNode;
HAnimSite48: THAnimSiteNode;
HAnimSite49: THAnimSiteNode;
HAnimSite50: THAnimSiteNode;
HAnimJoint51: THAnimJointNode;
HAnimSegment52: THAnimSegmentNode;
Transform53: TTransformNode;
Shape54: TShapeNode;
HAnimJoint55: THAnimJointNode;
HAnimSegment56: THAnimSegmentNode;
Transform57: TTransformNode;
Shape58: TShapeNode;
HAnimSite59: THAnimSiteNode;
HAnimSite60: THAnimSiteNode;
HAnimSite61: THAnimSiteNode;
HAnimSite62: THAnimSiteNode;
HAnimJoint63: THAnimJointNode;
HAnimSegment64: THAnimSegmentNode;
HAnimSite65: THAnimSiteNode;
HAnimSite66: THAnimSiteNode;
HAnimSite67: THAnimSiteNode;
HAnimSite68: THAnimSiteNode;
HAnimJoint69: THAnimJointNode;
HAnimSegment70: THAnimSegmentNode;
Transform71: TTransformNode;
Shape72: TShapeNode;
HAnimSite73: THAnimSiteNode;
HAnimSite74: THAnimSiteNode;
HAnimSite75: THAnimSiteNode;
HAnimJoint76: THAnimJointNode;
HAnimSegment77: THAnimSegmentNode;
Transform78: TTransformNode;
Shape79: TShapeNode;
HAnimJoint80: THAnimJointNode;
HAnimSegment81: THAnimSegmentNode;
Transform82: TTransformNode;
Shape83: TShapeNode;
HAnimSite84: THAnimSiteNode;
HAnimSite85: THAnimSiteNode;
HAnimSite86: THAnimSiteNode;
HAnimSite87: THAnimSiteNode;
HAnimJoint88: THAnimJointNode;
HAnimSegment89: THAnimSegmentNode;
HAnimSite90: THAnimSiteNode;
HAnimSite91: THAnimSiteNode;
HAnimSite92: THAnimSiteNode;
HAnimSite93: THAnimSiteNode;
HAnimJoint94: THAnimJointNode;
HAnimSegment95: THAnimSegmentNode;
HAnimJoint96: THAnimJointNode;
HAnimSegment97: THAnimSegmentNode;
Transform98: TTransformNode;
Shape99: TShapeNode;
Transform100: TTransformNode;
HAnimSite101: THAnimSiteNode;
HAnimJoint102: THAnimJointNode;
HAnimSegment103: THAnimSegmentNode;
Transform104: TTransformNode;
Shape105: TShapeNode;
Transform106: TTransformNode;
HAnimSite107: THAnimSiteNode;
HAnimSite108: THAnimSiteNode;
HAnimSite109: THAnimSiteNode;
HAnimSite110: THAnimSiteNode;
HAnimJoint111: THAnimJointNode;
HAnimSegment112: THAnimSegmentNode;
Transform113: TTransformNode;
Shape114: TShapeNode;
Transform115: TTransformNode;
HAnimSite116: THAnimSiteNode;
HAnimSite117: THAnimSiteNode;
HAnimSite118: THAnimSiteNode;
HAnimSite119: THAnimSiteNode;
HAnimSite120: THAnimSiteNode;
HAnimJoint121: THAnimJointNode;
HAnimSegment122: THAnimSegmentNode;
Transform123: TTransformNode;
Shape124: TShapeNode;
Transform125: TTransformNode;
HAnimSite126: THAnimSiteNode;
HAnimJoint127: THAnimJointNode;
HAnimSegment128: THAnimSegmentNode;
Transform129: TTransformNode;
Shape130: TShapeNode;
Transform131: TTransformNode;
HAnimSite132: THAnimSiteNode;
HAnimSite133: THAnimSiteNode;
HAnimSite134: THAnimSiteNode;
HAnimSite135: THAnimSiteNode;
HAnimJoint136: THAnimJointNode;
HAnimSegment137: THAnimSegmentNode;
Transform138: TTransformNode;
Shape139: TShapeNode;
Transform140: TTransformNode;
HAnimSite141: THAnimSiteNode;
HAnimSite142: THAnimSiteNode;
HAnimSite143: THAnimSiteNode;
HAnimSite144: THAnimSiteNode;
HAnimSite145: THAnimSiteNode;
HAnimJoint146: THAnimJointNode;
HAnimSegment147: THAnimSegmentNode;
HAnimJoint148: THAnimJointNode;
HAnimJoint149: THAnimJointNode;
HAnimSegment150: THAnimSegmentNode;
Transform151: TTransformNode;
Shape152: TShapeNode;
HAnimSite153: THAnimSiteNode;
HAnimSite154: THAnimSiteNode;
HAnimSite155: THAnimSiteNode;
HAnimSite156: THAnimSiteNode;
HAnimSite157: THAnimSiteNode;
HAnimSite158: THAnimSiteNode;
HAnimSite159: THAnimSiteNode;
HAnimSite160: THAnimSiteNode;
HAnimSite161: THAnimSiteNode;
HAnimSite162: THAnimSiteNode;
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
HAnimSegment183: THAnimSegmentNode;
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
HAnimSite201: THAnimSiteNode;
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
Viewpoint254: TViewpointNode;
Viewpoint255: TViewpointNode;
Viewpoint256: TViewpointNode;
Viewpoint257: TViewpointNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'DiamondManLOA1.x3d';
X3D0.Meta['description'] := 'HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers, also includes HAnimSite feaature points. LOA-1 is typical low-end real-time 3D hierarchy.';
X3D0.Meta['creator'] := 'Matthew T. Beitler';
X3D0.Meta['translator'] := 'Joel S. Pawloski';
X3D0.Meta['created'] := '12 November 2001';
X3D0.Meta['modified'] := 'Mon, 15 Sep 2025 05:18:46 GMT';
X3D0.Meta['Image'] := 'images/BonesAllSkeletonFrontViewLOA1.png';
X3D0.Meta['Image'] := 'humanoid_landmark_locations.gif';
X3D0.Meta['Image'] := 'http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif';
X3D0.Meta['motto'] := '(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"';
X3D0.Meta['warning'] := 'Still needs comments on CAESAR feature points inserted';
X3D0.Meta['reference'] := 'HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two';
X3D0.Meta['reference'] := 'http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa';
X3D0.Meta['reference'] := 'http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl';
X3D0.Meta['reference'] := 'http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl';
X3D0.Meta['reference'] := 'http://ece.uwaterloo.ca/~HAnim';
X3D0.Meta['reference'] := 'http://www.cis.upenn.edu/~badler/anthro/89-71.pdf';
X3D0.Meta['reference'] := 'http://www.cis.upenn.edu/~badler/anthro/89-71.ps';
X3D0.Meta['reference'] := 'http://www.cis.upenn.edu/~beitler';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit';
Group24 := TGroupNode.Create;
WorldInfo25 := TWorldInfoNode.Create;
WorldInfo25.Title := 'HANIM 1.1 Default Joint Centers, LOA1';
WorldInfo25.SetInfo(['HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf']);
{ .AddChildren }
Group24.AddChildren([WorldInfo25]);
NavigationInfo26 := TNavigationInfoNode.Create;
NavigationInfo26.Speed := 1.5;
{ .AddChildren }
Group24.AddChildren([NavigationInfo26]);
Viewpoint27 := TViewpointNode.Create;
Viewpoint27.Description := 'Diamond Man, LOA 1';
Viewpoint27.Position := Vector3(0,1,3);
Viewpoint27.CenterOfRotation := Vector3(0,1,0);
{ .AddChildren }
Group24.AddChildren([Viewpoint27]);
HAnimHumanoid28 := THAnimHumanoidNode.Create;
HAnimHumanoid28.NameField := 'humanoid';
HAnimHumanoid28.Loa := 1;
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
MetadataString33.NameField := 'humanoidVersion';
{ .SetValue }
MetadataSet29.Value := MetadataString33;
MetadataString34 := TMetadataStringNode.Create;
MetadataString34.NameField := 'usageRestrictions';
{ .SetValue }
MetadataSet29.Value := MetadataString34;
{ .SetMetadata }
HAnimHumanoid28.Metadata := MetadataSet29;
HAnimJoint35 := THAnimJointNode.Create;
HAnimJoint35.NameField := 'humanoid_root';
HAnimJoint35.Center := Vector3(0,0.824,0.0277);
HAnimJoint36 := THAnimJointNode.Create;
HAnimJoint36.NameField := 'sacroiliac';
HAnimJoint36.Center := Vector3(0,0.9149,0.0016);
HAnimSegment37 := THAnimSegmentNode.Create;
HAnimSegment37.NameField := 'pelvis';
Transform38 := TTransformNode.Create;
Transform38.Translation := Vector3(0,0.9149,0.0016);
Shape39 := TShapeNode.Create;
Appearance40 := TAppearanceNode.Create;
Material41 := TMaterialNode.Create;
Material41.DiffuseColor := Vector3(1,1,0);
{ .SetMaterial }
Appearance40.Material := Material41;
{ .SetAppearance }
Shape39.Appearance := Appearance40;
IndexedFaceSet42 := TIndexedFaceSetNode.Create;
IndexedFaceSet42.CreaseAngle := 0.5;
IndexedFaceSet42.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate43 := TCoordinateNode.Create;
Coordinate43.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ .SetCoord }
IndexedFaceSet42.Coord := Coordinate43;
{ .SetGeometry }
Shape39.Geometry := IndexedFaceSet42;
{ .AddChild }
Transform38.AddChildren([Shape39]);
{ .AddChildren }
HAnimSegment37.AddChildren([Transform38]);
{ .AddChildren }
HAnimJoint36.AddChildren([HAnimSegment37]);
HAnimJoint44 := THAnimJointNode.Create;
HAnimJoint44.NameField := 'l_hip';
HAnimJoint44.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimSegment45 := THAnimSegmentNode.Create;
HAnimSegment45.NameField := 'l_thigh';
Transform46 := TTransformNode.Create;
Transform46.Translation := Vector3(0.0961,0.9124,-0.0001);
Shape47 := TShapeNode.Create;
Shape47 := Shape39;
{ .AddChild }
Transform46.AddChildren([Shape47]);
{ .AddChildren }
HAnimSegment45.AddChildren([Transform46]);
HAnimSite48 := THAnimSiteNode.Create;
HAnimSite48.NameField := 'l_knee_crease_pt';
HAnimSite48.Translation := Vector3(0.0993,0.4881,-0.0309);
{ .AddChildren }
HAnimSegment45.AddChildren([HAnimSite48]);
HAnimSite49 := THAnimSiteNode.Create;
HAnimSite49.NameField := 'l_femoral_lateral_epicondyle_pt';
HAnimSite49.Translation := Vector3(0.1598,0.4967,0.0297);
{ .AddChildren }
HAnimSegment45.AddChildren([HAnimSite49]);
HAnimSite50 := THAnimSiteNode.Create;
HAnimSite50.NameField := 'l_femoral_medial_epicondyle_pt';
HAnimSite50.Translation := Vector3(0.0398,0.4946,0.0303);
{ .AddChildren }
HAnimSegment45.AddChildren([HAnimSite50]);
{ .AddChildren }
HAnimJoint44.AddChildren([HAnimSegment45]);
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.NameField := 'l_knee';
HAnimJoint51.Center := Vector3(0.104,0.4867,0.0308);
HAnimSegment52 := THAnimSegmentNode.Create;
HAnimSegment52.NameField := 'l_calf';
Transform53 := TTransformNode.Create;
Transform53.Translation := Vector3(0.104,0.4867,0.0308);
Shape54 := TShapeNode.Create;
Shape54 := Shape39;
{ .AddChild }
Transform53.AddChildren([Shape54]);
{ .AddChildren }
HAnimSegment52.AddChildren([Transform53]);
{ .AddChildren }
HAnimJoint51.AddChildren([HAnimSegment52]);
HAnimJoint55 := THAnimJointNode.Create;
HAnimJoint55.NameField := 'l_talocrural';
HAnimJoint55.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimSegment56 := THAnimSegmentNode.Create;
HAnimSegment56.NameField := 'l_talus';
Transform57 := TTransformNode.Create;
Transform57.Translation := Vector3(0.1101,0.0656,-0.0736);
Shape58 := TShapeNode.Create;
Shape58 := Shape39;
{ .AddChild }
Transform57.AddChildren([Shape58]);
{ .AddChildren }
HAnimSegment56.AddChildren([Transform57]);
HAnimSite59 := THAnimSiteNode.Create;
HAnimSite59.NameField := 'l_lateral_malleolus_pt';
HAnimSite59.Translation := Vector3(0.1308,0.0597,-0.1032);
{ .AddChildren }
HAnimSegment56.AddChildren([HAnimSite59]);
HAnimSite60 := THAnimSiteNode.Create;
HAnimSite60.NameField := 'l_medial_malleolus_pt';
HAnimSite60.Translation := Vector3(0.089,0.0716,-0.0881);
{ .AddChildren }
HAnimSegment56.AddChildren([HAnimSite60]);
HAnimSite61 := THAnimSiteNode.Create;
HAnimSite61.NameField := 'l_sphyrion_pt';
HAnimSite61.Translation := Vector3(0.089,0.0575,-0.0943);
{ .AddChildren }
HAnimSegment56.AddChildren([HAnimSite61]);
HAnimSite62 := THAnimSiteNode.Create;
HAnimSite62.NameField := 'l_calcaneus_posterior_pt';
HAnimSite62.Translation := Vector3(0.0974,0.0259,-0.1171);
{ .AddChildren }
HAnimSegment56.AddChildren([HAnimSite62]);
{ .AddChildren }
HAnimJoint55.AddChildren([HAnimSegment56]);
HAnimJoint63 := THAnimJointNode.Create;
HAnimJoint63.NameField := 'l_metatarsophalangeal_2';
HAnimJoint63.Center := Vector3(0.1086,0.0001,0.0368);
HAnimSegment64 := THAnimSegmentNode.Create;
HAnimSegment64.NameField := 'l_tarsal_proximal_phalanx_2';
HAnimSite65 := THAnimSiteNode.Create;
HAnimSite65.NameField := 'l_middistal_tip';
HAnimSite65.Translation := Vector3(0.1354,0.0016,0.1476);
{ .AddChildren }
HAnimSegment64.AddChildren([HAnimSite65]);
HAnimSite66 := THAnimSiteNode.Create;
HAnimSite66.NameField := 'l_metatarsal_phalanx_5_pt';
HAnimSite66.Translation := Vector3(0.1825,0.007,0.0928);
{ .AddChildren }
HAnimSegment64.AddChildren([HAnimSite66]);
HAnimSite67 := THAnimSiteNode.Create;
HAnimSite67.NameField := 'l_metatarsal_phalanx_1_pt';
HAnimSite67.Translation := Vector3(0.0816,0.0232,0.0106);
{ .AddChildren }
HAnimSegment64.AddChildren([HAnimSite67]);
HAnimSite68 := THAnimSiteNode.Create;
HAnimSite68.NameField := 'l_tarsal_distal_phalanx_2_pt';
HAnimSite68.Translation := Vector3(0.1195,0.0079,0.1433);
{ .AddChildren }
HAnimSegment64.AddChildren([HAnimSite68]);
{ .AddChildren }
HAnimJoint63.AddChildren([HAnimSegment64]);
{ .AddChildren }
HAnimJoint55.AddChildren([HAnimJoint63]);
{ .AddChildren }
HAnimJoint51.AddChildren([HAnimJoint55]);
{ .AddChildren }
HAnimJoint44.AddChildren([HAnimJoint51]);
{ .AddChildren }
HAnimJoint36.AddChildren([HAnimJoint44]);
HAnimJoint69 := THAnimJointNode.Create;
HAnimJoint69.NameField := 'r_hip';
HAnimJoint69.Center := Vector3(-0.095,0.9171,0.0029);
HAnimSegment70 := THAnimSegmentNode.Create;
HAnimSegment70.NameField := 'r_thigh';
Transform71 := TTransformNode.Create;
Transform71.Translation := Vector3(-0.095,0.9171,0.0029);
Shape72 := TShapeNode.Create;
Shape72 := Shape39;
{ .AddChild }
Transform71.AddChildren([Shape72]);
{ .AddChildren }
HAnimSegment70.AddChildren([Transform71]);
HAnimSite73 := THAnimSiteNode.Create;
HAnimSite73.NameField := 'r_knee_crease_pt';
HAnimSite73.Translation := Vector3(-0.0825,0.4932,-0.0326);
{ .AddChildren }
HAnimSegment70.AddChildren([HAnimSite73]);
HAnimSite74 := THAnimSiteNode.Create;
HAnimSite74.NameField := 'r_femoral_lateral_epicondyle_pt';
HAnimSite74.Translation := Vector3(-0.1421,0.4992,0.031);
{ .AddChildren }
HAnimSegment70.AddChildren([HAnimSite74]);
HAnimSite75 := THAnimSiteNode.Create;
HAnimSite75.NameField := 'r_femoral_medial_epicondyle_pt';
HAnimSite75.Translation := Vector3(-0.0221,0.5014,0.0289);
{ .AddChildren }
HAnimSegment70.AddChildren([HAnimSite75]);
{ .AddChildren }
HAnimJoint69.AddChildren([HAnimSegment70]);
HAnimJoint76 := THAnimJointNode.Create;
HAnimJoint76.NameField := 'r_knee';
HAnimJoint76.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimSegment77 := THAnimSegmentNode.Create;
HAnimSegment77.NameField := 'r_calf';
Transform78 := TTransformNode.Create;
Transform78.Translation := Vector3(-0.0867,0.4913,0.0318);
Shape79 := TShapeNode.Create;
Shape79 := Shape39;
{ .AddChild }
Transform78.AddChildren([Shape79]);
{ .AddChildren }
HAnimSegment77.AddChildren([Transform78]);
{ .AddChildren }
HAnimJoint76.AddChildren([HAnimSegment77]);
HAnimJoint80 := THAnimJointNode.Create;
HAnimJoint80.NameField := 'r_talocrural';
HAnimJoint80.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimSegment81 := THAnimSegmentNode.Create;
HAnimSegment81.NameField := 'r_talus';
Transform82 := TTransformNode.Create;
Transform82.Translation := Vector3(-0.0801,0.0712,-0.0766);
Shape83 := TShapeNode.Create;
Shape83 := Shape39;
{ .AddChild }
Transform82.AddChildren([Shape83]);
{ .AddChildren }
HAnimSegment81.AddChildren([Transform82]);
HAnimSite84 := THAnimSiteNode.Create;
HAnimSite84.NameField := 'r_lateral_malleolus_pt';
HAnimSite84.Translation := Vector3(-0.1006,0.0658,-0.1075);
{ .AddChildren }
HAnimSegment81.AddChildren([HAnimSite84]);
HAnimSite85 := THAnimSiteNode.Create;
HAnimSite85.NameField := 'r_medial_malleolus_pt';
HAnimSite85.Translation := Vector3(-0.0591,0.076,-0.0928);
{ .AddChildren }
HAnimSegment81.AddChildren([HAnimSite85]);
HAnimSite86 := THAnimSiteNode.Create;
HAnimSite86.NameField := 'r_sphyrion_pt';
HAnimSite86.Translation := Vector3(-0.0603,0.061,-0.1002);
{ .AddChildren }
HAnimSegment81.AddChildren([HAnimSite86]);
HAnimSite87 := THAnimSiteNode.Create;
HAnimSite87.NameField := 'r_calcaneus_posterior_pt';
HAnimSite87.Translation := Vector3(-0.0692,0.0297,-0.1221);
{ .AddChildren }
HAnimSegment81.AddChildren([HAnimSite87]);
{ .AddChildren }
HAnimJoint80.AddChildren([HAnimSegment81]);
HAnimJoint88 := THAnimJointNode.Create;
HAnimJoint88.NameField := 'r_metatarsophalangeal_2';
HAnimJoint88.Center := Vector3(-0.0801,0,0.0368);
HAnimSegment89 := THAnimSegmentNode.Create;
HAnimSegment89.NameField := 'r_tarsal_proximal_phalanx_2';
HAnimSite90 := THAnimSiteNode.Create;
HAnimSite90.NameField := 'r_middistal_tip';
HAnimSite90.Translation := Vector3(-0.1043,-0.0227,0.145);
{ .AddChildren }
HAnimSegment89.AddChildren([HAnimSite90]);
HAnimSite91 := THAnimSiteNode.Create;
HAnimSite91.NameField := 'r_metatarsal_phalanx_5_pt';
HAnimSite91.Translation := Vector3(-0.1523,0.0166,0.0895);
{ .AddChildren }
HAnimSegment89.AddChildren([HAnimSite91]);
HAnimSite92 := THAnimSiteNode.Create;
HAnimSite92.NameField := 'r_metatarsal_phalanx_1_pt';
HAnimSite92.Translation := Vector3(-0.0521,0.026,0.0127);
{ .AddChildren }
HAnimSegment89.AddChildren([HAnimSite92]);
HAnimSite93 := THAnimSiteNode.Create;
HAnimSite93.NameField := 'r_tarsal_distal_phalanx_2_pt';
HAnimSite93.Translation := Vector3(-0.0883,0.0134,0.1383);
{ .AddChildren }
HAnimSegment89.AddChildren([HAnimSite93]);
{ .AddChildren }
HAnimJoint88.AddChildren([HAnimSegment89]);
{ .AddChildren }
HAnimJoint80.AddChildren([HAnimJoint88]);
{ .AddChildren }
HAnimJoint76.AddChildren([HAnimJoint80]);
{ .AddChildren }
HAnimJoint69.AddChildren([HAnimJoint76]);
{ .AddChildren }
HAnimJoint36.AddChildren([HAnimJoint69]);
{ .AddChildren }
HAnimJoint35.AddChildren([HAnimJoint36]);
HAnimJoint94 := THAnimJointNode.Create;
HAnimJoint94.NameField := 'vl1';
HAnimJoint94.Center := Vector3(-0.00405,1.07,-0.0275);
HAnimSegment95 := THAnimSegmentNode.Create;
HAnimSegment95.NameField := 'l1';
{ .AddChildren }
HAnimJoint94.AddChildren([HAnimSegment95]);
HAnimJoint96 := THAnimJointNode.Create;
HAnimJoint96.NameField := 'l_shoulder';
HAnimJoint96.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimSegment97 := THAnimSegmentNode.Create;
HAnimSegment97.NameField := 'l_upperarm';
Transform98 := TTransformNode.Create;
Transform98.Translation := Vector3(0.2029,1.4376,-0.0387);
Shape99 := TShapeNode.Create;
Shape99 := Shape39;
{ .AddChild }
Transform98.AddChildren([Shape99]);
{ .AddChildren }
HAnimSegment97.AddChildren([Transform98]);
Transform100 := TTransformNode.Create;
Transform100.Translation := Vector3(0.2029,1.4376,-0.0387);
Transform100.Rotation := Vector4(1,0,0,0.119);
Transform100.Center := Vector3(0.182,1.22,-0.047);
{ .AddChildren }
HAnimSegment97.AddChildren([Transform100]);
HAnimSite101 := THAnimSiteNode.Create;
HAnimSite101.NameField := 'l_humeral_lateral_epicondyle_pt';
HAnimSite101.Translation := Vector3(0.228,1.1482,-0.11);
{ .AddChildren }
HAnimSegment97.AddChildren([HAnimSite101]);
{ .AddChildren }
HAnimJoint96.AddChildren([HAnimSegment97]);
HAnimJoint102 := THAnimJointNode.Create;
HAnimJoint102.NameField := 'l_elbow';
HAnimJoint102.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimSegment103 := THAnimSegmentNode.Create;
HAnimSegment103.NameField := 'l_forearm';
Transform104 := TTransformNode.Create;
Transform104.Translation := Vector3(0.2014,1.1357,-0.0682);
Shape105 := TShapeNode.Create;
Shape105 := Shape39;
{ .AddChild }
Transform104.AddChildren([Shape105]);
{ .AddChildren }
HAnimSegment103.AddChildren([Transform104]);
Transform106 := TTransformNode.Create;
Transform106.Translation := Vector3(0.2014,1.1357,-0.0682);
Transform106.Rotation := Vector4(-1,0,0,0.1);
Transform106.Center := Vector3(0.198,0.961,-0.0405);
{ .AddChildren }
HAnimSegment103.AddChildren([Transform106]);
HAnimSite107 := THAnimSiteNode.Create;
HAnimSite107.NameField := 'l_radial_styloid_pt';
HAnimSite107.Translation := Vector3(0.1901,0.8645,-0.0415);
{ .AddChildren }
HAnimSegment103.AddChildren([HAnimSite107]);
HAnimSite108 := THAnimSiteNode.Create;
HAnimSite108.NameField := 'l_olecranon_pt';
HAnimSite108.Translation := Vector3(-0.1962,1.1375,-0.1123);
{ .AddChildren }
HAnimSegment103.AddChildren([HAnimSite108]);
HAnimSite109 := THAnimSiteNode.Create;
HAnimSite109.NameField := 'l_humeral_medial_epicondyle_pt';
HAnimSite109.Translation := Vector3(0.1735,1.1272,-0.1113);
{ .AddChildren }
HAnimSegment103.AddChildren([HAnimSite109]);
HAnimSite110 := THAnimSiteNode.Create;
HAnimSite110.NameField := 'l_radiale_pt';
HAnimSite110.Translation := Vector3(0.2182,1.1212,-0.1167);
{ .AddChildren }
HAnimSegment103.AddChildren([HAnimSite110]);
{ .AddChildren }
HAnimJoint102.AddChildren([HAnimSegment103]);
HAnimJoint111 := THAnimJointNode.Create;
HAnimJoint111.NameField := 'l_radiocarpal';
HAnimJoint111.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimSegment112 := THAnimSegmentNode.Create;
HAnimSegment112.NameField := 'l_carpal';
Transform113 := TTransformNode.Create;
Transform113.Translation := Vector3(0.1984,0.8663,-0.0583);
Shape114 := TShapeNode.Create;
Shape114 := Shape39;
{ .AddChild }
Transform113.AddChildren([Shape114]);
{ .AddChildren }
HAnimSegment112.AddChildren([Transform113]);
Transform115 := TTransformNode.Create;
Transform115.Translation := Vector3(0.1984,0.8663,-0.0583);
Transform115.Rotation := Vector4(-0.06361,-0.9967,0.04988,1.333);
Transform115.Center := Vector3(0.213,0.811,-0.0338);
{ .AddChildren }
HAnimSegment112.AddChildren([Transform115]);
HAnimSite116 := THAnimSiteNode.Create;
HAnimSite116.NameField := 'l_hand_tip';
HAnimSite116.Translation := Vector3(0.208,0.6731,-0.0491);
{ .AddChildren }
HAnimSegment112.AddChildren([HAnimSite116]);
HAnimSite117 := THAnimSiteNode.Create;
HAnimSite117.NameField := 'l_metacarpal_phalanx_2_pt';
HAnimSite117.Translation := Vector3(0.2009,0.8139,-0.0237);
{ .AddChildren }
HAnimSegment112.AddChildren([HAnimSite117]);
HAnimSite118 := THAnimSiteNode.Create;
HAnimSite118.NameField := 'l_dactylion_pt';
HAnimSite118.Translation := Vector3(0.2056,0.6743,-0.0482);
{ .AddChildren }
HAnimSegment112.AddChildren([HAnimSite118]);
HAnimSite119 := THAnimSiteNode.Create;
HAnimSite119.NameField := 'l_ulnar_styloid_pt';
HAnimSite119.Translation := Vector3(-0.2142,0.8529,-0.0648);
{ .AddChildren }
HAnimSegment112.AddChildren([HAnimSite119]);
HAnimSite120 := THAnimSiteNode.Create;
HAnimSite120.NameField := 'l_metacarpal_phalanx_5_pt';
HAnimSite120.Translation := Vector3(0.1929,0.786,-0.1122);
{ .AddChildren }
HAnimSegment112.AddChildren([HAnimSite120]);
{ .AddChildren }
HAnimJoint111.AddChildren([HAnimSegment112]);
{ .AddChildren }
HAnimJoint102.AddChildren([HAnimJoint111]);
{ .AddChildren }
HAnimJoint96.AddChildren([HAnimJoint102]);
{ .AddChildren }
HAnimJoint94.AddChildren([HAnimJoint96]);
HAnimJoint121 := THAnimJointNode.Create;
HAnimJoint121.NameField := 'r_shoulder';
HAnimJoint121.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimSegment122 := THAnimSegmentNode.Create;
HAnimSegment122.NameField := 'r_upperarm';
Transform123 := TTransformNode.Create;
Transform123.Translation := Vector3(-0.1907,1.4407,-0.0325);
Shape124 := TShapeNode.Create;
Shape124 := Shape39;
{ .AddChild }
Transform123.AddChildren([Shape124]);
{ .AddChildren }
HAnimSegment122.AddChildren([Transform123]);
Transform125 := TTransformNode.Create;
Transform125.Translation := Vector3(-0.1907,1.4407,-0.0325);
Transform125.Rotation := Vector4(1,0,0,0.0836);
Transform125.Center := Vector3(-0.182,1.22,-0.047);
{ .AddChildren }
HAnimSegment122.AddChildren([Transform125]);
HAnimSite126 := THAnimSiteNode.Create;
HAnimSite126.NameField := 'r_humeral_lateral_epicondyle_pt';
HAnimSite126.Translation := Vector3(-0.2224,1.1517,-0.1033);
{ .AddChildren }
HAnimSegment122.AddChildren([HAnimSite126]);
{ .AddChildren }
HAnimJoint121.AddChildren([HAnimSegment122]);
HAnimJoint127 := THAnimJointNode.Create;
HAnimJoint127.NameField := 'r_elbow';
HAnimJoint127.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimSegment128 := THAnimSegmentNode.Create;
HAnimSegment128.NameField := 'r_forearm';
Transform129 := TTransformNode.Create;
Transform129.Translation := Vector3(-0.1949,1.1388,-0.062);
Shape130 := TShapeNode.Create;
Shape130 := Shape39;
{ .AddChild }
Transform129.AddChildren([Shape130]);
{ .AddChildren }
HAnimSegment128.AddChildren([Transform129]);
Transform131 := TTransformNode.Create;
Transform131.Translation := Vector3(-0.1949,1.1388,-0.062);
Transform131.Rotation := Vector4(-1,0,0,0.1254);
Transform131.Center := Vector3(-0.198,0.961,-0.0397);
{ .AddChildren }
HAnimSegment128.AddChildren([Transform131]);
HAnimSite132 := THAnimSiteNode.Create;
HAnimSite132.NameField := 'r_radial_styloid_pt';
HAnimSite132.Translation := Vector3(-0.1884,0.8676,-0.036);
{ .AddChildren }
HAnimSegment128.AddChildren([HAnimSite132]);
HAnimSite133 := THAnimSiteNode.Create;
HAnimSite133.NameField := 'r_olecranon_pt';
HAnimSite133.Translation := Vector3(-0.1907,1.1405,-0.1065);
{ .AddChildren }
HAnimSegment128.AddChildren([HAnimSite133]);
HAnimSite134 := THAnimSiteNode.Create;
HAnimSite134.NameField := 'r_humeral_medial_epicondyle_pt';
HAnimSite134.Translation := Vector3(-0.168,1.1298,-0.1062);
{ .AddChildren }
HAnimSegment128.AddChildren([HAnimSite134]);
HAnimSite135 := THAnimSiteNode.Create;
HAnimSite135.NameField := 'r_radiale_pt';
HAnimSite135.Translation := Vector3(-0.213,1.1305,-0.1091);
{ .AddChildren }
HAnimSegment128.AddChildren([HAnimSite135]);
{ .AddChildren }
HAnimJoint127.AddChildren([HAnimSegment128]);
HAnimJoint136 := THAnimJointNode.Create;
HAnimJoint136.NameField := 'r_radiocarpal';
HAnimJoint136.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimSegment137 := THAnimSegmentNode.Create;
HAnimSegment137.NameField := 'r_carpal';
Transform138 := TTransformNode.Create;
Transform138.Translation := Vector3(-0.1959,0.8694,-0.0521);
Shape139 := TShapeNode.Create;
Shape139 := Shape39;
{ .AddChild }
Transform138.AddChildren([Shape139]);
{ .AddChildren }
HAnimSegment137.AddChildren([Transform138]);
Transform140 := TTransformNode.Create;
Transform140.Rotation := Vector4(-0.09024,0.994,-0.0624,1.216);
Transform140.Center := Vector3(-0.217,0.811,-0.0338);
{ .AddChildren }
HAnimSegment137.AddChildren([Transform140]);
HAnimSite141 := THAnimSiteNode.Create;
HAnimSite141.NameField := 'r_hand_tip';
HAnimSite141.Translation := Vector3(-0.1969,0.6758,-0.0427);
{ .AddChildren }
HAnimSegment137.AddChildren([HAnimSite141]);
HAnimSite142 := THAnimSiteNode.Create;
HAnimSite142.NameField := 'r_metacarpal_phalanx_2_pt';
HAnimSite142.Translation := Vector3(-0.1977,0.8169,-0.0177);
{ .AddChildren }
HAnimSegment137.AddChildren([HAnimSite142]);
HAnimSite143 := THAnimSiteNode.Create;
HAnimSite143.NameField := 'r_dactylion_pt';
HAnimSite143.Translation := Vector3(-0.1941,0.6772,-0.0423);
{ .AddChildren }
HAnimSegment137.AddChildren([HAnimSite143]);
HAnimSite144 := THAnimSiteNode.Create;
HAnimSite144.NameField := 'r_ulnar_styloid_pt';
HAnimSite144.Translation := Vector3(-0.2117,0.8562,-0.0584);
{ .AddChildren }
HAnimSegment137.AddChildren([HAnimSite144]);
HAnimSite145 := THAnimSiteNode.Create;
HAnimSite145.NameField := 'r_metacarpal_phalanx_5_pt';
HAnimSite145.Translation := Vector3(-0.1929,0.789,-0.1064);
{ .AddChildren }
HAnimSegment137.AddChildren([HAnimSite145]);
{ .AddChildren }
HAnimJoint136.AddChildren([HAnimSegment137]);
{ .AddChildren }
HAnimJoint127.AddChildren([HAnimJoint136]);
{ .AddChildren }
HAnimJoint121.AddChildren([HAnimJoint127]);
{ .AddChildren }
HAnimJoint94.AddChildren([HAnimJoint121]);
HAnimJoint146 := THAnimJointNode.Create;
HAnimJoint146.NameField := 'vc4';
HAnimJoint146.Center := Vector3(0,1.43,-0.0458);
HAnimSegment147 := THAnimSegmentNode.Create;
HAnimSegment147.NameField := 'c4';
{ .AddChildren }
HAnimJoint146.AddChildren([HAnimSegment147]);
{ .AddChildren }
HAnimJoint94.AddChildren([HAnimJoint146]);
{ .AddChildren }
HAnimJoint35.AddChildren([HAnimJoint94]);
HAnimJoint148 := THAnimJointNode.Create;
HAnimJoint148.NameField := 'vl5';
HAnimJoint148.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimJoint149 := THAnimJointNode.Create;
HAnimJoint149.NameField := 'skullbase';
HAnimJoint149.Center := Vector3(0.0044,1.6209,0.0236);
HAnimSegment150 := THAnimSegmentNode.Create;
HAnimSegment150.NameField := 'skull';
Transform151 := TTransformNode.Create;
Transform151.Translation := Vector3(0.0044,1.6209,0.0236);
Shape152 := TShapeNode.Create;
Shape152 := Shape39;
{ .AddChild }
Transform151.AddChildren([Shape152]);
{ .AddChildren }
HAnimSegment150.AddChildren([Transform151]);
HAnimSite153 := THAnimSiteNode.Create;
HAnimSite153.NameField := 'skull_vertex_tip';
HAnimSite153.Translation := Vector3(0.005,1.7504,0.0055);
{ .AddChildren }
HAnimSegment150.AddChildren([HAnimSite153]);
HAnimSite154 := THAnimSiteNode.Create;
HAnimSite154.NameField := 'sellion_pt';
HAnimSite154.Translation := Vector3(0.0058,1.6316,0.0852);
{ .AddChildren }
HAnimSegment150.AddChildren([HAnimSite154]);
HAnimSite155 := THAnimSiteNode.Create;
HAnimSite155.NameField := 'r_infraorbitale_pt';
HAnimSite155.Translation := Vector3(-0.0237,1.6171,0.0752);
{ .AddChildren }
HAnimSegment150.AddChildren([HAnimSite155]);
HAnimSite156 := THAnimSiteNode.Create;
HAnimSite156.NameField := 'l_infraorbitale_pt';
HAnimSite156.Translation := Vector3(0.0341,1.6171,0.0752);
{ .AddChildren }
HAnimSegment150.AddChildren([HAnimSite156]);
HAnimSite157 := THAnimSiteNode.Create;
HAnimSite157.NameField := 'supramenton_pt';
HAnimSite157.Translation := Vector3(0.0061,1.541,0.0805);
{ .AddChildren }
HAnimSegment150.AddChildren([HAnimSite157]);
HAnimSite158 := THAnimSiteNode.Create;
HAnimSite158.NameField := 'r_tragion_pt';
HAnimSite158.Translation := Vector3(-0.0646,1.6347,0.0302);
{ .AddChildren }
HAnimSegment150.AddChildren([HAnimSite158]);
HAnimSite159 := THAnimSiteNode.Create;
HAnimSite159.NameField := 'r_gonion_pt';
HAnimSite159.Translation := Vector3(-0.052,1.5529,0.0347);
{ .AddChildren }
HAnimSegment150.AddChildren([HAnimSite159]);
HAnimSite160 := THAnimSiteNode.Create;
HAnimSite160.NameField := 'l_tragion_pt';
HAnimSite160.Translation := Vector3(0.0739,1.6348,0.0282);
{ .AddChildren }
HAnimSegment150.AddChildren([HAnimSite160]);
HAnimSite161 := THAnimSiteNode.Create;
HAnimSite161.NameField := 'l_gonion_pt';
HAnimSite161.Translation := Vector3(0.0631,1.553,0.033);
{ .AddChildren }
HAnimSegment150.AddChildren([HAnimSite161]);
HAnimSite162 := THAnimSiteNode.Create;
HAnimSite162.NameField := 'nuchale_pt';
HAnimSite162.Translation := Vector3(0.0039,1.5972,-0.0796);
{ .AddChildren }
HAnimSegment150.AddChildren([HAnimSite162]);
{ .AddChildren }
HAnimJoint149.AddChildren([HAnimSegment150]);
{ .AddChildren }
HAnimJoint148.AddChildren([HAnimJoint149]);
{ .AddChildren }
HAnimJoint35.AddChildren([HAnimJoint148]);
{ .AddSkeleton }
HAnimHumanoid28.SetSkeleton([HAnimJoint35]);
HAnimJoint163 := THAnimJointNode.Create;
HAnimJoint163 := HAnimJoint35;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint163;
HAnimJoint164 := THAnimJointNode.Create;
HAnimJoint164 := HAnimJoint36;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint164;
HAnimJoint165 := THAnimJointNode.Create;
HAnimJoint165 := HAnimJoint94;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint165;
HAnimJoint166 := THAnimJointNode.Create;
HAnimJoint166 := HAnimJoint146;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint166;
HAnimJoint167 := THAnimJointNode.Create;
HAnimJoint167 := HAnimJoint149;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint167;
HAnimJoint168 := THAnimJointNode.Create;
HAnimJoint168 := HAnimJoint148;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint168;
HAnimJoint169 := THAnimJointNode.Create;
HAnimJoint169 := HAnimJoint102;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint169;
HAnimJoint170 := THAnimJointNode.Create;
HAnimJoint170 := HAnimJoint127;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint170;
HAnimJoint171 := THAnimJointNode.Create;
HAnimJoint171 := HAnimJoint44;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint171;
HAnimJoint172 := THAnimJointNode.Create;
HAnimJoint172 := HAnimJoint69;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint172;
HAnimJoint173 := THAnimJointNode.Create;
HAnimJoint173 := HAnimJoint51;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint173;
HAnimJoint174 := THAnimJointNode.Create;
HAnimJoint174 := HAnimJoint76;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint174;
HAnimJoint175 := THAnimJointNode.Create;
HAnimJoint175 := HAnimJoint63;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint175;
HAnimJoint176 := THAnimJointNode.Create;
HAnimJoint176 := HAnimJoint88;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint176;
HAnimJoint177 := THAnimJointNode.Create;
HAnimJoint177 := HAnimJoint111;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint177;
HAnimJoint178 := THAnimJointNode.Create;
HAnimJoint178 := HAnimJoint136;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint178;
HAnimJoint179 := THAnimJointNode.Create;
HAnimJoint179 := HAnimJoint96;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint179;
HAnimJoint180 := THAnimJointNode.Create;
HAnimJoint180 := HAnimJoint121;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint180;
HAnimJoint181 := THAnimJointNode.Create;
HAnimJoint181 := HAnimJoint55;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint181;
HAnimJoint182 := THAnimJointNode.Create;
HAnimJoint182 := HAnimJoint80;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint182;
HAnimSegment183 := THAnimSegmentNode.Create;
HAnimSegment183 := HAnimSegment37;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment183;
HAnimSegment184 := THAnimSegmentNode.Create;
HAnimSegment184 := HAnimSegment95;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment184;
HAnimSegment185 := THAnimSegmentNode.Create;
HAnimSegment185 := HAnimSegment147;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment185;
HAnimSegment186 := THAnimSegmentNode.Create;
HAnimSegment186 := HAnimSegment150;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment186;
HAnimSegment187 := THAnimSegmentNode.Create;
HAnimSegment187 := HAnimSegment52;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment187;
HAnimSegment188 := THAnimSegmentNode.Create;
HAnimSegment188 := HAnimSegment77;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment188;
HAnimSegment189 := THAnimSegmentNode.Create;
HAnimSegment189 := HAnimSegment112;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment189;
HAnimSegment190 := THAnimSegmentNode.Create;
HAnimSegment190 := HAnimSegment137;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment190;
HAnimSegment191 := THAnimSegmentNode.Create;
HAnimSegment191 := HAnimSegment103;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment191;
HAnimSegment192 := THAnimSegmentNode.Create;
HAnimSegment192 := HAnimSegment128;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment192;
HAnimSegment193 := THAnimSegmentNode.Create;
HAnimSegment193 := HAnimSegment56;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment193;
HAnimSegment194 := THAnimSegmentNode.Create;
HAnimSegment194 := HAnimSegment81;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment194;
HAnimSegment195 := THAnimSegmentNode.Create;
HAnimSegment195 := HAnimSegment64;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment195;
HAnimSegment196 := THAnimSegmentNode.Create;
HAnimSegment196 := HAnimSegment89;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment196;
HAnimSegment197 := THAnimSegmentNode.Create;
HAnimSegment197 := HAnimSegment45;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment197;
HAnimSegment198 := THAnimSegmentNode.Create;
HAnimSegment198 := HAnimSegment70;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment198;
HAnimSegment199 := THAnimSegmentNode.Create;
HAnimSegment199 := HAnimSegment97;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment199;
HAnimSegment200 := THAnimSegmentNode.Create;
HAnimSegment200 := HAnimSegment122;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment200;
HAnimSite201 := THAnimSiteNode.Create;
HAnimSite201 := HAnimSite153;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite201;
HAnimSite202 := THAnimSiteNode.Create;
HAnimSite202 := HAnimSite154;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite202;
HAnimSite203 := THAnimSiteNode.Create;
HAnimSite203 := HAnimSite157;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite203;
HAnimSite204 := THAnimSiteNode.Create;
HAnimSite204 := HAnimSite162;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite204;
HAnimSite205 := THAnimSiteNode.Create;
HAnimSite205 := HAnimSite62;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite205;
HAnimSite206 := THAnimSiteNode.Create;
HAnimSite206 := HAnimSite87;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite206;
HAnimSite207 := THAnimSiteNode.Create;
HAnimSite207 := HAnimSite118;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite207;
HAnimSite208 := THAnimSiteNode.Create;
HAnimSite208 := HAnimSite143;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite208;
HAnimSite209 := THAnimSiteNode.Create;
HAnimSite209 := HAnimSite49;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite209;
HAnimSite210 := THAnimSiteNode.Create;
HAnimSite210 := HAnimSite74;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite210;
HAnimSite211 := THAnimSiteNode.Create;
HAnimSite211 := HAnimSite50;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite211;
HAnimSite212 := THAnimSiteNode.Create;
HAnimSite212 := HAnimSite75;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite212;
HAnimSite213 := THAnimSiteNode.Create;
HAnimSite213 := HAnimSite159;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite213;
HAnimSite214 := THAnimSiteNode.Create;
HAnimSite214 := HAnimSite161;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite214;
HAnimSite215 := THAnimSiteNode.Create;
HAnimSite215 := HAnimSite116;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite215;
HAnimSite216 := THAnimSiteNode.Create;
HAnimSite216 := HAnimSite141;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite216;
HAnimSite217 := THAnimSiteNode.Create;
HAnimSite217 := HAnimSite101;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite217;
HAnimSite218 := THAnimSiteNode.Create;
HAnimSite218 := HAnimSite126;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite218;
HAnimSite219 := THAnimSiteNode.Create;
HAnimSite219 := HAnimSite109;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite219;
HAnimSite220 := THAnimSiteNode.Create;
HAnimSite220 := HAnimSite134;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite220;
HAnimSite221 := THAnimSiteNode.Create;
HAnimSite221 := HAnimSite155;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite221;
HAnimSite222 := THAnimSiteNode.Create;
HAnimSite222 := HAnimSite156;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite222;
HAnimSite223 := THAnimSiteNode.Create;
HAnimSite223 := HAnimSite48;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite223;
HAnimSite224 := THAnimSiteNode.Create;
HAnimSite224 := HAnimSite73;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite224;
HAnimSite225 := THAnimSiteNode.Create;
HAnimSite225 := HAnimSite59;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite225;
HAnimSite226 := THAnimSiteNode.Create;
HAnimSite226 := HAnimSite84;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite226;
HAnimSite227 := THAnimSiteNode.Create;
HAnimSite227 := HAnimSite60;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite227;
HAnimSite228 := THAnimSiteNode.Create;
HAnimSite228 := HAnimSite85;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite228;
HAnimSite229 := THAnimSiteNode.Create;
HAnimSite229 := HAnimSite117;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite229;
HAnimSite230 := THAnimSiteNode.Create;
HAnimSite230 := HAnimSite142;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite230;
HAnimSite231 := THAnimSiteNode.Create;
HAnimSite231 := HAnimSite120;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite231;
HAnimSite232 := THAnimSiteNode.Create;
HAnimSite232 := HAnimSite145;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite232;
HAnimSite233 := THAnimSiteNode.Create;
HAnimSite233 := HAnimSite67;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite233;
HAnimSite234 := THAnimSiteNode.Create;
HAnimSite234 := HAnimSite92;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite234;
HAnimSite235 := THAnimSiteNode.Create;
HAnimSite235 := HAnimSite66;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite235;
HAnimSite236 := THAnimSiteNode.Create;
HAnimSite236 := HAnimSite91;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite236;
HAnimSite237 := THAnimSiteNode.Create;
HAnimSite237 := HAnimSite65;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite237;
HAnimSite238 := THAnimSiteNode.Create;
HAnimSite238 := HAnimSite90;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite238;
HAnimSite239 := THAnimSiteNode.Create;
HAnimSite239 := HAnimSite108;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite239;
HAnimSite240 := THAnimSiteNode.Create;
HAnimSite240 := HAnimSite133;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite240;
HAnimSite241 := THAnimSiteNode.Create;
HAnimSite241 := HAnimSite107;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite241;
HAnimSite242 := THAnimSiteNode.Create;
HAnimSite242 := HAnimSite132;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite242;
HAnimSite243 := THAnimSiteNode.Create;
HAnimSite243 := HAnimSite110;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite243;
HAnimSite244 := THAnimSiteNode.Create;
HAnimSite244 := HAnimSite135;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite244;
HAnimSite245 := THAnimSiteNode.Create;
HAnimSite245 := HAnimSite61;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite245;
HAnimSite246 := THAnimSiteNode.Create;
HAnimSite246 := HAnimSite86;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite246;
HAnimSite247 := THAnimSiteNode.Create;
HAnimSite247 := HAnimSite68;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite247;
HAnimSite248 := THAnimSiteNode.Create;
HAnimSite248 := HAnimSite93;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite248;
HAnimSite249 := THAnimSiteNode.Create;
HAnimSite249 := HAnimSite158;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite249;
HAnimSite250 := THAnimSiteNode.Create;
HAnimSite250 := HAnimSite160;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite250;
HAnimSite251 := THAnimSiteNode.Create;
HAnimSite251 := HAnimSite119;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite251;
HAnimSite252 := THAnimSiteNode.Create;
HAnimSite252 := HAnimSite144;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite252;
HAnimSite253 := THAnimSiteNode.Create;
HAnimSite253.NameField := 'DiamondManLOA1_view';
Viewpoint254 := TViewpointNode.Create;
Viewpoint254.Description := 'Inclined View';
Viewpoint254.Position := Vector3(1.62,1.05,2.06);
Viewpoint254.Orientation := Vector4(-0.113,0.993,0.0347,0.671);
{ .AddChildren }
HAnimSite253.AddChildren([Viewpoint254]);
Viewpoint255 := TViewpointNode.Create;
Viewpoint255.Description := 'Front View';
Viewpoint255.Position := Vector3(0,0.854,2.57665);
{ .AddChildren }
HAnimSite253.AddChildren([Viewpoint255]);
Viewpoint256 := TViewpointNode.Create;
Viewpoint256.Description := 'Side View';
Viewpoint256.Position := Vector3(2.5929,0.854,0);
Viewpoint256.Orientation := Vector4(0,1,0,1.57079);
{ .AddChildren }
HAnimSite253.AddChildren([Viewpoint256]);
Viewpoint257 := TViewpointNode.Create;
Viewpoint257.Description := 'Top View';
Viewpoint257.Position := Vector3(0,3.4495,0);
Viewpoint257.Orientation := Vector4(1,0,0,-1.57079);
{ .AddChildren }
HAnimSite253.AddChildren([Viewpoint257]);
{ .SetViewpoints }
HAnimHumanoid28.Viewpoints := HAnimSite253;
{ .AddChildren }
Group24.AddChildren([HAnimHumanoid28]);
{ .AddGroup }
X3D0.AddChildren([Group24]);
Result := X3D0;
end;
