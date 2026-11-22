unit HAnimModelFootRight;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateHAnimModelFootRight: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group25: TGroupNode;
WorldInfo26: TWorldInfoNode;
HAnimHumanoid27: THAnimHumanoidNode;
MetadataSet28: TMetadataSetNode;
MetadataString29: TMetadataStringNode;
HAnimJoint30: THAnimJointNode;
HAnimJoint31: THAnimJointNode;
HAnimSegment32: THAnimSegmentNode;
Transform33: TTransformNode;
Shape34: TShapeNode;
Sphere35: TSphereNode;
Appearance36: TAppearanceNode;
Material37: TMaterialNode;
Shape38: TShapeNode;
Appearance39: TAppearanceNode;
Material40: TMaterialNode;
IndexedLineSet41: TIndexedLineSetNode;
Coordinate42: TCoordinateNode;
Shape43: TShapeNode;
Appearance44: TAppearanceNode;
Material45: TMaterialNode;
IndexedLineSet46: TIndexedLineSetNode;
Coordinate47: TCoordinateNode;
HAnimJoint48: THAnimJointNode;
HAnimSegment49: THAnimSegmentNode;
Transform50: TTransformNode;
Shape51: TShapeNode;
Shape52: TShapeNode;
Appearance53: TAppearanceNode;
Material54: TMaterialNode;
IndexedLineSet55: TIndexedLineSetNode;
Coordinate56: TCoordinateNode;
Shape57: TShapeNode;
Appearance58: TAppearanceNode;
Material59: TMaterialNode;
IndexedLineSet60: TIndexedLineSetNode;
Coordinate61: TCoordinateNode;
Shape62: TShapeNode;
Appearance63: TAppearanceNode;
Material64: TMaterialNode;
IndexedLineSet65: TIndexedLineSetNode;
Coordinate66: TCoordinateNode;
HAnimJoint67: THAnimJointNode;
HAnimSegment68: THAnimSegmentNode;
Transform69: TTransformNode;
Shape70: TShapeNode;
Shape71: TShapeNode;
Appearance72: TAppearanceNode;
Material73: TMaterialNode;
IndexedLineSet74: TIndexedLineSetNode;
Coordinate75: TCoordinateNode;
HAnimJoint76: THAnimJointNode;
HAnimSegment77: THAnimSegmentNode;
Transform78: TTransformNode;
Shape79: TShapeNode;
Shape80: TShapeNode;
Appearance81: TAppearanceNode;
Material82: TMaterialNode;
IndexedLineSet83: TIndexedLineSetNode;
Coordinate84: TCoordinateNode;
HAnimJoint85: THAnimJointNode;
HAnimSegment86: THAnimSegmentNode;
Transform87: TTransformNode;
Shape88: TShapeNode;
Shape89: TShapeNode;
Appearance90: TAppearanceNode;
Material91: TMaterialNode;
IndexedLineSet92: TIndexedLineSetNode;
Coordinate93: TCoordinateNode;
HAnimJoint94: THAnimJointNode;
HAnimSegment95: THAnimSegmentNode;
Transform96: TTransformNode;
Shape97: TShapeNode;
Shape98: TShapeNode;
Appearance99: TAppearanceNode;
Material100: TMaterialNode;
IndexedLineSet101: TIndexedLineSetNode;
Coordinate102: TCoordinateNode;
HAnimJoint103: THAnimJointNode;
HAnimSegment104: THAnimSegmentNode;
Transform105: TTransformNode;
Shape106: TShapeNode;
Shape107: TShapeNode;
Appearance108: TAppearanceNode;
Material109: TMaterialNode;
IndexedLineSet110: TIndexedLineSetNode;
Coordinate111: TCoordinateNode;
HAnimJoint112: THAnimJointNode;
HAnimSegment113: THAnimSegmentNode;
Transform114: TTransformNode;
Shape115: TShapeNode;
Shape116: TShapeNode;
Appearance117: TAppearanceNode;
Material118: TMaterialNode;
IndexedLineSet119: TIndexedLineSetNode;
Coordinate120: TCoordinateNode;
HAnimJoint121: THAnimJointNode;
HAnimSegment122: THAnimSegmentNode;
Transform123: TTransformNode;
Shape124: TShapeNode;
Shape125: TShapeNode;
Appearance126: TAppearanceNode;
Material127: TMaterialNode;
IndexedLineSet128: TIndexedLineSetNode;
Coordinate129: TCoordinateNode;
HAnimJoint130: THAnimJointNode;
HAnimSegment131: THAnimSegmentNode;
Transform132: TTransformNode;
Shape133: TShapeNode;
Shape134: TShapeNode;
Appearance135: TAppearanceNode;
Material136: TMaterialNode;
IndexedLineSet137: TIndexedLineSetNode;
Coordinate138: TCoordinateNode;
HAnimJoint139: THAnimJointNode;
HAnimSegment140: THAnimSegmentNode;
Transform141: TTransformNode;
Shape142: TShapeNode;
Shape143: TShapeNode;
Appearance144: TAppearanceNode;
Material145: TMaterialNode;
IndexedLineSet146: TIndexedLineSetNode;
Coordinate147: TCoordinateNode;
HAnimJoint148: THAnimJointNode;
HAnimSegment149: THAnimSegmentNode;
Transform150: TTransformNode;
Shape151: TShapeNode;
Shape152: TShapeNode;
Appearance153: TAppearanceNode;
Material154: TMaterialNode;
IndexedLineSet155: TIndexedLineSetNode;
Coordinate156: TCoordinateNode;
HAnimJoint157: THAnimJointNode;
HAnimSegment158: THAnimSegmentNode;
Transform159: TTransformNode;
Shape160: TShapeNode;
Shape161: TShapeNode;
Appearance162: TAppearanceNode;
Material163: TMaterialNode;
IndexedLineSet164: TIndexedLineSetNode;
Coordinate165: TCoordinateNode;
HAnimJoint166: THAnimJointNode;
HAnimSegment167: THAnimSegmentNode;
Transform168: TTransformNode;
Shape169: TShapeNode;
Shape170: TShapeNode;
Appearance171: TAppearanceNode;
Material172: TMaterialNode;
IndexedLineSet173: TIndexedLineSetNode;
Coordinate174: TCoordinateNode;
HAnimJoint175: THAnimJointNode;
HAnimSegment176: THAnimSegmentNode;
Transform177: TTransformNode;
Shape178: TShapeNode;
Shape179: TShapeNode;
Appearance180: TAppearanceNode;
Material181: TMaterialNode;
IndexedLineSet182: TIndexedLineSetNode;
Coordinate183: TCoordinateNode;
HAnimJoint184: THAnimJointNode;
HAnimSegment185: THAnimSegmentNode;
Transform186: TTransformNode;
Shape187: TShapeNode;
Shape188: TShapeNode;
Appearance189: TAppearanceNode;
Material190: TMaterialNode;
IndexedLineSet191: TIndexedLineSetNode;
Coordinate192: TCoordinateNode;
HAnimJoint193: THAnimJointNode;
HAnimSegment194: THAnimSegmentNode;
Transform195: TTransformNode;
Shape196: TShapeNode;
Shape197: TShapeNode;
Appearance198: TAppearanceNode;
Material199: TMaterialNode;
IndexedLineSet200: TIndexedLineSetNode;
Coordinate201: TCoordinateNode;
HAnimJoint202: THAnimJointNode;
HAnimSegment203: THAnimSegmentNode;
Transform204: TTransformNode;
Shape205: TShapeNode;
Shape206: TShapeNode;
Appearance207: TAppearanceNode;
Material208: TMaterialNode;
IndexedLineSet209: TIndexedLineSetNode;
Coordinate210: TCoordinateNode;
Shape211: TShapeNode;
Appearance212: TAppearanceNode;
Material213: TMaterialNode;
IndexedLineSet214: TIndexedLineSetNode;
Coordinate215: TCoordinateNode;
HAnimJoint216: THAnimJointNode;
HAnimSegment217: THAnimSegmentNode;
Transform218: TTransformNode;
Shape219: TShapeNode;
Shape220: TShapeNode;
Appearance221: TAppearanceNode;
Material222: TMaterialNode;
IndexedLineSet223: TIndexedLineSetNode;
Coordinate224: TCoordinateNode;
HAnimJoint225: THAnimJointNode;
HAnimSegment226: THAnimSegmentNode;
Transform227: TTransformNode;
Shape228: TShapeNode;
Shape229: TShapeNode;
Appearance230: TAppearanceNode;
Material231: TMaterialNode;
IndexedLineSet232: TIndexedLineSetNode;
Coordinate233: TCoordinateNode;
HAnimJoint234: THAnimJointNode;
HAnimSegment235: THAnimSegmentNode;
Transform236: TTransformNode;
Shape237: TShapeNode;
Shape238: TShapeNode;
Appearance239: TAppearanceNode;
Material240: TMaterialNode;
IndexedLineSet241: TIndexedLineSetNode;
Coordinate242: TCoordinateNode;
HAnimJoint243: THAnimJointNode;
HAnimSegment244: THAnimSegmentNode;
Transform245: TTransformNode;
Shape246: TShapeNode;
Shape247: TShapeNode;
Appearance248: TAppearanceNode;
Material249: TMaterialNode;
IndexedLineSet250: TIndexedLineSetNode;
Coordinate251: TCoordinateNode;
HAnimJoint252: THAnimJointNode;
HAnimSegment253: THAnimSegmentNode;
Transform254: TTransformNode;
Shape255: TShapeNode;
Shape256: TShapeNode;
Appearance257: TAppearanceNode;
Material258: TMaterialNode;
IndexedLineSet259: TIndexedLineSetNode;
Coordinate260: TCoordinateNode;
HAnimJoint261: THAnimJointNode;
HAnimSegment262: THAnimSegmentNode;
Transform263: TTransformNode;
Shape264: TShapeNode;
Shape265: TShapeNode;
Appearance266: TAppearanceNode;
Material267: TMaterialNode;
IndexedLineSet268: TIndexedLineSetNode;
Coordinate269: TCoordinateNode;
HAnimJoint270: THAnimJointNode;
HAnimSegment271: THAnimSegmentNode;
Transform272: TTransformNode;
Shape273: TShapeNode;
Shape274: TShapeNode;
Appearance275: TAppearanceNode;
Material276: TMaterialNode;
IndexedLineSet277: TIndexedLineSetNode;
Coordinate278: TCoordinateNode;
HAnimJoint279: THAnimJointNode;
HAnimSegment280: THAnimSegmentNode;
Transform281: TTransformNode;
Shape282: TShapeNode;
Shape283: TShapeNode;
Appearance284: TAppearanceNode;
Material285: TMaterialNode;
IndexedLineSet286: TIndexedLineSetNode;
Coordinate287: TCoordinateNode;
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
HAnimJoint312: THAnimJointNode;
HAnimJoint313: THAnimJointNode;
HAnimJoint314: THAnimJointNode;

procedure InitHAnimModelFootRightPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'HAnimModelFootRight.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Right foot, using high-fidelity definitions for HAnim version 2.0';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Kwan-Hee YOO, Don Brutzman and Joe Williams';
{ METHOD .Meta }
X3D0.Meta['created'] := '26 January 2015';
{ METHOD .Meta }
X3D0.Meta['modified'] := '23 December 2021';
{ METHOD .Meta }
X3D0.Meta['warning'] := 'not yet to scale';
{ METHOD .Meta }
X3D0.Meta['TODO'] := 'Update all values to match HAnim2 A.7 Level of articulation four LOA-4';
{ METHOD .Meta }
X3D0.Meta['TODO'] := 'Add links to figures';
{ METHOD .Meta }
X3D0.Meta['TODO'] := 'Add Viewpoints to enable inspection';
{ METHOD .Meta }
X3D0.Meta['info'] := 'TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body';
{ METHOD .Meta }
X3D0.Meta['warning'] := 'TODO will X3D HAnim component add a new level to support LOA-4 functionality?';
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
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group25 := TGroupNode.Create;
WorldInfo26 := TWorldInfoNode.Create;
WorldInfo26.Title := 'HAnimModelFootRight.x3d';
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(WorldInfo26);
HAnimHumanoid27 := THAnimHumanoidNode.Create;
HAnimHumanoid27.Loa := 4;
HAnimHumanoid27.Version := '2.0';
{ original HAnimHumanoid info='"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams"' }
MetadataSet28 := TMetadataSetNode.Create;
MetadataSet28.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid';
MetadataString29 := TMetadataStringNode.Create;
MetadataString29.SetValue(['Kwan-Hee YOO, Don Brutzman and Joe Williams']);
{ METHOD .FdValue.Add }
MetadataSet28.FdValue.Add(MetadataString29);
{ METHOD .Metadata }
HAnimHumanoid27.Metadata := MetadataSet28;
end;

procedure InitHAnimModelFootRightPart1;
begin

HAnimJoint30 := THAnimJointNode.Create;
{ Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model }
HAnimJoint31 := THAnimJointNode.Create;
HAnimJoint31.Description := 'connection joint of foot to leg above';
HAnimSegment32 := THAnimSegmentNode.Create;
Transform33 := TTransformNode.Create;
Shape34 := TShapeNode.Create;
Sphere35 := TSphereNode.Create;
Sphere35.Radius := 0.025;
{ METHOD .Geometry }
Shape34.Geometry := Sphere35;
Appearance36 := TAppearanceNode.Create;
Material37 := TMaterialNode.Create;
Material37.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance36.Material := Material37;
{ METHOD .Appearance }
Shape34.Appearance := Appearance36;
{ METHOD .FdChildren.Add }
Transform33.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment32.FdChildren.Add(Transform33);
Shape38 := TShapeNode.Create;
Appearance39 := TAppearanceNode.Create;
Material40 := TMaterialNode.Create;
Material40.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance39.Material := Material40;
{ METHOD .Appearance }
Shape38.Appearance := Appearance39;
IndexedLineSet41 := TIndexedLineSetNode.Create;
IndexedLineSet41.SetCoordIndex([0,1]);
Coordinate42 := TCoordinateNode.Create;
Coordinate42.SetPoint([Vector3(0,0,0),Vector3(0,-0.3,0)]);
{ METHOD .Coord }
IndexedLineSet41.Coord := Coordinate42;
{ METHOD .Geometry }
Shape38.Geometry := IndexedLineSet41;
{ METHOD .FdChildren.Add }
HAnimSegment32.FdChildren.Add(Shape38);
Shape43 := TShapeNode.Create;
Appearance44 := TAppearanceNode.Create;
Material45 := TMaterialNode.Create;
Material45.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance44.Material := Material45;
{ METHOD .Appearance }
Shape43.Appearance := Appearance44;
IndexedLineSet46 := TIndexedLineSetNode.Create;
IndexedLineSet46.SetCoordIndex([0,1]);
Coordinate47 := TCoordinateNode.Create;
Coordinate47.SetPoint([Vector3(0,0,0),Vector3(-0.2,0.3,0)]);
{ METHOD .Coord }
IndexedLineSet46.Coord := Coordinate47;
end;

