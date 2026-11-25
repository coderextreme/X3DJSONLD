unit ExtrusionHeart;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateExtrusionHeart: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group10: TGroupNode;
  Viewpoint11: TViewpointNode;
  Transform12: TTransformNode;
  Shape13: TShapeNode;
  Extrusion14: TExtrusionNode;
  Appearance15: TAppearanceNode;
  Material16: TMaterialNode;

procedure InitExtrusionHeartPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ExtrusionHeart.x3d';
X3D0.Meta['description'] := 'Simple extrusion of a Valentine heart.';
X3D0.Meta['creator'] := 'Class participants in course Introduction to VRML/X3D.';
X3D0.Meta['created'] := '14 February 2001';
X3D0.Meta['modified'] := '27 November 2015';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group10 := TGroupNode.Create;
Viewpoint11 := TViewpointNode.Create;
Viewpoint11.Description := 'Extrusion Heart';
Viewpoint11.Orientation := Vector4(1, 0, 0, 1.57);
Viewpoint11.Position := Vector3(0, -4, 0);
Group10.FdChildren.Add(Viewpoint11);
Transform12 := TTransformNode.Create;
Transform12.Translation := Vector3(0, -0.5, 0);
Shape13 := TShapeNode.Create;
Extrusion14 := TExtrusionNode.Create;
Extrusion14.CreaseAngle := 3.14159;
Extrusion14.SetCrossSection([Vector2(0, 0.8), Vector2(0.2, 1), Vector2(0.7, 0.95), Vector2(1, 0.5), Vector2(0.8, 0), Vector2(0.5, -0.3), Vector2(0, -0.7), Vector2(-0.5, -0.3), Vector2(-0.8, 0), Vector2(-1, 0.5), Vector2(-0.7, 0.95), Vector2(-0.2, 1), Vector2(0, 0.8)]);
Extrusion14.SetScale([Vector2(0.01, 0.01), Vector2(0.8, 0.8), Vector2(1, 1), Vector2(0.8, 0.8), Vector2(0.01, 0.01)]);
Extrusion14.Solid := False;
Extrusion14.SetSpine([Vector3(0, 0, 0), Vector3(0, 0.1, 0), Vector3(0, 0.5, 0), Vector3(0, 0.9, 0), Vector3(0, 1, 0)]);
Shape13.Geometry := Extrusion14;
Appearance15 := TAppearanceNode.Create;
Material16 := TMaterialNode.Create;
Material16.DiffuseColor := Vector3(0.8, 0.3, 0.3);
Appearance15.Material := Material16;
Shape13.Appearance := Appearance15;
Transform12.FdChildren.Add(Shape13);
Group10.FdChildren.Add(Transform12);
X3D0.AddChildren([Group10]);
end;

function CreateExtrusionHeart: TX3DRootNode;
begin
  InitExtrusionHeartPart0;
  Result := X3D0;
end;

begin
end.
