unit fwparticleflowers;

interface

uses X3DNodes;

function Createfwparticleflowers: TX3DRootNode;

implementation

uses CastleVectors;

function Createfwparticleflowers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group14: TGroupNode;
WorldInfo15: TWorldInfoNode;
NavigationInfo16: TNavigationInfoNode;
Viewpoint17: TViewpointNode;
Background18: TBackgroundNode;
Transform19: TTransformNode;
ParticleSystem20: TParticleSystemNode;
BoundedPhysicsModel21: TBoundedPhysicsModelNode;
Sphere22: TSphereNode;
ExplosionEmitter23: TExplosionEmitterNode;
Sphere24: TSphereNode;
Appearance25: TAppearanceNode;
Material26: TMaterialNode;
ComposedCubeMapTexture27: TComposedCubeMapTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ImageTexture32: TImageTextureNode;
ImageTexture33: TImageTextureNode;
ComposedShader34: TComposedShaderNode;
X3DField35: TX3DField;
X3DField36: TX3DField;
ComposedCubeMapTexture37: TComposedCubeMapTextureNode;
X3DField38: TX3DField;
X3DField39: TX3DField;
X3DField40: TX3DField;
X3DField41: TX3DField;
X3DField42: TX3DField;
X3DField43: TX3DField;
X3DField44: TX3DField;
X3DField45: TX3DField;
X3DField46: TX3DField;
ShaderPart47: TShaderPartNode;
ShaderPart48: TShaderPartNode;
Script49: TScriptNode;
X3DField50: TX3DField;
X3DField51: TX3DField;
X3DField52: TX3DField;
X3DField53: TX3DField;
X3DField54: TX3DField;
X3DField55: TX3DField;
X3DField56: TX3DField;
X3DField57: TX3DField;
X3DField58: TX3DField;
TimeSensor59: TTimeSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Components['ParticleSystems'] := 3;
X3D0.Meta['title'] := 'particleflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d';
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'particleflowers.x3d';
{ .AddChildren }
Group14.AddChildren([WorldInfo15]);
NavigationInfo16 := TNavigationInfoNode.Create;
NavigationInfo16.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ .AddChildren }
Group14.AddChildren([NavigationInfo16]);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Description := 'Tour Views';
Viewpoint17.Position := Vector3(0,0,12);
{ .AddChildren }
Group14.AddChildren([Viewpoint17]);
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group14.AddChildren([Background18]);
Transform19 := TTransformNode.Create;
ParticleSystem20 := TParticleSystemNode.Create;
ParticleSystem20.MaxParticles := 20;
ParticleSystem20.GeometryType := 'GEOMETRY';
BoundedPhysicsModel21 := TBoundedPhysicsModelNode.Create;
Sphere22 := TSphereNode.Create;
Sphere22.Radius := 100;
{ .SetGeometry }
BoundedPhysicsModel21.Geometry := Sphere22;
{ .AddPhysics }
ParticleSystem20.Physics := BoundedPhysicsModel21;
ExplosionEmitter23 := TExplosionEmitterNode.Create;
ExplosionEmitter23.Speed := 2;
ExplosionEmitter23.Variation := 0.75;
{ .SetEmitter }
ParticleSystem20.Emitter := ExplosionEmitter23;
Sphere24 := TSphereNode.Create;
{ .SetGeometry }
ParticleSystem20.Geometry := Sphere24;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0.7,0.7,0.7);
Material26.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance25.Material := Material26;
ComposedCubeMapTexture27 := TComposedCubeMapTextureNode.Create;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture27.BackTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture27.BottomTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture27.FrontTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture27.LeftTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture27.RightTexture := ImageTexture32;
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture27.TopTexture := ImageTexture33;
{ .SetTexture }
Appearance25.Texture := ComposedCubeMapTexture27;
ComposedShader34 := TComposedShaderNode.Create;
ComposedShader34.Language := 'GLSL';
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'chromaticDispertion';
X3DField35.AccessType := 'inputOutput';
X3DField35.Type := 'SFVec3f';
X3DField35.Value := '0.98 1 1.033';
{ .SetX3DField }
ComposedShader34.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'cube';
X3DField36.Type := 'SFNode';
X3DField36.AccessType := 'inputOutput';
ComposedCubeMapTexture37 := ComposedCubeMapTexture27;
{ .SetComposedCubeMapTexture }
X3DField36.ComposedCubeMapTexture := ComposedCubeMapTexture37;
{ .AddX3DField }
ComposedShader34.X3DField := X3DField36;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'bias';
X3DField38.AccessType := 'inputOutput';
X3DField38.Type := 'SFFloat';
X3DField38.Value := '0.5';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'scale';
X3DField39.AccessType := 'inputOutput';
X3DField39.Type := 'SFFloat';
X3DField39.Value := '0.5';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField39;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'power';
X3DField40.AccessType := 'inputOutput';
X3DField40.Type := 'SFFloat';
X3DField40.Value := '2';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField40;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'a';
X3DField41.Type := 'SFFloat';
X3DField41.AccessType := 'inputOutput';
X3DField41.Value := '2';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'b';
X3DField42.Type := 'SFFloat';
X3DField42.AccessType := 'inputOutput';
X3DField42.Value := '1';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'c';
X3DField43.Type := 'SFFloat';
X3DField43.AccessType := 'inputOutput';
X3DField43.Value := '5';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'd';
X3DField44.Type := 'SFFloat';
X3DField44.AccessType := 'inputOutput';
X3DField44.Value := '5';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField44;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'tdelta';
X3DField45.Type := 'SFFloat';
X3DField45.AccessType := 'inputOutput';
X3DField45.Value := '0';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField45;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'pdelta';
X3DField46.Type := 'SFFloat';
X3DField46.AccessType := 'inputOutput';
X3DField46.Value := '0';
{ .AddX3DField }
ComposedShader34.X3DField := X3DField46;
ShaderPart47 := TShaderPartNode.Create;
ShaderPart47.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs']);
ShaderPart47.Type := 'VERTEX';
{ .AddParts }
ComposedShader34.Parts := ShaderPart47;
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs']);
ShaderPart48.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader34.Parts := ShaderPart48;
{ .AddShaders }
Appearance25.Shaders := ComposedShader34;
{ .SetAppearance }
ParticleSystem20.Appearance := Appearance25;
{ .AddChildren }
Transform19.AddChildren([ParticleSystem20]);
Script49 := TScriptNode.Create;
X3DField50 := TX3DField.Create;
X3DField50.NameField := 'translation';
X3DField50.AccessType := 'inputOutput';
X3DField50.Type := 'SFVec3f';
X3DField50.Value := '0 0 0';
{ .SetX3DField }
Script49.X3DField := X3DField50;
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'velocity';
X3DField51.AccessType := 'inputOutput';
X3DField51.Type := 'SFVec3f';
X3DField51.Value := '0 0 0';
{ .AddX3DField }
Script49.X3DField := X3DField51;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'set_fraction';
X3DField52.AccessType := 'inputOnly';
X3DField52.Type := 'SFFloat';
{ .AddX3DField }
Script49.X3DField := X3DField52;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'a';
X3DField53.Type := 'SFFloat';
X3DField53.AccessType := 'inputOutput';
X3DField53.Value := '0.5';
{ .AddX3DField }
Script49.X3DField := X3DField53;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'b';
X3DField54.Type := 'SFFloat';
X3DField54.AccessType := 'inputOutput';
X3DField54.Value := '0.5';
{ .AddX3DField }
Script49.X3DField := X3DField54;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'c';
X3DField55.Type := 'SFFloat';
X3DField55.AccessType := 'inputOutput';
X3DField55.Value := '3';
{ .AddX3DField }
Script49.X3DField := X3DField55;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'd';
X3DField56.Type := 'SFFloat';
X3DField56.AccessType := 'inputOutput';
X3DField56.Value := '3';
{ .AddX3DField }
Script49.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'tdelta';
X3DField57.Type := 'SFFloat';
X3DField57.AccessType := 'inputOutput';
X3DField57.Value := '0.5';
{ .AddX3DField }
Script49.X3DField := X3DField57;
X3DField58 := TX3DField.Create;
X3DField58.NameField := 'pdelta';
X3DField58.Type := 'SFFloat';
X3DField58.AccessType := 'inputOutput';
X3DField58.Value := '0.5';
{ .AddX3DField }
Script49.X3DField := X3DField58;

