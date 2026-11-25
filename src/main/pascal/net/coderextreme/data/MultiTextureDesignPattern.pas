unit MultiTextureDesignPattern;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateMultiTextureDesignPattern: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group15: TGroupNode;
  WorldInfo16: TWorldInfoNode;
  Background17: TBackgroundNode;
  Viewpoint18: TViewpointNode;
  Shape19: TShapeNode;
  Text20: TTextNode;
  FontStyle21: TFontStyleNode;
  Appearance22: TAppearanceNode;
  Material23: TMaterialNode;
  Shape24: TShapeNode;
  IndexedFaceSet25: TIndexedFaceSetNode;
  MultiTextureCoordinate26: TMultiTextureCoordinateNode;
  TextureCoordinate27: TTextureCoordinateNode;
  TextureCoordinate28: TTextureCoordinateNode;
  TextureCoordinate29: TTextureCoordinateNode;
  Appearance30: TAppearanceNode;
  Material31: TMaterialNode;
  MultiTexture32: TMultiTextureNode;
  ImageTexture33: TImageTextureNode;
  MovieTexture34: TMovieTextureNode;
  PixelTexture35: TPixelTextureNode;
  MultiTextureTransform36: TMultiTextureTransformNode;
  TextureTransform37: TTextureTransformNode;
  TextureTransform38: TTextureTransformNode;
  TextureTransform39: TTextureTransformNode;

procedure InitMultiTextureDesignPatternPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['title'] := 'MultiTextureDesignPattern.x3d';
X3D0.Meta['description'] := 'Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences';
X3D0.Meta['creator'] := 'Don Brutzman';
X3D0.Meta['created'] := '5 March 2011';
X3D0.Meta['modified'] := '29 October 2023';
X3D0.Meta['TODO'] := 'X3D schematron rules for quality assurance';
X3D0.Meta['Image'] := 'MultiTextureDesignPatternSceneGraph.png';
X3D0.Meta['subject'] := 'MultiTexture, MultiTextureCoordinate, MultiTextureTransform';
X3D0.Meta['reference'] := 'https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d';
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/content/examples/X3dResources.html';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group15 := TGroupNode.Create;
{ ================================ }
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'MultiTextureDesignPattern.x3d';
Group15.FdChildren.Add(WorldInfo16);
Background17 := TBackgroundNode.Create;
Background17.SetSkyColor([Vector3(0.72549, 1, 0.721569)]);
Group15.FdChildren.Add(Background17);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'MultiTexture design pattern';
Group15.FdChildren.Add(Viewpoint18);
Shape19 := TShapeNode.Create;
Text20 := TTextNode.Create;
Text20.SetText(['Source shows design pattern for', 'MultiTexture, MultiTextureCoordinate,', ' and MultiTextureTransform nodes']);
FontStyle21 := TFontStyleNode.Create;
FontStyle21.Justify := fjMiddle;
FontStyle21.JustifyMinor := fjMiddle;
FontStyle21.Size := 0.6;
Text20.FontStyle := FontStyle21;
Shape19.Geometry := Text20;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.2, 0.4, 0.8);
end;

procedure InitMultiTextureDesignPatternPart1;
begin
Appearance22.Material := Material23;
Shape19.Appearance := Appearance22;
Group15.FdChildren.Add(Shape19);
{ ================================ }
Shape24 := TShapeNode.Create;
{ add a single geometry node here }
IndexedFaceSet25 := TIndexedFaceSetNode.Create;
MultiTextureCoordinate26 := TMultiTextureCoordinateNode.Create;
{ add multiple TextureCoordinate nodes here, match corresponding MultiTexture child texture nodes }
TextureCoordinate27 := TTextureCoordinateNode.Create;
TextureCoordinate27.SetPoint([Vector2(0, 0), Vector2(1, 0), Vector2(1, 1), Vector2(0, 1)]);
MultiTextureCoordinate26.TexCoord := TextureCoordinate27;
TextureCoordinate28 := TTextureCoordinateNode.Create;
TextureCoordinate28.SetPoint([Vector2(0, 0), Vector2(1, 0), Vector2(1, 1), Vector2(0, 1)]);
MultiTextureCoordinate26.TexCoord := TextureCoordinate28;
TextureCoordinate29 := TTextureCoordinateNode.Create;
TextureCoordinate29.SetPoint([Vector2(0, 0), Vector2(1, 0), Vector2(1, 1), Vector2(0, 1)]);
MultiTextureCoordinate26.TexCoord := TextureCoordinate29;
IndexedFaceSet25.TexCoord := MultiTextureCoordinate26;
Shape24.Geometry := IndexedFaceSet25;
Appearance30 := TAppearanceNode.Create;
Material31 := TMaterialNode.Create;
Appearance30.Material := Material31;
MultiTexture32 := TMultiTextureNode.Create;
MultiTexture32.Alpha := 0.8;
MultiTexture32.Color := Vector3(0.9, 1, 0.2);
MultiTexture32.SetFunction(['COMPLEMENT', 'ALPHAREPLICATE']);
MultiTexture32.SetMode(['MODULATE', 'REPLACE', 'BLENDDIFFUSEALPHA']);
MultiTexture32.SetSource(['DIFFUSE', 'SPECULAR', 'FACTOR']);
{ add multiple texture nodes here }
ImageTexture33 := TImageTextureNode.Create;
MultiTexture32.Texture := ImageTexture33;
MovieTexture34 := TMovieTextureNode.Create;
MultiTexture32.Texture := MovieTexture34;
PixelTexture35 := TPixelTextureNode.Create;
MultiTexture32.Texture := PixelTexture35;
Appearance30.Texture := MultiTexture32;
MultiTextureTransform36 := TMultiTextureTransformNode.Create;
{ add multiple TextureTransform nodes here, match corresponding MultiTexture child texture nodes }
TextureTransform37 := TTextureTransformNode.Create;
end;

procedure InitMultiTextureDesignPatternPart2;
begin
MultiTextureTransform36.TextureTransform := TextureTransform37;
TextureTransform38 := TTextureTransformNode.Create;
MultiTextureTransform36.TextureTransform := TextureTransform38;
TextureTransform39 := TTextureTransformNode.Create;
MultiTextureTransform36.TextureTransform := TextureTransform39;
Appearance30.TextureTransform := MultiTextureTransform36;
Shape24.Appearance := Appearance30;
Group15.FdChildren.Add(Shape24);
X3D0.AddChildren([Group15]);
end;

function CreateMultiTextureDesignPattern: TX3DRootNode;
begin
  InitMultiTextureDesignPatternPart0;
  InitMultiTextureDesignPatternPart1;
  InitMultiTextureDesignPatternPart2;
  Result := X3D0;
end;

begin
end.
