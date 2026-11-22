unit HAnimModelFootLeft;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateHAnimModelFootLeft: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group22: TGroupNode;
WorldInfo23: TWorldInfoNode;
HAnimHumanoid24: THAnimHumanoidNode;
MetadataSet25: TMetadataSetNode;
MetadataString26: TMetadataStringNode;
HAnimJoint27: THAnimJointNode;
HAnimJoint28: THAnimJointNode;
HAnimSegment29: THAnimSegmentNode;
Transform30: TTransformNode;
Shape31: TShapeNode;
Sphere32: TSphereNode;
Appearance33: TAppearanceNode;
Material34: TMaterialNode;
Shape35: TShapeNode;
Appearance36: TAppearanceNode;
Material37: TMaterialNode;
IndexedLineSet38: TIndexedLineSetNode;
Coordinate39: TCoordinateNode;
Shape40: TShapeNode;
Appearance41: TAppearanceNode;
Material42: TMaterialNode;
IndexedLineSet43: TIndexedLineSetNode;
Coordinate44: TCoordinateNode;
HAnimJoint45: THAnimJointNode;
HAnimSegment46: THAnimSegmentNode;
Transform47: TTransformNode;
Shape48: TShapeNode;
Shape49: TShapeNode;
Appearance50: TAppearanceNode;
Material51: TMaterialNode;
IndexedLineSet52: TIndexedLineSetNode;
Coordinate53: TCoordinateNode;
Shape54: TShapeNode;
Appearance55: TAppearanceNode;
Material56: TMaterialNode;
IndexedLineSet57: TIndexedLineSetNode;
Coordinate58: TCoordinateNode;
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
HAnimJoint190: THAnimJointNode;
HAnimSegment191: THAnimSegmentNode;
Transform192: TTransformNode;
Shape193: TShapeNode;
Shape194: TShapeNode;
Appearance195: TAppearanceNode;
Material196: TMaterialNode;
IndexedLineSet197: TIndexedLineSetNode;
Coordinate198: TCoordinateNode;
HAnimJoint199: THAnimJointNode;
HAnimSegment200: THAnimSegmentNode;
Transform201: TTransformNode;
Shape202: TShapeNode;
Shape203: TShapeNode;
Appearance204: TAppearanceNode;
Material205: TMaterialNode;
IndexedLineSet206: TIndexedLineSetNode;
Coordinate207: TCoordinateNode;
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
HAnimSegment268: THAnimSegmentNode;
Transform269: TTransformNode;
Shape270: TShapeNode;
Shape271: TShapeNode;
Appearance272: TAppearanceNode;
Material273: TMaterialNode;
IndexedLineSet274: TIndexedLineSetNode;
Coordinate275: TCoordinateNode;
HAnimJoint276: THAnimJointNode;
HAnimSegment277: THAnimSegmentNode;
Transform278: TTransformNode;
Shape279: TShapeNode;
Shape280: TShapeNode;
Appearance281: TAppearanceNode;
Material282: TMaterialNode;
IndexedLineSet283: TIndexedLineSetNode;
Coordinate284: TCoordinateNode;
HAnimJoint285: THAnimJointNode;
HAnimJoint286: THAnimJointNode;
HAnimJoint287: THAnimJointNode;
HAnimJoint288: THAnimJointNode;
HAnimJoint289: THAnimJointNode;
HAnimJoint290: THAnimJointNode;
HAnimJoint291: THAnimJointNode;
HAnimJoint292: THAnimJointNode;
HAnimJoint293: THAnimJointNode;
HAnimJoint294: THAnimJointNode;
HAnimJoint295: THAnimJointNode;
HAnimJoint296: THAnimJointNode;
HAnimJoint297: THAnimJointNode;
HAnimJoint298: THAnimJointNode;
HAnimJoint299: THAnimJointNode;
HAnimJoint300: THAnimJointNode;
HAnimJoint301: THAnimJointNode;
HAnimJoint302: THAnimJointNode;
HAnimJoint303: THAnimJointNode;
HAnimJoint304: THAnimJointNode;
HAnimJoint305: THAnimJointNode;
HAnimJoint306: THAnimJointNode;
HAnimJoint307: THAnimJointNode;
HAnimJoint308: THAnimJointNode;
HAnimJoint309: THAnimJointNode;
HAnimJoint310: THAnimJointNode;
HAnimJoint311: THAnimJointNode;

procedure InitHAnimModelFootLeftPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'HAnimModelFootLeft.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Left foot, using high-fidelity definitions for HAnim version 2.0';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Kwan-Hee YOO, Don Brutzman and Joe Williams';
{ METHOD .Meta }
X3D0.Meta['created'] := '26 January 2015';
{ METHOD .Meta }
X3D0.Meta['modified'] := '23 December 2021';
{ METHOD .Meta }
X3D0.Meta['warning'] := 'not yet to scale';
{ METHOD .Meta }
X3D0.Meta['warning'] := 'TODO will X3D HAnim component add a new level to support LOA-4 functionality?';
{ METHOD .Meta }
X3D0.Meta['info'] := 'TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/working-groups/humanoid-animation-HAnim';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/documents/specifications/19774/V2.0';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'X3D HAnim humanoid animation';
{ METHOD .Meta }
X3D0.Meta['TODO'] := 'Integrate and confirm Segment/Joint names, Viewpoints.';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group22 := TGroupNode.Create;
WorldInfo23 := TWorldInfoNode.Create;
WorldInfo23.Title := 'HAnimModelFootLeft.x3d';
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(WorldInfo23);
HAnimHumanoid24 := THAnimHumanoidNode.Create;
HAnimHumanoid24.Loa := 4;
HAnimHumanoid24.Version := '2.0';
{ original HAnimHumanoid info='"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams"' }
MetadataSet25 := TMetadataSetNode.Create;
MetadataSet25.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid';
MetadataString26 := TMetadataStringNode.Create;
MetadataString26.SetValue(['Kwan-Hee YOO, Don Brutzman and Joe Williams']);
{ METHOD .FdValue.Add }
MetadataSet25.FdValue.Add(MetadataString26);
{ METHOD .Metadata }
HAnimHumanoid24.Metadata := MetadataSet25;
HAnimJoint27 := THAnimJointNode.Create;
{ Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model }
HAnimJoint28 := THAnimJointNode.Create;
HAnimJoint28.Description := 'connection joint of foot to leg above';
end;

