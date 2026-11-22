unit fwparticleflowers;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createfwparticleflowers: TX3DRootNode;

implementation

uses CastleVectors;

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
SFVec3f35: TSFVec3f;
SFNode36: TSFNode;
ComposedCubeMapTexture37: TComposedCubeMapTextureNode;
SFFloat38: TSFFloat;
SFFloat39: TSFFloat;
SFFloat40: TSFFloat;
SFFloat41: TSFFloat;
SFFloat42: TSFFloat;
SFFloat43: TSFFloat;
SFFloat44: TSFFloat;
SFFloat45: TSFFloat;
SFFloat46: TSFFloat;
ShaderPart47: TShaderPartNode;
ShaderPart48: TShaderPartNode;
Script49: TScriptNode;
SFVec3f50: TSFVec3f;
SFVec3f51: TSFVec3f;
SFFloat52: TSFFloat;
SFFloat53: TSFFloat;
SFFloat54: TSFFloat;
SFFloat55: TSFFloat;
SFFloat56: TSFFloat;
SFFloat57: TSFFloat;
SFFloat58: TSFFloat;
TimeSensor59: TTimeSensorNode;

procedure InitfwparticleflowersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['EnvironmentalEffects'] := 3;
{ METHOD .Component }
X3D0.Components['Shaders'] := 1;
{ METHOD .Component }
X3D0.Components['CubeMapTexturing'] := 1;
{ METHOD .Component }
X3D0.Components['Texturing'] := 1;
{ METHOD .Component }
X3D0.Components['Rendering'] := 1;
{ METHOD .Component }
X3D0.Components['Grouping'] := 3;
{ METHOD .Component }
X3D0.Components['Core'] := 1;
{ METHOD .Component }
X3D0.Components['ParticleSystems'] := 3;
{ METHOD .Component }
X3D0.Meta['title'] := 'particleflowers.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'particleflowers.x3d';
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(WorldInfo15);
NavigationInfo16 := TNavigationInfoNode.Create;
NavigationInfo16.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(NavigationInfo16);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Description := 'Tour Views';
Viewpoint17.Position := Vector3(0,0,12);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Viewpoint17);
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Background18);
Transform19 := TTransformNode.Create;
ParticleSystem20 := TParticleSystemNode.Create;
ParticleSystem20.MaxParticles := 20;
ParticleSystem20.GeometryType := 'GEOMETRY';
BoundedPhysicsModel21 := TBoundedPhysicsModelNode.Create;
end;

procedure InitfwparticleflowersPart1;
begin

Sphere22 := TSphereNode.Create;
Sphere22.Radius := 100;
{ METHOD .Geometry }
BoundedPhysicsModel21.Geometry := Sphere22;
{ METHOD .Physics }
ParticleSystem20.Physics := BoundedPhysicsModel21;
ExplosionEmitter23 := TExplosionEmitterNode.Create;
ExplosionEmitter23.Speed := 2;
ExplosionEmitter23.Variation := 0.75;
{ METHOD .Emitter }
ParticleSystem20.Emitter := ExplosionEmitter23;
Sphere24 := TSphereNode.Create;
{ METHOD .Geometry }
ParticleSystem20.Geometry := Sphere24;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0.7,0.7,0.7);
Material26.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance25.Material := Material26;
ComposedCubeMapTexture27 := TComposedCubeMapTextureNode.Create;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .SetBackTexture }
ComposedCubeMapTexture27.BackTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .SetBottomTexture }
ComposedCubeMapTexture27.BottomTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .SetFrontTexture }
ComposedCubeMapTexture27.FrontTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .SetLeftTexture }
ComposedCubeMapTexture27.LeftTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .SetRightTexture }
ComposedCubeMapTexture27.RightTexture := ImageTexture32;
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .SetTopTexture }
ComposedCubeMapTexture27.TopTexture := ImageTexture33;
{ METHOD .Texture }
Appearance25.Texture := ComposedCubeMapTexture27;
ComposedShader34 := TComposedShaderNode.Create;
ComposedShader34.Language := 'GLSL';
SFVec3f35 := TSFVec3f.CreateUndefined(ComposedShader34, false, 'chromaticDispertion');
SFVec3f35.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader34.AddSFVec3f([SFVec3f35]);
end;

procedure InitfwparticleflowersPart2;
begin

