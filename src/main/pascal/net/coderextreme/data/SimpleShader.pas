unit SimpleShader;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
ShaderPart34: TShaderPartNode;
ShaderPart35: TShaderPartNode;
ComposedShader36: TComposedShaderNode;
SFVec3f37: TSFVec3f;
ShaderPart38: TShaderPartNode;
ShaderPart39: TShaderPartNode;
Sphere40: TSphereNode;
WorldInfo41: TWorldInfoNode;
MetadataSet42: TMetadataSetNode;
MetadataSet43: TMetadataSetNode;
MetadataSet44: TMetadataSetNode;
MetadataSet45: TMetadataSetNode;
MetadataString46: TMetadataStringNode;
MetadataSet47: TMetadataSetNode;
MetadataDouble48: TMetadataDoubleNode;
MetadataDouble49: TMetadataDoubleNode;
MetadataDouble50: TMetadataDoubleNode;
X3DPrototype51: TX3DPrototypeNode;

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
Group22 := TGroupNode.Create;;
X3DPrototype23 := TX3DPrototype.Create;;
X3DInterfaceDeclaration24 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f25 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration24, false, 'myInputRange');
SFVec3f25.Value := '0.95 0.44 0.22';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration24.AddSFVec3f([SFVec3f25]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype23.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration24]);
X3DPrototype26 := TX3DPrototype.Create;;
Transform27 := TTransformNode.Create;;
Shape28 := TShapeNode.Create;;
end;

procedure InitSimpleShaderPart1;
begin

Appearance29 := TAppearanceNode.Create;;
Material30 := TMaterialNode.Create;;
Material30.DiffuseColor := Vector3(0.5,0.5,0.9);
{ METHOD .SetMaterial }
Appearance29.Material := Material30;
ComposedShader31 := TComposedShaderNode.Create;;
ComposedShader31.Language := 'GLSL';
SFVec3f32 := TSFVec3f.CreateUndefined(ComposedShader31, false, 'decis');
{ METHOD .AddSFVec3f }
ComposedShader31.AddSFVec3f([SFVec3f32]);
ShaderPart34 := TShaderPartNode.Create;;
ShaderPart34.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader31.Parts := ShaderPart34;
ShaderPart35 := TShaderPartNode.Create;;
ShaderPart35.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader31.Parts := ShaderPart35;
{ METHOD .AddChildren }
Appearance29.AddChildren([ComposedShader31]);
ComposedShader36 := TComposedShaderNode.Create;;
ComposedShader36.Language := 'GLSL';
SFVec3f37 := TSFVec3f.CreateUndefined(ComposedShader36, false, 'decis');
SFVec3f37.Value := '0.95 0.77 0.44';
{ METHOD .AddSFVec3f }
ComposedShader36.AddSFVec3f([SFVec3f37]);
ShaderPart38 := TShaderPartNode.Create;;
ShaderPart38.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader36.Parts := ShaderPart38;
ShaderPart39 := TShaderPartNode.Create;;
ShaderPart39.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader36.Parts := ShaderPart39;
{ METHOD .AddChildren }
Appearance29.AddChildren([ComposedShader36]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape28.Appearance := Appearance29;
Sphere40 := TSphereNode.Create;;
Sphere40.Radius := 1.75;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape28.Geometry := Sphere40;
end;

procedure InitSimpleShaderPart2;
begin

{ METHOD .FdChildren.Add }
Transform27.FdChildren.Add(Shape28);
{ METHOD .AddTransform }
X3DPrototype26.AddTransform([Transform27]);
{ METHOD .AddX3DPrototype }
X3DPrototype23.AddX3DPrototype([X3DPrototype26]);
{ METHOD .AddX3DPrototype }
Group22.AddX3DPrototype([X3DPrototype23]);
WorldInfo41 := TWorldInfoNode.Create;;
WorldInfo41.Title := 'SimpleShader';
MetadataSet42 := TMetadataSetNode.Create;;
MetadataSet42.Reference := 'http://titania.create3000.de';
MetadataSet43 := TMetadataSetNode.Create;;
MetadataSet43.Reference := 'http://titania.create3000.de';
MetadataSet44 := TMetadataSetNode.Create;;
MetadataSet44.Reference := 'http://titania.create3000.de';
{ NULL }
{ METHOD .FdValue.Add }
MetadataSet43.FdValue.Add(MetadataSet44);
{ METHOD .FdValue.Add }
MetadataSet42.FdValue.Add(MetadataSet43);
MetadataSet45 := TMetadataSetNode.Create;;
MetadataSet45.Reference := 'http://titania.create3000.de';
MetadataString46 := TMetadataStringNode.Create;;
MetadataString46.Reference := 'http://titania.create3000.de';
MetadataString46.SetValue(['EXAMINE']);
{ METHOD .FdValue.Add }
MetadataSet45.FdValue.Add(MetadataString46);
{ METHOD .FdValue.Add }
MetadataSet42.FdValue.Add(MetadataSet45);
MetadataSet47 := TMetadataSetNode.Create;;
MetadataSet47.Reference := 'http://titania.create3000.de';
MetadataDouble48 := TMetadataDoubleNode.Create;;
MetadataDouble48.Reference := 'http://titania.create3000.de';
MetadataDouble48.SetValue6.24067728185014,0.00250837343276661,2.92117542307615;
{ METHOD .FdValue.Add }
MetadataSet47.FdValue.Add(MetadataDouble48);
MetadataDouble49 := TMetadataDoubleNode.Create;;
MetadataDouble49.Reference := 'http://titania.create3000.de';
MetadataDouble49.SetValue-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191;
{ METHOD .FdValue.Add }
MetadataSet47.FdValue.Add(MetadataDouble49);
end;

procedure InitSimpleShaderPart3;
begin

MetadataDouble50 := TMetadataDoubleNode.Create;;
MetadataDouble50.Reference := 'http://titania.create3000.de';
MetadataDouble50.SetValue-0.808320198626341,-0.358072370409949,0.22817191560906;
{ METHOD .FdValue.Add }
MetadataSet47.FdValue.Add(MetadataDouble50);
{ METHOD .FdValue.Add }
MetadataSet42.FdValue.Add(MetadataSet47);
{ METHOD .Metadata }
{ METHOD.SET .Metadata }
WorldInfo41.Metadata := MetadataSet42;
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(WorldInfo41);
X3DPrototype51 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group22.AddX3DPrototype([X3DPrototype51]);
{ METHOD .AddGroup }
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