procedure InitHAnimModelFootRightPart2;
begin

{ METHOD .Geometry }
Shape43.Geometry := IndexedLineSet46;
{ METHOD .FdChildren.Add }
HAnimSegment32.FdChildren.Add(Shape43);
{ METHOD .FdChildren.Add }
HAnimJoint31.FdChildren.Add(HAnimSegment32);
{ TCN }
HAnimJoint48 := THAnimJointNode.Create;
HAnimJoint48.Center := Vector3(0,-0.3,0);
HAnimSegment49 := THAnimSegmentNode.Create;
Transform50 := TTransformNode.Create;
Transform50.Translation := Vector3(0,-0.3,0);
{ METHOD .FdChildren.Add }
Transform50.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment49.FdChildren.Add(Transform50);
Shape52 := TShapeNode.Create;
Appearance53 := TAppearanceNode.Create;
Material54 := TMaterialNode.Create;
Material54.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance53.Material := Material54;
{ METHOD .Appearance }
Shape52.Appearance := Appearance53;
IndexedLineSet55 := TIndexedLineSetNode.Create;
IndexedLineSet55.SetCoordIndex([0,1]);
Coordinate56 := TCoordinateNode.Create;
Coordinate56.SetPoint([Vector3(0,-0.3,0),Vector3(0.1,-0.45,0)]);
{ METHOD .Coord }
IndexedLineSet55.Coord := Coordinate56;
{ METHOD .Geometry }
Shape52.Geometry := IndexedLineSet55;
{ METHOD .FdChildren.Add }
HAnimSegment49.FdChildren.Add(Shape52);
Shape57 := TShapeNode.Create;
Appearance58 := TAppearanceNode.Create;
Material59 := TMaterialNode.Create;
Material59.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance58.Material := Material59;
{ METHOD .Appearance }
Shape57.Appearance := Appearance58;
IndexedLineSet60 := TIndexedLineSetNode.Create;
IndexedLineSet60.SetCoordIndex([0,1]);
Coordinate61 := TCoordinateNode.Create;
Coordinate61.SetPoint([Vector3(0,-0.3,0),Vector3(0,-0.45,0)]);
{ METHOD .Coord }
IndexedLineSet60.Coord := Coordinate61;
{ METHOD .Geometry }
Shape57.Geometry := IndexedLineSet60;
{ METHOD .FdChildren.Add }
HAnimSegment49.FdChildren.Add(Shape57);
Shape62 := TShapeNode.Create;
Appearance63 := TAppearanceNode.Create;
Material64 := TMaterialNode.Create;
Material64.EmissiveColor := Vector3(1,1,1);
end;

procedure InitHAnimModelFootRightPart3;
begin

{ METHOD .SetMaterial }
Appearance63.Material := Material64;
{ METHOD .Appearance }
Shape62.Appearance := Appearance63;
IndexedLineSet65 := TIndexedLineSetNode.Create;
IndexedLineSet65.SetCoordIndex([0,1]);
Coordinate66 := TCoordinateNode.Create;
Coordinate66.SetPoint([Vector3(0,-0.3,0),Vector3(-0.1,-0.4,0)]);
{ METHOD .Coord }
IndexedLineSet65.Coord := Coordinate66;
{ METHOD .Geometry }
Shape62.Geometry := IndexedLineSet65;
{ METHOD .FdChildren.Add }
HAnimSegment49.FdChildren.Add(Shape62);
{ METHOD .FdChildren.Add }
HAnimJoint48.FdChildren.Add(HAnimSegment49);
{ CN1 }
HAnimJoint67 := THAnimJointNode.Create;
HAnimJoint67.Center := Vector3(0.1,-0.45,0);
HAnimSegment68 := THAnimSegmentNode.Create;
Transform69 := TTransformNode.Create;
Transform69.Translation := Vector3(0.1,-0.45,0);
{ METHOD .FdChildren.Add }
Transform69.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment68.FdChildren.Add(Transform69);
Shape71 := TShapeNode.Create;
Appearance72 := TAppearanceNode.Create;
Material73 := TMaterialNode.Create;
Material73.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance72.Material := Material73;
{ METHOD .Appearance }
Shape71.Appearance := Appearance72;
IndexedLineSet74 := TIndexedLineSetNode.Create;
IndexedLineSet74.SetCoordIndex([0,1]);
Coordinate75 := TCoordinateNode.Create;
Coordinate75.SetPoint([Vector3(0.1,-0.45,0),Vector3(0.1,-0.6,0)]);
{ METHOD .Coord }
IndexedLineSet74.Coord := Coordinate75;
{ METHOD .Geometry }
Shape71.Geometry := IndexedLineSet74;
{ METHOD .FdChildren.Add }
HAnimSegment68.FdChildren.Add(Shape71);
{ METHOD .FdChildren.Add }
HAnimJoint67.FdChildren.Add(HAnimSegment68);
HAnimJoint76 := THAnimJointNode.Create;
HAnimJoint76.Center := Vector3(0.1,-0.6,0);
HAnimSegment77 := THAnimSegmentNode.Create;
Transform78 := TTransformNode.Create;
Transform78.Translation := Vector3(0.1,-0.6,0);
{ METHOD .FdChildren.Add }
Transform78.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment77.FdChildren.Add(Transform78);
Shape80 := TShapeNode.Create;
Appearance81 := TAppearanceNode.Create;
end;

procedure InitHAnimModelFootRightPart4;
begin