SFNode36 := TSFNode.CreateUndefined(ComposedShader34, false, 'cube');
{ METHOD .AddComposedCubeMapTexture }
SFNode36.AddComposedCubeMapTexture([ComposedCubeMapTexture27]);
{ METHOD .AddSFNode }
ComposedShader34.AddSFNode([SFNode36]);
SFFloat38 := TSFFloat.CreateUndefined(ComposedShader34, false, 'bias');
SFFloat38.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat38]);
SFFloat39 := TSFFloat.CreateUndefined(ComposedShader34, false, 'scale');
SFFloat39.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat39]);
SFFloat40 := TSFFloat.CreateUndefined(ComposedShader34, false, 'power');
SFFloat40.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat40]);
SFFloat41 := TSFFloat.CreateUndefined(ComposedShader34, false, 'a');
SFFloat41.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat41]);
SFFloat42 := TSFFloat.CreateUndefined(ComposedShader34, false, 'b');
SFFloat42.Value := '1';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat42]);
SFFloat43 := TSFFloat.CreateUndefined(ComposedShader34, false, 'c');
SFFloat43.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat43]);
SFFloat44 := TSFFloat.CreateUndefined(ComposedShader34, false, 'd');
SFFloat44.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat44]);
SFFloat45 := TSFFloat.CreateUndefined(ComposedShader34, false, 'tdelta');
SFFloat45.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat45]);
SFFloat46 := TSFFloat.CreateUndefined(ComposedShader34, false, 'pdelta');
SFFloat46.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat46]);
ShaderPart47 := TShaderPartNode.Create;
ShaderPart47.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs']);
ShaderPart47.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader34.Parts := ShaderPart47;
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs']);
ShaderPart48.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
ComposedShader34.Parts := ShaderPart48;
{ METHOD .AddChildren }
Appearance25.AddChildren([ComposedShader34]);
{ METHOD .Appearance }
ParticleSystem20.Appearance := Appearance25;
end;

procedure InitfwparticleflowersPart3;
begin

{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(ParticleSystem20);
Script49 := TScriptNode.Create;
SFVec3f50 := TSFVec3f.CreateUndefined(Script49, false, 'translation');
SFVec3f50.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFVec3f50);
SFVec3f51 := TSFVec3f.CreateUndefined(Script49, false, 'velocity');
SFVec3f51.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFVec3f51);
SFFloat52 := TSFFloat.CreateUndefined(Script49, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFFloat52);
SFFloat53 := TSFFloat.CreateUndefined(Script49, false, 'a');
SFFloat53.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFFloat53);
SFFloat54 := TSFFloat.CreateUndefined(Script49, false, 'b');
SFFloat54.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFFloat54);
SFFloat55 := TSFFloat.CreateUndefined(Script49, false, 'c');
SFFloat55.Value := '3';
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFFloat55);
SFFloat56 := TSFFloat.CreateUndefined(Script49, false, 'd');
SFFloat56.Value := '3';
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFFloat56);
SFFloat57 := TSFFloat.CreateUndefined(Script49, false, 'tdelta');
SFFloat57.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFFloat57);
SFFloat58 := TSFFloat.CreateUndefined(Script49, false, 'pdelta');
SFFloat58.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script49.AddCustomField(SFFloat58);

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
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Script49);
TimeSensor59 := TTimeSensorNode.Create;
TimeSensor59.CycleInterval := 5;
TimeSensor59.Loop := True;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(TimeSensor59);
{ Original "TourTime.EventFraction_changed TO Animate.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO Animate.EventSet_fraction}
Transform19.AddRoute(TimeSensor59.EventFraction_changed, Script49.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Animate.a TO fw.a }
{ Sample Animate.a TO fw.a}
Transform19.AddRoute(Animate.[object Object], ComposedShader34.a);
{ METHOD .AddX3DROUTE }
{ Original "Animate.b TO fw.b }
{ Sample Animate.b TO fw.b}
Transform19.AddRoute(Animate.[object Object], ComposedShader34.b);
{ METHOD .AddX3DROUTE }
{ Original "Animate.c TO fw.c }
{ Sample Animate.c TO fw.c}
Transform19.AddRoute(Animate.[object Object], ComposedShader34.c);
{ METHOD .AddX3DROUTE }
{ Original "Animate.d TO fw.d }
{ Sample Animate.d TO fw.d}
Transform19.AddRoute(Animate.[object Object], ComposedShader34.d);
{ METHOD .AddX3DROUTE }
{ Original "Animate.pdelta TO fw.pdelta }
{ Sample Animate.pdelta TO fw.pdelta}
Transform19.AddRoute(Animate.[object Object], ComposedShader34.pdelta);
{ METHOD .AddX3DROUTE }
{ Original "Animate.tdelta TO fw.tdelta }
{ Sample Animate.tdelta TO fw.tdelta}
Transform19.AddRoute(Animate.[object Object], ComposedShader34.tdelta);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Transform19);
{ METHOD .AddGroup }
X3D0.AddChildren([Group14]);
end;

function Createfwparticleflowers: TX3DRootNode;
begin
InitfwparticleflowersPart0;
InitfwparticleflowersPart1;
InitfwparticleflowersPart2;
InitfwparticleflowersPart3;
Result := X3D0;
end;

begin
end.
