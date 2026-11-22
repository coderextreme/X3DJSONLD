unit HelloWorldNoXmlNoDoctype;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateHelloWorldNoXmlNoDoctype: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group11: TGroupNode;

procedure InitHelloWorldNoXmlNoDoctypePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'HelloWorldNoXmlNoDoctype.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Test X3D loading with no XML declaration or DOCTYPE present.';
{ METHOD .Meta }
X3D0.Meta['created'] := '27 November 2025';
{ METHOD .Meta }
X3D0.Meta['modified'] := '27 November 2025';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldX3D4';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/stylesheets/java/examples/HelloWorldNoXmlNoDoctype.x3d';
{ METHOD .Meta }
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit';
{ METHOD .Meta }
{ METHOD .Head }
Group11 := TGroupNode.Create;
{ Example scene to illustrate X3D nodes and fields (XML elements and attributes) }
{ METHOD .AddGroup }
X3D0.AddChildren([Group11]);
end;

function CreateHelloWorldNoXmlNoDoctype: TX3DRootNode;
begin
InitHelloWorldNoXmlNoDoctypePart0;
Result := X3D0;
end;

begin
end.