procedure InitHAnimModelFootLeftPart1;
begin

HAnimSegment29 := THAnimSegmentNode.Create;
Transform30 := TTransformNode.Create;
Shape31 := TShapeNode.Create;
Sphere32 := TSphereNode.Create;
Sphere32.Radius := 0.025;
{ METHOD .Geometry }
Shape31.Geometry := Sphere32;
Appearance33 := TAppearanceNode.Create;
Material34 := TMaterialNode.Create;
Material34.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance33.Material := Material34;
{ METHOD .Appearance }
Shape31.Appearance := Appearance33;
{ METHOD .FdChildren.Add }
Transform30.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment29.FdChildren.Add(Transform30);
Shape35 := TShapeNode.Create;
Appearance36 := TAppearanceNode.Create;
Material37 := TMaterialNode.Create;
Material37.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance36.Material := Material37;
{ METHOD .Appearance }
Shape35.Appearance := Appearance36;
IndexedLineSet38 := TIndexedLineSetNode.Create;
IndexedLineSet38.SetCoordIndex([0,1]);
Coordinate39 := TCoordinateNode.Create;
Coordinate39.SetPoint([Vector3(0,0,0),Vector3(0,-0.3,0)]);
{ METHOD .Coord }
IndexedLineSet38.Coord := Coordinate39;
{ METHOD .Geometry }
Shape35.Geometry := IndexedLineSet38;
{ METHOD .FdChildren.Add }
HAnimSegment29.FdChildren.Add(Shape35);
Shape40 := TShapeNode.Create;
Appearance41 := TAppearanceNode.Create;
Material42 := TMaterialNode.Create;
Material42.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance41.Material := Material42;
{ METHOD .Appearance }
Shape40.Appearance := Appearance41;
IndexedLineSet43 := TIndexedLineSetNode.Create;
IndexedLineSet43.SetCoordIndex([0,1]);
Coordinate44 := TCoordinateNode.Create;
Coordinate44.SetPoint([Vector3(0,0,0),Vector3(0.2,0.3,0)]);
{ METHOD .Coord }
IndexedLineSet43.Coord := Coordinate44;
{ METHOD .Geometry }
Shape40.Geometry := IndexedLineSet43;
{ METHOD .FdChildren.Add }
HAnimSegment29.FdChildren.Add(Shape40);
{ METHOD .FdChildren.Add }
HAnimJoint28.FdChildren.Add(HAnimSegment29);
end;

procedure InitHAnimModelFootLeftPart2;
begin

{ TCN }
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45.Center := Vector3(0,-0.3,0);
HAnimSegment46 := THAnimSegmentNode.Create;
Transform47 := TTransformNode.Create;
Transform47.Translation := Vector3(0,-0.3,0);
{ METHOD .FdChildren.Add }
Transform47.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(Transform47);
Shape49 := TShapeNode.Create;
Appearance50 := TAppearanceNode.Create;
Material51 := TMaterialNode.Create;
Material51.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance50.Material := Material51;
{ METHOD .Appearance }
Shape49.Appearance := Appearance50;
IndexedLineSet52 := TIndexedLineSetNode.Create;
IndexedLineSet52.SetCoordIndex([0,1]);
Coordinate53 := TCoordinateNode.Create;
Coordinate53.SetPoint([Vector3(0,-0.3,0),Vector3(-0.1,-0.45,0)]);
{ METHOD .Coord }
IndexedLineSet52.Coord := Coordinate53;
{ METHOD .Geometry }
Shape49.Geometry := IndexedLineSet52;
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(Shape49);
Shape54 := TShapeNode.Create;
Appearance55 := TAppearanceNode.Create;
Material56 := TMaterialNode.Create;
Material56.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance55.Material := Material56;
{ METHOD .Appearance }
Shape54.Appearance := Appearance55;
IndexedLineSet57 := TIndexedLineSetNode.Create;
IndexedLineSet57.SetCoordIndex([0,1]);
Coordinate58 := TCoordinateNode.Create;
Coordinate58.SetPoint([Vector3(0,-0.3,0),Vector3(0,-0.45,0)]);
{ METHOD .Coord }
IndexedLineSet57.Coord := Coordinate58;
{ METHOD .Geometry }
Shape54.Geometry := IndexedLineSet57;
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(Shape54);
Shape59 := TShapeNode.Create;
Appearance60 := TAppearanceNode.Create;
Material61 := TMaterialNode.Create;
Material61.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance60.Material := Material61;
{ METHOD .Appearance }
Shape59.Appearance := Appearance60;
IndexedLineSet62 := TIndexedLineSetNode.Create;
end;

procedure InitHAnimModelFootLeftPart3;
begin

IndexedLineSet62.SetCoordIndex([0,1]);
Coordinate63 := TCoordinateNode.Create;
Coordinate63.SetPoint([Vector3(0,-0.3,0),Vector3(0.1,-0.4,0)]);
{ METHOD .Coord }
IndexedLineSet62.Coord := Coordinate63;
{ METHOD .Geometry }
Shape59.Geometry := IndexedLineSet62;
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(Shape59);
{ METHOD .FdChildren.Add }
HAnimJoint45.FdChildren.Add(HAnimSegment46);
{ CN1 }
HAnimJoint64 := THAnimJointNode.Create;
HAnimJoint64.Center := Vector3(-0.1,-0.45,0);
HAnimSegment65 := THAnimSegmentNode.Create;
Transform66 := TTransformNode.Create;
Transform66.Translation := Vector3(-0.1,-0.45,0);
{ METHOD .FdChildren.Add }
Transform66.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment65.FdChildren.Add(Transform66);
Shape68 := TShapeNode.Create;
Appearance69 := TAppearanceNode.Create;
Material70 := TMaterialNode.Create;
Material70.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance69.Material := Material70;
{ METHOD .Appearance }
Shape68.Appearance := Appearance69;
IndexedLineSet71 := TIndexedLineSetNode.Create;
IndexedLineSet71.SetCoordIndex([0,1]);
Coordinate72 := TCoordinateNode.Create;
Coordinate72.SetPoint([Vector3(-0.1,-0.45,0),Vector3(-0.1,-0.6,0)]);
{ METHOD .Coord }
IndexedLineSet71.Coord := Coordinate72;
{ METHOD .Geometry }
Shape68.Geometry := IndexedLineSet71;
{ METHOD .FdChildren.Add }
HAnimSegment65.FdChildren.Add(Shape68);
{ METHOD .FdChildren.Add }
HAnimJoint64.FdChildren.Add(HAnimSegment65);
HAnimJoint73 := THAnimJointNode.Create;
HAnimJoint73.Center := Vector3(-0.1,-0.6,0);
HAnimSegment74 := THAnimSegmentNode.Create;
Transform75 := TTransformNode.Create;
Transform75.Translation := Vector3(-0.1,-0.6,0);
{ METHOD .FdChildren.Add }
Transform75.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment74.FdChildren.Add(Transform75);
Shape77 := TShapeNode.Create;
Appearance78 := TAppearanceNode.Create;
Material79 := TMaterialNode.Create;
Material79.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance78.Material := Material79;
end;

