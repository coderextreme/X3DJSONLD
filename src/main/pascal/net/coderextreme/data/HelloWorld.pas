unit HelloWorld;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateHelloWorld: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group25: TGroupNode;
  WorldInfo26: TWorldInfoNode;
  Group27: TGroupNode;
  Viewpoint28: TViewpointNode;
  Transform29: TTransformNode;
  Shape30: TShapeNode;
  Sphere31: TSphereNode;
  Appearance32: TAppearanceNode;
  Material33: TMaterialNode;
  ImageTexture34: TImageTextureNode;
  Transform35: TTransformNode;
  Shape36: TShapeNode;
  Text37: TTextNode;
  FontStyle38: TFontStyleNode;
  Appearance39: TAppearanceNode;

procedure InitHelloWorldPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON }
X3D0.Meta['title'] := 'HelloWorld.x3d';
X3D0.Meta['description'] := 'Simple X3D model example: Hello World!';
X3D0.Meta['created'] := '30 October 2000';
X3D0.Meta['modified'] := '20 October 2019';
X3D0.Meta['creator'] := 'Don Brutzman';
X3D0.Meta['Image'] := 'HelloWorld.tall.png';
X3D0.Meta['reference'] := 'https://en.wikipedia.org/wiki/Hello_world';
X3D0.Meta['reference'] := 'https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program';
X3D0.Meta['reference'] := 'https://en.wikipedia.org/wiki/"Hello,_World!"_program';
X3D0.Meta['reference'] := 'https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world';
X3D0.Meta['reference'] := 'https://www.HelloWorldExample.net';
X3D0.Meta['reference'] := 'https://www.web3d.org';
X3D0.Meta['reference'] := 'https://www.web3d.org/realtime-3d/news/internationalization-x3d';
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/content/examples/HelloWorld.x3d';
X3D0.Meta['reference'] := 'https://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d';
X3D0.Meta['identifier'] := 'https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d';
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['reference'] := 'HelloWorld.wrl';
X3D0.Meta['reference'] := 'HelloWorld.x3dv';
X3D0.Meta['reference'] := 'HelloWorld.x3db';
X3D0.Meta['reference'] := 'HelloWorld.xhtml';
X3D0.Meta['reference'] := 'HelloWorld.json';
Group25 := TGroupNode.Create;
{ Example scene to illustrate X3D nodes and fields (XML elements and attributes) }
WorldInfo26 := TWorldInfoNode.Create;
WorldInfo26.SetInfo(['Example scene to illustrate a simple X3D model']);
WorldInfo26.Title := 'Hello World!';
Group25.FdChildren.Add(WorldInfo26);
Group27 := TGroupNode.Create;
Viewpoint28 := TViewpointNode.Create;
Viewpoint28.X3DName := 'ViewUpClose';
Viewpoint28.CenterOfRotation := Vector3(0, -1, 0);
Viewpoint28.Description := 'Hello world!';
Viewpoint28.Position := Vector3(0, -1, 7);
end;

procedure InitHelloWorldPart1;
begin
Group27.FdChildren.Add(Viewpoint28);
Transform29 := TTransformNode.Create;
Transform29.Rotation := Vector4(0, 1, 0, 3);
Shape30 := TShapeNode.Create;
Sphere31 := TSphereNode.Create;
Shape30.Geometry := Sphere31;
Appearance32 := TAppearanceNode.Create;
Material33 := TMaterialNode.Create;
Material33.X3DName := 'MaterialLightBlue';
Material33.DiffuseColor := Vector3(0.1, 0.5, 1);
Appearance32.Material := Material33;
ImageTexture34 := TImageTextureNode.Create;
ImageTexture34.X3DName := 'ImageCloudlessEarth';
ImageTexture34.SetUrl(['earth-topo.png', 'earth-topo.jpg', 'earth-topo-small.gif', 'https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png', 'https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg', 'https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif']);
Appearance32.Texture := ImageTexture34;
Shape30.Appearance := Appearance32;
Transform29.FdChildren.Add(Shape30);
Group27.FdChildren.Add(Transform29);
Transform35 := TTransformNode.Create;
Transform35.Translation := Vector3(0, -2, 0);
Shape36 := TShapeNode.Create;
Text37 := TTextNode.Create;
Text37.X3DName := 'TextMessage';
Text37.SetText(['Hello', 'world!']);
FontStyle38 := TFontStyleNode.Create;
FontStyle38.Justify := fjMiddle;
FontStyle38.JustifyMinor := fjMiddle;
Text37.FontStyle := FontStyle38;
Shape36.Geometry := Text37;
Appearance39 := TAppearanceNode.Create;
Appearance39.Material := Material33;
Shape36.Appearance := Appearance39;
Transform35.FdChildren.Add(Shape36);
Group27.FdChildren.Add(Transform35);
Group25.FdChildren.Add(Group27);
X3D0.AddChildren([Group25]);
end;

function CreateHelloWorld: TX3DRootNode;
begin
  InitHelloWorldPart0;
  InitHelloWorldPart1;
  Result := X3D0;
end;

begin
end.
