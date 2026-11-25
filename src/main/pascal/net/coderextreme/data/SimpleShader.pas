unit SimpleShader;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateSimpleShader: TX3DRootNode;

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors;

function CreateEmptyPrototype(const AName: String): TX3DPrototype;
var
  Stream: TStringStream;
  TempRoot: TX3DRootNode;
  CopyState: TX3DNodeDeepCopyState;
begin
  Stream := TStringStream.Create('#X3D V4.0 utf8' + LineEnding + 'PROTO ' + AName + ' [] {}');
  try
    TempRoot := LoadNode(Stream, '', 'model/x3d+vrml');
    try
      CopyState := TX3DNodeDeepCopyState.Create;
      try
        Result := TempRoot.Prototypes[0].DeepCopy(CopyState) as TX3DPrototype;
      finally
        FreeAndNil(CopyState);
      end;
    finally
      FreeAndNil(TempRoot);
    end;
  finally
    FreeAndNil(Stream);
  end;
end;

var
  X3D0: TX3DRootNode;
  Group22: TGroupNode;
  ProtoDeclare23: TX3DPrototype;
  FieldDecl25: TX3DInterfaceDeclaration;
  FieldVal25: TSFVec3f;
  Transform27: TTransformNode;
  Shape28: TShapeNode;
  Appearance29: TAppearanceNode;
  Material30: TMaterialNode;
  ComposedShader31: TComposedShaderNode;
  FieldVal32: TSFVec3f;
  ShaderPart33: TShaderPartNode;
  ShaderPart34: TShaderPartNode;
  ComposedShader35: TComposedShaderNode;
  FieldVal36: TSFVec3f;
  ShaderPart37: TShaderPartNode;
  ShaderPart38: TShaderPartNode;
  Sphere39: TSphereNode;
  WorldInfo40: TWorldInfoNode;
  MetadataSet41: TMetadataSetNode;
  MetadataSet42: TMetadataSetNode;
  MetadataSet43: TMetadataSetNode;
  MetadataSet44: TMetadataSetNode;
  MetadataString45: TMetadataStringNode;
  MetadataSet46: TMetadataSetNode;
  MetadataDouble47: TMetadataDoubleNode;
  MetadataDouble48: TMetadataDoubleNode;
  MetadataDouble49: TMetadataDoubleNode;
  ProtoInstance50: TX3DPrototypeNode;

procedure InitSimpleShaderPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ meta content='under development' name='warning'/ }
X3D0.Components['Shaders'] := 1;
X3D0.Meta['title'] := 'SimpleShader.x3d';
X3D0.Meta['description'] := 'Simple shader example';
X3D0.Meta['creator'] := 'John Stewart';
X3D0.Meta['translator'] := 'Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick';
X3D0.Meta['created'] := '26 May 2009';
X3D0.Meta['translated'] := '15 October 2009';
X3D0.Meta['modified'] := '20 October 2019';
X3D0.Meta['reference'] := 'http://www.opengl.org/wiki/Fragment_Shader';
X3D0.Meta['reference'] := 'http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader';
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest';
X3D0.Meta['subject'] := 'X3D shader example';
X3D0.Meta['reference'] := 'originals/simpleShader.x3dv';
X3D0.Meta['reference'] := 'ShaderTutorialInstantReality.pdf';
X3D0.Meta['generator'] := 'Titania V3.0.3, http://titania.create3000.de';
X3D0.Meta['info'] := 'World of Titania';
X3D0.Meta['outputStyle'] := 'nicest';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d';
X3D0.Meta['license'] := '../../license.html';
Group22 := TGroupNode.Create;
ProtoDeclare23 := CreateEmptyPrototype('myPrototype');
ProtoDeclare23.X3DName := 'myPrototype';
FieldVal25 := TSFVec3f.Create(nil, False, 'myInputRange', Vector3(0.95, 0.44, 0.22));
FieldDecl25 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl25.FieldOrEvent := FieldVal25;
FieldVal25.ParentInterfaceDeclaration := FieldDecl25;
ProtoDeclare23.InterfaceDeclarations.Add(FieldDecl25);
Transform27 := TTransformNode.Create;
Transform27.X3DName := 'TR';
Shape28 := TShapeNode.Create;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(0.5, 0.5, 0.9);
Appearance29.Material := Material30;
end;

