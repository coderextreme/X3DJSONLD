function mirror2: TX3DRootNode;
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
field30: TfieldNode;
field31: TfieldNode;
field32: TfieldNode;
field33: TfieldNode;
field34: TfieldNode;
ShaderPart35: TShaderPartNode;
ShaderPart36: TShaderPartNode;
ComposedShader37: TComposedShaderNode;
field38: TfieldNode;
field39: TfieldNode;
field40: TfieldNode;
field41: TfieldNode;
field42: TfieldNode;
ShaderPart43: TShaderPartNode;
ShaderPart44: TShaderPartNode;
Sphere45: TSphereNode;
Script46: TScriptNode;
field47: TfieldNode;
field48: TfieldNode;
field49: TfieldNode;
field50: TfieldNode;
field51: TfieldNode;
field52: TfieldNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
field56: TfieldNode;
field57: TfieldNode;
field58: TfieldNode;
field59: TfieldNode;
field60: TfieldNode;
TimeSensor61: TTimeSensorNode;
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
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
{ <component name='Shape' level='4'></component> }
X3D0.Meta['title'] := 'mirror2.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/personal/mirror2.x3d';
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
field30 := TfieldNode.Create;
field30.NameField := 'chromaticDispertion';
field30.AccessType := 'inputOutput';
field30.Type := 'SFVec3f';
field30.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader29.Field := field30;
field31 := TfieldNode.Create;
field31.NameField := 'cube';
field31.AccessType := 'inputOutput';
field31.Type := 'SFInt32';
field31.Value := '0';
{ .AddField }
ComposedShader29.Field := field31;
field32 := TfieldNode.Create;
field32.NameField := 'bias';
field32.AccessType := 'inputOutput';
field32.Type := 'SFFloat';
field32.Value := '0.5';
{ .AddField }
ComposedShader29.Field := field32;
field33 := TfieldNode.Create;
field33.NameField := 'scale';
field33.AccessType := 'inputOutput';
field33.Type := 'SFFloat';
field33.Value := '0.5';
{ .AddField }
ComposedShader29.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'power';
field34.AccessType := 'inputOutput';
field34.Type := 'SFFloat';
field34.Value := '2';
{ .AddField }
ComposedShader29.Field := field34;
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
field38 := TfieldNode.Create;
field38.NameField := 'chromaticDispertion';
field38.AccessType := 'inputOutput';
field38.Type := 'SFVec3f';
field38.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader37.Field := field38;
field39 := TfieldNode.Create;
field39.NameField := 'cube';
field39.AccessType := 'inputOutput';
field39.Type := 'SFInt32';
field39.Value := '0';
{ .AddField }
ComposedShader37.Field := field39;
field40 := TfieldNode.Create;
field40.NameField := 'bias';
field40.AccessType := 'inputOutput';
field40.Type := 'SFFloat';
field40.Value := '0.5';
{ .AddField }
ComposedShader37.Field := field40;
field41 := TfieldNode.Create;
field41.NameField := 'scale';
field41.AccessType := 'inputOutput';
field41.Type := 'SFFloat';
field41.Value := '0.5';
{ .AddField }
ComposedShader37.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'power';
field42.AccessType := 'inputOutput';
field42.Type := 'SFFloat';
field42.Value := '2';
{ .AddField }
ComposedShader37.Field := field42;
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
field47 := TfieldNode.Create;
field47.NameField := 'frontUrls';
field47.Type := 'MFString';
field47.AccessType := 'initializeOnly';
field47.Value := '\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"';
{ .AddField }
Script46.Field := field47;
field48 := TfieldNode.Create;
field48.NameField := 'backUrls';
field48.Type := 'MFString';
field48.AccessType := 'initializeOnly';
field48.Value := '\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"';
{ .AddField }
Script46.Field := field48;
field49 := TfieldNode.Create;
field49.NameField := 'leftUrls';
field49.Type := 'MFString';
field49.AccessType := 'initializeOnly';
field49.Value := '\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"';
{ .AddField }
Script46.Field := field49;
field50 := TfieldNode.Create;
field50.NameField := 'rightUrls';
field50.Type := 'MFString';
field50.AccessType := 'initializeOnly';
field50.Value := '\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"';
{ .AddField }
Script46.Field := field50;
field51 := TfieldNode.Create;
field51.NameField := 'topUrls';
field51.Type := 'MFString';
field51.AccessType := 'initializeOnly';
field51.Value := '\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"';
{ .AddField }
Script46.Field := field51;
field52 := TfieldNode.Create;
field52.NameField := 'bottomUrls';
field52.Type := 'MFString';
field52.AccessType := 'initializeOnly';
field52.Value := '\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"';
{ .AddField }
Script46.Field := field52;
field53 := TfieldNode.Create;
field53.NameField := 'front_changed';
field53.Type := 'MFString';
field53.AccessType := 'outputOnly';
{ .AddField }
Script46.Field := field53;
field54 := TfieldNode.Create;
field54.NameField := 'back_changed';
field54.Type := 'MFString';
field54.AccessType := 'outputOnly';
{ .AddField }
Script46.Field := field54;
field55 := TfieldNode.Create;
field55.NameField := 'left_changed';
field55.Type := 'MFString';
field55.AccessType := 'outputOnly';
{ .AddField }
Script46.Field := field55;
field56 := TfieldNode.Create;
field56.NameField := 'right_changed';
field56.Type := 'MFString';
field56.AccessType := 'outputOnly';
{ .AddField }
Script46.Field := field56;
field57 := TfieldNode.Create;
field57.NameField := 'top_changed';
field57.Type := 'MFString';
field57.AccessType := 'outputOnly';
{ .AddField }
Script46.Field := field57;
field58 := TfieldNode.Create;
field58.NameField := 'bottom_changed';
field58.Type := 'MFString';
field58.AccessType := 'outputOnly';
{ .AddField }
Script46.Field := field58;
field59 := TfieldNode.Create;
field59.NameField := 'set_fraction';
field59.Type := 'SFFloat';
field59.AccessType := 'inputOnly';
{ .AddField }
Script46.Field := field59;
field60 := TfieldNode.Create;
field60.NameField := 'old';
field60.Type := 'SFInt32';
field60.AccessType := 'inputOutput';
field60.Value := '-1';
{ .AddField }
Script46.Field := field60;

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
