function ObliqueStrategies: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group33: TGroupNode;
WorldInfo34: TWorldInfoNode;
NavigationInfo35: TNavigationInfoNode;
Background36: TBackgroundNode;
Transform37: TTransformNode;
TouchSensor38: TTouchSensorNode;
Shape39: TShapeNode;
Text40: TTextNode;
FontStyle41: TFontStyleNode;
Appearance42: TAppearanceNode;
Material43: TMaterialNode;
Transform44: TTransformNode;
Shape45: TShapeNode;
IndexedFaceSet46: TIndexedFaceSetNode;
Coordinate47: TCoordinateNode;
Appearance48: TAppearanceNode;
Material49: TMaterialNode;
Script50: TScriptNode;
field51: TfieldNode;
field52: TfieldNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
field56: TfieldNode;
field57: TfieldNode;
field58: TfieldNode;
Transform59: TTransformNode;
Shape60: TShapeNode;
Text61: TTextNode;
FontStyle62: TFontStyleNode;
Appearance63: TAppearanceNode;
Material64: TMaterialNode;
Sound66: TSoundNode;
AudioClip67: TAudioClipNode;
Transform70: TTransformNode;
TouchSensor71: TTouchSensorNode;
Shape73: TShapeNode;
Text74: TTextNode;
FontStyle75: TFontStyleNode;
Appearance76: TAppearanceNode;
Material77: TMaterialNode;
Transform78: TTransformNode;
Shape79: TShapeNode;
IndexedFaceSet80: TIndexedFaceSetNode;
Coordinate81: TCoordinateNode;
Appearance82: TAppearanceNode;
Material83: TMaterialNode;
Transform84: TTransformNode;
TouchSensor85: TTouchSensorNode;
Shape87: TShapeNode;
Text88: TTextNode;
FontStyle89: TFontStyleNode;
Appearance90: TAppearanceNode;
Transform91: TTransformNode;
Shape92: TShapeNode;
Transform93: TTransformNode;
TouchSensor94: TTouchSensorNode;
Shape96: TShapeNode;
Text97: TTextNode;
FontStyle98: TFontStyleNode;
Appearance99: TAppearanceNode;
Transform100: TTransformNode;
Shape101: TShapeNode;
Transform102: TTransformNode;
Anchor103: TAnchorNode;
Shape105: TShapeNode;
Text106: TTextNode;
FontStyle107: TFontStyleNode;
Appearance108: TAppearanceNode;
Transform109: TTransformNode;
Shape110: TShapeNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ObliqueStrategies.x3d';
X3D0.Meta['description'] := 'Text scripting and animation example using Oblique Strategies card set by Brian Eno.';
X3D0.Meta['creator'] := 'Don Brutzman, John Kelly, Ben Cheng';
X3D0.Meta['created'] := '3 November 2013';
X3D0.Meta['modified'] := '10 November 2019';
X3D0.Meta['reference'] := 'oblique.html';
X3D0.Meta['reference'] := 'ObliqueStrategies.txt';
X3D0.Meta['reference'] := 'ObliqueStrategiesScript.js';
X3D0.Meta['reference'] := 'http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html';
X3D0.Meta['reference'] := 'http://www.eno-web.co.uk/obliques.html';
X3D0.Meta['reference'] := 'http://gothpunk.com/haiku-intro.html';
X3D0.Meta['reference'] := 'http://www.rtqe.net/ObliqueStrategies/OSintro.html';
X3D0.Meta['reference'] := 'https://en.wikipedia.org/wiki/Oblique_Strategies';
X3D0.Meta['subject'] := 'Brian Eno, Oblique Strategies';
X3D0.Meta['Image'] := 'images/ObliqueStrategiesEntryScreen.png';
X3D0.Meta['Sound'] := 'http://translate.google.com/translate_tts?tl=en&q=hello%20X3D';
X3D0.Meta['Sound'] := 'translate_tts_HelloX3D.mp3';
X3D0.Meta['Sound'] := 'translate_tts_HelloX3D.wav';
X3D0.Meta['TODO'] := 'multiliingual translation parameter';
X3D0.Meta['reference'] := 'http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech';
X3D0.Meta['reference'] := 'http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html';
X3D0.Meta['warning'] := 'under development, scene Sound/AudioClip triggering (or retrieved file format) not working';
X3D0.Meta['warning'] := 'TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];';
X3D0.Meta['reference'] := 'https://gist.github.com/alotaiba/1728771';
X3D0.Meta['reference'] := 'https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api';
X3D0.Meta['Sound'] := 'https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4';
X3D0.Meta['Sound'] := 'translate_tts_HelloX3D4.mp3';
X3D0.Meta['reference'] := 'https://cloud.google.com/translate/docs/basic/translating-text';
X3D0.Meta['identifier'] := 'https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group33 := TGroupNode.Create;
WorldInfo34 := TWorldInfoNode.Create;
WorldInfo34.Title := 'ObliqueStrategies.x3d';
{ .AddChildren }
Group33.AddChildren([WorldInfo34]);
NavigationInfo35 := TNavigationInfoNode.Create;
NavigationInfo35.SetType(['NONE']);
{ .AddChildren }
Group33.AddChildren([NavigationInfo35]);
Background36 := TBackgroundNode.Create;
Background36.SetSkyColor([Vector3(0.419608,0.427451,1)]);
{ .AddChildren }
Group33.AddChildren([Background36]);
Transform37 := TTransformNode.Create;
Transform37.Scale := Vector3(0.4,0.4,0.4);
Transform37.Translation := Vector3(0,1,0);
TouchSensor38 := TTouchSensorNode.Create;
TouchSensor38.Description := 'Select to see a new strategy';
{ .AddChildren }
Transform37.AddChildren([TouchSensor38]);
Shape39 := TShapeNode.Create;
Text40 := TTextNode.Create;
Text40.SetText(['Oblique Strategies','','(Over One Hundred Worthwhile Dilemmas)','','by Brian Eno and Peter Schmidt']);
FontStyle41 := TFontStyleNode.Create;
FontStyle41.Family := ffSans;
FontStyle41.Justify := fjMiddle;
FontStyle41.JustifyMinor := fjMiddle;
FontStyle41.Style := 'BOLD';
{ .SetFontStyle }
Text40.FontStyle := FontStyle41;
{ .SetGeometry }
Shape39.Geometry := Text40;
Appearance42 := TAppearanceNode.Create;
Material43 := TMaterialNode.Create;
Material43.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance42.Material := Material43;
{ .SetAppearance }
Shape39.Appearance := Appearance42;
{ .AddChild }
Transform37.AddChildren([Shape39]);
Transform44 := TTransformNode.Create;
Transform44.Scale := Vector3(10,3,1);
Shape45 := TShapeNode.Create;
IndexedFaceSet46 := TIndexedFaceSetNode.Create;
IndexedFaceSet46.SetCoordIndex([0,1,2,3,-1]);
IndexedFaceSet46.Solid := False;
Coordinate47 := TCoordinateNode.Create;
Coordinate47.SetPoint([Vector3(1,1,0),Vector3(1,-1,0),Vector3(-1,-1,0),Vector3(-1,1,0)]);
{ .SetCoord }
IndexedFaceSet46.Coord := Coordinate47;
{ .SetGeometry }
Shape45.Geometry := IndexedFaceSet46;
Appearance48 := TAppearanceNode.Create;
Material49 := TMaterialNode.Create;
Material49.AmbientIntensity := 0.245763;
Material49.DiffuseColor := Vector3(0.34773,0.090909,0.005289);
Material49.Shininess := 0.07;
Material49.SpecularColor := Vector3(0.336735,0.051091,0.051091);
Material49.Transparency := 0.8;
{ .SetMaterial }
Appearance48.Material := Material49;
{ .SetAppearance }
Shape45.Appearance := Appearance48;
{ .AddChild }
Transform44.AddChildren([Shape45]);
{ .AddChildren }
Transform37.AddChildren([Transform44]);
{ .AddChildren }
Group33.AddChildren([Transform37]);
Script50 := TScriptNode.Create;
Script50.SetUrl(['ObliqueStrategiesScript.js','https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js']);
{ initialize() method includes unit test to printAllStrategies() to console }
{ TODO insert field definitions here (index string_changed previous next random) and then animate! }
field51 := TfieldNode.Create;
field51.NameField := 'index';
field51.AccessType := 'initializeOnly';
field51.Appinfo := 'index for active strategy card, -1 means no selection';
field51.Type := 'SFInt32';
field51.Value := '0';
{ .AddField }
Script50.Field := field51;
field52 := TfieldNode.Create;
field52.NameField := 'string_changed';
field52.AccessType := 'outputOnly';
field52.Appinfo := 'latest strategy card value';
field52.Type := 'MFString';
{ .AddField }
Script50.Field := field52;
field53 := TfieldNode.Create;
field53.NameField := 'textToSpeechUrl';
field53.AccessType := 'outputOnly';
field53.Appinfo := '\"url to invoke Google Translate\"';
field53.Type := 'MFString';
{ .AddField }
Script50.Field := field53;
field54 := TfieldNode.Create;
field54.NameField := 'newCardTime';
field54.AccessType := 'outputOnly';
field54.Appinfo := 'activate Sound node';
field54.Type := 'SFTime';
{ .AddField }
Script50.Field := field54;
field55 := TfieldNode.Create;
field55.NameField := 'selectPreviousCard';
field55.AccessType := 'inputOnly';
field55.Type := 'SFBool';
{ .AddField }
Script50.Field := field55;
field56 := TfieldNode.Create;
field56.NameField := 'selectNextCard';
field56.AccessType := 'inputOnly';
field56.Type := 'SFBool';
{ .AddField }
Script50.Field := field56;
field57 := TfieldNode.Create;
field57.NameField := 'selectRandomCard';
field57.AccessType := 'inputOnly';
field57.Type := 'SFBool';
{ .AddField }
Script50.Field := field57;
field58 := TfieldNode.Create;
field58.NameField := 'traceEnabled';
field58.AccessType := 'initializeOnly';
field58.Appinfo := 'controls console tracing';
field58.Type := 'SFBool';
field58.Value := 'true';
{ .AddField }
Script50.Field := field58;
{ .AddChildren }
Group33.AddChildren([Script50]);
Transform59 := TTransformNode.Create;
Transform59.Scale := Vector3(0.4,0.4,0.4);
Transform59.Translation := Vector3(0,-1.5,0);
Shape60 := TShapeNode.Create;
Text61 := TTextNode.Create;
FontStyle62 := TFontStyleNode.Create;
FontStyle62.Family := ffSans;
FontStyle62.Justify := fjMiddle;
FontStyle62.JustifyMinor := fjMiddle;
FontStyle62.Style := 'BOLD';
{ .SetFontStyle }
Text61.FontStyle := FontStyle62;
{ .SetGeometry }
Shape60.Geometry := Text61;
Appearance63 := TAppearanceNode.Create;
Material64 := TMaterialNode.Create;
Material64.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance63.Material := Material64;
{ .SetAppearance }
Shape60.Appearance := Appearance63;
{ .AddChild }
Transform59.AddChildren([Shape60]);
Transform59.AddRoute(Script50.EventString_changed, Text61.FdString);
{ .AddX3DRoute }
Sound66 := TSoundNode.Create;
Sound66.MaxBack := 100;
Sound66.MaxFront := 100;
Sound66.MinBack := 20;
Sound66.MinFront := 20;
{ Make sure the sound source AudioClip is audible at the user location }
{ Not all X3D players seem to use the .mp3 }
{ &#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players }
{ %20 is space character used in uri/url encoding }
AudioClip67 := TAudioClipNode.Create;
AudioClip67.Description := 'sends strategy text google translate';
AudioClip67.SetUrl(['http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium','translate_tts_mp3FileFormatNotSupported.wav','https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav']);
{ .SetSource }
Sound66.Source := AudioClip67;
{ .AddChildren }
Transform59.AddChildren([Sound66]);
Transform59.AddRoute(Script50.FdTexttospeechurl, AudioClip67.FdUrl);
{ .AddX3DRoute }
Transform59.AddRoute(Script50.FdNewcardtime, AudioClip67.FdStarttime);
{ .AddX3DRoute }
{ .AddChildren }
Group33.AddChildren([Transform59]);
Transform70 := TTransformNode.Create;
Transform70.Scale := Vector3(0.4,0.4,0.4);
Transform70.Translation := Vector3(-3.2,2.5,0);
TouchSensor71 := TTouchSensorNode.Create;
TouchSensor71.Description := 'Select to see previous strategy';
{ .AddChildren }
Transform70.AddChildren([TouchSensor71]);
Transform70.AddRoute(TouchSensor71.FdIsactive, Script50.FdSelectpreviouscard);
{ .AddX3DRoute }
Shape73 := TShapeNode.Create;
Text74 := TTextNode.Create;
Text74.SetText(['previous']);
FontStyle75 := TFontStyleNode.Create;
FontStyle75 := FontStyle41;
{ .SetFontStyle }
Text74.FontStyle := FontStyle75;
{ .SetGeometry }
Shape73.Geometry := Text74;
Appearance76 := TAppearanceNode.Create;
Material77 := TMaterialNode.Create;
Material77.DiffuseColor := Vector3(1,0,0.6);
{ .SetMaterial }
Appearance76.Material := Material77;
{ .SetAppearance }
Shape73.Appearance := Appearance76;
{ .AddChild }
Transform70.AddChildren([Shape73]);
Transform78 := TTransformNode.Create;
Transform78.Scale := Vector3(2,0.6,1);
Shape79 := TShapeNode.Create;
{ support Selectable Text with a scalable IFS }
IndexedFaceSet80 := TIndexedFaceSetNode.Create;
IndexedFaceSet80.SetCoordIndex([0,1,2,3,-1]);
IndexedFaceSet80.Solid := False;
Coordinate81 := TCoordinateNode.Create;
Coordinate81.SetPoint([Vector3(1,1,0),Vector3(1,-1,0),Vector3(-1,-1,0),Vector3(-1,1,0)]);
{ .SetCoord }
IndexedFaceSet80.Coord := Coordinate81;
{ .SetGeometry }
Shape79.Geometry := IndexedFaceSet80;
Appearance82 := TAppearanceNode.Create;
Material83 := TMaterialNode.Create;
Material83.Transparency := 1;
{ .SetMaterial }
Appearance82.Material := Material83;
{ .SetAppearance }
Shape79.Appearance := Appearance82;
{ .AddChild }
Transform78.AddChildren([Shape79]);
{ .AddChildren }
Transform70.AddChildren([Transform78]);
{ .AddChildren }
Group33.AddChildren([Transform70]);
Transform84 := TTransformNode.Create;
Transform84.Scale := Vector3(0.4,0.4,0.4);
Transform84.Translation := Vector3(3.5,2.5,0);
TouchSensor85 := TTouchSensorNode.Create;
TouchSensor85.Description := 'Select to see next strategy';
{ .AddChildren }
Transform84.AddChildren([TouchSensor85]);
Transform84.AddRoute(TouchSensor85.FdIsactive, Script50.FdSelectnextcard);
{ .AddX3DRoute }
Shape87 := TShapeNode.Create;
Text88 := TTextNode.Create;
Text88.SetText(['next']);
FontStyle89 := TFontStyleNode.Create;
FontStyle89 := FontStyle41;
{ .SetFontStyle }
Text88.FontStyle := FontStyle89;
{ .SetGeometry }
Shape87.Geometry := Text88;
Appearance90 := TAppearanceNode.Create;
Appearance90 := Appearance76;
{ .SetAppearance }
Shape87.Appearance := Appearance90;
{ .AddChild }
Transform84.AddChildren([Shape87]);
Transform91 := TTransformNode.Create;
Transform91.Scale := Vector3(1.2,0.6,1);
Shape92 := TShapeNode.Create;
Shape92 := Shape79;
{ .AddChild }
Transform91.AddChildren([Shape92]);
{ .AddChildren }
Transform84.AddChildren([Transform91]);
{ .AddChildren }
Group33.AddChildren([Transform84]);
Transform93 := TTransformNode.Create;
Transform93.Scale := Vector3(0.4,0.4,0.4);
Transform93.Translation := Vector3(-3.3,-0.5,0);
TouchSensor94 := TTouchSensorNode.Create;
TouchSensor94 := TouchSensor38;
{ .AddChildren }
Transform93.AddChildren([TouchSensor94]);
Transform93.AddRoute(TouchSensor38.FdIsactive, Script50.FdSelectrandomcard);
{ .AddX3DRoute }
Shape96 := TShapeNode.Create;
Text97 := TTextNode.Create;
Text97.SetText(['random']);
FontStyle98 := TFontStyleNode.Create;
FontStyle98 := FontStyle41;
{ .SetFontStyle }
Text97.FontStyle := FontStyle98;
{ .SetGeometry }
Shape96.Geometry := Text97;
Appearance99 := TAppearanceNode.Create;
Appearance99 := Appearance76;
{ .SetAppearance }
Shape96.Appearance := Appearance99;
{ .AddChild }
Transform93.AddChildren([Shape96]);
Transform100 := TTransformNode.Create;
Transform100.Scale := Vector3(1.8,0.6,1);
Shape101 := TShapeNode.Create;
Shape101 := Shape79;
{ .AddChild }
Transform100.AddChildren([Shape101]);
{ .AddChildren }
Transform93.AddChildren([Transform100]);
{ .AddChildren }
Group33.AddChildren([Transform93]);
Transform102 := TTransformNode.Create;
Transform102.Scale := Vector3(0.4,0.4,0.4);
Transform102.Translation := Vector3(3.3,-0.5,0);
Anchor103 := TAnchorNode.Create;
Anchor103.Description := 'text to speech in browser';
Anchor103.SetParameter(['target=_blank']);
Anchor103.SetUrl(['http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change']);
Anchor103.AddRoute(Script50.FdTexttospeechurl, Anchor103.FdUrl);
{ .SetX3DRoute }
Shape105 := TShapeNode.Create;
Text106 := TTextNode.Create;
Text106.SetText(['speech']);
FontStyle107 := TFontStyleNode.Create;
FontStyle107 := FontStyle41;
{ .SetFontStyle }
Text106.FontStyle := FontStyle107;
{ .SetGeometry }
Shape105.Geometry := Text106;
Appearance108 := TAppearanceNode.Create;
Appearance108 := Appearance76;
{ .SetAppearance }
Shape105.Appearance := Appearance108;
{ .AddChildren }
Anchor103.AddChildren([Shape105]);
Transform109 := TTransformNode.Create;
Transform109.Scale := Vector3(1.8,0.6,1);
Shape110 := TShapeNode.Create;
Shape110 := Shape79;
{ .AddChild }
Transform109.AddChildren([Shape110]);
{ .AddChildren }
Anchor103.AddChildren([Transform109]);
{ .AddChildren }
Transform102.AddChildren([Anchor103]);
{ .AddChildren }
Group33.AddChildren([Transform102]);
{ .AddGroup }
X3D0.AddChildren([Group33]);
Result := X3D0;
end;
