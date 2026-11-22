unit SimpleShader;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateSimpleShader: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group22: TGroupNode;
X3DPrototype23: TX3DPrototype;
X3DInterfaceDeclaration24: TX3DInterfaceDeclaration;
SFVec3f25: TSFVec3f;
X3DPrototype26: TX3DPrototype;
Transform27: TTransformNode;
Shape28: TShapeNode;
Appearance29: TAppearanceNode;
Material30: TMaterialNode;
ComposedShader31: TComposedShaderNode;
SFVec3f32: TSFVec3f;
IS33: TIS;
connect34: Tconnect;
ShaderPart35: TShaderPartNode;
ShaderPart36: TShaderPartNode;
ComposedShader37: TComposedShaderNode;
SFVec3f38: TSFVec3f;
ShaderPart39: TShaderPartNode;
ShaderPart40: TShaderPartNode;
Sphere41: TSphereNode;
WorldInfo42: TWorldInfoNode;
MetadataSet43: TMetadataSetNode;
MetadataSet44: TMetadataSetNode;
MetadataSet45: TMetadataSetNode;
MetadataSet46: TMetadataSetNode;
MetadataString47: TMetadataStringNode;
MetadataSet48: TMetadataSetNode;
MetadataDouble49: TMetadataDoubleNode;
MetadataDouble50: TMetadataDoubleNode;
MetadataDouble51: TMetadataDoubleNode;
X3DPrototype52: TX3DPrototypeNode;

procedure InitSimpleShaderPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ meta content='under development' name='warning'/ }
X3D0.Components['Shaders'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'SimpleShader.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Simple shader example';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Stewart';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick';
{ METHOD .Meta }
X3D0.Meta['created'] := '26 May 2009';
{ METHOD .Meta }
X3D0.Meta['translated'] := '15 October 2009';
{ METHOD .Meta }
X3D0.Meta['modified'] := '20 October 2019';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://www.opengl.org/wiki/Fragment_Shader';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'X3D shader example';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'originals/simpleShader.x3dv';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'ShaderTutorialInstantReality.pdf';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Titania V3.0.3, http://titania.create3000.de';
{ METHOD .Meta }
X3D0.Meta['info'] := 'World of Titania';
{ METHOD .Meta }
X3D0.Meta['outputStyle'] := 'nicest';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d';
{ METHOD .Meta }
X3D0.Meta['license'] := '../../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group22 := TGroupNode.Create;
X3DPrototype23 := TX3DPrototype.Create;
X3DInterfaceDeclaration24 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f25 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration24, false, 'myInputRange');
SFVec3f25.Value := '0.95 0.44 0.22';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration24.AddSFVec3f([SFVec3f25]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype23.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration24]);
X3DPrototype26 := TX3DPrototype.Create;
Transform27 := TTransformNode.Create;
Shape28 := TShapeNode.Create;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(0.5,0.5,0.9);
{ METHOD .SetMaterial }
Appearance29.Material := Material30;
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.Language := 'GLSL';
end;

procedure InitSimpleShaderPart1;
begin