Material82 := TMaterialNode.Create;
Material82.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance81.Material := Material82;
{ METHOD .Appearance }
Shape80.Appearance := Appearance81;
IndexedLineSet83 := TIndexedLineSetNode.Create;
IndexedLineSet83.SetCoordIndex([0,1]);
Coordinate84 := TCoordinateNode.Create;
Coordinate84.SetPoint([Vector3(0.1,-0.6,0),Vector3(0.1,-0.9,0)]);
{ METHOD .Coord }
IndexedLineSet83.Coord := Coordinate84;
{ METHOD .Geometry }
Shape80.Geometry := IndexedLineSet83;
{ METHOD .FdChildren.Add }
HAnimSegment77.FdChildren.Add(Shape80);
{ METHOD .FdChildren.Add }
HAnimJoint76.FdChildren.Add(HAnimSegment77);
HAnimJoint85 := THAnimJointNode.Create;
HAnimJoint85.Center := Vector3(0.1,-0.9,0);
HAnimSegment86 := THAnimSegmentNode.Create;
Transform87 := TTransformNode.Create;
Transform87.Translation := Vector3(0.1,-0.9,0);
{ METHOD .FdChildren.Add }
Transform87.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment86.FdChildren.Add(Transform87);
Shape89 := TShapeNode.Create;
Appearance90 := TAppearanceNode.Create;
Material91 := TMaterialNode.Create;
Material91.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance90.Material := Material91;
{ METHOD .Appearance }
Shape89.Appearance := Appearance90;
IndexedLineSet92 := TIndexedLineSetNode.Create;
IndexedLineSet92.SetCoordIndex([0,1]);
Coordinate93 := TCoordinateNode.Create;
Coordinate93.SetPoint([Vector3(0.1,-0.9,0),Vector3(0.1,-1.05,0)]);
{ METHOD .Coord }
IndexedLineSet92.Coord := Coordinate93;
{ METHOD .Geometry }
Shape89.Geometry := IndexedLineSet92;
{ METHOD .FdChildren.Add }
HAnimSegment86.FdChildren.Add(Shape89);
{ METHOD .FdChildren.Add }
HAnimJoint85.FdChildren.Add(HAnimSegment86);
HAnimJoint94 := THAnimJointNode.Create;
HAnimJoint94.Center := Vector3(0.1,-1.05,0);
HAnimSegment95 := THAnimSegmentNode.Create;
Transform96 := TTransformNode.Create;
Transform96.Translation := Vector3(0.1,-1.05,0);
{ METHOD .FdChildren.Add }
Transform96.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment95.FdChildren.Add(Transform96);
end;

procedure InitHAnimModelFootRightPart5;
begin

Shape98 := TShapeNode.Create;
Appearance99 := TAppearanceNode.Create;
Material100 := TMaterialNode.Create;
Material100.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance99.Material := Material100;
{ METHOD .Appearance }
Shape98.Appearance := Appearance99;
IndexedLineSet101 := TIndexedLineSetNode.Create;
IndexedLineSet101.SetCoordIndex([0,1]);
Coordinate102 := TCoordinateNode.Create;
Coordinate102.SetPoint([Vector3(0.1,-1.05,0),Vector3(0.1,-1.1,0)]);
{ METHOD .Coord }
IndexedLineSet101.Coord := Coordinate102;
{ METHOD .Geometry }
Shape98.Geometry := IndexedLineSet101;
{ METHOD .FdChildren.Add }
HAnimSegment95.FdChildren.Add(Shape98);
{ METHOD .FdChildren.Add }
HAnimJoint94.FdChildren.Add(HAnimSegment95);
{ METHOD .FdChildren.Add }
HAnimJoint85.FdChildren.Add(HAnimJoint94);
{ METHOD .FdChildren.Add }
HAnimJoint76.FdChildren.Add(HAnimJoint85);
{ METHOD .FdChildren.Add }
HAnimJoint67.FdChildren.Add(HAnimJoint76);
{ METHOD .FdChildren.Add }
HAnimJoint48.FdChildren.Add(HAnimJoint67);
{ CN2 }
HAnimJoint103 := THAnimJointNode.Create;
HAnimJoint103.Center := Vector3(0,-0.45,0);
HAnimSegment104 := THAnimSegmentNode.Create;
Transform105 := TTransformNode.Create;
Transform105.Translation := Vector3(0,-0.45,0);
{ METHOD .FdChildren.Add }
Transform105.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment104.FdChildren.Add(Transform105);
Shape107 := TShapeNode.Create;
Appearance108 := TAppearanceNode.Create;
Material109 := TMaterialNode.Create;
Material109.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance108.Material := Material109;
{ METHOD .Appearance }
Shape107.Appearance := Appearance108;
IndexedLineSet110 := TIndexedLineSetNode.Create;
IndexedLineSet110.SetCoordIndex([0,1]);
Coordinate111 := TCoordinateNode.Create;
Coordinate111.SetPoint([Vector3(0,-0.45,0),Vector3(-0.05,-0.6,0)]);
{ METHOD .Coord }
IndexedLineSet110.Coord := Coordinate111;
{ METHOD .Geometry }
Shape107.Geometry := IndexedLineSet110;
{ METHOD .FdChildren.Add }
HAnimSegment104.FdChildren.Add(Shape107);
{ METHOD .FdChildren.Add }
HAnimJoint103.FdChildren.Add(HAnimSegment104);
HAnimJoint112 := THAnimJointNode.Create;
end;

procedure InitHAnimModelFootRightPart6;
begin

HAnimJoint112.Center := Vector3(-0.05,-0.6,0);
HAnimSegment113 := THAnimSegmentNode.Create;
Transform114 := TTransformNode.Create;
Transform114.Translation := Vector3(-0.05,-0.6,0);
{ METHOD .FdChildren.Add }
Transform114.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment113.FdChildren.Add(Transform114);
Shape116 := TShapeNode.Create;
Appearance117 := TAppearanceNode.Create;
Material118 := TMaterialNode.Create;
Material118.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance117.Material := Material118;
{ METHOD .Appearance }
Shape116.Appearance := Appearance117;
IndexedLineSet119 := TIndexedLineSetNode.Create;
IndexedLineSet119.SetCoordIndex([0,1]);
Coordinate120 := TCoordinateNode.Create;
Coordinate120.SetPoint([Vector3(-0.05,-0.6,0),Vector3(-0.05,-0.9,0)]);
{ METHOD .Coord }
IndexedLineSet119.Coord := Coordinate120;
{ METHOD .Geometry }
Shape116.Geometry := IndexedLineSet119;
{ METHOD .FdChildren.Add }
HAnimSegment113.FdChildren.Add(Shape116);
{ METHOD .FdChildren.Add }
HAnimJoint112.FdChildren.Add(HAnimSegment113);
HAnimJoint121 := THAnimJointNode.Create;
HAnimJoint121.Center := Vector3(-0.05,-0.9,0);
HAnimSegment122 := THAnimSegmentNode.Create;
Transform123 := TTransformNode.Create;
Transform123.Translation := Vector3(-0.05,-0.9,0);
{ METHOD .FdChildren.Add }
Transform123.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment122.FdChildren.Add(Transform123);
Shape125 := TShapeNode.Create;
Appearance126 := TAppearanceNode.Create;
Material127 := TMaterialNode.Create;
Material127.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance126.Material := Material127;
{ METHOD .Appearance }
Shape125.Appearance := Appearance126;
IndexedLineSet128 := TIndexedLineSetNode.Create;
IndexedLineSet128.SetCoordIndex([0,1]);
Coordinate129 := TCoordinateNode.Create;
Coordinate129.SetPoint([Vector3(-0.05,-0.9,0),Vector3(-0.05,-1.05,0)]);
{ METHOD .Coord }
IndexedLineSet128.Coord := Coordinate129;
{ METHOD .Geometry }
Shape125.Geometry := IndexedLineSet128;
{ METHOD .FdChildren.Add }
HAnimSegment122.FdChildren.Add(Shape125);
end;

