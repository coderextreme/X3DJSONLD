unit OrientationInterpolator;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateOrientationInterpolator: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group7: TGroupNode;
WorldInfo8: TWorldInfoNode;

procedure InitOrientationInterpolatorPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interactive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'OrientationInterpolator.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['created'] := '29 December 2025';
{ METHOD .Meta }
X3D0.Meta['license'] := 'license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;;
WorldInfo8 := TWorldInfoNode.Create;;
WorldInfo8.Title := 'OrientationInterpolator.x3d';
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(WorldInfo8);
{ <OrientationInterpolator DEF='Stop_l_midtarsal_RotationInterpolator' key='0 0.5 1' keyValue='0 0 1 0 0 0 1 0 0 0 1 0'/> }
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function CreateOrientationInterpolator: TX3DRootNode;
begin
InitOrientationInterpolatorPart0;
Result := X3D0;
end;

begin
end.
