unit PoseCollection;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreatePoseCollection: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group16: TGroupNode;
WorldInfo17: TWorldInfoNode;
HAnimPose18: THAnimPoseNode;
HAnimJoint19: THAnimJointNode;
HAnimJoint20: THAnimJointNode;
HAnimJoint21: THAnimJointNode;
HAnimJoint22: THAnimJointNode;
HAnimJoint23: THAnimJointNode;
HAnimJoint24: THAnimJointNode;
HAnimJoint25: THAnimJointNode;
HAnimJoint26: THAnimJointNode;
HAnimJoint27: THAnimJointNode;
HAnimJoint28: THAnimJointNode;

procedure InitPoseCollectionPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 1;
X3D0.Meta['title'] := 'PoseCollection.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Collection of reusable HAnimPose nodes';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Joe Williams';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Joe Williams';
{ METHOD .Meta }
X3D0.Meta['created'] := '23 February 2026';
{ METHOD .Meta }
X3D0.Meta['modified'] := '23 February 2026';
{ METHOD .Meta }
X3D0.Meta['TODO'] := 'how to negate right-side values used for left-side orientations?';
{ METHOD .Meta }
X3D0.Meta['specificationSection'] := 'HAnim 2.1 Architecture, ISO/IEC 19774-1:202x, clause 4 Concepts, 4.8.3 Poses';
{ METHOD .Meta }
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses';
{ METHOD .Meta }
X3D0.Meta['specificationSection'] := 'HAnim 2.1 Architecture, ISO/IEC 19774-1:202x, clause 6 Object interfaces, 6.5 Pose';
{ METHOD .Meta }
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/PoseCollection.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group16 := TGroupNode.Create;;
WorldInfo17 := TWorldInfoNode.Create;;
WorldInfo17.Title := 'PoseCollection.x3d';
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(WorldInfo17);
HAnimPose18 := THAnimPoseNode.Create;;
HAnimPose18.Description := 'Standing position, I pose';
HAnimPose18.Loa := 1;
HAnimPose18.TransitionDuration := 0;
HAnimJoint19 := THAnimJointNode.Create;;
HAnimJoint19.Description := 'right wrist';
HAnimJoint19.Rotation := Vector4(0,-0.2,0,0.25);
{ METHOD .FdChildren.Add }
HAnimPose18.FdChildren.Add(HAnimJoint19);
HAnimJoint20 := THAnimJointNode.Create;;
HAnimJoint20.Description := 'right elbow';
HAnimJoint20.Rotation := Vector4(-0.75,1,1,1.6);
{ METHOD .FdChildren.Add }
HAnimPose18.FdChildren.Add(HAnimJoint20);
HAnimJoint21 := THAnimJointNode.Create;
end;

procedure InitPoseCollectionPart1;
begin
;
HAnimJoint21.Description := 'right shoulder';
HAnimJoint21.Rotation := Vector4(-0.1,0,-0.02,0.25);
{ METHOD .FdChildren.Add }
HAnimPose18.FdChildren.Add(HAnimJoint21);
HAnimJoint22 := THAnimJointNode.Create;;
HAnimJoint22.Description := 'right acromioclavicular';
HAnimJoint22.Rotation := Vector4(0,0.05,0,0.05);
{ METHOD .FdChildren.Add }
HAnimPose18.FdChildren.Add(HAnimJoint22);
HAnimJoint23 := THAnimJointNode.Create;;
HAnimJoint23.Description := 'right sternoclavicular';
HAnimJoint23.Rotation := Vector4(0,0.05,0,0.05);
{ METHOD .FdChildren.Add }
HAnimPose18.FdChildren.Add(HAnimJoint23);
HAnimJoint24 := THAnimJointNode.Create;;
HAnimJoint24.Description := 'left wrist';
HAnimJoint24.Rotation := Vector4(0,-0.2,0,0.25);
{ METHOD .FdChildren.Add }
HAnimPose18.FdChildren.Add(HAnimJoint24);
HAnimJoint25 := THAnimJointNode.Create;;
HAnimJoint25.Description := 'left elbow';
HAnimJoint25.Rotation := Vector4(-0.75,1,1,1.6);
{ METHOD .FdChildren.Add }
HAnimPose18.FdChildren.Add(HAnimJoint25);
HAnimJoint26 := THAnimJointNode.Create;;
HAnimJoint26.Description := 'left shoulder';
HAnimJoint26.Rotation := Vector4(-0.1,0,-0.02,0.25);
{ METHOD .FdChildren.Add }
HAnimPose18.FdChildren.Add(HAnimJoint26);
HAnimJoint27 := THAnimJointNode.Create;;
HAnimJoint27.Description := 'left acromioclavicular';
HAnimJoint27.Rotation := Vector4(0,0.05,0,0.05);
{ METHOD .FdChildren.Add }
HAnimPose18.FdChildren.Add(HAnimJoint27);
HAnimJoint28 := THAnimJointNode.Create;;
HAnimJoint28.Description := 'left sternoclavicular';
HAnimJoint28.Rotation := Vector4(0,0.05,0,0.05);
{ METHOD .FdChildren.Add }
HAnimPose18.FdChildren.Add(HAnimJoint28);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(HAnimPose18);
end;

procedure InitPoseCollectionPart2;
begin

{ METHOD .AddGroup }
X3D0.AddChildren([Group16]);
end;

function CreatePoseCollection: TX3DRootNode;
begin
InitPoseCollectionPart0;
InitPoseCollectionPart1;
InitPoseCollectionPart2;
Result := X3D0;
end;

begin
end.