procedure InitHAnimModelFootRightPart7;
begin

{ METHOD .FdChildren.Add }
HAnimJoint121.FdChildren.Add(HAnimSegment122);
HAnimJoint130 := THAnimJointNode.Create;
HAnimJoint130.Center := Vector3(-0.05,-1.05,0);
HAnimSegment131 := THAnimSegmentNode.Create;
Transform132 := TTransformNode.Create;
Transform132.Translation := Vector3(-0.05,-1.05,0);
{ METHOD .FdChildren.Add }
Transform132.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment131.FdChildren.Add(Transform132);
Shape134 := TShapeNode.Create;
Appearance135 := TAppearanceNode.Create;
Material136 := TMaterialNode.Create;
Material136.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance135.Material := Material136;
{ METHOD .Appearance }
Shape134.Appearance := Appearance135;
IndexedLineSet137 := TIndexedLineSetNode.Create;
IndexedLineSet137.SetCoordIndex([0,1]);
Coordinate138 := TCoordinateNode.Create;
Coordinate138.SetPoint([Vector3(-0.05,-1.05,0),Vector3(-0.05,-1.12,0)]);
{ METHOD .Coord }
IndexedLineSet137.Coord := Coordinate138;
{ METHOD .Geometry }
Shape134.Geometry := IndexedLineSet137;
{ METHOD .FdChildren.Add }
HAnimSegment131.FdChildren.Add(Shape134);
{ METHOD .FdChildren.Add }
HAnimJoint130.FdChildren.Add(HAnimSegment131);
HAnimJoint139 := THAnimJointNode.Create;
HAnimJoint139.Center := Vector3(-0.05,-1.12,0);
HAnimSegment140 := THAnimSegmentNode.Create;
Transform141 := TTransformNode.Create;
Transform141.Translation := Vector3(-0.05,-1.12,0);
{ METHOD .FdChildren.Add }
Transform141.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment140.FdChildren.Add(Transform141);
Shape143 := TShapeNode.Create;
Appearance144 := TAppearanceNode.Create;
Material145 := TMaterialNode.Create;
Material145.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance144.Material := Material145;
{ METHOD .Appearance }
Shape143.Appearance := Appearance144;
IndexedLineSet146 := TIndexedLineSetNode.Create;
IndexedLineSet146.SetCoordIndex([0,1]);
Coordinate147 := TCoordinateNode.Create;
Coordinate147.SetPoint([Vector3(-0.05,-1.12,0),Vector3(-0.05,-1.16,0)]);
{ METHOD .Coord }
IndexedLineSet146.Coord := Coordinate147;
end;

procedure InitHAnimModelFootRightPart8;
begin

{ METHOD .Geometry }
Shape143.Geometry := IndexedLineSet146;
{ METHOD .FdChildren.Add }
HAnimSegment140.FdChildren.Add(Shape143);
{ METHOD .FdChildren.Add }
HAnimJoint139.FdChildren.Add(HAnimSegment140);
{ METHOD .FdChildren.Add }
HAnimJoint130.FdChildren.Add(HAnimJoint139);
{ METHOD .FdChildren.Add }
HAnimJoint121.FdChildren.Add(HAnimJoint130);
{ METHOD .FdChildren.Add }
HAnimJoint112.FdChildren.Add(HAnimJoint121);
{ METHOD .FdChildren.Add }
HAnimJoint103.FdChildren.Add(HAnimJoint112);
{ METHOD .FdChildren.Add }
HAnimJoint48.FdChildren.Add(HAnimJoint103);
{ CN3 }
HAnimJoint148 := THAnimJointNode.Create;
HAnimJoint148.Center := Vector3(-0.1,-0.4,0);
HAnimSegment149 := THAnimSegmentNode.Create;
Transform150 := TTransformNode.Create;
Transform150.Translation := Vector3(-0.1,-0.4,0);
{ METHOD .FdChildren.Add }
Transform150.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment149.FdChildren.Add(Transform150);
Shape152 := TShapeNode.Create;
Appearance153 := TAppearanceNode.Create;
Material154 := TMaterialNode.Create;
Material154.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance153.Material := Material154;
{ METHOD .Appearance }
Shape152.Appearance := Appearance153;
IndexedLineSet155 := TIndexedLineSetNode.Create;
IndexedLineSet155.SetCoordIndex([0,1]);
Coordinate156 := TCoordinateNode.Create;
Coordinate156.SetPoint([Vector3(-0.1,-0.4,0),Vector3(-0.15,-0.6,0)]);
{ METHOD .Coord }
IndexedLineSet155.Coord := Coordinate156;
{ METHOD .Geometry }
Shape152.Geometry := IndexedLineSet155;
{ METHOD .FdChildren.Add }
HAnimSegment149.FdChildren.Add(Shape152);
{ METHOD .FdChildren.Add }
HAnimJoint148.FdChildren.Add(HAnimSegment149);
HAnimJoint157 := THAnimJointNode.Create;
HAnimJoint157.Center := Vector3(-0.15,-0.6,0);
HAnimSegment158 := THAnimSegmentNode.Create;
Transform159 := TTransformNode.Create;
Transform159.Translation := Vector3(-0.15,-0.6,0);
{ METHOD .FdChildren.Add }
Transform159.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment158.FdChildren.Add(Transform159);
Shape161 := TShapeNode.Create;
Appearance162 := TAppearanceNode.Create;
Material163 := TMaterialNode.Create;
Material163.EmissiveColor := Vector3(1,1,1);
end;

procedure InitHAnimModelFootRightPart9;
begin

{ METHOD .SetMaterial }
Appearance162.Material := Material163;
{ METHOD .Appearance }
Shape161.Appearance := Appearance162;
IndexedLineSet164 := TIndexedLineSetNode.Create;
IndexedLineSet164.SetCoordIndex([0,1]);
Coordinate165 := TCoordinateNode.Create;
Coordinate165.SetPoint([Vector3(-0.15,-0.6,0),Vector3(-0.15,-0.9,0)]);
{ METHOD .Coord }
IndexedLineSet164.Coord := Coordinate165;
{ METHOD .Geometry }
Shape161.Geometry := IndexedLineSet164;
{ METHOD .FdChildren.Add }
HAnimSegment158.FdChildren.Add(Shape161);
{ METHOD .FdChildren.Add }
HAnimJoint157.FdChildren.Add(HAnimSegment158);
HAnimJoint166 := THAnimJointNode.Create;
HAnimJoint166.Center := Vector3(-0.15,-0.9,0);
HAnimSegment167 := THAnimSegmentNode.Create;
Transform168 := TTransformNode.Create;
Transform168.Translation := Vector3(-0.15,-0.9,0);
{ METHOD .FdChildren.Add }
Transform168.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment167.FdChildren.Add(Transform168);
Shape170 := TShapeNode.Create;
Appearance171 := TAppearanceNode.Create;
Material172 := TMaterialNode.Create;
Material172.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance171.Material := Material172;
{ METHOD .Appearance }
Shape170.Appearance := Appearance171;
IndexedLineSet173 := TIndexedLineSetNode.Create;
IndexedLineSet173.SetCoordIndex([0,1]);
Coordinate174 := TCoordinateNode.Create;
Coordinate174.SetPoint([Vector3(-0.15,-0.9,0),Vector3(-0.15,-1.05,0)]);
{ METHOD .Coord }
IndexedLineSet173.Coord := Coordinate174;
{ METHOD .Geometry }
Shape170.Geometry := IndexedLineSet173;
{ METHOD .FdChildren.Add }
HAnimSegment167.FdChildren.Add(Shape170);
{ METHOD .FdChildren.Add }
HAnimJoint166.FdChildren.Add(HAnimSegment167);
HAnimJoint175 := THAnimJointNode.Create;
HAnimJoint175.Center := Vector3(-0.15,-1.05,0);
HAnimSegment176 := THAnimSegmentNode.Create;
Transform177 := TTransformNode.Create;
Transform177.Translation := Vector3(-0.15,-1.05,0);
{ METHOD .FdChildren.Add }
Transform177.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment176.FdChildren.Add(Transform177);
Shape179 := TShapeNode.Create;
Appearance180 := TAppearanceNode.Create;
end;