procedure InitHAnimModelFootLeftPart4;
begin

{ METHOD .Appearance }
Shape77.Appearance := Appearance78;
IndexedLineSet80 := TIndexedLineSetNode.Create;
IndexedLineSet80.SetCoordIndex([0,1]);
Coordinate81 := TCoordinateNode.Create;
Coordinate81.SetPoint([Vector3(-0.1,-0.6,0),Vector3(-0.1,-0.9,0)]);
{ METHOD .Coord }
IndexedLineSet80.Coord := Coordinate81;
{ METHOD .Geometry }
Shape77.Geometry := IndexedLineSet80;
{ METHOD .FdChildren.Add }
HAnimSegment74.FdChildren.Add(Shape77);
{ METHOD .FdChildren.Add }
HAnimJoint73.FdChildren.Add(HAnimSegment74);
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.Center := Vector3(-0.1,-0.9,0);
HAnimSegment83 := THAnimSegmentNode.Create;
Transform84 := TTransformNode.Create;
Transform84.Translation := Vector3(-0.1,-0.9,0);
{ METHOD .FdChildren.Add }
Transform84.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment83.FdChildren.Add(Transform84);
Shape86 := TShapeNode.Create;
Appearance87 := TAppearanceNode.Create;
Material88 := TMaterialNode.Create;
Material88.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance87.Material := Material88;
{ METHOD .Appearance }
Shape86.Appearance := Appearance87;
IndexedLineSet89 := TIndexedLineSetNode.Create;
IndexedLineSet89.SetCoordIndex([0,1]);
Coordinate90 := TCoordinateNode.Create;
Coordinate90.SetPoint([Vector3(-0.1,-0.9,0),Vector3(-0.1,-1.05,0)]);
{ METHOD .Coord }
IndexedLineSet89.Coord := Coordinate90;
{ METHOD .Geometry }
Shape86.Geometry := IndexedLineSet89;
{ METHOD .FdChildren.Add }
HAnimSegment83.FdChildren.Add(Shape86);
{ METHOD .FdChildren.Add }
HAnimJoint82.FdChildren.Add(HAnimSegment83);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.Center := Vector3(-0.1,-1.05,0);
HAnimSegment92 := THAnimSegmentNode.Create;
Transform93 := TTransformNode.Create;
Transform93.Translation := Vector3(-0.1,-1.05,0);
{ METHOD .FdChildren.Add }
Transform93.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment92.FdChildren.Add(Transform93);
Shape95 := TShapeNode.Create;
Appearance96 := TAppearanceNode.Create;
Material97 := TMaterialNode.Create;
end;

procedure InitHAnimModelFootLeftPart5;
begin

Material97.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance96.Material := Material97;
{ METHOD .Appearance }
Shape95.Appearance := Appearance96;
IndexedLineSet98 := TIndexedLineSetNode.Create;
IndexedLineSet98.SetCoordIndex([0,1]);
Coordinate99 := TCoordinateNode.Create;
Coordinate99.SetPoint([Vector3(-0.1,-1.05,0),Vector3(-0.1,-1.1,0)]);
{ METHOD .Coord }
IndexedLineSet98.Coord := Coordinate99;
{ METHOD .Geometry }
Shape95.Geometry := IndexedLineSet98;
{ METHOD .FdChildren.Add }
HAnimSegment92.FdChildren.Add(Shape95);
{ METHOD .FdChildren.Add }
HAnimJoint91.FdChildren.Add(HAnimSegment92);
{ METHOD .FdChildren.Add }
HAnimJoint82.FdChildren.Add(HAnimJoint91);
{ METHOD .FdChildren.Add }
HAnimJoint73.FdChildren.Add(HAnimJoint82);
{ METHOD .FdChildren.Add }
HAnimJoint64.FdChildren.Add(HAnimJoint73);
{ METHOD .FdChildren.Add }
HAnimJoint45.FdChildren.Add(HAnimJoint64);
{ CN2 }
HAnimJoint100 := THAnimJointNode.Create;
HAnimJoint100.Center := Vector3(0,-0.45,0);
HAnimSegment101 := THAnimSegmentNode.Create;
Transform102 := TTransformNode.Create;
Transform102.Translation := Vector3(0,-0.45,0);
{ METHOD .FdChildren.Add }
Transform102.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment101.FdChildren.Add(Transform102);
Shape104 := TShapeNode.Create;
Appearance105 := TAppearanceNode.Create;
Material106 := TMaterialNode.Create;
Material106.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance105.Material := Material106;
{ METHOD .Appearance }
Shape104.Appearance := Appearance105;
IndexedLineSet107 := TIndexedLineSetNode.Create;
IndexedLineSet107.SetCoordIndex([0,1]);
Coordinate108 := TCoordinateNode.Create;
Coordinate108.SetPoint([Vector3(0,-0.45,0),Vector3(0.05,-0.6,0)]);
{ METHOD .Coord }
IndexedLineSet107.Coord := Coordinate108;
{ METHOD .Geometry }
Shape104.Geometry := IndexedLineSet107;
{ METHOD .FdChildren.Add }
HAnimSegment101.FdChildren.Add(Shape104);
{ METHOD .FdChildren.Add }
HAnimJoint100.FdChildren.Add(HAnimSegment101);
HAnimJoint109 := THAnimJointNode.Create;
HAnimJoint109.Center := Vector3(0.05,-0.6,0);
HAnimSegment110 := THAnimSegmentNode.Create;
Transform111 := TTransformNode.Create;
end;

