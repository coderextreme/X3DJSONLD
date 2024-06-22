function SimpleShader: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group22: TGroupNode;
ProtoDeclare23: TProtoDeclareNode;
ProtoInterface24: TProtoInterfaceNode;
field25: TfieldNode;
ProtoBody26: TProtoBodyNode;
Transform27: TTransformNode;
Shape28: TShapeNode;
Appearance29: TAppearanceNode;
Material30: TMaterialNode;
ComposedShader31: TComposedShaderNode;
field32: TfieldNode;
IS33: TISNode;
connect34: TconnectNode;
ShaderPart35: TShaderPartNode;
ShaderPart36: TShaderPartNode;
ComposedShader37: TComposedShaderNode;
field38: TfieldNode;
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
ProtoInstance52: TProtoInstanceNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 2;
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
{ meta content='under development' name='warning'/ }
Group22 := TGroupNode.Create;
ProtoDeclare23 := TProtoDeclareNode.Create;
ProtoDeclare23.NameField := 'myPrototype';
ProtoInterface24 := TProtoInterfaceNode.Create;
field25 := TfieldNode.Create;
field25.NameField := 'myInputRange';
field25.AccessType := 'initializeOnly';
field25.Type := 'SFVec3f';
field25.Value := '0.95 0.44 0.22';
{ .AddField }
ProtoInterface24.Field := field25;
{ .SetProtoInterface }
ProtoDeclare23.ProtoInterface := ProtoInterface24;
ProtoBody26 := TProtoBodyNode.Create;
Transform27 := TTransformNode.Create;
Shape28 := TShapeNode.Create;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(0.5,0.5,0.9);
{ .SetMaterial }
Appearance29.Material := Material30;
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.Language := 'GLSL';
field32 := TfieldNode.Create;
field32.NameField := 'decis';
field32.AccessType := 'initializeOnly';
field32.Type := 'SFVec3f';
{ .AddField }
ComposedShader31.Field := field32;
IS33 := TISNode.Create;
connect34 := TconnectNode.Create;
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
field38 := TfieldNode.Create;
field38.NameField := 'decis';
field38.AccessType := 'initializeOnly';
field38.Type := 'SFVec3f';
field38.Value := '0.95 0.77 0.44';
{ .AddField }
ComposedShader37.Field := field38;
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
{ .AddChildren }
ProtoBody26.AddChildren([Transform27]);
{ .SetProtoBody }
ProtoDeclare23.ProtoBody := ProtoBody26;
{ .AddChildren }
Group22.AddChildren([ProtoDeclare23]);
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
{ .SetValue }
MetadataSet44.Value := MetadataSet45;
{ .SetValue }
MetadataSet43.Value := MetadataSet44;
MetadataSet46 := TMetadataSetNode.Create;
MetadataSet46.NameField := 'NavigationInfo';
MetadataSet46.Reference := 'http://titania.create3000.de';
MetadataString47 := TMetadataStringNode.Create;
MetadataString47.NameField := 'type';
MetadataString47.Reference := 'http://titania.create3000.de';
MetadataString47.SetValue(['EXAMINE']);
{ .SetValue }
MetadataSet46.Value := MetadataString47;
{ .SetValue }
MetadataSet43.Value := MetadataSet46;
MetadataSet48 := TMetadataSetNode.Create;
MetadataSet48.NameField := 'Viewpoint';
MetadataSet48.Reference := 'http://titania.create3000.de';
MetadataDouble49 := TMetadataDoubleNode.Create;
MetadataDouble49.NameField := 'position';
MetadataDouble49.Reference := 'http://titania.create3000.de';
MetadataDouble49.SetValue(6.24067728185014,0.00250837343276661,2.92117542307615);
{ .SetValue }
MetadataSet48.Value := MetadataDouble49;
MetadataDouble50 := TMetadataDoubleNode.Create;
MetadataDouble50.NameField := 'orientation';
MetadataDouble50.Reference := 'http://titania.create3000.de';
MetadataDouble50.SetValue(-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191);
{ .SetValue }
MetadataSet48.Value := MetadataDouble50;
MetadataDouble51 := TMetadataDoubleNode.Create;
MetadataDouble51.NameField := 'centerOfRotation';
MetadataDouble51.Reference := 'http://titania.create3000.de';
MetadataDouble51.SetValue(-0.808320198626341,-0.358072370409949,0.22817191560906);
{ .SetValue }
MetadataSet48.Value := MetadataDouble51;
{ .SetValue }
MetadataSet43.Value := MetadataSet48;
{ .SetMetadata }
WorldInfo42.Metadata := MetadataSet43;
{ .AddChildren }
Group22.AddChildren([WorldInfo42]);
ProtoInstance52 := TProtoInstanceNode.Create;
ProtoInstance52.NameField := 'myPrototype';
{ .AddChildren }
Group22.AddChildren([ProtoInstance52]);
{ .AddGroup }
X3D0.AddChildren([Group22]);
Result := X3D0;
end;