procedure InitSimpleShaderPart1;
begin
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.Language := 'GLSL';
FieldVal32 := TSFVec3f.CreateUndefined(ComposedShader31, False, 'decis');
ComposedShader31.AddCustomFieldOrEvent(FieldVal32);
ComposedShader31.FieldOrEvent('decis', True).IsClauseNamesAdd('myInputRange');
ShaderPart33 := TShaderPartNode.Create;
ShaderPart33.FdType.Value := 'VERTEX';
ComposedShader31.Parts := ShaderPart33;
ShaderPart34 := TShaderPartNode.Create;
ShaderPart34.FdType.Value := 'FRAGMENT';
ComposedShader31.Parts := ShaderPart34;
Appearance29.AddChildren([ComposedShader31]);
ComposedShader35 := TComposedShaderNode.Create;
ComposedShader35.X3DName := 'Cobweb';
ComposedShader35.Language := 'GLSL';
FieldVal36 := TSFVec3f.Create(ComposedShader35, False, 'decis', Vector3(0.95, 0.77, 0.44));
ComposedShader35.AddCustomFieldOrEvent(FieldVal36);
ShaderPart37 := TShaderPartNode.Create;
ShaderPart37.FdType.Value := 'VERTEX';
ComposedShader35.Parts := ShaderPart37;
ShaderPart38 := TShaderPartNode.Create;
ShaderPart38.X3DName := '_1';
ShaderPart38.FdType.Value := 'FRAGMENT';
ComposedShader35.Parts := ShaderPart38;
Appearance29.AddChildren([ComposedShader35]);
Shape28.Appearance := Appearance29;
Sphere39 := TSphereNode.Create;
Sphere39.Radius := 1.75;
Shape28.Geometry := Sphere39;
Transform27.FdChildren.Add(Shape28);
ProtoDeclare23.Node.AddChildren([Transform27]);
X3D0.AddPrototype(ProtoDeclare23);
WorldInfo40 := TWorldInfoNode.Create;
WorldInfo40.Title := 'SimpleShader';
MetadataSet41 := TMetadataSetNode.Create;
MetadataSet41.X3DName := 'Titania';
MetadataSet41.X3DName := 'Titania';
MetadataSet41.Reference := 'http://titania.create3000.de';
MetadataSet42 := TMetadataSetNode.Create;
MetadataSet42.X3DName := 'Selection';
end;

procedure InitSimpleShaderPart2;
begin
MetadataSet42.X3DName := 'Selection';
MetadataSet42.Reference := 'http://titania.create3000.de';
MetadataSet43 := TMetadataSetNode.Create;
MetadataSet43.X3DName := 'nodes';
MetadataSet43.X3DName := 'nodes';
MetadataSet43.Reference := 'http://titania.create3000.de';
{ NULL }
MetadataSet42.FdValue.Add(MetadataSet43);
MetadataSet41.FdValue.Add(MetadataSet42);
MetadataSet44 := TMetadataSetNode.Create;
MetadataSet44.X3DName := 'NavigationInfo';
MetadataSet44.X3DName := 'NavigationInfo';
MetadataSet44.Reference := 'http://titania.create3000.de';
MetadataString45 := TMetadataStringNode.Create;
MetadataString45.X3DName := 'type';
MetadataString45.X3DName := 'type';
MetadataString45.Reference := 'http://titania.create3000.de';
MetadataString45.SetValue(['EXAMINE']);
MetadataSet44.FdValue.Add(MetadataString45);
MetadataSet41.FdValue.Add(MetadataSet44);
MetadataSet46 := TMetadataSetNode.Create;
MetadataSet46.X3DName := 'Viewpoint';
MetadataSet46.X3DName := 'Viewpoint';
MetadataSet46.Reference := 'http://titania.create3000.de';
MetadataDouble47 := TMetadataDoubleNode.Create;
MetadataDouble47.X3DName := 'position';
MetadataDouble47.X3DName := 'position';
MetadataDouble47.Reference := 'http://titania.create3000.de';
MetadataDouble47.SetValue([6.24067728185014, 0.00250837343276661, 2.92117542307615]);
MetadataSet46.FdValue.Add(MetadataDouble47);
MetadataDouble48 := TMetadataDoubleNode.Create;
MetadataDouble48.X3DName := 'orientation';
MetadataDouble48.X3DName := 'orientation';
MetadataDouble48.Reference := 'http://titania.create3000.de';
MetadataDouble48.SetValue([-0.110173424710488, 0.990158061907379, -0.0863065984000336, 1.21146676119191]);
MetadataSet46.FdValue.Add(MetadataDouble48);
MetadataDouble49 := TMetadataDoubleNode.Create;
MetadataDouble49.X3DName := 'centerOfRotation';
MetadataDouble49.X3DName := 'centerOfRotation';
MetadataDouble49.Reference := 'http://titania.create3000.de';
end;

procedure InitSimpleShaderPart3;
begin
MetadataDouble49.SetValue([-0.808320198626341, -0.358072370409949, 0.22817191560906]);
MetadataSet46.FdValue.Add(MetadataDouble49);
MetadataSet41.FdValue.Add(MetadataSet46);
WorldInfo40.Metadata := MetadataSet41;
Group22.FdChildren.Add(WorldInfo40);
ProtoInstance50 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare23);
Group22.FdChildren.Add(ProtoInstance50.Instantiate);
X3D0.AddChildren([Group22]);
end;

function CreateSimpleShader: TX3DRootNode;
begin
  InitSimpleShaderPart0;
  InitSimpleShaderPart1;
  InitSimpleShaderPart2;
  InitSimpleShaderPart3;
  Result := X3D0;
end;

begin
end.