procedure InitHAnimModelFootRightPart10;
begin

Material181 := TMaterialNode.Create;
Material181.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance180.Material := Material181;
{ METHOD .Appearance }
Shape179.Appearance := Appearance180;
IndexedLineSet182 := TIndexedLineSetNode.Create;
IndexedLineSet182.SetCoordIndex([0,1]);
Coordinate183 := TCoordinateNode.Create;
Coordinate183.SetPoint([Vector3(-0.15,-1.05,0),Vector3(-0.15,-1.13,0)]);
{ METHOD .Coord }
IndexedLineSet182.Coord := Coordinate183;
{ METHOD .Geometry }
Shape179.Geometry := IndexedLineSet182;
{ METHOD .FdChildren.Add }
HAnimSegment176.FdChildren.Add(Shape179);
{ METHOD .FdChildren.Add }
HAnimJoint175.FdChildren.Add(HAnimSegment176);
HAnimJoint184 := THAnimJointNode.Create;
HAnimJoint184.Center := Vector3(-0.15,-1.13,0);
HAnimSegment185 := THAnimSegmentNode.Create;
Transform186 := TTransformNode.Create;
Transform186.Translation := Vector3(-0.15,-1.13,0);
{ METHOD .FdChildren.Add }
Transform186.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment185.FdChildren.Add(Transform186);
Shape188 := TShapeNode.Create;
Appearance189 := TAppearanceNode.Create;
Material190 := TMaterialNode.Create;
Material190.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance189.Material := Material190;
{ METHOD .Appearance }
Shape188.Appearance := Appearance189;
IndexedLineSet191 := TIndexedLineSetNode.Create;
IndexedLineSet191.SetCoordIndex([0,1]);
Coordinate192 := TCoordinateNode.Create;
Coordinate192.SetPoint([Vector3(-0.15,-1.13,0),Vector3(-0.15,-1.16,0)]);
{ METHOD .Coord }
IndexedLineSet191.Coord := Coordinate192;
{ METHOD .Geometry }
Shape188.Geometry := IndexedLineSet191;
{ METHOD .FdChildren.Add }
HAnimSegment185.FdChildren.Add(Shape188);
{ METHOD .FdChildren.Add }
HAnimJoint184.FdChildren.Add(HAnimSegment185);
{ METHOD .FdChildren.Add }
HAnimJoint175.FdChildren.Add(HAnimJoint184);
{ METHOD .FdChildren.Add }
HAnimJoint166.FdChildren.Add(HAnimJoint175);
{ METHOD .FdChildren.Add }
HAnimJoint157.FdChildren.Add(HAnimJoint166);
{ METHOD .FdChildren.Add }
HAnimJoint148.FdChildren.Add(HAnimJoint157);
{ METHOD .FdChildren.Add }
HAnimJoint48.FdChildren.Add(HAnimJoint148);
{ METHOD .FdChildren.Add }
HAnimJoint31.FdChildren.Add(HAnimJoint48);
{ CC }
HAnimJoint193 := THAnimJointNode.Create;
end;

procedure InitHAnimModelFootRightPart11;
begin

HAnimJoint193.Center := Vector3(-0.2,0.3,0);
HAnimSegment194 := THAnimSegmentNode.Create;
Transform195 := TTransformNode.Create;
Transform195.Translation := Vector3(-0.2,0.3,0);
{ METHOD .FdChildren.Add }
Transform195.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment194.FdChildren.Add(Transform195);
Shape197 := TShapeNode.Create;
Appearance198 := TAppearanceNode.Create;
Material199 := TMaterialNode.Create;
Material199.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance198.Material := Material199;
{ METHOD .Appearance }
Shape197.Appearance := Appearance198;
IndexedLineSet200 := TIndexedLineSetNode.Create;
IndexedLineSet200.SetCoordIndex([0,1]);
Coordinate201 := TCoordinateNode.Create;
Coordinate201.SetPoint([Vector3(-0.2,0.3,0),Vector3(-0.21,-0.3,0)]);
{ METHOD .Coord }
IndexedLineSet200.Coord := Coordinate201;
{ METHOD .Geometry }
Shape197.Geometry := IndexedLineSet200;
{ METHOD .FdChildren.Add }
HAnimSegment194.FdChildren.Add(Shape197);
{ METHOD .FdChildren.Add }
HAnimJoint193.FdChildren.Add(HAnimSegment194);
{ TT }
HAnimJoint202 := THAnimJointNode.Create;
HAnimJoint202.Center := Vector3(-0.21,-0.3,0);
HAnimSegment203 := THAnimSegmentNode.Create;
Transform204 := TTransformNode.Create;
Transform204.Translation := Vector3(-0.21,-0.3,0);
{ METHOD .FdChildren.Add }
Transform204.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment203.FdChildren.Add(Transform204);
Shape206 := TShapeNode.Create;
Appearance207 := TAppearanceNode.Create;
Material208 := TMaterialNode.Create;
Material208.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance207.Material := Material208;
{ METHOD .Appearance }
Shape206.Appearance := Appearance207;
IndexedLineSet209 := TIndexedLineSetNode.Create;
IndexedLineSet209.SetCoordIndex([0,1]);
Coordinate210 := TCoordinateNode.Create;
Coordinate210.SetPoint([Vector3(-0.21,-0.3,0),Vector3(-0.25,-0.58,0)]);
{ METHOD .Coord }
IndexedLineSet209.Coord := Coordinate210;
{ METHOD .Geometry }
Shape206.Geometry := IndexedLineSet209;
{ METHOD .FdChildren.Add }
HAnimSegment203.FdChildren.Add(Shape206);
end;

procedure InitHAnimModelFootRightPart12;
begin