procedure InitHAnimModelFootLeftPart6;
begin

Transform111.Translation := Vector3(0.05,-0.6,0);
{ METHOD .FdChildren.Add }
Transform111.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment110.FdChildren.Add(Transform111);
Shape113 := TShapeNode.Create;
Appearance114 := TAppearanceNode.Create;
Material115 := TMaterialNode.Create;
Material115.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance114.Material := Material115;
{ METHOD .Appearance }
Shape113.Appearance := Appearance114;
IndexedLineSet116 := TIndexedLineSetNode.Create;
IndexedLineSet116.SetCoordIndex([0,1]);
Coordinate117 := TCoordinateNode.Create;
Coordinate117.SetPoint([Vector3(0.05,-0.6,0),Vector3(0.05,-0.9,0)]);
{ METHOD .Coord }
IndexedLineSet116.Coord := Coordinate117;
{ METHOD .Geometry }
Shape113.Geometry := IndexedLineSet116;
{ METHOD .FdChildren.Add }
HAnimSegment110.FdChildren.Add(Shape113);
{ METHOD .FdChildren.Add }
HAnimJoint109.FdChildren.Add(HAnimSegment110);
HAnimJoint118 := THAnimJointNode.Create;
HAnimJoint118.Center := Vector3(0.05,-0.9,0);
HAnimSegment119 := THAnimSegmentNode.Create;
Transform120 := TTransformNode.Create;
Transform120.Translation := Vector3(0.05,-0.9,0);
{ METHOD .FdChildren.Add }
Transform120.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment119.FdChildren.Add(Transform120);
Shape122 := TShapeNode.Create;
Appearance123 := TAppearanceNode.Create;
Material124 := TMaterialNode.Create;
Material124.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance123.Material := Material124;
{ METHOD .Appearance }
Shape122.Appearance := Appearance123;
IndexedLineSet125 := TIndexedLineSetNode.Create;
IndexedLineSet125.SetCoordIndex([0,1]);
Coordinate126 := TCoordinateNode.Create;
Coordinate126.SetPoint([Vector3(0.05,-0.9,0),Vector3(0.05,-1.05,0)]);
{ METHOD .Coord }
IndexedLineSet125.Coord := Coordinate126;
{ METHOD .Geometry }
Shape122.Geometry := IndexedLineSet125;
{ METHOD .FdChildren.Add }
HAnimSegment119.FdChildren.Add(Shape122);
{ METHOD .FdChildren.Add }
HAnimJoint118.FdChildren.Add(HAnimSegment119);
HAnimJoint127 := THAnimJointNode.Create;
HAnimJoint127.Center := Vector3(0.05,-1.05,0);
end;

procedure InitHAnimModelFootLeftPart7;
begin

HAnimSegment128 := THAnimSegmentNode.Create;
Transform129 := TTransformNode.Create;
Transform129.Translation := Vector3(0.05,-1.05,0);
{ METHOD .FdChildren.Add }
Transform129.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment128.FdChildren.Add(Transform129);
Shape131 := TShapeNode.Create;
Appearance132 := TAppearanceNode.Create;
Material133 := TMaterialNode.Create;
Material133.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance132.Material := Material133;
{ METHOD .Appearance }
Shape131.Appearance := Appearance132;
IndexedLineSet134 := TIndexedLineSetNode.Create;
IndexedLineSet134.SetCoordIndex([0,1]);
Coordinate135 := TCoordinateNode.Create;
Coordinate135.SetPoint([Vector3(0.05,-1.05,0),Vector3(0.05,-1.12,0)]);
{ METHOD .Coord }
IndexedLineSet134.Coord := Coordinate135;
{ METHOD .Geometry }
Shape131.Geometry := IndexedLineSet134;
{ METHOD .FdChildren.Add }
HAnimSegment128.FdChildren.Add(Shape131);
{ METHOD .FdChildren.Add }
HAnimJoint127.FdChildren.Add(HAnimSegment128);
HAnimJoint136 := THAnimJointNode.Create;
HAnimJoint136.Center := Vector3(0.05,-1.12,0);
HAnimSegment137 := THAnimSegmentNode.Create;
Transform138 := TTransformNode.Create;
Transform138.Translation := Vector3(0.05,-1.12,0);
{ METHOD .FdChildren.Add }
Transform138.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment137.FdChildren.Add(Transform138);
Shape140 := TShapeNode.Create;
Appearance141 := TAppearanceNode.Create;
Material142 := TMaterialNode.Create;
Material142.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance141.Material := Material142;
{ METHOD .Appearance }
Shape140.Appearance := Appearance141;
IndexedLineSet143 := TIndexedLineSetNode.Create;
IndexedLineSet143.SetCoordIndex([0,1]);
Coordinate144 := TCoordinateNode.Create;
Coordinate144.SetPoint([Vector3(0.05,-1.12,0),Vector3(0.05,-1.16,0)]);
{ METHOD .Coord }
IndexedLineSet143.Coord := Coordinate144;
{ METHOD .Geometry }
Shape140.Geometry := IndexedLineSet143;
{ METHOD .FdChildren.Add }
HAnimSegment137.FdChildren.Add(Shape140);
{ METHOD .FdChildren.Add }
HAnimJoint136.FdChildren.Add(HAnimSegment137);
end;

procedure InitHAnimModelFootLeftPart8;
begin

