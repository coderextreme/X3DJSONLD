unit TransformKids;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateTransformKids: TX3DRootNode;

implementation

uses CastleVectors;

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

procedure InitTransformKidsPart0;
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
Transform11.Translation := Vector3(0, 1.5, 0);
Shape12 := TShapeNode.Create;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.X3DName := 'GreenMaterial';
Material14.DiffuseColor := Vector3(0, 1, 0);
Appearance13.Material := Material14;
Shape12.Appearance := Appearance13;
Box15 := TBoxNode.Create;
Shape12.Geometry := Box15;
Transform11.FdChildren.Add(Shape12);
Group10.FdChildren.Add(Transform11);
MetadataSet16 := TMetadataSetNode.Create;
MetadataString17 := TMetadataStringNode.Create;
MetadataString17.SetValue(['Metadata String']);
MetadataSet16.FdValue.Add(MetadataString17);
Group10.Metadata := MetadataSet16;
Transform18 := TTransformNode.Create;
Transform18.Translation := Vector3(0, -1.5, 0);
Shape19 := TShapeNode.Create;
Appearance20 := TAppearanceNode.Create;
Material21 := TMaterialNode.Create;
Material21.X3DName := 'RedMaterial';
Material21.DiffuseColor := Vector3(1, 0, 0);
Appearance20.Material := Material21;
Shape19.Appearance := Appearance20;
end;

procedure InitTransformKidsPart1;
begin
Box22 := TBoxNode.Create;
Shape19.Geometry := Box22;
Transform18.FdChildren.Add(Shape19);
Group10.FdChildren.Add(Transform18);
X3D0.AddChildren([Group10]);
end;

function CreateTransformKids: TX3DRootNode;
begin
  InitTransformKidsPart0;
  InitTransformKidsPart1;
  Result := X3D0;
end;

begin
end.
