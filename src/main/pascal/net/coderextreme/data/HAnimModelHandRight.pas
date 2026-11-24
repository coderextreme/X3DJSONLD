unit HAnimModelHandRight;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateHAnimModelHandRight: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group24: TGroupNode;
WorldInfo25: TWorldInfoNode;
HAnimHumanoid26: THAnimHumanoidNode;
MetadataSet27: TMetadataSetNode;
MetadataString28: TMetadataStringNode;
HAnimJoint29: THAnimJointNode;
HAnimJoint30: THAnimJointNode;
HAnimSegment31: THAnimSegmentNode;
Transform32: TTransformNode;
Shape33: TShapeNode;
Sphere34: TSphereNode;
Appearance35: TAppearanceNode;
Material36: TMaterialNode;
Shape37: TShapeNode;
Appearance38: TAppearanceNode;
Material39: TMaterialNode;
IndexedLineSet40: TIndexedLineSetNode;
Coordinate41: TCoordinateNode;
Shape42: TShapeNode;
Appearance43: TAppearanceNode;
Material44: TMaterialNode;
IndexedLineSet45: TIndexedLineSetNode;
Coordinate46: TCoordinateNode;
Shape47: TShapeNode;
Appearance48: TAppearanceNode;
Material49: TMaterialNode;
IndexedLineSet50: TIndexedLineSetNode;
Coordinate51: TCoordinateNode;
HAnimJoint52: THAnimJointNode;
HAnimSegment53: THAnimSegmentNode;
Transform54: TTransformNode;
Shape55: TShapeNode;
Sphere56: TSphereNode;
Appearance57: TAppearanceNode;
Material58: TMaterialNode;
Shape59: TShapeNode;
Appearance60: TAppearanceNode;
Material61: TMaterialNode;
IndexedLineSet62: TIndexedLineSetNode;
Coordinate63: TCoordinateNode;
HAnimJoint64: THAnimJointNode;
HAnimSegment65: THAnimSegmentNode;
Transform66: TTransformNode;
Shape67: TShapeNode;
Shape68: TShapeNode;
Appearance69: TAppearanceNode;
Material70: TMaterialNode;
IndexedLineSet71: TIndexedLineSetNode;
Coordinate72: TCoordinateNode;
HAnimJoint73: THAnimJointNode;
HAnimSegment74: THAnimSegmentNode;
Transform75: TTransformNode;
Shape76: TShapeNode;
Shape77: TShapeNode;
Appearance78: TAppearanceNode;
Material79: TMaterialNode;
IndexedLineSet80: TIndexedLineSetNode;
Coordinate81: TCoordinateNode;
HAnimJoint82: THAnimJointNode;
HAnimSegment83: THAnimSegmentNode;
Transform84: TTransformNode;
Shape85: TShapeNode;
Shape86: TShapeNode;
Appearance87: TAppearanceNode;
Material88: TMaterialNode;
IndexedLineSet89: TIndexedLineSetNode;
Coordinate90: TCoordinateNode;
HAnimJoint91: THAnimJointNode;
HAnimSegment92: THAnimSegmentNode;
Transform93: TTransformNode;
Shape94: TShapeNode;
Shape95: TShapeNode;
Appearance96: TAppearanceNode;
Material97: TMaterialNode;
IndexedLineSet98: TIndexedLineSetNode;
Coordinate99: TCoordinateNode;
HAnimJoint100: THAnimJointNode;
HAnimSegment101: THAnimSegmentNode;
Transform102: TTransformNode;
Shape103: TShapeNode;
Shape104: TShapeNode;
Appearance105: TAppearanceNode;
Material106: TMaterialNode;
IndexedLineSet107: TIndexedLineSetNode;
Coordinate108: TCoordinateNode;
HAnimJoint109: THAnimJointNode;
HAnimSegment110: THAnimSegmentNode;
Transform111: TTransformNode;
Shape112: TShapeNode;
Shape113: TShapeNode;
Appearance114: TAppearanceNode;
Material115: TMaterialNode;
IndexedLineSet116: TIndexedLineSetNode;
Coordinate117: TCoordinateNode;
HAnimJoint118: THAnimJointNode;
HAnimSegment119: THAnimSegmentNode;
Transform120: TTransformNode;
Shape121: TShapeNode;
Shape122: TShapeNode;
Appearance123: TAppearanceNode;
Material124: TMaterialNode;
IndexedLineSet125: TIndexedLineSetNode;
Coordinate126: TCoordinateNode;
HAnimJoint127: THAnimJointNode;
HAnimSegment128: THAnimSegmentNode;
Transform129: TTransformNode;
Shape130: TShapeNode;
Shape131: TShapeNode;
Appearance132: TAppearanceNode;
Material133: TMaterialNode;
IndexedLineSet134: TIndexedLineSetNode;
Coordinate135: TCoordinateNode;
HAnimJoint136: THAnimJointNode;
HAnimSegment137: THAnimSegmentNode;
Transform138: TTransformNode;
Shape139: TShapeNode;
Shape140: TShapeNode;
Appearance141: TAppearanceNode;
Material142: TMaterialNode;
IndexedLineSet143: TIndexedLineSetNode;
Coordinate144: TCoordinateNode;
HAnimJoint145: THAnimJointNode;
HAnimSegment146: THAnimSegmentNode;
Transform147: TTransformNode;
Shape148: TShapeNode;
Shape149: TShapeNode;
Appearance150: TAppearanceNode;
Material151: TMaterialNode;
IndexedLineSet152: TIndexedLineSetNode;
Coordinate153: TCoordinateNode;
HAnimJoint154: THAnimJointNode;
HAnimSegment155: THAnimSegmentNode;
Transform156: TTransformNode;
Shape157: TShapeNode;
Shape158: TShapeNode;
Appearance159: TAppearanceNode;
Material160: TMaterialNode;
IndexedLineSet161: TIndexedLineSetNode;
Coordinate162: TCoordinateNode;
HAnimJoint163: THAnimJointNode;
HAnimSegment164: THAnimSegmentNode;
Transform165: TTransformNode;
Shape166: TShapeNode;
Shape167: TShapeNode;
Appearance168: TAppearanceNode;
Material169: TMaterialNode;
IndexedLineSet170: TIndexedLineSetNode;
Coordinate171: TCoordinateNode;
HAnimJoint172: THAnimJointNode;
HAnimSegment173: THAnimSegmentNode;
Transform174: TTransformNode;
Shape175: TShapeNode;
Shape176: TShapeNode;
Appearance177: TAppearanceNode;
Material178: TMaterialNode;
IndexedLineSet179: TIndexedLineSetNode;
Coordinate180: TCoordinateNode;
HAnimJoint181: THAnimJointNode;
HAnimSegment182: THAnimSegmentNode;
Transform183: TTransformNode;
Shape184: TShapeNode;
Shape185: TShapeNode;
Appearance186: TAppearanceNode;
Material187: TMaterialNode;
IndexedLineSet188: TIndexedLineSetNode;
Coordinate189: TCoordinateNode;
Shape190: TShapeNode;
Appearance191: TAppearanceNode;
Material192: TMaterialNode;
IndexedLineSet193: TIndexedLineSetNode;
Coordinate194: TCoordinateNode;
HAnimJoint195: THAnimJointNode;
HAnimSegment196: THAnimSegmentNode;
Transform197: TTransformNode;
Shape198: TShapeNode;
Shape199: TShapeNode;
Appearance200: TAppearanceNode;
Material201: TMaterialNode;
IndexedLineSet202: TIndexedLineSetNode;
Coordinate203: TCoordinateNode;
HAnimJoint204: THAnimJointNode;
HAnimSegment205: THAnimSegmentNode;
Transform206: TTransformNode;
Shape207: TShapeNode;
Shape208: TShapeNode;
Appearance209: TAppearanceNode;
Material210: TMaterialNode;
IndexedLineSet211: TIndexedLineSetNode;
Coordinate212: TCoordinateNode;
HAnimJoint213: THAnimJointNode;
HAnimSegment214: THAnimSegmentNode;
Transform215: TTransformNode;
Shape216: TShapeNode;
Shape217: TShapeNode;
Appearance218: TAppearanceNode;
Material219: TMaterialNode;
IndexedLineSet220: TIndexedLineSetNode;
Coordinate221: TCoordinateNode;
HAnimJoint222: THAnimJointNode;
HAnimSegment223: THAnimSegmentNode;
Transform224: TTransformNode;
Shape225: TShapeNode;
Shape226: TShapeNode;
Appearance227: TAppearanceNode;
Material228: TMaterialNode;
IndexedLineSet229: TIndexedLineSetNode;
Coordinate230: TCoordinateNode;
HAnimJoint231: THAnimJointNode;
HAnimSegment232: THAnimSegmentNode;
Transform233: TTransformNode;
Shape234: TShapeNode;
Shape235: TShapeNode;
Appearance236: TAppearanceNode;
Material237: TMaterialNode;
IndexedLineSet238: TIndexedLineSetNode;
Coordinate239: TCoordinateNode;
HAnimJoint240: THAnimJointNode;
HAnimSegment241: THAnimSegmentNode;
Transform242: TTransformNode;
Shape243: TShapeNode;
Shape244: TShapeNode;
Appearance245: TAppearanceNode;
Material246: TMaterialNode;
IndexedLineSet247: TIndexedLineSetNode;
Coordinate248: TCoordinateNode;
HAnimJoint249: THAnimJointNode;
HAnimSegment250: THAnimSegmentNode;
Transform251: TTransformNode;
Shape252: TShapeNode;
Shape253: TShapeNode;
Appearance254: TAppearanceNode;
Material255: TMaterialNode;
IndexedLineSet256: TIndexedLineSetNode;
Coordinate257: TCoordinateNode;
HAnimJoint258: THAnimJointNode;
HAnimSegment259: THAnimSegmentNode;
Transform260: TTransformNode;
Shape261: TShapeNode;
Shape262: TShapeNode;
Appearance263: TAppearanceNode;
Material264: TMaterialNode;
IndexedLineSet265: TIndexedLineSetNode;
Coordinate266: TCoordinateNode;
HAnimJoint267: THAnimJointNode;
HAnimJoint268: THAnimJointNode;
HAnimJoint269: THAnimJointNode;
HAnimJoint270: THAnimJointNode;
HAnimJoint271: THAnimJointNode;
HAnimJoint272: THAnimJointNode;
HAnimJoint273: THAnimJointNode;
HAnimJoint274: THAnimJointNode;
HAnimJoint275: THAnimJointNode;
HAnimJoint276: THAnimJointNode;
HAnimJoint277: THAnimJointNode;
HAnimJoint278: THAnimJointNode;
HAnimJoint279: THAnimJointNode;
HAnimJoint280: THAnimJointNode;
HAnimJoint281: THAnimJointNode;
HAnimJoint282: THAnimJointNode;
HAnimJoint283: THAnimJointNode;
HAnimJoint284: THAnimJointNode;
HAnimJoint285: THAnimJointNode;
HAnimJoint286: THAnimJointNode;
HAnimJoint287: THAnimJointNode;
HAnimJoint288: THAnimJointNode;
HAnimJoint289: THAnimJointNode;
HAnimJoint290: THAnimJointNode;
HAnimJoint291: THAnimJointNode;

procedure InitHAnimModelHandRightPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'HAnimModelHandRight.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Right hand using high-fidelity definitions for HAnim version 2.0';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Kwan-Hee YOO, Don Brutzman and Joe Williams';
{ METHOD .Meta }
X3D0.Meta['created'] := '26 January 2015';
{ METHOD .Meta }
X3D0.Meta['modified'] := '23 December 2021';
{ METHOD .Meta }
X3D0.Meta['TODO'] := 'fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'HAnimModelHandRightSegmentVisualizationError.png';
{ METHOD .Meta }
X3D0.Meta['error'] := 'not yet to scale, also relatively flat';
{ METHOD .Meta }
X3D0.Meta['warning'] := 'TODO will X3D HAnim component add a new level to support LOA-4 functionality?';
{ METHOD .Meta }
X3D0.Meta['info'] := 'TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/working-groups/humanoid-animation-HAnim';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/documents/specifications/19774/V2.0';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'X3D HAnim humanoid animation';
{ METHOD .Meta }
X3D0.Meta['TODO'] := 'Integrate and confirm Segment/Joint names, Viewpoints.';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group24 := TGroupNode.Create;;
WorldInfo25 := TWorldInfoNode.Create;;
WorldInfo25.Title := 'HAnimModelHandRight.x3d';
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(WorldInfo25);
HAnimHumanoid26 := THAnimHumanoidNode.Create;;
HAnimHumanoid26.Loa := 4;
HAnimHumanoid26.Version := '2.0';
{ original HAnimHumanoid info='"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams"' }
MetadataSet27 := TMetadataSetNode.Create;;
MetadataSet27.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid';
MetadataString28 := TMetadataStringNode.Create;
end;