{ METHOD .FdChildren.Add }
HAnimJoint127.FdChildren.Add(HAnimJoint136);
{ METHOD .FdChildren.Add }
HAnimJoint118.FdChildren.Add(HAnimJoint127);
{ METHOD .FdChildren.Add }
HAnimJoint109.FdChildren.Add(HAnimJoint118);
{ METHOD .FdChildren.Add }
HAnimJoint100.FdChildren.Add(HAnimJoint109);
{ METHOD .FdChildren.Add }
HAnimJoint45.FdChildren.Add(HAnimJoint100);
{ CN3 }
HAnimJoint145 := THAnimJointNode.Create;
HAnimJoint145.Center := Vector3(0.1,-0.4,0);
HAnimSegment146 := THAnimSegmentNode.Create;
Transform147 := TTransformNode.Create;
Transform147.Translation := Vector3(0.1,-0.4,0);
{ METHOD .FdChildren.Add }
Transform147.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment146.FdChildren.Add(Transform147);
Shape149 := TShapeNode.Create;
Appearance150 := TAppearanceNode.Create;
Material151 := TMaterialNode.Create;
Material151.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance150.Material := Material151;
{ METHOD .Appearance }
Shape149.Appearance := Appearance150;
IndexedLineSet152 := TIndexedLineSetNode.Create;
IndexedLineSet152.SetCoordIndex([0,1]);
Coordinate153 := TCoordinateNode.Create;
Coordinate153.SetPoint([Vector3(0.1,-0.4,0),Vector3(0.15,-0.6,0)]);
{ METHOD .Coord }
IndexedLineSet152.Coord := Coordinate153;
{ METHOD .Geometry }
Shape149.Geometry := IndexedLineSet152;
{ METHOD .FdChildren.Add }
HAnimSegment146.FdChildren.Add(Shape149);
{ METHOD .FdChildren.Add }
HAnimJoint145.FdChildren.Add(HAnimSegment146);
HAnimJoint154 := THAnimJointNode.Create;
HAnimJoint154.Center := Vector3(0.15,-0.6,0);
HAnimSegment155 := THAnimSegmentNode.Create;
Transform156 := TTransformNode.Create;
Transform156.Translation := Vector3(0.15,-0.6,0);
{ METHOD .FdChildren.Add }
Transform156.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment155.FdChildren.Add(Transform156);
Shape158 := TShapeNode.Create;
Appearance159 := TAppearanceNode.Create;
Material160 := TMaterialNode.Create;
Material160.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance159.Material := Material160;
{ METHOD .Appearance }
Shape158.Appearance := Appearance159;
IndexedLineSet161 := TIndexedLineSetNode.Create;
end;

procedure InitHAnimModelFootLeftPart9;
begin

IndexedLineSet161.SetCoordIndex([0,1]);
Coordinate162 := TCoordinateNode.Create;
Coordinate162.SetPoint([Vector3(0.15,-0.6,0),Vector3(0.15,-0.9,0)]);
{ METHOD .Coord }
IndexedLineSet161.Coord := Coordinate162;
{ METHOD .Geometry }
Shape158.Geometry := IndexedLineSet161;
{ METHOD .FdChildren.Add }
HAnimSegment155.FdChildren.Add(Shape158);
{ METHOD .FdChildren.Add }
HAnimJoint154.FdChildren.Add(HAnimSegment155);
HAnimJoint163 := THAnimJointNode.Create;
HAnimJoint163.Center := Vector3(0.15,-0.9,0);
HAnimSegment164 := THAnimSegmentNode.Create;
Transform165 := TTransformNode.Create;
Transform165.Translation := Vector3(0.15,-0.9,0);
{ METHOD .FdChildren.Add }
Transform165.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment164.FdChildren.Add(Transform165);
Shape167 := TShapeNode.Create;
Appearance168 := TAppearanceNode.Create;
Material169 := TMaterialNode.Create;
Material169.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance168.Material := Material169;
{ METHOD .Appearance }
Shape167.Appearance := Appearance168;
IndexedLineSet170 := TIndexedLineSetNode.Create;
IndexedLineSet170.SetCoordIndex([0,1]);
Coordinate171 := TCoordinateNode.Create;
Coordinate171.SetPoint([Vector3(0.15,-0.9,0),Vector3(0.15,-1.05,0)]);
{ METHOD .Coord }
IndexedLineSet170.Coord := Coordinate171;
{ METHOD .Geometry }
Shape167.Geometry := IndexedLineSet170;
{ METHOD .FdChildren.Add }
HAnimSegment164.FdChildren.Add(Shape167);
{ METHOD .FdChildren.Add }
HAnimJoint163.FdChildren.Add(HAnimSegment164);
HAnimJoint172 := THAnimJointNode.Create;
HAnimJoint172.Center := Vector3(0.15,-1.05,0);
HAnimSegment173 := THAnimSegmentNode.Create;
Transform174 := TTransformNode.Create;
Transform174.Translation := Vector3(0.15,-1.05,0);
{ METHOD .FdChildren.Add }
Transform174.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment173.FdChildren.Add(Transform174);
Shape176 := TShapeNode.Create;
Appearance177 := TAppearanceNode.Create;
Material178 := TMaterialNode.Create;
Material178.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance177.Material := Material178;
end;

procedure InitHAnimModelFootLeftPart10;
begin

{ METHOD .Appearance }
Shape176.Appearance := Appearance177;
IndexedLineSet179 := TIndexedLineSetNode.Create;
IndexedLineSet179.SetCoordIndex([0,1]);
Coordinate180 := TCoordinateNode.Create;
Coordinate180.SetPoint([Vector3(0.15,-1.05,0),Vector3(0.15,-1.13,0)]);
{ METHOD .Coord }
IndexedLineSet179.Coord := Coordinate180;
{ METHOD .Geometry }
Shape176.Geometry := IndexedLineSet179;
{ METHOD .FdChildren.Add }
HAnimSegment173.FdChildren.Add(Shape176);
{ METHOD .FdChildren.Add }
HAnimJoint172.FdChildren.Add(HAnimSegment173);
HAnimJoint181 := THAnimJointNode.Create;
HAnimJoint181.Center := Vector3(0.15,-1.13,0);
HAnimSegment182 := THAnimSegmentNode.Create;
Transform183 := TTransformNode.Create;
Transform183.Translation := Vector3(0.15,-1.13,0);
{ METHOD .FdChildren.Add }
Transform183.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment182.FdChildren.Add(Transform183);
Shape185 := TShapeNode.Create;
Appearance186 := TAppearanceNode.Create;
Material187 := TMaterialNode.Create;
Material187.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance186.Material := Material187;
{ METHOD .Appearance }
Shape185.Appearance := Appearance186;
IndexedLineSet188 := TIndexedLineSetNode.Create;
IndexedLineSet188.SetCoordIndex([0,1]);
Coordinate189 := TCoordinateNode.Create;
Coordinate189.SetPoint([Vector3(0.15,-1.13,0),Vector3(0.15,-1.16,0)]);
{ METHOD .Coord }
IndexedLineSet188.Coord := Coordinate189;
{ METHOD .Geometry }
Shape185.Geometry := IndexedLineSet188;
{ METHOD .FdChildren.Add }
HAnimSegment182.FdChildren.Add(Shape185);
{ METHOD .FdChildren.Add }
HAnimJoint181.FdChildren.Add(HAnimSegment182);
{ METHOD .FdChildren.Add }
HAnimJoint172.FdChildren.Add(HAnimJoint181);
{ METHOD .FdChildren.Add }
HAnimJoint163.FdChildren.Add(HAnimJoint172);
{ METHOD .FdChildren.Add }
HAnimJoint154.FdChildren.Add(HAnimJoint163);
{ METHOD .FdChildren.Add }
HAnimJoint145.FdChildren.Add(HAnimJoint154);
{ METHOD .FdChildren.Add }
HAnimJoint45.FdChildren.Add(HAnimJoint145);
{ METHOD .FdChildren.Add }
HAnimJoint28.FdChildren.Add(HAnimJoint45);
{ CC }
HAnimJoint190 := THAnimJointNode.Create;
HAnimJoint190.Center := Vector3(0.2,0.3,0);
HAnimSegment191 := THAnimSegmentNode.Create;
Transform192 := TTransformNode.Create;
end;

