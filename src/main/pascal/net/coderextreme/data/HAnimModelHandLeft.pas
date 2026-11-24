unit HAnimModelHandLeft;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateHAnimModelHandLeft: TX3DRootNode;

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
Shape64: TShapeNode;
Appearance65: TAppearanceNode;
Material66: TMaterialNode;
IndexedLineSet67: TIndexedLineSetNode;
Coordinate68: TCoordinateNode;
HAnimJoint69: THAnimJointNode;
HAnimSegment70: THAnimSegmentNode;
Transform71: TTransformNode;
Shape72: TShapeNode;
Shape73: TShapeNode;
Appearance74: TAppearanceNode;
Material75: TMaterialNode;
IndexedLineSet76: TIndexedLineSetNode;
Coordinate77: TCoordinateNode;
HAnimJoint78: THAnimJointNode;
HAnimSegment79: THAnimSegmentNode;
Transform80: TTransformNode;
Shape81: TShapeNode;
Shape82: TShapeNode;
Appearance83: TAppearanceNode;
Material84: TMaterialNode;
IndexedLineSet85: TIndexedLineSetNode;
Coordinate86: TCoordinateNode;
HAnimJoint87: THAnimJointNode;
HAnimSegment88: THAnimSegmentNode;
Transform89: TTransformNode;
Shape90: TShapeNode;
Shape91: TShapeNode;
Appearance92: TAppearanceNode;
Material93: TMaterialNode;
IndexedLineSet94: TIndexedLineSetNode;
Coordinate95: TCoordinateNode;
HAnimJoint96: THAnimJointNode;
HAnimSegment97: THAnimSegmentNode;
Transform98: TTransformNode;
Shape99: TShapeNode;
Shape100: TShapeNode;
Appearance101: TAppearanceNode;
Material102: TMaterialNode;
IndexedLineSet103: TIndexedLineSetNode;
Coordinate104: TCoordinateNode;
HAnimJoint105: THAnimJointNode;
HAnimSegment106: THAnimSegmentNode;
Transform107: TTransformNode;
Shape108: TShapeNode;
Shape109: TShapeNode;
Appearance110: TAppearanceNode;
Material111: TMaterialNode;
IndexedLineSet112: TIndexedLineSetNode;
Coordinate113: TCoordinateNode;
HAnimJoint114: THAnimJointNode;
HAnimSegment115: THAnimSegmentNode;
Transform116: TTransformNode;
Shape117: TShapeNode;
Shape118: TShapeNode;
Appearance119: TAppearanceNode;
Material120: TMaterialNode;
IndexedLineSet121: TIndexedLineSetNode;
Coordinate122: TCoordinateNode;
HAnimJoint123: THAnimJointNode;
HAnimSegment124: THAnimSegmentNode;
Transform125: TTransformNode;
Shape126: TShapeNode;
Shape127: TShapeNode;
Appearance128: TAppearanceNode;
Material129: TMaterialNode;
IndexedLineSet130: TIndexedLineSetNode;
Coordinate131: TCoordinateNode;
HAnimJoint132: THAnimJointNode;
HAnimSegment133: THAnimSegmentNode;
Transform134: TTransformNode;
Shape135: TShapeNode;
Shape136: TShapeNode;
Appearance137: TAppearanceNode;
Material138: TMaterialNode;
IndexedLineSet139: TIndexedLineSetNode;
Coordinate140: TCoordinateNode;
HAnimJoint141: THAnimJointNode;
HAnimSegment142: THAnimSegmentNode;
Transform143: TTransformNode;
Shape144: TShapeNode;
Shape145: TShapeNode;
Appearance146: TAppearanceNode;
Material147: TMaterialNode;
IndexedLineSet148: TIndexedLineSetNode;
Coordinate149: TCoordinateNode;
HAnimJoint150: THAnimJointNode;
HAnimSegment151: THAnimSegmentNode;
Transform152: TTransformNode;
Shape153: TShapeNode;
Shape154: TShapeNode;
Appearance155: TAppearanceNode;
Material156: TMaterialNode;
IndexedLineSet157: TIndexedLineSetNode;
Coordinate158: TCoordinateNode;
HAnimJoint159: THAnimJointNode;
HAnimSegment160: THAnimSegmentNode;
Transform161: TTransformNode;
Shape162: TShapeNode;
Shape163: TShapeNode;
Appearance164: TAppearanceNode;
Material165: TMaterialNode;
IndexedLineSet166: TIndexedLineSetNode;
Coordinate167: TCoordinateNode;
HAnimJoint168: THAnimJointNode;
HAnimSegment169: THAnimSegmentNode;
Transform170: TTransformNode;
Shape171: TShapeNode;
Shape172: TShapeNode;
Appearance173: TAppearanceNode;
Material174: TMaterialNode;
IndexedLineSet175: TIndexedLineSetNode;
Coordinate176: TCoordinateNode;
HAnimJoint177: THAnimJointNode;
HAnimSegment178: THAnimSegmentNode;
Transform179: TTransformNode;
Shape180: TShapeNode;
Shape181: TShapeNode;
Appearance182: TAppearanceNode;
Material183: TMaterialNode;
IndexedLineSet184: TIndexedLineSetNode;
Coordinate185: TCoordinateNode;
HAnimJoint186: THAnimJointNode;
HAnimSegment187: THAnimSegmentNode;
Transform188: TTransformNode;
Shape189: TShapeNode;
Shape190: TShapeNode;
Appearance191: TAppearanceNode;
Material192: TMaterialNode;
IndexedLineSet193: TIndexedLineSetNode;
Coordinate194: TCoordinateNode;
Shape195: TShapeNode;
Appearance196: TAppearanceNode;
Material197: TMaterialNode;
IndexedLineSet198: TIndexedLineSetNode;
Coordinate199: TCoordinateNode;
HAnimJoint200: THAnimJointNode;
HAnimSegment201: THAnimSegmentNode;
Transform202: TTransformNode;
Shape203: TShapeNode;
Shape204: TShapeNode;
Appearance205: TAppearanceNode;
Material206: TMaterialNode;
IndexedLineSet207: TIndexedLineSetNode;
Coordinate208: TCoordinateNode;
HAnimJoint209: THAnimJointNode;
HAnimSegment210: THAnimSegmentNode;
Transform211: TTransformNode;
Shape212: TShapeNode;
Shape213: TShapeNode;
Appearance214: TAppearanceNode;
Material215: TMaterialNode;
IndexedLineSet216: TIndexedLineSetNode;
Coordinate217: TCoordinateNode;
HAnimJoint218: THAnimJointNode;
HAnimSegment219: THAnimSegmentNode;
Transform220: TTransformNode;
Shape221: TShapeNode;
Shape222: TShapeNode;
Appearance223: TAppearanceNode;
Material224: TMaterialNode;
IndexedLineSet225: TIndexedLineSetNode;
Coordinate226: TCoordinateNode;
HAnimJoint227: THAnimJointNode;
HAnimSegment228: THAnimSegmentNode;
Transform229: TTransformNode;
Shape230: TShapeNode;
Shape231: TShapeNode;
Appearance232: TAppearanceNode;
Material233: TMaterialNode;
IndexedLineSet234: TIndexedLineSetNode;
Coordinate235: TCoordinateNode;
HAnimJoint236: THAnimJointNode;
HAnimSegment237: THAnimSegmentNode;
Transform238: TTransformNode;
Shape239: TShapeNode;
Shape240: TShapeNode;
Appearance241: TAppearanceNode;
Material242: TMaterialNode;
IndexedLineSet243: TIndexedLineSetNode;
Coordinate244: TCoordinateNode;
HAnimJoint245: THAnimJointNode;
HAnimSegment246: THAnimSegmentNode;
Transform247: TTransformNode;
Shape248: TShapeNode;
Shape249: TShapeNode;
Appearance250: TAppearanceNode;
Material251: TMaterialNode;
IndexedLineSet252: TIndexedLineSetNode;
Coordinate253: TCoordinateNode;
HAnimJoint254: THAnimJointNode;
HAnimSegment255: THAnimSegmentNode;
Transform256: TTransformNode;
Shape257: TShapeNode;
Shape258: TShapeNode;
Appearance259: TAppearanceNode;
Material260: TMaterialNode;
IndexedLineSet261: TIndexedLineSetNode;
Coordinate262: TCoordinateNode;
HAnimJoint263: THAnimJointNode;
HAnimSegment264: THAnimSegmentNode;
Transform265: TTransformNode;
Shape266: TShapeNode;
Shape267: TShapeNode;
Appearance268: TAppearanceNode;
Material269: TMaterialNode;
IndexedLineSet270: TIndexedLineSetNode;
Coordinate271: TCoordinateNode;
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
HAnimJoint292: THAnimJointNode;
HAnimJoint293: THAnimJointNode;
HAnimJoint294: THAnimJointNode;
HAnimJoint295: THAnimJointNode;
HAnimJoint296: THAnimJointNode;

procedure InitHAnimModelHandLeftPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'HAnimModelHandLeft.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Left hand, using high-fidelity definitions for HAnim version 2.0';
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
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group24 := TGroupNode.Create;;
WorldInfo25 := TWorldInfoNode.Create;;
WorldInfo25.Title := 'HAnimModelHandLeft.x3d';
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

procedure InitHAnimModelHandLeftPart1;
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

procedure InitHAnimModelHandLeftPart2;
begin

Coordinate41 := TCoordinateNode.Create;;
Coordinate41.SetPoint([Vector3(0,0,0),Vector3(0.1,0.1,0)]);
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
Coordinate51.SetPoint([Vector3(0,0,0),Vector3(-0.1,0.1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet50.Coord := Coordinate51;
end;

procedure InitHAnimModelHandLeftPart3;
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
HAnimJoint52.Center := Vector3(0.14,0.09,0);
HAnimSegment53 := THAnimSegmentNode.Create;;
Transform54 := TTransformNode.Create;;
Transform54.Translation := Vector3(0.14,0.09,0);
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

procedure InitHAnimModelHandLeftPart4;
begin

Coordinate63.SetPoint([Vector3(0.1,0.1,0),Vector3(0.2,0.15,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet62.Coord := Coordinate63;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape59.Geometry := IndexedLineSet62;
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(Shape59);
Shape64 := TShapeNode.Create;;
Appearance65 := TAppearanceNode.Create;;
Material66 := TMaterialNode.Create;;
Material66.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance65.Material := Material66;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape64.Appearance := Appearance65;
IndexedLineSet67 := TIndexedLineSetNode.Create;;
IndexedLineSet67.SetCoordIndex([0,1]);
Coordinate68 := TCoordinateNode.Create;;
Coordinate68.SetPoint([Vector3(0.1,0.1,0),Vector3(0.1,0.2,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet67.Coord := Coordinate68;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape64.Geometry := IndexedLineSet67;
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(Shape64);
{ METHOD .FdChildren.Add }
HAnimJoint52.FdChildren.Add(HAnimSegment53);
{ thumb finger }
HAnimJoint69 := THAnimJointNode.Create;;
HAnimJoint69.Center := Vector3(0.2,0.15,0);
HAnimSegment70 := THAnimSegmentNode.Create;;
Transform71 := TTransformNode.Create;;
Transform71.Translation := Vector3(0.2,0.15,0);
{ METHOD .FdChildren.Add }
Transform71.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment70.FdChildren.Add(Transform71);
Shape73 := TShapeNode.Create;;
Appearance74 := TAppearanceNode.Create;;
Material75 := TMaterialNode.Create;;
Material75.EmissiveColor := Vector3(1,1,1);
end;

procedure InitHAnimModelHandLeftPart5;
begin

{ METHOD .SetMaterial }
Appearance74.Material := Material75;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape73.Appearance := Appearance74;
IndexedLineSet76 := TIndexedLineSetNode.Create;;
IndexedLineSet76.SetCoordIndex([0,1]);
Coordinate77 := TCoordinateNode.Create;;
Coordinate77.SetPoint([Vector3(0.2,0.15,0),Vector3(0.3,0.3,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet76.Coord := Coordinate77;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape73.Geometry := IndexedLineSet76;
{ METHOD .FdChildren.Add }
HAnimSegment70.FdChildren.Add(Shape73);
{ METHOD .FdChildren.Add }
HAnimJoint69.FdChildren.Add(HAnimSegment70);
HAnimJoint78 := THAnimJointNode.Create;;
HAnimJoint78.Center := Vector3(0.3,0.3,0);
HAnimSegment79 := THAnimSegmentNode.Create;;
Transform80 := TTransformNode.Create;;
Transform80.Translation := Vector3(0.3,0.3,0);
{ METHOD .FdChildren.Add }
Transform80.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment79.FdChildren.Add(Transform80);
Shape82 := TShapeNode.Create;;
Appearance83 := TAppearanceNode.Create;;
Material84 := TMaterialNode.Create;;
Material84.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance83.Material := Material84;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape82.Appearance := Appearance83;
IndexedLineSet85 := TIndexedLineSetNode.Create;;
IndexedLineSet85.SetCoordIndex([0,1]);
Coordinate86 := TCoordinateNode.Create;;
Coordinate86.SetPoint([Vector3(0.3,0.3,0),Vector3(0.35,0.4,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet85.Coord := Coordinate86;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape82.Geometry := IndexedLineSet85;
{ METHOD .FdChildren.Add }
HAnimSegment79.FdChildren.Add(Shape82);
end;

procedure InitHAnimModelHandLeftPart6;
begin

{ METHOD .FdChildren.Add }
HAnimJoint78.FdChildren.Add(HAnimSegment79);
HAnimJoint87 := THAnimJointNode.Create;;
HAnimJoint87.Center := Vector3(0.35,0.4,0);
HAnimSegment88 := THAnimSegmentNode.Create;;
Transform89 := TTransformNode.Create;;
Transform89.Translation := Vector3(0.35,0.4,0);
{ METHOD .FdChildren.Add }
Transform89.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment88.FdChildren.Add(Transform89);
Shape91 := TShapeNode.Create;;
Appearance92 := TAppearanceNode.Create;;
Material93 := TMaterialNode.Create;;
Material93.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance92.Material := Material93;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape91.Appearance := Appearance92;
IndexedLineSet94 := TIndexedLineSetNode.Create;;
IndexedLineSet94.SetCoordIndex([0,1]);
Coordinate95 := TCoordinateNode.Create;;
Coordinate95.SetPoint([Vector3(0.35,0.4,0),Vector3(0.36,0.45,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet94.Coord := Coordinate95;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape91.Geometry := IndexedLineSet94;
{ METHOD .FdChildren.Add }
HAnimSegment88.FdChildren.Add(Shape91);
{ METHOD .FdChildren.Add }
HAnimJoint87.FdChildren.Add(HAnimSegment88);
{ METHOD .FdChildren.Add }
HAnimJoint78.FdChildren.Add(HAnimJoint87);
{ METHOD .FdChildren.Add }
HAnimJoint69.FdChildren.Add(HAnimJoint78);
{ METHOD .FdChildren.Add }
HAnimJoint52.FdChildren.Add(HAnimJoint69);
{ METHOD .FdChildren.Add }
HAnimJoint30.FdChildren.Add(HAnimJoint52);
{ MC2 }
HAnimJoint96 := THAnimJointNode.Create;;
HAnimJoint96.Center := Vector3(0.07,0.07,0);
HAnimSegment97 := THAnimSegmentNode.Create;;
Transform98 := TTransformNode.Create;
end;

procedure InitHAnimModelHandLeftPart7;
begin
;
Transform98.Translation := Vector3(0.07,0.07,0);
{ METHOD .FdChildren.Add }
Transform98.FdChildren.Add(Shape55);
{ METHOD .FdChildren.Add }
HAnimSegment97.FdChildren.Add(Transform98);
Shape100 := TShapeNode.Create;;
Appearance101 := TAppearanceNode.Create;;
Material102 := TMaterialNode.Create;;
Material102.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance101.Material := Material102;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape100.Appearance := Appearance101;
IndexedLineSet103 := TIndexedLineSetNode.Create;;
IndexedLineSet103.SetCoordIndex([0,1]);
Coordinate104 := TCoordinateNode.Create;;
Coordinate104.SetPoint([Vector3(-0.1,0.1,0),Vector3(-0.1,0.2,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet103.Coord := Coordinate104;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape100.Geometry := IndexedLineSet103;
{ METHOD .FdChildren.Add }
HAnimSegment97.FdChildren.Add(Shape100);
{ METHOD .FdChildren.Add }
HAnimJoint96.FdChildren.Add(HAnimSegment97);
{ index finger }
HAnimJoint105 := THAnimJointNode.Create;;
HAnimJoint105.Center := Vector3(0.1,0.2,0);
HAnimSegment106 := THAnimSegmentNode.Create;;
Transform107 := TTransformNode.Create;;
Transform107.Translation := Vector3(0.1,0.2,0);
{ METHOD .FdChildren.Add }
Transform107.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment106.FdChildren.Add(Transform107);
Shape109 := TShapeNode.Create;;
Appearance110 := TAppearanceNode.Create;;
Material111 := TMaterialNode.Create;;
Material111.EmissiveColor := Vector3(1,1,1);
end;

procedure InitHAnimModelHandLeftPart8;
begin

{ METHOD .SetMaterial }
Appearance110.Material := Material111;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape109.Appearance := Appearance110;
IndexedLineSet112 := TIndexedLineSetNode.Create;;
IndexedLineSet112.SetCoordIndex([0,1]);
Coordinate113 := TCoordinateNode.Create;;
Coordinate113.SetPoint([Vector3(0.1,0.2,0),Vector3(0.15,0.5,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet112.Coord := Coordinate113;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape109.Geometry := IndexedLineSet112;
{ METHOD .FdChildren.Add }
HAnimSegment106.FdChildren.Add(Shape109);
{ METHOD .FdChildren.Add }
HAnimJoint105.FdChildren.Add(HAnimSegment106);
HAnimJoint114 := THAnimJointNode.Create;;
HAnimJoint114.Center := Vector3(0.15,0.5,0);
HAnimSegment115 := THAnimSegmentNode.Create;;
Transform116 := TTransformNode.Create;;
Transform116.Translation := Vector3(0.15,0.5,0);
{ METHOD .FdChildren.Add }
Transform116.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment115.FdChildren.Add(Transform116);
Shape118 := TShapeNode.Create;;
Appearance119 := TAppearanceNode.Create;;
Material120 := TMaterialNode.Create;;
Material120.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance119.Material := Material120;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape118.Appearance := Appearance119;
IndexedLineSet121 := TIndexedLineSetNode.Create;;
IndexedLineSet121.SetCoordIndex([0,1]);
Coordinate122 := TCoordinateNode.Create;;
Coordinate122.SetPoint([Vector3(0.15,0.5,0),Vector3(0.2,0.7,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet121.Coord := Coordinate122;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape118.Geometry := IndexedLineSet121;
{ METHOD .FdChildren.Add }
HAnimSegment115.FdChildren.Add(Shape118);
end;

procedure InitHAnimModelHandLeftPart9;
begin

{ METHOD .FdChildren.Add }
HAnimJoint114.FdChildren.Add(HAnimSegment115);
HAnimJoint123 := THAnimJointNode.Create;;
HAnimJoint123.Center := Vector3(0.2,0.7,0);
HAnimSegment124 := THAnimSegmentNode.Create;;
Transform125 := TTransformNode.Create;;
Transform125.Translation := Vector3(0.2,0.7,0);
{ METHOD .FdChildren.Add }
Transform125.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(Transform125);
Shape127 := TShapeNode.Create;;
Appearance128 := TAppearanceNode.Create;;
Material129 := TMaterialNode.Create;;
Material129.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance128.Material := Material129;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape127.Appearance := Appearance128;
IndexedLineSet130 := TIndexedLineSetNode.Create;;
IndexedLineSet130.SetCoordIndex([0,1]);
Coordinate131 := TCoordinateNode.Create;;
Coordinate131.SetPoint([Vector3(0.2,0.7,0),Vector3(0.24,0.87,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet130.Coord := Coordinate131;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape127.Geometry := IndexedLineSet130;
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(Shape127);
{ METHOD .FdChildren.Add }
HAnimJoint123.FdChildren.Add(HAnimSegment124);
HAnimJoint132 := THAnimJointNode.Create;;
HAnimJoint132.Center := Vector3(0.24,0.87,0);
HAnimSegment133 := THAnimSegmentNode.Create;;
Transform134 := TTransformNode.Create;;
Transform134.Translation := Vector3(0.24,0.87,0);
{ METHOD .FdChildren.Add }
Transform134.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment133.FdChildren.Add(Transform134);
end;

procedure InitHAnimModelHandLeftPart10;
begin

Shape136 := TShapeNode.Create;;
Appearance137 := TAppearanceNode.Create;;
Material138 := TMaterialNode.Create;;
Material138.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance137.Material := Material138;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape136.Appearance := Appearance137;
IndexedLineSet139 := TIndexedLineSetNode.Create;;
IndexedLineSet139.SetCoordIndex([0,1]);
Coordinate140 := TCoordinateNode.Create;;
Coordinate140.SetPoint([Vector3(0.24,0.87,0),Vector3(0.26,0.93,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet139.Coord := Coordinate140;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape136.Geometry := IndexedLineSet139;
{ METHOD .FdChildren.Add }
HAnimSegment133.FdChildren.Add(Shape136);
{ METHOD .FdChildren.Add }
HAnimJoint132.FdChildren.Add(HAnimSegment133);
{ METHOD .FdChildren.Add }
HAnimJoint123.FdChildren.Add(HAnimJoint132);
{ METHOD .FdChildren.Add }
HAnimJoint114.FdChildren.Add(HAnimJoint123);
{ METHOD .FdChildren.Add }
HAnimJoint105.FdChildren.Add(HAnimJoint114);
{ METHOD .FdChildren.Add }
HAnimJoint96.FdChildren.Add(HAnimJoint105);
{ METHOD .FdChildren.Add }
HAnimJoint30.FdChildren.Add(HAnimJoint96);
{ MC3 }
HAnimJoint141 := THAnimJointNode.Create;;
HAnimJoint141.Center := Vector3(0,0.07,0);
HAnimSegment142 := THAnimSegmentNode.Create;;
Transform143 := TTransformNode.Create;;
Transform143.Translation := Vector3(0,0.07,0);
{ METHOD .FdChildren.Add }
Transform143.FdChildren.Add(Shape55);
{ METHOD .FdChildren.Add }
HAnimSegment142.FdChildren.Add(Transform143);
Shape145 := TShapeNode.Create;;
Appearance146 := TAppearanceNode.Create;;
Material147 := TMaterialNode.Create;;
end;

procedure InitHAnimModelHandLeftPart11;
begin

Material147.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance146.Material := Material147;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape145.Appearance := Appearance146;
IndexedLineSet148 := TIndexedLineSetNode.Create;;
IndexedLineSet148.SetCoordIndex([0,1]);
Coordinate149 := TCoordinateNode.Create;;
Coordinate149.SetPoint([Vector3(0,0.07,0),Vector3(0,0.2,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet148.Coord := Coordinate149;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape145.Geometry := IndexedLineSet148;
{ METHOD .FdChildren.Add }
HAnimSegment142.FdChildren.Add(Shape145);
{ METHOD .FdChildren.Add }
HAnimJoint141.FdChildren.Add(HAnimSegment142);
{ Middle fingle }
HAnimJoint150 := THAnimJointNode.Create;;
HAnimJoint150.Center := Vector3(0,0.2,0);
HAnimSegment151 := THAnimSegmentNode.Create;;
Transform152 := TTransformNode.Create;;
Transform152.Translation := Vector3(0,0.2,0);
{ METHOD .FdChildren.Add }
Transform152.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment151.FdChildren.Add(Transform152);
Shape154 := TShapeNode.Create;;
Appearance155 := TAppearanceNode.Create;;
Material156 := TMaterialNode.Create;;
Material156.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance155.Material := Material156;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape154.Appearance := Appearance155;
IndexedLineSet157 := TIndexedLineSetNode.Create;;
IndexedLineSet157.SetCoordIndex([0,1]);
Coordinate158 := TCoordinateNode.Create;;
Coordinate158.SetPoint([Vector3(0,0.2,0),Vector3(0.03,0.5,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet157.Coord := Coordinate158;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape154.Geometry := IndexedLineSet157;
end;

procedure InitHAnimModelHandLeftPart12;
begin

{ METHOD .FdChildren.Add }
HAnimSegment151.FdChildren.Add(Shape154);
{ METHOD .FdChildren.Add }
HAnimJoint150.FdChildren.Add(HAnimSegment151);
HAnimJoint159 := THAnimJointNode.Create;;
HAnimJoint159.Center := Vector3(0.03,0.5,0);
HAnimSegment160 := THAnimSegmentNode.Create;;
Transform161 := TTransformNode.Create;;
Transform161.Translation := Vector3(0.03,0.5,0);
{ METHOD .FdChildren.Add }
Transform161.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment160.FdChildren.Add(Transform161);
Shape163 := TShapeNode.Create;;
Appearance164 := TAppearanceNode.Create;;
Material165 := TMaterialNode.Create;;
Material165.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance164.Material := Material165;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape163.Appearance := Appearance164;
IndexedLineSet166 := TIndexedLineSetNode.Create;;
IndexedLineSet166.SetCoordIndex([0,1]);
Coordinate167 := TCoordinateNode.Create;;
Coordinate167.SetPoint([Vector3(0.03,0.5,0),Vector3(0.05,0.75,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet166.Coord := Coordinate167;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape163.Geometry := IndexedLineSet166;
{ METHOD .FdChildren.Add }
HAnimSegment160.FdChildren.Add(Shape163);
{ METHOD .FdChildren.Add }
HAnimJoint159.FdChildren.Add(HAnimSegment160);
HAnimJoint168 := THAnimJointNode.Create;;
HAnimJoint168.Center := Vector3(0.05,0.75,0);
HAnimSegment169 := THAnimSegmentNode.Create;;
Transform170 := TTransformNode.Create;;
Transform170.Translation := Vector3(0.05,0.75,0);
{ METHOD .FdChildren.Add }
Transform170.FdChildren.Add(Shape33);
end;

procedure InitHAnimModelHandLeftPart13;
begin

{ METHOD .FdChildren.Add }
HAnimSegment169.FdChildren.Add(Transform170);
Shape172 := TShapeNode.Create;;
Appearance173 := TAppearanceNode.Create;;
Material174 := TMaterialNode.Create;;
Material174.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance173.Material := Material174;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape172.Appearance := Appearance173;
IndexedLineSet175 := TIndexedLineSetNode.Create;;
IndexedLineSet175.SetCoordIndex([0,1]);
Coordinate176 := TCoordinateNode.Create;;
Coordinate176.SetPoint([Vector3(0.05,0.75,0),Vector3(0.08,0.96,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet175.Coord := Coordinate176;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape172.Geometry := IndexedLineSet175;
{ METHOD .FdChildren.Add }
HAnimSegment169.FdChildren.Add(Shape172);
{ METHOD .FdChildren.Add }
HAnimJoint168.FdChildren.Add(HAnimSegment169);
HAnimJoint177 := THAnimJointNode.Create;;
HAnimJoint177.Center := Vector3(0.08,0.96,0);
HAnimSegment178 := THAnimSegmentNode.Create;;
Transform179 := TTransformNode.Create;;
Transform179.Translation := Vector3(0.08,0.96,0);
{ METHOD .FdChildren.Add }
Transform179.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment178.FdChildren.Add(Transform179);
Shape181 := TShapeNode.Create;;
Appearance182 := TAppearanceNode.Create;;
Material183 := TMaterialNode.Create;;
Material183.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance182.Material := Material183;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape181.Appearance := Appearance182;
IndexedLineSet184 := TIndexedLineSetNode.Create;
end;

procedure InitHAnimModelHandLeftPart14;
begin
;
IndexedLineSet184.SetCoordIndex([0,1]);
Coordinate185 := TCoordinateNode.Create;;
Coordinate185.SetPoint([Vector3(0.08,0.96,0),Vector3(0.09,1.05,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet184.Coord := Coordinate185;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape181.Geometry := IndexedLineSet184;
{ METHOD .FdChildren.Add }
HAnimSegment178.FdChildren.Add(Shape181);
{ METHOD .FdChildren.Add }
HAnimJoint177.FdChildren.Add(HAnimSegment178);
{ METHOD .FdChildren.Add }
HAnimJoint168.FdChildren.Add(HAnimJoint177);
{ METHOD .FdChildren.Add }
HAnimJoint159.FdChildren.Add(HAnimJoint168);
{ METHOD .FdChildren.Add }
HAnimJoint150.FdChildren.Add(HAnimJoint159);
{ METHOD .FdChildren.Add }
HAnimJoint141.FdChildren.Add(HAnimJoint150);
{ METHOD .FdChildren.Add }
HAnimJoint30.FdChildren.Add(HAnimJoint141);
{ MC45 }
HAnimJoint186 := THAnimJointNode.Create;;
HAnimJoint186.Center := Vector3(-0.1,0.1,0);
HAnimSegment187 := THAnimSegmentNode.Create;;
Transform188 := TTransformNode.Create;;
Transform188.Translation := Vector3(-0.1,0.1,0);
{ METHOD .FdChildren.Add }
Transform188.FdChildren.Add(Shape55);
{ METHOD .FdChildren.Add }
HAnimSegment187.FdChildren.Add(Transform188);
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
Coordinate194.SetPoint([Vector3(-0.1,0.1,0),Vector3(-0.1,0.2,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet193.Coord := Coordinate194;
end;

procedure InitHAnimModelHandLeftPart15;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape190.Geometry := IndexedLineSet193;
{ METHOD .FdChildren.Add }
HAnimSegment187.FdChildren.Add(Shape190);
Shape195 := TShapeNode.Create;;
Appearance196 := TAppearanceNode.Create;;
Material197 := TMaterialNode.Create;;
Material197.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance196.Material := Material197;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape195.Appearance := Appearance196;
IndexedLineSet198 := TIndexedLineSetNode.Create;;
IndexedLineSet198.SetCoordIndex([0,1]);
Coordinate199 := TCoordinateNode.Create;;
Coordinate199.SetPoint([Vector3(-0.1,0.1,0),Vector3(-0.15,0.17,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet198.Coord := Coordinate199;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape195.Geometry := IndexedLineSet198;
{ METHOD .FdChildren.Add }
HAnimSegment187.FdChildren.Add(Shape195);
{ METHOD .FdChildren.Add }
HAnimJoint186.FdChildren.Add(HAnimSegment187);
{ ring finger }
HAnimJoint200 := THAnimJointNode.Create;;
HAnimJoint200.Center := Vector3(-0.1,0.2,0);
HAnimSegment201 := THAnimSegmentNode.Create;;
Transform202 := TTransformNode.Create;;
Transform202.Translation := Vector3(-0.1,0.2,0);
{ METHOD .FdChildren.Add }
Transform202.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment201.FdChildren.Add(Transform202);
Shape204 := TShapeNode.Create;;
Appearance205 := TAppearanceNode.Create;;
Material206 := TMaterialNode.Create;;
Material206.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance205.Material := Material206;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape204.Appearance := Appearance205;
end;

procedure InitHAnimModelHandLeftPart16;
begin

IndexedLineSet207 := TIndexedLineSetNode.Create;;
IndexedLineSet207.SetCoordIndex([0,1]);
Coordinate208 := TCoordinateNode.Create;;
Coordinate208.SetPoint([Vector3(-0.1,0.2,0),Vector3(-0.1,0.47,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet207.Coord := Coordinate208;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape204.Geometry := IndexedLineSet207;
{ METHOD .FdChildren.Add }
HAnimSegment201.FdChildren.Add(Shape204);
{ METHOD .FdChildren.Add }
HAnimJoint200.FdChildren.Add(HAnimSegment201);
HAnimJoint209 := THAnimJointNode.Create;;
HAnimJoint209.Center := Vector3(-0.1,0.47,0);
HAnimSegment210 := THAnimSegmentNode.Create;;
Transform211 := TTransformNode.Create;;
Transform211.Translation := Vector3(-0.1,0.47,0);
{ METHOD .FdChildren.Add }
Transform211.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment210.FdChildren.Add(Transform211);
Shape213 := TShapeNode.Create;;
Appearance214 := TAppearanceNode.Create;;
Material215 := TMaterialNode.Create;;
Material215.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance214.Material := Material215;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape213.Appearance := Appearance214;
IndexedLineSet216 := TIndexedLineSetNode.Create;;
IndexedLineSet216.SetCoordIndex([0,1]);
Coordinate217 := TCoordinateNode.Create;;
Coordinate217.SetPoint([Vector3(-0.1,0.47,0),Vector3(-0.1,0.7,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet216.Coord := Coordinate217;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape213.Geometry := IndexedLineSet216;
{ METHOD .FdChildren.Add }
HAnimSegment210.FdChildren.Add(Shape213);
{ METHOD .FdChildren.Add }
HAnimJoint209.FdChildren.Add(HAnimSegment210);
HAnimJoint218 := THAnimJointNode.Create;
end;

procedure InitHAnimModelHandLeftPart17;
begin
;
HAnimJoint218.Center := Vector3(-0.1,0.7,0);
HAnimSegment219 := THAnimSegmentNode.Create;;
Transform220 := TTransformNode.Create;;
Transform220.Translation := Vector3(-0.1,0.7,0);
{ METHOD .FdChildren.Add }
Transform220.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment219.FdChildren.Add(Transform220);
Shape222 := TShapeNode.Create;;
Appearance223 := TAppearanceNode.Create;;
Material224 := TMaterialNode.Create;;
Material224.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance223.Material := Material224;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape222.Appearance := Appearance223;
IndexedLineSet225 := TIndexedLineSetNode.Create;;
IndexedLineSet225.SetCoordIndex([0,1]);
Coordinate226 := TCoordinateNode.Create;;
Coordinate226.SetPoint([Vector3(-0.1,0.7,0),Vector3(-0.1,0.93,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet225.Coord := Coordinate226;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape222.Geometry := IndexedLineSet225;
{ METHOD .FdChildren.Add }
HAnimSegment219.FdChildren.Add(Shape222);
{ METHOD .FdChildren.Add }
HAnimJoint218.FdChildren.Add(HAnimSegment219);
HAnimJoint227 := THAnimJointNode.Create;;
HAnimJoint227.Center := Vector3(-0.1,0.93,0);
HAnimSegment228 := THAnimSegmentNode.Create;;
Transform229 := TTransformNode.Create;;
Transform229.Translation := Vector3(-0.1,0.93,0);
{ METHOD .FdChildren.Add }
Transform229.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment228.FdChildren.Add(Transform229);
Shape231 := TShapeNode.Create;;
end;

procedure InitHAnimModelHandLeftPart18;
begin

Appearance232 := TAppearanceNode.Create;;
Material233 := TMaterialNode.Create;;
Material233.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance232.Material := Material233;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape231.Appearance := Appearance232;
IndexedLineSet234 := TIndexedLineSetNode.Create;;
IndexedLineSet234.SetCoordIndex([0,1]);
Coordinate235 := TCoordinateNode.Create;;
Coordinate235.SetPoint([Vector3(-0.1,0.93,0),Vector3(-0.1,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet234.Coord := Coordinate235;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape231.Geometry := IndexedLineSet234;
{ METHOD .FdChildren.Add }
HAnimSegment228.FdChildren.Add(Shape231);
{ METHOD .FdChildren.Add }
HAnimJoint227.FdChildren.Add(HAnimSegment228);
{ METHOD .FdChildren.Add }
HAnimJoint218.FdChildren.Add(HAnimJoint227);
{ METHOD .FdChildren.Add }
HAnimJoint209.FdChildren.Add(HAnimJoint218);
{ METHOD .FdChildren.Add }
HAnimJoint200.FdChildren.Add(HAnimJoint209);
{ METHOD .FdChildren.Add }
HAnimJoint186.FdChildren.Add(HAnimJoint200);
{ pinky finger }
HAnimJoint236 := THAnimJointNode.Create;;
HAnimJoint236.Center := Vector3(-0.15,0.17,0);
HAnimSegment237 := THAnimSegmentNode.Create;;
Transform238 := TTransformNode.Create;;
Transform238.Translation := Vector3(-0.15,0.17,0);
{ METHOD .FdChildren.Add }
Transform238.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment237.FdChildren.Add(Transform238);
Shape240 := TShapeNode.Create;;
Appearance241 := TAppearanceNode.Create;;
Material242 := TMaterialNode.Create;;
Material242.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance241.Material := Material242;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape240.Appearance := Appearance241;
end;

procedure InitHAnimModelHandLeftPart19;
begin

IndexedLineSet243 := TIndexedLineSetNode.Create;;
IndexedLineSet243.SetCoordIndex([0,1]);
Coordinate244 := TCoordinateNode.Create;;
Coordinate244.SetPoint([Vector3(-0.15,0.17,0),Vector3(-0.2,0.4,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet243.Coord := Coordinate244;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape240.Geometry := IndexedLineSet243;
{ METHOD .FdChildren.Add }
HAnimSegment237.FdChildren.Add(Shape240);
{ METHOD .FdChildren.Add }
HAnimJoint236.FdChildren.Add(HAnimSegment237);
HAnimJoint245 := THAnimJointNode.Create;;
HAnimJoint245.Center := Vector3(-0.2,0.4,0);
HAnimSegment246 := THAnimSegmentNode.Create;;
Transform247 := TTransformNode.Create;;
Transform247.Translation := Vector3(-0.2,0.4,0);
{ METHOD .FdChildren.Add }
Transform247.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment246.FdChildren.Add(Transform247);
Shape249 := TShapeNode.Create;;
Appearance250 := TAppearanceNode.Create;;
Material251 := TMaterialNode.Create;;
Material251.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance250.Material := Material251;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape249.Appearance := Appearance250;
IndexedLineSet252 := TIndexedLineSetNode.Create;;
IndexedLineSet252.SetCoordIndex([0,1]);
Coordinate253 := TCoordinateNode.Create;;
Coordinate253.SetPoint([Vector3(-0.2,0.4,0),Vector3(-0.23,0.63,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet252.Coord := Coordinate253;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape249.Geometry := IndexedLineSet252;
{ METHOD .FdChildren.Add }
HAnimSegment246.FdChildren.Add(Shape249);
{ METHOD .FdChildren.Add }
HAnimJoint245.FdChildren.Add(HAnimSegment246);
HAnimJoint254 := THAnimJointNode.Create;
end;

procedure InitHAnimModelHandLeftPart20;
begin
;
HAnimJoint254.Center := Vector3(-0.23,0.63,0);
HAnimSegment255 := THAnimSegmentNode.Create;;
Transform256 := TTransformNode.Create;;
Transform256.Translation := Vector3(-0.23,0.63,0);
{ METHOD .FdChildren.Add }
Transform256.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment255.FdChildren.Add(Transform256);
Shape258 := TShapeNode.Create;;
Appearance259 := TAppearanceNode.Create;;
Material260 := TMaterialNode.Create;;
Material260.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance259.Material := Material260;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape258.Appearance := Appearance259;
IndexedLineSet261 := TIndexedLineSetNode.Create;;
IndexedLineSet261.SetCoordIndex([0,1]);
Coordinate262 := TCoordinateNode.Create;;
Coordinate262.SetPoint([Vector3(-0.23,0.63,0),Vector3(-0.25,0.79,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet261.Coord := Coordinate262;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape258.Geometry := IndexedLineSet261;
{ METHOD .FdChildren.Add }
HAnimSegment255.FdChildren.Add(Shape258);
{ METHOD .FdChildren.Add }
HAnimJoint254.FdChildren.Add(HAnimSegment255);
HAnimJoint263 := THAnimJointNode.Create;;
HAnimJoint263.Center := Vector3(-0.25,0.79,0);
HAnimSegment264 := THAnimSegmentNode.Create;;
Transform265 := TTransformNode.Create;;
Transform265.Translation := Vector3(-0.25,0.79,0);
{ METHOD .FdChildren.Add }
Transform265.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSegment264.FdChildren.Add(Transform265);
Shape267 := TShapeNode.Create;;
end;

procedure InitHAnimModelHandLeftPart21;
begin

Appearance268 := TAppearanceNode.Create;;
Material269 := TMaterialNode.Create;;
Material269.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance268.Material := Material269;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape267.Appearance := Appearance268;
IndexedLineSet270 := TIndexedLineSetNode.Create;;
IndexedLineSet270.SetCoordIndex([0,1]);
Coordinate271 := TCoordinateNode.Create;;
Coordinate271.SetPoint([Vector3(-0.25,0.79,0),Vector3(-0.26,0.85,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet270.Coord := Coordinate271;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape267.Geometry := IndexedLineSet270;
{ METHOD .FdChildren.Add }
HAnimSegment264.FdChildren.Add(Shape267);
{ METHOD .FdChildren.Add }
HAnimJoint263.FdChildren.Add(HAnimSegment264);
{ METHOD .FdChildren.Add }
HAnimJoint254.FdChildren.Add(HAnimJoint263);
{ METHOD .FdChildren.Add }
HAnimJoint245.FdChildren.Add(HAnimJoint254);
{ METHOD .FdChildren.Add }
HAnimJoint236.FdChildren.Add(HAnimJoint245);
{ METHOD .FdChildren.Add }
HAnimJoint186.FdChildren.Add(HAnimJoint236);
{ METHOD .FdChildren.Add }
HAnimJoint30.FdChildren.Add(HAnimJoint186);
{ METHOD .FdChildren.Add }
HAnimJoint29.FdChildren.Add(HAnimJoint30);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid26.FdSkeleton.Add(HAnimJoint29);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint29);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint132);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint177);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint227);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint263);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint87);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint123);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint168);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint218);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint254);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint69);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint105);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint150);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint200);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint236);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint78);
end;

procedure InitHAnimModelHandLeftPart22;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint114);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint159);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint209);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint245);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint52);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint96);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint141);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint186);
{ METHOD .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint30);
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(HAnimHumanoid26);
{ METHOD .AddGroup }
X3D0.AddChildren([Group24]);
end;

function CreateHAnimModelHandLeft: TX3DRootNode;
begin
InitHAnimModelHandLeftPart0;
InitHAnimModelHandLeftPart1;
InitHAnimModelHandLeftPart2;
InitHAnimModelHandLeftPart3;
InitHAnimModelHandLeftPart4;
InitHAnimModelHandLeftPart5;
InitHAnimModelHandLeftPart6;
InitHAnimModelHandLeftPart7;
InitHAnimModelHandLeftPart8;
InitHAnimModelHandLeftPart9;
InitHAnimModelHandLeftPart10;
InitHAnimModelHandLeftPart11;
InitHAnimModelHandLeftPart12;
InitHAnimModelHandLeftPart13;
InitHAnimModelHandLeftPart14;
InitHAnimModelHandLeftPart15;
InitHAnimModelHandLeftPart16;
InitHAnimModelHandLeftPart17;
InitHAnimModelHandLeftPart18;
InitHAnimModelHandLeftPart19;
InitHAnimModelHandLeftPart20;
InitHAnimModelHandLeftPart21;
InitHAnimModelHandLeftPart22;
Result := X3D0;
end;

begin
end.