procedure InitHAnimModelHandRightPart1;
begin
;
MetadataString28.SetValue(['Kwan-Hee YOO, Don Brutzman and Joe Williams']);
{ METHOD .FdValue.Add }
MetadataSet27.FdValue.Add(MetadataString28);
{ METHOD .Metadata }
{ METHOD.SET .Metadata }
HAnimHumanoid26.Metadata := MetadataSet27;
HAnimJoint29 := THAnimJointNode.Create;;
{ Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model }
HAnimJoint30 := THAnimJointNode.Create;;
HAnimJoint30.Description := 'connection joint of hand to leg above';
HAnimSegment31 := THAnimSegmentNode.Create;;
Transform32 := TTransformNode.Create;;
Shape33 := TShapeNode.Create;;
Sphere34 := TSphereNode.Create;;
Sphere34.Radius := 0.025;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape33.Geometry := Sphere34;
Appearance35 := TAppearanceNode.Create;;
Material36 := TMaterialNode.Create;;
Material36.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance35.Material := Material36;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape33.Appearance := Appearance35;
{ METHOD .FdChildren.Add }
Transform32.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment31.FdChildren.Add(Transform32);
Shape37 := TShapeNode.Create;;
Appearance38 := TAppearanceNode.Create;;
Material39 := TMaterialNode.Create;;
Material39.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance38.Material := Material39;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape37.Appearance := Appearance38;
IndexedLineSet40 := TIndexedLineSetNode.Create;;
IndexedLineSet40.SetCoordIndex([0,1]);
end;

procedure InitHAnimModelHandRightPart2;
begin

