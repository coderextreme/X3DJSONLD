unit flowerprotofreewrl;

interface

uses X3DNodes;

function Createflowerprotofreewrl: TX3DRootNode;

implementation

uses CastleVectors;

function Createflowerprotofreewrl: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group16: TGroupNode;
NavigationInfo17: TNavigationInfoNode;
Viewpoint18: TViewpointNode;
Background19: TBackgroundNode;
X3DPrototype20: TX3DPrototype;
X3DInterfaceDeclaration21: TX3DInterfaceDeclaration;
X3DField22: TX3DField;
X3DField23: TX3DField;
X3DPrototype24: TX3DPrototype;
Transform25: TTransformNode;
Shape26: TShapeNode;
Appearance27: TAppearanceNode;
Material28: TMaterialNode;
ComposedCubeMapTexture29: TComposedCubeMapTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ImageTexture32: TImageTextureNode;
ImageTexture33: TImageTextureNode;
ImageTexture34: TImageTextureNode;
ImageTexture35: TImageTextureNode;
ComposedShader36: TComposedShaderNode;
X3DField37: TX3DField;
X3DField38: TX3DField;
X3DField39: TX3DField;
X3DField40: TX3DField;
X3DField41: TX3DField;
X3DField42: TX3DField;
X3DField43: TX3DField;
X3DField44: TX3DField;
X3DField45: TX3DField;
X3DField46: TX3DField;
X3DField47: TX3DField;
ShaderPart48: TShaderPartNode;
IS49: TIS;
connect50: Tconnect;
ShaderPart51: TShaderPartNode;
IS52: TIS;
connect53: Tconnect;
Sphere54: TSphereNode;
Script55: TScriptNode;
X3DField56: TX3DField;
X3DField57: TX3DField;
X3DField58: TX3DField;
X3DField59: TX3DField;
X3DField60: TX3DField;
X3DField61: TX3DField;
X3DField62: TX3DField;
X3DField63: TX3DField;
X3DField64: TX3DField;
TimeSensor65: TTimeSensorNode;
X3DPrototype74: TX3DPrototypeNode;
MFString75: TMFString;
MFString76: TMFString;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
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
NavigationInfo17 := TNavigationInfoNode.Create;
{ .AddChildren }
Group16.AddChildren([NavigationInfo17]);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Tour Views';
Viewpoint18.Position := Vector3(0,0,50);
{ .AddChildren }
Group16.AddChildren([Viewpoint18]);
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group16.AddChildren([Background19]);
X3DPrototype20 := TX3DPrototype.Create;
X3DPrototype20.NameField := 'FlowerProto';
X3DInterfaceDeclaration21 := TX3DInterfaceDeclaration.Create(nil);
X3DField22 := TX3DField.Create;
X3DField22.NameField := 'vertex';
X3DField22.AccessType := 'inputOnly';
X3DField22.Type := 'MFString';
X3DField22.Value := '\'../shaders/freewrl_flowers_chromatic.vs\' \'https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\'';
{ .SetX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField22;
X3DField23 := TX3DField.Create;
X3DField23.NameField := 'fragment';
X3DField23.AccessType := 'inputOnly';
X3DField23.Type := 'MFString';
X3DField23.Value := '\'../shaders/freewrl.fs\' \'https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\'';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField23;
{ .SetX3DInterfaceDeclaration }
X3DPrototype20.X3DInterfaceDeclaration := X3DInterfaceDeclaration21;
X3DPrototype24 := TX3DPrototype.Create;
Transform25 := TTransformNode.Create;
Shape26 := TShapeNode.Create;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(0.7,0.7,0.7);
Material28.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance27.Material := Material28;
ComposedCubeMapTexture29 := TComposedCubeMapTextureNode.Create;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture29.BackTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture29.BottomTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture29.FrontTexture := ImageTexture32;
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture29.LeftTexture := ImageTexture33;
ImageTexture34 := TImageTextureNode.Create;
ImageTexture34.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture29.RightTexture := ImageTexture34;
ImageTexture35 := TImageTextureNode.Create;
ImageTexture35.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture29.TopTexture := ImageTexture35;
{ .SetTexture }
Appearance27.Texture := ComposedCubeMapTexture29;
ComposedShader36 := TComposedShaderNode.Create;
ComposedShader36.Language := 'GLSL';
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'fw_textureCoordGenType';
X3DField37.AccessType := 'inputOutput';
X3DField37.Type := 'SFInt32';
X3DField37.Value := '0';
{ .SetX3DField }
ComposedShader36.X3DField := X3DField37;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'chromaticDispertion';
X3DField38.AccessType := 'initializeOnly';
X3DField38.Type := 'SFVec3f';
X3DField38.Value := '0.98 1 1.033';
{ .AddX3DField }
ComposedShader36.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'bias';
X3DField39.Type := 'SFFloat';
X3DField39.AccessType := 'inputOutput';
X3DField39.Value := '0.5';
{ .AddX3DField }
ComposedShader36.X3DField := X3DField39;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'scale';
X3DField40.Type := 'SFFloat';
X3DField40.AccessType := 'inputOutput';
X3DField40.Value := '0.5';
{ .AddX3DField }
ComposedShader36.X3DField := X3DField40;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'power';
X3DField41.Type := 'SFFloat';
X3DField41.AccessType := 'inputOutput';
X3DField41.Value := '2';
{ .AddX3DField }
ComposedShader36.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'a';
X3DField42.Type := 'SFFloat';
X3DField42.AccessType := 'inputOutput';
X3DField42.Value := '5';
{ .AddX3DField }
ComposedShader36.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'b';
X3DField43.Type := 'SFFloat';
X3DField43.AccessType := 'inputOutput';
X3DField43.Value := '5';
{ .AddX3DField }
ComposedShader36.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'c';
X3DField44.Type := 'SFFloat';
X3DField44.AccessType := 'inputOutput';
X3DField44.Value := '20';
{ .AddX3DField }
ComposedShader36.X3DField := X3DField44;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'd';
X3DField45.Type := 'SFFloat';
X3DField45.AccessType := 'inputOutput';
X3DField45.Value := '20';
{ .AddX3DField }
ComposedShader36.X3DField := X3DField45;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'tdelta';
X3DField46.Type := 'SFFloat';
X3DField46.AccessType := 'inputOutput';
X3DField46.Value := '0';
{ .AddX3DField }
ComposedShader36.X3DField := X3DField46;
X3DField47 := TX3DField.Create;
X3DField47.NameField := 'pdelta';
X3DField47.Type := 'SFFloat';
X3DField47.AccessType := 'inputOutput';
X3DField47.Value := '0';
{ .AddX3DField }
ComposedShader36.X3DField := X3DField47;
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"/> }
{ </field> }
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.Type := 'VERTEX';
IS49 := TIS.Create;
connect50 := Tconnect.Create;
connect50.NodeField := 'url';
connect50.ProtoField := 'vertex';
{ .AddConnect }
IS49.Connect := connect50;
{ .SetIS }
ShaderPart48.IS := IS49;
{ .AddParts }
ComposedShader36.Parts := ShaderPart48;
ShaderPart51 := TShaderPartNode.Create;
ShaderPart51.Type := 'FRAGMENT';
IS52 := TIS.Create;
connect53 := Tconnect.Create;
connect53.NodeField := 'url';
connect53.ProtoField := 'fragment';
{ .AddConnect }
IS52.Connect := connect53;
{ .SetIS }
ShaderPart51.IS := IS52;
{ .AddParts }
ComposedShader36.Parts := ShaderPart51;
{ .AddShaders }
Appearance27.Shaders := ComposedShader36;
{ .SetAppearance }
Shape26.Appearance := Appearance27;
Sphere54 := TSphereNode.Create;
Sphere54.Radius := 5;
{ .SetGeometry }
Shape26.Geometry := Sphere54;
{ .AddChild }
Transform25.AddChildren([Shape26]);
Script55 := TScriptNode.Create;
Script55.DirectOutput := True;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'translation';
X3DField56.AccessType := 'inputOutput';
X3DField56.Type := 'SFVec3f';
X3DField56.Value := '0 0 0';
{ .SetX3DField }
Script55.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'velocity';
X3DField57.AccessType := 'inputOutput';
X3DField57.Type := 'SFVec3f';
X3DField57.Value := '0 0 0';
{ .AddX3DField }
Script55.X3DField := X3DField57;
X3DField58 := TX3DField.Create;
X3DField58.NameField := 'set_fraction';
X3DField58.AccessType := 'inputOutput';
X3DField58.Type := 'SFFloat';
{ .AddX3DField }
Script55.X3DField := X3DField58;
X3DField59 := TX3DField.Create;
X3DField59.NameField := 'a';
X3DField59.Type := 'SFFloat';
X3DField59.AccessType := 'inputOutput';
X3DField59.Value := '0.5';
{ .AddX3DField }
Script55.X3DField := X3DField59;
X3DField60 := TX3DField.Create;
X3DField60.NameField := 'b';
X3DField60.Type := 'SFFloat';
X3DField60.AccessType := 'inputOutput';
X3DField60.Value := '0.5';
{ .AddX3DField }
Script55.X3DField := X3DField60;
X3DField61 := TX3DField.Create;
X3DField61.NameField := 'c';
X3DField61.Type := 'SFFloat';
X3DField61.AccessType := 'inputOutput';
X3DField61.Value := '3';
{ .AddX3DField }
Script55.X3DField := X3DField61;
X3DField62 := TX3DField.Create;
X3DField62.NameField := 'd';
X3DField62.Type := 'SFFloat';
X3DField62.AccessType := 'inputOutput';
X3DField62.Value := '3';
{ .AddX3DField }
Script55.X3DField := X3DField62;
X3DField63 := TX3DField.Create;
X3DField63.NameField := 'tdelta';
X3DField63.Type := 'SFFloat';
X3DField63.AccessType := 'inputOutput';
X3DField63.Value := '0.5';
{ .AddX3DField }
Script55.X3DField := X3DField63;
X3DField64 := TX3DField.Create;
X3DField64.NameField := 'pdelta';
X3DField64.Type := 'SFFloat';
X3DField64.AccessType := 'inputOutput';
X3DField64.Value := '0.5';
{ .AddX3DField }
Script55.X3DField := X3DField64;

Script55.SetSourceCode('''ecmascript:\n"+
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
Transform25.AddChildren([Script55]);
TimeSensor65 := TTimeSensorNode.Create;
TimeSensor65.CycleInterval := 5;
TimeSensor65.Loop := True;
{ .AddChildren }
Transform25.AddChildren([TimeSensor65]);
Transform25.AddRoute(TimeSensor65.EventFraction_changed, Script55.EventSet_fraction);
{ .AddX3DRoute }
Transform25.AddRoute(Script55.EventTranslation_changed, Transform25.FdTranslation);
{ .AddX3DRoute }
Transform25.AddRoute(Script55.FdA, ComposedShader36.FdA);
{ .AddX3DRoute }
Transform25.AddRoute(Script55.FdB, ComposedShader36.FdB);
{ .AddX3DRoute }
Transform25.AddRoute(Script55.FdC, ComposedShader36.FdC);
{ .AddX3DRoute }
Transform25.AddRoute(Script55.FdD, ComposedShader36.FdD);
{ .AddX3DRoute }
Transform25.AddRoute(Script55.FdTdelta, ComposedShader36.FdTdelta);
{ .AddX3DRoute }
Transform25.AddRoute(Script55.FdPdelta, ComposedShader36.FdPdelta);
{ .AddX3DRoute }
{ .SetTransform }
X3DPrototype24.Transform := Transform25;
{ .AddX3DPrototype }
X3DPrototype20.X3DPrototype := X3DPrototype24;
{ .AddX3DPrototype }
Group16.X3DPrototype := X3DPrototype20;
X3DPrototype74 := TX3DPrototypeNode.Create;
X3DPrototype74.NameField := 'FlowerProto';
MFString75 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/freewrl_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs']));
MFString75.NameField := 'vertex';
MFString75.Value := '\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype74.MFString := MFString75;
MFString76 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/freewrl.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs']));
MFString76.NameField := 'fragment';
MFString76.Value := '\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"';
{ .AddMFString }
X3DPrototype74.MFString := MFString76;
{ .AddX3DPrototype }
Group16.X3DPrototype := X3DPrototype74;
{ .AddGroup }
X3D0.AddChildren([Group16]);
Result := X3D0;
end;

begin
end.