Shape211 := TShapeNode.Create;
Appearance212 := TAppearanceNode.Create;
Material213 := TMaterialNode.Create;
Material213.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance212.Material := Material213;
{ METHOD .Appearance }
Shape211.Appearance := Appearance212;
IndexedLineSet214 := TIndexedLineSetNode.Create;
IndexedLineSet214.SetCoordIndex([0,1]);
Coordinate215 := TCoordinateNode.Create;
Coordinate215.SetPoint([Vector3(-0.21,-0.3,0),Vector3(-0.33,-0.52,0)]);
{ METHOD .Coord }
IndexedLineSet214.Coord := Coordinate215;
{ METHOD .Geometry }
Shape211.Geometry := IndexedLineSet214;
{ METHOD .FdChildren.Add }
HAnimSegment203.FdChildren.Add(Shape211);
{ METHOD .FdChildren.Add }
HAnimJoint202.FdChildren.Add(HAnimSegment203);
{ TMT4 }
HAnimJoint216 := THAnimJointNode.Create;
HAnimJoint216.Center := Vector3(-0.25,-0.58,0);
HAnimSegment217 := THAnimSegmentNode.Create;
Transform218 := TTransformNode.Create;
Transform218.Translation := Vector3(-0.25,-0.58,0);
{ METHOD .FdChildren.Add }
Transform218.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment217.FdChildren.Add(Transform218);
Shape220 := TShapeNode.Create;
Appearance221 := TAppearanceNode.Create;
Material222 := TMaterialNode.Create;
Material222.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance221.Material := Material222;
{ METHOD .Appearance }
Shape220.Appearance := Appearance221;
IndexedLineSet223 := TIndexedLineSetNode.Create;
IndexedLineSet223.SetCoordIndex([0,1]);
Coordinate224 := TCoordinateNode.Create;
Coordinate224.SetPoint([Vector3(-0.25,-0.58,0),Vector3(-0.25,-0.87,0)]);
{ METHOD .Coord }
IndexedLineSet223.Coord := Coordinate224;
{ METHOD .Geometry }
Shape220.Geometry := IndexedLineSet223;
{ METHOD .FdChildren.Add }
HAnimSegment217.FdChildren.Add(Shape220);
{ METHOD .FdChildren.Add }
HAnimJoint216.FdChildren.Add(HAnimSegment217);
HAnimJoint225 := THAnimJointNode.Create;
HAnimJoint225.Center := Vector3(-0.25,-0.87,0);
HAnimSegment226 := THAnimSegmentNode.Create;
Transform227 := TTransformNode.Create;
Transform227.Translation := Vector3(-0.25,-0.87,0);
end;

procedure InitHAnimModelFootRightPart13;
begin

{ METHOD .FdChildren.Add }
Transform227.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment226.FdChildren.Add(Transform227);
Shape229 := TShapeNode.Create;
Appearance230 := TAppearanceNode.Create;
Material231 := TMaterialNode.Create;
Material231.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance230.Material := Material231;
{ METHOD .Appearance }
Shape229.Appearance := Appearance230;
IndexedLineSet232 := TIndexedLineSetNode.Create;
IndexedLineSet232.SetCoordIndex([0,1]);
Coordinate233 := TCoordinateNode.Create;
Coordinate233.SetPoint([Vector3(-0.25,-0.87,0),Vector3(-0.25,-1,0)]);
{ METHOD .Coord }
IndexedLineSet232.Coord := Coordinate233;
{ METHOD .Geometry }
Shape229.Geometry := IndexedLineSet232;
{ METHOD .FdChildren.Add }
HAnimSegment226.FdChildren.Add(Shape229);
{ METHOD .FdChildren.Add }
HAnimJoint225.FdChildren.Add(HAnimSegment226);
HAnimJoint234 := THAnimJointNode.Create;
HAnimJoint234.Center := Vector3(-0.25,-1,0);
HAnimSegment235 := THAnimSegmentNode.Create;
Transform236 := TTransformNode.Create;
Transform236.Translation := Vector3(-0.25,-1,0);
{ METHOD .FdChildren.Add }
Transform236.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment235.FdChildren.Add(Transform236);
Shape238 := TShapeNode.Create;
Appearance239 := TAppearanceNode.Create;
Material240 := TMaterialNode.Create;
Material240.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance239.Material := Material240;
{ METHOD .Appearance }
Shape238.Appearance := Appearance239;
IndexedLineSet241 := TIndexedLineSetNode.Create;
IndexedLineSet241.SetCoordIndex([0,1]);
Coordinate242 := TCoordinateNode.Create;
Coordinate242.SetPoint([Vector3(-0.25,-1,0),Vector3(-0.25,-1.1,0)]);
{ METHOD .Coord }
IndexedLineSet241.Coord := Coordinate242;
{ METHOD .Geometry }
Shape238.Geometry := IndexedLineSet241;
{ METHOD .FdChildren.Add }
HAnimSegment235.FdChildren.Add(Shape238);
{ METHOD .FdChildren.Add }
HAnimJoint234.FdChildren.Add(HAnimSegment235);
HAnimJoint243 := THAnimJointNode.Create;
HAnimJoint243.Center := Vector3(-0.25,-1.1,0);
HAnimSegment244 := THAnimSegmentNode.Create;
end;

procedure InitHAnimModelFootRightPart14;
begin

Transform245 := TTransformNode.Create;
Transform245.Translation := Vector3(-0.25,-1.1,0);
{ METHOD .FdChildren.Add }
Transform245.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment244.FdChildren.Add(Transform245);
Shape247 := TShapeNode.Create;
Appearance248 := TAppearanceNode.Create;
Material249 := TMaterialNode.Create;
Material249.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance248.Material := Material249;
{ METHOD .Appearance }
Shape247.Appearance := Appearance248;
IndexedLineSet250 := TIndexedLineSetNode.Create;
IndexedLineSet250.SetCoordIndex([0,1]);
Coordinate251 := TCoordinateNode.Create;
Coordinate251.SetPoint([Vector3(-0.25,-1.1,0),Vector3(-0.25,-1.15,0)]);
{ METHOD .Coord }
IndexedLineSet250.Coord := Coordinate251;
{ METHOD .Geometry }
Shape247.Geometry := IndexedLineSet250;
{ METHOD .FdChildren.Add }
HAnimSegment244.FdChildren.Add(Shape247);
{ METHOD .FdChildren.Add }
HAnimJoint243.FdChildren.Add(HAnimSegment244);
{ METHOD .FdChildren.Add }
HAnimJoint234.FdChildren.Add(HAnimJoint243);
{ METHOD .FdChildren.Add }
HAnimJoint225.FdChildren.Add(HAnimJoint234);
{ METHOD .FdChildren.Add }
HAnimJoint216.FdChildren.Add(HAnimJoint225);
{ METHOD .FdChildren.Add }
HAnimJoint202.FdChildren.Add(HAnimJoint216);
{ TMT5 }
HAnimJoint252 := THAnimJointNode.Create;
HAnimJoint252.Center := Vector3(-0.33,-0.52,0);
HAnimSegment253 := THAnimSegmentNode.Create;
Transform254 := TTransformNode.Create;
Transform254.Translation := Vector3(-0.33,-0.52,0);
{ METHOD .FdChildren.Add }
Transform254.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment253.FdChildren.Add(Transform254);
Shape256 := TShapeNode.Create;
Appearance257 := TAppearanceNode.Create;
Material258 := TMaterialNode.Create;
Material258.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance257.Material := Material258;
{ METHOD .Appearance }
Shape256.Appearance := Appearance257;
IndexedLineSet259 := TIndexedLineSetNode.Create;
IndexedLineSet259.SetCoordIndex([0,1]);
Coordinate260 := TCoordinateNode.Create;
Coordinate260.SetPoint([Vector3(-0.33,-0.52,0),Vector3(-0.34,-0.8,0)]);
{ METHOD .Coord }
IndexedLineSet259.Coord := Coordinate260;
end;