Coordinate41 := TCoordinateNode.Create;;
Coordinate41.SetPoint([Vector3(0,0,0),Vector3(-0.1,0.1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet40.Coord := Coordinate41;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape37.Geometry := IndexedLineSet40;
{ METHOD .FdChildren.Add }
HAnimSegment31.FdChildren.Add(Shape37);
Shape42 := TShapeNode.Create;;
Appearance43 := TAppearanceNode.Create;;
Material44 := TMaterialNode.Create;;
Material44.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance43.Material := Material44;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape42.Appearance := Appearance43;
IndexedLineSet45 := TIndexedLineSetNode.Create;;
IndexedLineSet45.SetCoordIndex([0,1]);
Coordinate46 := TCoordinateNode.Create;;
Coordinate46.SetPoint([Vector3(0,0,0),Vector3(0,0.07,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet45.Coord := Coordinate46;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape42.Geometry := IndexedLineSet45;
{ METHOD .FdChildren.Add }
HAnimSegment31.FdChildren.Add(Shape42);
Shape47 := TShapeNode.Create;;
Appearance48 := TAppearanceNode.Create;;
Material49 := TMaterialNode.Create;;
Material49.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance48.Material := Material49;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape47.Appearance := Appearance48;
IndexedLineSet50 := TIndexedLineSetNode.Create;;
IndexedLineSet50.SetCoordIndex([0,1]);
Coordinate51 := TCoordinateNode.Create;;
Coordinate51.SetPoint([Vector3(0,0,0),Vector3(0.1,0.1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet50.Coord := Coordinate51;
end;

procedure InitHAnimModelHandRightPart3;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape47.Geometry := IndexedLineSet50;
{ METHOD .FdChildren.Add }
HAnimSegment31.FdChildren.Add(Shape47);
{ METHOD .FdChildren.Add }
HAnimJoint30.FdChildren.Add(HAnimSegment31);
{ MC1 }
HAnimJoint52 := THAnimJointNode.Create;;
HAnimJoint52.Center := Vector3(-0.14,0.09,0);
HAnimSegment53 := THAnimSegmentNode.Create;;
Transform54 := TTransformNode.Create;;
Transform54.Translation := Vector3(-0.14,0.09,0);
Shape55 := TShapeNode.Create;;
Sphere56 := TSphereNode.Create;;
Sphere56.Radius := 0.025;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape55.Geometry := Sphere56;
Appearance57 := TAppearanceNode.Create;;
Material58 := TMaterialNode.Create;;
Material58.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance57.Material := Material58;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape55.Appearance := Appearance57;
{ METHOD .FdChildren.Add }
Transform54.FdChildren.Add(Shape55);
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(Transform54);
Shape59 := TShapeNode.Create;;
Appearance60 := TAppearanceNode.Create;;
Material61 := TMaterialNode.Create;;
Material61.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance60.Material := Material61;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape59.Appearance := Appearance60;
IndexedLineSet62 := TIndexedLineSetNode.Create;;
IndexedLineSet62.SetCoordIndex([0,1]);
Coordinate63 := TCoordinateNode.Create;;
end;

procedure InitHAnimModelHandRightPart4;
begin

Coordinate63.SetPoint([Vector3(-0.1,0.1,0),Vector3(-0.2,0.15,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet62.Coord := Coordinate63;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape59.Geometry := IndexedLineSet62;
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(Shape59);
{ METHOD .FdChildren.Add }
HAnimJoint52.FdChildren.Add(HAnimSegment53);
{ thumb finger }
HAnimJoint64 := THAnimJointNode.Create;;
HAnimJoint64.Center := Vector3(-0.2,0.15,0);
HAnimSegment65 := THAnimSegmentNode.Create;;
Transform66 := TTransformNode.Create;;
Transform66.Translation := Vector3(-0.2,0.15,0);
{ METHOD .FdChildren.Add }
Transform66.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment65.FdChildren.Add(Transform66);
Shape68 := TShapeNode.Create;;
Appearance69 := TAppearanceNode.Create;;
Material70 := TMaterialNode.Create;;
Material70.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance69.Material := Material70;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape68.Appearance := Appearance69;
IndexedLineSet71 := TIndexedLineSetNode.Create;;
IndexedLineSet71.SetCoordIndex([0,1]);
Coordinate72 := TCoordinateNode.Create;;
Coordinate72.SetPoint([Vector3(-0.2,0.15,0),Vector3(-0.3,0.3,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet71.Coord := Coordinate72;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape68.Geometry := IndexedLineSet71;
{ METHOD .FdChildren.Add }
HAnimSegment65.FdChildren.Add(Shape68);
{ METHOD .FdChildren.Add }
HAnimJoint64.FdChildren.Add(HAnimSegment65);
HAnimJoint73 := THAnimJointNode.Create;;
HAnimJoint73.Center := Vector3(-0.3,0.3,0);
HAnimSegment74 := THAnimSegmentNode.Create;;
Transform75 := TTransformNode.Create;
end;

procedure InitHAnimModelHandRightPart5;
begin
;
Transform75.Translation := Vector3(-0.3,0.3,0);
{ METHOD .FdChildren.Add }
Transform75.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment74.FdChildren.Add(Transform75);
Shape77 := TShapeNode.Create;;
Appearance78 := TAppearanceNode.Create;;
Material79 := TMaterialNode.Create;;
Material79.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance78.Material := Material79;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape77.Appearance := Appearance78;
IndexedLineSet80 := TIndexedLineSetNode.Create;;
IndexedLineSet80.SetCoordIndex([0,1]);
Coordinate81 := TCoordinateNode.Create;;
Coordinate81.SetPoint([Vector3(-0.3,0.3,0),Vector3(-0.35,0.4,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet80.Coord := Coordinate81;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape77.Geometry := IndexedLineSet80;
{ METHOD .FdChildren.Add }
HAnimSegment74.FdChildren.Add(Shape77);
{ METHOD .FdChildren.Add }
HAnimJoint73.FdChildren.Add(HAnimSegment74);
HAnimJoint82 := THAnimJointNode.Create;;
HAnimJoint82.Center := Vector3(-0.35,0.4,0);
HAnimSegment83 := THAnimSegmentNode.Create;;
Transform84 := TTransformNode.Create;;
Transform84.Translation := Vector3(-0.35,0.4,0);
{ METHOD .FdChildren.Add }
Transform84.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment83.FdChildren.Add(Transform84);
Shape86 := TShapeNode.Create;;
Appearance87 := TAppearanceNode.Create;;
Material88 := TMaterialNode.Create;;
Material88.EmissiveColor := Vector3(1,1,1);
end;

procedure InitHAnimModelHandRightPart6;
begin

{ METHOD .SetMaterial }
Appearance87.Material := Material88;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape86.Appearance := Appearance87;
IndexedLineSet89 := TIndexedLineSetNode.Create;;
IndexedLineSet89.SetCoordIndex([0,1]);
Coordinate90 := TCoordinateNode.Create;;
Coordinate90.SetPoint([Vector3(-0.35,0.4,0),Vector3(-0.36,0.45,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet89.Coord := Coordinate90;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape86.Geometry := IndexedLineSet89;
{ METHOD .FdChildren.Add }
HAnimSegment83.FdChildren.Add(Shape86);
{ METHOD .FdChildren.Add }
HAnimJoint82.FdChildren.Add(HAnimSegment83);
{ METHOD .FdChildren.Add }
HAnimJoint73.FdChildren.Add(HAnimJoint82);
{ METHOD .FdChildren.Add }
HAnimJoint64.FdChildren.Add(HAnimJoint73);
{ METHOD .FdChildren.Add }
HAnimJoint52.FdChildren.Add(HAnimJoint64);
{ METHOD .FdChildren.Add }
HAnimJoint30.FdChildren.Add(HAnimJoint52);
{ MC2 }
HAnimJoint91 := THAnimJointNode.Create;;
HAnimJoint91.Center := Vector3(-0.07,0.07,0);
HAnimSegment92 := THAnimSegmentNode.Create;;
Transform93 := TTransformNode.Create;;
Transform93.Translation := Vector3(-0.07,0.07,0);
{ METHOD .FdChildren.Add }
Transform93.FdChildren.Add(Shape55);
{ METHOD .FdChildren.Add }
HAnimSegment92.FdChildren.Add(Transform93);
Shape95 := TShapeNode.Create;;
Appearance96 := TAppearanceNode.Create;;
Material97 := TMaterialNode.Create;;
Material97.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance96.Material := Material97;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape95.Appearance := Appearance96;
IndexedLineSet98 := TIndexedLineSetNode.Create;;
IndexedLineSet98.SetCoordIndex([0,1]);
Coordinate99 := TCoordinateNode.Create;;
end;

procedure InitHAnimModelHandRightPart7;
begin

Coordinate99.SetPoint([Vector3(-0.1,0.1,0),Vector3(-0.1,0.2,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet98.Coord := Coordinate99;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape95.Geometry := IndexedLineSet98;
{ METHOD .FdChildren.Add }
HAnimSegment92.FdChildren.Add(Shape95);
{ METHOD .FdChildren.Add }
HAnimJoint91.FdChildren.Add(HAnimSegment92);
{ index finger }
HAnimJoint100 := THAnimJointNode.Create;;
HAnimJoint100.Center := Vector3(-0.1,0.2,0);
HAnimSegment101 := THAnimSegmentNode.Create;;
Transform102 := TTransformNode.Create;;
Transform102.Translation := Vector3(-0.1,0.2,0);
{ METHOD .FdChildren.Add }
Transform102.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment101.FdChildren.Add(Transform102);
Shape104 := TShapeNode.Create;;
Appearance105 := TAppearanceNode.Create;;
Material106 := TMaterialNode.Create;;
Material106.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance105.Material := Material106;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape104.Appearance := Appearance105;
IndexedLineSet107 := TIndexedLineSetNode.Create;;
IndexedLineSet107.SetCoordIndex([0,1]);
Coordinate108 := TCoordinateNode.Create;;
Coordinate108.SetPoint([Vector3(-0.1,0.2,0),Vector3(-0.15,0.5,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet107.Coord := Coordinate108;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape104.Geometry := IndexedLineSet107;
{ METHOD .FdChildren.Add }
HAnimSegment101.FdChildren.Add(Shape104);
{ METHOD .FdChildren.Add }
HAnimJoint100.FdChildren.Add(HAnimSegment101);
HAnimJoint109 := THAnimJointNode.Create;;
HAnimJoint109.Center := Vector3(-0.15,0.5,0);
HAnimSegment110 := THAnimSegmentNode.Create;;
Transform111 := TTransformNode.Create;
end;

procedure InitHAnimModelHandRightPart8;
begin
;
Transform111.Translation := Vector3(-0.15,0.5,0);
{ METHOD .FdChildren.Add }
Transform111.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment110.FdChildren.Add(Transform111);
Shape113 := TShapeNode.Create;;
Appearance114 := TAppearanceNode.Create;;
Material115 := TMaterialNode.Create;;
Material115.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance114.Material := Material115;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape113.Appearance := Appearance114;
IndexedLineSet116 := TIndexedLineSetNode.Create;;
IndexedLineSet116.SetCoordIndex([0,1]);
Coordinate117 := TCoordinateNode.Create;;
Coordinate117.SetPoint([Vector3(-0.15,0.5,0),Vector3(-0.2,0.7,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet116.Coord := Coordinate117;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape113.Geometry := IndexedLineSet116;
{ METHOD .FdChildren.Add }
HAnimSegment110.FdChildren.Add(Shape113);
{ METHOD .FdChildren.Add }
HAnimJoint109.FdChildren.Add(HAnimSegment110);
HAnimJoint118 := THAnimJointNode.Create;;
HAnimJoint118.Center := Vector3(-0.2,0.7,0);
HAnimSegment119 := THAnimSegmentNode.Create;;
Transform120 := TTransformNode.Create;;
Transform120.Translation := Vector3(-0.2,0.7,0);
{ METHOD .FdChildren.Add }
Transform120.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment119.FdChildren.Add(Transform120);
Shape122 := TShapeNode.Create;;
Appearance123 := TAppearanceNode.Create;;
Material124 := TMaterialNode.Create;;
Material124.EmissiveColor := Vector3(1,1,1);
end;

procedure InitHAnimModelHandRightPart9;
begin

{ METHOD .SetMaterial }
Appearance123.Material := Material124;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape122.Appearance := Appearance123;
IndexedLineSet125 := TIndexedLineSetNode.Create;;
IndexedLineSet125.SetCoordIndex([0,1]);
Coordinate126 := TCoordinateNode.Create;;
Coordinate126.SetPoint([Vector3(-0.2,0.7,0),Vector3(-0.24,0.87,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet125.Coord := Coordinate126;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape122.Geometry := IndexedLineSet125;
{ METHOD .FdChildren.Add }
HAnimSegment119.FdChildren.Add(Shape122);
{ METHOD .FdChildren.Add }
HAnimJoint118.FdChildren.Add(HAnimSegment119);
HAnimJoint127 := THAnimJointNode.Create;;
HAnimJoint127.Center := Vector3(-0.24,0.87,0);
HAnimSegment128 := THAnimSegmentNode.Create;;
Transform129 := TTransformNode.Create;;
Transform129.Translation := Vector3(-0.24,0.87,0);
{ METHOD .FdChildren.Add }
Transform129.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment128.FdChildren.Add(Transform129);
Shape131 := TShapeNode.Create;;
Appearance132 := TAppearanceNode.Create;;
Material133 := TMaterialNode.Create;;
Material133.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance132.Material := Material133;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape131.Appearance := Appearance132;
IndexedLineSet134 := TIndexedLineSetNode.Create;;
IndexedLineSet134.SetCoordIndex([0,1]);
Coordinate135 := TCoordinateNode.Create;;
Coordinate135.SetPoint([Vector3(-0.24,0.87,0),Vector3(-0.26,0.93,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet134.Coord := Coordinate135;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape131.Geometry := IndexedLineSet134;
{ METHOD .FdChildren.Add }
HAnimSegment128.FdChildren.Add(Shape131);
end;

procedure InitHAnimModelHandRightPart10;
begin

{ METHOD .FdChildren.Add }
HAnimJoint127.FdChildren.Add(HAnimSegment128);
{ METHOD .FdChildren.Add }
HAnimJoint118.FdChildren.Add(HAnimJoint127);
{ METHOD .FdChildren.Add }
HAnimJoint109.FdChildren.Add(HAnimJoint118);
{ METHOD .FdChildren.Add }
HAnimJoint100.FdChildren.Add(HAnimJoint109);
{ METHOD .FdChildren.Add }
HAnimJoint91.FdChildren.Add(HAnimJoint100);
{ METHOD .FdChildren.Add }
HAnimJoint30.FdChildren.Add(HAnimJoint91);
{ MC3 }
HAnimJoint136 := THAnimJointNode.Create;;
HAnimJoint136.Center := Vector3(0,0.07,0);
HAnimSegment137 := THAnimSegmentNode.Create;;
Transform138 := TTransformNode.Create;;
Transform138.Translation := Vector3(0,0.07,0);
{ METHOD .FdChildren.Add }
Transform138.FdChildren.Add(Shape55);
{ METHOD .FdChildren.Add }
HAnimSegment137.FdChildren.Add(Transform138);
Shape140 := TShapeNode.Create;;
Appearance141 := TAppearanceNode.Create;;
Material142 := TMaterialNode.Create;;
Material142.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance141.Material := Material142;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape140.Appearance := Appearance141;
IndexedLineSet143 := TIndexedLineSetNode.Create;;
IndexedLineSet143.SetCoordIndex([0,1]);
Coordinate144 := TCoordinateNode.Create;;
Coordinate144.SetPoint([Vector3(0,0.07,0),Vector3(0,0.2,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet143.Coord := Coordinate144;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape140.Geometry := IndexedLineSet143;
{ METHOD .FdChildren.Add }
HAnimSegment137.FdChildren.Add(Shape140);
{ METHOD .FdChildren.Add }
HAnimJoint136.FdChildren.Add(HAnimSegment137);
{ Middle fingle }
HAnimJoint145 := THAnimJointNode.Create;;
HAnimJoint145.Center := Vector3(0,0.2,0);
HAnimSegment146 := THAnimSegmentNode.Create;;
end;

procedure InitHAnimModelHandRightPart11;
begin

Transform147 := TTransformNode.Create;;
Transform147.Translation := Vector3(0,0.2,0);
{ METHOD .FdChildren.Add }
Transform147.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment146.FdChildren.Add(Transform147);
Shape149 := TShapeNode.Create;;
Appearance150 := TAppearanceNode.Create;;
Material151 := TMaterialNode.Create;;
Material151.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance150.Material := Material151;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape149.Appearance := Appearance150;
IndexedLineSet152 := TIndexedLineSetNode.Create;;
IndexedLineSet152.SetCoordIndex([0,1]);
Coordinate153 := TCoordinateNode.Create;;
Coordinate153.SetPoint([Vector3(0,0.2,0),Vector3(-0.03,0.5,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet152.Coord := Coordinate153;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape149.Geometry := IndexedLineSet152;
{ METHOD .FdChildren.Add }
HAnimSegment146.FdChildren.Add(Shape149);
{ METHOD .FdChildren.Add }
HAnimJoint145.FdChildren.Add(HAnimSegment146);
HAnimJoint154 := THAnimJointNode.Create;;
HAnimJoint154.Center := Vector3(-0.03,0.5,0);
HAnimSegment155 := THAnimSegmentNode.Create;;
Transform156 := TTransformNode.Create;;
Transform156.Translation := Vector3(-0.03,0.5,0);
{ METHOD .FdChildren.Add }
Transform156.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment155.FdChildren.Add(Transform156);
Shape158 := TShapeNode.Create;;
Appearance159 := TAppearanceNode.Create;;
Material160 := TMaterialNode.Create;;
end;

procedure InitHAnimModelHandRightPart12;
begin

Material160.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance159.Material := Material160;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape158.Appearance := Appearance159;
IndexedLineSet161 := TIndexedLineSetNode.Create;;
IndexedLineSet161.SetCoordIndex([0,1]);
Coordinate162 := TCoordinateNode.Create;;
Coordinate162.SetPoint([Vector3(-0.03,0.5,0),Vector3(-0.05,0.75,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet161.Coord := Coordinate162;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape158.Geometry := IndexedLineSet161;
{ METHOD .FdChildren.Add }
HAnimSegment155.FdChildren.Add(Shape158);
{ METHOD .FdChildren.Add }
HAnimJoint154.FdChildren.Add(HAnimSegment155);
HAnimJoint163 := THAnimJointNode.Create;;
HAnimJoint163.Center := Vector3(-0.05,0.75,0);
HAnimSegment164 := THAnimSegmentNode.Create;;
Transform165 := TTransformNode.Create;;
Transform165.Translation := Vector3(-0.05,0.75,0);
{ METHOD .FdChildren.Add }
Transform165.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment164.FdChildren.Add(Transform165);
Shape167 := TShapeNode.Create;;
Appearance168 := TAppearanceNode.Create;;
Material169 := TMaterialNode.Create;;
Material169.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance168.Material := Material169;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape167.Appearance := Appearance168;
IndexedLineSet170 := TIndexedLineSetNode.Create;;
IndexedLineSet170.SetCoordIndex([0,1]);
Coordinate171 := TCoordinateNode.Create;;
Coordinate171.SetPoint([Vector3(-0.05,0.75,0),Vector3(-0.08,0.96,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet170.Coord := Coordinate171;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape167.Geometry := IndexedLineSet170;
end;

procedure InitHAnimModelHandRightPart13;
begin

{ METHOD .FdChildren.Add }
HAnimSegment164.FdChildren.Add(Shape167);
{ METHOD .FdChildren.Add }
HAnimJoint163.FdChildren.Add(HAnimSegment164);
HAnimJoint172 := THAnimJointNode.Create;;
HAnimJoint172.Center := Vector3(-0.08,0.96,0);
HAnimSegment173 := THAnimSegmentNode.Create;;
Transform174 := TTransformNode.Create;;
Transform174.Translation := Vector3(-0.08,0.96,0);
{ METHOD .FdChildren.Add }
Transform174.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment173.FdChildren.Add(Transform174);
Shape176 := TShapeNode.Create;;
Appearance177 := TAppearanceNode.Create;;
Material178 := TMaterialNode.Create;;
Material178.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance177.Material := Material178;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape176.Appearance := Appearance177;
IndexedLineSet179 := TIndexedLineSetNode.Create;;
IndexedLineSet179.SetCoordIndex([0,1]);
Coordinate180 := TCoordinateNode.Create;;
Coordinate180.SetPoint([Vector3(-0.08,0.96,0),Vector3(-0.09,1.05,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet179.Coord := Coordinate180;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape176.Geometry := IndexedLineSet179;
{ METHOD .FdChildren.Add }
HAnimSegment173.FdChildren.Add(Shape176);
{ METHOD .FdChildren.Add }
HAnimJoint172.FdChildren.Add(HAnimSegment173);
{ METHOD .FdChildren.Add }
HAnimJoint163.FdChildren.Add(HAnimJoint172);
{ METHOD .FdChildren.Add }
HAnimJoint154.FdChildren.Add(HAnimJoint163);
{ METHOD .FdChildren.Add }
HAnimJoint145.FdChildren.Add(HAnimJoint154);
{ METHOD .FdChildren.Add }
HAnimJoint136.FdChildren.Add(HAnimJoint145);
{ METHOD .FdChildren.Add }
HAnimJoint30.FdChildren.Add(HAnimJoint136);
{ MC4_5 }
HAnimJoint181 := THAnimJointNode.Create;;
HAnimJoint181.Center := Vector3(0.1,0.1,0);
HAnimSegment182 := THAnimSegmentNode.Create;
end;

procedure InitHAnimModelHandRightPart14;
begin
;
Transform183 := TTransformNode.Create;;
Transform183.Translation := Vector3(0.1,0.1,0);
{ METHOD .FdChildren.Add }
Transform183.FdChildren.Add(Shape55);
{ METHOD .FdChildren.Add }
HAnimSegment182.FdChildren.Add(Transform183);
Shape185 := TShapeNode.Create;;
Appearance186 := TAppearanceNode.Create;;
Material187 := TMaterialNode.Create;;
Material187.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance186.Material := Material187;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape185.Appearance := Appearance186;
IndexedLineSet188 := TIndexedLineSetNode.Create;;
IndexedLineSet188.SetCoordIndex([0,1]);
Coordinate189 := TCoordinateNode.Create;;
Coordinate189.SetPoint([Vector3(0.1,0.1,0),Vector3(0.1,0.2,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet188.Coord := Coordinate189;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape185.Geometry := IndexedLineSet188;
{ METHOD .FdChildren.Add }
HAnimSegment182.FdChildren.Add(Shape185);
Shape190 := TShapeNode.Create;;
Appearance191 := TAppearanceNode.Create;;
Material192 := TMaterialNode.Create;;
Material192.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance191.Material := Material192;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape190.Appearance := Appearance191;
IndexedLineSet193 := TIndexedLineSetNode.Create;;
IndexedLineSet193.SetCoordIndex([0,1]);
Coordinate194 := TCoordinateNode.Create;;
Coordinate194.SetPoint([Vector3(0.1,0.1,0),Vector3(0.15,0.17,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet193.Coord := Coordinate194;
end;

procedure InitHAnimModelHandRightPart15;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape190.Geometry := IndexedLineSet193;
{ METHOD .FdChildren.Add }
HAnimSegment182.FdChildren.Add(Shape190);
{ METHOD .FdChildren.Add }
HAnimJoint181.FdChildren.Add(HAnimSegment182);
{ ring finger }
HAnimJoint195 := THAnimJointNode.Create;;
HAnimJoint195.Center := Vector3(0.1,0.2,0);
HAnimSegment196 := THAnimSegmentNode.Create;;
Transform197 := TTransformNode.Create;;
Transform197.Translation := Vector3(0.1,0.2,0);
{ METHOD .FdChildren.Add }
Transform197.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment196.FdChildren.Add(Transform197);
Shape199 := TShapeNode.Create;;
Appearance200 := TAppearanceNode.Create;;
Material201 := TMaterialNode.Create;;
Material201.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance200.Material := Material201;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape199.Appearance := Appearance200;
IndexedLineSet202 := TIndexedLineSetNode.Create;;
IndexedLineSet202.SetCoordIndex([0,1]);
Coordinate203 := TCoordinateNode.Create;;
Coordinate203.SetPoint([Vector3(0.1,0.2,0),Vector3(0.1,0.47,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet202.Coord := Coordinate203;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape199.Geometry := IndexedLineSet202;
{ METHOD .FdChildren.Add }
HAnimSegment196.FdChildren.Add(Shape199);
{ METHOD .FdChildren.Add }
HAnimJoint195.FdChildren.Add(HAnimSegment196);
HAnimJoint204 := THAnimJointNode.Create;;
HAnimJoint204.Center := Vector3(0.1,0.47,0);
HAnimSegment205 := THAnimSegmentNode.Create;;
Transform206 := TTransformNode.Create;;
Transform206.Translation := Vector3(0.1,0.47,0);
end;

procedure InitHAnimModelHandRightPart16;
begin

{ METHOD .FdChildren.Add }
Transform206.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment205.FdChildren.Add(Transform206);
Shape208 := TShapeNode.Create;;
Appearance209 := TAppearanceNode.Create;;
Material210 := TMaterialNode.Create;;
Material210.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance209.Material := Material210;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape208.Appearance := Appearance209;
IndexedLineSet211 := TIndexedLineSetNode.Create;;
IndexedLineSet211.SetCoordIndex([0,1]);
Coordinate212 := TCoordinateNode.Create;;
Coordinate212.SetPoint([Vector3(0.1,0.47,0),Vector3(0.1,0.7,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet211.Coord := Coordinate212;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape208.Geometry := IndexedLineSet211;
{ METHOD .FdChildren.Add }
HAnimSegment205.FdChildren.Add(Shape208);
{ METHOD .FdChildren.Add }
HAnimJoint204.FdChildren.Add(HAnimSegment205);
HAnimJoint213 := THAnimJointNode.Create;;
HAnimJoint213.Center := Vector3(0.1,0.7,0);
HAnimSegment214 := THAnimSegmentNode.Create;;
Transform215 := TTransformNode.Create;;
Transform215.Translation := Vector3(0.1,0.7,0);
{ METHOD .FdChildren.Add }
Transform215.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment214.FdChildren.Add(Transform215);
Shape217 := TShapeNode.Create;;
Appearance218 := TAppearanceNode.Create;;
Material219 := TMaterialNode.Create;;
Material219.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance218.Material := Material219;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape217.Appearance := Appearance218;
end;

procedure InitHAnimModelHandRightPart17;
begin

IndexedLineSet220 := TIndexedLineSetNode.Create;;
IndexedLineSet220.SetCoordIndex([0,1]);
Coordinate221 := TCoordinateNode.Create;;
Coordinate221.SetPoint([Vector3(0.1,0.7,0),Vector3(0.1,0.93,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet220.Coord := Coordinate221;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape217.Geometry := IndexedLineSet220;
{ METHOD .FdChildren.Add }
HAnimSegment214.FdChildren.Add(Shape217);
{ METHOD .FdChildren.Add }
HAnimJoint213.FdChildren.Add(HAnimSegment214);
HAnimJoint222 := THAnimJointNode.Create;;
HAnimJoint222.Center := Vector3(0.1,0.93,0);
HAnimSegment223 := THAnimSegmentNode.Create;;
Transform224 := TTransformNode.Create;;
Transform224.Translation := Vector3(0.1,0.93,0);
{ METHOD .FdChildren.Add }
Transform224.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment223.FdChildren.Add(Transform224);
Shape226 := TShapeNode.Create;;
Appearance227 := TAppearanceNode.Create;;
Material228 := TMaterialNode.Create;;
Material228.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance227.Material := Material228;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape226.Appearance := Appearance227;
IndexedLineSet229 := TIndexedLineSetNode.Create;;
IndexedLineSet229.SetCoordIndex([0,1]);
Coordinate230 := TCoordinateNode.Create;;
Coordinate230.SetPoint([Vector3(0.1,0.93,0),Vector3(0.1,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet229.Coord := Coordinate230;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape226.Geometry := IndexedLineSet229;
{ METHOD .FdChildren.Add }
HAnimSegment223.FdChildren.Add(Shape226);
{ METHOD .FdChildren.Add }
HAnimJoint222.FdChildren.Add(HAnimSegment223);
{ METHOD .FdChildren.Add }
HAnimJoint213.FdChildren.Add(HAnimJoint222);
end;

procedure InitHAnimModelHandRightPart18;
begin

{ METHOD .FdChildren.Add }
HAnimJoint204.FdChildren.Add(HAnimJoint213);
{ METHOD .FdChildren.Add }
HAnimJoint195.FdChildren.Add(HAnimJoint204);
{ METHOD .FdChildren.Add }
HAnimJoint181.FdChildren.Add(HAnimJoint195);
{ pinky finger }
HAnimJoint231 := THAnimJointNode.Create;;
HAnimJoint231.Center := Vector3(0.15,0.17,0);
HAnimSegment232 := THAnimSegmentNode.Create;;
Transform233 := TTransformNode.Create;;
Transform233.Translation := Vector3(0.15,0.17,0);
{ METHOD .FdChildren.Add }
Transform233.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment232.FdChildren.Add(Transform233);
Shape235 := TShapeNode.Create;;
Appearance236 := TAppearanceNode.Create;;
Material237 := TMaterialNode.Create;;
Material237.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance236.Material := Material237;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape235.Appearance := Appearance236;
IndexedLineSet238 := TIndexedLineSetNode.Create;;
IndexedLineSet238.SetCoordIndex([0,1]);
Coordinate239 := TCoordinateNode.Create;;
Coordinate239.SetPoint([Vector3(0.15,0.17,0),Vector3(0.2,0.4,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet238.Coord := Coordinate239;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape235.Geometry := IndexedLineSet238;
{ METHOD .FdChildren.Add }
HAnimSegment232.FdChildren.Add(Shape235);
{ METHOD .FdChildren.Add }
HAnimJoint231.FdChildren.Add(HAnimSegment232);
HAnimJoint240 := THAnimJointNode.Create;;
HAnimJoint240.Center := Vector3(0.2,0.4,0);
HAnimSegment241 := THAnimSegmentNode.Create;;
Transform242 := TTransformNode.Create;;
Transform242.Translation := Vector3(0.2,0.4,0);
end;

procedure InitHAnimModelHandRightPart19;
begin

{ METHOD .FdChildren.Add }
Transform242.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment241.FdChildren.Add(Transform242);
Shape244 := TShapeNode.Create;;
Appearance245 := TAppearanceNode.Create;;
Material246 := TMaterialNode.Create;;
Material246.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance245.Material := Material246;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape244.Appearance := Appearance245;
IndexedLineSet247 := TIndexedLineSetNode.Create;;
IndexedLineSet247.SetCoordIndex([0,1]);
Coordinate248 := TCoordinateNode.Create;;
Coordinate248.SetPoint([Vector3(0.2,0.4,0),Vector3(0.23,0.63,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet247.Coord := Coordinate248;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape244.Geometry := IndexedLineSet247;
{ METHOD .FdChildren.Add }
HAnimSegment241.FdChildren.Add(Shape244);
{ METHOD .FdChildren.Add }
HAnimJoint240.FdChildren.Add(HAnimSegment241);
HAnimJoint249 := THAnimJointNode.Create;;
HAnimJoint249.Center := Vector3(0.23,0.63,0);
HAnimSegment250 := THAnimSegmentNode.Create;;
Transform251 := TTransformNode.Create;;
Transform251.Translation := Vector3(0.23,0.63,0);
{ METHOD .FdChildren.Add }
Transform251.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment250.FdChildren.Add(Transform251);
Shape253 := TShapeNode.Create;;
Appearance254 := TAppearanceNode.Create;;
Material255 := TMaterialNode.Create;;
Material255.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance254.Material := Material255;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape253.Appearance := Appearance254;
end;

procedure InitHAnimModelHandRightPart20;
begin

IndexedLineSet256 := TIndexedLineSetNode.Create;;
IndexedLineSet256.SetCoordIndex([0,1]);
Coordinate257 := TCoordinateNode.Create;;
Coordinate257.SetPoint([Vector3(0.23,0.63,0),Vector3(0.25,0.79,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet256.Coord := Coordinate257;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape253.Geometry := IndexedLineSet256;
{ METHOD .FdChildren.Add }
HAnimSegment250.FdChildren.Add(Shape253);
{ METHOD .FdChildren.Add }
HAnimJoint249.FdChildren.Add(HAnimSegment250);
HAnimJoint258 := THAnimJointNode.Create;;
HAnimJoint258.Center := Vector3(0.25,0.79,0);
HAnimSegment259 := THAnimSegmentNode.Create;;
Transform260 := TTransformNode.Create;;
Transform260.Translation := Vector3(0.25,0.79,0);
{ METHOD .FdChildren.Add }
Transform260.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment259.FdChildren.Add(Transform260);
Shape262 := TShapeNode.Create;;
Appearance263 := TAppearanceNode.Create;;
Material264 := TMaterialNode.Create;;
Material264.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance263.Material := Material264;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape262.Appearance := Appearance263;
IndexedLineSet265 := TIndexedLineSetNode.Create;;
IndexedLineSet265.SetCoordIndex([0,1]);
Coordinate266 := TCoordinateNode.Create;;
Coordinate266.SetPoint([Vector3(0.25,0.79,0),Vector3(0.26,0.85,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet265.Coord := Coordinate266;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape262.Geometry := IndexedLineSet265;
{ METHOD .FdChildren.Add }
HAnimSegment259.FdChildren.Add(Shape262);
{ METHOD .FdChildren.Add }
HAnimJoint258.FdChildren.Add(HAnimSegment259);
{ METHOD .FdChildren.Add }
HAnimJoint249.FdChildren.Add(HAnimJoint258);
end;

procedure InitHAnimModelHandRightPart21;
begin

{ METHOD .FdChildren.Add }
HAnimJoint240.FdChildren.Add(HAnimJoint249);
{ METHOD .FdChildren.Add }
HAnimJoint231.FdChildren.Add(HAnimJoint240);
{ METHOD .FdChildren.Add }
HAnimJoint181.FdChildren.Add(HAnimJoint231);
{ METHOD .FdChildren.Add }
HAnimJoint30.FdChildren.Add(HAnimJoint181);
{ METHOD .FdChildren.Add }
HAnimJoint29.FdChildren.Add(HAnimJoint30);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid26.FdSkeleton.Add(HAnimJoint29);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint29);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint127);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint172);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint222);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint258);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint82);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint118);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint163);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint213);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint249);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint64);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint100);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint145);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint195);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint231);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint73);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint109);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint154);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint204);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint240);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint52);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint91);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint136);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint181);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint30);
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(HAnimHumanoid26);
{ METHOD .AddGroup }
X3D0.AddChildren([Group24]);
end;

function CreateHAnimModelHandRight: TX3DRootNode;
begin
InitHAnimModelHandRightPart0;
InitHAnimModelHandRightPart1;
InitHAnimModelHandRightPart2;
InitHAnimModelHandRightPart3;
InitHAnimModelHandRightPart4;
InitHAnimModelHandRightPart5;
InitHAnimModelHandRightPart6;
InitHAnimModelHandRightPart7;
InitHAnimModelHandRightPart8;
InitHAnimModelHandRightPart9;
InitHAnimModelHandRightPart10;
InitHAnimModelHandRightPart11;
InitHAnimModelHandRightPart12;
InitHAnimModelHandRightPart13;
InitHAnimModelHandRightPart14;
InitHAnimModelHandRightPart15;
InitHAnimModelHandRightPart16;
InitHAnimModelHandRightPart17;
InitHAnimModelHandRightPart18;
InitHAnimModelHandRightPart19;
InitHAnimModelHandRightPart20;
InitHAnimModelHandRightPart21;
Result := X3D0;
end;

begin
end.