SFVec3f32 := TSFVec3f.CreateUndefined(ComposedShader31, false, 'decis');
{ METHOD .AddSFVec3f }
ComposedShader31.AddSFVec3f([SFVec3f32]);
IS33 := TIS.Create;
connect34 := Tconnect.Create;
connect34.NodeField := 'decis';
connect34.ProtoField := 'myInputRange';
{ METHOD .Connect }
IS33.Connect := connect34;
{ METHOD .IS }
ComposedShader31.IS := IS33;
ShaderPart35 := TShaderPartNode.Create;
ShaderPart35.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader31.Parts := ShaderPart35;
ShaderPart36 := TShaderPartNode.Create;
ShaderPart36.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
ComposedShader31.Parts := ShaderPart36;
{ METHOD .AddChildren }
Appearance29.AddChildren([ComposedShader31]);
ComposedShader37 := TComposedShaderNode.Create;
ComposedShader37.Language := 'GLSL';
SFVec3f38 := TSFVec3f.CreateUndefined(ComposedShader37, false, 'decis');
SFVec3f38.Value := '0.95 0.77 0.44';
{ METHOD .AddSFVec3f }
ComposedShader37.AddSFVec3f([SFVec3f38]);
ShaderPart39 := TShaderPartNode.Create;
ShaderPart39.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader37.Parts := ShaderPart39;
ShaderPart40 := TShaderPartNode.Create;
ShaderPart40.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
ComposedShader37.Parts := ShaderPart40;
{ METHOD .AddChildren }
Appearance29.AddChildren([ComposedShader37]);
{ METHOD .Appearance }
Shape28.Appearance := Appearance29;
Sphere41 := TSphereNode.Create;
Sphere41.Radius := 1.75;
{ METHOD .Geometry }
Shape28.Geometry := Sphere41;
{ METHOD .FdChildren.Add }
Transform27.FdChildren.Add(Shape28);
{ METHOD .AddTransform }
X3DPrototype26.AddTransform([Transform27]);
{ METHOD .AddX3DPrototype }
X3DPrototype23.AddX3DPrototype([X3DPrototype26]);
{ METHOD .AddX3DPrototype }
Group22.AddX3DPrototype([X3DPrototype23]);
WorldInfo42 := TWorldInfoNode.Create;
WorldInfo42.Title := 'SimpleShader';
MetadataSet43 := TMetadataSetNode.Create;
MetadataSet43.Reference := 'http://titania.create3000.de';
MetadataSet44 := TMetadataSetNode.Create;
end;

procedure InitSimpleShaderPart2;
begin

MetadataSet44.Reference := 'http://titania.create3000.de';
MetadataSet45 := TMetadataSetNode.Create;
MetadataSet45.Reference := 'http://titania.create3000.de';
{ NULL }
{ METHOD .FdValue.Add }
MetadataSet44.FdValue.Add(MetadataSet45);
{ METHOD .FdValue.Add }
MetadataSet43.FdValue.Add(MetadataSet44);
MetadataSet46 := TMetadataSetNode.Create;
MetadataSet46.Reference := 'http://titania.create3000.de';
MetadataString47 := TMetadataStringNode.Create;
MetadataString47.Reference := 'http://titania.create3000.de';
MetadataString47.SetValue(['EXAMINE']);
{ METHOD .FdValue.Add }
MetadataSet46.FdValue.Add(MetadataString47);
{ METHOD .FdValue.Add }
MetadataSet43.FdValue.Add(MetadataSet46);
MetadataSet48 := TMetadataSetNode.Create;
MetadataSet48.Reference := 'http://titania.create3000.de';
MetadataDouble49 := TMetadataDoubleNode.Create;
MetadataDouble49.Reference := 'http://titania.create3000.de';
MetadataDouble49.SetValue6.24067728185014,0.00250837343276661,2.92117542307615;
{ METHOD .FdValue.Add }
MetadataSet48.FdValue.Add(MetadataDouble49);
MetadataDouble50 := TMetadataDoubleNode.Create;
MetadataDouble50.Reference := 'http://titania.create3000.de';
MetadataDouble50.SetValue-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191;
{ METHOD .FdValue.Add }
MetadataSet48.FdValue.Add(MetadataDouble50);
MetadataDouble51 := TMetadataDoubleNode.Create;
MetadataDouble51.Reference := 'http://titania.create3000.de';
MetadataDouble51.SetValue-0.808320198626341,-0.358072370409949,0.22817191560906;
{ METHOD .FdValue.Add }
MetadataSet48.FdValue.Add(MetadataDouble51);
{ METHOD .FdValue.Add }
MetadataSet43.FdValue.Add(MetadataSet48);
{ METHOD .Metadata }
WorldInfo42.Metadata := MetadataSet43;
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(WorldInfo42);
X3DPrototype52 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group22.AddX3DPrototype([X3DPrototype52]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group22]);
end;

function CreateSimpleShader: TX3DRootNode;
begin
InitSimpleShaderPart0;
InitSimpleShaderPart1;
InitSimpleShaderPart2;
Result := X3D0;
end;

begin
end.
