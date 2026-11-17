unit PoseCollection;

interface

uses X3DNodes;

function CreatePoseCollection: TX3DRootNode;

implementation

uses CastleVectors;

function CreatePoseCollection: TX3DRootNode;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 1;
X3D0.Meta['title'] := 'PoseCollection.x3d';
X3D0.Meta['description'] := 'Collection of reusable HAnimPose nodes';
X3D0.Meta['creator'] := 'Joe Williams';
X3D0.Meta['creator'] := 'Joe Williams';
X3D0.Meta['created'] := '23 February 2026';
X3D0.Meta['modified'] := '23 February 2026';
X3D0.Meta['TODO'] := 'how to negate right-side values used for left-side orientations?';
X3D0.Meta['specificationSection'] := 'HAnim 2.1 Architecture, ISO/IEC 19774-1:202x, clause 4 Concepts, 4.8.3 Poses';
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses';
X3D0.Meta['specificationSection'] := 'HAnim 2.1 Architecture, ISO/IEC 19774-1:202x, clause 6 Object interfaces, 6.5 Pose';
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/PoseCollection.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group16 := TGroupNode.Create;
WorldInfo17 := TWorldInfoNode.Create;
WorldInfo17.Title := 'PoseCollection.x3d';
{ .AddChildren }
Group16.AddChildren([WorldInfo17]);
HAnimPose18 := THAnimPoseNode.Create;
HAnimPose18.NameField := 'Stand';
HAnimPose18.Description := 'Standing position, I pose';
HAnimPose18.Loa := 1;
HAnimPose18.TransitionDuration := 0;
HAnimJoint19 := THAnimJointNode.Create;
HAnimJoint19.NameField := 'r_wrist';
HAnimJoint19.Description := 'right wrist';
HAnimJoint19.Rotation := Vector4(0,-0.2,0,0.25);
{ .AddChildren }
HAnimPose18.AddChildren([HAnimJoint19]);
HAnimJoint20 := THAnimJointNode.Create;
HAnimJoint20.NameField := 'r_elbow';
HAnimJoint20.Description := 'right elbow';
HAnimJoint20.Rotation := Vector4(-0.75,1,1,1.6);
{ .AddChildren }
HAnimPose18.AddChildren([HAnimJoint20]);
HAnimJoint21 := THAnimJointNode.Create;
HAnimJoint21.NameField := 'r_shoulder';
HAnimJoint21.Description := 'right shoulder';
HAnimJoint21.Rotation := Vector4(-0.1,0,-0.02,0.25);
{ .AddChildren }
HAnimPose18.AddChildren([HAnimJoint21]);
HAnimJoint22 := THAnimJointNode.Create;
HAnimJoint22.NameField := 'r_acromioclavicular';
HAnimJoint22.Description := 'right acromioclavicular';
HAnimJoint22.Rotation := Vector4(0,0.05,0,0.05);
{ .AddChildren }
HAnimPose18.AddChildren([HAnimJoint22]);
HAnimJoint23 := THAnimJointNode.Create;
HAnimJoint23.NameField := 'r_sternoclavicular';
HAnimJoint23.Description := 'right sternoclavicular';
HAnimJoint23.Rotation := Vector4(0,0.05,0,0.05);
{ .AddChildren }
HAnimPose18.AddChildren([HAnimJoint23]);
HAnimJoint24 := THAnimJointNode.Create;
HAnimJoint24.NameField := 'l_wrist';
HAnimJoint24.Description := 'left wrist';
HAnimJoint24.Rotation := Vector4(0,-0.2,0,0.25);
{ .AddChildren }
HAnimPose18.AddChildren([HAnimJoint24]);
HAnimJoint25 := THAnimJointNode.Create;
HAnimJoint25.NameField := 'l_elbow';
HAnimJoint25.Description := 'left elbow';
HAnimJoint25.Rotation := Vector4(-0.75,1,1,1.6);
{ .AddChildren }
HAnimPose18.AddChildren([HAnimJoint25]);
HAnimJoint26 := THAnimJointNode.Create;
HAnimJoint26.NameField := 'l_shoulder';
HAnimJoint26.Description := 'left shoulder';
HAnimJoint26.Rotation := Vector4(-0.1,0,-0.02,0.25);
{ .AddChildren }
HAnimPose18.AddChildren([HAnimJoint26]);
HAnimJoint27 := THAnimJointNode.Create;
HAnimJoint27.NameField := 'l_acromioclavicular';
HAnimJoint27.Description := 'left acromioclavicular';
HAnimJoint27.Rotation := Vector4(0,0.05,0,0.05);
{ .AddChildren }
HAnimPose18.AddChildren([HAnimJoint27]);
HAnimJoint28 := THAnimJointNode.Create;
HAnimJoint28.NameField := 'l_sternoclavicular';
HAnimJoint28.Description := 'left sternoclavicular';
HAnimJoint28.Rotation := Vector4(0,0.05,0,0.05);
{ .AddChildren }
HAnimPose18.AddChildren([HAnimJoint28]);
{ .AddChildren }
Group16.AddChildren([HAnimPose18]);
{ .AddGroup }
X3D0.AddChildren([Group16]);
Result := X3D0;
end;

begin
end.
