function bumpyfreewrljsonverse: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group31: TGroupNode;
NavigationInfo32: TNavigationInfoNode;
DirectionalLight33: TDirectionalLightNode;
DirectionalLight34: TDirectionalLightNode;
Viewpoint35: TViewpointNode;
LayerSet36: TLayerSetNode;
Layer37: TLayerNode;
Group38: TGroupNode;
Transform39: TTransformNode;
Shape40: TShapeNode;
Cylinder41: TCylinderNode;
Appearance42: TAppearanceNode;
Material43: TMaterialNode;
Transform44: TTransformNode;
Shape45: TShapeNode;
Cone46: TConeNode;
Appearance47: TAppearanceNode;
Material48: TMaterialNode;
Transform49: TTransformNode;
Shape50: TShapeNode;
Cylinder51: TCylinderNode;
Appearance52: TAppearanceNode;
Material53: TMaterialNode;
Transform54: TTransformNode;
Shape55: TShapeNode;
Cone56: TConeNode;
Appearance57: TAppearanceNode;
Material58: TMaterialNode;
Transform59: TTransformNode;
Shape60: TShapeNode;
Cylinder61: TCylinderNode;
Appearance62: TAppearanceNode;
Material63: TMaterialNode;
Transform64: TTransformNode;
Shape65: TShapeNode;
Cone66: TConeNode;
Appearance67: TAppearanceNode;
Material68: TMaterialNode;
Transform69: TTransformNode;
Background70: TBackgroundNode;
Transform71: TTransformNode;
Shape72: TShapeNode;
IndexedFaceSet73: TIndexedFaceSetNode;
Coordinate74: TCoordinateNode;
Appearance75: TAppearanceNode;
Material76: TMaterialNode;
ComposedCubeMapTexture77: TComposedCubeMapTextureNode;
ImageTexture78: TImageTextureNode;
ImageTexture79: TImageTextureNode;
ImageTexture80: TImageTextureNode;
ImageTexture81: TImageTextureNode;
ImageTexture82: TImageTextureNode;
ImageTexture83: TImageTextureNode;
ComposedShader84: TComposedShaderNode;
field85: TfieldNode;
field86: TfieldNode;
field87: TfieldNode;
field88: TfieldNode;
field89: TfieldNode;
field90: TfieldNode;
field91: TfieldNode;
field92: TfieldNode;
field93: TfieldNode;
field94: TfieldNode;
field95: TfieldNode;
ShaderPart96: TShaderPartNode;
ShaderPart97: TShaderPartNode;
Script98: TScriptNode;
field99: TfieldNode;
field100: TfieldNode;
field101: TfieldNode;
field102: TfieldNode;
field103: TfieldNode;
field104: TfieldNode;
field105: TfieldNode;
field106: TfieldNode;
DISEntityManager109: TDISEntityManagerNode;
DISEntityTypeMapping110: TDISEntityTypeMappingNode;
DISEntityTypeMapping111: TDISEntityTypeMappingNode;
DISEntityTypeMapping112: TDISEntityTypeMappingNode;
DISEntityTypeMapping113: TDISEntityTypeMappingNode;
Collision114: TCollisionNode;
Group115: TGroupNode;
LayoutLayer118: TLayoutLayerNode;
Transform119: TTransformNode;
Shape120: TShapeNode;
Appearance121: TAppearanceNode;
Material122: TMaterialNode;
Box123: TBoxNode;
Transform124: TTransformNode;
Transform125: TTransformNode;
Shape126: TShapeNode;
Text127: TTextNode;
FontStyle128: TFontStyleNode;
Appearance129: TAppearanceNode;
Material130: TMaterialNode;
ProtoDeclare131: TProtoDeclareNode;
ProtoInterface132: TProtoInterfaceNode;
field133: TfieldNode;
field134: TfieldNode;
field135: TfieldNode;
field136: TfieldNode;
field137: TfieldNode;
field138: TfieldNode;
field139: TfieldNode;
ProtoBody140: TProtoBodyNode;
Group141: TGroupNode;
Transform142: TTransformNode;
IS143: TISNode;
connect144: TconnectNode;
Transform145: TTransformNode;
IS146: TISNode;
connect147: TconnectNode;
PlaneSensor148: TPlaneSensorNode;
Transform149: TTransformNode;
TouchSensor150: TTouchSensorNode;
Transform151: TTransformNode;
Shape152: TShapeNode;
Text153: TTextNode;
IS154: TISNode;
connect155: TconnectNode;
FontStyle156: TFontStyleNode;
Appearance157: TAppearanceNode;
Material158: TMaterialNode;
Script159: TScriptNode;
field160: TfieldNode;
field161: TfieldNode;
field162: TfieldNode;
field163: TfieldNode;
field164: TfieldNode;
field165: TfieldNode;
IS166: TISNode;
connect167: TconnectNode;
connect168: TconnectNode;
connect169: TconnectNode;
ProtoInstance173: TProtoInstanceNode;
fieldValue174: TfieldValueNode;
fieldValue175: TfieldValueNode;
fieldValue176: TfieldValueNode;
fieldValue177: TfieldValueNode;
fieldValue178: TfieldValueNode;
fieldValue179: TfieldValueNode;
fieldValue180: TfieldValueNode;
ComposedShader181: TComposedShaderNode;
ProtoInstance182: TProtoInstanceNode;
fieldValue183: TfieldValueNode;
fieldValue184: TfieldValueNode;
fieldValue185: TfieldValueNode;
fieldValue186: TfieldValueNode;
fieldValue187: TfieldValueNode;
fieldValue188: TfieldValueNode;
fieldValue189: TfieldValueNode;
ComposedShader190: TComposedShaderNode;
ProtoInstance191: TProtoInstanceNode;
fieldValue192: TfieldValueNode;
fieldValue193: TfieldValueNode;
fieldValue194: TfieldValueNode;
fieldValue195: TfieldValueNode;
fieldValue196: TfieldValueNode;
fieldValue197: TfieldValueNode;
fieldValue198: TfieldValueNode;
ComposedShader199: TComposedShaderNode;
ProtoInstance200: TProtoInstanceNode;
fieldValue201: TfieldValueNode;
fieldValue202: TfieldValueNode;
fieldValue203: TfieldValueNode;
fieldValue204: TfieldValueNode;
fieldValue205: TfieldValueNode;
fieldValue206: TfieldValueNode;
fieldValue207: TfieldValueNode;
ComposedShader208: TComposedShaderNode;
ProtoInstance209: TProtoInstanceNode;
fieldValue210: TfieldValueNode;
fieldValue211: TfieldValueNode;
fieldValue212: TfieldValueNode;
fieldValue213: TfieldValueNode;
fieldValue214: TfieldValueNode;
fieldValue215: TfieldValueNode;
fieldValue216: TfieldValueNode;
ComposedShader217: TComposedShaderNode;
ProtoInstance218: TProtoInstanceNode;
fieldValue219: TfieldValueNode;
fieldValue220: TfieldValueNode;
fieldValue221: TfieldValueNode;
fieldValue222: TfieldValueNode;
fieldValue223: TfieldValueNode;
fieldValue224: TfieldValueNode;
fieldValue225: TfieldValueNode;
ComposedShader226: TComposedShaderNode;
Layout227: TLayoutNode;
Viewport228: TViewportNode;
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
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Components['DIS'] := 2;
{ <component name='Shape' level='4'></component> }
{ Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L }
X3D0.Meta['title'] := 'bumpyfreewrljsonverse.x3d';
X3D0.Meta['description'] := '*enter description here, short-sentence summaries preferred*';
X3D0.Meta['creator'] := 'Doug Sanden, Christoph Valentin, John Carlson';
X3D0.Meta['translator'] := '*if manually translating VRML-to-X3D, enter name of person translating here*';
X3D0.Meta['created'] := '*enter date of initial version here*';
X3D0.Meta['translated'] := '*enter date of translation here*';
X3D0.Meta['modified'] := '*enter date of latest revision here*';
X3D0.Meta['version'] := '*enter version here, if any*';
X3D0.Meta['reference'] := '*enter reference citation or relative/online url here*';
X3D0.Meta['reference'] := '*enter additional url/bibliographic reference information here*';
X3D0.Meta['requires'] := '*enter reference resource here if required to support function, delivery, or coherence of content*';
X3D0.Meta['rights'] := '*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024';
X3D0.Meta['drawing'] := '*enter drawing filename/url here*';
X3D0.Meta['MovingImage'] := '*enter movie filename/url here*';
X3D0.Meta['photo'] := '*enter photo filename/url here*';
X3D0.Meta['subject'] := '*enter subject keywords here*';
X3D0.Meta['accessRights'] := '*enter permission statements or url here*';
X3D0.Meta['identifier'] := '*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*';
X3D0.Meta['generator'] := 'PSPad, http://www.pspad.com/';
X3D0.Meta['license'] := 'license.html';
{ "The Flower Review (TPREV)", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their "discussion about the teapot" }
Group31 := TGroupNode.Create;
{ basic nodes, which might be present in any scene }
NavigationInfo32 := TNavigationInfoNode.Create;
NavigationInfo32.SetType(['EXAMINE']);
NavigationInfo32.SetAvatarSize([0.25,1.75,0.75]);
{ .AddChildren }
Group31.AddChildren([NavigationInfo32]);
DirectionalLight33 := TDirectionalLightNode.Create;
DirectionalLight33.AmbientIntensity := 0.2;
DirectionalLight33.Direction := Vector3(0,-1,0);
{ .AddChildren }
Group31.AddChildren([DirectionalLight33]);
DirectionalLight34 := TDirectionalLightNode.Create;
DirectionalLight34.AmbientIntensity := 0.2;
DirectionalLight34.Direction := Vector3(-1,-0.1,-1);
{ .AddChildren }
Group31.AddChildren([DirectionalLight34]);
Viewpoint35 := TViewpointNode.Create;
Viewpoint35.Description := 'My Overview';
Viewpoint35.FieldOfView := 1.570796;
Viewpoint35.Position := Vector3(0,1.75,60);
{ .AddChildren }
Group31.AddChildren([Viewpoint35]);
{ LayerSet with two layers, navigation happens in layer 1 }
LayerSet36 := TLayerSetNode.Create;
LayerSet36.ActiveLayer := 1;
LayerSet36.SetOrder([1,2]);
{ the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)" }
{ the second layer contains the sliders that are moved with the user's display like a HUD (heads up display) }
Layer37 := TLayerNode.Create;
Layer37.Pickable := True;
Layer37.SetObjectType(['ALL']);
{ this group contains the red/green/blue 3D crosshair }
Group38 := TGroupNode.Create;
{ Arrow X }
Transform39 := TTransformNode.Create;
Transform39.Translation := Vector3(25,0,0);
Transform39.Rotation := Vector4(0,0,-1,1.57);
Shape40 := TShapeNode.Create;
Cylinder41 := TCylinderNode.Create;
Cylinder41.Radius := 0.35;
Cylinder41.Height := 50;
{ .SetGeometry }
Shape40.Geometry := Cylinder41;
Appearance42 := TAppearanceNode.Create;
Material43 := TMaterialNode.Create;
Material43.DiffuseColor := Vector3(1,0,0);
Material43.EmissiveColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance42.Material := Material43;
{ .SetAppearance }
Shape40.Appearance := Appearance42;
{ .AddChild }
Transform39.AddChildren([Shape40]);
{ .AddChildren }
Group38.AddChildren([Transform39]);
Transform44 := TTransformNode.Create;
Transform44.Translation := Vector3(50,0,0);
Transform44.Rotation := Vector4(0,0,-1,1.57);
Shape45 := TShapeNode.Create;
Cone46 := TConeNode.Create;
Cone46.BottomRadius := 0.8;
Cone46.Height := 3;
{ .SetGeometry }
Shape45.Geometry := Cone46;
Appearance47 := TAppearanceNode.Create;
Material48 := TMaterialNode.Create;
Material48 := Material43;
{ .SetMaterial }
Appearance47.Material := Material48;
{ .SetAppearance }
Shape45.Appearance := Appearance47;
{ .AddChild }
Transform44.AddChildren([Shape45]);
{ .AddChildren }
Group38.AddChildren([Transform44]);
{ Arrow Y }
Transform49 := TTransformNode.Create;
Transform49.Translation := Vector3(0,25,0);
Shape50 := TShapeNode.Create;
Cylinder51 := TCylinderNode.Create;
Cylinder51 := Cylinder41;
{ .SetGeometry }
Shape50.Geometry := Cylinder51;
Appearance52 := TAppearanceNode.Create;
Material53 := TMaterialNode.Create;
Material53.DiffuseColor := Vector3(0,1,0);
Material53.EmissiveColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance52.Material := Material53;
{ .SetAppearance }
Shape50.Appearance := Appearance52;
{ .AddChild }
Transform49.AddChildren([Shape50]);
{ .AddChildren }
Group38.AddChildren([Transform49]);
Transform54 := TTransformNode.Create;
Transform54.Translation := Vector3(0,50,0);
Shape55 := TShapeNode.Create;
Cone56 := TConeNode.Create;
Cone56 := Cone46;
{ .SetGeometry }
Shape55.Geometry := Cone56;
Appearance57 := TAppearanceNode.Create;
Material58 := TMaterialNode.Create;
Material58 := Material53;
{ .SetMaterial }
Appearance57.Material := Material58;
{ .SetAppearance }
Shape55.Appearance := Appearance57;
{ .AddChild }
Transform54.AddChildren([Shape55]);
{ .AddChildren }
Group38.AddChildren([Transform54]);
{ Arrow Z }
Transform59 := TTransformNode.Create;
Transform59.Translation := Vector3(0,0,25);
Transform59.Rotation := Vector4(1,0,0,1.57);
Shape60 := TShapeNode.Create;
Cylinder61 := TCylinderNode.Create;
Cylinder61 := Cylinder41;
{ .SetGeometry }
Shape60.Geometry := Cylinder61;
Appearance62 := TAppearanceNode.Create;
Material63 := TMaterialNode.Create;
Material63.DiffuseColor := Vector3(0,0,1);
Material63.EmissiveColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance62.Material := Material63;
{ .SetAppearance }
Shape60.Appearance := Appearance62;
{ .AddChild }
Transform59.AddChildren([Shape60]);
{ .AddChildren }
Group38.AddChildren([Transform59]);
Transform64 := TTransformNode.Create;
Transform64.Translation := Vector3(0,0,50);
Transform64.Rotation := Vector4(1,0,0,1.57);
Shape65 := TShapeNode.Create;
Cone66 := TConeNode.Create;
Cone66 := Cone46;
{ .SetGeometry }
Shape65.Geometry := Cone66;
Appearance67 := TAppearanceNode.Create;
Material68 := TMaterialNode.Create;
Material68 := Material63;
{ .SetMaterial }
Appearance67.Material := Material68;
{ .SetAppearance }
Shape65.Appearance := Appearance67;
{ .AddChild }
Transform64.AddChildren([Shape65]);
{ .AddChildren }
Group38.AddChildren([Transform64]);
{ .AddChildren }
Layer37.AddChildren([Group38]);
{ the model that is being reviewed by the users of this scene }
Transform69 := TTransformNode.Create;
{ <Inline DEF="Flower" url='"bumpyfreewrl.x3d"' /> }
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background70 := TBackgroundNode.Create;
Background70.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background70.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background70.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background70.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background70.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background70.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Transform69.AddChildren([Background70]);
Transform71 := TTransformNode.Create;
Shape72 := TShapeNode.Create;
{ <Sphere radius='40'></Sphere> }
IndexedFaceSet73 := TIndexedFaceSetNode.Create;
IndexedFaceSet73.Convex := False;
Coordinate74 := TCoordinateNode.Create;
{ .SetCoord }
IndexedFaceSet73.Coord := Coordinate74;
{ .SetGeometry }
Shape72.Geometry := IndexedFaceSet73;
Appearance75 := TAppearanceNode.Create;
Material76 := TMaterialNode.Create;
Material76.DiffuseColor := Vector3(0.7,0.7,0.7);
Material76.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance75.Material := Material76;
ComposedCubeMapTexture77 := TComposedCubeMapTextureNode.Create;
ImageTexture78 := TImageTextureNode.Create;
ImageTexture78.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture77.BackTexture := ImageTexture78;
ImageTexture79 := TImageTextureNode.Create;
ImageTexture79.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture77.BottomTexture := ImageTexture79;
ImageTexture80 := TImageTextureNode.Create;
ImageTexture80.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture77.FrontTexture := ImageTexture80;
ImageTexture81 := TImageTextureNode.Create;
ImageTexture81.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture77.LeftTexture := ImageTexture81;
ImageTexture82 := TImageTextureNode.Create;
ImageTexture82.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture77.RightTexture := ImageTexture82;
ImageTexture83 := TImageTextureNode.Create;
ImageTexture83.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture77.TopTexture := ImageTexture83;
{ .SetTexture }
Appearance75.Texture := ComposedCubeMapTexture77;
ComposedShader84 := TComposedShaderNode.Create;
ComposedShader84.Language := 'GLSL';
field85 := TfieldNode.Create;
field85.NameField := 'chromaticDispertion';
field85.AccessType := 'inputOnly';
field85.Type := 'SFVec3f';
field85.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader84.Field := field85;
field86 := TfieldNode.Create;
field86.NameField := 'fw_textureCoordGenType';
field86.AccessType := 'inputOnly';
field86.Type := 'SFInt32';
field86.Value := '0';
{ .AddField }
ComposedShader84.Field := field86;
field87 := TfieldNode.Create;
field87.NameField := 'bias';
field87.Type := 'SFFloat';
field87.AccessType := 'inputOnly';
field87.Value := '0.5';
{ .AddField }
ComposedShader84.Field := field87;
field88 := TfieldNode.Create;
field88.NameField := 'scale';
field88.Type := 'SFFloat';
field88.AccessType := 'inputOnly';
field88.Value := '0.5';
{ .AddField }
ComposedShader84.Field := field88;
field89 := TfieldNode.Create;
field89.NameField := 'power';
field89.Type := 'SFFloat';
field89.AccessType := 'inputOnly';
field89.Value := '2';
{ .AddField }
ComposedShader84.Field := field89;
field90 := TfieldNode.Create;
field90.NameField := 'a';
field90.Type := 'SFFloat';
field90.AccessType := 'inputOutput';
field90.Value := '15';
{ .AddField }
ComposedShader84.Field := field90;
field91 := TfieldNode.Create;
field91.NameField := 'b';
field91.Type := 'SFFloat';
field91.AccessType := 'inputOutput';
field91.Value := '5';
{ .AddField }
ComposedShader84.Field := field91;
field92 := TfieldNode.Create;
field92.NameField := 'c';
field92.Type := 'SFFloat';
field92.AccessType := 'inputOutput';
field92.Value := '5';
{ .AddField }
ComposedShader84.Field := field92;
field93 := TfieldNode.Create;
field93.NameField := 'd';
field93.Type := 'SFFloat';
field93.AccessType := 'inputOutput';
field93.Value := '5';
{ .AddField }
ComposedShader84.Field := field93;
field94 := TfieldNode.Create;
field94.NameField := 'tdelta';
field94.Type := 'SFFloat';
field94.AccessType := 'inputOutput';
field94.Value := '0';
{ .AddField }
ComposedShader84.Field := field94;
field95 := TfieldNode.Create;
field95.NameField := 'pdelta';
field95.Type := 'SFFloat';
field95.AccessType := 'inputOutput';
field95.Value := '0';
{ .AddField }
ComposedShader84.Field := field95;
ShaderPart96 := TShaderPartNode.Create;
ShaderPart96.SetUrl(['../shaders/freewrl_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs']);
ShaderPart96.Type := 'VERTEX';
{ .AddParts }
ComposedShader84.Parts := ShaderPart96;
ShaderPart97 := TShaderPartNode.Create;
ShaderPart97.SetUrl(['../shaders/freewrl.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs']);
ShaderPart97.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader84.Parts := ShaderPart97;
{ TO CONVERT TO A SPHERE <ShaderPart url='"../shaders/freewrl.vs"' type="VERTEX" containerField='parts'></ShaderPart> <ShaderPart url='"../shaders/freewrl_bubbles.fs"' containerField='parts' type='FRAGMENT'></ShaderPart> }
{ .AddShaders }
Appearance75.Shaders := ComposedShader84;
{ .SetAppearance }
Shape72.Appearance := Appearance75;
{ .AddChild }
Transform71.AddChildren([Shape72]);
{ .AddChildren }
Transform69.AddChildren([Transform71]);
{ .AddChildren }
Layer37.AddChildren([Transform69]);
Script98 := TScriptNode.Create;
field99 := TfieldNode.Create;
field99.NameField := 'coordinates';
field99.AccessType := 'inputOutput';
field99.Type := 'MFVec3f';
{ .AddField }
Script98.Field := field99;
field100 := TfieldNode.Create;
field100.NameField := 'coordIndexes';
field100.AccessType := 'outputOnly';
field100.Type := 'MFInt32';
{ .AddField }
Script98.Field := field100;
field101 := TfieldNode.Create;
field101.NameField := 'a';
field101.Type := 'SFFloat';
field101.AccessType := 'inputOutput';
field101.Value := '10';
{ .AddField }
Script98.Field := field101;
field102 := TfieldNode.Create;
field102.NameField := 'b';
field102.Type := 'SFFloat';
field102.AccessType := 'inputOutput';
field102.Value := '10';
{ .AddField }
Script98.Field := field102;
field103 := TfieldNode.Create;
field103.NameField := 'c';
field103.Type := 'SFFloat';
field103.AccessType := 'inputOutput';
field103.Value := '2';
{ .AddField }
Script98.Field := field103;
field104 := TfieldNode.Create;
field104.NameField := 'd';
field104.Type := 'SFFloat';
field104.AccessType := 'inputOutput';
field104.Value := '2';
{ .AddField }
Script98.Field := field104;
field105 := TfieldNode.Create;
field105.NameField := 'pdelta';
field105.Type := 'SFFloat';
field105.AccessType := 'inputOutput';
field105.Value := '0';
{ .AddField }
Script98.Field := field105;
field106 := TfieldNode.Create;
field106.NameField := 'tdelta';
field106.Type := 'SFFloat';
field106.AccessType := 'inputOutput';
field106.Value := '0';
{ .AddField }
Script98.Field := field106;

Script98.SetSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = new MFVec3f();\n"+
"     var vecCount = 0;\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"		crds[vecCount] = new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		);\n"+
"		vecCount++;\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = crds;\n"+
"     // coordinates = new MFVec3f(...crds);\n"+
"\n"+
"\n"+
"     var cis = new MFInt32();\n"+
"     var intCount = 0;\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis[intCount++] = i*resolution+j;\n"+
"	     cis[intCount++] = i*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j;\n"+
"	     cis[intCount++] = -1;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = cis;\n"+
"    // coordIndexes = new MFInt32(...cis);\n"+
"}''');
{ .AddChildren }
Layer37.AddChildren([Script98]);
Layer37.AddRoute(Script98.FdCoordindexes, IndexedFaceSet73.EventSet_coordindex);
{ .AddX3DRoute }
Layer37.AddRoute(Script98.FdCoordinates, Coordinate74.EventSet_point);
{ .AddX3DRoute }
{ DIS multiuser facilities }
DISEntityManager109 := TDISEntityManagerNode.Create;
DISEntityTypeMapping110 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping110.Category := 77;
DISEntityTypeMapping110.Specific := 1;
DISEntityTypeMapping110.SetUrl(['../data/Gramps8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d']);
{ .AddChildren }
DISEntityManager109.AddChildren([DISEntityTypeMapping110]);
DISEntityTypeMapping111 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping111.Category := 77;
DISEntityTypeMapping111.Specific := 2;
DISEntityTypeMapping111.SetUrl(['../data/Leif8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d']);
{ .AddChildren }
DISEntityManager109.AddChildren([DISEntityTypeMapping111]);
DISEntityTypeMapping112 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping112.Category := 77;
DISEntityTypeMapping112.Specific := 3;
DISEntityTypeMapping112.SetUrl(['../data/Lily8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d']);
{ .AddChildren }
DISEntityManager109.AddChildren([DISEntityTypeMapping112]);
DISEntityTypeMapping113 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping113.Category := 77;
DISEntityTypeMapping113.Specific := 4;
DISEntityTypeMapping113.SetUrl(['../data/Tufani8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d']);
{ .AddChildren }
DISEntityManager109.AddChildren([DISEntityTypeMapping113]);
{ .AddChildren }
Layer37.AddChildren([DISEntityManager109]);
Collision114 := TCollisionNode.Create;
Collision114.Enabled := False;
Group115 := TGroupNode.Create;
{ .SetProxy }
Collision114.Proxy := Group115;
{ .AddChildren }
Layer37.AddChildren([Collision114]);
Layer37.AddRoute(DISEntityManager109.FdAddedentities, Group115.FdAddchildren);
{ .AddX3DRoute }
Layer37.AddRoute(DISEntityManager109.FdRemovedentities, Group115.FdRemovechildren);
{ .AddX3DRoute }
{ .AddLayers }
LayerSet36.Layers := Layer37;
LayoutLayer118 := TLayoutLayerNode.Create;
LayoutLayer118.Pickable := True;
LayoutLayer118.SetObjectType(['ALL']);
{ positioning the LayoutLayer }
{ clipping the LayoutLayer }
{ the content (children) of the LayoutLayer }
{ first, the slider for scaling the model }
Transform119 := TTransformNode.Create;
Transform119.Translation := Vector3(0,0,-3);
Shape120 := TShapeNode.Create;
Appearance121 := TAppearanceNode.Create;
Material122 := TMaterialNode.Create;
Material122.DiffuseColor := Vector3(0,0,0);
Material122.Transparency := 0.7;
{ .SetMaterial }
Appearance121.Material := Material122;
{ .SetAppearance }
Shape120.Appearance := Appearance121;
Box123 := TBoxNode.Create;
Box123.Size := Vector3(100,100,0.02);
{ .SetGeometry }
Shape120.Geometry := Box123;
{ .AddChild }
Transform119.AddChildren([Shape120]);
{ .AddChildren }
LayoutLayer118.AddChildren([Transform119]);
Transform124 := TTransformNode.Create;
Transform125 := TTransformNode.Create;
Transform125.Translation := Vector3(0,0,-20);
Shape126 := TShapeNode.Create;
Text127 := TTextNode.Create;
Text127.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle128 := TFontStyleNode.Create;
FontStyle128.Size := 0.09;
{ .SetFontStyle }
Text127.FontStyle := FontStyle128;
{ .SetGeometry }
Shape126.Geometry := Text127;
Appearance129 := TAppearanceNode.Create;
Material130 := TMaterialNode.Create;
Material130.DiffuseColor := Vector3(1,1,0);
{ .SetMaterial }
Appearance129.Material := Material130;
{ .SetAppearance }
Shape126.Appearance := Appearance129;
{ .AddChild }
Transform125.AddChildren([Shape126]);
{ .AddChildren }
Transform124.AddChildren([Transform125]);
{ .AddChildren }
LayoutLayer118.AddChildren([Transform124]);
ProtoDeclare131 := TProtoDeclareNode.Create;
ProtoDeclare131.NameField := 'SliderProto';
ProtoInterface132 := TProtoInterfaceNode.Create;
field133 := TfieldNode.Create;
field133.NameField := 'sliderTranslation';
field133.AccessType := 'inputOutput';
field133.Type := 'SFVec3f';
field133.Value := '0 0.7 0';
{ .AddField }
ProtoInterface132.Field := field133;
field134 := TfieldNode.Create;
field134.NameField := 'transformTranslation';
field134.AccessType := 'inputOutput';
field134.Type := 'SFVec3f';
field134.Value := '0 0 0.1';
{ .AddField }
ProtoInterface132.Field := field134;
field135 := TfieldNode.Create;
field135.NameField := 'sensorTranslation';
field135.AccessType := 'inputOutput';
field135.Type := 'SFVec3f';
field135.Value := '0 0 0';
{ .AddField }
ProtoInterface132.Field := field135;
field136 := TfieldNode.Create;
field136.NameField := 'textString';
field136.AccessType := 'inputOutput';
field136.Type := 'MFString';
field136.Value := '\"a=\"';
{ .AddField }
ProtoInterface132.Field := field136;
field137 := TfieldNode.Create;
field137.NameField := 'parameterScale';
field137.AccessType := 'inputOutput';
field137.Type := 'SFFloat';
field137.Value := '30';
{ .AddField }
ProtoInterface132.Field := field137;
field138 := TfieldNode.Create;
field138.NameField := 'parameterName';
field138.AccessType := 'inputOutput';
field138.Type := 'SFString';
field138.Value := 'a';
{ .AddField }
ProtoInterface132.Field := field138;
field139 := TfieldNode.Create;
field139.NameField := 'shaderNode';
field139.AccessType := 'inputOutput';
field139.Type := 'SFNode';
{ .AddField }
ProtoInterface132.Field := field139;
{ .SetProtoInterface }
ProtoDeclare131.ProtoInterface := ProtoInterface132;
ProtoBody140 := TProtoBodyNode.Create;
Group141 := TGroupNode.Create;
Transform142 := TTransformNode.Create;
Transform142.Translation := Vector3(0,0.7,0);
IS143 := TISNode.Create;
connect144 := TconnectNode.Create;
connect144.NodeField := 'translation';
connect144.ProtoField := 'sliderTranslation';
{ .AddConnect }
IS143.Connect := connect144;
{ .SetIS }
Transform142.IS := IS143;
Transform145 := TTransformNode.Create;
Transform145.Translation := Vector3(0,0,0.1);
IS146 := TISNode.Create;
connect147 := TconnectNode.Create;
connect147.NodeField := 'translation';
connect147.ProtoField := 'sensorTranslation';
{ .AddConnect }
IS146.Connect := connect147;
{ .SetIS }
Transform145.IS := IS146;
PlaneSensor148 := TPlaneSensorNode.Create;
PlaneSensor148.MaxPosition := Vector2(1,0);
{ .AddChildren }
Transform145.AddChildren([PlaneSensor148]);
Transform149 := TTransformNode.Create;
Transform149.Translation := Vector3(0,0,0);
TouchSensor150 := TTouchSensorNode.Create;
{ .AddChildren }
Transform149.AddChildren([TouchSensor150]);
{ .AddChildren }
Transform145.AddChildren([Transform149]);
Transform151 := TTransformNode.Create;
Shape152 := TShapeNode.Create;
Text153 := TTextNode.Create;
Text153.SetText(['a=']);
IS154 := TISNode.Create;
connect155 := TconnectNode.Create;
connect155.NodeField := 'string';
connect155.ProtoField := 'textString';
{ .AddConnect }
IS154.Connect := connect155;
{ .SetIS }
Text153.IS := IS154;
FontStyle156 := TFontStyleNode.Create;
FontStyle156.Size := 0.23;
{ .SetFontStyle }
Text153.FontStyle := FontStyle156;
{ .SetGeometry }
Shape152.Geometry := Text153;
Appearance157 := TAppearanceNode.Create;
Material158 := TMaterialNode.Create;
{ .SetMaterial }
Appearance157.Material := Material158;
{ .SetAppearance }
Shape152.Appearance := Appearance157;
{ .AddChild }
Transform151.AddChildren([Shape152]);
{ .AddChildren }
Transform145.AddChildren([Transform151]);
{ .AddChildren }
Transform142.AddChildren([Transform145]);
{ .AddChildren }
Group141.AddChildren([Transform142]);
Script159 := TScriptNode.Create;
Script159.DirectOutput := True;
Script159.MustEvaluate := True;
field160 := TfieldNode.Create;
field160.NameField := 'protoScale';
field160.AccessType := 'inputOutput';
field160.Type := 'SFFloat';
field160.Value := '30';
{ .AddField }
Script159.Field := field160;
field161 := TfieldNode.Create;
field161.NameField := 'protoParameterName';
field161.AccessType := 'inputOutput';
field161.Type := 'SFString';
field161.Value := 'a';
{ .AddField }
Script159.Field := field161;
field162 := TfieldNode.Create;
field162.NameField := 'shader';
field162.AccessType := 'inputOutput';
field162.Type := 'SFNode';
{ .AddField }
Script159.Field := field162;
field163 := TfieldNode.Create;
field163.NameField := 'newTranslation';
field163.AccessType := 'inputOnly';
field163.Type := 'SFVec3f';
field163.Value := '1 1 1';
{ .AddField }
Script159.Field := field163;
field164 := TfieldNode.Create;
field164.NameField := 'protoValue_changed';
field164.AccessType := 'outputOnly';
field164.Type := 'SFFloat';
field164.Value := '1';
{ .AddField }
Script159.Field := field164;
field165 := TfieldNode.Create;
field165.NameField := 'protoText_changed';
field165.AccessType := 'outputOnly';
field165.Type := 'MFString';
field165.Value := '\"1.0\"';
{ .AddField }
Script159.Field := field165;
IS166 := TISNode.Create;
connect167 := TconnectNode.Create;
connect167.NodeField := 'protoScale';
connect167.ProtoField := 'parameterScale';
{ .AddConnect }
IS166.Connect := connect167;
connect168 := TconnectNode.Create;
connect168.NodeField := 'protoParameterName';
connect168.ProtoField := 'parameterName';
{ .AddConnect }
IS166.Connect := connect168;
connect169 := TconnectNode.Create;
connect169.NodeField := 'shader';
connect169.ProtoField := 'shaderNode';
{ .AddConnect }
IS166.Connect := connect169;
{ .SetIS }
Script159.IS := IS166;

