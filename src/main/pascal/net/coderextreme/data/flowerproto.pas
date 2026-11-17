unit flowerproto;

interface

uses X3DNodes;

function Createflowerproto: TX3DRootNode;

implementation

uses CastleVectors;

function Createflowerproto: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group16: TGroupNode;
X3DPrototype17: TX3DPrototype;
X3DInterfaceDeclaration18: TX3DInterfaceDeclaration;
X3DField19: TX3DField;
X3DField20: TX3DField;
X3DPrototype21: TX3DPrototype;
Transform22: TTransformNode;
Shape23: TShapeNode;
Appearance24: TAppearanceNode;
Material25: TMaterialNode;
ComposedCubeMapTexture26: TComposedCubeMapTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ImageTexture32: TImageTextureNode;
ComposedShader33: TComposedShaderNode;
X3DField34: TX3DField;
ComposedCubeMapTexture35: TComposedCubeMapTextureNode;
X3DField36: TX3DField;
X3DField37: TX3DField;
X3DField38: TX3DField;
X3DField39: TX3DField;
X3DField40: TX3DField;
X3DField41: TX3DField;
X3DField42: TX3DField;
X3DField43: TX3DField;
X3DField44: TX3DField;
X3DField45: TX3DField;
ShaderPart46: TShaderPartNode;
IS47: TIS;
connect48: Tconnect;
ShaderPart49: TShaderPartNode;
IS50: TIS;
connect51: Tconnect;
Sphere52: TSphereNode;
Script53: TScriptNode;
X3DField54: TX3DField;
X3DField55: TX3DField;
X3DField56: TX3DField;
X3DField57: TX3DField;
X3DField58: TX3DField;
X3DField59: TX3DField;
X3DField60: TX3DField;
X3DField61: TX3DField;
X3DField62: TX3DField;
TimeSensor63: TTimeSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Shape'] := 4;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'flowerproto.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d';
Group16 := TGroupNode.Create;
X3DPrototype17 := TX3DPrototype.Create;
X3DPrototype17.NameField := 'FlowerProto';
X3DInterfaceDeclaration18 := TX3DInterfaceDeclaration.Create(nil);
X3DField19 := TX3DField.Create;
X3DField19.NameField := 'vertex';
X3DField19.AccessType := 'inputOnly';
X3DField19.Type := 'MFString';
X3DField19.Value := '\'../shaders/gl_flowers_chromatic.vs\' \'https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs\'';
{ .SetX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField19;
X3DField20 := TX3DField.Create;
X3DField20.NameField := 'fragment';
X3DField20.AccessType := 'inputOnly';
X3DField20.Type := 'MFString';
X3DField20.Value := '\'../shaders/pc_flowers.fs\' \'https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs\'';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField20;
{ .SetX3DInterfaceDeclaration }
X3DPrototype17.X3DInterfaceDeclaration := X3DInterfaceDeclaration18;
X3DPrototype21 := TX3DPrototype.Create;
Transform22 := TTransformNode.Create;
Shape23 := TShapeNode.Create;
Appearance24 := TAppearanceNode.Create;
Material25 := TMaterialNode.Create;
Material25.DiffuseColor := Vector3(0.7,0.7,0.7);
Material25.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance24.Material := Material25;
ComposedCubeMapTexture26 := TComposedCubeMapTextureNode.Create;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture26.BackTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture26.BottomTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture26.FrontTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture26.LeftTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture26.RightTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture26.TopTexture := ImageTexture32;
{ .SetTexture }
Appearance24.Texture := ComposedCubeMapTexture26;
ComposedShader33 := TComposedShaderNode.Create;
ComposedShader33.Language := 'GLSL';
{ <field name='fw_textureCoordGenType' accessType='inputOnly' type='SFInt32' value='0'></field> }
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'cube';
X3DField34.Type := 'SFNode';
X3DField34.AccessType := 'inputOnly';
ComposedCubeMapTexture35 := ComposedCubeMapTexture26;
{ .SetComposedCubeMapTexture }
X3DField34.ComposedCubeMapTexture := ComposedCubeMapTexture35;
{ .AddX3DField }
ComposedShader33.X3DField := X3DField34;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'chromaticDispertion';
X3DField36.AccessType := 'initializeOnly';
X3DField36.Type := 'SFVec3f';
X3DField36.Value := '0.98 1 1.033';
{ .AddX3DField }
ComposedShader33.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'bias';
X3DField37.Type := 'SFFloat';
X3DField37.AccessType := 'inputOnly';
X3DField37.Value := '0.5';
{ .AddX3DField }
ComposedShader33.X3DField := X3DField37;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'scale';
X3DField38.Type := 'SFFloat';
X3DField38.AccessType := 'inputOnly';
X3DField38.Value := '0.5';
{ .AddX3DField }
ComposedShader33.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'power';
X3DField39.Type := 'SFFloat';
X3DField39.AccessType := 'inputOnly';
X3DField39.Value := '2';
{ .AddX3DField }
ComposedShader33.X3DField := X3DField39;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'a';
X3DField40.Type := 'SFFloat';
X3DField40.AccessType := 'inputOnly';
X3DField40.Value := '10';
{ .AddX3DField }
ComposedShader33.X3DField := X3DField40;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'b';
X3DField41.Type := 'SFFloat';
X3DField41.AccessType := 'inputOnly';
X3DField41.Value := '1';
{ .AddX3DField }
ComposedShader33.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'c';
X3DField42.Type := 'SFFloat';
X3DField42.AccessType := 'inputOnly';
X3DField42.Value := '20';
{ .AddX3DField }
ComposedShader33.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'd';
X3DField43.Type := 'SFFloat';
X3DField43.AccessType := 'inputOnly';
X3DField43.Value := '20';
{ .AddX3DField }
ComposedShader33.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'tdelta';
X3DField44.Type := 'SFFloat';
X3DField44.AccessType := 'inputOnly';
X3DField44.Value := '0';
{ .AddX3DField }
ComposedShader33.X3DField := X3DField44;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'pdelta';
X3DField45.Type := 'SFFloat';
X3DField45.AccessType := 'inputOnly';
X3DField45.Value := '0';
{ .AddX3DField }
ComposedShader33.X3DField := X3DField45;
ShaderPart46 := TShaderPartNode.Create;
ShaderPart46.Type := 'VERTEX';
IS47 := TIS.Create;
connect48 := Tconnect.Create;
connect48.NodeField := 'url';
connect48.ProtoField := 'vertex';
{ .AddConnect }
IS47.Connect := connect48;
{ .SetIS }
ShaderPart46.IS := IS47;
{ .AddParts }
ComposedShader33.Parts := ShaderPart46;
ShaderPart49 := TShaderPartNode.Create;
ShaderPart49.Type := 'FRAGMENT';
IS50 := TIS.Create;
connect51 := Tconnect.Create;
connect51.NodeField := 'url';
connect51.ProtoField := 'fragment';
{ .AddConnect }
IS50.Connect := connect51;
{ .SetIS }
ShaderPart49.IS := IS50;
{ .AddParts }
ComposedShader33.Parts := ShaderPart49;
{ .AddShaders }
Appearance24.Shaders := ComposedShader33;
{ .SetAppearance }
Shape23.Appearance := Appearance24;
Sphere52 := TSphereNode.Create;
{ .SetGeometry }
Shape23.Geometry := Sphere52;
{ .AddChild }
Transform22.AddChildren([Shape23]);
Script53 := TScriptNode.Create;
Script53.DirectOutput := True;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'translation';
X3DField54.AccessType := 'inputOutput';
X3DField54.Type := 'SFVec3f';
X3DField54.Value := '0 0 0';
{ .SetX3DField }
Script53.X3DField := X3DField54;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'velocity';
X3DField55.AccessType := 'outputOnly';
X3DField55.Type := 'SFVec3f';
X3DField55.Value := '0 0 0';
{ .AddX3DField }
Script53.X3DField := X3DField55;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'set_fraction';
X3DField56.AccessType := 'inputOnly';
X3DField56.Type := 'SFFloat';
{ .AddX3DField }
Script53.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'a';
X3DField57.Type := 'SFFloat';
X3DField57.AccessType := 'outputOnly';
X3DField57.Value := '0.5';
{ .AddX3DField }
Script53.X3DField := X3DField57;
X3DField58 := TX3DField.Create;
X3DField58.NameField := 'b';
X3DField58.Type := 'SFFloat';
X3DField58.AccessType := 'outputOnly';
X3DField58.Value := '0.5';
{ .AddX3DField }
Script53.X3DField := X3DField58;
X3DField59 := TX3DField.Create;
X3DField59.NameField := 'c';
X3DField59.Type := 'SFFloat';
X3DField59.AccessType := 'outputOnly';
X3DField59.Value := '3';
{ .AddX3DField }
Script53.X3DField := X3DField59;
X3DField60 := TX3DField.Create;
X3DField60.NameField := 'd';
X3DField60.Type := 'SFFloat';
X3DField60.AccessType := 'outputOnly';
X3DField60.Value := '3';
{ .AddX3DField }
Script53.X3DField := X3DField60;
X3DField61 := TX3DField.Create;
X3DField61.NameField := 'tdelta';
X3DField61.Type := 'SFFloat';
X3DField61.AccessType := 'outputOnly';
X3DField61.Value := '0.5';
{ .AddX3DField }
Script53.X3DField := X3DField61;
X3DField62 := TX3DField.Create;
X3DField62.NameField := 'pdelta';
X3DField62.Type := 'SFFloat';
X3DField62.AccessType := 'outputOnly';
X3DField62.Value := '0.5';
{ .AddX3DField }
Script53.X3DField := X3DField62;

Script53.SetSourceCode('''ecmascript:\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta += 0.5;\n"+
"				pdelta += 0.5;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}''');
{ .AddChildren }
Transform22.AddChildren([Script53]);
TimeSensor63 := TTimeSensorNode.Create;
TimeSensor63.CycleInterval := 5;
TimeSensor63.Loop := True;
{ .AddChildren }
Transform22.AddChildren([TimeSensor63]);
Transform22.AddRoute(TimeSensor63.EventFraction_changed, Script53.EventSet_fraction);
{ .AddX3DRoute }
Transform22.AddRoute(Script53.EventTranslation_changed, Transform22.FdTranslation);
{ .AddX3DRoute }
Transform22.AddRoute(Script53.FdA, ComposedShader33.FdA);
{ .AddX3DRoute }
Transform22.AddRoute(Script53.FdB, ComposedShader33.FdB);
{ .AddX3DRoute }
Transform22.AddRoute(Script53.FdC, ComposedShader33.FdC);
{ .AddX3DRoute }
Transform22.AddRoute(Script53.FdD, ComposedShader33.FdD);
{ .AddX3DRoute }
Transform22.AddRoute(Script53.FdTdelta, ComposedShader33.FdTdelta);
{ .AddX3DRoute }
Transform22.AddRoute(Script53.FdPdelta, ComposedShader33.FdPdelta);
{ .AddX3DRoute }
{ .SetTransform }
X3DPrototype21.Transform := Transform22;
{ .AddX3DPrototype }
X3DPrototype17.X3DPrototype := X3DPrototype21;
{ .SetX3DPrototype }
Group16.X3DPrototype := X3DPrototype17;
{ .AddGroup }
X3D0.AddChildren([Group16]);
Result := X3D0;
end;

begin
end.
