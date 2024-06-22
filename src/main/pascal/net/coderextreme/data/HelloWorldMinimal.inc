function HelloWorldMinimal: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group17: TGroupNode;
WorldInfo18: TWorldInfoNode;
Shape19: TShapeNode;
Text20: TTextNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
{ All head/meta tags are optional, WorldInfo is also optional }
{ Text node not supported by X3D Interchange profile, use Immersive profile or Text component level 1 }
X3D0.Meta['title'] := 'HelloWorldMinimal.x3d';
X3D0.Meta['description'] := 'Hello World minimal example scene.';
X3D0.Meta['creator'] := 'Don Brutzman';
X3D0.Meta['created'] := '19 January 2020';
X3D0.Meta['modified'] := '24 January 2020';
X3D0.Meta['reference'] := 'https://helloworldcollection.de';
X3D0.Meta['reference'] := 'https://en.wiktionary.org/wiki/Hello_World';
X3D0.Meta['reference'] := 'https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program';
X3D0.Meta['reference'] := 'https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world';
X3D0.Meta['reference'] := 'https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)';
X3D0.Meta['reference'] := 'https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes';
X3D0.Meta['reference'] := 'https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html';
X3D0.Meta['identifier'] := 'https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group17 := TGroupNode.Create;
WorldInfo18 := TWorldInfoNode.Create;
WorldInfo18.Title := 'HelloWorldMinimal.x3d';
{ .AddChildren }
Group17.AddChildren([WorldInfo18]);
Shape19 := TShapeNode.Create;
Text20 := TTextNode.Create;
Text20.SetText(['hello, world']);
{ .SetGeometry }
Shape19.Geometry := Text20;
{ .AddChildren }
Group17.AddChildren([Shape19]);
{ .AddGroup }
X3D0.AddChildren([Group17]);
Result := X3D0;
end;