Script159.SetSourceCode('''ecmascript:\n"+
"const newTranslation = function(Value) {\n"+
"	'use strict';\n"+
"	protoValue_changed = Value.x * protoScale;\n"+
"	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));\n"+
"\n"+
"        var orientation = Value.x;\n"+
"\n"+
"        var ps = Browser.currentScene.getNamedNode(\"protoSensor\");\n"+
"        var t = Browser.currentScene.getNamedNode(\"protoTransform\");\n"+
"        var txt = Browser.currentScene.getNamedNode(\"protoText\");\n"+
"        if (shader) {\n"+
"            shader.getField(protoParameterName).setValue(orientation * protoScale);\n"+
"        }\n"+
"        if (txt) {\n"+
"            var stringField = txt.getField(\"string\");\n"+
"            var label = protoParameterName;\n"+
"            stringField.setValue(new MFString(label+\"=\"+(orientation * protoScale).toFixed(2)));\n"+
"        }\n"+
"        if (ps) {\n"+
"            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);\n"+
"        }\n"+
"        if (t) {\n"+
"            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);\n"+
"        }\n"+
"}''');
{ .AddChildren }
Group141.AddChildren([Script159]);
Group141.AddRoute(PlaneSensor148.EventTranslation_changed, Transform145.FdTranslation);
{ .AddX3DRoute }
Group141.AddRoute(PlaneSensor148.EventTranslation_changed, Script159.FdNewtranslation);
{ .AddX3DRoute }
Group141.AddRoute(Script159.EventPrototext_changed, Text153.FdString);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody140.AddChildren([Group141]);
{ .SetProtoBody }
ProtoDeclare131.ProtoBody := ProtoBody140;
{ .AddChildren }
LayoutLayer118.AddChildren([ProtoDeclare131]);
ProtoInstance173 := TProtoInstanceNode.Create;
ProtoInstance173.NameField := 'SliderProto';
fieldValue174 := TfieldValueNode.Create;
fieldValue174.NameField := 'sliderTranslation';
fieldValue174.Value := '0 0.7 0';
{ .AddFieldValue }
ProtoInstance173.FieldValue := fieldValue174;
fieldValue175 := TfieldValueNode.Create;
fieldValue175.NameField := 'transformTranslation';
fieldValue175.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance173.FieldValue := fieldValue175;
fieldValue176 := TfieldValueNode.Create;
fieldValue176.NameField := 'sensorTranslation';
fieldValue176.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance173.FieldValue := fieldValue176;
fieldValue177 := TfieldValueNode.Create;
fieldValue177.NameField := 'textString';
fieldValue177.Value := '\"a=\"';
{ .AddFieldValue }
ProtoInstance173.FieldValue := fieldValue177;
fieldValue178 := TfieldValueNode.Create;
fieldValue178.NameField := 'parameterScale';
fieldValue178.Value := '30';
{ .AddFieldValue }
ProtoInstance173.FieldValue := fieldValue178;
fieldValue179 := TfieldValueNode.Create;
fieldValue179.NameField := 'parameterName';
fieldValue179.Value := 'a';
{ .AddFieldValue }
ProtoInstance173.FieldValue := fieldValue179;
fieldValue180 := TfieldValueNode.Create;
fieldValue180.NameField := 'shaderNode';
ComposedShader181 := TComposedShaderNode.Create;
ComposedShader181 := ComposedShader84;
{ .AddChildren }
fieldValue180.AddChildren([ComposedShader181]);
{ .AddFieldValue }
ProtoInstance173.FieldValue := fieldValue180;
{ .AddChildren }
LayoutLayer118.AddChildren([ProtoInstance173]);
ProtoInstance182 := TProtoInstanceNode.Create;
ProtoInstance182.NameField := 'SliderProto';
fieldValue183 := TfieldValueNode.Create;
fieldValue183.NameField := 'sliderTranslation';
fieldValue183.Value := '0 0.4 0';
{ .AddFieldValue }
ProtoInstance182.FieldValue := fieldValue183;
fieldValue184 := TfieldValueNode.Create;
fieldValue184.NameField := 'transformTranslation';
fieldValue184.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance182.FieldValue := fieldValue184;
fieldValue185 := TfieldValueNode.Create;
fieldValue185.NameField := 'sensorTranslation';
fieldValue185.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance182.FieldValue := fieldValue185;
fieldValue186 := TfieldValueNode.Create;
fieldValue186.NameField := 'textString';
fieldValue186.Value := '\"b=\"';
{ .AddFieldValue }
ProtoInstance182.FieldValue := fieldValue186;
fieldValue187 := TfieldValueNode.Create;
fieldValue187.NameField := 'parameterScale';
fieldValue187.Value := '30';
{ .AddFieldValue }
ProtoInstance182.FieldValue := fieldValue187;
fieldValue188 := TfieldValueNode.Create;
fieldValue188.NameField := 'parameterName';
fieldValue188.Value := 'b';
{ .AddFieldValue }
ProtoInstance182.FieldValue := fieldValue188;
fieldValue189 := TfieldValueNode.Create;
fieldValue189.NameField := 'shaderNode';
ComposedShader190 := TComposedShaderNode.Create;
ComposedShader190 := ComposedShader84;
{ .AddChildren }
fieldValue189.AddChildren([ComposedShader190]);
{ .AddFieldValue }
ProtoInstance182.FieldValue := fieldValue189;
{ .AddChildren }
LayoutLayer118.AddChildren([ProtoInstance182]);
ProtoInstance191 := TProtoInstanceNode.Create;
ProtoInstance191.NameField := 'SliderProto';
fieldValue192 := TfieldValueNode.Create;
fieldValue192.NameField := 'sliderTranslation';
fieldValue192.Value := '0 0.1 0';
{ .AddFieldValue }
ProtoInstance191.FieldValue := fieldValue192;
fieldValue193 := TfieldValueNode.Create;
fieldValue193.NameField := 'transformTranslation';
fieldValue193.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance191.FieldValue := fieldValue193;
fieldValue194 := TfieldValueNode.Create;
fieldValue194.NameField := 'sensorTranslation';
fieldValue194.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance191.FieldValue := fieldValue194;
fieldValue195 := TfieldValueNode.Create;
fieldValue195.NameField := 'textString';
fieldValue195.Value := '\"c=\"';
{ .AddFieldValue }
ProtoInstance191.FieldValue := fieldValue195;
fieldValue196 := TfieldValueNode.Create;
fieldValue196.NameField := 'parameterScale';
fieldValue196.Value := '20';
{ .AddFieldValue }
ProtoInstance191.FieldValue := fieldValue196;
fieldValue197 := TfieldValueNode.Create;
fieldValue197.NameField := 'parameterName';
fieldValue197.Value := 'c';
{ .AddFieldValue }
ProtoInstance191.FieldValue := fieldValue197;
fieldValue198 := TfieldValueNode.Create;
fieldValue198.NameField := 'shaderNode';
ComposedShader199 := TComposedShaderNode.Create;
ComposedShader199 := ComposedShader84;
{ .AddChildren }
fieldValue198.AddChildren([ComposedShader199]);
{ .AddFieldValue }
ProtoInstance191.FieldValue := fieldValue198;
{ .AddChildren }
LayoutLayer118.AddChildren([ProtoInstance191]);
ProtoInstance200 := TProtoInstanceNode.Create;
ProtoInstance200.NameField := 'SliderProto';
fieldValue201 := TfieldValueNode.Create;
fieldValue201.NameField := 'sliderTranslation';
fieldValue201.Value := '0 -0.2 0';
{ .AddFieldValue }
ProtoInstance200.FieldValue := fieldValue201;
fieldValue202 := TfieldValueNode.Create;
fieldValue202.NameField := 'transformTranslation';
fieldValue202.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance200.FieldValue := fieldValue202;
fieldValue203 := TfieldValueNode.Create;
fieldValue203.NameField := 'sensorTranslation';
fieldValue203.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance200.FieldValue := fieldValue203;
fieldValue204 := TfieldValueNode.Create;
fieldValue204.NameField := 'textString';
fieldValue204.Value := '\"d=\"';
{ .AddFieldValue }
ProtoInstance200.FieldValue := fieldValue204;
fieldValue205 := TfieldValueNode.Create;
fieldValue205.NameField := 'parameterScale';
fieldValue205.Value := '20';
{ .AddFieldValue }
ProtoInstance200.FieldValue := fieldValue205;
fieldValue206 := TfieldValueNode.Create;
fieldValue206.NameField := 'parameterName';
fieldValue206.Value := 'd';
{ .AddFieldValue }
ProtoInstance200.FieldValue := fieldValue206;
fieldValue207 := TfieldValueNode.Create;
fieldValue207.NameField := 'shaderNode';
ComposedShader208 := TComposedShaderNode.Create;
ComposedShader208 := ComposedShader84;
{ .AddChildren }
fieldValue207.AddChildren([ComposedShader208]);
{ .AddFieldValue }
ProtoInstance200.FieldValue := fieldValue207;
{ .AddChildren }
LayoutLayer118.AddChildren([ProtoInstance200]);
ProtoInstance209 := TProtoInstanceNode.Create;
ProtoInstance209.NameField := 'SliderProto';
fieldValue210 := TfieldValueNode.Create;
fieldValue210.NameField := 'sliderTranslation';
fieldValue210.Value := '0 -0.5 0';
{ .AddFieldValue }
ProtoInstance209.FieldValue := fieldValue210;
fieldValue211 := TfieldValueNode.Create;
fieldValue211.NameField := 'transformTranslation';
fieldValue211.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance209.FieldValue := fieldValue211;
fieldValue212 := TfieldValueNode.Create;
fieldValue212.NameField := 'sensorTranslation';
fieldValue212.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance209.FieldValue := fieldValue212;
fieldValue213 := TfieldValueNode.Create;
fieldValue213.NameField := 'textString';
fieldValue213.Value := '\"tdelta=\"';
{ .AddFieldValue }
ProtoInstance209.FieldValue := fieldValue213;
fieldValue214 := TfieldValueNode.Create;
fieldValue214.NameField := 'parameterScale';
fieldValue214.Value := '6.28';
{ .AddFieldValue }
ProtoInstance209.FieldValue := fieldValue214;
fieldValue215 := TfieldValueNode.Create;
fieldValue215.NameField := 'parameterName';
fieldValue215.Value := 'tdelta';
{ .AddFieldValue }
ProtoInstance209.FieldValue := fieldValue215;
fieldValue216 := TfieldValueNode.Create;
fieldValue216.NameField := 'shaderNode';
ComposedShader217 := TComposedShaderNode.Create;
ComposedShader217 := ComposedShader84;
{ .AddChildren }
fieldValue216.AddChildren([ComposedShader217]);
{ .AddFieldValue }
ProtoInstance209.FieldValue := fieldValue216;
{ .AddChildren }
LayoutLayer118.AddChildren([ProtoInstance209]);
ProtoInstance218 := TProtoInstanceNode.Create;
ProtoInstance218.NameField := 'SliderProto';
fieldValue219 := TfieldValueNode.Create;
fieldValue219.NameField := 'sliderTranslation';
fieldValue219.Value := '0 -0.8 0';
{ .AddFieldValue }
ProtoInstance218.FieldValue := fieldValue219;
fieldValue220 := TfieldValueNode.Create;
fieldValue220.NameField := 'transformTranslation';
fieldValue220.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance218.FieldValue := fieldValue220;
fieldValue221 := TfieldValueNode.Create;
fieldValue221.NameField := 'sensorTranslation';
fieldValue221.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance218.FieldValue := fieldValue221;
fieldValue222 := TfieldValueNode.Create;
fieldValue222.NameField := 'textString';
fieldValue222.Value := '\"pdelta=\"';
{ .AddFieldValue }
ProtoInstance218.FieldValue := fieldValue222;
fieldValue223 := TfieldValueNode.Create;
fieldValue223.NameField := 'parameterScale';
fieldValue223.Value := '6.28';
{ .AddFieldValue }
ProtoInstance218.FieldValue := fieldValue223;
fieldValue224 := TfieldValueNode.Create;
fieldValue224.NameField := 'parameterName';
fieldValue224.Value := 'pdelta';
{ .AddFieldValue }
ProtoInstance218.FieldValue := fieldValue224;
fieldValue225 := TfieldValueNode.Create;
fieldValue225.NameField := 'shaderNode';
ComposedShader226 := TComposedShaderNode.Create;
ComposedShader226 := ComposedShader84;
{ .AddChildren }
fieldValue225.AddChildren([ComposedShader226]);
{ .AddFieldValue }
ProtoInstance218.FieldValue := fieldValue225;
{ .AddChildren }
LayoutLayer118.AddChildren([ProtoInstance218]);
Layout227 := TLayoutNode.Create;
Layout227.SetAlign(['LEFT','BOTTOM']);
Layout227.SetOffset([-0.2,0.19]);
Layout227.SetSize([0.4,0.6]);
{ .SetLayout }
LayoutLayer118.Layout := Layout227;
Viewport228 := TViewportNode.Create;
Viewport228.SetClipBoundary([0,1,0,1]);
{ .SetViewport }
LayoutLayer118.Viewport := Viewport228;
{ .AddLayers }
LayerSet36.Layers := LayoutLayer118;
{ .AddChildren }
Group31.AddChildren([LayerSet36]);
{ .AddGroup }
X3D0.AddChildren([Group31]);
Result := X3D0;
end;