Script49.SetSourceCode('''ecmascript:\n"+
"\n"+
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
"				tdelta = tdelta + 0.05;\n"+
"				pdelta = pdelta + 0.05;\n"+
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
Transform19.AddChildren([Script49]);
TimeSensor59 := TTimeSensorNode.Create;
TimeSensor59.CycleInterval := 5;
TimeSensor59.Loop := True;
{ .AddChildren }
Transform19.AddChildren([TimeSensor59]);
Transform19.AddRoute(TimeSensor59.EventFraction_changed, Script49.EventSet_fraction);
{ .AddX3DRoute }
Transform19.AddRoute(Script49.FdA, ComposedShader34.FdA);
{ .AddX3DRoute }
Transform19.AddRoute(Script49.FdB, ComposedShader34.FdB);
{ .AddX3DRoute }
Transform19.AddRoute(Script49.FdC, ComposedShader34.FdC);
{ .AddX3DRoute }
Transform19.AddRoute(Script49.FdD, ComposedShader34.FdD);
{ .AddX3DRoute }
Transform19.AddRoute(Script49.FdPdelta, ComposedShader34.FdPdelta);
{ .AddX3DRoute }
Transform19.AddRoute(Script49.FdTdelta, ComposedShader34.FdTdelta);
{ .AddX3DRoute }
{ .AddChildren }
Group14.AddChildren([Transform19]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;

begin
end.
