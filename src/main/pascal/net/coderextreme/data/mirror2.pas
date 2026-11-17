unit mirror2;

interface

uses X3DNodes;

function Createmirror2: TX3DRootNode;

implementation

uses CastleVectors;

function Createmirror2: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group15: TGroupNode;
Viewpoint16: TViewpointNode;
Background17: TBackgroundNode;
Transform18: TTransformNode;
Shape19: TShapeNode;
Appearance20: TAppearanceNode;
Material21: TMaterialNode;
ComposedCubeMapTexture22: TComposedCubeMapTextureNode;
ImageTexture23: TImageTextureNode;
ImageTexture24: TImageTextureNode;
ImageTexture25: TImageTextureNode;
ImageTexture26: TImageTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ComposedShader29: TComposedShaderNode;
X3DField30: TX3DField;
X3DField31: TX3DField;
X3DField32: TX3DField;
X3DField33: TX3DField;
X3DField34: TX3DField;
ShaderPart35: TShaderPartNode;
ShaderPart36: TShaderPartNode;
ComposedShader37: TComposedShaderNode;
X3DField38: TX3DField;
X3DField39: TX3DField;
X3DField40: TX3DField;
X3DField41: TX3DField;
X3DField42: TX3DField;
ShaderPart43: TShaderPartNode;
ShaderPart44: TShaderPartNode;
Sphere45: TSphereNode;
Script46: TScriptNode;
X3DField47: TX3DField;
X3DField48: TX3DField;
X3DField49: TX3DField;
X3DField50: TX3DField;
X3DField51: TX3DField;
X3DField52: TX3DField;
X3DField53: TX3DField;
X3DField54: TX3DField;
X3DField55: TX3DField;
X3DField56: TX3DField;
X3DField57: TX3DField;
X3DField58: TX3DField;
X3DField59: TX3DField;
X3DField60: TX3DField;
TimeSensor61: TTimeSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'mirror2.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d';
X3D0.Meta['description'] := 'a mirrored sphere';
Group15 := TGroupNode.Create;
Viewpoint16 := TViewpointNode.Create;
Viewpoint16.Position := Vector3(0,5,100);
Viewpoint16.Description := 'Switch background and images texture';
{ .AddChildren }
Group15.AddChildren([Viewpoint16]);
Background17 := TBackgroundNode.Create;
Background17.SetLeftUrl(['../resources/images/all_probes/beach_cross/beach_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
Background17.SetRightUrl(['../resources/images/all_probes/beach_cross/beach_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
Background17.SetFrontUrl(['../resources/images/all_probes/beach_cross/beach_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
Background17.SetBackUrl(['../resources/images/all_probes/beach_cross/beach_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
Background17.SetTopUrl(['../resources/images/all_probes/beach_cross/beach_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
Background17.SetBottomUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
{ .AddChildren }
Group15.AddChildren([Background17]);
Transform18 := TTransformNode.Create;
Shape19 := TShapeNode.Create;
Appearance20 := TAppearanceNode.Create;
Material21 := TMaterialNode.Create;
Material21.DiffuseColor := Vector3(0.7,0.7,0.7);
Material21.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance20.Material := Material21;
ComposedCubeMapTexture22 := TComposedCubeMapTextureNode.Create;
ImageTexture23 := TImageTextureNode.Create;
ImageTexture23.SetUrl(['../resources/images/all_probes/beach_cross/beach_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture22.BackTexture := ImageTexture23;
ImageTexture24 := TImageTextureNode.Create;
ImageTexture24.SetUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture22.BottomTexture := ImageTexture24;
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['../resources/images/all_probes/beach_cross/beach_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture22.FrontTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/beach_cross/beach_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture22.LeftTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/beach_cross/beach_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture22.RightTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/beach_cross/beach_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture22.TopTexture := ImageTexture28;
{ .SetTexture }
Appearance20.Texture := ComposedCubeMapTexture22;
ComposedShader29 := TComposedShaderNode.Create;
ComposedShader29.Language := 'GLSL';
{ http://hypertextbook.com/facts/2005/JustinChe.shtml }
X3DField30 := TX3DField.Create;
X3DField30.NameField := 'chromaticDispertion';
X3DField30.AccessType := 'inputOutput';
X3DField30.Type := 'SFVec3f';
X3DField30.Value := '0.98 1 1.033';
{ .AddX3DField }
ComposedShader29.X3DField := X3DField30;
X3DField31 := TX3DField.Create;
X3DField31.NameField := 'cube';
X3DField31.AccessType := 'inputOutput';
X3DField31.Type := 'SFInt32';
X3DField31.Value := '0';
{ .AddX3DField }
ComposedShader29.X3DField := X3DField31;
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'bias';
X3DField32.AccessType := 'inputOutput';
X3DField32.Type := 'SFFloat';
X3DField32.Value := '0.5';
{ .AddX3DField }
ComposedShader29.X3DField := X3DField32;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'scale';
X3DField33.AccessType := 'inputOutput';
X3DField33.Type := 'SFFloat';
X3DField33.Value := '0.5';
{ .AddX3DField }
ComposedShader29.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'power';
X3DField34.AccessType := 'inputOutput';
X3DField34.Type := 'SFFloat';
X3DField34.Value := '2';
{ .AddX3DField }
ComposedShader29.X3DField := X3DField34;
ShaderPart35 := TShaderPartNode.Create;
ShaderPart35.SetUrl(['../shaders/x_ite.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart35.Type := 'VERTEX';
{ .AddParts }
ComposedShader29.Parts := ShaderPart35;
ShaderPart36 := TShaderPartNode.Create;
ShaderPart36.SetUrl(['../shaders/x_itemix.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs']);
ShaderPart36.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader29.Parts := ShaderPart36;
{ .AddShaders }
Appearance20.Shaders := ComposedShader29;
ComposedShader37 := TComposedShaderNode.Create;
ComposedShader37.Language := 'GLSL';
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'chromaticDispertion';
X3DField38.AccessType := 'inputOutput';
X3DField38.Type := 'SFVec3f';
X3DField38.Value := '0.98 1 1.033';
{ .SetX3DField }
ComposedShader37.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'cube';
X3DField39.AccessType := 'inputOutput';
X3DField39.Type := 'SFInt32';
X3DField39.Value := '0';
{ .AddX3DField }
ComposedShader37.X3DField := X3DField39;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'bias';
X3DField40.AccessType := 'inputOutput';
X3DField40.Type := 'SFFloat';
X3DField40.Value := '0.5';
{ .AddX3DField }
ComposedShader37.X3DField := X3DField40;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'scale';
X3DField41.AccessType := 'inputOutput';
X3DField41.Type := 'SFFloat';
X3DField41.Value := '0.5';
{ .AddX3DField }
ComposedShader37.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'power';
X3DField42.AccessType := 'inputOutput';
X3DField42.Type := 'SFFloat';
X3DField42.Value := '2';
{ .AddX3DField }
ComposedShader37.X3DField := X3DField42;
ShaderPart43 := TShaderPartNode.Create;
ShaderPart43.SetUrl(['../shaders/x3dom.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart43.Type := 'VERTEX';
{ .AddParts }
ComposedShader37.Parts := ShaderPart43;
ShaderPart44 := TShaderPartNode.Create;
ShaderPart44.SetUrl(['../shaders/mix.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs']);
ShaderPart44.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader37.Parts := ShaderPart44;
{ .AddShaders }
Appearance20.Shaders := ComposedShader37;
{ .SetAppearance }
Shape19.Appearance := Appearance20;
Sphere45 := TSphereNode.Create;
Sphere45.Radius := 30;
{ .SetGeometry }
Shape19.Geometry := Sphere45;
{ .AddChild }
Transform18.AddChildren([Shape19]);
Script46 := TScriptNode.Create;
Script46.DirectOutput := True;
X3DField47 := TX3DField.Create;
X3DField47.NameField := 'frontUrls';
X3DField47.Type := 'MFString';
X3DField47.AccessType := 'initializeOnly';
X3DField47.Value := '\'../resources/images/all_probes/beach_cross/beach_front.png\' \'../resources/images/all_probes/building_cross/building_front.png\' \'../resources/images/all_probes/campus_cross/campus_front.png\' \'../resources/images/all_probes/galileo_cross/galileo_front.png\' \'../resources/images/all_probes/grace_cross/grace_front.png\' \'../resources/images/all_probes/kitchen_cross/kitchen_front.png\' \'../resources/images/all_probes/rnl_cross/rnl_front.png\' \'../resources/images/all_probes/stpeters_cross/stpeters_front.png\' \'../resources/images/all_probes/uffizi_cross/uffizi_front.png\'';
{ .SetX3DField }
Script46.X3DField := X3DField47;
X3DField48 := TX3DField.Create;
X3DField48.NameField := 'backUrls';
X3DField48.Type := 'MFString';
X3DField48.AccessType := 'initializeOnly';
X3DField48.Value := '\'../resources/images/all_probes/beach_cross/beach_back.png\' \'../resources/images/all_probes/building_cross/building_back.png\' \'../resources/images/all_probes/campus_cross/campus_back.png\' \'../resources/images/all_probes/galileo_cross/galileo_back.png\' \'../resources/images/all_probes/grace_cross/grace_back.png\' \'../resources/images/all_probes/kitchen_cross/kitchen_back.png\' \'../resources/images/all_probes/rnl_cross/rnl_back.png\' \'../resources/images/all_probes/stpeters_cross/stpeters_back.png\' \'../resources/images/all_probes/uffizi_cross/uffizi_back.png\'';
{ .AddX3DField }
Script46.X3DField := X3DField48;
X3DField49 := TX3DField.Create;
X3DField49.NameField := 'leftUrls';
X3DField49.Type := 'MFString';
X3DField49.AccessType := 'initializeOnly';
X3DField49.Value := '\'../resources/images/all_probes/beach_cross/beach_left.png\' \'../resources/images/all_probes/building_cross/building_left.png\' \'../resources/images/all_probes/campus_cross/campus_left.png\' \'../resources/images/all_probes/galileo_cross/galileo_left.png\' \'../resources/images/all_probes/grace_cross/grace_left.png\' \'../resources/images/all_probes/kitchen_cross/kitchen_left.png\' \'../resources/images/all_probes/rnl_cross/rnl_left.png\' \'../resources/images/all_probes/stpeters_cross/stpeters_left.png\' \'../resources/images/all_probes/uffizi_cross/uffizi_left.png\'';
{ .AddX3DField }
Script46.X3DField := X3DField49;
X3DField50 := TX3DField.Create;
X3DField50.NameField := 'rightUrls';
X3DField50.Type := 'MFString';
X3DField50.AccessType := 'initializeOnly';
X3DField50.Value := '\'../resources/images/all_probes/beach_cross/beach_right.png\' \'../resources/images/all_probes/building_cross/building_right.png\' \'../resources/images/all_probes/campus_cross/campus_right.png\' \'../resources/images/all_probes/galileo_cross/galileo_right.png\' \'../resources/images/all_probes/grace_cross/grace_right.png\' \'../resources/images/all_probes/kitchen_cross/kitchen_right.png\' \'../resources/images/all_probes/rnl_cross/rnl_right.png\' \'../resources/images/all_probes/stpeters_cross/stpeters_right.png\' \'../resources/images/all_probes/uffizi_cross/uffizi_right.png\'';
{ .AddX3DField }
Script46.X3DField := X3DField50;
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'topUrls';
X3DField51.Type := 'MFString';
X3DField51.AccessType := 'initializeOnly';
X3DField51.Value := '\'../resources/images/all_probes/beach_cross/beach_top.png\' \'../resources/images/all_probes/building_cross/building_top.png\' \'../resources/images/all_probes/campus_cross/campus_top.png\' \'../resources/images/all_probes/galileo_cross/galileo_top.png\' \'../resources/images/all_probes/grace_cross/grace_top.png\' \'../resources/images/all_probes/kitchen_cross/kitchen_top.png\' \'../resources/images/all_probes/rnl_cross/rnl_top.png\' \'../resources/images/all_probes/stpeters_cross/stpeters_top.png\' \'../resources/images/all_probes/uffizi_cross/uffizi_top.png\'';
{ .AddX3DField }
Script46.X3DField := X3DField51;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'bottomUrls';
X3DField52.Type := 'MFString';
X3DField52.AccessType := 'initializeOnly';
X3DField52.Value := '\'../resources/images/all_probes/beach_cross/beach_bottom.png\' \'../resources/images/all_probes/building_cross/building_bottom.png\' \'../resources/images/all_probes/campus_cross/campus_bottom.png\' \'../resources/images/all_probes/galileo_cross/galileo_bottom.png\' \'../resources/images/all_probes/grace_cross/grace_bottom.png\' \'../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\' \'../resources/images/all_probes/rnl_cross/rnl_bottom.png\' \'../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\' \'../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\'';
{ .AddX3DField }
Script46.X3DField := X3DField52;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'front_changed';
X3DField53.Type := 'MFString';
X3DField53.AccessType := 'outputOnly';
{ .AddX3DField }
Script46.X3DField := X3DField53;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'back_changed';
X3DField54.Type := 'MFString';
X3DField54.AccessType := 'outputOnly';
{ .AddX3DField }
Script46.X3DField := X3DField54;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'left_changed';
X3DField55.Type := 'MFString';
X3DField55.AccessType := 'outputOnly';
{ .AddX3DField }
Script46.X3DField := X3DField55;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'right_changed';
X3DField56.Type := 'MFString';
X3DField56.AccessType := 'outputOnly';
{ .AddX3DField }
Script46.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'top_changed';
X3DField57.Type := 'MFString';
X3DField57.AccessType := 'outputOnly';
{ .AddX3DField }
Script46.X3DField := X3DField57;
X3DField58 := TX3DField.Create;
X3DField58.NameField := 'bottom_changed';
X3DField58.Type := 'MFString';
X3DField58.AccessType := 'outputOnly';
{ .AddX3DField }
Script46.X3DField := X3DField58;
X3DField59 := TX3DField.Create;
X3DField59.NameField := 'set_fraction';
X3DField59.Type := 'SFFloat';
X3DField59.AccessType := 'inputOnly';
{ .AddX3DField }
Script46.X3DField := X3DField59;
X3DField60 := TX3DField.Create;
X3DField60.NameField := 'old';
X3DField60.Type := 'SFInt32';
X3DField60.AccessType := 'inputOutput';
X3DField60.Value := '-1';
{ .AddX3DField }
Script46.X3DField := X3DField60;

Script46.SetSourceCode('''ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    // Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }''');
{ .AddChildren }
Transform18.AddChildren([Script46]);
TimeSensor61 := TTimeSensorNode.Create;
TimeSensor61.CycleInterval := 45;
TimeSensor61.Loop := True;
{ .AddChildren }
Transform18.AddChildren([TimeSensor61]);
Transform18.AddRoute(TimeSensor61.EventFraction_changed, Script46.EventSet_fraction);
{ .AddX3DRoute }
Transform18.AddRoute(Script46.EventFront_changed, Background17.FdFronturl);
{ .AddX3DRoute }
Transform18.AddRoute(Script46.EventBack_changed, Background17.FdBackurl);
{ .AddX3DRoute }
Transform18.AddRoute(Script46.EventLeft_changed, Background17.FdLefturl);
{ .AddX3DRoute }
Transform18.AddRoute(Script46.EventRight_changed, Background17.FdRighturl);
{ .AddX3DRoute }
Transform18.AddRoute(Script46.EventTop_changed, Background17.FdTopurl);
{ .AddX3DRoute }
Transform18.AddRoute(Script46.EventBottom_changed, Background17.FdBottomurl);
{ .AddX3DRoute }
Transform18.AddRoute(Script46.EventFront_changed, ImageTexture25.FdUrl);
{ .AddX3DRoute }
Transform18.AddRoute(Script46.EventBack_changed, ImageTexture23.FdUrl);
{ .AddX3DRoute }
Transform18.AddRoute(Script46.EventLeft_changed, ImageTexture26.FdUrl);
{ .AddX3DRoute }
Transform18.AddRoute(Script46.EventRight_changed, ImageTexture27.FdUrl);
{ .AddX3DRoute }
Transform18.AddRoute(Script46.EventTop_changed, ImageTexture28.FdUrl);
{ .AddX3DRoute }
Transform18.AddRoute(Script46.EventBottom_changed, ImageTexture24.FdUrl);
{ .AddX3DRoute }
{ .AddChildren }
Group15.AddChildren([Transform18]);
{ .AddGroup }
X3D0.AddChildren([Group15]);
Result := X3D0;
end;

begin
end.