procedure InitHAnimModelFootLeftPart11;
begin

Transform192.Translation := Vector3(0.2,0.3,0);
{ METHOD .FdChildren.Add }
Transform192.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment191.FdChildren.Add(Transform192);
Shape194 := TShapeNode.Create;
Appearance195 := TAppearanceNode.Create;
Material196 := TMaterialNode.Create;
Material196.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance195.Material := Material196;
{ METHOD .Appearance }
Shape194.Appearance := Appearance195;
IndexedLineSet197 := TIndexedLineSetNode.Create;
IndexedLineSet197.SetCoordIndex([0,1]);
Coordinate198 := TCoordinateNode.Create;
Coordinate198.SetPoint([Vector3(0.2,0.3,0),Vector3(0.21,-0.3,0)]);
{ METHOD .Coord }
IndexedLineSet197.Coord := Coordinate198;
{ METHOD .Geometry }
Shape194.Geometry := IndexedLineSet197;
{ METHOD .FdChildren.Add }
HAnimSegment191.FdChildren.Add(Shape194);
{ METHOD .FdChildren.Add }
HAnimJoint190.FdChildren.Add(HAnimSegment191);
{ TT }
HAnimJoint199 := THAnimJointNode.Create;
HAnimJoint199.Center := Vector3(0.21,-0.3,0);
HAnimSegment200 := THAnimSegmentNode.Create;
Transform201 := TTransformNode.Create;
Transform201.Translation := Vector3(0.21,-0.3,0);
{ METHOD .FdChildren.Add }
Transform201.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment200.FdChildren.Add(Transform201);
Shape203 := TShapeNode.Create;
Appearance204 := TAppearanceNode.Create;
Material205 := TMaterialNode.Create;
Material205.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance204.Material := Material205;
{ METHOD .Appearance }
Shape203.Appearance := Appearance204;
IndexedLineSet206 := TIndexedLineSetNode.Create;
IndexedLineSet206.SetCoordIndex([0,1]);
Coordinate207 := TCoordinateNode.Create;
Coordinate207.SetPoint([Vector3(0.21,-0.3,0),Vector3(0.25,-0.58,0)]);
{ METHOD .Coord }
IndexedLineSet206.Coord := Coordinate207;
{ METHOD .Geometry }
Shape203.Geometry := IndexedLineSet206;
{ METHOD .FdChildren.Add }
HAnimSegment200.FdChildren.Add(Shape203);
Shape208 := TShapeNode.Create;
Appearance209 := TAppearanceNode.Create;
Material210 := TMaterialNode.Create;
end;

procedure InitHAnimModelFootLeftPart12;
begin

Material210.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance209.Material := Material210;
{ METHOD .Appearance }
Shape208.Appearance := Appearance209;
IndexedLineSet211 := TIndexedLineSetNode.Create;
IndexedLineSet211.SetCoordIndex([0,1]);
Coordinate212 := TCoordinateNode.Create;
Coordinate212.SetPoint([Vector3(0.21,-0.3,0),Vector3(0.33,-0.52,0)]);
{ METHOD .Coord }
IndexedLineSet211.Coord := Coordinate212;
{ METHOD .Geometry }
Shape208.Geometry := IndexedLineSet211;
{ METHOD .FdChildren.Add }
HAnimSegment200.FdChildren.Add(Shape208);
{ METHOD .FdChildren.Add }
HAnimJoint199.FdChildren.Add(HAnimSegment200);
{ TMT4 }
HAnimJoint213 := THAnimJointNode.Create;
HAnimJoint213.Center := Vector3(0.25,-0.58,0);
HAnimSegment214 := THAnimSegmentNode.Create;
Transform215 := TTransformNode.Create;
Transform215.Translation := Vector3(0.25,-0.58,0);
{ METHOD .FdChildren.Add }
Transform215.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment214.FdChildren.Add(Transform215);
Shape217 := TShapeNode.Create;
Appearance218 := TAppearanceNode.Create;
Material219 := TMaterialNode.Create;
Material219.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance218.Material := Material219;
{ METHOD .Appearance }
Shape217.Appearance := Appearance218;
IndexedLineSet220 := TIndexedLineSetNode.Create;
IndexedLineSet220.SetCoordIndex([0,1]);
Coordinate221 := TCoordinateNode.Create;
Coordinate221.SetPoint([Vector3(0.25,-0.58,0),Vector3(0.25,-0.87,0)]);
{ METHOD .Coord }
IndexedLineSet220.Coord := Coordinate221;
{ METHOD .Geometry }
Shape217.Geometry := IndexedLineSet220;
{ METHOD .FdChildren.Add }
HAnimSegment214.FdChildren.Add(Shape217);
{ METHOD .FdChildren.Add }
HAnimJoint213.FdChildren.Add(HAnimSegment214);
HAnimJoint222 := THAnimJointNode.Create;
HAnimJoint222.Center := Vector3(0.25,-0.87,0);
HAnimSegment223 := THAnimSegmentNode.Create;
Transform224 := TTransformNode.Create;
Transform224.Translation := Vector3(0.25,-0.87,0);
{ METHOD .FdChildren.Add }
Transform224.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment223.FdChildren.Add(Transform224);
Shape226 := TShapeNode.Create;
end;

