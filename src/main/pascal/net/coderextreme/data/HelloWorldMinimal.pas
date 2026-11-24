unit HelloWorldMinimal;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateHelloWorldMinimal: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group17: TGroupNode;
WorldInfo18: TWorldInfoNode;
Shape19: TShapeNode;
Text20: TTextNode;

procedure InitHelloWorldMinimalPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ All head/meta tags are optional, WorldInfo is also optional }
{ Text node not supported by X3D Interchange profile, use Immersive profile or Text component level 1 }
X3D0.Meta['title'] := 'HelloWorldMinimal.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Hello World minimal example scene.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['created'] := '19 January 2020';
{ METHOD .Meta }
X3D0.Meta['modified'] := '24 January 2020';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://helloworldcollection.de';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://en.wiktionary.org/wiki/Hello_World';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group17 := TGroupNode.Create;;
WorldInfo18 := TWorldInfoNode.Create;;
WorldInfo18.Title := 'HelloWorldMinimal.x3d';
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(WorldInfo18);
Shape19 := TShapeNode.Create;;
Text20 := TTextNode.Create;;
Text20.SetText(['hello, world']);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape19.Geometry := Text20;
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Shape19);
{ METHOD .AddGroup }
X3D0.AddChildren([Group17]);
end;

function CreateHelloWorldMinimal: TX3DRootNode;
begin
InitHelloWorldMinimalPart0;
Result := X3D0;
end;

begin
end.