procedure InitHAnimModelFootRightPart15;
begin

{ METHOD .Geometry }
Shape256.Geometry := IndexedLineSet259;
{ METHOD .FdChildren.Add }
HAnimSegment253.FdChildren.Add(Shape256);
{ METHOD .FdChildren.Add }
HAnimJoint252.FdChildren.Add(HAnimSegment253);
HAnimJoint261 := THAnimJointNode.Create;
HAnimJoint261.Center := Vector3(-0.34,-0.8,0);
HAnimSegment262 := THAnimSegmentNode.Create;
Transform263 := TTransformNode.Create;
Transform263.Translation := Vector3(-0.34,-0.8,0);
{ METHOD .FdChildren.Add }
Transform263.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment262.FdChildren.Add(Transform263);
Shape265 := TShapeNode.Create;
Appearance266 := TAppearanceNode.Create;
Material267 := TMaterialNode.Create;
Material267.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance266.Material := Material267;
{ METHOD .Appearance }
Shape265.Appearance := Appearance266;
IndexedLineSet268 := TIndexedLineSetNode.Create;
IndexedLineSet268.SetCoordIndex([0,1]);
Coordinate269 := TCoordinateNode.Create;
Coordinate269.SetPoint([Vector3(-0.34,-0.8,0),Vector3(-0.34,-0.95,0)]);
{ METHOD .Coord }
IndexedLineSet268.Coord := Coordinate269;
{ METHOD .Geometry }
Shape265.Geometry := IndexedLineSet268;
{ METHOD .FdChildren.Add }
HAnimSegment262.FdChildren.Add(Shape265);
{ METHOD .FdChildren.Add }
HAnimJoint261.FdChildren.Add(HAnimSegment262);
HAnimJoint270 := THAnimJointNode.Create;
HAnimJoint270.Center := Vector3(-0.34,-0.95,0);
HAnimSegment271 := THAnimSegmentNode.Create;
Transform272 := TTransformNode.Create;
Transform272.Translation := Vector3(-0.34,-0.95,0);
{ METHOD .FdChildren.Add }
Transform272.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment271.FdChildren.Add(Transform272);
Shape274 := TShapeNode.Create;
Appearance275 := TAppearanceNode.Create;
Material276 := TMaterialNode.Create;
Material276.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance275.Material := Material276;
{ METHOD .Appearance }
Shape274.Appearance := Appearance275;
IndexedLineSet277 := TIndexedLineSetNode.Create;
IndexedLineSet277.SetCoordIndex([0,1]);
Coordinate278 := TCoordinateNode.Create;
end;

procedure InitHAnimModelFootRightPart16;
begin

Coordinate278.SetPoint([Vector3(-0.34,-0.95,0),Vector3(-0.34,-1.05,0)]);
{ METHOD .Coord }
IndexedLineSet277.Coord := Coordinate278;
{ METHOD .Geometry }
Shape274.Geometry := IndexedLineSet277;
{ METHOD .FdChildren.Add }
HAnimSegment271.FdChildren.Add(Shape274);
{ METHOD .FdChildren.Add }
HAnimJoint270.FdChildren.Add(HAnimSegment271);
HAnimJoint279 := THAnimJointNode.Create;
HAnimJoint279.Center := Vector3(-0.34,-1.05,0);
HAnimSegment280 := THAnimSegmentNode.Create;
Transform281 := TTransformNode.Create;
Transform281.Translation := Vector3(-0.34,-1.05,0);
{ METHOD .FdChildren.Add }
Transform281.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimSegment280.FdChildren.Add(Transform281);
Shape283 := TShapeNode.Create;
Appearance284 := TAppearanceNode.Create;
Material285 := TMaterialNode.Create;
Material285.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance284.Material := Material285;
{ METHOD .Appearance }
Shape283.Appearance := Appearance284;
IndexedLineSet286 := TIndexedLineSetNode.Create;
IndexedLineSet286.SetCoordIndex([0,1]);
Coordinate287 := TCoordinateNode.Create;
Coordinate287.SetPoint([Vector3(-0.34,-1.05,0),Vector3(-0.34,-1.08,0)]);
{ METHOD .Coord }
IndexedLineSet286.Coord := Coordinate287;
{ METHOD .Geometry }
Shape283.Geometry := IndexedLineSet286;
{ METHOD .FdChildren.Add }
HAnimSegment280.FdChildren.Add(Shape283);
{ METHOD .FdChildren.Add }
HAnimJoint279.FdChildren.Add(HAnimSegment280);
{ METHOD .FdChildren.Add }
HAnimJoint270.FdChildren.Add(HAnimJoint279);
{ METHOD .FdChildren.Add }
HAnimJoint261.FdChildren.Add(HAnimJoint270);
{ METHOD .FdChildren.Add }
HAnimJoint252.FdChildren.Add(HAnimJoint261);
{ METHOD .FdChildren.Add }
HAnimJoint202.FdChildren.Add(HAnimJoint252);
{ METHOD .FdChildren.Add }
HAnimJoint193.FdChildren.Add(HAnimJoint202);
{ METHOD .FdChildren.Add }
HAnimJoint31.FdChildren.Add(HAnimJoint193);
{ METHOD .FdChildren.Add }
HAnimJoint30.FdChildren.Add(HAnimJoint31);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid27.FdSkeleton.Add(HAnimJoint30);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint30);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint193);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint67);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint103);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint148);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint85);
end;

procedure InitHAnimModelFootRightPart17;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint121);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint166);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint225);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint261);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint48);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint31);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint139);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint184);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint243);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint279);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint94);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint130);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint175);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint234);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint270);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint76);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint112);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint157);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint216);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint252);
{ METHOD .FdJoints.Add }
HAnimHumanoid27.FdJoints.Add(HAnimJoint202);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(HAnimHumanoid27);
{ METHOD .AddGroup }
X3D0.AddChildren([Group25]);
end;

function CreateHAnimModelFootRight: TX3DRootNode;
begin
InitHAnimModelFootRightPart0;
InitHAnimModelFootRightPart1;
InitHAnimModelFootRightPart2;
InitHAnimModelFootRightPart3;
InitHAnimModelFootRightPart4;
InitHAnimModelFootRightPart5;
InitHAnimModelFootRightPart6;
InitHAnimModelFootRightPart7;
InitHAnimModelFootRightPart8;
InitHAnimModelFootRightPart9;
InitHAnimModelFootRightPart10;
InitHAnimModelFootRightPart11;
InitHAnimModelFootRightPart12;
InitHAnimModelFootRightPart13;
InitHAnimModelFootRightPart14;
InitHAnimModelFootRightPart15;
InitHAnimModelFootRightPart16;
InitHAnimModelFootRightPart17;
Result := X3D0;
end;

begin
end.