procedure InitHAnimModelFootLeftPart13;
begin

Appearance227 := TAppearanceNode.Create;
Material228 := TMaterialNode.Create;
Material228.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance227.Material := Material228;
{ METHOD .Appearance }
Shape226.Appearance := Appearance227;
IndexedLineSet229 := TIndexedLineSetNode.Create;
IndexedLineSet229.SetCoordIndex([0,1]);
Coordinate230 := TCoordinateNode.Create;
Coordinate230.SetPoint([Vector3(0.25,-0.87,0),Vector3(0.25,-1,0)]);
{ METHOD .Coord }
IndexedLineSet229.Coord := Coordinate230;
{ METHOD .Geometry }
Shape226.Geometry := IndexedLineSet229;
{ METHOD .FdChildren.Add }
HAnimSegment223.FdChildren.Add(Shape226);
{ METHOD .FdChildren.Add }
HAnimJoint222.FdChildren.Add(HAnimSegment223);
HAnimJoint231 := THAnimJointNode.Create;
HAnimJoint231.Center := Vector3(0.25,-1,0);
HAnimSegment232 := THAnimSegmentNode.Create;
Transform233 := TTransformNode.Create;
Transform233.Translation := Vector3(0.25,-1,0);
{ METHOD .FdChildren.Add }
Transform233.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment232.FdChildren.Add(Transform233);
Shape235 := TShapeNode.Create;
Appearance236 := TAppearanceNode.Create;
Material237 := TMaterialNode.Create;
Material237.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance236.Material := Material237;
{ METHOD .Appearance }
Shape235.Appearance := Appearance236;
IndexedLineSet238 := TIndexedLineSetNode.Create;
IndexedLineSet238.SetCoordIndex([0,1]);
Coordinate239 := TCoordinateNode.Create;
Coordinate239.SetPoint([Vector3(0.25,-1,0),Vector3(0.25,-1.1,0)]);
{ METHOD .Coord }
IndexedLineSet238.Coord := Coordinate239;
{ METHOD .Geometry }
Shape235.Geometry := IndexedLineSet238;
{ METHOD .FdChildren.Add }
HAnimSegment232.FdChildren.Add(Shape235);
{ METHOD .FdChildren.Add }
HAnimJoint231.FdChildren.Add(HAnimSegment232);
HAnimJoint240 := THAnimJointNode.Create;
HAnimJoint240.Center := Vector3(0.25,-1.1,0);
HAnimSegment241 := THAnimSegmentNode.Create;
Transform242 := TTransformNode.Create;
Transform242.Translation := Vector3(0.25,-1.1,0);
{ METHOD .FdChildren.Add }
Transform242.FdChildren.Add(Shape31);
end;

procedure InitHAnimModelFootLeftPart14;
begin

{ METHOD .FdChildren.Add }
HAnimSegment241.FdChildren.Add(Transform242);
Shape244 := TShapeNode.Create;
Appearance245 := TAppearanceNode.Create;
Material246 := TMaterialNode.Create;
Material246.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance245.Material := Material246;
{ METHOD .Appearance }
Shape244.Appearance := Appearance245;
IndexedLineSet247 := TIndexedLineSetNode.Create;
IndexedLineSet247.SetCoordIndex([0,1]);
Coordinate248 := TCoordinateNode.Create;
Coordinate248.SetPoint([Vector3(0.25,-1.1,0),Vector3(0.25,-1.15,0)]);
{ METHOD .Coord }
IndexedLineSet247.Coord := Coordinate248;
{ METHOD .Geometry }
Shape244.Geometry := IndexedLineSet247;
{ METHOD .FdChildren.Add }
HAnimSegment241.FdChildren.Add(Shape244);
{ METHOD .FdChildren.Add }
HAnimJoint240.FdChildren.Add(HAnimSegment241);
{ METHOD .FdChildren.Add }
HAnimJoint231.FdChildren.Add(HAnimJoint240);
{ METHOD .FdChildren.Add }
HAnimJoint222.FdChildren.Add(HAnimJoint231);
{ METHOD .FdChildren.Add }
HAnimJoint213.FdChildren.Add(HAnimJoint222);
{ METHOD .FdChildren.Add }
HAnimJoint199.FdChildren.Add(HAnimJoint213);
{ TMT5 }
HAnimJoint249 := THAnimJointNode.Create;
HAnimJoint249.Center := Vector3(0.33,-0.52,0);
HAnimSegment250 := THAnimSegmentNode.Create;
Transform251 := TTransformNode.Create;
Transform251.Translation := Vector3(0.33,-0.52,0);
{ METHOD .FdChildren.Add }
Transform251.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment250.FdChildren.Add(Transform251);
Shape253 := TShapeNode.Create;
Appearance254 := TAppearanceNode.Create;
Material255 := TMaterialNode.Create;
Material255.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance254.Material := Material255;
{ METHOD .Appearance }
Shape253.Appearance := Appearance254;
IndexedLineSet256 := TIndexedLineSetNode.Create;
IndexedLineSet256.SetCoordIndex([0,1]);
Coordinate257 := TCoordinateNode.Create;
Coordinate257.SetPoint([Vector3(0.33,-0.52,0),Vector3(0.34,-0.8,0)]);
{ METHOD .Coord }
IndexedLineSet256.Coord := Coordinate257;
{ METHOD .Geometry }
Shape253.Geometry := IndexedLineSet256;
{ METHOD .FdChildren.Add }
HAnimSegment250.FdChildren.Add(Shape253);
{ METHOD .FdChildren.Add }
HAnimJoint249.FdChildren.Add(HAnimSegment250);
end;

procedure InitHAnimModelFootLeftPart15;
begin

