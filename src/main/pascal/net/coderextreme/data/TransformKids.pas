unit TransformKids;

interface

uses X3DNodes;

function CreateTransformKids: TX3DRootNode;

implementation

uses CastleVectors;

function CreateTransformKids: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group10: TGroupNode;
Transform11: TTransformNode;
Shape12: TShapeNode;
Appearance13: TAppearanceNode;
Material14: TMaterialNode;
Box15: TBoxNode;
MetadataSet16: TMetadataSetNode;
MetadataString17: TMetadataStringNode;
Transform18: TTransformNode;
Shape19: TShapeNode;
Appearance20: TAppearanceNode;
Material21: TMaterialNode;
Box22: TBoxNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Grouping'] := 1;
X3D0.Meta['title'] := 'SmokeTestProgramOutput.x3d';
X3D0.Meta['info'] := 'To Show Problems with X3dToJson.xslt';
X3D0.Meta['description'] := 'Example SmokeTestProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)';
X3D0.Meta['created'] := '28 October 2026';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['refernce'] := 'https://www.web3d.org/specifications/java/examples/SmokeTestProgram.java';
X3D0.Meta['license'] := '../license.html';
Group10 := TGroupNode.Create;
Transform11 := TTransformNode.Create;
Transform11.Translation := Vector3(0,1.5,0);
Shape12 := TShapeNode.Create;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance13.Material := Material14;
{ .SetAppearance }
Shape12.Appearance := Appearance13;
Box15 := TBoxNode.Create;
{ .SetGeometry }
Shape12.Geometry := Box15;
{ .AddChild }
Transform11.AddChildren([Shape12]);
{ .AddChildren }
Group10.AddChildren([Transform11]);
MetadataSet16 := TMetadataSetNode.Create;
MetadataString17 := TMetadataStringNode.Create;
MetadataString17.SetValue(['Metadata String']);
{ .FdValue.Add }
MetadataSet16.FdValue.Add(MetadataString17);
{ .SetMetadata }
Group10.Metadata := MetadataSet16;
Transform18 := TTransformNode.Create;
Transform18.Translation := Vector3(0,-1.5,0);
Shape19 := TShapeNode.Create;
Appearance20 := TAppearanceNode.Create;
Material21 := TMaterialNode.Create;
Material21.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance20.Material := Material21;
{ .SetAppearance }
Shape19.Appearance := Appearance20;
Box22 := TBoxNode.Create;
{ .SetGeometry }
Shape19.Geometry := Box22;
{ .AddChild }
Transform18.AddChildren([Shape19]);
{ .AddChildren }
Group10.AddChildren([Transform18]);
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;

begin
end.
