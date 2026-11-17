unit SimpleShader;

interface

uses X3DNodes;

function CreateSimpleShader: TX3DRootNode;

implementation

uses CastleVectors;

function CreateSimpleShader: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group22: TGroupNode;
X3DPrototype23: TX3DPrototype;
X3DInterfaceDeclaration24: TX3DInterfaceDeclaration;
X3DField25: TX3DField;
X3DPrototype26: TX3DPrototype;
Transform27: TTransformNode;
Shape28: TShapeNode;
Appearance29: TAppearanceNode;
Material30: TMaterialNode;
ComposedShader31: TComposedShaderNode;
X3DField32: TX3DField;
IS33: TIS;
connect34: Tconnect;
ShaderPart35: TShaderPartNode;
ShaderPart36: TShaderPartNode;
ComposedShader37: TComposedShaderNode;
X3DField38: TX3DField;
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
X3DPrototype23 := TX3DPrototype.Create;
X3DPrototype23.NameField := 'myPrototype';
X3DInterfaceDeclaration24 := TX3DInterfaceDeclaration.Create(nil);
X3DField25 := TX3DField.Create;
X3DField25.NameField := 'myInputRange';
X3DField25.AccessType := 'initializeOnly';
X3DField25.Type := 'SFVec3f';
X3DField25.Value := '0.95 0.44 0.22';
{ .SetX3DField }
X3DInterfaceDeclaration24.X3DField := X3DField25;
{ .SetX3DInterfaceDeclaration }
X3DPrototype23.X3DInterfaceDeclaration := X3DInterfaceDeclaration24;
X3DPrototype26 := TX3DPrototype.Create;
Transform27 := TTransformNode.Create;
Shape28 := TShapeNode.Create;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(0.5,0.5,0.9);
{ .SetMaterial }
Appearance29.Material := Material30;
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.Language := 'GLSL';
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'decis';
X3DField32.AccessType := 'initializeOnly';
X3DField32.Type := 'SFVec3f';
{ .SetX3DField }
ComposedShader31.X3DField := X3DField32;
IS33 := TIS.Create;
connect34 := Tconnect.Create;
connect34.NodeField := 'decis';
connect34.ProtoField := 'myInputRange';
{ .AddConnect }
IS33.Connect := connect34;
{ .SetIS }
ComposedShader31.IS := IS33;
ShaderPart35 := TShaderPartNode.Create;
ShaderPart35.Type := 'VERTEX';
{ .AddParts }
ComposedShader31.Parts := ShaderPart35;
ShaderPart36 := TShaderPartNode.Create;
ShaderPart36.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader31.Parts := ShaderPart36;
{ .AddShaders }
Appearance29.Shaders := ComposedShader31;
ComposedShader37 := TComposedShaderNode.Create;
ComposedShader37.Language := 'GLSL';
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'decis';
X3DField38.AccessType := 'initializeOnly';
X3DField38.Type := 'SFVec3f';
X3DField38.Value := '0.95 0.77 0.44';
{ .SetX3DField }
ComposedShader37.X3DField := X3DField38;
ShaderPart39 := TShaderPartNode.Create;
ShaderPart39.Type := 'VERTEX';
{ .AddParts }
ComposedShader37.Parts := ShaderPart39;
ShaderPart40 := TShaderPartNode.Create;
ShaderPart40.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader37.Parts := ShaderPart40;
{ .AddShaders }
Appearance29.Shaders := ComposedShader37;
{ .SetAppearance }
Shape28.Appearance := Appearance29;
Sphere41 := TSphereNode.Create;
Sphere41.Radius := 1.75;
{ .SetGeometry }
Shape28.Geometry := Sphere41;
{ .AddChild }
Transform27.AddChildren([Shape28]);
{ .SetTransform }
X3DPrototype26.Transform := Transform27;
{ .AddX3DPrototype }
X3DPrototype23.X3DPrototype := X3DPrototype26;
{ .SetX3DPrototype }
Group22.X3DPrototype := X3DPrototype23;
WorldInfo42 := TWorldInfoNode.Create;
WorldInfo42.Title := 'SimpleShader';
MetadataSet43 := TMetadataSetNode.Create;
MetadataSet43.NameField := 'Titania';
MetadataSet43.Reference := 'http://titania.create3000.de';
MetadataSet44 := TMetadataSetNode.Create;
MetadataSet44.NameField := 'Selection';
MetadataSet44.Reference := 'http://titania.create3000.de';
MetadataSet45 := TMetadataSetNode.Create;
MetadataSet45.NameField := 'nodes';
MetadataSet45.Reference := 'http://titania.create3000.de';
{ NULL }
{ .FdValue.Add }
MetadataSet44.FdValue.Add(MetadataSet45);
{ .FdValue.Add }
MetadataSet43.FdValue.Add(MetadataSet44);
MetadataSet46 := TMetadataSetNode.Create;
MetadataSet46.NameField := 'NavigationInfo';
MetadataSet46.Reference := 'http://titania.create3000.de';
MetadataString47 := TMetadataStringNode.Create;
MetadataString47.NameField := 'type';
MetadataString47.Reference := 'http://titania.create3000.de';
MetadataString47.SetValue(['EXAMINE']);
{ .FdValue.Add }
MetadataSet46.FdValue.Add(MetadataString47);
{ .FdValue.Add }
MetadataSet43.FdValue.Add(MetadataSet46);
MetadataSet48 := TMetadataSetNode.Create;
MetadataSet48.NameField := 'Viewpoint';
MetadataSet48.Reference := 'http://titania.create3000.de';
MetadataDouble49 := TMetadataDoubleNode.Create;
MetadataDouble49.NameField := 'position';
MetadataDouble49.Reference := 'http://titania.create3000.de';
MetadataDouble49.SetValue6.24067728185014,0.00250837343276661,2.92117542307615;
{ .FdValue.Add }
MetadataSet48.FdValue.Add(MetadataDouble49);
MetadataDouble50 := TMetadataDoubleNode.Create;
MetadataDouble50.NameField := 'orientation';
MetadataDouble50.Reference := 'http://titania.create3000.de';
MetadataDouble50.SetValue-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191;
{ .FdValue.Add }
MetadataSet48.FdValue.Add(MetadataDouble50);
MetadataDouble51 := TMetadataDoubleNode.Create;
MetadataDouble51.NameField := 'centerOfRotation';
MetadataDouble51.Reference := 'http://titania.create3000.de';
MetadataDouble51.SetValue-0.808320198626341,-0.358072370409949,0.22817191560906;
{ .FdValue.Add }
MetadataSet48.FdValue.Add(MetadataDouble51);
{ .FdValue.Add }
MetadataSet43.FdValue.Add(MetadataSet48);
{ .SetMetadata }
WorldInfo42.Metadata := MetadataSet43;
{ .AddChildren }
Group22.AddChildren([WorldInfo42]);
X3DPrototype52 := TX3DPrototypeNode.Create;
X3DPrototype52.NameField := 'myPrototype';
{ .AddX3DPrototype }
Group22.X3DPrototype := X3DPrototype52;
{ .AddGroup }
X3D0.AddChildren([Group22]);
Result := X3D0;
end;

begin
end.