HAnimJoint258 := THAnimJointNode.Create;
HAnimJoint258.Center := Vector3(0.34,-0.8,0);
HAnimSegment259 := THAnimSegmentNode.Create;
Transform260 := TTransformNode.Create;
Transform260.Translation := Vector3(0.34,-0.8,0);
{ METHOD .FdChildren.Add }
Transform260.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment259.FdChildren.Add(Transform260);
Shape262 := TShapeNode.Create;
Appearance263 := TAppearanceNode.Create;
Material264 := TMaterialNode.Create;
Material264.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance263.Material := Material264;
{ METHOD .Appearance }
Shape262.Appearance := Appearance263;
IndexedLineSet265 := TIndexedLineSetNode.Create;
IndexedLineSet265.SetCoordIndex([0,1]);
Coordinate266 := TCoordinateNode.Create;
Coordinate266.SetPoint([Vector3(0.34,-0.8,0),Vector3(0.34,-0.95,0)]);
{ METHOD .Coord }
IndexedLineSet265.Coord := Coordinate266;
{ METHOD .Geometry }
Shape262.Geometry := IndexedLineSet265;
{ METHOD .FdChildren.Add }
HAnimSegment259.FdChildren.Add(Shape262);
{ METHOD .FdChildren.Add }
HAnimJoint258.FdChildren.Add(HAnimSegment259);
HAnimJoint267 := THAnimJointNode.Create;
HAnimJoint267.Center := Vector3(0.34,-0.95,0);
HAnimSegment268 := THAnimSegmentNode.Create;
Transform269 := TTransformNode.Create;
Transform269.Translation := Vector3(0.34,-0.95,0);
{ METHOD .FdChildren.Add }
Transform269.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment268.FdChildren.Add(Transform269);
Shape271 := TShapeNode.Create;
Appearance272 := TAppearanceNode.Create;
Material273 := TMaterialNode.Create;
Material273.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance272.Material := Material273;
{ METHOD .Appearance }
Shape271.Appearance := Appearance272;
IndexedLineSet274 := TIndexedLineSetNode.Create;
IndexedLineSet274.SetCoordIndex([0,1]);
Coordinate275 := TCoordinateNode.Create;
Coordinate275.SetPoint([Vector3(0.34,-0.95,0),Vector3(0.34,-1.05,0)]);
{ METHOD .Coord }
IndexedLineSet274.Coord := Coordinate275;
{ METHOD .Geometry }
Shape271.Geometry := IndexedLineSet274;
end;

procedure InitHAnimModelFootLeftPart16;
begin

{ METHOD .FdChildren.Add }
HAnimSegment268.FdChildren.Add(Shape271);
{ METHOD .FdChildren.Add }
HAnimJoint267.FdChildren.Add(HAnimSegment268);
HAnimJoint276 := THAnimJointNode.Create;
HAnimJoint276.Center := Vector3(0.34,-1.05,0);
HAnimSegment277 := THAnimSegmentNode.Create;
Transform278 := TTransformNode.Create;
Transform278.Translation := Vector3(0.34,-1.05,0);
{ METHOD .FdChildren.Add }
Transform278.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
HAnimSegment277.FdChildren.Add(Transform278);
Shape280 := TShapeNode.Create;
Appearance281 := TAppearanceNode.Create;
Material282 := TMaterialNode.Create;
Material282.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance281.Material := Material282;
{ METHOD .Appearance }
Shape280.Appearance := Appearance281;
IndexedLineSet283 := TIndexedLineSetNode.Create;
IndexedLineSet283.SetCoordIndex([0,1]);
Coordinate284 := TCoordinateNode.Create;
Coordinate284.SetPoint([Vector3(0.34,-1.05,0),Vector3(0.34,-1.08,0)]);
{ METHOD .Coord }
IndexedLineSet283.Coord := Coordinate284;
{ METHOD .Geometry }
Shape280.Geometry := IndexedLineSet283;
{ METHOD .FdChildren.Add }
HAnimSegment277.FdChildren.Add(Shape280);
{ METHOD .FdChildren.Add }
HAnimJoint276.FdChildren.Add(HAnimSegment277);
{ METHOD .FdChildren.Add }
HAnimJoint267.FdChildren.Add(HAnimJoint276);
{ METHOD .FdChildren.Add }
HAnimJoint258.FdChildren.Add(HAnimJoint267);
{ METHOD .FdChildren.Add }
HAnimJoint249.FdChildren.Add(HAnimJoint258);
{ METHOD .FdChildren.Add }
HAnimJoint199.FdChildren.Add(HAnimJoint249);
{ METHOD .FdChildren.Add }
HAnimJoint190.FdChildren.Add(HAnimJoint199);
{ METHOD .FdChildren.Add }
HAnimJoint28.FdChildren.Add(HAnimJoint190);
{ METHOD .FdChildren.Add }
HAnimJoint27.FdChildren.Add(HAnimJoint28);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid24.FdSkeleton.Add(HAnimJoint27);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint27);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint190);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint64);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint100);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint145);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint82);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint118);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint163);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint222);
end;

procedure InitHAnimModelFootLeftPart17;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint258);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint45);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint28);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint136);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint181);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint240);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint276);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint91);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint127);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint172);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint231);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint267);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint73);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint109);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint154);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint213);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint249);
{ METHOD .FdJoints.Add }
HAnimHumanoid24.FdJoints.Add(HAnimJoint199);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(HAnimHumanoid24);
{ METHOD .AddGroup }
X3D0.AddChildren([Group22]);
end;

function CreateHAnimModelFootLeft: TX3DRootNode;
begin
InitHAnimModelFootLeftPart0;
InitHAnimModelFootLeftPart1;
InitHAnimModelFootLeftPart2;
InitHAnimModelFootLeftPart3;
InitHAnimModelFootLeftPart4;
InitHAnimModelFootLeftPart5;
InitHAnimModelFootLeftPart6;
InitHAnimModelFootLeftPart7;
InitHAnimModelFootLeftPart8;
InitHAnimModelFootLeftPart9;
InitHAnimModelFootLeftPart10;
InitHAnimModelFootLeftPart11;
InitHAnimModelFootLeftPart12;
InitHAnimModelFootLeftPart13;
InitHAnimModelFootLeftPart14;
InitHAnimModelFootLeftPart15;
InitHAnimModelFootLeftPart16;
InitHAnimModelFootLeftPart17;
Result := X3D0;
end;

begin
end.
